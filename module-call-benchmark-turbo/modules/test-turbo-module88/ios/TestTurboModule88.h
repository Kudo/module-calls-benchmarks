
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule88Spec.h"

@interface TestTurboModule88 : NSObject <NativeTestTurboModule88Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule88 : NSObject <RCTBridgeModule>
#endif

@end
