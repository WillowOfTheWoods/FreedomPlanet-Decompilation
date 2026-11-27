#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_process_call_fadeout_music_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_60(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_60(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_60(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_60(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_60(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_60(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_60(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_60(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_60(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_60(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_59();
}
void Frames::loop_wrapper_sound_attack1_60(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_60(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_60(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_60(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_60(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_60(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_60(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_60(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_60(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_60(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_60(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_60(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_60(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_59();
}
void Frames::loop_wrapper_play_music_6_60(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_go0_60(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_60(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_explode3_60(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_60(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_60(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_60(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_13053()
{
    // event 1659_60
    {
        if (!(group_main_engine_1)) goto event_1659_60_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1659_60_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1659_60_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(2);
        ((Active*)((Active*)col_instance_2))->get_movement()->bounce(false);
        media.play_id(SOUND_MILLA_REFLECT_219, -1, 1);
    }
    event_1659_60_end: ;
}
void Frames::col_2_60()
{
    event_func_6951();
    event_func_13053();
}
void Frames::col_9_60()
{
    event_func_6953();
    event_func_6953();
}
void Frames::col_18_60()
{
    event_func_4338();
    event_func_4338();
}
void Frames::col_26_60()
{
    event_func_4339();
    event_func_4339();
}
void Frames::col_29_60()
{
    event_func_4341();
    event_func_4341();
}
void Frames::test_collisions_60()
{
    test_collisions(shieldflamefront_316_instances, gimmickfireball_1096_instances, 1, 1, (EventFunction)&Frames::col_19_22);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_2_60);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyspark_1101_instances, 1, 1, (EventFunction)&Frames::col_4_24);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(enemylimiter_350_instances, enemymeteorroller_2421_instances, 1, 1, (EventFunction)&Frames::col_16_39);
    test_collisions(qualifier_7, playerreflect_447_instances, 536870912, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 134217728, 2, (EventFunction)&Frames::col_9_60);
    test_collisions(qualifier_20, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(bossmissile_2023_instances, bosschopper_2216_instances, 1, 1, (EventFunction)&Frames::col_10_36);
    test_collisions(playercharactersensor_383_instances, gimmickfireball_1096_instances, 2, 2, (EventFunction)&Frames::col_11_24);
    test_collisions(qualifier_7, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, bossmissile_2023_instances, 8, 2, (EventFunction)&Frames::col_13_36);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(player_389_instances, bossmissile_2023_instances, 1, 4, (EventFunction)&Frames::col_15_36);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 4, 4, (EventFunction)&Frames::col_18_60);
    test_collisions(qualifier_7, minibosstreddbomb_1015_instances, 4194304, 1, (EventFunction)&Frames::col_17_22);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playerreflect_447_instances, gimmickfireball_1096_instances, 16, 4, (EventFunction)&Frames::col_20_24);
    test_collisions(playerreflect_447_instances, enemyrock_657_instances, 32, 1, (EventFunction)&Frames::col_14_24);
    test_collisions(qualifier_7, enemyrock_657_instances, 1048576, 2, (EventFunction)&Frames::col_5_16);
    test_collisions(playercharactersensor_383_instances, enemyrock_657_instances, 8, 4, (EventFunction)&Frames::col_4_16);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 524288, 8, (EventFunction)&Frames::col_26_60);
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
    for (it1 = enemypellet_863_instances.begin(); it1 != enemypellet_863_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_29_60();
    }
    for (it1 = minibosstreddbomb_1015_instances.begin(); it1 != minibosstreddbomb_1015_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_28_22();
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
}
void Frames::event_func_13054()
{
    // event 2_60
    {
        if (!(group_main_engine_1)) goto event_2_60_end;
        gimmickbgbarmask_3266_instances.clear_selection();
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickbgbarmask_3266_instances.has_selection()) goto event_2_60_end;
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2), 0-((Active*)*it)->alterables->values.get(4)));
        }
    }
    event_2_60_end: ;
}
void Frames::event_func_13055()
{
    // event 3_60
    {
        if (!(group_main_engine_1)) goto event_3_60_end;
        gimmickbgbarmask_3266_instances.clear_selection();
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbgbarmask_3266_instances.has_selection()) goto event_3_60_end;
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2), ((Active*)*it)->alterables->values.get(4)));
        }
    }
    event_3_60_end: ;
}
void Frames::event_func_13056()
{
    // event 4_60
    {
        if (!(group_main_engine_1)) goto event_4_60_end;
        gimmickbgbarmask_3266_instances.clear_selection();
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0-((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!gimmickbgbarmask_3266_instances.has_selection()) goto event_4_60_end;
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_4_60_end: ;
}
void Frames::event_func_13057()
{
    // event 5_60
    {
        if (!(group_main_engine_1)) goto event_5_60_end;
        gimmickbgbarmask_3266_instances.clear_selection();
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!gimmickbgbarmask_3266_instances.has_selection()) goto event_5_60_end;
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_5_60_end: ;
}
void Frames::event_func_13058()
{
    // event 6_60
    {
        if (!(group_main_engine_1)) goto event_6_60_end;
        gimmickbgbarmask_3266_instances.clear_selection();
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (40))) { it.deselect(); continue; }
        }
        if (!gimmickbgbarmask_3266_instances.has_selection()) goto event_6_60_end;
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
    }
    event_6_60_end: ;
}
void Frames::event_func_13059()
{
    // event 7_60
    {
        if (!(group_main_engine_1)) goto event_7_60_end;
        gimmickbgbarmask_3266_instances.clear_selection();
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1));
        }
        gimmickbgbar_3265_instances.clear_selection();
        for (ObjectIterator it(gimmickbgbar_3265_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickbgbarmask_3266_instances, it.current_index));
            if (parent == NULL) goto pos_end_7_60_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_7_60_0: ;
        }
    }
    event_7_60_end: ;
}
void Frames::event_func_13060()
{
    // event 8_60
    {
        if (!(group_main_engine_1)) goto event_8_60_end;
        gimmickbgbarmask_3266_instances.clear_selection();
        for (ObjectIterator it(gimmickbgbarmask_3266_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickbgbarmask_3266_instances.has_selection()) goto event_8_60_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_8_60_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickbgbarmask_3266_instances, default_active_instance))->get_y());
    }
    event_8_60_end: ;
}
void Frames::event_func_13061()
{
    // event 542_60
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_542_60_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_542_60_end;
        FrameObject * single_instance_542_60_0; single_instance_542_60_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_542_60_0 == NULL)
                    single_instance_542_60_0 = new_obj;
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
                loop_spawndebris_60();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_542_60_end: ;
}
void Frames::event_func_13062()
{
    // event 559_60
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_559_60_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_559_60_end;
        FrameObject * single_instance_559_60_0; single_instance_559_60_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_559_60_0 == NULL)
                    single_instance_559_60_0 = new_obj;
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
                loop_spawndebris_60();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_559_60_end: ;
}
void Frames::event_func_13063()
{
    // event 693_60
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_693_60_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_693_60_end;
        FrameObject * single_instance_693_60_0; single_instance_693_60_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_693_60_0 == NULL)
                    single_instance_693_60_0 = new_obj;
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
                loop_spawndebris_60();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_693_60_end: ;
}
void Frames::event_func_13064()
{
    // event 1422_60
    {
        if (!(group_main_engine_1)) goto event_1422_60_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1422_60_end;
        if (once_condition_1422_60) goto event_1422_60_end;
        once_condition_1422_60 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 45);
        }
    }
    event_1422_60_end: ;
}
void Frames::event_func_13065()
{
    // event 1423_60
    {
        if (!(group_main_engine_1)) goto event_1423_60_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1423_60_end;
        if (once_condition_1423_60) goto event_1423_60_end;
        once_condition_1423_60 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 45);
        }
    }
    event_1423_60_end: ;
}
void Frames::event_func_13066()
{
    // event 1424_60
    {
        if (!(group_main_engine_1)) goto event_1424_60_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1424_60_end;
        if (once_condition_1424_60) goto event_1424_60_end;
        once_condition_1424_60 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 45);
        }
    }
    event_1424_60_end: ;
}
void Frames::event_func_13067()
{
    // event 1425_60
    {
        if (!(group_main_engine_1)) goto event_1425_60_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (75))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1425_60_end;
        if (once_condition_1425_60) goto event_1425_60_end;
        once_condition_1425_60 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 15);
        }
    }
    event_1425_60_end: ;
}
void Frames::event_func_13068()
{
    // event 1426_60
    {
        if (!(group_main_engine_1)) goto event_1426_60_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (76))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1426_60_end;
        if (once_condition_1426_60) goto event_1426_60_end;
        once_condition_1426_60 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 30);
        }
    }
    event_1426_60_end: ;
}
void Frames::event_func_13069()
{
    // event 1427_60
    {
        if (!(group_main_engine_1)) goto event_1427_60_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (77))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (80))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1427_60_end;
        if (once_condition_1427_60) goto event_1427_60_end;
        once_condition_1427_60 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 45);
        }
    }
    event_1427_60_end: ;
}
void Frames::event_func_13070()
{
    // event 1428_60
    {
        if (!(group_main_engine_1)) goto event_1428_60_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (81))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1428_60_end;
        if (once_condition_1428_60) goto event_1428_60_end;
        once_condition_1428_60 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 30);
        }
    }
    event_1428_60_end: ;
}
void Frames::event_func_13071()
{
    // event 1429_60
    {
        if (!(group_main_engine_1)) goto event_1429_60_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (82))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1429_60_end;
        if (once_condition_1429_60) goto event_1429_60_end;
        once_condition_1429_60 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 15);
        }
    }
    event_1429_60_end: ;
}
void Frames::event_func_13072()
{
    // event 1466_60
    {
        if (!(group_main_engine_1)) goto event_1466_60_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1466_60_end;
        if (not_always_1466_60 > loop_count) {
            not_always_1466_60 = loop_count + 2;
            goto event_1466_60_end;
        }
        not_always_1466_60 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1466_60_end: ;
}
void Frames::event_func_13073()
{
    // event 1469_60
    {
        if (!(group_main_engine_1)) goto event_1469_60_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1469_60_end;
        if (not_always_1469_60 > loop_count) {
            not_always_1469_60 = loop_count + 2;
            goto event_1469_60_end;
        }
        not_always_1469_60 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1469_60_end: ;
}
void Frames::event_func_13074()
{
    // event 1472_60
    {
        if (!(group_main_engine_1)) goto event_1472_60_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1472_60_end;
        if (not_always_1472_60 > loop_count) {
            not_always_1472_60 = loop_count + 2;
            goto event_1472_60_end;
        }
        not_always_1472_60 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1472_60_end: ;
}
void Frames::event_func_13075()
{
    // event 1473_60
    {
        if (!(group_main_engine_1)) goto event_1473_60_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1473_60_end;
        if (not_always_1473_60 > loop_count) {
            not_always_1473_60 = loop_count + 2;
            goto event_1473_60_end;
        }
        not_always_1473_60 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1473_60_end: ;
}
void Frames::event_func_13076()
{
    // event 1475_60
    {
        if (!(group_main_engine_1)) goto event_1475_60_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1475_60_end;
        if (not_always_1475_60 > loop_count) {
            not_always_1475_60 = loop_count + 2;
            goto event_1475_60_end;
        }
        not_always_1475_60 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1475_60_end: ;
}
void Frames::event_func_13077()
{
    // event 1570_60
    bool or_result_1570_60 = false;
    bool or_temp_result_1570_60_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1570_60_0_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1570_60_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysuperturretus_1828_instances, qualifier_7)) goto or_event_1570_60_0_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1570_60_0_end;
        or_result_1570_60 = true;
        or_temp_result_1570_60_0 = true;
    }
    or_event_1570_60_0_end: ;
    enemysuperturretus_1828_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1570_60_0) {
        enemysuperturretus_1828_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1570_60
    bool or_temp_result_1570_60_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1570_60_1_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1570_60_1_end;
        or_result_1570_60 = true;
        or_temp_result_1570_60_1 = true;
        or_event_1570_60_1_end: ;
        if (or_temp_result_1570_60_1) {
            enemysuperturretus_1828_instances.save_selection();
        }
        if (!or_result_1570_60) goto or_final_or_event_1570_60_1_end;
        enemysuperturretus_1828_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1570_60_0 || or_temp_result_1570_60_1) {
            enemysuperturretus_1828_instances.restore_selection();
        }
        if (or_temp_result_1570_60_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1570_60_0; single_instance_1570_60_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1570_60_0 == NULL)
                    single_instance_1570_60_0 = new_obj;
            }
        }
        FrameObject * single_instance_1570_60_1; single_instance_1570_60_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1570_60_1 == NULL)
                    single_instance_1570_60_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)((Active*)single_instance_1570_60_0))->set_direction(4);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_60();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1570_60_1_end: ;
}
void Frames::event_func_13078()
{
    // event 1595_60
    bool or_result_1595_60 = false;
    bool or_temp_result_1595_60_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1595_60_0_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1595_60_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, qualifier_7)) goto or_event_1595_60_0_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1595_60_0_end;
        or_result_1595_60 = true;
        or_temp_result_1595_60_0 = true;
    }
    or_event_1595_60_0_end: ;
    enemymeteorroller_2421_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1595_60_0) {
        enemymeteorroller_2421_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1595_60
    bool or_temp_result_1595_60_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1595_60_1_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1595_60_1_end;
        or_result_1595_60 = true;
        or_temp_result_1595_60_1 = true;
        or_event_1595_60_1_end: ;
        if (or_temp_result_1595_60_1) {
            enemymeteorroller_2421_instances.save_selection();
        }
        if (!or_result_1595_60) goto or_final_or_event_1595_60_1_end;
        qualifier_7.empty_selection();
        enemymeteorroller_2421_instances.empty_selection();
        if (or_temp_result_1595_60_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1595_60_0 || or_temp_result_1595_60_1) {
            enemymeteorroller_2421_instances.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1595_60_0; single_instance_1595_60_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1595_60_0 == NULL)
                    single_instance_1595_60_0 = new_obj;
            }
        }
        FrameObject * single_instance_1595_60_1; single_instance_1595_60_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1595_60_1 == NULL)
                    single_instance_1595_60_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_60();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1595_60_1_end: ;
}
void Frames::event_func_13079()
{
    // event 1633_60
    bool or_result_1633_60 = false;
    bool or_temp_result_1633_60_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1633_60_0_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1633_60_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysaucerdebris_2761_instances, qualifier_7)) goto or_event_1633_60_0_end;
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1633_60_0_end;
        or_result_1633_60 = true;
        or_temp_result_1633_60_0 = true;
    }
    or_event_1633_60_0_end: ;
    enemysaucerdebris_2761_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1633_60_0) {
        enemysaucerdebris_2761_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1633_60
    bool or_temp_result_1633_60_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1633_60_1_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1633_60_1_end;
        or_result_1633_60 = true;
        or_temp_result_1633_60_1 = true;
        or_event_1633_60_1_end: ;
        if (or_temp_result_1633_60_1) {
            enemysaucerdebris_2761_instances.save_selection();
        }
        if (!or_result_1633_60) goto or_final_or_event_1633_60_1_end;
        enemysaucerdebris_2761_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1633_60_0 || or_temp_result_1633_60_1) {
            enemysaucerdebris_2761_instances.restore_selection();
        }
        if (or_temp_result_1633_60_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1633_60_0; single_instance_1633_60_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerdebris_2761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1633_60_0 == NULL)
                    single_instance_1633_60_0 = new_obj;
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
                loop_spawndebris_60();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1633_60_1_end: ;
}
void Frames::event_func_13080()
{
    // event 1653_60
    bool or_result_1653_60 = false;
    bool or_temp_result_1653_60_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1653_60_0_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1653_60_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemypelletizer_2304_instances, qualifier_7)) goto or_event_1653_60_0_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1653_60_0_end;
        or_result_1653_60 = true;
        or_temp_result_1653_60_0 = true;
    }
    or_event_1653_60_0_end: ;
    qualifier_7.clear_saved_selection();
    enemypelletizer_2304_instances.clear_saved_selection();
    if (or_temp_result_1653_60_0) {
        qualifier_7.save_selection();
        enemypelletizer_2304_instances.save_selection();
    }
    // event 1653_60
    bool or_temp_result_1653_60_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1653_60_1_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1653_60_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemypelletizer_2304_instances, qualifier_8)) goto or_event_1653_60_1_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1653_60_1_end;
        or_result_1653_60 = true;
        or_temp_result_1653_60_1 = true;
    }
    or_event_1653_60_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1653_60_1) {
        qualifier_8.save_selection();
        enemypelletizer_2304_instances.save_selection();
    }
    // event 1653_60
    bool or_temp_result_1653_60_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1653_60_2_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1653_60_2_end;
        or_result_1653_60 = true;
        or_temp_result_1653_60_2 = true;
        or_event_1653_60_2_end: ;
        if (or_temp_result_1653_60_2) {
            enemypelletizer_2304_instances.save_selection();
        }
        if (!or_result_1653_60) goto or_final_or_event_1653_60_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemypelletizer_2304_instances.empty_selection();
        if (or_temp_result_1653_60_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1653_60_0 || or_temp_result_1653_60_1 || or_temp_result_1653_60_2) {
            enemypelletizer_2304_instances.restore_selection();
        }
        if (or_temp_result_1653_60_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1653_60_0; single_instance_1653_60_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1653_60_0 == NULL)
                    single_instance_1653_60_0 = new_obj;
            }
        }
        FrameObject * single_instance_1653_60_1; single_instance_1653_60_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1653_60_1 == NULL)
                    single_instance_1653_60_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_60();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1653_60_2_end: ;
}
void Frames::event_func_13081()
{
    // event 1686_60
    {
        if (!(group_main_engine_1)) goto event_1686_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (0))) goto event_1686_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1686_60_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_1686_60_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_visible(true);
    }
    event_1686_60_end: ;
}
void Frames::event_func_13082()
{
    // event 1687_60
    {
        if (!(group_main_engine_1)) goto event_1687_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (1))) goto event_1687_60_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_x(((Active*)get_instance(brevonmechbackground_2513_instances))->get_x()+3);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_y(((Active*)get_instance(brevonmechbackground_2513_instances))->get_y()-2);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(1, 1);
    }
    event_1687_60_end: ;
}
void Frames::event_func_13083()
{
    // event 1688_60
    {
        if (!(group_main_engine_1)) goto event_1688_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (1))) goto event_1688_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)) > (100))) goto event_1688_60_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.set(1, 0);
        FrameObject * single_instance_1688_60_0; single_instance_1688_60_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackground_2513_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectplasmaburst_3047(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1688_60_0 == NULL)
                    single_instance_1688_60_0 = new_obj;
            }
        }
        media.stop_sample(SOUND_ABSOLUTION_LIFTOFF_297);
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 10);
    }
    event_1688_60_end: ;
}
void Frames::event_func_13084()
{
    // event 1689_60
    {
        if (!(group_main_engine_1)) goto event_1689_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (2))) goto event_1689_60_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_x(((Active*)get_instance(brevonmechbackground_2513_instances))->get_x()+20);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(1, 1);
    }
    event_1689_60_end: ;
}
void Frames::event_func_13085()
{
    // event 1690_60
    {
        if (!(group_main_engine_1)) goto event_1690_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (2))) goto event_1690_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)) > (60))) goto event_1690_60_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_visible(false);
    }
    event_1690_60_end: ;
}
void Frames::event_func_13086()
{
    // event 1691_60
    {
        if (!(group_main_engine_1)) goto event_1691_60_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (12000))) goto event_1691_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) < (10))) goto event_1691_60_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_visible(false);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.set(0, 10);
        media.play_id(SOUND_ABSOLUTION_CHARGE_344, -1, 1);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.set(1, 0);
    }
    event_1691_60_end: ;
}
void Frames::event_func_13087()
{
    // event 1692_60
    {
        if (!(group_main_engine_1)) goto event_1692_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (10))) goto event_1692_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)) < (140))) goto event_1692_60_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(1, 1);
    }
    event_1692_60_end: ;
}
void Frames::event_func_13088()
{
    // event 1693_60
    {
        if (!(group_main_engine_1)) goto event_1693_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (10))) goto event_1693_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)) > (30))) goto event_1693_60_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)%math_helper%20) == (0))) goto event_1693_60_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(1, 1);
        brevonmechlaser_3254_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_brevonmechlaser_3254(0, 0), 3);
            brevonmechlaser_3254_instances.add_back();
        }
        effectbrevonmechwarning_3255_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectbrevonmechwarning_3255(0, 0), 4);
            effectbrevonmechwarning_3255_instances.add_back();
        }
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()-150);
            ((Active*)*it)->set_x(12000+((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)*10);
            ((Active*)*it)->alterables->values.set(4, 210);
        }
        media.play_id(SOUND_ABSOLUTION_LASER_410, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1693_60_end: ;
}
void Frames::event_func_13089()
{
    // event 1694_60
    {
        if (!(group_main_engine_1)) goto event_1694_60_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)get_instance(brevonmechlaser_3254_instances, it.current_index, default_active_instance))->get_x(), frame_left()+global_values->get(16)-20));
            ((Active*)*it)->set_y(get_max(((Active*)get_instance(brevonmechlaser_3254_instances, it.current_index, default_active_instance))->get_y(), frame_top()+20));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(brevonmechlaser_3254_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(brevonmechlaser_3254_instances, it.current_index, default_active_instance))->get_x());
        }
    }
    event_1694_60_end: ;
}
void Frames::event_func_13090()
{
    // event 1695_60
    {
        if (!(group_main_engine_1)) goto event_1695_60_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_top()))) { it.deselect(); continue; }
        }
        if (!effectbrevonmechwarning_3255_instances.has_selection()) goto event_1695_60_end;
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1695_60_end: ;
}
void Frames::event_func_13091()
{
    // event 1696_60
    {
        if (!(group_main_engine_1)) goto event_1696_60_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (frame_left()+global_values->get(16)))) { it.deselect(); continue; }
        }
        if (!effectbrevonmechwarning_3255_instances.has_selection()) goto event_1696_60_end;
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1696_60_end: ;
}
void Frames::event_func_13092()
{
    // event 1697_60
    {
        if (!(group_main_engine_1)) goto event_1697_60_end;
        if (!((effectbrevonmechwarning_3255_instances.size()) > (brevonmechlaser_3254_instances.size()))) goto event_1697_60_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        FrameObject * single_instance_1697_60_0; single_instance_1697_60_0 = pick_random(effectbrevonmechwarning_3255_instances);
        if (single_instance_1697_60_0 == NULL) goto event_1697_60_end;
        ((Active*)((Active*)single_instance_1697_60_0))->destroy();
    }
    event_1697_60_end: ;
}
void Frames::event_func_13093()
{
    // event 1698_60
    {
        if (!(group_main_engine_1)) goto event_1698_60_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1698_60_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
        }
    }
    event_1698_60_end: ;
}
void Frames::event_func_13094()
{
    // event 1699_60
    {
        if (!(group_main_engine_1)) goto event_1699_60_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1699_60_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(2, cos_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(3, sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(1)*-1);
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(0)*0.01);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(4), 0);
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+3, 100));
        }
    }
    event_1699_60_end: ;
}
void Frames::event_func_13095()
{
    // event 1700_60
    {
        if (!(group_main_engine_1)) goto event_1700_60_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1336))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1700_60_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_1700_60_end: ;
}
void Frames::event_func_13096()
{
    // event 1701_60
    {
        if (!(group_main_engine_1)) goto event_1701_60_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1336))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1701_60_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 2);
        }
    }
    event_1701_60_end: ;
}
void Frames::event_func_13097()
{
    // event 1702_60
    {
        if (!(group_main_engine_1)) goto event_1702_60_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-200))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1702_60_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1702_60_end: ;
}
void Frames::event_func_13098()
{
    // event 1703_60
    {
        if (!(group_main_engine_1)) goto event_1703_60_end;
        brevonmechlaser_3254_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonmechlaser_3254_instances, playercharactersensor_383_instances)) goto event_1703_60_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1703_60_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1703_60_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1703_60_end: ;
}
void Frames::event_func_13099()
{
    // event 1704_60
    {
        if (!(group_main_engine_1)) goto event_1704_60_end;
        brevonmechlaser_3254_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonmechlaser_3254_instances, playercharactersensor_383_instances)) goto event_1704_60_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1704_60_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) > (0))) goto event_1704_60_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 7));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*0.7);
    }
    event_1704_60_end: ;
}
void Frames::event_func_13100()
{
    // event 1705_60
    {
        if (!(group_main_engine_1)) goto event_1705_60_end;
        brevonmechlaser_3254_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(brevonmechlaser_3254_instances, qualifier_20)) goto event_1705_60_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1705_60_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1705_60_end: ;
}
void Frames::event_func_13101()
{
    // event 1706_60
    {
        if (!(group_main_engine_1)) goto event_1706_60_end;
        if (!((global_values->get(4)) < (2))) goto event_1706_60_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6040))) goto event_1706_60_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (6200))) goto event_1706_60_end;
        global_values->set(4, 2);
        global_values->set(5, 6150);
        global_values->set(6, 96);
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
    event_1706_60_end: ;
}
void Frames::event_func_13102()
{
    // event 1772_60
    {
        if (!(group_main_engine_1)) goto event_1772_60_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (2200))) goto event_1772_60_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1772_60_end;
        if (!((global_values->get(4)) < (2))) goto event_1772_60_end;
        if (once_condition_1772_60) goto event_1772_60_end;
        once_condition_1772_60 = true;
        if (!group_main_engine_level_specific_methods_bosses_miniboss_chopper_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_chopper_1 = true;
        }
    }
    event_1772_60_end: ;
}
void Frames::event_func_13103()
{
    // event 1773_60
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1773_60_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1773_60_end;
        if (once_condition_1773_60) goto event_1773_60_end;
        once_condition_1773_60 = true;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, frame_left()-200);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(6, 6);
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->flags.enable(8);
        }
    }
    event_1773_60_end: ;
}
void Frames::event_func_13104()
{
    // event 1801_60
    bool or_result_1801_60 = false;
    bool or_temp_result_1801_60_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1801_60_0_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1801_60_0_end;
        or_result_1801_60 = true;
        or_temp_result_1801_60_0 = true;
    }
    or_event_1801_60_0_end: ;
    bosschopper_2216_instances.clear_saved_selection();
    if (or_temp_result_1801_60_0) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1801_60
    bool or_temp_result_1801_60_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1801_60_1_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1801_60_1_end;
        if (!(test_obstacle(((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_x(), ((Active*)get_single(bosschopper_2216_instances, default_active_instance))->get_box_index(3)+32))) goto or_event_1801_60_1_end;
        or_result_1801_60 = true;
        or_temp_result_1801_60_1 = true;
        or_event_1801_60_1_end: ;
        if (or_temp_result_1801_60_1) {
            bosschopper_2216_instances.save_selection();
        }
        if (!or_result_1801_60) goto or_final_or_event_1801_60_1_end;
        bosschopper_2216_instances.clear_selection();
        if (or_temp_result_1801_60_0 || or_temp_result_1801_60_1) {
            bosschopper_2216_instances.restore_selection();
        }
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 3);
        }
    }
    or_final_or_event_1801_60_1_end: ;
}
void Frames::event_func_13105()
{
    // event 1802_60
    bool or_result_1802_60 = false;
    bool or_temp_result_1802_60_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1802_60_0_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (20))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1802_60_0_end;
        or_result_1802_60 = true;
        or_temp_result_1802_60_0 = true;
    }
    or_event_1802_60_0_end: ;
    bosschopper_2216_instances.clear_saved_selection();
    if (or_temp_result_1802_60_0) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1802_60
    bool or_temp_result_1802_60_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1802_60_1_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (40))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1802_60_1_end;
        or_result_1802_60 = true;
        or_temp_result_1802_60_1 = true;
    }
    or_event_1802_60_1_end: ;
    if (or_temp_result_1802_60_1) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1802_60
    bool or_temp_result_1802_60_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1802_60_2_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (60))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1802_60_2_end;
        or_result_1802_60 = true;
        or_temp_result_1802_60_2 = true;
    }
    or_event_1802_60_2_end: ;
    if (or_temp_result_1802_60_2) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1802_60
    bool or_temp_result_1802_60_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1802_60_3_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (80))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1802_60_3_end;
        or_result_1802_60 = true;
        or_temp_result_1802_60_3 = true;
    }
    or_event_1802_60_3_end: ;
    if (or_temp_result_1802_60_3) {
        bosschopper_2216_instances.save_selection();
    }
    // event 1802_60
    bool or_temp_result_1802_60_4 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto or_event_1802_60_4_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (100))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto or_event_1802_60_4_end;
        or_result_1802_60 = true;
        or_temp_result_1802_60_4 = true;
        or_event_1802_60_4_end: ;
        if (or_temp_result_1802_60_4) {
            bosschopper_2216_instances.save_selection();
        }
        if (!or_result_1802_60) goto or_final_or_event_1802_60_4_end;
        bosschopper_2216_instances.empty_selection();
        if (or_temp_result_1802_60_0 || or_temp_result_1802_60_1 || or_temp_result_1802_60_2 || or_temp_result_1802_60_3 || or_temp_result_1802_60_4) {
            bosschopper_2216_instances.restore_selection();
        }
        FrameObject * single_instance_1802_60_0; single_instance_1802_60_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosschopper_2216_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstreddbomb_1015(parent->x + 0, parent->y + 24), parent->layer);
                if (single_instance_1802_60_0 == NULL)
                    single_instance_1802_60_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1802_60_0))->move_back();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    or_final_or_event_1802_60_4_end: ;
}
void Frames::event_func_13106()
{
    // event 1807_60
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1807_60_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1807_60_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(7, 1);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1807_60_end: ;
}
void Frames::event_func_13107()
{
    // event 1817_60
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1817_60_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (15))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1817_60_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(-7, get_min(((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(12)*0.3, 12)));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, -7));
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1817_60_end: ;
}
void Frames::event_func_13108()
{
    // event 1818_60
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_chopper_1)) goto event_1818_60_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (50))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1818_60_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_1818_60_end: ;
}
