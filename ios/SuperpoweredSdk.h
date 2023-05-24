#ifdef __cplusplus
#import "react-native-superpowered-sdk.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSuperpoweredSdkSpec.h"

@interface SuperpoweredSdk : NSObject <NativeSuperpoweredSdkSpec>
#else
#import <React/RCTBridgeModule.h>

@interface SuperpoweredSdk : NSObject <RCTBridgeModule>
#endif

@end
