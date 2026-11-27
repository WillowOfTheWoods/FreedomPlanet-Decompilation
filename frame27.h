#ifndef CHOWDREN_FRAME27_H
#define CHOWDREN_FRAME27_H

#include "frame.h"

class Frame27 : public FrameData
{
public:
    Frame27();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME27_H
