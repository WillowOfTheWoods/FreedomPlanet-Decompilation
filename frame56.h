#ifndef CHOWDREN_FRAME56_H
#define CHOWDREN_FRAME56_H

#include "frame.h"

class Frame56 : public FrameData
{
public:
    Frame56();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME56_H
