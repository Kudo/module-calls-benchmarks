
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule46Spec.h"

@interface TestTurboModule46 : NSObject <NativeTestTurboModule46Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule46 : NSObject <RCTBridgeModule>
#endif

@end
