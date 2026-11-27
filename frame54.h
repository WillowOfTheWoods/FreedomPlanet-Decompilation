#ifndef CHOWDREN_FRAME54_H
#define CHOWDREN_FRAME54_H

#include "frame.h"

class Frame54 : public FrameData
{
public:
    Frame54();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME54_H
