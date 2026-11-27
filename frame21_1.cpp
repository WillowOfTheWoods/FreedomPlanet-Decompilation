#include "events.h"
#include "frame21.h"

Frame21::Frame21()
: FrameData()
{
    name = std::string("Dragon Valley 1", 15);
}
void Frame21::init()
{
    ((Frames*)frame)->on_frame_21_init();
}
void Frame21::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame21::event_callback(int id)
{
}
void Frame21::handle_events()
{
    ((Frames*)frame)->handle_frame_21_events();
}
void Frame21::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_21_pre_events();
}
void Frame21::on_start()
{
    ((Frames*)frame)->on_frame_21_start_events();
}
