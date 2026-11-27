#ifndef CHOWDREN_FRAME55_H
#define CHOWDREN_FRAME55_H

#include "frame.h"

class Frame55 : public FrameData
{
public:
    Frame55();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME55_H
