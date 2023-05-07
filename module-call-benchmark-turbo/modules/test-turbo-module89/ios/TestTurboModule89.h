
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule89Spec.h"

@interface TestTurboModule89 : NSObject <NativeTestTurboModule89Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule89 : NSObject <RCTBridgeModule>
#endif

@end
