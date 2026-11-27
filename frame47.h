#ifndef CHOWDREN_FRAME47_H
#define CHOWDREN_FRAME47_H

#include "frame.h"

class Frame47 : public FrameData
{
public:
    Frame47();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME47_H
