#ifndef CHOWDREN_FRAME28_H
#define CHOWDREN_FRAME28_H

#include "frame.h"

class Frame28 : public FrameData
{
public:
    Frame28();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME28_H
