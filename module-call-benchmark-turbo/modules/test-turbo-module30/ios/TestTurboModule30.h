
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule30Spec.h"

@interface TestTurboModule30 : NSObject <NativeTestTurboModule30Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule30 : NSObject <RCTBridgeModule>
#endif

@end
