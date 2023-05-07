
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule82Spec.h"

@interface TestTurboModule82 : NSObject <NativeTestTurboModule82Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule82 : NSObject <RCTBridgeModule>
#endif

@end
