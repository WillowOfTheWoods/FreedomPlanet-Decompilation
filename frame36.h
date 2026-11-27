#ifndef CHOWDREN_FRAME36_H
#define CHOWDREN_FRAME36_H

#include "frame.h"

class Frame36 : public FrameData
{
public:
    Frame36();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME36_H
