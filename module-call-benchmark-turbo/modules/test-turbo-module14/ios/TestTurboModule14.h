
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule14Spec.h"

@interface TestTurboModule14 : NSObject <NativeTestTurboModule14Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule14 : NSObject <RCTBridgeModule>
#endif

@end
