import TestUniModule from "./src/TestUniModule";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestUniModule.queryTtiDurationAsync();
}
