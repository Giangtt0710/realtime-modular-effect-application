/*
  ==============================================================================

    AudioDeviceManager.h
    Created: 3 Apr 2024 5:40:46pm
    Author:  giang
    
    This class is for handling audio devices.
  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================

class AudioDeviceManagerUtil :public juce::AudioAppComponent,
    public juce::ChangeListener,
    private juce::Timer
{

};