#include "events.h"
#include "frame48.h"

Frame48::Frame48()
: FrameData()
{
    name = std::string("Thermal Base 4", 14);
}
void Frame48::init()
{
    ((Frames*)frame)->on_frame_48_init();
}
void Frame48::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame48::event_callback(int id)
{
}
void Frame48::handle_events()
{
    ((Frames*)frame)->handle_frame_48_events();
}
void Frame48::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_48_pre_events();
}
void Frame48::on_start()
{
    ((Frames*)frame)->on_frame_48_start_events();
}
