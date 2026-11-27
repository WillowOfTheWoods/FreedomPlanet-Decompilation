#include "events.h"
#include "frame68.h"

Frame68::Frame68()
: FrameData()
{
    name = std::string("Final Dreadnought 3", 19);
}
void Frame68::init()
{
    ((Frames*)frame)->on_frame_68_init();
}
void Frame68::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame68::event_callback(int id)
{
}
void Frame68::handle_events()
{
    ((Frames*)frame)->handle_frame_68_events();
}
void Frame68::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_68_pre_events();
}
void Frame68::on_start()
{
    ((Frames*)frame)->on_frame_68_start_events();
}
