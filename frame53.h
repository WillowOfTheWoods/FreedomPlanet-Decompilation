#ifndef CHOWDREN_FRAME53_H
#define CHOWDREN_FRAME53_H

#include "frame.h"

class Frame53 : public FrameData
{
public:
    Frame53();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME53_H
