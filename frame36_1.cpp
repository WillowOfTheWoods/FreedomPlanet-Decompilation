#include "events.h"
#include "frame36.h"

Frame36::Frame36()
: FrameData()
{
    name = std::string("Sky Battalion Hub", 17);
}
void Frame36::init()
{
    ((Frames*)frame)->on_frame_36_init();
}
void Frame36::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame36::event_callback(int id)
{
}
void Frame36::handle_events()
{
    ((Frames*)frame)->handle_frame_36_events();
}
void Frame36::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_36_pre_events();
}
void Frame36::on_start()
{
    ((Frames*)frame)->on_frame_36_start_events();
}
