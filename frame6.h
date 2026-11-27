#ifndef CHOWDREN_FRAME6_H
#define CHOWDREN_FRAME6_H

#include "frame.h"

class Frame6 : public FrameData
{
public:
    Frame6();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME6_H
