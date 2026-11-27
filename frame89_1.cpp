#include "events.h"
#include "frame89.h"

Frame89::Frame89()
: FrameData()
{
    name = std::string("Frame 9", 7);
}
void Frame89::init()
{
    ((Frames*)frame)->on_frame_89_init();
}
void Frame89::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame89::event_callback(int id)
{
}
void Frame89::handle_events()
{
    ((Frames*)frame)->handle_frame_89_events();
}
void Frame89::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_89_pre_events();
}
void Frame89::on_start()
{
    ((Frames*)frame)->on_frame_89_start_events();
}
