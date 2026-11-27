#include "events.h"
#include "frame5.h"

Frame5::Frame5()
: FrameData()
{
    name = std::string("Character Select (debug)", 24);
}
void Frame5::init()
{
    ((Frames*)frame)->on_frame_5_init();
}
void Frame5::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame5::event_callback(int id)
{
}
void Frame5::handle_events()
{
    ((Frames*)frame)->handle_frame_5_events();
}
void Frame5::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_5_pre_events();
}
void Frame5::on_start()
{
    ((Frames*)frame)->on_frame_5_start_events();
}
