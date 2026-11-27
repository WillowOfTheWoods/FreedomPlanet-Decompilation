#ifndef CHOWDREN_FRAME37_H
#define CHOWDREN_FRAME37_H

#include "frame.h"

class Frame37 : public FrameData
{
public:
    Frame37();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME37_H
