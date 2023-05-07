
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule31Spec.h"

@interface TestTurboModule31 : NSObject <NativeTestTurboModule31Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule31 : NSObject <RCTBridgeModule>
#endif

@end
