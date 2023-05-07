const TestTurboModule3 = require("./src/NativeTestTurboModule3").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule3.queryTtiDurationAsync();
}
