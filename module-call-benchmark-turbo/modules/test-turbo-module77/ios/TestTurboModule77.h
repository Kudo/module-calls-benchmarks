
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule77Spec.h"

@interface TestTurboModule77 : NSObject <NativeTestTurboModule77Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule77 : NSObject <RCTBridgeModule>
#endif

@end
