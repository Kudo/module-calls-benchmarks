import TestExpoModule3 from "./src/TestExpoModule3";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule3.queryTtiDurationAsync();
}
