#include "events.h"
#include "frame2.h"

Frame2::Frame2()
: FrameData()
{
    name = std::string("Black Load", 10);
}
void Frame2::init()
{
    ((Frames*)frame)->on_frame_2_init();
}
void Frame2::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame2::event_callback(int id)
{
}
void Frame2::handle_events()
{
    ((Frames*)frame)->handle_frame_2_events();
}
void Frame2::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_2_pre_events();
}
void Frame2::on_start()
{
    ((Frames*)frame)->on_frame_2_start_events();
}
