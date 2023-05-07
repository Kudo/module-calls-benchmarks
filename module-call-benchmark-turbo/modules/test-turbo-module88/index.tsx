const TestTurboModule88 = require("./src/NativeTestTurboModule88").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule88.queryTtiDurationAsync();
}
