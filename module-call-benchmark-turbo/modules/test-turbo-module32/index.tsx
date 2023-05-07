const TestTurboModule32 = require("./src/NativeTestTurboModule32").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule32.queryTtiDurationAsync();
}
