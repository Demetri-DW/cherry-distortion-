//
// Created by Christopher Pierre on 11/1/26.
//




#include "Sinewave.h"

#include <cmath>
#include <cstddef>

void Sinewave::prepare(const double sampleRate, const int numChannels) {
    currentSampleRate = static_cast<float>(sampleRate);
    timeIncrement = 1.0f / currentSampleRate;
    currentTime.resize(static_cast<std::size_t>(numChannels), 0.0f);
}
void Sinewave::process(juce::AudioBuffer<float>& buffer) {
    const auto numChannels = buffer.getNumChannels();
    if (currentTime.size() != static_cast<std::size_t>(numChannels)) {
        return;
    }

    for (int channel = 0; channel < numChannels; ++channel) {
        auto* output = buffer.getWritePointer(channel);

        const auto channelIndex = static_cast<std::size_t>(channel);

        for (int sample = 0; sample < buffer.getNumSamples(); ++sample) {

            output[sample] = amplitude * std::sin(juce::MathConstants<float>::twoPi * frequency * currentTime[channelIndex]);
            currentTime[channelIndex] += timeIncrement;
        }
    }
}
