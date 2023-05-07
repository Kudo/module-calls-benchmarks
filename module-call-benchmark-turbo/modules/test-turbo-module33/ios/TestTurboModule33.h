
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule33Spec.h"

@interface TestTurboModule33 : NSObject <NativeTestTurboModule33Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule33 : NSObject <RCTBridgeModule>
#endif

@end
