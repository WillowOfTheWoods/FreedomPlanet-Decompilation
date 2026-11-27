#ifndef CHOWDREN_FRAME52_H
#define CHOWDREN_FRAME52_H

#include "frame.h"

class Frame52 : public FrameData
{
public:
    Frame52();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME52_H
