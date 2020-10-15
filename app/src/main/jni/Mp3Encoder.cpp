#include <stdio.h>
#include "Mp3Encoder.h"
#include <android/log.h>

#define LOG_TAG "dodoodla_crash"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

extern "C" JNIEXPORT jint JNICALL Java_com_phuket_tour_studio_Mp3Encoder_init
        (JNIEnv *, jobject, jstring, jint, jint, jint, jstring) {
    ALOGD("===============init================");
    return 0;
  }

extern "C" JNIEXPORT void JNICALL Java_com_phuket_tour_studio_Mp3Encoder_encode
        (JNIEnv *, jobject) {
    ALOGD("===============encode================");
}

extern "C" JNIEXPORT void JNICALL Java_com_phuket_tour_studio_Mp3Encoder_destroy
        (JNIEnv *, jobject) {
    ALOGD("===============destroy================");
}