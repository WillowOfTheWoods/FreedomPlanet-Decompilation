#include "events.h"
#include "frame4.h"

Frame4::Frame4()
: FrameData()
{
    name = std::string("Main Menu", 9);
}
void Frame4::init()
{
    ((Frames*)frame)->on_frame_4_init();
}
void Frame4::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame4::event_callback(int id)
{
}
void Frame4::handle_events()
{
    ((Frames*)frame)->handle_frame_4_events();
}
void Frame4::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_4_pre_events();
}
void Frame4::on_start()
{
    ((Frames*)frame)->on_frame_4_start_events();
}
