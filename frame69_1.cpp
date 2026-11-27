#include "events.h"
#include "frame69.h"

Frame69::Frame69()
: FrameData()
{
    name = std::string("Final Dreadnought 4", 19);
}
void Frame69::init()
{
    ((Frames*)frame)->on_frame_69_init();
}
void Frame69::on_end()
{
    ((Frames*)frame)->on_frame_69_end();
    ((Frames*)frame)->reset();
}
void Frame69::event_callback(int id)
{
}
void Frame69::handle_events()
{
    ((Frames*)frame)->handle_frame_69_events();
}
void Frame69::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_69_pre_events();
}
void Frame69::on_start()
{
    ((Frames*)frame)->on_frame_69_start_events();
}
