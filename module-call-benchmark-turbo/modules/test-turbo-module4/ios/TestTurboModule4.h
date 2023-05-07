
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule4Spec.h"

@interface TestTurboModule4 : NSObject <NativeTestTurboModule4Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule4 : NSObject <RCTBridgeModule>
#endif

@end
