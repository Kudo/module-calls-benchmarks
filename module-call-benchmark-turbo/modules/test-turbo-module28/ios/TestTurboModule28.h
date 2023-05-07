
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule28Spec.h"

@interface TestTurboModule28 : NSObject <NativeTestTurboModule28Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule28 : NSObject <RCTBridgeModule>
#endif

@end
