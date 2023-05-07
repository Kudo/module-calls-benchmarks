
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule12Spec.h"

@interface TestTurboModule12 : NSObject <NativeTestTurboModule12Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule12 : NSObject <RCTBridgeModule>
#endif

@end
