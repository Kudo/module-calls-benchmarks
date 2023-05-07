
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule26Spec.h"

@interface TestTurboModule26 : NSObject <NativeTestTurboModule26Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule26 : NSObject <RCTBridgeModule>
#endif

@end
