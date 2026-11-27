#ifndef CHOWDREN_FRAME81_H
#define CHOWDREN_FRAME81_H

#include "frame.h"

class Frame81 : public FrameData
{
public:
    Frame81();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME81_H
