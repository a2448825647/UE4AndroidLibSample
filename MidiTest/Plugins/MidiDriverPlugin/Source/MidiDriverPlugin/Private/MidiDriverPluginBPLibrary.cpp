// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MidiDriverPluginBPLibrary.h"
#include "MidiDriverPlugin.h"
#include "MidiDriverJNI.h"

UMidiDriverPluginBPLibrary::UMidiDriverPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UMidiDriverPluginBPLibrary::MidiDriverPluginSampleFunction(float Param)
{
#if PLATFORM_ANDROID
	UE_LOG(LogTemp, Warning, TEXT("[GZJ][UMidiDriverPluginBPLibrary]CallTest Start"));
	MidiDriverJNI::CallTest();
	UE_LOG(LogTemp, Warning, TEXT("[GZJ][UMidiDriverPluginBPLibrary]CallTest End"));
#endif

	return -1;
}

