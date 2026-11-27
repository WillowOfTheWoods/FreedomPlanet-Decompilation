#include "events.h"
#include "frame88.h"

Frame88::Frame88()
: FrameData()
{
    name = std::string("AVI", 3);
}
void Frame88::init()
{
    ((Frames*)frame)->on_frame_88_init();
}
void Frame88::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame88::event_callback(int id)
{
}
void Frame88::handle_events()
{
    ((Frames*)frame)->handle_frame_88_events();
}
void Frame88::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_88_pre_events();
}
void Frame88::on_start()
{
    ((Frames*)frame)->on_frame_88_start_events();
}
