import TestExpoModule32 from "./src/TestExpoModule32";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule32.queryTtiDurationAsync();
}
