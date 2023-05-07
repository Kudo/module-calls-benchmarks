
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule35Spec.h"

@interface TestTurboModule35 : NSObject <NativeTestTurboModule35Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule35 : NSObject <RCTBridgeModule>
#endif

@end
