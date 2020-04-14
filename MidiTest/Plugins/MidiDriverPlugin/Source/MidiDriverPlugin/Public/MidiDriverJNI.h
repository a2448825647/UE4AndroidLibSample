// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#if PLATFORM_ANDROID
#include "Runtime/Launch/Public/Android/AndroidJNI.h"
#include "Runtime/ApplicationCore/Public/Android/AndroidApplication.h"

/**
 * 
 */

extern "C" bool Java_com_epicgames_ue4_GameActivity_GetJNIData(JNIEnv * LocalJNIEnv, jobject LocalThiz, jint data)
{
	return JNI_TRUE;
}

class MIDIDRIVERPLUGIN_API MidiDriverJNI
{
public:
	MidiDriverJNI();
	~MidiDriverJNI();

	static void CallTest();
};
#endif