#include "events.h"
#include "frame63.h"

Frame63::Frame63()
: FrameData()
{
    name = std::string("Battle Glacier 4", 16);
}
void Frame63::init()
{
    ((Frames*)frame)->on_frame_63_init();
}
void Frame63::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame63::event_callback(int id)
{
}
void Frame63::handle_events()
{
    ((Frames*)frame)->handle_frame_63_events();
}
void Frame63::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_63_pre_events();
}
void Frame63::on_start()
{
    ((Frames*)frame)->on_frame_63_start_events();
}
