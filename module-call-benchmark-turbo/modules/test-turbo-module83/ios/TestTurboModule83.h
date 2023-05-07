
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule83Spec.h"

@interface TestTurboModule83 : NSObject <NativeTestTurboModule83Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule83 : NSObject <RCTBridgeModule>
#endif

@end
