const TestTurboModule10 = require("./src/NativeTestTurboModule10").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule10.queryTtiDurationAsync();
}
