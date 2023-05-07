const TestTurboModule86 = require("./src/NativeTestTurboModule86").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule86.queryTtiDurationAsync();
}
