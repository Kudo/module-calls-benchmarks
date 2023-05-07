const TestTurboModule5 = require("./src/NativeTestTurboModule5").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule5.queryTtiDurationAsync();
}
