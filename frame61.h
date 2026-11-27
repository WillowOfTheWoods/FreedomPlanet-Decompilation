#ifndef CHOWDREN_FRAME61_H
#define CHOWDREN_FRAME61_H

#include "frame.h"

class Frame61 : public FrameData
{
public:
    Frame61();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME61_H
