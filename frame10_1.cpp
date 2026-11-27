#include "events.h"
#include "frame10.h"

Frame10::Frame10()
: FrameData()
{
    name = std::string("Unlocked!", 9);
}
void Frame10::init()
{
    ((Frames*)frame)->on_frame_10_init();
}
void Frame10::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame10::event_callback(int id)
{
}
void Frame10::handle_events()
{
    ((Frames*)frame)->handle_frame_10_events();
}
void Frame10::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_10_pre_events();
}
void Frame10::on_start()
{
    ((Frames*)frame)->on_frame_10_start_events();
}
