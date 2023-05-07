
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule19Spec.h"

@interface TestTurboModule19 : NSObject <NativeTestTurboModule19Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule19 : NSObject <RCTBridgeModule>
#endif

@end
