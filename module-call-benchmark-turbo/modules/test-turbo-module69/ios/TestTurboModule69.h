
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule69Spec.h"

@interface TestTurboModule69 : NSObject <NativeTestTurboModule69Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule69 : NSObject <RCTBridgeModule>
#endif

@end
