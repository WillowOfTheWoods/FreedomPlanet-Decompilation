#include "events.h"
#include "frame45.h"

Frame45::Frame45()
: FrameData()
{
    name = std::string("Thermal Base 1", 14);
}
void Frame45::init()
{
    ((Frames*)frame)->on_frame_45_init();
}
void Frame45::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame45::event_callback(int id)
{
}
void Frame45::handle_events()
{
    ((Frames*)frame)->handle_frame_45_events();
}
void Frame45::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_45_pre_events();
}
void Frame45::on_start()
{
    ((Frames*)frame)->on_frame_45_start_events();
}
