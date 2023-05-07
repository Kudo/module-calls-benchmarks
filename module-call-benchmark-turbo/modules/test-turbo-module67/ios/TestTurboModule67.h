
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule67Spec.h"

@interface TestTurboModule67 : NSObject <NativeTestTurboModule67Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule67 : NSObject <RCTBridgeModule>
#endif

@end
