
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule52Spec.h"

@interface TestTurboModule52 : NSObject <NativeTestTurboModule52Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule52 : NSObject <RCTBridgeModule>
#endif

@end
