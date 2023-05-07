const TestTurboModule62 = require("./src/NativeTestTurboModule62").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule62.queryTtiDurationAsync();
}
