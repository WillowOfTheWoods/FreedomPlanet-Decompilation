#ifndef CHOWDREN_FRAME63_H
#define CHOWDREN_FRAME63_H

#include "frame.h"

class Frame63 : public FrameData
{
public:
    Frame63();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME63_H
