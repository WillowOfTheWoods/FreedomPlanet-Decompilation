#include "events.h"
#include "frame72.h"

Frame72::Frame72()
: FrameData()
{
    name = std::string("Final Dreadnought 7", 19);
}
void Frame72::init()
{
    ((Frames*)frame)->on_frame_72_init();
}
void Frame72::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame72::event_callback(int id)
{
}
void Frame72::handle_events()
{
    ((Frames*)frame)->handle_frame_72_events();
}
void Frame72::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_72_pre_events();
}
void Frame72::on_start()
{
    ((Frames*)frame)->on_frame_72_start_events();
}
