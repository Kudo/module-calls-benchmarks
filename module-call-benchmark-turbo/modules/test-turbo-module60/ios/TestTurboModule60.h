
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule60Spec.h"

@interface TestTurboModule60 : NSObject <NativeTestTurboModule60Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule60 : NSObject <RCTBridgeModule>
#endif

@end
