#include "events.h"
#include "frame59.h"

Frame59::Frame59()
: FrameData()
{
    name = std::string("Trap Hideout 3", 14);
}
void Frame59::init()
{
    ((Frames*)frame)->on_frame_59_init();
}
void Frame59::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame59::event_callback(int id)
{
}
void Frame59::handle_events()
{
    ((Frames*)frame)->handle_frame_59_events();
}
void Frame59::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_59_pre_events();
}
void Frame59::on_start()
{
    ((Frames*)frame)->on_frame_59_start_events();
}
