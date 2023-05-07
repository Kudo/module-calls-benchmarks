
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule72Spec.h"

@interface TestTurboModule72 : NSObject <NativeTestTurboModule72Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule72 : NSObject <RCTBridgeModule>
#endif

@end
