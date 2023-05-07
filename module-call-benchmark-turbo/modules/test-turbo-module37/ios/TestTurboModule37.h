
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule37Spec.h"

@interface TestTurboModule37 : NSObject <NativeTestTurboModule37Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule37 : NSObject <RCTBridgeModule>
#endif

@end
