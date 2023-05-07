const TestTurboModule98 = require("./src/NativeTestTurboModule98").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule98.queryTtiDurationAsync();
}
