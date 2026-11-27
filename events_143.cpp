#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_idle5_48(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_48(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_48(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_48(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_48(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_48(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_48(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_process_call_reset_music_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_48(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_48(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_48(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_48(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_camera_mode2_48(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_camera_mode1_48(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_48(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_48();
}
void Frames::loop_wrapper_process_call_play_music_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_48(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_48(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_48(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_48(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_48(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_uppercut3_48(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_48(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_48(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_48(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_48(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_48(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_48(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_48(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_47();
}
void Frames::loop_wrapper_play_music_6_48(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_47();
}
void Frames::loop_wrapper_sound_go0_48(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_process_call_me_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_48(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_47();
}
void Frames::loop_wrapper_process_call_unqueue_music_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_sound_cyclone0_48(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_process_call_stop_music_48(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::test_collisions_48()
{
    test_collisions(shieldflamefront_316_instances, gimmickfireball_1096_instances, 1, 1, (EventFunction)&Frames::col_19_22);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemylavasquidlaser_2676_instances, 1, 1, (EventFunction)&Frames::col_4_24);
    test_collisions(playerreflect_447_instances, gimmickfireball_1096_instances, 2, 2, (EventFunction)&Frames::col_20_24);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 8, 1, (EventFunction)&Frames::col_5_29);
    test_collisions(qualifier_7, playerreflect_447_instances, 268435456, 16, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 134217728, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 67108864, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(playerreflect_447_instances, enemyhomingbullet_2568_instances, 32, 1, (EventFunction)&Frames::col_8_44);
    test_collisions(playercharactersensor_383_instances, gimmickfireball_1096_instances, 2, 4, (EventFunction)&Frames::col_11_24);
    test_collisions(qualifier_7, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, enemyhomingbullet_2568_instances, 16777216, 2, (EventFunction)&Frames::col_7_44);
    test_collisions(playerreflect_447_instances, enemypushuplaser2_2571_instances, 64, 1, (EventFunction)&Frames::col_16_44);
    test_collisions(playercharactersensor_383_instances, enemypushuplaser_2570_instances, 4, 1, (EventFunction)&Frames::col_12_44);
    test_collisions(qualifier_7, playerprojectile_320_instances, 8388608, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 4194304, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 8, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 2, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(playerreflect_447_instances, enemylavasquidlaser_2676_instances, 128, 2, (EventFunction)&Frames::col_16_45);
    test_collisions(playercharactersensor_383_instances, enemypushuplaser3_2572_instances, 16, 1, (EventFunction)&Frames::col_1_44);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playersensorbottombig_397_instances, hazardfloortrap_2748_instances, 1, 1, (EventFunction)&Frames::col_21_46);
    test_collisions(playercharactersensor_383_instances, enemyhomingbullet_2568_instances, 32, 4, (EventFunction)&Frames::col_12_44);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 64, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(qualifier_7, enemypellet_863_instances, 1048576, 8, (EventFunction)&Frames::col_8_20);
    test_collisions(playerreflect_447_instances, enemypushuplaser_2570_instances, 256, 2, (EventFunction)&Frames::col_9_44);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 1, 1, (EventFunction)&Frames::col_27_43);
    ObjectList::iterator it1, it2;
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
    for (it1 = enemypushupdebris_2569_instances.begin(); it1 != enemypushupdebris_2569_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_24_44();
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
    for (it1 = enemypushuplaser_2570_instances.begin(); it1 != enemypushuplaser_2570_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_26_44();
    }
    for (it1 = gimmickfireball_1096_instances.begin(); it1 != gimmickfireball_1096_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background_save()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_31_47();
    }
}
void Frames::event_func_11504()
{
    // event 543_48
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_543_48_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_543_48_end;
        FrameObject * single_instance_543_48_0; single_instance_543_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_543_48_0 == NULL)
                    single_instance_543_48_0 = new_obj;
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
                loop_spawndebris_48();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_543_48_end: ;
}
void Frames::event_func_11505()
{
    // event 560_48
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_560_48_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_560_48_end;
        FrameObject * single_instance_560_48_0; single_instance_560_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_560_48_0 == NULL)
                    single_instance_560_48_0 = new_obj;
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
                loop_spawndebris_48();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_560_48_end: ;
}
void Frames::event_func_11506()
{
    // event 697_48
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_697_48_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_697_48_end;
        FrameObject * single_instance_697_48_0; single_instance_697_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_697_48_0 == NULL)
                    single_instance_697_48_0 = new_obj;
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
                loop_spawndebris_48();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_697_48_end: ;
}
void Frames::event_func_11507()
{
    // event 1417_48
    {
        if (!(group_main_engine_1)) goto event_1417_48_end;
        gimmickwaterlevelmask1_2852_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask1_2852_instances.has_selection()) goto event_1417_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-2, ((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1417_48_end: ;
}
void Frames::event_func_11508()
{
    // event 1418_48
    {
        if (!(group_main_engine_1)) goto event_1418_48_end;
        gimmickwaterlevelmask1_2852_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask1_2852_instances.has_selection()) goto event_1418_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+2, ((Active*)*it)->alterables->values.get(0)+8));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+2);
        ((Active*)get_instance(playerskinsash_418_instances))->set_y(((Active*)get_instance(playerskinsash_418_instances))->get_y()+2);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_y(((Active*)get_instance(playerskinsashhair_417_instances))->get_y()+2);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
    }
    event_1418_48_end: ;
}
void Frames::event_func_11509()
{
    // event 1419_48
    {
        if (!(group_main_engine_1)) goto event_1419_48_end;
        gimmickwaterlevelmask1_2852_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask1_2852_instances.has_selection()) goto event_1419_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1419_48_end: ;
}
void Frames::event_func_11510()
{
    // event 1420_48
    {
        if (!(group_main_engine_1)) goto event_1420_48_end;
        {
            FrameObject * parent = ((Active*)get_instance(gimmickwaterlevelmask1_2852_instances));
            if (parent == NULL) goto pos_end_1420_48_0;
            ((Active*)get_instance(gimmickwaterlever1_2837_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1420_48_0: ;
        }
    }
    event_1420_48_end: ;
}
void Frames::event_func_11511()
{
    // event 1421_48
    {
        if (!(group_main_engine_1)) goto event_1421_48_end;
        gimmickwaterlevelmask1_2852_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask1_2852_instances.has_selection()) goto event_1421_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1421_48_end: ;
}
void Frames::event_func_11512()
{
    // event 1422_48
    {
        if (!(group_main_engine_1)) goto event_1422_48_end;
        every_1422_48 += manager.dt;
        if (every_1422_48 < 0.24) goto event_1422_48_end;
        every_1422_48 -= 0.24;
        gimmickwaterlevelmask1_2852_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask1_2852_instances.has_selection()) goto event_1422_48_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)) < (3240))) goto event_1422_48_end;
        media.play_id(SOUND_RUMBLEDEEP_110, -1, 1);
    }
    event_1422_48_end: ;
}
void Frames::event_func_11513()
{
    // event 1423_48
    {
        if (!(group_main_engine_1)) goto event_1423_48_end;
        gimmickwaterlevelmask1_2852_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask1_2852_instances.has_selection()) goto event_1423_48_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)) < (3240))) goto event_1423_48_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1423_48_end: ;
}
void Frames::event_func_11514()
{
    // event 1424_48
    {
        if (!(group_main_engine_1)) goto event_1424_48_end;
        gimmickwaterlevelmask1_2852_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask1_2852_instances.has_selection()) goto event_1424_48_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)) >= (3240))) goto event_1424_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask1_2852_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1424_48_end: ;
}
void Frames::event_func_11515()
{
    // event 1425_48
    {
        if (!(group_main_engine_1)) goto event_1425_48_end;
        gimmickwaterlevelmask2_2853_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask2_2853_instances.has_selection()) goto event_1425_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-2, ((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1425_48_end: ;
}
void Frames::event_func_11516()
{
    // event 1426_48
    {
        if (!(group_main_engine_1)) goto event_1426_48_end;
        gimmickwaterlevelmask2_2853_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask2_2853_instances.has_selection()) goto event_1426_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+2, ((Active*)*it)->alterables->values.get(0)+8));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+2);
        ((Active*)get_instance(playerskinsash_418_instances))->set_y(((Active*)get_instance(playerskinsash_418_instances))->get_y()+2);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_y(((Active*)get_instance(playerskinsashhair_417_instances))->get_y()+2);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
    }
    event_1426_48_end: ;
}
void Frames::event_func_11517()
{
    // event 1427_48
    {
        if (!(group_main_engine_1)) goto event_1427_48_end;
        gimmickwaterlevelmask2_2853_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask2_2853_instances.has_selection()) goto event_1427_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1427_48_end: ;
}
void Frames::event_func_11518()
{
    // event 1428_48
    {
        if (!(group_main_engine_1)) goto event_1428_48_end;
        {
            FrameObject * parent = ((Active*)get_instance(gimmickwaterlevelmask2_2853_instances));
            if (parent == NULL) goto pos_end_1428_48_0;
            ((Active*)get_instance(gimmickwaterlever2_2838_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1428_48_0: ;
        }
    }
    event_1428_48_end: ;
}
void Frames::event_func_11519()
{
    // event 1429_48
    {
        if (!(group_main_engine_1)) goto event_1429_48_end;
        gimmickwaterlevelmask2_2853_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask2_2853_instances.has_selection()) goto event_1429_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1429_48_end: ;
}
void Frames::event_func_11520()
{
    // event 1430_48
    {
        if (!(group_main_engine_1)) goto event_1430_48_end;
        gimmickwaterlevelmask2_2853_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask2_2853_instances.has_selection()) goto event_1430_48_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)) > (2920))) goto event_1430_48_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.sub(1, 1);
    }
    event_1430_48_end: ;
}
void Frames::event_func_11521()
{
    // event 1431_48
    {
        if (!(group_main_engine_1)) goto event_1431_48_end;
        every_1431_48 += manager.dt;
        if (every_1431_48 < 0.24) goto event_1431_48_end;
        every_1431_48 -= 0.24;
        gimmickwaterlevelmask2_2853_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask2_2853_instances.has_selection()) goto event_1431_48_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)) > (2920))) goto event_1431_48_end;
        media.play_id(SOUND_RUMBLEDEEP_110, -1, 1);
    }
    event_1431_48_end: ;
}
void Frames::event_func_11522()
{
    // event 1432_48
    {
        if (!(group_main_engine_1)) goto event_1432_48_end;
        gimmickwaterlevelmask2_2853_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!gimmickwaterlevelmask2_2853_instances.has_selection()) goto event_1432_48_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)) <= (2920))) goto event_1432_48_end;
        for (ObjectIterator it(gimmickwaterlevelmask2_2853_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1432_48_end: ;
}
void Frames::event_func_11523()
{
    // event 1451_48
    {
        if (!(group_main_engine_1)) goto event_1451_48_end;
        hazardfireright_2228_instances.clear_selection();
        for (ObjectIterator it(hazardfireright_2228_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!hazardfireright_2228_instances.has_selection()) goto event_1451_48_end;
        player_389_instances.clear_selection();
        if (!check_overlap(hazardfireright_2228_instances, player_389_instances)) goto event_1451_48_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_overlap(hazardfireright_2228_instances, playersensorrightbig_393_instances)) goto event_1451_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1451_48_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1451_48_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1451_48_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1451_48_end: ;
}
void Frames::event_func_11524()
{
    // event 1452_48
    {
        if (!(group_main_engine_1)) goto event_1452_48_end;
        hazardfireleft_2229_instances.clear_selection();
        for (ObjectIterator it(hazardfireleft_2229_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!hazardfireleft_2229_instances.has_selection()) goto event_1452_48_end;
        player_389_instances.clear_selection();
        if (!check_overlap(hazardfireleft_2229_instances, player_389_instances)) goto event_1452_48_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_overlap(hazardfireleft_2229_instances, playersensorleftbig_391_instances)) goto event_1452_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1452_48_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1452_48_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1452_48_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_1452_48_end: ;
}
void Frames::event_func_11525()
{
    // event 1457_48
    {
        if (!(group_main_engine_1)) goto event_1457_48_end;
        gimmckgiantpresser_2836_instances.clear_selection();
        for (ObjectIterator it(gimmckgiantpresser_2836_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2), ((Active*)*it)->alterables->values.get(0)));
        }
        gimmickgiantpressertube_2835_instances.clear_selection();
        for (ObjectIterator it(gimmickgiantpressertube_2835_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2));
        }
        hazardlavafallwarning_2709_instances.clear_selection();
        for (ObjectIterator it(hazardlavafallwarning_2709_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1457_48_end: ;
}
void Frames::event_func_11526()
{
    // event 1458_48
    {
        if (!(group_main_engine_1)) goto event_1458_48_end;
        gimmickgiantpressertube_2835_instances.clear_selection();
        for (ObjectIterator it(gimmickgiantpressertube_2835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+1.5)%math_helper%360);
        }
        gimmckgiantpresser_2836_instances.clear_selection();
        for (ObjectIterator it(gimmckgiantpresser_2836_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+1.5)%math_helper%360);
        }
        gimmckgiantpresserhitbox_2854_instances.clear_selection();
        for (ObjectIterator it(gimmckgiantpresserhitbox_2854_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmckgiantpresser_2836_instances, it.current_index));
            if (parent == NULL) goto pos_end_1458_48_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1458_48_0: ;
        }
        for (ObjectIterator it(gimmckgiantpresserhitbox_2854_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(gimmckgiantpresser_2836_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1458_48_end: ;
}
void Frames::event_func_11527()
{
    // event 1459_48
    {
        if (!(group_main_engine_1)) goto event_1459_48_end;
        gimmickgiantpressertube_2835_instances.clear_selection();
        for (ObjectIterator it(gimmickgiantpressertube_2835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (180))) { it.deselect(); continue; }
        }
        if (!gimmickgiantpressertube_2835_instances.has_selection()) goto event_1459_48_end;
        for (ObjectIterator it(gimmickgiantpressertube_2835_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(2)*0.25);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+1.5)%math_helper%360);
        }
    }
    event_1459_48_end: ;
}
void Frames::event_func_11528()
{
    // event 1460_48
    {
        if (!(group_main_engine_1)) goto event_1460_48_end;
        gimmckgiantpresser_2836_instances.clear_selection();
        for (ObjectIterator it(gimmckgiantpresser_2836_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (180))) { it.deselect(); continue; }
        }
        if (!gimmckgiantpresser_2836_instances.has_selection()) goto event_1460_48_end;
        for (ObjectIterator it(gimmckgiantpresser_2836_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+1.5)%math_helper%360);
        }
        hazardlavafallwarning_2709_instances.clear_selection();
        for (ObjectIterator it(hazardlavafallwarning_2709_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1460_48_end: ;
}
void Frames::event_func_11529()
{
    // event 1461_48
    {
        if (!(group_main_engine_1)) goto event_1461_48_end;
        gimmckgiantpresser_2836_instances.clear_selection();
        for (ObjectIterator it(gimmckgiantpresser_2836_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!gimmckgiantpresser_2836_instances.has_selection()) goto event_1461_48_end;
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(gimmckgiantpresser_2836_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + -80, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 80, parent->y + 0), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        media.stop_sample(SOUND_COMMON_CRUSHER_323);
        media.play_id(SOUND_COMMON_CRUSHER_323, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 7));
    }
    event_1461_48_end: ;
}
void Frames::event_func_11530()
{
    // event 1462_48
    bool or_result_1462_48 = false;
    bool or_temp_result_1462_48_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1462_48_0_end;
        gimmckgiantpresserhitbox_2854_instances.clear_selection();
        for (ObjectIterator it(gimmckgiantpresserhitbox_2854_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (330))) { it.deselect(); continue; }
        }
        if (!gimmckgiantpresserhitbox_2854_instances.has_selection()) goto or_event_1462_48_0_end;
        player_389_instances.clear_selection();
        if (!check_overlap(gimmckgiantpresserhitbox_2854_instances, player_389_instances)) goto or_event_1462_48_0_end;
        or_result_1462_48 = true;
        or_temp_result_1462_48_0 = true;
    }
    or_event_1462_48_0_end: ;
    gimmckgiantpresserhitbox_2854_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    if (or_temp_result_1462_48_0) {
        gimmckgiantpresserhitbox_2854_instances.save_selection();
        player_389_instances.save_selection();
    }
    // event 1462_48
    bool or_temp_result_1462_48_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1462_48_1_end;
        gimmckgiantpresserhitbox_2854_instances.clear_selection();
        for (ObjectIterator it(gimmckgiantpresserhitbox_2854_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (10))) { it.deselect(); continue; }
        }
        if (!gimmckgiantpresserhitbox_2854_instances.has_selection()) goto or_event_1462_48_1_end;
        player_389_instances.clear_selection();
        if (!check_overlap(gimmckgiantpresserhitbox_2854_instances, player_389_instances)) goto or_event_1462_48_1_end;
        or_result_1462_48 = true;
        or_temp_result_1462_48_1 = true;
        or_event_1462_48_1_end: ;
        if (or_temp_result_1462_48_1) {
            gimmckgiantpresserhitbox_2854_instances.save_selection();
            player_389_instances.save_selection();
        }
        if (!or_result_1462_48) goto or_final_or_event_1462_48_1_end;
        player_389_instances.clear_selection();
        gimmckgiantpresserhitbox_2854_instances.clear_selection();
        if (or_temp_result_1462_48_0 || or_temp_result_1462_48_1) {
            gimmckgiantpresserhitbox_2854_instances.restore_selection();
        }
        if (or_temp_result_1462_48_0 || or_temp_result_1462_48_1) {
            player_389_instances.restore_selection();
        }
        ((Counter*)get_instance(guirings_122_instances))->set(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
    }
    or_final_or_event_1462_48_1_end: ;
}
void Frames::event_func_11531()
{
    // event 1463_48
    {
        if (!(group_main_engine_1)) goto event_1463_48_end;
        gimmckgiantpresserhitbox_2854_instances.clear_selection();
        for (ObjectIterator it(gimmckgiantpresserhitbox_2854_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (330))) { it.deselect(); continue; }
        }
        if (!gimmckgiantpresserhitbox_2854_instances.has_selection()) goto event_1463_48_end;
        qualifier_20.clear_selection();
        if (!check_overlap(gimmckgiantpresserhitbox_2854_instances, qualifier_20)) goto event_1463_48_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0), 0));
            ((Active*)*it)->alterables->values.set(24, 12);
        }
    }
    event_1463_48_end: ;
}
void Frames::event_func_11532()
{
    // event 1475_48
    {
        if (!(group_main_engine_1)) goto event_1475_48_end;
        tbwaterlight_2848_instances.clear_selection();
        for (ObjectIterator it(tbwaterlight_2848_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((global_values->get(3)/math_helper/4)+((Active*)*it)->alterables->values.get(0))%math_helper%20);
        }
        underwaterbgturbine_2839_instances.clear_selection();
        for (ObjectIterator it(underwaterbgturbine_2839_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)*it)->alterables->values.get(0))*150);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+3)%math_helper%360);
        }
    }
    event_1475_48_end: ;
}
void Frames::event_func_11533()
{
    // event 1476_48
    {
        if (!(group_main_engine_1)) goto event_1476_48_end;
        underwaterbgturbine_2839_instances.clear_selection();
        for (ObjectIterator it(underwaterbgturbine_2839_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (120))) { it.deselect(); continue; }
        }
        if (!underwaterbgturbine_2839_instances.has_selection()) goto event_1476_48_end;
        for (ObjectIterator it(underwaterbgturbine_2839_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1476_48_end: ;
}
void Frames::event_func_11534()
{
    // event 1478_48
    {
        if (!(group_main_engine_1)) goto event_1478_48_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1478_48_end;
        gimmickwaterturbine_2851_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterturbine_2851_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_right()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()-((Active*)*it)->alterables->values.get(0)-global_values->get(16)*1.5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_bottom()+200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_top()-200))) { it.deselect(); continue; }
        }
        if (!gimmickwaterturbine_2851_instances.has_selection()) goto event_1478_48_end;
        FrameObject * single_instance_1478_48_0; single_instance_1478_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickwaterturbine_2851_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickwaterturbinebubble_2829(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1478_48_0 == NULL)
                    single_instance_1478_48_0 = new_obj;
            }
        }
    }
    event_1478_48_end: ;
}
void Frames::event_func_11535()
{
    // event 1479_48
    {
        if (!(group_main_engine_1)) goto event_1479_48_end;
        gimmickwaterturbinebubble_2829_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickwaterturbinebubble_2829_instances.has_selection()) goto event_1479_48_end;
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-24+randrange(49));
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+randrange(3));
        }
    }
    event_1479_48_end: ;
}
void Frames::event_func_11536()
{
    // event 1480_48
    {
        if (!(group_main_engine_1)) goto event_1480_48_end;
        gimmickwaterturbinebubble_2829_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickwaterturbinebubble_2829_instances.has_selection()) goto event_1480_48_end;
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.sub(0, ((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1480_48_end: ;
}
void Frames::event_func_11537()
{
    // event 1481_48
    {
        if (!(group_main_engine_1)) goto event_1481_48_end;
        gimmickwaterturbinebubble_2829_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!gimmickwaterturbinebubble_2829_instances.has_selection()) goto event_1481_48_end;
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1481_48_end: ;
}
void Frames::event_func_11538()
{
    // event 1482_48
    {
        if (!(group_main_engine_1)) goto event_1482_48_end;
        gimmickwaterturbinebubble_2829_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!gimmickwaterturbinebubble_2829_instances.has_selection()) goto event_1482_48_end;
        for (ObjectIterator it(gimmickwaterturbinebubble_2829_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1482_48_end: ;
}
void Frames::event_func_11539()
{
    // event 1483_48
    {
        if (!(group_main_engine_1)) goto event_1483_48_end;
        sbbackeye2_2242_instances.clear_selection();
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1483_48_end: ;
}
void Frames::event_func_11540()
{
    // event 1484_48
    {
        if (!(group_main_engine_1)) goto event_1484_48_end;
        gimmickwaterturbine_2851_instances.clear_selection();
        for (ObjectIterator it(gimmickwaterturbine_2851_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
        }
        if (!gimmickwaterturbine_2851_instances.has_selection()) goto event_1484_48_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1484_48_end;
        for (ObjectIterator it(gimmickwaterturbine_2851_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)*it)->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+32))) { it.deselect(); continue; }
        }
        if (!gimmickwaterturbine_2851_instances.has_selection()) goto event_1484_48_end;
        sbbackeye2_2242_instances.clear_selection();
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1484_48_end: ;
}
void Frames::event_func_11541()
{
    // event 1485_48
    {
        if (!(group_main_engine_1)) goto event_1485_48_end;
        sbbackeye2_2242_instances.clear_selection();
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!sbbackeye2_2242_instances.has_selection()) goto event_1485_48_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (0))) goto event_1485_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1485_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (47))) goto event_1485_48_end;
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.5, 10));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, ((Active*)get_single(sbbackeye2_2242_instances, default_active_instance))->alterables->values.get(1));
    }
    event_1485_48_end: ;
}
void Frames::event_func_11542()
{
    // event 1486_48
    {
        if (!(group_main_engine_1)) goto event_1486_48_end;
        sbbackeye2_2242_instances.clear_selection();
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!sbbackeye2_2242_instances.has_selection()) goto event_1486_48_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (0))) goto event_1486_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1486_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (47))) goto event_1486_48_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(3, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+0.25, 15)));
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(10/math_helper/((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 0));
        }
    }
    event_1486_48_end: ;
}
void Frames::event_func_11543()
{
    // event 1487_48
    {
        if (!(group_main_engine_1)) goto event_1487_48_end;
        sbbackeye2_2242_instances.clear_selection();
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!sbbackeye2_2242_instances.has_selection()) goto event_1487_48_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (1))) goto event_1487_48_end;
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1487_48_end: ;
}
void Frames::event_func_11544()
{
    // event 1488_48
    {
        if (!(group_main_engine_1)) goto event_1488_48_end;
        sbbackeye2_2242_instances.clear_selection();
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!sbbackeye2_2242_instances.has_selection()) goto event_1488_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (47))) goto event_1488_48_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, ((Active*)get_single(sbbackeye2_2242_instances, default_active_instance))->alterables->values.get(1));
        for (ObjectIterator it(sbbackeye2_2242_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.25, 0));
        }
    }
    event_1488_48_end: ;
}
void Frames::event_func_11545()
{
    // event 1492_48
    {
        if (!(group_main_engine_1)) goto event_1492_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+96))) goto event_1492_48_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1492_48_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
    }
    event_1492_48_end: ;
}
void Frames::event_func_11546()
{
    // event 1493_48
    {
        if (!(group_main_engine_1)) goto event_1493_48_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1493_48_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(9)-3);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_single(levellift_2647_instances, default_active_instance))->get_y()+40);
    }
    event_1493_48_end: ;
}
void Frames::event_func_11547()
{
    // event 1494_48
    {
        if (!(group_main_engine_1)) goto event_1494_48_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1494_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_single(cameratriggerboss_424_instances, default_active_instance))->get_y()))) goto event_1494_48_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
    }
    event_1494_48_end: ;
}
void Frames::event_func_11548()
{
    // event 1495_48
    {
        if (!(group_main_engine_1)) goto event_1495_48_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1495_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_single(cameratriggerboss_424_instances, default_active_instance))->get_y()+80))) goto event_1495_48_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_min(get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+96), ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-96));
    }
    event_1495_48_end: ;
}
void Frames::event_func_11549()
{
    // event 1496_48
    {
        if (!(group_main_engine_1)) goto event_1496_48_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1496_48_end;
        enemytrooperlaser_2508_instances.clear_selection();
        pick_objects_in_zone(enemytrooperlaser_2508_instances, 14950, 0, 15324, 2489);
        enemyelitechargeglow_2507_instances.clear_selection();
        pick_objects_in_zone(enemyelitechargeglow_2507_instances, 14950, 0, 15324, 2489);
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 3);
        }
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-3);
        }
    }
    event_1496_48_end: ;
}
void Frames::event_func_11550()
{
    // event 1497_48
    {
        if (!(group_main_engine_1)) goto event_1497_48_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1497_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_single(cameratriggerboss_424_instances, default_active_instance))->get_y()+80))) goto event_1497_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1497_48_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 3);
    }
    event_1497_48_end: ;
}
void Frames::event_func_11551()
{
    // event 1498_48
    {
        if (!(group_main_engine_1)) goto event_1498_48_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1498_48_end;
        playersensorbottombig_397_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levellift_2647_instances)) goto event_1498_48_end;
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
    event_1498_48_end: ;
}
void Frames::event_func_11552()
{
    // event 1499_48
    {
        if (!(group_main_engine_1)) goto event_1499_48_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1499_48_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(levellift_2647_instances, default_active_instance))->get_y()-100))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1499_48_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1499_48_end: ;
}
void Frames::event_func_11553()
{
    // event 1500_48
    {
        if (!(group_main_engine_1)) goto event_1500_48_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(levellift_2647_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1500_48_end;
        levellift_2647_instances.clear_selection();
        for (ObjectIterator it(levellift_2647_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(cameratriggerboss_424_instances, it.current_index, default_active_instance))->get_y());
        }
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(25, 3);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_6000_122);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1500_48_end: ;
}
void Frames::event_func_11554()
{
    // event 1597_48
    {
        if (!(group_main_engine_1)) goto event_1597_48_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1597_48_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1597_48_0; single_instance_1597_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1597_48_0 == NULL)
                    single_instance_1597_48_0 = new_obj;
            }
        }
        FrameObject * single_instance_1597_48_1; single_instance_1597_48_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1597_48_1 == NULL)
                    single_instance_1597_48_1 = new_obj;
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
                loop_spawndebris_48();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1597_48_end: ;
}
void Frames::event_func_11555()
{
    // event 1629_48
    {
        if (!(group_main_engine_1)) goto event_1629_48_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1629_48_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_19)) goto event_1629_48_end;
        FrameObject * single_instance_1629_48_0; single_instance_1629_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1629_48_0 == NULL)
                    single_instance_1629_48_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1629_48_0))->set_direction(2);
        FrameObject * single_instance_1629_48_1; single_instance_1629_48_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1629_48_1 == NULL)
                    single_instance_1629_48_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1629_48_2; single_instance_1629_48_2 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1629_48_2 == NULL)
                    single_instance_1629_48_2 = new_obj;
            }
        }
        FrameObject * single_instance_1629_48_3; single_instance_1629_48_3 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1629_48_3 == NULL)
                    single_instance_1629_48_3 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1629_48_2))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1629_48_2))->move_back();
        ((Active*)((Active*)single_instance_1629_48_3))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_48();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1629_48_end: ;
}
void Frames::event_func_11556()
{
    // event 1630_48
    bool or_result_1630_48 = false;
    bool or_temp_result_1630_48_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1630_48_0_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1630_48_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_7)) goto or_event_1630_48_0_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1630_48_0_end;
        or_result_1630_48 = true;
        or_temp_result_1630_48_0 = true;
    }
    or_event_1630_48_0_end: ;
    enemyseeker_2648_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1630_48_0) {
        enemyseeker_2648_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1630_48
    bool or_temp_result_1630_48_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1630_48_1_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1630_48_1_end;
        or_result_1630_48 = true;
        or_temp_result_1630_48_1 = true;
        or_event_1630_48_1_end: ;
        if (or_temp_result_1630_48_1) {
            enemyseeker_2648_instances.save_selection();
        }
        if (!or_result_1630_48) goto or_final_or_event_1630_48_1_end;
        enemyseeker_2648_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1630_48_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1630_48_0 || or_temp_result_1630_48_1) {
            enemyseeker_2648_instances.restore_selection();
        }
        FrameObject * single_instance_1630_48_0; single_instance_1630_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1630_48_0 == NULL)
                    single_instance_1630_48_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_48();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1630_48_1_end: ;
}
void Frames::event_func_11557()
{
    // event 1688_48
    bool or_result_1688_48 = false;
    bool or_temp_result_1688_48_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1688_48_0_end;
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1688_48_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemylavasquiddebris_2677_instances, qualifier_7)) goto or_event_1688_48_0_end;
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1688_48_0_end;
        or_result_1688_48 = true;
        or_temp_result_1688_48_0 = true;
    }
    or_event_1688_48_0_end: ;
    enemylavasquiddebris_2677_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1688_48_0) {
        qualifier_7.save_selection();
        enemylavasquiddebris_2677_instances.save_selection();
    }
    // event 1688_48
    bool or_temp_result_1688_48_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1688_48_1_end;
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1688_48_1_end;
        or_result_1688_48 = true;
        or_temp_result_1688_48_1 = true;
        or_event_1688_48_1_end: ;
        if (or_temp_result_1688_48_1) {
            enemylavasquiddebris_2677_instances.save_selection();
        }
        if (!or_result_1688_48) goto or_final_or_event_1688_48_1_end;
        enemylavasquiddebris_2677_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1688_48_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1688_48_0 || or_temp_result_1688_48_1) {
            enemylavasquiddebris_2677_instances.restore_selection();
        }
        FrameObject * single_instance_1688_48_0; single_instance_1688_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylavasquiddebris_2677_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1688_48_0 == NULL)
                    single_instance_1688_48_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_48();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1688_48_1_end: ;
}
void Frames::event_func_11558()
{
    // event 1722_48
    bool or_result_1722_48 = false;
    bool or_temp_result_1722_48_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1722_48_0_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1722_48_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysaucerdebris_2761_instances, qualifier_7)) goto or_event_1722_48_0_end;
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1722_48_0_end;
        or_result_1722_48 = true;
        or_temp_result_1722_48_0 = true;
    }
    or_event_1722_48_0_end: ;
    enemysaucerdebris_2761_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1722_48_0) {
        enemysaucerdebris_2761_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1722_48
    bool or_temp_result_1722_48_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1722_48_1_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1722_48_1_end;
        or_result_1722_48 = true;
        or_temp_result_1722_48_1 = true;
        or_event_1722_48_1_end: ;
        if (or_temp_result_1722_48_1) {
            enemysaucerdebris_2761_instances.save_selection();
        }
        if (!or_result_1722_48) goto or_final_or_event_1722_48_1_end;
        enemysaucerdebris_2761_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1722_48_0 || or_temp_result_1722_48_1) {
            enemysaucerdebris_2761_instances.restore_selection();
        }
        if (or_temp_result_1722_48_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1722_48_0; single_instance_1722_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerdebris_2761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1722_48_0 == NULL)
                    single_instance_1722_48_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_48();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1722_48_1_end: ;
}
void Frames::event_func_11559()
{
    // event 1753_48
    bool or_result_1753_48 = false;
    bool or_temp_result_1753_48_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1753_48_0_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1753_48_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_7)) goto or_event_1753_48_0_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1753_48_0_end;
        or_result_1753_48 = true;
        or_temp_result_1753_48_0 = true;
    }
    or_event_1753_48_0_end: ;
    enemytankbot_2821_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1753_48_0) {
        enemytankbot_2821_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1753_48
    bool or_temp_result_1753_48_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1753_48_1_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1753_48_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_8)) goto or_event_1753_48_1_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1753_48_1_end;
        or_result_1753_48 = true;
        or_temp_result_1753_48_1 = true;
    }
    or_event_1753_48_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1753_48_1) {
        enemytankbot_2821_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1753_48
    bool or_temp_result_1753_48_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1753_48_2_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1753_48_2_end;
        or_result_1753_48 = true;
        or_temp_result_1753_48_2 = true;
        or_event_1753_48_2_end: ;
        if (or_temp_result_1753_48_2) {
            enemytankbot_2821_instances.save_selection();
        }
        if (!or_result_1753_48) goto or_final_or_event_1753_48_2_end;
        enemytankbot_2821_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1753_48_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1753_48_0 || or_temp_result_1753_48_1 || or_temp_result_1753_48_2) {
            enemytankbot_2821_instances.restore_selection();
        }
        if (or_temp_result_1753_48_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1753_48_0; single_instance_1753_48_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1753_48_0 == NULL)
                    single_instance_1753_48_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1753_48_0))->set_direction(2);
        FrameObject * single_instance_1753_48_1; single_instance_1753_48_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1753_48_1 == NULL)
                    single_instance_1753_48_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_48();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1753_48_2_end: ;
}
void Frames::event_func_11560()
{
    // event 1829_48
    {
        if (!(group_main_engine_1)) goto event_1829_48_end;
        if (!((global_values->get(4)) < (2))) goto event_1829_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1700))) goto event_1829_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (2200))) goto event_1829_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (3260))) goto event_1829_48_end;
        global_values->set(4, 2);
        global_values->set(5, 1855);
        global_values->set(6, 3096);
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
    event_1829_48_end: ;
}
void Frames::event_func_11561()
{
    // event 1831_48
    {
        if (!(group_main_engine_1)) goto event_1831_48_end;
        if (!((global_values->get(4)) < (3))) goto event_1831_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6540))) goto event_1831_48_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (6740))) goto event_1831_48_end;
        global_values->set(4, 3);
        global_values->set(5, 6880);
        global_values->set(6, 2774);
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
    event_1831_48_end: ;
}
