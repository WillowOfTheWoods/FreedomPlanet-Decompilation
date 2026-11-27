#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_uppercut1_42(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_42(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_42(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_42(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_42(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_42(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_42(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_42();
}
void Frames::loop_wrapper_play_music_6_42(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_39();
}
void Frames::loop_wrapper_sound_go0_42(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_42(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_39();
}
void Frames::loop_wrapper_sound_explode3_42(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_42(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_42(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_42(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_42(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_9990()
{
    // event 1596_42
    {
        if (!(group_main_engine_1)) goto event_1596_42_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(1)) > (0))) goto event_1596_42_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1596_42_0; single_instance_1596_42_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + -12, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1596_42_0 == NULL)
                single_instance_1596_42_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1596_42_0))->force_frame(9);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1596_42_end: ;
}
void Frames::col_24_42()
{
    event_func_9990();
}
void Frames::test_collisions_42()
{
    test_collisions(qualifier_7, minibosstreddbomb_1015_instances, 2147483648, 1, (EventFunction)&Frames::col_17_22);
    test_collisions(qualifier_7, effectsdebris_319_instances, 1073741824, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(shieldwater_318_instances, badnikgolemshot_1197_instances, 1, 1, (EventFunction)&Frames::col_7_40);
    test_collisions(qualifier_19, qualifier_19, 536870912, 536870912, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playerreflect_447_instances, badnikgolemshot_1197_instances, 1, 2, (EventFunction)&Frames::col_10_40);
    test_collisions(qualifier_20, objectcrystal_279_instances, 536870912, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(shieldwater_318_instances, enemybullfragbubble_2324_instances, 2, 1, (EventFunction)&Frames::col_7_39);
    test_collisions(playercharactersensor_383_instances, enemybullfragbubble_2324_instances, 1, 2, (EventFunction)&Frames::col_5_39);
    test_collisions(playercharactersensor_383_instances, bubblepatch_806_instances, 2, 1, (EventFunction)&Frames::col_4_17);
    test_collisions(playercharactersensor_383_instances, badnikgolemshot_1197_instances, 4, 4, (EventFunction)&Frames::col_22_40);
    test_collisions(playerreflect_447_instances, enemybullfragbubble_2324_instances, 2, 4, (EventFunction)&Frames::col_10_39);
    test_collisions(qualifier_20, playerprojectile_320_instances, 134217728, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(playercharactersensor_383_instances, enemysharktorpedo2_2328_instances, 8, 1, (EventFunction)&Frames::col_1_39);
    test_collisions(qualifier_8, playerreflect_447_instances, 67108864, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(enemylimiter_350_instances, enemymeteorroller_2421_instances, 1, 1, (EventFunction)&Frames::col_16_39);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 8388608, 8, (EventFunction)&Frames::col_5_13);
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
    for (it1 = minibosstreddbomb_1015_instances.begin(); it1 != minibosstreddbomb_1015_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_24_42();
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
void Frames::event_func_9991()
{
    // event 534_42
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_534_42_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_534_42_end;
        FrameObject * single_instance_534_42_0; single_instance_534_42_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_534_42_0 == NULL)
                    single_instance_534_42_0 = new_obj;
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
                loop_spawndebris_42();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_534_42_end: ;
}
void Frames::event_func_9992()
{
    // event 551_42
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_551_42_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_551_42_end;
        FrameObject * single_instance_551_42_0; single_instance_551_42_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_551_42_0 == NULL)
                    single_instance_551_42_0 = new_obj;
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
                loop_spawndebris_42();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_551_42_end: ;
}
void Frames::event_func_9993()
{
    // event 685_42
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_685_42_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_685_42_end;
        FrameObject * single_instance_685_42_0; single_instance_685_42_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_685_42_0 == NULL)
                    single_instance_685_42_0 = new_obj;
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
                loop_spawndebris_42();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_685_42_end: ;
}
void Frames::event_func_9994()
{
    // event 1432_42
    bool or_result_1432_42 = false;
    bool or_temp_result_1432_42_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1432_42_0_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1432_42_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, qualifier_7)) goto or_event_1432_42_0_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1432_42_0_end;
        or_result_1432_42 = true;
        or_temp_result_1432_42_0 = true;
    }
    or_event_1432_42_0_end: ;
    enemymeteorroller_2421_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1432_42_0) {
        enemymeteorroller_2421_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1432_42
    bool or_temp_result_1432_42_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1432_42_1_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1432_42_1_end;
        or_result_1432_42 = true;
        or_temp_result_1432_42_1 = true;
        or_event_1432_42_1_end: ;
        if (or_temp_result_1432_42_1) {
            enemymeteorroller_2421_instances.save_selection();
        }
        if (!or_result_1432_42) goto or_final_or_event_1432_42_1_end;
        qualifier_7.empty_selection();
        enemymeteorroller_2421_instances.empty_selection();
        if (or_temp_result_1432_42_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1432_42_0 || or_temp_result_1432_42_1) {
            enemymeteorroller_2421_instances.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1432_42_0; single_instance_1432_42_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1432_42_0 == NULL)
                    single_instance_1432_42_0 = new_obj;
            }
        }
        FrameObject * single_instance_1432_42_1; single_instance_1432_42_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1432_42_1 == NULL)
                    single_instance_1432_42_1 = new_obj;
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
                loop_spawndebris_42();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1432_42_1_end: ;
}
void Frames::event_func_9995()
{
    // event 1455_42
    bool or_result_1455_42 = false;
    bool or_temp_result_1455_42_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1455_42_0_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1455_42_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybuoybuoy_2418_instances, qualifier_7)) goto or_event_1455_42_0_end;
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1455_42_0_end;
        or_result_1455_42 = true;
        or_temp_result_1455_42_0 = true;
    }
    or_event_1455_42_0_end: ;
    enemybuoybuoy_2418_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1455_42_0) {
        enemybuoybuoy_2418_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1455_42
    bool or_temp_result_1455_42_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1455_42_1_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto or_event_1455_42_1_end;
        or_result_1455_42 = true;
        or_temp_result_1455_42_1 = true;
        or_event_1455_42_1_end: ;
        if (or_temp_result_1455_42_1) {
            enemybuoybuoy_2418_instances.save_selection();
        }
        if (!or_result_1455_42) goto or_final_or_event_1455_42_1_end;
        qualifier_7.empty_selection();
        enemybuoybuoy_2418_instances.empty_selection();
        if (or_temp_result_1455_42_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1455_42_0 || or_temp_result_1455_42_1) {
            enemybuoybuoy_2418_instances.restore_selection();
        }
        FrameObject * single_instance_1455_42_0; single_instance_1455_42_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1455_42_0 == NULL)
                    single_instance_1455_42_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1455_42_0))->set_direction(2);
        FrameObject * single_instance_1455_42_1; single_instance_1455_42_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1455_42_1 == NULL)
                    single_instance_1455_42_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_42();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1455_42_1_end: ;
}
void Frames::event_func_9996()
{
    // event 1479_42
    {
        if (!(group_main_engine_1)) goto event_1479_42_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1479_42_end;
        FrameObject * single_instance_1479_42_0; single_instance_1479_42_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1479_42_0 == NULL)
                    single_instance_1479_42_0 = new_obj;
            }
        }
        FrameObject * single_instance_1479_42_1; single_instance_1479_42_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1479_42_1 == NULL)
                    single_instance_1479_42_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1479_42_1))->set_direction(2);
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_42();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1479_42_2_end;
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
        dynamic_1479_42_2_end: ;
    }
    event_1479_42_end: ;
}
void Frames::event_func_9997()
{
    // event 1509_42
    {
        if (!(group_main_engine_1)) goto event_1509_42_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1509_42_end;
        FrameObject * single_instance_1509_42_0; single_instance_1509_42_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysharktorpedo_2423_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1509_42_0 == NULL)
                    single_instance_1509_42_0 = new_obj;
            }
        }
        FrameObject * single_instance_1509_42_1; single_instance_1509_42_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysharktorpedo_2423_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1509_42_1 == NULL)
                    single_instance_1509_42_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_42();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1509_42_end: ;
}
void Frames::event_func_9998()
{
    // event 1539_42
    {
        if (!(group_main_engine_1)) goto event_1539_42_end;
        if (!((global_values->get(3)%math_helper%20) == (0))) goto event_1539_42_end;
        if (((Active*)get_instance(objectwhispmaker_751_instances))->is_near_border(-300)) goto event_1539_42_end;
        FrameObject * single_instance_1539_42_0; single_instance_1539_42_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(objectwhispmaker_751_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectwhisp_656(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1539_42_0 == NULL)
                    single_instance_1539_42_0 = new_obj;
            }
        }
    }
    event_1539_42_end: ;
}
void Frames::event_func_9999()
{
    // event 1545_42
    {
        if (!(group_main_engine_1)) goto event_1545_42_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1545_42_end;
        if (!((frame_top()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) goto event_1545_42_end;
        if (!((lightspark2_577_instances.size()) < (50))) goto event_1545_42_end;
        lightspark2_577_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_lightspark2_577(-50, 0), 1);
            lightspark2_577_instances.add_back();
        }
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-50+randrange(global_values->get(16)+100)+global_values->get(16)*0.5);
            ((Active*)*it)->set_y(height-50-randrange(600));
        }
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1545_42_end: ;
}
void Frames::event_func_10000()
{
    // event 1581_42
    {
        if (!(group_main_engine_1)) goto event_1581_42_end;
        if (!((global_values->get(4)) < (2))) goto event_1581_42_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4100))) goto event_1581_42_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4400))) goto event_1581_42_end;
        global_values->set(4, 2);
        global_values->set(5, 4184);
        global_values->set(6, 1640);
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
    event_1581_42_end: ;
}
void Frames::event_func_10001()
{
    // event 1583_42
    {
        if (!(group_main_engine_1)) goto event_1583_42_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, ((Active*)get_instance(generalwaterhorizon_415_instances, default_active_instance))->alterables->values.get(0)+sin_deg(global_values->get(3)*0.5%math_helper%360)*200);
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(2, ((SystemBox*)*it)->alterables->values.get(12)+sin_deg(global_values->get(3)*0.5%math_helper%360)*200*(1-((SystemBox*)*it)->alterables->values.get(4)));
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(3-1, 0-((global_values->get(3)*4)%math_helper%1280));
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
        }
    }
    event_1583_42_end: ;
}
void Frames::event_func_10002()
{
    // event 1584_42
    {
        if (!(group_main_engine_1)) goto event_1584_42_end;
        if (once_condition_1584_42) goto event_1584_42_end;
        once_condition_1584_42 = true;
        hazardtorpedolauncher_2496_instances.clear_selection();
        spread_value(hazardtorpedolauncher_2496_instances, 0, 0);
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)*7)%math_helper%150);
        }
    }
    event_1584_42_end: ;
}
void Frames::event_func_10003()
{
    // event 1585_42
    {
        if (!(group_main_engine_1)) goto event_1585_42_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1)/math_helper/10);
        }
    }
    event_1585_42_end: ;
}
void Frames::event_func_10004()
{
    // event 1586_42
    {
        if (!(group_main_engine_1)) goto event_1586_42_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (60))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1586_42_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1586_42_end: ;
}
void Frames::event_func_10005()
{
    // event 1587_42
    {
        if (!(group_main_engine_1)) goto event_1587_42_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (90))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1587_42_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        FrameObject * single_instance_1587_42_0; single_instance_1587_42_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(hazardtorpedolauncher_2496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstreddbomb_1015(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1587_42_0 == NULL)
                    single_instance_1587_42_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1587_42_0))->alterables->values.set(1, -10);
        ((Active*)((Active*)single_instance_1587_42_0))->set_angle(180, 0);
        FrameObject * single_instance_1587_42_1; single_instance_1587_42_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(hazardtorpedolauncher_2496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1587_42_1 == NULL)
                    single_instance_1587_42_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
    }
    event_1587_42_end: ;
}
void Frames::event_func_10006()
{
    // event 1588_42
    {
        if (!(group_main_engine_1)) goto event_1588_42_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (120))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1588_42_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1588_42_end: ;
}
void Frames::event_func_10007()
{
    // event 1589_42
    {
        if (!(group_main_engine_1)) goto event_1589_42_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (150))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1589_42_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 180);
        }
    }
    event_1589_42_end: ;
}
void Frames::event_func_10008()
{
    // event 1590_42
    {
        if (!(group_main_engine_1)) goto event_1590_42_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1590_42_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-2, 0));
        }
    }
    event_1590_42_end: ;
}
void Frames::event_func_10009()
{
    // event 1591_42
    {
        if (!(group_main_engine_1)) goto event_1591_42_end;
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!hazardtorpedolauncher_2496_instances.has_selection()) goto event_1591_42_end;
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+2, 40));
        }
    }
    event_1591_42_end: ;
}
void Frames::event_func_10010()
{
    // event 1594_42
    {
        if (!(group_main_engine_1)) goto event_1594_42_end;
        minibosstreddbomb_1015_instances.clear_selection();
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-2))) { it.deselect(); continue; }
        }
        if (!minibosstreddbomb_1015_instances.has_selection()) goto event_1594_42_end;
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_max(((Active*)*it)->alterables->values.get(1)-5, 0), 0);
        }
    }
    event_1594_42_end: ;
}
void Frames::event_func_10011()
{
    // event 1595_42
    {
        if (!(group_main_engine_1)) goto event_1595_42_end;
        minibosstreddbomb_1015_instances.clear_selection();
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddbomb_1015_instances.has_selection()) goto event_1595_42_end;
        if (!((((Active*)get_single(minibosstreddbomb_1015_instances, default_active_instance))->layer->index+1) != (((Active*)get_instance(player_389_instances))->layer->index+1))) goto event_1595_42_end;
        for (ObjectIterator it(minibosstreddbomb_1015_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
    }
    event_1595_42_end: ;
}
void Frames::event_func_10012()
{
    // event 1835_42
    {
        if (!(group_pause_1)) goto event_1835_42_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1835_42_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1835_42_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1835_42_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1835_42_end;
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
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->stop_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysharktorpedo2_2328_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo2_2328_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        badnikgolemshot2_1198_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot2_1198_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->stop_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1835_42_end: ;
}
void Frames::event_func_10013()
{
    // event 1836_42
    bool or_result_1836_42 = false;
    bool or_temp_result_1836_42_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1836_42_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1836_42_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1836_42_0_end;
        or_result_1836_42 = true;
        or_temp_result_1836_42_0 = true;
    }
    or_event_1836_42_0_end: ;
    // event 1836_42
    bool or_temp_result_1836_42_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1836_42_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1836_42_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1836_42_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1836_42_1_end;
        or_result_1836_42 = true;
        or_temp_result_1836_42_1 = true;
        or_event_1836_42_1_end: ;
        if (!or_result_1836_42) goto or_final_or_event_1836_42_1_end;
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
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(levelparalaxwatersurface_7_instances))->start_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysharktorpedo2_2328_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo2_2328_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardtorpedolauncher_2496_instances.clear_selection();
        for (ObjectIterator it(hazardtorpedolauncher_2496_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet2_2326_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet2_2326_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemybuoybullet_2325_instances.clear_selection();
        for (ObjectIterator it(enemybuoybullet_2325_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        badnikgolemshot2_1198_instances.clear_selection();
        for (ObjectIterator it(badnikgolemshot2_1198_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->start_animation();
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
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1836_42_1_end: ;
}
void Frames::handle_frame_43_events()
{
    test_collisions_42();
    event_func_1647();
    event_func_1680();
    event_func_1697();
    event_func_1733();
    event_func_1823();
    event_func_1824();
    event_func_1825();
    event_func_1833();
    event_func_1863();
    event_func_1864();
    event_func_1865();
    event_func_1957();
    event_func_2128();
    event_func_2167();
    event_func_2266();
    event_func_2270();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
    event_func_1358();
    event_func_1359();
    event_func_1360();
    event_func_1361();
    event_func_1362();
    event_func_1363();
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_2732();
    event_func_2733();
    event_func_2734();
    event_func_1372();
    event_func_1373();
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
    event_func_1378();
    event_func_1379();
    event_func_1380();
    event_func_1381();
    event_func_1382();
    event_func_1383();
    event_func_1384();
    if (!group_main_engine_global_methods_player_player_movement_1) goto group_main_engine_global_methods_player_player_movement_1_end;
    if (!group_main_engine_global_methods_player_player_movement_initial_movement_1) goto group_main_engine_global_methods_player_player_movement_initial_movement_1_end;
    event_func_1385();
    group_main_engine_global_methods_player_player_movement_initial_movement_1_end: ;
    event_func_1386();
    event_func_1387();
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
    event_func_1397();
    event_func_1398();
    event_func_1399();
    event_func_1400();
    event_func_1401();
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
    event_func_1406();
    event_func_1407();
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_1423();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_3721();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_1429();
    event_func_1430();
    if (!group_main_engine_global_methods_player_player_control_control_1) goto group_main_engine_global_methods_player_player_control_control_1_end;
    event_func_1431();
    event_func_1432();
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
    event_func_1437();
    event_func_1438();
    event_func_1439();
    event_func_1440();
    event_func_1441();
    event_func_1442();
    event_func_1443();
    event_func_1444();
    event_func_1445();
    event_func_1446();
    event_func_1447();
    event_func_1448();
    event_func_1449();
    event_func_1450();
    event_func_1451();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_1462();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_2743();
    event_func_1471();
    event_func_1472();
    event_func_1473();
    event_func_1474();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_1484();
    event_func_1485();
    event_func_1486();
    event_func_1487();
    event_func_1488();
    event_func_1489();
    if (!group_main_engine_global_methods_player_player_control_actions_charge_attack_1) goto group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end;
    event_func_1490();
    event_func_1491();
    event_func_1492();
    event_func_1493();
    event_func_1494();
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_manage_actions_1) goto group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end;
    event_func_1495();
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
    event_func_1500();
    event_func_1501();
    event_func_1502();
    event_func_1503();
    event_func_1504();
    event_func_1505();
    event_func_1506();
    event_func_1507();
    event_func_1508();
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
    event_func_1520();
    event_func_1521();
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
    event_func_1532();
    event_func_1533();
    event_func_1534();
    event_func_1535();
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end;
    event_func_1536();
    event_func_1537();
    event_func_1538();
    event_func_1539();
    event_func_1540();
    event_func_1541();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_1548();
    event_func_1549();
    event_func_1550();
    event_func_1551();
    event_func_1552();
    event_func_1553();
    event_func_1554();
    event_func_1555();
    event_func_1556();
    event_func_1557();
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
    event_func_1563();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_1568();
    event_func_1569();
    event_func_1570();
    event_func_1571();
    event_func_1572();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_1590();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end;
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_1604();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_1635();
    event_func_1636();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
    event_func_1652();
    event_func_1653();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_1656();
    event_func_1657();
    event_func_1658();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_1662();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
    event_func_1668();
    event_func_1669();
    event_func_1670();
    event_func_1671();
    event_func_1672();
    event_func_1673();
    event_func_1674();
    event_func_1675();
    event_func_1676();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
    event_func_1682();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_1692();
    event_func_1693();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_1699();
    event_func_1700();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_1702();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_1706();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_1719();
    event_func_1720();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_1726();
    event_func_1727();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end;
    event_func_1728();
    event_func_1729();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end;
    event_func_1730();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_1732();
    event_func_1734();
    event_func_1735();
    event_func_1736();
    event_func_1737();
    event_func_1738();
    event_func_1739();
    event_func_1740();
    event_func_1741();
    event_func_1742();
    event_func_1743();
    event_func_1744();
    event_func_1745();
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_3728();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_9991();
    event_func_1762();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_1767();
    event_func_1768();
    event_func_1769();
    event_func_1770();
    event_func_1771();
    event_func_1772();
    event_func_1773();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_1776();
    event_func_9992();
    event_func_1778();
    event_func_1779();
    event_func_1780();
    event_func_1781();
    event_func_1782();
    event_func_1783();
    event_func_1784();
    event_func_1785();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_1791();
    event_func_1792();
    event_func_1793();
    event_func_1794();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_1801();
    event_func_1802();
    event_func_1803();
    event_func_1804();
    event_func_1805();
    event_func_1806();
    event_func_1807();
    event_func_1808();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_1812();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_1817();
    event_func_1818();
    event_func_1819();
    event_func_1820();
    event_func_1821();
    event_func_1822();
    event_func_1826();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
    event_func_1832();
    event_func_1834();
    event_func_1835();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_1837();
    event_func_1838();
    event_func_1839();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_1843();
    event_func_1844();
    event_func_1845();
    event_func_1846();
    event_func_1847();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end: ;
    event_func_1848();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end;
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
    event_func_1855();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end;
    event_func_1856();
    event_func_1857();
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
    event_func_1866();
    event_func_1867();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end;
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
    event_func_1872();
    event_func_1873();
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
    event_func_1881();
    event_func_1882();
    event_func_1883();
    event_func_1884();
    event_func_1885();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_1890();
    event_func_1891();
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
    event_func_1896();
    event_func_1897();
    event_func_1898();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end;
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_9993();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end;
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_1961();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_4529();
    event_func_4530();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_4531();
    event_func_1987();
    event_func_4532();
    event_func_1988();
    event_func_1989();
    event_func_4533();
    event_func_1990();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end;
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_1994();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_2004();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2834();
    event_func_2025();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end;
    event_func_2034();
    event_func_2035();
    event_func_2036();
    event_func_2037();
    event_func_2038();
    event_func_2835();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2042();
    event_func_2043();
    event_func_2044();
    event_func_2045();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2839();
    event_func_2050();
    event_func_2051();
    event_func_2052();
    event_func_2053();
    event_func_2054();
    event_func_2055();
    event_func_2056();
    event_func_2057();
    event_func_2058();
    event_func_2059();
    event_func_2060();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end;
    event_func_2069();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2079();
    event_func_2080();
    event_func_2081();
    event_func_2082();
    event_func_2083();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end;
    event_func_2084();
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end;
    event_func_2085();
    event_func_2086();
    event_func_2087();
    event_func_2088();
    event_func_2089();
    event_func_2090();
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
    event_func_2095();
    event_func_2840();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2841();
    event_func_2098();
    event_func_2099();
    event_func_2100();
    event_func_2101();
    event_func_2102();
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
    event_func_2123();
    event_func_2124();
    event_func_2125();
    event_func_2126();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end;
    event_func_2127();
    event_func_2129();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1) goto group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end;
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
    event_func_2134();
    event_func_2135();
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_check_for_being_hurt_1) goto group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end;
    event_func_2136();
    event_func_2137();
    event_func_2138();
    event_func_2139();
    event_func_2140();
    event_func_2141();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_1189();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
    event_func_2152();
    event_func_2153();
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
    event_func_2166();
    event_func_2168();
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
    event_func_2176();
    event_func_2177();
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
    event_func_2191();
    event_func_2192();
    event_func_2193();
    event_func_2194();
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
    event_func_2200();
    event_func_2201();
    event_func_2202();
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2214();
    event_func_2215();
    event_func_2216();
    event_func_2217();
    event_func_2218();
    event_func_2219();
    event_func_2220();
    event_func_2221();
    event_func_2222();
    event_func_2223();
    event_func_2224();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
    event_func_2236();
    event_func_2237();
    event_func_2238();
    event_func_2239();
    event_func_2240();
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
    event_func_2245();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
    event_func_2281();
    event_func_2282();
    event_func_2283();
    event_func_2284();
    event_func_2285();
    event_func_2286();
    event_func_2287();
    event_func_2288();
    event_func_2289();
    event_func_2290();
    event_func_2291();
    event_func_2292();
    event_func_2293();
    event_func_2294();
    event_func_2295();
    event_func_2296();
    event_func_2297();
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
    event_func_2303();
    event_func_2304();
    event_func_2305();
    event_func_2306();
    event_func_2307();
    event_func_2308();
    event_func_2298();
    event_func_2309();
    event_func_2300();
    event_func_2310();
    event_func_2311();
    event_func_2312();
    event_func_2313();
    event_func_2314();
    event_func_2315();
    event_func_2316();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2931();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
    event_func_2325();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_2335();
    event_func_2336();
    event_func_2337();
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
    event_func_2347();
    event_func_2348();
    event_func_2349();
    event_func_2350();
    event_func_2351();
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
    event_func_2361();
    event_func_2362();
    event_func_2363();
    event_func_2364();
    event_func_2365();
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
    event_func_2374();
    event_func_2375();
    event_func_2376();
    event_func_2377();
    event_func_2378();
    event_func_2379();
    event_func_2380();
    event_func_2380();
    event_func_2381();
    event_func_2382();
    event_func_2383();
    event_func_2384();
    event_func_2385();
    event_func_2932();
    event_func_3729();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) goto group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end;
    event_func_2396();
    event_func_2397();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
    event_func_2404();
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) goto group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end;
    event_func_2405();
    event_func_2406();
    event_func_2407();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2410();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2412();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2417();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2419();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_3730();
    event_func_3731();
    event_func_2425();
    event_func_3732();
    event_func_3733();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
    event_func_2437();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_2475();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4541();
    event_func_7080();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_3734();
    event_func_2979();
    event_func_3736();
    event_func_4355();
    event_func_4356();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_9488();
    event_func_9489();
    event_func_9490();
    event_func_9491();
    event_func_9492();
    event_func_9493();
    event_func_9494();
    event_func_9495();
    event_func_9496();
    event_func_9497();
    event_func_9498();
    event_func_9499();
    event_func_9500();
    event_func_9501();
    event_func_9502();
    event_func_9994();
    event_func_9423();
    event_func_9504();
    event_func_9505();
    event_func_9506();
    event_func_9507();
    event_func_9508();
    event_func_9509();
    event_func_9510();
    event_func_9511();
    event_func_9512();
    event_func_9557();
    event_func_9558();
    event_func_9559();
    event_func_9560();
    event_func_9561();
    event_func_9562();
    event_func_9563();
    event_func_9564();
    event_func_9565();
    event_func_9566();
    event_func_9567();
    event_func_9995();
    event_func_9569();
    event_func_9570();
    event_func_9571();
    event_func_9572();
    event_func_9573();
    event_func_9574();
    event_func_9575();
    event_func_9576();
    event_func_9537();
    event_func_9538();
    event_func_9539();
    event_func_9540();
    event_func_9541();
    event_func_9542();
    event_func_9543();
    event_func_9544();
    event_func_9545();
    event_func_9546();
    event_func_9547();
    event_func_9996();
    event_func_9549();
    event_func_9550();
    event_func_9551();
    event_func_9552();
    event_func_9553();
    event_func_9554();
    event_func_9555();
    event_func_9556();
    event_func_9577();
    event_func_9578();
    event_func_9579();
    event_func_9580();
    event_func_9581();
    event_func_9582();
    event_func_9583();
    event_func_9584();
    event_func_9585();
    event_func_9586();
    event_func_9587();
    event_func_9588();
    event_func_9589();
    event_func_9590();
    event_func_9591();
    event_func_9592();
    event_func_9997();
    event_func_9594();
    event_func_9595();
    event_func_9596();
    event_func_9597();
    event_func_9713();
    event_func_9714();
    event_func_9715();
    event_func_9716();
    event_func_9717();
    event_func_9718();
    event_func_9719();
    event_func_9720();
    event_func_9721();
    event_func_9722();
    event_func_5516();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_9998();
    event_func_3818();
    event_func_3819();
    event_func_3820();
    event_func_3821();
    event_func_3822();
    event_func_9999();
    event_func_9599();
    event_func_9600();
    event_func_9601();
    event_func_9602();
    event_func_9603();
    event_func_3823();
    event_func_3824();
    event_func_3825();
    event_func_3826();
    event_func_3827();
    event_func_3828();
    event_func_3829();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_3836();
    event_func_3837();
    event_func_4051();
    event_func_4052();
    event_func_3838();
    event_func_3839();
    event_func_3840();
    event_func_3841();
    event_func_3842();
    event_func_3843();
    event_func_6082();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_9724();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_10000();
    event_func_10001();
    event_func_10002();
    event_func_10003();
    event_func_10004();
    event_func_10005();
    event_func_10006();
    event_func_10007();
    event_func_10008();
    event_func_10009();
    event_func_4840();
    event_func_4841();
    event_func_10010();
    event_func_10011();
    event_func_9620();
    event_func_2519();
    event_func_2520();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_2528();
    event_func_2529();
    event_func_2530();
    event_func_2531();
    event_func_2532();
    event_func_2533();
    event_func_2534();
    event_func_2535();
    event_func_2536();
    event_func_2537();
    event_func_2538();
    event_func_2539();
    event_func_2540();
    event_func_2541();
    event_func_2542();
    event_func_2543();
    event_func_2544();
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
    event_func_2553();
    event_func_2554();
    event_func_2555();
    event_func_2556();
    event_func_2557();
    event_func_2558();
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
    event_func_2563();
    event_func_2564();
    event_func_2565();
    event_func_2566();
    event_func_2567();
    event_func_2568();
    event_func_2569();
    event_func_2570();
    event_func_2571();
    event_func_2572();
    event_func_2573();
    event_func_2574();
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_3910();
    event_func_3911();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    event_func_3912();
    event_func_3913();
    event_func_3914();
    event_func_3915();
    event_func_3916();
    event_func_3917();
    event_func_3918();
    event_func_3919();
    event_func_3920();
    event_func_3921();
    event_func_3922();
    event_func_3923();
    event_func_3924();
    event_func_3925();
    event_func_3926();
    event_func_3927();
    event_func_3928();
    event_func_3929();
    event_func_3930();
    event_func_3931();
    event_func_3932();
    event_func_3933();
    event_func_3934();
    event_func_3935();
    event_func_3936();
    event_func_3937();
    event_func_3938();
    event_func_3939();
    event_func_3940();
    event_func_3941();
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_3942();
    event_func_3943();
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_4308();
    event_func_4309();
    event_func_4310();
    event_func_4311();
    event_func_3953();
    event_func_3954();
    event_func_4124();
    event_func_4125();
    event_func_4126();
    event_func_4127();
    event_func_4128();
    event_func_4129();
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    event_func_9624();
    event_func_9625();
    event_func_9626();
    event_func_9627();
    event_func_9628();
    event_func_9629();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_10012();
    event_func_10013();
    event_func_2644();
    event_func_3968();
    event_func_3969();
    event_func_3970();
    event_func_3971();
    event_func_3972();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_3977();
    event_func_3978();
    group_pause_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_947();
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_3261();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_3262();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    event_func_3263();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_43_pre_events()
{
}
void Frames::event_func_10014()
{
    // event 2_42
    {
        if (!(group_main_engine_1)) goto event_2_42_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 1600);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 58);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 24);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_2_42_end: ;
}
void Frames::event_func_10015()
{
    // event 19_42
    {
        if (!(group_main_engine_1)) goto event_19_42_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 1);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0);
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -4*(1-((SystemBox*)*it)->alterables->values.get(3)));
        }
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.85);
    }
    event_19_42_end: ;
}
void Frames::event_func_10016()
{
    // event 1582_42
    {
        if (!(group_main_engine_1)) goto event_1582_42_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(12, ((SystemBox*)*it)->alterables->values.get(2));
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1));
        }
    }
    event_1582_42_end: ;
}
void Frames::on_frame_43_start_events()
{
    event_func_4133();
    event_func_10014();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_3267();
    event_func_10015();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_9643();
    event_func_9644();
    event_func_9809();
    event_func_9810();
    event_func_2686();
    event_func_2687();
    event_func_10016();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_9812();
    event_func_4145();
    event_func_4146();
    event_func_4143();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_43_init()
{
    index = 42;
    width = 10240;
    height = 2600;
    virtual_width = 10240;
    virtual_height = 2600;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_26_instances[] = {&jcwaterstream4_2409_instances, &jcwaterstream3_2410_instances, &jcwaterstream6_2411_instances, &jcwaterstream5_2412_instances, &jcwaterstream2_2413_instances, &jcwaterstream1_2416_instances, NULL};
    qualifier_26.set(6, &qualifier_26_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, NULL};
    qualifier_8.set(9, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, NULL};
    qualifier_9.set(32, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemybullfrag_2417_instances, &enemybuoybuoy_2418_instances, &enemymeteorroller_2421_instances, &enemysharktorpedo_2423_instances, &enemybubblorbiter_2443_instances, NULL};
    qualifier_20.set(5, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(6, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &enemybullfragmask_2419_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &levelicebarrier_2456_instances, NULL};
    qualifier_7.set(28, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2318(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_2319(0, 96), 0);
    add_background_object(create_levelparallaxpiece1_2(0, 208), 0);
    add_background_object(create_levelparallaxpiece5_2320(0, 104), 0);
    add_background_object(create_levelparallaxpiece7_2499(0, 200), 0);
    add_background_object(create_jcoceanbottom_2500(0, 1872), 0);
    add_background_object(create_levelparallaxpiece6_2322(0, 1600), 0);
    add_object(create_levelparalaxwatersurface_7(0, 445), 0);
    add_background_object(create_jcrockpillar1_2344(496, 928), 2);
    add_background_object(create_jcrockpillar2_2357(496, 624), 2);
    add_background_object(create_jcrockpillar1_2344(496, 1552), 2);
    add_background_object(create_jcrockpillar2_2357(496, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(496, 2176), 2);
    add_background_object(create_jcrockpillar2_2357(496, 1872), 2);
    add_background_object(create_jcrockpillar1_2344(496, 304), 2);
    add_background_object(create_jcrockpillar2_2357(496, 0), 2);
    add_background_object(create_jcrockpillar1_2344(992, 776), 2);
    add_background_object(create_jcrockpillar2_2357(992, 472), 2);
    add_background_object(create_jcrockpillar1_2344(992, 1400), 2);
    add_background_object(create_jcrockpillar2_2357(992, 1096), 2);
    add_background_object(create_jcrockpillar1_2344(992, 2024), 2);
    add_background_object(create_jcrockpillar2_2357(992, 1720), 2);
    add_background_object(create_jcrockpillar1_2344(992, 152), 2);
    add_background_object(create_jcrockpillar2_2357(992, -152), 2);
    add_background_object(create_jcrockpillar1_2344(1776, 928), 2);
    add_background_object(create_jcrockpillar2_2357(1776, 624), 2);
    add_background_object(create_jcrockpillar1_2344(1776, 1552), 2);
    add_background_object(create_jcrockpillar2_2357(1776, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(1776, 2176), 2);
    add_background_object(create_jcrockpillar2_2357(1776, 1872), 2);
    add_background_object(create_jcrockpillar1_2344(1776, 304), 2);
    add_background_object(create_jcrockpillar2_2357(1776, 0), 2);
    add_background_object(create_jcrockpillar1_2344(2272, 776), 2);
    add_background_object(create_jcrockpillar2_2357(2272, 472), 2);
    add_background_object(create_jcrockpillar1_2344(2272, 1400), 2);
    add_background_object(create_jcrockpillar2_2357(2272, 1096), 2);
    add_background_object(create_jcrockpillar1_2344(2272, 2024), 2);
    add_background_object(create_jcrockpillar2_2357(2272, 1720), 2);
    add_background_object(create_jcrockpillar1_2344(2272, 152), 2);
    add_background_object(create_jcrockpillar2_2357(2272, -152), 2);
    add_background_object(create_jcrockpillar1_2344(3056, 928), 2);
    add_background_object(create_jcrockpillar2_2357(3056, 624), 2);
    add_background_object(create_jcrockpillar1_2344(3056, 1552), 2);
    add_background_object(create_jcrockpillar2_2357(3056, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(3056, 2176), 2);
    add_background_object(create_jcrockpillar2_2357(3056, 1872), 2);
    add_background_object(create_jcrockpillar1_2344(3056, 304), 2);
    add_background_object(create_jcrockpillar2_2357(3056, 0), 2);
    add_background_object(create_jcrockpillar1_2344(3552, 776), 2);
    add_background_object(create_jcrockpillar2_2357(3552, 472), 2);
    add_background_object(create_jcrockpillar1_2344(3552, 1400), 2);
    add_background_object(create_jcrockpillar2_2357(3552, 1096), 2);
    add_background_object(create_jcrockpillar1_2344(3552, 2024), 2);
    add_background_object(create_jcrockpillar2_2357(3552, 1720), 2);
    add_background_object(create_jcrockpillar1_2344(3552, 152), 2);
    add_background_object(create_jcrockpillar2_2357(3552, -152), 2);
    add_background_object(create_jcrockpillar1_2344(4336, 928), 2);
    add_background_object(create_jcrockpillar2_2357(4336, 624), 2);
    add_background_object(create_jcrockpillar1_2344(4336, 1552), 2);
    add_background_object(create_jcrockpillar2_2357(4336, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(4336, 2176), 2);
    add_background_object(create_jcrockpillar2_2357(4336, 1872), 2);
    add_background_object(create_jcrockpillar1_2344(4336, 304), 2);
    add_background_object(create_jcrockpillar2_2357(4336, 0), 2);
    add_background_object(create_jcrockpillar1_2344(4832, 776), 2);
    add_background_object(create_jcrockpillar2_2357(4832, 472), 2);
    add_background_object(create_jcrockpillar1_2344(4832, 1400), 2);
    add_background_object(create_jcrockpillar2_2357(4832, 1096), 2);
    add_background_object(create_jcrockpillar1_2344(4832, 2024), 2);
    add_background_object(create_jcrockpillar2_2357(4832, 1720), 2);
    add_background_object(create_jcrockpillar1_2344(4832, 152), 2);
    add_background_object(create_jcrockpillar2_2357(4832, -152), 2);
    add_background_object(create_jcrockpillar1_2344(5616, 928), 2);
    add_background_object(create_jcrockpillar2_2357(5616, 624), 2);
    add_background_object(create_jcrockpillar1_2344(5616, 1552), 2);
    add_background_object(create_jcrockpillar2_2357(5616, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(5616, 2176), 2);
    add_background_object(create_jcrockpillar2_2357(5616, 1872), 2);
    add_background_object(create_jcrockpillar1_2344(5616, 304), 2);
    add_background_object(create_jcrockpillar2_2357(5616, 0), 2);
    add_background_object(create_jcrockpillar1_2344(6112, 776), 2);
    add_background_object(create_jcrockpillar2_2357(6112, 472), 2);
    add_background_object(create_jcrockpillar1_2344(6112, 1400), 2);
    add_background_object(create_jcrockpillar2_2357(6112, 1096), 2);
    add_background_object(create_jcrockpillar1_2344(6112, 2024), 2);
    add_background_object(create_jcrockpillar2_2357(6112, 1720), 2);
    add_background_object(create_jcrockpillar1_2344(6112, 152), 2);
    add_background_object(create_jcrockpillar2_2357(6112, -152), 2);
    add_background_object(create_jcrockpillar1_2344(6896, 928), 2);
    add_background_object(create_jcrockpillar2_2357(6896, 624), 2);
    add_background_object(create_jcrockpillar1_2344(6896, 1552), 2);
    add_background_object(create_jcrockpillar2_2357(6896, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(6896, 2176), 2);
    add_background_object(create_jcrockpillar2_2357(6896, 1872), 2);
    add_background_object(create_jcrockpillar1_2344(6896, 304), 2);
    add_background_object(create_jcrockpillar2_2357(6896, 0), 2);
    add_background_object(create_jcrockpillar1_2344(7392, 776), 2);
    add_background_object(create_jcrockpillar2_2357(7392, 472), 2);
    add_background_object(create_jcrockpillar1_2344(7392, 1400), 2);
    add_background_object(create_jcrockpillar2_2357(7392, 1096), 2);
    add_background_object(create_jcrockpillar1_2344(7392, 2024), 2);
    add_background_object(create_jcrockpillar2_2357(7392, 1720), 2);
    add_background_object(create_jcrockpillar1_2344(7392, 152), 2);
    add_background_object(create_jcrockpillar2_2357(7392, -152), 2);
    add_background_object(create_jcrockpillar1_2344(8176, 928), 2);
    add_background_object(create_jcrockpillar2_2357(8176, 624), 2);
    add_background_object(create_jcrockpillar1_2344(8176, 1552), 2);
    add_background_object(create_jcrockpillar2_2357(8176, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(8176, 2176), 2);
    add_background_object(create_jcrockpillar2_2357(8176, 1872), 2);
    add_background_object(create_jcrockpillar1_2344(8176, 304), 2);
    add_background_object(create_jcrockpillar2_2357(8176, 0), 2);
    add_background_object(create_jcrockpillar1_2344(8672, 776), 2);
    add_background_object(create_jcrockpillar2_2357(8672, 472), 2);
    add_background_object(create_jcrockpillar1_2344(8672, 1400), 2);
    add_background_object(create_jcrockpillar2_2357(8672, 1096), 2);
    add_background_object(create_jcrockpillar1_2344(8672, 2024), 2);
    add_background_object(create_jcrockpillar2_2357(8672, 1720), 2);
    add_background_object(create_jcrockpillar1_2344(8672, 152), 2);
    add_background_object(create_jcrockpillar2_2357(8672, -152), 2);
    add_background_object(create_jcrockpillar1_2344(9456, 928), 2);
    add_background_object(create_jcrockpillar2_2357(9456, 624), 2);
    add_background_object(create_jcrockpillar1_2344(9456, 1552), 2);
    add_background_object(create_jcrockpillar2_2357(9456, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(9456, 2176), 2);
    add_background_object(create_jcrockpillar2_2357(9456, 1872), 2);
    add_background_object(create_jcrockpillar1_2344(9456, 304), 2);
    add_background_object(create_jcrockpillar2_2357(9456, 0), 2);
    add_background_object(create_jcrockpillar1_2344(9952, 776), 2);
    add_background_object(create_jcrockpillar2_2357(9952, 472), 2);
    add_background_object(create_jcrockpillar1_2344(9952, 1400), 2);
    add_background_object(create_jcrockpillar2_2357(9952, 1096), 2);
    add_background_object(create_jcrockpillar1_2344(9952, 2024), 2);
    add_background_object(create_jcrockpillar2_2357(9952, 1720), 2);
    add_background_object(create_jcrockpillar1_2344(9952, 152), 2);
    add_background_object(create_jcrockpillar2_2357(9952, -152), 2);
    add_background_object(create_jcrockpillar1_2344(10736, 928), 2);
    add_background_object(create_jcrockpillar2_2357(10736, 624), 2);
    add_background_object(create_jcrockpillar1_2344(10736, 1552), 2);
    add_background_object(create_jcrockpillar2_2357(10736, 1248), 2);
    add_background_object(create_jcrockpillar1_2344(10736, 2176), 2);
    add_background_object(create_jcrockpillar2_2357(10736, 1872), 2);
    add_background_object(create_jcrockpillar1_2344(10736, 304), 2);
    add_background_object(create_jcrockpillar2_2357(10736, 0), 2);
    add_background_object(create_jcrockpillar1_2344(11232, 776), 2);
    add_background_object(create_jcrockpillar2_2357(11232, 472), 2);
    add_background_object(create_jcrockpillar1_2344(11232, 1400), 2);
    add_background_object(create_jcrockpillar2_2357(11232, 1096), 2);
    add_background_object(create_jcrockpillar1_2344(11232, 2024), 2);
    add_background_object(create_jcrockpillar2_2357(11232, 1720), 2);
    add_background_object(create_jcrockpillar1_2344(11232, 152), 2);
    add_background_object(create_jcrockpillar2_2357(11232, -152), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_link_352(96, -184), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_jcsub7_2468(9904, 1592), 3);
    add_background_object(create_jcsub10_2469(9904, 1976), 3);
    add_background_object(create_jcsub10_2469(9904, 1912), 3);
    add_background_object(create_jcsub10_2469(9904, 1848), 3);
    add_background_object(create_jcsub10_2469(9904, 1784), 3);
    add_background_object(create_jcsub10_2469(9904, 1720), 3);
    add_background_object(create_jcsub10_2469(9904, 1656), 3);
    add_background_object(create_jcsub10_2469(9904, 2040), 3);
    add_background_object(create_jcsub12_2478(9904, 2104), 3);
    add_background_object(create_jcsub18_2470(9232, 1912), 3);
    add_background_object(create_jcsub18_2470(9232, 1976), 3);
    add_background_object(create_jcsub18_2470(9232, 1784), 3);
    add_background_object(create_jcsub18_2470(9232, 1848), 3);
    add_background_object(create_jcsub10_2469(9264, 1912), 3);
    add_background_object(create_jcsub10_2469(9264, 1848), 3);
    add_background_object(create_jcsub10_2469(9264, 1784), 3);
    add_background_object(create_jcsub10_2469(9264, 1976), 3);
    add_background_object(create_jcsub12_2478(9264, 2104), 3);
    add_background_object(create_jcsub10_2469(9264, 2040), 3);
    add_background_object(create_jcsubtanker5_2466(8512, 1912), 3);
    add_background_object(create_jcsubtanker6_2467(8576, 1912), 3);
    add_background_object(create_jcsubtanker5_2466(8512, 1848), 3);
    add_background_object(create_jcsubtanker6_2467(8576, 1848), 3);
    add_background_object(create_jcsub10_2469(6832, 2040), 3);
    add_background_object(create_jcsubtanker5_2466(7072, 1816), 3);
    add_background_object(create_jcsubtanker6_2467(7120, 1816), 3);
    add_background_object(create_jcsubtanker5_2466(6856, 1784), 3);
    add_background_object(create_jcsubtanker5_2466(6856, 1848), 3);
    add_background_object(create_jcsubtanker5_2466(6856, 1912), 3);
    add_background_object(create_jcsubtanker6_2467(6920, 1784), 3);
    add_background_object(create_jcsubtanker6_2467(6920, 1848), 3);
    add_background_object(create_jcsubtanker6_2467(6920, 1912), 3);
    add_background_object(create_jcsub17_2475(6800, 2040), 3);
    add_background_object(create_jcsub12_2478(6832, 2104), 3);
    add_background_object(create_jcsub7_2468(6832, 1976), 3);
    add_background_object(create_jcsub7_2468(7472, 1592), 3);
    add_background_object(create_jcsub10_2469(7472, 1656), 3);
    add_background_object(create_jcsub9_2479(7568, 1656), 3);
    add_background_object(create_jcsub10_2469(7472, 1720), 3);
    add_background_object(create_jcsub12_2478(7472, 1784), 3);
    add_background_object(create_jcsub12_2478(6832, 1720), 3);
    add_background_object(create_jcsub10_2469(6832, 1528), 3);
    add_background_object(create_jcsub10_2469(6832, 1592), 3);
    add_background_object(create_jcsub10_2469(6832, 1656), 3);
    add_background_object(create_jcsub7_2468(6832, 1464), 3);
    add_background_object(create_jcsub12_2478(6320, 1720), 3);
    add_background_object(create_jcsub10_2469(6320, 1528), 3);
    add_background_object(create_jcsub10_2469(6320, 1592), 3);
    add_background_object(create_jcsub10_2469(6320, 1656), 3);
    add_background_object(create_jcsub7_2468(6320, 1464), 3);
    add_background_object(create_jcsub12_2478(5808, 1720), 3);
    add_background_object(create_jcsub10_2469(5808, 1528), 3);
    add_background_object(create_jcsub10_2469(5808, 1592), 3);
    add_background_object(create_jcsub10_2469(5808, 1656), 3);
    add_background_object(create_jcsub7_2468(5808, 1464), 3);
    add_background_object(create_jcsub18_2470(5392, 1720), 3);
    add_background_object(create_jcsub10_2469(5424, 1528), 3);
    add_background_object(create_jcsub10_2469(5424, 1592), 3);
    add_background_object(create_jcsub10_2469(5424, 1656), 3);
    add_background_object(create_jcsub10_2469(5424, 1720), 3);
    add_background_object(create_jcsub10_2469(5424, 1464), 3);
    add_background_object(create_jcsub18_2470(5392, 1464), 3);
    add_background_object(create_jcsub12_2478(5296, 1720), 3);
    add_background_object(create_jcsub10_2469(5296, 1528), 3);
    add_background_object(create_jcsub10_2469(5296, 1592), 3);
    add_background_object(create_jcsub10_2469(5296, 1656), 3);
    add_background_object(create_jcsub7_2468(5296, 1464), 3);
    add_background_object(create_jcsub8_2482(5392, 1464), 3);
    add_background_object(create_jcsubtanker6_2467(2504, 1816), 3);
    add_background_object(create_jcsubtanker6_2467(2504, 1880), 3);
    add_background_object(create_jcsubtanker5_2466(2448, 1752), 3);
    add_background_object(create_jcsubtanker6_2467(2496, 1752), 3);
    add_background_object(create_jcsub10_2469(4912, 1720), 3);
    add_background_object(create_jcsub10_2469(4912, 1656), 3);
    add_background_object(create_jcsub10_2469(4912, 1528), 3);
    add_background_object(create_jcsub10_2469(4912, 1592), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 2232), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 2232), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 2168), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 2168), 3);
    add_background_object(create_jcsub1_2476(4376, 1656), 3);
    add_background_object(create_jcsub2_2477(4376, 1720), 3);
    add_background_object(create_jcsub12_2478(4152, 2104), 3);
    add_background_object(create_jcsub10_2469(4152, 2040), 3);
    add_background_object(create_jcsubfin1_2480(1680, 1696), 3);
    add_background_object(create_jcsub11_2483(2720, 2104), 3);
    add_background_object(create_jcsub11_2483(2720, 2168), 3);
    add_background_object(create_jcsub11_2483(2720, 2240), 3);
    add_background_object(create_jcsub11_2483(2720, 2040), 3);
    add_background_object(create_jcsubfin2_2502(2520, 1832), 3);
    add_background_object(create_jcsubfin3_2503(2776, 2040), 3);
    add_background_object(create_jcsubfin4_2504(-160, 2064), 3);
    add_background_object(create_jcsubtanker5_2466(1872, 1656), 3);
    add_background_object(create_jcsubtanker6_2467(1936, 1656), 3);
    add_background_object(create_jcsubtanker5_2466(2184, 1720), 3);
    add_background_object(create_jcsubtanker6_2467(2248, 1720), 3);
    add_background_object(create_jcsubsupportback_2471(1536, 1760), 3);
    add_background_object(create_jcsubsupportback_2471(1536, 1696), 3);
    add_background_object(create_jcsubsupportback_2471(1424, 1760), 3);
    add_background_object(create_jcsubsupportback_2471(1424, 1696), 3);
    add_background_object(create_jcsubsupportback_2471(1064, 1552), 3);
    add_background_object(create_jcsubsupportback_2471(1176, 1552), 3);
    add_background_object(create_seedspawnerstalk_2407(10944, -136), 3);
    add_background_object(create_jcsub12_2478(2488, 1976), 3);
    add_background_object(create_jcsub7_2468(2488, 1912), 3);
    add_background_object(create_jcsub1_2476(-304, 2192), 3);
    add_background_object(create_jcsub10_2469(-400, 2200), 3);
    add_background_object(create_jcsub11_2483(-176, 2168), 3);
    add_background_object(create_jcsub12_2478(-336, 2352), 3);
    add_background_object(create_jcsub13_2494(-160, 2232), 3);
    add_background_object(create_jcsub14_2492(-496, 2296), 3);
    add_background_object(create_jcsub15_2493(-536, 2280), 3);
    add_background_object(create_jcsub16_2485(-496, 2328), 3);
    add_background_object(create_jcsub17_2475(-456, 2320), 3);
    add_background_object(create_jcsub18_2470(-472, 2304), 3);
    add_background_object(create_jcsub19_2505(-344, 2320), 3);
    add_background_object(create_jcsub2_2477(-288, 2304), 3);
    add_background_object(create_jcsub20_2487(-472, 2312), 3);
    add_background_object(create_jcsub7_2468(-232, 2360), 3);
    add_background_object(create_jcsub8_2482(-208, 2248), 3);
    add_background_object(create_jcsub9_2479(-368, 2248), 3);
    add_background_object(create_jcsubfin1_2480(-496, 2320), 3);
    add_background_object(create_jcsubfin2_2481(-576, 2368), 3);
    add_background_object(create_jcsubfin3_2472(-592, 2320), 3);
    add_background_object(create_jcsubfin4_2473(-488, 2328), 3);
    add_background_object(create_jcsubfin5_2474(-504, 2328), 3);
    add_background_object(create_jcsubsupportback_2471(-504, 2368), 3);
    add_background_object(create_jcsubsupportfront_2497(-456, 2344), 3);
    add_background_object(create_jcsubtanker5_2466(-480, 2336), 3);
    add_background_object(create_jcsubtanker6_2467(-488, 2344), 3);
    add_background_object(create_jcsubtanker1_2484(-488, 2344), 3);
    add_background_object(create_jcsubtanker2_2486(-472, 2360), 3);
    add_background_object(create_jcsubtanker3_2490(-464, 2352), 3);
    add_background_object(create_jcsubtanker4_2488(-480, 2376), 3);
    add_background_object(create_jcsubtanker5_2489(-432, 2360), 3);
    add_background_object(create_jcsub10_2469(840, 1784), 3);
    add_background_object(create_jcsub10_2469(840, 1848), 3);
    add_background_object(create_jcsub12_2478(840, 1912), 3);
    add_background_object(create_jcsub10_2469(840, 1720), 3);
    add_background_object(create_jcsub10_2469(840, 1656), 3);
    add_background_object(create_jcsub7_2468(840, 1592), 3);
    add_background_object(create_jcsub1_2476(64, 1592), 3);
    add_background_object(create_jcsub2_2477(64, 1848), 3);
    add_background_object(create_jcsub9_2479(64, 1656), 3);
    add_background_object(create_jcsub1_2476(192, 1592), 3);
    add_background_object(create_jcsub9_2479(192, 1656), 3);
    add_background_object(create_jcsub9_2479(64, 1720), 3);
    add_background_object(create_jcsub9_2479(192, 1720), 3);
    add_background_object(create_jcsub9_2479(64, 1784), 3);
    add_background_object(create_jcsub9_2479(192, 1784), 3);
    add_background_object(create_jcsub2_2477(192, 1848), 3);
    add_background_object(create_jcsub1_2476(320, 1592), 3);
    add_background_object(create_jcsub9_2479(320, 1656), 3);
    add_background_object(create_jcsub1_2476(448, 1592), 3);
    add_background_object(create_jcsub9_2479(448, 1656), 3);
    add_background_object(create_jcsub9_2479(320, 1720), 3);
    add_background_object(create_jcsub9_2479(448, 1720), 3);
    add_background_object(create_jcsub9_2479(320, 1784), 3);
    add_background_object(create_jcsub9_2479(448, 1784), 3);
    add_background_object(create_jcsub2_2477(320, 1848), 3);
    add_background_object(create_jcsub2_2477(448, 1848), 3);
    add_background_object(create_jcsub1_2476(-64, 1592), 3);
    add_background_object(create_jcsub2_2477(-64, 1848), 3);
    add_background_object(create_jcsub9_2479(-64, 1656), 3);
    add_background_object(create_jcsub9_2479(-64, 1720), 3);
    add_background_object(create_jcsub9_2479(-64, 1784), 3);
    add_background_object(create_jcsub2_2477(688, 1784), 3);
    add_background_object(create_jcsub13_2494(816, 1784), 3);
    add_background_object(create_jcsub9_2479(688, 1720), 3);
    add_background_object(create_jcsub11_2483(816, 1720), 3);
    add_background_object(create_jcsub9_2479(688, 1656), 3);
    add_background_object(create_jcsub11_2483(816, 1656), 3);
    add_background_object(create_jcsub9_2479(688, 1592), 3);
    add_background_object(create_jcsub11_2483(816, 1592), 3);
    add_background_object(create_jcsub10_2469(592, 1592), 3);
    add_background_object(create_jcsub10_2469(592, 1656), 3);
    add_background_object(create_jcsub10_2469(592, 1720), 3);
    add_background_object(create_jcsub12_2478(592, 1784), 3);
    add_background_object(create_jcsub11_2483(576, 1656), 3);
    add_background_object(create_jcsub11_2483(576, 1720), 3);
    add_background_object(create_jcsub11_2483(576, 1784), 3);
    add_background_object(create_jcsub8_2482(576, 1592), 3);
    add_background_object(create_jcsub13_2494(576, 1848), 3);
    add_background_object(create_jcsub9_2479(688, 1528), 3);
    add_background_object(create_jcsub11_2483(816, 1528), 3);
    add_background_object(create_jcsub10_2469(592, 1528), 3);
    add_background_object(create_jcsub9_2479(688, 1464), 3);
    add_background_object(create_jcsub11_2483(816, 1464), 3);
    add_background_object(create_jcsub10_2469(592, 1464), 3);
    add_background_object(create_jcsub18_2470(560, 1464), 3);
    add_background_object(create_jcsub18_2470(560, 1528), 3);
    add_background_object(create_jcsub17_2475(560, 1400), 3);
    add_background_object(create_jcsub7_2468(592, 1400), 3);
    add_background_object(create_jcsub1_2476(688, 1400), 3);
    add_background_object(create_jcsub8_2482(816, 1400), 3);
    add_background_object(create_jcsubtanker1_2484(640, 1560), 3);
    add_background_object(create_jcsubtanker2_2486(704, 1560), 3);
    add_background_object(create_jcsub16_2485(640, 1576), 3);
    add_background_object(create_jcsub16_2485(704, 1576), 3);
    add_background_object(create_jcsub14_2492(640, 1536), 3);
    add_background_object(create_jcsub15_2493(704, 1536), 3);
    add_background_object(create_jcsubtanker4_2488(592, 1336), 3);
    add_background_object(create_jcsubtanker5_2489(656, 1336), 3);
    add_background_object(create_jcsubtanker4_2488(592, 1272), 3);
    add_background_object(create_jcsubtanker5_2489(656, 1272), 3);
    add_background_object(create_jcsubtanker2_2486(720, 1256), 3);
    add_background_object(create_jcsubtanker3_2490(592, 1256), 3);
    add_background_object(create_jcsubtanker3_2490(528, 1256), 3);
    add_background_object(create_jcsubtanker3_2490(464, 1256), 3);
    add_background_object(create_jcsubtanker1_2484(400, 1256), 3);
    add_background_object(create_jcsubtanker2_2486(248, 1256), 3);
    add_background_object(create_jcsubtanker3_2490(184, 1256), 3);
    add_background_object(create_jcsubtanker1_2484(120, 1256), 3);
    add_background_object(create_jcsubtanker5_2466(416, 1272), 3);
    add_background_object(create_jcsubtanker6_2467(480, 1272), 3);
    add_background_object(create_jcsubtanker5_2466(416, 1336), 3);
    add_background_object(create_jcsubtanker6_2467(480, 1336), 3);
    add_background_object(create_jcsubtanker5_2466(416, 1400), 3);
    add_background_object(create_jcsubtanker6_2467(480, 1400), 3);
    add_background_object(create_jcsubtanker5_2466(416, 1464), 3);
    add_background_object(create_jcsubtanker6_2467(480, 1464), 3);
    add_background_object(create_jcsubtanker5_2466(416, 1528), 3);
    add_background_object(create_jcsubtanker6_2467(480, 1528), 3);
    add_background_object(create_jcsubtanker5_2466(152, 1272), 3);
    add_background_object(create_jcsubtanker6_2467(216, 1272), 3);
    add_background_object(create_jcsubtanker5_2466(152, 1336), 3);
    add_background_object(create_jcsubtanker6_2467(216, 1336), 3);
    add_background_object(create_jcsubtanker5_2466(152, 1400), 3);
    add_background_object(create_jcsubtanker6_2467(216, 1400), 3);
    add_background_object(create_jcsubtanker5_2466(152, 1464), 3);
    add_background_object(create_jcsubtanker6_2467(216, 1464), 3);
    add_background_object(create_jcsubtanker5_2466(152, 1528), 3);
    add_background_object(create_jcsubtanker6_2467(216, 1528), 3);
    add_background_object(create_jcladder_2491(360, 1256), 3);
    add_background_object(create_jcladder_2491(360, 1288), 3);
    add_background_object(create_jcladder_2491(360, 1320), 3);
    add_background_object(create_jcladder_2491(360, 1352), 3);
    add_background_object(create_jcladder_2491(360, 1384), 3);
    add_background_object(create_jcladder_2491(360, 1416), 3);
    add_background_object(create_jcsubtanker3_2490(656, 1256), 3);
    add_background_object(create_jcsubtanker6_2467(720, 1272), 3);
    add_background_object(create_jcsubtanker6_2467(720, 1336), 3);
    add_background_object(create_jcsub20_2487(808, 1912), 3);
    add_background_object(create_jcsub18_2470(808, 1848), 3);
    add_background_object(create_jcsub9_2479(936, 1784), 3);
    add_background_object(create_jcsub9_2479(936, 1720), 3);
    add_background_object(create_jcsub9_2479(936, 1656), 3);
    add_background_object(create_jcsub1_2476(936, 1592), 3);
    add_background_object(create_jcsub9_2479(936, 1848), 3);
    add_background_object(create_jcsub2_2477(936, 1912), 3);
    add_background_object(create_jcsubfin2_2502(872, 1496), 3);
    add_background_object(create_jcsub9_2479(1064, 1784), 3);
    add_background_object(create_jcsub9_2479(1064, 1720), 3);
    add_background_object(create_jcsub9_2479(1064, 1656), 3);
    add_background_object(create_jcsub1_2476(1064, 1592), 3);
    add_background_object(create_jcsub9_2479(1064, 1848), 3);
    add_background_object(create_jcsub2_2477(1064, 1912), 3);
    add_background_object(create_jcsub10_2469(1216, 1912), 3);
    add_background_object(create_jcsub12_2478(1216, 1976), 3);
    add_background_object(create_jcsub10_2469(1216, 1848), 3);
    add_background_object(create_jcsub7_2468(1216, 1784), 3);
    add_background_object(create_jcsub13_2494(1192, 1912), 3);
    add_background_object(create_jcsub11_2483(1192, 1848), 3);
    add_background_object(create_jcsub11_2483(1192, 1784), 3);
    add_background_object(create_jcsub11_2483(1192, 1720), 3);
    add_background_object(create_jcsub11_2483(1192, 1656), 3);
    add_background_object(create_jcsub8_2482(1192, 1592), 3);
    add_background_object(create_jcsub20_2487(1184, 1976), 3);
    add_background_object(create_jcsub9_2479(1312, 1912), 3);
    add_background_object(create_jcsub9_2479(1312, 1848), 3);
    add_background_object(create_jcsub1_2476(1312, 1784), 3);
    add_background_object(create_jcsub2_2477(1312, 1976), 3);
    add_background_object(create_jcsubfin2_2502(1248, 1688), 3);
    add_background_object(create_jcsub9_2479(1440, 1912), 3);
    add_background_object(create_jcsub9_2479(1440, 1848), 3);
    add_background_object(create_jcsub1_2476(1440, 1784), 3);
    add_background_object(create_jcsub2_2477(1440, 1976), 3);
    add_background_object(create_jcsub17_2475(1008, 1280), 3);
    add_background_object(create_jcsub7_2468(1040, 1280), 3);
    add_background_object(create_jcsub1_2476(1136, 1280), 3);
    add_background_object(create_jcsub8_2482(1264, 1280), 3);
    add_background_object(create_jcsub9_2479(1136, 1344), 3);
    add_background_object(create_jcsub11_2483(1264, 1344), 3);
    add_background_object(create_jcsub10_2469(1040, 1344), 3);
    add_background_object(create_jcsub18_2470(1008, 1344), 3);
    add_background_object(create_jcsub12_2478(1040, 1408), 3);
    add_background_object(create_jcsub20_2487(1008, 1408), 3);
    add_background_object(create_jcsub2_2477(1136, 1408), 3);
    add_background_object(create_jcsub13_2494(1264, 1408), 3);
    add_background_object(create_jcsub17_2475(1368, 1488), 3);
    add_background_object(create_jcsub7_2468(1400, 1488), 3);
    add_background_object(create_jcsub1_2476(1496, 1488), 3);
    add_background_object(create_jcsub8_2482(1624, 1488), 3);
    add_background_object(create_jcsub9_2479(1496, 1552), 3);
    add_background_object(create_jcsub11_2483(1624, 1552), 3);
    add_background_object(create_jcsub10_2469(1400, 1552), 3);
    add_background_object(create_jcsub18_2470(1368, 1552), 3);
    add_background_object(create_jcsub12_2478(1400, 1616), 3);
    add_background_object(create_jcsub20_2487(1368, 1616), 3);
    add_background_object(create_jcsub2_2477(1496, 1616), 3);
    add_background_object(create_jcsub13_2494(1624, 1616), 3);
    add_background_object(create_jcsub9_2479(1568, 1912), 3);
    add_background_object(create_jcsub9_2479(1568, 1848), 3);
    add_background_object(create_jcsub1_2476(1568, 1784), 3);
    add_background_object(create_jcsub2_2477(1568, 1976), 3);
    add_background_object(create_jcsub9_2479(1696, 1912), 3);
    add_background_object(create_jcsub9_2479(1696, 1848), 3);
    add_background_object(create_jcsub1_2476(1696, 1784), 3);
    add_background_object(create_jcsub2_2477(1696, 1976), 3);
    add_background_object(create_jcsub9_2479(1824, 1912), 3);
    add_background_object(create_jcsub9_2479(1824, 1848), 3);
    add_background_object(create_jcsub1_2476(1824, 1784), 3);
    add_background_object(create_jcsub2_2477(1824, 1976), 3);
    add_background_object(create_jcsubfin2_2481(1776, 1688), 3);
    add_background_object(create_jcsubfin3_2472(1872, 1688), 3);
    add_background_object(create_jcsubfin4_2473(2000, 1696), 3);
    add_background_object(create_jcsubfin5_2474(2128, 1752), 3);
    add_background_object(create_jcsub9_2479(1952, 1912), 3);
    add_background_object(create_jcsub9_2479(1952, 1848), 3);
    add_background_object(create_jcsub1_2476(1952, 1784), 3);
    add_background_object(create_jcsub2_2477(1952, 1976), 3);
    add_background_object(create_jcsub9_2479(2080, 1912), 3);
    add_background_object(create_jcsub9_2479(2080, 1848), 3);
    add_background_object(create_jcsub1_2476(2080, 1784), 3);
    add_background_object(create_jcsub2_2477(2080, 1976), 3);
    add_background_object(create_jcsub9_2479(2208, 1912), 3);
    add_background_object(create_jcsub9_2479(2208, 1848), 3);
    add_background_object(create_jcsub1_2476(2208, 1784), 3);
    add_background_object(create_jcsub2_2477(2208, 1976), 3);
    add_background_object(create_jcsub9_2479(2336, 1912), 3);
    add_background_object(create_jcsub9_2479(2336, 1848), 3);
    add_background_object(create_jcsub1_2476(2336, 1784), 3);
    add_background_object(create_jcsub2_2477(2336, 1976), 3);
    add_background_object(create_jcsubsupportback_2471(1064, 1488), 3);
    add_background_object(create_jcsubsupportback_2471(1176, 1488), 3);
    add_background_object(create_jcsub16_2485(1080, 1760), 3);
    add_background_object(create_jcsub16_2485(1144, 1760), 3);
    add_background_object(create_jcsub16_2485(1184, 1888), 3);
    add_background_object(create_jcsub16_2485(1248, 1888), 3);
    add_background_object(create_jcsub16_2485(1464, 1904), 3);
    add_background_object(create_jcsub16_2485(1528, 1904), 3);
    add_background_object(create_jcsub16_2485(1592, 1904), 3);
    add_background_object(create_jcsubtanker1_2484(1840, 1576), 3);
    add_background_object(create_jcsubtanker3_2490(1904, 1576), 3);
    add_background_object(create_jcsubtanker2_2486(1968, 1576), 3);
    add_background_object(create_jcsubtanker5_2466(1872, 1512), 3);
    add_background_object(create_jcsubtanker6_2467(1936, 1512), 3);
    add_background_object(create_jcsubtanker5_2466(1872, 1448), 3);
    add_background_object(create_jcsubtanker6_2467(1936, 1448), 3);
    add_background_object(create_jcsubtanker1_2484(1840, 1432), 3);
    add_background_object(create_jcsubtanker3_2490(1904, 1432), 3);
    add_background_object(create_jcsubtanker2_2486(1968, 1432), 3);
    add_background_object(create_jcsubtanker5_2466(1872, 1368), 3);
    add_background_object(create_jcsubtanker6_2467(1936, 1368), 3);
    add_background_object(create_jcsubtanker5_2466(1872, 1304), 3);
    add_background_object(create_jcsubtanker6_2467(1936, 1304), 3);
    add_background_object(create_jcsubtanker1_2484(1840, 1288), 3);
    add_background_object(create_jcsubtanker3_2490(1904, 1288), 3);
    add_background_object(create_jcsubtanker2_2486(1968, 1288), 3);
    add_background_object(create_jcsubtanker5_2466(1872, 1224), 3);
    add_background_object(create_jcsubtanker6_2467(1936, 1224), 3);
    add_background_object(create_jcsubtanker5_2466(1872, 1160), 3);
    add_background_object(create_jcsubtanker6_2467(1936, 1160), 3);
    add_background_object(create_jcsubtanker1_2484(1840, 1144), 3);
    add_background_object(create_jcsubtanker3_2490(1904, 1144), 3);
    add_background_object(create_jcsubtanker2_2486(1968, 1144), 3);
    add_background_object(create_jcsubtanker1_2484(2152, 1576), 3);
    add_background_object(create_jcsubtanker3_2490(2216, 1576), 3);
    add_background_object(create_jcsubtanker2_2486(2280, 1576), 3);
    add_background_object(create_jcsubtanker5_2466(2184, 1512), 3);
    add_background_object(create_jcsubtanker6_2467(2248, 1512), 3);
    add_background_object(create_jcsubtanker5_2466(2184, 1448), 3);
    add_background_object(create_jcsubtanker6_2467(2248, 1448), 3);
    add_background_object(create_jcsubtanker1_2484(2152, 1432), 3);
    add_background_object(create_jcsubtanker3_2490(2216, 1432), 3);
    add_background_object(create_jcsubtanker2_2486(2280, 1432), 3);
    add_background_object(create_jcsubtanker1_2484(2184, 1144), 3);
    add_background_object(create_jcsubtanker2_2486(2248, 1144), 3);
    add_background_object(create_jcsubtanker4_2488(2184, 1224), 3);
    add_background_object(create_jcsubtanker5_2489(2248, 1224), 3);
    add_background_object(create_jcsubtanker4_2488(2184, 1160), 3);
    add_background_object(create_jcsubtanker5_2489(2248, 1160), 3);
    add_background_object(create_jcsubtanker1_2484(2184, 1000), 3);
    add_background_object(create_jcsubtanker2_2486(2248, 1000), 3);
    add_background_object(create_jcsubtanker4_2488(2184, 1080), 3);
    add_background_object(create_jcsubtanker5_2489(2248, 1080), 3);
    add_background_object(create_jcsubtanker4_2488(2184, 1016), 3);
    add_background_object(create_jcsubtanker5_2489(2248, 1016), 3);
    add_background_object(create_jcsubtanker1_2484(2184, 888), 3);
    add_background_object(create_jcsubtanker2_2486(2248, 888), 3);
    add_background_object(create_jcsubtanker1_2484(2152, 984), 3);
    add_background_object(create_jcsubtanker2_2486(2280, 984), 3);
    add_background_object(create_jcsubtanker3_2490(2216, 984), 3);
    add_background_object(create_jcsubtanker1_2484(2120, 968), 3);
    add_background_object(create_jcsubtanker3_2490(2184, 968), 3);
    add_background_object(create_jcsubtanker2_2486(2312, 968), 3);
    add_background_object(create_jcsubtanker3_2490(2248, 968), 3);
    add_background_object(create_jcsubtanker1_2484(2088, 952), 3);
    add_background_object(create_jcsubtanker3_2490(2152, 952), 3);
    add_background_object(create_jcsubtanker2_2486(2344, 952), 3);
    add_background_object(create_jcsubtanker3_2490(2280, 952), 3);
    add_background_object(create_jcsubtanker3_2490(2216, 952), 3);
    add_background_object(create_jcsubtanker1_2484(2152, 936), 3);
    add_background_object(create_jcsubtanker3_2490(2216, 936), 3);
    add_background_object(create_jcsubtanker2_2486(2280, 936), 3);
    add_background_object(create_jcsubtanker1_2484(2152, 920), 3);
    add_background_object(create_jcsubtanker2_2486(2280, 920), 3);
    add_background_object(create_jcsubtanker3_2490(2216, 920), 3);
    add_background_object(create_jcsubtanker1_2484(2184, 904), 3);
    add_background_object(create_jcsubtanker2_2486(2248, 904), 3);
    add_background_object(create_jcsubtanker5_2466(2184, 1656), 3);
    add_background_object(create_jcsubtanker6_2467(2248, 1656), 3);
    add_background_object(create_jcsubtanker5_2466(2184, 1592), 3);
    add_background_object(create_jcsubtanker6_2467(2248, 1592), 3);
    add_background_object(create_jcsubtanker5_2466(1872, 1592), 3);
    add_background_object(create_jcsubtanker6_2467(1936, 1592), 3);
    add_background_object(create_jcsub16_2485(2152, 1864), 3);
    add_background_object(create_jcsub16_2485(2216, 1864), 3);
    add_background_object(create_jcsub16_2485(2280, 1864), 3);
    add_background_object(create_jcsub17_2475(2592, 2040), 3);
    add_background_object(create_jcsub7_2468(2624, 2040), 3);
    add_background_object(create_jcsub8_2482(2720, 2040), 3);
    add_background_object(create_jcsub12_2478(2624, 2104), 3);
    add_background_object(create_jcsub20_2487(2592, 2104), 3);
    add_background_object(create_jcsub13_2494(2720, 2104), 3);
    add_background_object(create_jcsub8_2482(2464, 1784), 3);
    add_background_object(create_jcsub13_2494(2464, 1976), 3);
    add_background_object(create_jcsub11_2483(2464, 1848), 3);
    add_background_object(create_jcsub11_2483(2464, 1912), 3);
    add_background_object(create_jcsub1_2476(2584, 1912), 3);
    add_background_object(create_jcsub1_2476(2712, 1912), 3);
    add_background_object(create_jcsub2_2477(2584, 1976), 3);
    add_background_object(create_jcsub2_2477(2712, 1976), 3);
    add_background_object(create_jcsub8_2482(2840, 1912), 3);
    add_background_object(create_jcsub13_2494(2840, 1976), 3);
    add_background_object(create_jcsub17_2475(2592, 2168), 3);
    add_background_object(create_jcsub7_2468(2624, 2168), 3);
    add_background_object(create_jcsub12_2478(2624, 2232), 3);
    add_background_object(create_jcsub20_2487(2592, 2232), 3);
    add_background_object(create_jcsub8_2482(2720, 2168), 3);
    add_background_object(create_jcsub13_2494(2720, 2232), 3);
    add_background_object(create_jcsub1_2476(2720, 2296), 3);
    add_background_object(create_jcsub2_2477(2720, 2360), 3);
    add_background_object(create_jcsub17_2475(2592, 2296), 3);
    add_background_object(create_jcsub7_2468(2624, 2296), 3);
    add_background_object(create_jcsub12_2478(2624, 2360), 3);
    add_background_object(create_jcsub20_2487(2592, 2360), 3);
    add_background_object(create_jcsub1_2476(3616, 2296), 3);
    add_background_object(create_jcsub2_2477(3616, 2360), 3);
    add_background_object(create_jcsub8_2482(3872, 2296), 3);
    add_background_object(create_jcsub13_2494(3872, 2360), 3);
    add_background_object(create_jcsub1_2476(2848, 2296), 3);
    add_background_object(create_jcsub2_2477(2848, 2360), 3);
    add_background_object(create_jcsub1_2476(2976, 2296), 3);
    add_background_object(create_jcsub2_2477(2976, 2360), 3);
    add_background_object(create_jcsub17_2475(3672, 2168), 3);
    add_background_object(create_jcsub7_2468(3704, 2168), 3);
    add_background_object(create_jcsub12_2478(3704, 2232), 3);
    add_background_object(create_jcsub20_2487(3672, 2232), 3);
    add_background_object(create_jcsub1_2476(3800, 2168), 3);
    add_background_object(create_jcsub2_2477(3800, 2232), 3);
    add_background_object(create_jcsub8_2482(4056, 2168), 3);
    add_background_object(create_jcsub13_2494(4056, 2232), 3);
    add_background_object(create_jcsub17_2475(3256, 2040), 3);
    add_background_object(create_jcsub7_2468(3288, 2040), 3);
    add_background_object(create_jcsub12_2478(3288, 2104), 3);
    add_background_object(create_jcsub20_2487(3256, 2104), 3);
    add_background_object(create_jcsub1_2476(3384, 2040), 3);
    add_background_object(create_jcsub2_2477(3384, 2104), 3);
    add_background_object(create_jcsub8_2482(3512, 2040), 3);
    add_background_object(create_jcsub13_2494(3512, 2104), 3);
    add_background_object(create_jcsubfin2_2502(2776, 2200), 3);
    add_background_object(create_jcsubtanker1_2484(2152, 1288), 3);
    add_background_object(create_jcsubtanker3_2490(2216, 1288), 3);
    add_background_object(create_jcsubtanker5_2466(2184, 1368), 3);
    add_background_object(create_jcsubtanker6_2467(2248, 1368), 3);
    add_background_object(create_jcsubtanker5_2466(2184, 1304), 3);
    add_background_object(create_jcsubtanker6_2467(2248, 1304), 3);
    add_background_object(create_jcsub1_2476(3104, 2296), 3);
    add_background_object(create_jcsub2_2477(3104, 2360), 3);
    add_background_object(create_jcsub1_2476(3232, 2296), 3);
    add_background_object(create_jcsub2_2477(3232, 2360), 3);
    add_background_object(create_jcsub1_2476(3360, 2296), 3);
    add_background_object(create_jcsub2_2477(3360, 2360), 3);
    add_background_object(create_jcsub1_2476(3488, 2296), 3);
    add_background_object(create_jcsub2_2477(3488, 2360), 3);
    add_background_object(create_jcsubfin1_2480(3608, 2200), 3);
    add_background_object(create_jcsubsupportback_2471(3296, 2168), 3);
    add_background_object(create_jcsubsupportback_2471(3296, 2232), 3);
    add_background_object(create_jcsub17_2475(3632, 1784), 3);
    add_background_object(create_jcsub7_2468(3664, 1784), 3);
    add_background_object(create_jcsub12_2478(3664, 1848), 3);
    add_background_object(create_jcsub20_2487(3632, 1848), 3);
    add_background_object(create_jcsub1_2476(3760, 1784), 3);
    add_background_object(create_jcsub2_2477(3760, 1848), 3);
    add_background_object(create_jcsub8_2482(3888, 1784), 3);
    add_background_object(create_jcsub13_2494(3888, 1848), 3);
    add_background_object(create_jcsub17_2475(3872, 2040), 3);
    add_background_object(create_jcsub7_2468(3904, 2040), 3);
    add_background_object(create_jcsub12_2478(3904, 2104), 3);
    add_background_object(create_jcsub20_2487(3872, 2104), 3);
    add_background_object(create_jcsub1_2476(4000, 2040), 3);
    add_background_object(create_jcsub2_2477(4000, 2104), 3);
    add_background_object(create_jcsub8_2482(4128, 2040), 3);
    add_background_object(create_jcsub13_2494(4128, 2104), 3);
    add_background_object(create_jcsub1_2476(3928, 2168), 3);
    add_background_object(create_jcsub2_2477(3928, 2232), 3);
    add_background_object(create_jcsub1_2476(3744, 2296), 3);
    add_background_object(create_jcsub2_2477(3744, 2360), 3);
    add_background_object(create_jcsub1_2476(4248, 1656), 3);
    add_background_object(create_jcsub2_2477(4248, 2104), 3);
    add_background_object(create_jcsub9_2479(4248, 1720), 3);
    add_background_object(create_jcsub9_2479(4248, 2040), 3);
    add_background_object(create_jcsub10_2469(4152, 1720), 3);
    add_background_object(create_jcsub18_2470(4120, 1720), 3);
    add_background_object(create_jcsub17_2475(4120, 1656), 3);
    add_background_object(create_jcsub7_2468(4152, 1656), 3);
    add_background_object(create_jcsub9_2479(4248, 1784), 3);
    add_background_object(create_jcsub10_2469(4152, 1784), 3);
    add_background_object(create_jcsub18_2470(4120, 1784), 3);
    add_background_object(create_jcsub9_2479(4248, 1976), 3);
    add_background_object(create_jcsub10_2469(4152, 1976), 3);
    add_background_object(create_jcsub18_2470(4120, 1976), 3);
    add_background_object(create_jcsub9_2479(4248, 1848), 3);
    add_background_object(create_jcsub10_2469(4152, 1848), 3);
    add_background_object(create_jcsub18_2470(4120, 1848), 3);
    add_background_object(create_jcsub9_2479(4248, 1912), 3);
    add_background_object(create_jcsub10_2469(4152, 1912), 3);
    add_background_object(create_jcsub18_2470(4120, 1912), 3);
    add_background_object(create_jcsub8_2482(4376, 1656), 3);
    add_background_object(create_jcsub13_2494(4376, 2104), 3);
    add_background_object(create_jcsub11_2483(4376, 1720), 3);
    add_background_object(create_jcsub11_2483(4376, 1784), 3);
    add_background_object(create_jcsub11_2483(4376, 1848), 3);
    add_background_object(create_jcsub11_2483(4376, 1912), 3);
    add_background_object(create_jcsub11_2483(4376, 1976), 3);
    add_background_object(create_jcsub11_2483(4376, 2040), 3);
    add_background_object(create_jcsub17_2475(3736, 1336), 3);
    add_background_object(create_jcsub7_2468(3768, 1336), 3);
    add_background_object(create_jcsub12_2478(3768, 1400), 3);
    add_background_object(create_jcsub20_2487(3736, 1400), 3);
    add_background_object(create_jcsub1_2476(3992, 1336), 3);
    add_background_object(create_jcsub2_2477(3992, 1400), 3);
    add_background_object(create_jcsub8_2482(4248, 1336), 3);
    add_background_object(create_jcsub13_2494(4248, 1400), 3);
    add_background_object(create_jcsub1_2476(4120, 1336), 3);
    add_background_object(create_jcsub2_2477(4120, 1400), 3);
    add_background_object(create_jcsub1_2476(3864, 1336), 3);
    add_background_object(create_jcsub2_2477(3864, 1400), 3);
    add_background_object(create_jcsubsupportback_2471(3784, 1464), 3);
    add_background_object(create_jcsubsupportback_2471(3784, 1528), 3);
    add_background_object(create_jcsubsupportback_2471(3784, 1592), 3);
    add_background_object(create_jcsubsupportback_2471(3784, 1656), 3);
    add_background_object(create_jcsubsupportback_2471(3784, 1720), 3);
    add_background_object(create_jcsubsupportback_2471(4168, 1464), 3);
    add_background_object(create_jcsubsupportback_2471(4168, 1528), 3);
    add_background_object(create_jcsubsupportback_2471(4168, 1592), 3);
    add_background_object(create_jcsub17_2475(4376, 1528), 3);
    add_background_object(create_jcsub7_2468(4408, 1528), 3);
    add_background_object(create_jcsub12_2478(4408, 1592), 3);
    add_background_object(create_jcsub20_2487(4376, 1592), 3);
    add_background_object(create_jcsub1_2476(4632, 1528), 3);
    add_background_object(create_jcsub2_2477(4632, 1592), 3);
    add_background_object(create_jcsub8_2482(4888, 1528), 3);
    add_background_object(create_jcsub13_2494(4888, 1592), 3);
    add_background_object(create_jcsub1_2476(4760, 1528), 3);
    add_background_object(create_jcsub2_2477(4760, 1592), 3);
    add_background_object(create_jcsub1_2476(4504, 1528), 3);
    add_background_object(create_jcsub2_2477(4504, 1592), 3);
    add_background_object(create_jcsub1_2476(4504, 1656), 3);
    add_background_object(create_jcsub2_2477(4504, 1720), 3);
    add_background_object(create_jcsub1_2476(4632, 1656), 3);
    add_background_object(create_jcsub2_2477(4632, 1720), 3);
    add_background_object(create_jcsub8_2482(4888, 1656), 3);
    add_background_object(create_jcsub13_2494(4888, 1720), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 2232), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 2232), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 2168), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 2168), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 2104), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 2104), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 2040), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 2040), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1976), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1976), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1912), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1912), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1848), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1848), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1784), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1784), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1976), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1976), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1912), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1912), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1848), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1848), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1784), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1784), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1720), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1720), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1656), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1656), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1720), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1720), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1656), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1656), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1592), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1592), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1528), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1528), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1592), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1592), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1528), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1528), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1464), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1464), 3);
    add_background_object(create_jcsubtanker5_2466(3032, 1400), 3);
    add_background_object(create_jcsubtanker6_2467(3096, 1400), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1464), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1464), 3);
    add_background_object(create_jcsubtanker5_2466(3352, 1400), 3);
    add_background_object(create_jcsubtanker6_2467(3416, 1400), 3);
    add_background_object(create_jcsubtanker1_2484(3000, 1384), 3);
    add_background_object(create_jcsubtanker3_2490(3064, 1384), 3);
    add_background_object(create_jcsubtanker2_2486(3128, 1384), 3);
    add_background_object(create_jcsubtanker1_2484(3320, 1384), 3);
    add_background_object(create_jcsubtanker3_2490(3384, 1384), 3);
    add_background_object(create_jcsubtanker2_2486(3448, 1384), 3);
    add_background_object(create_jcsub1_2476(4760, 1656), 3);
    add_background_object(create_jcsub2_2477(4760, 1720), 3);
    add_background_object(create_jcsub1_2476(5008, 1400), 3);
    add_background_object(create_jcsub9_2479(5008, 1528), 3);
    add_background_object(create_jcsub17_2475(4880, 1400), 3);
    add_background_object(create_jcsub7_2468(4912, 1400), 3);
    add_background_object(create_jcsub9_2479(5008, 1592), 3);
    add_background_object(create_jcsub21_2495(5264, 1400), 3);
    add_background_object(create_jcsub11_2483(5264, 1528), 3);
    add_background_object(create_jcsub11_2483(5264, 1592), 3);
    add_background_object(create_jcsub9_2479(5008, 1656), 3);
    add_background_object(create_jcsub11_2483(5264, 1656), 3);
    add_background_object(create_jcsub12_2478(4912, 1784), 3);
    add_background_object(create_jcsub2_2477(5008, 1784), 3);
    add_background_object(create_jcsub13_2494(5264, 1784), 3);
    add_background_object(create_jcsub9_2479(5008, 1720), 3);
    add_background_object(create_jcsub11_2483(5264, 1720), 3);
    add_background_object(create_jcsub20_2487(4880, 1784), 3);
    add_background_object(create_jcsub1_2476(5136, 1400), 3);
    add_background_object(create_jcsub9_2479(5136, 1528), 3);
    add_background_object(create_jcsub9_2479(5136, 1592), 3);
    add_background_object(create_jcsub9_2479(5136, 1656), 3);
    add_background_object(create_jcsub2_2477(5136, 1784), 3);
    add_background_object(create_jcsub9_2479(5136, 1720), 3);
    add_background_object(create_jcsub10_2469(4912, 1464), 3);
    add_background_object(create_jcsub9_2479(5008, 1464), 3);
    add_background_object(create_jcsub11_2483(5264, 1464), 3);
    add_background_object(create_jcsub9_2479(5136, 1464), 3);
    add_background_object(create_jcsub18_2470(4880, 1464), 3);
    add_background_object(create_jcsubtanker5_2466(2640, 1592), 3);
    add_background_object(create_jcsubtanker6_2467(2688, 1592), 3);
    add_background_object(create_jcsubtanker5_2466(2640, 1528), 3);
    add_background_object(create_jcsubtanker6_2467(2688, 1528), 3);
    add_background_object(create_jcsubtanker3_2490(2632, 1288), 3);
    add_background_object(create_jcsubtanker2_2486(2696, 1288), 3);
    add_background_object(create_jcsubtanker5_2466(2632, 1848), 3);
    add_background_object(create_jcsubtanker6_2467(2696, 1848), 3);
    add_background_object(create_jcsubtanker5_2466(2640, 1784), 3);
    add_background_object(create_jcsubtanker6_2467(2688, 1784), 3);
    add_background_object(create_jcsubtanker5_2466(2640, 1720), 3);
    add_background_object(create_jcsubtanker6_2467(2688, 1720), 3);
    add_background_object(create_jcsubtanker5_2466(2640, 1656), 3);
    add_background_object(create_jcsubtanker6_2467(2688, 1656), 3);
    add_background_object(create_jcsubtanker4_2488(2632, 1304), 3);
    add_background_object(create_jcsubtanker5_2489(2696, 1304), 3);
    add_background_object(create_jcsubtanker4_2488(2632, 1384), 3);
    add_background_object(create_jcsubtanker5_2489(2696, 1384), 3);
    add_background_object(create_jcsubtanker4_2488(2632, 1464), 3);
    add_background_object(create_jcsubtanker5_2489(2696, 1464), 3);
    add_background_object(create_jcsubtanker3_2490(2504, 1288), 3);
    add_background_object(create_jcsubtanker1_2484(2640, 1368), 3);
    add_background_object(create_jcsubtanker2_2486(2688, 1368), 3);
    add_background_object(create_jcsubtanker2_2486(2688, 1448), 3);
    add_background_object(create_jcsubtanker3_2490(2568, 1288), 3);
    add_background_object(create_jcsubtanker4_2488(2440, 1224), 3);
    add_background_object(create_jcsubtanker5_2489(2504, 1224), 3);
    add_background_object(create_jcsubtanker4_2488(2568, 1224), 3);
    add_background_object(create_jcsubtanker5_2489(2632, 1224), 3);
    add_background_object(create_jcsubtanker1_2484(2440, 1208), 3);
    add_background_object(create_jcsubtanker2_2486(2632, 1208), 3);
    add_background_object(create_jcsubtanker3_2490(2504, 1208), 3);
    add_background_object(create_jcsubtanker3_2490(2568, 1208), 3);
    add_background_object(create_jcsubtanker3_2490(2624, 1448), 3);
    add_background_object(create_jcsubtanker2_2486(2280, 1288), 3);
    add_background_object(create_jcsubtanker1_2484(2440, 1288), 3);
    add_background_object(create_jcsubtanker5_2466(2448, 1368), 3);
    add_background_object(create_jcsubtanker6_2467(2496, 1368), 3);
    add_background_object(create_jcsubtanker5_2466(2448, 1304), 3);
    add_background_object(create_jcsubtanker6_2467(2496, 1304), 3);
    add_background_object(create_jcsubtanker5_2466(2448, 1496), 3);
    add_background_object(create_jcsubtanker6_2467(2496, 1496), 3);
    add_background_object(create_jcsubtanker5_2466(2448, 1432), 3);
    add_background_object(create_jcsubtanker6_2467(2496, 1432), 3);
    add_background_object(create_jcsubtanker5_2466(2448, 1624), 3);
    add_background_object(create_jcsubtanker6_2467(2496, 1624), 3);
    add_background_object(create_jcsubtanker5_2466(2448, 1560), 3);
    add_background_object(create_jcsubtanker6_2467(2496, 1560), 3);
    add_background_object(create_jcsubtanker5_2466(2448, 1688), 3);
    add_background_object(create_jcsubtanker6_2467(2496, 1688), 3);
    add_background_object(create_jcsubtanker1_2484(2560, 1448), 3);
    add_background_object(create_jcsub11_2483(5392, 1528), 3);
    add_background_object(create_jcsub11_2483(5392, 1592), 3);
    add_background_object(create_jcsub11_2483(5392, 1656), 3);
    add_background_object(create_jcsub13_2494(5392, 1720), 3);
    add_background_object(create_jcsub1_2476(5520, 1400), 3);
    add_background_object(create_jcsub17_2475(5392, 1400), 3);
    add_background_object(create_jcsub7_2468(5424, 1400), 3);
    add_background_object(create_jcsub1_2476(5648, 1400), 3);
    add_background_object(create_jcsub9_2479(5520, 1464), 3);
    add_background_object(create_jcsub11_2483(5776, 1464), 3);
    add_background_object(create_jcsub9_2479(5648, 1464), 3);
    add_background_object(create_jcsub9_2479(5520, 1528), 3);
    add_background_object(create_jcsub11_2483(5776, 1528), 3);
    add_background_object(create_jcsub9_2479(5648, 1528), 3);
    add_background_object(create_jcsub9_2479(5520, 1592), 3);
    add_background_object(create_jcsub11_2483(5776, 1592), 3);
    add_background_object(create_jcsub9_2479(5648, 1592), 3);
    add_background_object(create_jcsub9_2479(5520, 1656), 3);
    add_background_object(create_jcsub11_2483(5776, 1656), 3);
    add_background_object(create_jcsub9_2479(5648, 1656), 3);
    add_background_object(create_jcsub9_2479(5520, 1720), 3);
    add_background_object(create_jcsub11_2483(5776, 1720), 3);
    add_background_object(create_jcsub9_2479(5648, 1720), 3);
    add_background_object(create_jcsub12_2478(5424, 1784), 3);
    add_background_object(create_jcsub2_2477(5520, 1784), 3);
    add_background_object(create_jcsub20_2487(5392, 1784), 3);
    add_background_object(create_jcsub2_2477(5648, 1784), 3);
    add_background_object(create_jcsub13_2494(5776, 1784), 3);
    add_background_object(create_jcsubtanker4_2488(5560, 1192), 3);
    add_background_object(create_jcsubtanker5_2489(5624, 1192), 3);
    add_background_object(create_jcsubtanker1_2484(5568, 1256), 3);
    add_background_object(create_jcsubtanker2_2486(5616, 1256), 3);
    add_background_object(create_jcsubsupportback_2471(5568, 1272), 3);
    add_background_object(create_jcsubsupportback_2471(5568, 1336), 3);
    add_background_object(create_jcsubsupportback_2471(5648, 1272), 3);
    add_background_object(create_jcsubsupportback_2471(5648, 1336), 3);
    add_background_object(create_jcsub18_2470(5904, 1720), 3);
    add_background_object(create_jcsub10_2469(5936, 1528), 3);
    add_background_object(create_jcsub10_2469(5936, 1592), 3);
    add_background_object(create_jcsub10_2469(5936, 1656), 3);
    add_background_object(create_jcsub10_2469(5936, 1720), 3);
    add_background_object(create_jcsub10_2469(5936, 1464), 3);
    add_background_object(create_jcsub18_2470(5904, 1464), 3);
    add_background_object(create_jcsub8_2482(5904, 1464), 3);
    add_background_object(create_jcsub11_2483(5904, 1528), 3);
    add_background_object(create_jcsub11_2483(5904, 1592), 3);
    add_background_object(create_jcsub11_2483(5904, 1656), 3);
    add_background_object(create_jcsub13_2494(5904, 1720), 3);
    add_background_object(create_jcsub1_2476(6032, 1400), 3);
    add_background_object(create_jcsub17_2475(5904, 1400), 3);
    add_background_object(create_jcsub7_2468(5936, 1400), 3);
    add_background_object(create_jcsub1_2476(6160, 1400), 3);
    add_background_object(create_jcsub9_2479(6032, 1464), 3);
    add_background_object(create_jcsub11_2483(6288, 1464), 3);
    add_background_object(create_jcsub9_2479(6160, 1464), 3);
    add_background_object(create_jcsub9_2479(6032, 1528), 3);
    add_background_object(create_jcsub11_2483(6288, 1528), 3);
    add_background_object(create_jcsub9_2479(6160, 1528), 3);
    add_background_object(create_jcsub9_2479(6032, 1592), 3);
    add_background_object(create_jcsub11_2483(6288, 1592), 3);
    add_background_object(create_jcsub9_2479(6160, 1592), 3);
    add_background_object(create_jcsub9_2479(6032, 1656), 3);
    add_background_object(create_jcsub11_2483(6288, 1656), 3);
    add_background_object(create_jcsub9_2479(6160, 1656), 3);
    add_background_object(create_jcsub9_2479(6032, 1720), 3);
    add_background_object(create_jcsub11_2483(6288, 1720), 3);
    add_background_object(create_jcsub9_2479(6160, 1720), 3);
    add_background_object(create_jcsub12_2478(5936, 1784), 3);
    add_background_object(create_jcsub2_2477(6032, 1784), 3);
    add_background_object(create_jcsub20_2487(5904, 1784), 3);
    add_background_object(create_jcsub2_2477(6160, 1784), 3);
    add_background_object(create_jcsub13_2494(6288, 1784), 3);
    add_background_object(create_jcsubtanker4_2488(6072, 1192), 3);
    add_background_object(create_jcsubtanker5_2489(6136, 1192), 3);
    add_background_object(create_jcsubtanker1_2484(6080, 1256), 3);
    add_background_object(create_jcsubtanker2_2486(6128, 1256), 3);
    add_background_object(create_jcsubsupportback_2471(6080, 1272), 3);
    add_background_object(create_jcsubsupportback_2471(6080, 1336), 3);
    add_background_object(create_jcsubsupportback_2471(6160, 1272), 3);
    add_background_object(create_jcsubsupportback_2471(6160, 1336), 3);
    add_background_object(create_jcsub18_2470(6416, 1720), 3);
    add_background_object(create_jcsub10_2469(6448, 1528), 3);
    add_background_object(create_jcsub10_2469(6448, 1592), 3);
    add_background_object(create_jcsub10_2469(6448, 1656), 3);
    add_background_object(create_jcsub10_2469(6448, 1720), 3);
    add_background_object(create_jcsub10_2469(6448, 1464), 3);
    add_background_object(create_jcsub18_2470(6416, 1464), 3);
    add_background_object(create_jcsub8_2482(6416, 1464), 3);
    add_background_object(create_jcsub11_2483(6416, 1528), 3);
    add_background_object(create_jcsub11_2483(6416, 1592), 3);
    add_background_object(create_jcsub11_2483(6416, 1656), 3);
    add_background_object(create_jcsub13_2494(6416, 1720), 3);
    add_background_object(create_jcsub1_2476(6544, 1400), 3);
    add_background_object(create_jcsub17_2475(6416, 1400), 3);
    add_background_object(create_jcsub7_2468(6448, 1400), 3);
    add_background_object(create_jcsub1_2476(6672, 1400), 3);
    add_background_object(create_jcsub9_2479(6544, 1464), 3);
    add_background_object(create_jcsub11_2483(6800, 1464), 3);
    add_background_object(create_jcsub9_2479(6672, 1464), 3);
    add_background_object(create_jcsub9_2479(6544, 1528), 3);
    add_background_object(create_jcsub11_2483(6800, 1528), 3);
    add_background_object(create_jcsub9_2479(6672, 1528), 3);
    add_background_object(create_jcsub9_2479(6544, 1592), 3);
    add_background_object(create_jcsub11_2483(6800, 1592), 3);
    add_background_object(create_jcsub9_2479(6672, 1592), 3);
    add_background_object(create_jcsub9_2479(6544, 1656), 3);
    add_background_object(create_jcsub11_2483(6800, 1656), 3);
    add_background_object(create_jcsub9_2479(6672, 1656), 3);
    add_background_object(create_jcsub9_2479(6544, 1720), 3);
    add_background_object(create_jcsub11_2483(6800, 1912), 3);
    add_background_object(create_jcsub9_2479(6672, 1912), 3);
    add_background_object(create_jcsub12_2478(6448, 2040), 3);
    add_background_object(create_jcsub2_2477(6544, 2040), 3);
    add_background_object(create_jcsub20_2487(6416, 2040), 3);
    add_background_object(create_jcsub2_2477(6672, 2040), 3);
    add_background_object(create_jcsub13_2494(6800, 2040), 3);
    add_background_object(create_jcsubtanker4_2488(6584, 1192), 3);
    add_background_object(create_jcsubtanker5_2489(6648, 1192), 3);
    add_background_object(create_jcsubtanker1_2484(6592, 1256), 3);
    add_background_object(create_jcsubtanker2_2486(6640, 1256), 3);
    add_background_object(create_jcsubsupportback_2471(6592, 1272), 3);
    add_background_object(create_jcsubsupportback_2471(6592, 1336), 3);
    add_background_object(create_jcsubsupportback_2471(6672, 1272), 3);
    add_background_object(create_jcsubsupportback_2471(6672, 1336), 3);
    add_background_object(create_jcsub18_2470(6928, 1720), 3);
    add_background_object(create_jcsub10_2469(6960, 1528), 3);
    add_background_object(create_jcsub10_2469(6960, 1592), 3);
    add_background_object(create_jcsub10_2469(6960, 1656), 3);
    add_background_object(create_jcsub10_2469(6960, 1720), 3);
    add_background_object(create_jcsub10_2469(6960, 1464), 3);
    add_background_object(create_jcsub18_2470(6928, 1464), 3);
    add_background_object(create_jcsub8_2482(6928, 1464), 3);
    add_background_object(create_jcsub11_2483(6928, 1528), 3);
    add_background_object(create_jcsub11_2483(6928, 1592), 3);
    add_background_object(create_jcsub11_2483(6928, 1656), 3);
    add_background_object(create_jcsub13_2494(6928, 1720), 3);
    add_background_object(create_jcsub1_2476(7056, 1400), 3);
    add_background_object(create_jcsub17_2475(6928, 1400), 3);
    add_background_object(create_jcsub7_2468(6960, 1400), 3);
    add_background_object(create_jcsub8_2482(7440, 1400), 3);
    add_background_object(create_jcsub1_2476(7312, 1400), 3);
    add_background_object(create_jcsub9_2479(7056, 1464), 3);
    add_background_object(create_jcsub11_2483(7440, 1464), 3);
    add_background_object(create_jcsub9_2479(7312, 1464), 3);
    add_background_object(create_jcsub9_2479(7056, 1528), 3);
    add_background_object(create_jcsub11_2483(7440, 1528), 3);
    add_background_object(create_jcsub9_2479(7312, 1528), 3);
    add_background_object(create_jcsub9_2479(7056, 1592), 3);
    add_background_object(create_jcsub11_2483(7440, 1592), 3);
    add_background_object(create_jcsub9_2479(7312, 1592), 3);
    add_background_object(create_jcsub9_2479(7056, 1656), 3);
    add_background_object(create_jcsub11_2483(7440, 1656), 3);
    add_background_object(create_jcsub9_2479(7312, 1656), 3);
    add_background_object(create_jcsub9_2479(7056, 1720), 3);
    add_background_object(create_jcsub11_2483(7440, 1720), 3);
    add_background_object(create_jcsub9_2479(7312, 1720), 3);
    add_background_object(create_jcsub12_2478(6960, 1784), 3);
    add_background_object(create_jcsub2_2477(7056, 1784), 3);
    add_background_object(create_jcsub20_2487(6928, 1784), 3);
    add_background_object(create_jcsub2_2477(7312, 1784), 3);
    add_background_object(create_jcsub13_2494(7440, 1784), 3);
    add_background_object(create_jcsub1_2476(7184, 1400), 3);
    add_background_object(create_jcsub9_2479(7184, 1464), 3);
    add_background_object(create_jcsub9_2479(7184, 1528), 3);
    add_background_object(create_jcsub9_2479(7184, 1592), 3);
    add_background_object(create_jcsub9_2479(7184, 1656), 3);
    add_background_object(create_jcsub9_2479(7184, 1720), 3);
    add_background_object(create_jcsub2_2477(7184, 1784), 3);
    add_background_object(create_jcsub9_2479(7568, 1720), 3);
    add_background_object(create_jcsub2_2477(7568, 1784), 3);
    add_background_object(create_jcsub1_2476(7568, 1592), 3);
    add_background_object(create_jcsubfin2_2502(7496, 1496), 3);
    add_background_object(create_jcsub17_2475(7584, 1336), 3);
    add_background_object(create_jcsub7_2468(7616, 1336), 3);
    add_background_object(create_jcsub12_2478(7616, 1400), 3);
    add_background_object(create_jcsub20_2487(7584, 1400), 3);
    add_background_object(create_jcsub1_2476(7712, 1336), 3);
    add_background_object(create_jcsub2_2477(7712, 1400), 3);
    add_background_object(create_jcsub8_2482(7840, 1336), 3);
    add_background_object(create_jcsub13_2494(7840, 1400), 3);
    add_background_object(create_jcsubsupportback_2471(7624, 1464), 3);
    add_background_object(create_jcsubsupportback_2471(7624, 1528), 3);
    add_background_object(create_jcsubsupportback_2471(7752, 1464), 3);
    add_background_object(create_jcsubsupportback_2471(7752, 1528), 3);
    add_background_object(create_jcsub9_2479(7696, 1656), 3);
    add_background_object(create_jcsub9_2479(7696, 1720), 3);
    add_background_object(create_jcsub2_2477(7696, 1784), 3);
    add_background_object(create_jcsub1_2476(7696, 1592), 3);
    add_background_object(create_jcsub9_2479(7824, 1656), 3);
    add_background_object(create_jcsub9_2479(7824, 1720), 3);
    add_background_object(create_jcsub2_2477(7824, 1784), 3);
    add_background_object(create_jcsub1_2476(7824, 1592), 3);
    add_background_object(create_jcsub8_2482(7952, 1592), 3);
    add_background_object(create_jcsub11_2483(7952, 1656), 3);
    add_background_object(create_jcsub11_2483(7952, 1720), 3);
    add_background_object(create_jcsub13_2494(7952, 1784), 3);
    add_background_object(create_jcsub11_2483(6800, 1848), 3);
    add_background_object(create_jcsub9_2479(6672, 1848), 3);
    add_background_object(create_jcsub11_2483(6800, 1784), 3);
    add_background_object(create_jcsub9_2479(6672, 1784), 3);
    add_background_object(create_jcsub11_2483(6800, 1720), 3);
    add_background_object(create_jcsub9_2479(6672, 1720), 3);
    add_background_object(create_jcsub10_2469(6448, 1784), 3);
    add_background_object(create_jcsub9_2479(6544, 1784), 3);
    add_background_object(create_jcsub18_2470(6416, 1784), 3);
    add_background_object(create_jcsub10_2469(6448, 1848), 3);
    add_background_object(create_jcsub9_2479(6544, 1848), 3);
    add_background_object(create_jcsub18_2470(6416, 1848), 3);
    add_background_object(create_jcsub10_2469(6448, 1912), 3);
    add_background_object(create_jcsub9_2479(6544, 1912), 3);
    add_background_object(create_jcsub18_2470(6416, 1912), 3);
    add_background_object(create_jcsub1_2476(9104, 1976), 3);
    add_background_object(create_jcsub2_2477(9104, 2104), 3);
    add_background_object(create_jcsub8_2482(9232, 1976), 3);
    add_background_object(create_jcsub13_2494(9232, 2104), 3);
    add_background_object(create_jcsub20_2487(6800, 2104), 3);
    add_background_object(create_jcsub1_2476(8720, 1976), 3);
    add_background_object(create_jcsub2_2477(8720, 2104), 3);
    add_background_object(create_jcsub1_2476(6928, 1976), 3);
    add_background_object(create_jcsub2_2477(6928, 2104), 3);
    add_background_object(create_jcsubtanker2_2486(7128, 1960), 3);
    add_background_object(create_jcsubtanker1_2484(7064, 1960), 3);
    add_background_object(create_jcsubtanker2_2486(7128, 1944), 3);
    add_background_object(create_jcsubtanker1_2484(7064, 1944), 3);
    add_background_object(create_jcsub1_2476(7184, 1976), 3);
    add_background_object(create_jcsub2_2477(7184, 2104), 3);
    add_background_object(create_jcsub1_2476(7056, 1976), 3);
    add_background_object(create_jcsub2_2477(7056, 2104), 3);
    add_background_object(create_jcsub1_2476(7696, 1976), 3);
    add_background_object(create_jcsub2_2477(7696, 2104), 3);
    add_background_object(create_jcsub1_2476(7568, 1976), 3);
    add_background_object(create_jcsub2_2477(7568, 2104), 3);
    add_background_object(create_jcsub1_2476(7440, 1976), 3);
    add_background_object(create_jcsub2_2477(7440, 2104), 3);
    add_background_object(create_jcsub1_2476(7312, 1976), 3);
    add_background_object(create_jcsub2_2477(7312, 2104), 3);
    add_background_object(create_jcsubtanker5_2466(7072, 1880), 3);
    add_background_object(create_jcsubtanker6_2467(7120, 1880), 3);
    add_background_object(create_jcsubtanker5_2466(7512, 1848), 3);
    add_background_object(create_jcsubtanker5_2466(7512, 1912), 3);
    add_background_object(create_jcsubtanker6_2467(7576, 1848), 3);
    add_background_object(create_jcsubtanker6_2467(7576, 1912), 3);
    add_background_object(create_jcsubtanker5_2466(7832, 1848), 3);
    add_background_object(create_jcsubtanker5_2466(7832, 1912), 3);
    add_background_object(create_jcsubtanker6_2467(7896, 1848), 3);
    add_background_object(create_jcsubtanker6_2467(7896, 1912), 3);
    add_background_object(create_jcsub11_2483(6800, 1976), 3);
    add_background_object(create_jcsub9_2479(6672, 1976), 3);
    add_background_object(create_jcsub10_2469(6448, 1976), 3);
    add_background_object(create_jcsub9_2479(6544, 1976), 3);
    add_background_object(create_jcsub18_2470(6416, 1976), 3);
    add_background_object(create_jcsub9_2479(6928, 2040), 3);
    add_background_object(create_jcsub9_2479(7184, 2040), 3);
    add_background_object(create_jcsub9_2479(7056, 2040), 3);
    add_background_object(create_jcsub9_2479(7312, 2040), 3);
    add_background_object(create_jcsub9_2479(7568, 2040), 3);
    add_background_object(create_jcsub9_2479(7440, 2040), 3);
    add_background_object(create_jcsub9_2479(7696, 2040), 3);
    add_background_object(create_jcsub9_2479(9104, 2040), 3);
    add_background_object(create_jcsub9_2479(8720, 2040), 3);
    add_background_object(create_jcsub11_2483(9232, 2040), 3);
    add_background_object(create_jcsub1_2476(8336, 1976), 3);
    add_background_object(create_jcsub2_2477(8336, 2104), 3);
    add_background_object(create_jcsub1_2476(7824, 1976), 3);
    add_background_object(create_jcsub2_2477(7824, 2104), 3);
    add_background_object(create_jcsub9_2479(8336, 2040), 3);
    add_background_object(create_jcsub9_2479(7824, 2040), 3);
    add_background_object(create_jcsubfin1_2480(8120, 1880), 3);
    add_background_object(create_jcsubfin2_2481(8216, 1880), 3);
    add_background_object(create_jcsub1_2476(8208, 1976), 3);
    add_background_object(create_jcsub2_2477(8208, 2104), 3);
    add_background_object(create_jcsub1_2476(8080, 1976), 3);
    add_background_object(create_jcsub2_2477(8080, 2104), 3);
    add_background_object(create_jcsub9_2479(8208, 2040), 3);
    add_background_object(create_jcsub9_2479(8080, 2040), 3);
    add_background_object(create_jcsub1_2476(7952, 1976), 3);
    add_background_object(create_jcsub2_2477(7952, 2104), 3);
    add_background_object(create_jcsub9_2479(7952, 2040), 3);
    add_background_object(create_jcsubfin3_2472(8312, 1880), 3);
    add_background_object(create_jcsubfin4_2473(8440, 1888), 3);
    add_background_object(create_jcsubfin5_2474(8568, 1944), 3);
    add_background_object(create_jcsubtanker1_2484(8480, 1768), 3);
    add_background_object(create_jcsubtanker3_2490(8544, 1768), 3);
    add_background_object(create_jcsubtanker2_2486(8608, 1768), 3);
    add_background_object(create_jcsubtanker5_2466(8512, 1704), 3);
    add_background_object(create_jcsubtanker6_2467(8576, 1704), 3);
    add_background_object(create_jcsubtanker5_2466(8512, 1640), 3);
    add_background_object(create_jcsubtanker6_2467(8576, 1640), 3);
    add_background_object(create_jcsubtanker1_2484(8480, 1624), 3);
    add_background_object(create_jcsubtanker3_2490(8544, 1624), 3);
    add_background_object(create_jcsubtanker2_2486(8608, 1624), 3);
    add_background_object(create_jcsubtanker1_2484(8512, 1336), 3);
    add_background_object(create_jcsubtanker2_2486(8576, 1336), 3);
    add_background_object(create_jcsubtanker1_2484(8512, 1192), 3);
    add_background_object(create_jcsubtanker2_2486(8576, 1192), 3);
    add_background_object(create_jcsubtanker4_2488(8512, 1272), 3);
    add_background_object(create_jcsubtanker5_2489(8576, 1272), 3);
    add_background_object(create_jcsubtanker4_2488(8512, 1208), 3);
    add_background_object(create_jcsubtanker5_2489(8576, 1208), 3);
    add_background_object(create_jcsubtanker1_2484(8512, 1080), 3);
    add_background_object(create_jcsubtanker2_2486(8576, 1080), 3);
    add_background_object(create_jcsubtanker1_2484(8456, 1176), 3);
    add_background_object(create_jcsubtanker2_2486(8632, 1176), 3);
    add_background_object(create_jcsubtanker3_2490(8520, 1176), 3);
    add_background_object(create_jcsubtanker1_2484(8432, 1160), 3);
    add_background_object(create_jcsubtanker3_2490(8496, 1160), 3);
    add_background_object(create_jcsubtanker2_2486(8656, 1160), 3);
    add_background_object(create_jcsubtanker3_2490(8592, 1160), 3);
    add_background_object(create_jcsubtanker1_2484(8416, 1144), 3);
    add_background_object(create_jcsubtanker3_2490(8480, 1144), 3);
    add_background_object(create_jcsubtanker2_2486(8672, 1144), 3);
    add_background_object(create_jcsubtanker3_2490(8608, 1144), 3);
    add_background_object(create_jcsubtanker3_2490(8544, 1144), 3);
    add_background_object(create_jcsubtanker1_2484(8480, 1128), 3);
    add_background_object(create_jcsubtanker3_2490(8544, 1128), 3);
    add_background_object(create_jcsubtanker2_2486(8608, 1128), 3);
    add_background_object(create_jcsubtanker1_2484(8480, 1112), 3);
    add_background_object(create_jcsubtanker2_2486(8608, 1112), 3);
    add_background_object(create_jcsubtanker3_2490(8544, 1112), 3);
    add_background_object(create_jcsubtanker1_2484(8512, 1096), 3);
    add_background_object(create_jcsubtanker2_2486(8576, 1096), 3);
    add_background_object(create_jcsubtanker5_2466(8512, 1784), 3);
    add_background_object(create_jcsubtanker6_2467(8576, 1784), 3);
    add_background_object(create_jcsubtanker1_2484(8480, 1480), 3);
    add_background_object(create_jcsubtanker3_2490(8544, 1480), 3);
    add_background_object(create_jcsubtanker5_2466(8512, 1560), 3);
    add_background_object(create_jcsubtanker6_2467(8576, 1560), 3);
    add_background_object(create_jcsubtanker5_2466(8512, 1496), 3);
    add_background_object(create_jcsubtanker6_2467(8576, 1496), 3);
    add_background_object(create_jcsubtanker2_2486(8608, 1480), 3);
    add_background_object(create_jcsub1_2476(8592, 1976), 3);
    add_background_object(create_jcsub2_2477(8592, 2104), 3);
    add_background_object(create_jcsub1_2476(8464, 1976), 3);
    add_background_object(create_jcsub2_2477(8464, 2104), 3);
    add_background_object(create_jcsub9_2479(8592, 2040), 3);
    add_background_object(create_jcsub9_2479(8464, 2040), 3);
    add_background_object(create_jcsub17_2475(8848, 1848), 3);
    add_background_object(create_jcsub7_2468(8880, 1848), 3);
    add_background_object(create_jcsub12_2478(8880, 1912), 3);
    add_background_object(create_jcsub20_2487(8848, 1912), 3);
    add_background_object(create_jcsub1_2476(8976, 1848), 3);
    add_background_object(create_jcsub2_2477(8976, 1912), 3);
    add_background_object(create_jcsub8_2482(9232, 1848), 3);
    add_background_object(create_jcsub13_2494(9232, 1912), 3);
    add_background_object(create_jcsubfin1_2480(8784, 1880), 3);
    add_background_object(create_jcsub1_2476(9104, 1848), 3);
    add_background_object(create_jcsub2_2477(9104, 1912), 3);
    add_background_object(create_jcsub1_2476(8848, 1976), 3);
    add_background_object(create_jcsub2_2477(8848, 2104), 3);
    add_background_object(create_jcsub9_2479(8848, 2040), 3);
    add_background_object(create_jcsubtanker1_2484(8856, 1576), 3);
    add_background_object(create_jcsubtanker3_2490(8920, 1576), 3);
    add_background_object(create_jcsubtanker2_2486(8984, 1576), 3);
    add_background_object(create_jcsub1_2476(8976, 1976), 3);
    add_background_object(create_jcsub2_2477(8976, 2104), 3);
    add_background_object(create_jcsub9_2479(8976, 2040), 3);
    add_background_object(create_jcsub2_2477(9360, 2104), 3);
    add_background_object(create_jcsub13_2494(9872, 2104), 3);
    add_background_object(create_jcsub11_2483(9872, 2040), 3);
    add_background_object(create_jcsub9_2479(9360, 2040), 3);
    add_background_object(create_jcsub11_2483(9872, 1976), 3);
    add_background_object(create_jcsub9_2479(9360, 1976), 3);
    add_background_object(create_jcsub11_2483(9872, 1912), 3);
    add_background_object(create_jcsub9_2479(9360, 1912), 3);
    add_background_object(create_jcsub11_2483(9872, 1848), 3);
    add_background_object(create_jcsub9_2479(9360, 1848), 3);
    add_background_object(create_jcsub11_2483(9872, 1784), 3);
    add_background_object(create_jcsub9_2479(9360, 1784), 3);
    add_background_object(create_jcsub10_2469(9264, 1720), 3);
    add_background_object(create_jcsub11_2483(9872, 1720), 3);
    add_background_object(create_jcsub9_2479(9360, 1720), 3);
    add_background_object(create_jcsub10_2469(9264, 1656), 3);
    add_background_object(create_jcsub11_2483(9872, 1656), 3);
    add_background_object(create_jcsub9_2479(9360, 1656), 3);
    add_background_object(create_jcsub10_2469(9264, 1592), 3);
    add_background_object(create_jcsub11_2483(9872, 1592), 3);
    add_background_object(create_jcsub9_2479(9360, 1592), 3);
    add_background_object(create_jcsub18_2470(9232, 1656), 3);
    add_background_object(create_jcsub18_2470(9232, 1720), 3);
    add_background_object(create_jcsub18_2470(9232, 1592), 3);
    add_background_object(create_jcsub10_2469(9264, 1528), 3);
    add_background_object(create_jcsub11_2483(9872, 1528), 3);
    add_background_object(create_jcsub9_2479(9360, 1528), 3);
    add_background_object(create_jcsub10_2469(9264, 1464), 3);
    add_background_object(create_jcsub11_2483(9872, 1464), 3);
    add_background_object(create_jcsub9_2479(9744, 1464), 3);
    add_background_object(create_jcsub18_2470(9232, 1528), 3);
    add_background_object(create_jcsub18_2470(9232, 1464), 3);
    add_background_object(create_jcsub17_2475(9232, 1400), 3);
    add_background_object(create_jcsub7_2468(9264, 1400), 3);
    add_background_object(create_jcsub1_2476(9744, 1400), 3);
    add_background_object(create_jcsub8_2482(9872, 1400), 3);
    add_background_object(create_jcsubtanker5_2466(8888, 1656), 3);
    add_background_object(create_jcsubtanker6_2467(8952, 1656), 3);
    add_background_object(create_jcsubtanker5_2466(8888, 1592), 3);
    add_background_object(create_jcsubtanker6_2467(8952, 1592), 3);
    add_background_object(create_jcsubtanker5_2466(8888, 1784), 3);
    add_background_object(create_jcsubtanker6_2467(8952, 1784), 3);
    add_background_object(create_jcsubtanker5_2466(8888, 1720), 3);
    add_background_object(create_jcsubtanker6_2467(8952, 1720), 3);
    add_background_object(create_jcsub9_2479(9616, 1464), 3);
    add_background_object(create_jcsub1_2476(9616, 1400), 3);
    add_background_object(create_jcsub9_2479(9488, 1464), 3);
    add_background_object(create_jcsub1_2476(9488, 1400), 3);
    add_background_object(create_jcsub9_2479(9360, 1464), 3);
    add_background_object(create_jcsub1_2476(9360, 1400), 3);
    add_background_object(create_jcsub2_2477(9488, 2104), 3);
    add_background_object(create_jcsub9_2479(9488, 2040), 3);
    add_background_object(create_jcsub9_2479(9488, 1976), 3);
    add_background_object(create_jcsub9_2479(9488, 1912), 3);
    add_background_object(create_jcsub9_2479(9488, 1848), 3);
    add_background_object(create_jcsub9_2479(9488, 1784), 3);
    add_background_object(create_jcsub9_2479(9488, 1720), 3);
    add_background_object(create_jcsub9_2479(9488, 1656), 3);
    add_background_object(create_jcsub9_2479(9488, 1592), 3);
    add_background_object(create_jcsub9_2479(9488, 1528), 3);
    add_background_object(create_jcsub2_2477(9616, 2104), 3);
    add_background_object(create_jcsub9_2479(9616, 2040), 3);
    add_background_object(create_jcsub9_2479(9616, 1976), 3);
    add_background_object(create_jcsub9_2479(9616, 1912), 3);
    add_background_object(create_jcsub9_2479(9616, 1848), 3);
    add_background_object(create_jcsub9_2479(9616, 1784), 3);
    add_background_object(create_jcsub9_2479(9616, 1720), 3);
    add_background_object(create_jcsub9_2479(9616, 1656), 3);
    add_background_object(create_jcsub9_2479(9616, 1592), 3);
    add_background_object(create_jcsub9_2479(9616, 1528), 3);
    add_background_object(create_jcsub2_2477(9744, 2104), 3);
    add_background_object(create_jcsub9_2479(9744, 2040), 3);
    add_background_object(create_jcsub9_2479(9744, 1976), 3);
    add_background_object(create_jcsub9_2479(9744, 1912), 3);
    add_background_object(create_jcsub9_2479(9744, 1848), 3);
    add_background_object(create_jcsub9_2479(9744, 1784), 3);
    add_background_object(create_jcsub9_2479(9744, 1720), 3);
    add_background_object(create_jcsub9_2479(9744, 1656), 3);
    add_background_object(create_jcsub9_2479(9744, 1592), 3);
    add_background_object(create_jcsub9_2479(9744, 1528), 3);
    add_background_object(create_jcsub2_2477(10000, 2104), 3);
    add_background_object(create_jcsub9_2479(10000, 2040), 3);
    add_background_object(create_jcsub9_2479(10000, 1976), 3);
    add_background_object(create_jcsub9_2479(10000, 1912), 3);
    add_background_object(create_jcsub9_2479(10000, 1848), 3);
    add_background_object(create_jcsub9_2479(10000, 1784), 3);
    add_background_object(create_jcsub9_2479(10000, 1720), 3);
    add_background_object(create_jcsub9_2479(10000, 1656), 3);
    add_background_object(create_jcsub2_2477(10128, 2104), 3);
    add_background_object(create_jcsub9_2479(10128, 2040), 3);
    add_background_object(create_jcsub9_2479(10128, 1976), 3);
    add_background_object(create_jcsub9_2479(10128, 1912), 3);
    add_background_object(create_jcsub9_2479(10128, 1848), 3);
    add_background_object(create_jcsub9_2479(10128, 1784), 3);
    add_background_object(create_jcsub9_2479(10128, 1720), 3);
    add_background_object(create_jcsub9_2479(10128, 1656), 3);
    add_background_object(create_jcsub2_2477(10256, 2104), 3);
    add_background_object(create_jcsub9_2479(10256, 2040), 3);
    add_background_object(create_jcsub9_2479(10256, 1976), 3);
    add_background_object(create_jcsub9_2479(10256, 1912), 3);
    add_background_object(create_jcsub9_2479(10256, 1848), 3);
    add_background_object(create_jcsub9_2479(10256, 1784), 3);
    add_background_object(create_jcsub9_2479(10256, 1720), 3);
    add_background_object(create_jcsub9_2479(10256, 1656), 3);
    add_background_object(create_jcsub1_2476(10256, 1592), 3);
    add_background_object(create_jcsub1_2476(10128, 1592), 3);
    add_background_object(create_jcsub1_2476(10000, 1592), 3);
    add_background_object(create_jcsubfin2_2502(9928, 1496), 3);
    add_background_object(create_jcsubtanker5_2466(8520, 1416), 3);
    add_background_object(create_jcsubtanker6_2467(8568, 1416), 3);
    add_background_object(create_jcsubtanker5_2466(8520, 1352), 3);
    add_background_object(create_jcsubtanker6_2467(8568, 1352), 3);
    add_background_object(create_jcsubtanker3_2490(8568, 1176), 3);
    add_background_object(create_jcsubtanker3_2490(8544, 1160), 3);
    add_background_object(create_jcsub21_2495(5776, 1400), 3);
    add_background_object(create_jcsub21_2495(6288, 1400), 3);
    add_background_object(create_jcsub21_2495(6800, 1400), 3);
    add_object(create_objectjumppad_1510(6712, 1224), 3);
    add_object(create_objectjumppad_1510(6648, 1192), 3);
    add_object(create_objectjumppad_1510(6136, 1192), 3);
    add_object(create_effectwarning_1513(-404, 696), 3);
    add_object(create_jcwaterstream1_2416(11264, -144), 3);
    add_object(create_jcwaterstream2_2413(11136, -152), 3);
    add_object(create_jcwaterstream3_2410(11136, -200), 3);
    add_object(create_jcwaterstream4_2409(11264, -200), 3);
    add_object(create_jcwaterstream5_2412(11352, -240), 3);
    add_object(create_jcwaterstream6_2411(11136, -240), 3);
    add_object(create_jcwaterstream7_2362(11112, -216), 3);
    add_object(create_jcwaterstream8_2361(11408, -216), 3);
    add_object(create_enemybubblorbiter_2443(576, 1232), 3);
    add_object(create_gimmickseedspawner_2422(10961, -255), 3);
    add_object(create_objectwhispmaker_751(-320, 2176), 3);
    add_object(create_cameratriggerboss_424(9440, -256), 3);
    add_object(create_layerobject_10(-184, 440), 3);
    add_object(create_cameralimitbossbottom_420(9160, -97), 3);
    add_object(create_cameralimitbossleft_421(8936, -232), 3);
    add_object(create_cameralimitbossright_422(9383, -240), 3);
    add_object(create_cameralimitbosstop_423(9168, -384), 3);
    add_object(create_hazardtorpedolauncher_2496(184, 1648), 3);
    add_object(create_hazardtorpedolauncher_2496(312, 1648), 3);
    add_object(create_hazardtorpedolauncher_2496(440, 1648), 3);
    add_object(create_playerstartingpoint_358(69, 1573), 3);
    add_object(create_laddertop_357(380, 1279), 3);
    add_object(create_monitormetalshield_329(248, 1224), 3);
    add_object(create_monitorearthshield_326(152, 1224), 3);
    add_object(create_hazardtorpedolauncher_2496(808, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(1056, 1648), 3);
    add_object(create_hazardtorpedolauncher_2496(1184, 1648), 3);
    add_object(create_hazardtorpedolauncher_2496(1128, 1336), 3);
    add_object(create_hazardtorpedolauncher_2496(1256, 1336), 3);
    add_object(create_hazardtorpedolauncher_2496(1488, 1544), 3);
    add_object(create_hazardtorpedolauncher_2496(1616, 1544), 3);
    add_object(create_objectcodec_354(2250, 853), 3);
    add_object(create_enemybubblorbiter_2443(2248, 1552), 3);
    add_object(create_enemybubblorbiter_2443(1936, 1120), 3);
    add_object(create_objectcrystal_279(237, 1570), 3);
    add_object(create_objectcrystal_279(301, 1570), 3);
    add_object(create_objectcrystal_279(365, 1570), 3);
    add_object(create_objectcrystal_279(429, 1570), 3);
    add_object(create_objectcrystal_279(493, 1570), 3);
    add_object(create_objectcrystal_279(517, 1226), 3);
    add_object(create_objectcrystal_279(533, 1194), 3);
    add_object(create_objectcrystal_279(637, 1226), 3);
    add_object(create_objectcrystal_279(621, 1194), 3);
    add_object(create_objectcrystal_279(733, 1290), 3);
    add_object(create_objectcrystal_279(733, 1386), 3);
    add_object(create_objectcrystal_279(733, 1322), 3);
    add_object(create_objectcrystal_279(733, 1354), 3);
    add_object(create_objectcrystal_279(765, 1290), 3);
    add_object(create_objectcrystal_279(765, 1386), 3);
    add_object(create_objectcrystal_279(765, 1322), 3);
    add_object(create_objectcrystal_279(765, 1354), 3);
    add_object(create_objectcrystal_279(1005, 1570), 3);
    add_object(create_objectcrystal_279(1053, 1570), 3);
    add_object(create_objectcrystal_279(1101, 1570), 3);
    add_object(create_objectcrystal_279(1149, 1570), 3);
    add_object(create_objectcrystal_279(957, 1570), 3);
    add_object(create_objectcrystal_279(1197, 1570), 3);
    add_object(create_objectcrystal_279(1397, 1762), 3);
    add_object(create_objectcrystal_279(1445, 1762), 3);
    add_object(create_objectcrystal_279(1493, 1762), 3);
    add_object(create_objectcrystal_279(1541, 1762), 3);
    add_object(create_objectcrystal_279(1349, 1762), 3);
    add_object(create_objectcrystal_279(1589, 1762), 3);
    add_object(create_objectcrystal_279(1685, 1762), 3);
    add_object(create_objectcrystal_279(1637, 1762), 3);
    add_object(create_objectcrystal_279(1509, 1466), 3);
    add_object(create_objectcrystal_279(1557, 1466), 3);
    add_object(create_objectcrystal_279(1605, 1466), 3);
    add_object(create_objectcrystal_279(1461, 1466), 3);
    add_object(create_objectcrystal_279(1149, 1258), 3);
    add_object(create_objectcrystal_279(1197, 1258), 3);
    add_object(create_objectcrystal_279(1245, 1258), 3);
    add_object(create_objectcrystal_279(1101, 1258), 3);
    add_object(create_monitorcrate_409(1936, 1400), 3);
    add_object(create_monitorcrate_409(1904, 1544), 3);
    add_object(create_monitorcrate_409(1936, 1544), 3);
    add_object(create_monitorcrate_409(1904, 1256), 3);
    add_object(create_monitorcrate_409(1936, 1256), 3);
    add_object(create_enemybuoybuoy_2418(2936, 2160), 3);
    add_object(create_enemybuoybuoy_2418(3368, 1960), 3);
    add_object(create_enemybuoybuoy_2418(3160, 1872), 3);
    add_object(create_enemybuoybuoy_2418(3168, 2080), 3);
    add_object(create_enemybuoybuoy_2418(3000, 1984), 3);
    add_object(create_objectcrystal_279(573, 1538), 3);
    add_object(create_objectcrystal_279(573, 1490), 3);
    add_object(create_objectcrystal_279(573, 1442), 3);
    add_object(create_objectcrystal_279(573, 1394), 3);
    add_object(create_objectcrystal_279(501, 1338), 3);
    add_object(create_objectcrystal_279(541, 1362), 3);
    add_object(create_objectcrystal_279(453, 1330), 3);
    add_object(create_hazardtorpedolauncher_2496(4496, 1584), 3);
    add_object(create_hazardtorpedolauncher_2496(4624, 1584), 3);
    add_object(create_hazardtorpedolauncher_2496(4752, 1584), 3);
    add_object(create_hazardtorpedolauncher_2496(4880, 1584), 3);
    add_object(create_hazardtorpedolauncher_2496(3984, 1392), 3);
    add_object(create_hazardtorpedolauncher_2496(4112, 1392), 3);
    add_object(create_objectpetal_302(3961, 1481), 3);
    add_object(create_objectpetal_302(4105, 1481), 3);
    add_object(create_objectpetal_302(4033, 1481), 3);
    add_object(create_objectcrystal_279(2845, 2074), 3);
    add_object(create_objectcrystal_279(2813, 2098), 3);
    add_object(create_objectcrystal_279(2797, 2138), 3);
    add_object(create_objectcrystal_279(2797, 2194), 3);
    add_object(create_objectcrystal_279(2813, 2234), 3);
    add_object(create_objectcrystal_279(2845, 2258), 3);
    add_object(create_objectcrystal_279(3765, 1946), 3);
    add_object(create_objectcrystal_279(3805, 1946), 3);
    add_object(create_objectcrystal_279(3845, 1946), 3);
    add_object(create_objectcrystal_279(3765, 1986), 3);
    add_object(create_objectcrystal_279(3805, 1986), 3);
    add_object(create_objectcrystal_279(3845, 1986), 3);
    add_object(create_objectcrystal_279(3765, 2026), 3);
    add_object(create_objectcrystal_279(3805, 2026), 3);
    add_object(create_objectcrystal_279(3845, 2026), 3);
    add_object(create_enemysharktorpedo_2423(4028, 1981), 3);
    add_object(create_enemylimiter_350(4149, 1978), 3);
    add_object(create_enemylimiter_350(3893, 1978), 3);
    add_object(create_enemysharktorpedo_2423(2764, 1845), 3);
    add_object(create_enemylimiter_350(2997, 1842), 3);
    add_object(create_enemylimiter_350(2629, 1842), 3);
    add_object(create_enemymeteorroller_2421(4959, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(4952, 1376), 3);
    add_object(create_enemymeteorroller_2421(5103, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(5096, 1376), 3);
    add_object(create_enemylimiter_350(4917, 1386), 3);
    add_object(create_enemylimiter_350(5309, 1386), 3);
    add_object(create_yellowspringup_434(4800, 1512), 3);
    add_object(create_yellowspringup_434(4672, 1512), 3);
    add_object(create_yellowspringup_434(4544, 1512), 3);
    add_object(create_objectcrystal_279(4597, 1298), 3);
    add_object(create_objectcrystal_279(4645, 1298), 3);
    add_object(create_objectcrystal_279(4621, 1274), 3);
    add_object(create_objectcrystal_279(4733, 1298), 3);
    add_object(create_objectcrystal_279(4781, 1298), 3);
    add_object(create_objectcrystal_279(4757, 1274), 3);
    add_object(create_enemylimiter_350(3965, 1850), 3);
    add_object(create_enemylimiter_350(4149, 1850), 3);
    add_object(create_enemysharktorpedo_2423(4028, 1853), 3);
    add_object(create_enemysharktorpedo_2423(3532, 1853), 3);
    add_object(create_enemylimiter_350(3653, 1850), 3);
    add_object(create_enemylimiter_350(3285, 1850), 3);
    add_object(create_enemymeteorroller_2421(3927, 1316), 3);
    add_object(create_enemymeteorrollerflame_2420(3920, 1312), 3);
    add_object(create_enemymeteorroller_2421(4135, 1316), 3);
    add_object(create_enemymeteorrollerflame_2420(4128, 1312), 3);
    add_object(create_enemylimiter_350(3773, 1322), 3);
    add_object(create_enemylimiter_350(4293, 1322), 3);
    add_object(create_monitorkeystone_562(2600, 1416), 3);
    add_object(create_enemymeteorroller_2421(2559, 1188), 3);
    add_object(create_enemymeteorrollerflame_2420(2552, 1184), 3);
    add_object(create_enemylimiter_350(2445, 1194), 3);
    add_object(create_enemylimiter_350(2717, 1194), 3);
    add_object(create_objectcrystal_279(2469, 1106), 3);
    add_object(create_objectcrystal_279(2509, 1106), 3);
    add_object(create_objectcrystal_279(2549, 1106), 3);
    add_object(create_objectcrystal_279(2589, 1106), 3);
    add_object(create_objectcrystal_279(2629, 1106), 3);
    add_object(create_objectcrystal_279(2669, 1106), 3);
    add_object(create_enemymeteorroller_2421(5471, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(5464, 1376), 3);
    add_object(create_enemymeteorroller_2421(5615, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(5608, 1376), 3);
    add_object(create_enemylimiter_350(5429, 1386), 3);
    add_object(create_enemylimiter_350(5821, 1386), 3);
    add_object(create_hazardtorpedolauncher_2496(5000, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(5128, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(5256, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(5512, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(5640, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(5768, 1456), 3);
    add_object(create_enemymeteorroller_2421(5983, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(5976, 1376), 3);
    add_object(create_enemymeteorroller_2421(6127, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(6120, 1376), 3);
    add_object(create_enemylimiter_350(5941, 1386), 3);
    add_object(create_enemylimiter_350(6333, 1386), 3);
    add_object(create_hazardtorpedolauncher_2496(6024, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(6152, 1456), 3);
    add_object(create_enemybullfrag_2417(6255, 1336), 3);
    add_object(create_enemybullfragmask_2419(6260, 1320), 3);
    add_object(create_enemymeteorroller_2421(6495, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(6488, 1376), 3);
    add_object(create_enemymeteorroller_2421(6639, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(6632, 1376), 3);
    add_object(create_enemylimiter_350(6453, 1386), 3);
    add_object(create_enemylimiter_350(6845, 1386), 3);
    add_object(create_hazardtorpedolauncher_2496(6536, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(6664, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(6792, 1456), 3);
    add_object(create_enemybullfrag_2417(6647, 1128), 3);
    add_object(create_enemybullfragmask_2419(6652, 1112), 3);
    add_object(create_enemymeteorroller_2421(6743, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(6736, 1376), 3);
    add_object(create_enemymeteorroller_2421(6999, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(6992, 1376), 3);
    add_object(create_enemymeteorroller_2421(7287, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(7280, 1376), 3);
    add_object(create_enemylimiter_350(6965, 1386), 3);
    add_object(create_enemylimiter_350(7485, 1386), 3);
    add_object(create_hazardtorpedolauncher_2496(7048, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(7304, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(7432, 1456), 3);
    add_object(create_enemymeteorroller_2421(7383, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(7376, 1376), 3);
    add_object(create_enemymeteorroller_2421(7063, 1380), 3);
    add_object(create_enemymeteorrollerflame_2420(7056, 1376), 3);
    add_object(create_enemybullfrag_2417(7167, 1336), 3);
    add_object(create_enemybullfragmask_2419(7172, 1320), 3);
    add_object(create_objectpetal_302(7681, 1305), 3);
    add_object(create_objectpetal_302(7745, 1305), 3);
    add_object(create_objectpetal_302(7809, 1305), 3);
    add_object(create_objectpetal_302(7673, 1569), 3);
    add_object(create_objectpetal_302(7737, 1569), 3);
    add_object(create_objectpetal_302(7801, 1569), 3);
    add_object(create_hazardtorpedolauncher_2496(7704, 1392), 3);
    add_object(create_hazardtorpedolauncher_2496(7832, 1392), 3);
    add_object(create_objectpetal_302(6161, 1161), 3);
    add_object(create_objectpetal_302(6113, 1161), 3);
    add_object(create_objectcrystal_279(4597, 1194), 3);
    add_object(create_objectcrystal_279(4645, 1194), 3);
    add_object(create_objectcrystal_279(4621, 1170), 3);
    add_object(create_objectcrystal_279(4733, 1194), 3);
    add_object(create_objectcrystal_279(4781, 1194), 3);
    add_object(create_objectcrystal_279(4757, 1170), 3);
    add_object(create_objectcrystal_279(4597, 1090), 3);
    add_object(create_objectcrystal_279(4645, 1090), 3);
    add_object(create_objectcrystal_279(4621, 1066), 3);
    add_object(create_objectcrystal_279(4733, 1090), 3);
    add_object(create_objectcrystal_279(4781, 1090), 3);
    add_object(create_objectcrystal_279(4757, 1066), 3);
    add_object(create_monitorearthshield_326(3504, 2008), 3);
    add_object(create_monitorbomb_563(6408, 1432), 3);
    add_object(create_monitorbomb_563(6920, 1432), 3);
    add_object(create_monitorbomb_563(4120, 2008), 3);
    add_object(create_monitorbomb_563(4088, 2008), 3);
    add_object(create_monitorbomb_563(3064, 1352), 3);
    add_object(create_monitorbomb_563(3096, 1352), 3);
    add_object(create_monitorbomb_563(3368, 1352), 3);
    add_object(create_monitorbomb_563(3400, 1352), 3);
    add_object(create_monitorbomb_563(3432, 1352), 3);
    add_object(create_monitorbomb_563(1904, 1400), 3);
    add_object(create_monitor1up_410(6888, 1944), 3);
    add_object(create_monitorcrate_409(6856, 1944), 3);
    add_object(create_monitorcrate_409(6920, 1944), 3);
    add_object(create_objectcrystal_279(7365, 1866), 3);
    add_object(create_objectcrystal_279(7429, 1866), 3);
    add_object(create_objectcrystal_279(7493, 1866), 3);
    add_object(create_objectcrystal_279(7557, 1866), 3);
    add_object(create_objectcrystal_279(7621, 1866), 3);
    add_object(create_objectcrystal_279(7685, 1866), 3);
    add_object(create_objectcrystal_279(7749, 1866), 3);
    add_object(create_objectcrystal_279(7813, 1866), 3);
    add_object(create_redspringupright_438(7192, 1944), 3);
    add_object(create_redspringupright_438(7224, 1944), 3);
    add_object(create_redspringupright_438(7256, 1944), 3);
    add_object(create_redspringupright_438(7288, 1944), 3);
    add_object(create_redspringupright_438(7320, 1944), 3);
    add_object(create_redspringupright_438(7352, 1944), 3);
    add_object(create_redspringupright_438(7384, 1944), 3);
    add_object(create_redspringupright_438(7416, 1944), 3);
    add_object(create_redspringupright_438(7448, 1944), 3);
    add_object(create_redspringupright_438(7480, 1944), 3);
    add_object(create_sign_351(10240, -235), 3);
    add_object(create_hazardtorpedolauncher_2496(9352, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(9416, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(9480, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(9544, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(9608, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(9672, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(9736, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(9800, 1456), 3);
    add_object(create_hazardtorpedolauncher_2496(9864, 1456), 3);
    add_object(create_yellowspringup_434(9232, 1832), 3);
    add_object(create_yellowspringup_434(9200, 1832), 3);
    add_object(create_yellowspringup_434(9168, 1832), 3);
    add_object(create_yellowspringup_434(9136, 1832), 3);
    add_object(create_yellowspringup_434(9104, 1832), 3);
    add_object(create_monitorcrate_409(8544, 1448), 3);
    add_object(create_monitorcrate_409(8576, 1448), 3);
    add_object(create_monitorfireshield_328(5392, 1432), 3);
    add_object(create_monitorwatershield_327(8936, 1544), 3);
    add_object(create_objectcodec_354(3434, 2229), 3);
    add_object(create_objectcodec_354(8578, 1733), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_jcsubsupportfront_2497(1128, 1488), 4);
    add_background_object(create_jcsubsupportfront_2497(1232, 1488), 4);
    add_background_object(create_jcsubtanker1_2484(1040, 1472), 4);
    add_background_object(create_jcsubtanker2_2486(1224, 1472), 4);
    add_background_object(create_jcsubtanker3_2490(1104, 1472), 4);
    add_background_object(create_jcsubtanker3_2490(1160, 1472), 4);
    add_background_object(create_jcsubsupportfront_2497(1128, 1552), 4);
    add_background_object(create_jcsubsupportfront_2497(1232, 1552), 4);
    add_background_object(create_jcsubsupportfront_2497(1128, 1616), 4);
    add_background_object(create_jcsubsupportfront_2497(1232, 1616), 4);
    add_background_object(create_jcsubsupportfront_2497(1232, 1680), 4);
    add_background_object(create_jcsubsupportfront_2497(1232, 1744), 4);
    add_background_object(create_jcsubsupportfront_2497(1232, 1808), 4);
    add_background_object(create_jcsubsupportfront_2497(1128, 1680), 4);
    add_background_object(create_jcsubtanker1_2484(1080, 1744), 4);
    add_background_object(create_jcsubtanker2_2486(1144, 1744), 4);
    add_background_object(create_jcsubtanker1_2484(1184, 1872), 4);
    add_background_object(create_jcsubtanker2_2486(1248, 1872), 4);
    add_background_object(create_jcsubsupportfront_2497(1488, 1696), 4);
    add_background_object(create_jcsubsupportfront_2497(1592, 1696), 4);
    add_background_object(create_jcsubtanker1_2484(1400, 1680), 4);
    add_background_object(create_jcsubtanker2_2486(1584, 1680), 4);
    add_background_object(create_jcsubtanker3_2490(1464, 1680), 4);
    add_background_object(create_jcsubtanker3_2490(1520, 1680), 4);
    add_background_object(create_jcsubsupportfront_2497(1488, 1760), 4);
    add_background_object(create_jcsubsupportfront_2497(1592, 1760), 4);
    add_background_object(create_jcsubsupportfront_2497(1488, 1824), 4);
    add_background_object(create_jcsubsupportfront_2497(1592, 1824), 4);
    add_background_object(create_jcsubtanker1_2484(1464, 1888), 4);
    add_background_object(create_jcsubtanker2_2486(1592, 1888), 4);
    add_background_object(create_jcsubtanker3_2490(1528, 1888), 4);
    add_background_object(create_jcsubsupportfront_2497(1864, 1592), 4);
    add_background_object(create_jcsubsupportfront_2497(1976, 1592), 4);
    add_background_object(create_jcsubsupportfront_2497(1864, 1656), 4);
    add_background_object(create_jcsubsupportfront_2497(1976, 1656), 4);
    add_background_object(create_jcsubsupportfront_2497(1864, 1720), 4);
    add_background_object(create_jcsubsupportfront_2497(1976, 1720), 4);
    add_background_object(create_jcsubsupportfront_2497(2176, 1592), 4);
    add_background_object(create_jcsubsupportfront_2497(2176, 1656), 4);
    add_background_object(create_jcsubsupportfront_2497(2176, 1720), 4);
    add_background_object(create_jcsubsupportfront_2497(2288, 1592), 4);
    add_background_object(create_jcsubsupportfront_2497(2288, 1656), 4);
    add_background_object(create_jcsubsupportfront_2497(2288, 1720), 4);
    add_background_object(create_jcsubsupportfront_2497(2176, 1784), 4);
    add_background_object(create_jcsubsupportfront_2497(2288, 1784), 4);
    add_background_object(create_jcsubtanker1_2484(2152, 1848), 4);
    add_background_object(create_jcsubtanker3_2490(2216, 1848), 4);
    add_background_object(create_jcsubtanker2_2486(2280, 1848), 4);
    add_background_object(create_jcsubsupportfront_2497(3704, 2232), 4);
    add_background_object(create_jcsubsupportfront_2497(3704, 2168), 4);
    add_background_object(create_jcsubsupportfront_2497(3704, 2104), 4);
    add_background_object(create_jcsubsupportfront_2497(3704, 2040), 4);
    add_background_object(create_jcsubsupportfront_2497(3704, 1976), 4);
    add_background_object(create_jcsubsupportfront_2497(3704, 1912), 4);
    add_background_object(create_jcsubsupportfront_2497(3360, 2232), 4);
    add_background_object(create_jcsubsupportfront_2497(3360, 2168), 4);
    add_background_object(create_jcsubsupportfront_2497(3488, 2232), 4);
    add_background_object(create_jcsubsupportfront_2497(3488, 2168), 4);
    add_background_object(create_jcsubsupportfront_2497(3848, 1592), 4);
    add_background_object(create_jcsubsupportfront_2497(3848, 1528), 4);
    add_background_object(create_jcsubsupportfront_2497(3848, 1464), 4);
    add_background_object(create_jcsubsupportfront_2497(3848, 1720), 4);
    add_background_object(create_jcsubsupportfront_2497(3848, 1656), 4);
    add_background_object(create_jcsubsupportfront_2497(4232, 1592), 4);
    add_background_object(create_jcsubsupportfront_2497(4232, 1528), 4);
    add_background_object(create_jcsubsupportfront_2497(4232, 1464), 4);
    add_background_object(create_jcsubsupportfront_2497(7688, 1528), 4);
    add_background_object(create_jcsubsupportfront_2497(7688, 1464), 4);
    add_background_object(create_jcsubsupportfront_2497(7816, 1528), 4);
    add_background_object(create_jcsubsupportfront_2497(7816, 1464), 4);
    add_background_object(create_jcsubsupportfront_2497(8504, 1784), 4);
    add_background_object(create_jcsubsupportfront_2497(8504, 1848), 4);
    add_background_object(create_jcsubsupportfront_2497(8504, 1912), 4);
    add_background_object(create_jcsubsupportfront_2497(8616, 1784), 4);
    add_background_object(create_jcsubsupportfront_2497(8616, 1848), 4);
    add_background_object(create_jcsubsupportfront_2497(8616, 1912), 4);
    add_background_object(create_jcsubsupportfront_2497(8880, 1784), 4);
    add_background_object(create_jcsubsupportfront_2497(8880, 1848), 4);
    add_background_object(create_jcsubsupportfront_2497(8880, 1912), 4);
    add_background_object(create_jcsubsupportfront_2497(8880, 1592), 4);
    add_background_object(create_jcsubsupportfront_2497(8992, 1784), 4);
    add_background_object(create_jcsubsupportfront_2497(8992, 1848), 4);
    add_background_object(create_jcsubsupportfront_2497(8992, 1912), 4);
    add_background_object(create_jcsubsupportfront_2497(8992, 1592), 4);
    add_background_object(create_jcsubsupportfront_2497(8880, 1656), 4);
    add_background_object(create_jcsubsupportfront_2497(8992, 1656), 4);
    add_background_object(create_jcsubsupportfront_2497(8880, 1720), 4);
    add_background_object(create_jcsubsupportfront_2497(8992, 1720), 4);
    add_background_object(create_jcsubsupportfront_2497(8480, 1192), 4);
    add_background_object(create_jcsubsupportfront_2497(8480, 1256), 4);
    add_background_object(create_jcsubsupportfront_2497(8480, 1320), 4);
    add_background_object(create_jcsubsupportfront_2497(8480, 1384), 4);
    add_background_object(create_jcsubsupportfront_2497(8480, 1416), 4);
    add_background_object(create_jcsubsupportfront_2497(8640, 1192), 4);
    add_background_object(create_jcsubsupportfront_2497(8640, 1256), 4);
    add_background_object(create_jcsubsupportfront_2497(8640, 1320), 4);
    add_background_object(create_jcsubsupportfront_2497(8640, 1384), 4);
    add_background_object(create_jcsubsupportfront_2497(8640, 1416), 4);
    add_background_object(create_jcsub14_2492(6584, 1168), 4);
    add_background_object(create_jcsub15_2493(6648, 1168), 4);
    add_background_object(create_jcsub14_2492(6072, 1168), 4);
    add_background_object(create_jcsub15_2493(6136, 1168), 4);
    add_background_object(create_jcsub14_2492(5560, 1168), 4);
    add_background_object(create_jcsub15_2493(5624, 1168), 4);
    add_background_object(create_jcsub15_2493(2696, 1264), 4);
    add_background_object(create_jcsub14_2492(2440, 1184), 4);
    add_background_object(create_jcsub15_2493(2632, 1184), 4);
    add_background_object(create_jcsub15_2493(2504, 1184), 4);
    add_background_object(create_jcsub14_2492(2568, 1184), 4);
    add_background_object(create_jcsub15_2493(2248, 864), 4);
    add_background_object(create_jcsub14_2492(2184, 864), 4);
    add_background_object(create_jcsub14_2492(3032, 1360), 4);
    add_background_object(create_jcsub15_2493(3096, 1360), 4);
    add_background_object(create_jcsub14_2492(3352, 1360), 4);
    add_background_object(create_jcsub15_2493(3416, 1360), 4);
    add_background_object(create_jcsub15_2493(8576, 1056), 4);
    add_background_object(create_jcsub14_2492(8512, 1056), 4);
    add_background_object(create_jcsub22_2498(5264, 1400), 4);
    add_background_object(create_jcsub22_2498(5776, 1400), 4);
    add_background_object(create_jcsub22_2498(6288, 1400), 4);
    add_background_object(create_jcsub22_2498(6800, 1400), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_950(-208, 392), 5);
    add_object(create_hazardspikesdown_2452(-168, 392), 5);
    add_object(create_hazardspikesleft_2453(-128, 392), 5);
    add_object(create_hazardspikesright_2454(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_bubblepatch_806(-528, 303), 5);
    add_object(create_mediumbubble_769(-518, 314), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiair_759(-16, 96), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_bbls_running = false;
    loop_bbls_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_42, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_42, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_42, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_42, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_42, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_42, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_42, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_42, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_42, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_42, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_42, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_42, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_42, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_42, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_42, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_42, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_42, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_42, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_42, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_42, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_42, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_42, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_42, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_42, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_42, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_42, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_42, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_42, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_42, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_42, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_42, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_42, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_42, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_42, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_42, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_42, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_42, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_42, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_42, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_42, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_42, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_42, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_42, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_42, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_42, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_42, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_42, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_42, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_42, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_42, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_42, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_42, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_42, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_42, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_1696_16 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_1505_16 = loop_count;
    not_always_1502_16 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    once_condition_1584_42 = false;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1401_31 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_172_8 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1695_16 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1504_16 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1531_39 = loop_count;
    not_always_1506_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1697_16 = loop_count;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1516_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1515_16 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    not_always_1405_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1503_16 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1514_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_10017()
{
    // event 2310_43
    {
        if (!(group_main_engine_1)) goto event_2310_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playerothers_123_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playergimmickactions_413_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playerinput_19_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playercharactersensor_383_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(player_389_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensortopbig_395_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensortop_394_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorbottom_396_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorplatform_399_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleft_390_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorright_392_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorslopes_398_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftedge_402_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightedge_403_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftangle_400_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightangle_401_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
    }
    event_2310_43_end: ;
}
void Frames::loop_update_layer_43()
{
    event_func_10017();
}
void Frames::event_func_10018()
{
    // event 1653_43
    {
        if (!(group_main_engine_1)) goto event_1653_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1653_43_end;
        FrameObject * single_instance_1653_43_0; single_instance_1653_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1653_43_0 == NULL)
                    single_instance_1653_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1653_43_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1653_43_0))->force_frame(115+((Active*)get_single(enemyelitemask_2511_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1653_43_end: ;
}
void Frames::event_func_10019()
{
    // event 2093_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2093_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_2093_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_2093_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_2093_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
        }
        FrameObject * single_instance_2093_43_0; single_instance_2093_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectfuel_528(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2093_43_0 == NULL)
                    single_instance_2093_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2093_43_0))->set_y(612);
    }
    event_2093_43_end: ;
}
void Frames::loop_spawndebris_43()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_9424();
    event_func_9426();
    event_func_10018();
    event_func_10019();
}
void Frames::event_func_10020()
{
    // event 1826_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1826_43_end;
        if (!((global_values->get(26)) == (0))) goto event_1826_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1826_43_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1826_43_end: ;
}
void Frames::event_func_10021()
{
    // event 1827_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1827_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1827_43_end: ;
}
void Frames::event_func_10022()
{
    // event 1828_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1828_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1828_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1828_43_end: ;
}
void Frames::event_func_10023()
{
    // event 1868_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1868_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1868_43_end: ;
}
void Frames::loop_voice_43()
{
    event_func_10020();
    event_func_10021();
    event_func_10022();
    event_func_10023();
}
void Frames::event_func_10024()
{
    // event 1710_43
    {
        if (!(group_main_engine_1)) goto event_1710_43_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        if (!group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1) {
            group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
    }
    event_1710_43_end: ;
}
void Frames::loop_cutscene_start_43()
{
    event_func_10024();
}
void Frames::event_func_10025()
{
    // event 1941_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1941_43_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-128, 0);
            pos_end_1941_43_0: ;
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1 = false;
    
    }
    event_1941_43_end: ;
}
void Frames::loop_boss_action_43()
{
    event_func_10025();
}
void Frames::loop_wrapper_sound_hurt1_43(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_43(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_43(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_43(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_43(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_43(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_43(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_43(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_43(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_43(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_43(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_43(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_43(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_43(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_43(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_43(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_43(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_43(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_43(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_43(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_43(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_43(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_43(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_43(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_43(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_43(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_43(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_43(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_43(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_43(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
