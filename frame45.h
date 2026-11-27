#ifndef CHOWDREN_FRAME45_H
#define CHOWDREN_FRAME45_H

#include "frame.h"

class Frame45 : public FrameData
{
public:
    Frame45();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME45_H
