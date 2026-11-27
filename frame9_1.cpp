#include "events.h"
#include "frame9.h"

Frame9::Frame9()
: FrameData()
{
    name = std::string("Update Records", 14);
}
void Frame9::init()
{
    ((Frames*)frame)->on_frame_9_init();
}
void Frame9::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame9::event_callback(int id)
{
}
void Frame9::handle_events()
{
    ((Frames*)frame)->handle_frame_9_events();
}
void Frame9::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_9_pre_events();
}
void Frame9::on_start()
{
    ((Frames*)frame)->on_frame_9_start_events();
}
