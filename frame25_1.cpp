#include "events.h"
#include "frame25.h"

Frame25::Frame25()
: FrameData()
{
    name = std::string("Relic Maze 1", 12);
}
void Frame25::init()
{
    ((Frames*)frame)->on_frame_25_init();
}
void Frame25::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame25::event_callback(int id)
{
}
void Frame25::handle_events()
{
    ((Frames*)frame)->handle_frame_25_events();
}
void Frame25::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_25_pre_events();
}
void Frame25::on_start()
{
    ((Frames*)frame)->on_frame_25_start_events();
}
