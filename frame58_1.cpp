#include "events.h"
#include "frame58.h"

Frame58::Frame58()
: FrameData()
{
    name = std::string("Trap Hideout 2", 14);
}
void Frame58::init()
{
    ((Frames*)frame)->on_frame_58_init();
}
void Frame58::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame58::event_callback(int id)
{
}
void Frame58::handle_events()
{
    ((Frames*)frame)->handle_frame_58_events();
}
void Frame58::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_58_pre_events();
}
void Frame58::on_start()
{
    ((Frames*)frame)->on_frame_58_start_events();
}
