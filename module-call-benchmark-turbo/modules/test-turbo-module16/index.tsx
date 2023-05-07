const TestTurboModule16 = require("./src/NativeTestTurboModule16").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule16.queryTtiDurationAsync();
}
