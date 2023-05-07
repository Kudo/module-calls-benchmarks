const TestTurboModule91 = require("./src/NativeTestTurboModule91").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule91.queryTtiDurationAsync();
}
