#include "events.h"
#include "frame31.h"

Frame31::Frame31()
: FrameData()
{
    name = std::string("Fortune Night 2", 15);
}
void Frame31::init()
{
    ((Frames*)frame)->on_frame_31_init();
}
void Frame31::on_end()
{
    ((Frames*)frame)->on_frame_31_end();
    ((Frames*)frame)->reset();
}
void Frame31::event_callback(int id)
{
}
void Frame31::handle_events()
{
    ((Frames*)frame)->handle_frame_31_events();
}
void Frame31::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_31_pre_events();
}
void Frame31::on_start()
{
    ((Frames*)frame)->on_frame_31_start_events();
}
