const TestTurboModule25 = require("./src/NativeTestTurboModule25").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule25.queryTtiDurationAsync();
}
