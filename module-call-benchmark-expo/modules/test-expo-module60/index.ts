import TestExpoModule60 from "./src/TestExpoModule60";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule60.queryTtiDurationAsync();
}
