const TestTurboModule6 = require("./src/NativeTestTurboModule6").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule6.queryTtiDurationAsync();
}
