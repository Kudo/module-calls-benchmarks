
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule50Spec.h"

@interface TestTurboModule50 : NSObject <NativeTestTurboModule50Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule50 : NSObject <RCTBridgeModule>
#endif

@end
