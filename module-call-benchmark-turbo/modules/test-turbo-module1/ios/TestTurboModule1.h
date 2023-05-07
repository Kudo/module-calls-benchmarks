
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule1Spec.h"

@interface TestTurboModule1 : NSObject <NativeTestTurboModule1Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule1 : NSObject <RCTBridgeModule>
#endif

@end
