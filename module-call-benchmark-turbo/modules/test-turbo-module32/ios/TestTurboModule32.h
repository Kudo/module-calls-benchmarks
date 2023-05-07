
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule32Spec.h"

@interface TestTurboModule32 : NSObject <NativeTestTurboModule32Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule32 : NSObject <RCTBridgeModule>
#endif

@end
