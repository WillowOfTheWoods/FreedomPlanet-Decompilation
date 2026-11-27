#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_dig2_71(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_71(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_71(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_71(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_71(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_71(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_71(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_71(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_71(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_71(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_71(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_71(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_71(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_71(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_71(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_sound_attack1_71(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_71(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_71(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_71(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_71(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_71(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_71(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_71(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_71(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_71(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_71(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_71(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_71(void * frame)
{
    ((Frames*)frame)->loop_play_music_7_15();
}
void Frames::loop_wrapper_play_music_6_71(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_go0_71(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_71(void * frame)
{
    ((Frames*)frame)->loop_play_music_7_15();
}
void Frames::loop_wrapper_sound_explode3_71(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_71(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_71(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_71(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_71(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::test_collisions_71()
{
    test_collisions(playercharactersensor_383_instances, enemyhomingbullet_2568_instances, 1, 1, (EventFunction)&Frames::col_12_44);
    test_collisions(qualifier_7, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(playerreflect_447_instances, enemydnalaser_2236_instances, 1, 1, (EventFunction)&Frames::col_17_37);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(qualifier_7, enemyhomingbullet_2568_instances, 268435456, 2, (EventFunction)&Frames::col_7_44);
    test_collisions(playerreflect_447_instances, enemyhomingbullet_2568_instances, 2, 4, (EventFunction)&Frames::col_8_44);
    test_collisions(qualifier_19, hazardshockwave_1524_instances, 134217728, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 1, 1, (EventFunction)&Frames::col_27_43);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 8, 2, (EventFunction)&Frames::col_5_29);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 8388608, 16, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
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
    for (it1 = enemyhomingbullet_2568_instances.begin(); it1 != enemyhomingbullet_2568_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_27_44();
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
}
void Frames::event_func_15250()
{
    // event 539_71
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_539_71_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_539_71_end;
        FrameObject * single_instance_539_71_0; single_instance_539_71_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_539_71_0 == NULL)
                    single_instance_539_71_0 = new_obj;
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
                loop_spawndebris_71();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_539_71_end: ;
}
void Frames::event_func_15251()
{
    // event 556_71
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_556_71_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_556_71_end;
        FrameObject * single_instance_556_71_0; single_instance_556_71_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_556_71_0 == NULL)
                    single_instance_556_71_0 = new_obj;
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
                loop_spawndebris_71();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_556_71_end: ;
}
void Frames::event_func_15252()
{
    // event 690_71
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_690_71_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_690_71_end;
        FrameObject * single_instance_690_71_0; single_instance_690_71_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_690_71_0 == NULL)
                    single_instance_690_71_0 = new_obj;
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
                loop_spawndebris_71();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_690_71_end: ;
}
void Frames::event_func_15253()
{
    // event 1444_71
    bool or_result_1444_71 = false;
    bool or_temp_result_1444_71_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto or_event_1444_71_0_end;
        hazardlasertunnel_3735_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnel_3735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (200))) { it.deselect(); continue; }
        }
        if (!hazardlasertunnel_3735_instances.has_selection()) goto or_event_1444_71_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1444_71_0_end;
        or_result_1444_71 = true;
        or_temp_result_1444_71_0 = true;
    }
    or_event_1444_71_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    hazardlasertunnel_3735_instances.clear_saved_selection();
    if (or_temp_result_1444_71_0) {
        playermovementvalues_245_instances.save_selection();
        hazardlasertunnel_3735_instances.save_selection();
    }
    // event 1444_71
    bool or_temp_result_1444_71_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto or_event_1444_71_1_end;
        hazardlasertunnel_3735_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnel_3735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (200))) { it.deselect(); continue; }
        }
        if (!hazardlasertunnel_3735_instances.has_selection()) goto or_event_1444_71_1_end;
        or_result_1444_71 = true;
        or_temp_result_1444_71_1 = true;
        or_event_1444_71_1_end: ;
        if (or_temp_result_1444_71_1) {
            hazardlasertunnel_3735_instances.save_selection();
        }
        if (!or_result_1444_71) goto or_final_or_event_1444_71_1_end;
        playermovementvalues_245_instances.empty_selection();
        hazardlasertunnel_3735_instances.empty_selection();
        if (or_temp_result_1444_71_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1444_71_0 || or_temp_result_1444_71_1) {
            hazardlasertunnel_3735_instances.restore_selection();
        }
        for (ObjectIterator it(hazardlasertunnel_3735_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+1)%math_helper%400);
        }
    }
    or_final_or_event_1444_71_1_end: ;
}
void Frames::event_func_15254()
{
    // event 1445_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1445_71_end;
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->flags.disable(1);
    }
    event_1445_71_end: ;
}
void Frames::event_func_15255()
{
    // event 1446_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1446_71_end;
        if (!((((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(1)) > (200))) goto event_1446_71_end;
        if (!((((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(1)) < (340))) goto event_1446_71_end;
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.set(0, get_min(((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(0)+0.2, 16));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), ((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(0)*0.2));
    }
    event_1446_71_end: ;
}
void Frames::event_func_15256()
{
    // event 1447_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1447_71_end;
        if (!((((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(1)) == (200))) goto event_1447_71_end;
        media.play_id(SOUND_FD_BEAM1_390, -1, 1);
    }
    event_1447_71_end: ;
}
void Frames::event_func_15257()
{
    // event 1448_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1448_71_end;
        if (!((((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(1)) == (300))) goto event_1448_71_end;
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->set_visible(true);
        media.play_id(SOUND_KUJACKER_LIGHTNING_272, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 20));
    }
    event_1448_71_end: ;
}
void Frames::event_func_15258()
{
    // event 1449_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1449_71_end;
        if (!((((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(1)) == (360))) goto event_1449_71_end;
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->force_animation(8);
    }
    event_1449_71_end: ;
}
void Frames::event_func_15259()
{
    // event 1450_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1450_71_end;
        if (!((((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(1)) > (360))) goto event_1450_71_end;
        if (((Active*)get_instance(hazardlasertunnel_3735_instances))->test_animation(8)) goto event_1450_71_end;
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->set_visible(false);
    }
    event_1450_71_end: ;
}
void Frames::event_func_15260()
{
    // event 1451_71
    bool or_result_1451_71 = false;
    bool or_temp_result_1451_71_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto or_event_1451_71_0_end;
        hazardlasertunnel_3735_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnel_3735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (340))) { it.deselect(); continue; }
        }
        if (!hazardlasertunnel_3735_instances.has_selection()) goto or_event_1451_71_0_end;
        or_result_1451_71 = true;
        or_temp_result_1451_71_0 = true;
    }
    or_event_1451_71_0_end: ;
    hazardlasertunnel_3735_instances.clear_saved_selection();
    if (or_temp_result_1451_71_0) {
        hazardlasertunnel_3735_instances.save_selection();
    }
    // event 1451_71
    bool or_temp_result_1451_71_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto or_event_1451_71_1_end;
        hazardlasertunnel_3735_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnel_3735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (200))) { it.deselect(); continue; }
        }
        if (!hazardlasertunnel_3735_instances.has_selection()) goto or_event_1451_71_1_end;
        or_result_1451_71 = true;
        or_temp_result_1451_71_1 = true;
        or_event_1451_71_1_end: ;
        if (or_temp_result_1451_71_1) {
            hazardlasertunnel_3735_instances.save_selection();
        }
        if (!or_result_1451_71) goto or_final_or_event_1451_71_1_end;
        hazardlasertunnel_3735_instances.empty_selection();
        if (or_temp_result_1451_71_0 || or_temp_result_1451_71_1) {
            hazardlasertunnel_3735_instances.restore_selection();
        }
        for (ObjectIterator it(hazardlasertunnel_3735_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.2, 1));
        }
    }
    or_final_or_event_1451_71_1_end: ;
}
void Frames::event_func_15261()
{
    // event 1452_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1452_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(hazardlasertunnel_3735_instances))->get_x()))) goto event_1452_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(hazardlasertunnel_3735_instances))->get_x()+256))) goto event_1452_71_end;
        if (!((((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(1)) >= (300))) goto event_1452_71_end;
        if (!((((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(1)) < (365))) goto event_1452_71_end;
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->flags.enable(1);
    }
    event_1452_71_end: ;
}
void Frames::event_func_15262()
{
    // event 1453_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1453_71_end;
        if (!(((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->flags.is_on(1))) goto event_1453_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1453_71_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1453_71_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1453_71_end: ;
}
void Frames::event_func_15263()
{
    // event 1454_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1454_71_end;
        if (!(((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->flags.is_on(1))) goto event_1454_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1454_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_1454_71_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1454_71_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
    }
    event_1454_71_end: ;
}
void Frames::event_func_15264()
{
    // event 1455_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1455_71_end;
        if (!(((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->flags.is_on(1))) goto event_1455_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1455_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1455_71_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1455_71_end: ;
}
void Frames::event_func_15265()
{
    // event 1456_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1456_71_end;
        if (!(((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->flags.is_on(1))) goto event_1456_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (8))) goto event_1456_71_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1456_71_end: ;
}
void Frames::event_func_15266()
{
    // event 1457_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1)) goto event_1457_71_end;
        if (!(((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->flags.is_on(1))) goto event_1457_71_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 3));
    }
    event_1457_71_end: ;
}
void Frames::event_func_15267()
{
    // event 1554_71
    {
        if (!(group_main_engine_1)) goto event_1554_71_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1554_71_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1554_71_0; single_instance_1554_71_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1554_71_0 == NULL)
                    single_instance_1554_71_0 = new_obj;
            }
        }
        FrameObject * single_instance_1554_71_1; single_instance_1554_71_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1554_71_1 == NULL)
                    single_instance_1554_71_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->flags.enable(11);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_71();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1554_71_end: ;
}
void Frames::event_func_15268()
{
    // event 1590_71
    {
        if (!(group_main_engine_1)) goto event_1590_71_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (5))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1590_71_end;
        FrameObject * single_instance_1590_71_0; single_instance_1590_71_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydnacannon_2264_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1590_71_0 == NULL)
                    single_instance_1590_71_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1590_71_0))->set_direction(2);
        FrameObject * single_instance_1590_71_1; single_instance_1590_71_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydnacannon_2264_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1590_71_1 == NULL)
                    single_instance_1590_71_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_71();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1590_71_end: ;
}
void Frames::event_func_15269()
{
    // event 1725_71
    bool or_result_1725_71 = false;
    bool or_temp_result_1725_71_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1725_71_0_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1725_71_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybeastiris_3353_instances, qualifier_7)) goto or_event_1725_71_0_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1725_71_0_end;
        or_result_1725_71 = true;
        or_temp_result_1725_71_0 = true;
    }
    or_event_1725_71_0_end: ;
    enemybeastiris_3353_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1725_71_0) {
        enemybeastiris_3353_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1725_71
    bool or_temp_result_1725_71_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1725_71_1_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1725_71_1_end;
        or_result_1725_71 = true;
        or_temp_result_1725_71_1 = true;
        or_event_1725_71_1_end: ;
        if (or_temp_result_1725_71_1) {
            enemybeastiris_3353_instances.save_selection();
        }
        if (!or_result_1725_71) goto or_final_or_event_1725_71_1_end;
        qualifier_7.empty_selection();
        enemybeastiris_3353_instances.empty_selection();
        if (or_temp_result_1725_71_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1725_71_0 || or_temp_result_1725_71_1) {
            enemybeastiris_3353_instances.restore_selection();
        }
        FrameObject * single_instance_1725_71_0; single_instance_1725_71_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybeastiris_3353_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1725_71_0 == NULL)
                    single_instance_1725_71_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1725_71_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1725_71_0))->set_direction(8);
        ((Active*)((Active*)single_instance_1725_71_0))->alterables->values.set(0, 2);
    }
    or_final_or_event_1725_71_1_end: ;
}
void Frames::event_func_15270()
{
    // event 1726_71
    bool or_result_1726_71 = false;
    bool or_temp_result_1726_71_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1726_71_0_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1726_71_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybeastiris_3353_instances, qualifier_7)) goto or_event_1726_71_0_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1726_71_0_end;
        or_result_1726_71 = true;
        or_temp_result_1726_71_0 = true;
    }
    or_event_1726_71_0_end: ;
    enemybeastiris_3353_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1726_71_0) {
        enemybeastiris_3353_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1726_71
    bool or_temp_result_1726_71_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1726_71_1_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1726_71_1_end;
        or_result_1726_71 = true;
        or_temp_result_1726_71_1 = true;
        or_event_1726_71_1_end: ;
        if (or_temp_result_1726_71_1) {
            enemybeastiris_3353_instances.save_selection();
        }
        if (!or_result_1726_71) goto or_final_or_event_1726_71_1_end;
        qualifier_7.empty_selection();
        enemybeastiris_3353_instances.empty_selection();
        if (or_temp_result_1726_71_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1726_71_0 || or_temp_result_1726_71_1) {
            enemybeastiris_3353_instances.restore_selection();
        }
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1726_71_0; single_instance_1726_71_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybeastiris_3353_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1726_71_0 == NULL)
                    single_instance_1726_71_0 = new_obj;
            }
        }
        FrameObject * single_instance_1726_71_1; single_instance_1726_71_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybeastiris_3353_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1726_71_1 == NULL)
                    single_instance_1726_71_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1726_71_1_end: ;
}
void Frames::event_func_15271()
{
    // event 1728_71
    {
        if (!(group_main_engine_1)) goto event_1728_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1728_71_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1728_71_end: ;
}
void Frames::event_func_15272()
{
    // event 1729_71
    {
        if (!(group_main_engine_1)) goto event_1729_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()+global_values->get(16)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+80))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1729_71_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_1729_71_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1729_71_end: ;
}
void Frames::event_func_15273()
{
    // event 1730_71
    {
        if (!(group_main_engine_1)) goto event_1730_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) < (15))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1730_71_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1730_71_end: ;
}
void Frames::event_func_15274()
{
    // event 1731_71
    {
        if (!(group_main_engine_1)) goto event_1731_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (15))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1731_71_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1731_71_end: ;
}
void Frames::event_func_15275()
{
    // event 1732_71
    {
        if (!(group_main_engine_1)) goto event_1732_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (60))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1732_71_end;
        FrameObject * single_instance_1732_71_0; single_instance_1732_71_0 = pick_random(enemyspiderbeamer_3729_instances);
        if (single_instance_1732_71_0 == NULL) goto event_1732_71_end;
        ((Active*)((Active*)single_instance_1732_71_0))->alterables->values.set(4, -60);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
        FrameObject * single_instance_1732_71_1; single_instance_1732_71_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyhomingbullet_2568(((Active*)single_instance_1732_71_0)->get_action_x() - ((Active*)single_instance_1732_71_0)->layer->off_x + 0, ((Active*)single_instance_1732_71_0)->get_action_y() - ((Active*)single_instance_1732_71_0)->layer->off_y + 0), ((Active*)single_instance_1732_71_0)->layer);
            if (single_instance_1732_71_1 == NULL)
                single_instance_1732_71_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1732_71_1))->set_direction(get_direction_int(((Active*)single_instance_1732_71_1)->x, ((Active*)single_instance_1732_71_1)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
        ((Active*)((Active*)single_instance_1732_71_0))->force_animation(0);
        FrameObject * single_instance_1732_71_2; single_instance_1732_71_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)single_instance_1732_71_0)->get_action_x() - ((Active*)single_instance_1732_71_0)->layer->off_x + 0, ((Active*)single_instance_1732_71_0)->get_action_y() - ((Active*)single_instance_1732_71_0)->layer->off_y + 0), ((Active*)single_instance_1732_71_0)->layer);
            if (single_instance_1732_71_2 == NULL)
                single_instance_1732_71_2 = new_obj;
        }
        ((Active*)((Active*)single_instance_1732_71_2))->set_scale(0.5);
    }
    event_1732_71_end: ;
}
void Frames::event_func_15276()
{
    // event 1733_71
    {
        if (!(group_main_engine_1)) goto event_1733_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (20))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1733_71_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->force_frame(99);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1733_71_end: ;
}
void Frames::event_func_15277()
{
    // event 1734_71
    {
        if (!(group_main_engine_1)) goto event_1734_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1734_71_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1734_71_0; single_instance_1734_71_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyspiderbeamer_3729_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1734_71_0 == NULL)
                    single_instance_1734_71_0 = new_obj;
            }
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_71();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1734_71_end: ;
}
void Frames::event_func_15278()
{
    // event 1736_71
    {
        if (!(group_main_engine_1)) goto event_1736_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1736_71_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1736_71_end: ;
}
void Frames::event_func_15279()
{
    // event 1743_71
    {
        if (!(group_main_engine_1)) goto event_1743_71_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(hazardlasertunnel_3735_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1743_71_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1743_71_end: ;
}
void Frames::event_func_15280()
{
    // event 1749_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1749_71_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1749_71_end;
        if (!((global_values->get(4)) == (-3))) goto event_1749_71_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -3);
    }
    event_1749_71_end: ;
}
void Frames::event_func_15281()
{
    // event 1751_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1751_71_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1751_71_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) {
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        global_values->set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        link_352_instances.clear_selection();
        for (ObjectIterator it(link_352_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x());
    }
    event_1751_71_end: ;
}
void Frames::event_func_15282()
{
    // event 1752_71
    {
        if (!(group_main_engine_1)) goto event_1752_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (416))) goto event_1752_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (256))) goto event_1752_71_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 416);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -50);
    }
    event_1752_71_end: ;
}
void Frames::event_func_15283()
{
    // event 1753_71
    {
        if (!(group_main_engine_1)) goto event_1753_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (256))) goto event_1753_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (2080))) goto event_1753_71_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 2080);
    }
    event_1753_71_end: ;
}
void Frames::event_func_15284()
{
    // event 1754_71
    {
        if (!(group_main_engine_1)) goto event_1754_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (768))) goto event_1754_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1408))) goto event_1754_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (2080))) goto event_1754_71_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(2))) goto event_1754_71_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 1408);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 2080);
    }
    event_1754_71_end: ;
}
void Frames::event_func_15285()
{
    // event 1755_71
    {
        if (!(group_main_engine_1)) goto event_1755_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1755_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1755_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (256))) goto event_1755_71_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(2))) goto event_1755_71_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x());
    }
    event_1755_71_end: ;
}
void Frames::event_func_15286()
{
    // event 1756_71
    {
        if (!(group_main_engine_1)) goto event_1756_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1756_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1756_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (256))) goto event_1756_71_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+40);
    }
    event_1756_71_end: ;
}
void Frames::event_func_15287()
{
    // event 1757_71
    {
        if (!(group_main_engine_1)) goto event_1757_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4300))) goto event_1757_71_end;
        if (once_condition_1757_71) goto event_1757_71_end;
        once_condition_1757_71 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1757_71_end: ;
}
void Frames::event_func_15288()
{
    // event 1758_71
    {
        if (!(group_main_engine_1)) goto event_1758_71_end;
        if (!((global_values->get(4)) < (2))) goto event_1758_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2300))) goto event_1758_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (2960))) goto event_1758_71_end;
        global_values->set(4, 2);
        global_values->set(5, 48);
        global_values->set(6, 2960);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1758_71_end: ;
}
void Frames::event_func_15289()
{
    // event 1759_71
    {
        if (!(group_main_engine_1)) goto event_1759_71_end;
        if (!((global_values->get(4)) < (3))) goto event_1759_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2300))) goto event_1759_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1224))) goto event_1759_71_end;
        global_values->set(4, 3);
        global_values->set(5, 208);
        global_values->set(6, 1224);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1759_71_end: ;
}
void Frames::event_func_15290()
{
    // event 1761_71
    {
        if (!(group_main_engine_1)) goto event_1761_71_end;
        if (!((global_values->get(4)) < (4))) goto event_1761_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2300))) goto event_1761_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4300))) goto event_1761_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (4112))) goto event_1761_71_end;
        global_values->set(4, 4);
        global_values->set(5, 2352);
        global_values->set(6, 6352);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1761_71_end: ;
}
void Frames::event_func_15291()
{
    // event 1762_71
    {
        if (!(group_main_engine_1)) goto event_1762_71_end;
        if (!((global_values->get(4)) < (5))) goto event_1762_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2300))) goto event_1762_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4300))) goto event_1762_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (4112))) goto event_1762_71_end;
        global_values->set(4, 5);
        global_values->set(5, 2472);
        global_values->set(6, 4112);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1762_71_end: ;
}
void Frames::event_func_15292()
{
    // event 1763_71
    {
        if (!(group_main_engine_1)) goto event_1763_71_end;
        if (!((global_values->get(4)) < (6))) goto event_1763_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2300))) goto event_1763_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4300))) goto event_1763_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (2032))) goto event_1763_71_end;
        global_values->set(4, 5);
        global_values->set(5, 2472);
        global_values->set(6, 2032);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1763_71_end: ;
}
void Frames::event_func_15293()
{
    // event 1764_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1764_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1664))) goto event_1764_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2000))) goto event_1764_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (2256))) goto event_1764_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1764_71_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1764_71_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1764_71_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(2))) goto event_1764_71_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2080-global_values->get(16)*0.5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(2);
    }
    event_1764_71_end: ;
}
void Frames::event_func_15294()
{
    // event 1766_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1766_71_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(2))) goto event_1766_71_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2080-global_values->get(16)*0.5);
    }
    event_1766_71_end: ;
}
void Frames::event_func_15295()
{
    // event 1768_71
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_local_transitions_1)) goto event_1768_71_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(2))) goto event_1768_71_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1768_71_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1768_71_end;
        global_values->set(4, -2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()-48);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 6350);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
            group_main_engine_level_specific_methods_local_transitions_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+global_values->get(16)*0.5);
        if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1) {
            group_main_engine_level_specific_methods_gimmicks_and_special_objects_laser_tunnel_1 = true;
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreonleftleg_2983_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreonrightleg_2984_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyterreon_2985_instances.clear_selection();
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1768_71_end: ;
}
void Frames::event_func_15296()
{
    // event 1972_71
    {
        if (!(group_main_engine_1)) goto event_1972_71_end;
        ((Active*)get_instance(hazardlasertunnelglass1_3733_instances))->set_y(frame_top()+((frame_top()*0.25)%math_helper%(global_values->get(17)+512)));
        ((Active*)get_instance(hazardlasertunnelglass2_3734_instances))->set_y(frame_top()+((frame_top()*0.25+256)%math_helper%(global_values->get(17)+512)));
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->set_y(frame_top());
        hazardlasertunnelglass3_3736_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(0));
            ((Active*)*it)->set_y_scale(get_max(1, ((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(hazardlasertunnel_3735_instances))->alterables->values.get(0)*0.1));
        }
    }
    event_1972_71_end: ;
}
void Frames::event_func_15297()
{
    // event 1973_71
    {
        if (!(group_main_engine_1)) goto event_1973_71_end;
        hazardlasertunnelglass3_3736_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (frame_bottom()+64))) { it.deselect(); continue; }
        }
        if (!hazardlasertunnelglass3_3736_instances.has_selection()) goto event_1973_71_end;
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 256+64);
            ((Active*)*it)->set_x(((Active*)get_instance(hazardlasertunnelglass1_3733_instances))->get_x()-12+randrange(224));
        }
    }
    event_1973_71_end: ;
}
void Frames::event_func_15298()
{
    // event 1974_71
    {
        if (!(group_main_engine_1)) goto event_1974_71_end;
        hazardlasertunnelglass3_3736_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (frame_top()))) { it.deselect(); continue; }
        }
        if (!hazardlasertunnelglass3_3736_instances.has_selection()) goto event_1974_71_end;
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 256+64);
        }
    }
    event_1974_71_end: ;
}
void Frames::event_func_15299()
{
    // event 1975_71
    {
        if (!(group_pause_1)) goto event_1975_71_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1975_71_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1975_71_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1975_71_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1975_71_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->stop_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->stop_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->stop_animation();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectlowspring_3429_instances.clear_selection();
        for (ObjectIterator it(objectlowspring_3429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1975_71_end: ;
}
void Frames::event_func_15300()
{
    // event 1976_71
    bool or_result_1976_71 = false;
    bool or_temp_result_1976_71_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1976_71_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1976_71_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1976_71_0_end;
        or_result_1976_71 = true;
        or_temp_result_1976_71_0 = true;
    }
    or_event_1976_71_0_end: ;
    // event 1976_71
    bool or_temp_result_1976_71_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1976_71_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1976_71_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1976_71_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1976_71_1_end;
        or_result_1976_71 = true;
        or_temp_result_1976_71_1 = true;
        or_event_1976_71_1_end: ;
        if (!or_result_1976_71) goto or_final_or_event_1976_71_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->start();
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->start_animation();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreonrightshoulder_2982_instances.clear_selection();
        for (ObjectIterator it(enemyterreonrightshoulder_2982_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreonleftshoulder_2981_instances.clear_selection();
        for (ObjectIterator it(enemyterreonleftshoulder_2981_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyterreondebris_2972_instances.clear_selection();
        for (ObjectIterator it(enemyterreondebris_2972_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectlowspring_3429_instances.clear_selection();
        for (ObjectIterator it(objectlowspring_3429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1976_71_1_end: ;
}
void Frames::event_func_15301()
{
    // event 1990_71
    {
        // group: Frame Transition
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1990_71_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1990_71_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(3))) goto event_1990_71_end;
            group_main_engine_1 = false;
    
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->stop_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->stop_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectterreonwarning_2986_instances.clear_selection();
        for (ObjectIterator it(effectterreonwarning_2986_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectvanishingblock_3034_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(hazardlasertunnel_3735_instances))->stop_animation();
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(3);
        ((Active*)get_instance(redflash_3737_instances))->set_x_scale(43);
        ((Active*)get_instance(redflash_3737_instances))->set_y_scale(24);
        ((Active*)get_instance(redflash_3737_instances))->set_visible(true);
        media.stop_channel(32-1);
            group_pause_1 = false;
    
    }
    event_1990_71_end: ;
}
void Frames::event_func_15302()
{
    // event 1991_71
    {
        // group: Frame Transition
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(3))) goto event_1991_71_end;
        ((Active*)get_instance(sign_351_instances))->alterables->values.add(1, 1);
    }
    event_1991_71_end: ;
}
void Frames::event_func_15303()
{
    // event 1992_71
    {
        // group: Frame Transition
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(3))) goto event_1992_71_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) > (100))) goto event_1992_71_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(1))) goto event_1992_71_end;
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
    event_1992_71_end: ;
}
void Frames::event_func_15304()
{
    // event 1993_71
    {
        // group: Frame Transition
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1993_71_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1993_71_end: ;
}
