
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule10Spec.h"

@interface TestTurboModule10 : NSObject <NativeTestTurboModule10Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule10 : NSObject <RCTBridgeModule>
#endif

@end
