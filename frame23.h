#ifndef CHOWDREN_FRAME23_H
#define CHOWDREN_FRAME23_H

#include "frame.h"

class Frame23 : public FrameData
{
public:
    Frame23();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME23_H
