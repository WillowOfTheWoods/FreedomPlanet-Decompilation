#ifndef CHOWDREN_FRAME2_H
#define CHOWDREN_FRAME2_H

#include "frame.h"

class Frame2 : public FrameData
{
public:
    Frame2();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME2_H
