
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule74Spec.h"

@interface TestTurboModule74 : NSObject <NativeTestTurboModule74Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule74 : NSObject <RCTBridgeModule>
#endif

@end
