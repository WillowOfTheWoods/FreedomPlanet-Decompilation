#include "events.h"
#include "frame56.h"

Frame56::Frame56()
: FrameData()
{
    name = std::string("Pangu Lagoon 6", 14);
}
void Frame56::init()
{
    ((Frames*)frame)->on_frame_56_init();
}
void Frame56::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame56::event_callback(int id)
{
}
void Frame56::handle_events()
{
    ((Frames*)frame)->handle_frame_56_events();
}
void Frame56::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_56_pre_events();
}
void Frame56::on_start()
{
    ((Frames*)frame)->on_frame_56_start_events();
}
