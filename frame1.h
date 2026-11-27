#ifndef CHOWDREN_FRAME1_H
#define CHOWDREN_FRAME1_H

#include "frame.h"

class Frame1 : public FrameData
{
public:
    Frame1();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME1_H
