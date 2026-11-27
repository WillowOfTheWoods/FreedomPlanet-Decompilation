#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14919()
{
    // event 1968_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1968_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1968_70_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1968_70_end: ;
}
void Frames::event_func_14920()
{
    // event 2004_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2004_70_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_2004_70_end: ;
}
void Frames::loop_voice_70()
{
    event_func_14917();
    event_func_14918();
    event_func_14919();
    event_func_14920();
}
void Frames::loop_wrapper_sound_hurt1_70(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_70(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_70(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_70(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_70(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_70(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_70(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_70(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_70(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_70(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_70(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_70(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_70(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_70(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_70(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_70(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_70(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_70(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_70(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_70(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_70(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_70(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_70(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_sound_attack1_70(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_70(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_70(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_70(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_70(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_70(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_70(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_70(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_70(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_70(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_70(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_70(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_55();
}
void Frames::loop_wrapper_play_music_5_70(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_70();
}
void Frames::loop_wrapper_play_music_6_70(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_go0_70(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_70(void * frame)
{
    ((Frames*)frame)->loop_play_music_7_15();
}
void Frames::loop_wrapper_sound_explode3_70(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_70(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_70(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_70(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_70(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::test_collisions_70()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(playerreflect_447_instances, enemydnalaser_2236_instances, 2, 1, (EventFunction)&Frames::col_17_37);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, hazardshockwave_1524_instances, 1073741824, 1, (EventFunction)&Frames::col_8_51);
    test_collisions(player_389_instances, gimmickspeedbooster_3638_instances, 1, 1, (EventFunction)&Frames::col_5_69);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 268435456, 8, (EventFunction)&Frames::col_5_13);
    test_collisions(enemyrotorbladespikes_2204_instances, hazardspikesup_558_instances, 1, 1, (EventFunction)&Frames::col_9_69);
    test_collisions(qualifier_20, enemypellet_863_instances, 134217728, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(shieldwater_318_instances, badnikgolemshot_1197_instances, 1, 1, (EventFunction)&Frames::col_7_40);
    test_collisions(enemyrotorbladespikes_2204_instances, enemymagmeon_2208_instances, 2, 1, (EventFunction)&Frames::col_8_36);
    test_collisions(playerreflect_447_instances, enemyhomingbullet_2568_instances, 16, 1, (EventFunction)&Frames::col_8_44);
    test_collisions(playerreflect_447_instances, badnikgolemshot_1197_instances, 32, 2, (EventFunction)&Frames::col_10_40);
    test_collisions(enemylimiter_350_instances, enemypounder_3419_instances, 1, 1, (EventFunction)&Frames::col_15_65);
    test_collisions(qualifier_7, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, enemyhomingbullet_2568_instances, 33554432, 2, (EventFunction)&Frames::col_7_44);
    test_collisions(qualifier_8, objectcrystal_279_instances, 16777216, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(hazardshockwave_1524_instances, enemyelitemask_2511_instances, 2, 1, (EventFunction)&Frames::col_17_65);
    test_collisions(qualifier_7, playerprojectile_320_instances, 8388608, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 4194304, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(playercharactersensor_383_instances, minibossboomerang_1623_instances, 2, 1, (EventFunction)&Frames::col_7_29);
    test_collisions(hazardshockwave_1524_instances, enemymagmeon_2208_instances, 4, 2, (EventFunction)&Frames::col_17_65);
    test_collisions(enemylimiter_350_instances, enemyrotorblade_2205_instances, 2, 1, (EventFunction)&Frames::col_23_69);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 64, 2, (EventFunction)&Frames::col_5_29);
    test_collisions(enemyrotorbladespikes_2204_instances, enemyelitemask_2511_instances, 4, 2, (EventFunction)&Frames::col_8_36);
    test_collisions(enemyrotorbladespikes_2204_instances, enemyseeker_2648_instances, 8, 1, (EventFunction)&Frames::col_8_36);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playercharactersensor_383_instances, enemyhomingbullet_2568_instances, 4, 4, (EventFunction)&Frames::col_12_44);
    test_collisions(playercharactersensor_383_instances, badnikgolemshot_1197_instances, 8, 4, (EventFunction)&Frames::col_28_69);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 4, 4, (EventFunction)&Frames::col_27_43);
    test_collisions(hazardshockwave_1524_instances, enemyseeker_2648_instances, 8, 2, (EventFunction)&Frames::col_17_65);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 1048576, 8, (EventFunction)&Frames::col_8_20);
    ObjectList::iterator it1, it2;
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
    for (it1 = enemypellet_863_instances.begin(); it1 != enemypellet_863_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_20();
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
    for (it1 = minibossboomerang_1623_instances.begin(); it1 != minibossboomerang_1623_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_22_29();
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
}
void Frames::event_func_14921()
{
    // event 1744_70
    {
        if (!(group_main_engine_1)) goto event_1744_70_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1744_70_end;
        {
            loop_cacteon_running = true;
            int times = int(1);
            loop_cacteon_index = 0;
            while (loop_cacteon_index < times) {
                loop_cacteon_70();
                if (!loop_cacteon_running) break;
                loop_cacteon_index++;
            }
        }
    }
    event_1744_70_end: ;
}
void Frames::event_func_14922()
{
    // event 1761_70
    {
        if (!(group_main_engine_1)) goto event_1761_70_end;
        enemymagmeon_2208_instances.clear_selection();
        for (ObjectIterator it(enemymagmeon_2208_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemymagmeon_2208_instances.has_selection()) goto event_1761_70_end;
        {
            loop_cacteon_floor_running = true;
            int times = int(get_max(get_ceil(((Active*)get_single(enemymagmeon_2208_instances, default_active_instance))->alterables->values.get(5)), 2));
            loop_cacteon_floor_index = 0;
            while (loop_cacteon_floor_index < times) {
                loop_cacteon_floor_70();
                if (!loop_cacteon_floor_running) break;
                loop_cacteon_floor_index++;
            }
        }
    }
    event_1761_70_end: ;
}
void Frames::event_func_14923()
{
    // event 1776_70
    {
        if (!(group_main_engine_1)) goto event_1776_70_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1776_70_end;
        {
            loop_cacteon_running = true;
            int times = int(1);
            loop_cacteon_index = 0;
            while (loop_cacteon_index < times) {
                loop_cacteon_70();
                if (!loop_cacteon_running) break;
                loop_cacteon_index++;
            }
        }
    }
    event_1776_70_end: ;
}
void Frames::event_func_14924()
{
    // event 1794_70
    {
        if (!(group_main_engine_1)) goto event_1794_70_end;
        enemycacteon_990_instances.clear_selection();
        for (ObjectIterator it(enemycacteon_990_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!enemycacteon_990_instances.has_selection()) goto event_1794_70_end;
        {
            loop_cacteon_floor_running = true;
            int times = int(get_max(get_ceil(((Active*)get_single(enemycacteon_990_instances, default_active_instance))->alterables->values.get(5)), 2));
            loop_cacteon_floor_index = 0;
            while (loop_cacteon_floor_index < times) {
                loop_cacteon_floor_70();
                if (!loop_cacteon_floor_running) break;
                loop_cacteon_floor_index++;
            }
        }
    }
    event_1794_70_end: ;
}
void Frames::event_func_14925()
{
    // event 1869_70
    {
        if (!(group_main_engine_1)) goto event_1869_70_end;
        enemytrooperlaser_2508_instances.clear_selection();
        enemyterreon_2985_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, enemyterreon_2985_instances)) goto event_1869_70_end;
        for (ObjectIterator it(enemyterreon_2985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyterreon_2985_instances.has_selection()) goto event_1869_70_end;
        FrameObject * single_instance_1869_70_0; single_instance_1869_70_0 = pick_random(enemyterreon_2985_instances);
        if (single_instance_1869_70_0 == NULL) goto event_1869_70_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1869_70_1; single_instance_1869_70_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1869_70_1 == NULL)
                    single_instance_1869_70_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1869_70_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1869_70_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1869_70_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1869_70_0))->alterables->values.sub(0, 10);
        {
            ((Active*)single_instance_1869_70_0)->set_shader(Render::INVERT);
        }
    }
    event_1869_70_end: ;
}
void Frames::event_func_14926()
{
    // event 1870_70
    {
        if (!(group_main_engine_1)) goto event_1870_70_end;
        enemytrooperlaser_2508_instances.clear_selection();
        enemyterreonleftleg_2983_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, enemyterreonleftleg_2983_instances)) goto event_1870_70_end;
        for (ObjectIterator it(enemyterreonleftleg_2983_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!enemyterreonleftleg_2983_instances.has_selection()) goto event_1870_70_end;
        FrameObject * single_instance_1870_70_0; single_instance_1870_70_0 = pick_random(enemyterreonleftleg_2983_instances);
        if (single_instance_1870_70_0 == NULL) goto event_1870_70_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1870_70_1; single_instance_1870_70_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1870_70_1 == NULL)
                    single_instance_1870_70_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1870_70_0))->alterables->values.set(2, 5);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1870_70_end: ;
}
void Frames::event_func_14927()
{
    // event 1871_70
    {
        if (!(group_main_engine_1)) goto event_1871_70_end;
        enemytrooperlaser_2508_instances.clear_selection();
        enemyterreonrightleg_2984_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, enemyterreonrightleg_2984_instances)) goto event_1871_70_end;
        for (ObjectIterator it(enemyterreonrightleg_2984_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!enemyterreonrightleg_2984_instances.has_selection()) goto event_1871_70_end;
        FrameObject * single_instance_1871_70_0; single_instance_1871_70_0 = pick_random(enemyterreonrightleg_2984_instances);
        if (single_instance_1871_70_0 == NULL) goto event_1871_70_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1871_70_1; single_instance_1871_70_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1871_70_1 == NULL)
                    single_instance_1871_70_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1871_70_0))->alterables->values.set(2, 5);
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1871_70_end: ;
}
void Frames::event_func_14928()
{
    // event 1913_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1)) goto event_1913_70_end;
        if (!((((Active*)get_instance(sign_351_instances))->alterables->values.get(1)) >= (150))) goto event_1913_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1913_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1913_70_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 48);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8+1);
        }
    }
    event_1913_70_end: ;
}
void Frames::event_func_14929()
{
    // event 1945_70
    {
        if (!(group_main_engine_1)) goto event_1945_70_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(2))) goto event_1945_70_end;
        if (not_always_1945_70 > loop_count) {
            not_always_1945_70 = loop_count + 2;
            goto event_1945_70_end;
        }
        not_always_1945_70 = loop_count + 2;
        ((Active*)get_instance(kingdomstone_1587_instances))->set_visible(false);
    }
    event_1945_70_end: ;
}
void Frames::event_func_14930()
{
    // event 1946_70
    {
        if (!(group_main_engine_1)) goto event_1946_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1024))) goto event_1946_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(kingdomstone_1587_instances))->get_x()-200))) goto event_1946_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(kingdomstone_1587_instances))->get_x()+200))) goto event_1946_70_end;
        if (!((global_values->get(1)) != (4))) goto event_1946_70_end;
        if (once_condition_1946_70) goto event_1946_70_end;
        once_condition_1946_70 = true;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_brevon_appears_1) {
            group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
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
    event_1946_70_end: ;
}
void Frames::event_func_14931()
{
    // event 1947_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1947_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1947_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1947_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_1947_70_0; single_instance_1947_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1947_70_0 == NULL)
                    single_instance_1947_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1947_70_0))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_1947_70_0))->set_direction(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1947_70_0))->set_angle(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        global_values->set(1, 2);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 25);
        }
        ((Active*)((Active*)single_instance_1947_70_0))->alterables->flags.enable(1);
    }
    event_1947_70_end: ;
}
void Frames::event_func_14932()
{
    // event 1948_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1948_70_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1948_70_end;
        FrameObject * single_instance_1948_70_0; single_instance_1948_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1948_70_0 == NULL)
                    single_instance_1948_70_0 = new_obj;
            }
        }
    }
    event_1948_70_end: ;
}
void Frames::event_func_14933()
{
    // event 1949_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1949_70_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1949_70_end;
        FrameObject * single_instance_1949_70_0; single_instance_1949_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1949_70_0 == NULL)
                    single_instance_1949_70_0 = new_obj;
            }
        }
    }
    event_1949_70_end: ;
}
void Frames::event_func_14934()
{
    // event 1950_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1950_70_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1950_70_end;
        FrameObject * single_instance_1950_70_0; single_instance_1950_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1950_70_0 == NULL)
                    single_instance_1950_70_0 = new_obj;
            }
        }
    }
    event_1950_70_end: ;
}
void Frames::event_func_14935()
{
    // event 1951_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1951_70_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1951_70_end;
        FrameObject * single_instance_1951_70_0; single_instance_1951_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1951_70_0 == NULL)
                    single_instance_1951_70_0 = new_obj;
            }
        }
    }
    event_1951_70_end: ;
}
void Frames::event_func_14936()
{
    // event 1952_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1952_70_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1952_70_end;
        FrameObject * single_instance_1952_70_0; single_instance_1952_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1952_70_0 == NULL)
                    single_instance_1952_70_0 = new_obj;
            }
        }
    }
    event_1952_70_end: ;
}
void Frames::event_func_14937()
{
    // event 1953_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1953_70_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1953_70_end;
        FrameObject * single_instance_1953_70_0; single_instance_1953_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1953_70_0 == NULL)
                    single_instance_1953_70_0 = new_obj;
            }
        }
    }
    event_1953_70_end: ;
}
void Frames::event_func_14938()
{
    // event 1954_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1954_70_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1954_70_end;
        FrameObject * single_instance_1954_70_0; single_instance_1954_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1954_70_0 == NULL)
                    single_instance_1954_70_0 = new_obj;
            }
        }
    }
    event_1954_70_end: ;
}
void Frames::event_func_14939()
{
    // event 1955_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1955_70_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1955_70_end;
        FrameObject * single_instance_1955_70_0; single_instance_1955_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1955_70_0 == NULL)
                    single_instance_1955_70_0 = new_obj;
            }
        }
    }
    event_1955_70_end: ;
}
void Frames::event_func_14940()
{
    // event 1956_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1956_70_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1956_70_end;
        FrameObject * single_instance_1956_70_0; single_instance_1956_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1956_70_0 == NULL)
                    single_instance_1956_70_0 = new_obj;
            }
        }
    }
    event_1956_70_end: ;
}
void Frames::event_func_14941()
{
    // event 1957_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1957_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1957_70_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1957_70_end: ;
}
void Frames::event_func_14942()
{
    // event 1958_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1958_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1958_70_end;
        if (not_always_1958_70 > loop_count) {
            not_always_1958_70 = loop_count + 2;
            goto event_1958_70_end;
        }
        not_always_1958_70 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1958_70_end: ;
}
void Frames::event_func_14943()
{
    // event 1959_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1959_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1959_70_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(1, string_size(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0))-15);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(3, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 0, 2)));
        ((Active*)get_instance(dialogbox2_567_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3));
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 2);
        {
            loop_voice_running = true;
            int times = int(1);
            loop_voice_index = 0;
            while (loop_voice_index < times) {
                loop_voice_70();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1959_70_end: ;
}
void Frames::event_func_14944()
{
    // event 1960_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1960_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1960_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1960_70_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1960_70_end: ;
}
void Frames::event_func_14945()
{
    // event 1961_70
    bool or_result_1961_70 = false;
    bool or_temp_result_1961_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto or_event_1961_70_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1961_70_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1961_70_0_end;
        if (not_always_1961_70 > loop_count) {
            not_always_1961_70 = loop_count + 2;
            goto or_event_1961_70_0_end;
        }
        not_always_1961_70 = loop_count + 2;
        or_result_1961_70 = true;
        or_temp_result_1961_70_0 = true;
    }
    or_event_1961_70_0_end: ;
    // event 1961_70
    bool or_temp_result_1961_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto or_event_1961_70_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1961_70_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1961_70_1_end;
        if (not_always_1961_70 > loop_count) {
            not_always_1961_70 = loop_count + 2;
            goto or_event_1961_70_1_end;
        }
        not_always_1961_70 = loop_count + 2;
        or_result_1961_70 = true;
        or_temp_result_1961_70_1 = true;
        or_event_1961_70_1_end: ;
        if (!or_result_1961_70) goto or_final_or_event_1961_70_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1961_70_1_end: ;
}
void Frames::event_func_14946()
{
    // event 1962_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1962_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1962_70_end;
        if (not_always_1962_70 > loop_count) {
            not_always_1962_70 = loop_count + 2;
            goto event_1962_70_end;
        }
        not_always_1962_70 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1962_70_end: ;
}
void Frames::event_func_14947()
{
    // event 1963_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1963_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1963_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1963_70_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1963_70_end: ;
}
void Frames::event_func_14948()
{
    // event 1964_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1964_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1964_70_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1964_70_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1964_70_end: ;
}
void Frames::event_func_14949()
{
    // event 1965_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1965_70_end;
        if (!((global_values->get(27)) == (0))) goto event_1965_70_end;
        if (not_always_1965_70 > loop_count) {
            not_always_1965_70 = loop_count + 2;
            goto event_1965_70_end;
        }
        not_always_1965_70 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1965_70_end: ;
}
void Frames::event_func_14950()
{
    // event 1969_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1969_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1969_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1969_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1969_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1969_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1969_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1969_70_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1969_70_end: ;
}
void Frames::event_func_14951()
{
    // event 1970_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1970_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1970_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1970_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1970_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1970_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1970_70_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1970_70_end: ;
}
void Frames::event_func_14952()
{
    // event 1971_70
    bool or_result_1971_70 = false;
    bool or_temp_result_1971_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1971_70_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1971_70_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1971_70_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1971_70_0_end;
        or_result_1971_70 = true;
        or_temp_result_1971_70_0 = true;
    }
    or_event_1971_70_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1971_70_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1971_70
    bool or_temp_result_1971_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1971_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1971_70_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1971_70_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1971_70_1_end;
        or_result_1971_70 = true;
        or_temp_result_1971_70_1 = true;
        or_event_1971_70_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1971_70_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1971_70) goto or_final_or_event_1971_70_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1971_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1971_70_0 || or_temp_result_1971_70_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1971_70_1_end: ;
}
void Frames::event_func_14953()
{
    // event 1972_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1972_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1972_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1972_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1972_70_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1972_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1972_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1972_70_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1972_70_end: ;
}
void Frames::event_func_14954()
{
    // event 1973_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1973_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1973_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1973_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1973_70_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1973_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1973_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1973_70_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1973_70_end: ;
}
void Frames::event_func_14955()
{
    // event 1974_70
    bool or_result_1974_70 = false;
    bool or_temp_result_1974_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1974_70_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1974_70_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1974_70_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1974_70_0_end;
        or_result_1974_70 = true;
        or_temp_result_1974_70_0 = true;
    }
    or_event_1974_70_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1974_70_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1974_70
    bool or_temp_result_1974_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1974_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1974_70_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1974_70_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1974_70_1_end;
        or_result_1974_70 = true;
        or_temp_result_1974_70_1 = true;
        or_event_1974_70_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1974_70_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1974_70) goto or_final_or_event_1974_70_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1974_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1974_70_0 || or_temp_result_1974_70_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1974_70_1_end: ;
}
void Frames::event_func_14956()
{
    // event 1975_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1975_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1975_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1975_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1975_70_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1975_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1975_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1975_70_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1975_70_end: ;
}
void Frames::event_func_14957()
{
    // event 1976_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1976_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1976_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1976_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1976_70_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1976_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1976_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1976_70_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1976_70_end: ;
}
void Frames::event_func_14958()
{
    // event 1977_70
    bool or_result_1977_70 = false;
    bool or_temp_result_1977_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1977_70_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1977_70_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1977_70_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1977_70_0_end;
        or_result_1977_70 = true;
        or_temp_result_1977_70_0 = true;
    }
    or_event_1977_70_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1977_70_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1977_70
    bool or_temp_result_1977_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1977_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1977_70_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1977_70_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1977_70_1_end;
        or_result_1977_70 = true;
        or_temp_result_1977_70_1 = true;
        or_event_1977_70_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1977_70_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1977_70) goto or_final_or_event_1977_70_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1977_70_0 || or_temp_result_1977_70_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1977_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1977_70_1_end: ;
}
void Frames::event_func_14959()
{
    // event 1978_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1978_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1978_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1978_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1978_70_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1978_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1978_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1978_70_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1978_70_end: ;
}
void Frames::event_func_14960()
{
    // event 1979_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1979_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1979_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1979_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1979_70_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1979_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1979_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1979_70_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1979_70_end: ;
}
void Frames::event_func_14961()
{
    // event 1980_70
    bool or_result_1980_70 = false;
    bool or_temp_result_1980_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1980_70_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1980_70_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1980_70_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1980_70_0_end;
        or_result_1980_70 = true;
        or_temp_result_1980_70_0 = true;
    }
    or_event_1980_70_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1980_70_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1980_70
    bool or_temp_result_1980_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1980_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1980_70_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1980_70_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1980_70_1_end;
        or_result_1980_70 = true;
        or_temp_result_1980_70_1 = true;
        or_event_1980_70_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1980_70_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1980_70) goto or_final_or_event_1980_70_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1980_70_0 || or_temp_result_1980_70_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1980_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1980_70_1_end: ;
}
void Frames::event_func_14962()
{
    // event 1981_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1981_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1981_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1981_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1981_70_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1981_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1981_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1981_70_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1981_70_end: ;
}
void Frames::event_func_14963()
{
    // event 1982_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1982_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1982_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1982_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1982_70_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1982_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1982_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1982_70_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1982_70_end: ;
}
