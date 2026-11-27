#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_play_music_3_26(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_26(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_26(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_26();
}
void Frames::loop_wrapper_play_music_6_26(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_26();
}
void Frames::loop_wrapper_sound_go0_26(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_26(void * frame)
{
    ((Frames*)frame)->loop_play_music_7_26();
}
void Frames::loop_wrapper_sound_explode3_26(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_26(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_26(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_26(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_26(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_5593()
{
    // event 1658_26
    {
        if (!(group_main_engine_1)) goto event_1658_26_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(3)) > (0))) goto event_1658_26_end;
        if (!((((Active*)col_instance_2)->get_x()) < (((Active*)col_instance_1)->get_x()))) goto event_1658_26_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, ((Active*)col_instance_2)->alterables->values.get(3)*-1);
    }
    event_1658_26_end: ;
}
void Frames::event_func_5594()
{
    // event 1659_26
    {
        if (!(group_main_engine_1)) goto event_1659_26_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(3)) < (0))) goto event_1659_26_end;
        if (!((((Active*)col_instance_2)->get_x()) > (((Active*)col_instance_1)->get_x()))) goto event_1659_26_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, ((Active*)col_instance_2)->alterables->values.get(3)*-1);
    }
    event_1659_26_end: ;
}
void Frames::col_18_26()
{
    event_func_5593();
    event_func_5594();
}
void Frames::event_func_5595()
{
    // event 1855_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1855_26_end;
        if (!((((Active*)col_instance_2)->get_frame()) < (8))) goto event_1855_26_end;
        FrameObject * single_instance_1855_26_0; single_instance_1855_26_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1855_26_0 == NULL)
                single_instance_1855_26_0 = new_obj;
        }
        FrameObject * single_instance_1855_26_1; single_instance_1855_26_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1855_26_1 == NULL)
                single_instance_1855_26_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1855_26_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1855_26_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1855_26_0))->move_back();
        ((Active*)((Active*)single_instance_1855_26_1))->alterables->values.set(1, ((Active*)col_instance_2)->alterables->values.get(4));
    }
    event_1855_26_end: ;
}
void Frames::col_20_26()
{
    event_func_5595();
}
void Frames::event_func_5596()
{
    // event 1851_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1851_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1851_26_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1851_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1851_26_end: ;
}
void Frames::col_21_26()
{
    event_func_5596();
}
void Frames::event_func_5597()
{
    // event 1746_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1746_26_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(1)) > (2))) goto event_1746_26_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1746_26_0; single_instance_1746_26_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1746_26_0 == NULL)
                single_instance_1746_26_0 = new_obj;
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    event_1746_26_end: ;
}
void Frames::col_27_26()
{
    event_func_5597();
}
void Frames::event_func_5598()
{
    // event 1482_26
    {
        if (!(group_main_engine_1)) goto event_1482_26_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(1)) > (0))) goto event_1482_26_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1482_26_0; single_instance_1482_26_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdust_305(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1482_26_0 == NULL)
                single_instance_1482_26_0 = new_obj;
        }
    }
    event_1482_26_end: ;
}
void Frames::col_30_26()
{
    event_func_5598();
}
void Frames::test_collisions_26()
{
    test_collisions(playercharactersensor_383_instances, enemyrock_657_instances, 1, 1, (EventFunction)&Frames::col_4_16);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_19, enemyiris_1183_instances, 1073741824, 1, (EventFunction)&Frames::col_12_24);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyspark_1101_instances, 2, 1, (EventFunction)&Frames::col_4_24);
    test_collisions(playerreflect_447_instances, enemysporeprojectile_969_instances, 1, 1, (EventFunction)&Frames::col_5_24);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, enemysporeprojectile_969_instances, 536870912, 2, (EventFunction)&Frames::col_6_21);
    test_collisions(qualifier_20, playerprojectile_320_instances, 268435456, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 134217728, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 67108864, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(shieldwater_318_instances, enemysporeprojectile_969_instances, 1, 4, (EventFunction)&Frames::col_2_21);
    test_collisions(qualifier_7, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions_save(playerreflect_447_instances, enemyfiresprite_1095_instances, 8, 1, (EventFunction)&Frames::col_15_24);
    test_collisions(playerreflect_447_instances, enemyrock_657_instances, 16, 2, (EventFunction)&Frames::col_14_24);
    test_collisions(qualifier_7, enemyrock_657_instances, 16777216, 4, (EventFunction)&Frames::col_5_16);
    test_collisions(enemylimiter_350_instances, enemyslug_1182_instances, 1, 1, (EventFunction)&Frames::col_16_24);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(enemylimiter_350_instances, enemyfirespitter_1385_instances, 2, 1, (EventFunction)&Frames::col_18_26);
    test_collisions(playercharactersensor_383_instances, enemysporeprojectile_969_instances, 4, 8, (EventFunction)&Frames::col_16_21);
    test_collisions(qualifier_19, minibossflame_1199_instances, 268435456, 1, (EventFunction)&Frames::col_20_26);
    test_collisions(playercharactersensor_383_instances, bossreflectobeam_1282_instances, 8, 1, (EventFunction)&Frames::col_21_26);
    test_collisions(qualifier_20, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 2097152, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(playercharactersensor_383_instances, enemyfiresprite_1095_instances, 16, 2, (EventFunction)&Frames::col_26_24);
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
    for (it1 = breakablecolumn2_1382_instances.begin(); it1 != breakablecolumn2_1382_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_27_26();
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
    for (it1 = breakablespike_1284_instances.begin(); it1 != breakablespike_1284_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_30_26();
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
    for (it1 = enemysporeprojectile_969_instances.begin(); it1 != enemysporeprojectile_969_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_27_21();
    }
    for (it1 = breakablecolumn1_1383_instances.begin(); it1 != breakablecolumn1_1383_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_27_26();
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
void Frames::event_func_5599()
{
    // event 1461_26
    {
        if (!(group_main_engine_1)) goto event_1461_26_end;
        media.unlock(28-1);
        media.stop_sample(SOUND_TROLLEY_262);
    }
    event_1461_26_end: ;
}
void Frames::event_func_5600()
{
    // event 1503_26
    {
        if (!(group_main_engine_1)) goto event_1503_26_end;
        gimmickelevator_1397_instances.clear_selection();
        for (ObjectIterator it(gimmickelevator_1397_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        media.stop_sample(SOUND_COMMON_LIFT_264);
    }
    event_1503_26_end: ;
}
void Frames::on_frame_27_end()
{
    event_func_5599();
    event_func_5600();
}
void Frames::event_func_5601()
{
    // event 3_26
    {
        if (!(group_main_engine_1)) goto event_3_26_end;
        gimmickhangingswitch_1256_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingswitch_1256_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(gimmickhangingidleswitch_1257_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_3_26_end: ;
}
void Frames::event_func_5602()
{
    // event 540_26
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_540_26_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_540_26_end;
        FrameObject * single_instance_540_26_0; single_instance_540_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_540_26_0 == NULL)
                    single_instance_540_26_0 = new_obj;
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
                loop_spawndebris_26();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_540_26_end: ;
}
void Frames::event_func_5603()
{
    // event 557_26
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_557_26_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_557_26_end;
        FrameObject * single_instance_557_26_0; single_instance_557_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_557_26_0 == NULL)
                    single_instance_557_26_0 = new_obj;
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
                loop_spawndebris_26();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_557_26_end: ;
}
void Frames::event_func_5604()
{
    // event 691_26
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_691_26_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_691_26_end;
        FrameObject * single_instance_691_26_0; single_instance_691_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_691_26_0 == NULL)
                    single_instance_691_26_0 = new_obj;
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
                loop_spawndebris_26();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_691_26_end: ;
}
void Frames::event_func_5605()
{
    // event 1380_26
    {
        if (!(group_main_engine_1)) goto event_1380_26_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1380_26_end;
        playersensorbottombig_397_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1380_26_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1380_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_1380_26_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1380_26_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        FrameObject * single_instance_1380_26_0; single_instance_1380_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectjumppad_530_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1380_26_0 == NULL)
                    single_instance_1380_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1380_26_0))->set_scale(0.5);
    }
    event_1380_26_end: ;
}
void Frames::event_func_5606()
{
    // event 1383_26
    {
        if (!(group_main_engine_1)) goto event_1383_26_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1383_26_end;
        playersensorbottombig_397_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1383_26_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1383_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1383_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1383_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1383_26_end: ;
}
void Frames::event_func_5607()
{
    // event 1384_26
    {
        if (!(group_main_engine_1)) goto event_1384_26_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1384_26_end;
        playersensorrightbig_393_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, objectjumppad_530_instances)) goto event_1384_26_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1384_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1384_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1384_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1384_26_end: ;
}
void Frames::event_func_5608()
{
    // event 1385_26
    {
        if (!(group_main_engine_1)) goto event_1385_26_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1385_26_end;
        playersensorleftbig_391_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, objectjumppad_530_instances)) goto event_1385_26_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1385_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1385_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1385_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1385_26_end: ;
}
void Frames::event_func_5609()
{
    // event 1388_26
    {
        if (!(group_main_engine_1)) goto event_1388_26_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1388_26_end;
        if (not_always_1388_26 > loop_count) {
            not_always_1388_26 = loop_count + 2;
            goto event_1388_26_end;
        }
        not_always_1388_26 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1388_26_end: ;
}
void Frames::event_func_5610()
{
    // event 1389_26
    {
        if (!(group_main_engine_1)) goto event_1389_26_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (10400))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1389_26_end;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1389_26_end: ;
}
void Frames::event_func_5611()
{
    // event 1390_26
    {
        if (!(group_main_engine_1)) goto event_1390_26_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1390_26_end;
        if (not_always_1390_26 > loop_count) {
            not_always_1390_26 = loop_count + 2;
            goto event_1390_26_end;
        }
        not_always_1390_26 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1390_26_end: ;
}
void Frames::event_func_5612()
{
    // event 1392_26
    {
        if (!(group_main_engine_1)) goto event_1392_26_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1392_26_end;
        if (not_always_1392_26 > loop_count) {
            not_always_1392_26 = loop_count + 2;
            goto event_1392_26_end;
        }
        not_always_1392_26 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1392_26_end: ;
}
void Frames::event_func_5613()
{
    // event 1393_26
    {
        if (!(group_main_engine_1)) goto event_1393_26_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1393_26_end;
        if (not_always_1393_26 > loop_count) {
            not_always_1393_26 = loop_count + 2;
            goto event_1393_26_end;
        }
        not_always_1393_26 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 150);
        }
    }
    event_1393_26_end: ;
}
void Frames::event_func_5614()
{
    // event 1394_26
    {
        if (!(group_main_engine_1)) goto event_1394_26_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (13))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1394_26_end;
        if (not_always_1394_26 > loop_count) {
            not_always_1394_26 = loop_count + 2;
            goto event_1394_26_end;
        }
        not_always_1394_26 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1394_26_end: ;
}
void Frames::event_func_5615()
{
    // event 1415_26
    {
        if (!(group_main_engine_1)) goto event_1415_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        gimmickrelicflippanel2_1242_instances.clear_selection();
        if (!check_overlap(gimmickpickaxe_1402_instances, gimmickrelicflippanel2_1242_instances)) goto event_1415_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 90);
        }
        for (ObjectIterator it(gimmickrelicflippanel2_1242_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1415_26_end: ;
}
void Frames::event_func_5616()
{
    // event 1416_26
    {
        if (!(group_main_engine_1)) goto event_1416_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(4), 0);
        }
        gimmickpickaxehandle_1400_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxehandle_1400_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickpickaxe_1402_instances, it.current_index));
            if (parent == NULL) goto pos_end_1416_26_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1416_26_0: ;
        }
        for (ObjectIterator it(gimmickpickaxehandle_1400_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(gimmickpickaxe_1402_instances, it.current_index, default_active_instance))->get_angle(), 0);
            ((Active*)*it)->set_direction(((Active*)get_single(gimmickpickaxe_1402_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1416_26_end: ;
}
void Frames::event_func_5617()
{
    // event 1417_26
    {
        if (!(group_main_engine_1)) goto event_1417_26_end;
        gimmickpickaxebase_1401_instances.clear_selection();
        gimmickpickaxehandle_1400_instances.clear_selection();
        if (!check_overlap(gimmickpickaxebase_1401_instances, gimmickpickaxehandle_1400_instances)) goto event_1417_26_end;
        ((Active*)get_instance(gimmickpickaxebase_1401_instances))->set_direction(((Active*)get_single(gimmickpickaxehandle_1400_instances, default_active_instance))->get_direction());
    }
    event_1417_26_end: ;
}
void Frames::event_func_5618()
{
    // event 1418_26
    {
        if (!(group_main_engine_1)) goto event_1418_26_end;
        gimmickpickaxebase2_1403_instances.clear_selection();
        gimmickpickaxehandle_1400_instances.clear_selection();
        if (!check_overlap(gimmickpickaxebase2_1403_instances, gimmickpickaxehandle_1400_instances)) goto event_1418_26_end;
        ((Active*)get_instance(gimmickpickaxebase2_1403_instances))->set_direction(((Active*)get_single(gimmickpickaxehandle_1400_instances, default_active_instance))->get_direction());
    }
    event_1418_26_end: ;
}
void Frames::event_func_5619()
{
    // event 1419_26
    {
        if (!(group_main_engine_1)) goto event_1419_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1419_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3)*0.25);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1419_26_end: ;
}
void Frames::event_func_5620()
{
    // event 1420_26
    {
        if (!(group_main_engine_1)) goto event_1420_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-45))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1420_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1420_26_end: ;
}
void Frames::event_func_5621()
{
    // event 1421_26
    bool or_result_1421_26 = false;
    bool or_temp_result_1421_26_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1421_26_0_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (80))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto or_event_1421_26_0_end;
        or_result_1421_26 = true;
        or_temp_result_1421_26_0 = true;
    }
    or_event_1421_26_0_end: ;
    gimmickpickaxe_1402_instances.clear_saved_selection();
    if (or_temp_result_1421_26_0) {
        gimmickpickaxe_1402_instances.save_selection();
    }
    // event 1421_26
    bool or_temp_result_1421_26_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1421_26_1_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (80))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto or_event_1421_26_1_end;
        or_result_1421_26 = true;
        or_temp_result_1421_26_1 = true;
        or_event_1421_26_1_end: ;
        if (or_temp_result_1421_26_1) {
            gimmickpickaxe_1402_instances.save_selection();
        }
        if (!or_result_1421_26) goto or_final_or_event_1421_26_1_end;
        gimmickpickaxe_1402_instances.empty_selection();
        if (or_temp_result_1421_26_0 || or_temp_result_1421_26_1) {
            gimmickpickaxe_1402_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    or_final_or_event_1421_26_1_end: ;
}
void Frames::event_func_5622()
{
    // event 1422_26
    {
        if (!(group_main_engine_1)) goto event_1422_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (80))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1422_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1422_26_end: ;
}
void Frames::event_func_5623()
{
    // event 1423_26
    {
        if (!(group_main_engine_1)) goto event_1423_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (80))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1423_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3)*0.25);
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1423_26_end: ;
}
void Frames::event_func_5624()
{
    // event 1424_26
    {
        if (!(group_main_engine_1)) goto event_1424_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (45))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1424_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1424_26_end: ;
}
void Frames::event_func_5625()
{
    // event 1425_26
    {
        if (!(group_main_engine_1)) goto event_1425_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (140))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1425_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1425_26_end: ;
}
void Frames::event_func_5626()
{
    // event 1426_26
    {
        if (!(group_main_engine_1)) goto event_1426_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (160))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1426_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1426_26_end: ;
}
void Frames::event_func_5627()
{
    // event 1427_26
    {
        if (!(group_main_engine_1)) goto event_1427_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-180)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(17))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1427_26_end;
        media.play_id(SOUND_MINESTEEL_75, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1427_26_end: ;
}
void Frames::event_func_5628()
{
    // event 1428_26
    {
        if (!(group_main_engine_1)) goto event_1428_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-180)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(17))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1428_26_end;
        media.play_id(SOUND_MINESTEEL_75, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1428_26_end: ;
}
void Frames::event_func_5629()
{
    // event 1429_26
    {
        if (!(group_main_engine_1)) goto event_1429_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(17))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1429_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(17);
        }
    }
    event_1429_26_end: ;
}
void Frames::event_func_5630()
{
    // event 1430_26
    {
        if (!(group_main_engine_1)) goto event_1430_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(17))) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1430_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(17);
        }
    }
    event_1430_26_end: ;
}
void Frames::event_func_5631()
{
    // event 1431_26
    {
        if (!(group_main_engine_1)) goto event_1431_26_end;
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!gimmickpickaxe_1402_instances.has_selection()) goto event_1431_26_end;
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(17);
        }
    }
    event_1431_26_end: ;
}
void Frames::event_func_5632()
{
    // event 1432_26
    {
        if (!(group_main_engine_1)) goto event_1432_26_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1432_26_end;
        playercharactersensor_383_instances.clear_selection();
        gimmickpickaxe_1402_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, gimmickpickaxe_1402_instances)) goto event_1432_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1432_26_end: ;
}
void Frames::event_func_5633()
{
    // event 1433_26
    {
        if (!(group_main_engine_1)) goto event_1433_26_end;
        player_389_instances.clear_selection();
        gimmickspinnycup_1399_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickspinnycup_1399_instances)) goto event_1433_26_end;
        if (!((((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.get(0)) == (0))) goto event_1433_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1433_26_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(gimmickspinnycup_1399_instances))->get_x()))) goto event_1433_26_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_y()+16))) goto event_1433_26_end;
        if (!(((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->flags.is_off(1))) goto event_1433_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 43);
        ((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    event_1433_26_end: ;
}
void Frames::event_func_5634()
{
    // event 1434_26
    {
        if (!(group_main_engine_1)) goto event_1434_26_end;
        if (!(((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->flags.is_on(1))) goto event_1434_26_end;
        ((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.set(1, get_max(((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.get(1)-0.05, -12));
        ((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.add(0, ((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.get(1));
        ((Active*)get_instance(gimmickspinnycup_1399_instances))->set_angle(((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_y());
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_x());
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_y());
        ((Active*)get_instance(playerskinsash_418_instances))->set_x(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_x());
        ((Active*)get_instance(playerskinsash_418_instances))->set_y(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_y());
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_x(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_x());
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_y(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_y());
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_y());
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_y());
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_x());
            ((Active*)*it)->set_y(((Active*)get_instance(gimmickspinnycup_1399_instances))->get_action_y());
        }
    }
    event_1434_26_end: ;
}
void Frames::event_func_5635()
{
    // event 1435_26
    {
        if (!(group_main_engine_1)) goto event_1435_26_end;
        if (!(((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->flags.is_on(1))) goto event_1435_26_end;
        if (!((((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.get(0)) <= (-90))) goto event_1435_26_end;
        ((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.set(0, -90);
        ((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->flags.disable(1);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(gimmickspinnycup_1399_instances))->set_angle(270, 0);
        ((Active*)get_instance(gimmickspinnycup_1399_instances))->alterables->values.set(1, 0);
        FrameObject * single_instance_1435_26_0; single_instance_1435_26_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(gimmickspinnycup_1399_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickhangingidlesensor_740(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1435_26_0 == NULL)
                    single_instance_1435_26_0 = new_obj;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 1);
    }
    event_1435_26_end: ;
}
void Frames::event_func_5636()
{
    // event 1437_26
    {
        if (!(group_main_engine_1)) goto event_1437_26_end;
        gimmickrisingswing_1405_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(((Active*)*it)->alterables->values.get(0), 0), 180));
            ((Active*)*it)->alterables->values.set(4, get_min(get_max(((Active*)*it)->alterables->values.get(4), 0), 180));
        }
        {
            loop_risingswing_running = true;
            int times = int(gimmickrisingswingpiece_1406_instances.size());
            loop_risingswing_index = 0;
            while (loop_risingswing_index < times) {
                loop_risingswing_26();
                if (!loop_risingswing_running) break;
                loop_risingswing_index++;
            }
        }
    }
    event_1437_26_end: ;
}
void Frames::event_func_5637()
{
    // event 1439_26
    {
        if (!(group_main_engine_1)) goto event_1439_26_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickrisingswing_1405_instances)) goto event_1439_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1439_26_end;
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswing_1405_instances.has_selection()) goto event_1439_26_end;
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1439_26_end: ;
}
void Frames::event_func_5638()
{
    // event 1440_26
    {
        if (!(group_main_engine_1)) goto event_1440_26_end;
        gimmickrisingswing_1405_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswing_1405_instances.has_selection()) goto event_1440_26_end;
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.08, 8));
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.08, 8));
        }
    }
    event_1440_26_end: ;
}
void Frames::event_func_5639()
{
    // event 1441_26
    {
        if (!(group_main_engine_1)) goto event_1441_26_end;
        gimmickrisingswing_1405_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (90))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswing_1405_instances.has_selection()) goto event_1441_26_end;
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.08, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.08, 0));
        }
    }
    event_1441_26_end: ;
}
void Frames::event_func_5640()
{
    // event 1442_26
    {
        if (!(group_main_engine_1)) goto event_1442_26_end;
        gimmickrisingswing_1405_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswing_1405_instances.has_selection()) goto event_1442_26_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrisingswing_1405_instances)) goto event_1442_26_end;
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1442_26_end: ;
}
void Frames::event_func_5641()
{
    // event 1443_26
    {
        if (!(group_main_engine_1)) goto event_1443_26_end;
        gimmickrisingswing_1405_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (90))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswing_1405_instances.has_selection()) goto event_1443_26_end;
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.08, -8));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.08, -8));
        }
    }
    event_1443_26_end: ;
}
void Frames::event_func_5642()
{
    // event 1444_26
    {
        if (!(group_main_engine_1)) goto event_1444_26_end;
        gimmickrisingswing_1405_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswing_1405_instances.has_selection()) goto event_1444_26_end;
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.08, 0));
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.08, 0));
        }
    }
    event_1444_26_end: ;
}
void Frames::event_func_5643()
{
    // event 1445_26
    {
        if (!(group_main_engine_1)) goto event_1445_26_end;
        gimmickrisingswing_1405_instances.clear_selection();
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!gimmickrisingswing_1405_instances.has_selection()) goto event_1445_26_end;
        for (ObjectIterator it(gimmickrisingswing_1405_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1445_26_end: ;
}
void Frames::event_func_5644()
{
    // event 1450_26
    {
        if (!(group_main_engine_1)) goto event_1450_26_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1450_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (90))) goto event_1450_26_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1450_26_end: ;
}
void Frames::event_func_5645()
{
    // event 1451_26
    {
        if (!(group_main_engine_1)) goto event_1451_26_end;
        player_389_instances.clear_selection();
        levelhandcarhandle_1414_instances.clear_selection();
        if (!check_overlap(player_389_instances, levelhandcarhandle_1414_instances)) goto event_1451_26_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_single(levelhandcarhandle_1414_instances, default_active_instance))->get_x()-20))) goto event_1451_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (90))) goto event_1451_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1451_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 90);
    }
    event_1451_26_end: ;
}
void Frames::event_func_5646()
{
    // event 1452_26
    {
        if (!(group_main_engine_1)) goto event_1452_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (90))) goto event_1452_26_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1452_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+0.15);
        }
    }
    event_1452_26_end: ;
}
void Frames::event_func_5647()
{
    // event 1453_26
    {
        if (!(group_main_engine_1)) goto event_1453_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (90))) goto event_1453_26_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_1453_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)-0.15);
        }
    }
    event_1453_26_end: ;
}
void Frames::event_func_5648()
{
    // event 1454_26
    {
        if (!(group_main_engine_1)) goto event_1454_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (90))) goto event_1454_26_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(7);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 51);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_min(get_abs(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(1)*15), 50));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1454_26_end: ;
}
void Frames::event_func_5649()
{
    // event 1455_26
    {
        if (!(group_main_engine_1)) goto event_1455_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (90))) goto event_1455_26_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1455_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1455_26_end: ;
}
void Frames::event_func_5650()
{
    // event 1456_26
    {
        if (!(group_main_engine_1)) goto event_1456_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1456_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (90))) goto event_1456_26_end;
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
    }
    event_1456_26_end: ;
}
void Frames::event_func_5651()
{
    // event 1457_26
    {
        if (!(group_main_engine_1)) goto event_1457_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(0)*-0.003);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*0.98);
        }
    }
    event_1457_26_end: ;
}
void Frames::event_func_5652()
{
    // event 1458_26
    {
        if (!(group_main_engine_1)) goto event_1458_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (90))) goto event_1458_26_end;
        media.lock(28-1);
        media.set_channel_volume(28-1, get_min(get_abs(((Active*)get_instance(levelhandcar_1415_instances, default_active_instance))->alterables->values.get(1)*100), 100));
        media.set_sample_frequency(SOUND_TROLLEY_262, 22050+get_abs(((Active*)get_instance(levelhandcar_1415_instances, default_active_instance))->alterables->values.get(1))*5000);
    }
    event_1458_26_end: ;
}
void Frames::event_func_5653()
{
    // event 1459_26
    {
        if (!(group_main_engine_1)) goto event_1459_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (90))) goto event_1459_26_end;
        if (!(!media.is_sample_playing(SOUND_TROLLEY_262))) goto event_1459_26_end;
        media.play_id(SOUND_TROLLEY_262, 28-1, 0);
    }
    event_1459_26_end: ;
}
void Frames::event_func_5654()
{
    // event 1460_26
    {
        if (!(group_main_engine_1)) goto event_1460_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (90))) goto event_1460_26_end;
        media.unlock(28-1);
        media.stop_sample(SOUND_TROLLEY_262);
    }
    event_1460_26_end: ;
}
void Frames::event_func_5655()
{
    // event 1462_26
    {
        if (!(group_main_engine_1)) goto event_1462_26_end;
        levelhandcarfloor3_1419_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor3_1419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_action_x()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*45+sin_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*4);
            ((Active*)*it)->set_y(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_action_y()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*4-sin_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*45);
        }
        ((Active*)get_instance(switchwallplate_814_instances))->set_visible(true);
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.disable(0);
    }
    event_1462_26_end: ;
}
void Frames::event_func_5656()
{
    // event 1463_26
    {
        if (!(group_main_engine_1)) goto event_1463_26_end;
        levelhandcarfloor3_1419_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor3_1419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!levelhandcarfloor3_1419_instances.has_selection()) goto event_1463_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1463_26_end;
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-0.5);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1463_26_end: ;
}
void Frames::event_func_5657()
{
    // event 1464_26
    {
        if (!(group_main_engine_1)) goto event_1464_26_end;
        levelhandcarfloor3_1419_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        if (!check_overlap(levelhandcarfloor3_1419_instances, hazardspikesup_558_instances)) goto event_1464_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (3))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1464_26_end;
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-0.5);
        }
    }
    event_1464_26_end: ;
}
void Frames::event_func_5658()
{
    // event 1465_26
    {
        if (!(group_main_engine_1)) goto event_1465_26_end;
        levelhandcarfloor3_1419_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(levelhandcarfloor3_1419_instances, switchwallplate_814_instances)) goto event_1465_26_end;
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(switchwallplate_814_instances))->set_visible(false);
    }
    event_1465_26_end: ;
}
void Frames::event_func_5659()
{
    // event 1466_26
    {
        if (!(group_main_engine_1)) goto event_1466_26_end;
        levelhandcarfloor3_1419_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor3_1419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_action_x()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-45+sin_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*4);
            ((Active*)*it)->set_y(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_action_y()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*4-sin_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-45);
        }
        ((Active*)get_instance(switchwallplate2_1421_instances))->set_visible(true);
        ((Active*)get_instance(switchwallplate2_1421_instances))->alterables->flags.disable(0);
    }
    event_1466_26_end: ;
}
void Frames::event_func_5660()
{
    // event 1467_26
    {
        if (!(group_main_engine_1)) goto event_1467_26_end;
        levelhandcarfloor3_1419_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor3_1419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!levelhandcarfloor3_1419_instances.has_selection()) goto event_1467_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1467_26_end;
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-0.5);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1467_26_end: ;
}
void Frames::event_func_5661()
{
    // event 1468_26
    {
        if (!(group_main_engine_1)) goto event_1468_26_end;
        levelhandcarfloor3_1419_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        if (!check_overlap(levelhandcarfloor3_1419_instances, hazardspikesup_558_instances)) goto event_1468_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (-3))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1468_26_end;
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)*-0.5);
        }
    }
    event_1468_26_end: ;
}
void Frames::event_func_5662()
{
    // event 1469_26
    {
        if (!(group_main_engine_1)) goto event_1469_26_end;
        levelhandcarfloor3_1419_instances.clear_selection();
        switchwallplate2_1421_instances.clear_selection();
        if (!check_overlap(levelhandcarfloor3_1419_instances, switchwallplate2_1421_instances)) goto event_1469_26_end;
        ((Active*)get_instance(switchwallplate2_1421_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(switchwallplate2_1421_instances))->set_visible(false);
    }
    event_1469_26_end: ;
}
void Frames::event_func_5663()
{
    // event 1471_26
    bool or_result_1471_26 = false;
    bool or_temp_result_1471_26_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1471_26_0_end;
        playersensorleftbig_391_instances.clear_selection();
        switchwallplate2_1421_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchwallplate2_1421_instances)) goto or_event_1471_26_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1471_26_0_end;
        or_result_1471_26 = true;
        or_temp_result_1471_26_0 = true;
    }
    or_event_1471_26_0_end: ;
    switchwallplate2_1421_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1471_26_0) {
        playermovementvalues_245_instances.save_selection();
        switchwallplate2_1421_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1471_26
    bool or_temp_result_1471_26_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1471_26_1_end;
        playersensorleftbig_391_instances.clear_selection();
        switchwallplate2_1421_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchwallplate2_1421_instances)) goto or_event_1471_26_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1471_26_1_end;
        or_result_1471_26 = true;
        or_temp_result_1471_26_1 = true;
        or_event_1471_26_1_end: ;
        if (or_temp_result_1471_26_1) {
            playermovementvalues_245_instances.save_selection();
            switchwallplate2_1421_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_1471_26) goto or_final_or_event_1471_26_1_end;
        switchwallplate2_1421_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        if (or_temp_result_1471_26_0 || or_temp_result_1471_26_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1471_26_0 || or_temp_result_1471_26_1) {
            switchwallplate2_1421_instances.restore_selection();
        }
        if (or_temp_result_1471_26_0 || or_temp_result_1471_26_1) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(switchwallplate2_1421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1471_26_1_end: ;
}
void Frames::event_func_5664()
{
    // event 1472_26
    {
        if (!(group_main_engine_1)) goto event_1472_26_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(0))) goto event_1472_26_end;
        if (not_always_1472_26 > loop_count) {
            not_always_1472_26 = loop_count + 2;
            goto event_1472_26_end;
        }
        not_always_1472_26 = loop_count + 2;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
    }
    event_1472_26_end: ;
}
void Frames::event_func_5665()
{
    // event 1473_26
    {
        if (!(group_main_engine_1)) goto event_1473_26_end;
        if (!(((Active*)get_instance(switchwallplate2_1421_instances))->alterables->flags.is_on(0))) goto event_1473_26_end;
        if (not_always_1473_26 > loop_count) {
            not_always_1473_26 = loop_count + 2;
            goto event_1473_26_end;
        }
        not_always_1473_26 = loop_count + 2;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
    }
    event_1473_26_end: ;
}
void Frames::event_func_5666()
{
    // event 1474_26
    bool or_result_1474_26 = false;
    bool or_temp_result_1474_26_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1474_26_0_end;
        switchwallplate_814_instances.clear_selection();
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchwallplate_814_instances.has_selection()) goto or_event_1474_26_0_end;
        levelminetrackswitch_1413_instances.clear_selection();
        for (ObjectIterator it(levelminetrackswitch_1413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!levelminetrackswitch_1413_instances.has_selection()) goto or_event_1474_26_0_end;
        or_result_1474_26 = true;
        or_temp_result_1474_26_0 = true;
    }
    or_event_1474_26_0_end: ;
    levelminetrackswitch_1413_instances.clear_saved_selection();
    switchwallplate_814_instances.clear_saved_selection();
    if (or_temp_result_1474_26_0) {
        levelminetrackswitch_1413_instances.save_selection();
        switchwallplate_814_instances.save_selection();
    }
    // event 1474_26
    bool or_temp_result_1474_26_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1474_26_1_end;
        switchwallplate2_1421_instances.clear_selection();
        for (ObjectIterator it(switchwallplate2_1421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchwallplate2_1421_instances.has_selection()) goto or_event_1474_26_1_end;
        levelminetrackswitch_1413_instances.clear_selection();
        for (ObjectIterator it(levelminetrackswitch_1413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!levelminetrackswitch_1413_instances.has_selection()) goto or_event_1474_26_1_end;
        or_result_1474_26 = true;
        or_temp_result_1474_26_1 = true;
        or_event_1474_26_1_end: ;
        switchwallplate2_1421_instances.clear_saved_selection();
        if (or_temp_result_1474_26_1) {
            levelminetrackswitch_1413_instances.save_selection();
            switchwallplate2_1421_instances.save_selection();
        }
        if (!or_result_1474_26) goto or_final_or_event_1474_26_1_end;
        levelminetrackswitch_1413_instances.empty_selection();
        switchwallplate2_1421_instances.empty_selection();
        switchwallplate_814_instances.empty_selection();
        if (or_temp_result_1474_26_1) {
            switchwallplate2_1421_instances.restore_selection();
        }
        if (or_temp_result_1474_26_0 || or_temp_result_1474_26_1) {
            levelminetrackswitch_1413_instances.restore_selection();
        }
        if (or_temp_result_1474_26_0) {
            switchwallplate_814_instances.restore_selection();
        }
        for (ObjectIterator it(levelminetrackswitch_1413_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0-((Active*)*it)->alterables->values.get(1));
        }
    }
    or_final_or_event_1474_26_1_end: ;
}
void Frames::event_func_5667()
{
    // event 1475_26
    {
        if (!(group_main_engine_1)) goto event_1475_26_end;
        levelminetrackswitch_1413_instances.clear_selection();
        for (ObjectIterator it(levelminetrackswitch_1413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!levelminetrackswitch_1413_instances.has_selection()) goto event_1475_26_end;
        for (ObjectIterator it(levelminetrackswitch_1413_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2), 0);
        }
    }
    event_1475_26_end: ;
}
void Frames::event_func_5668()
{
    // event 1476_26
    bool or_result_1476_26 = false;
    bool or_temp_result_1476_26_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1476_26_0_end;
        levelminetrackswitch_1413_instances.clear_selection();
        for (ObjectIterator it(levelminetrackswitch_1413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelminetrackswitch_1413_instances.has_selection()) goto or_event_1476_26_0_end;
        or_result_1476_26 = true;
        or_temp_result_1476_26_0 = true;
    }
    or_event_1476_26_0_end: ;
    levelminetrackswitch_1413_instances.clear_saved_selection();
    if (or_temp_result_1476_26_0) {
        levelminetrackswitch_1413_instances.save_selection();
    }
    // event 1476_26
    bool or_temp_result_1476_26_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1476_26_1_end;
        levelminetrackswitch_1413_instances.clear_selection();
        for (ObjectIterator it(levelminetrackswitch_1413_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (25))) { it.deselect(); continue; }
        }
        if (!levelminetrackswitch_1413_instances.has_selection()) goto or_event_1476_26_1_end;
        or_result_1476_26 = true;
        or_temp_result_1476_26_1 = true;
        or_event_1476_26_1_end: ;
        if (or_temp_result_1476_26_1) {
            levelminetrackswitch_1413_instances.save_selection();
        }
        if (!or_result_1476_26) goto or_final_or_event_1476_26_1_end;
        levelminetrackswitch_1413_instances.empty_selection();
        if (or_temp_result_1476_26_0 || or_temp_result_1476_26_1) {
            levelminetrackswitch_1413_instances.restore_selection();
        }
        for (ObjectIterator it(levelminetrackswitch_1413_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    or_final_or_event_1476_26_1_end: ;
}
void Frames::event_func_5669()
{
    // event 1477_26
    {
        if (!(group_main_engine_1)) goto event_1477_26_end;
        levelhandcar_1415_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        if (!check_overlap(levelhandcar_1415_instances, hazardspikesup_558_instances)) goto event_1477_26_end;
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (3))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1477_26_end;
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(24, -2);
        }
    }
    event_1477_26_end: ;
}
void Frames::event_func_5670()
{
    // event 1478_26
    {
        if (!(group_main_engine_1)) goto event_1478_26_end;
        levelhandcar_1415_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        if (!check_overlap(levelhandcar_1415_instances, hazardspikesup_558_instances)) goto event_1478_26_end;
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (-3))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1478_26_end;
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(24, -2);
        }
    }
    event_1478_26_end: ;
}
void Frames::event_func_5671()
{
    // event 1479_26
    {
        if (!(group_main_engine_1)) goto event_1479_26_end;
        hazardspikesup_558_instances.clear_selection();
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!hazardspikesup_558_instances.has_selection()) goto event_1479_26_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablespike_1284_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(hazardspikesup_558_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablespike_1284(parent->x + 4, parent->y + 16), parent->layer);
                breakablespike_1284_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablespike_1284(parent->x + 12, parent->y + 16), parent->layer);
                breakablespike_1284_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablespike_1284(parent->x + 20, parent->y + 16), parent->layer);
                breakablespike_1284_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakablespike_1284(parent->x + 28, parent->y + 16), parent->layer);
                breakablespike_1284_instances.add_back();
            }
        }
        for (ObjectIterator it(breakablespike_1284_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(hazardspikesup_558_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(hazardspikesup_558_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1479_26_end: ;
}
void Frames::event_func_5672()
{
    // event 1480_26
    {
        if (!(group_main_engine_1)) goto event_1480_26_end;
        breakablespike_1284_instances.clear_selection();
        for (ObjectIterator it(breakablespike_1284_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
        }
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-1, 0));
        }
    }
    event_1480_26_end: ;
}
