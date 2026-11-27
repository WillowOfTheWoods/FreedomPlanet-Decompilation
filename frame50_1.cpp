#include "events.h"
#include "frame50.h"

Frame50::Frame50()
: FrameData()
{
    name = std::string("Thermal Base 6", 14);
}
void Frame50::init()
{
    ((Frames*)frame)->on_frame_50_init();
}
void Frame50::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame50::event_callback(int id)
{
}
void Frame50::handle_events()
{
    ((Frames*)frame)->handle_frame_50_events();
}
void Frame50::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_50_pre_events();
}
void Frame50::on_start()
{
    ((Frames*)frame)->on_frame_50_start_events();
}
