
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule48Spec.h"

@interface TestTurboModule48 : NSObject <NativeTestTurboModule48Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule48 : NSObject <RCTBridgeModule>
#endif

@end
