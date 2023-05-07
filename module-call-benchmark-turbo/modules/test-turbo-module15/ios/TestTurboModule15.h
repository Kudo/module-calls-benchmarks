
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule15Spec.h"

@interface TestTurboModule15 : NSObject <NativeTestTurboModule15Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule15 : NSObject <RCTBridgeModule>
#endif

@end
