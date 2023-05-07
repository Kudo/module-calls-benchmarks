const TestTurboModule27 = require("./src/NativeTestTurboModule27").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule27.queryTtiDurationAsync();
}
