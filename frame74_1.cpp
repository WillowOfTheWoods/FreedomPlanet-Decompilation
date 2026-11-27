#include "events.h"
#include "frame74.h"

Frame74::Frame74()
: FrameData()
{
    name = std::string("Shang Mu Academy", 16);
}
void Frame74::init()
{
    ((Frames*)frame)->on_frame_74_init();
}
void Frame74::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame74::event_callback(int id)
{
}
void Frame74::handle_events()
{
    ((Frames*)frame)->handle_frame_74_events();
}
void Frame74::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_74_pre_events();
}
void Frame74::on_start()
{
    ((Frames*)frame)->on_frame_74_start_events();
}
