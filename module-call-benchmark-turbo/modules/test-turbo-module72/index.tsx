const TestTurboModule72 = require("./src/NativeTestTurboModule72").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule72.queryTtiDurationAsync();
}
