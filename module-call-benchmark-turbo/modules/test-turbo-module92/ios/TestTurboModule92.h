
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule92Spec.h"

@interface TestTurboModule92 : NSObject <NativeTestTurboModule92Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule92 : NSObject <RCTBridgeModule>
#endif

@end
