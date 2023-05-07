const TestTurboModule1 = require("./src/NativeTestTurboModule1").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule1.queryTtiDurationAsync();
}
