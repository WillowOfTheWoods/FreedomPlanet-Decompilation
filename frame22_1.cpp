#include "events.h"
#include "frame22.h"

Frame22::Frame22()
: FrameData()
{
    name = std::string("Dragon Valley 2", 15);
}
void Frame22::init()
{
    ((Frames*)frame)->on_frame_22_init();
}
void Frame22::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame22::event_callback(int id)
{
}
void Frame22::handle_events()
{
    ((Frames*)frame)->handle_frame_22_events();
}
void Frame22::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_22_pre_events();
}
void Frame22::on_start()
{
    ((Frames*)frame)->on_frame_22_start_events();
}
