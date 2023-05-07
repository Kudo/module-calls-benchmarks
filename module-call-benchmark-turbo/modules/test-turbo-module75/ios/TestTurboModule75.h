
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule75Spec.h"

@interface TestTurboModule75 : NSObject <NativeTestTurboModule75Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule75 : NSObject <RCTBridgeModule>
#endif

@end
