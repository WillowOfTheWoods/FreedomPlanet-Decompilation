#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_process_call_lock_music_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_sound_go0_32(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_resume_music_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_weapon_32(void * frame)
{
    ((Frames*)frame)->loop_weapon_13();
}
void Frames::loop_wrapper_player01wallcollision_32(void * frame)
{
    ((Frames*)frame)->loop_player01wallcollision_13();
}
void Frames::loop_wrapper_sound_explode3_32(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_player01detectcharactersensor_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectcharactersensor_13();
}
void Frames::loop_wrapper_p2_32(void * frame)
{
    ((Frames*)frame)->loop_p2_32();
}
void Frames::loop_wrapper_sound_cyclone0_32(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_player01detectsensorright_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorright_13();
}
void Frames::loop_wrapper_p4_32(void * frame)
{
    ((Frames*)frame)->loop_p4_32();
}
void Frames::loop_wrapper_player01detectsensortop_32(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensortop_13();
}
void Frames::loop_wrapper_sound_explode1_32(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_32(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::test_collisions_32()
{
    test_collisions(qualifier_20, enemypellet_863_instances, 2147483648, 1, (EventFunction)&Frames::col_11_30);
    test_collisions(qualifier_7, effectsdebris_319_instances, 1073741824, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 2, (EventFunction)&Frames::col_7_20);
    test_collisions(qualifier_20, objectcrystal_279_instances, 268435456, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_1_30);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 33554432, 8, (EventFunction)&Frames::col_8_20);
    test_collisions(qualifier_8, playerreflect_447_instances, 16777216, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(shieldflamefront_316_instances, enemyflare_1787_instances, 1, 1, (EventFunction)&Frames::col_18_30);
    test_collisions(player_389_instances, enemyflare_1787_instances, 1, 2, (EventFunction)&Frames::col_19_30);
    test_collisions(qualifier_8, enemyflare_1787_instances, 8388608, 4, (EventFunction)&Frames::col_7_30);
    test_collisions(qualifier_20, playerprojectile_320_instances, 4194304, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 2097152, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 1048576, 4, (EventFunction)&Frames::col_1_13);
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
}
void Frames::event_func_7530()
{
    // event 2_32
    {
        if (!(group_main_engine_1)) goto event_2_32_end;
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickairballoon_1972_instances.has_selection()) goto event_2_32_end;
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
    }
    event_2_32_end: ;
}
void Frames::event_func_7531()
{
    // event 3_32
    {
        if (!(group_main_engine_1)) goto event_3_32_end;
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickairballoon_1972_instances.has_selection()) goto event_3_32_end;
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)*it)->alterables->values.get(3))*8);
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+1.5)%math_helper%360);
        }
    }
    event_3_32_end: ;
}
void Frames::event_func_7532()
{
    // event 4_32
    {
        if (!(group_main_engine_1)) goto event_4_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_4_32_end;
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_instance(player_389_instances))->get_y()-20);
    }
    event_4_32_end: ;
}
void Frames::event_func_7533()
{
    // event 5_32
    {
        if (!(group_main_engine_1)) goto event_5_32_end;
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickairballoon_1972_instances.has_selection()) goto event_5_32_end;
        player_389_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickairballoon_1972_instances)) goto event_5_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_5_32_end;
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(0, -1);
        }
    }
    event_5_32_end: ;
}
void Frames::event_func_7534()
{
    // event 6_32
    {
        if (!(group_main_engine_1)) goto event_6_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_6_32_end;
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_instance(player_389_instances))->get_y()+20);
    }
    event_6_32_end: ;
}
void Frames::event_func_7535()
{
    // event 7_32
    {
        if (!(group_main_engine_1)) goto event_7_32_end;
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickairballoon_1972_instances.has_selection()) goto event_7_32_end;
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-0.05, -4));
        }
    }
    event_7_32_end: ;
}
void Frames::event_func_7536()
{
    // event 8_32
    {
        if (!(group_main_engine_1)) goto event_8_32_end;
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0), -150));
        }
        gimmickhangingidleballoon_1973_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleballoon_1973_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickairballoon_1972_instances, it.current_index));
            if (parent == NULL) goto pos_end_8_32_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_8_32_0: ;
        }
    }
    event_8_32_end: ;
}
void Frames::event_func_7537()
{
    // event 9_32
    {
        if (!(group_main_engine_1)) goto event_9_32_end;
        gimmickhangingidleballoon_1973_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleballoon_1973_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleballoon_1973_instances.has_selection()) goto event_9_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_9_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        for (ObjectIterator it(gimmickhangingidleballoon_1973_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_9_32_end: ;
}
void Frames::event_func_7538()
{
    // event 10_32
    {
        if (!(group_main_engine_1)) goto event_10_32_end;
        gimmickhangingidleballoon_1973_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleballoon_1973_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (50))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleballoon_1973_instances.has_selection()) goto event_10_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_10_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        for (ObjectIterator it(gimmickhangingidleballoon_1973_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_10_32_end: ;
}
void Frames::event_func_7539()
{
    // event 11_32
    bool or_result_11_32 = false;
    bool or_temp_result_11_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_11_32_0_end;
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (frame_bottom()+100))) { it.deselect(); continue; }
        }
        if (!gimmickairballoon_1972_instances.has_selection()) goto or_event_11_32_0_end;
        or_result_11_32 = true;
        or_temp_result_11_32_0 = true;
    }
    or_event_11_32_0_end: ;
    gimmickairballoon_1972_instances.clear_saved_selection();
    if (or_temp_result_11_32_0) {
        gimmickairballoon_1972_instances.save_selection();
    }
    // event 11_32
    bool or_temp_result_11_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_11_32_1_end;
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()-100))) { it.deselect(); continue; }
        }
        if (!gimmickairballoon_1972_instances.has_selection()) goto or_event_11_32_1_end;
        or_result_11_32 = true;
        or_temp_result_11_32_1 = true;
    }
    or_event_11_32_1_end: ;
    if (or_temp_result_11_32_1) {
        gimmickairballoon_1972_instances.save_selection();
    }
    // event 11_32
    bool or_temp_result_11_32_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_11_32_2_end;
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_right()+100))) { it.deselect(); continue; }
        }
        if (!gimmickairballoon_1972_instances.has_selection()) goto or_event_11_32_2_end;
        or_result_11_32 = true;
        or_temp_result_11_32_2 = true;
        or_event_11_32_2_end: ;
        if (or_temp_result_11_32_2) {
            gimmickairballoon_1972_instances.save_selection();
        }
        if (!or_result_11_32) goto or_final_or_event_11_32_2_end;
        gimmickairballoon_1972_instances.clear_selection();
        if (or_temp_result_11_32_0 || or_temp_result_11_32_1 || or_temp_result_11_32_2) {
            gimmickairballoon_1972_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    or_final_or_event_11_32_2_end: ;
}
void Frames::event_func_7540()
{
    // event 203_32
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_203_32_end;
        {
            loop_player01_interruption_control_running = true;
            int times = int(1);
            loop_player01_interruption_control_index = 0;
            while (loop_player01_interruption_control_index < times) {
                loop_player01_interruption_control_32();
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
    event_203_32_end: ;
}
void Frames::event_func_7541()
{
    // event 550_32
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_550_32_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_550_32_end;
        FrameObject * single_instance_550_32_0; single_instance_550_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_550_32_0 == NULL)
                    single_instance_550_32_0 = new_obj;
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
                loop_spawndebris_32();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_550_32_end: ;
}
void Frames::event_func_7542()
{
    // event 567_32
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_567_32_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_567_32_end;
        FrameObject * single_instance_567_32_0; single_instance_567_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_567_32_0 == NULL)
                    single_instance_567_32_0 = new_obj;
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
                loop_spawndebris_32();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_567_32_end: ;
}
void Frames::event_func_7543()
{
    // event 701_32
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_701_32_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_701_32_end;
        FrameObject * single_instance_701_32_0; single_instance_701_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_701_32_0 == NULL)
                    single_instance_701_32_0 = new_obj;
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
                loop_spawndebris_32();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_701_32_end: ;
}
void Frames::event_func_7544()
{
    // event 1417_32
    {
        if (!(group_main_engine_1)) goto event_1417_32_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1417_32_end;
        if (not_always_1417_32 > loop_count) {
            not_always_1417_32 = loop_count + 2;
            goto event_1417_32_end;
        }
        not_always_1417_32 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1417_32_end: ;
}
void Frames::event_func_7545()
{
    // event 1437_32
    {
        if (!(group_main_engine_1)) goto event_1437_32_end;
        playersensortopbig_395_instances.clear_selection();
        gimmickclothesline_1970_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, gimmickclothesline_1970_instances)) goto event_1437_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1437_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1437_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1437_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1437_32_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1437_32_end;
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        for (ObjectIterator it(gimmickclothesline_1970_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1437_32_end: ;
}
void Frames::event_func_7546()
{
    // event 1438_32
    bool or_result_1438_32 = false;
    bool or_temp_result_1438_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1438_32_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (41))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1438_32_0_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline_1970_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline_1970_instances)) goto or_event_1438_32_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1438_32_0_end;
        or_result_1438_32 = true;
        or_temp_result_1438_32_0 = true;
    }
    or_event_1438_32_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    gimmickclothesline_1970_instances.clear_saved_selection();
    if (or_temp_result_1438_32_0) {
        playerinput_19_instances.save_selection();
        gimmickclothesline_1970_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1438_32
    bool or_temp_result_1438_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1438_32_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (41))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1438_32_1_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline_1970_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline_1970_instances)) goto or_event_1438_32_1_end;
        playersensorrightbig_393_instances.clear_selection();
        gimmickhanginglongsensor2_1741_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, gimmickhanginglongsensor2_1741_instances)) goto or_event_1438_32_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1438_32_1_end;
        or_result_1438_32 = true;
        or_temp_result_1438_32_1 = true;
    }
    or_event_1438_32_1_end: ;
    gimmickhanginglongsensor2_1741_instances.clear_saved_selection();
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1438_32_1) {
        gimmickhanginglongsensor2_1741_instances.save_selection();
        gimmickclothesline_1970_instances.save_selection();
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerinput_19_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1438_32
    bool or_temp_result_1438_32_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1438_32_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (41))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1438_32_2_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline_1970_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline_1970_instances)) goto or_event_1438_32_2_end;
        playersensorleftbig_391_instances.clear_selection();
        gimmickhanginglongsensor2_1741_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, gimmickhanginglongsensor2_1741_instances)) goto or_event_1438_32_2_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1438_32_2_end;
        or_result_1438_32 = true;
        or_temp_result_1438_32_2 = true;
        or_event_1438_32_2_end: ;
        playersensorleftbig_391_instances.clear_saved_selection();
        if (or_temp_result_1438_32_2) {
            gimmickhanginglongsensor2_1741_instances.save_selection();
            gimmickclothesline_1970_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerinput_19_instances.save_selection();
            playerskinsash_418_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_1438_32) goto or_final_or_event_1438_32_2_end;
        playersensorrightbig_393_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        gimmickhanginglongsensor2_1741_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        gimmickclothesline_1970_instances.empty_selection();
        if (or_temp_result_1438_32_1 || or_temp_result_1438_32_2) {
            gimmickhanginglongsensor2_1741_instances.restore_selection();
        }
        if (or_temp_result_1438_32_0 || or_temp_result_1438_32_1 || or_temp_result_1438_32_2) {
            gimmickclothesline_1970_instances.restore_selection();
        }
        if (or_temp_result_1438_32_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1438_32_0 || or_temp_result_1438_32_1 || or_temp_result_1438_32_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1438_32_0 || or_temp_result_1438_32_1 || or_temp_result_1438_32_2) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1438_32_0 || or_temp_result_1438_32_1 || or_temp_result_1438_32_2) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1438_32_2) {
            playersensorleftbig_391_instances.restore_selection();
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 41);
        }
    }
    or_final_or_event_1438_32_2_end: ;
}
void Frames::event_func_7547()
{
    // event 1439_32
    {
        if (!(group_main_engine_1)) goto event_1439_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1439_32_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline_1970_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline_1970_instances)) goto event_1439_32_end;
        playersensorrightbig_393_instances.clear_selection();
        if (!check_not_overlap(playersensorrightbig_393_instances, gimmickhanginglongsensor2_1741_instances)) goto event_1439_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1439_32_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1439_32_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 42);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
    }
    event_1439_32_end: ;
}
void Frames::event_func_7548()
{
    // event 1440_32
    {
        if (!(group_main_engine_1)) goto event_1440_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1440_32_end;
        playerskinsash_418_instances.clear_selection();
        gimmickclothesline_1970_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickclothesline_1970_instances)) goto event_1440_32_end;
        playersensorleftbig_391_instances.clear_selection();
        if (!check_not_overlap(playersensorleftbig_391_instances, gimmickhanginglongsensor2_1741_instances)) goto event_1440_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1440_32_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_1440_32_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 42);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -3);
    }
    event_1440_32_end: ;
}
void Frames::event_func_7549()
{
    // event 1441_32
    {
        if (!(group_main_engine_1)) goto event_1441_32_end;
        gimmickclothesline_1970_instances.clear_selection();
        for (ObjectIterator it(gimmickclothesline_1970_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!gimmickclothesline_1970_instances.has_selection()) goto event_1441_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1441_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1441_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1441_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickclothesline_1970_instances, default_active_instance))->get_y()+32);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
        for (ObjectIterator it(gimmickclothesline_1970_instances); !it.end(); ++it) {
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
    }
    event_1441_32_end: ;
}
void Frames::event_func_7550()
{
    // event 1442_32
    {
        if (!(group_main_engine_1)) goto event_1442_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1442_32_end;
        gimmickclothesline_1970_instances.clear_selection();
        for (ObjectIterator it(gimmickclothesline_1970_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1442_32_end: ;
}
void Frames::event_func_7551()
{
    // event 1444_32
    {
        if (!(group_main_engine_1)) goto event_1444_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1444_32_end;
        if (not_always_1444_32 > loop_count) {
            not_always_1444_32 = loop_count + 2;
            goto event_1444_32_end;
        }
        not_always_1444_32 = loop_count + 2;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1444_32_end: ;
}
void Frames::event_func_7552()
{
    // event 1445_32
    {
        if (!(group_main_engine_1)) goto event_1445_32_end;
        playerskinsash_418_instances.clear_selection();
        gimmickhangingmovingbar_1963_instances.clear_selection();
        if (!check_overlap(playerskinsash_418_instances, gimmickhangingmovingbar_1963_instances)) goto event_1445_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1445_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1445_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_1445_32_end: ;
}
void Frames::event_func_7553()
{
    // event 1446_32
    {
        if (!(group_main_engine_1)) goto event_1446_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1446_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.2, 15));
            ((Active*)*it)->alterables->values.set(3, 0-((Active*)*it)->alterables->values.get(1)*2);
        }
        gimmickhangingmovingwheel_1964_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingwheel_1964_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)get_single(gimmickhangingmovingbar_1963_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2, 0);
        }
    }
    event_1446_32_end: ;
}
void Frames::event_func_7554()
{
    // event 1447_32
    {
        if (!(group_main_engine_1)) goto event_1447_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1447_32_end;
        gimmickhangingmovingstopper_1961_instances.clear_selection();
        if (!check_overlap(gimmickhangingmovingbar_1963_instances, gimmickhangingmovingstopper_1961_instances)) goto event_1447_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)get_single(gimmickhangingmovingstopper_1961_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1447_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(gimmickhangingmovingstopper_1961_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_x(((Active*)get_single(gimmickhangingmovingstopper_1961_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->alterables->values.set(4, 12);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
    }
    event_1447_32_end: ;
}
void Frames::event_func_7555()
{
    // event 1448_32
    {
        if (!(group_main_engine_1)) goto event_1448_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1448_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(4));
        }
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(7);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(40);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(7);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(7);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(7);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(7);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(7);
        }
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        FrameObject * single_instance_1448_32_0; single_instance_1448_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickhangingmovingbar_1963_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1448_32_0 == NULL)
                    single_instance_1448_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1448_32_0))->force_speed(50);
    }
    event_1448_32_end: ;
}
void Frames::event_func_7556()
{
    // event 1449_32
    {
        if (!(group_main_engine_1)) goto event_1449_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1449_32_end;
        if (!((((Active*)get_single(gimmickhangingmovingbar_1963_instances, default_active_instance))->alterables->values.get(3)%math_helper%360) >= (0))) goto event_1449_32_end;
        if (!((((Active*)get_single(gimmickhangingmovingbar_1963_instances, default_active_instance))->alterables->values.get(3)%math_helper%360) < (30))) goto event_1449_32_end;
        if (not_always_1449_32 > loop_count) {
            not_always_1449_32 = loop_count + 2;
            goto event_1449_32_end;
        }
        not_always_1449_32 = loop_count + 2;
        media.play_id(SOUND_COMMON_SPINWOOSH_216, -1, 1);
    }
    event_1449_32_end: ;
}
void Frames::event_func_7557()
{
    // event 1450_32
    {
        if (!(group_main_engine_1)) goto event_1450_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1450_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) >= (8))) goto event_1450_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) <= (10))) goto event_1450_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1450_32_end: ;
}
void Frames::event_func_7558()
{
    // event 1451_32
    {
        if (!(group_main_engine_1)) goto event_1451_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1451_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1451_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1451_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, cos_deg(((Active*)get_single(gimmickhangingmovingbar_1963_instances, default_active_instance))->alterables->values.get(3))*((Active*)get_single(gimmickhangingmovingbar_1963_instances, default_active_instance))->alterables->values.get(4)*1.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0-sin_deg(((Active*)get_single(gimmickhangingmovingbar_1963_instances, default_active_instance))->alterables->values.get(3))*((Active*)get_single(gimmickhangingmovingbar_1963_instances, default_active_instance))->alterables->values.get(4)*1.5);
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(6, 30);
        }
    }
    event_1451_32_end: ;
}
void Frames::event_func_7559()
{
    // event 1452_32
    {
        if (!(group_main_engine_1)) goto event_1452_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1452_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.add(25, 12);
    }
    event_1452_32_end: ;
}
void Frames::event_func_7560()
{
    // event 1453_32
    {
        if (!(group_main_engine_1)) goto event_1453_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1453_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1453_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)%math_helper%360);
        }
    }
    event_1453_32_end: ;
}
void Frames::event_func_7561()
{
    // event 1454_32
    {
        if (!(group_main_engine_1)) goto event_1454_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1454_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1454_32_end: ;
}
void Frames::event_func_7562()
{
    // event 1455_32
    {
        if (!(group_main_engine_1)) goto event_1455_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (360))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1455_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1455_32_end: ;
}
void Frames::event_func_7563()
{
    // event 1456_32
    {
        if (!(group_main_engine_1)) goto event_1456_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1456_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(get_max(((Active*)*it)->alterables->values.get(0), ((Active*)*it)->alterables->values.get(5)));
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.2, -12));
            ((Active*)*it)->alterables->values.set(3, 0-((Active*)*it)->alterables->values.get(1)*2);
        }
        gimmickhangingmovingwheel_1964_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingwheel_1964_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)get_single(gimmickhangingmovingbar_1963_instances, it.current_index, default_active_instance))->alterables->values.get(1)*2, 0);
        }
    }
    event_1456_32_end: ;
}
void Frames::event_func_7564()
{
    // event 1457_32
    {
        if (!(group_main_engine_1)) goto event_1457_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingbar_1963_instances.has_selection()) goto event_1457_32_end;
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1457_32_end: ;
}
void Frames::event_func_7565()
{
    // event 1458_32
    {
        if (!(group_main_engine_1)) goto event_1458_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
        }
        gimmickhangingmovingwheel_1964_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingwheel_1964_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickhangingmovingbar_1963_instances, it.current_index));
            if (parent == NULL) goto pos_end_1458_32_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1458_32_0: ;
        }
        gimmickhangingmovingsensor_1962_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingsensor_1962_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickhangingmovingbar_1963_instances, it.current_index));
            if (parent == NULL) goto pos_end_1458_32_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1458_32_1: ;
        }
        for (ObjectIterator it(gimmickhangingmovingsensor_1962_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(gimmickhangingmovingbar_1963_instances, it.current_index, default_active_instance))->get_angle(), 0);
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(gimmickhangingmovingbar_1963_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
    }
    event_1458_32_end: ;
}
void Frames::event_func_7566()
{
    // event 1459_32
    {
        if (!(group_main_engine_1)) goto event_1459_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1459_32_end;
        gimmickhangingmovingsensor_1962_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingsensor_1962_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (2))) { it.deselect(); continue; }
        }
        if (!gimmickhangingmovingsensor_1962_instances.has_selection()) goto event_1459_32_end;
        for (ObjectIterator it(gimmickhangingmovingsensor_1962_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-100, 0);
            pos_end_1459_32_0: ;
        }
    }
    event_1459_32_end: ;
}
void Frames::event_func_7567()
{
    // event 1460_32
    {
        if (!(group_main_engine_1)) goto event_1460_32_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1460_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+cos_deg(((Active*)get_single(qualifier_23, default_active_instance))->get_angle())*32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(qualifier_23, default_active_instance))->get_x()+sin_deg(((Active*)get_single(qualifier_23, default_active_instance))->get_angle())*32);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, ((Active*)get_single(qualifier_23, default_active_instance))->get_angle());
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
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
    event_1460_32_end: ;
}
void Frames::event_func_7568()
{
    // event 1461_32
    {
        if (!(group_main_engine_1)) goto event_1461_32_end;
        escalatorfront1_1949_instances.clear_selection();
        for (ObjectIterator it(escalatorfront1_1949_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%8);
        }
        escalatorfront2_1950_instances.clear_selection();
        for (ObjectIterator it(escalatorfront2_1950_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%8);
        }
        escalatorleft_1951_instances.clear_selection();
        for (ObjectIterator it(escalatorleft_1951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        escalatorright_1966_instances.clear_selection();
        for (ObjectIterator it(escalatorright_1966_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1461_32_end: ;
}
void Frames::event_func_7569()
{
    // event 1462_32
    {
        if (!(group_main_engine_1)) goto event_1462_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1462_32_end;
        if (!(((Active*)get_instance(playersensorbottombig_397_instances))->overlaps_background())) goto event_1462_32_end;
        escalatorright_1966_instances.clear_selection();
        for (ObjectIterator it(escalatorright_1966_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        escalatorleft_1951_instances.clear_selection();
        for (ObjectIterator it(escalatorleft_1951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1462_32_end: ;
}
void Frames::event_func_7570()
{
    // event 1463_32
    {
        if (!(group_main_engine_1)) goto event_1463_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1463_32_end;
        playersensorbottombig_397_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, escalatorright_1966_instances)) goto event_1463_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+1*((Active*)get_single(escalatorright_1966_instances, default_active_instance))->alterables->values.get(3));
    }
    event_1463_32_end: ;
}
void Frames::event_func_7571()
{
    // event 1464_32
    {
        if (!(group_main_engine_1)) goto event_1464_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1464_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1464_32_end;
        playersensorbottombig_397_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, escalatorright_1966_instances)) goto event_1464_32_end;
        for (ObjectIterator it(escalatorright_1966_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!escalatorright_1966_instances.has_selection()) goto event_1464_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
    }
    event_1464_32_end: ;
}
void Frames::event_func_7572()
{
    // event 1465_32
    {
        if (!(group_main_engine_1)) goto event_1465_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1465_32_end;
        playersensorbottombig_397_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, escalatorleft_1951_instances)) goto event_1465_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+1*((Active*)get_single(escalatorleft_1951_instances, default_active_instance))->alterables->values.get(3));
    }
    event_1465_32_end: ;
}
void Frames::event_func_7573()
{
    // event 1466_32
    {
        if (!(group_main_engine_1)) goto event_1466_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1466_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1466_32_end;
        playersensorbottombig_397_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, escalatorleft_1951_instances)) goto event_1466_32_end;
        for (ObjectIterator it(escalatorleft_1951_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!escalatorleft_1951_instances.has_selection()) goto event_1466_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
    }
    event_1466_32_end: ;
}
void Frames::event_func_7574()
{
    // event 1469_32
    {
        if (!(group_main_engine_1)) goto event_1469_32_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(0))) goto event_1469_32_end;
        if (not_always_1469_32 > loop_count) {
            not_always_1469_32 = loop_count + 2;
            goto event_1469_32_end;
        }
        not_always_1469_32 = loop_count + 2;
        escalatorfront1_1949_instances.clear_selection();
        for (ObjectIterator it(escalatorfront1_1949_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
        escalatorfront2_1950_instances.clear_selection();
        for (ObjectIterator it(escalatorfront2_1950_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
        escalatorright_1966_instances.clear_selection();
        for (ObjectIterator it(escalatorright_1966_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)*-1);
        }
        escalatorleft_1951_instances.clear_selection();
        for (ObjectIterator it(escalatorleft_1951_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)*-1);
        }
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
    }
    event_1469_32_end: ;
}
void Frames::event_func_7575()
{
    // event 1470_32
    {
        if (!(group_main_engine_1)) goto event_1470_32_end;
        ((Active*)get_instance(gimmickteetertotter_1827_instances))->set_angle(((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.set(0, get_max(-30, get_min(((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(0)+((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(1), 30)));
    }
    event_1470_32_end: ;
}
void Frames::event_func_7576()
{
    // event 1471_32
    {
        if (!(group_main_engine_1)) goto event_1471_32_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickteetertotter_1827_instances)) goto event_1471_32_end;
        ((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.set(1, ((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(1)+(((Active*)get_instance(gimmickteetertotter_1827_instances))->get_x()-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23))*0.0008);
    }
    event_1471_32_end: ;
}
void Frames::event_func_7577()
{
    // event 1472_32
    {
        if (!(group_main_engine_1)) goto event_1472_32_end;
        if (!((((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(1)) < (0))) goto event_1472_32_end;
        if (!((((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(0)) <= (-30))) goto event_1472_32_end;
        ((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(gimmickteetertotter_1827_instances))->set_direction(16);
    }
    event_1472_32_end: ;
}
void Frames::event_func_7578()
{
    // event 1473_32
    {
        if (!(group_main_engine_1)) goto event_1473_32_end;
        if (!((((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(1)) > (0))) goto event_1473_32_end;
        if (!((((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(0)) >= (30))) goto event_1473_32_end;
        ((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(gimmickteetertotter_1827_instances))->set_direction(0);
    }
    event_1473_32_end: ;
}
void Frames::event_func_7579()
{
    // event 1475_32
    {
        if (!(group_main_engine_1)) goto event_1475_32_end;
        if (!(((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->flags.is_off(1))) goto event_1475_32_end;
        if (!((((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(0)) < (25))) goto event_1475_32_end;
        if (!((((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->values.get(0)) > (-25))) goto event_1475_32_end;
        ((Active*)get_instance(gimmickteetertotter_1827_instances))->alterables->flags.enable(1);
    }
    event_1475_32_end: ;
}
void Frames::event_func_7580()
{
    // event 1478_32
    {
        if (!(group_main_engine_1)) goto event_1478_32_end;
        fountainfront_1952_instances.clear_selection();
        for (ObjectIterator it(fountainfront_1952_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%16);
        }
        fountainfront2_1953_instances.clear_selection();
        for (ObjectIterator it(fountainfront2_1953_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%16);
        }
        arrowlight_1896_instances.clear_selection();
        for (ObjectIterator it(arrowlight_1896_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%12);
        }
    }
    event_1478_32_end: ;
}
void Frames::event_func_7581()
{
    // event 1479_32
    {
        if (!(group_main_engine_1)) goto event_1479_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1479_32_end;
        levelwaterplatform_1954_instances.clear_selection();
        for (ObjectIterator it(levelwaterplatform_1954_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!levelwaterplatform_1954_instances.has_selection()) goto event_1479_32_end;
        for (ObjectIterator it(levelwaterplatform_1954_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1479_32_end: ;
}
void Frames::event_func_7582()
{
    // event 1480_32
    {
        if (!(group_main_engine_1)) goto event_1480_32_end;
        playersensorbottombig_397_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levelwaterplatform_1954_instances)) goto event_1480_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1480_32_end;
        for (ObjectIterator it(levelwaterplatform_1954_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelwaterplatform_1954_instances.has_selection()) goto event_1480_32_end;
        for (ObjectIterator it(levelwaterplatform_1954_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        effectswaterhit_655_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswaterhit_655(parent->x + -6, parent->y + 12), parent->layer);
                effectswaterhit_655_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswaterhit_655(parent->x + 6, parent->y + 12), parent->layer);
                effectswaterhit_655_instances.add_back();
            }
        }
        media.play_id(SOUND_SPLISH_2_208, -1, 1);
    }
    event_1480_32_end: ;
}
void Frames::event_func_7583()
{
    // event 1481_32
    {
        if (!(group_main_engine_1)) goto event_1481_32_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1481_32_end;
        levelwaterplatform_1954_instances.clear_selection();
        for (ObjectIterator it(levelwaterplatform_1954_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!levelwaterplatform_1954_instances.has_selection()) goto event_1481_32_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levelwaterplatform_1954_instances)) goto event_1481_32_end;
        FrameObject * single_instance_1481_32_0; single_instance_1481_32_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playersensorbottombig_397_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswaterhit_655(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1481_32_0 == NULL)
                    single_instance_1481_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1481_32_0))->set_x(((Active*)single_instance_1481_32_0)->get_x()-7+randrange(15));
    }
    event_1481_32_end: ;
}
void Frames::event_func_7584()
{
    // event 1490_32
    {
        if (!(group_main_engine_1)) goto event_1490_32_end;
        enemyballoon_1947_instances.clear_selection();
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3)+cos_deg(((Active*)*it)->alterables->values.get(5))*16);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(5)*2)*16);
            ((Active*)*it)->set_angle(cos_deg(((Active*)*it)->alterables->values.get(5)-30)*15, 0);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+2)%math_helper%360);
        }
    }
    event_1490_32_end: ;
}
void Frames::event_func_7585()
{
    // event 1491_32
    {
        if (!(group_main_engine_1)) goto event_1491_32_end;
        enemyballoon_1947_instances.clear_selection();
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemyballoon_1947_instances.has_selection()) goto event_1491_32_end;
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->force_animation(8);
        }
        FrameObject * single_instance_1491_32_0; single_instance_1491_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyballoon_1947_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorrings_407(parent->x + -16, parent->y + 0), parent->layer);
                if (single_instance_1491_32_0 == NULL)
                    single_instance_1491_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1491_32_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1491_32_0))->move_back();
    }
    event_1491_32_end: ;
}
void Frames::event_func_7586()
{
    // event 1492_32
    bool or_result_1492_32 = false;
    bool or_temp_result_1492_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1492_32_0_end;
        playersensorbottombig_397_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levelmovingplatform1_1965_instances)) goto or_event_1492_32_0_end;
        playersensorleftedge_402_instances.clear_selection();
        if (!check_overlap(playersensorleftedge_402_instances, levelmovingplatform1_1965_instances)) goto or_event_1492_32_0_end;
        playersensorrightedge_403_instances.clear_selection();
        if (!check_overlap(playersensorrightedge_403_instances, levelmovingplatform1_1965_instances)) goto or_event_1492_32_0_end;
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(21)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(24)))) { it.deselect(); continue; }
        }
        if (!levelmovingplatform1_1965_instances.has_selection()) goto or_event_1492_32_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1492_32_0_end;
        or_result_1492_32 = true;
        or_temp_result_1492_32_0 = true;
    }
    or_event_1492_32_0_end: ;
    playersensorbottombig_397_instances.clear_saved_selection();
    playersensorrightedge_403_instances.clear_saved_selection();
    levelmovingplatform1_1965_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftedge_402_instances.clear_saved_selection();
    if (or_temp_result_1492_32_0) {
        levelmovingplatform1_1965_instances.save_selection();
        playersensorrightedge_403_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorleftedge_402_instances.save_selection();
    }
    // event 1492_32
    bool or_temp_result_1492_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1492_32_1_end;
        playersensortopbig_395_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, levelmovingplatform1_1965_instances)) goto or_event_1492_32_1_end;
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(21)) > (1))) { it.deselect(); continue; }
        }
        if (!levelmovingplatform1_1965_instances.has_selection()) goto or_event_1492_32_1_end;
        playersensorbottombig_397_instances.clear_selection();
        for (ObjectIterator it(playersensorbottombig_397_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorbottombig_397_instances.has_selection()) goto or_event_1492_32_1_end;
        or_result_1492_32 = true;
        or_temp_result_1492_32_1 = true;
        or_event_1492_32_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_1492_32_1) {
            playersensorbottombig_397_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
            levelmovingplatform1_1965_instances.save_selection();
        }
        if (!or_result_1492_32) goto or_final_or_event_1492_32_1_end;
        playersensortopbig_395_instances.empty_selection();
        playersensorrightedge_403_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftedge_402_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        levelmovingplatform1_1965_instances.empty_selection();
        if (or_temp_result_1492_32_0 || or_temp_result_1492_32_1) {
            levelmovingplatform1_1965_instances.restore_selection();
        }
        if (or_temp_result_1492_32_0) {
            playersensorleftedge_402_instances.restore_selection();
        }
        if (or_temp_result_1492_32_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_1492_32_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1492_32_0) {
            playersensorrightedge_403_instances.restore_selection();
        }
        if (or_temp_result_1492_32_0 || or_temp_result_1492_32_1) {
            playersensorbottombig_397_instances.restore_selection();
        }
        {
            loop_rise_running = true;
            int times = int(1);
            loop_rise_index = 0;
            while (loop_rise_index < times) {
                loop_rise_32();
                if (!loop_rise_running) break;
                loop_rise_index++;
            }
        }
        levelmovingplatform1_1965_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, 0);
        }
    }
    or_final_or_event_1492_32_1_end: ;
}
void Frames::event_func_7587()
{
    // event 1494_32
    {
        if (!(group_main_engine_1)) goto event_1494_32_end;
        levelmovingplatform1_1965_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(21)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (90))) { it.deselect(); continue; }
        }
        if (!levelmovingplatform1_1965_instances.has_selection()) goto event_1494_32_end;
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.add(21, 1);
        }
    }
    event_1494_32_end: ;
}
void Frames::event_func_7588()
{
    // event 1495_32
    {
        if (!(group_main_engine_1)) goto event_1495_32_end;
        levelmovingplatform1_1965_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(21)) == (2))) { it.deselect(); continue; }
        }
        if (!levelmovingplatform1_1965_instances.has_selection()) goto event_1495_32_end;
        {
            loop_sink_running = true;
            int times = int(1);
            loop_sink_index = 0;
            while (loop_sink_index < times) {
                loop_sink_32();
                if (!loop_sink_running) break;
                loop_sink_index++;
            }
        }
    }
    event_1495_32_end: ;
}
void Frames::event_func_7589()
{
    // event 1497_32
    {
        if (!(group_main_engine_1)) goto event_1497_32_end;
        levelmovingplatform1_1965_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(21)) > (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (180))) { it.deselect(); continue; }
        }
        if (!levelmovingplatform1_1965_instances.has_selection()) goto event_1497_32_end;
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(21, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1497_32_end: ;
}
void Frames::event_func_7590()
{
    // event 1498_32
    {
        if (!(group_main_engine_1)) goto event_1498_32_end;
        levelmovingplatform1_1965_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!levelmovingplatform1_1965_instances.has_selection()) goto event_1498_32_end;
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 180);
        }
    }
    event_1498_32_end: ;
}
void Frames::event_func_7591()
{
    // event 1499_32
    {
        if (!(group_main_engine_1)) goto event_1499_32_end;
        levelmovingplatform1_1965_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_1499_32_end: ;
}
void Frames::event_func_7592()
{
    // event 1500_32
    {
        if (!(group_main_engine_1)) goto event_1500_32_end;
        levelmovingplatform1_1965_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!levelmovingplatform1_1965_instances.has_selection()) goto event_1500_32_end;
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1500_32_end: ;
}
void Frames::event_func_7593()
{
    // event 1502_32
    {
        if (!(group_main_engine_1)) goto event_1502_32_end;
        platformstilt1_1892_instances.clear_selection();
        for (ObjectIterator it(platformstilt1_1892_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        platformstilt2_1893_instances.clear_selection();
        for (ObjectIterator it(platformstilt2_1893_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        platformstilt3_1894_instances.clear_selection();
        for (ObjectIterator it(platformstilt3_1894_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        platformstilt4_1895_instances.clear_selection();
        for (ObjectIterator it(platformstilt4_1895_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        for (ObjectIterator it(platformstilt3_1894_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(platformstilt1_1892_instances, it.current_index));
            if (parent == NULL) goto pos_end_1502_32_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1502_32_0: ;
        }
        for (ObjectIterator it(platformstilt4_1895_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(platformstilt2_1893_instances, it.current_index));
            if (parent == NULL) goto pos_end_1502_32_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1502_32_1: ;
        }
        for (ObjectIterator it(platformstilt1_1892_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
        }
        for (ObjectIterator it(platformstilt2_1893_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
        }
        for (ObjectIterator it(platformstilt1_1892_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, sin_deg(((Active*)get_instance(levelmovingplatform1_1965_instances, it.current_index, default_active_instance))->alterables->values.get(4))*70);
            ((Active*)*it)->alterables->values.set(2, sin_deg(((Active*)get_instance(levelmovingplatform1_1965_instances, it.current_index, default_active_instance))->alterables->values.get(4))*40);
        }
        for (ObjectIterator it(platformstilt2_1893_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0-sin_deg(((Active*)get_instance(levelmovingplatform1_1965_instances, it.current_index, default_active_instance))->alterables->values.get(4))*70);
            ((Active*)*it)->alterables->values.set(2, sin_deg(((Active*)get_instance(levelmovingplatform1_1965_instances, it.current_index, default_active_instance))->alterables->values.get(4))*-40);
        }
        for (ObjectIterator it(platformstilt3_1894_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0-sin_deg(((Active*)get_instance(levelmovingplatform1_1965_instances, it.current_index, default_active_instance))->alterables->values.get(4))*70);
        }
        for (ObjectIterator it(platformstilt4_1895_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, sin_deg(((Active*)get_instance(levelmovingplatform1_1965_instances, it.current_index, default_active_instance))->alterables->values.get(4))*70);
        }
    }
    event_1502_32_end: ;
}
void Frames::event_func_7594()
{
    // event 1503_32
    {
        if (!(group_main_engine_1)) goto event_1503_32_end;
        enemyroller_1943_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        if (!check_overlap(enemyroller_1943_instances, levelmovingplatform1_1965_instances)) goto event_1503_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(levelmovingplatform1_1965_instances, default_active_instance))->get_box_index(3)))) { it.deselect(); continue; }
        }
        if (!enemyroller_1943_instances.has_selection()) goto event_1503_32_end;
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1503_32_0; single_instance_1503_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyroller_1943_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1503_32_0 == NULL)
                    single_instance_1503_32_0 = new_obj;
            }
        }
        FrameObject * single_instance_1503_32_1; single_instance_1503_32_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyroller_1943_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1503_32_1 == NULL)
                    single_instance_1503_32_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    event_1503_32_end: ;
}
void Frames::event_func_7595()
{
    // event 1504_32
    bool or_result_1504_32 = false;
    bool or_temp_result_1504_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1504_32_0_end;
        turningspring_1960_instances.clear_selection();
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!turningspring_1960_instances.has_selection()) goto or_event_1504_32_0_end;
        if (!((global_values->get(3)%math_helper%120) == (20))) goto or_event_1504_32_0_end;
        or_result_1504_32 = true;
        or_temp_result_1504_32_0 = true;
    }
    or_event_1504_32_0_end: ;
    turningspring_1960_instances.clear_saved_selection();
    if (or_temp_result_1504_32_0) {
        turningspring_1960_instances.save_selection();
    }
    // event 1504_32
    bool or_temp_result_1504_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1504_32_1_end;
        turningspring_1960_instances.clear_selection();
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!turningspring_1960_instances.has_selection()) goto or_event_1504_32_1_end;
        if (!((global_values->get(3)%math_helper%120) == (20))) goto or_event_1504_32_1_end;
        or_result_1504_32 = true;
        or_temp_result_1504_32_1 = true;
        or_event_1504_32_1_end: ;
        if (or_temp_result_1504_32_1) {
            turningspring_1960_instances.save_selection();
        }
        if (!or_result_1504_32) goto or_final_or_event_1504_32_1_end;
        turningspring_1960_instances.empty_selection();
        if (or_temp_result_1504_32_0 || or_temp_result_1504_32_1) {
            turningspring_1960_instances.restore_selection();
        }
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    or_final_or_event_1504_32_1_end: ;
}
void Frames::event_func_7596()
{
    // event 1505_32
    {
        if (!(group_main_engine_1)) goto event_1505_32_end;
        turningspring_1960_instances.clear_selection();
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!turningspring_1960_instances.has_selection()) goto event_1505_32_end;
        if (!((global_values->get(3)%math_helper%120) == (50))) goto event_1505_32_end;
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1505_32_end: ;
}
void Frames::event_func_7597()
{
    // event 1506_32
    {
        if (!(group_main_engine_1)) goto event_1506_32_end;
        turningspring_1960_instances.clear_selection();
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!turningspring_1960_instances.has_selection()) goto event_1506_32_end;
        if (!((global_values->get(3)%math_helper%120) == (50))) goto event_1506_32_end;
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1506_32_end: ;
}
void Frames::event_func_7598()
{
    // event 1507_32
    {
        if (!(group_main_engine_1)) goto event_1507_32_end;
        turningspring_1960_instances.clear_selection();
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!turningspring_1960_instances.has_selection()) goto event_1507_32_end;
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 3);
            ((Active*)*it)->set_angle(cos_deg(((Active*)*it)->alterables->values.get(0))*180+180, 0);
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1507_32_end: ;
}
void Frames::event_func_7599()
{
    // event 1508_32
    {
        if (!(group_main_engine_1)) goto event_1508_32_end;
        turningspring_1960_instances.clear_selection();
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!turningspring_1960_instances.has_selection()) goto event_1508_32_end;
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 3);
            ((Active*)*it)->set_angle(cos_deg(((Active*)*it)->alterables->values.get(0))*180, 0);
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1508_32_end: ;
}
void Frames::event_func_7600()
{
    // event 1509_32
    {
        if (!(group_main_engine_1)) goto event_1509_32_end;
        turningspring_1960_instances.clear_selection();
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (90))) { it.deselect(); continue; }
        }
        if (!turningspring_1960_instances.has_selection()) goto event_1509_32_end;
        for (ObjectIterator it(turningspring_1960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+1)%math_helper%4);
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1509_32_end: ;
}
void Frames::event_func_7601()
{
    // event 1514_32
    {
        if (!(group_main_engine_1)) goto event_1514_32_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_1514_32_end;
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
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
    event_1514_32_end: ;
}
void Frames::event_func_7602()
{
    // event 1539_32
    {
        if (!(group_main_engine_1)) goto event_1539_32_end;
        {
            FrameObject * parent = ((Active*)get_instance(gimmicklanternbridge1_1727_instances));
            if (parent == NULL) goto pos_end_1539_32_0;
            ((Active*)get_instance(gimmicklanternbridge2_1728_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1539_32_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(gimmicklanternbridge2_1728_instances));
            if (parent == NULL) goto pos_end_1539_32_1;
            ((Active*)get_instance(gimmicklanternbridge3_1729_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1539_32_1: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(gimmicklanternbridge3_1729_instances));
            if (parent == NULL) goto pos_end_1539_32_2;
            ((Active*)get_instance(gimmicklanternbridge4_1730_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1539_32_2: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(gimmicklanternbridge4_1730_instances));
            if (parent == NULL) goto pos_end_1539_32_3;
            ((Active*)get_instance(gimmicklanternbridge5_1731_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1539_32_3: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(gimmicklanternbridge5_1731_instances));
            if (parent == NULL) goto pos_end_1539_32_4;
            ((Active*)get_instance(gimmicklanternbridge6_1732_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1539_32_4: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(gimmicklanternbridge6_1732_instances));
            if (parent == NULL) goto pos_end_1539_32_5;
            ((Active*)get_instance(gimmicklanternbridge7_1733_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1539_32_5: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(gimmicklanternbridge7_1733_instances));
            if (parent == NULL) goto pos_end_1539_32_6;
            ((Active*)get_instance(gimmicklanternbridge8_1734_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1539_32_6: ;
        }
        ((Active*)get_instance(gimmicklanternbridge2_1728_instances))->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(gimmicklanternbridge3_1729_instances))->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(0)*2, 0);
        ((Active*)get_instance(gimmicklanternbridge4_1730_instances))->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(0)*3, 0);
        ((Active*)get_instance(gimmicklanternbridge5_1731_instances))->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(0)*4, 0);
        ((Active*)get_instance(gimmicklanternbridge6_1732_instances))->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(0)*5, 0);
        ((Active*)get_instance(gimmicklanternbridge7_1733_instances))->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(0)*6, 0);
        ((Active*)get_instance(gimmicklanternbridge8_1734_instances))->set_angle(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(0)*7, 0);
        ((Active*)get_instance(gimmicklanternbridge3_1729_instances))->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_direction());
        ((Active*)get_instance(gimmicklanternbridge4_1730_instances))->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_direction());
        ((Active*)get_instance(gimmicklanternbridge5_1731_instances))->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_direction());
        ((Active*)get_instance(gimmicklanternbridge6_1732_instances))->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_direction());
        ((Active*)get_instance(gimmicklanternbridge7_1733_instances))->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_direction());
        ((Active*)get_instance(gimmicklanternbridge8_1734_instances))->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_direction());
        ((Active*)get_instance(gimmicklanternbridge2_1728_instances))->set_direction(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_direction());
    }
    event_1539_32_end: ;
}
void Frames::event_func_7603()
{
    // event 1540_32
    {
        if (!(group_main_engine_1)) goto event_1540_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(3)) == (1))) goto event_1540_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(1)) < (180))) goto event_1540_32_end;
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(0, cos_deg(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(1)+180)*6.5*((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(2)+6.5*((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(2));
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.add(1, 8);
    }
    event_1540_32_end: ;
}
void Frames::event_func_7604()
{
    // event 1541_32
    {
        if (!(group_main_engine_1)) goto event_1541_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(3)) == (1))) goto event_1541_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(1)) >= (180))) goto event_1541_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(5)) < (30))) goto event_1541_32_end;
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.add(5, 1);
    }
    event_1541_32_end: ;
}
void Frames::event_func_7605()
{
    // event 1542_32
    {
        if (!(group_main_engine_1)) goto event_1542_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(3)) == (1))) goto event_1542_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(5)) >= (30))) goto event_1542_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1542_32_end;
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(3, -1);
    }
    event_1542_32_end: ;
}
void Frames::event_func_7606()
{
    // event 1543_32
    {
        if (!(group_main_engine_1)) goto event_1543_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(3)) == (-1))) goto event_1543_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(1)) > (0))) goto event_1543_32_end;
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(0, cos_deg(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(1)+180)*6.5*((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(2)+6.5*((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(2));
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.sub(1, 4);
    }
    event_1543_32_end: ;
}
void Frames::event_func_7607()
{
    // event 1544_32
    {
        if (!(group_main_engine_1)) goto event_1544_32_end;
        if (!(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->test_directions(1))) goto event_1544_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(3)) <= (0))) goto event_1544_32_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_x()))) goto event_1544_32_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_x()-88))) goto event_1544_32_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_y()))) goto event_1544_32_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_y()-200))) goto event_1544_32_end;
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(3, 1);
    }
    event_1544_32_end: ;
}
void Frames::event_func_7608()
{
    // event 1545_32
    {
        if (!(group_main_engine_1)) goto event_1545_32_end;
        if (!(((Active*)get_instance(gimmicklanternbridge1_1727_instances))->test_directions(2))) goto event_1545_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(3)) <= (0))) goto event_1545_32_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_x()))) goto event_1545_32_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_x()+88))) goto event_1545_32_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_y()))) goto event_1545_32_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_instance(gimmicklanternbridge1_1727_instances))->get_y()-200))) goto event_1545_32_end;
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(3, 1);
    }
    event_1545_32_end: ;
}
void Frames::event_func_7609()
{
    // event 1546_32
    bool or_result_1546_32 = false;
    bool or_temp_result_1546_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1546_32_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1546_32_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1546_32_0_end;
        player_389_instances.clear_selection();
        qualifier_22.clear_selection();
        if (!check_overlap(player_389_instances, qualifier_22)) goto or_event_1546_32_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1546_32_0_end;
        or_result_1546_32 = true;
        or_temp_result_1546_32_0 = true;
    }
    or_event_1546_32_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    qualifier_22.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    if (or_temp_result_1546_32_0) {
        playermovementvalues_245_instances.save_selection();
        qualifier_22.save_selection();
        playerskinsash_418_instances.save_selection();
        playerothers_123_instances.save_selection();
        player_389_instances.save_selection();
    }
    // event 1546_32
    bool or_temp_result_1546_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1546_32_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1546_32_1_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1546_32_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1546_32_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1546_32_1_end;
        or_result_1546_32 = true;
        or_temp_result_1546_32_1 = true;
    }
    or_event_1546_32_1_end: ;
    playerinput_19_instances.clear_saved_selection();
    objectchair_522_instances.clear_saved_selection();
    if (or_temp_result_1546_32_1) {
        playermovementvalues_245_instances.save_selection();
        playerinput_19_instances.save_selection();
        player_389_instances.save_selection();
        objectchair_522_instances.save_selection();
    }
    // event 1546_32
    bool or_temp_result_1546_32_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1546_32_2_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1546_32_2_end;
        player_389_instances.clear_selection();
        restroommen_1941_instances.clear_selection();
        if (!check_overlap(player_389_instances, restroommen_1941_instances)) goto or_event_1546_32_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1546_32_2_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1546_32_2_end;
        or_result_1546_32 = true;
        or_temp_result_1546_32_2 = true;
    }
    or_event_1546_32_2_end: ;
    restroommen_1941_instances.clear_saved_selection();
    if (or_temp_result_1546_32_2) {
        restroommen_1941_instances.save_selection();
        playerinput_19_instances.save_selection();
        player_389_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1546_32
    bool or_temp_result_1546_32_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1546_32_3_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1546_32_3_end;
        player_389_instances.clear_selection();
        restroomwomen_1942_instances.clear_selection();
        if (!check_overlap(player_389_instances, restroomwomen_1942_instances)) goto or_event_1546_32_3_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1546_32_3_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1546_32_3_end;
        or_result_1546_32 = true;
        or_temp_result_1546_32_3 = true;
        or_event_1546_32_3_end: ;
        restroomwomen_1942_instances.clear_saved_selection();
        if (or_temp_result_1546_32_3) {
            playermovementvalues_245_instances.save_selection();
            playerinput_19_instances.save_selection();
            restroomwomen_1942_instances.save_selection();
            player_389_instances.save_selection();
        }
        if (!or_result_1546_32) goto or_final_or_event_1546_32_3_end;
        player_389_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        objectchair_522_instances.empty_selection();
        qualifier_22.empty_selection();
        playerskinsash_418_instances.empty_selection();
        restroomwomen_1942_instances.empty_selection();
        restroommen_1941_instances.empty_selection();
        if (or_temp_result_1546_32_3) {
            restroomwomen_1942_instances.restore_selection();
        }
        if (or_temp_result_1546_32_2) {
            restroommen_1941_instances.restore_selection();
        }
        if (or_temp_result_1546_32_0 || or_temp_result_1546_32_1 || or_temp_result_1546_32_2 || or_temp_result_1546_32_3) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1546_32_1) {
            objectchair_522_instances.restore_selection();
        }
        if (or_temp_result_1546_32_1 || or_temp_result_1546_32_2 || or_temp_result_1546_32_3) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1546_32_0) {
            qualifier_22.restore_selection();
        }
        if (or_temp_result_1546_32_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1546_32_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1546_32_0 || or_temp_result_1546_32_1 || or_temp_result_1546_32_2 || or_temp_result_1546_32_3) {
            player_389_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 39);
        }
    }
    or_final_or_event_1546_32_3_end: ;
}
void Frames::event_func_7610()
{
    // event 1547_32
    bool or_result_1547_32 = false;
    bool or_temp_result_1547_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1547_32_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (39))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1547_32_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (1))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1547_32_0_end;
        player_389_instances.clear_selection();
        restroommen_1941_instances.clear_selection();
        if (!check_overlap(player_389_instances, restroommen_1941_instances)) goto or_event_1547_32_0_end;
        or_result_1547_32 = true;
        or_temp_result_1547_32_0 = true;
    }
    or_event_1547_32_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    restroommen_1941_instances.clear_saved_selection();
    if (or_temp_result_1547_32_0) {
        player_389_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        restroommen_1941_instances.save_selection();
    }
    // event 1547_32
    bool or_temp_result_1547_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1547_32_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (39))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1547_32_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (1))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1547_32_1_end;
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!restroommen_1941_instances.has_selection()) goto or_event_1547_32_1_end;
        or_result_1547_32 = true;
        or_temp_result_1547_32_1 = true;
        or_event_1547_32_1_end: ;
        if (or_temp_result_1547_32_1) {
            restroommen_1941_instances.save_selection();
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1547_32) goto or_final_or_event_1547_32_1_end;
        player_389_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        restroommen_1941_instances.empty_selection();
        if (or_temp_result_1547_32_0) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1547_32_0 || or_temp_result_1547_32_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1547_32_0 || or_temp_result_1547_32_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1547_32_0 || or_temp_result_1547_32_1) {
            restroommen_1941_instances.restore_selection();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, 180));
            ((Active*)*it)->force_frame(sin_deg(((Active*)*it)->alterables->values.get(0))*11);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 50);
        }
    }
    or_final_or_event_1547_32_1_end: ;
}
void Frames::event_func_7611()
{
    // event 1548_32
    bool or_result_1548_32 = false;
    bool or_temp_result_1548_32_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1548_32_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (39))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1548_32_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (1))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1548_32_0_end;
        player_389_instances.clear_selection();
        restroomwomen_1942_instances.clear_selection();
        if (!check_overlap(player_389_instances, restroomwomen_1942_instances)) goto or_event_1548_32_0_end;
        or_result_1548_32 = true;
        or_temp_result_1548_32_0 = true;
    }
    or_event_1548_32_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    restroomwomen_1942_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    if (or_temp_result_1548_32_0) {
        player_389_instances.save_selection();
        playerothers_123_instances.save_selection();
        restroomwomen_1942_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1548_32
    bool or_temp_result_1548_32_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1548_32_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (39))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1548_32_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (1))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1548_32_1_end;
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!restroomwomen_1942_instances.has_selection()) goto or_event_1548_32_1_end;
        or_result_1548_32 = true;
        or_temp_result_1548_32_1 = true;
        or_event_1548_32_1_end: ;
        if (or_temp_result_1548_32_1) {
            playerothers_123_instances.save_selection();
            restroomwomen_1942_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1548_32) goto or_final_or_event_1548_32_1_end;
        player_389_instances.empty_selection();
        restroomwomen_1942_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1548_32_0) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1548_32_0 || or_temp_result_1548_32_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1548_32_0 || or_temp_result_1548_32_1) {
            restroomwomen_1942_instances.restore_selection();
        }
        if (or_temp_result_1548_32_0 || or_temp_result_1548_32_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+10, 180));
            ((Active*)*it)->force_frame(sin_deg(((Active*)*it)->alterables->values.get(0))*11);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 50);
        }
    }
    or_final_or_event_1548_32_1_end: ;
}
void Frames::event_func_7612()
{
    // event 1549_32
    {
        if (!(group_main_engine_1)) goto event_1549_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1549_32_end;
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!restroommen_1941_instances.has_selection()) goto event_1549_32_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1549_32_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 10);
    }
    event_1549_32_end: ;
}
void Frames::event_func_7613()
{
    // event 1550_32
    {
        if (!(group_main_engine_1)) goto event_1550_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1550_32_end;
        restroommen_1941_instances.clear_selection();
        for (ObjectIterator it(restroommen_1941_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!restroommen_1941_instances.has_selection()) goto event_1550_32_end;
        ((Active*)get_instance(playerskinsash_418_instances))->move_back();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->move_back();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1550_32_end: ;
}
void Frames::event_func_7614()
{
    // event 1551_32
    {
        if (!(group_main_engine_1)) goto event_1551_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1551_32_end;
        restroomwomen_1942_instances.clear_selection();
        for (ObjectIterator it(restroomwomen_1942_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
        }
        if (!restroomwomen_1942_instances.has_selection()) goto event_1551_32_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1551_32_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 10);
    }
    event_1551_32_end: ;
}
