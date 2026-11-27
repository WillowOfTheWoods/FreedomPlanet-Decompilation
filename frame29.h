#ifndef CHOWDREN_FRAME29_H
#define CHOWDREN_FRAME29_H

#include "frame.h"

class Frame29 : public FrameData
{
public:
    Frame29();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME29_H
