#import "TestTurboModule90.h"
#import <React/RCTPerformanceLogger.h>

@implementation TestTurboModule90

@synthesize bridge = _bridge;

RCT_EXPORT_MODULE()

- (void)queryTtiDurationAsync:(RCTPromiseResolveBlock)resolve reject:(RCTPromiseRejectBlock)reject
{
  resolve(@([self.bridge.performanceLogger durationForTag:RCTPLTTI]));
}

// Don't compile this code when we build for the old architecture.
#ifdef RCT_NEW_ARCH_ENABLED
- (std::shared_ptr<facebook::react::TurboModule>)getTurboModule:
    (const facebook::react::ObjCTurboModule::InitParams &)params
{
    return std::make_shared<facebook::react::NativeTestTurboModule90SpecJSI>(params);
}
#endif

@end
