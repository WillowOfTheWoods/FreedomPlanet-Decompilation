#include "events.h"
#include "frame61.h"

Frame61::Frame61()
: FrameData()
{
    name = std::string("Battle Glacier 2", 16);
}
void Frame61::init()
{
    ((Frames*)frame)->on_frame_61_init();
}
void Frame61::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame61::event_callback(int id)
{
}
void Frame61::handle_events()
{
    ((Frames*)frame)->handle_frame_61_events();
}
void Frame61::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_61_pre_events();
}
void Frame61::on_start()
{
    ((Frames*)frame)->on_frame_61_start_events();
}
