const TestTurboModule61 = require("./src/NativeTestTurboModule61").default;

export function queryTtiDurationAsync(): Promise<number> {
  return TestTurboModule61.queryTtiDurationAsync();
}
