#include "events.h"
#include "frame35.h"

Frame35::Frame35()
: FrameData()
{
    name = std::string("Fortune Night 6", 15);
}
void Frame35::init()
{
    ((Frames*)frame)->on_frame_35_init();
}
void Frame35::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame35::event_callback(int id)
{
}
void Frame35::handle_events()
{
    ((Frames*)frame)->handle_frame_35_events();
}
void Frame35::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_35_pre_events();
}
void Frame35::on_start()
{
    ((Frames*)frame)->on_frame_35_start_events();
}
