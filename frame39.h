#ifndef CHOWDREN_FRAME39_H
#define CHOWDREN_FRAME39_H

#include "frame.h"

class Frame39 : public FrameData
{
public:
    Frame39();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME39_H
