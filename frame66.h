#ifndef CHOWDREN_FRAME66_H
#define CHOWDREN_FRAME66_H

#include "frame.h"

class Frame66 : public FrameData
{
public:
    Frame66();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME66_H
