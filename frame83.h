#ifndef CHOWDREN_FRAME83_H
#define CHOWDREN_FRAME83_H

#include "frame.h"

class Frame83 : public FrameData
{
public:
    Frame83();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME83_H
