const TestTurboModule7 = require("./src/NativeTestTurboModule7").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule7.queryTtiDurationAsync();
}
