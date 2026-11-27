#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_process_call_unqueue_music_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_62(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_explode3_62(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_62(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_62(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_62(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_13193()
{
    // event 1955_62
    {
        if (!(group_main_engine_1)) goto event_1955_62_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1955_62_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1955_62_end;
        media.play_id(SOUND_MILLA_REFLECT_219, -1, 1);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(2);
        ((Active*)((Active*)col_instance_2))->get_movement()->bounce(true);
    }
    event_1955_62_end: ;
}
void Frames::col_15_62()
{
    event_func_13193();
}
void Frames::event_func_13194()
{
    // event 1954_62
    {
        if (!(group_main_engine_1)) goto event_1954_62_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1954_62_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1954_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1954_62_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 3);
        }
    }
    event_1954_62_end: ;
}
void Frames::event_func_13195()
{
    // event 1958_62
    {
        if (!(group_main_engine_1)) goto event_1958_62_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1958_62_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1958_62_0; single_instance_1958_62_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1958_62_0 == NULL)
                single_instance_1958_62_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1958_62_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1958_62_0))->force_speed(100);
    }
    event_1958_62_end: ;
}
void Frames::col_20_62()
{
    event_func_13194();
    event_func_13195();
}
void Frames::event_func_13196()
{
    // event 1718_62
    {
        if (!(group_main_engine_1)) goto event_1718_62_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(6))) goto event_1718_62_end;
        FrameObject * single_instance_1718_62_0; single_instance_1718_62_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1718_62_0 == NULL)
                single_instance_1718_62_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, -5);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1718_62_end: ;
}
void Frames::col_21_62()
{
    event_func_8608();
    event_func_8609();
    event_func_13196();
}
void Frames::event_func_13197()
{
    // event 1953_62
    {
        if (!(group_main_engine_1)) goto event_1953_62_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1953_62_0; single_instance_1953_62_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1953_62_0 == NULL)
                single_instance_1953_62_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1953_62_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1953_62_0))->force_speed(50);
    }
    event_1953_62_end: ;
}
void Frames::col_31_62()
{
    event_func_13197();
}
void Frames::test_collisions_62()
{
    test_collisions(shieldflamefront_316_instances, gimmickfireball_1096_instances, 1, 1, (EventFunction)&Frames::col_19_22);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_2_60);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(enemylimiter_350_instances, enemymeteorroller_2421_instances, 1, 1, (EventFunction)&Frames::col_16_39);
    test_collisions(qualifier_7, playerreflect_447_instances, 536870912, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 134217728, 2, (EventFunction)&Frames::col_9_60);
    test_collisions(qualifier_20, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(shieldwater_318_instances, enemybullfragbubble_2324_instances, 1, 1, (EventFunction)&Frames::col_7_39);
    test_collisions(playercharactersensor_383_instances, gimmickfireball_1096_instances, 1, 2, (EventFunction)&Frames::col_11_24);
    test_collisions(playercharactersensor_383_instances, enemybullfragbubble_2324_instances, 2, 2, (EventFunction)&Frames::col_5_39);
    test_collisions(qualifier_7, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(hazardspikesup_558_instances, enemyrotorbladespikes_2204_instances, 1, 1, (EventFunction)&Frames::col_16_36);
    test_collisions_save(playerreflect_447_instances, bosssparkyplasmashot_3288_instances, 8, 1, (EventFunction)&Frames::col_15_62);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 4, 4, (EventFunction)&Frames::col_18_60);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(player_389_instances, bosssparkyplasmashot_3288_instances, 1, 2, (EventFunction)&Frames::col_20_62);
    test_collisions(enemylimiter_350_instances, enemyrotorblade_2205_instances, 2, 1, (EventFunction)&Frames::col_21_62);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 16, 2, (EventFunction)&Frames::col_5_29);
    test_collisions(enemyrotorbladespikes_2204_instances, enemyelitemask_2511_instances, 2, 1, (EventFunction)&Frames::col_8_36);
    test_collisions(qualifier_20, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playerreflect_447_instances, gimmickfireball_1096_instances, 32, 4, (EventFunction)&Frames::col_20_24);
    test_collisions(playerreflect_447_instances, enemybullfragbubble_2324_instances, 64, 4, (EventFunction)&Frames::col_10_39);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 4, 2, (EventFunction)&Frames::col_27_43);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 2097152, 8, (EventFunction)&Frames::col_26_60);
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
    for (it1 = bosssparkyplasmashot_3288_instances.begin(); it1 != bosssparkyplasmashot_3288_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_31_62();
    }
}
void Frames::event_func_13198()
{
    // event 536_62
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_536_62_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_536_62_end;
        FrameObject * single_instance_536_62_0; single_instance_536_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_536_62_0 == NULL)
                    single_instance_536_62_0 = new_obj;
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
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_536_62_end: ;
}
void Frames::event_func_13199()
{
    // event 553_62
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_553_62_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_553_62_end;
        FrameObject * single_instance_553_62_0; single_instance_553_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_553_62_0 == NULL)
                    single_instance_553_62_0 = new_obj;
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
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_553_62_end: ;
}
void Frames::event_func_13200()
{
    // event 687_62
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_687_62_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_687_62_end;
        FrameObject * single_instance_687_62_0; single_instance_687_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_687_62_0 == NULL)
                    single_instance_687_62_0 = new_obj;
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
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_687_62_end: ;
}
void Frames::event_func_13201()
{
    // event 1406_62
    {
        if (!(group_main_engine_1)) goto event_1406_62_end;
        levelcrankferris_3319_instances.clear_selection();
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, (((Active*)*it)->alterables->values.get(17)+1)%math_helper%50);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        levelcrankferrismask2_3302_instances.clear_selection();
        for (ObjectIterator it(levelcrankferrismask2_3302_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        levelcrankferrismask3_3303_instances.clear_selection();
        for (ObjectIterator it(levelcrankferrismask3_3303_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        levelcrankferrismask4_3304_instances.clear_selection();
        for (ObjectIterator it(levelcrankferrismask4_3304_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1406_62_end: ;
}
void Frames::event_func_13202()
{
    // event 1407_62
    {
        if (!(group_main_engine_1)) goto event_1407_62_end;
        levelcrankferris_3319_instances.clear_selection();
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (1))) { it.deselect(); continue; }
        }
        if (!levelcrankferris_3319_instances.has_selection()) goto event_1407_62_end;
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 9);
        }
    }
    event_1407_62_end: ;
}
void Frames::event_func_13203()
{
    // event 1408_62
    {
        if (!(group_main_engine_1)) goto event_1408_62_end;
        levelcrankferris_3319_instances.clear_selection();
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
        }
        if (!levelcrankferris_3319_instances.has_selection()) goto event_1408_62_end;
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
            ((Active*)*it)->alterables->values.set(5, -5);
            ((Active*)*it)->alterables->values.sub(16, 1);
        }
    }
    event_1408_62_end: ;
}
void Frames::event_func_13204()
{
    // event 1409_62
    {
        if (!(group_main_engine_1)) goto event_1409_62_end;
        levelcrankferrismask_3301_instances.clear_selection();
        for (ObjectIterator it(levelcrankferrismask_3301_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelcrankferris_3319_instances, it.current_index));
            if (parent == NULL) goto pos_end_1409_62_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1409_62_0: ;
        }
        for (ObjectIterator it(levelcrankferrismask_3301_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/5)%math_helper%6);
        }
        levelcrankferrismask2_3302_instances.clear_selection();
        for (ObjectIterator it(levelcrankferrismask2_3302_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->alterables->values.get(8)*3+((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->get_x())*0.25);
            ((Active*)*it)->set_y((((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->alterables->values.get(9)*3+((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->get_y())*0.25);
        }
        levelcrankferrismask3_3303_instances.clear_selection();
        for (ObjectIterator it(levelcrankferrismask3_3303_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->alterables->values.get(8)+((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->get_x())*0.5);
            ((Active*)*it)->set_y((((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->alterables->values.get(9)+((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->get_y())*0.5);
        }
        levelcrankferrismask4_3304_instances.clear_selection();
        for (ObjectIterator it(levelcrankferrismask4_3304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->alterables->values.get(8)+((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->get_x()*3)*0.25);
            ((Active*)*it)->set_y((((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->alterables->values.get(9)+((Active*)get_instance(levelcrankferris_3319_instances, it.current_index, default_active_instance))->get_y()*3)*0.25);
        }
        bgplatform1_3318_instances.clear_selection();
        for (ObjectIterator it(bgplatform1_3318_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/5)%math_helper%8);
        }
        bgsolarpanel_3210_instances.clear_selection();
        for (ObjectIterator it(bgsolarpanel_3210_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%20);
        }
    }
    event_1409_62_end: ;
}
void Frames::event_func_13205()
{
    // event 1410_62
    {
        if (!(group_main_engine_1)) goto event_1410_62_end;
        levelcrankferris_3319_instances.clear_selection();
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_1410_62_end: ;
}
void Frames::event_func_13206()
{
    // event 1411_62
    {
        if (!(group_main_engine_1)) goto event_1411_62_end;
        levelcrankferris_3319_instances.clear_selection();
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+12))) { it.deselect(); continue; }
        }
        if (!levelcrankferris_3319_instances.has_selection()) goto event_1411_62_end;
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1411_62_end: ;
}
void Frames::event_func_13207()
{
    // event 1412_62
    {
        if (!(group_main_engine_1)) goto event_1412_62_end;
        levelcrankferris_3319_instances.clear_selection();
        levelcrankferriscollisionstopper_3321_instances.clear_selection();
        if (!check_overlap(levelcrankferris_3319_instances, levelcrankferriscollisionstopper_3321_instances)) goto event_1412_62_end;
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1412_62_end: ;
}
void Frames::event_func_13208()
{
    // event 1413_62
    {
        if (!(group_main_engine_1)) goto event_1413_62_end;
        gimmickantigravspawner_3320_instances.clear_selection();
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%2);
        }
    }
    event_1413_62_end: ;
}
void Frames::event_func_13209()
{
    // event 1414_62
    {
        if (!(group_main_engine_1)) goto event_1414_62_end;
        gimmickantigravspawner_3320_instances.clear_selection();
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-96))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+96))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+240))) { it.deselect(); continue; }
        }
        if (!gimmickantigravspawner_3320_instances.has_selection()) goto event_1414_62_end;
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1414_62_end: ;
}
void Frames::event_func_13210()
{
    // event 1415_62
    {
        if (!(group_main_engine_1)) goto event_1415_62_end;
        player_389_instances.clear_selection();
        gimmickantigrav_3287_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickantigrav_3287_instances)) goto event_1415_62_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_1415_62_end: ;
}
void Frames::event_func_13211()
{
    // event 1416_62
    {
        if (!(group_main_engine_1)) goto event_1416_62_end;
        player_389_instances.clear_selection();
        gimmickantigrav_3287_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickantigrav_3287_instances)) goto event_1416_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) >= (0))) goto event_1416_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) <= (1))) goto event_1416_62_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
    }
    event_1416_62_end: ;
}
void Frames::event_func_13212()
{
    // event 1417_62
    {
        if (!(group_main_engine_1)) goto event_1417_62_end;
        gimmickantigravspawner_3320_instances.clear_selection();
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickantigravspawner_3320_instances.has_selection()) goto event_1417_62_end;
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        media.play_id(SOUND_COMMON_ANTIGRAV_346, -1, 1);
    }
    event_1417_62_end: ;
}
void Frames::event_func_13213()
{
    // event 1418_62
    {
        if (!(group_main_engine_1)) goto event_1418_62_end;
        gimmickantigravspawner_3320_instances.clear_selection();
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickantigravspawner_3320_instances.has_selection()) goto event_1418_62_end;
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1418_62_end: ;
}
void Frames::event_func_13214()
{
    // event 1419_62
    {
        if (!(group_main_engine_1)) goto event_1419_62_end;
        gimmickantigravspawner_3320_instances.clear_selection();
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-96))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+96))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+240))) { it.deselect(); continue; }
        }
        if (!gimmickantigravspawner_3320_instances.has_selection()) goto event_1419_62_end;
        FrameObject * single_instance_1419_62_0; single_instance_1419_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickantigravspawner_3320_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickantigrav_3287(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1419_62_0 == NULL)
                    single_instance_1419_62_0 = new_obj;
            }
        }
    }
    event_1419_62_end: ;
}
void Frames::event_func_13215()
{
    // event 1420_62
    {
        if (!(group_main_engine_1)) goto event_1420_62_end;
        gimmickantigrav_3287_instances.clear_selection();
        for (ObjectIterator it(gimmickantigrav_3287_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-20);
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2)%math_helper%8);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1420_62_end: ;
}
void Frames::event_func_13216()
{
    // event 1421_62
    bool or_result_1421_62 = false;
    bool or_temp_result_1421_62_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1421_62_0_end;
        gimmickantigrav_3287_instances.clear_selection();
        for (ObjectIterator it(gimmickantigrav_3287_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (-32))) { it.deselect(); continue; }
        }
        if (!gimmickantigrav_3287_instances.has_selection()) goto or_event_1421_62_0_end;
        or_result_1421_62 = true;
        or_temp_result_1421_62_0 = true;
    }
    or_event_1421_62_0_end: ;
    gimmickantigrav_3287_instances.clear_saved_selection();
    if (or_temp_result_1421_62_0) {
        gimmickantigrav_3287_instances.save_selection();
    }
    // event 1421_62
    bool or_temp_result_1421_62_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1421_62_1_end;
        gimmickantigrav_3287_instances.clear_selection();
        for (ObjectIterator it(gimmickantigrav_3287_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (16))) { it.deselect(); continue; }
        }
        if (!gimmickantigrav_3287_instances.has_selection()) goto or_event_1421_62_1_end;
        or_result_1421_62 = true;
        or_temp_result_1421_62_1 = true;
        or_event_1421_62_1_end: ;
        if (or_temp_result_1421_62_1) {
            gimmickantigrav_3287_instances.save_selection();
        }
        if (!or_result_1421_62) goto or_final_or_event_1421_62_1_end;
        gimmickantigrav_3287_instances.clear_selection();
        if (or_temp_result_1421_62_0 || or_temp_result_1421_62_1) {
            gimmickantigrav_3287_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickantigrav_3287_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    or_final_or_event_1421_62_1_end: ;
}
void Frames::event_func_13217()
{
    // event 1423_62
    {
        if (!(group_main_engine_1)) goto event_1423_62_end;
        player_389_instances.clear_selection();
        gimmickmagnetlauncherlight_3314_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickmagnetlauncherlight_3314_instances)) goto event_1423_62_end;
        for (ObjectIterator it(gimmickmagnetlauncherlight_3314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncherlight_3314_instances.has_selection()) goto event_1423_62_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_1423_62_end: ;
}
void Frames::event_func_13218()
{
    // event 1424_62
    {
        if (!(group_main_engine_1)) goto event_1424_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1424_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1424_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1424_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (95))) goto event_1424_62_end;
        playersensortopbig_395_instances.clear_selection();
        gimmickmagnetlauncher_3322_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, gimmickmagnetlauncher_3322_instances)) goto event_1424_62_end;
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1424_62_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 95);
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)*it)->get_x());
        }
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1424_62_end: ;
}
void Frames::event_func_13219()
{
    // event 1425_62
    {
        if (!(group_main_engine_1)) goto event_1425_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1425_62_end;
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+2, 0));
        }
    }
    event_1425_62_end: ;
}
void Frames::event_func_13220()
{
    // event 1426_62
    {
        if (!(group_main_engine_1)) goto event_1426_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1426_62_end;
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-2, 0));
        }
    }
    event_1426_62_end: ;
}
void Frames::event_func_13221()
{
    // event 1427_62
    {
        if (!(group_main_engine_1)) goto event_1427_62_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1427_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1427_62_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1427_62_end: ;
}
void Frames::event_func_13222()
{
    // event 1428_62
    {
        if (!(group_main_engine_1)) goto event_1428_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1428_62_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_1428_62_end;
        if (!check_not_overlap(gimmickmagnetlauncher_3322_instances, gimmickmagnetlauncherleft_3323_instances)) goto event_1428_62_end;
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-6);
        }
    }
    event_1428_62_end: ;
}
void Frames::event_func_13223()
{
    // event 1429_62
    {
        if (!(group_main_engine_1)) goto event_1429_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1429_62_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1429_62_end;
        if (!check_not_overlap(gimmickmagnetlauncher_3322_instances, gimmickmagnetlauncherright_3324_instances)) goto event_1429_62_end;
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
    }
    event_1429_62_end: ;
}
void Frames::event_func_13224()
{
    // event 1430_62
    {
        if (!(group_main_engine_1)) goto event_1430_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1430_62_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) != (0))) goto event_1430_62_end;
        if (!(!media.is_sample_playing(SOUND_ROTATEBIG_165))) goto event_1430_62_end;
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1430_62_end: ;
}
void Frames::event_func_13225()
{
    // event 1431_62
    {
        if (!(group_main_engine_1)) goto event_1431_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1431_62_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_1431_62_end;
        if (!media.is_sample_playing(SOUND_ROTATEBIG_165)) goto event_1431_62_end;
        media.stop_sample(SOUND_ROTATEBIG_165);
    }
    event_1431_62_end: ;
}
void Frames::event_func_13226()
{
    // event 1432_62
    {
        if (!(group_main_engine_1)) goto event_1432_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1432_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1432_62_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(gimmickmagnetlauncher_3322_instances, default_active_instance))->get_action_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(gimmickmagnetlauncher_3322_instances, default_active_instance))->get_x()+((Active*)get_single(gimmickmagnetlauncher_3322_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 15);
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2));
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/10)%math_helper%2);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(50);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(50);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
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
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 90);
        }
    }
    event_1432_62_end: ;
}
void Frames::event_func_13227()
{
    // event 1433_62
    {
        if (!(group_main_engine_1)) goto event_1433_62_end;
        gimmickmagnetlauncherlight_3314_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncherlight_3314_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickmagnetlauncher_3322_instances, it.current_index));
            if (parent == NULL) goto pos_end_1433_62_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1433_62_0: ;
        }
        for (ObjectIterator it(gimmickmagnetlauncherlight_3314_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(gimmickmagnetlauncher_3322_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1433_62_end: ;
}
void Frames::event_func_13228()
{
    // event 1434_62
    bool or_result_1434_62 = false;
    bool or_temp_result_1434_62_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1434_62_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (95))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1434_62_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1434_62_0_end;
        or_result_1434_62 = true;
        or_temp_result_1434_62_0 = true;
    }
    or_event_1434_62_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1434_62_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1434_62
    bool or_temp_result_1434_62_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1434_62_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (95))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1434_62_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1434_62_1_end;
        or_result_1434_62 = true;
        or_temp_result_1434_62_1 = true;
        or_event_1434_62_1_end: ;
        if (or_temp_result_1434_62_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1434_62) goto or_final_or_event_1434_62_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_1434_62_0 || or_temp_result_1434_62_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1434_62_0 || or_temp_result_1434_62_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->values.set(20, 1);
        }
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
        FrameObject * single_instance_1434_62_0; single_instance_1434_62_0 = NULL;
        // select single: true false false
        player_389_instances.clear_selection();
        for (ObjectIterator p_it(player_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 32, parent->y + -8), parent->layer);
                if (single_instance_1434_62_0 == NULL)
                    single_instance_1434_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1434_62_0))->set_angle(270, 0);
        ((Active*)((Active*)single_instance_1434_62_0))->set_scale(2);
        media.stop_sample(SOUND_ROTATEBIG_165);
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 1);
        }
    }
    or_final_or_event_1434_62_1_end: ;
}
void Frames::event_func_13229()
{
    // event 1435_62
    {
        if (!(group_main_engine_1)) goto event_1435_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (95))) goto event_1435_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1435_62_end: ;
}
void Frames::event_func_13230()
{
    // event 1436_62
    {
        if (!(group_main_engine_1)) goto event_1436_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1436_62_end;
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1436_62_end: ;
}
void Frames::event_func_13231()
{
    // event 1437_62
    {
        if (!(group_main_engine_1)) goto event_1437_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1437_62_end;
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()-6, ((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_1437_62_end: ;
}
void Frames::event_func_13232()
{
    // event 1438_62
    {
        if (!(group_main_engine_1)) goto event_1438_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gimmickmagnetlauncher_3322_instances.has_selection()) goto event_1438_62_end;
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+6, ((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_1438_62_end: ;
}
void Frames::event_func_13233()
{
    // event 1440_62
    {
        if (!(group_main_engine_1)) goto event_1440_62_end;
        hazardspinmine_3326_instances.clear_selection();
        for (ObjectIterator it(hazardspinmine_3326_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+2)%math_helper%360);
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/5)%math_helper%8);
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1440_62_end: ;
}
void Frames::event_func_13234()
{
    // event 1441_62
    {
        if (!(group_main_engine_1)) goto event_1441_62_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (3))) goto event_1441_62_end;
        hazardspinmine_3326_instances.clear_selection();
        for (ObjectIterator it(hazardspinmine_3326_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1441_62_end: ;
}
void Frames::event_func_13235()
{
    // event 1538_62
    {
        if (!(group_main_engine_1)) goto event_1538_62_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1538_62_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1538_62_0; single_instance_1538_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1538_62_0 == NULL)
                    single_instance_1538_62_0 = new_obj;
            }
        }
        FrameObject * single_instance_1538_62_1; single_instance_1538_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1538_62_1 == NULL)
                    single_instance_1538_62_1 = new_obj;
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
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1538_62_end: ;
}
void Frames::event_func_13236()
{
    // event 1573_62
    bool or_result_1573_62 = false;
    bool or_temp_result_1573_62_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1573_62_0_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1573_62_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysuperturretus_1828_instances, qualifier_7)) goto or_event_1573_62_0_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1573_62_0_end;
        or_result_1573_62 = true;
        or_temp_result_1573_62_0 = true;
    }
    or_event_1573_62_0_end: ;
    enemysuperturretus_1828_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1573_62_0) {
        enemysuperturretus_1828_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1573_62
    bool or_temp_result_1573_62_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1573_62_1_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1573_62_1_end;
        or_result_1573_62 = true;
        or_temp_result_1573_62_1 = true;
        or_event_1573_62_1_end: ;
        if (or_temp_result_1573_62_1) {
            enemysuperturretus_1828_instances.save_selection();
        }
        if (!or_result_1573_62) goto or_final_or_event_1573_62_1_end;
        enemysuperturretus_1828_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1573_62_0 || or_temp_result_1573_62_1) {
            enemysuperturretus_1828_instances.restore_selection();
        }
        if (or_temp_result_1573_62_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1573_62_0; single_instance_1573_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1573_62_0 == NULL)
                    single_instance_1573_62_0 = new_obj;
            }
        }
        FrameObject * single_instance_1573_62_1; single_instance_1573_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1573_62_1 == NULL)
                    single_instance_1573_62_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)((Active*)single_instance_1573_62_0))->set_direction(4);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1573_62_1_end: ;
}
void Frames::event_func_13237()
{
    // event 1593_62
    {
        if (!(group_main_engine_1)) goto event_1593_62_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1593_62_end;
        FrameObject * single_instance_1593_62_0; single_instance_1593_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1593_62_0 == NULL)
                    single_instance_1593_62_0 = new_obj;
            }
        }
        FrameObject * single_instance_1593_62_1; single_instance_1593_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1593_62_1 == NULL)
                    single_instance_1593_62_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1593_62_1))->set_direction(2);
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1593_62_2_end;
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
        dynamic_1593_62_2_end: ;
    }
    event_1593_62_end: ;
}
void Frames::event_func_13238()
{
    // event 1616_62
    bool or_result_1616_62 = false;
    bool or_temp_result_1616_62_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1616_62_0_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1616_62_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyturretus_938_instances, qualifier_7)) goto or_event_1616_62_0_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1616_62_0_end;
        or_result_1616_62 = true;
        or_temp_result_1616_62_0 = true;
    }
    or_event_1616_62_0_end: ;
    enemyturretus_938_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1616_62_0) {
        enemyturretus_938_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1616_62
    bool or_temp_result_1616_62_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1616_62_1_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1616_62_1_end;
        or_result_1616_62 = true;
        or_temp_result_1616_62_1 = true;
        or_event_1616_62_1_end: ;
        if (or_temp_result_1616_62_1) {
            enemyturretus_938_instances.save_selection();
        }
        if (!or_result_1616_62) goto or_final_or_event_1616_62_1_end;
        enemyturretus_938_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1616_62_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1616_62_0 || or_temp_result_1616_62_1) {
            enemyturretus_938_instances.restore_selection();
        }
        FrameObject * single_instance_1616_62_0; single_instance_1616_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1616_62_0 == NULL)
                    single_instance_1616_62_0 = new_obj;
            }
        }
        FrameObject * single_instance_1616_62_1; single_instance_1616_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1616_62_1 == NULL)
                    single_instance_1616_62_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1616_62_1_end: ;
}
void Frames::event_func_13239()
{
    // event 1636_62
    bool or_result_1636_62 = false;
    bool or_temp_result_1636_62_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1636_62_0_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1636_62_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, qualifier_7)) goto or_event_1636_62_0_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1636_62_0_end;
        or_result_1636_62 = true;
        or_temp_result_1636_62_0 = true;
    }
    or_event_1636_62_0_end: ;
    enemymeteorroller_2421_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1636_62_0) {
        enemymeteorroller_2421_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1636_62
    bool or_temp_result_1636_62_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1636_62_1_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1636_62_1_end;
        or_result_1636_62 = true;
        or_temp_result_1636_62_1 = true;
        or_event_1636_62_1_end: ;
        if (or_temp_result_1636_62_1) {
            enemymeteorroller_2421_instances.save_selection();
        }
        if (!or_result_1636_62) goto or_final_or_event_1636_62_1_end;
        qualifier_7.empty_selection();
        enemymeteorroller_2421_instances.empty_selection();
        if (or_temp_result_1636_62_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1636_62_0 || or_temp_result_1636_62_1) {
            enemymeteorroller_2421_instances.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1636_62_0; single_instance_1636_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1636_62_0 == NULL)
                    single_instance_1636_62_0 = new_obj;
            }
        }
        FrameObject * single_instance_1636_62_1; single_instance_1636_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1636_62_1 == NULL)
                    single_instance_1636_62_1 = new_obj;
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
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1636_62_1_end: ;
}
void Frames::event_func_13240()
{
    // event 1674_62
    bool or_result_1674_62 = false;
    bool or_temp_result_1674_62_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1674_62_0_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1674_62_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysaucerdebris_2761_instances, qualifier_7)) goto or_event_1674_62_0_end;
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1674_62_0_end;
        or_result_1674_62 = true;
        or_temp_result_1674_62_0 = true;
    }
    or_event_1674_62_0_end: ;
    enemysaucerdebris_2761_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1674_62_0) {
        enemysaucerdebris_2761_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1674_62
    bool or_temp_result_1674_62_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1674_62_1_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1674_62_1_end;
        or_result_1674_62 = true;
        or_temp_result_1674_62_1 = true;
        or_event_1674_62_1_end: ;
        if (or_temp_result_1674_62_1) {
            enemysaucerdebris_2761_instances.save_selection();
        }
        if (!or_result_1674_62) goto or_final_or_event_1674_62_1_end;
        enemysaucerdebris_2761_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1674_62_0 || or_temp_result_1674_62_1) {
            enemysaucerdebris_2761_instances.restore_selection();
        }
        if (or_temp_result_1674_62_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1674_62_0; single_instance_1674_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerdebris_2761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1674_62_0 == NULL)
                    single_instance_1674_62_0 = new_obj;
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
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1674_62_1_end: ;
}
void Frames::event_func_13241()
{
    // event 1697_62
    {
        if (!(group_main_engine_1)) goto event_1697_62_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1697_62_end;
        FrameObject * single_instance_1697_62_0; single_instance_1697_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyghettoshell_1971_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1697_62_0 == NULL)
                    single_instance_1697_62_0 = new_obj;
            }
        }
        FrameObject * single_instance_1697_62_1; single_instance_1697_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyghettoshell_1971_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1697_62_1 == NULL)
                    single_instance_1697_62_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1697_62_end: ;
}
void Frames::event_func_13242()
{
    // event 1716_62
    {
        if (!(group_main_engine_1)) goto event_1716_62_end;
        hazardspikesup_558_instances.clear_selection();
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!hazardspikesup_558_instances.has_selection()) goto event_1716_62_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1716_62_end: ;
}
void Frames::event_func_13243()
{
    // event 1764_62
    bool or_result_1764_62 = false;
    bool or_temp_result_1764_62_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1764_62_0_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1764_62_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemypelletizer_2304_instances, qualifier_7)) goto or_event_1764_62_0_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1764_62_0_end;
        or_result_1764_62 = true;
        or_temp_result_1764_62_0 = true;
    }
    or_event_1764_62_0_end: ;
    qualifier_7.clear_saved_selection();
    enemypelletizer_2304_instances.clear_saved_selection();
    if (or_temp_result_1764_62_0) {
        qualifier_7.save_selection();
        enemypelletizer_2304_instances.save_selection();
    }
    // event 1764_62
    bool or_temp_result_1764_62_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1764_62_1_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1764_62_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemypelletizer_2304_instances, qualifier_8)) goto or_event_1764_62_1_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1764_62_1_end;
        or_result_1764_62 = true;
        or_temp_result_1764_62_1 = true;
    }
    or_event_1764_62_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1764_62_1) {
        qualifier_8.save_selection();
        enemypelletizer_2304_instances.save_selection();
    }
    // event 1764_62
    bool or_temp_result_1764_62_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1764_62_2_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1764_62_2_end;
        or_result_1764_62 = true;
        or_temp_result_1764_62_2 = true;
        or_event_1764_62_2_end: ;
        if (or_temp_result_1764_62_2) {
            enemypelletizer_2304_instances.save_selection();
        }
        if (!or_result_1764_62) goto or_final_or_event_1764_62_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemypelletizer_2304_instances.empty_selection();
        if (or_temp_result_1764_62_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1764_62_0 || or_temp_result_1764_62_1 || or_temp_result_1764_62_2) {
            enemypelletizer_2304_instances.restore_selection();
        }
        if (or_temp_result_1764_62_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1764_62_0; single_instance_1764_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1764_62_0 == NULL)
                    single_instance_1764_62_0 = new_obj;
            }
        }
        FrameObject * single_instance_1764_62_1; single_instance_1764_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1764_62_1 == NULL)
                    single_instance_1764_62_1 = new_obj;
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
                loop_spawndebris_62();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1764_62_2_end: ;
}
void Frames::event_func_13244()
{
    // event 1772_62
    {
        if (!(group_main_engine_1)) goto event_1772_62_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1772_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1772_62_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1772_62_end: ;
}
void Frames::event_func_13245()
{
    // event 1773_62
    {
        if (!(group_main_engine_1)) goto event_1773_62_end;
        enemybullfragbubble_2324_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(enemybullfragbubble_2324_instances, qualifier_19)) goto event_1773_62_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1773_62_end;
        FrameObject * single_instance_1773_62_0; single_instance_1773_62_0 = pick_random(qualifier_19);
        if (single_instance_1773_62_0 == NULL) goto event_1773_62_end;
        ((Active*)((Active*)single_instance_1773_62_0))->alterables->flags.enable(6);
    }
    event_1773_62_end: ;
}
void Frames::event_func_13246()
{
    // event 1779_62
    {
        if (!(group_main_engine_1)) goto event_1779_62_end;
        enemytrooperlaser_2508_instances.clear_selection();
        enemyrotorblade_2205_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, enemyrotorblade_2205_instances)) goto event_1779_62_end;
        for (ObjectIterator it(enemyrotorblade_2205_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyrotorblade_2205_instances.has_selection()) goto event_1779_62_end;
        FrameObject * single_instance_1779_62_0; single_instance_1779_62_0 = pick_random(enemyrotorblade_2205_instances);
        if (single_instance_1779_62_0 == NULL) goto event_1779_62_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1779_62_1; single_instance_1779_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1779_62_1 == NULL)
                    single_instance_1779_62_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1779_62_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1779_62_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1779_62_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1779_62_0))->alterables->values.sub(0, 10);
        {
            ((Active*)single_instance_1779_62_0)->set_shader(Render::INVERT);
        }
    }
    event_1779_62_end: ;
}
void Frames::event_func_13247()
{
    // event 1790_62
    {
        if (!(group_main_engine_1)) goto event_1790_62_end;
        if (!((global_values->get(4)) < (6))) goto event_1790_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (3456))) goto event_1790_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (3800))) goto event_1790_62_end;
        global_values->set(4, 5);
        global_values->set(5, 3456);
        global_values->set(6, 1800);
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
    event_1790_62_end: ;
}
void Frames::event_func_13248()
{
    // event 1791_62
    {
        if (!(group_main_engine_1)) goto event_1791_62_end;
        if (!((global_values->get(4)) < (7))) goto event_1791_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (8100))) goto event_1791_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (8300))) goto event_1791_62_end;
        global_values->set(4, 5);
        global_values->set(5, 8200);
        global_values->set(6, 1880);
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
    event_1791_62_end: ;
}
void Frames::event_func_13249()
{
    // event 1792_62
    {
        if (!(group_main_engine_1)) goto event_1792_62_end;
        if (!((global_values->get(4)) < (8))) goto event_1792_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7806))) goto event_1792_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (8006))) goto event_1792_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (990))) goto event_1792_62_end;
        global_values->set(4, 5);
        global_values->set(5, 7906);
        global_values->set(6, 980);
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
    event_1792_62_end: ;
}
void Frames::event_func_13250()
{
    // event 1794_62
    {
        if (!(group_main_engine_1)) goto event_1794_62_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 1183, 1833, 1249, 1914)) > (0))) goto event_1794_62_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1794_62_end: ;
}
void Frames::event_func_13251()
{
    // event 1795_62
    {
        if (!(group_main_engine_1)) goto event_1795_62_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 2465, 1842, 2531, 1923)) > (0))) goto event_1795_62_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1795_62_end: ;
}
void Frames::event_func_13252()
{
    // event 1803_62
    {
        if (!(group_main_engine_1)) goto event_1803_62_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1803_62_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1803_62_0; single_instance_1803_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorfireshield_328(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1803_62_0 == NULL)
                    single_instance_1803_62_0 = new_obj;
            }
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
        ((Active*)((Active*)single_instance_1803_62_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1803_62_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1803_62_0))->alterables->flags.enable(3);
        ((Active*)((Active*)single_instance_1803_62_0))->set_layer(((Active*)get_single(objectdigspot_734_instances, default_active_instance))->layer->index+1-1-1);
        ((Active*)((Active*)single_instance_1803_62_0))->alterables->values.set(1, -4);
    }
    event_1803_62_end: ;
}
void Frames::event_func_13253()
{
    // event 1804_62
    {
        if (!(group_main_engine_1)) goto event_1804_62_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1804_62_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1804_62_0; single_instance_1804_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorfireshield_328(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1804_62_0 == NULL)
                    single_instance_1804_62_0 = new_obj;
            }
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
        ((Active*)((Active*)single_instance_1804_62_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1804_62_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1804_62_0))->alterables->flags.enable(3);
        ((Active*)((Active*)single_instance_1804_62_0))->set_layer(((Active*)get_single(objectdigspot_734_instances, default_active_instance))->layer->index+1-1-1);
        ((Active*)((Active*)single_instance_1804_62_0))->alterables->values.set(1, -4);
    }
    event_1804_62_end: ;
}
void Frames::event_func_13254()
{
    // event 1808_62
    {
        if (!(group_main_engine_1)) goto event_1808_62_end;
        if (!((global_values->get(4)) < (5))) goto event_1808_62_end;
        if (!((brevonmechbackground_2513_instances.size()) > (0))) goto event_1808_62_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_min(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-(1912-global_values->get(17)*0.5))*-1));
    }
    event_1808_62_end: ;
}
void Frames::event_func_13255()
{
    // event 1810_62
    {
        if (!(group_main_engine_1)) goto event_1810_62_end;
        if (!((global_values->get(4)) < (5))) goto event_1810_62_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto event_1810_62_end;
        if (!((brevonmechbackground_2513_instances.size()) > (0))) goto event_1810_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (900))) goto event_1810_62_end;
        bosshatchdoor_3317_instances.clear_selection();
        for (ObjectIterator it(bosshatchdoor_3317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1696);
        }
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1) {
            group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1 = true;
        }
    }
    event_1810_62_end: ;
}
void Frames::event_func_13256()
{
    // event 1811_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1811_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1811_62_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+357)%math_helper%360);
        }
    }
    event_1811_62_end: ;
}
void Frames::event_func_13257()
{
    // event 1812_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1812_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1812_62_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+3)%math_helper%360);
        }
    }
    event_1812_62_end: ;
}
void Frames::event_func_13258()
{
    // event 1813_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1813_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1813_62_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+20);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1813_62_end: ;
}
void Frames::event_func_13259()
{
    // event 1814_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1814_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1814_62_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (frame_right()+1000))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto event_1814_62_end;
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.set(6, 3);
            ((Active*)*it)->alterables->values.sub(3, 100);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(3));
        }
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, -1);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, frame_right()+1000);
        }
    }
    event_1814_62_end: ;
}
void Frames::event_func_13260()
{
    // event 1815_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1815_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1815_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.02, 1));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.02, 0));
        }
    }
    event_1815_62_end: ;
}
void Frames::event_func_13261()
{
    // event 1816_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1816_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1816_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1816_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (3))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1816_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1816_62_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1816_62_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(1, 0);
    }
    event_1816_62_end: ;
}
void Frames::event_func_13262()
{
    // event 1817_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1817_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1817_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1817_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (3))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1817_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1817_62_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(0, 90+((Active*)*it)->alterables->values.get(1)*-90);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 3);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        media.play_id(SOUND_ABSOLUTION_CHARGE_344, -1, 1);
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1817_62_end: ;
}
void Frames::event_func_13263()
{
    // event 1818_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1818_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1818_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1818_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (3))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1818_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1818_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->flags.toggle(1);
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->flags.get(1));
        }
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(1, (1-((Active*)get_instance(brevonmechturret_3333_instances))->alterables->flags.get(1))*540);
    }
    event_1818_62_end: ;
}
void Frames::event_func_13264()
{
    // event 1819_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1819_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1819_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1819_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.02, 0));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.02, 1));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*-4);
        }
    }
    event_1819_62_end: ;
}
void Frames::event_func_13265()
{
    // event 1820_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1820_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1820_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1820_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.02, 0));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.02, 1));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*-4);
        }
    }
    event_1820_62_end: ;
}
void Frames::event_func_13266()
{
    // event 1821_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1821_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1821_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1821_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.02, 0));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.02, 1));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*-4);
        }
    }
    event_1821_62_end: ;
}
void Frames::event_func_13267()
{
    // event 1822_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1822_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1822_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1822_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1822_62_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.04, 1));
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.04, 0));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*8);
        }
    }
    event_1822_62_end: ;
}
void Frames::event_func_13268()
{
    // event 1823_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1823_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1823_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1823_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1823_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1823_62_end: ;
}
void Frames::event_func_13269()
{
    // event 1824_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1824_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1824_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1824_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)) > (0))) goto event_1824_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) == (0))) goto event_1824_62_end;
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.add(2, 1);
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1824_62_end: ;
}
void Frames::event_func_13270()
{
    // event 1825_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1825_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) > (0))) goto event_1825_62_end;
        ((Active*)get_instance(brevonmechturret_3333_instances))->set_angle(((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(brevonmechturret_3333_instances))->set_x(((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->get_x()-((Active*)get_instance(brevonmechanimations_2551_instances, default_active_instance))->alterables->values.get(1)*40);
        ((Active*)get_instance(brevonmechturret_3333_instances))->set_y(((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->get_y()+((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(3));
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(0, 270+cos_deg(((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1))*-60);
        ((Active*)get_instance(brevonmechturret_3333_instances))->move_back();
    }
    event_1825_62_end: ;
}
void Frames::event_func_13271()
{
    // event 1826_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1826_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) == (1))) goto event_1826_62_end;
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(3, ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(3)+2);
    }
    event_1826_62_end: ;
}
void Frames::event_func_13272()
{
    // event 1827_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1827_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) == (1))) goto event_1827_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(3)) >= (60))) goto event_1827_62_end;
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(2, 2);
        media.stop_sample(SOUND_ROTATEBIG_165);
    }
    event_1827_62_end: ;
}
void Frames::event_func_13273()
{
    // event 1828_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1828_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) == (2))) goto event_1828_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)%math_helper%15) == (0))) goto event_1828_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1828_62_end;
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        FrameObject * single_instance_1828_62_0; single_instance_1828_62_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechturret_3333_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssparkyplasmashot_3288(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1828_62_0 == NULL)
                    single_instance_1828_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1828_62_0))->set_direction(get_direction_int(((Active*)single_instance_1828_62_0)->x, ((Active*)single_instance_1828_62_0)->y, ((Active*)get_instance(brevonmechturret_3333_instances))->x + 0, ((Active*)get_instance(brevonmechturret_3333_instances))->y + 0));
        ((Active*)((Active*)single_instance_1828_62_0))->set_direction(((Active*)single_instance_1828_62_0)->get_direction()+16);
        ((Active*)((Active*)single_instance_1828_62_0))->get_movement()->set_speed(100);
    }
    event_1828_62_end: ;
}
void Frames::event_func_13274()
{
    // event 1829_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1829_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) == (2))) goto event_1829_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)) > (1))) goto event_1829_62_end;
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(1, get_max(((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)-3, 1));
    }
    event_1829_62_end: ;
}
void Frames::event_func_13275()
{
    // event 1830_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1830_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) == (2))) goto event_1830_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)) == (1))) goto event_1830_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1830_62_end;
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(2, 3);
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
    }
    event_1830_62_end: ;
}
void Frames::event_func_13276()
{
    // event 1831_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1831_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) == (2))) goto event_1831_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1831_62_end;
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(2, 3);
    }
    event_1831_62_end: ;
}
void Frames::event_func_13277()
{
    // event 1832_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1832_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) == (3))) goto event_1832_62_end;
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(3, get_max(((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(3)-3, 0));
    }
    event_1832_62_end: ;
}
void Frames::event_func_13278()
{
    // event 1833_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1833_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(2)) == (3))) goto event_1833_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(3)) <= (0))) goto event_1833_62_end;
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(brevonmechturret_3333_instances))->set_x(-90);
    }
    event_1833_62_end: ;
}
void Frames::event_func_13279()
{
    // event 1834_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1834_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1834_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1834_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1834_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)) <= (0))) goto event_1834_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(3));
        }
        media.stop_sample(SOUND_ABSOLUTION_LIFTOFF_297);
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 10));
    }
    event_1834_62_end: ;
}
