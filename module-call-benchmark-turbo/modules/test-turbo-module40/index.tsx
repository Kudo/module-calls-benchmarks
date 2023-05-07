const TestTurboModule40 = require("./src/NativeTestTurboModule40").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule40.queryTtiDurationAsync();
}
