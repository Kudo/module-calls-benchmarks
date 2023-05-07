const TestTurboModule2 = require("./src/NativeTestTurboModule2").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule2.queryTtiDurationAsync();
}
