#ifndef CHOWDREN_FRAME88_H
#define CHOWDREN_FRAME88_H

#include "frame.h"

class Frame88 : public FrameData
{
public:
    Frame88();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME88_H
