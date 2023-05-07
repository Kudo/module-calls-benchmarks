const TestTurboModule23 = require("./src/NativeTestTurboModule23").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule23.queryTtiDurationAsync();
}
