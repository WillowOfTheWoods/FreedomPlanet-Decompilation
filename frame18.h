#ifndef CHOWDREN_FRAME18_H
#define CHOWDREN_FRAME18_H

#include "frame.h"

class Frame18 : public FrameData
{
public:
    Frame18();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME18_H
