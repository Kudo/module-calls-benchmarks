const TestTurboModule17 = require("./src/NativeTestTurboModule17").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule17.queryTtiDurationAsync();
}
