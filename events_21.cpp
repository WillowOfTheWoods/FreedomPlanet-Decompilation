#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1718()
{
    // event 485_13
    bool or_result_485_13 = false;
    bool or_temp_result_485_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto or_event_485_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_485_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_485_13_0_end;
        playersensorrightbig_393_instances.clear_selection();
        for (ObjectIterator it(playersensorrightbig_393_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorrightbig_393_instances.has_selection()) goto or_event_485_13_0_end;
        or_result_485_13 = true;
        or_temp_result_485_13_0 = true;
    }
    or_event_485_13_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_485_13_0) {
        playersensorrightbig_393_instances.save_selection();
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 485_13
    bool or_temp_result_485_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto or_event_485_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_485_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_485_13_1_end;
        playersensorleftbig_391_instances.clear_selection();
        for (ObjectIterator it(playersensorleftbig_391_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorleftbig_391_instances.has_selection()) goto or_event_485_13_1_end;
        or_result_485_13 = true;
        or_temp_result_485_13_1 = true;
        or_event_485_13_1_end: ;
        playersensorleftbig_391_instances.clear_saved_selection();
        if (or_temp_result_485_13_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_485_13) goto or_final_or_event_485_13_1_end;
        playersensorleftbig_391_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_485_13_0) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_485_13_0 || or_temp_result_485_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_485_13_0 || or_temp_result_485_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_485_13_1) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 47);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 10);
        }
    }
    or_final_or_event_485_13_1_end: ;
}
void Frames::event_func_1719()
{
    // event 486_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_486_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_486_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_486_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) < (1))) goto event_486_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_486_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) != (1))) goto event_486_13_end;
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(0.5);
            ((Active*)*it)->set_angle(((Active*)get_instance(playerskincarolbike_382_instances, it.current_index, default_active_instance))->get_angle()+45*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16), 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 32);
    }
    event_486_13_end: ;
}
void Frames::event_func_1720()
{
    // event 487_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_487_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_487_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_487_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_487_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_487_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
    }
    event_487_13_end: ;
}
void Frames::event_func_1721()
{
    // event 488_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1)) goto event_488_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (1))) goto event_488_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) != (1))) goto event_488_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_488_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_488_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (100))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_488_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 22);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
    }
    event_488_13_end: ;
}
void Frames::event_func_1722()
{
    // event 489_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_489_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (42))) goto event_489_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 41);
    }
    event_489_13_end: ;
}
void Frames::event_func_1723()
{
    // event 490_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_490_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
    }
    event_490_13_end: ;
}
void Frames::event_func_1724()
{
    // event 491_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_491_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), -4), 4));
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_491_13_end: ;
}
void Frames::event_func_1725()
{
    // event 492_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_492_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_492_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_492_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_492_13_end: ;
}
void Frames::event_func_1726()
{
    // event 493_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_493_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_493_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_493_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4.5);
    }
    event_493_13_end: ;
}
void Frames::event_func_1727()
{
    // event 494_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1)) goto event_494_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_494_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) != (0))) goto event_494_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_494_13_end: ;
}
void Frames::event_func_1728()
{
    // event 495_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1)) goto event_495_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
    }
    event_495_13_end: ;
}
void Frames::event_func_1729()
{
    // event 496_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1)) goto event_496_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
    }
    event_496_13_end: ;
}
void Frames::event_func_1730()
{
    // event 497_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1)) goto event_497_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 45);
    }
    event_497_13_end: ;
}
void Frames::event_func_1731()
{
    // event 498_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_498_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_498_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_498_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (29))) goto event_498_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 27);
    }
    event_498_13_end: ;
}
void Frames::event_func_1732()
{
    // event 499_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_499_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->test_animation(33))) goto event_499_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_499_13_end: ;
}
void Frames::event_func_1733()
{
    // event 500_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_500_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->is_animation_finished(33))) goto event_500_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 27);
    }
    event_500_13_end: ;
}
void Frames::event_func_1734()
{
    // event 501_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_501_13_end;
        if (not_always_501_13 > loop_count) {
            not_always_501_13 = loop_count + 2;
            goto event_501_13_end;
        }
        not_always_501_13 = loop_count + 2;
        media.stop_sample(SOUND_LILAC_CYCLONE1_174);
        media.stop_sample(SOUND_LILAC_CYCLONE_2_290);
    }
    event_501_13_end: ;
}
void Frames::event_func_1735()
{
    // event 502_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_502_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_502_13_end: ;
}
void Frames::event_func_1736()
{
    // event 503_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_503_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_503_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)));
    }
    event_503_13_end: ;
}
void Frames::event_func_1737()
{
    // event 504_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_504_13_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_504_13_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)));
    }
    event_504_13_end: ;
}
void Frames::event_func_1738()
{
    // event 505_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_505_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_505_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_505_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), -4), 4));
    }
    event_505_13_end: ;
}
void Frames::event_func_1739()
{
    // event 506_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_506_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_506_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_506_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_506_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_506_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_506_13_end: ;
}
void Frames::event_func_1740()
{
    // event 507_13
    bool or_result_507_13 = false;
    bool or_temp_result_507_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto or_event_507_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (47))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (28))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_507_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_507_13_0_end;
        or_result_507_13 = true;
        or_temp_result_507_13_0 = true;
    }
    or_event_507_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_507_13_0) {
        playerothers_123_instances.save_selection();
        playerinput_19_instances.save_selection();
    }
    // event 507_13
    bool or_temp_result_507_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto or_event_507_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (47))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (28))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_507_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_507_13_1_end;
        playersensortopbig_395_instances.clear_selection();
        for (ObjectIterator it(playersensortopbig_395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensortopbig_395_instances.has_selection()) goto or_event_507_13_1_end;
        or_result_507_13 = true;
        or_temp_result_507_13_1 = true;
        or_event_507_13_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_507_13_1) {
            playerothers_123_instances.save_selection();
            playerinput_19_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
        }
        if (!or_result_507_13) goto or_final_or_event_507_13_1_end;
        playersensortopbig_395_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_507_13_0 || or_temp_result_507_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_507_13_0 || or_temp_result_507_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_507_13_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    or_final_or_event_507_13_1_end: ;
}
void Frames::event_func_1741()
{
    // event 508_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_508_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_508_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_508_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_508_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_508_13_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (0))) goto event_508_13_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_508_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 27);
    }
    event_508_13_end: ;
}
void Frames::event_func_1742()
{
    // event 509_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_509_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_509_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_509_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_509_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_509_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 29);
    }
    event_509_13_end: ;
}
void Frames::event_func_1743()
{
    // event 510_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_510_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (3))) goto event_510_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (47))) goto event_510_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 27);
    }
    event_510_13_end: ;
}
void Frames::event_func_1744()
{
    // event 511_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_511_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_511_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_511_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_511_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_511_13_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_511_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (3))) goto event_511_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -3);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 4);
        }
    }
    event_511_13_end: ;
}
void Frames::event_func_1745()
{
    // event 512_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_512_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_512_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_512_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_512_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_512_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (3))) goto event_512_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 3);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 4);
        }
    }
    event_512_13_end: ;
}
void Frames::event_func_1746()
{
    // event 513_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_513_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_513_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_513_13_end;
        ((Active*)get_instance(laddertop_357_instances))->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances))->get_frame());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
    }
    event_513_13_end: ;
}
void Frames::event_func_1747()
{
    // event 514_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_514_13_end;
        playersensorbottombig_397_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_514_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_514_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_514_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_514_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
        ((Active*)get_instance(laddertop_357_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_514_13_end: ;
}
void Frames::event_func_1748()
{
    // event 515_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_515_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (28))) goto event_515_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.add(14, 1);
    }
    event_515_13_end: ;
}
void Frames::event_func_1749()
{
    // event 516_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_516_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(14)) > (7))) goto event_516_13_end;
        if (!(((Active*)get_instance(laddertop_357_instances))->alterables->flags.is_on(1))) goto event_516_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(laddertop_357_instances))->get_y()-36);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(7, 24);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(laddertop_357_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_516_13_end: ;
}
void Frames::event_func_1750()
{
    // event 517_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_517_13_end;
        if (test_ladder(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24))) goto event_517_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(laddertop_357_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
    }
    event_517_13_end: ;
}
void Frames::event_func_1751()
{
    // event 518_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_518_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_518_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_518_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_518_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -4);
    }
    event_518_13_end: ;
}
void Frames::event_func_1752()
{
    // event 519_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1)) goto event_519_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (50))) goto event_519_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (51))) goto event_519_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
    }
    event_519_13_end: ;
}
void Frames::event_func_1753()
{
    // event 520_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_520_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 9+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
    }
    event_520_13_end: ;
}
void Frames::event_func_1754()
{
    // event 521_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_521_13_end;
            group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.disable(8);
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_frame(1);
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_13();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_521_13_end: ;
}
void Frames::event_func_1755()
{
    // event 522_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_522_13_end;
        if (not_always_522_13 > loop_count) {
            not_always_522_13 = loop_count + 2;
            goto event_522_13_end;
        }
        not_always_522_13 = loop_count + 2;
        ((Active*)get_instance(player_389_instances))->alterables->flags.disable(9);
        media.stop_sample(SOUND_BIKE_SKID_162);
        media.stop_sample(SOUND_BIKE_SKID2_337);
    }
    event_522_13_end: ;
}
void Frames::event_func_1756()
{
    // event 523_13
    bool or_result_523_13 = false;
    bool or_temp_result_523_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_523_13_0_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_523_13_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_523_13_0_end;
        or_result_523_13 = true;
        or_temp_result_523_13_0 = true;
    }
    or_event_523_13_0_end: ;
    guilifebasemeter_125_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_523_13_0) {
        guilifebasemeter_125_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 523_13
    bool or_temp_result_523_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_523_13_1_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_523_13_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_523_13_1_end;
        or_result_523_13 = true;
        or_temp_result_523_13_1 = true;
    }
    or_event_523_13_1_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_523_13_1) {
        playerskinspade_419_instances.save_selection();
        guilifebasemeter_125_instances.save_selection();
    }
    // event 523_13
    bool or_temp_result_523_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_523_13_2_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_523_13_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_523_13_2_end;
        or_result_523_13 = true;
        or_temp_result_523_13_2 = true;
    }
    or_event_523_13_2_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_523_13_2) {
        playerskincarol_445_instances.save_selection();
        guilifebasemeter_125_instances.save_selection();
    }
    // event 523_13
    bool or_temp_result_523_13_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_523_13_3_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_523_13_3_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto or_event_523_13_3_end;
        or_result_523_13 = true;
        or_temp_result_523_13_3 = true;
    }
    or_event_523_13_3_end: ;
    playerskincarolbike_382_instances.clear_saved_selection();
    if (or_temp_result_523_13_3) {
        playerskincarolbike_382_instances.save_selection();
        guilifebasemeter_125_instances.save_selection();
    }
    // event 523_13
    bool or_temp_result_523_13_4 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_523_13_4_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_523_13_4_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_523_13_4_end;
        or_result_523_13 = true;
        or_temp_result_523_13_4 = true;
    }
    or_event_523_13_4_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_523_13_4) {
        playerskinmilla_446_instances.save_selection();
        guilifebasemeter_125_instances.save_selection();
    }
    // event 523_13
    bool or_temp_result_523_13_5 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto or_event_523_13_5_end;
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!guilifebasemeter_125_instances.has_selection()) goto or_event_523_13_5_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_523_13_5_end;
        or_result_523_13 = true;
        or_temp_result_523_13_5 = true;
        or_event_523_13_5_end: ;
        playerskintorque_450_instances.clear_saved_selection();
        if (or_temp_result_523_13_5) {
            guilifebasemeter_125_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_523_13) goto or_final_or_event_523_13_5_end;
        playerskinspade_419_instances.empty_selection();
        guilifebasemeter_125_instances.empty_selection();
        playerskinmilla_446_instances.empty_selection();
        playerskincarolbike_382_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playerskincarol_445_instances.empty_selection();
        if (or_temp_result_523_13_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_523_13_4) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_523_13_3) {
            playerskincarolbike_382_instances.restore_selection();
        }
        if (or_temp_result_523_13_5) {
            playerskintorque_450_instances.restore_selection();
        }
        if (or_temp_result_523_13_2) {
            playerskincarol_445_instances.restore_selection();
        }
        if (or_temp_result_523_13_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_523_13_0 || or_temp_result_523_13_1 || or_temp_result_523_13_2 || or_temp_result_523_13_3 || or_temp_result_523_13_4 || or_temp_result_523_13_5) {
            guilifebasemeter_125_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.play_id(SOUND_COMMON_STRIKE_23, -1, 1);
        FrameObject * single_instance_523_13_0; single_instance_523_13_0 = NULL;
        // select single: true false false
        player_389_instances.clear_selection();
        for (ObjectIterator p_it(player_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_523_13_0 == NULL)
                    single_instance_523_13_0 = new_obj;
            }
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    or_final_or_event_523_13_5_end: ;
}
void Frames::event_func_1757()
{
    // event 524_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_524_13_end;
        if (!((((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(11)) > (0))) goto event_524_13_end;
        FrameObject * single_instance_524_13_0; single_instance_524_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsplayersplode_310(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_524_13_0 == NULL)
                    single_instance_524_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_524_13_0))->get_movement()->set_speed(20+randrange(20));
        static FlatObjectList swap_524_13;
        swap_524_13.clear();
        {
            swap_524_13.push_back(((Active*)single_instance_524_13_0));
        }
        ((Active*)((Active*)single_instance_524_13_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_524_13_0))->set_direction(((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(11));
        ((Active*)((Active*)single_instance_524_13_0))->set_x(((Active*)single_instance_524_13_0)->get_x()-16+(((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(11)/math_helper/6)*6);
        ((Active*)((Active*)single_instance_524_13_0))->set_y(((Active*)single_instance_524_13_0)->get_y()-16+(((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(11)%math_helper%6)*6);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(11, (((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.get(11)+1)%math_helper%32);
        swap_position(swap_524_13);
    }
    event_524_13_end: ;
}
void Frames::event_func_1758()
{
    // event 528_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_528_13_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1+((Active*)*it)->get_movement()->get_speed()*0.2, 0);
            ((Active*)*it)->force_frame(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_528_13_end: ;
}
void Frames::event_func_1759()
{
    // event 529_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_529_13_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+12))) { it.deselect(); continue; }
        }
        if (!effectsplayersplode_310_instances.has_selection()) goto event_529_13_end;
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_529_13_end: ;
}
void Frames::event_func_1760()
{
    // event 530_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_530_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_530_13_end;
        global_values->set(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_530_13_0; single_instance_530_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_530_13_0 == NULL)
                    single_instance_530_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_530_13_0))->alterables->flags.enable(6);
        media.unlock(10-1);
        media.unlock(11-1);
        media.stop_channel(10-1);
        media.stop_channel(11-1);
    }
    event_530_13_end: ;
}
void Frames::event_func_1761()
{
    // event 531_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_531_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_531_13_end;
        FrameObject * single_instance_531_13_0; single_instance_531_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_531_13_0 == NULL)
                    single_instance_531_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_13();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_531_13_end: ;
}
void Frames::event_func_1762()
{
    // event 533_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_533_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_533_13_end;
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_533_13_end: ;
}
void Frames::event_func_1763()
{
    // event 534_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_534_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (5))) goto event_534_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(8));
    }
    event_534_13_end: ;
}
void Frames::event_func_1764()
{
    // event 535_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_535_13_end;
        if (!((manager.lives) > (0))) goto event_535_13_end;
        ((Active*)get_instance(player_389_instances))->alterables->flags.enable(9);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_535_13_end: ;
}
void Frames::event_func_1765()
{
    // event 536_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_536_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (frame_bottom()+50))) goto event_536_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, frame_bottom()+50);
    }
    event_536_13_end: ;
}
void Frames::event_func_1766()
{
    // event 537_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_537_13_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_on(9))) goto event_537_13_end;
        ((Active*)get_instance(player_389_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 6);
    }
    event_537_13_end: ;
}
void Frames::event_func_1767()
{
    // event 538_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_538_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (1))) goto event_538_13_end;
        if (!((global_values->get(0)) > (0))) goto event_538_13_end;
        if (once_condition_538_13) goto event_538_13_end;
        once_condition_538_13 = true;
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 7)+1, 1, 7);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 3)+1, 3, 3);
    }
    event_538_13_end: ;
}
void Frames::event_func_1768()
{
    // event 539_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_539_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (70))) goto event_539_13_end;
        if (not_always_539_13 > loop_count) {
            not_always_539_13 = loop_count + 2;
            goto event_539_13_end;
        }
        not_always_539_13 = loop_count + 2;
        set_lives(manager.lives - (1));
    }
    event_539_13_end: ;
}
void Frames::event_func_1769()
{
    // event 540_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_540_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (80))) goto event_540_13_end;
        if (not_always_540_13 > loop_count) {
            not_always_540_13 = loop_count + 2;
            goto event_540_13_end;
        }
        not_always_540_13 = loop_count + 2;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_540_13_end: ;
}
void Frames::event_func_1770()
{
    // event 541_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_541_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (90))) goto event_541_13_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 7);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_541_13_end: ;
}
void Frames::event_func_1771()
{
    // event 542_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_542_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) > (90))) goto event_542_13_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_542_13_end: ;
}
void Frames::event_func_1772()
{
    // event 543_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_543_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (190))) goto event_543_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_543_13_end: ;
}
void Frames::event_func_1773()
{
    // event 544_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_544_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (210))) goto event_544_13_end;
        ((Counter*)get_instance(guirings_122_instances))->set(14);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        {
            loop_death_running = true;
            int times = int(1);
            loop_death_index = 0;
            while (loop_death_index < times) {
                loop_death_13();
                if (!loop_death_running) break;
                loop_death_index++;
            }
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(7, 3);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_544_13_end: ;
}
void Frames::event_func_1774()
{
    // event 545_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_545_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 11);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
    }
    event_545_13_end: ;
}
void Frames::event_func_1775()
{
    // event 546_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_546_13_end;
        ((Active*)get_instance(player_389_instances))->alterables->flags.disable(9);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
            group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_13();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_546_13_end: ;
}
void Frames::event_func_1776()
{
    // event 547_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_547_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_547_13_end;
        global_values->set(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_547_13_0; single_instance_547_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_547_13_0 == NULL)
                    single_instance_547_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_547_13_0))->alterables->flags.enable(6);
        media.unlock(10-1);
        media.unlock(11-1);
        media.stop_channel(10-1);
        media.stop_channel(11-1);
    }
    event_547_13_end: ;
}
void Frames::event_func_1777()
{
    // event 548_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_548_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_548_13_end;
        FrameObject * single_instance_548_13_0; single_instance_548_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_548_13_0 == NULL)
                    single_instance_548_13_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_13();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_548_13_end: ;
}
void Frames::event_func_1778()
{
    // event 550_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_550_13_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_550_13_end;
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_550_13_end: ;
}
void Frames::event_func_1779()
{
    // event 551_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_551_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_551_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) >= (4))) goto event_551_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
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
    event_551_13_end: ;
}
void Frames::event_func_1780()
{
    // event 552_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_552_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_552_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) >= (4))) goto event_552_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+0.05);
    }
    event_552_13_end: ;
}
void Frames::event_func_1781()
{
    // event 553_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_553_13_end;
        if (not_always_553_13 > loop_count) {
            not_always_553_13 = loop_count + 2;
            goto event_553_13_end;
        }
        not_always_553_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_553_13_end: ;
}
void Frames::event_func_1782()
{
    // event 554_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_554_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_554_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) >= (4))) goto event_554_13_end;
        if (not_always_554_13 > loop_count) {
            not_always_554_13 = loop_count + 2;
            goto event_554_13_end;
        }
        not_always_554_13 = loop_count + 2;
        media.play_id(SOUND_DROWN_19, -1, 1);
    }
    event_554_13_end: ;
}
void Frames::event_func_1783()
{
    // event 555_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_555_13_end;
        if (!((manager.lives) > (0))) goto event_555_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_555_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) >= (4))) goto event_555_13_end;
        ((Active*)get_instance(player_389_instances))->alterables->flags.enable(9);
    }
    event_555_13_end: ;
}
void Frames::event_func_1784()
{
    // event 556_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_556_13_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_on(9))) goto event_556_13_end;
        ((Active*)get_instance(player_389_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 6);
    }
    event_556_13_end: ;
}
void Frames::event_func_1785()
{
    // event 557_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_557_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (1))) goto event_557_13_end;
        if (!((global_values->get(0)) > (0))) goto event_557_13_end;
        if (once_condition_557_13) goto event_557_13_end;
        once_condition_557_13 = true;
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 7)+1, 1, 7);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 3)+1, 3, 3);
    }
    event_557_13_end: ;
}
void Frames::event_func_1786()
{
    // event 558_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_558_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (110))) goto event_558_13_end;
        if (not_always_558_13 > loop_count) {
            not_always_558_13 = loop_count + 2;
            goto event_558_13_end;
        }
        not_always_558_13 = loop_count + 2;
        set_lives(manager.lives - (1));
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_558_13_end: ;
}
void Frames::event_func_1787()
{
    // event 559_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_559_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (120))) goto event_559_13_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 7);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_559_13_end: ;
}
void Frames::event_func_1788()
{
    // event 560_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_560_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) > (120))) goto event_560_13_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_560_13_end: ;
}
void Frames::event_func_1789()
{
    // event 561_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_561_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (190))) goto event_561_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
    }
    event_561_13_end: ;
}
void Frames::event_func_1790()
{
    // event 562_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_562_13_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (220))) goto event_562_13_end;
        ((Counter*)get_instance(guirings_122_instances))->set(14);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        {
            loop_death_running = true;
            int times = int(1);
            loop_death_index = 0;
            while (loop_death_index < times) {
                loop_death_13();
                if (!loop_death_running) break;
                loop_death_index++;
            }
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(7, 3);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_562_13_end: ;
}
void Frames::event_func_1791()
{
    // event 563_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_563_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (30))) goto event_563_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(50);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(50);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
    }
    event_563_13_end: ;
}
void Frames::event_func_1792()
{
    // event 564_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_564_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (30))) goto event_564_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_564_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_564_13_end: ;
}
void Frames::event_func_1793()
{
    // event 565_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_565_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(8))) goto event_565_13_end;
        if (!media.is_sample_playing(SOUND_LILAC_COMETSTART_9)) goto event_565_13_end;
        media.play_id(SOUND_LILAC_SCOMETSTART_399, -1, 1);
        media.stop_sample(SOUND_LILAC_COMETSTART_9);
    }
    event_565_13_end: ;
}
void Frames::event_func_1794()
{
    // event 566_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_566_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_566_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(8))) goto event_566_13_end;
        FrameObject * single_instance_566_13_0; single_instance_566_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_566_13_0 == NULL)
                    single_instance_566_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_566_13_0))->force_animation(7);
        ((Active*)((Active*)single_instance_566_13_0))->set_direction(((Active*)get_instance(playerskinsash_418_instances))->get_direction());
        ((Active*)((Active*)single_instance_566_13_0))->set_angle(((Active*)get_instance(playerskinsash_418_instances))->get_angle(), 0);
    }
    event_566_13_end: ;
}
void Frames::event_func_1795()
{
    // event 567_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_567_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_567_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
    }
    event_567_13_end: ;
}
void Frames::event_func_1796()
{
    // event 568_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_568_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 30));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(8, 0);
    }
    event_568_13_end: ;
}
void Frames::event_func_1797()
{
    // event 569_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_569_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (30))) goto event_569_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_569_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
    }
    event_569_13_end: ;
}
void Frames::event_func_1798()
{
    // event 570_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_570_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (30))) goto event_570_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_570_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
    }
    event_570_13_end: ;
}
void Frames::event_func_1799()
{
    // event 571_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_571_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (30))) goto event_571_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_571_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 1);
    }
    event_571_13_end: ;
}
void Frames::event_func_1800()
{
    // event 572_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_572_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (30))) goto event_572_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_572_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, -1);
    }
    event_572_13_end: ;
}
void Frames::event_func_1801()
{
    // event 573_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_573_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_573_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(8))) goto event_573_13_end;
        media.play_id(SOUND_LILAC_COMETDASH_53, -1, 1);
        media.stop_sample(SOUND_LILAC_COMETSTART_9);
    }
    event_573_13_end: ;
}
void Frames::event_func_1802()
{
    // event 574_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_574_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_574_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_574_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_574_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*12, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(10, 0);
    }
    event_574_13_end: ;
}
void Frames::event_func_1803()
{
    // event 575_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_575_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_575_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (0))) goto event_575_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_575_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*12, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(10, 0);
    }
    event_575_13_end: ;
}
void Frames::event_func_1804()
{
    // event 576_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_576_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_576_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (-1))) goto event_576_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*(8+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_576_13_end: ;
}
void Frames::event_func_1805()
{
    // event 577_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_577_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (30))) goto event_577_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(16)) == (1))) goto event_577_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*(8+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 8);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(10, 0);
    }
    event_577_13_end: ;
}
void Frames::event_func_1806()
{
    // event 578_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_578_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_578_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_578_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 7);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_max(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)-3, 0));
    }
    event_578_13_end: ;
}
void Frames::event_func_1807()
{
    // event 579_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_579_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_579_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) == (-8))) goto event_579_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(-8-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*4, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 8+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*4)));
    }
    event_579_13_end: ;
}
void Frames::event_func_1808()
{
    // event 580_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_580_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (31))) goto event_580_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_on(8))) goto event_580_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*1.25);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*1.25);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
        media.play_id(SOUND_LILAC_SCOMETDASH_324, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        media.stop_sample(SOUND_LILAC_SCOMETSTART_399);
    }
    event_580_13_end: ;
}
void Frames::event_func_1809()
{
    // event 581_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_581_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_581_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_581_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_581_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 10));
    }
    event_581_13_end: ;
}
void Frames::event_func_1810()
{
    // event 582_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto event_582_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_582_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_582_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_582_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), -10));
    }
    event_582_13_end: ;
}
void Frames::event_func_1811()
{
    // event 583_13
    bool or_result_583_13 = false;
    bool or_temp_result_583_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto or_event_583_13_0_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_583_13_0_end;
        or_result_583_13 = true;
        or_temp_result_583_13_0 = true;
    }
    or_event_583_13_0_end: ;
    guienergy_124_instances.clear_saved_selection();
    if (or_temp_result_583_13_0) {
        guienergy_124_instances.save_selection();
    }
    // event 583_13
    bool or_temp_result_583_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1)) goto or_event_583_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_583_13_1_end;
        or_result_583_13 = true;
        or_temp_result_583_13_1 = true;
        or_event_583_13_1_end: ;
        playerothers_123_instances.clear_saved_selection();
        if (or_temp_result_583_13_1) {
            playerothers_123_instances.save_selection();
        }
        if (!or_result_583_13) goto or_final_or_event_583_13_1_end;
        playerothers_123_instances.empty_selection();
        guienergy_124_instances.empty_selection();
        if (or_temp_result_583_13_0) {
            guienergy_124_instances.restore_selection();
        }
        if (or_temp_result_583_13_1) {
            playerothers_123_instances.restore_selection();
        }
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0+((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->flags.get(8)*100);
        }
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(18, 1);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->values.set(24, 40);
        }
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    or_final_or_event_583_13_1_end: ;
}
void Frames::event_func_1812()
{
    // event 584_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1)) goto event_584_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) < (15))) goto event_584_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(50);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(50);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(8)*0.5);
    }
    event_584_13_end: ;
}
void Frames::event_func_1813()
{
    // event 585_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1)) goto event_585_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) == (1))) goto event_585_13_end;
        if (not_always_585_13 > loop_count) {
            not_always_585_13 = loop_count + 2;
            goto event_585_13_end;
        }
        not_always_585_13 = loop_count + 2;
        media.play_id(SOUND_LILAC_DIVEKICKA_407, -1, 1);
    }
    event_585_13_end: ;
}
void Frames::event_func_1814()
{
    // event 586_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1)) goto event_586_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (15))) goto event_586_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_586_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 43);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 5));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_uppercut_72+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_586_13_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_586_13_0_end: ;
        media.play_id(SOUND_LILAC_DIVEKICKB_2_398, -1, 1);
    }
    event_586_13_end: ;
}
void Frames::event_func_1815()
{
    // event 587_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1)) goto event_587_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (15))) goto event_587_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) != (1))) goto event_587_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 43);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), -5));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)+5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_uppercut_72+number_to_string(randrange(4)));
            if (dyn_it == (*loops).end()) goto dynamic_587_13_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_587_13_0_end: ;
        media.play_id(SOUND_LILAC_DIVEKICKB_2_398, -1, 1);
    }
    event_587_13_end: ;
}
void Frames::event_func_1816()
{
    // event 588_13
    bool or_result_588_13 = false;
    bool or_temp_result_588_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto or_event_588_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_588_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (22))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (23))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_588_13_0_end;
        or_result_588_13 = true;
        or_temp_result_588_13_0 = true;
    }
    or_event_588_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_588_13_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 588_13
    bool or_temp_result_588_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto or_event_588_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_588_13_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) >= (3))) goto or_event_588_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (22))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) != (23))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_588_13_1_end;
        or_result_588_13 = true;
        or_temp_result_588_13_1 = true;
        or_event_588_13_1_end: ;
        if (or_temp_result_588_13_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_588_13) goto or_final_or_event_588_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_588_13_0 || or_temp_result_588_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_588_13_0 || or_temp_result_588_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 20);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
            ((Active*)*it)->alterables->values.set(8, 50);
        }
    }
    or_final_or_event_588_13_1_end: ;
}
void Frames::event_func_1817()
{
    // event 589_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1)) goto event_589_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_589_13_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (3))) goto event_589_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (20))) goto event_589_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (21))) goto event_589_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (22))) goto event_589_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (23))) goto event_589_13_end;
        if (!(((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.is_off(18))) goto event_589_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 21);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(26);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, 30);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
    }
    event_589_13_end: ;
}
