#include "events.h"
#include "frame13.h"

Frame13::Frame13()
: FrameData()
{
    name = std::string("Mahjong", 7);
}
void Frame13::init()
{
    ((Frames*)frame)->on_frame_13_init();
}
void Frame13::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame13::event_callback(int id)
{
}
void Frame13::handle_events()
{
    ((Frames*)frame)->handle_frame_13_events();
}
void Frame13::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_13_pre_events();
}
void Frame13::on_start()
{
    ((Frames*)frame)->on_frame_13_start_events();
}
