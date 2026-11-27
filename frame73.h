#ifndef CHOWDREN_FRAME73_H
#define CHOWDREN_FRAME73_H

#include "frame.h"

class Frame73 : public FrameData
{
public:
    Frame73();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME73_H
