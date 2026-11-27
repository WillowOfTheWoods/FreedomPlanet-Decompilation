#ifndef CHOWDREN_FRAME19_H
#define CHOWDREN_FRAME19_H

#include "frame.h"

class Frame19 : public FrameData
{
public:
    Frame19();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME19_H
