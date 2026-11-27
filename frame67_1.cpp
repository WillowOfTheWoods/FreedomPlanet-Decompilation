#include "events.h"
#include "frame67.h"

Frame67::Frame67()
: FrameData()
{
    name = std::string("Final Dreadnought 2", 19);
}
void Frame67::init()
{
    ((Frames*)frame)->on_frame_67_init();
}
void Frame67::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame67::event_callback(int id)
{
}
void Frame67::handle_events()
{
    ((Frames*)frame)->handle_frame_67_events();
}
void Frame67::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_67_pre_events();
}
void Frame67::on_start()
{
    ((Frames*)frame)->on_frame_67_start_events();
}
