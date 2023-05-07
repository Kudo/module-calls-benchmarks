
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule95Spec.h"

@interface TestTurboModule95 : NSObject <NativeTestTurboModule95Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule95 : NSObject <RCTBridgeModule>
#endif

@end
