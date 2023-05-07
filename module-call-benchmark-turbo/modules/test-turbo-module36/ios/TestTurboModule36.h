
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule36Spec.h"

@interface TestTurboModule36 : NSObject <NativeTestTurboModule36Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule36 : NSObject <RCTBridgeModule>
#endif

@end
