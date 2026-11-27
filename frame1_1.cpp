#include "events.h"
#include "frame1.h"

Frame1::Frame1()
: FrameData()
{
    name = std::string("Intro", 5);
}
void Frame1::init()
{
    ((Frames*)frame)->on_frame_1_init();
}
void Frame1::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame1::event_callback(int id)
{
}
void Frame1::handle_events()
{
    ((Frames*)frame)->handle_frame_1_events();
}
void Frame1::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_1_pre_events();
}
void Frame1::on_start()
{
    ((Frames*)frame)->on_frame_1_start_events();
}
