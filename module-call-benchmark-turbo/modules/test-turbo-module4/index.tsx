const TestTurboModule4 = require("./src/NativeTestTurboModule4").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule4.queryTtiDurationAsync();
}
