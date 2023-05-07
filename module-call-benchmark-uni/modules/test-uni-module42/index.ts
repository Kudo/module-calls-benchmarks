import TestUniModule42 from "./src/TestUniModule42";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestUniModule42.queryTtiDurationAsync();
}
