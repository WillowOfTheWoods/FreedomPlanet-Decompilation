#include "events.h"
#include "frame81.h"

Frame81::Frame81()
: FrameData()
{
    name = std::string("Scene - Jiang River", 19);
}
void Frame81::init()
{
    ((Frames*)frame)->on_frame_81_init();
}
void Frame81::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame81::event_callback(int id)
{
}
void Frame81::handle_events()
{
    ((Frames*)frame)->handle_frame_81_events();
}
void Frame81::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_81_pre_events();
}
void Frame81::on_start()
{
    ((Frames*)frame)->on_frame_81_start_events();
}
