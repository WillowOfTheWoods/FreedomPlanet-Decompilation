#ifndef CHOWDREN_FRAME76_H
#define CHOWDREN_FRAME76_H

#include "frame.h"

class Frame76 : public FrameData
{
public:
    Frame76();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME76_H
