
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule90Spec.h"

@interface TestTurboModule90 : NSObject <NativeTestTurboModule90Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule90 : NSObject <RCTBridgeModule>
#endif

@end
