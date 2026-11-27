#ifndef CHOWDREN_FRAME89_H
#define CHOWDREN_FRAME89_H

#include "frame.h"

class Frame89 : public FrameData
{
public:
    Frame89();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME89_H
