import TestUniModule1 from "./src/TestUniModule1";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestUniModule1.queryTtiDurationAsync();
}
