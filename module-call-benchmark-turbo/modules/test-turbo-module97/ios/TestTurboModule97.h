
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule97Spec.h"

@interface TestTurboModule97 : NSObject <NativeTestTurboModule97Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule97 : NSObject <RCTBridgeModule>
#endif

@end
