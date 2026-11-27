#ifndef CHOWDREN_FRAME15_H
#define CHOWDREN_FRAME15_H

#include "frame.h"

class Frame15 : public FrameData
{
public:
    Frame15();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME15_H
