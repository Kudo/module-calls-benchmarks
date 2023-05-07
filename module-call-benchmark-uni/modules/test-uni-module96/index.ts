import TestUniModule96 from "./src/TestUniModule96";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestUniModule96.queryTtiDurationAsync();
}
