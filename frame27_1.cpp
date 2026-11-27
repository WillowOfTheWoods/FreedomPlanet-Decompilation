#include "events.h"
#include "frame27.h"

Frame27::Frame27()
: FrameData()
{
    name = std::string("Relic Maze 3", 12);
}
void Frame27::init()
{
    ((Frames*)frame)->on_frame_27_init();
}
void Frame27::on_end()
{
    ((Frames*)frame)->on_frame_27_end();
    ((Frames*)frame)->reset();
}
void Frame27::event_callback(int id)
{
}
void Frame27::handle_events()
{
    ((Frames*)frame)->handle_frame_27_events();
}
void Frame27::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_27_pre_events();
}
void Frame27::on_start()
{
    ((Frames*)frame)->on_frame_27_start_events();
}
