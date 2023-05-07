
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule68Spec.h"

@interface TestTurboModule68 : NSObject <NativeTestTurboModule68Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule68 : NSObject <RCTBridgeModule>
#endif

@end
