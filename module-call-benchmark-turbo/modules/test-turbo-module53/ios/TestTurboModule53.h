
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule53Spec.h"

@interface TestTurboModule53 : NSObject <NativeTestTurboModule53Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule53 : NSObject <RCTBridgeModule>
#endif

@end
