#ifndef CHOWDREN_FRAME12_H
#define CHOWDREN_FRAME12_H

#include "frame.h"

class Frame12 : public FrameData
{
public:
    Frame12();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME12_H
