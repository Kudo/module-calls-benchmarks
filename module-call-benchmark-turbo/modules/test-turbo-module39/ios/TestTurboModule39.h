
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule39Spec.h"

@interface TestTurboModule39 : NSObject <NativeTestTurboModule39Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule39 : NSObject <RCTBridgeModule>
#endif

@end
