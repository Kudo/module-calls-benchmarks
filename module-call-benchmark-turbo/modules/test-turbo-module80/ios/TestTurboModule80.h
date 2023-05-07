
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule80Spec.h"

@interface TestTurboModule80 : NSObject <NativeTestTurboModule80Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule80 : NSObject <RCTBridgeModule>
#endif

@end
