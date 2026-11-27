#include "events.h"
#include "frame18.h"

Frame18::Frame18()
: FrameData()
{
    name = std::string("Aqua Tunnel 2", 13);
}
void Frame18::init()
{
    ((Frames*)frame)->on_frame_18_init();
}
void Frame18::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame18::event_callback(int id)
{
}
void Frame18::handle_events()
{
    ((Frames*)frame)->handle_frame_18_events();
}
void Frame18::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_18_pre_events();
}
void Frame18::on_start()
{
    ((Frames*)frame)->on_frame_18_start_events();
}
