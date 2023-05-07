
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule62Spec.h"

@interface TestTurboModule62 : NSObject <NativeTestTurboModule62Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule62 : NSObject <RCTBridgeModule>
#endif

@end
