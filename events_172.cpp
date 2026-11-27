#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_play_music_2_63(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_59();
}
void Frames::loop_wrapper_sound_attack1_63(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_63(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_63(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_63(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_63(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_63(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_63(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_63(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_63(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_63(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_63(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_63(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_62();
}
void Frames::loop_wrapper_play_music_5_63(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_62();
}
void Frames::loop_wrapper_play_music_6_63(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_go0_63(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_63(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_explode3_63(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_63(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_63(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_63(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_13447()
{
    // event 1572_63
    {
        if (!(group_main_engine_1)) goto event_1572_63_end;
        if (!((((Active*)foreach_instance_esp)->alterables->values.get(1)) == (1))) goto event_1572_63_end;
        FrameObject * single_instance_1572_63_0; single_instance_1572_63_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsspadeimage_321(((Active*)foreach_instance_esp)->x + 0, ((Active*)foreach_instance_esp)->y + 0), ((Active*)foreach_instance_esp)->layer);
            if (single_instance_1572_63_0 == NULL)
                single_instance_1572_63_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1572_63_0))->set_direction(12);
    }
    event_1572_63_end: ;
}
void Frames::foreach_esp_63()
{
    event_func_13447();
}
void Frames::event_func_13448()
{
    // event 1603_63
    {
        if (!(group_main_engine_1)) goto event_1603_63_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1603_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1603_63_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1603_63_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1603_63_0; single_instance_1603_63_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1603_63_0 == NULL)
                single_instance_1603_63_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
    }
    event_1603_63_end: ;
}
void Frames::col_19_63()
{
    event_func_13448();
    event_func_4338();
}
void Frames::event_func_13449()
{
    // event 1743_63
    {
        if (!(group_main_engine_1)) goto event_1743_63_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(6))) goto event_1743_63_end;
        FrameObject * single_instance_1743_63_0; single_instance_1743_63_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1743_63_0 == NULL)
                single_instance_1743_63_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, -5);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1743_63_end: ;
}
void Frames::col_23_63()
{
    event_func_8608();
    event_func_8609();
    event_func_13449();
}
void Frames::test_collisions_63()
{
    test_collisions(shieldflamefront_316_instances, gimmickfireball_1096_instances, 1, 1, (EventFunction)&Frames::col_19_22);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_2_60);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemylavasquidlaser_2676_instances, 1, 1, (EventFunction)&Frames::col_4_24);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(enemylimiter_350_instances, enemymeteorroller_2421_instances, 1, 1, (EventFunction)&Frames::col_16_39);
    test_collisions(qualifier_7, playerreflect_447_instances, 536870912, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 134217728, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(qualifier_20, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(shieldwater_318_instances, enemybullfragbubble_2324_instances, 1, 1, (EventFunction)&Frames::col_7_39);
    test_collisions(playercharactersensor_383_instances, gimmickfireball_1096_instances, 2, 2, (EventFunction)&Frames::col_11_24);
    test_collisions(playercharactersensor_383_instances, enemybullfragbubble_2324_instances, 4, 2, (EventFunction)&Frames::col_5_39);
    test_collisions(qualifier_7, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(hazardspikesup_558_instances, enemyrotorbladespikes_2204_instances, 1, 1, (EventFunction)&Frames::col_16_36);
    test_collisions_save(playerreflect_447_instances, bosssparkyplasmashot_3288_instances, 8, 1, (EventFunction)&Frames::col_15_62);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 8, 4, (EventFunction)&Frames::col_19_63);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(player_389_instances, bosssparkyplasmashot_3288_instances, 1, 2, (EventFunction)&Frames::col_20_62);
    test_collisions(playerreflect_447_instances, enemylavasquidlaser_2676_instances, 16, 2, (EventFunction)&Frames::col_16_45);
    test_collisions(enemylimiter_350_instances, enemyrotorblade_2205_instances, 2, 1, (EventFunction)&Frames::col_23_63);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 32, 2, (EventFunction)&Frames::col_5_29);
    test_collisions(enemyrotorbladespikes_2204_instances, enemyelitemask_2511_instances, 2, 1, (EventFunction)&Frames::col_8_36);
    test_collisions(qualifier_20, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playerreflect_447_instances, gimmickfireball_1096_instances, 64, 4, (EventFunction)&Frames::col_20_24);
    test_collisions(playerreflect_447_instances, enemybullfragbubble_2324_instances, 128, 4, (EventFunction)&Frames::col_10_39);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 4, 2, (EventFunction)&Frames::col_27_43);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 2097152, 8, (EventFunction)&Frames::col_26_60);
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
void Frames::event_func_13450()
{
    // event 536_63
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_536_63_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_536_63_end;
        FrameObject * single_instance_536_63_0; single_instance_536_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_536_63_0 == NULL)
                    single_instance_536_63_0 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_536_63_end: ;
}
void Frames::event_func_13451()
{
    // event 553_63
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_553_63_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_553_63_end;
        FrameObject * single_instance_553_63_0; single_instance_553_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_553_63_0 == NULL)
                    single_instance_553_63_0 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_553_63_end: ;
}
void Frames::event_func_13452()
{
    // event 687_63
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_687_63_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_687_63_end;
        FrameObject * single_instance_687_63_0; single_instance_687_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_687_63_0 == NULL)
                    single_instance_687_63_0 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_687_63_end: ;
}
void Frames::event_func_13453()
{
    // event 1416_63
    {
        if (!(group_main_engine_1)) goto event_1416_63_end;
        levelcrankferrismask_3301_instances.clear_selection();
        for (ObjectIterator it(levelcrankferrismask_3301_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelcrankferris_3319_instances, it.current_index));
            if (parent == NULL) goto pos_end_1416_63_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1416_63_0: ;
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
        ((Active*)get_instance(bgsolarpanel_3210_instances))->force_frame((global_values->get(3)/math_helper/4)%math_helper%20);
    }
    event_1416_63_end: ;
}
void Frames::event_func_13454()
{
    // event 1430_63
    {
        if (!(group_main_engine_1)) goto event_1430_63_end;
        player_389_instances.clear_selection();
        gimmickmagnetlauncherlight_3314_instances.clear_selection();
        if (!check_overlap(player_389_instances, gimmickmagnetlauncherlight_3314_instances)) goto event_1430_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncherlight_3314_instances))->alterables->values.get(0)) < (70))) goto event_1430_63_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_1430_63_end: ;
}
void Frames::event_func_13455()
{
    // event 1431_63
    {
        if (!(group_main_engine_1)) goto event_1431_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1431_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1431_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1431_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (95))) goto event_1431_63_end;
        playersensortopbig_395_instances.clear_selection();
        gimmickmagnetlauncher_3322_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, gimmickmagnetlauncher_3322_instances)) goto event_1431_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (0))) goto event_1431_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) goto event_1431_63_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 95);
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_x());
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->move_front();
    }
    event_1431_63_end: ;
}
void Frames::event_func_13456()
{
    // event 1432_63
    {
        if (!(group_main_engine_1)) goto event_1432_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (1))) goto event_1432_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(1)) < (0))) goto event_1432_63_end;
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.set(1, get_min(((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(1)+2, 0));
    }
    event_1432_63_end: ;
}
void Frames::event_func_13457()
{
    // event 1433_63
    {
        if (!(group_main_engine_1)) goto event_1433_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (1))) goto event_1433_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(1)) > (0))) goto event_1433_63_end;
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.set(1, get_max(((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(1)-2, 0));
    }
    event_1433_63_end: ;
}
void Frames::event_func_13458()
{
    // event 1435_63
    {
        if (!(group_main_engine_1)) goto event_1435_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (1))) goto event_1435_63_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_1435_63_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        if (!check_not_overlap(gimmickmagnetlauncher_3322_instances, gimmickmagnetlauncherleft_3323_instances)) goto event_1435_63_end;
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->set_x(((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_x()-6);
    }
    event_1435_63_end: ;
}
void Frames::event_func_13459()
{
    // event 1436_63
    {
        if (!(group_main_engine_1)) goto event_1436_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (1))) goto event_1436_63_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1436_63_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        if (!check_not_overlap(gimmickmagnetlauncher_3322_instances, gimmickmagnetlauncherright_3324_instances)) goto event_1436_63_end;
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->set_x(((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_x()+6);
    }
    event_1436_63_end: ;
}
void Frames::event_func_13460()
{
    // event 1437_63
    {
        if (!(group_main_engine_1)) goto event_1437_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (1))) goto event_1437_63_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) != (0))) goto event_1437_63_end;
        if (!(!media.is_sample_playing(SOUND_ROTATEBIG_165))) goto event_1437_63_end;
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1437_63_end: ;
}
void Frames::event_func_13461()
{
    // event 1438_63
    {
        if (!(group_main_engine_1)) goto event_1438_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (1))) goto event_1438_63_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_1438_63_end;
        if (!media.is_sample_playing(SOUND_ROTATEBIG_165)) goto event_1438_63_end;
        media.stop_sample(SOUND_ROTATEBIG_165);
    }
    event_1438_63_end: ;
}
void Frames::event_func_13462()
{
    // event 1439_63
    {
        if (!(group_main_engine_1)) goto event_1439_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1439_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (1))) goto event_1439_63_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_action_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_x()+((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 15);
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->set_direction(((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)-((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2));
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->force_frame((global_values->get(3)/math_helper/10)%math_helper%2);
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
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.set(3, 90);
    }
    event_1439_63_end: ;
}
void Frames::event_func_13463()
{
    // event 1440_63
    {
        if (!(group_main_engine_1)) goto event_1440_63_end;
        {
            FrameObject * parent = ((Active*)get_instance(gimmickmagnetlauncher_3322_instances));
            if (parent == NULL) goto pos_end_1440_63_0;
            ((Active*)get_instance(gimmickmagnetlauncherlight_3314_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1440_63_0: ;
        }
        ((Active*)get_instance(gimmickmagnetlauncherlight_3314_instances))->alterables->values.set(0, ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(3));
    }
    event_1440_63_end: ;
}
void Frames::event_func_13464()
{
    // event 1442_63
    {
        if (!(group_main_engine_1)) goto event_1442_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (95))) goto event_1442_63_end;
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->set_direction(0);
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->force_frame(0);
    }
    event_1442_63_end: ;
}
void Frames::event_func_13465()
{
    // event 1443_63
    {
        if (!(group_main_engine_1)) goto event_1443_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (0))) goto event_1443_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(3)) > (0))) goto event_1443_63_end;
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.sub(3, 1);
    }
    event_1443_63_end: ;
}
void Frames::event_func_13466()
{
    // event 1444_63
    {
        if (!(group_main_engine_1)) goto event_1444_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (0))) goto event_1444_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(3)) == (0))) goto event_1444_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_x()) > (((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(0)))) goto event_1444_63_end;
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->set_x(get_max(((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_x()-6, ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(0)));
    }
    event_1444_63_end: ;
}
void Frames::event_func_13467()
{
    // event 1445_63
    {
        if (!(group_main_engine_1)) goto event_1445_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(2)) == (0))) goto event_1445_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(3)) == (0))) goto event_1445_63_end;
        if (!((((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_x()) < (((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(0)))) goto event_1445_63_end;
        ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->set_x(get_min(((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->get_x()+6, ((Active*)get_instance(gimmickmagnetlauncher_3322_instances))->alterables->values.get(0)));
    }
    event_1445_63_end: ;
}
void Frames::event_func_13468()
{
    // event 1450_63
    {
        if (!(group_main_engine_1)) goto event_1450_63_end;
        objectswitchblock2_3340_instances.clear_selection();
        for (ObjectIterator it(objectswitchblock2_3340_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->flags.get(0));
        }
        objectswitchblock1_3339_instances.clear_selection();
        for (ObjectIterator it(objectswitchblock1_3339_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->flags.get(0));
        }
        gimmickteleswitch_3338_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitch_3338_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Counter*)get_instance(currentcolor_3343_instances))->value);
        }
        gimmickteleswitchcrystal1_3341_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitchcrystal1_3341_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Counter*)get_instance(currentcolor_3343_instances))->value);
            ((Active*)*it)->set_x(((Active*)get_single(gimmickteleswitch_3338_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0))*20);
            ((Active*)*it)->set_y(((Active*)get_single(gimmickteleswitch_3338_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)*it)->alterables->values.get(0))*20);
        }
        gimmickteleswitchcrystal2_3342_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitchcrystal2_3342_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Counter*)get_instance(currentcolor_3343_instances))->value);
            ((Active*)*it)->set_x(((Active*)get_single(gimmickteleswitch_3338_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0))*20);
            ((Active*)*it)->set_y(((Active*)get_single(gimmickteleswitch_3338_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)*it)->alterables->values.get(0))*20);
        }
        for (ObjectIterator it(gimmickteleswitch_3338_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(objectswitchblock1_3339_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/3)%math_helper%12);
        }
        for (ObjectIterator it(objectswitchblock2_3340_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/3)%math_helper%12);
        }
    }
    event_1450_63_end: ;
}
void Frames::event_func_13469()
{
    // event 1451_63
    {
        if (!(group_main_engine_1)) goto event_1451_63_end;
        gimmickteleswitch_3338_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitch_3338_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+32))) { it.deselect(); continue; }
        }
        if (!gimmickteleswitch_3338_instances.has_selection()) goto event_1451_63_end;
        for (ObjectIterator it(gimmickteleswitch_3338_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1451_63_end: ;
}
void Frames::event_func_13470()
{
    // event 1452_63
    {
        if (!(group_main_engine_1)) goto event_1452_63_end;
        gimmickteleswitch_3338_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitch_3338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!gimmickteleswitch_3338_instances.has_selection()) goto event_1452_63_end;
        for (ObjectIterator it(gimmickteleswitch_3338_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1452_63_end: ;
}
void Frames::event_func_13471()
{
    // event 1453_63
    {
        if (!(group_main_engine_1)) goto event_1453_63_end;
        gimmickteleswitch_3338_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitch_3338_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickteleswitch_3338_instances.has_selection()) goto event_1453_63_end;
        for (ObjectIterator it(gimmickteleswitch_3338_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Counter*)get_instance(currentcolor_3343_instances))->set((((Counter*)get_instance(currentcolor_3343_instances))->value+1)%math_helper%2);
        media.play_id(SOUND_COMMON_KEYCARD_287, -1, 1);
        FrameObject * single_instance_1453_63_0; single_instance_1453_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickteleswitch_3338_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1453_63_0 == NULL)
                    single_instance_1453_63_0 = new_obj;
            }
        }
        gimmickteleswitchcrystal1_3341_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitchcrystal1_3341_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 270);
        }
        gimmickteleswitchcrystal2_3342_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitchcrystal2_3342_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 270);
        }
    }
    event_1453_63_end: ;
}
void Frames::event_func_13472()
{
    // event 1454_63
    {
        if (!(group_main_engine_1)) goto event_1454_63_end;
        if (!((((Counter*)get_instance(currentcolor_3343_instances))->value) == (0))) goto event_1454_63_end;
        if (not_always_1454_63 > loop_count) {
            not_always_1454_63 = loop_count + 2;
            goto event_1454_63_end;
        }
        not_always_1454_63 = loop_count + 2;
        objectswitchblock1_3339_instances.clear_selection();
        for (ObjectIterator it(objectswitchblock1_3339_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        objectswitchblock2_3340_instances.clear_selection();
        for (ObjectIterator it(objectswitchblock2_3340_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1454_63_end: ;
}
void Frames::event_func_13473()
{
    // event 1455_63
    {
        if (!(group_main_engine_1)) goto event_1455_63_end;
        if (!((((Counter*)get_instance(currentcolor_3343_instances))->value) == (1))) goto event_1455_63_end;
        if (not_always_1455_63 > loop_count) {
            not_always_1455_63 = loop_count + 2;
            goto event_1455_63_end;
        }
        not_always_1455_63 = loop_count + 2;
        objectswitchblock2_3340_instances.clear_selection();
        for (ObjectIterator it(objectswitchblock2_3340_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        objectswitchblock1_3339_instances.clear_selection();
        for (ObjectIterator it(objectswitchblock1_3339_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1455_63_end: ;
}
void Frames::event_func_13474()
{
    // event 1456_63
    {
        if (!(group_main_engine_1)) goto event_1456_63_end;
        gimmickteleswitchcrystal1_3341_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitchcrystal1_3341_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickteleswitchcrystal1_3341_instances.has_selection()) goto event_1456_63_end;
        for (ObjectIterator it(gimmickteleswitchcrystal1_3341_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 10);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+350)%math_helper%360);
        }
    }
    event_1456_63_end: ;
}
void Frames::event_func_13475()
{
    // event 1457_63
    {
        if (!(group_main_engine_1)) goto event_1457_63_end;
        gimmickteleswitchcrystal2_3342_instances.clear_selection();
        for (ObjectIterator it(gimmickteleswitchcrystal2_3342_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickteleswitchcrystal2_3342_instances.has_selection()) goto event_1457_63_end;
        for (ObjectIterator it(gimmickteleswitchcrystal2_3342_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 10);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+350)%math_helper%360);
        }
    }
    event_1457_63_end: ;
}
void Frames::event_func_13476()
{
    // event 1554_63
    {
        if (!(group_main_engine_1)) goto event_1554_63_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1554_63_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1554_63_0; single_instance_1554_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1554_63_0 == NULL)
                    single_instance_1554_63_0 = new_obj;
            }
        }
        FrameObject * single_instance_1554_63_1; single_instance_1554_63_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1554_63_1 == NULL)
                    single_instance_1554_63_1 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1554_63_end: ;
}
void Frames::event_func_13477()
{
    // event 1569_63
    {
        if (!(group_main_engine_1)) goto event_1569_63_end;
        objectsiren_3337_instances.clear_selection();
        for (ObjectIterator it(objectsiren_3337_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4)%math_helper%4);
        }
        enemyelitespawnerwave_3336_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawnerwave_3336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1569_63_end: ;
}
void Frames::event_func_13478()
{
    // event 1570_63
    {
        if (!(group_main_engine_1)) goto event_1570_63_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+150))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1570_63_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
    }
    event_1570_63_end: ;
}
void Frames::event_func_13479()
{
    // event 1571_63
    {
        if (!(group_main_engine_1)) goto event_1571_63_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1571_63_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+20, ((Active*)*it)->alterables->values.get(0)));
        }
        {
            SavedSelection extra_enemyelitespawner_3345_instances(enemyelitespawner_3345_instances);
            for (SavedIterator it(extra_enemyelitespawner_3345_instances); !it.end(); ++it) {
                foreach_instance_esp = ((Active*)*it);
                foreach_esp_63();
            }
        }
    }
    event_1571_63_end: ;
}
void Frames::event_func_13480()
{
    // event 1573_63
    {
        if (!(group_main_engine_1)) goto event_1573_63_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1573_63_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        media.play_id(SOUND_TELEPORT_END_348, -1, 1);
        FrameObject * single_instance_1573_63_0; single_instance_1573_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitespawnerwave_3336(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1573_63_0 == NULL)
                    single_instance_1573_63_0 = new_obj;
            }
        }
    }
    event_1573_63_end: ;
}
void Frames::event_func_13481()
{
    // event 1574_63
    {
        if (!(group_main_engine_1)) goto event_1574_63_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1574_63_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1)/math_helper/6);
        }
    }
    event_1574_63_end: ;
}
void Frames::event_func_13482()
{
    // event 1575_63
    {
        if (!(group_main_engine_1)) goto event_1575_63_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1575_63_end;
        FrameObject * single_instance_1575_63_0; single_instance_1575_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitemask_2511(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1575_63_0 == NULL)
                    single_instance_1575_63_0 = new_obj;
            }
        }
        FrameObject * single_instance_1575_63_1; single_instance_1575_63_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1575_63_1 == NULL)
                    single_instance_1575_63_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1575_63_0))->alterables->values.set(5, ((Active*)single_instance_1575_63_0)->get_x());
        ((Active*)((Active*)single_instance_1575_63_0))->alterables->values.set(6, ((Active*)single_instance_1575_63_0)->get_y());
        ((Active*)((Active*)single_instance_1575_63_0))->alterables->flags.enable(16);
    }
    event_1575_63_end: ;
}
void Frames::event_func_13483()
{
    // event 1576_63
    {
        if (!(group_main_engine_1)) goto event_1576_63_end;
        enemyelitespawnerwave_3336_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawnerwave_3336_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (15))) { it.deselect(); continue; }
        }
        if (!enemyelitespawnerwave_3336_instances.has_selection()) goto event_1576_63_end;
        for (ObjectIterator it(enemyelitespawnerwave_3336_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1576_63_end: ;
}
void Frames::event_func_13484()
{
    // event 1598_63
    bool or_result_1598_63 = false;
    bool or_temp_result_1598_63_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1598_63_0_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1598_63_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysuperturretus_1828_instances, qualifier_7)) goto or_event_1598_63_0_end;
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1598_63_0_end;
        or_result_1598_63 = true;
        or_temp_result_1598_63_0 = true;
    }
    or_event_1598_63_0_end: ;
    enemysuperturretus_1828_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1598_63_0) {
        enemysuperturretus_1828_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1598_63
    bool or_temp_result_1598_63_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1598_63_1_end;
        enemysuperturretus_1828_instances.clear_selection();
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysuperturretus_1828_instances.has_selection()) goto or_event_1598_63_1_end;
        or_result_1598_63 = true;
        or_temp_result_1598_63_1 = true;
        or_event_1598_63_1_end: ;
        if (or_temp_result_1598_63_1) {
            enemysuperturretus_1828_instances.save_selection();
        }
        if (!or_result_1598_63) goto or_final_or_event_1598_63_1_end;
        enemysuperturretus_1828_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1598_63_0 || or_temp_result_1598_63_1) {
            enemysuperturretus_1828_instances.restore_selection();
        }
        if (or_temp_result_1598_63_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1598_63_0; single_instance_1598_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1598_63_0 == NULL)
                    single_instance_1598_63_0 = new_obj;
            }
        }
        FrameObject * single_instance_1598_63_1; single_instance_1598_63_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysuperturretus_1828_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1598_63_1 == NULL)
                    single_instance_1598_63_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)((Active*)single_instance_1598_63_0))->set_direction(4);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1598_63_1_end: ;
}
void Frames::event_func_13485()
{
    // event 1605_63
    {
        if (!(group_main_engine_1)) goto event_1605_63_end;
        enemypellet_863_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(enemypellet_863_instances, qualifier_20)) goto event_1605_63_end;
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemypellet_863_instances.has_selection()) goto event_1605_63_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1605_63_end;
        FrameObject * single_instance_1605_63_0; single_instance_1605_63_0 = pick_random(qualifier_20);
        if (single_instance_1605_63_0 == NULL) goto event_1605_63_end;
        ((Active*)((Active*)single_instance_1605_63_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1605_63_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1605_63_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1605_63_0))->alterables->values.sub(0, 10);
        {
            ((Active*)single_instance_1605_63_0)->set_shader(Render::INVERT);
        }
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        FrameObject * single_instance_1605_63_1; single_instance_1605_63_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypellet_863_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1605_63_1 == NULL)
                    single_instance_1605_63_1 = new_obj;
            }
        }
    }
    event_1605_63_end: ;
}
void Frames::event_func_13486()
{
    // event 1618_63
    {
        if (!(group_main_engine_1)) goto event_1618_63_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1618_63_end;
        FrameObject * single_instance_1618_63_0; single_instance_1618_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1618_63_0 == NULL)
                    single_instance_1618_63_0 = new_obj;
            }
        }
        FrameObject * single_instance_1618_63_1; single_instance_1618_63_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1618_63_1 == NULL)
                    single_instance_1618_63_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1618_63_1))->set_direction(2);
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1618_63_2_end;
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
        dynamic_1618_63_2_end: ;
    }
    event_1618_63_end: ;
}
void Frames::event_func_13487()
{
    // event 1641_63
    bool or_result_1641_63 = false;
    bool or_temp_result_1641_63_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1641_63_0_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1641_63_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyturretus_938_instances, qualifier_7)) goto or_event_1641_63_0_end;
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1641_63_0_end;
        or_result_1641_63 = true;
        or_temp_result_1641_63_0 = true;
    }
    or_event_1641_63_0_end: ;
    enemyturretus_938_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1641_63_0) {
        enemyturretus_938_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1641_63
    bool or_temp_result_1641_63_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1641_63_1_end;
        enemyturretus_938_instances.clear_selection();
        for (ObjectIterator it(enemyturretus_938_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyturretus_938_instances.has_selection()) goto or_event_1641_63_1_end;
        or_result_1641_63 = true;
        or_temp_result_1641_63_1 = true;
        or_event_1641_63_1_end: ;
        if (or_temp_result_1641_63_1) {
            enemyturretus_938_instances.save_selection();
        }
        if (!or_result_1641_63) goto or_final_or_event_1641_63_1_end;
        enemyturretus_938_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1641_63_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1641_63_0 || or_temp_result_1641_63_1) {
            enemyturretus_938_instances.restore_selection();
        }
        FrameObject * single_instance_1641_63_0; single_instance_1641_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1641_63_0 == NULL)
                    single_instance_1641_63_0 = new_obj;
            }
        }
        FrameObject * single_instance_1641_63_1; single_instance_1641_63_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyturretus_938_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1641_63_1 == NULL)
                    single_instance_1641_63_1 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1641_63_1_end: ;
}
void Frames::event_func_13488()
{
    // event 1661_63
    bool or_result_1661_63 = false;
    bool or_temp_result_1661_63_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1661_63_0_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1661_63_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymeteorroller_2421_instances, qualifier_7)) goto or_event_1661_63_0_end;
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1661_63_0_end;
        or_result_1661_63 = true;
        or_temp_result_1661_63_0 = true;
    }
    or_event_1661_63_0_end: ;
    enemymeteorroller_2421_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1661_63_0) {
        enemymeteorroller_2421_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1661_63
    bool or_temp_result_1661_63_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1661_63_1_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto or_event_1661_63_1_end;
        or_result_1661_63 = true;
        or_temp_result_1661_63_1 = true;
        or_event_1661_63_1_end: ;
        if (or_temp_result_1661_63_1) {
            enemymeteorroller_2421_instances.save_selection();
        }
        if (!or_result_1661_63) goto or_final_or_event_1661_63_1_end;
        qualifier_7.empty_selection();
        enemymeteorroller_2421_instances.empty_selection();
        if (or_temp_result_1661_63_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1661_63_0 || or_temp_result_1661_63_1) {
            enemymeteorroller_2421_instances.restore_selection();
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1661_63_0; single_instance_1661_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1661_63_0 == NULL)
                    single_instance_1661_63_0 = new_obj;
            }
        }
        FrameObject * single_instance_1661_63_1; single_instance_1661_63_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymeteorroller_2421_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1661_63_1 == NULL)
                    single_instance_1661_63_1 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1661_63_1_end: ;
}
void Frames::event_func_13489()
{
    // event 1699_63
    bool or_result_1699_63 = false;
    bool or_temp_result_1699_63_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1699_63_0_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1699_63_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysaucerdebris_2761_instances, qualifier_7)) goto or_event_1699_63_0_end;
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1699_63_0_end;
        or_result_1699_63 = true;
        or_temp_result_1699_63_0 = true;
    }
    or_event_1699_63_0_end: ;
    enemysaucerdebris_2761_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1699_63_0) {
        enemysaucerdebris_2761_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1699_63
    bool or_temp_result_1699_63_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1699_63_1_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1699_63_1_end;
        or_result_1699_63 = true;
        or_temp_result_1699_63_1 = true;
        or_event_1699_63_1_end: ;
        if (or_temp_result_1699_63_1) {
            enemysaucerdebris_2761_instances.save_selection();
        }
        if (!or_result_1699_63) goto or_final_or_event_1699_63_1_end;
        enemysaucerdebris_2761_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1699_63_0 || or_temp_result_1699_63_1) {
            enemysaucerdebris_2761_instances.restore_selection();
        }
        if (or_temp_result_1699_63_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1699_63_0; single_instance_1699_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerdebris_2761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1699_63_0 == NULL)
                    single_instance_1699_63_0 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1699_63_1_end: ;
}
void Frames::event_func_13490()
{
    // event 1722_63
    {
        if (!(group_main_engine_1)) goto event_1722_63_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1722_63_end;
        FrameObject * single_instance_1722_63_0; single_instance_1722_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyghettoshell_1971_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1722_63_0 == NULL)
                    single_instance_1722_63_0 = new_obj;
            }
        }
        FrameObject * single_instance_1722_63_1; single_instance_1722_63_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyghettoshell_1971_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1722_63_1 == NULL)
                    single_instance_1722_63_1 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1722_63_end: ;
}
void Frames::event_func_13491()
{
    // event 1789_63
    bool or_result_1789_63 = false;
    bool or_temp_result_1789_63_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1789_63_0_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1789_63_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemypelletizer_2304_instances, qualifier_7)) goto or_event_1789_63_0_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1789_63_0_end;
        or_result_1789_63 = true;
        or_temp_result_1789_63_0 = true;
    }
    or_event_1789_63_0_end: ;
    qualifier_7.clear_saved_selection();
    enemypelletizer_2304_instances.clear_saved_selection();
    if (or_temp_result_1789_63_0) {
        qualifier_7.save_selection();
        enemypelletizer_2304_instances.save_selection();
    }
    // event 1789_63
    bool or_temp_result_1789_63_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1789_63_1_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1789_63_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemypelletizer_2304_instances, qualifier_8)) goto or_event_1789_63_1_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1789_63_1_end;
        or_result_1789_63 = true;
        or_temp_result_1789_63_1 = true;
    }
    or_event_1789_63_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1789_63_1) {
        qualifier_8.save_selection();
        enemypelletizer_2304_instances.save_selection();
    }
    // event 1789_63
    bool or_temp_result_1789_63_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1789_63_2_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1789_63_2_end;
        or_result_1789_63 = true;
        or_temp_result_1789_63_2 = true;
        or_event_1789_63_2_end: ;
        if (or_temp_result_1789_63_2) {
            enemypelletizer_2304_instances.save_selection();
        }
        if (!or_result_1789_63) goto or_final_or_event_1789_63_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemypelletizer_2304_instances.empty_selection();
        if (or_temp_result_1789_63_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1789_63_0 || or_temp_result_1789_63_1 || or_temp_result_1789_63_2) {
            enemypelletizer_2304_instances.restore_selection();
        }
        if (or_temp_result_1789_63_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1789_63_0; single_instance_1789_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1789_63_0 == NULL)
                    single_instance_1789_63_0 = new_obj;
            }
        }
        FrameObject * single_instance_1789_63_1; single_instance_1789_63_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1789_63_1 == NULL)
                    single_instance_1789_63_1 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1789_63_2_end: ;
}
void Frames::event_func_13492()
{
    // event 1815_63
    bool or_result_1815_63 = false;
    bool or_temp_result_1815_63_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1815_63_0_end;
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1815_63_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemylavasquiddebris_2677_instances, qualifier_7)) goto or_event_1815_63_0_end;
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1815_63_0_end;
        or_result_1815_63 = true;
        or_temp_result_1815_63_0 = true;
    }
    or_event_1815_63_0_end: ;
    enemylavasquiddebris_2677_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1815_63_0) {
        qualifier_7.save_selection();
        enemylavasquiddebris_2677_instances.save_selection();
    }
    // event 1815_63
    bool or_temp_result_1815_63_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1815_63_1_end;
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemylavasquiddebris_2677_instances.has_selection()) goto or_event_1815_63_1_end;
        or_result_1815_63 = true;
        or_temp_result_1815_63_1 = true;
        or_event_1815_63_1_end: ;
        if (or_temp_result_1815_63_1) {
            enemylavasquiddebris_2677_instances.save_selection();
        }
        if (!or_result_1815_63) goto or_final_or_event_1815_63_1_end;
        enemylavasquiddebris_2677_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1815_63_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1815_63_0 || or_temp_result_1815_63_1) {
            enemylavasquiddebris_2677_instances.restore_selection();
        }
        FrameObject * single_instance_1815_63_0; single_instance_1815_63_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylavasquiddebris_2677_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1815_63_0 == NULL)
                    single_instance_1815_63_0 = new_obj;
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
                loop_spawndebris_63();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        enemylavasquiddebris_2677_instances.clear_selection();
        for (ObjectIterator it(enemylavasquiddebris_2677_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_1815_63_1_end: ;
}
void Frames::event_func_13493()
{
    // event 1840_63
    {
        if (!(group_main_engine_1)) goto event_1840_63_end;
        if (!((global_values->get(4)) < (1))) goto event_1840_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2736))) goto event_1840_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (2936))) goto event_1840_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1000))) goto event_1840_63_end;
        global_values->set(4, 1);
        global_values->set(5, 2836);
        global_values->set(6, 1260);
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
    event_1840_63_end: ;
}
void Frames::event_func_13494()
{
    // event 1841_63
    {
        if (!(group_main_engine_1)) goto event_1841_63_end;
        if (!((global_values->get(4)) < (2))) goto event_1841_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5000))) goto event_1841_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (5200))) goto event_1841_63_end;
        global_values->set(4, 2);
        global_values->set(5, 5000);
        global_values->set(6, 720);
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
    event_1841_63_end: ;
}
void Frames::event_func_13495()
{
    // event 1842_63
    {
        if (!(group_main_engine_1)) goto event_1842_63_end;
        if (!((global_values->get(4)) < (3))) goto event_1842_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7450))) goto event_1842_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7650))) goto event_1842_63_end;
        global_values->set(4, 3);
        global_values->set(5, 7550);
        global_values->set(6, 400);
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
    event_1842_63_end: ;
}
void Frames::event_func_13496()
{
    // event 1843_63
    {
        if (!(group_main_engine_1)) goto event_1843_63_end;
        if (!((global_values->get(4)) < (4))) goto event_1843_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (8100))) goto event_1843_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (8400))) goto event_1843_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1600))) goto event_1843_63_end;
        global_values->set(4, 4);
        global_values->set(5, 8260);
        global_values->set(6, 1870);
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
    event_1843_63_end: ;
}
void Frames::event_func_13497()
{
    // event 2078_63
    {
        if (!(group_main_engine_1)) goto event_2078_63_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(9, (frame_left()*((SystemBox*)*it)->alterables->values.get(3))+((SystemBox*)*it)->alterables->values.get(5));
            ((SystemBox*)*it)->alterables->values.set(10, (frame_top()*((SystemBox*)*it)->alterables->values.get(4))+((SystemBox*)*it)->alterables->values.get(2));
        }
        ((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.set(9, (frame_left()*((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.get(3))+((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.get(5));
        ((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.set(10, (frame_top()*((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.get(4))+((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.get(2));
        ((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.set(9, (frame_left()*((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.get(3))+((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.get(5));
        ((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.set(10, (frame_top()*((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.get(4))+((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.get(2));
    }
    event_2078_63_end: ;
}
void Frames::event_func_13498()
{
    // event 2079_63
    {
        if (!(group_main_engine_1)) goto event_2079_63_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(frame_left()+(int(((SystemBox*)*it)->alterables->values.get(9)-frame_left())%math_helper%((SystemBox*)*it)->alterables->values.get(0)), ((SystemBox*)*it)->alterables->values.get(10));
        }
        ((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->set_global_position(frame_left()+int(((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.get(9)-frame_left()), ((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.get(10));
        ((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->set_global_position(frame_left()+int(((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.get(9)-frame_left()), ((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.get(10));
    }
    event_2079_63_end: ;
}
void Frames::event_func_13499()
{
    // event 2082_63
    {
        if (!(group_main_engine_1)) goto event_2082_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(3);
            ((Active*)*it)->alterables->values.set(2, 20);
        }
    }
    event_2082_63_end: ;
}
void Frames::event_func_13500()
{
    // event 2083_63
    {
        if (!(group_main_engine_1)) goto event_2083_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_2083_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (93))) goto event_2083_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2083_63_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(7);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
    }
    event_2083_63_end: ;
}
void Frames::event_func_13501()
{
    // event 2084_63
    {
        if (!(group_main_engine_1)) goto event_2084_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (93))) goto event_2084_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_2084_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_2084_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_2084_63_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_2084_63_end;
        player_389_instances.clear_selection();
        bosssparky_3327_instances.clear_selection();
        if (!check_overlap(player_389_instances, bosssparky_3327_instances)) goto event_2084_63_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 93);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(bosssparky_3327_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(bosssparky_3327_instances, default_active_instance))->get_y()-32);
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
        }
    }
    event_2084_63_end: ;
}
void Frames::event_func_13502()
{
    // event 2085_63
    {
        if (!(group_main_engine_1)) goto event_2085_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2085_63_end;
        if (not_always_2085_63 > loop_count) {
            not_always_2085_63 = loop_count + 2;
            goto event_2085_63_end;
        }
        not_always_2085_63 = loop_count + 2;
            group_main_engine_player_sparky_player_sparky_controls_1 = false;
    
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_2085_63_end: ;
}
void Frames::event_func_13503()
{
    // event 2086_63
    {
        if (!(group_main_engine_1)) goto event_2086_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2086_63_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+2, 0));
            ((Active*)*it)->alterables->values.sub(4, 2);
        }
    }
    event_2086_63_end: ;
}
void Frames::event_func_13504()
{
    // event 2087_63
    {
        if (!(group_main_engine_1)) goto event_2087_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2087_63_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-2, 0));
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_2087_63_end: ;
}
void Frames::event_func_13505()
{
    // event 2088_63
    {
        if (!(group_main_engine_1)) goto event_2088_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2088_63_end;
        if (not_always_2088_63 > loop_count) {
            not_always_2088_63 = loop_count + 2;
            goto event_2088_63_end;
        }
        not_always_2088_63 = loop_count + 2;
        if (!group_main_engine_player_sparky_player_sparky_controls_1) {
            group_main_engine_player_sparky_player_sparky_controls_1 = true;
        }
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2088_63_end: ;
}
void Frames::event_func_13506()
{
    // event 2089_63
    {
        if (!(group_main_engine_1)) goto event_2089_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2089_63_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/3)%math_helper%30);
        }
    }
    event_2089_63_end: ;
}
void Frames::event_func_13507()
{
    // event 2090_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2090_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+32);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, ((Active*)get_single(bosssparky_3327_instances, default_active_instance))->alterables->values.get(6)*2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 0);
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_2090_63_end: ;
}
void Frames::event_func_13508()
{
    // event 2091_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2091_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_2091_63_end: ;
}
void Frames::event_func_13509()
{
    // event 2092_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2092_63_end;
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_2092_63_end: ;
}
void Frames::event_func_13510()
{
    // event 2093_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2093_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (30))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2093_63_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_2093_63_end: ;
}
void Frames::event_func_13511()
{
    // event 2094_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2094_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (30))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2094_63_end;
        media.play(str_data_voices_eng_mi_milla_oooh_ogg_215, 28-1);
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_2094_63_end: ;
}
void Frames::event_func_13512()
{
    // event 2095_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2095_63_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_2095_63_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, 5);
    }
    event_2095_63_end: ;
}
void Frames::event_func_13513()
{
    // event 2096_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2096_63_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_2096_63_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(23, 5);
    }
    event_2096_63_end: ;
}
void Frames::event_func_13514()
{
    // event 2097_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2097_63_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_2097_63_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 3);
    }
    event_2097_63_end: ;
}
void Frames::event_func_13515()
{
    // event 2098_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2098_63_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_2098_63_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, 3);
    }
    event_2098_63_end: ;
}
void Frames::event_func_13516()
{
    // event 2099_63
    {
        if (!(group_main_engine_1 && group_main_engine_player_sparky_player_sparky_controls_1)) goto event_2099_63_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (1))) goto event_2099_63_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(9))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_2099_63_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 8);
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->alterables->flags.enable(9);
        }
    }
    event_2099_63_end: ;
}
