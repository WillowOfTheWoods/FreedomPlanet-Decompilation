#ifndef CHOWDREN_FRAME4_H
#define CHOWDREN_FRAME4_H

#include "frame.h"

class Frame4 : public FrameData
{
public:
    Frame4();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME4_H
