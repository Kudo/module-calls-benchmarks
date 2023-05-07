const TestTurboModule85 = require("./src/NativeTestTurboModule85").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule85.queryTtiDurationAsync();
}
