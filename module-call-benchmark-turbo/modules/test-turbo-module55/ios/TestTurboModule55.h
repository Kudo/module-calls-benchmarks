
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule55Spec.h"

@interface TestTurboModule55 : NSObject <NativeTestTurboModule55Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule55 : NSObject <RCTBridgeModule>
#endif

@end
