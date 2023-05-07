
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule34Spec.h"

@interface TestTurboModule34 : NSObject <NativeTestTurboModule34Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule34 : NSObject <RCTBridgeModule>
#endif

@end
