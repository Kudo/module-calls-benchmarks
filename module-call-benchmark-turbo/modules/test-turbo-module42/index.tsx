const TestTurboModule42 = require("./src/NativeTestTurboModule42").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule42.queryTtiDurationAsync();
}
