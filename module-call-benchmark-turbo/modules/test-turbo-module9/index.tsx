const TestTurboModule9 = require("./src/NativeTestTurboModule9").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule9.queryTtiDurationAsync();
}
