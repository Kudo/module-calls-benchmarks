
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule21Spec.h"

@interface TestTurboModule21 : NSObject <NativeTestTurboModule21Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule21 : NSObject <RCTBridgeModule>
#endif

@end
