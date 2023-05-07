
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule87Spec.h"

@interface TestTurboModule87 : NSObject <NativeTestTurboModule87Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule87 : NSObject <RCTBridgeModule>
#endif

@end
