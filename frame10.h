#ifndef CHOWDREN_FRAME10_H
#define CHOWDREN_FRAME10_H

#include "frame.h"

class Frame10 : public FrameData
{
public:
    Frame10();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME10_H
