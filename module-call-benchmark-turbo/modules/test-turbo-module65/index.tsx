const TestTurboModule65 = require("./src/NativeTestTurboModule65").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule65.queryTtiDurationAsync();
}
