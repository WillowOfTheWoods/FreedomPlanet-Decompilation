#ifndef CHOWDREN_FRAME82_H
#define CHOWDREN_FRAME82_H

#include "frame.h"

class Frame82 : public FrameData
{
public:
    Frame82();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME82_H
