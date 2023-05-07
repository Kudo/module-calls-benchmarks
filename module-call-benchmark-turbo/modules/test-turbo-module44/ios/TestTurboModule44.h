
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModule44Spec.h"

@interface TestTurboModule44 : NSObject <NativeTestTurboModule44Spec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule44 : NSObject <RCTBridgeModule>
#endif

@end
