const TestTurboModule22 = require("./src/NativeTestTurboModule22").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule22.queryTtiDurationAsync();
}
