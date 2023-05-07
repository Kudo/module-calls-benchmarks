
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule94Spec.h"

@interface TestTurboModule94 : NSObject <NativeTestTurboModule94Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule94 : NSObject <RCTBridgeModule>
#endif

@end
