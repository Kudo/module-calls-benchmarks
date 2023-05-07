
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule79Spec.h"

@interface TestTurboModule79 : NSObject <NativeTestTurboModule79Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule79 : NSObject <RCTBridgeModule>
#endif

@end
