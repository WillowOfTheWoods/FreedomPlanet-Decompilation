#include "events.h"
#include "frame43.h"

Frame43::Frame43()
: FrameData()
{
    name = std::string("Jade Creek 4", 12);
}
void Frame43::init()
{
    ((Frames*)frame)->on_frame_43_init();
}
void Frame43::on_end()
{
    ((Frames*)frame)->reset();
}
void Frame43::event_callback(int id)
{
}
void Frame43::handle_events()
{
    ((Frames*)frame)->handle_frame_43_events();
}
void Frame43::handle_pre_events()
{
    ((Frames*)frame)->handle_frame_43_pre_events();
}
void Frame43::on_start()
{
    ((Frames*)frame)->on_frame_43_start_events();
}
