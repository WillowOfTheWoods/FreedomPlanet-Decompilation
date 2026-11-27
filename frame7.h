#ifndef CHOWDREN_FRAME7_H
#define CHOWDREN_FRAME7_H

#include "frame.h"

class Frame7 : public FrameData
{
public:
    Frame7();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME7_H
