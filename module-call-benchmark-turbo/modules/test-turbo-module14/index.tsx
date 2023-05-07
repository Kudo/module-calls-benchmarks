const TestTurboModule14 = require("./src/NativeTestTurboModule14").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule14.queryTtiDurationAsync();
}
