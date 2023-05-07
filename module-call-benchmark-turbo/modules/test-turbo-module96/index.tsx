const TestTurboModule96 = require("./src/NativeTestTurboModule96").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule96.queryTtiDurationAsync();
}
