#include "events.h"
#include "frame70.h"

Frame70::Frame70()
: FrameData()
{
    name = std::string("Final Dreadnought 5", 19);
}
void Frame70::init()
{
    ((Frames*)frame)->on_frame_70_init();
}
void Frame70::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame70::event_callback(int id)
{
}
void Frame70::handle_events()
{
    ((Frames*)frame)->handle_frame_70_events();
}
void Frame70::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_70_pre_events();
}
void Frame70::on_start()
{
    ((Frames*)frame)->on_frame_70_start_events();
}
