
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule41Spec.h"

@interface TestTurboModule41 : NSObject <NativeTestTurboModule41Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule41 : NSObject <RCTBridgeModule>
#endif

@end
