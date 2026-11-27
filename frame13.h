#ifndef CHOWDREN_FRAME13_H
#define CHOWDREN_FRAME13_H

#include "frame.h"

class Frame13 : public FrameData
{
public:
    Frame13();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME13_H
