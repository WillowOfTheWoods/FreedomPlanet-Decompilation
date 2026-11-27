#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3727()
{
    // event 522_16
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_522_16_end;
        if (test_ladder(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24))) goto event_522_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        laddertop_357_instances.clear_selection();
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
    }
    event_522_16_end: ;
}
void Frames::event_func_3728()
{
    // event 526_16
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_526_16_end;
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
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_526_16_end: ;
}
void Frames::event_func_3729()
{
    // event 1250_16
    {
        if (!(group_main_engine_1)) goto event_1250_16_end;
        qualifier_20.clear_selection();
        monitorbomb_563_instances.clear_selection();
        if (!check_overlap(qualifier_20, monitorbomb_563_instances)) goto event_1250_16_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1250_16_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(8);
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_COMMON_BOMBACTIVATE_172, -1, 1);
    }
    event_1250_16_end: ;
}
void Frames::event_func_3730()
{
    // event 1316_16
    {
        if (!(group_main_engine_1)) goto event_1316_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1316_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1316_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1316_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1316_16_end;
        laddertop_357_instances.clear_selection();
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+15))) { it.deselect(); continue; }
        }
        if (!laddertop_357_instances.has_selection()) goto event_1316_16_end;
        if (!(test_ladder(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1316_16_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (4))) goto event_1316_16_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 27);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 46);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(laddertop_357_instances, default_active_instance))->get_x());
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
    }
    event_1316_16_end: ;
}
void Frames::event_func_3731()
{
    // event 1317_16
    {
        if (!(group_main_engine_1)) goto event_1317_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1317_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_1317_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1317_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1317_16_end;
        playersensorbottombig_397_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_1317_16_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (4))) goto event_1317_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (46))) goto event_1317_16_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) < (4))) goto event_1317_16_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 25);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(laddertop_357_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(laddertop_357_instances, default_active_instance))->get_y()+8);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 4);
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(14, 0);
    }
    event_1317_16_end: ;
}
void Frames::event_func_3732()
{
    // event 1319_16
    {
        if (!(group_main_engine_1)) goto event_1319_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1319_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1319_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1319_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1319_16_end;
        laddertop_357_instances.clear_selection();
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
        }
        if (!laddertop_357_instances.has_selection()) goto event_1319_16_end;
        if (!(test_ladder(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1319_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (4))) goto event_1319_16_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 47);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 46);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(laddertop_357_instances, default_active_instance))->get_x());
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_1319_16_end: ;
}
void Frames::event_func_3733()
{
    // event 1320_16
    {
        if (!(group_main_engine_1)) goto event_1320_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1320_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1320_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1320_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1320_16_end;
        laddertop_357_instances.clear_selection();
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
        }
        if (!laddertop_357_instances.has_selection()) goto event_1320_16_end;
        if (!(test_ladder(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1320_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (-4))) goto event_1320_16_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 47);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 46);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(laddertop_357_instances, default_active_instance))->get_x());
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_1320_16_end: ;
}
void Frames::event_func_3734()
{
    // event 1396_16
    {
        if (!(group_main_engine_1)) goto event_1396_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1396_16_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_13.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_13)) goto event_1396_16_end;
        for (QualifierIterator it(qualifier_13); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_13.has_selection()) goto event_1396_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(qualifier_13, default_active_instance))->alterables->values.get(14));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_single(qualifier_13, default_active_instance))->alterables->values.get(15));
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(25, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
    }
    event_1396_16_end: ;
}
void Frames::event_func_3735()
{
    // event 1398_16
    {
        if (!(group_main_engine_1)) goto event_1398_16_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1398_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(qualifier_23, default_active_instance))->alterables->values.get(14));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+28);
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
    event_1398_16_end: ;
}
void Frames::event_func_3736()
{
    // event 1399_16
    {
        if (!(group_main_engine_1)) goto event_1399_16_end;
        qualifier_12.clear_selection();
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_12.has_selection()) goto event_1399_16_end;
        for (QualifierIterator it(qualifier_12); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_12, default_active_instance))->get_y()+28+get_floor(((Active*)get_single(qualifier_12, default_active_instance))->alterables->values.get(18)));
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
    event_1399_16_end: ;
}
void Frames::event_func_3737()
{
    // event 1402_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1402_16_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_23.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1402_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1402_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1402_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1402_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1402_16_end;
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
    }
    event_1402_16_end: ;
}
void Frames::event_func_3738()
{
    // event 1403_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1403_16_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_23.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1403_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1403_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1403_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1403_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(qualifier_23, default_active_instance))->get_x());
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
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
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
    }
    event_1403_16_end: ;
}
void Frames::event_func_3739()
{
    // event 1404_16
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1404_16_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_23.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1404_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1404_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1404_16_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1404_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(qualifier_23, default_active_instance))->get_x());
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
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
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1404_16_end: ;
}
void Frames::event_func_3740()
{
    // event 1405_16
    {
        if (!(group_main_engine_1)) goto event_1405_16_end;
        playersensorbottombig_397_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, jellyspring_739_instances)) goto event_1405_16_end;
        for (ObjectIterator it(jellyspring_739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+1, 40));
            ((Active*)*it)->set_x_scale(1+(((Active*)*it)->alterables->values.get(0)*0.01));
            ((Active*)*it)->set_y_scale(1-(((Active*)*it)->alterables->values.get(0)*0.02));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1405_16_end: ;
}
void Frames::event_func_3741()
{
    // event 1406_16
    {
        if (!(group_main_engine_1)) goto event_1406_16_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, jellyspring_739_instances)) goto event_1406_16_end;
        jellyspring_739_instances.clear_selection();
        for (ObjectIterator it(jellyspring_739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!jellyspring_739_instances.has_selection()) goto event_1406_16_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -9-(((Active*)get_single(jellyspring_739_instances, default_active_instance))->alterables->values.get(0)*0.1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        for (ObjectIterator it(jellyspring_739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        media.play_id(SOUND_BOUNCE_212, -1, 1);
        media.stop_sample(SOUND_COMMON_JUMP_8);
    }
    event_1406_16_end: ;
}
void Frames::event_func_3742()
{
    // event 1407_16
    {
        if (!(group_main_engine_1)) goto event_1407_16_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, jellyspring_739_instances)) goto event_1407_16_end;
        jellyspring_739_instances.clear_selection();
        for (ObjectIterator it(jellyspring_739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!jellyspring_739_instances.has_selection()) goto event_1407_16_end;
        for (ObjectIterator it(jellyspring_739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-2, 0));
            ((Active*)*it)->set_x_scale(1+(((Active*)*it)->alterables->values.get(0)*0.01));
            ((Active*)*it)->set_y_scale(1-(((Active*)*it)->alterables->values.get(0)*0.02));
        }
    }
    event_1407_16_end: ;
}
void Frames::event_func_3743()
{
    // event 1408_16
    {
        if (!(group_main_engine_1)) goto event_1408_16_end;
        breakableaquabrick_743_instances.clear_selection();
        for (ObjectIterator it(breakableaquabrick_743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1408_16_end: ;
}
void Frames::event_func_3744()
{
    // event 1409_16
    bool or_result_1409_16 = false;
    bool or_temp_result_1409_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1409_16_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (6))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1409_16_0_end;
        or_result_1409_16 = true;
        or_temp_result_1409_16_0 = true;
    }
    or_event_1409_16_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1409_16_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1409_16
    bool or_temp_result_1409_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1409_16_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1409_16_1_end;
        or_result_1409_16 = true;
        or_temp_result_1409_16_1 = true;
    }
    or_event_1409_16_1_end: ;
    if (or_temp_result_1409_16_1) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1409_16
    bool or_temp_result_1409_16_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1409_16_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1409_16_2_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) > (5))) goto or_event_1409_16_2_end;
        or_result_1409_16 = true;
        or_temp_result_1409_16_2 = true;
        or_event_1409_16_2_end: ;
        if (or_temp_result_1409_16_2) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1409_16) goto or_final_or_event_1409_16_2_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1409_16_0 || or_temp_result_1409_16_1 || or_temp_result_1409_16_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        breakableaquabrick_743_instances.clear_selection();
        for (ObjectIterator it(breakableaquabrick_743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1409_16_2_end: ;
}
void Frames::event_func_3745()
{
    // event 1411_16
    bool or_result_1411_16 = false;
    bool or_temp_result_1411_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1411_16_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1411_16_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1411_16_0_end;
        playersensorleftbig_391_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, breakableaquabrick_743_instances)) goto or_event_1411_16_0_end;
        or_result_1411_16 = true;
        or_temp_result_1411_16_0 = true;
    }
    or_event_1411_16_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    breakableaquabrick_743_instances.clear_saved_selection();
    if (or_temp_result_1411_16_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakableaquabrick_743_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1411_16
    bool or_temp_result_1411_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1411_16_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1411_16_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1411_16_1_end;
        playersensorrightbig_393_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, breakableaquabrick_743_instances)) goto or_event_1411_16_1_end;
        or_result_1411_16 = true;
        or_temp_result_1411_16_1 = true;
    }
    or_event_1411_16_1_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1411_16_1) {
        playersensorrightbig_393_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakableaquabrick_743_instances.save_selection();
    }
    // event 1411_16
    bool or_temp_result_1411_16_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1411_16_2_end;
        shieldinstashield_359_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, breakableaquabrick_743_instances)) goto or_event_1411_16_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1411_16_2_end;
        or_result_1411_16 = true;
        or_temp_result_1411_16_2 = true;
    }
    or_event_1411_16_2_end: ;
    shieldinstashield_359_instances.clear_saved_selection();
    if (or_temp_result_1411_16_2) {
        playermovementvalues_245_instances.save_selection();
        breakableaquabrick_743_instances.save_selection();
        shieldinstashield_359_instances.save_selection();
    }
    // event 1411_16
    bool or_temp_result_1411_16_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1411_16_3_end;
        playerreflect_447_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, breakableaquabrick_743_instances)) goto or_event_1411_16_3_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_1411_16_3_end;
        or_result_1411_16 = true;
        or_temp_result_1411_16_3 = true;
        or_event_1411_16_3_end: ;
        playerreflect_447_instances.clear_saved_selection();
        if (or_temp_result_1411_16_3) {
            breakableaquabrick_743_instances.save_selection();
            playerreflect_447_instances.save_selection();
        }
        if (!or_result_1411_16) goto or_final_or_event_1411_16_3_end;
        playersensorrightbig_393_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        breakableaquabrick_743_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        shieldinstashield_359_instances.empty_selection();
        if (or_temp_result_1411_16_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        if (or_temp_result_1411_16_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1411_16_0 || or_temp_result_1411_16_1 || or_temp_result_1411_16_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1411_16_0 || or_temp_result_1411_16_1 || or_temp_result_1411_16_2 || or_temp_result_1411_16_3) {
            breakableaquabrick_743_instances.restore_selection();
        }
        if (or_temp_result_1411_16_3) {
            playerreflect_447_instances.restore_selection();
        }
        if (or_temp_result_1411_16_0 || or_temp_result_1411_16_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1411_16_2) {
            shieldinstashield_359_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakableaquabrick_743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1411_16_3_end: ;
}
void Frames::event_func_3746()
{
    // event 1412_16
    bool or_result_1412_16 = false;
    bool or_temp_result_1412_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1412_16_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1412_16_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1412_16_0_end;
        playersensorbottombig_397_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, breakableaquabrick_743_instances)) goto or_event_1412_16_0_end;
        or_result_1412_16 = true;
        or_temp_result_1412_16_0 = true;
    }
    or_event_1412_16_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    breakableaquabrick_743_instances.clear_saved_selection();
    if (or_temp_result_1412_16_0) {
        playersensorbottombig_397_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        breakableaquabrick_743_instances.save_selection();
    }
    // event 1412_16
    bool or_temp_result_1412_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1412_16_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1412_16_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1412_16_1_end;
        playersensortopbig_395_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, breakableaquabrick_743_instances)) goto or_event_1412_16_1_end;
        or_result_1412_16 = true;
        or_temp_result_1412_16_1 = true;
        or_event_1412_16_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_1412_16_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
            breakableaquabrick_743_instances.save_selection();
        }
        if (!or_result_1412_16) goto or_final_or_event_1412_16_1_end;
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        breakableaquabrick_743_instances.empty_selection();
        if (or_temp_result_1412_16_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1412_16_0 || or_temp_result_1412_16_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1412_16_0 || or_temp_result_1412_16_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1412_16_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_1412_16_0 || or_temp_result_1412_16_1) {
            breakableaquabrick_743_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakableaquabrick_743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)/math_helper/2.0, -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6));
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1412_16_1_end: ;
}
void Frames::event_func_3747()
{
    // event 1413_16
    {
        if (!(group_main_engine_1)) goto event_1413_16_end;
        monitoricon_331_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        if (!check_overlap(monitoricon_331_instances, breakableaquabrick_743_instances)) goto event_1413_16_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1413_16_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(10, 5);
        for (ObjectIterator it(breakableaquabrick_743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1413_16_end: ;
}
void Frames::event_func_3748()
{
    // event 1414_16
    {
        if (!(group_main_engine_1)) goto event_1414_16_end;
        breakableaquabrick_743_instances.clear_selection();
        for (ObjectIterator it(breakableaquabrick_743_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakableaquabrick_743_instances.has_selection()) goto event_1414_16_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakableaquabrick_743_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakableaquabrickpiece_651_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakableaquabrick_743_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableaquabrickpiece_651(parent->x + 8, parent->y + 8), parent->layer);
                breakableaquabrickpiece_651_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableaquabrickpiece_651(parent->x + 24, parent->y + 8), parent->layer);
                breakableaquabrickpiece_651_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableaquabrickpiece_651(parent->x + 8, parent->y + 24), parent->layer);
                breakableaquabrickpiece_651_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableaquabrickpiece_651(parent->x + 24, parent->y + 24), parent->layer);
                breakableaquabrickpiece_651_instances.add_back();
            }
        }
        for (ObjectIterator it(breakableaquabrickpiece_651_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakableaquabrick_743_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakableaquabrick_743_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
        // select single: false true true
        for (ObjectIterator p_it(breakableaquabrick_743_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableaquabrickpiece_651(parent->x + 8, parent->y + 40), parent->layer);
                breakableaquabrickpiece_651_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableaquabrickpiece_651(parent->x + 24, parent->y + 40), parent->layer);
                breakableaquabrickpiece_651_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableaquabrickpiece_651(parent->x + 8, parent->y + 56), parent->layer);
                breakableaquabrickpiece_651_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableaquabrickpiece_651(parent->x + 24, parent->y + 56), parent->layer);
                breakableaquabrickpiece_651_instances.add_back();
            }
        }
    }
    event_1414_16_end: ;
}
void Frames::event_func_3749()
{
    // event 1415_16
    {
        if (!(group_main_engine_1)) goto event_1415_16_end;
        breakableaquabrickpiece_651_instances.clear_selection();
        for (ObjectIterator it(breakableaquabrickpiece_651_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1415_16_end: ;
}
void Frames::event_func_3750()
{
    // event 1416_16
    {
        if (!(group_main_engine_1)) goto event_1416_16_end;
        breakableaquabrickpiece_651_instances.clear_selection();
        for (ObjectIterator it(breakableaquabrickpiece_651_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakableaquabrickpiece_651_instances.has_selection()) goto event_1416_16_end;
        for (ObjectIterator it(breakableaquabrickpiece_651_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1416_16_end: ;
}
void Frames::event_func_3751()
{
    // event 1417_16
    {
        if (!(group_main_engine_1)) goto event_1417_16_end;
        playersensorbottombig_397_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, collapsingplatform_745_instances)) goto event_1417_16_end;
        if (!((((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(2)) == (0))) goto event_1417_16_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->get_x()) > (((Active*)get_instance(collapsingplatform_745_instances))->get_x()+50))) goto event_1417_16_end;
        ((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.set(2, 1);
        FrameObject * single_instance_1417_16_0; single_instance_1417_16_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(collapsingplatform_745_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -48), parent->layer);
                if (single_instance_1417_16_0 == NULL)
                    single_instance_1417_16_0 = new_obj;
            }
        }
    }
    event_1417_16_end: ;
}
void Frames::event_func_3752()
{
    // event 1418_16
    {
        if (!(group_main_engine_1)) goto event_1418_16_end;
        if (!((((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(0)) < (-2))) goto event_1418_16_end;
        if (not_always_1418_16 > loop_count) {
            not_always_1418_16 = loop_count + 2;
            goto event_1418_16_end;
        }
        not_always_1418_16 = loop_count + 2;
        FrameObject * single_instance_1418_16_0; single_instance_1418_16_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(collapsingplatform_745_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -64), parent->layer);
                if (single_instance_1418_16_0 == NULL)
                    single_instance_1418_16_0 = new_obj;
            }
        }
    }
    event_1418_16_end: ;
}
void Frames::event_func_3753()
{
    // event 1419_16
    {
        if (!(group_main_engine_1)) goto event_1419_16_end;
        if (!((((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(0)) < (-5))) goto event_1419_16_end;
        if (not_always_1419_16 > loop_count) {
            not_always_1419_16 = loop_count + 2;
            goto event_1419_16_end;
        }
        not_always_1419_16 = loop_count + 2;
        FrameObject * single_instance_1419_16_0; single_instance_1419_16_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(collapsingplatform_745_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -16), parent->layer);
                if (single_instance_1419_16_0 == NULL)
                    single_instance_1419_16_0 = new_obj;
            }
        }
    }
    event_1419_16_end: ;
}
void Frames::event_func_3754()
{
    // event 1420_16
    {
        if (!(group_main_engine_1)) goto event_1420_16_end;
        playersensorbottombig_397_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, collapsingplatform_745_instances)) goto event_1420_16_end;
        if (!((((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(2)) == (1))) goto event_1420_16_end;
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
    event_1420_16_end: ;
}
void Frames::event_func_3755()
{
    // event 1421_16
    {
        if (!(group_main_engine_1)) goto event_1421_16_end;
        if (!((((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(2)) == (1))) goto event_1421_16_end;
        ((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.set(1, get_min(((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(1)+0.02, 12));
        ((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.set(0, get_max(((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(0)-((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(1), -40));
        ((Active*)get_instance(collapsingplatform_745_instances))->set_angle(((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(0), 0);
    }
    event_1421_16_end: ;
}
void Frames::event_func_3756()
{
    // event 1422_16
    {
        if (!(group_main_engine_1)) goto event_1422_16_end;
        if (!((((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(2)) == (1))) goto event_1422_16_end;
        if (!((((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.get(0)) <= (-40))) goto event_1422_16_end;
        ((Active*)get_instance(collapsingplatform_745_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1422_16_end: ;
}
void Frames::event_func_3757()
{
    // event 1423_16
    {
        if (!(group_main_engine_1)) goto event_1423_16_end;
        if (!((global_values->get(3)%math_helper%60) == (0))) goto event_1423_16_end;
        FrameObject * single_instance_1423_16_0; single_instance_1423_16_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(axelplatformmaker1_746_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_levelaxelplatform1_653(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1423_16_0 == NULL)
                    single_instance_1423_16_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1423_16_0))->alterables->values.set(8, ((Active*)single_instance_1423_16_0)->get_x());
        ((Active*)((Active*)single_instance_1423_16_0))->alterables->values.set(9, ((Active*)single_instance_1423_16_0)->get_y());
        FrameObject * single_instance_1423_16_1; single_instance_1423_16_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(axelplatformmaker2_747_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_levelaxelplatform2_654(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1423_16_1 == NULL)
                    single_instance_1423_16_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1423_16_1))->alterables->values.set(8, ((Active*)single_instance_1423_16_1)->get_x());
        ((Active*)((Active*)single_instance_1423_16_1))->alterables->values.set(9, ((Active*)single_instance_1423_16_1)->get_y());
        ((Active*)((Active*)single_instance_1423_16_0))->move_back();
        ((Active*)((Active*)single_instance_1423_16_1))->move_back();
    }
    event_1423_16_end: ;
}
void Frames::event_func_3758()
{
    // event 1424_16
    {
        if (!(group_main_engine_1)) goto event_1424_16_end;
        levelaxelplatform1_653_instances.clear_selection();
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 2);
            ((Active*)*it)->alterables->flags.disable(0);
        }
        levelaxelplatform2_654_instances.clear_selection();
        for (ObjectIterator it(levelaxelplatform2_654_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, -2);
            ((Active*)*it)->alterables->flags.disable(0);
        }
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(sin_deg(((Active*)*it)->alterables->values.get(0))*15)+10);
        }
        for (ObjectIterator it(levelaxelplatform2_654_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(sin_deg(((Active*)*it)->alterables->values.get(0))*15)+10);
            ((Active*)*it)->alterables->flags.disable(6);
        }
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_1424_16_end: ;
}
void Frames::event_func_3759()
{
    // event 1425_16
    {
        if (!(group_main_engine_1)) goto event_1425_16_end;
        levelaxelplatform1_653_instances.clear_selection();
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (height))) { it.deselect(); continue; }
        }
        if (!levelaxelplatform1_653_instances.has_selection()) goto event_1425_16_end;
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1425_16_end: ;
}
void Frames::event_func_3760()
{
    // event 1426_16
    {
        if (!(group_main_engine_1)) goto event_1426_16_end;
        levelaxelplatform2_654_instances.clear_selection();
        for (ObjectIterator it(levelaxelplatform2_654_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (0))) { it.deselect(); continue; }
        }
        if (!levelaxelplatform2_654_instances.has_selection()) goto event_1426_16_end;
        for (ObjectIterator it(levelaxelplatform2_654_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1426_16_end: ;
}
void Frames::event_func_3761()
{
    // event 1427_16
    {
        if (!(group_main_engine_1)) goto event_1427_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1427_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1427_16_end;
        if (!(((Active*)get_instance(playersensorbottombig_397_instances))->overlaps_background())) goto event_1427_16_end;
        levelaxelplatform1_653_instances.clear_selection();
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1427_16_end: ;
}
void Frames::event_func_3762()
{
    // event 1428_16
    {
        if (!(group_main_engine_1)) goto event_1428_16_end;
        levelaxelplatform1_653_instances.clear_selection();
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(axelplatformmaker1_746_instances))->get_y()+160))) { it.deselect(); continue; }
        }
        if (!levelaxelplatform1_653_instances.has_selection()) goto event_1428_16_end;
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1428_16_end: ;
}
void Frames::event_func_3763()
{
    // event 1429_16
    {
        if (!(group_main_engine_1)) goto event_1429_16_end;
        levelaxelplatform1_653_instances.clear_selection();
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!levelaxelplatform1_653_instances.has_selection()) goto event_1429_16_end;
        for (ObjectIterator it(levelaxelplatform1_653_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1429_16_end: ;
}
void Frames::event_func_3764()
{
    // event 1430_16
    {
        if (!(group_main_engine_1)) goto event_1430_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1430_16_end;
        playersensorbottombig_397_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levelaxelplatform2_654_instances)) goto event_1430_16_end;
        if (!(test_obstacle(((Active*)get_instance(playersensortopbig_395_instances))->get_x(), ((Active*)get_instance(playersensortopbig_395_instances))->get_y()-32))) goto event_1430_16_end;
        for (ObjectIterator it(levelaxelplatform2_654_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1430_16_end: ;
}
void Frames::event_func_3765()
{
    // event 1431_16
    {
        if (!(group_main_engine_1)) goto event_1431_16_end;
        levelaxelplatform2_654_instances.clear_selection();
        for (ObjectIterator it(levelaxelplatform2_654_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!levelaxelplatform2_654_instances.has_selection()) goto event_1431_16_end;
        for (ObjectIterator it(levelaxelplatform2_654_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1431_16_end: ;
}
void Frames::event_func_3766()
{
    // event 1433_16
    {
        if (!(group_main_engine_1)) goto event_1433_16_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, switchpressureplate_752_instances)) goto event_1433_16_end;
        minibossironworm_675_instances.clear_selection();
        if (!check_not_overlap(minibossironworm_675_instances, switchpressureplate_752_instances)) goto event_1433_16_end;
        switchpressureplate_752_instances.clear_selection();
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1433_16_end: ;
}
void Frames::event_func_3767()
{
    // event 1434_16
    {
        if (!(group_main_engine_1)) goto event_1434_16_end;
        playersensorbottombig_397_instances.clear_selection();
        switchpressureplate_752_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchpressureplate_752_instances)) goto event_1434_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1434_16_end;
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1434_16_end: ;
}
void Frames::event_func_3768()
{
    // event 1435_16
    {
        if (!(group_main_engine_1)) goto event_1435_16_end;
        minibossironworm_675_instances.clear_selection();
        switchpressureplate_752_instances.clear_selection();
        if (!check_overlap(minibossironworm_675_instances, switchpressureplate_752_instances)) goto event_1435_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1435_16_end;
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1435_16_end: ;
}
void Frames::event_func_3769()
{
    // event 1436_16
    {
        if (!(group_main_engine_1)) goto event_1436_16_end;
        switchpressureplate_752_instances.clear_selection();
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchpressureplate_752_instances.has_selection()) goto event_1436_16_end;
        if (not_always_1436_16 > loop_count) {
            not_always_1436_16 = loop_count + 2;
            goto event_1436_16_end;
        }
        not_always_1436_16 = loop_count + 2;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
    }
    event_1436_16_end: ;
}
void Frames::event_func_3770()
{
    // event 1437_16
    bool or_result_1437_16 = false;
    bool or_temp_result_1437_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1437_16_0_end;
        switchpressureplate_752_instances.clear_selection();
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchpressureplate_752_instances.has_selection()) goto or_event_1437_16_0_end;
        switchdoor_735_instances.clear_selection();
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (224))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto or_event_1437_16_0_end;
        or_result_1437_16 = true;
        or_temp_result_1437_16_0 = true;
    }
    or_event_1437_16_0_end: ;
    switchpressureplate_752_instances.clear_saved_selection();
    switchdoor_735_instances.clear_saved_selection();
    if (or_temp_result_1437_16_0) {
        switchpressureplate_752_instances.save_selection();
        switchdoor_735_instances.save_selection();
    }
    // event 1437_16
    bool or_temp_result_1437_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1437_16_1_end;
        switchdoor_735_instances.clear_selection();
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (224))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto or_event_1437_16_1_end;
        or_result_1437_16 = true;
        or_temp_result_1437_16_1 = true;
        or_event_1437_16_1_end: ;
        if (or_temp_result_1437_16_1) {
            switchdoor_735_instances.save_selection();
        }
        if (!or_result_1437_16) goto or_final_or_event_1437_16_1_end;
        switchpressureplate_752_instances.empty_selection();
        switchdoor_735_instances.empty_selection();
        if (or_temp_result_1437_16_0) {
            switchpressureplate_752_instances.restore_selection();
        }
        if (or_temp_result_1437_16_0 || or_temp_result_1437_16_1) {
            switchdoor_735_instances.restore_selection();
        }
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 4);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(1)-1-1);
        }
    }
    or_final_or_event_1437_16_1_end: ;
}
void Frames::event_func_3771()
{
    // event 1438_16
    {
        if (!(group_main_engine_1)) goto event_1438_16_end;
        switchpressureplate_752_instances.clear_selection();
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchpressureplate_752_instances.has_selection()) goto event_1438_16_end;
        if (!((((Active*)get_instance(switchdoor2_754_instances))->alterables->values.get(2)) < (128))) goto event_1438_16_end;
        ((Active*)get_instance(switchdoor2_754_instances))->set_y(((Active*)get_instance(switchdoor2_754_instances))->get_y()+4);
        ((Active*)get_instance(switchdoor2_754_instances))->alterables->values.add(2, 4);
        ((Active*)get_instance(switchdoor2_754_instances))->set_layer(((Active*)get_instance(switchdoor2_754_instances))->alterables->values.get(1)-1-1);
        ((Active*)get_instance(switchdoor2_754_instances))->move_back();
    }
    event_1438_16_end: ;
}
void Frames::event_func_3772()
{
    // event 1439_16
    {
        if (!(group_main_engine_1)) goto event_1439_16_end;
        switchpressureplate_752_instances.clear_selection();
        for (ObjectIterator it(switchpressureplate_752_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchpressureplate_752_instances.has_selection()) goto event_1439_16_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, switchpressureplate_752_instances)) goto event_1439_16_end;
        minibossironworm_675_instances.clear_selection();
        if (!check_not_overlap(minibossironworm_675_instances, switchpressureplate_752_instances)) goto event_1439_16_end;
        if (!((((Active*)get_instance(switchdoor2_754_instances))->alterables->values.get(2)) > (0))) goto event_1439_16_end;
        ((Active*)get_instance(switchdoor2_754_instances))->set_y(((Active*)get_instance(switchdoor2_754_instances))->get_y()-4);
        ((Active*)get_instance(switchdoor2_754_instances))->alterables->values.sub(2, 4);
    }
    event_1439_16_end: ;
}
void Frames::event_func_3773()
{
    // event 1440_16
    {
        if (!(group_main_engine_1)) goto event_1440_16_end;
        if (!((((Active*)get_instance(switchdoor2_754_instances))->alterables->values.get(2)) <= (0))) goto event_1440_16_end;
        if (not_always_1440_16 > loop_count) {
            not_always_1440_16 = loop_count + 2;
            goto event_1440_16_end;
        }
        not_always_1440_16 = loop_count + 2;
        ((Active*)get_instance(switchdoor2_754_instances))->set_layer(((Active*)get_instance(switchdoor2_754_instances))->alterables->values.get(1)-1);
    }
    event_1440_16_end: ;
}
void Frames::event_func_3774()
{
    // event 1446_16
    {
        if (!(group_main_engine_1)) goto event_1446_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1446_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+1)%math_helper%360);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1446_16_end: ;
}
void Frames::event_func_3775()
{
    // event 1447_16
    {
        if (!(group_main_engine_1)) goto event_1447_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (120))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1447_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1447_16_end: ;
}
void Frames::event_func_3776()
{
    // event 1448_16
    {
        if (!(group_main_engine_1)) goto event_1448_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (240))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1448_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 2);
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1448_16_end: ;
}
void Frames::event_func_3777()
{
    // event 1449_16
    {
        if (!(group_main_engine_1)) goto event_1449_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1449_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
        spread_value(enemyfirefly_742_instances, 7, 0);
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)*it)->alterables->values.get(7)*50)*80);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(7)*30);
        }
    }
    event_1449_16_end: ;
}
void Frames::event_func_3778()
{
    // event 1450_16
    {
        if (!(group_main_engine_1)) goto event_1450_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1450_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)+sin_deg(((Active*)*it)->alterables->values.get(4))*16);
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+6)%math_helper%360);
        }
    }
    event_1450_16_end: ;
}
void Frames::event_func_3779()
{
    // event 1451_16
    {
        if (!(group_main_engine_1)) goto event_1451_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1451_16_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1451_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
    }
    event_1451_16_end: ;
}
void Frames::event_func_3780()
{
    // event 1452_16
    {
        if (!(group_main_engine_1)) goto event_1452_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(5)-80))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1452_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1452_16_end: ;
}
void Frames::event_func_3781()
{
    // event 1453_16
    {
        if (!(group_main_engine_1)) goto event_1453_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1453_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)+sin_deg(((Active*)*it)->alterables->values.get(4))*16);
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+6)%math_helper%360);
        }
    }
    event_1453_16_end: ;
}
void Frames::event_func_3782()
{
    // event 1454_16
    {
        if (!(group_main_engine_1)) goto event_1454_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1454_16_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1454_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
    }
    event_1454_16_end: ;
}
void Frames::event_func_3783()
{
    // event 1455_16
    {
        if (!(group_main_engine_1)) goto event_1455_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(5)+80))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1455_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1455_16_end: ;
}
void Frames::event_func_3784()
{
    // event 1456_16
    {
        if (!(group_main_engine_1)) goto event_1456_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1456_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 5);
        }
    }
    event_1456_16_end: ;
}
void Frames::event_func_3785()
{
    // event 1457_16
    {
        if (!(group_main_engine_1)) goto event_1457_16_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto event_1457_16_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1457_16_end: ;
}
void Frames::event_func_3786()
{
    // event 1458_16
    bool or_result_1458_16 = false;
    bool or_temp_result_1458_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1458_16_0_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto or_event_1458_16_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyfirefly_742_instances, qualifier_7)) goto or_event_1458_16_0_end;
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto or_event_1458_16_0_end;
        or_result_1458_16 = true;
        or_temp_result_1458_16_0 = true;
    }
    or_event_1458_16_0_end: ;
    enemyfirefly_742_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1458_16_0) {
        qualifier_7.save_selection();
        enemyfirefly_742_instances.save_selection();
    }
    // event 1458_16
    bool or_temp_result_1458_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1458_16_1_end;
        enemyfirefly_742_instances.clear_selection();
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirefly_742_instances.has_selection()) goto or_event_1458_16_1_end;
        or_result_1458_16 = true;
        or_temp_result_1458_16_1 = true;
        or_event_1458_16_1_end: ;
        if (or_temp_result_1458_16_1) {
            enemyfirefly_742_instances.save_selection();
        }
        if (!or_result_1458_16) goto or_final_or_event_1458_16_1_end;
        enemyfirefly_742_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1458_16_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1458_16_0 || or_temp_result_1458_16_1) {
            enemyfirefly_742_instances.restore_selection();
        }
        for (ObjectIterator it(enemyfirefly_742_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1458_16_0; single_instance_1458_16_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirefly_742_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1458_16_0 == NULL)
                    single_instance_1458_16_0 = new_obj;
            }
        }
        FrameObject * single_instance_1458_16_1; single_instance_1458_16_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirefly_742_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1458_16_1 == NULL)
                    single_instance_1458_16_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1458_16_1_end: ;
}
void Frames::event_func_3787()
{
    // event 1459_16
    {
        if (!(group_main_engine_1)) goto event_1459_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1459_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
    }
    event_1459_16_end: ;
}
void Frames::event_func_3788()
{
    // event 1460_16
    {
        if (!(group_main_engine_1)) goto event_1460_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1460_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(5)+sin_deg(((Active*)*it)->alterables->values.get(4))*20);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+2);
        }
    }
    event_1460_16_end: ;
}
void Frames::event_func_3789()
{
    // event 1461_16
    {
        if (!(group_main_engine_1)) goto event_1461_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (90))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1461_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 2);
        }
    }
    event_1461_16_end: ;
}
void Frames::event_func_3790()
{
    // event 1462_16
    {
        if (!(group_main_engine_1)) goto event_1462_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (180))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1462_16_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemyslime_741_instances, enemylimiter_350_instances)) goto event_1462_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0-((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
    }
    event_1462_16_end: ;
}
void Frames::event_func_3791()
{
    // event 1463_16
    {
        if (!(group_main_engine_1)) goto event_1463_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (180))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1463_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(8, -4);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1463_16_end: ;
}
void Frames::event_func_3792()
{
    // event 1464_16
    {
        if (!(group_main_engine_1)) goto event_1464_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (6))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1464_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        FrameObject * single_instance_1464_16_0; single_instance_1464_16_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyslime_741_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyslimeburst_652(parent->x + 0, parent->y + 6), parent->layer);
                if (single_instance_1464_16_0 == NULL)
                    single_instance_1464_16_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1464_16_0))->move_back();
    }
    event_1464_16_end: ;
}
void Frames::event_func_3793()
{
    // event 1465_16
    {
        if (!(group_main_engine_1)) goto event_1465_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1465_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(9)*2);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+((Active*)*it)->alterables->values.get(8), 0));
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(8)+0.3);
        }
    }
    event_1465_16_end: ;
}
void Frames::event_func_3794()
{
    // event 1466_16
    {
        if (!(group_main_engine_1)) goto event_1466_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1466_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
        }
    }
    event_1466_16_end: ;
}
void Frames::event_func_3795()
{
    // event 1467_16
    {
        if (!(group_main_engine_1)) goto event_1467_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1467_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, 180);
            ((Active*)*it)->alterables->values.sub(10, 1);
        }
    }
    event_1467_16_end: ;
}
void Frames::event_func_3796()
{
    // event 1468_16
    {
        if (!(group_main_engine_1)) goto event_1468_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1468_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
        }
    }
    event_1468_16_end: ;
}
void Frames::event_func_3797()
{
    // event 1469_16
    {
        if (!(group_main_engine_1)) goto event_1469_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1469_16_end: ;
}
void Frames::event_func_3798()
{
    // event 1470_16
    {
        if (!(group_main_engine_1)) goto event_1470_16_end;
        enemyslime_741_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        if (!check_overlap(enemyslime_741_instances, monitorbomb_563_instances)) goto event_1470_16_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1470_16_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(8);
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_COMMON_BOMBACTIVATE_172, -1, 1);
    }
    event_1470_16_end: ;
}
void Frames::event_func_3799()
{
    // event 1471_16
    {
        if (!(group_main_engine_1)) goto event_1471_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1471_16_end: ;
}
void Frames::event_func_3800()
{
    // event 1472_16
    {
        if (!(group_main_engine_1)) goto event_1472_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1472_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
        }
    }
    event_1472_16_end: ;
}
void Frames::event_func_3801()
{
    // event 1473_16
    {
        if (!(group_main_engine_1)) goto event_1473_16_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto event_1473_16_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1473_16_end: ;
}
void Frames::event_func_3802()
{
    // event 1474_16
    bool or_result_1474_16 = false;
    bool or_temp_result_1474_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1474_16_0_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto or_event_1474_16_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyslime_741_instances, qualifier_7)) goto or_event_1474_16_0_end;
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto or_event_1474_16_0_end;
        or_result_1474_16 = true;
        or_temp_result_1474_16_0 = true;
    }
    or_event_1474_16_0_end: ;
    enemyslime_741_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1474_16_0) {
        enemyslime_741_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1474_16
    bool or_temp_result_1474_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1474_16_1_end;
        enemyslime_741_instances.clear_selection();
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyslime_741_instances.has_selection()) goto or_event_1474_16_1_end;
        or_result_1474_16 = true;
        or_temp_result_1474_16_1 = true;
        or_event_1474_16_1_end: ;
        if (or_temp_result_1474_16_1) {
            enemyslime_741_instances.save_selection();
        }
        if (!or_result_1474_16) goto or_final_or_event_1474_16_1_end;
        qualifier_7.empty_selection();
        enemyslime_741_instances.empty_selection();
        if (or_temp_result_1474_16_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1474_16_0 || or_temp_result_1474_16_1) {
            enemyslime_741_instances.restore_selection();
        }
        for (ObjectIterator it(enemyslime_741_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1474_16_0; single_instance_1474_16_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyslime_741_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1474_16_0 == NULL)
                    single_instance_1474_16_0 = new_obj;
            }
        }
        FrameObject * single_instance_1474_16_1; single_instance_1474_16_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyslime_741_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1474_16_1 == NULL)
                    single_instance_1474_16_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1474_16_1_end: ;
}
void Frames::event_func_3803()
{
    // event 1475_16
    {
        if (!(group_main_engine_1)) goto event_1475_16_end;
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1475_16_end: ;
}
void Frames::event_func_3804()
{
    // event 1476_16
    {
        if (!(group_main_engine_1)) goto event_1476_16_end;
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
        }
        if (!enemyslimeburst_652_instances.has_selection()) goto event_1476_16_end;
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1476_16_end: ;
}
void Frames::event_func_3805()
{
    // event 1477_16
    {
        if (!(group_main_engine_1)) goto event_1477_16_end;
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemyslimeburst_652_instances.has_selection()) goto event_1477_16_end;
        media.play_id(SOUND_XPLODE_2_240, -1, 1);
    }
    event_1477_16_end: ;
}
void Frames::event_func_3806()
{
    // event 1478_16
    {
        if (!(group_main_engine_1)) goto event_1478_16_end;
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemyslimeburst_652_instances.has_selection()) goto event_1478_16_end;
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1478_16_end: ;
}
void Frames::event_func_3807()
{
    // event 1479_16
    {
        if (!(group_main_engine_1)) goto event_1479_16_end;
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!enemyslimeburst_652_instances.has_selection()) goto event_1479_16_end;
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1479_16_end: ;
}
void Frames::event_func_3808()
{
    // event 1482_16
    {
        if (!(group_main_engine_1)) goto event_1482_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1482_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1482_16_end;
        if (not_always_1482_16 > loop_count) {
            not_always_1482_16 = loop_count + 2;
            goto event_1482_16_end;
        }
        not_always_1482_16 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
    }
    event_1482_16_end: ;
}
void Frames::event_func_3809()
{
    // event 1488_16
    {
        if (!(group_main_engine_1)) goto event_1488_16_end;
        waterjet_748_instances.clear_selection();
        for (ObjectIterator it(waterjet_748_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%16);
        }
        waterjetback_749_instances.clear_selection();
        for (ObjectIterator it(waterjetback_749_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%16);
        }
    }
    event_1488_16_end: ;
}
void Frames::event_func_3810()
{
    // event 1489_16
    {
        if (!(group_main_engine_1)) goto event_1489_16_end;
        waterjetright_673_instances.clear_selection();
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_right()+64))) { it.deselect(); continue; }
        }
        if (!waterjetright_673_instances.has_selection()) goto event_1489_16_end;
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+(global_values->get(3)%math_helper%8)*8);
        }
    }
    event_1489_16_end: ;
}
void Frames::event_func_3811()
{
    // event 1490_16
    {
        if (!(group_main_engine_1)) goto event_1490_16_end;
        waterjetright_673_instances.clear_selection();
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!waterjetright_673_instances.has_selection()) goto event_1490_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (8))) goto event_1490_16_end;
        if (not_always_1490_16 > loop_count) {
            not_always_1490_16 = loop_count + 2;
            goto event_1490_16_end;
        }
        not_always_1490_16 = loop_count + 2;
        media.stop_sample(SOUND_COMMON_SPLASH_14);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    event_1490_16_end: ;
}
void Frames::event_func_3812()
{
    // event 1491_16
    {
        if (!(group_main_engine_1)) goto event_1491_16_end;
        waterjetright_673_instances.clear_selection();
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(player_389_instances))->get_x()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(player_389_instances))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!waterjetright_673_instances.has_selection()) goto event_1491_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1491_16_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 6);
        FrameObject * single_instance_1491_16_0; single_instance_1491_16_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswaterhit_655(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1491_16_0 == NULL)
                    single_instance_1491_16_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1491_16_0))->alterables->values.set(0, -16+randrange(33));
        ((Active*)((Active*)single_instance_1491_16_0))->alterables->values.set(1, -16+randrange(33));
        ((Active*)((Active*)single_instance_1491_16_0))->alterables->flags.enable(0);
    }
    event_1491_16_end: ;
}
void Frames::event_func_3813()
{
    // event 1492_16
    {
        if (!(group_main_engine_1)) goto event_1492_16_end;
        effectswaterhit_655_instances.clear_selection();
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!effectswaterhit_655_instances.has_selection()) goto event_1492_16_end;
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1492_16_end: ;
}
void Frames::event_func_3814()
{
    // event 1493_16
    bool or_result_1493_16 = false;
    bool or_temp_result_1493_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1493_16_0_end;
        player_389_instances.clear_selection();
        waterjet_748_instances.clear_selection();
        if (!check_overlap(player_389_instances, waterjet_748_instances)) goto or_event_1493_16_0_end;
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(waterjet_748_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1493_16_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1493_16_0_end;
        or_result_1493_16 = true;
        or_temp_result_1493_16_0 = true;
    }
    or_event_1493_16_0_end: ;
    waterjet_748_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1493_16_0) {
        waterjet_748_instances.save_selection();
        player_389_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1493_16
    bool or_temp_result_1493_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1493_16_1_end;
        player_389_instances.clear_selection();
        waterjet_748_instances.clear_selection();
        if (!check_overlap(player_389_instances, waterjet_748_instances)) goto or_event_1493_16_1_end;
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(waterjet_748_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1493_16_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1493_16_1_end;
        or_result_1493_16 = true;
        or_temp_result_1493_16_1 = true;
        or_event_1493_16_1_end: ;
        if (or_temp_result_1493_16_1) {
            waterjet_748_instances.save_selection();
            player_389_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1493_16) goto or_final_or_event_1493_16_1_end;
        player_389_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        waterjet_748_instances.empty_selection();
        if (or_temp_result_1493_16_0 || or_temp_result_1493_16_1) {
            waterjet_748_instances.restore_selection();
        }
        if (or_temp_result_1493_16_0 || or_temp_result_1493_16_1) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1493_16_0 || or_temp_result_1493_16_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 12);
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        media.stop_sample(SOUND_COMMON_SPLASH_14);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
    }
    or_final_or_event_1493_16_1_end: ;
}
void Frames::event_func_3815()
{
    // event 1494_16
    bool or_result_1494_16 = false;
    bool or_temp_result_1494_16_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1494_16_0_end;
        player_389_instances.clear_selection();
        waterjet_748_instances.clear_selection();
        if (!check_overlap(player_389_instances, waterjet_748_instances)) goto or_event_1494_16_0_end;
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_single(waterjet_748_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1494_16_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1494_16_0_end;
        or_result_1494_16 = true;
        or_temp_result_1494_16_0 = true;
    }
    or_event_1494_16_0_end: ;
    waterjet_748_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1494_16_0) {
        waterjet_748_instances.save_selection();
        player_389_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1494_16
    bool or_temp_result_1494_16_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1494_16_1_end;
        player_389_instances.clear_selection();
        waterjet_748_instances.clear_selection();
        if (!check_overlap(player_389_instances, waterjet_748_instances)) goto or_event_1494_16_1_end;
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_single(waterjet_748_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1494_16_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1494_16_1_end;
        or_result_1494_16 = true;
        or_temp_result_1494_16_1 = true;
        or_event_1494_16_1_end: ;
        if (or_temp_result_1494_16_1) {
            waterjet_748_instances.save_selection();
            player_389_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1494_16) goto or_final_or_event_1494_16_1_end;
        player_389_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        waterjet_748_instances.empty_selection();
        if (or_temp_result_1494_16_0 || or_temp_result_1494_16_1) {
            waterjet_748_instances.restore_selection();
        }
        if (or_temp_result_1494_16_0 || or_temp_result_1494_16_1) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1494_16_0 || or_temp_result_1494_16_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 12);
            ((Active*)*it)->alterables->values.set(1, 5);
        }
        media.stop_sample(SOUND_COMMON_SPLASH_14);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
    }
    or_final_or_event_1494_16_1_end: ;
}
void Frames::event_func_3816()
{
    // event 1495_16
    {
        if (!(group_main_engine_1)) goto event_1495_16_end;
        qualifier_19.clear_selection();
        waterjet_748_instances.clear_selection();
        if (!check_overlap(qualifier_19, waterjet_748_instances)) goto event_1495_16_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1495_16_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->alterables->values.get(23)*-1);
        }
        media.stop_sample(SOUND_COMMON_SPLASH_14);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
    }
    event_1495_16_end: ;
}
void Frames::event_func_3817()
{
    // event 1496_16
    {
        if (!(group_main_engine_1)) goto event_1496_16_end;
        if (!((global_values->get(3)%math_helper%20) == (0))) goto event_1496_16_end;
        objectwhispmaker_751_instances.clear_selection();
        for (ObjectIterator it(objectwhispmaker_751_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-300)) { it.deselect(); continue; }
        }
        if (!objectwhispmaker_751_instances.has_selection()) goto event_1496_16_end;
        FrameObject * single_instance_1496_16_0; single_instance_1496_16_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectwhispmaker_751_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectwhisp_656(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1496_16_0 == NULL)
                    single_instance_1496_16_0 = new_obj;
            }
        }
    }
    event_1496_16_end: ;
}
void Frames::event_func_3818()
{
    // event 1497_16
    {
        if (!(group_main_engine_1)) goto event_1497_16_end;
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!effectwhisp_656_instances.has_selection()) goto event_1497_16_end;
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, randrange(2)*2-1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-160+randrange(321));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-120+randrange(241));
        }
    }
    event_1497_16_end: ;
}
void Frames::event_func_3819()
{
    // event 1498_16
    {
        if (!(group_main_engine_1)) goto event_1498_16_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1498_16_end;
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1498_16_end: ;
}
void Frames::event_func_3820()
{
    // event 1499_16
    {
        if (!(group_main_engine_1)) goto event_1499_16_end;
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (64))) { it.deselect(); continue; }
        }
        if (!effectwhisp_656_instances.has_selection()) goto event_1499_16_end;
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1)*2);
        }
    }
    event_1499_16_end: ;
}
void Frames::event_func_3821()
{
    // event 1500_16
    {
        if (!(group_main_engine_1)) goto event_1500_16_end;
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (64))) { it.deselect(); continue; }
        }
        if (!effectwhisp_656_instances.has_selection()) goto event_1500_16_end;
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency((((Active*)*it)->alterables->values.get(1)-64)*2);
        }
    }
    event_1500_16_end: ;
}
void Frames::event_func_3822()
{
    // event 1501_16
    {
        if (!(group_main_engine_1)) goto event_1501_16_end;
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!effectwhisp_656_instances.has_selection()) goto event_1501_16_end;
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1501_16_end: ;
}
void Frames::event_func_3823()
{
    // event 1502_16
    {
        if (!(group_main_engine_1)) goto event_1502_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_1502_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1502_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1502_16_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1502_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+8))) goto event_1502_16_end;
        if (not_always_1502_16 > loop_count) {
            not_always_1502_16 = loop_count + 2;
            goto event_1502_16_end;
        }
        not_always_1502_16 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*0.2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        FrameObject * single_instance_1502_16_0; single_instance_1502_16_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1502_16_0 == NULL)
                    single_instance_1502_16_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1502_16_0))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)((Active*)single_instance_1502_16_0))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0-(1-get_min(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)))*30);
    }
    event_1502_16_end: ;
}
void Frames::event_func_3824()
{
    // event 1503_16
    {
        if (!(group_main_engine_1)) goto event_1503_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_1503_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1503_16_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1503_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+8))) goto event_1503_16_end;
        if (not_always_1503_16 > loop_count) {
            not_always_1503_16 = loop_count + 2;
            goto event_1503_16_end;
        }
        not_always_1503_16 = loop_count + 2;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0-(1-get_min(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)))*30);
    }
    event_1503_16_end: ;
}
void Frames::event_func_3825()
{
    // event 1504_16
    {
        if (!(group_main_engine_1)) goto event_1504_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1504_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1504_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1504_16_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1504_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) <= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+8))) goto event_1504_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (26))) goto event_1504_16_end;
        if (not_always_1504_16 > loop_count) {
            not_always_1504_16 = loop_count + 2;
            goto event_1504_16_end;
        }
        not_always_1504_16 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -5);
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, -15);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
    }
    event_1504_16_end: ;
}
void Frames::event_func_3826()
{
    // event 1505_16
    {
        if (!(group_main_engine_1)) goto event_1505_16_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1505_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1505_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1505_16_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1505_16_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) <= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)+8))) goto event_1505_16_end;
        if (not_always_1505_16 > loop_count) {
            not_always_1505_16 = loop_count + 2;
            goto event_1505_16_end;
        }
        not_always_1505_16 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*1.3);
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        FrameObject * single_instance_1505_16_0; single_instance_1505_16_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1505_16_0 == NULL)
                    single_instance_1505_16_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1505_16_0))->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)((Active*)single_instance_1505_16_0))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0-(1-get_min(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)))*30);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, -15);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
    }
    event_1505_16_end: ;
}
