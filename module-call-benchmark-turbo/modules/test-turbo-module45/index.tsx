const TestTurboModule45 = require("./src/NativeTestTurboModule45").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule45.queryTtiDurationAsync();
}
