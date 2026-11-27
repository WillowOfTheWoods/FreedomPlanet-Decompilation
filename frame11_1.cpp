#include "events.h"
#include "frame11.h"

Frame11::Frame11()
: FrameData()
{
    name = std::string("Gallery", 7);
}
void Frame11::init()
{
    ((Frames*)frame)->on_frame_11_init();
}
void Frame11::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame11::event_callback(int id)
{
}
void Frame11::handle_events()
{
    ((Frames*)frame)->handle_frame_11_events();
}
void Frame11::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_11_pre_events();
}
void Frame11::on_start()
{
    ((Frames*)frame)->on_frame_11_start_events();
}
