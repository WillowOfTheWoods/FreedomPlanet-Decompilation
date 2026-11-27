#ifndef CHOWDREN_FRAME22_H
#define CHOWDREN_FRAME22_H

#include "frame.h"

class Frame22 : public FrameData
{
public:
    Frame22();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME22_H
