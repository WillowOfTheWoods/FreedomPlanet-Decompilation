#ifndef CHOWDREN_FRAME3_H
#define CHOWDREN_FRAME3_H

#include "frame.h"

class Frame3 : public FrameData
{
public:
    Frame3();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME3_H
