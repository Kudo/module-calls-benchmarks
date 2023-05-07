const TestTurboModule99 = require("./src/NativeTestTurboModule99").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule99.queryTtiDurationAsync();
}
