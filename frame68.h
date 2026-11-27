#ifndef CHOWDREN_FRAME68_H
#define CHOWDREN_FRAME68_H

#include "frame.h"

class Frame68 : public FrameData
{
public:
    Frame68();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME68_H
