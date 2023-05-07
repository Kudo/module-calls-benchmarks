const TestTurboModule81 = require("./src/NativeTestTurboModule81").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule81.queryTtiDurationAsync();
}
