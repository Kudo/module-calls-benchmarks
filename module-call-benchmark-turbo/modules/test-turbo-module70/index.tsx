const TestTurboModule70 = require("./src/NativeTestTurboModule70").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule70.queryTtiDurationAsync();
}
