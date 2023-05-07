const TestTurboModule92 = require("./src/NativeTestTurboModule92").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule92.queryTtiDurationAsync();
}
