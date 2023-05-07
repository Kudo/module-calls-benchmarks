
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule45Spec.h"

@interface TestTurboModule45 : NSObject <NativeTestTurboModule45Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule45 : NSObject <RCTBridgeModule>
#endif

@end
