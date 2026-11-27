#ifndef CHOWDREN_FRAME60_H
#define CHOWDREN_FRAME60_H

#include "frame.h"

class Frame60 : public FrameData
{
public:
    Frame60();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME60_H
