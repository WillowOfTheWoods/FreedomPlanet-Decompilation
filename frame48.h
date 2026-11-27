#ifndef CHOWDREN_FRAME48_H
#define CHOWDREN_FRAME48_H

#include "frame.h"

class Frame48 : public FrameData
{
public:
    Frame48();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME48_H
