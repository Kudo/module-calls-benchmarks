
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule65Spec.h"

@interface TestTurboModule65 : NSObject <NativeTestTurboModule65Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule65 : NSObject <RCTBridgeModule>
#endif

@end
