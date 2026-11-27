#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_dig3_30(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_30(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_30(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_30(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_30(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_30(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_30(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_30(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode1_30(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_30(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_30(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_30(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_30(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_30(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_30(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_30(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_30(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_30(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_30(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_30(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_30(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_30(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_30(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_29();
}
void Frames::loop_wrapper_play_music_6_30(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_29();
}
void Frames::loop_wrapper_sound_go0_30(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_30(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_29();
}
void Frames::loop_wrapper_process_call_unqueue_music_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_30(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_30(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_6951()
{
    // event 1642_30
    {
        if (!(group_main_engine_1)) goto event_1642_30_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1642_30_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1642_30_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(2);
        ((Active*)((Active*)col_instance_2))->get_movement()->bounce(true);
        media.play_id(SOUND_MILLA_REFLECT_219, -1, 1);
    }
    event_1642_30_end: ;
}
void Frames::col_1_30()
{
    event_func_6951();
}
void Frames::event_func_6952()
{
    // event 1609_30
    {
        if (!(group_main_engine_1)) goto event_1609_30_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(4)) > (20))) goto event_1609_30_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(5)) < (2))) goto event_1609_30_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(5, 2);
        ((Active*)((Active*)col_instance_2))->set_visible(false);
        ((Active*)((Active*)col_instance_2))->force_animation(8);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(4, 0);
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 4);
        FrameObject * single_instance_1609_30_0; single_instance_1609_30_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1609_30_0 == NULL)
                single_instance_1609_30_0 = new_obj;
        }
    }
    event_1609_30_end: ;
}
void Frames::col_7_30()
{
    event_func_6952();
}
void Frames::event_func_6953()
{
    // event 1643_30
    {
        if (!(group_main_engine_1)) goto event_1643_30_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(2))) goto event_1643_30_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(2)) <= (0))) goto event_1643_30_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(5))) goto event_1643_30_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_1643_30_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(2, 5);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(23, 0);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(24, 0);
        ((Active*)((Active*)col_instance_1))->alterables->values.sub(0, 10);
        {
            ((Active*)col_instance_1)->set_shader(Render::INVERT);
        }
        ((Active*)((Active*)col_instance_2))->destroy();
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        FrameObject * single_instance_1643_30_0; single_instance_1643_30_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1643_30_0 == NULL)
                single_instance_1643_30_0 = new_obj;
        }
    }
    event_1643_30_end: ;
}
void Frames::col_11_30()
{
    event_func_6953();
}
void Frames::event_func_6954()
{
    // event 1611_30
    {
        if (!(group_main_engine_1)) goto event_1611_30_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(5)) < (2))) goto event_1611_30_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(5, 2);
        ((Active*)((Active*)col_instance_2))->set_visible(false);
        ((Active*)((Active*)col_instance_2))->force_animation(8);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(4, 0);
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 4);
        FrameObject * single_instance_1611_30_0; single_instance_1611_30_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1611_30_0 == NULL)
                single_instance_1611_30_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
    }
    event_1611_30_end: ;
}
void Frames::col_18_30()
{
    event_func_6954();
}
void Frames::event_func_6955()
{
    // event 1610_30
    {
        if (!(group_main_engine_1)) goto event_1610_30_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(5)) < (2))) goto event_1610_30_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(5, 2);
        ((Active*)((Active*)col_instance_2))->set_visible(false);
        ((Active*)((Active*)col_instance_2))->force_animation(8);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(4, 0);
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 4);
        FrameObject * single_instance_1610_30_0; single_instance_1610_30_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1610_30_0 == NULL)
                single_instance_1610_30_0 = new_obj;
        }
    }
    event_1610_30_end: ;
}
void Frames::col_19_30()
{
    event_func_6955();
}
void Frames::event_func_6956()
{
    // event 1608_30
    {
        if (!(group_main_engine_1)) goto event_1608_30_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(4)) > (20))) goto event_1608_30_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(5)) < (2))) goto event_1608_30_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(5, 2);
        ((Active*)((Active*)col_instance_1))->set_visible(false);
        ((Active*)((Active*)col_instance_1))->force_animation(8);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(4, 0);
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 4);
        FrameObject * single_instance_1608_30_0; single_instance_1608_30_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1608_30_0 == NULL)
                single_instance_1608_30_0 = new_obj;
        }
    }
    event_1608_30_end: ;
}
void Frames::col_26_30()
{
    event_func_6956();
}
void Frames::test_collisions_30()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(playersensorleftbig_391_instances, breakablewall_1748_instances, 1, 1, (EventFunction)&Frames::col_3_16);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemylaser_1626_instances, 2, 1, (EventFunction)&Frames::col_5_29);
    test_collisions(gimmickboostblock_1747_instances, breakablewall_1748_instances, 1, 2, (EventFunction)&Frames::col_10_29);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, enemyflare_1787_instances, 536870912, 1, (EventFunction)&Frames::col_7_30);
    test_collisions(qualifier_20, playerprojectile_320_instances, 268435456, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 67108864, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 33554432, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 8, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 8388608, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 4194304, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(playercharactersensor_383_instances, minibossboomerang_1623_instances, 2, 1, (EventFunction)&Frames::col_7_29);
    test_collisions(playersensorrightbig_393_instances, breakablewall_1748_instances, 1, 4, (EventFunction)&Frames::col_6_16);
    test_collisions(shieldflamefront_316_instances, enemyflare_1787_instances, 1, 2, (EventFunction)&Frames::col_18_30);
    test_collisions(player_389_instances, enemyflare_1787_instances, 1, 4, (EventFunction)&Frames::col_19_30);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 1048576, 8, (EventFunction)&Frames::col_8_20);
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
    for (it1 = enemyflare_1787_instances.begin(); it1 != enemyflare_1787_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_26_30();
    }
    for (it1 = gimmickboostblock_1747_instances.begin(); it1 != gimmickboostblock_1747_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_20_29();
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
    for (it1 = enemylaser_1626_instances.begin(); it1 != enemylaser_1626_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_23_29();
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
void Frames::event_func_6957()
{
    // event 1489_30
    {
        if (!(group_main_engine_1)) goto event_1489_30_end;
        media.stop_sample(SOUND_TROLLEY_262);
        media.unlock(28-1);
    }
    event_1489_30_end: ;
}
void Frames::on_frame_31_end()
{
    event_func_6957();
}
void Frames::event_func_6958()
{
    // event 539_30
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_539_30_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_539_30_end;
        FrameObject * single_instance_539_30_0; single_instance_539_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_539_30_0 == NULL)
                    single_instance_539_30_0 = new_obj;
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
                loop_spawndebris_30();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_539_30_end: ;
}
void Frames::event_func_6959()
{
    // event 556_30
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_556_30_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_556_30_end;
        FrameObject * single_instance_556_30_0; single_instance_556_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_556_30_0 == NULL)
                    single_instance_556_30_0 = new_obj;
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
                loop_spawndebris_30();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_556_30_end: ;
}
void Frames::event_func_6960()
{
    // event 690_30
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_690_30_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_690_30_end;
        FrameObject * single_instance_690_30_0; single_instance_690_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_690_30_0 == NULL)
                    single_instance_690_30_0 = new_obj;
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
                loop_spawndebris_30();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_690_30_end: ;
}
void Frames::event_func_6961()
{
    // event 1399_30
    {
        if (!(group_main_engine_1)) goto event_1399_30_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (1))) goto event_1399_30_end;
        if (not_always_1399_30 > loop_count) {
            not_always_1399_30 = loop_count + 2;
            goto event_1399_30_end;
        }
        not_always_1399_30 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(1, 90);
    }
    event_1399_30_end: ;
}
void Frames::event_func_6962()
{
    // event 1400_30
    {
        if (!(group_main_engine_1)) goto event_1400_30_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (2))) goto event_1400_30_end;
        if (not_always_1400_30 > loop_count) {
            not_always_1400_30 = loop_count + 2;
            goto event_1400_30_end;
        }
        not_always_1400_30 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, 1);
    }
    event_1400_30_end: ;
}
void Frames::event_func_6963()
{
    // event 1401_30
    {
        if (!(group_main_engine_1)) goto event_1401_30_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (3))) goto event_1401_30_end;
        if (not_always_1401_30 > loop_count) {
            not_always_1401_30 = loop_count + 2;
            goto event_1401_30_end;
        }
        not_always_1401_30 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(1, 270);
    }
    event_1401_30_end: ;
}
void Frames::event_func_6964()
{
    // event 1402_30
    {
        if (!(group_main_engine_1)) goto event_1402_30_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (4))) goto event_1402_30_end;
        if (not_always_1402_30 > loop_count) {
            not_always_1402_30 = loop_count + 2;
            goto event_1402_30_end;
        }
        not_always_1402_30 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(1, 270);
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(3, 1);
    }
    event_1402_30_end: ;
}
void Frames::event_func_6965()
{
    // event 1403_30
    {
        if (!(group_main_engine_1)) goto event_1403_30_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (6))) goto event_1403_30_end;
        if (not_always_1403_30 > loop_count) {
            not_always_1403_30 = loop_count + 2;
            goto event_1403_30_end;
        }
        not_always_1403_30 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, 1);
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(1, 90);
    }
    event_1403_30_end: ;
}
void Frames::event_func_6966()
{
    // event 1404_30
    {
        if (!(group_main_engine_1)) goto event_1404_30_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (7))) goto event_1404_30_end;
        if (not_always_1404_30 > loop_count) {
            not_always_1404_30 = loop_count + 2;
            goto event_1404_30_end;
        }
        not_always_1404_30 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(1, 180);
    }
    event_1404_30_end: ;
}
void Frames::event_func_6967()
{
    // event 1405_30
    {
        if (!(group_main_engine_1)) goto event_1405_30_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (8))) goto event_1405_30_end;
        if (not_always_1405_30 > loop_count) {
            not_always_1405_30 = loop_count + 2;
            goto event_1405_30_end;
        }
        not_always_1405_30 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(4, 1);
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(1, 90);
    }
    event_1405_30_end: ;
}
void Frames::event_func_6968()
{
    // event 1406_30
    {
        if (!(group_main_engine_1)) goto event_1406_30_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (9))) goto event_1406_30_end;
        if (not_always_1406_30 > loop_count) {
            not_always_1406_30 = loop_count + 2;
            goto event_1406_30_end;
        }
        not_always_1406_30 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(1, 90);
    }
    event_1406_30_end: ;
}
void Frames::event_func_6969()
{
    // event 1407_30
    {
        if (!(group_main_engine_1)) goto event_1407_30_end;
        if (!((((Active*)get_instance(objectjumppad_530_instances))->alterables->values.get(0)) == (10))) goto event_1407_30_end;
        if (not_always_1407_30 > loop_count) {
            not_always_1407_30 = loop_count + 2;
            goto event_1407_30_end;
        }
        not_always_1407_30 = loop_count + 2;
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(1, 90);
        ((Active*)get_instance(objectjumppad_530_instances))->alterables->values.set(3, 1);
    }
    event_1407_30_end: ;
}
void Frames::event_func_6970()
{
    // event 1444_30
    {
        if (!(group_main_engine_1)) goto event_1444_30_end;
        ((Active*)get_instance(gimmickrollingarch_1715_instances))->set_angle(((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.set(0, get_max(0, get_min(((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0), 180)));
        {
            FrameObject * parent = ((Active*)get_instance(gimmickrollingarch_1715_instances));
            if (parent == NULL) goto pos_end_1444_30_0;
            ((Active*)get_instance(gimmickrollingarch2_1726_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1444_30_0: ;
        }
        ((Active*)get_instance(gimmickrollingarch2_1726_instances))->set_angle(((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)*3, 0);
    }
    event_1444_30_end: ;
}
void Frames::event_func_6971()
{
    // event 1445_30
    {
        if (!(group_main_engine_1)) goto event_1445_30_end;
        playersensorrightbig_393_instances.clear_selection();
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, gimmickrollingarch_1715_instances)) goto event_1445_30_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, gimmickrollingarchbase_1725_instances)) goto event_1445_30_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_not_overlap(playersensorleftbig_391_instances, gimmickrollingarch_1715_instances)) goto event_1445_30_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingarch_1715_instances)) goto event_1445_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1445_30_end;
        if (!((((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)) >= (175))) goto event_1445_30_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 90);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 90);
        ((Active*)get_instance(gimmickrollingarchbase_1725_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
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
    }
    event_1445_30_end: ;
}
void Frames::event_func_6972()
{
    // event 1446_30
    {
        if (!(group_main_engine_1)) goto event_1446_30_end;
        playersensorleftbig_391_instances.clear_selection();
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, gimmickrollingarch_1715_instances)) goto event_1446_30_end;
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, gimmickrollingarchbase_1725_instances)) goto event_1446_30_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_not_overlap(playersensorrightbig_393_instances, gimmickrollingarch_1715_instances)) goto event_1446_30_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingarch_1715_instances)) goto event_1446_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1446_30_end;
        if (!((((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)) <= (5))) goto event_1446_30_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 270);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 270);
        ((Active*)get_instance(gimmickrollingarchbase_1725_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
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
    }
    event_1446_30_end: ;
}
void Frames::event_func_6973()
{
    // event 1447_30
    {
        if (!(group_main_engine_1)) goto event_1447_30_end;
        if (!(((Active*)get_instance(gimmickrollingarchbase_1725_instances))->alterables->flags.is_off(0))) goto event_1447_30_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickrollingarchbase_1725_instances)) goto event_1447_30_end;
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(gimmickrollingarchbase_1725_instances, gimmickrollingarch_1715_instances)) goto event_1447_30_end;
        ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.set(0, 180-atan2_deg(((Active*)get_instance(gimmickrollingarch_1715_instances))->get_y()-((Active*)get_instance(playersensorbottombig_397_instances))->get_y(), ((Active*)get_instance(gimmickrollingarch_1715_instances))->get_x()-((Active*)get_instance(playersensorbottombig_397_instances))->get_x()));
        ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.set(1, 0.001);
    }
    event_1447_30_end: ;
}
void Frames::event_func_6974()
{
    // event 1448_30
    {
        if (!(group_main_engine_1)) goto event_1448_30_end;
        if (!(((Active*)get_instance(gimmickrollingarchbase_1725_instances))->alterables->flags.is_off(0))) goto event_1448_30_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickrollingarchbase_1725_instances)) goto event_1448_30_end;
        gimmickrollingarch_1715_instances.clear_selection();
        if (!check_overlap(gimmickrollingarchbase_1725_instances, gimmickrollingarch_1715_instances)) goto event_1448_30_end;
        if (!((((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)) > (190))) goto event_1448_30_end;
        ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.sub(0, 360);
    }
    event_1448_30_end: ;
}
void Frames::event_func_6975()
{
    // event 1449_30
    {
        if (!(group_main_engine_1)) goto event_1449_30_end;
        if (!(((Active*)get_instance(gimmickrollingarchbase_1725_instances))->alterables->flags.is_off(0))) goto event_1449_30_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingarchbase_1725_instances)) goto event_1449_30_end;
        ((Active*)get_instance(gimmickrollingarchbase_1725_instances))->alterables->flags.enable(0);
    }
    event_1449_30_end: ;
}
void Frames::event_func_6976()
{
    // event 1450_30
    {
        if (!(group_main_engine_1)) goto event_1450_30_end;
        if (!(((Active*)get_instance(gimmickrollingarchbase_1725_instances))->alterables->flags.is_on(0))) goto event_1450_30_end;
        gimmickrollingarch_1715_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(gimmickrollingarch_1715_instances, gimmickrollingarchbase_1725_instances)) goto event_1450_30_end;
        if (!((((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)) >= (90))) goto event_1450_30_end;
        if (!((((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)) < (180))) goto event_1450_30_end;
        ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.set(0, ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)+((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(1));
        ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.add(1, 0.2);
    }
    event_1450_30_end: ;
}
void Frames::event_func_6977()
{
    // event 1451_30
    {
        if (!(group_main_engine_1)) goto event_1451_30_end;
        if (!(((Active*)get_instance(gimmickrollingarchbase_1725_instances))->alterables->flags.is_on(0))) goto event_1451_30_end;
        gimmickrollingarch_1715_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        if (!check_overlap(gimmickrollingarch_1715_instances, gimmickrollingarchbase_1725_instances)) goto event_1451_30_end;
        if (!((((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)) < (90))) goto event_1451_30_end;
        if (!((((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)) > (0))) goto event_1451_30_end;
        ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.set(0, ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(0)+((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.get(1));
        ((Active*)get_instance(gimmickrollingarch_1715_instances))->alterables->values.sub(1, 0.2);
    }
    event_1451_30_end: ;
}
void Frames::event_func_6978()
{
    // event 1490_30
    {
        if (!(group_main_engine_1)) goto event_1490_30_end;
        if (!((((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.get(0)) < (frame_left()-430))) goto event_1490_30_end;
        if (!((((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.get(1)) == (0))) goto event_1490_30_end;
        ((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.set(1, 6);
        ((SystemBox*)get_instance(leveltrollycar_1791_instances))->set_visible(true);
    }
    event_1490_30_end: ;
}
void Frames::event_func_6979()
{
    // event 1491_30
    {
        if (!(group_main_engine_1)) goto event_1491_30_end;
        if (!((((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.get(1)) != (0))) goto event_1491_30_end;
        ((SystemBox*)get_instance(leveltrollycar_1791_instances))->set_global_position(((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_x()+((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.get(1), ((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_y());
        ((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.set(0, ((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_x());
        ((Active*)get_instance(leveltrolleyplatform_1818_instances))->set_x(((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_x()+16);
        ((Active*)get_instance(leveltrolleyplatform2_1819_instances))->set_x(((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_x()+80);
        ((Active*)get_instance(leveltrollycarlight_1792_instances))->set_x(((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_x()+407);
        ((Active*)get_instance(leveltrollycarlight2_1793_instances))->set_x(((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_x()+23);
        media.set_channel_volume(28-1, get_min(100, 120-get_max(get_abs(((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_x()-frame_left())*0.2, 0))-get_min(100, get_max(0, (((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_y()-frame_bottom())*0.2)));
    }
    event_1491_30_end: ;
}
void Frames::event_func_6980()
{
    // event 1492_30
    bool or_result_1492_30 = false;
    bool or_temp_result_1492_30_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1492_30_0_end;
        playersensorbottombig_397_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, leveltrolleyplatform_1818_instances)) goto or_event_1492_30_0_end;
        playersensorrightbig_393_instances.clear_selection();
        for (ObjectIterator it(playersensorrightbig_393_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (0))) { it.deselect(); continue; }
        }
        if (!playersensorrightbig_393_instances.has_selection()) goto or_event_1492_30_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1492_30_0_end;
        or_result_1492_30 = true;
        or_temp_result_1492_30_0 = true;
    }
    or_event_1492_30_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    leveltrolleyplatform_1818_instances.clear_saved_selection();
    if (or_temp_result_1492_30_0) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
        leveltrolleyplatform_1818_instances.save_selection();
    }
    // event 1492_30
    bool or_temp_result_1492_30_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1492_30_1_end;
        playersensorbottombig_397_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, leveltrolleyplatform2_1819_instances)) goto or_event_1492_30_1_end;
        playersensorrightbig_393_instances.clear_selection();
        for (ObjectIterator it(playersensorrightbig_393_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (0))) { it.deselect(); continue; }
        }
        if (!playersensorrightbig_393_instances.has_selection()) goto or_event_1492_30_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1492_30_1_end;
        or_result_1492_30 = true;
        or_temp_result_1492_30_1 = true;
        or_event_1492_30_1_end: ;
        leveltrolleyplatform2_1819_instances.clear_saved_selection();
        if (or_temp_result_1492_30_1) {
            playersensorrightbig_393_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            leveltrolleyplatform2_1819_instances.save_selection();
            playersensorbottombig_397_instances.save_selection();
        }
        if (!or_result_1492_30) goto or_final_or_event_1492_30_1_end;
        leveltrolleyplatform_1818_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        leveltrolleyplatform2_1819_instances.empty_selection();
        if (or_temp_result_1492_30_0 || or_temp_result_1492_30_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1492_30_0 || or_temp_result_1492_30_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1492_30_1) {
            leveltrolleyplatform2_1819_instances.restore_selection();
        }
        if (or_temp_result_1492_30_0 || or_temp_result_1492_30_1) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1492_30_0) {
            leveltrolleyplatform_1818_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(23, ((SystemBox*)get_instance(leveltrollycar_1791_instances, it.current_index, default_systembox_instance))->alterables->values.get(1));
        }
        leveltrollycar_1791_instances.clear_selection();
        for (ObjectIterator it(leveltrollycar_1791_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(2, 1);
        }
    }
    or_final_or_event_1492_30_1_end: ;
}
void Frames::event_func_6981()
{
    // event 1493_30
    bool or_result_1493_30 = false;
    bool or_temp_result_1493_30_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1493_30_0_end;
        leveltrollycar_1791_instances.clear_selection();
        for (ObjectIterator it(leveltrollycar_1791_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!leveltrollycar_1791_instances.has_selection()) goto or_event_1493_30_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1493_30_0_end;
        or_result_1493_30 = true;
        or_temp_result_1493_30_0 = true;
    }
    or_event_1493_30_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    leveltrollycar_1791_instances.clear_saved_selection();
    if (or_temp_result_1493_30_0) {
        playermovementvalues_245_instances.save_selection();
        leveltrollycar_1791_instances.save_selection();
    }
    // event 1493_30
    bool or_temp_result_1493_30_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1493_30_1_end;
        leveltrollycar_1791_instances.clear_selection();
        for (ObjectIterator it(leveltrollycar_1791_instances); !it.end(); ++it) {
            if (!((((SystemBox*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!leveltrollycar_1791_instances.has_selection()) goto or_event_1493_30_1_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, leveltrolleyplatform_1818_instances)) goto or_event_1493_30_1_end;
        if (!check_not_overlap(playersensorbottombig_397_instances, leveltrolleyplatform2_1819_instances)) goto or_event_1493_30_1_end;
        or_result_1493_30 = true;
        or_temp_result_1493_30_1 = true;
        or_event_1493_30_1_end: ;
        playersensorbottombig_397_instances.clear_saved_selection();
        if (or_temp_result_1493_30_1) {
            playersensorbottombig_397_instances.save_selection();
            leveltrollycar_1791_instances.save_selection();
        }
        if (!or_result_1493_30) goto or_final_or_event_1493_30_1_end;
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        leveltrollycar_1791_instances.empty_selection();
        if (or_temp_result_1493_30_1) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1493_30_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1493_30_0 || or_temp_result_1493_30_1) {
            leveltrollycar_1791_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((SystemBox*)get_single(leveltrollycar_1791_instances, it.current_index, default_systembox_instance))->alterables->values.get(1));
        }
        for (ObjectIterator it(leveltrollycar_1791_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(2, 0);
        }
    }
    or_final_or_event_1493_30_1_end: ;
}
void Frames::event_func_6982()
{
    // event 1494_30
    {
        if (!(group_main_engine_1)) goto event_1494_30_end;
        if (!((((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.get(1)) != (0))) goto event_1494_30_end;
        if (!((((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.get(0)) > (get_min(frame_right()+1200, ((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.get(3))))) goto event_1494_30_end;
        ((SystemBox*)get_instance(leveltrollycar_1791_instances))->set_global_position(frame_left()-800, ((SystemBox*)get_instance(leveltrollycar_1791_instances))->get_y());
        media.stop_channel(28-1);
    }
    event_1494_30_end: ;
}
void Frames::event_func_6983()
{
    // event 1495_30
    {
        if (!(group_main_engine_1)) goto event_1495_30_end;
        if (!(!media.is_channel_playing(28-1))) goto event_1495_30_end;
        if (!((((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.get(1)) != (0))) goto event_1495_30_end;
        if (!((((SystemBox*)get_instance(leveltrollycar_1791_instances))->alterables->values.get(0)) > (frame_left()-430))) goto event_1495_30_end;
        media.play_id(SOUND_TROLLEY_262, 28-1, 0);
    }
    event_1495_30_end: ;
}
void Frames::event_func_6984()
{
    // event 1496_30
    {
        if (!(group_main_engine_1)) goto event_1496_30_end;
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        for (ObjectIterator it(gimmickverticalhalfpipe2_1825_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1496_30_end: ;
}
void Frames::event_func_6985()
{
    // event 1497_30
    {
        if (!(group_main_engine_1)) goto event_1497_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (38))) goto event_1497_30_end;
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        for (ObjectIterator it(gimmickverticalhalfpipe2_1825_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1497_30_end: ;
}
void Frames::event_func_6986()
{
    // event 1498_30
    {
        if (!(group_main_engine_1)) goto event_1498_30_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1498_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (38))) goto event_1498_30_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1498_30_end: ;
}
void Frames::event_func_6987()
{
    // event 1499_30
    bool or_result_1499_30 = false;
    bool or_temp_result_1499_30_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1499_30_0_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe1_1821_instances)) goto or_event_1499_30_0_end;
        for (ObjectIterator it(playersensorbottombig_397_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(gimmickverticalhalfpipe1_1821_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
        }
        if (!playersensorbottombig_397_instances.has_selection()) goto or_event_1499_30_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1499_30_0_end;
        or_result_1499_30 = true;
        or_temp_result_1499_30_0 = true;
    }
    or_event_1499_30_0_end: ;
    playersensorbottombig_397_instances.clear_saved_selection();
    gimmickverticalhalfpipe1_1821_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1499_30_0) {
        gimmickverticalhalfpipe1_1821_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1499_30
    bool or_temp_result_1499_30_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1499_30_1_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe4_1822_instances)) goto or_event_1499_30_1_end;
        for (ObjectIterator it(playersensorbottombig_397_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_single(gimmickverticalhalfpipe4_1822_instances, default_active_instance))->get_action_x()))) { it.deselect(); continue; }
        }
        if (!playersensorbottombig_397_instances.has_selection()) goto or_event_1499_30_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1499_30_1_end;
        or_result_1499_30 = true;
        or_temp_result_1499_30_1 = true;
    }
    or_event_1499_30_1_end: ;
    gimmickverticalhalfpipe4_1822_instances.clear_saved_selection();
    if (or_temp_result_1499_30_1) {
        playermovementvalues_245_instances.save_selection();
        gimmickverticalhalfpipe4_1822_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
    }
    // event 1499_30
    bool or_temp_result_1499_30_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1499_30_2_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe3_1823_instances)) goto or_event_1499_30_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1499_30_2_end;
        or_result_1499_30 = true;
        or_temp_result_1499_30_2 = true;
    }
    or_event_1499_30_2_end: ;
    gimmickverticalhalfpipe3_1823_instances.clear_saved_selection();
    if (or_temp_result_1499_30_2) {
        playermovementvalues_245_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
        gimmickverticalhalfpipe3_1823_instances.save_selection();
    }
    // event 1499_30
    bool or_temp_result_1499_30_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1499_30_3_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe6_1824_instances)) goto or_event_1499_30_3_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1499_30_3_end;
        or_result_1499_30 = true;
        or_temp_result_1499_30_3 = true;
        or_event_1499_30_3_end: ;
        gimmickverticalhalfpipe6_1824_instances.clear_saved_selection();
        if (or_temp_result_1499_30_3) {
            playermovementvalues_245_instances.save_selection();
            playersensorbottombig_397_instances.save_selection();
            gimmickverticalhalfpipe6_1824_instances.save_selection();
        }
        if (!or_result_1499_30) goto or_final_or_event_1499_30_3_end;
        gimmickverticalhalfpipe3_1823_instances.empty_selection();
        gimmickverticalhalfpipe1_1821_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        gimmickverticalhalfpipe4_1822_instances.empty_selection();
        gimmickverticalhalfpipe6_1824_instances.empty_selection();
        if (or_temp_result_1499_30_0 || or_temp_result_1499_30_1 || or_temp_result_1499_30_2 || or_temp_result_1499_30_3) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1499_30_1) {
            gimmickverticalhalfpipe4_1822_instances.restore_selection();
        }
        if (or_temp_result_1499_30_0 || or_temp_result_1499_30_1 || or_temp_result_1499_30_2 || or_temp_result_1499_30_3) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1499_30_0) {
            gimmickverticalhalfpipe1_1821_instances.restore_selection();
        }
        if (or_temp_result_1499_30_2) {
            gimmickverticalhalfpipe3_1823_instances.restore_selection();
        }
        if (or_temp_result_1499_30_3) {
            gimmickverticalhalfpipe6_1824_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 38);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 45);
        }
    }
    or_final_or_event_1499_30_3_end: ;
}
void Frames::event_func_6988()
{
    // event 1500_30
    bool or_result_1500_30 = false;
    bool or_temp_result_1500_30_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1500_30_0_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe2_1825_instances)) goto or_event_1500_30_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (38))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1500_30_0_end;
        or_result_1500_30 = true;
        or_temp_result_1500_30_0 = true;
    }
    or_event_1500_30_0_end: ;
    gimmickverticalhalfpipe2_1825_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1500_30_0) {
        gimmickverticalhalfpipe2_1825_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
    }
    // event 1500_30
    bool or_temp_result_1500_30_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1500_30_1_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe5_1826_instances)) goto or_event_1500_30_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (38))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1500_30_1_end;
        or_result_1500_30 = true;
        or_temp_result_1500_30_1 = true;
        or_event_1500_30_1_end: ;
        gimmickverticalhalfpipe5_1826_instances.clear_saved_selection();
        if (or_temp_result_1500_30_1) {
            playermovementvalues_245_instances.save_selection();
            playersensorbottombig_397_instances.save_selection();
            gimmickverticalhalfpipe5_1826_instances.save_selection();
        }
        if (!or_result_1500_30) goto or_final_or_event_1500_30_1_end;
        gimmickverticalhalfpipe5_1826_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        gimmickverticalhalfpipe2_1825_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1500_30_0) {
            gimmickverticalhalfpipe2_1825_instances.restore_selection();
        }
        if (or_temp_result_1500_30_0 || or_temp_result_1500_30_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1500_30_0 || or_temp_result_1500_30_1) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1500_30_1) {
            gimmickverticalhalfpipe5_1826_instances.restore_selection();
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 46);
        }
    }
    or_final_or_event_1500_30_1_end: ;
}
void Frames::event_func_6989()
{
    // event 1501_30
    {
        if (!(group_main_engine_1)) goto event_1501_30_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe2_1825_instances)) goto event_1501_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (38))) goto event_1501_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1501_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (-6))) goto event_1501_30_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-0.2, -8));
    }
    event_1501_30_end: ;
}
void Frames::event_func_6990()
{
    // event 1502_30
    {
        if (!(group_main_engine_1)) goto event_1502_30_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe5_1826_instances)) goto event_1502_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (38))) goto event_1502_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1502_30_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (6))) goto event_1502_30_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+0.2, 8));
    }
    event_1502_30_end: ;
}
void Frames::event_func_6991()
{
    // event 1503_30
    bool or_result_1503_30 = false;
    bool or_temp_result_1503_30_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1503_30_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (38))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1503_30_0_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe1_1821_instances)) goto or_event_1503_30_0_end;
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe2_1825_instances)) goto or_event_1503_30_0_end;
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe3_1823_instances)) goto or_event_1503_30_0_end;
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe4_1822_instances)) goto or_event_1503_30_0_end;
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe5_1826_instances)) goto or_event_1503_30_0_end;
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickverticalhalfpipe6_1824_instances)) goto or_event_1503_30_0_end;
        or_result_1503_30 = true;
        or_temp_result_1503_30_0 = true;
    }
    or_event_1503_30_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    if (or_temp_result_1503_30_0) {
        playersensorbottombig_397_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1503_30
    bool or_temp_result_1503_30_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1503_30_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (38))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1503_30_1_end;
        or_result_1503_30 = true;
        or_temp_result_1503_30_1 = true;
        or_event_1503_30_1_end: ;
        if (or_temp_result_1503_30_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1503_30) goto or_final_or_event_1503_30_1_end;
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1503_30_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1503_30_0 || or_temp_result_1503_30_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 40);
        }
    }
    or_final_or_event_1503_30_1_end: ;
}
void Frames::event_func_6992()
{
    // event 1504_30
    {
        if (!(group_main_engine_1)) goto event_1504_30_end;
        gimmickteetertotter_1827_instances.clear_selection();
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.set(0, get_max(-30, get_min(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1), 30)));
        }
    }
    event_1504_30_end: ;
}
void Frames::event_func_6993()
{
    // event 1505_30
    {
        if (!(group_main_engine_1)) goto event_1505_30_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickteetertotter_1827_instances)) goto event_1505_30_end;
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+(((Active*)*it)->get_x()-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23))*0.0008);
        }
    }
    event_1505_30_end: ;
}
void Frames::event_func_6994()
{
    // event 1506_30
    {
        if (!(group_main_engine_1)) goto event_1506_30_end;
        gimmickteetertotter_1827_instances.clear_selection();
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-30))) { it.deselect(); continue; }
        }
        if (!gimmickteetertotter_1827_instances.has_selection()) goto event_1506_30_end;
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1506_30_end: ;
}
void Frames::event_func_6995()
{
    // event 1507_30
    {
        if (!(group_main_engine_1)) goto event_1507_30_end;
        gimmickteetertotter_1827_instances.clear_selection();
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (30))) { it.deselect(); continue; }
        }
        if (!gimmickteetertotter_1827_instances.has_selection()) goto event_1507_30_end;
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1507_30_end: ;
}
void Frames::event_func_6996()
{
    // event 1508_30
    bool or_result_1508_30 = false;
    bool or_temp_result_1508_30_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1508_30_0_end;
        gimmickteetertotter_1827_instances.clear_selection();
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickteetertotter_1827_instances.has_selection()) goto or_event_1508_30_0_end;
        or_result_1508_30 = true;
        or_temp_result_1508_30_0 = true;
    }
    or_event_1508_30_0_end: ;
    gimmickteetertotter_1827_instances.clear_saved_selection();
    if (or_temp_result_1508_30_0) {
        gimmickteetertotter_1827_instances.save_selection();
    }
    // event 1508_30
    bool or_temp_result_1508_30_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1508_30_1_end;
        gimmickteetertotter_1827_instances.clear_selection();
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickteetertotter_1827_instances.has_selection()) goto or_event_1508_30_1_end;
        or_result_1508_30 = true;
        or_temp_result_1508_30_1 = true;
        or_event_1508_30_1_end: ;
        if (or_temp_result_1508_30_1) {
            gimmickteetertotter_1827_instances.save_selection();
        }
        if (!or_result_1508_30) goto or_final_or_event_1508_30_1_end;
        gimmickteetertotter_1827_instances.empty_selection();
        if (or_temp_result_1508_30_0 || or_temp_result_1508_30_1) {
            gimmickteetertotter_1827_instances.restore_selection();
        }
        media.play_id(SOUND_EDITOR_PLACEOBJECT_143, -1, 1);
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    or_final_or_event_1508_30_1_end: ;
}
void Frames::event_func_6997()
{
    // event 1509_30
    {
        if (!(group_main_engine_1)) goto event_1509_30_end;
        gimmickteetertotter_1827_instances.clear_selection();
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (-25))) { it.deselect(); continue; }
        }
        if (!gimmickteetertotter_1827_instances.has_selection()) goto event_1509_30_end;
        for (ObjectIterator it(gimmickteetertotter_1827_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1509_30_end: ;
}
void Frames::event_func_6998()
{
    // event 1544_30
    bool or_result_1544_30 = false;
    bool or_temp_result_1544_30_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1544_30_0_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1544_30_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemycoilhead_1782_instances, qualifier_7)) goto or_event_1544_30_0_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1544_30_0_end;
        or_result_1544_30 = true;
        or_temp_result_1544_30_0 = true;
    }
    or_event_1544_30_0_end: ;
    enemycoilhead_1782_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1544_30_0) {
        enemycoilhead_1782_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1544_30
    bool or_temp_result_1544_30_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1544_30_1_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1544_30_1_end;
        or_result_1544_30 = true;
        or_temp_result_1544_30_1 = true;
        or_event_1544_30_1_end: ;
        if (or_temp_result_1544_30_1) {
            enemycoilhead_1782_instances.save_selection();
        }
        if (!or_result_1544_30) goto or_final_or_event_1544_30_1_end;
        enemycoilhead_1782_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1544_30_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1544_30_0 || or_temp_result_1544_30_1) {
            enemycoilhead_1782_instances.restore_selection();
        }
        FrameObject * single_instance_1544_30_0; single_instance_1544_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycoilhead_1782_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1544_30_0 == NULL)
                    single_instance_1544_30_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1544_30_0))->set_direction(2);
        FrameObject * single_instance_1544_30_1; single_instance_1544_30_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycoilhead_1782_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1544_30_1 == NULL)
                    single_instance_1544_30_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_30();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1544_30_1_end: ;
}
void Frames::event_func_6999()
{
    // event 1594_30
    {
        if (!(group_main_engine_1)) goto event_1594_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+300))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1594_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1594_30_end: ;
}
void Frames::event_func_7000()
{
    // event 1595_30
    {
        if (!(group_main_engine_1)) goto event_1595_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1595_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -200);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1595_30_end: ;
}
void Frames::event_func_7001()
{
    // event 1596_30
    {
        if (!(group_main_engine_1)) goto event_1596_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1596_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4)*0.25);
        }
    }
    event_1596_30_end: ;
}
void Frames::event_func_7002()
{
    // event 1597_30
    {
        if (!(group_main_engine_1)) goto event_1597_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (88))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1597_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1597_30_end: ;
}
void Frames::event_func_7003()
{
    // event 1598_30
    {
        if (!(group_main_engine_1)) goto event_1598_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (64))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()+50))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1598_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1598_30_0; single_instance_1598_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflarecannon_1820_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyflare_1787(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1598_30_0 == NULL)
                    single_instance_1598_30_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1598_30_0))->alterables->values.set(0, ((Active*)get_single(enemyflarecannon_1820_instances, default_active_instance))->get_action_x());
        ((Active*)((Active*)single_instance_1598_30_0))->alterables->values.set(1, ((Active*)get_single(enemyflarecannon_1820_instances, default_active_instance))->get_action_y());
        ((Active*)((Active*)single_instance_1598_30_0))->alterables->values.set(3, -6);
        ((Active*)single_instance_1598_30_0)->move_back(((Active*)get_single(enemyflarecannon_1820_instances)));
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1598_30_end: ;
}
void Frames::event_func_7004()
{
    // event 1599_30
    {
        if (!(group_main_engine_1)) goto event_1599_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (64))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(player_389_instances))->get_y()+50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1599_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1599_30_0; single_instance_1599_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflarecannon_1820_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyflare_1787(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1599_30_0 == NULL)
                    single_instance_1599_30_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1599_30_0))->alterables->values.set(0, ((Active*)get_single(enemyflarecannon_1820_instances, default_active_instance))->get_action_x());
        ((Active*)((Active*)single_instance_1599_30_0))->alterables->values.set(1, ((Active*)get_single(enemyflarecannon_1820_instances, default_active_instance))->get_action_y());
        ((Active*)((Active*)single_instance_1599_30_0))->alterables->values.set(3, -8);
        ((Active*)((Active*)single_instance_1599_30_0))->alterables->values.set(5, 1);
        ((Active*)((Active*)single_instance_1599_30_0))->alterables->values.set(2, -1.5);
        ((Active*)single_instance_1599_30_0)->move_back(((Active*)get_single(enemyflarecannon_1820_instances)));
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1599_30_end: ;
}
void Frames::event_func_7005()
{
    // event 1600_30
    {
        if (!(group_main_engine_1)) goto event_1600_30_end;
        enemyflarecannon_1820_instances.clear_selection();
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (64))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(player_389_instances))->get_y()+50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemyflarecannon_1820_instances.has_selection()) goto event_1600_30_end;
        for (ObjectIterator it(enemyflarecannon_1820_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1600_30_0; single_instance_1600_30_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyflarecannon_1820_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyflare_1787(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1600_30_0 == NULL)
                    single_instance_1600_30_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1600_30_0))->alterables->values.set(0, ((Active*)get_single(enemyflarecannon_1820_instances, default_active_instance))->get_action_x());
        ((Active*)((Active*)single_instance_1600_30_0))->alterables->values.set(1, ((Active*)get_single(enemyflarecannon_1820_instances, default_active_instance))->get_action_y());
        ((Active*)((Active*)single_instance_1600_30_0))->alterables->values.set(3, -8);
        ((Active*)((Active*)single_instance_1600_30_0))->alterables->values.set(5, 1);
        ((Active*)((Active*)single_instance_1600_30_0))->alterables->values.set(2, 1.5);
        ((Active*)single_instance_1600_30_0)->move_back(((Active*)get_single(enemyflarecannon_1820_instances)));
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1600_30_end: ;
}
