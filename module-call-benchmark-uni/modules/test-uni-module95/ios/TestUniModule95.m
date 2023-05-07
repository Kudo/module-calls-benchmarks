#import <TestUniModule95/TestUniModule95.h>
#import <React/RCTBridge.h>
#import <React/RCTPerformanceLogger.h>
#import <React/RCTRootView.h>

@interface EXTestUniModule95 ()

@property (nonatomic, weak) RCTBridge *bridge;

@end

@implementation EXTestUniModule95

EX_EXPORT_MODULE(TestUniModule95);

EX_EXPORT_METHOD_AS(queryTtiDurationAsync, queryTtiDurationAsync:(EXPromiseResolveBlock)resolve rejecter:(EXPromiseRejectBlock)reject)
{
  RCTPerformanceLogger *perfLogger = _bridge.performanceLogger;
  resolve(@([perfLogger durationForTag:RCTPLTTI]));
}

#pragma mark - RCTBridgeModule

- (void)setBridge:(RCTBridge *)bridge
{
  _bridge = bridge;
}

+ (NSString *)moduleName {
  return @"TestUniModule95";
}

+ (const NSArray<Protocol *> *)exportedInterfaces {
  return @[@protocol(EXTestUniModule95Protocol)];
}

@end
