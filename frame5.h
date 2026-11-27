#ifndef CHOWDREN_FRAME5_H
#define CHOWDREN_FRAME5_H

#include "frame.h"

class Frame5 : public FrameData
{
public:
    Frame5();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME5_H
