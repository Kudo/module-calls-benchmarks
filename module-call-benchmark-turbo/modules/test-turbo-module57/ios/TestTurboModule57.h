
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule57Spec.h"

@interface TestTurboModule57 : NSObject <NativeTestTurboModule57Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule57 : NSObject <RCTBridgeModule>
#endif

@end
