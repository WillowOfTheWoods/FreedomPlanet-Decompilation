#ifndef CHOWDREN_FRAME62_H
#define CHOWDREN_FRAME62_H

#include "frame.h"

class Frame62 : public FrameData
{
public:
    Frame62();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME62_H
