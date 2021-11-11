#include <stdio.h>
#include "Mp3Encoder.h"
#include <android/log.h>

#define LOG_TAG "dodoodla_crash"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

extern "C" JNIEXPORT jint JNICALL Java_com_phuket_tour_studio_Mp3Encoder_init
        (JNIEnv * env, jobject, jstring pcmPathParam, jint audioChannels, jint bitRate, jint sampleRate, jstring mp3PathParam) {
    const char* pcmPath = env->GetStringUTFChars(pcmPathParam, NULL);
    const char* mp3Path = env->GetStringUTFChars(mp3PathParam, NULL);

    encoder = new Encoder();
    encoder->init(pcmPath, mp3Path, sampleRate, audioChannels, bitRate);

    env->ReleaseStringUTFChars(mp3PathParam, mp3Path);
    env->ReleaseStringUTFChars(pcmPathParam, pcmPath);
    return 0;
  }

extern "C" JNIEXPORT void JNICALL Java_com_phuket_tour_studio_Mp3Encoder_encode
        (JNIEnv *, jobject) {
//    ALOGD("===============encode================");
    encoder->Encode();
}

extern "C" JNIEXPORT void JNICALL Java_com_phuket_tour_studio_Mp3Encoder_destroy
        (JNIEnv *, jobject) {
//    ALOGD("===============destroy================");
    encoder->Destory();
}