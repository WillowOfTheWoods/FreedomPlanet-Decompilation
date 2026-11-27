#ifndef CHOWDREN_FRAME50_H
#define CHOWDREN_FRAME50_H

#include "frame.h"

class Frame50 : public FrameData
{
public:
    Frame50();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME50_H
