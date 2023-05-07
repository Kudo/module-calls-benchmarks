
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule54Spec.h"

@interface TestTurboModule54 : NSObject <NativeTestTurboModule54Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule54 : NSObject <RCTBridgeModule>
#endif

@end
