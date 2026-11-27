#include "events.h"
#include "frame54.h"

Frame54::Frame54()
: FrameData()
{
    name = std::string("Pangu Lagoon 4", 14);
}
void Frame54::init()
{
    ((Frames*)frame)->on_frame_54_init();
}
void Frame54::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame54::event_callback(int id)
{
}
void Frame54::handle_events()
{
    ((Frames*)frame)->handle_frame_54_events();
}
void Frame54::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_54_pre_events();
}
void Frame54::on_start()
{
    ((Frames*)frame)->on_frame_54_start_events();
}
