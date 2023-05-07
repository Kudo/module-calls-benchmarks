import TestExpoModule2 from "./src/TestExpoModule2";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule2.queryTtiDurationAsync();
}
