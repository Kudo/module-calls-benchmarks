
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule85Spec.h"

@interface TestTurboModule85 : NSObject <NativeTestTurboModule85Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule85 : NSObject <RCTBridgeModule>
#endif

@end
