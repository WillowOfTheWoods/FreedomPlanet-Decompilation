#include "events.h"
#include "frame51.h"

Frame51::Frame51()
: FrameData()
{
    name = std::string("Pangu Lagoon 1", 14);
}
void Frame51::init()
{
    ((Frames*)frame)->on_frame_51_init();
}
void Frame51::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame51::event_callback(int id)
{
}
void Frame51::handle_events()
{
    ((Frames*)frame)->handle_frame_51_events();
}
void Frame51::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_51_pre_events();
}
void Frame51::on_start()
{
    ((Frames*)frame)->on_frame_51_start_events();
}
