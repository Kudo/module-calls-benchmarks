#import <TestUniModule59/TestUniModule59.h>
#import <React/RCTPerformanceLogger.h>
#import <React/RCTRootView.h>

@implementation EXTestUniModule59

EX_EXPORT_MODULE(TestUniModule59);

EX_EXPORT_METHOD_AS(queryTtiDurationAsync, queryTtiDurationAsync:(EXPromiseResolveBlock)resolve rejecter:(EXPromiseRejectBlock)reject)
{
  UIViewController *rootViewController = UIApplication.sharedApplication.delegate.window.rootViewController;
  RCTRootView *rootView = (RCTRootView *)rootViewController.view;
  RCTPerformanceLogger *perfLogger = rootView.bridge.performanceLogger;
  resolve(@([perfLogger durationForTag:RCTPLTTI]));
}

@end