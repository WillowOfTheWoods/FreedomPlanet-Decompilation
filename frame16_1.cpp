#include "events.h"
#include "frame16.h"

Frame16::Frame16()
: FrameData()
{
    name = std::string("Lilac's Treehouse (Night)", 25);
}
void Frame16::init()
{
    ((Frames*)frame)->on_frame_16_init();
}
void Frame16::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame16::event_callback(int id)
{
}
void Frame16::handle_events()
{
    ((Frames*)frame)->handle_frame_16_events();
}
void Frame16::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_16_pre_events();
}
void Frame16::on_start()
{
    ((Frames*)frame)->on_frame_16_start_events();
}
