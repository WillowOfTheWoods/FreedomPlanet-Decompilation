#include "events.h"
#include "frame80.h"

Frame80::Frame80()
: FrameData()
{
    name = std::string("Scene - Fortune Night", 21);
}
void Frame80::init()
{
    ((Frames*)frame)->on_frame_80_init();
}
void Frame80::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame80::event_callback(int id)
{
}
void Frame80::handle_events()
{
    ((Frames*)frame)->handle_frame_80_events();
}
void Frame80::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_80_pre_events();
}
void Frame80::on_start()
{
    ((Frames*)frame)->on_frame_80_start_events();
}
