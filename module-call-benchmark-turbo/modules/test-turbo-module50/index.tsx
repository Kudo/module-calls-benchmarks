const TestTurboModule50 = require("./src/NativeTestTurboModule50").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule50.queryTtiDurationAsync();
}
