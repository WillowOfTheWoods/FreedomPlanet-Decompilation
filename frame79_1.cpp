#include "events.h"
#include "frame79.h"

Frame79::Frame79()
: FrameData()
{
    name = std::string("Scene - Rust Yard", 17);
}
void Frame79::init()
{
    ((Frames*)frame)->on_frame_79_init();
}
void Frame79::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame79::event_callback(int id)
{
}
void Frame79::handle_events()
{
    ((Frames*)frame)->handle_frame_79_events();
}
void Frame79::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_79_pre_events();
}
void Frame79::on_start()
{
    ((Frames*)frame)->on_frame_79_start_events();
}
