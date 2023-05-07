
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule24Spec.h"

@interface TestTurboModule24 : NSObject <NativeTestTurboModule24Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule24 : NSObject <RCTBridgeModule>
#endif

@end
