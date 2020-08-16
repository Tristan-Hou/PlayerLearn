//#include <stdio.h>
//#include <jni.h>
//#include <android/log.h>

//#include "Mp3Encoder.h"
#include "../../../../../../Library/Android/sdk/ndk/20.1.5948944/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/usr/include/jni.h"
//#include "../../../../../../Library/Android/sdk/ndk/20.1.5948944/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/usr/include/android/log.h"
#include "../../../../../../Library/Android/sdk/ndk/20.1.5948944/toolchains/llvm/prebuilt/darwin-x86_64/sysroot/usr/include/android/log.h"

#define LOG_TAG "dodoodla_crash"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

extern "C" JNIEXPORT void JNICALL Java_com_phuket_tour_studio_Mp3Encoder_encode
  (JNIEnv *, jobject) {
//  LOGI("encoder encode");
    ALOGD("===============crrrrash================");
  }