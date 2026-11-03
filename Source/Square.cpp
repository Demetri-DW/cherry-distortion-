//
// Created by Christopher Pierre on 11/1/26.
//

#include "Square.h"
#include "BinaryData.h"

Square::Square()
    : coverImage (juce::ImageCache::getFromMemory (BinaryData::Wolf_Cover2_jpg,
                                                   BinaryData::Wolf_Cover2_jpgSize))
{
}

void Square::paint (juce::Graphics& g)
{
    g.drawImageWithin (coverImage, 0, 0, getWidth(), getHeight(),
                       juce::RectanglePlacement::centred);
}

void Square::resized()
{
}
