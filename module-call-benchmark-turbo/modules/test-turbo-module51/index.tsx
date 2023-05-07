const TestTurboModule51 = require("./src/NativeTestTurboModule51").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule51.queryTtiDurationAsync();
}
