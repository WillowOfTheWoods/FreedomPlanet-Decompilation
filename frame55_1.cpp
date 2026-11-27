#include "events.h"
#include "frame55.h"

Frame55::Frame55()
: FrameData()
{
    name = std::string("Pangu Lagoon 5", 14);
}
void Frame55::init()
{
    ((Frames*)frame)->on_frame_55_init();
}
void Frame55::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame55::event_callback(int id)
{
}
void Frame55::handle_events()
{
    ((Frames*)frame)->handle_frame_55_events();
}
void Frame55::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_55_pre_events();
}
void Frame55::on_start()
{
    ((Frames*)frame)->on_frame_55_start_events();
}
