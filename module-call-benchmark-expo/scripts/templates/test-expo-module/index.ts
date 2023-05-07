import TestExpoModule from "./src/TestExpoModule";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule.queryTtiDurationAsync();
}
