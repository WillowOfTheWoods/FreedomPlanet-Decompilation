#include "events.h"
#include "frame62.h"

Frame62::Frame62()
: FrameData()
{
    name = std::string("Battle Glacier 3", 16);
}
void Frame62::init()
{
    ((Frames*)frame)->on_frame_62_init();
}
void Frame62::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame62::event_callback(int id)
{
}
void Frame62::handle_events()
{
    ((Frames*)frame)->handle_frame_62_events();
}
void Frame62::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_62_pre_events();
}
void Frame62::on_start()
{
    ((Frames*)frame)->on_frame_62_start_events();
}
