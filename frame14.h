#ifndef CHOWDREN_FRAME14_H
#define CHOWDREN_FRAME14_H

#include "frame.h"

class Frame14 : public FrameData
{
public:
    Frame14();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME14_H
