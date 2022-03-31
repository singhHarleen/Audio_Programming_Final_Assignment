/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Audio_Programming_Final_ProjectAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Audio_Programming_Final_ProjectAudioProcessorEditor (Audio_Programming_Final_ProjectAudioProcessor&);
    ~Audio_Programming_Final_ProjectAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Audio_Programming_Final_ProjectAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Audio_Programming_Final_ProjectAudioProcessorEditor)
};
