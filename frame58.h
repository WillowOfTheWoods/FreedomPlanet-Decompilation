#ifndef CHOWDREN_FRAME58_H
#define CHOWDREN_FRAME58_H

#include "frame.h"

class Frame58 : public FrameData
{
public:
    Frame58();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME58_H
