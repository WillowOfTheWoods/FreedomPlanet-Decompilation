#include "events.h"
#include "frame49.h"

Frame49::Frame49()
: FrameData()
{
    name = std::string("Thermal Base 5", 14);
}
void Frame49::init()
{
    ((Frames*)frame)->on_frame_49_init();
}
void Frame49::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame49::event_callback(int id)
{
}
void Frame49::handle_events()
{
    ((Frames*)frame)->handle_frame_49_events();
}
void Frame49::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_49_pre_events();
}
void Frame49::on_start()
{
    ((Frames*)frame)->on_frame_49_start_events();
}
