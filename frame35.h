#ifndef CHOWDREN_FRAME35_H
#define CHOWDREN_FRAME35_H

#include "frame.h"

class Frame35 : public FrameData
{
public:
    Frame35();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME35_H
