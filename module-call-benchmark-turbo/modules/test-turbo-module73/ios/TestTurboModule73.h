
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule73Spec.h"

@interface TestTurboModule73 : NSObject <NativeTestTurboModule73Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule73 : NSObject <RCTBridgeModule>
#endif

@end
