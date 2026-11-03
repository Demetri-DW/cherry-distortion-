//
// Created by Christopher Pierre on 11/2/26.
//

#ifndef SIMPLEJUCEPLUGINTEMPLATE_TRASHWANG_H
#define SIMPLEJUCEPLUGINTEMPLATE_TRASHWANG_H
#include <juce_gui_basics/juce_gui_basics.h>

//inherenit from the juce libriary
//bc right now it doesn't know about juce
class Trashwang : public juce::Component{


public:
    Trashwang();
    void paint (juce::Graphics&) override;

private:



};


#endif //SIMPLEJUCEPLUGINTEMPLATE_TRASHWANG_H
