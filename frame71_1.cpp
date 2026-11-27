#include "events.h"
#include "frame71.h"

Frame71::Frame71()
: FrameData()
{
    name = std::string("Final Dreadnought 6", 19);
}
void Frame71::init()
{
    ((Frames*)frame)->on_frame_71_init();
}
void Frame71::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame71::event_callback(int id)
{
}
void Frame71::handle_events()
{
    ((Frames*)frame)->handle_frame_71_events();
}
void Frame71::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_71_pre_events();
}
void Frame71::on_start()
{
    ((Frames*)frame)->on_frame_71_start_events();
}
