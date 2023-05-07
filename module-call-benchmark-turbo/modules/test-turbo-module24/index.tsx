const TestTurboModule24 = require("./src/NativeTestTurboModule24").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule24.queryTtiDurationAsync();
}
