# Benchmarks for native modules

These are benchmark apps for different React Native native module systems:

- Expo Modules
- Turbo Modules
- Legacy Expo Modules (UniModules)

## Benchmark Results

| Test Item                   | Expo Modules | Turbo Modules | Legacy Expo Modules | Note           |
| --------------------------- | ------------ | ------------- | ------------------- | -------------- |
| pod install                 | 11s          | 31s           | 10s                 | MacBook Pro M1 |
| xcodebuild                  | 180s         | 237s          | 170s                | MacBook Pro M1 |
| TTI                         | 4ms          | 3.6ms         | 4ms                 | iPhone 11      |
| Native calls for 1000 times | 43.1ms       | 45.7ms        | 79.7ms              | iPhone 11      |

> **Note**
> All measured on Release build + New Architecture mode enabled
> The TTI and Native call time results are from average of six-time testing.

### How we measure TTI

Through the `queryTtiDurationAsync` native call, we get the TTI value from `RCTPerformanceLogger`.

For Expo Module:

```swift
    AsyncFunction("queryTtiDurationAsync") { () -> Int64 in
      guard let performanceLogger = self.appContext?.reactBridge?.performanceLogger else {
        throw Exceptions.RuntimeLost()
      }
      return performanceLogger.duration(for: .RCTPLTTI)
    }
```

For Turbo Module:

```objc
- (void)queryTtiDurationAsync:(RCTPromiseResolveBlock)resolve reject:(RCTPromiseRejectBlock)reject
{
  resolve(@([self.bridge.performanceLogger durationForTag:RCTPLTTI]));
}
```

For Legacy Expo Module:

```objc
EX_EXPORT_METHOD_AS(queryTtiDurationAsync, queryTtiDurationAsync:(EXPromiseResolveBlock)resolve rejecter:(EXPromiseRejectBlock)reject)
{
  RCTPerformanceLogger *perfLogger = _bridge.performanceLogger;
  resolve(@([perfLogger durationForTag:RCTPLTTI]));
}
```

### How we measure native call time

```jsx
async function loopCallsAsync() {
  const start = Date.now();
  for (let i = 0; i < 1000; i++) {
    await queryTtiDurationAsync();
  }
  const end = Date.now();
  setNativeCallTime(end - start);
}
```

## Apps

- `module-call-benchmark-expo` - An app with 100 Expo Modules, but we only call the first one.
- `module-call-benchmark-turbo` - An app with 100 Turbo Modules, but we only call the first one.
- `module-call-benchmark-uni` - An app with 100 Legacy Expo Modules, but we only call the first one.

To run the app, you can go into each app folder and run the following commands:

```sh
$ yarn install
$ npx expo run:ios --no-bundler --configuration Release
```

Or step by step and open in Xcode:

```sh
$ yarn install
$ npx expo prebuild -p ios --no-install
$ yarn install
$ pushd ios && rm -rf Pods build && pod install && popd
$ xed ios
# build/run the app
```
