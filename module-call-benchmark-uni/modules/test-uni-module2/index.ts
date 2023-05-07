import TestUniModule2 from "./src/TestUniModule2";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestUniModule2.queryTtiDurationAsync();
}
