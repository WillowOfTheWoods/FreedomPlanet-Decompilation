#ifndef CHOWDREN_FRAME67_H
#define CHOWDREN_FRAME67_H

#include "frame.h"

class Frame67 : public FrameData
{
public:
    Frame67();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME67_H
