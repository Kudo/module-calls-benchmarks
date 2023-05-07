
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule99Spec.h"

@interface TestTurboModule99 : NSObject <NativeTestTurboModule99Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule99 : NSObject <RCTBridgeModule>
#endif

@end
