
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule9Spec.h"

@interface TestTurboModule9 : NSObject <NativeTestTurboModule9Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule9 : NSObject <RCTBridgeModule>
#endif

@end
