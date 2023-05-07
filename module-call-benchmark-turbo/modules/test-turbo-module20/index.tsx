const TestTurboModule20 = require("./src/NativeTestTurboModule20").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule20.queryTtiDurationAsync();
}
