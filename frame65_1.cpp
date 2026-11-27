#include "events.h"
#include "frame65.h"

Frame65::Frame65()
: FrameData()
{
    name = std::string("Battle Glacier 6", 16);
}
void Frame65::init()
{
    ((Frames*)frame)->on_frame_65_init();
}
void Frame65::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame65::event_callback(int id)
{
}
void Frame65::handle_events()
{
    ((Frames*)frame)->handle_frame_65_events();
}
void Frame65::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_65_pre_events();
}
void Frame65::on_start()
{
    ((Frames*)frame)->on_frame_65_start_events();
}
