#include "events.h"
#include "frame78.h"

Frame78::Frame78()
: FrameData()
{
    name = std::string("Scene - Relic Maze", 18);
}
void Frame78::init()
{
    ((Frames*)frame)->on_frame_78_init();
}
void Frame78::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame78::event_callback(int id)
{
}
void Frame78::handle_events()
{
    ((Frames*)frame)->handle_frame_78_events();
}
void Frame78::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_78_pre_events();
}
void Frame78::on_start()
{
    ((Frames*)frame)->on_frame_78_start_events();
}
