#ifndef CHOWDREN_FRAME79_H
#define CHOWDREN_FRAME79_H

#include "frame.h"

class Frame79 : public FrameData
{
public:
    Frame79();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME79_H
