#ifndef CHOWDREN_FRAME8_H
#define CHOWDREN_FRAME8_H

#include "frame.h"

class Frame8 : public FrameData
{
public:
    Frame8();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME8_H
