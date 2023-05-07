
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule63Spec.h"

@interface TestTurboModule63 : NSObject <NativeTestTurboModule63Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule63 : NSObject <RCTBridgeModule>
#endif

@end
