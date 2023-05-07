const TestTurboModule75 = require("./src/NativeTestTurboModule75").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule75.queryTtiDurationAsync();
}
