const TestTurboModule8 = require("./src/NativeTestTurboModule8").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule8.queryTtiDurationAsync();
}
