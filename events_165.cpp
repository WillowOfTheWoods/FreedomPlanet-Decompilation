#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_play_music_0_59(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_59(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_59(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_59(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_59(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_59();
}
void Frames::loop_wrapper_play_music_6_59(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_go0_59(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_59(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_explode3_59(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_59(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_59(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_59(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_59(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::test_collisions_59()
{
    test_collisions(shieldflamefront_316_instances, gimmickfireball_1096_instances, 1, 1, (EventFunction)&Frames::col_19_22);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyspark_1101_instances, 1, 1, (EventFunction)&Frames::col_4_24);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 268435456, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 134217728, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 67108864, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(enemylimiter_350_instances, enemymeteorroller_2421_instances, 1, 1, (EventFunction)&Frames::col_16_39);
    test_collisions(playercharactersensor_383_instances, gimmickfireball_1096_instances, 2, 2, (EventFunction)&Frames::col_11_24);
    test_collisions(qualifier_7, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemyrock_657_instances, 8, 1, (EventFunction)&Frames::col_14_24);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 4, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(qualifier_7, minibosstreddbomb_1015_instances, 4194304, 1, (EventFunction)&Frames::col_17_22);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playerreflect_447_instances, gimmickfireball_1096_instances, 16, 4, (EventFunction)&Frames::col_20_24);
    test_collisions(qualifier_7, enemyrock_657_instances, 1048576, 2, (EventFunction)&Frames::col_5_16);
    test_collisions(playercharactersensor_383_instances, enemyrock_657_instances, 8, 4, (EventFunction)&Frames::col_4_16);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 524288, 8, (EventFunction)&Frames::col_8_20);
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
        col_20_20();
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
void Frames::event_func_12991()
{
    // event 535_59
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_535_59_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_535_59_end;
        FrameObject * single_instance_535_59_0; single_instance_535_59_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_535_59_0 == NULL)
                    single_instance_535_59_0 = new_obj;
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
                loop_spawndebris_59();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_535_59_end: ;
}
void Frames::event_func_12992()
{
    // event 552_59
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_552_59_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_552_59_end;
        FrameObject * single_instance_552_59_0; single_instance_552_59_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_552_59_0 == NULL)
                    single_instance_552_59_0 = new_obj;
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
                loop_spawndebris_59();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_552_59_end: ;
}
void Frames::event_func_12993()
{
    // event 686_59
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_686_59_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_686_59_end;
        FrameObject * single_instance_686_59_0; single_instance_686_59_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_686_59_0 == NULL)
                    single_instance_686_59_0 = new_obj;
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
                loop_spawndebris_59();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_686_59_end: ;
}
void Frames::event_func_12994()
{
    // event 1401_59
    {
        if (!(group_main_engine_1)) goto event_1401_59_end;
        gimmicksnowspiremask_3247_instances.clear_selection();
        for (ObjectIterator it(gimmicksnowspiremask_3247_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+cos_deg(((Active*)*it)->alterables->values.get(2))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)-sin_deg(((Active*)*it)->alterables->values.get(2))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(2)-90, 0);
        }
        bgsolarpanel_3210_instances.clear_selection();
        for (ObjectIterator it(bgsolarpanel_3210_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%20);
        }
    }
    event_1401_59_end: ;
}
void Frames::event_func_12995()
{
    // event 1402_59
    {
        if (!(group_main_engine_1)) goto event_1402_59_end;
        gimmicksnowspiremask_3247_instances.clear_selection();
        for (ObjectIterator it(gimmicksnowspiremask_3247_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-200))) { it.deselect(); continue; }
        }
        if (!gimmicksnowspiremask_3247_instances.has_selection()) goto event_1402_59_end;
        for (ObjectIterator it(gimmicksnowspiremask_3247_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1402_59_end: ;
}
void Frames::event_func_12996()
{
    // event 1403_59
    {
        if (!(group_main_engine_1)) goto event_1403_59_end;
        gimmicksnowspiremask_3247_instances.clear_selection();
        for (ObjectIterator it(gimmicksnowspiremask_3247_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-200)) { it.deselect(); continue; }
        }
        if (!gimmicksnowspiremask_3247_instances.has_selection()) goto event_1403_59_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
    }
    event_1403_59_end: ;
}
void Frames::event_func_12997()
{
    // event 1404_59
    {
        if (!(group_main_engine_1)) goto event_1404_59_end;
        gimmicksnowspiremask_3247_instances.clear_selection();
        for (ObjectIterator it(gimmicksnowspiremask_3247_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-300)) { it.deselect(); continue; }
        }
        if (!gimmicksnowspiremask_3247_instances.has_selection()) goto event_1404_59_end;
        if (!(!media.is_sample_playing(SOUND_RUMBLEDEEP_110))) goto event_1404_59_end;
        media.play_id(SOUND_RUMBLEDEEP_110, -1, 1);
    }
    event_1404_59_end: ;
}
void Frames::event_func_12998()
{
    // event 1405_59
    {
        if (!(group_main_engine_1)) goto event_1405_59_end;
        gimmicksnowspiremask_3247_instances.clear_selection();
        for (ObjectIterator it(gimmicksnowspiremask_3247_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!gimmicksnowspiremask_3247_instances.has_selection()) goto event_1405_59_end;
        for (ObjectIterator it(gimmicksnowspiremask_3247_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1.5);
        }
    }
    event_1405_59_end: ;
}
void Frames::event_func_12999()
{
    // event 1406_59
    {
        if (!(group_main_engine_1)) goto event_1406_59_end;
        gimmicksnowspire_3209_instances.clear_selection();
        for (ObjectIterator it(gimmicksnowspire_3209_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmicksnowspiremask_3247_instances, it.current_index));
            if (parent == NULL) goto pos_end_1406_59_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1406_59_0: ;
        }
        for (ObjectIterator it(gimmicksnowspire_3209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(gimmicksnowspiremask_3247_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1406_59_end: ;
}
void Frames::event_func_13000()
{
    // event 1408_59
    {
        if (!(group_main_engine_1)) goto event_1408_59_end;
        if (!((((Active*)get_instance(objectteleblock_3202_instances, default_active_instance))->layer->index+1) >= (((Active*)get_instance(objectteleblockmask_3246_instances, default_active_instance))->layer->index+1-1))) goto event_1408_59_end;
        objectteleblock_3202_instances.clear_selection();
        for (ObjectIterator it(objectteleblock_3202_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->layer->index+1-1-1);
        }
    }
    event_1408_59_end: ;
}
void Frames::event_func_13001()
{
    // event 1409_59
    {
        if (!(group_main_engine_1)) goto event_1409_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1409_59_end;
        if (once_condition_1409_59) goto event_1409_59_end;
        once_condition_1409_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -15);
        }
    }
    event_1409_59_end: ;
}
void Frames::event_func_13002()
{
    // event 1410_59
    {
        if (!(group_main_engine_1)) goto event_1410_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1410_59_end;
        if (once_condition_1410_59) goto event_1410_59_end;
        once_condition_1410_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -30);
        }
    }
    event_1410_59_end: ;
}
void Frames::event_func_13003()
{
    // event 1411_59
    {
        if (!(group_main_engine_1)) goto event_1411_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (6))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1411_59_end;
        if (once_condition_1411_59) goto event_1411_59_end;
        once_condition_1411_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -45);
        }
    }
    event_1411_59_end: ;
}
void Frames::event_func_13004()
{
    // event 1412_59
    {
        if (!(group_main_engine_1)) goto event_1412_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (7))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1412_59_end;
        if (once_condition_1412_59) goto event_1412_59_end;
        once_condition_1412_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -30);
        }
    }
    event_1412_59_end: ;
}
void Frames::event_func_13005()
{
    // event 1413_59
    {
        if (!(group_main_engine_1)) goto event_1413_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (8))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1413_59_end;
        if (once_condition_1413_59) goto event_1413_59_end;
        once_condition_1413_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -15);
        }
    }
    event_1413_59_end: ;
}
void Frames::event_func_13006()
{
    // event 1414_59
    {
        if (!(group_main_engine_1)) goto event_1414_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (30))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1414_59_end;
        if (once_condition_1414_59) goto event_1414_59_end;
        once_condition_1414_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 15);
        }
    }
    event_1414_59_end: ;
}
void Frames::event_func_13007()
{
    // event 1415_59
    {
        if (!(group_main_engine_1)) goto event_1415_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (31))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1415_59_end;
        if (once_condition_1415_59) goto event_1415_59_end;
        once_condition_1415_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 30);
        }
    }
    event_1415_59_end: ;
}
void Frames::event_func_13008()
{
    // event 1416_59
    {
        if (!(group_main_engine_1)) goto event_1416_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (35))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1416_59_end;
        if (once_condition_1416_59) goto event_1416_59_end;
        once_condition_1416_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 45);
        }
    }
    event_1416_59_end: ;
}
void Frames::event_func_13009()
{
    // event 1417_59
    {
        if (!(group_main_engine_1)) goto event_1417_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (36))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1417_59_end;
        if (once_condition_1417_59) goto event_1417_59_end;
        once_condition_1417_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 30);
        }
    }
    event_1417_59_end: ;
}
void Frames::event_func_13010()
{
    // event 1418_59
    {
        if (!(group_main_engine_1)) goto event_1418_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (37))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1418_59_end;
        if (once_condition_1418_59) goto event_1418_59_end;
        once_condition_1418_59 = true;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 15);
        }
    }
    event_1418_59_end: ;
}
void Frames::event_func_13011()
{
    // event 1419_59
    {
        if (!(group_main_engine_1)) goto event_1419_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1419_59_end: ;
}
void Frames::event_func_13012()
{
    // event 1420_59
    {
        if (!(group_main_engine_1)) goto event_1420_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+150))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1420_59_end;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
    }
    event_1420_59_end: ;
}
void Frames::event_func_13013()
{
    // event 1421_59
    {
        if (!(group_main_engine_1)) goto event_1421_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1421_59_end;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 20);
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+5)%math_helper%360);
        }
    }
    event_1421_59_end: ;
}
void Frames::event_func_13014()
{
    // event 1422_59
    {
        if (!(group_main_engine_1)) goto event_1422_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (320))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1422_59_end;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+5)%math_helper%360);
            ((Active*)*it)->alterables->values.add(2, 20);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1422_59_end: ;
}
void Frames::event_func_13015()
{
    // event 1423_59
    {
        if (!(group_main_engine_1)) goto event_1423_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!objectteleblockmask_3246_instances.has_selection()) goto event_1423_59_end;
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        effectswhiteburst_5_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectteleblockmask_3246_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + -24, parent->y + -24), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 24, parent->y + -24), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 24, parent->y + 24), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + -24, parent->y + 24), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
    }
    event_1423_59_end: ;
}
void Frames::event_func_13016()
{
    // event 1424_59
    {
        if (!(group_main_engine_1)) goto event_1424_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        objectteleblock_3202_instances.clear_selection();
        for (ObjectIterator it(objectteleblock_3202_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->alterables->values.get(3)*10*(((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->alterables->values.get(2)*0.0025), 0);
            ((Active*)*it)->set_x(((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(objectteleblockmask_3246_instances, it.current_index, default_active_instance))->alterables->values.get(2));
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%12);
        }
    }
    event_1424_59_end: ;
}
void Frames::event_func_13017()
{
    // event 1425_59
    {
        if (!(group_main_engine_1)) goto event_1425_59_end;
        objectteleblock_3202_instances.clear_selection();
        for (ObjectIterator it(objectteleblock_3202_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (320))) { it.deselect(); continue; }
        }
        if (!objectteleblock_3202_instances.has_selection()) goto event_1425_59_end;
        for (ObjectIterator it(objectteleblock_3202_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1425_59_end: ;
}
void Frames::event_func_13018()
{
    // event 1426_59
    {
        if (!(group_main_engine_1)) goto event_1426_59_end;
        player_389_instances.clear_selection();
        gimmickspiralslidestart_3248_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickspiralslidestart_3248_instances)) goto event_1426_59_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) >= (((Active*)get_single(gimmickspiralslidestart_3248_instances, default_active_instance))->get_y()))) goto event_1426_59_end;
        for (ObjectIterator it(gimmickspiralslidestart_3248_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickspiralslidestart_3248_instances.has_selection()) goto event_1426_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1426_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1426_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1426_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (-3))) goto event_1426_59_end;
        for (ObjectIterator it(gimmickspiralslidestart_3248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 96);
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        for (ObjectIterator it(gimmickspiralslidestart_3248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.7, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*0.7));
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1426_59_end: ;
}
void Frames::event_func_13019()
{
    // event 1427_59
    {
        if (!(group_main_engine_1)) goto event_1427_59_end;
        gimmickspiralslidestart_3248_instances.clear_selection();
        for (ObjectIterator it(gimmickspiralslidestart_3248_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickspiralslidestart_3248_instances.has_selection()) goto event_1427_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (96))) goto event_1427_59_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(gimmickspiralslidestart_3248_instances, default_active_instance))->get_x()+sin_deg(((Active*)get_single(gimmickspiralslidestart_3248_instances, default_active_instance))->alterables->values.get(1)*2.5)*24);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickspiralslidestart_3248_instances, default_active_instance))->get_y()+((Active*)get_single(gimmickspiralslidestart_3248_instances, default_active_instance))->alterables->values.get(1));
        for (ObjectIterator it(gimmickspiralslidestart_3248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_single(gimmickspiralslidestart_3248_instances, default_active_instance))->alterables->values.get(3)*1.2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(((Active*)get_single(gimmickspiralslidestart_3248_instances, default_active_instance))->alterables->values.get(3)*5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        for (ObjectIterator it(gimmickspiralslidestart_3248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.1, 10));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(((Active*)get_single(gimmickspiralslidestart_3248_instances, it.current_index, default_active_instance))->alterables->values.get(3)*5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(((Active*)get_single(gimmickspiralslidestart_3248_instances, it.current_index, default_active_instance))->alterables->values.get(3)*5);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(((Active*)get_single(gimmickspiralslidestart_3248_instances, it.current_index, default_active_instance))->alterables->values.get(3)*5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(((Active*)get_single(gimmickspiralslidestart_3248_instances, it.current_index, default_active_instance))->alterables->values.get(3)*5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(((Active*)get_single(gimmickspiralslidestart_3248_instances, it.current_index, default_active_instance))->alterables->values.get(3)*5);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(((Active*)get_single(gimmickspiralslidestart_3248_instances, default_active_instance))->alterables->values.get(3)*5);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(((Active*)get_single(gimmickspiralslidestart_3248_instances, it.current_index, default_active_instance))->alterables->values.get(3)*5);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(((Active*)get_single(gimmickspiralslidestart_3248_instances, it.current_index, default_active_instance))->alterables->values.get(3)*5);
        }
    }
    event_1427_59_end: ;
}
void Frames::event_func_13020()
{
    // event 1428_59
    {
        if (!(group_main_engine_1)) goto event_1428_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (96))) goto event_1428_59_end;
        player_389_instances.clear_selection();
        gimmickspiralslideend_3249_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickspiralslideend_3249_instances)) goto event_1428_59_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) >= (((Active*)get_single(gimmickspiralslideend_3249_instances, default_active_instance))->get_y()))) goto event_1428_59_end;
        gimmickspiralslidestart_3248_instances.clear_selection();
        for (ObjectIterator it(gimmickspiralslidestart_3248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickspiralslideend_3249_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_1428_59_end: ;
}
void Frames::event_func_13021()
{
    // event 1429_59
    {
        if (!(group_main_engine_1)) goto event_1429_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (96))) goto event_1429_59_end;
        ((Counter*)get_instance(slidecheck_3250_instances))->add(1);
    }
    event_1429_59_end: ;
}
void Frames::event_func_13022()
{
    // event 1430_59
    {
        if (!(group_main_engine_1)) goto event_1430_59_end;
        gimmickspiralslidestart_3248_instances.clear_selection();
        for (ObjectIterator it(gimmickspiralslidestart_3248_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickspiralslidestart_3248_instances.has_selection()) goto event_1430_59_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->flags.enable(14);
        ((Counter*)get_instance(slidecheck_3250_instances))->set(0);
    }
    event_1430_59_end: ;
}
void Frames::event_func_13023()
{
    // event 1431_59
    {
        if (!(group_main_engine_1)) goto event_1431_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (96))) goto event_1431_59_end;
        if (!((((Counter*)get_instance(slidecheck_3250_instances))->value) > (3))) goto event_1431_59_end;
        gimmickspiralslidestart_3248_instances.clear_selection();
        for (ObjectIterator it(gimmickspiralslidestart_3248_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_1431_59_end: ;
}
void Frames::event_func_13024()
{
    // event 1433_59
    {
        if (!(group_main_engine_1)) goto event_1433_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3)+sin_deg(((Active*)*it)->alterables->values.get(5))*128);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)-cos_deg(((Active*)*it)->alterables->values.get(5))*128);
        }
    }
    event_1433_59_end: ;
}
void Frames::event_func_13025()
{
    // event 1434_59
    {
        if (!(group_main_engine_1)) goto event_1434_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (7))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1434_59_end;
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1434_59_end: ;
}
void Frames::event_func_13026()
{
    // event 1435_59
    {
        if (!(group_main_engine_1)) goto event_1435_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1435_59_end;
        if (!((((Active*)get_single(gimmicksnakedrill_3211_instances, default_active_instance))->alterables->values.get(7)%math_helper%2) == (1))) goto event_1435_59_end;
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->alterables->values.sub(5, (9-((Active*)*it)->alterables->values.get(6))*40+180);
        }
    }
    event_1435_59_end: ;
}
void Frames::event_func_13027()
{
    // event 1436_59
    {
        if (!(group_main_engine_1)) goto event_1436_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (280))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1436_59_end;
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 3);
            ((Active*)*it)->set_angle(180-((Active*)*it)->alterables->values.get(5), 0);
        }
    }
    event_1436_59_end: ;
}
void Frames::event_func_13028()
{
    // event 1437_59
    {
        if (!(group_main_engine_1)) goto event_1437_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (280))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1437_59_end;
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 1);
            ((Active*)*it)->set_angle(180-((Active*)*it)->alterables->values.get(5), 0);
        }
    }
    event_1437_59_end: ;
}
void Frames::event_func_13029()
{
    // event 1438_59
    {
        if (!(group_main_engine_1)) goto event_1438_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (280))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1438_59_end;
        media.play_id(SOUND_TUNNELING_2_149, -1, 1);
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1438_59_end: ;
}
void Frames::event_func_13030()
{
    // event 1439_59
    {
        if (!(group_main_engine_1)) goto event_1439_59_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1439_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (280))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1439_59_end;
        FrameObject * single_instance_1439_59_0; single_instance_1439_59_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmicksnakedrill_3211_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1439_59_0 == NULL)
                    single_instance_1439_59_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1439_59_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1439_59_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1439_59_0))->get_movement()->set_speed(((Active*)single_instance_1439_59_0)->get_movement()->get_speed()-10+randrange(20));
        ((Active*)((Active*)single_instance_1439_59_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1439_59_0))->set_y(((Active*)get_single(gimmicksnakedrill_3211_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)((Active*)single_instance_1439_59_0))->set_x(((Active*)get_single(gimmicksnakedrill_3211_instances, default_active_instance))->alterables->values.get(3)-128-32+randrange(65));
        ((Active*)((Active*)single_instance_1439_59_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
    }
    event_1439_59_end: ;
}
void Frames::event_func_13031()
{
    // event 1440_59
    {
        if (!(group_main_engine_1)) goto event_1440_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (180))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1440_59_end;
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1440_59_end: ;
}
void Frames::event_func_13032()
{
    // event 1441_59
    {
        if (!(group_main_engine_1)) goto event_1441_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (440))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1441_59_end;
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 3);
            ((Active*)*it)->set_angle(0-((Active*)*it)->alterables->values.get(5), 0);
        }
    }
    event_1441_59_end: ;
}
void Frames::event_func_13033()
{
    // event 1442_59
    {
        if (!(group_main_engine_1)) goto event_1442_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (440))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1442_59_end;
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->set_angle(0-((Active*)*it)->alterables->values.get(5), 0);
        }
    }
    event_1442_59_end: ;
}
void Frames::event_func_13034()
{
    // event 1443_59
    {
        if (!(group_main_engine_1)) goto event_1443_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (440))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1443_59_end;
        media.play_id(SOUND_TUNNELING_2_149, -1, 1);
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1443_59_end: ;
}
void Frames::event_func_13035()
{
    // event 1444_59
    {
        if (!(group_main_engine_1)) goto event_1444_59_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1444_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (440))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1444_59_end;
        FrameObject * single_instance_1444_59_0; single_instance_1444_59_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmicksnakedrill_3211_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1098(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1444_59_0 == NULL)
                    single_instance_1444_59_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1444_59_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1444_59_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1444_59_0))->get_movement()->set_speed(((Active*)single_instance_1444_59_0)->get_movement()->get_speed()-10+randrange(20));
        ((Active*)((Active*)single_instance_1444_59_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1444_59_0))->set_y(((Active*)get_single(gimmicksnakedrill_3211_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)((Active*)single_instance_1444_59_0))->set_x(((Active*)get_single(gimmicksnakedrill_3211_instances, default_active_instance))->alterables->values.get(3)+128-32+randrange(65));
        ((Active*)((Active*)single_instance_1444_59_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
    }
    event_1444_59_end: ;
}
void Frames::event_func_13036()
{
    // event 1445_59
    {
        if (!(group_main_engine_1)) goto event_1445_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (540))) { it.deselect(); continue; }
        }
        if (!gimmicksnakedrill_3211_instances.has_selection()) goto event_1445_59_end;
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1445_59_end: ;
}
void Frames::event_func_13037()
{
    // event 1539_59
    bool or_result_1539_59 = false;
    bool or_temp_result_1539_59_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1539_59_0_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1539_59_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysuperturretus_1828_instances, qualifier_7)) goto or_event_1539_59_0_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1539_59_0_end;
        or_result_1539_59 = true;
        or_temp_result_1539_59_0 = true;
    }
    or_event_1539_59_0_end: ;
    enemysuperturretus_1828_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1539_59_0) {
        enemysuperturretus_1828_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1539_59
    bool or_temp_result_1539_59_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1539_59_1_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1539_59_1_end;
        or_result_1539_59 = true;
        or_temp_result_1539_59_1 = true;
        or_event_1539_59_1_end: ;
        if (or_temp_result_1539_59_1) {
            enemysuperturretus_1828_instances.save_selection();
        }
        if (!or_result_1539_59) goto or_final_or_event_1539_59_1_end;
        enemysuperturretus_1828_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1539_59_0 || or_temp_result_1539_59_1) {
            enemysuperturretus_1828_instances.restore_selection();
        }
        if (or_temp_result_1539_59_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1539_59_0; single_instance_1539_59_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1539_59_0 == NULL)
                    single_instance_1539_59_0 = new_obj;
            }
        }
        FrameObject * single_instance_1539_59_1; single_instance_1539_59_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1539_59_1 == NULL)
                    single_instance_1539_59_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)((Active*)single_instance_1539_59_0))->set_direction(4);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_59();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1539_59_1_end: ;
}
void Frames::event_func_13038()
{
    // event 1564_59
    bool or_result_1564_59 = false;
    bool or_temp_result_1564_59_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1564_59_0_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1564_59_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, qualifier_7)) goto or_event_1564_59_0_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1564_59_0_end;
        or_result_1564_59 = true;
        or_temp_result_1564_59_0 = true;
    }
    or_event_1564_59_0_end: ;
    enemymeteorroller_2421_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1564_59_0) {
        enemymeteorroller_2421_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1564_59
    bool or_temp_result_1564_59_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1564_59_1_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1564_59_1_end;
        or_result_1564_59 = true;
        or_temp_result_1564_59_1 = true;
        or_event_1564_59_1_end: ;
        if (or_temp_result_1564_59_1) {
            enemymeteorroller_2421_instances.save_selection();
        }
        if (!or_result_1564_59) goto or_final_or_event_1564_59_1_end;
        qualifier_7.empty_selection();
        enemymeteorroller_2421_instances.empty_selection();
        if (or_temp_result_1564_59_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1564_59_0 || or_temp_result_1564_59_1) {
            enemymeteorroller_2421_instances.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1564_59_0; single_instance_1564_59_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1564_59_0 == NULL)
                    single_instance_1564_59_0 = new_obj;
            }
        }
        FrameObject * single_instance_1564_59_1; single_instance_1564_59_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1564_59_1 == NULL)
                    single_instance_1564_59_1 = new_obj;
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
                loop_spawndebris_59();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1564_59_1_end: ;
}
void Frames::event_func_13039()
{
    // event 1602_59
    bool or_result_1602_59 = false;
    bool or_temp_result_1602_59_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1602_59_0_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1602_59_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysaucerdebris_2761_instances, qualifier_7)) goto or_event_1602_59_0_end;
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1602_59_0_end;
        or_result_1602_59 = true;
        or_temp_result_1602_59_0 = true;
    }
    or_event_1602_59_0_end: ;
    enemysaucerdebris_2761_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1602_59_0) {
        enemysaucerdebris_2761_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1602_59
    bool or_temp_result_1602_59_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1602_59_1_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1602_59_1_end;
        or_result_1602_59 = true;
        or_temp_result_1602_59_1 = true;
        or_event_1602_59_1_end: ;
        if (or_temp_result_1602_59_1) {
            enemysaucerdebris_2761_instances.save_selection();
        }
        if (!or_result_1602_59) goto or_final_or_event_1602_59_1_end;
        enemysaucerdebris_2761_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1602_59_0 || or_temp_result_1602_59_1) {
            enemysaucerdebris_2761_instances.restore_selection();
        }
        if (or_temp_result_1602_59_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1602_59_0; single_instance_1602_59_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerdebris_2761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1602_59_0 == NULL)
                    single_instance_1602_59_0 = new_obj;
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
                loop_spawndebris_59();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1602_59_1_end: ;
}
void Frames::event_func_13040()
{
    // event 1623_59
    {
        if (!(group_main_engine_1)) goto event_1623_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1623_59_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1623_59_end: ;
}
void Frames::event_func_13041()
{
    // event 1633_59
    {
        if (!(group_main_engine_1)) goto event_1633_59_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1633_59_end;
        {
            loop_dig_crystals_running = true;
            int times = int(5);
            loop_dig_crystals_index = 0;
            while (loop_dig_crystals_index < times) {
                loop_dig_crystals_13();
                if (!loop_dig_crystals_running) break;
                loop_dig_crystals_index++;
            }
        }
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_MILLA_DIGSUCCESS_308, -1, 1);
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 14, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 10, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 18, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 22, parent->y + 24), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->get_movement()->set_speed(30+randrange(20));
        }
    }
    event_1633_59_end: ;
}
void Frames::event_func_13042()
{
    // event 1636_59
    {
        if (!(group_main_engine_1)) goto event_1636_59_end;
        if (!((global_values->get(4)) < (2))) goto event_1636_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4438))) goto event_1636_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (4538))) goto event_1636_59_end;
        global_values->set(4, 2);
        global_values->set(5, 4438);
        global_values->set(6, 900);
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
    event_1636_59_end: ;
}
void Frames::event_func_13043()
{
    // event 1637_59
    {
        if (!(group_main_engine_1)) goto event_1637_59_end;
        if (!((global_values->get(4)) < (3))) goto event_1637_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (9400))) goto event_1637_59_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (9500))) goto event_1637_59_end;
        global_values->set(4, 3);
        global_values->set(5, 9458);
        global_values->set(6, 620);
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
    event_1637_59_end: ;
}
void Frames::event_func_13044()
{
    // event 1908_59
    {
        if (!(group_pause_1)) goto event_1908_59_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1908_59_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1908_59_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1908_59_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1908_59_end;
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->advance_movement(+1);
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyextractorbase_1176_instances.clear_selection();
        for (ObjectIterator it(enemyextractorbase_1176_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        minibosstredddebris_1014_instances.clear_selection();
        for (ObjectIterator it(minibosstredddebris_1014_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft3_1050_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft2_1049_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft5_1048_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft4_1047_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft6_1046_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright3_1043_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright5_1042_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright6_1041_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright4_1040_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright2_1039_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1908_59_end: ;
}
void Frames::event_func_13045()
{
    // event 1909_59
    bool or_result_1909_59 = false;
    bool or_temp_result_1909_59_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1909_59_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1909_59_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1909_59_0_end;
        or_result_1909_59 = true;
        or_temp_result_1909_59_0 = true;
    }
    or_event_1909_59_0_end: ;
    // event 1909_59
    bool or_temp_result_1909_59_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1909_59_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1909_59_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1909_59_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1909_59_1_end;
        or_result_1909_59 = true;
        or_temp_result_1909_59_1 = true;
        or_event_1909_59_1_end: ;
        if (!or_result_1909_59) goto or_final_or_event_1909_59_1_end;
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
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->advance_movement(-1);
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyextractorbase_1176_instances.clear_selection();
        for (ObjectIterator it(enemyextractorbase_1176_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        minibosstredddebris_1014_instances.clear_selection();
        for (ObjectIterator it(minibosstredddebris_1014_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft3_1050_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft2_1049_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft5_1048_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft4_1047_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft6_1046_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright3_1043_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright5_1042_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright6_1041_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright4_1040_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright2_1039_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1909_59_1_end: ;
}
void Frames::handle_frame_60_events()
{
    test_collisions_59();
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
    event_func_3904();
    event_func_5247();
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
    event_func_1746();
    event_func_1747();
    event_func_1748();
    event_func_1749();
    event_func_1750();
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
    event_func_12991();
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
    event_func_12992();
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
    event_func_12993();
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
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
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
    event_func_2423();
    event_func_2424();
    event_func_2425();
    event_func_2426();
    event_func_2427();
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
    event_func_12994();
    event_func_12995();
    event_func_12996();
    event_func_12997();
    event_func_12998();
    event_func_12999();
    event_func_13000();
    event_func_13001();
    event_func_13002();
    event_func_13003();
    event_func_13004();
    event_func_13005();
    event_func_13006();
    event_func_13007();
    event_func_13008();
    event_func_13009();
    event_func_13010();
    event_func_13011();
    event_func_13012();
    event_func_13013();
    event_func_13014();
    event_func_13015();
    event_func_13016();
    event_func_13017();
    event_func_13018();
    event_func_13019();
    event_func_13020();
    event_func_13021();
    event_func_13022();
    event_func_13023();
    event_func_13024();
    event_func_13025();
    event_func_13026();
    event_func_13027();
    event_func_13028();
    event_func_13029();
    event_func_13030();
    event_func_13031();
    event_func_13032();
    event_func_13033();
    event_func_13034();
    event_func_13035();
    event_func_13036();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_4396();
    event_func_4397();
    event_func_4398();
    event_func_4399();
    event_func_4400();
    event_func_4401();
    event_func_4402();
    event_func_4403();
    event_func_4404();
    event_func_4405();
    event_func_4406();
    event_func_4407();
    event_func_4408();
    event_func_4409();
    event_func_4410();
    event_func_4411();
    event_func_4412();
    event_func_4413();
    event_func_4414();
    event_func_4415();
    event_func_4416();
    event_func_4417();
    event_func_4418();
    event_func_4419();
    event_func_4420();
    event_func_4421();
    event_func_4422();
    event_func_4423();
    event_func_4424();
    event_func_4425();
    event_func_5323();
    event_func_5324();
    event_func_5325();
    event_func_5326();
    event_func_5327();
    event_func_5328();
    event_func_5329();
    event_func_5330();
    event_func_5331();
    event_func_5332();
    event_func_5333();
    event_func_5334();
    event_func_5335();
    event_func_5336();
    event_func_5337();
    event_func_5338();
    event_func_5339();
    event_func_5340();
    event_func_3902();
    event_func_3903();
    event_func_5341();
    event_func_5342();
    event_func_5343();
    event_func_5344();
    event_func_5345();
    event_func_5346();
    event_func_5347();
    event_func_5348();
    event_func_5349();
    event_func_7015();
    event_func_7016();
    event_func_7017();
    event_func_7018();
    event_func_7019();
    event_func_7020();
    event_func_7021();
    event_func_7022();
    event_func_7023();
    event_func_7024();
    event_func_7025();
    event_func_7026();
    event_func_7027();
    event_func_7028();
    event_func_7029();
    event_func_7030();
    event_func_7031();
    event_func_7032();
    event_func_7033();
    event_func_7034();
    event_func_13037();
    event_func_7036();
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
    event_func_13038();
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
    event_func_11435();
    event_func_11436();
    event_func_11437();
    event_func_11438();
    event_func_11439();
    event_func_11440();
    event_func_11441();
    event_func_11442();
    event_func_11443();
    event_func_11444();
    event_func_11445();
    event_func_11446();
    event_func_11447();
    event_func_11448();
    event_func_11449();
    event_func_11450();
    event_func_11451();
    event_func_11452();
    event_func_11453();
    event_func_11454();
    event_func_11455();
    event_func_11456();
    event_func_11457();
    event_func_11458();
    event_func_13039();
    event_func_11460();
    event_func_11461();
    event_func_5240();
    event_func_5241();
    event_func_11462();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_2491();
    event_func_3000();
    event_func_13040();
    event_func_3855();
    event_func_3856();
    event_func_3857();
    event_func_3858();
    event_func_3859();
    event_func_3860();
    event_func_5358();
    event_func_5359();
    event_func_13041();
    event_func_5361();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    event_func_13042();
    event_func_13043();
    event_func_4809();
    event_func_4810();
    event_func_4811();
    event_func_4812();
    event_func_4815();
    event_func_4816();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1) goto group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1_end;
    event_func_4817();
    event_func_4818();
    event_func_4819();
    event_func_4820();
    event_func_4821();
    event_func_4822();
    event_func_4823();
    event_func_4824();
    event_func_4825();
    event_func_4826();
    event_func_4827();
    event_func_4828();
    event_func_4829();
    event_func_4830();
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1) goto group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1_end;
    event_func_4831();
    event_func_4832();
    event_func_4833();
    event_func_4834();
    event_func_4835();
    event_func_4836();
    event_func_4837();
    event_func_4838();
    event_func_4839();
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1_end: ;
    event_func_4840();
    event_func_4841();
    event_func_4842();
    event_func_4843();
    event_func_4844();
    event_func_4845();
    event_func_4846();
    event_func_4847();
    event_func_4848();
    event_func_4849();
    event_func_4850();
    event_func_4851();
    event_func_4852();
    event_func_4853();
    event_func_4854();
    event_func_4855();
    event_func_4856();
    event_func_4857();
    event_func_4858();
    event_func_4859();
    event_func_4860();
    event_func_4861();
    event_func_4862();
    event_func_4863();
    event_func_4864();
    event_func_4865();
    event_func_4866();
    event_func_4867();
    event_func_4868();
    event_func_4869();
    event_func_4870();
    event_func_4871();
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
    event_func_3957();
    event_func_3958();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
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
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_13044();
    event_func_13045();
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
void Frames::handle_frame_60_pre_events()
{
}
void Frames::event_func_13046()
{
    // event 3_59
    {
        if (!(group_main_engine_1)) goto event_3_59_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 91);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 42);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_3_59_end: ;
}
void Frames::event_func_13047()
{
    // event 20_59
    {
        if (!(group_main_engine_1)) goto event_20_59_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.75);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.75);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, -0.3);
    }
    event_20_59_end: ;
}
void Frames::event_func_13048()
{
    // event 1400_59
    {
        if (!(group_main_engine_1)) goto event_1400_59_end;
        gimmicksnowspiremask_3247_instances.clear_selection();
        for (ObjectIterator it(gimmicksnowspiremask_3247_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        spread_value(gimmicksnowspiremask_3247_instances, 4, 0);
    }
    event_1400_59_end: ;
}
void Frames::event_func_13049()
{
    // event 1407_59
    {
        if (!(group_main_engine_1)) goto event_1407_59_end;
        objectteleblockmask_3246_instances.clear_selection();
        spread_value(objectteleblockmask_3246_instances, 4, 0);
        for (ObjectIterator it(objectteleblockmask_3246_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(4)*110)%math_helper%360);
        }
        FrameObject * single_instance_1407_59_0; single_instance_1407_59_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectteleblockmask_3246_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectteleblock_3202(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1407_59_0 == NULL)
                    single_instance_1407_59_0 = new_obj;
            }
        }
    }
    event_1407_59_end: ;
}
void Frames::event_func_13050()
{
    // event 1432_59
    {
        if (!(group_main_engine_1)) goto event_1432_59_end;
        gimmicksnakedrill_3211_instances.clear_selection();
        spread_value(gimmicksnakedrill_3211_instances, 6, 0);
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(6)/math_helper/8);
            ((Active*)*it)->alterables->values.set(6, (0-((Active*)*it)->alterables->values.get(6)+gimmicksnakedrill_3211_instances.size()-1)%math_helper%8);
            ((Active*)*it)->alterables->values.set(5, 540+((Active*)*it)->alterables->values.get(6)*-20);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
    }
    event_1432_59_end: ;
}
void Frames::event_func_13051()
{
    // event 1638_59
    {
        if (!(group_main_engine_1)) goto event_1638_59_end;
        minibosstredd_1044_instances.clear_selection();
        spread_value(minibosstredd_1044_instances, 7, 0);
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(7)*90);
        }
    }
    event_1638_59_end: ;
}
void Frames::event_func_13052()
{
    // event 1855_59
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1855_59_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(10);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(7);
        }
    }
    event_1855_59_end: ;
}
void Frames::on_frame_60_start_events()
{
    event_func_3980();
    event_func_4133();
    event_func_13046();
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
    event_func_13047();
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
    event_func_3273();
    event_func_13048();
    event_func_13049();
    event_func_13050();
    event_func_7062();
    event_func_11500();
    event_func_2686();
    event_func_2687();
    event_func_3990();
    event_func_13051();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_13052();
    event_func_3999();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_60_init()
{
    index = 59;
    width = 12816;
    height = 1600;
    virtual_width = 12816;
    virtual_height = 1600;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelglacierplatform1_3251_instances, NULL};
    qualifier_8.set(10, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &levelglacierplatform1_3251_instances, NULL};
    qualifier_9.set(33, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemydragonfly_944_instances, &minibosstredd_1044_instances, &enemyextractorhead_1177_instances, &enemysuperturretus_1828_instances, &enemymeteorroller_2421_instances, &enemysaucerdebris_2761_instances, &enemysaucer_2812_instances, NULL};
    qualifier_20.set(7, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &objectteleblockmask_3246_instances, &gimmicksnowspiremask_3247_instances, NULL};
    qualifier_7.set(28, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemydragonfly_944_instances, &minibosstreddright2_1039_instances, &minibosstreddright4_1040_instances, &minibosstreddright6_1041_instances, &minibosstreddright5_1042_instances, &minibosstreddright3_1043_instances, &minibosstredd_1044_instances, &minibosstreddright1_1045_instances, &minibosstreddleft6_1046_instances, &minibosstreddleft4_1047_instances, &minibosstreddleft5_1048_instances, &minibosstreddleft2_1049_instances, &minibosstreddleft3_1050_instances, &minibosstreddleft1_1051_instances, &enemysuperturretus_1828_instances, NULL};
    qualifier_4.set(49, &qualifier_4_instances[0]);
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelglacierplatform1_3251_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelglacierplatform1_3251_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3197(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_3198(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_3199(0, 168), 0);
    add_background_object(create_levelparallaxpiece5_3200(0, 224), 0);
    add_background_object(create_levelparallaxpiece6_3201(0, 304), 0);
    add_background_object(create_bgsnowdune2_3203(8344, 776), 2);
    add_background_object(create_bgdeadtree_3204(144, 544), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2160, 1280), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2160, 1136), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2312, 1280), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2312, 1200), 2);
    add_background_object(create_bgdeadtree_3204(1704, 1056), 2);
    add_background_object(create_bgdeadtree_3204(2784, 1088), 2);
    add_background_object(create_bgdeadtree_3204(4832, 832), 2);
    add_background_object(create_bgdeadtree_3204(3984, 1136), 2);
    add_background_object(create_bgsolarpanelpipe_3205(864, 1416), 2);
    add_background_object(create_bgsolarpanelpipe_3205(864, 1272), 2);
    add_background_object(create_bgsolarpanelpipe_3205(1016, 1416), 2);
    add_background_object(create_bgsolarpanelpipe_3205(1016, 1336), 2);
    add_background_object(create_bgsolarpanelpipe_3205(552, 1416), 2);
    add_background_object(create_bgsolarpanelpipe_3205(552, 1272), 2);
    add_background_object(create_bgsolarpanelpipe_3205(704, 1416), 2);
    add_background_object(create_bgsolarpanelpipe_3205(704, 1336), 2);
    add_background_object(create_bgsolarpanelpipe_3205(3752, 848), 2);
    add_background_object(create_bgsolarpanelpipe_3205(3960, 776), 2);
    add_background_object(create_bgsolarpanelpipe_3205(7032, 752), 2);
    add_background_object(create_bgsolarpanelpipe_3205(7168, 752), 2);
    add_background_object(create_bgsolarpanelpipe_3205(7032, 576), 2);
    add_background_object(create_bgsolarpanelpipe_3205(7168, 576), 2);
    add_background_object(create_bgsolarpanelpipe_3205(7032, 536), 2);
    add_background_object(create_bgsolarpanelpipe_3205(7168, 536), 2);
    add_background_object(create_bgsolarpanelpipe_3205(3752, 728), 2);
    add_background_object(create_bgsolarpanelpipe_3205(3960, 656), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2160, 1064), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2312, 1064), 2);
    add_background_object(create_bgdeadtree_3204(7896, 192), 2);
    add_background_object(create_bgdeadtree_3204(8232, 1104), 2);
    add_background_object(create_bgsnowdune1_3206(6960, 1368), 2);
    add_background_object(create_bgsnowdune2_3203(6408, 472), 2);
    add_background_object(create_bgsnowdune1_3206(7216, 1368), 2);
    add_background_object(create_bgsnowdune2_3203(6584, 1368), 2);
    add_background_object(create_bgsnowdune2_3203(7176, 1080), 2);
    add_background_object(create_bgsnowdune1_3206(6384, 1312), 2);
    add_background_object(create_bgsnowdune1_3206(7736, 736), 2);
    add_background_object(create_bgsnowdune1_3206(7472, 776), 2);
    add_background_object(create_bgsnowdune1_3206(5904, 640), 2);
    add_background_object(create_bgsnowdune2_3203(5320, 864), 2);
    add_background_object(create_bgsnowdune1_3206(4512, 1120), 2);
    add_background_object(create_bgsnowdune1_3206(4112, 1152), 2);
    add_background_object(create_bgsnowdune1_3206(3744, 1192), 2);
    add_background_object(create_bgsnowdune1_3206(3488, 1152), 2);
    add_background_object(create_bgsnowdune1_3206(4176, 832), 2);
    add_background_object(create_bgsnowdune2_3203(1392, 752), 2);
    add_background_object(create_bgsnowdune1_3206(1696, 1368), 2);
    add_background_object(create_bgsnowdune1_3206(1424, 1408), 2);
    add_background_object(create_bgsnowdune1_3206(1056, 1368), 2);
    add_background_object(create_bgsnowdune2_3203(288, 1376), 2);
    add_background_object(create_bgsnowdune2_3203(0, 1120), 2);
    add_background_object(create_bgsnowdune2_3203(7456, 216), 2);
    add_background_object(create_bgsnowdune1_3206(8440, 824), 2);
    add_background_object(create_bgsnowdune2_3203(9080, 688), 2);
    add_background_object(create_bgsnowdune2_3203(6056, 104), 2);
    add_background_object(create_bgdeadtree_3204(6808, 280), 2);
    add_background_object(create_bgsnowmound_3207(9648, 1264), 2);
    add_background_object(create_bgsnowdune2_3203(9528, 1184), 2);
    add_background_object(create_bgsnowdune2_3203(9368, 1128), 2);
    add_background_object(create_bgsnowdune2_3203(9064, 1128), 2);
    add_background_object(create_bgsolarpanelpipe_3205(10304, 816), 2);
    add_background_object(create_bgsolarpanelpipe_3205(10304, 672), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9904, 816), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9904, 736), 2);
    add_background_object(create_bgsolarpanelpipe_3205(10304, 600), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9904, 600), 2);
    add_background_object(create_bgsnowdune1_3206(10080, 1304), 2);
    add_background_object(create_bgdeadtree_3204(9488, 528), 2);
    add_background_object(create_bgdeadtree_3204(9904, 1104), 2);
    add_background_object(create_bgdeadtree_3204(9184, 184), 2);
    add_background_object(create_bgsnowdune2_3203(12312, 344), 2);
    add_background_object(create_bgdeadtree_3204(12208, 328), 2);
    add_background_object(create_bgsnowdune1_3206(12240, 664), 2);
    add_background_object(create_bgdeadtree_3204(4984, 408), 2);
    add_background_object(create_bgdeadtree2_3208(8368, 968), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(12984, 85), 2);
    add_object(create_link_352(88, -96), 2);
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
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_gimmicksnowspire_3209(3168, 1072), 2);
    add_object(create_gimmicksnowspire_3209(4528, 1136), 2);
    add_object(create_gimmicksnowspire_3209(4848, 1048), 2);
    add_object(create_gimmicksnowspire_3209(5112, 880), 2);
    add_object(create_gimmicksnowspire_3209(5352, 888), 2);
    add_object(create_gimmicksnowspire_3209(5856, 720), 2);
    add_object(create_bgsolarpanel_3210(2151, 1247), 2);
    add_object(create_bgsolarpanel_3210(2151, 1183), 2);
    add_object(create_bgsolarpanel_3210(2151, 1087), 2);
    add_object(create_bgsolarpanel_3210(2303, 1247), 2);
    add_object(create_bgsolarpanel_3210(2303, 1151), 2);
    add_object(create_bgsolarpanel_3210(2303, 1087), 2);
    add_object(create_bgsolarpanel_3210(855, 1383), 2);
    add_object(create_bgsolarpanel_3210(855, 1319), 2);
    add_object(create_bgsolarpanel_3210(855, 1223), 2);
    add_object(create_bgsolarpanel_3210(1007, 1383), 2);
    add_object(create_bgsolarpanel_3210(1007, 1287), 2);
    add_object(create_bgsolarpanel_3210(1007, 1223), 2);
    add_object(create_bgsolarpanel_3210(543, 1383), 2);
    add_object(create_bgsolarpanel_3210(543, 1319), 2);
    add_object(create_bgsolarpanel_3210(543, 1223), 2);
    add_object(create_bgsolarpanel_3210(695, 1383), 2);
    add_object(create_bgsolarpanel_3210(695, 1287), 2);
    add_object(create_bgsolarpanel_3210(695, 1223), 2);
    add_object(create_bgsolarpanel_3210(3743, 815), 2);
    add_object(create_bgsolarpanel_3210(3743, 751), 2);
    add_object(create_bgsolarpanel_3210(3951, 743), 2);
    add_object(create_bgsolarpanel_3210(3951, 679), 2);
    add_object(create_bgsolarpanel_3210(7023, 719), 2);
    add_object(create_bgsolarpanel_3210(7023, 655), 2);
    add_object(create_bgsolarpanel_3210(7159, 719), 2);
    add_object(create_bgsolarpanel_3210(7159, 655), 2);
    add_object(create_bgsolarpanel_3210(7023, 559), 2);
    add_object(create_bgsolarpanel_3210(7159, 559), 2);
    add_object(create_gimmicksnowspire_3209(8848, 1008), 2);
    add_object(create_gimmicksnakedrill_3211(10176, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10176, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10176, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10176, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10176, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10176, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10176, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10176, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10048, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10048, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10048, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10048, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10048, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10048, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10048, 360), 2);
    add_object(create_gimmicksnakedrill_3211(10048, 360), 2);
    add_object(create_gimmicksnakedrill_3211(9696, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9696, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9696, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9696, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9696, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9696, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9696, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9696, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9304, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9304, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9304, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9304, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9304, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9304, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9304, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(9304, 1200), 2);
    add_object(create_gimmicksnakedrill_3211(1112, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(1112, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(1112, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(1112, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(1112, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(1112, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(1112, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(1112, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(640, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(640, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(640, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(640, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(640, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(640, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(640, 1448), 2);
    add_object(create_gimmicksnakedrill_3211(640, 1448), 2);
    add_object(create_bgsolarpanel_3210(10295, 783), 2);
    add_object(create_bgsolarpanel_3210(10295, 719), 2);
    add_object(create_bgsolarpanel_3210(10295, 623), 2);
    add_object(create_bgsolarpanel_3210(9895, 783), 2);
    add_object(create_bgsolarpanel_3210(9895, 687), 2);
    add_object(create_bgsolarpanel_3210(9895, 623), 2);
    add_object(create_gimmicksnowspire_3209(12040, 608), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_bgrocks13_3212(9528, 776), 3);
    add_background_object(create_bgrocks13_3212(9464, 776), 3);
    add_background_object(create_bgrocks13_3212(9400, 776), 3);
    add_background_object(create_bgrocks13_3212(9336, 776), 3);
    add_background_object(create_bgrocks1_3213(9336, 648), 3);
    add_background_object(create_bgrocks15_3214(9472, 720), 3);
    add_background_object(create_bgrocks15_3214(9352, 720), 3);
    add_background_object(create_bgrocks13_3212(6528, 1408), 3);
    add_background_object(create_bgrocks13_3212(6592, 1408), 3);
    add_background_object(create_bgrocks1_3213(6400, 1472), 3);
    add_background_object(create_bgrocks11_3215(6272, 1344), 3);
    add_background_object(create_bgrocks15_3214(6464, 1400), 3);
    add_background_object(create_bgrocks15_3214(6544, 1408), 3);
    add_background_object(create_bgrocks14_3216(7360, 960), 3);
    add_background_object(create_bgrocks1_3213(7424, 960), 3);
    add_background_object(create_bgrocks1_3213(7424, 1088), 3);
    add_background_object(create_bgrocks14_3216(7296, 1056), 3);
    add_background_object(create_bgrocks13_3212(7360, 1056), 3);
    add_background_object(create_bgrocks13_3212(7360, 1088), 3);
    add_background_object(create_bgrocks13_3212(7360, 1152), 3);
    add_background_object(create_bgrocks13_3212(7296, 1152), 3);
    add_background_object(create_bgrocks15_3214(7376, 1032), 3);
    add_background_object(create_bgrocks15_3214(7312, 1096), 3);
    add_background_object(create_bgrocks4_3217(6480, 280), 3);
    add_background_object(create_bgrocks2_3218(6608, 312), 3);
    add_background_object(create_bgrocks15_3214(6504, 296), 3);
    add_background_object(create_bgrocks4_3217(6656, 576), 3);
    add_background_object(create_bgrocks7_3219(6784, 608), 3);
    add_background_object(create_bgrocks15_3214(6672, 592), 3);
    add_background_object(create_bgrocks4_3217(4072, 808), 3);
    add_background_object(create_bgrocks2_3218(4200, 840), 3);
    add_background_object(create_bgrocks15_3214(4096, 824), 3);
    add_background_object(create_bgrocks3_3220(3720, 872), 3);
    add_background_object(create_bgrocks5_3221(3848, 840), 3);
    add_background_object(create_bgrocks15_3214(3824, 864), 3);
    add_background_object(create_bgsnow9_3222(4976, 544), 3);
    add_background_object(create_bgrocks13_3212(4992, 528), 3);
    add_background_object(create_bgrocks13_3212(5056, 528), 3);
    add_background_object(create_bgsnowslope2_3223(12360, 576), 3);
    add_background_object(create_bgrocks1_3213(12192, 448), 3);
    add_background_object(create_bgsnow1_3224(12192, 432), 3);
    add_background_object(create_bgsnow1_3224(12320, 432), 3);
    add_background_object(create_bgsnowslope1_3225(12360, 680), 3);
    add_background_object(create_bgrocks13_3212(8064, 320), 3);
    add_background_object(create_bgrocks13_3212(8064, 384), 3);
    add_background_object(create_bgrocks13_3212(8192, 544), 3);
    add_background_object(create_bgrocks13_3212(8256, 640), 3);
    add_background_object(create_bgrocks11_3215(11424, 896), 3);
    add_background_object(create_bgrocks11_3215(10912, 1152), 3);
    add_background_object(create_bgrocks11_3215(11168, 1024), 3);
    add_background_object(create_bgrocks6_3226(10528, 1240), 3);
    add_background_object(create_bgrocks3_3220(10656, 1176), 3);
    add_background_object(create_bgrocks1_3213(10528, 1280), 3);
    add_background_object(create_bgsnowslope1_3225(10312, 1320), 3);
    add_background_object(create_bgrocks11_3215(9856, 872), 3);
    add_background_object(create_bgrocks13_3212(10112, 1000), 3);
    add_background_object(create_bgrocks9_3227(10240, 1128), 3);
    add_background_object(create_bgrocks9_3227(10240, 1000), 3);
    add_background_object(create_bgrocks10_3228(10096, 1000), 3);
    add_background_object(create_bgsnowmound_3207(728, 1440), 3);
    add_background_object(create_bgsnowmound_3207(472, 1440), 3);
    add_background_object(create_bgsnowmound_3207(1200, 1440), 3);
    add_background_object(create_bgsnowmound_3207(944, 1440), 3);
    add_background_object(create_bgsnowmound_3207(10256, 352), 3);
    add_background_object(create_bgsnowmound_3207(10128, 352), 3);
    add_background_object(create_bgsnowmound_3207(10000, 352), 3);
    add_background_object(create_bgsnowmound_3207(9872, 352), 3);
    add_background_object(create_bgrocks13_3212(9632, 1280), 3);
    add_background_object(create_bgrocks13_3212(9696, 1280), 3);
    add_background_object(create_bgsnowmound_3207(9776, 1192), 3);
    add_background_object(create_bgsnowmound_3207(9520, 1192), 3);
    add_background_object(create_bgsnowmound_3207(9392, 1192), 3);
    add_background_object(create_bgsnowmound_3207(9136, 1192), 3);
    add_background_object(create_bgrocks1_3213(9504, 1344), 3);
    add_background_object(create_bgsnow1_3224(9632, 1272), 3);
    add_background_object(create_bgrocks11_3215(9376, 1216), 3);
    add_background_object(create_bgrocks9_3227(9592, 712), 3);
    add_background_object(create_bgsnow8_3229(6168, 192), 3);
    add_background_object(create_bgsnow8_3229(7544, 696), 3);
    add_background_object(create_bgsnow9_3222(7656, 696), 3);
    add_background_object(create_bgrocks13_3212(9272, 776), 3);
    add_background_object(create_bgrocks13_3212(9208, 776), 3);
    add_background_object(create_bgrocks11_3215(8944, 432), 3);
    add_background_object(create_bgrocks9_3227(6528, 1152), 3);
    add_background_object(create_bgsnow11_3230(7360, 944), 3);
    add_background_object(create_bgrocks11_3215(7808, 320), 3);
    add_background_object(create_bgrocks11_3215(7808, 448), 3);
    add_background_object(create_bgsnowslope2_3223(7864, 568), 3);
    add_background_object(create_bgsnowslope1_3225(7864, 752), 3);
    add_background_object(create_bgsnowslope1_3225(6312, 616), 3);
    add_background_object(create_bgsnowslope1_3225(1960, 1384), 3);
    add_background_object(create_bgrocks11_3215(1840, 152), 3);
    add_background_object(create_bgrocks9_3227(256, 1216), 3);
    add_background_object(create_bgrocks1_3213(1648, 1168), 3);
    add_background_object(create_bgrocks9_3227(1904, 1168), 3);
    add_background_object(create_bgrocks5_3221(1520, 1168), 3);
    add_background_object(create_bgrocks8_3231(1776, 1288), 3);
    add_background_object(create_bgrocks3_3220(1392, 1200), 3);
    add_background_object(create_bgrocks1_3213(-128, 664), 3);
    add_background_object(create_bgrocks1_3213(-128, 792), 3);
    add_background_object(create_bgrocks1_3213(128, 792), 3);
    add_background_object(create_bgrocks15_3214(1496, 1192), 3);
    add_background_object(create_bgrocks1_3213(128, 664), 3);
    add_background_object(create_bgsnow1_3224(0, 648), 3);
    add_background_object(create_bgsnow1_3224(128, 648), 3);
    add_background_object(create_bgsnow1_3224(-128, 648), 3);
    add_background_object(create_bgsnow1_3224(256, 648), 3);
    add_background_object(create_bgsnow5_3232(1520, 1160), 3);
    add_background_object(create_bgsnow6_3233(1392, 1192), 3);
    add_background_object(create_bgsnow1_3224(1648, 1160), 3);
    add_background_object(create_bgsnow1_3224(1776, 1160), 3);
    add_background_object(create_bgrock_3234(-416, 768), 3);
    add_background_object(create_bgrocks1_3213(512, 1472), 3);
    add_background_object(create_bgrocks1_3213(0, 1472), 3);
    add_background_object(create_bgrocks1_3213(256, 1472), 3);
    add_background_object(create_bgrocks1_3213(1280, 1472), 3);
    add_background_object(create_bgrocks1_3213(768, 1472), 3);
    add_background_object(create_bgrocks1_3213(1024, 1472), 3);
    add_background_object(create_bgrocks1_3213(1536, 1472), 3);
    add_background_object(create_bgrocks1_3213(1792, 1472), 3);
    add_background_object(create_bgrocks1_3213(2048, 1472), 3);
    add_background_object(create_bgrocks1_3213(2048, 1344), 3);
    add_background_object(create_bgsnow1_3224(2048, 1328), 3);
    add_background_object(create_bgsnow1_3224(2176, 1328), 3);
    add_background_object(create_bgrocks1_3213(2304, 1472), 3);
    add_background_object(create_bgrocks1_3213(2304, 1344), 3);
    add_background_object(create_bgsnow1_3224(2304, 1328), 3);
    add_background_object(create_bgsnow1_3224(2432, 1328), 3);
    add_background_object(create_bgrocks1_3213(0, 1344), 3);
    add_background_object(create_bgrocks1_3213(0, 1216), 3);
    add_background_object(create_bgrocks6_3226(1264, 1264), 3);
    add_background_object(create_bgsnow1_3224(128, 1208), 3);
    add_background_object(create_bgsnowflat_3235(0, 1208), 3);
    add_background_object(create_bgsnow1_3224(256, 1456), 3);
    add_background_object(create_bgsnow1_3224(384, 1456), 3);
    add_background_object(create_bgsnow1_3224(512, 1456), 3);
    add_background_object(create_bgsnow1_3224(640, 1456), 3);
    add_background_object(create_bgsnow1_3224(768, 1456), 3);
    add_background_object(create_bgsnow1_3224(896, 1456), 3);
    add_background_object(create_bgsnow1_3224(1024, 1456), 3);
    add_background_object(create_bgsnow1_3224(1152, 1456), 3);
    add_background_object(create_bgsnow1_3224(1280, 1456), 3);
    add_background_object(create_bgsnow1_3224(1408, 1456), 3);
    add_background_object(create_bgsnow1_3224(1536, 1456), 3);
    add_background_object(create_bgsnow1_3224(1664, 1456), 3);
    add_background_object(create_bgsnow1_3224(1792, 1456), 3);
    add_background_object(create_bgsnow1_3224(1920, 1456), 3);
    add_background_object(create_bgrocks8_3231(1648, 1288), 3);
    add_background_object(create_bgrocks8_3231(1392, 1320), 3);
    add_background_object(create_bgrocks8_3231(1264, 1320), 3);
    add_background_object(create_bgsnow7_3236(1264, 1256), 3);
    add_background_object(create_bgrocks8_3231(256, 912), 3);
    add_background_object(create_bgrocks8_3231(128, 912), 3);
    add_background_object(create_bgrocks8_3231(0, 912), 3);
    add_background_object(create_bgrocks8_3231(-128, 912), 3);
    add_background_object(create_bgrocks8_3231(1520, 1288), 3);
    add_background_object(create_bgsnow8_3229(1904, 1160), 3);
    add_background_object(create_bgsnow9_3222(1248, 1288), 3);
    add_background_object(create_bgsnow8_3229(256, 1208), 3);
    add_background_object(create_bgrocks9_3227(256, 1344), 3);
    add_background_object(create_bgrocks10_3228(2032, 1344), 3);
    add_background_object(create_bgsnow9_3222(2032, 1328), 3);
    add_background_object(create_bgrocks9_3227(384, 664), 3);
    add_background_object(create_bgsnow8_3229(384, 648), 3);
    add_background_object(create_bgrocks1_3213(2560, 1472), 3);
    add_background_object(create_bgrocks1_3213(2560, 1344), 3);
    add_background_object(create_bgsnow1_3224(2560, 1328), 3);
    add_background_object(create_bgsnow1_3224(2688, 1328), 3);
    add_background_object(create_bgrocks1_3213(2816, 1344), 3);
    add_background_object(create_bgrocks1_3213(2816, 1216), 3);
    add_background_object(create_bgsnow1_3224(2816, 1200), 3);
    add_background_object(create_bgsnow1_3224(2944, 1200), 3);
    add_background_object(create_bgrocks10_3228(2800, 1216), 3);
    add_background_object(create_bgsnow9_3222(2800, 1200), 3);
    add_background_object(create_bgrocks1_3213(2816, 1472), 3);
    add_background_object(create_bgrocks1_3213(3072, 1344), 3);
    add_background_object(create_bgrocks1_3213(3072, 1216), 3);
    add_background_object(create_bgsnow1_3224(3072, 1200), 3);
    add_background_object(create_bgsnow1_3224(3200, 1200), 3);
    add_background_object(create_bgrocks1_3213(3072, 1472), 3);
    add_background_object(create_bgrocks1_3213(3328, 1384), 3);
    add_background_object(create_bgrocks1_3213(3328, 1256), 3);
    add_background_object(create_bgsnow1_3224(3328, 1240), 3);
    add_background_object(create_bgsnow1_3224(3456, 1240), 3);
    add_background_object(create_bgsnow8_3229(3328, 1200), 3);
    add_background_object(create_bgrocks1_3213(3584, 1384), 3);
    add_background_object(create_bgrocks1_3213(3584, 1256), 3);
    add_background_object(create_bgsnow1_3224(3584, 1240), 3);
    add_background_object(create_bgsnow1_3224(3712, 1240), 3);
    add_background_object(create_bgrocks1_3213(4096, 1384), 3);
    add_background_object(create_bgrocks1_3213(4096, 1256), 3);
    add_background_object(create_bgsnow1_3224(4096, 1240), 3);
    add_background_object(create_bgsnow1_3224(4224, 1240), 3);
    add_background_object(create_bgrocks1_3213(4352, 1344), 3);
    add_background_object(create_bgrocks1_3213(4352, 1216), 3);
    add_background_object(create_bgsnow1_3224(4352, 1200), 3);
    add_background_object(create_bgsnow1_3224(4480, 1200), 3);
    add_background_object(create_bgrocks1_3213(4352, 1472), 3);
    add_background_object(create_bgsnow9_3222(4336, 1200), 3);
    add_background_object(create_bgrocks1_3213(3840, 1384), 3);
    add_background_object(create_bgrocks1_3213(3840, 1256), 3);
    add_background_object(create_bgsnow1_3224(3840, 1240), 3);
    add_background_object(create_bgsnow1_3224(3968, 1240), 3);
    add_background_object(create_bgrocks3_3220(1840, 24), 3);
    add_background_object(create_bgrocks2_3218(1968, 24), 3);
    add_background_object(create_bgsnow6_3233(1840, 16), 3);
    add_background_object(create_bgsnow3_3237(1968, 16), 3);
    add_background_object(create_bgrocks9_3227(2096, 88), 3);
    add_background_object(create_bgrocks10_3228(1824, 88), 3);
    add_background_object(create_bgsnow8_3229(2096, 80), 3);
    add_background_object(create_bgsnow9_3222(1824, 80), 3);
    add_background_object(create_bgrocks10_3228(1824, 152), 3);
    add_background_object(create_bgrocks9_3227(2096, 152), 3);
    add_background_object(create_bgrocks11_3215(1840, 280), 3);
    add_background_object(create_bgrocks10_3228(1824, 280), 3);
    add_background_object(create_bgrocks9_3227(2096, 280), 3);
    add_background_object(create_bgrocks1_3213(4608, 1216), 3);
    add_background_object(create_bgrocks1_3213(4864, 1088), 3);
    add_background_object(create_bgrocks1_3213(4864, 960), 3);
    add_background_object(create_bgsnow1_3224(4864, 944), 3);
    add_background_object(create_bgsnow1_3224(4992, 944), 3);
    add_background_object(create_bgsnow1_3224(4608, 1200), 3);
    add_background_object(create_bgsnow1_3224(4736, 1200), 3);
    add_background_object(create_bgrocks10_3228(4848, 960), 3);
    add_background_object(create_bgsnow9_3222(4848, 944), 3);
    add_background_object(create_bgrocks1_3213(4608, 1344), 3);
    add_background_object(create_bgrocks1_3213(4864, 1344), 3);
    add_background_object(create_bgrocks10_3228(4848, 1088), 3);
    add_background_object(create_bgrocks1_3213(4864, 1216), 3);
    add_background_object(create_bgrocks1_3213(5120, 1088), 3);
    add_background_object(create_bgrocks1_3213(5120, 960), 3);
    add_background_object(create_bgsnow1_3224(5120, 944), 3);
    add_background_object(create_bgsnow1_3224(5248, 944), 3);
    add_background_object(create_bgrocks1_3213(5120, 1344), 3);
    add_background_object(create_bgrocks1_3213(5120, 1216), 3);
    add_background_object(create_bgrocks1_3213(5376, 1088), 3);
    add_background_object(create_bgrocks1_3213(5376, 960), 3);
    add_background_object(create_bgsnow1_3224(5376, 944), 3);
    add_background_object(create_bgsnow1_3224(5504, 944), 3);
    add_background_object(create_bgrocks1_3213(5376, 1344), 3);
    add_background_object(create_bgrocks1_3213(5376, 1216), 3);
    add_background_object(create_bgrocks1_3213(5632, 960), 3);
    add_background_object(create_bgrocks1_3213(5632, 832), 3);
    add_background_object(create_bgsnow1_3224(5632, 816), 3);
    add_background_object(create_bgsnow1_3224(5760, 816), 3);
    add_background_object(create_bgrocks10_3228(5616, 832), 3);
    add_background_object(create_bgsnow9_3222(5616, 816), 3);
    add_background_object(create_bgrocks1_3213(5632, 1088), 3);
    add_background_object(create_bgrocks1_3213(5888, 832), 3);
    add_background_object(create_bgrocks1_3213(5888, 704), 3);
    add_background_object(create_bgsnow1_3224(5888, 688), 3);
    add_background_object(create_bgsnow1_3224(6016, 688), 3);
    add_background_object(create_bgrocks10_3228(5872, 704), 3);
    add_background_object(create_bgsnow9_3222(5872, 688), 3);
    add_background_object(create_bgrocks1_3213(5888, 960), 3);
    add_background_object(create_bgrocks1_3213(5888, 1088), 3);
    add_background_object(create_bgrocks1_3213(5632, 1216), 3);
    add_background_object(create_bgrocks1_3213(-568, 1088), 3);
    add_background_object(create_bgrocks10_3228(-536, 1120), 3);
    add_background_object(create_bgrocks11_3215(-568, 1136), 3);
    add_background_object(create_bgrocks2_3218(-528, 1120), 3);
    add_background_object(create_bgrocks3_3220(-536, 1128), 3);
    add_background_object(create_bgrocks4_3217(-536, 1136), 3);
    add_background_object(create_bgrocks5_3221(-528, 1136), 3);
    add_background_object(create_bgrocks6_3226(-544, 1120), 3);
    add_background_object(create_bgrocks7_3219(-560, 1112), 3);
    add_background_object(create_bgrocks8_3231(-552, 1128), 3);
    add_background_object(create_bgrocks9_3227(-520, 1112), 3);
    add_background_object(create_bgsnow1_3224(-544, 1136), 3);
    add_background_object(create_bgsnow1_3224(-512, 1136), 3);
    add_background_object(create_bgsnow2_3238(-528, 1144), 3);
    add_background_object(create_bgsnow3_3237(-520, 1128), 3);
    add_background_object(create_bgsnow4_3239(-520, 1136), 3);
    add_background_object(create_bgsnow5_3232(-512, 1136), 3);
    add_background_object(create_bgsnow6_3233(-512, 1120), 3);
    add_background_object(create_bgsnow7_3236(-520, 1128), 3);
    add_background_object(create_bgsnow8_3229(-472, 1136), 3);
    add_background_object(create_bgsnow9_3222(-456, 1144), 3);
    add_background_object(create_bgrocks9_3227(384, 792), 3);
    add_background_object(create_bgrocks1_3213(1384, 856), 3);
    add_background_object(create_bgrocks10_3228(1368, 856), 3);
    add_background_object(create_bgrocks9_3227(1640, 856), 3);
    add_background_object(create_bgrocks8_3231(1384, 976), 3);
    add_background_object(create_bgrocks8_3231(1512, 976), 3);
    add_background_object(create_bgsnow1_3224(1384, 840), 3);
    add_background_object(create_bgsnow8_3229(1640, 840), 3);
    add_background_object(create_bgsnow9_3222(1368, 840), 3);
    add_background_object(create_bgsnow1_3224(1512, 840), 3);
    add_background_object(create_bgrocks1_3213(1736, 816), 3);
    add_background_object(create_bgrocks10_3228(1720, 816), 3);
    add_background_object(create_bgrocks9_3227(1992, 816), 3);
    add_background_object(create_bgrocks1_3213(1736, 688), 3);
    add_background_object(create_bgrocks10_3228(1720, 688), 3);
    add_background_object(create_bgrocks9_3227(1992, 688), 3);
    add_background_object(create_bgrocks8_3231(1864, 936), 3);
    add_background_object(create_bgrocks8_3231(1736, 936), 3);
    add_background_object(create_bgrocks1_3213(1736, 560), 3);
    add_background_object(create_bgrocks9_3227(1992, 560), 3);
    add_background_object(create_bgrocks1_3213(1480, 560), 3);
    add_background_object(create_bgrocks8_3231(1608, 672), 3);
    add_background_object(create_bgrocks8_3231(1480, 672), 3);
    add_background_object(create_bgrocks10_3228(1464, 560), 3);
    add_background_object(create_bgrocks1_3213(1736, 432), 3);
    add_background_object(create_bgrocks9_3227(1992, 432), 3);
    add_background_object(create_bgrocks1_3213(1480, 432), 3);
    add_background_object(create_bgrocks10_3228(1464, 432), 3);
    add_background_object(create_bgrocks1_3213(6144, 832), 3);
    add_background_object(create_bgrocks1_3213(6144, 704), 3);
    add_background_object(create_bgsnow1_3224(6144, 688), 3);
    add_background_object(create_bgsnow1_3224(6272, 688), 3);
    add_background_object(create_bgrocks1_3213(6144, 960), 3);
    add_background_object(create_bgrocks1_3213(6400, 704), 3);
    add_background_object(create_bgrocks1_3213(6400, 576), 3);
    add_background_object(create_bgsnow1_3224(6400, 560), 3);
    add_background_object(create_bgsnow1_3224(6528, 560), 3);
    add_background_object(create_bgrocks1_3213(6400, 832), 3);
    add_background_object(create_bgrocks10_3228(6384, 576), 3);
    add_background_object(create_bgsnow9_3222(6384, 560), 3);
    add_background_object(create_bgsnow6_3233(3720, 864), 3);
    add_background_object(create_bgrocks6_3226(3592, 936), 3);
    add_background_object(create_bgrocks8_3231(3720, 992), 3);
    add_background_object(create_bgrocks8_3231(3592, 992), 3);
    add_background_object(create_bgsnow7_3236(3592, 928), 3);
    add_background_object(create_bgsnow9_3222(3576, 960), 3);
    add_background_object(create_bgsnow5_3232(3848, 832), 3);
    add_background_object(create_bgrocks8_3231(3848, 960), 3);
    add_background_object(create_bgrocks9_3227(3976, 840), 3);
    add_background_object(create_bgsnow8_3229(3976, 832), 3);
    add_background_object(create_bgrocks10_3228(4056, 808), 3);
    add_background_object(create_bgsnow9_3222(4056, 792), 3);
    add_background_object(create_bgsnow2_3238(4072, 792), 3);
    add_background_object(create_bgrocks7_3219(4328, 904), 3);
    add_background_object(create_bgsnow3_3237(4200, 824), 3);
    add_background_object(create_bgrocks8_3231(4072, 920), 3);
    add_background_object(create_bgrocks8_3231(4200, 952), 3);
    add_background_object(create_bgrocks8_3231(4328, 952), 3);
    add_background_object(create_bgsnow4_3239(4328, 888), 3);
    add_background_object(create_bgsnow8_3229(4456, 920), 3);
    add_background_object(create_bgrocks10_3228(6464, 280), 3);
    add_background_object(create_bgsnow9_3222(6464, 264), 3);
    add_background_object(create_bgsnow2_3238(6480, 264), 3);
    add_background_object(create_bgrocks7_3219(6736, 376), 3);
    add_background_object(create_bgsnow3_3237(6608, 296), 3);
    add_background_object(create_bgrocks8_3231(6480, 392), 3);
    add_background_object(create_bgrocks8_3231(6608, 424), 3);
    add_background_object(create_bgrocks8_3231(6736, 424), 3);
    add_background_object(create_bgsnow4_3239(6736, 360), 3);
    add_background_object(create_bgsnow8_3229(6864, 392), 3);
    add_background_object(create_bgsnow2_3238(6656, 560), 3);
    add_background_object(create_bgsnow4_3239(6784, 592), 3);
    add_background_object(create_bgrocks9_3227(6656, 704), 3);
    add_background_object(create_bgsnow8_3229(6912, 624), 3);
    add_background_object(create_bgrocks9_3227(6656, 832), 3);
    add_background_object(create_bgrocks8_3231(6784, 664), 3);
    add_background_object(create_bgrocks8_3231(6656, 696), 3);
    add_background_object(create_bgrocks1_3213(6984, 816), 3);
    add_background_object(create_bgrocks10_3228(6968, 816), 3);
    add_background_object(create_bgrocks9_3227(7240, 816), 3);
    add_background_object(create_bgsnow1_3224(6984, 808), 3);
    add_background_object(create_bgsnow1_3224(7112, 808), 3);
    add_background_object(create_bgsnow8_3229(7240, 808), 3);
    add_background_object(create_bgsnow9_3222(6968, 808), 3);
    add_background_object(create_bgrocks8_3231(6984, 936), 3);
    add_background_object(create_bgrocks8_3231(7112, 936), 3);
    add_background_object(create_bgrocks1_3213(7424, 832), 3);
    add_background_object(create_bgrocks1_3213(7456, 448), 3);
    add_background_object(create_bgrocks1_3213(7456, 320), 3);
    add_background_object(create_bgrocks1_3213(7424, 64), 3);
    add_background_object(create_bgrocks1_3213(7168, 64), 3);
    add_background_object(create_bgrocks1_3213(7168, -64), 3);
    add_background_object(create_bgrocks1_3213(7424, -64), 3);
    add_background_object(create_bgrocks10_3228(7152, 64), 3);
    add_background_object(create_bgrocks10_3228(7152, -64), 3);
    add_background_object(create_bgrocks8_3231(7168, 184), 3);
    add_background_object(create_bgrocks8_3231(7296, 184), 3);
    add_background_object(create_bgrocks10_3228(7440, 320), 3);
    add_background_object(create_bgrocks10_3228(7440, 448), 3);
    add_background_object(create_bgrocks10_3228(7408, 832), 3);
    add_background_object(create_bgrocks1_3213(6400, 960), 3);
    add_background_object(create_bgsnow1_3224(7424, 824), 3);
    add_background_object(create_bgsnow1_3224(7552, 824), 3);
    add_background_object(create_bgsnow9_3222(7408, 824), 3);
    add_background_object(create_bgrocks1_3213(7936, 448), 3);
    add_background_object(create_bgrocks12_3240(8192, 448), 3);
    add_background_object(create_bgrocks1_3213(7936, 704), 3);
    add_background_object(create_bgrocks1_3213(7936, 576), 3);
    add_background_object(create_bgrocks1_3213(7936, 832), 3);
    add_background_object(create_bgrocks1_3213(7936, 960), 3);
    add_background_object(create_bgrocks1_3213(7680, 832), 3);
    add_background_object(create_bgrocks1_3213(7680, 960), 3);
    add_background_object(create_bgsnow1_3224(7680, 824), 3);
    add_background_object(create_bgsnow1_3224(7808, 824), 3);
    add_background_object(create_bgrocks1_3213(6400, 1088), 3);
    add_background_object(create_bgrocks4_3217(6656, 1048), 3);
    add_background_object(create_bgsnow2_3238(6656, 1032), 3);
    add_background_object(create_bgrocks7_3219(6784, 1080), 3);
    add_background_object(create_bgsnow4_3239(6784, 1064), 3);
    add_background_object(create_bgsnow8_3229(6912, 1096), 3);
    add_background_object(create_bgrocks9_3227(6656, 960), 3);
    add_background_object(create_bgrocks6_3226(7168, 1152), 3);
    add_background_object(create_bgsnow7_3236(7168, 1136), 3);
    add_background_object(create_bgsnow9_3222(7152, 1168), 3);
    add_background_object(create_bgrocks8_3231(7168, 1200), 3);
    add_background_object(create_bgrocks8_3231(7424, 1200), 3);
    add_background_object(create_bgrocks1_3213(6144, 1088), 3);
    add_background_object(create_bgrocks1_3213(5888, 1216), 3);
    add_background_object(create_bgrocks1_3213(6144, 1216), 3);
    add_background_object(create_bgrocks1_3213(6144, 1344), 3);
    add_background_object(create_bgrocks1_3213(6144, 1472), 3);
    add_background_object(create_bgrocks1_3213(4608, 1472), 3);
    add_background_object(create_bgrocks1_3213(3328, 1512), 3);
    add_background_object(create_bgrocks1_3213(3584, 1512), 3);
    add_background_object(create_bgrocks1_3213(4096, 1512), 3);
    add_background_object(create_bgrocks1_3213(3840, 1512), 3);
    add_background_object(create_bgrocks1_3213(4864, 1472), 3);
    add_background_object(create_bgrocks1_3213(5120, 1472), 3);
    add_background_object(create_bgrocks1_3213(5376, 1472), 3);
    add_background_object(create_bgrocks1_3213(5632, 1344), 3);
    add_background_object(create_bgrocks1_3213(5888, 1344), 3);
    add_background_object(create_bgrocks1_3213(5632, 1472), 3);
    add_background_object(create_bgrocks1_3213(5888, 1472), 3);
    add_background_object(create_bgrocks1_3213(6656, 1472), 3);
    add_background_object(create_bgrocks1_3213(6912, 1472), 3);
    add_background_object(create_bgrocks1_3213(7168, 1472), 3);
    add_background_object(create_bgrocks1_3213(7424, 1472), 3);
    add_background_object(create_bgsnow1_3224(6656, 1456), 3);
    add_background_object(create_bgsnow1_3224(6784, 1456), 3);
    add_background_object(create_bgrocks9_3227(6656, 1408), 3);
    add_background_object(create_bgsnow1_3224(6912, 1456), 3);
    add_background_object(create_bgsnow1_3224(7040, 1456), 3);
    add_background_object(create_bgsnow1_3224(7168, 1456), 3);
    add_background_object(create_bgsnow1_3224(7296, 1456), 3);
    add_background_object(create_bgsnow1_3224(7424, 1456), 3);
    add_background_object(create_bgsnow1_3224(7552, 1456), 3);
    add_background_object(create_bgrocks8_3231(7552, 1200), 3);
    add_background_object(create_bgrocks9_3227(7680, 1088), 3);
    add_background_object(create_bgrocks8_3231(7680, 1080), 3);
    add_background_object(create_bgrocks8_3231(7808, 1080), 3);
    add_background_object(create_bgrocks8_3231(7936, 1080), 3);
    add_background_object(create_bgrocks8_3231(8064, 1080), 3);
    add_background_object(create_bgrocks9_3227(7680, 1472), 3);
    add_background_object(create_bgsnow8_3229(7680, 1456), 3);
    add_background_object(create_bgrocks1_3213(8224, 1344), 3);
    add_background_object(create_bgrocks1_3213(8224, 1216), 3);
    add_background_object(create_bgrocks10_3228(8208, 1216), 3);
    add_background_object(create_bgsnow9_3222(8208, 1208), 3);
    add_background_object(create_bgrocks10_3228(8208, 1344), 3);
    add_background_object(create_bgrocks1_3213(8224, 1472), 3);
    add_background_object(create_bgrocks10_3228(8208, 1472), 3);
    add_background_object(create_bgrocks9_3227(8192, 960), 3);
    add_background_object(create_bgrocks1_3213(8192, 832), 3);
    add_background_object(create_bgrocks13_3212(8192, 576), 3);
    add_background_object(create_bgrocks8_3231(8320, 952), 3);
    add_background_object(create_bgrocks8_3231(8192, 952), 3);
    add_background_object(create_bgrocks8_3231(7424, 184), 3);
    add_background_object(create_bgrocks8_3231(7552, 184), 3);
    add_background_object(create_bgrocks10_3228(7792, 320), 3);
    add_background_object(create_bgrocks10_3228(7792, 448), 3);
    add_background_object(create_bgrocks9_3227(7712, 320), 3);
    add_background_object(create_bgrocks9_3227(7712, 448), 3);
    add_background_object(create_bgsnow1_3224(7456, 304), 3);
    add_background_object(create_bgsnow1_3224(7584, 304), 3);
    add_background_object(create_bgsnow9_3222(7440, 304), 3);
    add_background_object(create_bgsnow8_3229(7712, 304), 3);
    add_background_object(create_bgsnow1_3224(7808, 304), 3);
    add_background_object(create_bgsnow9_3222(7792, 304), 3);
    add_background_object(create_bgrocks9_3227(7680, 64), 3);
    add_background_object(create_bgrocks9_3227(7680, -64), 3);
    add_background_object(create_bgrocks12_3240(8256, 544), 3);
    add_background_object(create_bgrocks12_3240(8320, 640), 3);
    add_background_object(create_bgrocks13_3212(8192, 640), 3);
    add_background_object(create_bgrocks11_3215(8064, 704), 3);
    add_background_object(create_bgrocks14_3216(-424, 1112), 3);
    add_background_object(create_bgrocks12_3240(-472, 1104), 3);
    add_background_object(create_bgrocks13_3212(-560, 1128), 3);
    add_background_object(create_bgrocks13_3212(8320, 736), 3);
    add_background_object(create_bgrocks13_3212(8320, 768), 3);
    add_background_object(create_bgrocks12_3240(8384, 736), 3);
    add_background_object(create_bgrocks7_3219(8576, 896), 3);
    add_background_object(create_bgrocks2_3218(8448, 832), 3);
    add_background_object(create_bgsnow3_3237(8448, 816), 3);
    add_background_object(create_bgrocks8_3231(8448, 952), 3);
    add_background_object(create_bgrocks8_3231(8576, 952), 3);
    add_background_object(create_bgsnow4_3239(8576, 880), 3);
    add_background_object(create_bgsnow8_3229(8704, 912), 3);
    add_background_object(create_bgrocks8_3231(7296, 1200), 3);
    add_background_object(create_bgsnow11_3230(7296, 1040), 3);
    add_background_object(create_bgrocks11_3215(6272, 1216), 3);
    add_background_object(create_bgrocks8_3231(6528, 1208), 3);
    add_background_object(create_bgsnow8_3229(6656, 1392), 3);
    add_background_object(create_bgrocks1_3213(8480, 1344), 3);
    add_background_object(create_bgrocks1_3213(8480, 1216), 3);
    add_background_object(create_bgrocks1_3213(8480, 1472), 3);
    add_background_object(create_bgrocks1_3213(8736, 1344), 3);
    add_background_object(create_bgrocks1_3213(8736, 1216), 3);
    add_background_object(create_bgrocks1_3213(8736, 1472), 3);
    add_background_object(create_bgsnow1_3224(8736, 1208), 3);
    add_background_object(create_bgrocks1_3213(8992, 1344), 3);
    add_background_object(create_bgrocks1_3213(8992, 1216), 3);
    add_background_object(create_bgrocks1_3213(8992, 1472), 3);
    add_background_object(create_bgrocks11_3215(8864, 1088), 3);
    add_background_object(create_bgrocks10_3228(8848, 1088), 3);
    add_background_object(create_bgsnow1_3224(9120, 1208), 3);
    add_background_object(create_bgrocks9_3227(9120, 1088), 3);
    add_background_object(create_bgsnow1_3224(8864, 1072), 3);
    add_background_object(create_bgsnow1_3224(8992, 1072), 3);
    add_background_object(create_bgsnow8_3229(9120, 1072), 3);
    add_background_object(create_bgsnow9_3222(8848, 1072), 3);
    add_background_object(create_bgsnowslope1_3225(8984, 344), 3);
    add_background_object(create_bgsnow1_3224(8944, 416), 3);
    add_background_object(create_bgrocks1_3213(9072, 304), 3);
    add_background_object(create_bgsnow1_3224(9072, 288), 3);
    add_background_object(create_bgsnow1_3224(9200, 288), 3);
    add_background_object(create_bgrocks10_3228(9056, 304), 3);
    add_background_object(create_bgsnow9_3222(9056, 288), 3);
    add_background_object(create_bgrocks10_3228(8928, 432), 3);
    add_background_object(create_bgsnow9_3222(8928, 416), 3);
    add_background_object(create_bgrocks9_3227(9200, 432), 3);
    add_background_object(create_bgrocks8_3231(9200, 424), 3);
    add_background_object(create_bgrocks8_3231(8944, 552), 3);
    add_background_object(create_bgrocks8_3231(9072, 552), 3);
    add_background_object(create_bgrocks9_3227(9328, 304), 3);
    add_background_object(create_bgsnow8_3229(9328, 288), 3);
    add_background_object(create_bgsnowslope1_3225(9248, 696), 3);
    add_background_object(create_bgsnow1_3224(9208, 768), 3);
    add_background_object(create_bgsnow1_3224(9336, 632), 3);
    add_background_object(create_bgsnow1_3224(9464, 632), 3);
    add_background_object(create_bgrocks10_3228(9320, 648), 3);
    add_background_object(create_bgsnow9_3222(9320, 632), 3);
    add_background_object(create_bgsnow9_3222(9064, 768), 3);
    add_background_object(create_bgrocks8_3231(9464, 824), 3);
    add_background_object(create_bgrocks8_3231(9208, 824), 3);
    add_background_object(create_bgrocks8_3231(9336, 824), 3);
    add_background_object(create_bgrocks9_3227(9592, 648), 3);
    add_background_object(create_bgsnow8_3229(9592, 632), 3);
    add_background_object(create_bgrocks13_3212(9144, 776), 3);
    add_background_object(create_bgrocks13_3212(9080, 776), 3);
    add_background_object(create_bgsnow1_3224(9080, 768), 3);
    add_background_object(create_bgrocks8_3231(9080, 824), 3);
    add_background_object(create_bgspiralslide_3241(1656, 936), 3);
    add_background_object(create_bgspiralslidetop_3242(1640, 840), 3);
    add_background_object(create_bgspiralslidebottom_3243(1656, 1080), 3);
    add_background_object(create_bgspiralslide_3241(7728, 400), 3);
    add_background_object(create_bgspiralslide_3241(7728, 544), 3);
    add_background_object(create_bgspiralslidetop_3242(7712, 304), 3);
    add_background_object(create_bgspiralslidebottom_3243(7728, 688), 3);
    add_background_object(create_bgspiralslide_3241(9344, 384), 3);
    add_background_object(create_bgspiralslidetop_3242(9328, 288), 3);
    add_background_object(create_bgspiralslidebottom_3243(9344, 528), 3);
    add_background_object(create_bgrocks1_3213(9424, 304), 3);
    add_background_object(create_bgrocks10_3228(9408, 304), 3);
    add_background_object(create_bgrocks9_3227(9680, 304), 3);
    add_background_object(create_bgrocks1_3213(9424, 176), 3);
    add_background_object(create_bgrocks10_3228(9408, 176), 3);
    add_background_object(create_bgrocks9_3227(9680, 176), 3);
    add_background_object(create_bgrocks1_3213(9424, 48), 3);
    add_background_object(create_bgrocks10_3228(9408, 48), 3);
    add_background_object(create_bgrocks9_3227(9680, 48), 3);
    add_background_object(create_bgrocks1_3213(9424, -80), 3);
    add_background_object(create_bgrocks10_3228(9408, -80), 3);
    add_background_object(create_bgrocks9_3227(9680, -80), 3);
    add_background_object(create_bgrocks8_3231(9424, 424), 3);
    add_background_object(create_bgrocks8_3231(9552, 424), 3);
    add_background_object(create_bgrocks8_3231(7544, 704), 3);
    add_background_object(create_bgsnow9_3222(7528, 696), 3);
    add_background_object(create_bgsnow8_3229(7672, 696), 3);
    add_background_object(create_bgsnow8_3229(6184, 192), 3);
    add_background_object(create_bgsnow9_3222(6296, 192), 3);
    add_background_object(create_bgrocks8_3231(6184, 200), 3);
    add_background_object(create_bgsnow9_3222(6168, 192), 3);
    add_background_object(create_bgsnow8_3229(6312, 192), 3);
    add_background_object(create_bgrocks1_3213(5896, 128), 3);
    add_background_object(create_bgrocks10_3228(5880, 128), 3);
    add_background_object(create_bgrocks9_3227(6152, 128), 3);
    add_background_object(create_bgrocks1_3213(5896, 0), 3);
    add_background_object(create_bgrocks10_3228(5880, 0), 3);
    add_background_object(create_bgrocks9_3227(6152, 0), 3);
    add_background_object(create_bgrocks8_3231(6024, 248), 3);
    add_background_object(create_bgrocks8_3231(5896, 248), 3);
    add_background_object(create_bgrocks1_3213(9248, 1344), 3);
    add_background_object(create_bgrocks1_3213(9248, 1216), 3);
    add_background_object(create_bgrocks1_3213(9248, 1472), 3);
    add_background_object(create_bgsnow1_3224(9248, 1208), 3);
    add_background_object(create_bgsnow1_3224(9376, 1208), 3);
    add_background_object(create_bgrocks1_3213(9504, 1472), 3);
    add_background_object(create_bgsnow1_3224(9504, 1208), 3);
    add_background_object(create_bgrocks1_3213(9760, 1344), 3);
    add_background_object(create_bgrocks1_3213(9760, 1216), 3);
    add_background_object(create_bgrocks1_3213(9760, 1472), 3);
    add_background_object(create_bgsnow1_3224(9760, 1208), 3);
    add_background_object(create_bgsnow1_3224(9888, 1208), 3);
    add_background_object(create_bgrocks1_3213(10240, 872), 3);
    add_background_object(create_bgsnow1_3224(10240, 856), 3);
    add_background_object(create_bgsnow1_3224(10368, 856), 3);
    add_background_object(create_bgrocks10_3228(9840, 872), 3);
    add_background_object(create_bgsnow9_3222(9840, 856), 3);
    add_background_object(create_bgrocks9_3227(10496, 872), 3);
    add_background_object(create_bgsnow8_3229(10496, 856), 3);
    add_background_object(create_bgrocks8_3231(10240, 992), 3);
    add_background_object(create_bgrocks8_3231(10368, 992), 3);
    add_background_object(create_bgrocks8_3231(9856, 992), 3);
    add_background_object(create_bgrocks10_3228(9744, 1216), 3);
    add_background_object(create_bgrocks9_3227(9632, 1216), 3);
    add_background_object(create_bgsnow9_3222(9744, 1208), 3);
    add_background_object(create_bgsnow8_3229(9632, 1208), 3);
    add_background_object(create_bgrocks1_3213(10112, 384), 3);
    add_background_object(create_bgsnow1_3224(10112, 368), 3);
    add_background_object(create_bgsnow1_3224(10240, 368), 3);
    add_background_object(create_bgrocks10_3228(9840, 384), 3);
    add_background_object(create_bgsnow9_3222(9840, 368), 3);
    add_background_object(create_bgrocks9_3227(10368, 384), 3);
    add_background_object(create_bgsnow8_3229(10368, 368), 3);
    add_background_object(create_bgrocks8_3231(10112, 504), 3);
    add_background_object(create_bgrocks8_3231(10240, 504), 3);
    add_background_object(create_bgrocks1_3213(9856, 384), 3);
    add_background_object(create_bgsnow1_3224(9856, 368), 3);
    add_background_object(create_bgsnow1_3224(9984, 368), 3);
    add_background_object(create_bgrocks8_3231(9856, 504), 3);
    add_background_object(create_bgrocks8_3231(9984, 504), 3);
    add_background_object(create_bgrocks9_3227(10016, 1216), 3);
    add_background_object(create_bgsnow8_3229(10016, 1208), 3);
    add_background_object(create_bgrocks1_3213(10016, 1408), 3);
    add_background_object(create_bgspiralslidetop_3242(10016, 1208), 3);
    add_background_object(create_bgspiralslidebottom_3243(10032, 1304), 3);
    add_background_object(create_bgsnow1_3224(10016, 1392), 3);
    add_background_object(create_bgsnow1_3224(10144, 1392), 3);
    add_background_object(create_bgrocks9_3227(10016, 1344), 3);
    add_background_object(create_bgrocks1_3213(10016, 1536), 3);
    add_background_object(create_bgrocks1_3213(10272, 1408), 3);
    add_background_object(create_bgsnow1_3224(10272, 1392), 3);
    add_background_object(create_bgrocks1_3213(10272, 1536), 3);
    add_background_object(create_bgrocks1_3213(9984, 744), 3);
    add_background_object(create_bgrocks1_3213(9984, 872), 3);
    add_background_object(create_bgsnow1_3224(9984, 728), 3);
    add_background_object(create_bgsnow1_3224(10112, 728), 3);
    add_background_object(create_bgrocks8_3231(9984, 992), 3);
    add_background_object(create_bgrocks9_3227(10240, 744), 3);
    add_background_object(create_bgsnow8_3229(10240, 728), 3);
    add_background_object(create_bgrocks13_3212(10176, 1000), 3);
    add_background_object(create_bgrocks13_3212(10112, 1064), 3);
    add_background_object(create_bgrocks13_3212(10176, 1064), 3);
    add_background_object(create_bgrocks13_3212(10112, 1128), 3);
    add_background_object(create_bgrocks13_3212(10176, 1128), 3);
    add_background_object(create_bgrocks13_3212(10112, 1192), 3);
    add_background_object(create_bgrocks13_3212(10176, 1192), 3);
    add_background_object(create_bgrocks10_3228(10096, 1128), 3);
    add_background_object(create_bgsnowflat_3235(7544, 696), 3);
    add_background_object(create_bgsnowflat_3235(6528, 1392), 3);
    add_background_object(create_bgrocks9_3227(6528, 1280), 3);
    add_background_object(create_bgsnowflat_3235(9856, 856), 3);
    add_background_object(create_bgrocks10_3228(9968, 744), 3);
    add_background_object(create_bgsnow9_3222(9968, 728), 3);
    add_background_object(create_bgrocks11_3215(10400, 1280), 3);
    add_background_object(create_bgrocks1_3213(10528, 1408), 3);
    add_background_object(create_bgrocks1_3213(10528, 1536), 3);
    add_background_object(create_bgrocks10_3228(10384, 1280), 3);
    add_background_object(create_bgsnow9_3222(10384, 1264), 3);
    add_background_object(create_bgsnowflat_3235(10400, 1264), 3);
    add_background_object(create_bgrocks5_3221(11552, 768), 3);
    add_background_object(create_bgsnow5_3232(11552, 752), 3);
    add_background_object(create_bgsnow6_3233(10656, 1168), 3);
    add_background_object(create_bgsnow7_3236(10528, 1232), 3);
    add_background_object(create_bgrocks1_3213(10784, 1408), 3);
    add_background_object(create_bgrocks1_3213(10784, 1536), 3);
    add_background_object(create_bgrocks1_3213(10784, 1280), 3);
    add_background_object(create_bgrocks3_3220(10784, 1112), 3);
    add_background_object(create_bgsnow6_3233(10784, 1104), 3);
    add_background_object(create_bgrocks3_3220(10912, 1048), 3);
    add_background_object(create_bgsnow6_3233(10912, 1040), 3);
    add_background_object(create_bgrocks3_3220(11040, 984), 3);
    add_background_object(create_bgsnow6_3233(11040, 976), 3);
    add_background_object(create_bgrocks3_3220(11168, 920), 3);
    add_background_object(create_bgsnow6_3233(11168, 912), 3);
    add_background_object(create_bgrocks3_3220(11296, 856), 3);
    add_background_object(create_bgsnow6_3233(11296, 848), 3);
    add_background_object(create_bgrocks3_3220(11424, 792), 3);
    add_background_object(create_bgsnow6_3233(11424, 784), 3);
    add_background_object(create_bgrocks1_3213(11040, 1280), 3);
    add_background_object(create_bgrocks1_3213(11040, 1408), 3);
    add_background_object(create_bgrocks1_3213(11040, 1152), 3);
    add_background_object(create_bgrocks1_3213(11296, 1152), 3);
    add_background_object(create_bgrocks1_3213(11296, 1280), 3);
    add_background_object(create_bgrocks1_3213(11296, 1024), 3);
    add_background_object(create_bgrocks1_3213(11552, 1024), 3);
    add_background_object(create_bgrocks1_3213(11552, 1152), 3);
    add_background_object(create_bgrocks1_3213(11552, 896), 3);
    add_background_object(create_bgrocks13_3212(10784, 1216), 3);
    add_background_object(create_bgrocks13_3212(10848, 1216), 3);
    add_background_object(create_bgrocks13_3212(11040, 1088), 3);
    add_background_object(create_bgrocks13_3212(11104, 1088), 3);
    add_background_object(create_bgrocks13_3212(11296, 960), 3);
    add_background_object(create_bgrocks13_3212(11360, 960), 3);
    add_background_object(create_bgrocks1_3213(11680, 768), 3);
    add_background_object(create_bgrocks1_3213(11680, 896), 3);
    add_background_object(create_bgsnow1_3224(11680, 752), 3);
    add_background_object(create_bgsnow1_3224(11808, 752), 3);
    add_background_object(create_bgrocks1_3213(11936, 768), 3);
    add_background_object(create_bgrocks1_3213(11936, 896), 3);
    add_background_object(create_bgsnow1_3224(11936, 752), 3);
    add_background_object(create_bgsnow1_3224(12064, 752), 3);
    add_background_object(create_bgspiralslide_3241(10384, 464), 3);
    add_background_object(create_bgspiralslide_3241(10384, 608), 3);
    add_background_object(create_bgspiralslidetop_3242(10368, 368), 3);
    add_background_object(create_bgspiralslidebottom_3243(10384, 752), 3);
    add_background_object(create_bgrocks1_3213(12192, 768), 3);
    add_background_object(create_bgrocks1_3213(12192, 896), 3);
    add_background_object(create_bgsnow1_3224(12192, 752), 3);
    add_background_object(create_bgsnow1_3224(12320, 752), 3);
    add_background_object(create_bgrocks1_3213(12448, 384), 3);
    add_background_object(create_bgrocks1_3213(12448, 512), 3);
    add_background_object(create_bgsnow1_3224(12448, 368), 3);
    add_background_object(create_bgsnow1_3224(12576, 368), 3);
    add_background_object(create_bgrocks1_3213(12704, 384), 3);
    add_background_object(create_bgrocks1_3213(12704, 512), 3);
    add_background_object(create_bgsnow1_3224(12704, 368), 3);
    add_background_object(create_bgsnow1_3224(12832, 368), 3);
    add_background_object(create_bgsnowflat_3235(6184, 192), 3);
    add_background_object(create_bgrocks10_3228(7408, 960), 3);
    add_background_object(create_bgrocks12_3240(8128, 352), 3);
    add_background_object(create_bgrocks1_3213(1480, 304), 3);
    add_background_object(create_bgrocks10_3228(1464, 304), 3);
    add_background_object(create_bgrocks1_3213(1480, 176), 3);
    add_background_object(create_bgrocks10_3228(1464, 176), 3);
    add_background_object(create_bgrocks1_3213(1480, 48), 3);
    add_background_object(create_bgrocks10_3228(1464, 48), 3);
    add_background_object(create_bgrocks1_3213(1480, -80), 3);
    add_background_object(create_bgrocks10_3228(1464, -80), 3);
    add_background_object(create_bgrocks1_3213(12448, 768), 3);
    add_background_object(create_bgrocks1_3213(12448, 896), 3);
    add_background_object(create_bgrocks1_3213(12704, 768), 3);
    add_background_object(create_bgrocks1_3213(12704, 896), 3);
    add_background_object(create_bgrocks10_3228(12432, 384), 3);
    add_background_object(create_bgrocks10_3228(12432, 512), 3);
    add_background_object(create_bgsnow9_3222(12432, 368), 3);
    add_background_object(create_bgrocks1_3213(12448, 640), 3);
    add_background_object(create_bgrocks1_3213(12704, 640), 3);
    add_background_object(create_bgrocks10_3228(12432, 640), 3);
    add_background_object(create_bgrocks10_3228(12176, 448), 3);
    add_background_object(create_bgsnow9_3222(12176, 432), 3);
    add_background_object(create_bgsnow8_3229(5120, 544), 3);
    add_background_object(create_bgsnow9_3222(5104, 520), 3);
    add_background_object(create_bgsnow9_3222(4976, 520), 3);
    add_background_object(create_bgsnow8_3229(5120, 520), 3);
    add_background_object(create_bgsnowflat_3235(4992, 520), 3);
    add_background_object(create_bgsnowflat_3235(8224, 1208), 3);
    add_background_object(create_bgsnowflat_3235(8352, 1208), 3);
    add_background_object(create_bgsnowflat_3235(8480, 1208), 3);
    add_background_object(create_bgsnowflat_3235(8608, 1208), 3);
    add_background_object(create_bgrocks15_3214(3288, 1272), 3);
    add_background_object(create_bgrocks15_3214(7992, 312), 3);
    add_background_object(create_bgrocks15_3214(8104, 488), 3);
    add_background_object(create_bgrocks15_3214(8144, 544), 3);
    add_background_object(create_bgrocks15_3214(8200, 624), 3);
    add_background_object(create_bgrocks15_3214(8248, 704), 3);
    add_background_object(create_bgrocks15_3214(8288, 752), 3);
    add_background_object(create_bgsnow10_3244(8128, 336), 3);
    add_background_object(create_bgsnow10_3244(8384, 720), 3);
    add_background_object(create_bgsnow10_3244(8320, 624), 3);
    add_background_object(create_bgsnow10_3244(8256, 528), 3);
    add_background_object(create_bgsnow10_3244(8192, 432), 3);
    add_background_object(create_bgrocks9_3227(8128, 320), 3);
    add_background_object(create_bgsnow8_3229(8128, 304), 3);
    add_background_object(create_bgsnow12_3245(7936, 304), 3);
    add_background_object(create_bgsnow1_3224(8000, 304), 3);
    add_background_object(create_bgrocks15_3214(8040, 392), 3);
    add_background_object(create_bgrocks15_3214(6560, 1048), 3);
    add_background_object(create_bgrocks15_3214(10112, 1128), 3);
    add_background_object(create_bgrocks15_3214(10112, 1008), 3);
    add_background_object(create_bgrocks15_3214(10664, 1240), 3);
    add_background_object(create_bgrocks15_3214(10768, 1184), 3);
    add_background_object(create_bgrocks15_3214(10864, 1128), 3);
    add_background_object(create_bgrocks15_3214(10984, 1072), 3);
    add_background_object(create_bgrocks15_3214(11096, 1024), 3);
    add_background_object(create_bgrocks15_3214(11216, 960), 3);
    add_background_object(create_bgrocks15_3214(11320, 912), 3);
    add_background_object(create_bgrocks15_3214(11408, 856), 3);
    add_background_object(create_bgrocks15_3214(11520, 808), 3);
    add_object(create_objectdigspot_734(12552, 336), 3);
    add_object(create_objectdigspot_734(9184, 736), 3);
    add_object(create_objectdigspot_734(6504, 528), 3);
    add_object(create_objectteleblockmask_3246(10800, 888), 3);
    add_object(create_objectteleblockmask_3246(10736, 888), 3);
    add_object(create_objectteleblockmask_3246(10672, 888), 3);
    add_object(create_objectteleblockmask_3246(10608, 888), 3);
    add_object(create_objectteleblockmask_3246(10544, 888), 3);
    add_object(create_enemymeteorroller_2421(4095, 772), 3);
    add_object(create_objectteleblockmask_3246(10416, 1168), 3);
    add_object(create_objectteleblockmask_3246(10416, 1232), 3);
    add_object(create_enemysuperturretus_1828(9067, 928), 3);
    add_object(create_objectteleblockmask_3246(7280, 512), 3);
    add_object(create_objectteleblockmask_3246(8512, 448), 3);
    add_object(create_objectteleblockmask_3246(8896, 720), 3);
    add_object(create_objectteleblockmask_3246(8832, 720), 3);
    add_object(create_objectteleblockmask_3246(8768, 720), 3);
    add_object(create_objectteleblockmask_3246(8704, 720), 3);
    add_object(create_objectteleblockmask_3246(9520, 1024), 3);
    add_object(create_objectteleblockmask_3246(8896, 448), 3);
    add_object(create_objectteleblockmask_3246(8832, 448), 3);
    add_object(create_objectteleblockmask_3246(8768, 448), 3);
    add_object(create_objectteleblockmask_3246(8704, 448), 3);
    add_object(create_objectteleblockmask_3246(8640, 448), 3);
    add_object(create_objectteleblockmask_3246(8576, 448), 3);
    add_object(create_objectteleblockmask_3246(7408, 512), 3);
    add_object(create_enemyextractorbase_1176(7584, 260), 3);
    add_object(create_enemyextractorbase_1176(2944, 1156), 3);
    add_object(create_objectteleblockmask_3246(8176, 1240), 3);
    add_object(create_objectteleblockmask_3246(8120, 1248), 3);
    add_object(create_objectteleblockmask_3246(8064, 1272), 3);
    add_object(create_objectteleblockmask_3246(8016, 1304), 3);
    add_object(create_objectteleblockmask_3246(7976, 1344), 3);
    add_object(create_objectteleblockmask_3246(7936, 1384), 3);
    add_object(create_objectteleblockmask_3246(7896, 1424), 3);
    add_object(create_objectteleblockmask_3246(7848, 1464), 3);
    add_object(create_objectteleblockmask_3246(7792, 1488), 3);
    add_object(create_objectteleblockmask_3246(7728, 1496), 3);
    add_object(create_objectteleblockmask_3246(7408, 448), 3);
    add_object(create_objectteleblockmask_3246(7344, 512), 3);
    add_object(create_objectteleblockmask_3246(9312, 104), 3);
    add_object(create_objectteleblockmask_3246(9248, 104), 3);
    add_object(create_objectteleblockmask_3246(9184, 104), 3);
    add_object(create_objectteleblockmask_3246(1008, 936), 3);
    add_object(create_objectteleblockmask_3246(4024, 864), 3);
    add_object(create_objectteleblockmask_3246(3544, 992), 3);
    add_object(create_objectteleblockmask_3246(3480, 992), 3);
    add_object(create_objectteleblockmask_3246(3416, 992), 3);
    add_object(create_objectteleblockmask_3246(3352, 992), 3);
    add_object(create_objectteleblockmask_3246(792, 1200), 3);
    add_object(create_objectteleblockmask_3246(728, 1200), 3);
    add_object(create_objectteleblockmask_3246(1048, 1200), 3);
    add_object(create_objectteleblockmask_3246(984, 1200), 3);
    add_object(create_objectteleblockmask_3246(920, 1200), 3);
    add_object(create_objectteleblockmask_3246(856, 1200), 3);
    add_object(create_objectteleblockmask_3246(2768, 1304), 3);
    add_object(create_objectteleblockmask_3246(944, 936), 3);
    add_object(create_objectteleblockmask_3246(880, 936), 3);
    add_object(create_objectteleblockmask_3246(824, 928), 3);
    add_object(create_objectteleblockmask_3246(768, 904), 3);
    add_object(create_objectteleblockmask_3246(720, 872), 3);
    add_object(create_objectteleblockmask_3246(680, 832), 3);
    add_object(create_objectteleblockmask_3246(640, 792), 3);
    add_object(create_objectteleblockmask_3246(600, 752), 3);
    add_object(create_objectteleblockmask_3246(552, 712), 3);
    add_object(create_objectteleblockmask_3246(496, 688), 3);
    add_object(create_gimmicksnowspiremask_3247(5872, 816), 3);
    add_object(create_gimmicksnowspiremask_3247(5408, 944), 3);
    add_object(create_gimmicksnowspiremask_3247(5056, 944), 3);
    add_object(create_gimmicksnowspiremask_3247(4848, 1144), 3);
    add_object(create_gimmicksnowspiremask_3247(4520, 1200), 3);
    add_object(create_gimmicksnowspiremask_3247(3168, 1208), 3);
    add_object(create_playerstartingpoint_358(61, 629), 3);
    add_object(create_enemysuperturretus_1828(1555, 1120), 3);
    add_object(create_enemysuperturretus_1828(1443, 1056), 3);
    add_object(create_enemyextractorbase_1176(1824, 1116), 3);
    add_object(create_enemyextractorhead_1177(1824, 1116), 3);
    add_object(create_enemymeteorrollerflame_2420(2336, 1304), 3);
    add_object(create_enemymeteorroller_2421(2343, 1308), 3);
    add_object(create_enemylimiter_350(2037, 1306), 3);
    add_object(create_effectwarning_1513(-172, 1384), 3);
    add_object(create_minibosstreddright2_1039(3608, 1176), 3);
    add_object(create_minibosstreddright4_1040(3577, 1137), 3);
    add_object(create_minibosstreddright6_1041(3578, 1120), 3);
    add_object(create_minibosstreddright5_1042(3594, 1128), 3);
    add_object(create_minibosstreddright3_1043(3608, 1200), 3);
    add_object(create_minibosstredd_1044(3560, 1136), 3);
    add_object(create_minibosstreddright1_1045(3608, 1137), 3);
    add_object(create_minibosstreddleft6_1046(3546, 1120), 3);
    add_object(create_minibosstreddleft4_1047(3545, 1137), 3);
    add_object(create_minibosstreddleft5_1048(3530, 1128), 3);
    add_object(create_minibosstreddleft2_1049(3512, 1176), 3);
    add_object(create_minibosstreddleft3_1050(3512, 1200), 3);
    add_object(create_minibosstreddleft1_1051(3512, 1137), 3);
    add_object(create_minibosstreddright2_1039(2552, 1264), 3);
    add_object(create_minibosstreddright4_1040(2521, 1225), 3);
    add_object(create_minibosstreddright6_1041(2522, 1208), 3);
    add_object(create_minibosstreddright5_1042(2538, 1216), 3);
    add_object(create_minibosstreddright3_1043(2552, 1288), 3);
    add_object(create_minibosstredd_1044(2504, 1224), 3);
    add_object(create_minibosstreddright1_1045(2552, 1225), 3);
    add_object(create_minibosstreddleft6_1046(2490, 1208), 3);
    add_object(create_minibosstreddleft4_1047(2489, 1225), 3);
    add_object(create_minibosstreddleft5_1048(2474, 1216), 3);
    add_object(create_minibosstreddleft2_1049(2456, 1264), 3);
    add_object(create_minibosstreddleft3_1050(2456, 1288), 3);
    add_object(create_minibosstreddleft1_1051(2456, 1225), 3);
    add_object(create_minibosstreddright2_1039(3984, 1176), 3);
    add_object(create_minibosstreddright4_1040(3953, 1137), 3);
    add_object(create_minibosstreddright6_1041(3954, 1120), 3);
    add_object(create_minibosstreddright5_1042(3970, 1128), 3);
    add_object(create_minibosstreddright3_1043(3984, 1200), 3);
    add_object(create_minibosstredd_1044(3936, 1136), 3);
    add_object(create_minibosstreddright1_1045(3984, 1137), 3);
    add_object(create_minibosstreddleft6_1046(3922, 1120), 3);
    add_object(create_minibosstreddleft4_1047(3921, 1137), 3);
    add_object(create_minibosstreddleft5_1048(3906, 1128), 3);
    add_object(create_minibosstreddleft2_1049(3888, 1176), 3);
    add_object(create_minibosstreddleft3_1050(3888, 1200), 3);
    add_object(create_minibosstreddleft1_1051(3888, 1137), 3);
    add_object(create_minibosstreddright2_1039(4176, 1176), 3);
    add_object(create_minibosstreddright4_1040(4145, 1137), 3);
    add_object(create_minibosstreddright6_1041(4146, 1120), 3);
    add_object(create_minibosstreddright5_1042(4162, 1128), 3);
    add_object(create_minibosstreddright3_1043(4176, 1200), 3);
    add_object(create_minibosstredd_1044(4128, 1136), 3);
    add_object(create_minibosstreddright1_1045(4176, 1137), 3);
    add_object(create_minibosstreddleft6_1046(4114, 1120), 3);
    add_object(create_minibosstreddleft4_1047(4113, 1137), 3);
    add_object(create_minibosstreddleft5_1048(4098, 1128), 3);
    add_object(create_minibosstreddleft2_1049(4080, 1176), 3);
    add_object(create_minibosstreddleft3_1050(4080, 1200), 3);
    add_object(create_minibosstreddleft1_1051(4080, 1137), 3);
    add_object(create_enemymeteorrollerflame_2420(3416, 1216), 3);
    add_object(create_enemymeteorroller_2421(3423, 1220), 3);
    add_object(create_enemylimiter_350(3349, 1226), 3);
    add_object(create_enemylimiter_350(4357, 1226), 3);
    add_object(create_enemymeteorrollerflame_2420(3552, 1216), 3);
    add_object(create_enemymeteorroller_2421(3559, 1220), 3);
    add_object(create_objectteleblockmask_3246(432, 680), 3);
    add_object(create_enemylimiter_350(2757, 1306), 3);
    add_object(create_redspringleft_442(1360, 888), 3);
    add_object(create_redspringleft_442(1360, 920), 3);
    add_object(create_redspringleft_442(1360, 952), 3);
    add_object(create_redspringright_441(264, 1208), 3);
    add_object(create_redspringright_441(264, 1240), 3);
    add_object(create_redspringright_441(264, 1272), 3);
    add_object(create_redspringright_441(264, 1304), 3);
    add_object(create_redspringright_441(264, 1336), 3);
    add_object(create_redspringright_441(264, 1368), 3);
    add_object(create_redspringright_441(264, 1400), 3);
    add_object(create_redspringright_441(264, 1432), 3);
    add_object(create_enemydragonfly_944(1535, 1389), 3);
    add_object(create_enemydragonfly_944(1663, 1413), 3);
    add_object(create_enemydragonfly_944(1791, 1373), 3);
    add_object(create_enemysuperturretus_1828(4459, 1008), 3);
    add_object(create_enemysuperturretus_1828(4867, 816), 3);
    add_object(create_enemysuperturretus_1828(5019, 736), 3);
    add_object(create_enemysuperturretus_1828(5091, 784), 3);
    add_object(create_enemysuperturretus_1828(5259, 768), 3);
    add_object(create_enemysuperturretus_1828(5363, 672), 3);
    add_object(create_enemysuperturretus_1828(5563, 616), 3);
    add_object(create_objectcrystal_279(1413, 810), 3);
    add_object(create_objectcrystal_279(1437, 786), 3);
    add_object(create_objectcrystal_279(1461, 762), 3);
    add_object(create_objectcrystal_279(1485, 786), 3);
    add_object(create_objectcrystal_279(1509, 810), 3);
    add_object(create_objectcrystal_279(1533, 786), 3);
    add_object(create_objectcrystal_279(1557, 762), 3);
    add_object(create_objectcrystal_279(1581, 786), 3);
    add_object(create_objectcrystal_279(1605, 810), 3);
    add_object(create_objectcrystal_279(613, 1434), 3);
    add_object(create_objectcrystal_279(661, 1434), 3);
    add_object(create_objectcrystal_279(637, 1434), 3);
    add_object(create_objectcrystal_279(885, 1434), 3);
    add_object(create_objectcrystal_279(861, 1434), 3);
    add_object(create_objectcrystal_279(909, 1434), 3);
    add_object(create_objectpetal_302(2217, 1041), 3);
    add_object(create_objectpetal_302(2265, 1041), 3);
    add_object(create_objectpetal_302(2241, 1009), 3);
    add_object(create_objectpetal_302(2241, 1073), 3);
    add_object(create_minibosstreddright2_1039(6160, 624), 3);
    add_object(create_minibosstreddright4_1040(6129, 585), 3);
    add_object(create_minibosstreddright6_1041(6130, 568), 3);
    add_object(create_minibosstreddright5_1042(6146, 576), 3);
    add_object(create_minibosstreddright3_1043(6160, 648), 3);
    add_object(create_minibosstredd_1044(6112, 584), 3);
    add_object(create_minibosstreddright1_1045(6160, 585), 3);
    add_object(create_minibosstreddleft6_1046(6098, 568), 3);
    add_object(create_minibosstreddleft4_1047(6097, 585), 3);
    add_object(create_minibosstreddleft5_1048(6082, 576), 3);
    add_object(create_minibosstreddleft2_1049(6064, 624), 3);
    add_object(create_minibosstreddleft3_1050(6064, 648), 3);
    add_object(create_minibosstreddleft1_1051(6064, 585), 3);
    add_object(create_monitorcrystals_324(104, 1176), 3);
    add_object(create_objectcrystal_279(3333, 946), 3);
    add_object(create_objectcrystal_279(3365, 946), 3);
    add_object(create_objectcrystal_279(3333, 914), 3);
    add_object(create_objectcrystal_279(3365, 914), 3);
    add_object(create_objectcrystal_279(3397, 946), 3);
    add_object(create_objectcrystal_279(3429, 946), 3);
    add_object(create_objectcrystal_279(3397, 914), 3);
    add_object(create_objectcrystal_279(3429, 914), 3);
    add_object(create_objectcrystal_279(3461, 946), 3);
    add_object(create_objectcrystal_279(3493, 946), 3);
    add_object(create_objectcrystal_279(3461, 914), 3);
    add_object(create_objectcrystal_279(3493, 914), 3);
    add_object(create_objectcrystal_279(3525, 946), 3);
    add_object(create_objectcrystal_279(3557, 946), 3);
    add_object(create_objectcrystal_279(3525, 914), 3);
    add_object(create_objectcrystal_279(3557, 914), 3);
    add_object(create_objectcrystal_279(4101, 770), 3);
    add_object(create_objectcrystal_279(4149, 778), 3);
    add_object(create_objectcrystal_279(4197, 794), 3);
    add_object(create_objectcrystal_279(4245, 818), 3);
    add_object(create_objectcrystal_279(4293, 842), 3);
    add_object(create_objectcrystal_279(4341, 866), 3);
    add_object(create_objectcrystal_279(4389, 890), 3);
    add_object(create_objectcrystal_279(149, 570), 3);
    add_object(create_objectcrystal_279(173, 546), 3);
    add_object(create_objectcrystal_279(205, 554), 3);
    add_object(create_objectcrystal_279(221, 562), 3);
    add_object(create_objectcrystal_279(253, 554), 3);
    add_object(create_objectcrystal_279(269, 578), 3);
    add_object(create_objectcrystal_279(181, 570), 3);
    add_object(create_objectcrystal_279(245, 586), 3);
    add_object(create_objectcrystal_279(189, 538), 3);
    add_object(create_objectcrystal_279(157, 554), 3);
    add_object(create_objectcrystal_279(237, 546), 3);
    add_object(create_objectcrystal_279(229, 578), 3);
    add_object(create_objectcrystal_279(6557, 250), 3);
    add_object(create_objectcrystal_279(6605, 266), 3);
    add_object(create_objectcrystal_279(6653, 290), 3);
    add_object(create_objectcrystal_279(6701, 314), 3);
    add_object(create_objectcrystal_279(6749, 338), 3);
    add_object(create_objectcrystal_279(6797, 362), 3);
    add_object(create_yellowspringup_434(5584, 944), 3);
    add_object(create_yellowspringup_434(5552, 944), 3);
    add_object(create_objectcrystal_279(5597, 834), 3);
    add_object(create_objectcrystal_279(5565, 834), 3);
    add_object(create_objectcrystal_279(5597, 874), 3);
    add_object(create_objectcrystal_279(5565, 874), 3);
    add_object(create_objectcrystal_279(5597, 914), 3);
    add_object(create_objectcrystal_279(5565, 914), 3);
    add_object(create_objectcrystal_279(7917, 762), 3);
    add_object(create_objectcrystal_279(7917, 722), 3);
    add_object(create_objectcrystal_279(7917, 682), 3);
    add_object(create_objectcrystal_279(7917, 642), 3);
    add_object(create_objectcrystal_279(7901, 610), 3);
    add_object(create_objectcrystal_279(7869, 594), 3);
    add_object(create_objectcrystal_279(7837, 594), 3);
    add_object(create_objectcrystal_279(7901, 794), 3);
    add_object(create_objectcrystal_279(7869, 810), 3);
    add_object(create_objectcrystal_279(7837, 810), 3);
    add_object(create_enemydragonfly_944(6655, 501), 3);
    add_object(create_enemymeteorrollerflame_2420(7472, 800), 3);
    add_object(create_enemymeteorroller_2421(7479, 804), 3);
    add_object(create_enemymeteorrollerflame_2420(7096, 784), 3);
    add_object(create_enemymeteorroller_2421(7103, 788), 3);
    add_object(create_enemylimiter_350(6973, 794), 3);
    add_object(create_enemylimiter_350(7277, 794), 3);
    add_object(create_enemylimiter_350(7413, 810), 3);
    add_object(create_enemylimiter_350(7901, 810), 3);
    add_object(create_objectpetal_302(7417, 377), 3);
    add_object(create_objectpetal_302(7377, 377), 3);
    add_object(create_objectpetal_302(7337, 457), 3);
    add_object(create_objectpetal_302(7337, 417), 3);
    add_object(create_objectpetal_302(7337, 377), 3);
    add_object(create_enemylimiter_350(6941, 1082), 3);
    add_object(create_enemylimiter_350(6677, 1018), 3);
    add_object(create_enemymeteorrollerflame_2420(6880, 1072), 3);
    add_object(create_enemymeteorroller_2421(6887, 1076), 3);
    add_object(create_objectcrystal_279(7733, 34), 3);
    add_object(create_objectcrystal_279(7733, 82), 3);
    add_object(create_objectcrystal_279(7773, 82), 3);
    add_object(create_objectcrystal_279(7773, 34), 3);
    add_object(create_objectcrystal_279(7813, 34), 3);
    add_object(create_objectcrystal_279(7813, 82), 3);
    add_object(create_objectcrystal_279(7853, 82), 3);
    add_object(create_objectcrystal_279(7853, 34), 3);
    add_object(create_objectcrystal_279(7893, 34), 3);
    add_object(create_objectcrystal_279(7893, 82), 3);
    add_object(create_objectcrystal_279(7933, 82), 3);
    add_object(create_objectcrystal_279(7933, 34), 3);
    add_object(create_objectcrystal_279(7733, 130), 3);
    add_object(create_objectcrystal_279(7773, 130), 3);
    add_object(create_objectcrystal_279(7813, 130), 3);
    add_object(create_objectcrystal_279(7853, 130), 3);
    add_object(create_objectcrystal_279(7893, 130), 3);
    add_object(create_objectcrystal_279(7933, 130), 3);
    add_object(create_enemyextractorhead_1177(7584, 260), 3);
    add_object(create_enemyextractorhead_1177(2944, 1156), 3);
    add_object(create_objectcrystal_279(7381, 962), 3);
    add_object(create_objectcrystal_279(7365, 986), 3);
    add_object(create_objectcrystal_279(7349, 1010), 3);
    add_object(create_objectcrystal_279(7333, 1034), 3);
    add_object(create_objectcrystal_279(7317, 1058), 3);
    add_object(create_objectcrystal_279(7301, 1082), 3);
    add_object(create_objectcrystal_279(7285, 1106), 3);
    add_object(create_objectcrystal_279(7621, 1434), 3);
    add_object(create_objectcrystal_279(7661, 1434), 3);
    add_object(create_objectcrystal_279(7581, 1434), 3);
    add_object(create_objectcrystal_279(7541, 1434), 3);
    add_object(create_objectcrystal_279(7501, 1434), 3);
    add_object(create_objectcrystal_279(7461, 1434), 3);
    add_object(create_objectcrystal_279(7421, 1434), 3);
    add_object(create_objectcrystal_279(7381, 1434), 3);
    add_object(create_objectcrystal_279(7341, 1434), 3);
    add_object(create_objectcrystal_279(7301, 1434), 3);
    add_object(create_objectcrystal_279(7317, 1354), 3);
    add_object(create_objectcrystal_279(7261, 1434), 3);
    add_object(create_minibosstreddright2_1039(6944, 1392), 3);
    add_object(create_minibosstreddright4_1040(6913, 1353), 3);
    add_object(create_minibosstreddright6_1041(6914, 1336), 3);
    add_object(create_minibosstreddright5_1042(6930, 1344), 3);
    add_object(create_minibosstreddright3_1043(6944, 1416), 3);
    add_object(create_minibosstredd_1044(6896, 1352), 3);
    add_object(create_minibosstreddright1_1045(6944, 1353), 3);
    add_object(create_minibosstreddleft6_1046(6882, 1336), 3);
    add_object(create_minibosstreddleft4_1047(6881, 1353), 3);
    add_object(create_minibosstreddleft5_1048(6866, 1344), 3);
    add_object(create_minibosstreddleft2_1049(6848, 1392), 3);
    add_object(create_minibosstreddleft3_1050(6848, 1416), 3);
    add_object(create_minibosstreddleft1_1051(6848, 1353), 3);
    add_object(create_minibosstreddright2_1039(7320, 1392), 3);
    add_object(create_minibosstreddright4_1040(7289, 1353), 3);
    add_object(create_minibosstreddright6_1041(7290, 1336), 3);
    add_object(create_minibosstreddright5_1042(7306, 1344), 3);
    add_object(create_minibosstreddright3_1043(7320, 1416), 3);
    add_object(create_minibosstredd_1044(7272, 1352), 3);
    add_object(create_minibosstreddright1_1045(7320, 1353), 3);
    add_object(create_minibosstreddleft6_1046(7258, 1336), 3);
    add_object(create_minibosstreddleft4_1047(7257, 1353), 3);
    add_object(create_minibosstreddleft5_1048(7242, 1344), 3);
    add_object(create_minibosstreddleft2_1049(7224, 1392), 3);
    add_object(create_minibosstreddleft3_1050(7224, 1416), 3);
    add_object(create_minibosstreddleft1_1051(7224, 1353), 3);
    add_object(create_minibosstreddright2_1039(7512, 1392), 3);
    add_object(create_minibosstreddright4_1040(7481, 1353), 3);
    add_object(create_minibosstreddright6_1041(7482, 1336), 3);
    add_object(create_minibosstreddright5_1042(7498, 1344), 3);
    add_object(create_minibosstreddright3_1043(7512, 1416), 3);
    add_object(create_minibosstredd_1044(7464, 1352), 3);
    add_object(create_minibosstreddright1_1045(7512, 1353), 3);
    add_object(create_minibosstreddleft6_1046(7450, 1336), 3);
    add_object(create_minibosstreddleft4_1047(7449, 1353), 3);
    add_object(create_minibosstreddleft5_1048(7434, 1344), 3);
    add_object(create_minibosstreddleft2_1049(7416, 1392), 3);
    add_object(create_minibosstreddleft3_1050(7416, 1416), 3);
    add_object(create_minibosstreddleft1_1051(7416, 1353), 3);
    add_object(create_monitormetalshield_329(7592, 664), 3);
    add_object(create_monitorcrystals_324(6608, 1360), 3);
    add_object(create_monitorcrystals_324(6576, 1360), 3);
    add_object(create_minibosstreddright2_1039(8488, 1144), 3);
    add_object(create_minibosstreddright4_1040(8457, 1105), 3);
    add_object(create_minibosstreddright6_1041(8458, 1088), 3);
    add_object(create_minibosstreddright5_1042(8474, 1096), 3);
    add_object(create_minibosstreddright3_1043(8488, 1168), 3);
    add_object(create_minibosstredd_1044(8440, 1104), 3);
    add_object(create_minibosstreddright1_1045(8488, 1105), 3);
    add_object(create_minibosstreddleft6_1046(8426, 1088), 3);
    add_object(create_minibosstreddleft4_1047(8425, 1105), 3);
    add_object(create_minibosstreddleft5_1048(8410, 1096), 3);
    add_object(create_minibosstreddleft2_1049(8392, 1144), 3);
    add_object(create_minibosstreddleft3_1050(8392, 1168), 3);
    add_object(create_minibosstreddleft1_1051(8392, 1105), 3);
    add_object(create_gimmicksnowspiremask_3247(8848, 1208), 3);
    add_object(create_enemydragonfly_944(9039, 941), 3);
    add_object(create_enemydragonfly_944(4015, 709), 3);
    add_object(create_objectcrystal_279(6693, 1010), 3);
    add_object(create_objectcrystal_279(6693, 970), 3);
    add_object(create_objectcrystal_279(6693, 930), 3);
    add_object(create_objectcrystal_279(6693, 890), 3);
    add_object(create_gimmickspiralslidestart_3248(1688, 824), 3);
    add_object(create_gimmickspiralslideend_3249(1688, 1120), 3);
    add_object(create_slidecheck_3250(-304, 904), 3);
    add_object(create_gimmickspiralslidestart_3248(7760, 288), 3);
    add_object(create_gimmickspiralslideend_3249(7760, 728), 3);
    add_object(create_gimmickspiralslidestart_3248(9376, 272), 3);
    add_object(create_gimmickspiralslideend_3249(9376, 568), 3);
    add_object(create_objectcrystal_279(9165, 50), 3);
    add_object(create_objectcrystal_279(9197, 50), 3);
    add_object(create_objectcrystal_279(9229, 50), 3);
    add_object(create_objectcrystal_279(9261, 50), 3);
    add_object(create_objectcrystal_279(9293, 50), 3);
    add_object(create_objectcrystal_279(9325, 50), 3);
    add_object(create_objectcrystal_279(9165, 18), 3);
    add_object(create_objectcrystal_279(9197, 18), 3);
    add_object(create_objectcrystal_279(9229, 18), 3);
    add_object(create_objectcrystal_279(9261, 18), 3);
    add_object(create_objectcrystal_279(9293, 18), 3);
    add_object(create_objectcrystal_279(9325, 18), 3);
    add_object(create_objectcrystal_279(8749, 394), 3);
    add_object(create_objectcrystal_279(8781, 394), 3);
    add_object(create_objectcrystal_279(8813, 394), 3);
    add_object(create_objectcrystal_279(8845, 394), 3);
    add_object(create_objectcrystal_279(8877, 394), 3);
    add_object(create_objectcrystal_279(8909, 394), 3);
    add_object(create_objectcrystal_279(8557, 394), 3);
    add_object(create_objectcrystal_279(8589, 394), 3);
    add_object(create_objectcrystal_279(8621, 394), 3);
    add_object(create_objectcrystal_279(8653, 394), 3);
    add_object(create_objectcrystal_279(8685, 394), 3);
    add_object(create_objectcrystal_279(8717, 394), 3);
    add_object(create_objectcrystal_279(8493, 394), 3);
    add_object(create_objectcrystal_279(8525, 394), 3);
    add_object(create_objectcrystal_279(8685, 666), 3);
    add_object(create_objectcrystal_279(8717, 666), 3);
    add_object(create_objectcrystal_279(8749, 666), 3);
    add_object(create_objectcrystal_279(8781, 666), 3);
    add_object(create_objectcrystal_279(8621, 666), 3);
    add_object(create_objectcrystal_279(8653, 666), 3);
    add_object(create_objectcrystal_279(8813, 666), 3);
    add_object(create_objectcrystal_279(8845, 666), 3);
    add_object(create_objectcrystal_279(8877, 666), 3);
    add_object(create_objectcrystal_279(8909, 666), 3);
    add_object(create_monitorrings_407(6640, 1360), 3);
    add_object(create_monitorkeystone_562(6168, 160), 3);
    add_object(create_enemysuperturretus_1828(6779, 360), 3);
    add_object(create_enemydragonfly_944(9103, 181), 3);
    add_object(create_enemymeteorroller_2421(9135, 268), 3);
    add_object(create_enemymeteorrollerflame_2420(9128, 264), 3);
    add_object(create_enemylimiter_350(9365, 274), 3);
    add_object(create_enemylimiter_350(9061, 274), 3);
    add_object(create_redspringup_440(9648, 1256), 3);
    add_object(create_redspringup_440(9680, 1256), 3);
    add_object(create_redspringup_440(9712, 1256), 3);
    add_object(create_monitorearthshield_326(232, 616), 3);
    add_object(create_objectcrystal_279(9797, 50), 3);
    add_object(create_objectcrystal_279(9765, 90), 3);
    add_object(create_objectcrystal_279(9797, 90), 3);
    add_object(create_objectcrystal_279(9765, 130), 3);
    add_object(create_objectcrystal_279(9797, 130), 3);
    add_object(create_objectcrystal_279(9797, 170), 3);
    add_object(create_objectcrystal_279(9829, 50), 3);
    add_object(create_objectcrystal_279(9861, 50), 3);
    add_object(create_objectcrystal_279(9829, 90), 3);
    add_object(create_objectcrystal_279(9861, 90), 3);
    add_object(create_objectcrystal_279(9829, 130), 3);
    add_object(create_objectcrystal_279(9861, 130), 3);
    add_object(create_objectcrystal_279(9829, 170), 3);
    add_object(create_objectcrystal_279(9861, 170), 3);
    add_object(create_objectcrystal_279(9893, 50), 3);
    add_object(create_objectcrystal_279(9925, 50), 3);
    add_object(create_objectcrystal_279(9893, 90), 3);
    add_object(create_objectcrystal_279(9925, 90), 3);
    add_object(create_objectcrystal_279(9893, 130), 3);
    add_object(create_objectcrystal_279(9925, 130), 3);
    add_object(create_objectcrystal_279(9893, 170), 3);
    add_object(create_objectcrystal_279(9925, 170), 3);
    add_object(create_objectcrystal_279(9957, 50), 3);
    add_object(create_objectcrystal_279(9957, 90), 3);
    add_object(create_objectcrystal_279(9989, 90), 3);
    add_object(create_objectcrystal_279(9957, 130), 3);
    add_object(create_objectcrystal_279(9989, 130), 3);
    add_object(create_objectcrystal_279(9957, 170), 3);
    add_object(create_objectcrystal_279(9677, 682), 3);
    add_object(create_objectcrystal_279(9709, 682), 3);
    add_object(create_objectcrystal_279(9677, 722), 3);
    add_object(create_objectcrystal_279(9709, 722), 3);
    add_object(create_objectcrystal_279(9677, 762), 3);
    add_object(create_objectcrystal_279(9709, 762), 3);
    add_object(create_objectcrystal_279(9677, 802), 3);
    add_object(create_objectcrystal_279(9709, 802), 3);
    add_object(create_objectcrystal_279(9741, 682), 3);
    add_object(create_objectcrystal_279(9741, 722), 3);
    add_object(create_objectcrystal_279(9741, 762), 3);
    add_object(create_objectcrystal_279(9741, 802), 3);
    add_object(create_levelglacierplatform1_3251(6832, 880), 3);
    add_object(create_levelglacierplatform1_3251(1200, 848), 3);
    add_object(create_levelglacierplatform1_3251(7016, 1256), 3);
    add_object(create_levelglacierplatform1_3251(9312, 1040), 3);
    add_object(create_objectcrystal_279(9261, 1002), 3);
    add_object(create_objectcrystal_279(9293, 1002), 3);
    add_object(create_objectcrystal_279(9325, 1002), 3);
    add_object(create_objectcrystal_279(9357, 1002), 3);
    add_object(create_objectcrystal_279(9261, 930), 3);
    add_object(create_objectcrystal_279(9293, 930), 3);
    add_object(create_objectcrystal_279(9325, 930), 3);
    add_object(create_objectcrystal_279(9357, 930), 3);
    add_object(create_levelglacierplatform1_3251(9720, 936), 3);
    add_object(create_levelglacierplatform1_3251(8592, 696), 3);
    add_object(create_gimmickspiralslidestart_3248(10064, 1192), 3);
    add_object(create_gimmickspiralslideend_3249(10064, 1344), 3);
    add_object(create_objectcrystal_279(9773, 682), 3);
    add_object(create_objectcrystal_279(9773, 722), 3);
    add_object(create_objectcrystal_279(9773, 762), 3);
    add_object(create_objectcrystal_279(9773, 802), 3);
    add_object(create_monitorearthshield_326(9096, 1040), 3);
    add_object(create_monitorbomb_563(9936, 824), 3);
    add_object(create_monitorbomb_563(9904, 824), 3);
    add_object(create_monitorbomb_563(9872, 824), 3);
    add_object(create_monitorkeystone_562(32, 1176), 3);
    add_object(create_objectcodec_354(10114, 221), 3);
    add_object(create_levelglacierplatform1_3251(10112, 256), 3);
    add_object(create_enemymeteorroller_2421(10039, 708), 3);
    add_object(create_enemymeteorrollerflame_2420(10032, 704), 3);
    add_object(create_enemymeteorroller_2421(10167, 708), 3);
    add_object(create_enemymeteorrollerflame_2420(10160, 704), 3);
    add_object(create_enemylimiter_350(9981, 714), 3);
    add_object(create_enemylimiter_350(10269, 714), 3);
    add_object(create_objectpetal_302(10417, 1105), 3);
    add_object(create_objectpetal_302(10417, 1065), 3);
    add_object(create_enemymeteorrollerflame_2420(4088, 768), 3);
    add_object(create_enemylimiter_350(4061, 778), 3);
    add_object(create_enemylimiter_350(4493, 906), 3);
    add_object(create_enemylimiter_350(10453, 1250), 3);
    add_object(create_enemylimiter_350(12397, 738), 3);
    add_object(create_enemymeteorroller_2421(11503, 788), 3);
    add_object(create_enemymeteorrollerflame_2420(11496, 784), 3);
    add_object(create_enemymeteorroller_2421(11399, 836), 3);
    add_object(create_enemymeteorrollerflame_2420(11392, 832), 3);
    add_object(create_enemymeteorroller_2421(11287, 892), 3);
    add_object(create_enemymeteorrollerflame_2420(11280, 888), 3);
    add_object(create_enemymeteorroller_2421(11183, 940), 3);
    add_object(create_enemymeteorrollerflame_2420(11176, 936), 3);
    add_object(create_enemymeteorroller_2421(11063, 1004), 3);
    add_object(create_enemymeteorrollerflame_2420(11056, 1000), 3);
    add_object(create_enemymeteorroller_2421(10959, 1052), 3);
    add_object(create_enemymeteorrollerflame_2420(10952, 1048), 3);
    add_object(create_enemymeteorroller_2421(10791, 1140), 3);
    add_object(create_enemymeteorrollerflame_2420(10784, 1136), 3);
    add_object(create_enemymeteorroller_2421(11447, 812), 3);
    add_object(create_enemymeteorrollerflame_2420(11440, 808), 3);
    add_object(create_enemymeteorroller_2421(11343, 868), 3);
    add_object(create_enemymeteorrollerflame_2420(11336, 864), 3);
    add_object(create_enemymeteorroller_2421(11231, 916), 3);
    add_object(create_enemymeteorrollerflame_2420(11224, 912), 3);
    add_object(create_enemymeteorroller_2421(11559, 756), 3);
    add_object(create_enemymeteorrollerflame_2420(11552, 752), 3);
    add_object(create_enemymeteorroller_2421(11623, 740), 3);
    add_object(create_enemymeteorrollerflame_2420(11616, 736), 3);
    add_object(create_enemymeteorroller_2421(11687, 732), 3);
    add_object(create_enemymeteorrollerflame_2420(11680, 728), 3);
    add_object(create_enemymeteorroller_2421(11775, 732), 3);
    add_object(create_enemymeteorrollerflame_2420(11768, 728), 3);
    add_object(create_enemymeteorroller_2421(11871, 732), 3);
    add_object(create_enemymeteorrollerflame_2420(11864, 728), 3);
    add_object(create_enemymeteorroller_2421(11967, 732), 3);
    add_object(create_enemymeteorrollerflame_2420(11960, 728), 3);
    add_object(create_enemymeteorroller_2421(12063, 732), 3);
    add_object(create_enemymeteorrollerflame_2420(12056, 728), 3);
    add_object(create_enemysuperturretus_1828(10235, 800), 3);
    add_object(create_gimmickspiralslidestart_3248(10416, 352), 3);
    add_object(create_gimmickspiralslideend_3249(10416, 792), 3);
    add_object(create_enemymeteorroller_2421(12135, 732), 3);
    add_object(create_enemymeteorrollerflame_2420(12128, 728), 3);
    add_object(create_enemymeteorroller_2421(12231, 732), 3);
    add_object(create_enemymeteorrollerflame_2420(12224, 728), 3);
    add_object(create_enemysaucerleg4_2810(8024, 280), 3);
    add_object(create_enemysaucerleg1_2811(7992, 280), 3);
    add_object(create_enemysaucer_2812(7992, 280), 3);
    add_object(create_enemysaucerleg2_2813(7960, 280), 3);
    add_object(create_enemysaucerleg3_2814(7992, 280), 3);
    add_object(create_enemysaucerlimiter_2815(7856, 280), 3);
    add_object(create_enemysaucerlimiter_2815(8080, 280), 3);
    add_object(create_enemysaucerleg4_2810(7632, 800), 3);
    add_object(create_enemysaucerleg1_2811(7600, 800), 3);
    add_object(create_enemysaucer_2812(7600, 800), 3);
    add_object(create_enemysaucerleg2_2813(7568, 800), 3);
    add_object(create_enemysaucerleg3_2814(7600, 800), 3);
    add_object(create_enemysaucerlimiter_2815(7464, 800), 3);
    add_object(create_enemysaucerlimiter_2815(7744, 800), 3);
    add_object(create_enemysuperturretus_1828(11603, 616), 3);
    add_object(create_enemysuperturretus_1828(11691, 480), 3);
    add_object(create_enemysuperturretus_1828(11739, 416), 3);
    add_object(create_enemysuperturretus_1828(11787, 336), 3);
    add_object(create_enemysaucerleg4_2810(6904, 1432), 3);
    add_object(create_enemysaucerleg1_2811(6872, 1432), 3);
    add_object(create_enemysaucer_2812(6872, 1432), 3);
    add_object(create_enemysaucerleg2_2813(6840, 1432), 3);
    add_object(create_enemysaucerleg3_2814(6872, 1432), 3);
    add_object(create_enemysaucerlimiter_2815(6736, 1432), 3);
    add_object(create_enemysaucerlimiter_2815(7624, 1432), 3);
    add_object(create_enemysaucerleg4_2810(9000, 1048), 3);
    add_object(create_enemysaucerleg1_2811(8968, 1048), 3);
    add_object(create_enemysaucer_2812(8968, 1048), 3);
    add_object(create_enemysaucerleg2_2813(8936, 1048), 3);
    add_object(create_enemysaucerleg3_2814(8968, 1048), 3);
    add_object(create_enemysaucerlimiter_2815(8896, 1048), 3);
    add_object(create_enemysaucerlimiter_2815(9064, 1048), 3);
    add_object(create_objectfuel_528(6244, 180), 3);
    add_object(create_objectfuel_528(10492, 1252), 3);
    add_object(create_levelglacierplatform1_3251(7072, 416), 3);
    add_object(create_redspringright_441(10256, 824), 3);
    add_object(create_levelglacierplatform1_3251(12048, 520), 3);
    add_object(create_enemymeteorroller_2421(12263, 412), 3);
    add_object(create_enemymeteorrollerflame_2420(12256, 408), 3);
    add_object(create_enemylimiter_350(12453, 418), 3);
    add_object(create_enemylimiter_350(12181, 418), 3);
    add_object(create_enemymeteorroller_2421(12367, 412), 3);
    add_object(create_enemymeteorrollerflame_2420(12360, 408), 3);
    add_object(create_gimmicksnowspiremask_3247(12040, 808), 3);
    add_object(create_objectcrystal_279(9509, 970), 3);
    add_object(create_objectcrystal_279(9533, 970), 3);
    add_object(create_objectcrystal_279(4613, 818), 3);
    add_object(create_objectcrystal_279(4653, 818), 3);
    add_object(create_objectcrystal_279(4693, 818), 3);
    add_object(create_levelglacierplatform1_3251(5248, 624), 3);
    add_object(create_monitorfireshield_328(5040, 488), 3);
    add_object(create_objectdigspot_734(1496, 808), 3);
    add_object(create_levelglacierplatform1_3251(4832, 448), 3);
    add_object(create_objectcodec_354(4834, 413), 3);
    add_object(create_enemytreddpushleft_1060(6320, 592), 3);
    add_object(create_enemytreddpushleft2_1059(5960, 592), 3);
    add_object(create_enemytreddpushleft_1060(4264, 1136), 3);
    add_object(create_enemytreddpushleft2_1059(3408, 1144), 3);
    add_object(create_enemytreddpushleft_1060(2672, 1224), 3);
    add_object(create_enemytreddpushleft2_1059(2088, 1224), 3);
    add_object(create_enemytreddpushleft_1060(8648, 1104), 3);
    add_object(create_enemytreddpushleft2_1059(8288, 1112), 3);
    add_object(create_enemytreddpushleft_1060(7600, 1352), 3);
    add_object(create_enemytreddpushleft2_1059(6744, 1360), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_bgrocks10_3228(1368, 856), 4);
    add_background_object(create_bgsnow9_3222(1368, 840), 4);
    add_background_object(create_bgrocks9_3227(256, 1216), 4);
    add_background_object(create_bgsnow8_3229(256, 1208), 4);
    add_background_object(create_bgrocks9_3227(256, 1344), 4);
    add_background_object(create_bgsnow1_3224(5376, 944), 4);
    add_background_object(create_bgsnow1_3224(5504, 944), 4);
    add_background_object(create_bgrocks10_3228(5616, 832), 4);
    add_background_object(create_bgsnow9_3222(5616, 816), 4);
    add_background_object(create_bgrocks8_3231(7456, 560), 4);
    add_background_object(create_bgrocks8_3231(7584, 560), 4);
    add_background_object(create_bgrocks10_3228(7920, 704), 4);
    add_background_object(create_bgrocks10_3228(7920, 576), 4);
    add_background_object(create_bgrocks8_3231(7808, 560), 4);
    add_background_object(create_bgspiralslidefront_3252(1656, 968), 4);
    add_background_object(create_bgspiralslidetopfront_3253(1640, 840), 4);
    add_background_object(create_bgspiralslidefront_3252(7728, 576), 4);
    add_background_object(create_bgspiralslidefront_3252(7728, 432), 4);
    add_background_object(create_bgspiralslidetopfront_3253(7712, 304), 4);
    add_background_object(create_bgspiralslidefront_3252(9344, 416), 4);
    add_background_object(create_bgspiralslidetopfront_3253(9328, 288), 4);
    add_background_object(create_bgrocks8_3231(6784, 1136), 4);
    add_background_object(create_bgrocks8_3231(6656, 1168), 4);
    add_background_object(create_bgspiralslidetopfront_3253(10016, 1208), 4);
    add_background_object(create_bgrocks8_3231(10112, 1240), 4);
    add_background_object(create_bgspiralslidefront_3252(10384, 640), 4);
    add_background_object(create_bgspiralslidefront_3252(10384, 496), 4);
    add_background_object(create_bgspiralslidetopfront_3253(10368, 368), 4);
    add_background_object(create_bgrocks8_3231(12192, 568), 4);
    add_background_object(create_bgrocks8_3231(12320, 568), 4);
    add_background_object(create_bgrocks8_3231(4992, 584), 4);
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
    add_object(create_hazardspikesup_2426(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(2264, -72), 5);
    add_object(create_cameralimitbossleft_421(2103, -192), 5);
    add_object(create_cameralimitbossright_422(2424, -192), 5);
    add_object(create_cameralimitbosstop_423(2264, -313), 5);
    add_object(create_cameratriggerboss_424(2120, -200), 5);
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
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
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
    loop_spark_down_running = false;
    loop_spark_down_index = 0;
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
    loop_spark_up_running = false;
    loop_spark_up_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_59, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_59, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_59, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_59, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_59, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_59, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_59, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_59, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_59, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_59, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_59, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_59, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_59, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_59, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_59, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_59, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_59, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_59, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_59, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_59, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_59, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_59, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_59, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_59, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_59, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_59, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_59, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_59, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_59, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_59, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_59, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_59, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_59, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_59, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_59, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_59, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_59, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_59, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_59, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_59, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_59, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_59, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_59, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_59, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_59, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_59, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_59, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_59, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_59, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_59, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_59, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_59, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_59, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_59, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    once_condition_1412_59 = false;
    not_always_1388_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1 = false;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_1410_59 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
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
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    not_always_1571_13 = loop_count;
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
    not_always_43_13 = loop_count;
    once_condition_1414_59 = false;
    not_always_1420_13 = loop_count;
    once_condition_1418_59 = false;
    not_always_121_0 = loop_count;
    once_condition_1417_59 = false;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    once_condition_1409_59 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_1735_22 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    once_condition_1416_59 = false;
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
    not_always_1447_13 = loop_count;
    not_always_1570_13 = loop_count;
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
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    once_condition_1415_59 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1421_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1695_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    once_condition_1411_59 = false;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
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
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1696_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    once_condition_1413_59 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_spawndebris_60()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_6950();
    event_func_9423();
    event_func_11380();
    event_func_9230();
}
void Frames::loop_wrapper_sound_hurt1_60(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_60(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_60(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_60(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_60(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_60(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_60(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_60(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_60(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_60(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_60(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_60(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_60(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_60(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_60(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
