#ifndef CHOWDREN_FRAME33_H
#define CHOWDREN_FRAME33_H

#include "frame.h"

class Frame33 : public FrameData
{
public:
    Frame33();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME33_H
