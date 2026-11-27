#ifndef CHOWDREN_FRAME9_H
#define CHOWDREN_FRAME9_H

#include "frame.h"

class Frame9 : public FrameData
{
public:
    Frame9();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME9_H
