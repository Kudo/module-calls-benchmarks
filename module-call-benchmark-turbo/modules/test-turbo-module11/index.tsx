const TestTurboModule11 = require("./src/NativeTestTurboModule11").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule11.queryTtiDurationAsync();
}
