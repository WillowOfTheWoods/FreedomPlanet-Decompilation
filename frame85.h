#ifndef CHOWDREN_FRAME85_H
#define CHOWDREN_FRAME85_H

#include "frame.h"

class Frame85 : public FrameData
{
public:
    Frame85();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME85_H
