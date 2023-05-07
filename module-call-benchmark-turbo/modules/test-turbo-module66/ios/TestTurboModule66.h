
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule66Spec.h"

@interface TestTurboModule66 : NSObject <NativeTestTurboModule66Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule66 : NSObject <RCTBridgeModule>
#endif

@end
