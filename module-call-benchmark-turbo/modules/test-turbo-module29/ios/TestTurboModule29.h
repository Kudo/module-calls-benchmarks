
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule29Spec.h"

@interface TestTurboModule29 : NSObject <NativeTestTurboModule29Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule29 : NSObject <RCTBridgeModule>
#endif

@end
