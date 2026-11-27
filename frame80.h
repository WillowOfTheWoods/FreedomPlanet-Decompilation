#ifndef CHOWDREN_FRAME80_H
#define CHOWDREN_FRAME80_H

#include "frame.h"

class Frame80 : public FrameData
{
public:
    Frame80();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME80_H
