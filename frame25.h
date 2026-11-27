#ifndef CHOWDREN_FRAME25_H
#define CHOWDREN_FRAME25_H

#include "frame.h"

class Frame25 : public FrameData
{
public:
    Frame25();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME25_H
