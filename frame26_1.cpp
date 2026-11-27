#include "events.h"
#include "frame26.h"

Frame26::Frame26()
: FrameData()
{
    name = std::string("Relic Maze 2", 12);
}
void Frame26::init()
{
    ((Frames*)frame)->on_frame_26_init();
}
void Frame26::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame26::event_callback(int id)
{
}
void Frame26::handle_events()
{
    ((Frames*)frame)->handle_frame_26_events();
}
void Frame26::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_26_pre_events();
}
void Frame26::on_start()
{
    ((Frames*)frame)->on_frame_26_start_events();
}
