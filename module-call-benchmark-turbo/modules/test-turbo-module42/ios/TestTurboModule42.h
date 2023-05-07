
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule42Spec.h"

@interface TestTurboModule42 : NSObject <NativeTestTurboModule42Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule42 : NSObject <RCTBridgeModule>
#endif

@end
