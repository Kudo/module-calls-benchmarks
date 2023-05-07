
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule11Spec.h"

@interface TestTurboModule11 : NSObject <NativeTestTurboModule11Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule11 : NSObject <RCTBridgeModule>
#endif

@end
