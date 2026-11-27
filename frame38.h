#ifndef CHOWDREN_FRAME38_H
#define CHOWDREN_FRAME38_H

#include "frame.h"

class Frame38 : public FrameData
{
public:
    Frame38();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME38_H
