#import <TestUniModule/TestUniModule.h>
#import <React/RCTBridge.h>
#import <React/RCTPerformanceLogger.h>
#import <React/RCTRootView.h>

@interface EXTestUniModule ()

@property (nonatomic, weak) RCTBridge *bridge;

@end

@implementation EXTestUniModule

EX_EXPORT_MODULE(TestUniModule);

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
  return @"TestUniModule";
}

+ (const NSArray<Protocol *> *)exportedInterfaces {
  return @[@protocol(EXTestUniModuleProtocol)];
}

@end
