#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_dig2_68(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_68(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_68(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_68(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_46();
}
void Frames::loop_wrapper_process_call_fadeout_music_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_46();
}
void Frames::loop_wrapper_process_call_reset_music_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_46();
}
void Frames::loop_wrapper_sound_hurt2_68(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_68(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_68(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_68(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_68(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_68(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_68(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_46();
}
void Frames::loop_wrapper_sound_attack1_68(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_68(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_68(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_68(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_68(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_68(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_68(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_46();
}
void Frames::loop_wrapper_play_music_0_68(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_46();
}
void Frames::loop_wrapper_play_music_1_68(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_46();
}
void Frames::loop_wrapper_process_call_lock_music_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_46();
}
void Frames::loop_wrapper_play_music_3_68(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_46();
}
void Frames::loop_wrapper_play_music_4_68(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_68();
}
void Frames::loop_wrapper_play_music_5_68(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_68();
}
void Frames::loop_wrapper_play_music_6_68(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_68();
}
void Frames::loop_wrapper_sound_go0_68(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_46();
}
void Frames::loop_wrapper_process_call_me_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_46();
}
void Frames::loop_wrapper_play_music_7_68(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_68();
}
void Frames::loop_wrapper_process_call_unqueue_music_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_46();
}
void Frames::loop_wrapper_sound_cyclone0_68(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_68(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_46();
}
void Frames::event_func_14438()
{
    // event 1858_68
    {
        if (!(group_main_engine_1)) goto event_1858_68_end;
        if (!((((Active*)get_instance(lockedlabdoorback_3506_instances))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) goto event_1858_68_end;
        ((Active*)get_instance(lockedlabdoorback_3506_instances))->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
    }
    event_1858_68_end: ;
}
void Frames::event_func_14439()
{
    // event 1859_68
    {
        if (!(group_main_engine_1)) goto event_1859_68_end;
        if (!((((Active*)get_instance(lockedlabdoorfront_3544_instances))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) goto event_1859_68_end;
        ((Active*)get_instance(lockedlabdoorfront_3544_instances))->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
    }
    event_1859_68_end: ;
}
void Frames::event_func_14440()
{
    // event 1860_68
    {
        if (!(group_main_engine_1)) goto event_1860_68_end;
        if (!((((Active*)get_instance(lockedlabdoorbarrier_3541_instances))->alterables->values.get(1)) == (((Active*)foreach_instance_door)->alterables->values.get(1)))) goto event_1860_68_end;
        ((Active*)get_instance(lockedlabdoorbarrier_3541_instances))->alterables->values.set(0, ((Active*)foreach_instance_door)->alterables->values.get(0));
    }
    event_1860_68_end: ;
}
void Frames::foreach_door_68()
{
    event_func_11383();
    event_func_14438();
    event_func_14439();
    event_func_14440();
}
void Frames::event_func_14441()
{
    // event 1519_68
    {
        if (!(group_main_engine_1)) goto event_1519_68_end;
        switchbiglift1_3575_instances.clear_selection();
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_lift)->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_lift)->get_y()+40))) { it.deselect(); continue; }
        }
        if (!switchbiglift1_3575_instances.has_selection()) goto event_1519_68_end;
        ((Active*)((Active*)foreach_instance_lift))->alterables->values.set(16, get_max(((Active*)foreach_instance_lift)->alterables->values.get(16)-0.1, -3));
    }
    event_1519_68_end: ;
}
void Frames::event_func_14442()
{
    // event 1520_68
    {
        if (!(group_main_engine_1)) goto event_1520_68_end;
        switchbiglift2_3576_instances.clear_selection();
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_lift)->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_lift)->get_y()+40))) { it.deselect(); continue; }
        }
        if (!switchbiglift2_3576_instances.has_selection()) goto event_1520_68_end;
        ((Active*)((Active*)foreach_instance_lift))->alterables->values.set(16, get_max(((Active*)foreach_instance_lift)->alterables->values.get(16)-0.1, -3));
    }
    event_1520_68_end: ;
}
void Frames::foreach_lift_68()
{
    event_func_14441();
    event_func_14442();
}
void Frames::event_func_14443()
{
    // event 1531_68
    {
        if (!(group_main_engine_1)) goto event_1531_68_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1531_68_0; single_instance_1531_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1531_68_0 == NULL)
                single_instance_1531_68_0 = new_obj;
        }
        FrameObject * single_instance_1531_68_1; single_instance_1531_68_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + -16, ((Active*)col_instance_1)->y + -16), ((Active*)col_instance_1)->layer);
            if (single_instance_1531_68_1 == NULL)
                single_instance_1531_68_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1531_68_1))->force_frame(9);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsdebris_319_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsdebris_319_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsdebris_319_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsdebris_319_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsdebris_319_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            effectsdebris_319_instances.add_back();
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(5, 6, 7, 8, 9, 10));
            ((Active*)*it)->get_movement()->set_speed(90+randrange(30));
        }
    }
    event_1531_68_end: ;
}
void Frames::col_11_68()
{
    event_func_14443();
}
void Frames::test_collisions_68()
{
    test_collisions(enemyfragbomb_2049_instances, enemyhoppermkii_2200_instances, 1, 1, (EventFunction)&Frames::col_0_36);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(qualifier_8, playerreflect_447_instances, 2147483648, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(playerreflect_447_instances, enemybullet_2098_instances, 4, 1, (EventFunction)&Frames::col_3_36);
    test_collisions(playerreflect_447_instances, hazardspiralspark_3375_instances, 8, 1, (EventFunction)&Frames::col_9_65);
    test_collisions(qualifier_20, playerprojectile_320_instances, 1073741824, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 16, 1, (EventFunction)&Frames::col_5_29);
    test_collisions(qualifier_7, playerreflect_447_instances, 536870912, 32, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 134217728, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(hazardspinmine_3326_instances, objectbiglift_3574_instances, 1, 1, (EventFunction)&Frames::col_11_68);
    test_collisions(qualifier_7, effectsdebris_319_instances, 67108864, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 16777216, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 2, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(qualifier_7, enemybullet_2098_instances, 8388608, 2, (EventFunction)&Frames::col_8_20);
    test_collisions(playercharactersensor_383_instances, enemybullet_2098_instances, 2, 4, (EventFunction)&Frames::col_28_36);
    test_collisions(shieldearth_314_instances, enemybullet_2098_instances, 1, 8, (EventFunction)&Frames::col_20_36);
    test_collisions(qualifier_8, effectsdebris_319_instances, 4194304, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyslimeburst_652_instances, 4, 1, (EventFunction)&Frames::col_11_16);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(enemybullet_2098_instances, enemyaxleturret_2201_instances, 16, 1, (EventFunction)&Frames::col_25_36);
    test_collisions(playerreflect_447_instances, enemyfragbomb_2049_instances, 64, 2, (EventFunction)&Frames::col_29_36);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 8, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 1, 1, (EventFunction)&Frames::col_27_43);
    test_collisions(player_389_instances, enemyfragbomb_2049_instances, 1, 4, (EventFunction)&Frames::col_27_36);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 1048576, 8, (EventFunction)&Frames::col_8_20);
    ObjectList::iterator it1, it2;
    for (it1 = enemyfragbomb_2049_instances.begin(); it1 != enemyfragbomb_2049_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_31_36();
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
    for (it1 = enemybullet_2098_instances.begin(); it1 != enemybullet_2098_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_20();
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
void Frames::event_func_14444()
{
    // event 1530_68
    {
        if (!(group_main_engine_1)) goto event_1530_68_end;
        media.stop_sample(SOUND_COMMON_LIFT_264);
    }
    event_1530_68_end: ;
}
void Frames::on_frame_69_end()
{
    event_func_14444();
}
void Frames::event_func_14445()
{
    // event 539_68
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_539_68_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_539_68_end;
        FrameObject * single_instance_539_68_0; single_instance_539_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_539_68_0 == NULL)
                    single_instance_539_68_0 = new_obj;
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
                loop_spawndebris_68();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_539_68_end: ;
}
void Frames::event_func_14446()
{
    // event 556_68
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_556_68_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_556_68_end;
        FrameObject * single_instance_556_68_0; single_instance_556_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_556_68_0 == NULL)
                    single_instance_556_68_0 = new_obj;
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
                loop_spawndebris_68();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_556_68_end: ;
}
void Frames::event_func_14447()
{
    // event 690_68
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_690_68_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_690_68_end;
        FrameObject * single_instance_690_68_0; single_instance_690_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_690_68_0 == NULL)
                    single_instance_690_68_0 = new_obj;
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
                loop_spawndebris_68();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_690_68_end: ;
}
void Frames::event_func_14448()
{
    // event 1417_68
    {
        if (!(group_main_engine_1)) goto event_1417_68_end;
        ((Active*)get_instance(objecttransporterstart2_3416_instances))->set_x(((Active*)get_instance(objecttransporterstart_3412_instances))->get_x()+cos_deg(((Active*)get_instance(objecttransporterstart2_3416_instances))->alterables->values.get(0))*24);
        ((Active*)get_instance(objecttransporterstart2_3416_instances))->set_y(((Active*)get_instance(objecttransporterstart_3412_instances))->get_y()+sin_deg(((Active*)get_instance(objecttransporterstart2_3416_instances))->alterables->values.get(0))*24);
        ((Active*)get_instance(objecttransporterstart2_3416_instances))->alterables->values.set(0, (((Active*)get_instance(objecttransporterstart2_3416_instances))->alterables->values.get(0)+10)%math_helper%360);
    }
    event_1417_68_end: ;
}
void Frames::event_func_14449()
{
    // event 1418_68
    {
        if (!(group_main_engine_1)) goto event_1418_68_end;
        objecttransporternode0_3415_instances.clear_selection();
        objecttransporterstart_3412_instances.clear_selection();
        if (!check_overlap(objecttransporternode0_3415_instances, objecttransporterstart_3412_instances)) goto event_1418_68_end;
        ((Active*)get_instance(objecttransporterstart_3412_instances))->alterables->values.set(0, 0);
        for (ObjectIterator it(objecttransporternode0_3415_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1418_68_end: ;
}
void Frames::event_func_14450()
{
    // event 1419_68
    {
        if (!(group_main_engine_1)) goto event_1419_68_end;
        objecttransporternode180_3426_instances.clear_selection();
        objecttransporterstart_3412_instances.clear_selection();
        if (!check_overlap(objecttransporternode180_3426_instances, objecttransporterstart_3412_instances)) goto event_1419_68_end;
        ((Active*)get_instance(objecttransporterstart_3412_instances))->alterables->values.set(0, 180);
        for (ObjectIterator it(objecttransporternode180_3426_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1419_68_end: ;
}
void Frames::event_func_14451()
{
    // event 1420_68
    {
        if (!(group_main_engine_1)) goto event_1420_68_end;
        objecttransporternode270_3417_instances.clear_selection();
        objecttransporterstart_3412_instances.clear_selection();
        if (!check_overlap(objecttransporternode270_3417_instances, objecttransporterstart_3412_instances)) goto event_1420_68_end;
        ((Active*)get_instance(objecttransporterstart_3412_instances))->alterables->values.set(0, 270);
        for (ObjectIterator it(objecttransporternode270_3417_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1420_68_end: ;
}
void Frames::event_func_14452()
{
    // event 1421_68
    {
        if (!(group_main_engine_1)) goto event_1421_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (95))) goto event_1421_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1421_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1421_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1421_68_end;
        player_389_instances.clear_selection();
        objecttransporterstart_3412_instances.clear_selection();
        if (!check_overlap(player_389_instances, objecttransporterstart_3412_instances)) goto event_1421_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 95);
        objecttransporterwave_3414_instances.clear_selection();
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(objecttransporterstart_3412_instances))->alterables->values.get(0));
        }
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(objecttransporterstart_3412_instances));
            if (parent == NULL) goto pos_end_1421_68_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1421_68_0: ;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(objecttransporterstart_3412_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(objecttransporterstart_3412_instances))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1421_68_end: ;
}
void Frames::event_func_14453()
{
    // event 1423_68
    {
        if (!(group_main_engine_1)) goto event_1423_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1423_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+cos_deg(((Active*)get_instance(objecttransporterwave_3414_instances, default_active_instance))->alterables->values.get(0))*20);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(objecttransporterwave_3414_instances, default_active_instance))->alterables->values.get(0))*-20);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 15));
        objecttransporterwave_3414_instances.clear_selection();
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1423_68_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1423_68_0: ;
        }
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(100);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(100);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        FrameObject * single_instance_1423_68_1; single_instance_1423_68_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objecttransporterwave_3414_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1423_68_1 == NULL)
                    single_instance_1423_68_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1423_68_1))->set_direction(28);
        ((Active*)((Active*)single_instance_1423_68_1))->set_angle(((Active*)get_single(objecttransporterwave_3414_instances, default_active_instance))->get_angle(), 0);
    }
    event_1423_68_end: ;
}
void Frames::event_func_14454()
{
    // event 1424_68
    {
        if (!(group_main_engine_1)) goto event_1424_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1424_68_end;
        objecttransporternode0_3415_instances.clear_selection();
        for (ObjectIterator it(objecttransporternode0_3415_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+12))) { it.deselect(); continue; }
        }
        if (!objecttransporternode0_3415_instances.has_selection()) goto event_1424_68_end;
        objecttransporterwave_3414_instances.clear_selection();
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
        }
        if (!objecttransporterwave_3414_instances.has_selection()) goto event_1424_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objecttransporternode0_3415_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objecttransporternode0_3415_instances, default_active_instance))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1424_68_end: ;
}
void Frames::event_func_14455()
{
    // event 1425_68
    {
        if (!(group_main_engine_1)) goto event_1425_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1425_68_end;
        if (!((((Active*)get_instance(objecttransporternode90_3428_instances))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) goto event_1425_68_end;
        if (!((((Active*)get_instance(objecttransporternode90_3428_instances))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) goto event_1425_68_end;
        if (!((((Active*)get_instance(objecttransporternode90_3428_instances))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12))) goto event_1425_68_end;
        if (!((((Active*)get_instance(objecttransporternode90_3428_instances))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+12))) goto event_1425_68_end;
        objecttransporterwave_3414_instances.clear_selection();
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (90))) { it.deselect(); continue; }
        }
        if (!objecttransporterwave_3414_instances.has_selection()) goto event_1425_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(objecttransporternode90_3428_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(objecttransporternode90_3428_instances))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 90);
        }
    }
    event_1425_68_end: ;
}
void Frames::event_func_14456()
{
    // event 1426_68
    {
        if (!(group_main_engine_1)) goto event_1426_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1426_68_end;
        objecttransporternode180_3426_instances.clear_selection();
        for (ObjectIterator it(objecttransporternode180_3426_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+12))) { it.deselect(); continue; }
        }
        if (!objecttransporternode180_3426_instances.has_selection()) goto event_1426_68_end;
        objecttransporterwave_3414_instances.clear_selection();
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (180))) { it.deselect(); continue; }
        }
        if (!objecttransporterwave_3414_instances.has_selection()) goto event_1426_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objecttransporternode180_3426_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objecttransporternode180_3426_instances, default_active_instance))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 180);
        }
    }
    event_1426_68_end: ;
}
void Frames::event_func_14457()
{
    // event 1427_68
    {
        if (!(group_main_engine_1)) goto event_1427_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1427_68_end;
        objecttransporternode270_3417_instances.clear_selection();
        for (ObjectIterator it(objecttransporternode270_3417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+12))) { it.deselect(); continue; }
        }
        if (!objecttransporternode270_3417_instances.has_selection()) goto event_1427_68_end;
        objecttransporterwave_3414_instances.clear_selection();
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (270))) { it.deselect(); continue; }
        }
        if (!objecttransporterwave_3414_instances.has_selection()) goto event_1427_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objecttransporternode270_3417_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objecttransporternode270_3417_instances, default_active_instance))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 270);
        }
    }
    event_1427_68_end: ;
}
void Frames::event_func_14458()
{
    // event 1430_68
    {
        if (!(group_main_engine_1)) goto event_1430_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (95))) goto event_1430_68_end;
        objecttransporterwave_3414_instances.clear_selection();
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!objecttransporterwave_3414_instances.has_selection()) goto event_1430_68_end;
        for (ObjectIterator it(objecttransporterwave_3414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->set_x(-100);
        }
        FrameObject * single_instance_1430_68_0; single_instance_1430_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitespawnerwave_3336(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_1430_68_0 == NULL)
                    single_instance_1430_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1430_68_0))->alterables->flags.enable(1);
        media.play_id(SOUND_TELEPORT_END_348, -1, 1);
    }
    event_1430_68_end: ;
}
void Frames::event_func_14459()
{
    // event 1437_68
    {
        if (!(group_main_engine_1)) goto event_1437_68_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1437_68_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        ((Active*)get_instance(playerreflect_447_instances))->set_x(-50);
        media.play_id(SOUND_BLOCK_SUMMON_241, -1, 1);
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        FrameObject * single_instance_1437_68_0; single_instance_1437_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playershieldgiver_3499_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorwatershield_327(parent->get_action_x() - parent->layer->off_x + -16, parent->get_action_y() - parent->layer->off_y + -32), parent->layer);
                if (single_instance_1437_68_0 == NULL)
                    single_instance_1437_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1437_68_0))->alterables->flags.enable(7);
    }
    event_1437_68_end: ;
}
void Frames::event_func_14460()
{
    // event 1442_68
    {
        if (!(group_main_engine_1)) goto event_1442_68_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (100))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1442_68_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 4);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1442_68_end: ;
}
void Frames::event_func_14461()
{
    // event 1443_68
    {
        if (!(group_main_engine_1)) goto event_1443_68_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1443_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) < (16))) goto event_1443_68_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1443_68_end: ;
}
void Frames::event_func_14462()
{
    // event 1444_68
    {
        if (!(group_main_engine_1)) goto event_1444_68_end;
        playershieldgiver_3499_instances.clear_selection();
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+100))) { it.deselect(); continue; }
        }
        if (!playershieldgiver_3499_instances.has_selection()) goto event_1444_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(9)) > (16))) goto event_1444_68_end;
        for (ObjectIterator it(playershieldgiver_3499_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1444_68_end: ;
}
void Frames::event_func_14463()
{
    // event 1446_68
    {
        if (!(group_main_engine_1)) goto event_1446_68_end;
        fdrotatingbarrier_3573_instances.clear_selection();
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        switchbuttonright_2714_instances.clear_selection();
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(0);
        }
        switchbuttonleft_2715_instances.clear_selection();
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(0);
        }
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+3, ((Active*)*it)->alterables->values.get(1)));
        }
    }
    event_1446_68_end: ;
}
void Frames::event_func_14464()
{
    // event 1447_68
    {
        if (!(group_main_engine_1)) goto event_1447_68_end;
        fdrotatingbarrier_3573_instances.clear_selection();
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!fdrotatingbarrier_3573_instances.has_selection()) goto event_1447_68_end;
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1447_68_end: ;
}
void Frames::event_func_14465()
{
    // event 1448_68
    {
        if (!(group_main_engine_1)) goto event_1448_68_end;
        fdrotatingbarrier_3573_instances.clear_selection();
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!fdrotatingbarrier_3573_instances.has_selection()) goto event_1448_68_end;
        if (not_always_1448_68 > loop_count) {
            not_always_1448_68 = loop_count + 2;
            goto event_1448_68_end;
        }
        not_always_1448_68 = loop_count + 2;
        media.play_id(SOUND_COMMON_DNDOORLOCK_372, -1, 1);
    }
    event_1448_68_end: ;
}
void Frames::event_func_14466()
{
    // event 1449_68
    {
        if (!(group_main_engine_1)) goto event_1449_68_end;
        fdrotatingbarrier_3573_instances.clear_selection();
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!fdrotatingbarrier_3573_instances.has_selection()) goto event_1449_68_end;
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1449_68_end: ;
}
void Frames::event_func_14467()
{
    // event 1450_68
    bool or_result_1450_68 = false;
    bool or_temp_result_1450_68_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1450_68_0_end;
        playersensorrightbig_393_instances.clear_selection();
        switchbuttonright_2714_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchbuttonright_2714_instances)) goto or_event_1450_68_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1450_68_0_end;
        or_result_1450_68 = true;
        or_temp_result_1450_68_0 = true;
    }
    or_event_1450_68_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    switchbuttonright_2714_instances.clear_saved_selection();
    if (or_temp_result_1450_68_0) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        switchbuttonright_2714_instances.save_selection();
    }
    // event 1450_68
    bool or_temp_result_1450_68_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1450_68_1_end;
        playersensorrightbig_393_instances.clear_selection();
        switchbuttonright_2714_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchbuttonright_2714_instances)) goto or_event_1450_68_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1450_68_1_end;
        or_result_1450_68 = true;
        or_temp_result_1450_68_1 = true;
    }
    or_event_1450_68_1_end: ;
    if (or_temp_result_1450_68_1) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        switchbuttonright_2714_instances.save_selection();
    }
    // event 1450_68
    bool or_temp_result_1450_68_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1450_68_2_end;
        playersensorrightbig_393_instances.clear_selection();
        switchbuttonright_2714_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchbuttonright_2714_instances)) goto or_event_1450_68_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1450_68_2_end;
        or_result_1450_68 = true;
        or_temp_result_1450_68_2 = true;
        or_event_1450_68_2_end: ;
        if (or_temp_result_1450_68_2) {
            playersensorrightbig_393_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            switchbuttonright_2714_instances.save_selection();
        }
        if (!or_result_1450_68) goto or_final_or_event_1450_68_2_end;
        switchbuttonright_2714_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        if (or_temp_result_1450_68_0 || or_temp_result_1450_68_1 || or_temp_result_1450_68_2) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1450_68_0 || or_temp_result_1450_68_1 || or_temp_result_1450_68_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1450_68_0 || or_temp_result_1450_68_1 || or_temp_result_1450_68_2) {
            switchbuttonright_2714_instances.restore_selection();
        }
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1450_68_2_end: ;
}
void Frames::event_func_14468()
{
    // event 1451_68
    bool or_result_1451_68 = false;
    bool or_temp_result_1451_68_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1451_68_0_end;
        playersensorleftbig_391_instances.clear_selection();
        switchbuttonleft_2715_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchbuttonleft_2715_instances)) goto or_event_1451_68_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1451_68_0_end;
        or_result_1451_68 = true;
        or_temp_result_1451_68_0 = true;
    }
    or_event_1451_68_0_end: ;
    switchbuttonleft_2715_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1451_68_0) {
        switchbuttonleft_2715_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1451_68
    bool or_temp_result_1451_68_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1451_68_1_end;
        playersensorleftbig_391_instances.clear_selection();
        switchbuttonleft_2715_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchbuttonleft_2715_instances)) goto or_event_1451_68_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1451_68_1_end;
        or_result_1451_68 = true;
        or_temp_result_1451_68_1 = true;
    }
    or_event_1451_68_1_end: ;
    if (or_temp_result_1451_68_1) {
        switchbuttonleft_2715_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1451_68
    bool or_temp_result_1451_68_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1451_68_2_end;
        playersensorleftbig_391_instances.clear_selection();
        switchbuttonleft_2715_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchbuttonleft_2715_instances)) goto or_event_1451_68_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1451_68_2_end;
        or_result_1451_68 = true;
        or_temp_result_1451_68_2 = true;
        or_event_1451_68_2_end: ;
        if (or_temp_result_1451_68_2) {
            switchbuttonleft_2715_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_1451_68) goto or_final_or_event_1451_68_2_end;
        switchbuttonleft_2715_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1451_68_0 || or_temp_result_1451_68_1 || or_temp_result_1451_68_2) {
            switchbuttonleft_2715_instances.restore_selection();
        }
        if (or_temp_result_1451_68_0 || or_temp_result_1451_68_1 || or_temp_result_1451_68_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1451_68_0 || or_temp_result_1451_68_1 || or_temp_result_1451_68_2) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1451_68_2_end: ;
}
void Frames::event_func_14469()
{
    // event 1452_68
    {
        if (!(group_main_engine_1)) goto event_1452_68_end;
        switchbuttonright_2714_instances.clear_selection();
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!switchbuttonright_2714_instances.has_selection()) goto event_1452_68_end;
        fdrotatingbarrier_3573_instances.clear_selection();
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!fdrotatingbarrier_3573_instances.has_selection()) goto event_1452_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(2)) <= (0))) goto event_1452_68_end;
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 90);
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        media.play_id(SOUND_COMMON_DNDOOROPEN_371, -1, 1);
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.set(2, 40);
    }
    event_1452_68_end: ;
}
void Frames::event_func_14470()
{
    // event 1453_68
    {
        if (!(group_main_engine_1)) goto event_1453_68_end;
        switchbuttonleft_2715_instances.clear_selection();
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!switchbuttonleft_2715_instances.has_selection()) goto event_1453_68_end;
        fdrotatingbarrier_3573_instances.clear_selection();
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!fdrotatingbarrier_3573_instances.has_selection()) goto event_1453_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(2)) <= (0))) goto event_1453_68_end;
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 90);
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        media.play_id(SOUND_COMMON_DNDOOROPEN_371, -1, 1);
        for (ObjectIterator it(fdrotatingbarrier_3573_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.set(2, 40);
    }
    event_1453_68_end: ;
}
void Frames::event_func_14471()
{
    // event 1454_68
    {
        if (!(group_main_engine_1)) goto event_1454_68_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(2)) > (0))) goto event_1454_68_end;
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.sub(2, 1);
    }
    event_1454_68_end: ;
}
void Frames::event_func_14472()
{
    // event 1455_68
    {
        if (!(group_main_engine_1)) goto event_1455_68_end;
        switchbuttonright_2714_instances.clear_selection();
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchbuttonright_2714_instances.has_selection()) goto event_1455_68_end;
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1455_68_end: ;
}
void Frames::event_func_14473()
{
    // event 1456_68
    {
        if (!(group_main_engine_1)) goto event_1456_68_end;
        switchbuttonleft_2715_instances.clear_selection();
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchbuttonleft_2715_instances.has_selection()) goto event_1456_68_end;
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1456_68_end: ;
}
void Frames::event_func_14474()
{
    // event 1458_68
    {
        if (!(group_main_engine_1)) goto event_1458_68_end;
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->set_visible(true);
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(corkscrewdoor_3537_instances))->force_frame((0-((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(2))%math_helper%8);
        ((Active*)get_instance(corkscrewdoor_3537_instances))->set_x(((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(1)+((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(2));
    }
    event_1458_68_end: ;
}
void Frames::event_func_14475()
{
    // event 1459_68
    {
        if (!(group_main_engine_1)) goto event_1459_68_end;
        qualifier_14.clear_selection();
        switchcorkscrewdoor_3536_instances.clear_selection();
        if (!check_overlap(qualifier_14, switchcorkscrewdoor_3536_instances)) goto event_1459_68_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1459_68_end;
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->set_visible(false);
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.enable(0);
    }
    event_1459_68_end: ;
}
void Frames::event_func_14476()
{
    // event 1460_68
    {
        if (!(group_main_engine_1)) goto event_1460_68_end;
        objectbike_322_instances.clear_selection();
        switchcorkscrewdoor_3536_instances.clear_selection();
        if (!check_overlap(objectbike_322_instances, switchcorkscrewdoor_3536_instances)) goto event_1460_68_end;
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->set_visible(false);
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.enable(0);
    }
    event_1460_68_end: ;
}
void Frames::event_func_14477()
{
    // event 1461_68
    {
        if (!(group_main_engine_1)) goto event_1461_68_end;
        playersensorbottombig_397_instances.clear_selection();
        switchcorkscrewdoor_3536_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchcorkscrewdoor_3536_instances)) goto event_1461_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1461_68_end;
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->set_visible(false);
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.enable(0);
    }
    event_1461_68_end: ;
}
void Frames::event_func_14478()
{
    // event 1462_68
    {
        if (!(group_main_engine_1)) goto event_1462_68_end;
        if (!(((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.is_on(0))) goto event_1462_68_end;
        if (!(((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.is_off(1))) goto event_1462_68_end;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.enable(1);
    }
    event_1462_68_end: ;
}
void Frames::event_func_14479()
{
    // event 1463_68
    {
        if (!(group_main_engine_1)) goto event_1463_68_end;
        if (!(((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.is_on(1))) goto event_1463_68_end;
        if (!(((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.is_off(0))) goto event_1463_68_end;
        ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.disable(1);
    }
    event_1463_68_end: ;
}
void Frames::event_func_14480()
{
    // event 1464_68
    {
        if (!(group_main_engine_1)) goto event_1464_68_end;
        ((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.set(3, ((Active*)get_instance(switchcorkscrewdoor_3536_instances))->alterables->flags.get(0));
    }
    event_1464_68_end: ;
}
void Frames::event_func_14481()
{
    // event 1465_68
    {
        if (!(group_main_engine_1)) goto event_1465_68_end;
        if (!((((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(3)) == (1))) goto event_1465_68_end;
        if (!(((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->flags.is_off(2))) goto event_1465_68_end;
        ((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->flags.enable(2);
        media.stop_sample(SOUND_COMMON_DNDOORCLOSE_370);
        media.play_id(SOUND_COMMON_DNDOOROPEN_371, -1, 1);
    }
    event_1465_68_end: ;
}
void Frames::event_func_14482()
{
    // event 1466_68
    {
        if (!(group_main_engine_1)) goto event_1466_68_end;
        if (!((((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(3)) == (0))) goto event_1466_68_end;
        if (!(((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->flags.is_on(2))) goto event_1466_68_end;
        ((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->flags.disable(2);
        media.stop_sample(SOUND_COMMON_DNDOOROPEN_371);
        media.play_id(SOUND_COMMON_DNDOORCLOSE_370, -1, 1);
    }
    event_1466_68_end: ;
}
void Frames::event_func_14483()
{
    // event 1467_68
    {
        if (!(group_main_engine_1)) goto event_1467_68_end;
        if (!((((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(3)) == (1))) goto event_1467_68_end;
        ((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.set(2, get_max(((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(2)-2, -128));
    }
    event_1467_68_end: ;
}
void Frames::event_func_14484()
{
    // event 1468_68
    {
        if (!(group_main_engine_1)) goto event_1468_68_end;
        if (!((((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(3)) == (0))) goto event_1468_68_end;
        corkscrewdoor_3537_instances.clear_selection();
        if (!check_not_overlap(corkscrewdoor_3537_instances, playersensorleftbig_391_instances)) goto event_1468_68_end;
        ((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.set(2, get_min(((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(2)+1, 0));
    }
    event_1468_68_end: ;
}
void Frames::event_func_14485()
{
    // event 1469_68
    {
        if (!(group_main_engine_1)) goto event_1469_68_end;
        if (!(((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->flags.is_off(3))) goto event_1469_68_end;
        if (!((((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(2)) < (0))) goto event_1469_68_end;
        if (!((((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(2)) > (-128))) goto event_1469_68_end;
        ((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->flags.enable(3);
    }
    event_1469_68_end: ;
}
void Frames::event_func_14486()
{
    // event 1470_68
    bool or_result_1470_68 = false;
    bool or_temp_result_1470_68_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1470_68_0_end;
        if (!(((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->flags.is_on(3))) goto or_event_1470_68_0_end;
        if (!((((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(2)) >= (0))) goto or_event_1470_68_0_end;
        or_result_1470_68 = true;
        or_temp_result_1470_68_0 = true;
    }
    or_event_1470_68_0_end: ;
    // event 1470_68
    bool or_temp_result_1470_68_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1470_68_1_end;
        if (!(((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->flags.is_on(3))) goto or_event_1470_68_1_end;
        if (!((((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->values.get(2)) <= (-128))) goto or_event_1470_68_1_end;
        or_result_1470_68 = true;
        or_temp_result_1470_68_1 = true;
        or_event_1470_68_1_end: ;
        if (!or_result_1470_68) goto or_final_or_event_1470_68_1_end;
        ((Active*)get_instance(corkscrewdoor_3537_instances))->alterables->flags.disable(3);
        media.play_id(SOUND_COMMON_DNDOORLOCK_372, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    or_final_or_event_1470_68_1_end: ;
}
void Frames::event_func_14487()
{
    // event 1472_68
    {
        if (!(group_main_engine_1)) goto event_1472_68_end;
        {
            FrameObject * parent = ((Active*)get_instance(levelelectriccrusher_3540_instances));
            if (parent == NULL) goto pos_end_1472_68_0;
            ((Active*)get_instance(levelelectriccrusherbolt_3538_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1472_68_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(levelelectriccrusher_3540_instances));
            if (parent == NULL) goto pos_end_1472_68_1;
            ((Active*)get_instance(levelelectriccrushermask_3501_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1472_68_1: ;
        }
    }
    event_1472_68_end: ;
}
void Frames::event_func_14488()
{
    // event 1474_68
    {
        if (!(group_main_engine_1)) goto event_1474_68_end;
        ((Active*)get_instance(hazardspiralsparkmaker_3422_instances))->force_frame((global_values->get(3)/math_helper/3)%math_helper%6);
        fdspiralsparktowerlight_3423_instances.clear_selection();
        for (ObjectIterator it(fdspiralsparktowerlight_3423_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/3)%math_helper%6);
        }
        ((Active*)get_instance(hazardspiralsparkmaker_3422_instances))->alterables->values.add(0, 1);
        hazardspiralspark_3375_instances.clear_selection();
        for (ObjectIterator it(hazardspiralspark_3375_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)+sin_deg(((Active*)*it)->alterables->values.get(0))*40);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.4, 3));
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+4)%math_helper%360);
        }
    }
    event_1474_68_end: ;
}
void Frames::event_func_14489()
{
    // event 1475_68
    {
        if (!(group_main_engine_1)) goto event_1475_68_end;
        if (!((((Active*)get_instance(hazardspiralsparkmaker_3422_instances))->alterables->values.get(0)) > (30))) goto event_1475_68_end;
        ((Active*)get_instance(hazardspiralsparkmaker_3422_instances))->set_direction(1);
    }
    event_1475_68_end: ;
}
void Frames::event_func_14490()
{
    // event 1476_68
    {
        if (!(group_main_engine_1)) goto event_1476_68_end;
        if (!((((Active*)get_instance(hazardspiralsparkmaker_3422_instances))->alterables->values.get(0)) > (60))) goto event_1476_68_end;
        if (((Active*)get_instance(hazardspiralsparkmaker_3422_instances))->is_near_border(-100)) goto event_1476_68_end;
        if (not_always_1476_68 > loop_count) {
            not_always_1476_68 = loop_count + 2;
            goto event_1476_68_end;
        }
        not_always_1476_68 = loop_count + 2;
        media.play_id(SOUND_KUJACKER_ZAP_276, -1, 1);
    }
    event_1476_68_end: ;
}
void Frames::event_func_14491()
{
    // event 1477_68
    {
        if (!(group_main_engine_1)) goto event_1477_68_end;
        if (!((((Active*)get_instance(hazardspiralsparkmaker_3422_instances))->alterables->values.get(0)) > (60))) goto event_1477_68_end;
        {
            {
                foreach_instance_st = ((Active*)get_instance(hazardspiralsparkmaker_3422_instances));
                foreach_st_65();
            }
        }
    }
    event_1477_68_end: ;
}
void Frames::event_func_14492()
{
    // event 1508_68
    {
        if (!(group_main_engine_1)) goto event_1508_68_end;
        switchbiglift1_3575_instances.clear_selection();
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(objectbiglift_3574_instances, it.current_index));
            if (parent == NULL) goto pos_end_1508_68_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -64, parent->get_y() + 0);
            pos_end_1508_68_0: ;
        }
        switchbiglift2_3576_instances.clear_selection();
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(objectbiglift_3574_instances, it.current_index));
            if (parent == NULL) goto pos_end_1508_68_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 64, parent->get_y() + 0);
            pos_end_1508_68_1: ;
        }
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(0);
        }
        for (ObjectIterator it(switchbiglift2_3576_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.disable(0);
        }
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(9)+((Active*)*it)->alterables->values.get(16));
        }
        fdplatform_3542_instances.clear_selection();
        for (ObjectIterator it(fdplatform_3542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)*it)->get_y()/math_helper/6)%math_helper%6);
        }
    }
    event_1508_68_end: ;
}
void Frames::event_func_14493()
{
    // event 1509_68
    {
        if (!(group_main_engine_1)) goto event_1509_68_end;
        fdplatform_3542_instances.clear_selection();
        for (ObjectIterator it(fdplatform_3542_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!fdplatform_3542_instances.has_selection()) goto event_1509_68_end;
        for (ObjectIterator it(fdplatform_3542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1509_68_end: ;
}
void Frames::event_func_14494()
{
    // event 1510_68
    {
        if (!(group_main_engine_1)) goto event_1510_68_end;
        objectbiglift_3574_instances.clear_selection();
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (((Active*)*it)->alterables->values.get(18)))) { it.deselect(); continue; }
        }
        if (!objectbiglift_3574_instances.has_selection()) goto event_1510_68_end;
        for (ObjectIterator it(objectbiglift_3574_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(18));
        }
    }
    event_1510_68_end: ;
}
void Frames::event_func_14495()
{
    // event 1511_68
    {
        if (!(group_main_engine_1)) goto event_1511_68_end;
        playersensorbottombig_397_instances.clear_selection();
        switchbiglift1_3575_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchbiglift1_3575_instances)) goto event_1511_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1511_68_end;
        for (ObjectIterator it(switchbiglift1_3575_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1511_68_end: ;
}
