#include "events.h"
#include "frame77.h"

Frame77::Frame77()
: FrameData()
{
    name = std::string("Scene - Dragon Valley", 21);
}
void Frame77::init()
{
    ((Frames*)frame)->on_frame_77_init();
}
void Frame77::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame77::event_callback(int id)
{
}
void Frame77::handle_events()
{
    ((Frames*)frame)->handle_frame_77_events();
}
void Frame77::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_77_pre_events();
}
void Frame77::on_start()
{
    ((Frames*)frame)->on_frame_77_start_events();
}
