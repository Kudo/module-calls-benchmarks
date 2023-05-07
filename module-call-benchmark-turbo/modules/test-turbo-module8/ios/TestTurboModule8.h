
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule8Spec.h"

@interface TestTurboModule8 : NSObject <NativeTestTurboModule8Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule8 : NSObject <RCTBridgeModule>
#endif

@end
