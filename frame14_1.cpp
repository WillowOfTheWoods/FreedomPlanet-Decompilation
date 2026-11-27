#include "events.h"
#include "frame14.h"

Frame14::Frame14()
: FrameData()
{
    name = std::string("Bonus Stage", 11);
}
void Frame14::init()
{
    ((Frames*)frame)->on_frame_14_init();
}
void Frame14::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame14::event_callback(int id)
{
}
void Frame14::handle_events()
{
    ((Frames*)frame)->handle_frame_14_events();
}
void Frame14::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_14_pre_events();
}
void Frame14::on_start()
{
    ((Frames*)frame)->on_frame_14_start_events();
}
