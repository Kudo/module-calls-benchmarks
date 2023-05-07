
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule5Spec.h"

@interface TestTurboModule5 : NSObject <NativeTestTurboModule5Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule5 : NSObject <RCTBridgeModule>
#endif

@end
