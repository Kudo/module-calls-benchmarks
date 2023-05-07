import TestUniModule64 from "./src/TestUniModule64";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestUniModule64.queryTtiDurationAsync();
}
