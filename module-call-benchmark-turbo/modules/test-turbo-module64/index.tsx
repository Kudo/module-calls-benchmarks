const TestTurboModule64 = require("./src/NativeTestTurboModule64").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule64.queryTtiDurationAsync();
}
