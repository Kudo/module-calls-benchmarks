const TestTurboModule41 = require("./src/NativeTestTurboModule41").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule41.queryTtiDurationAsync();
}
