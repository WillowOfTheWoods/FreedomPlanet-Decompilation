#ifndef CHOWDREN_FRAME75_H
#define CHOWDREN_FRAME75_H

#include "frame.h"

class Frame75 : public FrameData
{
public:
    Frame75();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME75_H
