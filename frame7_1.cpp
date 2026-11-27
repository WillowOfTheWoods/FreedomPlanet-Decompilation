#include "events.h"
#include "frame7.h"

Frame7::Frame7()
: FrameData()
{
    name = std::string("Character Select", 16);
}
void Frame7::init()
{
    ((Frames*)frame)->on_frame_7_init();
}
void Frame7::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame7::event_callback(int id)
{
}
void Frame7::handle_events()
{
    ((Frames*)frame)->handle_frame_7_events();
}
void Frame7::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_7_pre_events();
}
void Frame7::on_start()
{
    ((Frames*)frame)->on_frame_7_start_events();
}
