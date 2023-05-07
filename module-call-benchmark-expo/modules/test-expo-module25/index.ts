import TestExpoModule25 from "./src/TestExpoModule25";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule25.queryTtiDurationAsync();
}
