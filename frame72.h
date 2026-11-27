#ifndef CHOWDREN_FRAME72_H
#define CHOWDREN_FRAME72_H

#include "frame.h"

class Frame72 : public FrameData
{
public:
    Frame72();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME72_H
