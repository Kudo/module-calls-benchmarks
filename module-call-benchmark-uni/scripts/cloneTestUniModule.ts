import fs from "fs/promises";
import { glob } from "glob";
import path from "path";

const TEMPLATE_NAME = "test-uni-module";
const TEMPLATE_ROOT = path.join(__dirname, "templates", TEMPLATE_NAME);
const DEST_ROOT = path.join(__dirname, "..", "modules");
const TOTAL_CLONE_NUMBER = 100;

async function getFilesAsync(): Promise<string[]> {
  return await glob("**/*", { cwd: TEMPLATE_ROOT, nodir: true });
}

function replaceContent(content: string, replaceSuffix: string): string {
  return content
    .replace(/(Test(Expo|Turbo|Uni)Module)/g, `$1${replaceSuffix}`)
    .replace(/(test-(expo|turbo|uni)-module)/g, `$1${replaceSuffix}`);
}

async function cloneFileAsync(
  srcFile: string,
  dstFile: string,
  replaceSuffix: string
) {
  const content = await fs.readFile(srcFile, "utf8");
  await fs.mkdir(path.dirname(dstFile), { recursive: true });
  await fs.writeFile(dstFile, replaceContent(content, replaceSuffix));
}

async function cloneModuleAsync(templateFiles: string[], suffix: string) {
  const dstModuleRoot = path.join(DEST_ROOT, `${TEMPLATE_NAME}${suffix}`);
  for (const file of templateFiles) {
    const srcFile = path.join(TEMPLATE_ROOT, file);
    const dstFile = path.join(dstModuleRoot, replaceContent(file, suffix));
    await cloneFileAsync(srcFile, dstFile, suffix);
  }
}

async function main() {
  const templateFiles = await getFilesAsync();
  for (let i = 1; i <= TOTAL_CLONE_NUMBER; i++) {
    await cloneModuleAsync(templateFiles, i.toString());
  }
}

main().catch((e) => {
  console.error(e);
  process.exit(1);
});
