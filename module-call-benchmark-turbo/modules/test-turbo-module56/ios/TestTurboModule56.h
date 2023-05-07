
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule56Spec.h"

@interface TestTurboModule56 : NSObject <NativeTestTurboModule56Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule56 : NSObject <RCTBridgeModule>
#endif

@end
