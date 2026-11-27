#include "events.h"
#include "frame32.h"

Frame32::Frame32()
: FrameData()
{
    name = std::string("Fortune Night 3", 15);
}
void Frame32::init()
{
    ((Frames*)frame)->on_frame_32_init();
}
void Frame32::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame32::event_callback(int id)
{
}
void Frame32::handle_events()
{
    ((Frames*)frame)->handle_frame_32_events();
}
void Frame32::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_32_pre_events();
}
void Frame32::on_start()
{
    ((Frames*)frame)->on_frame_32_start_events();
}
