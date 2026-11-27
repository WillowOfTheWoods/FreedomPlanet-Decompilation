#include "events.h"
#include "frame82.h"

Frame82::Frame82()
: FrameData()
{
    name = std::string("Scene - Thermal Base", 20);
}
void Frame82::init()
{
    ((Frames*)frame)->on_frame_82_init();
}
void Frame82::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame82::event_callback(int id)
{
}
void Frame82::handle_events()
{
    ((Frames*)frame)->handle_frame_82_events();
}
void Frame82::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_82_pre_events();
}
void Frame82::on_start()
{
    ((Frames*)frame)->on_frame_82_start_events();
}
