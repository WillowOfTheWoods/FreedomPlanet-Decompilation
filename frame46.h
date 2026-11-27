#ifndef CHOWDREN_FRAME46_H
#define CHOWDREN_FRAME46_H

#include "frame.h"

class Frame46 : public FrameData
{
public:
    Frame46();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME46_H
