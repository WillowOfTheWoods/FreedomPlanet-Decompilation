#ifndef CHOWDREN_FRAME41_H
#define CHOWDREN_FRAME41_H

#include "frame.h"

class Frame41 : public FrameData
{
public:
    Frame41();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME41_H
