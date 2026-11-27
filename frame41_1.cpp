#include "events.h"
#include "frame41.h"

Frame41::Frame41()
: FrameData()
{
    name = std::string("Jade Creek 2", 12);
}
void Frame41::init()
{
    ((Frames*)frame)->on_frame_41_init();
}
void Frame41::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame41::event_callback(int id)
{
}
void Frame41::handle_events()
{
    ((Frames*)frame)->handle_frame_41_events();
}
void Frame41::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_41_pre_events();
}
void Frame41::on_start()
{
    ((Frames*)frame)->on_frame_41_start_events();
}
