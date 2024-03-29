#include <jni.h>
#include <string>
extern "C" JNIEXPORT jstring JNICALL
Java_com_will_ndklearn_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_will_ndklearn_MainActivity_stringFromJniStatic(JNIEnv *env, jclass clazz) {
    std::string helloStatic = "hello from c++ static";
    return env->NewStringUTF(helloStatic.c_str());
}