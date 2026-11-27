#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::col_1_28()
{
    event_func_6041();
}
void Frames::event_func_6042()
{
    // event 2022_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_2022_28_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(0))) goto event_2022_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2022_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2022_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        ((Active*)((Active*)col_instance_2))->advance_movement(+1);
        ((Active*)((Active*)col_instance_2))->set_scale(1);
    }
    event_2022_28_end: ;
}
void Frames::col_3_28()
{
    event_func_6042();
}
void Frames::event_func_6043()
{
    // event 2087_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_2087_28_end;
        FrameObject * single_instance_2087_28_0; single_instance_2087_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_2087_28_0 == NULL)
                single_instance_2087_28_0 = new_obj;
        }
        FrameObject * single_instance_2087_28_1; single_instance_2087_28_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_2087_28_1 == NULL)
                single_instance_2087_28_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_2087_28_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_2087_28_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_2087_28_0))->move_back();
        ((Active*)((Active*)single_instance_2087_28_1))->alterables->values.set(1, ((Active*)get_instance(minibossflame_1199_instances, default_active_instance))->alterables->values.get(4));
    }
    event_2087_28_end: ;
}
void Frames::col_6_28()
{
    event_func_6043();
}
void Frames::event_func_6044()
{
    // event 1918_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1918_28_end;
        if (!(((Active*)col_instance_2)->flags & VISIBLE)) goto event_1918_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) >= (1))) goto event_1918_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (180))) goto event_1918_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (360))) goto event_1918_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1918_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1918_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->advance_movement(+1);
            ((Active*)*it)->set_scale(1);
        }
    }
    event_1918_28_end: ;
}
void Frames::col_11_28()
{
    event_func_6044();
}
void Frames::event_func_6045()
{
    // event 1920_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1920_28_end;
        if (!(((Active*)col_instance_2)->flags & VISIBLE)) goto event_1920_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (180))) goto event_1920_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (360))) goto event_1920_28_end;
        FrameObject * single_instance_1920_28_0; single_instance_1920_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1920_28_0 == NULL)
                single_instance_1920_28_0 = new_obj;
        }
        FrameObject * single_instance_1920_28_1; single_instance_1920_28_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1920_28_1 == NULL)
                single_instance_1920_28_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1920_28_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1920_28_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1920_28_0))->move_back();
        ((Active*)((Active*)single_instance_1920_28_1))->alterables->values.set(1, ((Active*)get_instance(minibossflame_1199_instances, default_active_instance))->alterables->values.get(4));
    }
    event_1920_28_end: ;
}
void Frames::col_12_28()
{
    event_func_6045();
}
void Frames::event_func_6046()
{
    // event 1876_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1876_28_end;
        FrameObject * single_instance_1876_28_0; single_instance_1876_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1876_28_0 == NULL)
                single_instance_1876_28_0 = new_obj;
        }
        FrameObject * single_instance_1876_28_1; single_instance_1876_28_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1876_28_1 == NULL)
                single_instance_1876_28_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1876_28_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1876_28_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1876_28_0))->move_back();
        ((Active*)((Active*)single_instance_1876_28_1))->alterables->values.set(1, ((Active*)get_instance(minibossflame_1199_instances, default_active_instance))->alterables->values.get(4));
    }
    event_1876_28_end: ;
}
void Frames::col_14_28()
{
    event_func_6046();
}
void Frames::event_func_6047()
{
    // event 1580_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1580_28_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
    }
    event_1580_28_end: ;
}
void Frames::col_15_28()
{
    event_func_6047();
}
void Frames::event_func_6048()
{
    // event 1919_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1919_28_end;
        if (!(((Active*)col_instance_2)->flags & VISIBLE)) goto event_1919_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) != (1))) goto event_1919_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (180))) goto event_1919_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (360))) goto event_1919_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1919_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1919_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->advance_movement(+1);
            ((Active*)*it)->set_scale(1);
        }
    }
    event_1919_28_end: ;
}
void Frames::col_17_28()
{
    event_func_6048();
}
void Frames::event_func_6049()
{
    // event 2024_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_2024_28_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) > (10))) goto event_2024_28_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(0))) goto event_2024_28_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_2))->force_animation(7);
        ((Active*)((Active*)col_instance_2))->advance_movement(+1);
        ((Active*)((Active*)col_instance_2))->set_scale(1);
    }
    event_2024_28_end: ;
}
void Frames::col_21_28()
{
    event_func_6049();
}
void Frames::event_func_6050()
{
    // event 1984_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1984_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1984_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1984_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->advance_movement(+1);
            ((Active*)*it)->set_scale(1);
        }
    }
    event_1984_28_end: ;
}
void Frames::col_27_28()
{
    event_func_6050();
}
void Frames::event_func_6051()
{
    // event 2061_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cave_in_1)) goto event_2061_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (40))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_2061_28_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
    }
    event_2061_28_end: ;
}
void Frames::col_31_28()
{
    event_func_6051();
}
void Frames::event_func_6052()
{
    // event 2023_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_2023_28_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) > (10))) goto event_2023_28_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(0))) goto event_2023_28_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->advance_movement(+1);
        ((Active*)((Active*)col_instance_1))->set_scale(1);
    }
    event_2023_28_end: ;
}
void Frames::col_34_28()
{
    event_func_6052();
}
void Frames::test_collisions_28()
{
    test_collisions(playercharactersensor_383_instances, bosschomp_1526_instances, 1, 1, (EventFunction)&Frames::col_0_28);
    test_collisions(qualifier_19, bossslash_1527_instances, 2147483648, 1, (EventFunction)&Frames::col_1_28);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(playercharactersensor_383_instances, enemyrock_657_instances, 2, 1, (EventFunction)&Frames::col_3_28);
    test_collisions(qualifier_19, enemyiris_1183_instances, 536870912, 1, (EventFunction)&Frames::col_12_24);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, hazardshockwave_1524_instances, 268435456, 1, (EventFunction)&Frames::col_6_28);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 134217728, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 268435456, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, bossmantalitharm6_1599_instances, 4, 1, (EventFunction)&Frames::col_11_28);
    test_collisions(qualifier_19, bossmantalitharm6_1599_instances, 67108864, 2, (EventFunction)&Frames::col_12_28);
    test_collisions(playercharactersensor_383_instances, enemysentinelspike_1429_instances, 8, 1, (EventFunction)&Frames::col_9_27);
    test_collisions(qualifier_19, bosschomp_1526_instances, 33554432, 2, (EventFunction)&Frames::col_14_28);
    test_collisions(playerprojectile_320_instances, shieldinstashield_359_instances, 2, 1, (EventFunction)&Frames::col_15_28);
    test_collisions(qualifier_7, effectsdebris_319_instances, 16777216, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, bossmantalitharm3_1600_instances, 16, 1, (EventFunction)&Frames::col_17_28);
    test_collisions(qualifier_7, playerprojectile_320_instances, 8388608, 4, (EventFunction)&Frames::col_6_13);
    test_collisions(shieldearth_314_instances, enemysentinelspike_1429_instances, 1, 2, (EventFunction)&Frames::col_12_27);
    test_collisions(enemyiris_1183_instances, objectbluepot_1565_instances, 2, 1, (EventFunction)&Frames::col_25_24);
    test_collisions(qualifier_7, enemyrock_657_instances, 4194304, 2, (EventFunction)&Frames::col_21_28);
    test_collisions(qualifier_7, objectcrystal_279_instances, 2097152, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(enemylimiter_350_instances, enemyfirespitter_1385_instances, 1, 1, (EventFunction)&Frames::col_18_26);
    test_collisions(qualifier_19, bossmantalitharm3_1600_instances, 1048576, 2, (EventFunction)&Frames::col_12_28);
    test_collisions(qualifier_19, minibossflame_1199_instances, 524288, 1, (EventFunction)&Frames::col_20_26);
    test_collisions(qualifier_20, objectcrystal_279_instances, 67108864, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playercharactersensor_383_instances, bossslash_1527_instances, 32, 2, (EventFunction)&Frames::col_27_28);
    test_collisions(qualifier_19, enemysentinelspike_1429_instances, 262144, 4, (EventFunction)&Frames::col_23_27);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
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
    for (it1 = breakableruins_1184_instances.begin(); it1 != breakableruins_1184_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_31_28();
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
    for (it1 = enemyrock_657_instances.begin(); it1 != enemyrock_657_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_34_28();
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
}
void Frames::event_func_6053()
{
    // event 198_28
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_198_28_end;
        {
            loop_player01_interruption_control_running = true;
            int times = int(1);
            loop_player01_interruption_control_index = 0;
            while (loop_player01_interruption_control_index < times) {
                loop_player01_interruption_control_16();
                if (!loop_player01_interruption_control_running) break;
                loop_player01_interruption_control_index++;
            }
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_198_28_end: ;
}
void Frames::event_func_6054()
{
    // event 527_28
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_527_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_527_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_527_28_end;
        laddertop_357_instances.clear_selection();
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_frame());
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
    }
    event_527_28_end: ;
}
void Frames::event_func_6055()
{
    // event 528_28
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_528_28_end;
        playersensorbottombig_397_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_528_28_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_528_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (47))) goto event_528_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (28))) goto event_528_28_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_528_28_end: ;
}
void Frames::event_func_6056()
{
    // event 530_28
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_1 && group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1)) goto event_530_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (7))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_530_28_end;
        laddertop_357_instances.clear_selection();
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!laddertop_357_instances.has_selection()) goto event_530_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(laddertop_357_instances, default_active_instance))->get_y()-36);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(7, 24);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_530_28_end: ;
}
void Frames::event_func_6057()
{
    // event 1314_28
    {
        if (!(group_main_engine_1)) goto event_1314_28_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1314_28_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_1314_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1314_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1314_28_end;
        playersensorbottombig_397_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_1314_28_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (4))) goto event_1314_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (46))) goto event_1314_28_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) < (4))) goto event_1314_28_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 25);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(laddertop_357_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(laddertop_357_instances, default_active_instance))->get_y()+8);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 4);
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_1314_28_end: ;
}
void Frames::event_func_6058()
{
    // event 1369_28
    {
        if (!(group_main_engine_1)) goto event_1369_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(25)) == (1))) goto event_1369_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1369_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1369_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(13)) >= (30))) goto event_1369_28_end;
        player_389_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(player_389_instances, qualifier_20)) goto event_1369_28_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1369_28_end;
        media.play_id(SOUND_COMMON_EXPLODE7B_2_316, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 20);
        }
    }
    event_1369_28_end: ;
}
void Frames::event_func_6059()
{
    // event 1393_28
    {
        if (!(group_main_engine_1)) goto event_1393_28_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1393_28_end;
        if (not_always_1393_28 > loop_count) {
            not_always_1393_28 = loop_count + 2;
            goto event_1393_28_end;
        }
        not_always_1393_28 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1393_28_end: ;
}
void Frames::event_func_6060()
{
    // event 1394_28
    {
        if (!(group_main_engine_1)) goto event_1394_28_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1394_28_end;
        if (not_always_1394_28 > loop_count) {
            not_always_1394_28 = loop_count + 2;
            goto event_1394_28_end;
        }
        not_always_1394_28 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1394_28_end: ;
}
void Frames::event_func_6061()
{
    // event 1395_28
    {
        if (!(group_main_engine_1)) goto event_1395_28_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1395_28_end;
        if (not_always_1395_28 > loop_count) {
            not_always_1395_28 = loop_count + 2;
            goto event_1395_28_end;
        }
        not_always_1395_28 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1395_28_end: ;
}
void Frames::event_func_6062()
{
    // event 1396_28
    {
        if (!(group_main_engine_1)) goto event_1396_28_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1396_28_end;
        if (not_always_1396_28 > loop_count) {
            not_always_1396_28 = loop_count + 2;
            goto event_1396_28_end;
        }
        not_always_1396_28 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1396_28_end: ;
}
void Frames::event_func_6063()
{
    // event 1397_28
    {
        if (!(group_main_engine_1)) goto event_1397_28_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1397_28_end;
        if (not_always_1397_28 > loop_count) {
            not_always_1397_28 = loop_count + 2;
            goto event_1397_28_end;
        }
        not_always_1397_28 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1397_28_end: ;
}
void Frames::event_func_6064()
{
    // event 1398_28
    {
        if (!(group_main_engine_1)) goto event_1398_28_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1398_28_end;
        if (not_always_1398_28 > loop_count) {
            not_always_1398_28 = loop_count + 2;
            goto event_1398_28_end;
        }
        not_always_1398_28 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1398_28_end: ;
}
void Frames::event_func_6065()
{
    // event 1399_28
    {
        if (!(group_main_engine_1)) goto event_1399_28_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1399_28_end;
        if (not_always_1399_28 > loop_count) {
            not_always_1399_28 = loop_count + 2;
            goto event_1399_28_end;
        }
        not_always_1399_28 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1399_28_end: ;
}
void Frames::event_func_6066()
{
    // event 1413_28
    {
        if (!(group_main_engine_1)) goto event_1413_28_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1413_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(qualifier_23, default_active_instance))->alterables->values.get(14));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+28);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1413_28_end: ;
}
void Frames::event_func_6067()
{
    // event 1418_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1418_28_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_23.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1418_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1418_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1418_28_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1418_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(qualifier_23, default_active_instance))->get_x());
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
    }
    event_1418_28_end: ;
}
void Frames::event_func_6068()
{
    // event 1419_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1419_28_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_23.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1419_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1419_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1419_28_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1419_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 41);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(qualifier_23, default_active_instance))->get_y()+32);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(qualifier_23, default_active_instance))->get_x());
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1419_28_end: ;
}
void Frames::event_func_6069()
{
    // event 1420_28
    {
        if (!(group_main_engine_1)) goto event_1420_28_end;
        ((Active*)get_instance(switchpressureplate_752_instances))->set_visible(true);
        ((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(switchwallplate_814_instances))->set_visible(true);
        ((Active*)get_instance(switchwallplate2_1421_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(switchwallplate2_1421_instances))->set_visible(true);
    }
    event_1420_28_end: ;
}
void Frames::event_func_6070()
{
    // event 1421_28
    bool or_result_1421_28 = false;
    bool or_temp_result_1421_28_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1421_28_0_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate2_1421_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate2_1421_instances)) goto or_event_1421_28_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1421_28_0_end;
        or_result_1421_28 = true;
        or_temp_result_1421_28_0 = true;
    }
    or_event_1421_28_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    switchwallplate2_1421_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1421_28_0) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        switchwallplate2_1421_instances.save_selection();
    }
    // event 1421_28
    bool or_temp_result_1421_28_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1421_28_1_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate2_1421_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate2_1421_instances)) goto or_event_1421_28_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1421_28_1_end;
        or_result_1421_28 = true;
        or_temp_result_1421_28_1 = true;
    }
    or_event_1421_28_1_end: ;
    if (or_temp_result_1421_28_1) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        switchwallplate2_1421_instances.save_selection();
    }
    // event 1421_28
    bool or_temp_result_1421_28_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1421_28_2_end;
        playersensorrightbig_393_instances.clear_selection();
        switchwallplate2_1421_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, switchwallplate2_1421_instances)) goto or_event_1421_28_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1421_28_2_end;
        or_result_1421_28 = true;
        or_temp_result_1421_28_2 = true;
        or_event_1421_28_2_end: ;
        if (or_temp_result_1421_28_2) {
            playersensorrightbig_393_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            switchwallplate2_1421_instances.save_selection();
        }
        if (!or_result_1421_28) goto or_final_or_event_1421_28_2_end;
        switchwallplate2_1421_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        if (or_temp_result_1421_28_0 || or_temp_result_1421_28_1 || or_temp_result_1421_28_2) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1421_28_0 || or_temp_result_1421_28_1 || or_temp_result_1421_28_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1421_28_0 || or_temp_result_1421_28_1 || or_temp_result_1421_28_2) {
            switchwallplate2_1421_instances.restore_selection();
        }
        for (ObjectIterator it(switchwallplate2_1421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1421_28_2_end: ;
}
void Frames::event_func_6071()
{
    // event 1422_28
    {
        if (!(group_main_engine_1)) goto event_1422_28_end;
        if (!(((Active*)get_instance(switchwallplate2_1421_instances))->alterables->flags.is_on(0))) goto event_1422_28_end;
        if (not_always_1422_28 > loop_count) {
            not_always_1422_28 = loop_count + 2;
            goto event_1422_28_end;
        }
        not_always_1422_28 = loop_count + 2;
        media.play_id(SOUND_COMMON_SWITCH_2_49, -1, 1);
        ((Active*)get_instance(switchwallplate2_1421_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(switchwallplate2_1421_instances))->alterables->values.set(3, 0);
    }
    event_1422_28_end: ;
}
void Frames::event_func_6072()
{
    // event 1423_28
    bool or_result_1423_28 = false;
    bool or_temp_result_1423_28_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1423_28_0_end;
        playersensorleftbig_391_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchwallplate_814_instances)) goto or_event_1423_28_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (11))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1423_28_0_end;
        or_result_1423_28 = true;
        or_temp_result_1423_28_0 = true;
    }
    or_event_1423_28_0_end: ;
    switchwallplate_814_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1423_28_0) {
        switchwallplate_814_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1423_28
    bool or_temp_result_1423_28_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1423_28_1_end;
        playersensorleftbig_391_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchwallplate_814_instances)) goto or_event_1423_28_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1423_28_1_end;
        or_result_1423_28 = true;
        or_temp_result_1423_28_1 = true;
    }
    or_event_1423_28_1_end: ;
    if (or_temp_result_1423_28_1) {
        switchwallplate_814_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1423_28
    bool or_temp_result_1423_28_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1423_28_2_end;
        playersensorleftbig_391_instances.clear_selection();
        switchwallplate_814_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, switchwallplate_814_instances)) goto or_event_1423_28_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1423_28_2_end;
        or_result_1423_28 = true;
        or_temp_result_1423_28_2 = true;
        or_event_1423_28_2_end: ;
        if (or_temp_result_1423_28_2) {
            switchwallplate_814_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_1423_28) goto or_final_or_event_1423_28_2_end;
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        switchwallplate_814_instances.empty_selection();
        if (or_temp_result_1423_28_0 || or_temp_result_1423_28_1 || or_temp_result_1423_28_2) {
            switchwallplate_814_instances.restore_selection();
        }
        if (or_temp_result_1423_28_0 || or_temp_result_1423_28_1 || or_temp_result_1423_28_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1423_28_0 || or_temp_result_1423_28_1 || or_temp_result_1423_28_2) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1423_28_2_end: ;
}
void Frames::event_func_6073()
{
    // event 1427_28
    {
        if (!(group_main_engine_1)) goto event_1427_28_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_1427_28_end;
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+2, ((Active*)*it)->alterables->values.get(0)+8));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+2);
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_14();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
    }
    event_1427_28_end: ;
}
void Frames::event_func_6074()
{
    // event 1429_28
    bool or_result_1429_28 = false;
    bool or_temp_result_1429_28_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1429_28_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1429_28_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1429_28_0_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1429_28_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1429_28_0_end;
        or_result_1429_28 = true;
        or_temp_result_1429_28_0 = true;
    }
    or_event_1429_28_0_end: ;
    player_389_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    objectchair_522_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1429_28_0) {
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
        player_389_instances.save_selection();
        objectchair_522_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1429_28
    bool or_temp_result_1429_28_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1429_28_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1429_28_1_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1429_28_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1429_28_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1429_28_1_end;
        or_result_1429_28 = true;
        or_temp_result_1429_28_1 = true;
        or_event_1429_28_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_1429_28_1) {
            playermovementvalues_245_instances.save_selection();
            playerinput_19_instances.save_selection();
            player_389_instances.save_selection();
            objectchair_522_instances.save_selection();
        }
        if (!or_result_1429_28) goto or_final_or_event_1429_28_1_end;
        player_389_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        objectchair_522_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        if (or_temp_result_1429_28_0 || or_temp_result_1429_28_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1429_28_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1429_28_0 || or_temp_result_1429_28_1) {
            objectchair_522_instances.restore_selection();
        }
        if (or_temp_result_1429_28_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1429_28_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1429_28_0 || or_temp_result_1429_28_1) {
            player_389_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 39);
        }
    }
    or_final_or_event_1429_28_1_end: ;
}
void Frames::event_func_6075()
{
    // event 1441_28
    {
        if (!(group_main_engine_1)) goto event_1441_28_end;
        objectbluepot_1565_instances.clear_selection();
        for (ObjectIterator it(objectbluepot_1565_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (5))) { it.deselect(); continue; }
        }
        if (!objectbluepot_1565_instances.has_selection()) goto event_1441_28_end;
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_POTBREAK_2_213, -1, 1);
        FrameObject * single_instance_1441_28_0; single_instance_1441_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbluepot_1565_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1441_28_0 == NULL)
                    single_instance_1441_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1441_28_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1441_28_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1441_28_0))->set_direction(8);
        {
            loop_pot_running = true;
            int times = int(5);
            loop_pot_index = 0;
            while (loop_pot_index < times) {
                loop_pot_28();
                if (!loop_pot_running) break;
                loop_pot_index++;
            }
        }
    }
    event_1441_28_end: ;
}
void Frames::event_func_6076()
{
    // event 1443_28
    {
        if (!(group_main_engine_1)) goto event_1443_28_end;
        objectbluepot_1565_instances.clear_selection();
        for (ObjectIterator it(objectbluepot_1565_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (5))) { it.deselect(); continue; }
        }
        if (!objectbluepot_1565_instances.has_selection()) goto event_1443_28_end;
        for (ObjectIterator it(objectbluepot_1565_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1443_28_end: ;
}
void Frames::event_func_6077()
{
    // event 1480_28
    {
        if (!(group_main_engine_1)) goto event_1480_28_end;
        enemysentinel_1496_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        if (!check_overlap(enemysentinel_1496_instances, gimmickmovingpillar1_1407_instances)) goto event_1480_28_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(gimmickmovingpillar1_1407_instances))->get_box_index(1)-10))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1480_28_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 4);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
    }
    event_1480_28_end: ;
}
void Frames::event_func_6078()
{
    // event 1522_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1522_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1522_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (14))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1522_28_end;
        if (once_condition_1522_28) goto event_1522_28_end;
        once_condition_1522_28 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_howitsdone_ogg_144, 28-1);
    }
    event_1522_28_end: ;
}
void Frames::event_func_6079()
{
    // event 1523_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1523_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1523_28_end;
        if (once_condition_1523_28) goto event_1523_28_end;
        once_condition_1523_28 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_carol_feelmypower_ogg_145, 28-1);
    }
    event_1523_28_end: ;
}
void Frames::event_func_6080()
{
    // event 1533_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1533_28_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(0)) == (2))) goto event_1533_28_end;
        if (not_always_1533_28 > loop_count) {
            not_always_1533_28 = loop_count + 2;
            goto event_1533_28_end;
        }
        not_always_1533_28 = loop_count + 2;
        media.play_id(SOUND_COMMON_RESULT_16, -1, 1);
        ((Active*)get_instance(levelcardactclear4_846_instances))->force_animation(7);
        set_score(manager.score+((Counter*)get_instance(totalcrystals_854_instances))->value);
        media.stop_sample(SOUND_UI_SCORETALLY_15);
    }
    event_1533_28_end: ;
}
void Frames::event_func_6081()
{
    // event 1536_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1536_28_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1536_28_end;
        ((Active*)get_instance(levelcardactclear4_846_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear3_849_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear2_848_instances))->set_visible(false);
        ((Active*)get_instance(levelcardactclear1_847_instances))->set_visible(false);
            group_main_engine_level_specific_methods_stage_clear_1 = false;
    
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        ((Counter*)get_instance(levelcardbonus1_850_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus2_851_instances))->set_visible(false);
        ((Counter*)get_instance(levelcardbonus3_852_instances))->set_visible(false);
        ((Counter*)get_instance(totalbonus_853_instances))->set_visible(false);
        ((Counter*)get_instance(totalcrystals_854_instances))->set_visible(false);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        if (!group_main_engine_level_specific_methods_bosses_cave_in_1) {
            group_main_engine_level_specific_methods_bosses_cave_in_1 = true;
        }
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
    }
    event_1536_28_end: ;
}
void Frames::event_func_6082()
{
    // event 1538_28
    {
        if (!(group_main_engine_1)) goto event_1538_28_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1538_28_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1538_28_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(4)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1538_28_end: ;
}
void Frames::event_func_6083()
{
    // event 1542_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1542_28_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1542_28_end;
        if (!((global_values->get(4)) == (-2))) goto event_1542_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
    }
    event_1542_28_end: ;
}
void Frames::event_func_6084()
{
    // event 1543_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1543_28_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1543_28_end;
        if (!((global_values->get(4)) == (-3))) goto event_1543_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 704);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), 704-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)));
    }
    event_1543_28_end: ;
}
void Frames::event_func_6085()
{
    // event 1544_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1544_28_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1544_28_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1544_28_end: ;
}
void Frames::event_func_6086()
{
    // event 1545_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1545_28_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1545_28_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro1_464_instances.clear_selection();
        for (ObjectIterator it(levelcardintro1_464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        global_values->set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_level_specific_methods_local_transitions_1) {
            group_main_engine_level_specific_methods_local_transitions_1 = true;
        }
    }
    event_1545_28_end: ;
}
void Frames::event_func_6087()
{
    // event 1546_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1546_28_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1546_28_end;
        if (!((((Active*)get_single(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1546_28_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1546_28_end: ;
}
void Frames::event_func_6088()
{
    // event 1547_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1547_28_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1547_28_end;
        if (!((((Active*)get_single(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1547_28_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1547_28_end: ;
}
void Frames::event_func_6089()
{
    // event 1548_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1548_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1548_28_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyfirespitterbase_1280_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitterbase_1280_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npchookline_1601_instances))->set_y_scale(20);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(2, ((Active*)get_instance(kingdomstone_1587_instances))->get_y());
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(shrine2_1391_instances))->get_x()-100);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(shrine2_1391_instances))->get_y());
        {
            loop_stop_player_running = true;
            int times = int(1);
            loop_stop_player_index = 0;
            while (loop_stop_player_index < times) {
                loop_stop_player_13();
                if (!loop_stop_player_running) break;
                loop_stop_player_index++;
            }
        }
    }
    event_1548_28_end: ;
}
void Frames::event_func_6090()
{
    // event 1549_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1549_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1549_28_end;
        if (!((global_values->get(1)) == (0))) goto event_1549_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(shrine2_1391_instances))->get_x()-400);
            ((Active*)*it)->set_y(938);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1549_28_end: ;
}
void Frames::event_func_6091()
{
    // event 1550_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1550_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1550_28_end;
        if (!((global_values->get(1)) != (0))) goto event_1550_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(shrine2_1391_instances))->get_x()-360);
            ((Active*)*it)->set_y(938);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1550_28_end: ;
}
void Frames::event_func_6092()
{
    // event 1551_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1551_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1551_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1551_28_end: ;
}
void Frames::event_func_6093()
{
    // event 1552_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1552_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1552_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (30))) goto event_1552_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 4);
    }
    event_1552_28_end: ;
}
void Frames::event_func_6094()
{
    // event 1553_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1553_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1553_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (80))) goto event_1553_28_end;
        if (!((global_values->get(1)) == (0))) goto event_1553_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(938);
            ((Active*)*it)->set_x(((Active*)get_instance(shrine2_1391_instances))->get_x()-550);
        }
    }
    event_1553_28_end: ;
}
void Frames::event_func_6095()
{
    // event 1554_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1554_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1554_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (80))) goto event_1554_28_end;
        if (!((global_values->get(1)) != (0))) goto event_1554_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(938);
            ((Active*)*it)->set_x(((Active*)get_instance(shrine2_1391_instances))->get_x()-570);
        }
    }
    event_1554_28_end: ;
}
void Frames::event_func_6096()
{
    // event 1555_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1555_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1555_28_end;
        if (!((global_values->get(1)) == (0))) goto event_1555_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1555_28_end: ;
}
void Frames::event_func_6097()
{
    // event 1556_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1556_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1556_28_end;
        if (!((global_values->get(1)) != (0))) goto event_1556_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1556_28_end: ;
}
void Frames::event_func_6098()
{
    // event 1557_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1557_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1557_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (35))) goto event_1557_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1557_28_end: ;
}
void Frames::event_func_6099()
{
    // event 1558_28
    bool or_result_1558_28 = false;
    bool or_temp_result_1558_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1558_28_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1558_28_0_end;
        or_result_1558_28 = true;
        or_temp_result_1558_28_0 = true;
    }
    or_event_1558_28_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1558_28_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1558_28
    bool or_temp_result_1558_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1558_28_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1558_28_1_end;
        or_result_1558_28 = true;
        or_temp_result_1558_28_1 = true;
    }
    or_event_1558_28_1_end: ;
    if (or_temp_result_1558_28_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1558_28
    bool or_temp_result_1558_28_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1558_28_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1558_28_2_end;
        or_result_1558_28 = true;
        or_temp_result_1558_28_2 = true;
        or_event_1558_28_2_end: ;
        if (or_temp_result_1558_28_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1558_28) goto or_final_or_event_1558_28_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1558_28_0 || or_temp_result_1558_28_1 || or_temp_result_1558_28_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1558_28_2_end: ;
}
void Frames::event_func_6100()
{
    // event 1559_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1559_28_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1559_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1559_28_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1559_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_visible(false);
    }
    event_1559_28_end: ;
}
void Frames::event_func_6101()
{
    // event 1560_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1560_28_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1560_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1560_28_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1560_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(placeholdercharacter_1588_instances));
            if (parent == NULL) goto pos_end_1560_28_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1560_28_0: ;
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1560_28_end: ;
}
void Frames::event_func_6102()
{
    // event 1561_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1561_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_1561_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 5);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1561_28_end: ;
}
void Frames::event_func_6103()
{
    // event 1562_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1562_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_1562_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (40))) goto event_1562_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_1562_28_end: ;
}
void Frames::event_func_6104()
{
    // event 1563_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1563_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (5))) goto event_1563_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1563_28_end: ;
}
void Frames::event_func_6105()
{
    // event 1564_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1564_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (5))) goto event_1564_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (35))) goto event_1564_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1564_28_end: ;
}
void Frames::event_func_6106()
{
    // event 1565_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1565_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (5))) goto event_1565_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (15))) goto event_1565_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1565_28_end: ;
}
void Frames::event_func_6107()
{
    // event 1566_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1566_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (5))) goto event_1566_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (35))) goto event_1566_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(12);
        }
    }
    event_1566_28_end: ;
}
void Frames::event_func_6108()
{
    // event 1567_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1567_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (5))) goto event_1567_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (45))) goto event_1567_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1567_28_end: ;
}
void Frames::event_func_6109()
{
    // event 1568_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1568_28_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1568_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (2))) goto event_1568_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (6))) goto event_1568_28_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1568_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_visible(false);
    }
    event_1568_28_end: ;
}
void Frames::event_func_6110()
{
    // event 1569_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1569_28_end;
        if (!((global_values->get(27)) == (0))) goto event_1569_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (2))) goto event_1569_28_end;
        if (!((media.get_channel_position(-1 +20)) > (1400))) goto event_1569_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 9);
    }
    event_1569_28_end: ;
}
void Frames::event_func_6111()
{
    // event 1570_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1570_28_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1570_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1570_28_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1570_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(1, 3);
            ((Active*)*it)->alterables->values.set(24, -8);
        }
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1570_28_end: ;
}
void Frames::event_func_6112()
{
    // event 1571_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1571_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1571_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24), ((Active*)get_instance(placeholdercharacter_1588_instances))->get_y()));
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.4, 15));
        }
    }
    event_1571_28_end: ;
}
void Frames::event_func_6113()
{
    // event 1572_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1572_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1572_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (60))) goto event_1572_28_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (0))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1572_28_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
    }
    event_1572_28_end: ;
}
void Frames::event_func_6114()
{
    // event 1573_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1573_28_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1573_28_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 1);
        }
    }
    event_1573_28_end: ;
}
void Frames::event_func_6115()
{
    // event 1574_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1574_28_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (3))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1574_28_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1574_28_end: ;
}
void Frames::event_func_6116()
{
    // event 1575_28
    bool or_result_1575_28 = false;
    bool or_temp_result_1575_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1575_28_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1575_28_0_end;
        or_result_1575_28 = true;
        or_temp_result_1575_28_0 = true;
    }
    or_event_1575_28_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1575_28_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1575_28
    bool or_temp_result_1575_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1575_28_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(21))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1575_28_1_end;
        or_result_1575_28 = true;
        or_temp_result_1575_28_1 = true;
        or_event_1575_28_1_end: ;
        if (or_temp_result_1575_28_1) {
            playerskinspade_419_instances.save_selection();
        }
        if (!or_result_1575_28) goto or_final_or_event_1575_28_1_end;
        playerskinspade_419_instances.empty_selection();
        if (or_temp_result_1575_28_0 || or_temp_result_1575_28_1) {
            playerskinspade_419_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1575_28_0; single_instance_1575_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinspade_419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1575_28_0 == NULL)
                    single_instance_1575_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1575_28_0))->alterables->values.set(0, ((Active*)single_instance_1575_28_0)->get_x());
        ((Active*)((Active*)single_instance_1575_28_0))->alterables->values.set(1, ((Active*)single_instance_1575_28_0)->get_y());
        ((Active*)((Active*)single_instance_1575_28_0))->alterables->values.set(2, -8);
        ((Active*)((Active*)single_instance_1575_28_0))->alterables->values.set(3, 8);
        ((Active*)((Active*)single_instance_1575_28_0))->set_layer(((Active*)get_single(playerskinspade_419_instances, default_active_instance))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1575_28_0))->alterables->values.set(6, 1);
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 0.25);
        }
        media.play_id(SOUND_SPADE_DUALCRASH_447, -1, 1);
    }
    or_final_or_event_1575_28_1_end: ;
}
void Frames::event_func_6117()
{
    // event 1576_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1576_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1576_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (14))) goto event_1576_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (30))) goto event_1576_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1576_28_end: ;
}
void Frames::event_func_6118()
{
    // event 1577_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1577_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1577_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (30))) goto event_1577_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
            ((Active*)*it)->restore_frame();
        }
        media.play_id(SOUND_CAROL_KICK3_141, -1, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(50);
        }
    }
    event_1577_28_end: ;
}
void Frames::event_func_6119()
{
    // event 1578_28
    bool or_result_1578_28 = false;
    bool or_temp_result_1578_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1578_28_0_end;
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!kingdomstone_1587_instances.has_selection()) goto or_event_1578_28_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1578_28_0_end;
        or_result_1578_28 = true;
        or_temp_result_1578_28_0 = true;
    }
    or_event_1578_28_0_end: ;
    kingdomstone_1587_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1578_28_0) {
        kingdomstone_1587_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1578_28
    bool or_temp_result_1578_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1578_28_1_end;
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!kingdomstone_1587_instances.has_selection()) goto or_event_1578_28_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1578_28_1_end;
        or_result_1578_28 = true;
        or_temp_result_1578_28_1 = true;
    }
    or_event_1578_28_1_end: ;
    if (or_temp_result_1578_28_1) {
        kingdomstone_1587_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1578_28
    bool or_temp_result_1578_28_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto or_event_1578_28_2_end;
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!kingdomstone_1587_instances.has_selection()) goto or_event_1578_28_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1578_28_2_end;
        or_result_1578_28 = true;
        or_temp_result_1578_28_2 = true;
        or_event_1578_28_2_end: ;
        if (or_temp_result_1578_28_2) {
            kingdomstone_1587_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1578_28) goto or_final_or_event_1578_28_2_end;
        kingdomstone_1587_instances.empty_selection();
        playerskincarol_445_instances.empty_selection();
        if (or_temp_result_1578_28_0 || or_temp_result_1578_28_1 || or_temp_result_1578_28_2) {
            kingdomstone_1587_instances.restore_selection();
        }
        if (or_temp_result_1578_28_0 || or_temp_result_1578_28_1 || or_temp_result_1578_28_2) {
            playerskincarol_445_instances.restore_selection();
        }
        media.play_id(SOUND_ATTACK2_137, -1, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        FrameObject * single_instance_1578_28_0; single_instance_1578_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskincarol_445_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1578_28_0 == NULL)
                    single_instance_1578_28_0 = new_obj;
            }
        }
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        ((Active*)((Active*)single_instance_1578_28_0))->set_direction(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_direction()+2+((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1578_28_0))->force_speed(100);
        ((Active*)single_instance_1578_28_0)->move_back(((Active*)get_single(playerskincarol_445_instances)));
        ((Active*)((Active*)single_instance_1578_28_0))->alterables->values.set(0, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%3);
        }
        ((Active*)((Active*)single_instance_1578_28_0))->alterables->flags.enable(4);
    }
    or_final_or_event_1578_28_2_end: ;
}
void Frames::event_func_6120()
{
    // event 1579_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1579_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1579_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (7))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1579_28_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1579_28_end: ;
}
void Frames::event_func_6121()
{
    // event 1581_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1581_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1581_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (40))) goto event_1581_28_end;
        if (not_always_1581_28 > loop_count) {
            not_always_1581_28 = loop_count + 2;
            goto event_1581_28_end;
        }
        not_always_1581_28 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
            ((Active*)*it)->restore_frame();
        }
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 1);
        }
    }
    event_1581_28_end: ;
}
void Frames::event_func_6122()
{
    // event 1582_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1582_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (7))) goto event_1582_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1582_28_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.sub(0, 0.25);
    }
    event_1582_28_end: ;
}
void Frames::event_func_6123()
{
    // event 1583_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1583_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (7))) goto event_1583_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1583_28_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 600);
        }
    }
    event_1583_28_end: ;
}
void Frames::event_func_6124()
{
    // event 1584_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1584_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (7))) goto event_1584_28_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (80))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1584_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1584_28_end: ;
}
void Frames::event_func_6125()
{
    // event 1585_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1585_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1585_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (60))) goto event_1585_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1585_28_end: ;
}
void Frames::event_func_6126()
{
    // event 1586_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1586_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1586_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (66))) goto event_1586_28_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1586_28_end: ;
}
void Frames::event_func_6127()
{
    // event 1587_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1587_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1587_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (60))) goto event_1587_28_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(placeholdercharacter_1588_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1587_28_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(9);
        }
    }
    event_1587_28_end: ;
}
void Frames::event_func_6128()
{
    // event 1588_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1588_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (7))) goto event_1588_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (60))) goto event_1588_28_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(placeholdercharacter_1588_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1588_28_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1588_28_end: ;
}
