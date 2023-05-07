
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule100Spec.h"

@interface TestTurboModule100 : NSObject <NativeTestTurboModule100Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule100 : NSObject <RCTBridgeModule>
#endif

@end
