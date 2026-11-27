#include "events.h"
#include "frame76.h"

Frame76::Frame76()
: FrameData()
{
    name = std::string("Continue\?", 9);
}
void Frame76::init()
{
    ((Frames*)frame)->on_frame_76_init();
}
void Frame76::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame76::event_callback(int id)
{
}
void Frame76::handle_events()
{
    ((Frames*)frame)->handle_frame_76_events();
}
void Frame76::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_76_pre_events();
}
void Frame76::on_start()
{
    ((Frames*)frame)->on_frame_76_start_events();
}
