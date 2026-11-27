#include "events.h"
#include "frame57.h"

Frame57::Frame57()
: FrameData()
{
    name = std::string("Trap Hideout 1", 14);
}
void Frame57::init()
{
    ((Frames*)frame)->on_frame_57_init();
}
void Frame57::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame57::event_callback(int id)
{
}
void Frame57::handle_events()
{
    ((Frames*)frame)->handle_frame_57_events();
}
void Frame57::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_57_pre_events();
}
void Frame57::on_start()
{
    ((Frames*)frame)->on_frame_57_start_events();
}
