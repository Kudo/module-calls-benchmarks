const TestTurboModule90 = require("./src/NativeTestTurboModule90").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule90.queryTtiDurationAsync();
}
