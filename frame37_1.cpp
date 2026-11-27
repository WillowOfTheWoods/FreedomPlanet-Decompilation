#include "events.h"
#include "frame37.h"

Frame37::Frame37()
: FrameData()
{
    name = std::string("Sky Battalion 1", 15);
}
void Frame37::init()
{
    ((Frames*)frame)->on_frame_37_init();
}
void Frame37::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame37::event_callback(int id)
{
}
void Frame37::handle_events()
{
    ((Frames*)frame)->handle_frame_37_events();
}
void Frame37::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_37_pre_events();
}
void Frame37::on_start()
{
    ((Frames*)frame)->on_frame_37_start_events();
}
