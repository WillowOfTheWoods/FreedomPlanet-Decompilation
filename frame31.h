#ifndef CHOWDREN_FRAME31_H
#define CHOWDREN_FRAME31_H

#include "frame.h"

class Frame31 : public FrameData
{
public:
    Frame31();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME31_H
