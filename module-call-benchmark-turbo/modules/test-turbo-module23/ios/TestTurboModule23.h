
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule23Spec.h"

@interface TestTurboModule23 : NSObject <NativeTestTurboModule23Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule23 : NSObject <RCTBridgeModule>
#endif

@end
