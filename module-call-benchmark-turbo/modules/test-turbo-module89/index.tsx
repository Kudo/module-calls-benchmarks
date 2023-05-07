const TestTurboModule89 = require("./src/NativeTestTurboModule89").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule89.queryTtiDurationAsync();
}
