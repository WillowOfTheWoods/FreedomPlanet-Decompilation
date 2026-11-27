#include "events.h"
#include "frame30.h"

Frame30::Frame30()
: FrameData()
{
    name = std::string("Fortune Night 1", 15);
}
void Frame30::init()
{
    ((Frames*)frame)->on_frame_30_init();
}
void Frame30::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame30::event_callback(int id)
{
}
void Frame30::handle_events()
{
    ((Frames*)frame)->handle_frame_30_events();
}
void Frame30::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_30_pre_events();
}
void Frame30::on_start()
{
    ((Frames*)frame)->on_frame_30_start_events();
}
