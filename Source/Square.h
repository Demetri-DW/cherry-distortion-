#pragma once

#include <juce_gui_basics/juce_gui_basics.h>

//inherenit from the juce libriary
//bc right now it doesn't know about juce
class Square : public juce::Component
{
public:
    void paint (juce::Graphics&) override;
    void resized() override;

};