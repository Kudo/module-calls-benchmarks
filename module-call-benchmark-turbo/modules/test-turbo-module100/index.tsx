const TestTurboModule100 = require("./src/NativeTestTurboModule100").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule100.queryTtiDurationAsync();
}
