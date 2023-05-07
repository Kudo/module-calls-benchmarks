const TestTurboModule36 = require("./src/NativeTestTurboModule36").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule36.queryTtiDurationAsync();
}
