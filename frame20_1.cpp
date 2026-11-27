#include "events.h"
#include "frame20.h"

Frame20::Frame20()
: FrameData()
{
    name = std::string("Aqua Tunnel 4", 13);
}
void Frame20::init()
{
    ((Frames*)frame)->on_frame_20_init();
}
void Frame20::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame20::event_callback(int id)
{
}
void Frame20::handle_events()
{
    ((Frames*)frame)->handle_frame_20_events();
}
void Frame20::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_20_pre_events();
}
void Frame20::on_start()
{
    ((Frames*)frame)->on_frame_20_start_events();
}
