#include "events.h"
#include "frame84.h"

Frame84::Frame84()
: FrameData()
{
    name = std::string("Scene - Indoor Rooms", 20);
}
void Frame84::init()
{
    ((Frames*)frame)->on_frame_84_init();
}
void Frame84::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame84::event_callback(int id)
{
}
void Frame84::handle_events()
{
    ((Frames*)frame)->handle_frame_84_events();
}
void Frame84::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_84_pre_events();
}
void Frame84::on_start()
{
    ((Frames*)frame)->on_frame_84_start_events();
}
