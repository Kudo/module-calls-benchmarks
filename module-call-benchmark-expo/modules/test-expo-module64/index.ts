import TestExpoModule64 from "./src/TestExpoModule64";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule64.queryTtiDurationAsync();
}
