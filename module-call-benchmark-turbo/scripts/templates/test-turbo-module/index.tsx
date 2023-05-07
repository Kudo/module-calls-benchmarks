const TestTurboModule = require("./src/NativeTestTurboModule").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule.queryTtiDurationAsync();
}
