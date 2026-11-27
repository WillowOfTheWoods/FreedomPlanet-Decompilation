#include "events.h"
#include "frame19.h"

Frame19::Frame19()
: FrameData()
{
    name = std::string("Aqua Tunnel 3", 13);
}
void Frame19::init()
{
    ((Frames*)frame)->on_frame_19_init();
}
void Frame19::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame19::event_callback(int id)
{
}
void Frame19::handle_events()
{
    ((Frames*)frame)->handle_frame_19_events();
}
void Frame19::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_19_pre_events();
}
void Frame19::on_start()
{
    ((Frames*)frame)->on_frame_19_start_events();
}
