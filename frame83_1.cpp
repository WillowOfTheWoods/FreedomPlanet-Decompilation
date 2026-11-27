#include "events.h"
#include "frame83.h"

Frame83::Frame83()
: FrameData()
{
    name = std::string("Scene - Battle Glacier", 22);
}
void Frame83::init()
{
    ((Frames*)frame)->on_frame_83_init();
}
void Frame83::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame83::event_callback(int id)
{
}
void Frame83::handle_events()
{
    ((Frames*)frame)->handle_frame_83_events();
}
void Frame83::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_83_pre_events();
}
void Frame83::on_start()
{
    ((Frames*)frame)->on_frame_83_start_events();
}
