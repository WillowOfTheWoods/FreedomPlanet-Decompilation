#include "events.h"
#include "frame39.h"

Frame39::Frame39()
: FrameData()
{
    name = std::string("Sky Battalion 3", 15);
}
void Frame39::init()
{
    ((Frames*)frame)->on_frame_39_init();
}
void Frame39::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame39::event_callback(int id)
{
}
void Frame39::handle_events()
{
    ((Frames*)frame)->handle_frame_39_events();
}
void Frame39::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_39_pre_events();
}
void Frame39::on_start()
{
    ((Frames*)frame)->on_frame_39_start_events();
}
