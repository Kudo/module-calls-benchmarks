const TestTurboModule15 = require("./src/NativeTestTurboModule15").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule15.queryTtiDurationAsync();
}
