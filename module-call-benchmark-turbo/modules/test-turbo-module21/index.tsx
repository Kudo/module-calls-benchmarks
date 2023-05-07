const TestTurboModule21 = require("./src/NativeTestTurboModule21").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule21.queryTtiDurationAsync();
}
