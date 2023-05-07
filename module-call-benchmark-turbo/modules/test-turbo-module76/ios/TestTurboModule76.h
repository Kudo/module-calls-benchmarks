
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule76Spec.h"

@interface TestTurboModule76 : NSObject <NativeTestTurboModule76Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule76 : NSObject <RCTBridgeModule>
#endif

@end
