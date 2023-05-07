
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule96Spec.h"

@interface TestTurboModule96 : NSObject <NativeTestTurboModule96Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule96 : NSObject <RCTBridgeModule>
#endif

@end
