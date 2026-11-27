#include "events.h"
#include "frame12.h"

Frame12::Frame12()
: FrameData()
{
    name = std::string("Adventure stage select", 22);
}
void Frame12::init()
{
    ((Frames*)frame)->on_frame_12_init();
}
void Frame12::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame12::event_callback(int id)
{
}
void Frame12::handle_events()
{
    ((Frames*)frame)->handle_frame_12_events();
}
void Frame12::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_12_pre_events();
}
void Frame12::on_start()
{
    ((Frames*)frame)->on_frame_12_start_events();
}
