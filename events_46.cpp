#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_play_music_8_17(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_17(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_17(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_17(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_17(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_17(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_17(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_17(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_17(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_17(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_17(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_17(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_17(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_17(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_17(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_17(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_17(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_17(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_17(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_17(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_17(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_17(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_17(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_17(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_17(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_17();
}
void Frames::loop_wrapper_play_music_6_17(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_16();
}
void Frames::loop_wrapper_sound_go0_17(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_17(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_16();
}
void Frames::loop_wrapper_process_call_unqueue_music_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_17(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_17(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_4009()
{
    // event 1792_17
    {
        if (!(group_main_engine_1)) goto event_1792_17_end;
        if (((Active*)col_instance_2)->test_animation(7)) goto event_1792_17_end;
        if (((Active*)col_instance_2)->test_animation(8)) goto event_1792_17_end;
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        media.play_id(SOUND_COMMON_AIRGET_20, -1, 1);
        ((Active*)((Active*)col_instance_2))->move_front();
    }
    event_1792_17_end: ;
}
void Frames::col_4_17()
{
    event_func_4009();
}
void Frames::event_func_4010()
{
    // event 1619_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1619_17_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1619_17_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(2)) == (0))) goto event_1619_17_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 1);
        ((Active*)((Active*)col_instance_2))->force_animation(10);
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
    }
    event_1619_17_end: ;
}
void Frames::col_6_17()
{
    event_func_4010();
}
void Frames::event_func_4011()
{
    // event 1618_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1618_17_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(2)) == (0))) goto event_1618_17_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(1)) > (0))) goto event_1618_17_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(2, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(10);
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
    }
    event_1618_17_end: ;
}
void Frames::col_19_17()
{
    event_func_4011();
}
void Frames::test_collisions_17()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2147483648, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(playersensorleftbig_391_instances, breakableaquabrick_743_instances, 1, 1, (EventFunction)&Frames::col_3_16);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 1, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(playersensorrightbig_393_instances, breakableaquabrick_743_instances, 1, 2, (EventFunction)&Frames::col_6_16);
    test_collisions(playerreflect_447_instances, minibossacid_658_instances, 1, 1, (EventFunction)&Frames::col_6_17);
    test_collisions(qualifier_7, effectsdebris_319_instances, 536870912, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 268435456, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyslimeburst_652_instances, 2, 1, (EventFunction)&Frames::col_11_16);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
    for (it1 = minibossacid_658_instances.begin(); it1 != minibossacid_658_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_19_17();
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
void Frames::event_func_4012()
{
    // event 1406_17
    bool or_result_1406_17 = false;
    bool or_temp_result_1406_17_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1406_17_0_end;
        qualifier_25.clear_selection();
        for (QualifierIterator it(qualifier_25); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_25.has_selection()) goto or_event_1406_17_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto or_event_1406_17_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto or_event_1406_17_0_end;
        or_result_1406_17 = true;
        or_temp_result_1406_17_0 = true;
    }
    or_event_1406_17_0_end: ;
    qualifier_25.clear_saved_selection();
    if (or_temp_result_1406_17_0) {
        qualifier_25.save_selection();
    }
    // event 1406_17
    bool or_temp_result_1406_17_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1406_17_1_end;
        qualifier_25.clear_selection();
        for (QualifierIterator it(qualifier_25); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_25.has_selection()) goto or_event_1406_17_1_end;
        if (!((((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.get(5)) > (1))) goto or_event_1406_17_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto or_event_1406_17_1_end;
        or_result_1406_17 = true;
        or_temp_result_1406_17_1 = true;
        or_event_1406_17_1_end: ;
        if (or_temp_result_1406_17_1) {
            qualifier_25.save_selection();
        }
        if (!or_result_1406_17) goto or_final_or_event_1406_17_1_end;
        qualifier_25.clear_selection();
        if (or_temp_result_1406_17_0 || or_temp_result_1406_17_1) {
            qualifier_25.restore_selection();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((Active*)get_single(qualifier_25, default_active_instance))->alterables->values.get(6)*(((Active*)get_single(qualifier_25, default_active_instance))->alterables->values.get(4)/math_helper/360.0)*sin_deg(((Active*)get_single(qualifier_25, default_active_instance))->alterables->values.get(3)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)-((Active*)get_single(qualifier_25, default_active_instance))->alterables->values.get(6)*(((Active*)get_single(qualifier_25, default_active_instance))->alterables->values.get(4)/math_helper/360.0)*cos_deg(((Active*)get_single(qualifier_25, default_active_instance))->alterables->values.get(3)));
        for (QualifierIterator it(qualifier_25); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 5);
        }
    }
    or_final_or_event_1406_17_1_end: ;
}
void Frames::event_func_4013()
{
    // event 1407_17
    {
        if (!(group_main_engine_1)) goto event_1407_17_end;
        qualifier_24.clear_selection();
        for (QualifierIterator it(qualifier_24); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)-((Active*)*it)->alterables->values.get(5)*cos_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(2)*cos_deg(((Active*)*it)->alterables->values.get(3)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-((Active*)*it)->alterables->values.get(2)*sin_deg(((Active*)*it)->alterables->values.get(3)));
        }
        // icache destruction
        for (QualifierIterator it(qualifier_25); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-1, 0));
        }
        ((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.set(5, 0);
    }
    event_1407_17_end: ;
}
void Frames::event_func_4014()
{
    // event 1408_17
    {
        if (!(group_main_engine_1)) goto event_1408_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1408_17_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_25.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_25)) goto event_1408_17_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(qualifier_25, default_active_instance))->get_x()-((Active*)get_single(qualifier_25, default_active_instance))->alterables->values.get(8));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_single(qualifier_25, default_active_instance))->get_y()-((Active*)get_single(qualifier_25, default_active_instance))->alterables->values.get(9));
        for (QualifierIterator it(qualifier_25); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -1);
        }
        ((Active*)get_instance(playergimmickactions_413_instances))->alterables->values.set(5, get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)));
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
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_13();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
    }
    event_1408_17_end: ;
}
void Frames::event_func_4015()
{
    // event 1409_17
    {
        if (!(group_main_engine_1)) goto event_1409_17_end;
        qualifier_25.clear_selection();
        for (QualifierIterator it(qualifier_25); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
        }
    }
    event_1409_17_end: ;
}
void Frames::event_func_4016()
{
    // event 1429_17
    {
        if (!(group_main_engine_1)) goto event_1429_17_end;
        if (((Active*)get_instance(fishstatuefront_809_instances))->is_near_border(-40)) goto event_1429_17_end;
        ((Active*)get_instance(fishstatuefront_809_instances))->move_front();
    }
    event_1429_17_end: ;
}
void Frames::event_func_4017()
{
    // event 1430_17
    {
        if (!(group_main_engine_1)) goto event_1430_17_end;
        playerreflect_447_instances.clear_selection();
        switchmillablock_803_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, switchmillablock_803_instances)) goto event_1430_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1430_17_end;
        ((Active*)get_instance(switchmillablock_803_instances))->set_visible(false);
        ((Active*)get_instance(switchmillablock_803_instances))->alterables->flags.enable(0);
    }
    event_1430_17_end: ;
}
void Frames::event_func_4018()
{
    // event 1431_17
    {
        if (!(group_main_engine_1)) goto event_1431_17_end;
        if (!(((Active*)get_instance(switchmillablock_803_instances))->alterables->flags.is_on(0))) goto event_1431_17_end;
        if (once_condition_1431_17) goto event_1431_17_end;
        once_condition_1431_17 = true;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
    }
    event_1431_17_end: ;
}
void Frames::event_func_4019()
{
    // event 1432_17
    bool or_result_1432_17 = false;
    bool or_temp_result_1432_17_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1432_17_0_end;
        switchmillablock_803_instances.clear_selection();
        for (ObjectIterator it(switchmillablock_803_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchmillablock_803_instances.has_selection()) goto or_event_1432_17_0_end;
        switchdoor_735_instances.clear_selection();
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (224))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto or_event_1432_17_0_end;
        or_result_1432_17 = true;
        or_temp_result_1432_17_0 = true;
    }
    or_event_1432_17_0_end: ;
    switchmillablock_803_instances.clear_saved_selection();
    switchdoor_735_instances.clear_saved_selection();
    if (or_temp_result_1432_17_0) {
        switchmillablock_803_instances.save_selection();
        switchdoor_735_instances.save_selection();
    }
    // event 1432_17
    bool or_temp_result_1432_17_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1432_17_1_end;
        switchdoor_735_instances.clear_selection();
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (224))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto or_event_1432_17_1_end;
        or_result_1432_17 = true;
        or_temp_result_1432_17_1 = true;
        or_event_1432_17_1_end: ;
        if (or_temp_result_1432_17_1) {
            switchdoor_735_instances.save_selection();
        }
        if (!or_result_1432_17) goto or_final_or_event_1432_17_1_end;
        switchmillablock_803_instances.empty_selection();
        switchdoor_735_instances.empty_selection();
        if (or_temp_result_1432_17_0) {
            switchmillablock_803_instances.restore_selection();
        }
        if (or_temp_result_1432_17_0 || or_temp_result_1432_17_1) {
            switchdoor_735_instances.restore_selection();
        }
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 4);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(1)-1-1);
        }
    }
    or_final_or_event_1432_17_1_end: ;
}
void Frames::event_func_4020()
{
    // event 1433_17
    {
        if (!(group_main_engine_1)) goto event_1433_17_end;
        switchwallplate_814_instances.clear_selection();
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1433_17_end: ;
}
void Frames::event_func_4021()
{
    // event 1434_17
    bool or_result_1434_17 = false;
    bool or_temp_result_1434_17_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1434_17_0_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate_814_instances)) goto or_event_1434_17_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1434_17_0_end;
        or_result_1434_17 = true;
        or_temp_result_1434_17_0 = true;
    }
    or_event_1434_17_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    switchwallplate_814_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1434_17_0) {
        playersensorrightbig_393_instances.save_selection();
        switchwallplate_814_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1434_17
    bool or_temp_result_1434_17_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1434_17_1_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate_814_instances)) goto or_event_1434_17_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1434_17_1_end;
        or_result_1434_17 = true;
        or_temp_result_1434_17_1 = true;
        or_event_1434_17_1_end: ;
        if (or_temp_result_1434_17_1) {
            playersensorrightbig_393_instances.save_selection();
            switchwallplate_814_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1434_17) goto or_final_or_event_1434_17_1_end;
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        switchwallplate_814_instances.empty_selection();
        if (or_temp_result_1434_17_0 || or_temp_result_1434_17_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1434_17_0 || or_temp_result_1434_17_1) {
            switchwallplate_814_instances.restore_selection();
        }
        if (or_temp_result_1434_17_0 || or_temp_result_1434_17_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1434_17_1_end: ;
}
void Frames::event_func_4022()
{
    // event 1435_17
    {
        if (!(group_main_engine_1)) goto event_1435_17_end;
        switchwallplate_814_instances.clear_selection();
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchwallplate_814_instances.has_selection()) goto event_1435_17_end;
        if (not_always_1435_17 > loop_count) {
            not_always_1435_17 = loop_count + 2;
            goto event_1435_17_end;
        }
        not_always_1435_17 = loop_count + 2;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1435_17_end: ;
}
void Frames::event_func_4023()
{
    // event 1436_17
    {
        if (!(group_main_engine_1)) goto event_1436_17_end;
        switchwallplate_814_instances.clear_selection();
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchwallplate_814_instances.has_selection()) goto event_1436_17_end;
        gimmickrotatingpipe_801_instances.clear_selection();
        for (ObjectIterator it(gimmickrotatingpipe_801_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickrotatingpipe_801_instances.has_selection()) goto event_1436_17_end;
        for (ObjectIterator it(gimmickrotatingpipe_801_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        media.play_id(SOUND_DRAG2_62, -1, 0);
        for (ObjectIterator it(gimmickrotatingpipe_801_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0-((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1436_17_end: ;
}
void Frames::event_func_4024()
{
    // event 1437_17
    {
        if (!(group_main_engine_1)) goto event_1437_17_end;
        gimmickrotatingpipe_801_instances.clear_selection();
        for (ObjectIterator it(gimmickrotatingpipe_801_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickrotatingpipe_801_instances.has_selection()) goto event_1437_17_end;
        for (ObjectIterator it(gimmickrotatingpipe_801_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.03, 5));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        gimmickrotatingpipebase2_815_instances.clear_selection();
        for (ObjectIterator it(gimmickrotatingpipebase2_815_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(gimmickrotatingpipe_801_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1437_17_end: ;
}
void Frames::event_func_4025()
{
    // event 1438_17
    {
        if (!(group_main_engine_1)) goto event_1438_17_end;
        gimmickrotatingpipe_801_instances.clear_selection();
        for (ObjectIterator it(gimmickrotatingpipe_801_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-90))) { it.deselect(); continue; }
        }
        if (!gimmickrotatingpipe_801_instances.has_selection()) goto event_1438_17_end;
        media.stop_sample(SOUND_COMMON_SLAM1_51);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        media.stop_sample(SOUND_DRAG2_62);
        for (ObjectIterator it(gimmickrotatingpipe_801_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -90);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        gimmickrotatingpipebase2_815_instances.clear_selection();
        for (ObjectIterator it(gimmickrotatingpipebase2_815_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(gimmickrotatingpipe_801_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1438_17_end: ;
}
void Frames::event_func_4026()
{
    // event 1439_17
    {
        if (!(group_main_engine_1)) goto event_1439_17_end;
        gimmickrotatingpipe_801_instances.clear_selection();
        for (ObjectIterator it(gimmickrotatingpipe_801_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (0))) { it.deselect(); continue; }
        }
        if (!gimmickrotatingpipe_801_instances.has_selection()) goto event_1439_17_end;
        media.stop_sample(SOUND_COMMON_SLAM1_51);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        media.stop_sample(SOUND_DRAG2_62);
        for (ObjectIterator it(gimmickrotatingpipe_801_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        gimmickrotatingpipebase2_815_instances.clear_selection();
        for (ObjectIterator it(gimmickrotatingpipebase2_815_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(gimmickrotatingpipe_801_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1439_17_end: ;
}
void Frames::event_func_4027()
{
    // event 1440_17
    {
        if (!(group_main_engine_1)) goto event_1440_17_end;
        objectspinningbeam_807_instances.clear_selection();
        for (ObjectIterator it(objectspinningbeam_807_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1, 0);
        }
    }
    event_1440_17_end: ;
}
void Frames::event_func_4028()
{
    // event 1441_17
    {
        if (!(group_main_engine_1)) goto event_1441_17_end;
        playersensorbottombig_397_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectspinningbeam_807_instances)) goto event_1441_17_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_1441_17_end;
        ((Counter*)get_instance(guirings_122_instances))->set(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
    }
    event_1441_17_end: ;
}
void Frames::event_func_4029()
{
    // event 1442_17
    {
        if (!(group_main_engine_1)) goto event_1442_17_end;
        levelcrusher1_772_instances.clear_selection();
        for (ObjectIterator it(levelcrusher1_772_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!levelcrusher1_772_instances.has_selection()) goto event_1442_17_end;
        for (ObjectIterator it(levelcrusher1_772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->layer->index+1);
        }
    }
    event_1442_17_end: ;
}
void Frames::event_func_4030()
{
    // event 1443_17
    {
        if (!(group_main_engine_1)) goto event_1443_17_end;
        levelcrusher1_772_instances.clear_selection();
        for (ObjectIterator it(levelcrusher1_772_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (4))) { it.deselect(); continue; }
        }
        if (!levelcrusher1_772_instances.has_selection()) goto event_1443_17_end;
        for (ObjectIterator it(levelcrusher1_772_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1443_17_end: ;
}
void Frames::event_func_4031()
{
    // event 1485_17
    {
        if (!(group_main_engine_1)) goto event_1485_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1485_17_end;
        if (test_obstacle(((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_x(), ((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_box_index(3)-1)) goto event_1485_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+(0.5-(((Active*)*it)->alterables->flags.get(1)*0.45)), 12));
        }
    }
    event_1485_17_end: ;
}
void Frames::event_func_4032()
{
    // event 1486_17
    {
        if (!(group_main_engine_1)) goto event_1486_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1486_17_end;
        if (!(test_obstacle(((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_x(), ((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_box_index(3)-1))) goto event_1486_17_end;
        {
            loop_gansekijr_floor_running = true;
            int times = int(12);
            loop_gansekijr_floor_index = 0;
            while (loop_gansekijr_floor_index < times) {
                loop_gansekijr_floor_17();
                if (!loop_gansekijr_floor_running) break;
                loop_gansekijr_floor_index++;
            }
        }
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1486_17_end: ;
}
void Frames::event_func_4033()
{
    // event 1488_17
    {
        if (!(group_main_engine_1)) goto event_1488_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1488_17_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (1))) goto event_1488_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1488_17_end;
        FrameObject * single_instance_1488_17_0; single_instance_1488_17_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1488_17_0 == NULL)
                    single_instance_1488_17_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        ((Active*)((Active*)single_instance_1488_17_0))->set_x(((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_x());
        ((Active*)((Active*)single_instance_1488_17_0))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1488_17_end: ;
}
void Frames::event_func_4034()
{
    // event 1489_17
    {
        if (!(group_main_engine_1)) goto event_1489_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1489_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1489_17_end: ;
}
void Frames::event_func_4035()
{
    // event 1490_17
    {
        if (!(group_main_engine_1)) goto event_1490_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (40))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1490_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1490_17_end: ;
}
void Frames::event_func_4036()
{
    // event 1491_17
    {
        if (!(group_main_engine_1)) goto event_1491_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1491_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
        }
    }
    event_1491_17_end: ;
}
void Frames::event_func_4037()
{
    // event 1492_17
    {
        if (!(group_main_engine_1)) goto event_1492_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(6)+4))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1492_17_end;
        if (test_obstacle(((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_box_index(0), ((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_y())) goto event_1492_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
        }
    }
    event_1492_17_end: ;
}
void Frames::event_func_4038()
{
    // event 1493_17
    {
        if (!(group_main_engine_1)) goto event_1493_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(6)-4))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1493_17_end;
        if (test_obstacle(((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_box_index(2), ((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_y())) goto event_1493_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
    }
    event_1493_17_end: ;
}
void Frames::event_func_4039()
{
    // event 1494_17
    {
        if (!(group_main_engine_1)) goto event_1494_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1494_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1494_17_end: ;
}
void Frames::event_func_4040()
{
    // event 1495_17
    {
        if (!(group_main_engine_1)) goto event_1495_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1495_17_end;
        if (!(test_obstacle(((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_x(), ((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_box_index(3)+1))) goto event_1495_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (60))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1495_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(5, -10-randrange(40));
        }
    }
    event_1495_17_end: ;
}
void Frames::event_func_4041()
{
    // event 1496_17
    {
        if (!(group_main_engine_1)) goto event_1496_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(11)) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1496_17_end;
        if (!(test_obstacle(((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_x(), ((Active*)get_single(enemygansekijr_816_instances, default_active_instance))->get_box_index(3)+1))) goto event_1496_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)*it)->alterables->values.get(6)+4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)*it)->alterables->values.get(6)-4))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1496_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(5, -10-randrange(40));
        }
    }
    event_1496_17_end: ;
}
void Frames::event_func_4042()
{
    // event 1497_17
    {
        if (!(group_main_engine_1)) goto event_1497_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1497_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
        }
    }
    event_1497_17_end: ;
}
void Frames::event_func_4043()
{
    // event 1498_17
    {
        if (!(group_main_engine_1)) goto event_1498_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1498_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1498_17_end: ;
}
void Frames::event_func_4044()
{
    // event 1499_17
    {
        if (!(group_main_engine_1)) goto event_1499_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+50))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto event_1499_17_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1499_17_end: ;
}
void Frames::event_func_4045()
{
    // event 1500_17
    bool or_result_1500_17 = false;
    bool or_temp_result_1500_17_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1500_17_0_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto or_event_1500_17_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemygansekijr_816_instances, qualifier_7)) goto or_event_1500_17_0_end;
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto or_event_1500_17_0_end;
        or_result_1500_17 = true;
        or_temp_result_1500_17_0 = true;
    }
    or_event_1500_17_0_end: ;
    enemygansekijr_816_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1500_17_0) {
        enemygansekijr_816_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1500_17
    bool or_temp_result_1500_17_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1500_17_1_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemygansekijr_816_instances.has_selection()) goto or_event_1500_17_1_end;
        or_result_1500_17 = true;
        or_temp_result_1500_17_1 = true;
        or_event_1500_17_1_end: ;
        if (or_temp_result_1500_17_1) {
            enemygansekijr_816_instances.save_selection();
        }
        if (!or_result_1500_17) goto or_final_or_event_1500_17_1_end;
        qualifier_7.empty_selection();
        enemygansekijr_816_instances.empty_selection();
        if (or_temp_result_1500_17_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1500_17_0 || or_temp_result_1500_17_1) {
            enemygansekijr_816_instances.restore_selection();
        }
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1500_17_0; single_instance_1500_17_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemygansekijr_816_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1500_17_0 == NULL)
                    single_instance_1500_17_0 = new_obj;
            }
        }
        FrameObject * single_instance_1500_17_1; single_instance_1500_17_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemygansekijr_816_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1500_17_1 == NULL)
                    single_instance_1500_17_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1500_17_1_end: ;
}
void Frames::event_func_4046()
{
    // event 1501_17
    {
        if (!(group_main_engine_1)) goto event_1501_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1501_17_end: ;
}
void Frames::event_func_4047()
{
    // event 1502_17
    {
        if (!(group_main_engine_1)) goto event_1502_17_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (3))) goto event_1502_17_end;
        enemygansekijr_816_instances.clear_selection();
        for (ObjectIterator it(enemygansekijr_816_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1502_17_end: ;
}
void Frames::event_func_4048()
{
    // event 1508_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_starting_tunnel_1)) goto event_1508_17_end;
        if (!((global_values->get(4)) <= (1))) goto event_1508_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1508_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (1500))) goto event_1508_17_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 15);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1508_17_end: ;
}
void Frames::event_func_4049()
{
    // event 1509_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_starting_tunnel_1)) goto event_1509_17_end;
        if (!((global_values->get(4)) == (1))) goto event_1509_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1509_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (1500))) goto event_1509_17_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 15-((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)*10);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1509_17_end: ;
}
void Frames::event_func_4050()
{
    // event 1510_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_starting_tunnel_1)) goto event_1510_17_end;
        if (!((global_values->get(4)) == (1))) goto event_1510_17_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1510_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1240))) goto event_1510_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1480))) goto event_1510_17_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        waterjet_748_instances.clear_selection();
        for (ObjectIterator it(waterjet_748_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
        global_values->set(4, 2);
            group_main_engine_level_specific_methods_starting_tunnel_1 = false;
    
        global_values->set(5, 1536);
        global_values->set(6, 1120);
    }
    event_1510_17_end: ;
}
void Frames::event_func_4051()
{
    // event 1541_17
    {
        if (!(group_main_engine_1)) goto event_1541_17_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1541_17_end;
        playercharactersensor_383_instances.clear_selection();
        bubblepatch_806_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, bubblepatch_806_instances)) goto event_1541_17_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) > (0-(1-get_min(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)))*30))) goto event_1541_17_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.sub(9, 1);
    }
    event_1541_17_end: ;
}
void Frames::event_func_4052()
{
    // event 1542_17
    {
        if (!(group_main_engine_1)) goto event_1542_17_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1542_17_end;
        playercharactersensor_383_instances.clear_selection();
        bubblepatch_806_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, bubblepatch_806_instances)) goto event_1542_17_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) >= (20))) goto event_1542_17_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 18);
    }
    event_1542_17_end: ;
}
void Frames::event_func_4053()
{
    // event 1549_17
    {
        if (!(group_main_engine_1)) goto event_1549_17_end;
        if (!((frame_left()) < (7544))) goto event_1549_17_end;
        if (not_always_1549_17 > loop_count) {
            not_always_1549_17 = loop_count + 2;
            goto event_1549_17_end;
        }
        not_always_1549_17 = loop_count + 2;
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->set_visible(false);
    }
    event_1549_17_end: ;
}
void Frames::event_func_4054()
{
    // event 1550_17
    {
        if (!(group_main_engine_1)) goto event_1550_17_end;
        if (!((frame_left()) > (7544))) goto event_1550_17_end;
        if (not_always_1550_17 > loop_count) {
            not_always_1550_17 = loop_count + 2;
            goto event_1550_17_end;
        }
        not_always_1550_17 = loop_count + 2;
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->set_visible(true);
    }
    event_1550_17_end: ;
}
void Frames::event_func_4055()
{
    // event 1552_17
    {
        if (!(group_main_engine_1)) goto event_1552_17_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 1820, 685, 1893, 741)) > (0))) goto event_1552_17_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1552_17_end: ;
}
void Frames::event_func_4056()
{
    // event 1553_17
    {
        if (!(group_main_engine_1)) goto event_1553_17_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 5534, 240, 5986, 327)) > (0))) goto event_1553_17_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1553_17_end: ;
}
void Frames::event_func_4057()
{
    // event 1556_17
    {
        if (!(group_main_engine_1)) goto event_1556_17_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1556_17_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1556_17_end;
        if (once_condition_1556_17) goto event_1556_17_end;
        once_condition_1556_17 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(4)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1556_17_end: ;
}
void Frames::event_func_4058()
{
    // event 1561_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1561_17_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1561_17_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1561_17_end: ;
}
void Frames::event_func_4059()
{
    // event 1562_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1562_17_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1562_17_end;
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
    }
    event_1562_17_end: ;
}
void Frames::event_func_4060()
{
    // event 1563_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1563_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5640))) goto event_1563_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (5740))) goto event_1563_17_end;
        if (!((global_values->get(4)) < (3))) goto event_1563_17_end;
        if (!((global_values->get(1)) != (1))) goto event_1563_17_end;
        global_values->set(4, 3);
        global_values->set(5, 5720);
        global_values->set(6, 270);
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
    event_1563_17_end: ;
}
void Frames::event_func_4061()
{
    // event 1564_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1564_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5640))) goto event_1564_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (5740))) goto event_1564_17_end;
        if (!((global_values->get(4)) < (3))) goto event_1564_17_end;
        if (!((global_values->get(1)) == (1))) goto event_1564_17_end;
        global_values->set(4, 3);
        global_values->set(5, 5720);
        global_values->set(6, 608);
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
    event_1564_17_end: ;
}
void Frames::event_func_4062()
{
    // event 1565_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1565_17_end;
        if (!((global_values->get(4)) < (10))) goto event_1565_17_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(4)) < (width))) goto event_1565_17_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
    }
    event_1565_17_end: ;
}
void Frames::event_func_4063()
{
    // event 1566_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1566_17_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1566_17_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()))) goto event_1566_17_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1566_17_end;
        if (!((global_values->get(4)) < (10))) goto event_1566_17_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1566_17_end: ;
}
void Frames::event_func_4064()
{
    // event 1567_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1567_17_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()))) goto event_1567_17_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1567_17_end;
        if (!((global_values->get(4)) < (10))) goto event_1567_17_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1567_17_end: ;
}
void Frames::event_func_4065()
{
    // event 1569_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1569_17_end;
        player_389_instances.clear_selection();
        cameratriggerboss_424_instances.clear_selection();
        if (!check_overlap(player_389_instances, cameratriggerboss_424_instances)) goto event_1569_17_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1569_17_end;
        if (!((global_values->get(4)) < (10))) goto event_1569_17_end;
        if (once_condition_1569_17) goto event_1569_17_end;
        once_condition_1569_17 = true;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        if (!group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1) {
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 = true;
        }
    }
    event_1569_17_end: ;
}
