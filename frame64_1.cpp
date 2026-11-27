#include "events.h"
#include "frame64.h"

Frame64::Frame64()
: FrameData()
{
    name = std::string("Battle Glacier 5", 16);
}
void Frame64::init()
{
    ((Frames*)frame)->on_frame_64_init();
}
void Frame64::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame64::event_callback(int id)
{
}
void Frame64::handle_events()
{
    ((Frames*)frame)->handle_frame_64_events();
}
void Frame64::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_64_pre_events();
}
void Frame64::on_start()
{
    ((Frames*)frame)->on_frame_64_start_events();
}
