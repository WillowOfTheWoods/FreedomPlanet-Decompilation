#include "events.h"
#include "frame38.h"

Frame38::Frame38()
: FrameData()
{
    name = std::string("Sky Battalion 2", 15);
}
void Frame38::init()
{
    ((Frames*)frame)->on_frame_38_init();
}
void Frame38::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame38::event_callback(int id)
{
}
void Frame38::handle_events()
{
    ((Frames*)frame)->handle_frame_38_events();
}
void Frame38::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_38_pre_events();
}
void Frame38::on_start()
{
    ((Frames*)frame)->on_frame_38_start_events();
}
