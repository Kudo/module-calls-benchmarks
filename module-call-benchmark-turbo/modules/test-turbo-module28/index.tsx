const TestTurboModule28 = require("./src/NativeTestTurboModule28").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule28.queryTtiDurationAsync();
}
