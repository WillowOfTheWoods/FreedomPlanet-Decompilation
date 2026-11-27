#ifndef CHOWDREN_FRAME74_H
#define CHOWDREN_FRAME74_H

#include "frame.h"

class Frame74 : public FrameData
{
public:
    Frame74();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME74_H
