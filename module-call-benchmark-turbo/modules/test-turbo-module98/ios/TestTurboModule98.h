
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule98Spec.h"

@interface TestTurboModule98 : NSObject <NativeTestTurboModule98Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule98 : NSObject <RCTBridgeModule>
#endif

@end
