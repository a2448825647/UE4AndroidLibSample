// Fill out your copyright notice in the Description page of Project Settings.


#include "MidiDriverJNI.h"
#if PLATFORM_ANDROID
MidiDriverJNI::MidiDriverJNI() {
}

MidiDriverJNI::~MidiDriverJNI() {
}

void MidiDriverJNI::CallTest() {

    if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
    {
        bool bIsOptional = false;
        static jmethodID MethonId_Test = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "TestFunc", "()V", bIsOptional);
        FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId_Test);
    }
}
#endif