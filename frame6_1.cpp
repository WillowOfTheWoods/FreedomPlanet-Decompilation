#include "events.h"
#include "frame6.h"

Frame6::Frame6()
: FrameData()
{
    name = std::string("Time Attack", 11);
}
void Frame6::init()
{
    ((Frames*)frame)->on_frame_6_init();
}
void Frame6::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame6::event_callback(int id)
{
}
void Frame6::handle_events()
{
    ((Frames*)frame)->handle_frame_6_events();
}
void Frame6::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_6_pre_events();
}
void Frame6::on_start()
{
    ((Frames*)frame)->on_frame_6_start_events();
}
