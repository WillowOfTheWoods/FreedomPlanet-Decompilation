#include "events.h"
#include "frame47.h"

Frame47::Frame47()
: FrameData()
{
    name = std::string("Thermal Base 3", 14);
}
void Frame47::init()
{
    ((Frames*)frame)->on_frame_47_init();
}
void Frame47::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame47::event_callback(int id)
{
}
void Frame47::handle_events()
{
    ((Frames*)frame)->handle_frame_47_events();
}
void Frame47::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_47_pre_events();
}
void Frame47::on_start()
{
    ((Frames*)frame)->on_frame_47_start_events();
}
