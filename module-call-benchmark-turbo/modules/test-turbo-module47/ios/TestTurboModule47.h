
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule47Spec.h"

@interface TestTurboModule47 : NSObject <NativeTestTurboModule47Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule47 : NSObject <RCTBridgeModule>
#endif

@end
