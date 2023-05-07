const TestTurboModule83 = require("./src/NativeTestTurboModule83").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule83.queryTtiDurationAsync();
}
