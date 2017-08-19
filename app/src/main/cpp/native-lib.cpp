#include <jni.h>
#include <cstring>
#include <string>
#include "log.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_pcd_jnidmo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    LOGD("Hello %s World...", hello.c_str());
    return env->NewStringUTF(hello.c_str());
}


