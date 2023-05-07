const TestTurboModule19 = require("./src/NativeTestTurboModule19").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule19.queryTtiDurationAsync();
}
