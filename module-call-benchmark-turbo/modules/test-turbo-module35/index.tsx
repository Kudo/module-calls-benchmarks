const TestTurboModule35 = require("./src/NativeTestTurboModule35").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule35.queryTtiDurationAsync();
}
