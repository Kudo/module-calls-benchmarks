
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule84Spec.h"

@interface TestTurboModule84 : NSObject <NativeTestTurboModule84Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule84 : NSObject <RCTBridgeModule>
#endif

@end
