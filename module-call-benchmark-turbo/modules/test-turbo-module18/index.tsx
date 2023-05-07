const TestTurboModule18 = require("./src/NativeTestTurboModule18").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule18.queryTtiDurationAsync();
}
