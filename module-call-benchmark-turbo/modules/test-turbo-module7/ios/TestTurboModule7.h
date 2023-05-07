
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule7Spec.h"

@interface TestTurboModule7 : NSObject <NativeTestTurboModule7Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule7 : NSObject <RCTBridgeModule>
#endif

@end
