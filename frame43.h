#ifndef CHOWDREN_FRAME43_H
#define CHOWDREN_FRAME43_H

#include "frame.h"

class Frame43 : public FrameData
{
public:
    Frame43();
    void init();
    void on_end();
    void event_callback(int id);
    void handle_events();
    void handle_pre_events();
    void on_start();
};

#endif // CHOWDREN_FRAME43_H
