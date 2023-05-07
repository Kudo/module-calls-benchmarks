const TestTurboModule77 = require("./src/NativeTestTurboModule77").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule77.queryTtiDurationAsync();
}
