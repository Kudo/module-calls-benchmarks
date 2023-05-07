const TestTurboModule60 = require("./src/NativeTestTurboModule60").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule60.queryTtiDurationAsync();
}
