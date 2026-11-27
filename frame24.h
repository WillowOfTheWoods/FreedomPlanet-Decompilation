#ifndef CHOWDREN_FRAME24_H
#define CHOWDREN_FRAME24_H

#include "frame.h"

class Frame24 : public FrameData
{
public:
    Frame24();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME24_H
