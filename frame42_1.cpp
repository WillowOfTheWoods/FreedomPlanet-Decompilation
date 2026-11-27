#include "events.h"
#include "frame42.h"

Frame42::Frame42()
: FrameData()
{
    name = std::string("Jade Creek 3", 12);
}
void Frame42::init()
{
    ((Frames*)frame)->on_frame_42_init();
}
void Frame42::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame42::event_callback(int id)
{
}
void Frame42::handle_events()
{
    ((Frames*)frame)->handle_frame_42_events();
}
void Frame42::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_42_pre_events();
}
void Frame42::on_start()
{
    ((Frames*)frame)->on_frame_42_start_events();
}
