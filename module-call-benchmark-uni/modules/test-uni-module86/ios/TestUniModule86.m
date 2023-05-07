#import <TestUniModule86/TestUniModule86.h>
#import <React/RCTBridge.h>
#import <React/RCTPerformanceLogger.h>
#import <React/RCTRootView.h>

@interface EXTestUniModule86 ()

@property (nonatomic, weak) RCTBridge *bridge;

@end

@implementation EXTestUniModule86

EX_EXPORT_MODULE(TestUniModule86);

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
  return @"TestUniModule86";
}

+ (const NSArray<Protocol *> *)exportedInterfaces {
  return @[@protocol(EXTestUniModule86Protocol)];
}

@end
