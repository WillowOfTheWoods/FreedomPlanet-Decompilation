#ifndef CHOWDREN_FRAME17_H
#define CHOWDREN_FRAME17_H

#include "frame.h"

class Frame17 : public FrameData
{
public:
    Frame17();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME17_H
