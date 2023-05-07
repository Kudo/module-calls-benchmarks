#import <TestUniModule30/TestUniModule30.h>
#import <React/RCTBridge.h>
#import <React/RCTPerformanceLogger.h>
#import <React/RCTRootView.h>

@interface EXTestUniModule30 ()

@property (nonatomic, weak) RCTBridge *bridge;

@end

@implementation EXTestUniModule30

EX_EXPORT_MODULE(TestUniModule30);

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
  return @"TestUniModule30";
}

+ (const NSArray<Protocol *> *)exportedInterfaces {
  return @[@protocol(EXTestUniModule30Protocol)];
}

@end
