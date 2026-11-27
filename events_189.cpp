#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_process_call_stop_music_69(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_46();
}
void Frames::event_func_14735()
{
    // event 1437_69
    {
        if (!(group_main_engine_1)) goto event_1437_69_end;
        if (!((((Active*)foreach_instance_f)->alterables->values.get(0)) >= (55))) goto event_1437_69_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1437_69_end;
        FrameObject * single_instance_1437_69_0; single_instance_1437_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdust01_332(((Active*)foreach_instance_f)->x + 0, ((Active*)foreach_instance_f)->y + 0), ((Active*)foreach_instance_f)->layer);
            if (single_instance_1437_69_0 == NULL)
                single_instance_1437_69_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1437_69_0))->set_direction(get_direction_int(((Active*)single_instance_1437_69_0)->x, ((Active*)single_instance_1437_69_0)->y, ((Active*)foreach_instance_f)->x + 0, ((Active*)foreach_instance_f)->y + 0));
        ((Active*)((Active*)single_instance_1437_69_0))->get_movement()->set_speed(80);
        ((Active*)((Active*)single_instance_1437_69_0))->force_speed(100);
    }
    event_1437_69_end: ;
}
void Frames::foreach_f_69()
{
    event_func_14735();
}
void Frames::event_func_14736()
{
    // event 1739_69
    {
        if (!(group_main_engine_1)) goto event_1739_69_end;
        if (!((((Active*)foreach_instance_x)->alterables->values.get(7)) == (10))) goto event_1739_69_end;
        if (!((((Active*)foreach_instance_x)->alterables->values.get(8)%math_helper%7) == (1))) goto event_1739_69_end;
        FrameObject * single_instance_1739_69_0; single_instance_1739_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(((Active*)foreach_instance_x)->x + 0, ((Active*)foreach_instance_x)->y + 0), ((Active*)foreach_instance_x)->layer);
            if (single_instance_1739_69_0 == NULL)
                single_instance_1739_69_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1739_69_0))->set_x(((Active*)single_instance_1739_69_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1739_69_0))->set_y(((Active*)single_instance_1739_69_0)->get_y()-20+randrange(41));
    }
    event_1739_69_end: ;
}
void Frames::foreach_x_69()
{
    event_func_14736();
}
void Frames::event_func_14737()
{
    // event 1689_69
    {
        if (!(group_main_engine_1)) goto event_1689_69_end;
        FrameObject * single_instance_1689_69_0; single_instance_1689_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1689_69_0 == NULL)
                single_instance_1689_69_0 = new_obj;
        }
        FrameObject * single_instance_1689_69_1; single_instance_1689_69_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1689_69_1 == NULL)
                single_instance_1689_69_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1689_69_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1689_69_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1689_69_0))->move_back();
        ((Active*)((Active*)single_instance_1689_69_1))->alterables->values.set(1, ((Active*)get_instance(hazardorbitbeamscan_3645_instances, default_active_instance))->alterables->values.get(4));
    }
    event_1689_69_end: ;
}
void Frames::col_4_69()
{
    event_func_14737();
}
void Frames::event_func_14738()
{
    // event 1428_69
    {
        if (!(group_main_engine_1)) goto event_1428_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1428_69_end;
        media.play_id(SOUND_COMMON_BOOSTRING_381, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 15);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 30));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 30);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_1428_69_end: ;
}
void Frames::event_func_14739()
{
    // event 1429_69
    {
        if (!(group_main_engine_1)) goto event_1429_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_1429_69_end;
        media.play_id(SOUND_COMMON_BOOSTRING_381, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -15);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 30));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 30);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
    }
    event_1429_69_end: ;
}
void Frames::col_5_69()
{
    event_func_14738();
    event_func_14739();
}
void Frames::event_func_14740()
{
    // event 1625_69
    {
        if (!(group_main_engine_1)) goto event_1625_69_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, -4+randrange(9));
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, -2);
    }
    event_1625_69_end: ;
}
void Frames::col_9_69()
{
    event_func_14740();
}
void Frames::event_func_14741()
{
    // event 1628_69
    {
        if (!(group_main_engine_1)) goto event_1628_69_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(6))) goto event_1628_69_end;
        FrameObject * single_instance_1628_69_0; single_instance_1628_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1628_69_0 == NULL)
                single_instance_1628_69_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, -5);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_69();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1628_69_end: ;
}
void Frames::col_23_69()
{
    event_func_8608();
    event_func_8609();
    event_func_14741();
}
void Frames::event_func_14742()
{
    // event 1701_69
    {
        if (!(group_main_engine_1)) goto event_1701_69_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(4))) goto event_1701_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1701_69_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (4))) goto event_1701_69_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1701_69_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 60);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
    }
    event_1701_69_end: ;
}
void Frames::col_28_69()
{
    event_func_14742();
}
void Frames::test_collisions_69()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(playerreflect_447_instances, enemydnalaser_2236_instances, 2, 1, (EventFunction)&Frames::col_17_37);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, hazardshockwave_1524_instances, 1073741824, 1, (EventFunction)&Frames::col_4_69);
    test_collisions(player_389_instances, gimmickspeedbooster_3638_instances, 1, 1, (EventFunction)&Frames::col_5_69);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 268435456, 8, (EventFunction)&Frames::col_5_13);
    test_collisions(enemyrotorbladespikes_2204_instances, hazardspikesup_558_instances, 1, 1, (EventFunction)&Frames::col_9_69);
    test_collisions(qualifier_20, enemypellet_863_instances, 134217728, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(shieldwater_318_instances, badnikgolemshot_1197_instances, 1, 1, (EventFunction)&Frames::col_7_40);
    test_collisions(playerreflect_447_instances, enemyhomingbullet_2568_instances, 16, 1, (EventFunction)&Frames::col_8_44);
    test_collisions(playerreflect_447_instances, badnikgolemshot_1197_instances, 32, 2, (EventFunction)&Frames::col_10_40);
    test_collisions(enemylimiter_350_instances, enemypounder_3419_instances, 1, 1, (EventFunction)&Frames::col_15_65);
    test_collisions(qualifier_7, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, enemyhomingbullet_2568_instances, 33554432, 2, (EventFunction)&Frames::col_7_44);
    test_collisions(qualifier_8, objectcrystal_279_instances, 16777216, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(hazardshockwave_1524_instances, enemyelitemask_2511_instances, 2, 1, (EventFunction)&Frames::col_17_65);
    test_collisions(qualifier_7, playerprojectile_320_instances, 8388608, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 4194304, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(enemylimiter_350_instances, enemyrotorblade_2205_instances, 2, 1, (EventFunction)&Frames::col_23_69);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 64, 2, (EventFunction)&Frames::col_5_29);
    test_collisions(enemyrotorbladespikes_2204_instances, enemyseeker_2648_instances, 2, 1, (EventFunction)&Frames::col_8_36);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playercharactersensor_383_instances, enemyhomingbullet_2568_instances, 2, 4, (EventFunction)&Frames::col_12_44);
    test_collisions(playercharactersensor_383_instances, badnikgolemshot_1197_instances, 4, 4, (EventFunction)&Frames::col_28_69);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 4, 2, (EventFunction)&Frames::col_27_43);
    test_collisions(hazardshockwave_1524_instances, enemyseeker_2648_instances, 4, 2, (EventFunction)&Frames::col_17_65);
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
void Frames::event_func_14743()
{
    // event 531_69
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_531_69_end;
            group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_common_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = false;
    
            group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = false;
    
            group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
        }
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_frame(1);
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_531_69_end: ;
}
void Frames::event_func_14744()
{
    // event 541_69
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_541_69_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_541_69_end;
        FrameObject * single_instance_541_69_0; single_instance_541_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_541_69_0 == NULL)
                    single_instance_541_69_0 = new_obj;
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
                loop_spawndebris_69();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_541_69_end: ;
}
void Frames::event_func_14745()
{
    // event 558_69
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_558_69_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_558_69_end;
        FrameObject * single_instance_558_69_0; single_instance_558_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_558_69_0 == NULL)
                    single_instance_558_69_0 = new_obj;
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
                loop_spawndebris_69();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_558_69_end: ;
}
void Frames::event_func_14746()
{
    // event 692_69
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_692_69_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_692_69_end;
        FrameObject * single_instance_692_69_0; single_instance_692_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_692_69_0 == NULL)
                    single_instance_692_69_0 = new_obj;
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
                loop_spawndebris_69();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_692_69_end: ;
}
void Frames::event_func_14747()
{
    // event 1418_69
    {
        if (!(group_main_engine_1)) goto event_1418_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1418_69_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+cos_deg(((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0))*20);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0))*-20);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 15));
        ((Active*)get_instance(objecttransporterwave_3414_instances))->move_front();
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1418_69_0;
            ((Active*)get_instance(objecttransporterwave_3414_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1418_69_0: ;
        }
        ((Active*)get_instance(objecttransporterwave_3414_instances))->set_angle(((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0), 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
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
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        FrameObject * single_instance_1418_69_1; single_instance_1418_69_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(objecttransporterwave_3414_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1418_69_1 == NULL)
                    single_instance_1418_69_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1418_69_1))->set_direction(28);
        ((Active*)((Active*)single_instance_1418_69_1))->set_angle(((Active*)get_instance(objecttransporterwave_3414_instances))->get_angle(), 0);
    }
    event_1418_69_end: ;
}
void Frames::event_func_14748()
{
    // event 1427_69
    {
        if (!(group_main_engine_1)) goto event_1427_69_end;
        gimmickspeedboosterfront_3653_instances.clear_selection();
        for (ObjectIterator it(gimmickspeedboosterfront_3653_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%5);
        }
        gimmickspeedbooster_3638_instances.clear_selection();
        for (ObjectIterator it(gimmickspeedbooster_3638_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%4);
        }
    }
    event_1427_69_end: ;
}
void Frames::event_func_14749()
{
    // event 1430_69
    {
        if (!(group_main_engine_1)) goto event_1430_69_end;
        gimmickspeedbooster_3638_instances.clear_selection();
        for (ObjectIterator it(gimmickspeedbooster_3638_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!gimmickspeedbooster_3638_instances.has_selection()) goto event_1430_69_end;
        for (ObjectIterator it(gimmickspeedbooster_3638_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
        FrameObject * single_instance_1430_69_0; single_instance_1430_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1430_69_0 == NULL)
                    single_instance_1430_69_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1430_69_0))->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8-1);
        ((Active*)((Active*)single_instance_1430_69_0))->set_angle(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14), 0);
    }
    event_1430_69_end: ;
}
void Frames::event_func_14750()
{
    // event 1432_69
    {
        if (!(group_main_engine_1)) goto event_1432_69_end;
        hazardorbitbeam_3644_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeam_3644_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3)+cos_deg(((Active*)*it)->alterables->values.get(5))*240);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)-sin_deg(((Active*)*it)->alterables->values.get(5))*240);
        }
        hazardorbitbeambase_3633_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeambase_3633_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(hazardorbitbeam_3644_instances, it.current_index));
            if (parent == NULL) goto pos_end_1432_69_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1432_69_0: ;
        }
        for (ObjectIterator it(hazardorbitbeam_3644_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(5)+180, 0);
        }
        for (ObjectIterator it(hazardorbitbeambase_3633_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_single(hazardorbitbeam_3644_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(hazardorbitbeam_3644_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (global_values->get(3)*0.3)%math_helper%8);
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1432_69_end: ;
}
void Frames::event_func_14751()
{
    // event 1433_69
    {
        if (!(group_main_engine_1)) goto event_1433_69_end;
        hazardorbitbeam_3644_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeam_3644_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+359)%math_helper%360);
        }
        hazardorbitbeamscan_3645_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(hazardorbitbeam_3644_instances, it.current_index));
            if (parent == NULL) goto pos_end_1433_69_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1433_69_0: ;
        }
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(hazardorbitbeam_3644_instances, it.current_index, default_active_instance))->alterables->values.get(5)+180, 0);
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(hazardorbitbeam_3644_instances, it.current_index, default_active_instance))->alterables->values.get(7));
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x_scale(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1433_69_end: ;
}
void Frames::event_func_14752()
{
    // event 1434_69
    {
        if (!(group_main_engine_1)) goto event_1434_69_end;
        hazardorbitbeam_3644_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeam_3644_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (55))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!hazardorbitbeam_3644_instances.has_selection()) goto event_1434_69_end;
        if (not_always_1434_69 > loop_count) {
            not_always_1434_69 = loop_count + 2;
            goto event_1434_69_end;
        }
        not_always_1434_69 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(3, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)));
        media.play_id(SOUND_COMMON_FLAMETHROWER1_70, -1, 1);
    }
    event_1434_69_end: ;
}
void Frames::event_func_14753()
{
    // event 1435_69
    {
        if (!(group_main_engine_1)) goto event_1435_69_end;
        hazardorbitbeamscan_3645_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (55))) { it.deselect(); continue; }
        }
        if (!hazardorbitbeamscan_3645_instances.has_selection()) goto event_1435_69_end;
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.05, 1));
        }
    }
    event_1435_69_end: ;
}
void Frames::event_func_14754()
{
    // event 1436_69
    {
        if (!(group_main_engine_1)) goto event_1436_69_end;
        hazardorbitbeamscan_3645_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (55))) { it.deselect(); continue; }
        }
        if (!hazardorbitbeamscan_3645_instances.has_selection()) goto event_1436_69_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1436_69_end;
        {
            SavedSelection extra_hazardorbitbeamscan_3645_instances(hazardorbitbeamscan_3645_instances);
            for (SavedIterator it(extra_hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
                foreach_instance_f = ((Active*)*it);
                foreach_f_69();
            }
        }
    }
    event_1436_69_end: ;
}
void Frames::event_func_14755()
{
    // event 1438_69
    {
        if (!(group_main_engine_1)) goto event_1438_69_end;
        hazardorbitbeamscan_3645_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardorbitbeamscan_3645_instances, playercharactersensor_383_instances)) goto event_1438_69_end;
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (55))) { it.deselect(); continue; }
        }
        if (!hazardorbitbeamscan_3645_instances.has_selection()) goto event_1438_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1438_69_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1438_69_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1438_69_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
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
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
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
    event_1438_69_end: ;
}
void Frames::event_func_14756()
{
    // event 1439_69
    {
        if (!(group_main_engine_1)) goto event_1439_69_end;
        hazardorbitbeam_3644_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeam_3644_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (100))) { it.deselect(); continue; }
        }
        if (!hazardorbitbeam_3644_instances.has_selection()) goto event_1439_69_end;
        for (ObjectIterator it(hazardorbitbeam_3644_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 100);
        }
    }
    event_1439_69_end: ;
}
void Frames::event_func_14757()
{
    // event 1536_69
    {
        if (!(group_main_engine_1)) goto event_1536_69_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1536_69_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1536_69_0; single_instance_1536_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1536_69_0 == NULL)
                    single_instance_1536_69_0 = new_obj;
            }
        }
        FrameObject * single_instance_1536_69_1; single_instance_1536_69_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1536_69_1 == NULL)
                    single_instance_1536_69_1 = new_obj;
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
                loop_spawndebris_69();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1536_69_end: ;
}
void Frames::event_func_14758()
{
    // event 1577_69
    {
        if (!(group_main_engine_1)) goto event_1577_69_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1577_69_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_19)) goto event_1577_69_end;
        FrameObject * single_instance_1577_69_0; single_instance_1577_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1577_69_0 == NULL)
                    single_instance_1577_69_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1577_69_0))->set_direction(2);
        FrameObject * single_instance_1577_69_1; single_instance_1577_69_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1577_69_1 == NULL)
                    single_instance_1577_69_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1577_69_2; single_instance_1577_69_2 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1577_69_2 == NULL)
                    single_instance_1577_69_2 = new_obj;
            }
        }
        FrameObject * single_instance_1577_69_3; single_instance_1577_69_3 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1577_69_3 == NULL)
                    single_instance_1577_69_3 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1577_69_2))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1577_69_2))->move_back();
        ((Active*)((Active*)single_instance_1577_69_3))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_69();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1577_69_end: ;
}
void Frames::event_func_14759()
{
    // event 1578_69
    bool or_result_1578_69 = false;
    bool or_temp_result_1578_69_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1578_69_0_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1578_69_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_7)) goto or_event_1578_69_0_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1578_69_0_end;
        or_result_1578_69 = true;
        or_temp_result_1578_69_0 = true;
    }
    or_event_1578_69_0_end: ;
    enemyseeker_2648_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1578_69_0) {
        enemyseeker_2648_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1578_69
    bool or_temp_result_1578_69_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1578_69_1_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1578_69_1_end;
        or_result_1578_69 = true;
        or_temp_result_1578_69_1 = true;
        or_event_1578_69_1_end: ;
        if (or_temp_result_1578_69_1) {
            enemyseeker_2648_instances.save_selection();
        }
        if (!or_result_1578_69) goto or_final_or_event_1578_69_1_end;
        enemyseeker_2648_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1578_69_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1578_69_0 || or_temp_result_1578_69_1) {
            enemyseeker_2648_instances.restore_selection();
        }
        FrameObject * single_instance_1578_69_0; single_instance_1578_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1578_69_0 == NULL)
                    single_instance_1578_69_0 = new_obj;
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
                loop_spawndebris_69();
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
    or_final_or_event_1578_69_1_end: ;
}
void Frames::event_func_14760()
{
    // event 1606_69
    bool or_result_1606_69 = false;
    bool or_temp_result_1606_69_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1606_69_0_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1606_69_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_7)) goto or_event_1606_69_0_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1606_69_0_end;
        or_result_1606_69 = true;
        or_temp_result_1606_69_0 = true;
    }
    or_event_1606_69_0_end: ;
    enemytankbot_2821_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1606_69_0) {
        enemytankbot_2821_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1606_69
    bool or_temp_result_1606_69_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1606_69_1_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1606_69_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_8)) goto or_event_1606_69_1_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1606_69_1_end;
        or_result_1606_69 = true;
        or_temp_result_1606_69_1 = true;
    }
    or_event_1606_69_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1606_69_1) {
        enemytankbot_2821_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1606_69
    bool or_temp_result_1606_69_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1606_69_2_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1606_69_2_end;
        or_result_1606_69 = true;
        or_temp_result_1606_69_2 = true;
        or_event_1606_69_2_end: ;
        if (or_temp_result_1606_69_2) {
            enemytankbot_2821_instances.save_selection();
        }
        if (!or_result_1606_69) goto or_final_or_event_1606_69_2_end;
        enemytankbot_2821_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1606_69_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1606_69_0 || or_temp_result_1606_69_1 || or_temp_result_1606_69_2) {
            enemytankbot_2821_instances.restore_selection();
        }
        if (or_temp_result_1606_69_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1606_69_0; single_instance_1606_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1606_69_0 == NULL)
                    single_instance_1606_69_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1606_69_0))->set_direction(2);
        FrameObject * single_instance_1606_69_1; single_instance_1606_69_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1606_69_1 == NULL)
                    single_instance_1606_69_1 = new_obj;
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
                loop_spawndebris_69();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1606_69_2_end: ;
}
void Frames::event_func_14761()
{
    // event 1648_69
    {
        if (!(group_main_engine_1)) goto event_1648_69_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (5))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1648_69_end;
        FrameObject * single_instance_1648_69_0; single_instance_1648_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydnacannon_2264_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1648_69_0 == NULL)
                    single_instance_1648_69_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1648_69_0))->set_direction(2);
        FrameObject * single_instance_1648_69_1; single_instance_1648_69_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydnacannon_2264_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1648_69_1 == NULL)
                    single_instance_1648_69_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_69();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1648_69_end: ;
}
void Frames::event_func_14762()
{
    // event 1683_69
    {
        if (!(group_main_engine_1)) goto event_1683_69_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (8))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1683_69_end;
        FrameObject * single_instance_1683_69_0; single_instance_1683_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypounder_3419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1683_69_0 == NULL)
                    single_instance_1683_69_0 = new_obj;
            }
        }
        FrameObject * single_instance_1683_69_1; single_instance_1683_69_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypounder_3419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1683_69_1 == NULL)
                    single_instance_1683_69_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_69();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1683_69_end: ;
}
void Frames::event_func_14763()
{
    // event 1709_69
    {
        if (!(group_main_engine_1)) goto event_1709_69_end;
        enemygatlinggun2_3652_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3), 0);
        }
        enemygatlinggunbarrel_3651_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3), 0);
        }
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index));
            if (parent == NULL) goto pos_end_1709_69_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1709_69_0: ;
        }
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        enemygatlinggunleft_3635_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3), 0);
            ((Active*)*it)->set_x(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(5)+sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(11))*-16);
            ((Active*)*it)->set_y(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(5)+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(11))*-16);
        }
        enemygatlinggunright_3634_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3), 0);
            ((Active*)*it)->set_x(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(6)+sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(11))*16);
            ((Active*)*it)->set_y(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(6)+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(11))*16);
        }
        enemygatlingguntable_3604_instances.clear_selection();
        for (ObjectIterator it(enemygatlingguntable_3604_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0);
            ((Active*)*it)->set_x(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(10))*((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((Active*)*it)->set_y(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(10))*((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->flags.get(1));
        }
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->flags.get(2));
        }
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1709_69_end: ;
}
void Frames::event_func_14764()
{
    // event 1710_69
    {
        if (!(group_main_engine_1)) goto event_1710_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1710_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1710_69_end: ;
}
void Frames::event_func_14765()
{
    // event 1711_69
    {
        if (!(group_main_engine_1)) goto event_1711_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-160))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+120))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1711_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1711_69_end: ;
}
void Frames::event_func_14766()
{
    // event 1712_69
    {
        if (!(group_main_engine_1)) goto event_1712_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-400))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1712_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(15));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(16));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(17));
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(5, -24);
            ((Active*)*it)->alterables->values.set(6, -24);
            ((Active*)*it)->alterables->values.set(9, -64);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(14, 0);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1712_69_end: ;
}
void Frames::event_func_14767()
{
    // event 1713_69
    {
        if (!(group_main_engine_1)) goto event_1713_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1713_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 4);
        }
    }
    event_1713_69_end: ;
}
void Frames::event_func_14768()
{
    // event 1714_69
    {
        if (!(group_main_engine_1)) goto event_1714_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (64))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1714_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 64);
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        media.play_id(SOUND_LOAD_WEAPON_256, -1, 1);
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1714_69_end: ;
}
void Frames::event_func_14769()
{
    // event 1715_69
    {
        if (!(group_main_engine_1)) goto event_1715_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1715_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-cos_deg(((Active*)*it)->alterables->values.get(3))*8);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(3))*8);
            ((Active*)*it)->alterables->values.add(8, 1);
            ((Active*)*it)->alterables->values.sub(9, 8);
        }
    }
    event_1715_69_end: ;
}
void Frames::event_func_14770()
{
    // event 1716_69
    {
        if (!(group_main_engine_1)) goto event_1716_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (16))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1716_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1716_69_end: ;
}
void Frames::event_func_14771()
{
    // event 1717_69
    {
        if (!(group_main_engine_1)) goto event_1717_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (3))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1717_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 10);
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1717_69_end: ;
}
void Frames::event_func_14772()
{
    // event 1718_69
    {
        if (!(group_main_engine_1)) goto event_1718_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (18))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1718_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1718_69_end: ;
}
void Frames::event_func_14773()
{
    // event 1719_69
    {
        if (!(group_main_engine_1)) goto event_1719_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (4))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1719_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
            ((Active*)*it)->alterables->values.add(5, 4);
            ((Active*)*it)->alterables->values.add(6, 4);
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1719_69_end: ;
}
void Frames::event_func_14774()
{
    // event 1720_69
    {
        if (!(group_main_engine_1)) goto event_1720_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (6))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1720_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1720_69_end: ;
}
void Frames::event_func_14775()
{
    // event 1721_69
    {
        if (!(group_main_engine_1)) goto event_1721_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (5))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1721_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+1)%math_helper%10);
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+6, 0));
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+6, 0));
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+3, 12));
            ((Active*)*it)->alterables->values.set(11, (((Active*)*it)->alterables->values.get(11)+20)%math_helper%360);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(3)+get_max(get_min(((((get_angle_int(((Active*)*it)->get_x()-((Active*)*it)->alterables->values.get(12), ((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(13))-180)-((Active*)*it)->alterables->values.get(3)+540)%math_helper%360)-180), 2), -1*2));
            ((Active*)*it)->alterables->values.set(12, ((Active*)get_instance(player_389_instances))->get_x());
            ((Active*)*it)->alterables->values.set(13, ((Active*)get_instance(player_389_instances))->get_y());
            ((Active*)*it)->alterables->values.set(14, (((Active*)*it)->alterables->values.get(14)+1)%math_helper%200);
        }
    }
    event_1721_69_end: ;
}
void Frames::event_func_14776()
{
    // event 1722_69
    {
        if (!(group_main_engine_1)) goto event_1722_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (360))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1722_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 360);
        }
    }
    event_1722_69_end: ;
}
void Frames::event_func_14777()
{
    // event 1723_69
    {
        if (!(group_main_engine_1)) goto event_1723_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (120))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1723_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -24);
            ((Active*)*it)->alterables->values.set(4, 6);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1723_69_end: ;
}
void Frames::event_func_14778()
{
    // event 1724_69
    {
        if (!(group_main_engine_1)) goto event_1724_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (120))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1724_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -24);
            ((Active*)*it)->alterables->values.set(4, 6);
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1724_69_end: ;
}
void Frames::event_func_14779()
{
    // event 1725_69
    {
        if (!(group_main_engine_1)) goto event_1725_69_end;
        enemygatlinggunleft_3635_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunleft_3635_instances.has_selection()) goto event_1725_69_end;
        FrameObject * single_instance_1725_69_0; single_instance_1725_69_0 = pick_random(enemygatlinggunleft_3635_instances);
        if (single_instance_1725_69_0 == NULL) goto event_1725_69_end;
        FrameObject * single_instance_1725_69_1; single_instance_1725_69_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemytrooperlaser_2508(((Active*)single_instance_1725_69_0)->get_action_x() - ((Active*)single_instance_1725_69_0)->layer->off_x + 0, ((Active*)single_instance_1725_69_0)->get_action_y() - ((Active*)single_instance_1725_69_0)->layer->off_y + 0), ((Active*)single_instance_1725_69_0)->layer);
            if (single_instance_1725_69_1 == NULL)
                single_instance_1725_69_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1725_69_1))->alterables->values.set(0, 12);
        ((Active*)((Active*)single_instance_1725_69_1))->alterables->values.set(1, 0-((Active*)single_instance_1725_69_0)->get_angle());
        ((Active*)((Active*)single_instance_1725_69_1))->set_direction(4);
        ((Active*)single_instance_1725_69_1)->move_back(((Active*)single_instance_1725_69_0));
        ((Active*)((Active*)single_instance_1725_69_0))->alterables->flags.enable(1);
        media.play_id(SOUND_SERP_MEGALASER_378, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        ((Active*)((Active*)single_instance_1725_69_1))->set_angle(((Active*)single_instance_1725_69_0)->get_angle(), 0);
    }
    event_1725_69_end: ;
}
void Frames::event_func_14780()
{
    // event 1726_69
    {
        if (!(group_main_engine_1)) goto event_1726_69_end;
        enemygatlinggunleft_3635_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunleft_3635_instances.has_selection()) goto event_1726_69_end;
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1726_69_end: ;
}
void Frames::event_func_14781()
{
    // event 1727_69
    {
        if (!(group_main_engine_1)) goto event_1727_69_end;
        enemygatlinggunright_3634_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunright_3634_instances.has_selection()) goto event_1727_69_end;
        FrameObject * single_instance_1727_69_0; single_instance_1727_69_0 = pick_random(enemygatlinggunright_3634_instances);
        if (single_instance_1727_69_0 == NULL) goto event_1727_69_end;
        FrameObject * single_instance_1727_69_1; single_instance_1727_69_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemytrooperlaser_2508(((Active*)single_instance_1727_69_0)->get_action_x() - ((Active*)single_instance_1727_69_0)->layer->off_x + 0, ((Active*)single_instance_1727_69_0)->get_action_y() - ((Active*)single_instance_1727_69_0)->layer->off_y + 0), ((Active*)single_instance_1727_69_0)->layer);
            if (single_instance_1727_69_1 == NULL)
                single_instance_1727_69_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1727_69_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1727_69_1))->alterables->values.set(0, 12);
        ((Active*)((Active*)single_instance_1727_69_1))->alterables->values.set(1, 0-((Active*)single_instance_1727_69_0)->get_angle());
        ((Active*)((Active*)single_instance_1727_69_1))->set_direction(4);
        ((Active*)single_instance_1727_69_1)->move_back(((Active*)single_instance_1727_69_0));
        media.play_id(SOUND_SERP_MEGALASER_378, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        ((Active*)((Active*)single_instance_1727_69_1))->set_angle(((Active*)single_instance_1727_69_0)->get_angle(), 0);
    }
    event_1727_69_end: ;
}
void Frames::event_func_14782()
{
    // event 1728_69
    {
        if (!(group_main_engine_1)) goto event_1728_69_end;
        enemygatlinggunright_3634_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunright_3634_instances.has_selection()) goto event_1728_69_end;
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1728_69_end: ;
}
void Frames::event_func_14783()
{
    // event 1729_69
    {
        if (!(group_main_engine_1)) goto event_1729_69_end;
        enemygatlinggun2_3652_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (10))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun2_3652_instances.has_selection()) goto event_1729_69_end;
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(get_min(((Active*)*it)->alterables->values.get(1), 1));
        }
    }
    event_1729_69_end: ;
}
void Frames::event_func_14784()
{
    // event 1730_69
    {
        if (!(group_main_engine_1)) goto event_1730_69_end;
        enemygatlinggunbarrel_3651_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (10))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunbarrel_3651_instances.has_selection()) goto event_1730_69_end;
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(get_min(((Active*)*it)->alterables->values.get(1), 1));
        }
    }
    event_1730_69_end: ;
}
void Frames::event_func_14785()
{
    // event 1731_69
    {
        if (!(group_main_engine_1)) goto event_1731_69_end;
        enemytrooperlaser_2508_instances.clear_selection();
        enemygatlinggun_3650_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, enemygatlinggun_3650_instances)) goto event_1731_69_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (5))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1731_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1731_69_end;
        FrameObject * single_instance_1731_69_0; single_instance_1731_69_0 = pick_random(enemygatlinggun_3650_instances);
        if (single_instance_1731_69_0 == NULL) goto event_1731_69_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1731_69_1; single_instance_1731_69_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1731_69_1 == NULL)
                    single_instance_1731_69_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1731_69_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1731_69_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1731_69_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1731_69_0))->alterables->values.sub(0, 3);
        {
            ((Active*)single_instance_1731_69_0)->set_shader(Render::INVERT);
        }
    }
    event_1731_69_end: ;
}
void Frames::event_func_14786()
{
    // event 1732_69
    {
        if (!(group_main_engine_1)) goto event_1732_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (10))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1732_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 10);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1732_69_end: ;
}
void Frames::event_func_14787()
{
    // event 1733_69
    {
        if (!(group_main_engine_1)) goto event_1733_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (10))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1733_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1733_69_end: ;
}
void Frames::event_func_14788()
{
    // event 1734_69
    {
        if (!(group_main_engine_1)) goto event_1734_69_end;
        enemygatlinggun2_3652_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun2_3652_instances.has_selection()) goto event_1734_69_end;
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(8)/math_helper/2)%math_helper%2);
        }
    }
    event_1734_69_end: ;
}
void Frames::event_func_14789()
{
    // event 1735_69
    {
        if (!(group_main_engine_1)) goto event_1735_69_end;
        enemygatlinggunbarrel_3651_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunbarrel_3651_instances.has_selection()) goto event_1735_69_end;
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(8)/math_helper/2)%math_helper%2);
        }
    }
    event_1735_69_end: ;
}
void Frames::event_func_14790()
{
    // event 1736_69
    {
        if (!(group_main_engine_1)) goto event_1736_69_end;
        enemygatlinggunleft_3635_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (10))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunleft_3635_instances.has_selection()) goto event_1736_69_end;
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(8)/math_helper/2)%math_helper%2);
        }
    }
    event_1736_69_end: ;
}
void Frames::event_func_14791()
{
    // event 1737_69
    {
        if (!(group_main_engine_1)) goto event_1737_69_end;
        enemygatlinggunright_3634_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (10))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunright_3634_instances.has_selection()) goto event_1737_69_end;
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_instance(enemygatlinggun_3650_instances, it.current_index, default_active_instance))->alterables->values.get(8)/math_helper/2)%math_helper%2);
        }
    }
    event_1737_69_end: ;
}
void Frames::event_func_14792()
{
    // event 1738_69
    {
        if (!(group_main_engine_1)) goto event_1738_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (10))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1738_69_end;
        if (!((((Active*)get_single(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(8)%math_helper%7) == (1))) goto event_1738_69_end;
        {
            SavedSelection extra_enemygatlinggun_3650_instances(enemygatlinggun_3650_instances);
            for (SavedIterator it(extra_enemygatlinggun_3650_instances); !it.end(); ++it) {
                foreach_instance_x = ((Active*)*it);
                foreach_x_69();
            }
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1738_69_0_end;
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
        dynamic_1738_69_0_end: ;
    }
    event_1738_69_end: ;
}
void Frames::event_func_14793()
{
    // event 1740_69
    {
        if (!(group_main_engine_1)) goto event_1740_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (60))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1740_69_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 11);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        FrameObject * single_instance_1740_69_0; single_instance_1740_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemygatlinggun_3650_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1740_69_0 == NULL)
                    single_instance_1740_69_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1740_69_0))->set_direction(3);
        {
            loop_gd_running = true;
            int times = int(4);
            loop_gd_index = 0;
            while (loop_gd_index < times) {
                loop_gd_69();
                if (!loop_gd_running) break;
                loop_gd_index++;
            }
        }
    }
    event_1740_69_end: ;
}
void Frames::event_func_14794()
{
    // event 1742_69
    {
        if (!(group_main_engine_1)) goto event_1742_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (11))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1742_69_end;
        if (!((global_values->get(3)%math_helper%10) == (0))) goto event_1742_69_end;
        FrameObject * single_instance_1742_69_0; single_instance_1742_69_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemygatlinggun_3650_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1742_69_0 == NULL)
                    single_instance_1742_69_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1742_69_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
    }
    event_1742_69_end: ;
}
void Frames::event_func_14795()
{
    // event 1743_69
    {
        if (!(group_main_engine_1)) goto event_1743_69_end;
        enemygatlinggun2_3652_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun2_3652_instances.has_selection()) goto event_1743_69_end;
        for (ObjectIterator it(enemygatlinggun2_3652_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1743_69_end: ;
}
void Frames::event_func_14796()
{
    // event 1744_69
    {
        if (!(group_main_engine_1)) goto event_1744_69_end;
        enemygatlinggunbarrel_3651_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunbarrel_3651_instances.has_selection()) goto event_1744_69_end;
        for (ObjectIterator it(enemygatlinggunbarrel_3651_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1744_69_end: ;
}
void Frames::event_func_14797()
{
    // event 1745_69
    {
        if (!(group_main_engine_1)) goto event_1745_69_end;
        enemygatlinggunleft_3635_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (11))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunleft_3635_instances.has_selection()) goto event_1745_69_end;
        for (ObjectIterator it(enemygatlinggunleft_3635_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1745_69_end: ;
}
void Frames::event_func_14798()
{
    // event 1746_69
    {
        if (!(group_main_engine_1)) goto event_1746_69_end;
        enemygatlinggunright_3634_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (11))) { it.deselect(); continue; }
        }
        if (!enemygatlinggunright_3634_instances.has_selection()) goto event_1746_69_end;
        for (ObjectIterator it(enemygatlinggunright_3634_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1746_69_end: ;
}
void Frames::event_func_14799()
{
    // event 1750_69
    {
        if (!(group_main_engine_1)) goto event_1750_69_end;
        fdlooplayer02_3641_instances.clear_selection();
        for (ObjectIterator it(fdlooplayer02_3641_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%4);
        }
        fdlooplayer12_3636_instances.clear_selection();
        for (ObjectIterator it(fdlooplayer12_3636_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%4);
        }
    }
    event_1750_69_end: ;
}
void Frames::event_func_14800()
{
    // event 1751_69
    {
        if (!(group_main_engine_1)) goto event_1751_69_end;
        if (!(((Active*)get_instance(labdoorback_3500_instances))->alterables->flags.is_off(2))) goto event_1751_69_end;
        ((Active*)get_instance(labdoorback_3500_instances))->alterables->values.set(0, get_max(((Active*)get_instance(labdoorback_3500_instances))->alterables->values.get(0)-0.5, 0));
    }
    event_1751_69_end: ;
}
void Frames::event_func_14801()
{
    // event 1752_69
    {
        if (!(group_main_engine_1)) goto event_1752_69_end;
        if (!((((Active*)get_instance(labdoorback_3500_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) goto event_1752_69_end;
        if (!((((Active*)get_instance(labdoorback_3500_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) goto event_1752_69_end;
        if (!((((Active*)get_instance(labdoorback_3500_instances))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+80))) goto event_1752_69_end;
        if (!((((Active*)get_instance(labdoorback_3500_instances))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-80))) goto event_1752_69_end;
        ((Active*)get_instance(labdoorback_3500_instances))->alterables->flags.enable(2);
    }
    event_1752_69_end: ;
}
void Frames::event_func_14802()
{
    // event 1753_69
    {
        if (!(group_main_engine_1)) goto event_1753_69_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(labdoorback_3500_instances))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(labdoorback_3500_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(labdoorback_3500_instances))->get_y()+80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(labdoorback_3500_instances))->get_y()-80))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1753_69_end;
        ((Active*)get_instance(labdoorback_3500_instances))->alterables->flags.enable(2);
    }
    event_1753_69_end: ;
}
void Frames::event_func_14803()
{
    // event 1754_69
    {
        if (!(group_main_engine_1)) goto event_1754_69_end;
        if (!(((Active*)get_instance(labdoorback_3500_instances))->alterables->flags.is_on(2))) goto event_1754_69_end;
        ((Active*)get_instance(labdoorback_3500_instances))->alterables->values.set(0, get_min(((Active*)get_instance(labdoorback_3500_instances))->alterables->values.get(0)+0.5, 10));
    }
    event_1754_69_end: ;
}
void Frames::event_func_14804()
{
    // event 1755_69
    {
        if (!(group_main_engine_1)) goto event_1755_69_end;
        if (!(((Active*)get_instance(labdoorback_3500_instances))->alterables->flags.is_on(2))) goto event_1755_69_end;
        if (!((((Active*)get_instance(labdoorback_3500_instances))->alterables->values.get(0)) >= (10))) goto event_1755_69_end;
        ((Active*)get_instance(labdoorback_3500_instances))->alterables->flags.disable(2);
    }
    event_1755_69_end: ;
}
void Frames::event_func_14805()
{
    // event 1756_69
    {
        if (!(group_main_engine_1)) goto event_1756_69_end;
        if (!(((Active*)get_instance(labdoorfront_3507_instances))->alterables->flags.is_off(2))) goto event_1756_69_end;
        ((Active*)get_instance(labdoorfront_3507_instances))->alterables->values.set(0, get_max(((Active*)get_instance(labdoorfront_3507_instances))->alterables->values.get(0)-0.5, 0));
    }
    event_1756_69_end: ;
}
void Frames::event_func_14806()
{
    // event 1757_69
    {
        if (!(group_main_engine_1)) goto event_1757_69_end;
        if (!((((Active*)get_instance(labdoorfront_3507_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) goto event_1757_69_end;
        if (!((((Active*)get_instance(labdoorfront_3507_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) goto event_1757_69_end;
        if (!((((Active*)get_instance(labdoorfront_3507_instances))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+80))) goto event_1757_69_end;
        if (!((((Active*)get_instance(labdoorfront_3507_instances))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-80))) goto event_1757_69_end;
        ((Active*)get_instance(labdoorfront_3507_instances))->alterables->flags.enable(2);
    }
    event_1757_69_end: ;
}
void Frames::event_func_14807()
{
    // event 1758_69
    {
        if (!(group_main_engine_1)) goto event_1758_69_end;
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(labdoorfront_3507_instances))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(labdoorfront_3507_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(labdoorfront_3507_instances))->get_y()+80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(labdoorfront_3507_instances))->get_y()-80))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1758_69_end;
        ((Active*)get_instance(labdoorfront_3507_instances))->alterables->flags.enable(2);
    }
    event_1758_69_end: ;
}
void Frames::event_func_14808()
{
    // event 1759_69
    {
        if (!(group_main_engine_1)) goto event_1759_69_end;
        if (!(((Active*)get_instance(labdoorfront_3507_instances))->alterables->flags.is_on(2))) goto event_1759_69_end;
        ((Active*)get_instance(labdoorfront_3507_instances))->alterables->values.set(0, get_min(((Active*)get_instance(labdoorfront_3507_instances))->alterables->values.get(0)+0.5, 10));
        ((Active*)get_instance(labdoorfront_3507_instances))->alterables->flags.enable(1);
    }
    event_1759_69_end: ;
}
void Frames::event_func_14809()
{
    // event 1760_69
    {
        if (!(group_main_engine_1)) goto event_1760_69_end;
        if (!(((Active*)get_instance(labdoorfront_3507_instances))->alterables->flags.is_on(2))) goto event_1760_69_end;
        if (!((((Active*)get_instance(labdoorfront_3507_instances))->alterables->values.get(0)) >= (10))) goto event_1760_69_end;
        ((Active*)get_instance(labdoorfront_3507_instances))->alterables->flags.disable(2);
    }
    event_1760_69_end: ;
}
void Frames::event_func_14810()
{
    // event 1761_69
    {
        if (!(group_main_engine_1)) goto event_1761_69_end;
        if (!(((Active*)get_instance(labdoorfront_3507_instances))->alterables->flags.is_on(1))) goto event_1761_69_end;
        if (!((((Active*)get_instance(labdoorfront_3507_instances))->alterables->values.get(0)) == (1))) goto event_1761_69_end;
        if (not_always_1761_69 > loop_count) {
            not_always_1761_69 = loop_count + 2;
            goto event_1761_69_end;
        }
        not_always_1761_69 = loop_count + 2;
        media.play_id(SOUND_DOORMETAL_OPEN_281, -1, 1);
    }
    event_1761_69_end: ;
}
void Frames::event_func_14811()
{
    // event 1762_69
    {
        if (!(group_main_engine_1)) goto event_1762_69_end;
        if (!(((Active*)get_instance(labdoorfront_3507_instances))->alterables->flags.is_off(1))) goto event_1762_69_end;
        if (!((((Active*)get_instance(labdoorfront_3507_instances))->alterables->values.get(0)) == (2))) goto event_1762_69_end;
        if (not_always_1762_69 > loop_count) {
            not_always_1762_69 = loop_count + 2;
            goto event_1762_69_end;
        }
        not_always_1762_69 = loop_count + 2;
        media.play_id(SOUND_DOORMETAL_CLOSE_282, -1, 1);
    }
    event_1762_69_end: ;
}
void Frames::event_func_14812()
{
    // event 1783_69
    {
        if (!(group_main_engine_1)) goto event_1783_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1783_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1783_69_end;
        if (not_always_1783_69 > loop_count) {
            not_always_1783_69 = loop_count + 2;
            goto event_1783_69_end;
        }
        not_always_1783_69 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
    }
    event_1783_69_end: ;
}
void Frames::event_func_14813()
{
    // event 1793_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1793_69_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (64))) goto event_1793_69_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1793_69_end: ;
}
void Frames::event_func_14814()
{
    // event 1794_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1794_69_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (64))) goto event_1794_69_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1794_69_end: ;
}
void Frames::event_func_14815()
{
    // event 1795_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1795_69_end;
        if (!((global_values->get(3)) < (5))) goto event_1795_69_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(bosssatellite_2251_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height-150);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
    }
    event_1795_69_end: ;
}
void Frames::event_func_14816()
{
    // event 1796_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1796_69_end;
        if (!((global_values->get(3)) > (240))) goto event_1796_69_end;
        if (once_condition_1796_69) goto event_1796_69_end;
        once_condition_1796_69 = true;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_1796_69_end: ;
}
void Frames::event_func_14817()
{
    // event 1797_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1797_69_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-1, 880));
    }
    event_1797_69_end: ;
}
void Frames::event_func_14818()
{
    // event 1798_69
    bool or_result_1798_69 = false;
    bool or_temp_result_1798_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto or_event_1798_69_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1798_69_0_end;
        or_result_1798_69 = true;
        or_temp_result_1798_69_0 = true;
    }
    or_event_1798_69_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1798_69_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1798_69
    bool or_temp_result_1798_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto or_event_1798_69_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1798_69_1_end;
        or_result_1798_69 = true;
        or_temp_result_1798_69_1 = true;
    }
    or_event_1798_69_1_end: ;
    if (or_temp_result_1798_69_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1798_69
    bool or_temp_result_1798_69_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto or_event_1798_69_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1798_69_2_end;
        or_result_1798_69 = true;
        or_temp_result_1798_69_2 = true;
        or_event_1798_69_2_end: ;
        if (or_temp_result_1798_69_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1798_69) goto or_final_or_event_1798_69_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1798_69_0 || or_temp_result_1798_69_1 || or_temp_result_1798_69_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1798_69_2_end: ;
}
void Frames::event_func_14819()
{
    // event 1799_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1799_69_end;
        if (!((global_values->get(3)) > (120))) goto event_1799_69_end;
        if (once_condition_1799_69) goto event_1799_69_end;
        once_condition_1799_69 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1799_69_end: ;
}
void Frames::event_func_14820()
{
    // event 1800_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1800_69_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1800_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1800_69_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1800_69_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1800_69_end: ;
}
void Frames::event_func_14821()
{
    // event 1801_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1801_69_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1801_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1801_69_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1801_69_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
        }
    }
    event_1801_69_end: ;
}
void Frames::event_func_14822()
{
    // event 1802_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1802_69_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1802_69_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1802_69_end: ;
}
void Frames::event_func_14823()
{
    // event 1803_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1803_69_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1803_69_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1803_69_end;
        global_values->set(4, 13);
        next_frame = 15 + 0;    
    
    }
    event_1803_69_end: ;
}
void Frames::event_func_14824()
{
    // event 1805_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1805_69_end;
        bosssatellitetop_2246_instances.clear_selection();
        for (ObjectIterator it(bosssatellitetop_2246_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        bosssatellitethrusters_2250_instances.clear_selection();
        for (ObjectIterator it(bosssatellitethrusters_2250_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1805_69_end: ;
}
void Frames::event_func_14825()
{
    // event 1806_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1806_69_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1806_69_end;
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(bosssatellite_2251_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_front();
        }
    }
    event_1806_69_end: ;
}
