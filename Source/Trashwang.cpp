//
// Created by Christopher Pierre on 11/2/26.
//

#include "Trashwang.h"

Trashwang::Trashwang() {
    
}

void Trashwang::paint(juce::Graphics& g) {
    g.setColour(juce::Colour::greyLevel(0.5));
    g.drawText ("TRASHWANG!!!!",
               getLocalBounds(),
               juce::Justification::centred,
               true); // 'true' enables word-wrap if text is too long
}
