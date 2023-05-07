import TestExpoModule95 from "./src/TestExpoModule95";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule95.queryTtiDurationAsync();
}
