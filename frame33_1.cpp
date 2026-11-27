#include "events.h"
#include "frame33.h"

Frame33::Frame33()
: FrameData()
{
    name = std::string("Fortune Night 4", 15);
}
void Frame33::init()
{
    ((Frames*)frame)->on_frame_33_init();
}
void Frame33::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame33::event_callback(int id)
{
}
void Frame33::handle_events()
{
    ((Frames*)frame)->handle_frame_33_events();
}
void Frame33::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_33_pre_events();
}
void Frame33::on_start()
{
    ((Frames*)frame)->on_frame_33_start_events();
}
