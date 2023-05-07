import TestExpoModule1 from "./src/TestExpoModule1";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule1.queryTtiDurationAsync();
}
