import TestExpoModule96 from "./src/TestExpoModule96";

export async function queryTtiDurationAsync(): Promise<number> {
  return await TestExpoModule96.queryTtiDurationAsync();
}
