import TestUniModule80 from "./src/TestUniModule80";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestUniModule80.queryTtiDurationAsync();
}
