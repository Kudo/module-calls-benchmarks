
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule70Spec.h"

@interface TestTurboModule70 : NSObject <NativeTestTurboModule70Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule70 : NSObject <RCTBridgeModule>
#endif

@end
