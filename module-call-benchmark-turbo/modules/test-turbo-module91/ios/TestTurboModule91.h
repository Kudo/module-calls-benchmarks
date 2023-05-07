
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule91Spec.h"

@interface TestTurboModule91 : NSObject <NativeTestTurboModule91Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule91 : NSObject <RCTBridgeModule>
#endif

@end
