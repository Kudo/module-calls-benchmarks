
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule93Spec.h"

@interface TestTurboModule93 : NSObject <NativeTestTurboModule93Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule93 : NSObject <RCTBridgeModule>
#endif

@end
