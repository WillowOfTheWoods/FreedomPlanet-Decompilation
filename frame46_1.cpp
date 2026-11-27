#include "events.h"
#include "frame46.h"

Frame46::Frame46()
: FrameData()
{
    name = std::string("Thermal Base 2", 14);
}
void Frame46::init()
{
    ((Frames*)frame)->on_frame_46_init();
}
void Frame46::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame46::event_callback(int id)
{
}
void Frame46::handle_events()
{
    ((Frames*)frame)->handle_frame_46_events();
}
void Frame46::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_46_pre_events();
}
void Frame46::on_start()
{
    ((Frames*)frame)->on_frame_46_start_events();
}
