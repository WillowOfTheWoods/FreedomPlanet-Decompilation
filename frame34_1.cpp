#include "events.h"
#include "frame34.h"

Frame34::Frame34()
: FrameData()
{
    name = std::string("Fortune Night 5", 15);
}
void Frame34::init()
{
    ((Frames*)frame)->on_frame_34_init();
}
void Frame34::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame34::event_callback(int id)
{
}
void Frame34::handle_events()
{
    ((Frames*)frame)->handle_frame_34_events();
}
void Frame34::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_34_pre_events();
}
void Frame34::on_start()
{
    ((Frames*)frame)->on_frame_34_start_events();
}
