#include <jni.h>
#include "react-native-superpowered-sdk.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_superpoweredsdk_SuperpoweredSdkModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return superpoweredsdk::multiply(a, b);
}
