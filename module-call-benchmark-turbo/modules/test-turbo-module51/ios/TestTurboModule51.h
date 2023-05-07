
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule51Spec.h"

@interface TestTurboModule51 : NSObject <NativeTestTurboModule51Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule51 : NSObject <RCTBridgeModule>
#endif

@end
