const TestTurboModule80 = require("./src/NativeTestTurboModule80").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule80.queryTtiDurationAsync();
}
