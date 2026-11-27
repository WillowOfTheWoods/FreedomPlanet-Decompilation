#ifndef CHOWDREN_FRAME26_H
#define CHOWDREN_FRAME26_H

#include "frame.h"

class Frame26 : public FrameData
{
public:
    Frame26();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME26_H
