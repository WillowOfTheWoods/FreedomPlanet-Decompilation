#include "events.h"
#include "frame53.h"

Frame53::Frame53()
: FrameData()
{
    name = std::string("Pangu Lagoon 3", 14);
}
void Frame53::init()
{
    ((Frames*)frame)->on_frame_53_init();
}
void Frame53::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame53::event_callback(int id)
{
}
void Frame53::handle_events()
{
    ((Frames*)frame)->handle_frame_53_events();
}
void Frame53::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_53_pre_events();
}
void Frame53::on_start()
{
    ((Frames*)frame)->on_frame_53_start_events();
}
