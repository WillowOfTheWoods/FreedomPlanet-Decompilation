#ifndef CHOWDREN_FRAME30_H
#define CHOWDREN_FRAME30_H

#include "frame.h"

class Frame30 : public FrameData
{
public:
    Frame30();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME30_H
