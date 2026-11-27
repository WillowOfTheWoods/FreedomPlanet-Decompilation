#ifndef CHOWDREN_FRAME64_H
#define CHOWDREN_FRAME64_H

#include "frame.h"

class Frame64 : public FrameData
{
public:
    Frame64();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME64_H
