#include "events.h"
#include "frame85.h"

Frame85::Frame85()
: FrameData()
{
    name = std::string("Scene - Space", 13);
}
void Frame85::init()
{
    ((Frames*)frame)->on_frame_85_init();
}
void Frame85::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame85::event_callback(int id)
{
}
void Frame85::handle_events()
{
    ((Frames*)frame)->handle_frame_85_events();
}
void Frame85::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_85_pre_events();
}
void Frame85::on_start()
{
    ((Frames*)frame)->on_frame_85_start_events();
}
