#include "events.h"
#include "frame87.h"

Frame87::Frame87()
: FrameData()
{
    name = std::string("Credits", 7);
}
void Frame87::init()
{
    ((Frames*)frame)->on_frame_87_init();
}
void Frame87::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame87::event_callback(int id)
{
}
void Frame87::handle_events()
{
    ((Frames*)frame)->handle_frame_87_events();
}
void Frame87::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_87_pre_events();
}
void Frame87::on_start()
{
    ((Frames*)frame)->on_frame_87_start_events();
}
