const TestTurboModule38 = require("./src/NativeTestTurboModule38").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule38.queryTtiDurationAsync();
}
