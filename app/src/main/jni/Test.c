//
// Created by lsw on 2017/5/12.
//
#include"com_lxw_ccalljava_Jni.h"
#include <stdio.h>
#include <stdlib.h>
#include <android/log.h>

#define LOG_TAG "ANDROID"
#define  LOGE(_VA_ARGS_)  __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG,  _VA_ARGS_)

void Java_com_lxw_ccalljava_Jni_callbackAdd
        (JNIEnv * env, jobject object){
// jclass      (*FindClass)(JNIEnv*, const char*);
jclass clazz = (*env)->FindClass(env, "com/lxw/ccalljava/Jni");
//jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
jmethodID jmethod = (*env)->GetMethodID(env, clazz, "add", "(II)I");
//实例化对象 jobject     (*AllocObject)(JNIEnv*, jclass);
jobject jobject = (*env)->AllocObject(env, clazz);
//调用方法jint        (*CallIntMethod)(JNIEnv*, jobject, jmethodID, ...);
jint i = (*env)->CallIntMethod(env, jobject, jmethod, 1, 2);
LOGE("this is csadsadadada");
__android_log_print(ANDROID_LOG_VERBOSE,"Jni","this is c");

};

 void  Java_com_lxw_ccalljava_Jni_callbackHelloFromJava
(JNIEnv *env, jobject object){
        jclass jclazz =(*env)->FindClass(env,"com/lxw/ccalljava/Jni");

        jmethodID jmethod=(*env)->GetMethodID(env,jclazz,"helloFromJava","()V");

        jobject ob =(*env)->AllocObject(env,jclazz);

        //   (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
        (*env)->CallVoidMethod(env,ob,jmethod);
};

 void  Java_com_lxw_ccalljava_Jni_callbackPrintString
(JNIEnv *env, jobject obj){
    jclass jclazz =(*env)->FindClass(env,"com/lxw/ccalljava/Jni");
    jmethodID methodId =(*env)->GetMethodID(env,jclazz,"printString","(Ljava/lang/String;)V");
    jobject object =(*env)->AllocObject(env,jclazz);
    jstring jstr=(*env)->NewStringUTF(env,"i am c");
    (*env)->CallVoidMethod(env,object,methodId,jstr);
};

//  void        (*CallStaticVoidMethod)(JNIEnv*, jclass, jmethodID, ...);
 void  Java_com_lxw_ccalljava_Jni_callbackSayHello
(JNIEnv *env, jobject object){
    jclass jclazz =(*env)->FindClass(env,"com/lxw/ccalljava/Jni");
//jmethodID   (*GetStaticMethodID)(JNIEnv*, jclass, const char*, const char*);
    jmethodID methodID=(*env)->GetStaticMethodID(env,jclazz,"sayHello","(Ljava/lang/String;)V");

    jstring jstr=(*env)->NewStringUTF(env,"\nhello ,java！ I am C，i call sayHello");
//  void        (*CallStaticVoidMethod)(JNIEnv*, jclass, jmethodID, ...);
     (*env)->CallStaticVoidMethod(env,jclazz,methodID,jstr);
};