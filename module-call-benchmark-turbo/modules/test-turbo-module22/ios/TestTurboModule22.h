
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule22Spec.h"

@interface TestTurboModule22 : NSObject <NativeTestTurboModule22Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule22 : NSObject <RCTBridgeModule>
#endif

@end
