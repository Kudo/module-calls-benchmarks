import TestExpoModule100 from "./src/TestExpoModule100";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule100.queryTtiDurationAsync();
}
