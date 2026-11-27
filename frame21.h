#ifndef CHOWDREN_FRAME21_H
#define CHOWDREN_FRAME21_H

#include "frame.h"

class Frame21 : public FrameData
{
public:
    Frame21();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME21_H
