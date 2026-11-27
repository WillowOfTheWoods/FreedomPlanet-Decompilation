#include "events.h"
#include "frame60.h"

Frame60::Frame60()
: FrameData()
{
    name = std::string("Battle Glacier 1", 16);
}
void Frame60::init()
{
    ((Frames*)frame)->on_frame_60_init();
}
void Frame60::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame60::event_callback(int id)
{
}
void Frame60::handle_events()
{
    ((Frames*)frame)->handle_frame_60_events();
}
void Frame60::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_60_pre_events();
}
void Frame60::on_start()
{
    ((Frames*)frame)->on_frame_60_start_events();
}
