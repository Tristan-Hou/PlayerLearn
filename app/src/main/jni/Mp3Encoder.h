/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "libmp3lame/lame.h"
/* Header for class com_phuket_tour_studio_Mp3Encoder */

#ifndef _Included_com_phuket_tour_studio_Mp3Encoder
#define _Included_com_phuket_tour_studio_Mp3Encoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_phuket_tour_studio_Mp3Encoder
 * Method:    init
 * Signature: (Ljava/lang/String;IIILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_phuket_tour_studio_Mp3Encoder_init
        (JNIEnv *, jobject, jstring, jint, jint, jint, jstring);

/*
 * Class:     com_phuket_tour_studio_Mp3Encoder
 * Method:    encode
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_phuket_tour_studio_Mp3Encoder_encode
        (JNIEnv *, jobject);

/*
 * Class:     com_phuket_tour_studio_Mp3Encoder
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_phuket_tour_studio_Mp3Encoder_destroy
        (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
