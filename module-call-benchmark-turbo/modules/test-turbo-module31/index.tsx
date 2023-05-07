const TestTurboModule31 = require("./src/NativeTestTurboModule31").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule31.queryTtiDurationAsync();
}
