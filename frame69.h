#ifndef CHOWDREN_FRAME69_H
#define CHOWDREN_FRAME69_H

#include "frame.h"

class Frame69 : public FrameData
{
public:
    Frame69();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME69_H
