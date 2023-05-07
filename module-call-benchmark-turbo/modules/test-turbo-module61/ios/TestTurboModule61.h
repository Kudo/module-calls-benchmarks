
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule61Spec.h"

@interface TestTurboModule61 : NSObject <NativeTestTurboModule61Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule61 : NSObject <RCTBridgeModule>
#endif

@end
