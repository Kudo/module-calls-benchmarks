const TestTurboModule71 = require("./src/NativeTestTurboModule71").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule71.queryTtiDurationAsync();
}
