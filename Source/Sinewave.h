//
// Created by Christopher Pierre on 11/1/26.
//

#ifndef SIMPLEJUCEPLUGINTEMPLATE_SINEWAVE_H
#define SIMPLEJUCEPLUGINTEMPLATE_SINEWAVE_H
#include <juce_audio_basics/juce_audio_basics.h>
#include <vector>


class Sinewave {

public:
    void prepare (double sampleRate, int numChannels);
    void process (juce::AudioBuffer<float>& buffer);

private:
    float amplitude = 0.2f;
    float frequency = 440.0f;
    float currentSampleRate = 0.0f;
    float timeIncrement = 1.0f;
    std::vector<float> currentTime;



};


#endif //SIMPLEJUCEPLUGINTEMPLATE_SINEWAVE_H
