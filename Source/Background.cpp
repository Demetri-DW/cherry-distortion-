//
// Created by Christopher Pierre on 11/3/26.
//

#include "Background.h"

#include "juce_graphics/image_formats/jpglib/jconfig.h"
#include "public.sdk/source/vst/moduleinfo/jsoncxx.h"
#include <juce_graphics/colour/juce_Colour.h>
Background::Background()




{

}

void Background::paint(juce::Graphics& g) {
    g.fillAll (juce::ColourGradient(juce::Colour(48, 184, 161), 40, 20, juce::Colour(39,49,10), 50,40, true));
}
