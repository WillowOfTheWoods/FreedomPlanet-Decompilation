#ifndef CHOWDREN_FRAME49_H
#define CHOWDREN_FRAME49_H

#include "frame.h"

class Frame49 : public FrameData
{
public:
    Frame49();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME49_H
