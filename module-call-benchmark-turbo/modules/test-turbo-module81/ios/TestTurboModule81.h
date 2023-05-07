
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule81Spec.h"

@interface TestTurboModule81 : NSObject <NativeTestTurboModule81Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule81 : NSObject <RCTBridgeModule>
#endif

@end
