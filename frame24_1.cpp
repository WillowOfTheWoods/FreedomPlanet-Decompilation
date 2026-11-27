#include "events.h"
#include "frame24.h"

Frame24::Frame24()
: FrameData()
{
    name = std::string("Dragon Valley 4", 15);
}
void Frame24::init()
{
    ((Frames*)frame)->on_frame_24_init();
}
void Frame24::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame24::event_callback(int id)
{
}
void Frame24::handle_events()
{
    ((Frames*)frame)->handle_frame_24_events();
}
void Frame24::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_24_pre_events();
}
void Frame24::on_start()
{
    ((Frames*)frame)->on_frame_24_start_events();
}
