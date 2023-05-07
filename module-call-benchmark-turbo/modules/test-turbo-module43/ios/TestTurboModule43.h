
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule43Spec.h"

@interface TestTurboModule43 : NSObject <NativeTestTurboModule43Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule43 : NSObject <RCTBridgeModule>
#endif

@end
