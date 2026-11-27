#ifndef CHOWDREN_FRAME86_H
#define CHOWDREN_FRAME86_H

#include "frame.h"

class Frame86 : public FrameData
{
public:
    Frame86();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME86_H
