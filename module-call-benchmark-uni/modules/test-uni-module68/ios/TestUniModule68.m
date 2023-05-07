#import <TestUniModule68/TestUniModule68.h>
#import <React/RCTPerformanceLogger.h>
#import <React/RCTRootView.h>

@implementation EXTestUniModule68

EX_EXPORT_MODULE(TestUniModule68);

EX_EXPORT_METHOD_AS(queryTtiDurationAsync, queryTtiDurationAsync:(EXPromiseResolveBlock)resolve rejecter:(EXPromiseRejectBlock)reject)
{
  UIViewController *rootViewController = UIApplication.sharedApplication.delegate.window.rootViewController;
  RCTRootView *rootView = (RCTRootView *)rootViewController.view;
  RCTPerformanceLogger *perfLogger = rootView.bridge.performanceLogger;
  resolve(@([perfLogger durationForTag:RCTPLTTI]));
}

@end