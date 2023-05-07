
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule25Spec.h"

@interface TestTurboModule25 : NSObject <NativeTestTurboModule25Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule25 : NSObject <RCTBridgeModule>
#endif

@end
