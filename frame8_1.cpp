#include "events.h"
#include "frame8.h"

Frame8::Frame8()
: FrameData()
{
    name = std::string("Black Load", 10);
}
void Frame8::init()
{
    ((Frames*)frame)->on_frame_8_init();
}
void Frame8::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame8::event_callback(int id)
{
}
void Frame8::handle_events()
{
    ((Frames*)frame)->handle_frame_8_events();
}
void Frame8::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_8_pre_events();
}
void Frame8::on_start()
{
    ((Frames*)frame)->on_frame_8_start_events();
}
