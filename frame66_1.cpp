#include "events.h"
#include "frame66.h"

Frame66::Frame66()
: FrameData()
{
    name = std::string("Final Dreadnought 1", 19);
}
void Frame66::init()
{
    ((Frames*)frame)->on_frame_66_init();
}
void Frame66::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame66::event_callback(int id)
{
}
void Frame66::handle_events()
{
    ((Frames*)frame)->handle_frame_66_events();
}
void Frame66::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_66_pre_events();
}
void Frame66::on_start()
{
    ((Frames*)frame)->on_frame_66_start_events();
}
