
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule71Spec.h"

@interface TestTurboModule71 : NSObject <NativeTestTurboModule71Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule71 : NSObject <RCTBridgeModule>
#endif

@end
