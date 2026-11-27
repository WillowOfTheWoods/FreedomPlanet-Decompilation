#ifndef CHOWDREN_FRAME71_H
#define CHOWDREN_FRAME71_H

#include "frame.h"

class Frame71 : public FrameData
{
public:
    Frame71();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME71_H
