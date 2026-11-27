#ifndef CHOWDREN_FRAME59_H
#define CHOWDREN_FRAME59_H

#include "frame.h"

class Frame59 : public FrameData
{
public:
    Frame59();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME59_H
