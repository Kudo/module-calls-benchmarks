
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule16Spec.h"

@interface TestTurboModule16 : NSObject <NativeTestTurboModule16Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule16 : NSObject <RCTBridgeModule>
#endif

@end
