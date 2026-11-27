#ifndef CHOWDREN_FRAME42_H
#define CHOWDREN_FRAME42_H

#include "frame.h"

class Frame42 : public FrameData
{
public:
    Frame42();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME42_H
