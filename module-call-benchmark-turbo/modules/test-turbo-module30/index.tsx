const TestTurboModule30 = require("./src/NativeTestTurboModule30").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule30.queryTtiDurationAsync();
}
