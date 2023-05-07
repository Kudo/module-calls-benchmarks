#import <TestUniModule74/TestUniModule74.h>
#import <React/RCTBridge.h>
#import <React/RCTPerformanceLogger.h>
#import <React/RCTRootView.h>

@interface EXTestUniModule74 ()

@property (nonatomic, weak) RCTBridge *bridge;

@end

@implementation EXTestUniModule74

EX_EXPORT_MODULE(TestUniModule74);

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
  return @"TestUniModule74";
}

+ (const NSArray<Protocol *> *)exportedInterfaces {
  return @[@protocol(EXTestUniModule74Protocol)];
}

@end
