
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule38Spec.h"

@interface TestTurboModule38 : NSObject <NativeTestTurboModule38Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule38 : NSObject <RCTBridgeModule>
#endif

@end
