#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3693()
{
    // event 1708_16
    {
        if (!(group_main_engine_1)) goto event_1708_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->flags.disable(0);
    }
    event_1708_16_end: ;
}
void Frames::event_func_3694()
{
    // event 1709_16
    {
        if (!(group_main_engine_1)) goto event_1709_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1709_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1709_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (2))) goto event_1709_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1709_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1709_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_1709_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(13, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(13)+1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->flags.enable(0);
    }
    event_1709_16_end: ;
}
void Frames::event_func_3695()
{
    // event 1710_16
    {
        if (!(group_main_engine_1)) goto event_1710_16_end;
        if (!(((Active*)get_instance(mastercamera_430_instances))->alterables->flags.is_off(0))) goto event_1710_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(13, 0);
    }
    event_1710_16_end: ;
}
void Frames::event_func_3696()
{
    // event 1711_16
    {
        if (!(group_main_engine_1)) goto event_1711_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(13)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1711_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(14)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1711_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)) < (0))) goto event_1711_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)+2, 0));
    }
    event_1711_16_end: ;
}
void Frames::event_func_3697()
{
    // event 1712_16
    {
        if (!(group_main_engine_1)) goto event_1712_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(13)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1712_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-2, 0-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(17)));
    }
    event_1712_16_end: ;
}
void Frames::event_func_3698()
{
    // event 1713_16
    {
        if (!(group_main_engine_1)) goto event_1713_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->flags.disable(1);
    }
    event_1713_16_end: ;
}
void Frames::event_func_3699()
{
    // event 1714_16
    {
        if (!(group_main_engine_1)) goto event_1714_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1714_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_1714_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (3))) goto event_1714_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1714_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1714_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(18)) == (1))) goto event_1714_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(14)+1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->flags.enable(1);
    }
    event_1714_16_end: ;
}
void Frames::event_func_3700()
{
    // event 1715_16
    {
        if (!(group_main_engine_1)) goto event_1715_16_end;
        if (!(((Active*)get_instance(mastercamera_430_instances))->alterables->flags.is_off(1))) goto event_1715_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(14, 0);
    }
    event_1715_16_end: ;
}
void Frames::event_func_3701()
{
    // event 1716_16
    {
        if (!(group_main_engine_1)) goto event_1716_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(14)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1716_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(13)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1716_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)) > (0))) goto event_1716_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-2, 0));
    }
    event_1716_16_end: ;
}
void Frames::event_func_3702()
{
    // event 1717_16
    {
        if (!(group_main_engine_1)) goto event_1717_16_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(14)) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(15)))) goto event_1717_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(17)));
    }
    event_1717_16_end: ;
}
void Frames::event_func_3703()
{
    // event 1718_16
    {
        if (!(group_main_engine_1)) goto event_1718_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (5))) goto event_1718_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1718_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1718_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1718_16_end: ;
}
void Frames::event_func_3704()
{
    // event 1719_16
    {
        if (!(group_main_engine_1)) goto event_1719_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (-5))) goto event_1719_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1719_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1719_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-2, 0-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1719_16_end: ;
}
void Frames::event_func_3705()
{
    // event 1720_16
    {
        if (!(group_main_engine_1)) goto event_1720_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1720_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1720_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+2.5, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1720_16_end: ;
}
void Frames::event_func_3706()
{
    // event 1721_16
    {
        if (!(group_main_engine_1)) goto event_1721_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1721_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1721_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-2.5, 0-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1721_16_end: ;
}
void Frames::event_func_3707()
{
    // event 1722_16
    {
        if (!(group_main_engine_1)) goto event_1722_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (19))) goto event_1722_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1722_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+2, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1722_16_end: ;
}
void Frames::event_func_3708()
{
    // event 1723_16
    {
        if (!(group_main_engine_1)) goto event_1723_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (19))) goto event_1723_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1723_16_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-2, 0-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(16)));
    }
    event_1723_16_end: ;
}
void Frames::event_func_3709()
{
    // event 1724_16
    bool or_result_1724_16 = false;
    bool or_temp_result_1724_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1724_16_0_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) > (0))) goto or_event_1724_16_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (5))) goto or_event_1724_16_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (-5))) goto or_event_1724_16_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto or_event_1724_16_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (19))) goto or_event_1724_16_0_end;
        or_result_1724_16 = true;
        or_temp_result_1724_16_0 = true;
    }
    or_event_1724_16_0_end: ;
    // event 1724_16
    bool or_temp_result_1724_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1724_16_1_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) > (0))) goto or_event_1724_16_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto or_event_1724_16_1_end;
        or_result_1724_16 = true;
        or_temp_result_1724_16_1 = true;
        or_event_1724_16_1_end: ;
        if (!or_result_1724_16) goto or_final_or_event_1724_16_1_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)-2, 0));
    }
    or_final_or_event_1724_16_1_end: ;
}
void Frames::event_func_3710()
{
    // event 1725_16
    bool or_result_1725_16 = false;
    bool or_temp_result_1725_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1725_16_0_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) < (0))) goto or_event_1725_16_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (5))) goto or_event_1725_16_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (-5))) goto or_event_1725_16_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto or_event_1725_16_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (19))) goto or_event_1725_16_0_end;
        or_result_1725_16 = true;
        or_temp_result_1725_16_0 = true;
    }
    or_event_1725_16_0_end: ;
    // event 1725_16
    bool or_temp_result_1725_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1725_16_1_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)) < (0))) goto or_event_1725_16_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto or_event_1725_16_1_end;
        or_result_1725_16 = true;
        or_temp_result_1725_16_1 = true;
        or_event_1725_16_1_end: ;
        if (!or_result_1725_16) goto or_final_or_event_1725_16_1_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(6)+2, 0));
    }
    or_final_or_event_1725_16_1_end: ;
}
void Frames::loop_camera_mode0_16()
{
    event_func_3685();
    event_func_3686();
    event_func_3687();
    event_func_3688();
    event_func_3689();
    event_func_3690();
    event_func_3691();
    event_func_3692();
    event_func_3693();
    event_func_3694();
    event_func_3695();
    event_func_3696();
    event_func_3697();
    event_func_3698();
    event_func_3699();
    event_func_3700();
    event_func_3701();
    event_func_3702();
    event_func_3703();
    event_func_3704();
    event_func_3705();
    event_func_3706();
    event_func_3707();
    event_func_3708();
    event_func_3709();
    event_func_3710();
}
void Frames::loop_player01_interruption_control_16()
{
    event_func_1304();
    event_func_1305();
    event_func_1306();
    event_func_1307();
    event_func_1308();
    event_func_2712();
    event_func_2713();
    event_func_2714();
    event_func_2715();
    event_func_2716();
    event_func_2717();
    event_func_2718();
    event_func_2719();
    event_func_2720();
    event_func_2721();
    event_func_2722();
    event_func_2723();
    event_func_2724();
    event_func_2725();
    event_func_2726();
    event_func_2727();
}
void Frames::loop_wrapper_sound_hurt1_16(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_16(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_16(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_16(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_16(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_16(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_16(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_16(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_16(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_16(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_16(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_16(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_16(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_16(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_16(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_16(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_16(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_16(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_16(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_16(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_16(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_16(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_16(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_16(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_16(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_16(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_16(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_16(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_16(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_16(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_16(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_16(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_16(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_16(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_16(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_16(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_16(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_16();
}
void Frames::loop_wrapper_play_music_6_16(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_16();
}
void Frames::loop_wrapper_sound_go0_16(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_16(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_16();
}
void Frames::loop_wrapper_sound_explode3_16(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_16(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_16(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_16(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_16(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_3711()
{
    // event 1410_16
    {
        if (!(group_main_engine_1)) goto event_1410_16_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (-5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto event_1410_16_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(16), -10), 10));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
    }
    event_1410_16_end: ;
}
void Frames::col_3_16()
{
    event_func_3711();
}
void Frames::event_func_3712()
{
    // event 1594_16
    {
        if (!(group_main_engine_1)) goto event_1594_16_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(0))) goto event_1594_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1594_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1594_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        ((Active*)((Active*)col_instance_2))->advance_movement(+1);
        ((Active*)((Active*)col_instance_2))->set_scale(1);
    }
    event_1594_16_end: ;
}
void Frames::col_4_16()
{
    event_func_3712();
}
void Frames::event_func_3713()
{
    // event 1593_16
    {
        if (!(group_main_engine_1)) goto event_1593_16_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) > (10))) goto event_1593_16_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(0))) goto event_1593_16_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        ((Active*)((Active*)col_instance_2))->advance_movement(+1);
        ((Active*)((Active*)col_instance_2))->set_scale(1);
    }
    event_1593_16_end: ;
}
void Frames::col_5_16()
{
    event_func_3713();
}
void Frames::event_func_3714()
{
    // event 1410_16
    {
        if (!(group_main_engine_1)) goto event_1410_16_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto event_1410_16_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(16), -10), 10));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
    }
    event_1410_16_end: ;
}
void Frames::col_6_16()
{
    event_func_3714();
}
void Frames::event_func_3715()
{
    // event 1599_16
    {
        if (!(group_main_engine_1)) goto event_1599_16_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1599_16_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(2)) == (0))) goto event_1599_16_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 1);
        ((Active*)((Active*)col_instance_2))->force_animation(10);
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
    }
    event_1599_16_end: ;
}
void Frames::col_7_16()
{
    event_func_3715();
}
void Frames::event_func_3716()
{
    // event 1480_16
    {
        if (!(group_main_engine_1)) goto event_1480_16_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(0))) goto event_1480_16_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 50);
    }
    event_1480_16_end: ;
}
void Frames::event_func_3717()
{
    // event 1481_16
    {
        if (!(group_main_engine_1)) goto event_1481_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1481_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1481_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 999);
    }
    event_1481_16_end: ;
}
void Frames::col_11_16()
{
    event_func_3716();
    event_func_3717();
}
void Frames::event_func_3718()
{
    // event 1592_16
    {
        if (!(group_main_engine_1)) goto event_1592_16_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) > (10))) goto event_1592_16_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(0))) goto event_1592_16_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->advance_movement(+1);
        ((Active*)((Active*)col_instance_1))->set_scale(1);
    }
    event_1592_16_end: ;
}
void Frames::col_18_16()
{
    event_func_3718();
}
void Frames::event_func_3719()
{
    // event 1598_16
    {
        if (!(group_main_engine_1)) goto event_1598_16_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(2)) == (0))) goto event_1598_16_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(2, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(10);
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
    }
    event_1598_16_end: ;
}
void Frames::col_22_16()
{
    event_func_3719();
}
void Frames::event_func_3720()
{
    // event 1589_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_iron_worm_iron_worm_main_1)) goto event_1589_16_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(7)) == (8))) goto event_1589_16_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(24)) > (0))) goto event_1589_16_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(7, 9);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1589_16_end: ;
}
void Frames::col_23_16()
{
    event_func_3720();
}
void Frames::test_collisions_16()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2147483648, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(playersensorleftbig_391_instances, breakableaquabrick_743_instances, 1, 1, (EventFunction)&Frames::col_3_16);
    test_collisions(playercharactersensor_383_instances, enemyrock_657_instances, 1, 1, (EventFunction)&Frames::col_4_16);
    test_collisions(qualifier_7, enemyrock_657_instances, 536870912, 2, (EventFunction)&Frames::col_5_16);
    test_collisions(playersensorrightbig_393_instances, breakableaquabrick_743_instances, 1, 2, (EventFunction)&Frames::col_6_16);
    test_collisions(playerreflect_447_instances, minibossacid_658_instances, 1, 1, (EventFunction)&Frames::col_7_16);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyslimeburst_652_instances, 2, 1, (EventFunction)&Frames::col_11_16);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 8388608, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
    for (it1 = enemyrock_657_instances.begin(); it1 != enemyrock_657_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_18_16();
    }
    for (it1 = playerprojectile_320_instances.begin(); it1 != playerprojectile_320_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_13_13();
    }
    for (it1 = playerreflect_447_instances.begin(); it1 != playerreflect_447_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_14_13();
    }
    for (it1 = effectsdebris_319_instances.begin(); it1 != effectsdebris_319_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_11_13();
    }
    for (it1 = minibossacid_658_instances.begin(); it1 != minibossacid_658_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_22_16();
    }
    for (it1 = objectcrystal_279_instances.begin(); it1 != objectcrystal_279_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_12_13();
    }
    for (it1 = minibossironworm_675_instances.begin(); it1 != minibossironworm_675_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_23_16();
    }
}
void Frames::event_func_3721()
{
    // event 194_16
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_194_16_end;
        {
            loop_player01_interruption_control_running = true;
            int times = int(1);
            loop_player01_interruption_control_index = 0;
            while (loop_player01_interruption_control_index < times) {
                loop_player01_interruption_control_16();
                if (!loop_player01_interruption_control_running) break;
                loop_player01_interruption_control_index++;
            }
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_194_16_end: ;
}
void Frames::event_func_3722()
{
    // event 498_16
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_498_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_498_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_498_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4.5);
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_498_16_end: ;
}
void Frames::event_func_3723()
{
    // event 499_16
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_499_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_499_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) != (0))) goto event_499_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_499_16_end: ;
}
void Frames::event_func_3724()
{
    // event 518_16
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_518_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_518_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_518_16_end;
        laddertop_357_instances.clear_selection();
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances))->get_frame());
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
    }
    event_518_16_end: ;
}
void Frames::event_func_3725()
{
    // event 519_16
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_519_16_end;
        playersensorbottombig_397_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_519_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_519_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_519_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_519_16_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_519_16_end: ;
}
void Frames::event_func_3726()
{
    // event 521_16
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_521_16_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(14)) > (7))) goto event_521_16_end;
        laddertop_357_instances.clear_selection();
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!laddertop_357_instances.has_selection()) goto event_521_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(laddertop_357_instances, default_active_instance))->get_y()-36);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(7, 24);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_521_16_end: ;
}
