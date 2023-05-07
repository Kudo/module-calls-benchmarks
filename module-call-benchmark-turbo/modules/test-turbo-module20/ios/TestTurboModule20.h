
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule20Spec.h"

@interface TestTurboModule20 : NSObject <NativeTestTurboModule20Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule20 : NSObject <RCTBridgeModule>
#endif

@end
