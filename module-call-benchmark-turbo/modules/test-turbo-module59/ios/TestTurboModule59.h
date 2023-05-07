
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule59Spec.h"

@interface TestTurboModule59 : NSObject <NativeTestTurboModule59Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule59 : NSObject <RCTBridgeModule>
#endif

@end
