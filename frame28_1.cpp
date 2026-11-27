#include "events.h"
#include "frame28.h"

Frame28::Frame28()
: FrameData()
{
    name = std::string("Relic Maze 4", 12);
}
void Frame28::init()
{
    ((Frames*)frame)->on_frame_28_init();
}
void Frame28::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame28::event_callback(int id)
{
}
void Frame28::handle_events()
{
    ((Frames*)frame)->handle_frame_28_events();
}
void Frame28::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_28_pre_events();
}
void Frame28::on_start()
{
    ((Frames*)frame)->on_frame_28_start_events();
}
