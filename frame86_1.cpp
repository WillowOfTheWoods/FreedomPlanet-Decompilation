#include "events.h"
#include "frame86.h"

Frame86::Frame86()
: FrameData()
{
    name = std::string("Schmup - Battle Glacier", 23);
}
void Frame86::init()
{
    ((Frames*)frame)->on_frame_86_init();
}
void Frame86::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame86::event_callback(int id)
{
}
void Frame86::handle_events()
{
    ((Frames*)frame)->handle_frame_86_events();
}
void Frame86::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_86_pre_events();
}
void Frame86::on_start()
{
    ((Frames*)frame)->on_frame_86_start_events();
}
