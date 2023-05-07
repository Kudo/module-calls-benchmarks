
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule17Spec.h"

@interface TestTurboModule17 : NSObject <NativeTestTurboModule17Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule17 : NSObject <RCTBridgeModule>
#endif

@end
