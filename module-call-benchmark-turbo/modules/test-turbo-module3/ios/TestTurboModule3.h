
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule3Spec.h"

@interface TestTurboModule3 : NSObject <NativeTestTurboModule3Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule3 : NSObject <RCTBridgeModule>
#endif

@end
