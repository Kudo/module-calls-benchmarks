
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule58Spec.h"

@interface TestTurboModule58 : NSObject <NativeTestTurboModule58Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule58 : NSObject <RCTBridgeModule>
#endif

@end
