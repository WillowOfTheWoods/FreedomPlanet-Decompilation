#include "events.h"
#include "frame3.h"

Frame3::Frame3()
: FrameData()
{
    name = std::string("Title Screen", 12);
}
void Frame3::init()
{
    ((Frames*)frame)->on_frame_3_init();
}
void Frame3::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame3::event_callback(int id)
{
}
void Frame3::handle_events()
{
    ((Frames*)frame)->handle_frame_3_events();
}
void Frame3::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_3_pre_events();
}
void Frame3::on_start()
{
    ((Frames*)frame)->on_frame_3_start_events();
}
