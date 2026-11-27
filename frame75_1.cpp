#include "events.h"
#include "frame75.h"

Frame75::Frame75()
: FrameData()
{
    name = std::string("Shang Tu Dojo", 13);
}
void Frame75::init()
{
    ((Frames*)frame)->on_frame_75_init();
}
void Frame75::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame75::event_callback(int id)
{
}
void Frame75::handle_events()
{
    ((Frames*)frame)->handle_frame_75_events();
}
void Frame75::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_75_pre_events();
}
void Frame75::on_start()
{
    ((Frames*)frame)->on_frame_75_start_events();
}
