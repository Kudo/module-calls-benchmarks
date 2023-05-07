const TestTurboModule82 = require("./src/NativeTestTurboModule82").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule82.queryTtiDurationAsync();
}
