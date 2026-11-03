#include "PluginProcessor.h"
#include "PluginEditor.h"
// Decribes the look of the plugin
//==============================================================================
AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), processorRef (p)
{
    juce::ignoreUnused (processorRef);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    addAndMakeVisible (square);
    frequencySlider.setSliderStyle (juce::Slider::SliderStyle::Rotary);

    frequencySlider.setTextBoxStyle(juce::Slider::TextBoxBelow, true,100,50);
    addAndMakeVisible(frequencySlider);
    addAndMakeVisible(trashwang);
    setSize (400, 600);
    


}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor()
{
}

//==============================================================================
void AudioPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
}

void AudioPluginAudioProcessorEditor::resized()
{
    square.setBounds (100, 50, 200, 200);
    trashwang.setBounds (90, 190, 200, 200);
    frequencySlider.setBounds (100, 300, 200, 200);
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
