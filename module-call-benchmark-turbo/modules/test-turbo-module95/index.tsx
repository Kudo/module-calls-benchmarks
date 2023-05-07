const TestTurboModule95 = require("./src/NativeTestTurboModule95").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule95.queryTtiDurationAsync();
}
