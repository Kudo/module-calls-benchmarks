import TestUniModule32 from "./src/TestUniModule32";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestUniModule32.queryTtiDurationAsync();
}
