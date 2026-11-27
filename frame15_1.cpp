#include "events.h"
#include "frame15.h"

Frame15::Frame15()
: FrameData()
{
    name = std::string("Lilac's Treehouse (Day)", 23);
}
void Frame15::init()
{
    ((Frames*)frame)->on_frame_15_init();
}
void Frame15::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame15::event_callback(int id)
{
}
void Frame15::handle_events()
{
    ((Frames*)frame)->handle_frame_15_events();
}
void Frame15::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_15_pre_events();
}
void Frame15::on_start()
{
    ((Frames*)frame)->on_frame_15_start_events();
}
