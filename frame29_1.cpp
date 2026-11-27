#include "events.h"
#include "frame29.h"

Frame29::Frame29()
: FrameData()
{
    name = std::string("Relic Maze 5", 12);
}
void Frame29::init()
{
    ((Frames*)frame)->on_frame_29_init();
}
void Frame29::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame29::event_callback(int id)
{
}
void Frame29::handle_events()
{
    ((Frames*)frame)->handle_frame_29_events();
}
void Frame29::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_29_pre_events();
}
void Frame29::on_start()
{
    ((Frames*)frame)->on_frame_29_start_events();
}
