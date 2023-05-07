const TestTurboModule12 = require("./src/NativeTestTurboModule12").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule12.queryTtiDurationAsync();
}
