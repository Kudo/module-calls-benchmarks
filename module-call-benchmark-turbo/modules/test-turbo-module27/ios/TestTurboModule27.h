
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule27Spec.h"

@interface TestTurboModule27 : NSObject <NativeTestTurboModule27Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule27 : NSObject <RCTBridgeModule>
#endif

@end
