
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule64Spec.h"

@interface TestTurboModule64 : NSObject <NativeTestTurboModule64Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule64 : NSObject <RCTBridgeModule>
#endif

@end
