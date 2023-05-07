const TestTurboModule26 = require("./src/NativeTestTurboModule26").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule26.queryTtiDurationAsync();
}
