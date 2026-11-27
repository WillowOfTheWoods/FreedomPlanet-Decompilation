#ifndef CHOWDREN_FRAME20_H
#define CHOWDREN_FRAME20_H

#include "frame.h"

class Frame20 : public FrameData
{
public:
    Frame20();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME20_H
