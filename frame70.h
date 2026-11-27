#ifndef CHOWDREN_FRAME70_H
#define CHOWDREN_FRAME70_H

#include "frame.h"

class Frame70 : public FrameData
{
public:
    Frame70();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME70_H
