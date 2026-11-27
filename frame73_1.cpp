#include "events.h"
#include "frame73.h"

Frame73::Frame73()
: FrameData()
{
    name = std::string("Final Dreadnought 8", 19);
}
void Frame73::init()
{
    ((Frames*)frame)->on_frame_73_init();
}
void Frame73::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame73::event_callback(int id)
{
}
void Frame73::handle_events()
{
    ((Frames*)frame)->handle_frame_73_events();
}
void Frame73::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_73_pre_events();
}
void Frame73::on_start()
{
    ((Frames*)frame)->on_frame_73_start_events();
}
