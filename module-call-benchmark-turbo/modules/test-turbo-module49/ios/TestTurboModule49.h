
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule49Spec.h"

@interface TestTurboModule49 : NSObject <NativeTestTurboModule49Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule49 : NSObject <RCTBridgeModule>
#endif

@end
