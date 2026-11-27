#ifndef CHOWDREN_FRAME77_H
#define CHOWDREN_FRAME77_H

#include "frame.h"

class Frame77 : public FrameData
{
public:
    Frame77();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME77_H
