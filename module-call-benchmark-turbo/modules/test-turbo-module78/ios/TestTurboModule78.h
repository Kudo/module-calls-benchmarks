
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule78Spec.h"

@interface TestTurboModule78 : NSObject <NativeTestTurboModule78Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule78 : NSObject <RCTBridgeModule>
#endif

@end
