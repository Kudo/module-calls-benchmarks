const TestTurboModule84 = require("./src/NativeTestTurboModule84").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule84.queryTtiDurationAsync();
}
