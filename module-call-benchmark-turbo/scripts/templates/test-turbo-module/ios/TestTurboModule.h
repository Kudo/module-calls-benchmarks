
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestTurboModuleSpec.h"

@interface TestTurboModule : NSObject <NativeTestTurboModuleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TestTurboModule : NSObject <RCTBridgeModule>
#endif

@end
