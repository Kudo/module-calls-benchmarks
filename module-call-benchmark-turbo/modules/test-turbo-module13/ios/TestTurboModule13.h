
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule13Spec.h"

@interface TestTurboModule13 : NSObject <NativeTestTurboModule13Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule13 : NSObject <RCTBridgeModule>
#endif

@end
