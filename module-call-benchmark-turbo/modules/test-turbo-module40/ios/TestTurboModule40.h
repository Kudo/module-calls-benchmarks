
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule40Spec.h"

@interface TestTurboModule40 : NSObject <NativeTestTurboModule40Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule40 : NSObject <RCTBridgeModule>
#endif

@end
