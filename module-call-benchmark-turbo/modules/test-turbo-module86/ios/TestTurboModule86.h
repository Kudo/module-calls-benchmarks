
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule86Spec.h"

@interface TestTurboModule86 : NSObject <NativeTestTurboModule86Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule86 : NSObject <RCTBridgeModule>
#endif

@end
