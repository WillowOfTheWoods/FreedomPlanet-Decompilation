#include "events.h"
#include "frame52.h"

Frame52::Frame52()
: FrameData()
{
    name = std::string("Pangu Lagoon 2", 14);
}
void Frame52::init()
{
    ((Frames*)frame)->on_frame_52_init();
}
void Frame52::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame52::event_callback(int id)
{
}
void Frame52::handle_events()
{
    ((Frames*)frame)->handle_frame_52_events();
}
void Frame52::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_52_pre_events();
}
void Frame52::on_start()
{
    ((Frames*)frame)->on_frame_52_start_events();
}
