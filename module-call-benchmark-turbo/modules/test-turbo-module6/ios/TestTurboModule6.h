
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule6Spec.h"

@interface TestTurboModule6 : NSObject <NativeTestTurboModule6Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule6 : NSObject <RCTBridgeModule>
#endif

@end
