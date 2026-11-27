#include "events.h"
#include "frame44.h"

Frame44::Frame44()
: FrameData()
{
    name = std::string("Jade Creek 5", 12);
}
void Frame44::init()
{
    ((Frames*)frame)->on_frame_44_init();
}
void Frame44::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame44::event_callback(int id)
{
}
void Frame44::handle_events()
{
    ((Frames*)frame)->handle_frame_44_events();
}
void Frame44::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_44_pre_events();
}
void Frame44::on_start()
{
    ((Frames*)frame)->on_frame_44_start_events();
}
