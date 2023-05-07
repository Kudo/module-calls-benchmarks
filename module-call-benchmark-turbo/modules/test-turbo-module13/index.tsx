const TestTurboModule13 = require("./src/NativeTestTurboModule13").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule13.queryTtiDurationAsync();
}
