#ifndef CHOWDREN_FRAME87_H
#define CHOWDREN_FRAME87_H

#include "frame.h"

class Frame87 : public FrameData
{
public:
    Frame87();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME87_H
