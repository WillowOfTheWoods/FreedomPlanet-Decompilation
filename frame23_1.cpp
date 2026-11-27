#include "events.h"
#include "frame23.h"

Frame23::Frame23()
: FrameData()
{
    name = std::string("Dragon Valley 3", 15);
}
void Frame23::init()
{
    ((Frames*)frame)->on_frame_23_init();
}
void Frame23::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame23::event_callback(int id)
{
}
void Frame23::handle_events()
{
    ((Frames*)frame)->handle_frame_23_events();
}
void Frame23::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_23_pre_events();
}
void Frame23::on_start()
{
    ((Frames*)frame)->on_frame_23_start_events();
}
