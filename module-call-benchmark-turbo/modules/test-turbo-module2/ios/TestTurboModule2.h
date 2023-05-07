
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule2Spec.h"

@interface TestTurboModule2 : NSObject <NativeTestTurboModule2Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule2 : NSObject <RCTBridgeModule>
#endif

@end
