#ifndef CHOWDREN_FRAME51_H
#define CHOWDREN_FRAME51_H

#include "frame.h"

class Frame51 : public FrameData
{
public:
    Frame51();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME51_H
