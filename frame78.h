#ifndef CHOWDREN_FRAME78_H
#define CHOWDREN_FRAME78_H

#include "frame.h"

class Frame78 : public FrameData
{
public:
    Frame78();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME78_H
