#include "events.h"
#include "frame40.h"

Frame40::Frame40()
: FrameData()
{
    name = std::string("Jade Creek 1", 12);
}
void Frame40::init()
{
    ((Frames*)frame)->on_frame_40_init();
}
void Frame40::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame40::event_callback(int id)
{
}
void Frame40::handle_events()
{
    ((Frames*)frame)->handle_frame_40_events();
}
void Frame40::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_40_pre_events();
}
void Frame40::on_start()
{
    ((Frames*)frame)->on_frame_40_start_events();
}
