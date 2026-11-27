#include "events.h"
#include "frame17.h"

Frame17::Frame17()
: FrameData()
{
    name = std::string("Aqua Tunnel 1", 13);
}
void Frame17::init()
{
    ((Frames*)frame)->on_frame_17_init();
}
void Frame17::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame17::event_callback(int id)
{
}
void Frame17::handle_events()
{
    ((Frames*)frame)->handle_frame_17_events();
}
void Frame17::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_17_pre_events();
}
void Frame17::on_start()
{
    ((Frames*)frame)->on_frame_17_start_events();
}
