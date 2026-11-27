#ifndef CHOWDREN_FRAME16_H
#define CHOWDREN_FRAME16_H

#include "frame.h"

class Frame16 : public FrameData
{
public:
    Frame16();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME16_H
