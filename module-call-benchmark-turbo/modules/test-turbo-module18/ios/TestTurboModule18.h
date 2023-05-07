
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule18Spec.h"

@interface TestTurboModule18 : NSObject <NativeTestTurboModule18Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule18 : NSObject <RCTBridgeModule>
#endif

@end
