import TestExpoModule80 from "./src/TestExpoModule80";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule80.queryTtiDurationAsync();
}
