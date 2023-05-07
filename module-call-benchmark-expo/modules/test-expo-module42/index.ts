import TestExpoModule42 from "./src/TestExpoModule42";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule42.queryTtiDurationAsync();
}
