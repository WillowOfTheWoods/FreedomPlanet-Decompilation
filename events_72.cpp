#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_5910()
{
    // event 1656_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1656_27_end;
        if (((Active*)col_instance_1)->is_near_border(-50)) goto event_1656_27_end;
        FrameObject * single_instance_1656_27_0; single_instance_1656_27_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1656_27_0 == NULL)
                single_instance_1656_27_0 = new_obj;
        }
        FrameObject * single_instance_1656_27_1; single_instance_1656_27_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1656_27_1 == NULL)
                single_instance_1656_27_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1656_27_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1656_27_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1656_27_0))->move_back();
        FrameObject * single_instance_1656_27_2; single_instance_1656_27_2 = NULL;
        // select single: true false false
        enemysentinelspike_1429_instances.clear_selection();
        for (ObjectIterator p_it(enemysentinelspike_1429_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1656_27_2 == NULL)
                    single_instance_1656_27_2 = new_obj;
            }
        }
        for (ObjectIterator it(enemysentinelspike_1429_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1656_27_end: ;
}
void Frames::col_6_27()
{
    event_func_5910();
}
void Frames::event_func_5911()
{
    // event 1604_27
    {
        if (!(group_main_engine_1)) goto event_1604_27_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1604_27_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1604_27_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (5))) goto event_1604_27_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1604_27_end: ;
}
void Frames::col_9_27()
{
    event_func_5911();
}
void Frames::event_func_5912()
{
    // event 1605_27
    {
        if (!(group_main_engine_1)) goto event_1605_27_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1605_27_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1605_27_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        ((Active*)((Active*)col_instance_2))->get_movement()->set_speed(70);
        media.play_id(SOUND_ITEM_SHIELDREFLECT_101, -1, 1);
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(1);
        ((Active*)((Active*)col_instance_2))->get_movement()->set_deceleration(0);
        ((Active*)((Active*)col_instance_2))->set_direction(((Active*)col_instance_2)->get_direction()+16);
        ((Active*)((Active*)col_instance_1))->force_animation(0);
        ((Active*)((Active*)col_instance_1))->force_animation(7);
        ((Active*)((Active*)col_instance_1))->force_frame(2);
        ((Active*)((Active*)col_instance_1))->restore_frame();
    }
    event_1605_27_end: ;
}
void Frames::col_12_27()
{
    event_func_5912();
}
void Frames::event_func_5913()
{
    // event 1655_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1655_27_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) == (0))) goto event_1655_27_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto event_1655_27_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto event_1655_27_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 1);
        }
        guilifebasemeter_125_instances.clear_selection();
        for (ObjectIterator it(guilifebasemeter_125_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 5);
        }
    }
    event_1655_27_end: ;
}
void Frames::col_19_27()
{
    event_func_5913();
}
void Frames::event_func_5914()
{
    // event 1606_27
    {
        if (!(group_main_engine_1)) goto event_1606_27_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1606_27_end;
        FrameObject * single_instance_1606_27_0; single_instance_1606_27_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1606_27_0 == NULL)
                single_instance_1606_27_0 = new_obj;
        }
        FrameObject * single_instance_1606_27_1; single_instance_1606_27_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1606_27_1 == NULL)
                single_instance_1606_27_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1606_27_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1606_27_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1606_27_0))->move_back();
        FrameObject * single_instance_1606_27_2; single_instance_1606_27_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1606_27_2 == NULL)
                single_instance_1606_27_2 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(2);
    }
    event_1606_27_end: ;
}
void Frames::col_23_27()
{
    event_func_5914();
}
void Frames::test_collisions_27()
{
    test_collisions(playercharactersensor_383_instances, enemyrock_657_instances, 1, 1, (EventFunction)&Frames::col_4_16);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_19, enemyiris_1183_instances, 1073741824, 1, (EventFunction)&Frames::col_12_24);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playercharactersensor_383_instances, enemyspark_1101_instances, 2, 1, (EventFunction)&Frames::col_4_24);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_19, minibossgansekicap_1491_instances, 536870912, 1, (EventFunction)&Frames::col_6_27);
    test_collisions(qualifier_7, playerreflect_447_instances, 268435456, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemysentinelspike_1429_instances, 4, 1, (EventFunction)&Frames::col_9_27);
    test_collisions(qualifier_7, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions_save(playerreflect_447_instances, enemyfiresprite_1095_instances, 4, 1, (EventFunction)&Frames::col_15_24);
    test_collisions(shieldearth_314_instances, enemysentinelspike_1429_instances, 1, 2, (EventFunction)&Frames::col_12_27);
    test_collisions(playerreflect_447_instances, enemyrock_657_instances, 8, 2, (EventFunction)&Frames::col_14_24);
    test_collisions(qualifier_7, enemyrock_657_instances, 67108864, 4, (EventFunction)&Frames::col_5_16);
    test_collisions(enemylimiter_350_instances, enemyslug_1182_instances, 1, 1, (EventFunction)&Frames::col_16_24);
    test_collisions(qualifier_7, objectcrystal_279_instances, 33554432, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(enemylimiter_350_instances, enemyfirespitter_1385_instances, 2, 1, (EventFunction)&Frames::col_18_26);
    test_collisions(qualifier_19, minibossflame_1199_instances, 16777216, 1, (EventFunction)&Frames::col_17_25);
    test_collisions(playercharactersensor_383_instances, minibossgansekispike3_1494_instances, 8, 1, (EventFunction)&Frames::col_19_27);
    test_collisions(qualifier_20, playerprojectile_320_instances, 16777216, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playercharactersensor_383_instances, minibossgansekispike2_1493_instances, 16, 1, (EventFunction)&Frames::col_19_27);
    test_collisions(qualifier_19, enemysentinelspike_1429_instances, 8388608, 4, (EventFunction)&Frames::col_23_27);
    test_collisions(qualifier_7, playerprojectile_320_instances, 4194304, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(playercharactersensor_383_instances, enemyfiresprite_1095_instances, 32, 2, (EventFunction)&Frames::col_26_24);
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
void Frames::event_func_5915()
{
    // event 2_27
    {
        if (!(group_main_engine_1)) goto event_2_27_end;
        ((Active*)get_instance(gimmickhangingswitch_1256_instances))->set_y(((Active*)get_instance(gimmickhangingidleswitch_1257_instances, default_active_instance))->get_y());
    }
    event_2_27_end: ;
}
void Frames::event_func_5916()
{
    // event 4_27
    {
        if (!(group_main_engine_1)) goto event_4_27_end;
        gimmickhangingidleswitch_1257_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)*it)->alterables->values.get(0)+8))) { it.deselect(); continue; }
        }
        if (!gimmickhangingidleswitch_1257_instances.has_selection()) goto event_4_27_end;
        for (ObjectIterator it(gimmickhangingidleswitch_1257_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+2, ((Active*)*it)->alterables->values.get(0)+8));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+2);
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
    event_4_27_end: ;
}
void Frames::event_func_5917()
{
    // event 6_27
    {
        if (!(group_main_engine_1)) goto event_6_27_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrollingplatformcave_1497_instances)) goto event_6_27_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(21);
        }
    }
    event_6_27_end: ;
}
void Frames::event_func_5918()
{
    // event 7_27
    {
        if (!(group_main_engine_1)) goto event_7_27_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickrollingplatformcave_1497_instances)) goto event_7_27_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_7_27_end;
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (270))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(21))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto event_7_27_end;
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 1);
            ((Active*)*it)->alterables->flags.enable(21);
        }
    }
    event_7_27_end: ;
}
void Frames::event_func_5919()
{
    // event 8_27
    bool or_result_8_27 = false;
    bool or_temp_result_8_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_8_27_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_8_27_0_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto or_event_8_27_0_end;
        or_result_8_27 = true;
        or_temp_result_8_27_0 = true;
    }
    or_event_8_27_0_end: ;
    gimmickrollingplatformcave_1497_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_8_27_0) {
        gimmickrollingplatformcave_1497_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 8_27
    bool or_temp_result_8_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_8_27_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_8_27_1_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto or_event_8_27_1_end;
        or_result_8_27 = true;
        or_temp_result_8_27_1 = true;
        or_event_8_27_1_end: ;
        if (or_temp_result_8_27_1) {
            gimmickrollingplatformcave_1497_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_8_27) goto or_final_or_event_8_27_1_end;
        gimmickrollingplatformcave_1497_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_8_27_0 || or_temp_result_8_27_1) {
            gimmickrollingplatformcave_1497_instances.restore_selection();
        }
        if (or_temp_result_8_27_0 || or_temp_result_8_27_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, -1);
            ((Active*)*it)->alterables->flags.enable(21);
        }
    }
    or_final_or_event_8_27_1_end: ;
}
void Frames::event_func_5920()
{
    // event 9_27
    {
        if (!(group_main_engine_1)) goto event_9_27_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto event_9_27_end;
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.05, 6));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(1));
        }
    }
    event_9_27_end: ;
}
void Frames::event_func_5921()
{
    // event 10_27
    bool or_result_10_27 = false;
    bool or_temp_result_10_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_10_27_0_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto or_event_10_27_0_end;
        or_result_10_27 = true;
        or_temp_result_10_27_0 = true;
    }
    or_event_10_27_0_end: ;
    gimmickrollingplatformcave_1497_instances.clear_saved_selection();
    if (or_temp_result_10_27_0) {
        gimmickrollingplatformcave_1497_instances.save_selection();
    }
    // event 10_27
    bool or_temp_result_10_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_10_27_1_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto or_event_10_27_1_end;
        or_result_10_27 = true;
        or_temp_result_10_27_1 = true;
        or_event_10_27_1_end: ;
        if (or_temp_result_10_27_1) {
            gimmickrollingplatformcave_1497_instances.save_selection();
        }
        if (!or_result_10_27) goto or_final_or_event_10_27_1_end;
        gimmickrollingplatformcave_1497_instances.empty_selection();
        if (or_temp_result_10_27_0 || or_temp_result_10_27_1) {
            gimmickrollingplatformcave_1497_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.05, 0));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(1));
        }
    }
    or_final_or_event_10_27_1_end: ;
}
void Frames::event_func_5922()
{
    // event 11_27
    {
        if (!(group_main_engine_1)) goto event_11_27_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto event_11_27_end;
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 360);
            ((Active*)*it)->alterables->values.add(4, 360);
        }
    }
    event_11_27_end: ;
}
void Frames::event_func_5923()
{
    // event 12_27
    bool or_result_12_27 = false;
    bool or_temp_result_12_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_12_27_0_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto or_event_12_27_0_end;
        or_result_12_27 = true;
        or_temp_result_12_27_0 = true;
    }
    or_event_12_27_0_end: ;
    gimmickrollingplatformcave_1497_instances.clear_saved_selection();
    if (or_temp_result_12_27_0) {
        gimmickrollingplatformcave_1497_instances.save_selection();
    }
    // event 12_27
    bool or_temp_result_12_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_12_27_1_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (90))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto or_event_12_27_1_end;
        or_result_12_27 = true;
        or_temp_result_12_27_1 = true;
        or_event_12_27_1_end: ;
        if (or_temp_result_12_27_1) {
            gimmickrollingplatformcave_1497_instances.save_selection();
        }
        if (!or_result_12_27) goto or_final_or_event_12_27_1_end;
        gimmickrollingplatformcave_1497_instances.empty_selection();
        if (or_temp_result_12_27_0 || or_temp_result_12_27_1) {
            gimmickrollingplatformcave_1497_instances.restore_selection();
        }
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.05, -6));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(1));
        }
    }
    or_final_or_event_12_27_1_end: ;
}
void Frames::event_func_5924()
{
    // event 13_27
    {
        if (!(group_main_engine_1)) goto event_13_27_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (270))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto event_13_27_end;
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.05, 0));
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(1));
        }
    }
    event_13_27_end: ;
}
void Frames::event_func_5925()
{
    // event 14_27
    {
        if (!(group_main_engine_1)) goto event_14_27_end;
        gimmickrollingplatformcave_1497_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) != (0))) { it.deselect(); continue; }
        }
        if (!gimmickrollingplatformcave_1497_instances.has_selection()) goto event_14_27_end;
        for (ObjectIterator it(gimmickrollingplatformcave_1497_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
    }
    event_14_27_end: ;
}
void Frames::event_func_5926()
{
    // event 550_27
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_550_27_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_550_27_end;
        FrameObject * single_instance_550_27_0; single_instance_550_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_550_27_0 == NULL)
                    single_instance_550_27_0 = new_obj;
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
                loop_spawndebris_27();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_550_27_end: ;
}
void Frames::event_func_5927()
{
    // event 567_27
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_567_27_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_567_27_end;
        FrameObject * single_instance_567_27_0; single_instance_567_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_567_27_0 == NULL)
                    single_instance_567_27_0 = new_obj;
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
                loop_spawndebris_27();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_567_27_end: ;
}
void Frames::event_func_5928()
{
    // event 701_27
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_701_27_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_701_27_end;
        FrameObject * single_instance_701_27_0; single_instance_701_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_701_27_0 == NULL)
                    single_instance_701_27_0 = new_obj;
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
                loop_spawndebris_27();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_701_27_end: ;
}
void Frames::event_func_5929()
{
    // event 1406_27
    {
        if (!(group_main_engine_1)) goto event_1406_27_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1406_27_end;
        if (not_always_1406_27 > loop_count) {
            not_always_1406_27 = loop_count + 2;
            goto event_1406_27_end;
        }
        not_always_1406_27 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1406_27_end: ;
}
void Frames::event_func_5930()
{
    // event 1408_27
    {
        if (!(group_main_engine_1)) goto event_1408_27_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1408_27_end;
        if (not_always_1408_27 > loop_count) {
            not_always_1408_27 = loop_count + 2;
            goto event_1408_27_end;
        }
        not_always_1408_27 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1408_27_end: ;
}
void Frames::event_func_5931()
{
    // event 1436_27
    {
        if (!(group_main_engine_1)) goto event_1436_27_end;
        if (!(((Active*)get_instance(switchpressureplate_752_instances))->alterables->flags.is_off(0))) goto event_1436_27_end;
        {
            double check_value = ((Active*)get_instance(switchpressureplate_752_instances))->alterables->values.get(0);
            switchdoor_735_instances.clear_selection();
            for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!switchdoor_735_instances.has_selection()) goto event_1436_27_end;
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
            ((Active*)*it)->alterables->values.sub(2, 8);
        }
    }
    event_1436_27_end: ;
}
void Frames::event_func_5932()
{
    // event 1439_27
    bool or_result_1439_27 = false;
    bool or_temp_result_1439_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1439_27_0_end;
        switchwallplate_814_instances.clear_selection();
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!switchwallplate_814_instances.has_selection()) goto or_event_1439_27_0_end;
        gatewayfront2_1509_instances.clear_selection();
        for (ObjectIterator it(gatewayfront2_1509_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!gatewayfront2_1509_instances.has_selection()) goto or_event_1439_27_0_end;
        if (!media.is_sample_playing(SOUND_DRAG2_62)) goto or_event_1439_27_0_end;
        or_result_1439_27 = true;
        or_temp_result_1439_27_0 = true;
    }
    or_event_1439_27_0_end: ;
    gatewayfront2_1509_instances.clear_saved_selection();
    switchwallplate_814_instances.clear_saved_selection();
    if (or_temp_result_1439_27_0) {
        gatewayfront2_1509_instances.save_selection();
        switchwallplate_814_instances.save_selection();
    }
    // event 1439_27
    bool or_temp_result_1439_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1439_27_1_end;
        switchwallplate_814_instances.clear_selection();
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!switchwallplate_814_instances.has_selection()) goto or_event_1439_27_1_end;
        gatewayfront2_1509_instances.clear_selection();
        for (ObjectIterator it(gatewayfront2_1509_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!gatewayfront2_1509_instances.has_selection()) goto or_event_1439_27_1_end;
        for (ObjectIterator it(switchwallplate_814_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (80))) { it.deselect(); continue; }
        }
        if (!switchwallplate_814_instances.has_selection()) goto or_event_1439_27_1_end;
        if (!media.is_sample_playing(SOUND_DRAG2_62)) goto or_event_1439_27_1_end;
        or_result_1439_27 = true;
        or_temp_result_1439_27_1 = true;
        or_event_1439_27_1_end: ;
        if (or_temp_result_1439_27_1) {
            gatewayfront2_1509_instances.save_selection();
            switchwallplate_814_instances.save_selection();
        }
        if (!or_result_1439_27) goto or_final_or_event_1439_27_1_end;
        gatewayfront2_1509_instances.empty_selection();
        switchwallplate_814_instances.empty_selection();
        if (or_temp_result_1439_27_0 || or_temp_result_1439_27_1) {
            gatewayfront2_1509_instances.restore_selection();
        }
        if (or_temp_result_1439_27_0 || or_temp_result_1439_27_1) {
            switchwallplate_814_instances.restore_selection();
        }
        media.stop_sample(SOUND_DRAG2_62);
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_min(((Active*)*it)->alterables->values.get(25)+3, 3));
        }
    }
    or_final_or_event_1439_27_1_end: ;
}
void Frames::event_func_5933()
{
    // event 1440_27
    {
        if (!(group_main_engine_1)) goto event_1440_27_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(0))) goto event_1440_27_end;
        if (!((((Active*)get_instance(switchwallplate_814_instances))->alterables->values.get(2)) < (80))) goto event_1440_27_end;
        ((Active*)get_instance(switchwallplate_814_instances))->alterables->values.add(2, 2);
        ((Active*)get_instance(gatewayfront2_1509_instances))->set_y(((Active*)get_instance(gatewayfront2_1509_instances))->get_y()+2);
    }
    event_1440_27_end: ;
}
void Frames::event_func_5934()
{
    // event 1443_27
    bool or_result_1443_27 = false;
    bool or_temp_result_1443_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1443_27_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1443_27_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1443_27_0_end;
        playersensorleftbig_391_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, breakableruins_1184_instances)) goto or_event_1443_27_0_end;
        or_result_1443_27 = true;
        or_temp_result_1443_27_0 = true;
    }
    or_event_1443_27_0_end: ;
    breakableruins_1184_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1443_27_0) {
        breakableruins_1184_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1443_27
    bool or_temp_result_1443_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1443_27_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1443_27_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1443_27_1_end;
        playersensorrightbig_393_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, breakableruins_1184_instances)) goto or_event_1443_27_1_end;
        or_result_1443_27 = true;
        or_temp_result_1443_27_1 = true;
    }
    or_event_1443_27_1_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1443_27_1) {
        playersensorrightbig_393_instances.save_selection();
        breakableruins_1184_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1443_27
    bool or_temp_result_1443_27_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1443_27_2_end;
        shieldinstashield_359_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, breakableruins_1184_instances)) goto or_event_1443_27_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1443_27_2_end;
        or_result_1443_27 = true;
        or_temp_result_1443_27_2 = true;
    }
    or_event_1443_27_2_end: ;
    shieldinstashield_359_instances.clear_saved_selection();
    if (or_temp_result_1443_27_2) {
        breakableruins_1184_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        shieldinstashield_359_instances.save_selection();
    }
    // event 1443_27
    bool or_temp_result_1443_27_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1443_27_3_end;
        playerreflect_447_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, breakableruins_1184_instances)) goto or_event_1443_27_3_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_1443_27_3_end;
        or_result_1443_27 = true;
        or_temp_result_1443_27_3 = true;
    }
    or_event_1443_27_3_end: ;
    playerreflect_447_instances.clear_saved_selection();
    if (or_temp_result_1443_27_3) {
        breakableruins_1184_instances.save_selection();
        playerreflect_447_instances.save_selection();
    }
    // event 1443_27
    bool or_temp_result_1443_27_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1443_27_4_end;
        thunderspark_339_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(thunderspark_339_instances, breakableruins_1184_instances)) goto or_event_1443_27_4_end;
        or_result_1443_27 = true;
        or_temp_result_1443_27_4 = true;
        or_event_1443_27_4_end: ;
        thunderspark_339_instances.clear_saved_selection();
        if (or_temp_result_1443_27_4) {
            breakableruins_1184_instances.save_selection();
            thunderspark_339_instances.save_selection();
        }
        if (!or_result_1443_27) goto or_final_or_event_1443_27_4_end;
        playersensorrightbig_393_instances.empty_selection();
        breakableruins_1184_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        thunderspark_339_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        shieldinstashield_359_instances.empty_selection();
        if (or_temp_result_1443_27_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1443_27_0 || or_temp_result_1443_27_1 || or_temp_result_1443_27_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1443_27_0 || or_temp_result_1443_27_1 || or_temp_result_1443_27_2 || or_temp_result_1443_27_3 || or_temp_result_1443_27_4) {
            breakableruins_1184_instances.restore_selection();
        }
        if (or_temp_result_1443_27_4) {
            thunderspark_339_instances.restore_selection();
        }
        if (or_temp_result_1443_27_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        if (or_temp_result_1443_27_3) {
            playerreflect_447_instances.restore_selection();
        }
        if (or_temp_result_1443_27_0 || or_temp_result_1443_27_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1443_27_2) {
            shieldinstashield_359_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)*1.5), 3)*((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(16), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1443_27_4_end: ;
}
void Frames::event_func_5935()
{
    // event 1444_27
    bool or_result_1444_27 = false;
    bool or_temp_result_1444_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1444_27_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1444_27_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1444_27_0_end;
        playersensorbottombig_397_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, breakableruins_1184_instances)) goto or_event_1444_27_0_end;
        or_result_1444_27 = true;
        or_temp_result_1444_27_0 = true;
    }
    or_event_1444_27_0_end: ;
    breakableruins_1184_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playersensorbottombig_397_instances.clear_saved_selection();
    if (or_temp_result_1444_27_0) {
        breakableruins_1184_instances.save_selection();
        playersensorbottombig_397_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1444_27
    bool or_temp_result_1444_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1444_27_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1444_27_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1444_27_1_end;
        playersensortopbig_395_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, breakableruins_1184_instances)) goto or_event_1444_27_1_end;
        or_result_1444_27 = true;
        or_temp_result_1444_27_1 = true;
        or_event_1444_27_1_end: ;
        playersensortopbig_395_instances.clear_saved_selection();
        if (or_temp_result_1444_27_1) {
            breakableruins_1184_instances.save_selection();
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playersensortopbig_395_instances.save_selection();
        }
        if (!or_result_1444_27) goto or_final_or_event_1444_27_1_end;
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        breakableruins_1184_instances.empty_selection();
        if (or_temp_result_1444_27_0 || or_temp_result_1444_27_1) {
            breakableruins_1184_instances.restore_selection();
        }
        if (or_temp_result_1444_27_0) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1444_27_0 || or_temp_result_1444_27_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1444_27_0 || or_temp_result_1444_27_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1444_27_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 5);
        }
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1)/math_helper/2.0, -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6));
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1444_27_1_end: ;
}
void Frames::event_func_5936()
{
    // event 1446_27
    {
        if (!(group_main_engine_1)) goto event_1446_27_end;
        breakableruins_1184_instances.clear_selection();
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!breakableruins_1184_instances.has_selection()) goto event_1446_27_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakableruinspiece_1102_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakableruins_1184_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 12, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 32, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 52, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 12, parent->y + 32), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 32, parent->y + 32), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 52, parent->y + 32), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 12, parent->y + 52), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 32, parent->y + 52), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 52, parent->y + 52), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
        }
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(breakableruins_1184_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakableruins_1184_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
    }
    event_1446_27_end: ;
}
void Frames::event_func_5937()
{
    // event 1447_27
    {
        if (!(group_main_engine_1)) goto event_1447_27_end;
        breakableruins_1184_instances.clear_selection();
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
        }
        if (!breakableruins_1184_instances.has_selection()) goto event_1447_27_end;
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakableruinspiece_1102_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(breakableruins_1184_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 12, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 32, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 52, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 12, parent->y + 32), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 32, parent->y + 32), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 52, parent->y + 32), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 12, parent->y + 52), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 32, parent->y + 52), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1428(parent->x + 52, parent->y + 52), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
        }
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(-4, get_min(4, ((Active*)*it)->get_x()-((Active*)get_single(breakableruins_1184_instances, it.current_index, default_active_instance))->get_x())));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(breakableruins_1184_instances, it.current_index, default_active_instance))->alterables->values.get(24)-4.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
    }
    event_1447_27_end: ;
}
void Frames::event_func_5938()
{
    // event 1473_27
    {
        if (!(group_main_engine_1)) goto event_1473_27_end;
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(0, get_min(get_max(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(0), 0), 180));
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(4, get_min(get_max(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(4), 0), 180));
        {
            loop_risingswing_running = true;
            int times = int(gimmickrisingswingpiece_1406_instances.size());
            loop_risingswing_index = 0;
            while (loop_risingswing_index < times) {
                loop_risingswing_27();
                if (!loop_risingswing_running) break;
                loop_risingswing_index++;
            }
        }
    }
    event_1473_27_end: ;
}
void Frames::event_func_5939()
{
    // event 1475_27
    {
        if (!(group_main_engine_1)) goto event_1475_27_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickrisingswing_1405_instances)) goto event_1475_27_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1475_27_end;
        if (!(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.is_off(1))) goto event_1475_27_end;
        if (!(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.is_off(2))) goto event_1475_27_end;
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.enable(1);
    }
    event_1475_27_end: ;
}
void Frames::event_func_5940()
{
    // event 1476_27
    {
        if (!(group_main_engine_1)) goto event_1476_27_end;
        if (!(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.is_on(1))) goto event_1476_27_end;
        if (!((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(0)) < (90))) goto event_1476_27_end;
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(1, get_min(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(1)+0.08, 8));
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(5, get_min(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(5)+0.08, 8));
    }
    event_1476_27_end: ;
}
void Frames::event_func_5941()
{
    // event 1477_27
    {
        if (!(group_main_engine_1)) goto event_1477_27_end;
        if (!(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.is_on(1))) goto event_1477_27_end;
        if (!((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(0)) >= (90))) goto event_1477_27_end;
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(1, get_max(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(1)-0.08, 0));
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(5, get_max(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(5)-0.08, 0));
    }
    event_1477_27_end: ;
}
void Frames::event_func_5942()
{
    // event 1478_27
    {
        if (!(group_main_engine_1)) goto event_1478_27_end;
        if (!(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.is_on(1))) goto event_1478_27_end;
        if (!((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(0)) >= (90))) goto event_1478_27_end;
        if (!((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(1)) <= (0))) goto event_1478_27_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, gimmickrisingswing_1405_instances)) goto event_1478_27_end;
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.enable(2);
    }
    event_1478_27_end: ;
}
void Frames::event_func_5943()
{
    // event 1479_27
    {
        if (!(group_main_engine_1)) goto event_1479_27_end;
        if (!(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.is_on(2))) goto event_1479_27_end;
        if (!((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(0)) >= (90))) goto event_1479_27_end;
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(1, get_max(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(1)-0.08, -8));
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(5, get_max(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(5)-0.08, -8));
    }
    event_1479_27_end: ;
}
void Frames::event_func_5944()
{
    // event 1480_27
    {
        if (!(group_main_engine_1)) goto event_1480_27_end;
        if (!(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.is_on(2))) goto event_1480_27_end;
        if (!((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(0)) < (90))) goto event_1480_27_end;
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(1, get_min(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(1)+0.08, 0));
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.set(5, get_min(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(5)+0.08, 0));
    }
    event_1480_27_end: ;
}
void Frames::event_func_5945()
{
    // event 1481_27
    {
        if (!(group_main_engine_1)) goto event_1481_27_end;
        if (!(((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.is_on(2))) goto event_1481_27_end;
        if (!((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(0)) < (90))) goto event_1481_27_end;
        if (!((((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->values.get(1)) >= (0))) goto event_1481_27_end;
        ((Active*)get_instance(gimmickrisingswing_1405_instances))->alterables->flags.disable(2);
    }
    event_1481_27_end: ;
}
void Frames::event_func_5946()
{
    // event 1483_27
    {
        if (!(group_main_engine_1)) goto event_1483_27_end;
        gimmickdrillplatform_1503_instances.clear_selection();
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_top()-80))) { it.deselect(); continue; }
        }
        if (!gimmickdrillplatform_1503_instances.has_selection()) goto event_1483_27_end;
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1483_27_end: ;
}
void Frames::event_func_5947()
{
    // event 1484_27
    {
        if (!(group_main_engine_1)) goto event_1484_27_end;
        gimmickdrillplatform_1503_instances.clear_selection();
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!gimmickdrillplatform_1503_instances.has_selection()) goto event_1484_27_end;
        {
            loop_drillplatform_running = true;
            int times = int(1);
            loop_drillplatform_index = 0;
            while (loop_drillplatform_index < times) {
                loop_drillplatform_27();
                if (!loop_drillplatform_running) break;
                loop_drillplatform_index++;
            }
        }
    }
    event_1484_27_end: ;
}
void Frames::event_func_5948()
{
    // event 1490_27
    {
        if (!(group_main_engine_1)) goto event_1490_27_end;
        gimmickrollingplatformcave2_1488_instances.clear_selection();
        for (ObjectIterator it(gimmickrollingplatformcave2_1488_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickrollingplatformcave_1497_instances, it.current_index));
            if (parent == NULL) goto pos_end_1490_27_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1490_27_0: ;
        }
        for (ObjectIterator it(gimmickrollingplatformcave2_1488_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-(((Active*)get_instance(gimmickrollingplatformcave_1497_instances, it.current_index, default_active_instance))->alterables->values.get(1)*4), 0);
        }
    }
    event_1490_27_end: ;
}
void Frames::event_func_5949()
{
    // event 1594_27
    {
        if (!(group_main_engine_1)) goto event_1594_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (40))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1594_27_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(6)*2)*20);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)+cos_deg(((Active*)*it)->alterables->values.get(6))*20);
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+0.5)%math_helper%360);
        }
    }
    event_1594_27_end: ;
}
void Frames::event_func_5950()
{
    // event 1595_27
    bool or_result_1595_27 = false;
    bool or_temp_result_1595_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1595_27_0_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (5))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto or_event_1595_27_0_end;
        or_result_1595_27 = true;
        or_temp_result_1595_27_0 = true;
    }
    or_event_1595_27_0_end: ;
    enemysentinel_1496_instances.clear_saved_selection();
    if (or_temp_result_1595_27_0) {
        enemysentinel_1496_instances.save_selection();
    }
    // event 1595_27
    bool or_temp_result_1595_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1595_27_1_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (5))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto or_event_1595_27_1_end;
        or_result_1595_27 = true;
        or_temp_result_1595_27_1 = true;
    }
    or_event_1595_27_1_end: ;
    if (or_temp_result_1595_27_1) {
        enemysentinel_1496_instances.save_selection();
    }
    // event 1595_27
    bool or_temp_result_1595_27_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1595_27_2_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto or_event_1595_27_2_end;
        or_result_1595_27 = true;
        or_temp_result_1595_27_2 = true;
        or_event_1595_27_2_end: ;
        if (or_temp_result_1595_27_2) {
            enemysentinel_1496_instances.save_selection();
        }
        if (!or_result_1595_27) goto or_final_or_event_1595_27_2_end;
        enemysentinel_1496_instances.empty_selection();
        if (or_temp_result_1595_27_0 || or_temp_result_1595_27_1 || or_temp_result_1595_27_2) {
            enemysentinel_1496_instances.restore_selection();
        }
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    or_final_or_event_1595_27_2_end: ;
}
void Frames::event_func_5951()
{
    // event 1596_27
    {
        if (!(group_main_engine_1)) goto event_1596_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (5))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1596_27_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
            ((Active*)*it)->set_direction(((((Active*)*it)->get_direction()+2)/math_helper/8)*8);
        }
    }
    event_1596_27_end: ;
}
void Frames::event_func_5952()
{
    // event 1597_27
    {
        if (!(group_main_engine_1)) goto event_1597_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_direction(((Active*)*it)->get_frame()*4))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1597_27_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1597_27_end: ;
}
void Frames::event_func_5953()
{
    // event 1598_27
    {
        if (!(group_main_engine_1)) goto event_1598_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (40))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1598_27_end;
        FrameObject * single_instance_1598_27_0; single_instance_1598_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysentinel_1496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysentinelspike_1429(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1598_27_0 == NULL)
                    single_instance_1598_27_0 = new_obj;
            }
        }
        ((Active*)single_instance_1598_27_0)->move_back(((Active*)get_single(enemysentinel_1496_instances)));
        ((Active*)((Active*)single_instance_1598_27_0))->set_direction(((Active*)get_single(enemysentinel_1496_instances, default_active_instance))->get_direction()-4);
    }
    event_1598_27_end: ;
}
void Frames::event_func_5954()
{
    // event 1599_27
    {
        if (!(group_main_engine_1)) goto event_1599_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (40))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1599_27_end;
        FrameObject * single_instance_1599_27_0; single_instance_1599_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysentinel_1496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysentinelspike_1429(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1599_27_0 == NULL)
                    single_instance_1599_27_0 = new_obj;
            }
        }
        ((Active*)single_instance_1599_27_0)->move_back(((Active*)get_single(enemysentinel_1496_instances)));
        ((Active*)((Active*)single_instance_1599_27_0))->set_direction(((Active*)get_single(enemysentinel_1496_instances, default_active_instance))->get_direction()+4);
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_frame(((Active*)*it)->get_direction()/math_helper/4);
            ((Active*)*it)->restore_frame();
        }
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
    }
    event_1599_27_end: ;
}
void Frames::event_func_5955()
{
    // event 1600_27
    {
        if (!(group_main_engine_1)) goto event_1600_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (100))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1600_27_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -80);
        }
    }
    event_1600_27_end: ;
}
void Frames::event_func_5956()
{
    // event 1601_27
    {
        if (!(group_main_engine_1)) goto event_1601_27_end;
        enemysentinelspike_1429_instances.clear_selection();
        for (ObjectIterator it(enemysentinelspike_1429_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
        }
        if (!enemysentinelspike_1429_instances.has_selection()) goto event_1601_27_end;
        for (ObjectIterator it(enemysentinelspike_1429_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->get_movement()->set_deceleration(0);
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
    }
    event_1601_27_end: ;
}
void Frames::event_func_5957()
{
    // event 1602_27
    {
        if (!(group_main_engine_1)) goto event_1602_27_end;
        enemysentinelspike_1429_instances.clear_selection();
        for (ObjectIterator it(enemysentinelspike_1429_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemysentinelspike_1429_instances.has_selection()) goto event_1602_27_end;
        for (ObjectIterator it(enemysentinelspike_1429_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(get_max(2, get_min(((Active*)*it)->get_movement()->get_speed()+2, 70)));
        }
    }
    event_1602_27_end: ;
}
void Frames::event_func_5958()
{
    // event 1603_27
    {
        if (!(group_main_engine_1)) goto event_1603_27_end;
        enemysentinelspike_1429_instances.clear_selection();
        for (ObjectIterator it(enemysentinelspike_1429_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!enemysentinelspike_1429_instances.has_selection()) goto event_1603_27_end;
        for (ObjectIterator it(enemysentinelspike_1429_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1603_27_end: ;
}
void Frames::event_func_5959()
{
    // event 1607_27
    {
        if (!(group_main_engine_1)) goto event_1607_27_end;
        enemysentinel_1496_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        if (!check_overlap(enemysentinel_1496_instances, gimmickmovingpillar1_1407_instances)) goto event_1607_27_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(gimmickmovingpillar1_1407_instances, default_active_instance))->get_box_index(1)-10))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1607_27_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(5, 4);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
    }
    event_1607_27_end: ;
}
void Frames::event_func_5960()
{
    // event 1608_27
    bool or_result_1608_27 = false;
    bool or_temp_result_1608_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1608_27_0_end;
        enemysentinel_1496_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        if (!check_overlap(enemysentinel_1496_instances, gimmickmovingpillar1_1407_instances)) goto or_event_1608_27_0_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto or_event_1608_27_0_end;
        if (!(test_obstacle(((Active*)get_single(enemysentinel_1496_instances, default_active_instance))->get_x(), ((Active*)get_single(enemysentinel_1496_instances, default_active_instance))->get_y()-10))) goto or_event_1608_27_0_end;
        or_result_1608_27 = true;
        or_temp_result_1608_27_0 = true;
    }
    or_event_1608_27_0_end: ;
    enemysentinel_1496_instances.clear_saved_selection();
    gimmickmovingpillar1_1407_instances.clear_saved_selection();
    if (or_temp_result_1608_27_0) {
        enemysentinel_1496_instances.save_selection();
        gimmickmovingpillar1_1407_instances.save_selection();
    }
    // event 1608_27
    bool or_temp_result_1608_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1608_27_1_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto or_event_1608_27_1_end;
        if (!(test_obstacle(((Active*)get_single(enemysentinel_1496_instances, default_active_instance))->get_x(), ((Active*)get_single(enemysentinel_1496_instances, default_active_instance))->get_y()-10))) goto or_event_1608_27_1_end;
        if (!(test_obstacle(((Active*)get_single(enemysentinel_1496_instances, default_active_instance))->get_x(), ((Active*)get_single(enemysentinel_1496_instances, default_active_instance))->get_y()+10))) goto or_event_1608_27_1_end;
        or_result_1608_27 = true;
        or_temp_result_1608_27_1 = true;
        or_event_1608_27_1_end: ;
        if (or_temp_result_1608_27_1) {
            enemysentinel_1496_instances.save_selection();
        }
        if (!or_result_1608_27) goto or_final_or_event_1608_27_1_end;
        enemysentinel_1496_instances.empty_selection();
        gimmickmovingpillar1_1407_instances.empty_selection();
        if (or_temp_result_1608_27_0 || or_temp_result_1608_27_1) {
            enemysentinel_1496_instances.restore_selection();
        }
        if (or_temp_result_1608_27_0) {
            gimmickmovingpillar1_1407_instances.restore_selection();
        }
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, 1);
        }
    }
    or_final_or_event_1608_27_1_end: ;
}
void Frames::event_func_5961()
{
    // event 1609_27
    {
        if (!(group_main_engine_1)) goto event_1609_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1609_27_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemysentinel_1496_instances, qualifier_19)) goto event_1609_27_end;
        FrameObject * single_instance_1609_27_0; single_instance_1609_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysentinel_1496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1609_27_0 == NULL)
                    single_instance_1609_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1609_27_0))->set_direction(1);
        FrameObject * single_instance_1609_27_1; single_instance_1609_27_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysentinel_1496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1609_27_1 == NULL)
                    single_instance_1609_27_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1609_27_2; single_instance_1609_27_2 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1609_27_2 == NULL)
                    single_instance_1609_27_2 = new_obj;
            }
        }
        FrameObject * single_instance_1609_27_3; single_instance_1609_27_3 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1609_27_3 == NULL)
                    single_instance_1609_27_3 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1609_27_2))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1609_27_2))->move_back();
        ((Active*)((Active*)single_instance_1609_27_3))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_27();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1609_27_end: ;
}
void Frames::event_func_5962()
{
    // event 1610_27
    {
        if (!(group_main_engine_1)) goto event_1610_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1610_27_end;
        FrameObject * single_instance_1610_27_0; single_instance_1610_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysentinel_1496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1610_27_0 == NULL)
                    single_instance_1610_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1610_27_0))->set_direction(1);
        FrameObject * single_instance_1610_27_1; single_instance_1610_27_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysentinel_1496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1610_27_1 == NULL)
                    single_instance_1610_27_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_27();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1610_27_end: ;
}
void Frames::event_func_5963()
{
    // event 1611_27
    bool or_result_1611_27 = false;
    bool or_temp_result_1611_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1611_27_0_end;
        enemysentinel_1496_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemysentinel_1496_instances, qualifier_7)) goto or_event_1611_27_0_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto or_event_1611_27_0_end;
        or_result_1611_27 = true;
        or_temp_result_1611_27_0 = true;
    }
    or_event_1611_27_0_end: ;
    enemysentinel_1496_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1611_27_0) {
        enemysentinel_1496_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1611_27
    bool or_temp_result_1611_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1611_27_1_end;
        enemysentinel_1496_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemysentinel_1496_instances, qualifier_8)) goto or_event_1611_27_1_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto or_event_1611_27_1_end;
        or_result_1611_27 = true;
        or_temp_result_1611_27_1 = true;
        or_event_1611_27_1_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1611_27_1) {
            enemysentinel_1496_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1611_27) goto or_final_or_event_1611_27_1_end;
        enemysentinel_1496_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1611_27_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1611_27_0 || or_temp_result_1611_27_1) {
            enemysentinel_1496_instances.restore_selection();
        }
        if (or_temp_result_1611_27_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1611_27_0; single_instance_1611_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysentinel_1496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1611_27_0 == NULL)
                    single_instance_1611_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1611_27_0))->set_direction(1);
        FrameObject * single_instance_1611_27_1; single_instance_1611_27_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysentinel_1496_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1611_27_1 == NULL)
                    single_instance_1611_27_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_27();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1611_27_1_end: ;
}
void Frames::event_func_5964()
{
    // event 1613_27
    {
        if (!(group_main_engine_1)) goto event_1613_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysentinel_1496_instances.has_selection()) goto event_1613_27_end;
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1613_27_end: ;
}
void Frames::event_func_5965()
{
    // event 1631_27
    bool or_result_1631_27 = false;
    bool or_temp_result_1631_27_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1631_27_0_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1631_27_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyfirespitter_1385_instances, qualifier_7)) goto or_event_1631_27_0_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1631_27_0_end;
        or_result_1631_27 = true;
        or_temp_result_1631_27_0 = true;
    }
    or_event_1631_27_0_end: ;
    enemyfirespitter_1385_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1631_27_0) {
        enemyfirespitter_1385_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1631_27
    bool or_temp_result_1631_27_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1631_27_1_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1631_27_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemyfirespitter_1385_instances, qualifier_8)) goto or_event_1631_27_1_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1631_27_1_end;
        or_result_1631_27 = true;
        or_temp_result_1631_27_1 = true;
    }
    or_event_1631_27_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1631_27_1) {
        enemyfirespitter_1385_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1631_27
    bool or_temp_result_1631_27_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1631_27_2_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1631_27_2_end;
        or_result_1631_27 = true;
        or_temp_result_1631_27_2 = true;
        or_event_1631_27_2_end: ;
        if (or_temp_result_1631_27_2) {
            enemyfirespitter_1385_instances.save_selection();
        }
        if (!or_result_1631_27) goto or_final_or_event_1631_27_2_end;
        qualifier_8.empty_selection();
        enemyfirespitter_1385_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1631_27_0 || or_temp_result_1631_27_1 || or_temp_result_1631_27_2) {
            enemyfirespitter_1385_instances.restore_selection();
        }
        if (or_temp_result_1631_27_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1631_27_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1631_27_0; single_instance_1631_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1631_27_0 == NULL)
                    single_instance_1631_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1631_27_0))->set_direction(3);
        FrameObject * single_instance_1631_27_1; single_instance_1631_27_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1631_27_1 == NULL)
                    single_instance_1631_27_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_27();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1631_27_2_end: ;
}
void Frames::event_func_5966()
{
    // event 1634_27
    {
        if (!(group_main_engine_1)) goto event_1634_27_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (((Active*)get_instance(gatewayfront2_1509_instances))->get_x()))) goto event_1634_27_end;
        if (!(((Active*)get_instance(switchwallplate_814_instances))->alterables->flags.is_on(0))) goto event_1634_27_end;
        if (!(((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.is_off(0))) goto event_1634_27_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(gatewayfront2_1509_instances))->get_x());
        ((Active*)get_instance(gatewayfront2_1509_instances))->move_front();
        ((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(gatewayfront_1511_instances))->move_front();
        media.play_id(SOUND_DRAG2_62, -1, 0);
        ((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1634_27_end: ;
}
void Frames::event_func_5967()
{
    // event 1635_27
    {
        if (!(group_main_engine_1)) goto event_1635_27_end;
        if (!(((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.is_on(0))) goto event_1635_27_end;
        ((Active*)get_instance(gatewayfront2_1509_instances))->set_y(get_max(((Active*)get_instance(gatewayfront2_1509_instances))->get_y()-2, ((Active*)get_instance(gatewayfront_1511_instances))->get_y()));
    }
    event_1635_27_end: ;
}
void Frames::event_func_5968()
{
    // event 1636_27
    {
        if (!(group_main_engine_1)) goto event_1636_27_end;
        if (!(((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.is_on(0))) goto event_1636_27_end;
        if (!((((Active*)get_instance(gatewayfront2_1509_instances))->get_y()) <= (((Active*)get_instance(gatewayfront_1511_instances))->get_y()))) goto event_1636_27_end;
        if (!(((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.is_on(1))) goto event_1636_27_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
        media.stop_sample(SOUND_DRAG2_62);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        ((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.disable(1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
    }
    event_1636_27_end: ;
}
void Frames::event_func_5969()
{
    // event 1637_27
    {
        if (!(group_main_engine_1)) goto event_1637_27_end;
        if (!(((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.is_on(0))) goto event_1637_27_end;
        if (!(((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.is_off(1))) goto event_1637_27_end;
        if (!((((Active*)get_instance(gatewayfront2_1509_instances))->get_y()) <= (((Active*)get_instance(gatewayfront_1511_instances))->get_y()))) goto event_1637_27_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1637_27_end: ;
}
void Frames::event_func_5970()
{
    // event 1638_27
    {
        if (!(group_main_engine_1)) goto event_1638_27_end;
        if (!(((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.is_on(0))) goto event_1638_27_end;
        if (!(((Active*)get_instance(gatewayfront2_1509_instances))->alterables->flags.is_off(1))) goto event_1638_27_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1638_27_end;
        global_values->set(4, -1);
        next_frame = index + 1 + 0;    
    
    }
    event_1638_27_end: ;
}
void Frames::event_func_5971()
{
    // event 1649_27
    {
        if (!(group_main_engine_1)) goto event_1649_27_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (4330))) goto event_1649_27_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (5330))) goto event_1649_27_end;
        if (!((global_values->get(4)) < (2))) goto event_1649_27_end;
        global_values->set(4, 2);
        global_values->set(5, 4330);
        global_values->set(6, 830);
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
    event_1649_27_end: ;
}
void Frames::event_func_5972()
{
    // event 1651_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1651_27_end;
        ((Active*)get_instance(effectwarning_1065_instances))->set_visible(false);
    }
    event_1651_27_end: ;
}
void Frames::event_func_5973()
{
    // event 1652_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1652_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-250)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-30))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1652_27_end;
        ((Active*)get_instance(effectwarning_1065_instances))->set_x(get_max(frame_left()+20, get_min(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_x(), frame_right()-20)));
        ((Active*)get_instance(effectwarning_1065_instances))->set_y(get_max(frame_top()+20, get_min(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_y(), frame_bottom()-20)));
        ((Active*)get_instance(effectwarning_1065_instances))->set_visible(true);
    }
    event_1652_27_end: ;
}
void Frames::event_func_5974()
{
    // event 1653_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1653_27_end;
        minibossgansekicap_1491_instances.clear_selection();
        for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossgansekicap_1491_instances.has_selection()) goto event_1653_27_end;
        for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1653_27_end: ;
}
void Frames::event_func_5975()
{
    // event 1654_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1654_27_end;
        minibossgansekicap_1491_instances.clear_selection();
        for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossgansekicap_1491_instances.has_selection()) goto event_1654_27_end;
        for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1654_27_end: ;
}
void Frames::event_func_5976()
{
    // event 1657_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1657_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1657_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 9);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1657_27_end: ;
}
void Frames::event_func_5977()
{
    // event 1658_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1658_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1658_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1658_27_end: ;
}
void Frames::event_func_5978()
{
    // event 1659_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1659_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1659_27_end;
        if (test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(3)+1)) goto event_1659_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.25, 15));
        }
    }
    event_1659_27_end: ;
}
void Frames::event_func_5979()
{
    // event 1660_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1660_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1660_27_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(3)))) goto event_1660_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1660_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        {
            loop_bossganseki_floor_running = true;
            int times = int(4);
            loop_bossganseki_floor_index = 0;
            while (loop_bossganseki_floor_index < times) {
                loop_bossganseki_floor_27();
                if (!loop_bossganseki_floor_running) break;
                loop_bossganseki_floor_index++;
            }
        }
    }
    event_1660_27_end: ;
}
void Frames::event_func_5980()
{
    // event 1661_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1661_27_end;
        if (!(test_obstacle(((Active*)get_instance(minibossganseki_1490_instances, default_active_instance))->get_x(), ((Active*)get_instance(minibossganseki_1490_instances, default_active_instance))->get_box_index(3)))) goto event_1661_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1661_27_end: ;
}
void Frames::event_func_5981()
{
    // event 1662_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1662_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (-5))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1662_27_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(3)+1))) goto event_1662_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.2, -5));
        }
    }
    event_1662_27_end: ;
}
void Frames::event_func_5982()
{
    // event 1663_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1663_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (5))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1663_27_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(3)+1))) goto event_1663_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+0.2, 5));
        }
    }
    event_1663_27_end: ;
}
void Frames::event_func_5983()
{
    // event 1664_27
    bool or_result_1664_27 = false;
    bool or_temp_result_1664_27_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1664_27_0_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1664_27_0_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(0), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_y()+16))) goto or_event_1664_27_0_end;
        or_result_1664_27 = true;
        or_temp_result_1664_27_0 = true;
    }
    or_event_1664_27_0_end: ;
    minibossganseki_1490_instances.clear_saved_selection();
    if (or_temp_result_1664_27_0) {
        minibossganseki_1490_instances.save_selection();
    }
    // event 1664_27
    bool or_temp_result_1664_27_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1664_27_1_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1664_27_1_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(2), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_y()+16))) goto or_event_1664_27_1_end;
        or_result_1664_27 = true;
        or_temp_result_1664_27_1 = true;
        or_event_1664_27_1_end: ;
        if (or_temp_result_1664_27_1) {
            minibossganseki_1490_instances.save_selection();
        }
        if (!or_result_1664_27) goto or_final_or_event_1664_27_1_end;
        minibossganseki_1490_instances.empty_selection();
        if (or_temp_result_1664_27_0 || or_temp_result_1664_27_1) {
            minibossganseki_1490_instances.restore_selection();
        }
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_min(((Active*)*it)->alterables->values.get(25)+get_abs(((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(4)*0.5), 5));
        }
    }
    or_final_or_event_1664_27_1_end: ;
}
void Frames::event_func_5984()
{
    // event 1665_27
    bool or_result_1665_27 = false;
    bool or_temp_result_1665_27_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1665_27_0_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1665_27_0_end;
        if (test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(3)+1)) goto or_event_1665_27_0_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(0), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_y()+16))) goto or_event_1665_27_0_end;
        or_result_1665_27 = true;
        or_temp_result_1665_27_0 = true;
    }
    or_event_1665_27_0_end: ;
    minibossganseki_1490_instances.clear_saved_selection();
    if (or_temp_result_1665_27_0) {
        minibossganseki_1490_instances.save_selection();
    }
    // event 1665_27
    bool or_temp_result_1665_27_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1665_27_1_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1665_27_1_end;
        if (test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(3)+1)) goto or_event_1665_27_1_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(2), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_y()+16))) goto or_event_1665_27_1_end;
        or_result_1665_27 = true;
        or_temp_result_1665_27_1 = true;
        or_event_1665_27_1_end: ;
        if (or_temp_result_1665_27_1) {
            minibossganseki_1490_instances.save_selection();
        }
        if (!or_result_1665_27) goto or_final_or_event_1665_27_1_end;
        minibossganseki_1490_instances.empty_selection();
        if (or_temp_result_1665_27_0 || or_temp_result_1665_27_1) {
            minibossganseki_1490_instances.restore_selection();
        }
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(9, 0-((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.add(15, 1);
        }
    }
    or_final_or_event_1665_27_1_end: ;
}
void Frames::event_func_5985()
{
    // event 1666_27
    bool or_result_1666_27 = false;
    bool or_temp_result_1666_27_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1666_27_0_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1666_27_0_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(3)+1))) goto or_event_1666_27_0_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(0), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_y()+16))) goto or_event_1666_27_0_end;
        or_result_1666_27 = true;
        or_temp_result_1666_27_0 = true;
    }
    or_event_1666_27_0_end: ;
    minibossganseki_1490_instances.clear_saved_selection();
    if (or_temp_result_1666_27_0) {
        minibossganseki_1490_instances.save_selection();
    }
    // event 1666_27
    bool or_temp_result_1666_27_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1666_27_1_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1666_27_1_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_x(), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(3)+1))) goto or_event_1666_27_1_end;
        if (!(test_obstacle(((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_box_index(2), ((Active*)get_single(minibossganseki_1490_instances, default_active_instance))->get_y()+16))) goto or_event_1666_27_1_end;
        or_result_1666_27 = true;
        or_temp_result_1666_27_1 = true;
        or_event_1666_27_1_end: ;
        if (or_temp_result_1666_27_1) {
            minibossganseki_1490_instances.save_selection();
        }
        if (!or_result_1666_27) goto or_final_or_event_1666_27_1_end;
        minibossganseki_1490_instances.empty_selection();
        if (or_temp_result_1666_27_0 || or_temp_result_1666_27_1) {
            minibossganseki_1490_instances.restore_selection();
        }
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(-2, get_min(0-((Active*)*it)->alterables->values.get(4), 2)));
            ((Active*)*it)->alterables->values.set(9, 0-((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(5, -3);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.add(15, 1);
        }
    }
    or_final_or_event_1666_27_1_end: ;
}
void Frames::event_func_5986()
{
    // event 1667_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1667_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1667_27_end;
        yellowspringright_435_instances.clear_selection();
        if (!check_overlap(minibossganseki_1490_instances, yellowspringright_435_instances)) goto event_1667_27_end;
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
    }
    event_1667_27_end: ;
}
void Frames::event_func_5987()
{
    // event 1668_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1668_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1668_27_end;
        yellowspringright_435_instances.clear_selection();
        if (!check_overlap(minibossganseki_1490_instances, yellowspringright_435_instances)) goto event_1668_27_end;
        for (ObjectIterator it(yellowspringright_435_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 10);
            ((Active*)*it)->alterables->values.set(9, 1);
        }
    }
    event_1668_27_end: ;
}
void Frames::event_func_5988()
{
    // event 1669_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1669_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-150)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1669_27_end;
        yellowspringup_434_instances.clear_selection();
        if (!check_overlap(minibossganseki_1490_instances, yellowspringup_434_instances)) goto event_1669_27_end;
        media.play_id(SOUND_COMMON_LAUNCHER_5, -1, 1);
    }
    event_1669_27_end: ;
}
void Frames::event_func_5989()
{
    // event 1670_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1670_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1670_27_end;
        yellowspringup_434_instances.clear_selection();
        if (!check_overlap(minibossganseki_1490_instances, yellowspringup_434_instances)) goto event_1670_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -10);
        }
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        FrameObject * single_instance_1670_27_0; single_instance_1670_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(yellowspringup_434_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspringbeam_470(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1670_27_0 == NULL)
                    single_instance_1670_27_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1670_27_0))->set_layer(((Active*)get_single(yellowspringup_434_instances, default_active_instance))->layer->index+1-1);
    }
    event_1670_27_end: ;
}
void Frames::event_func_5990()
{
    // event 1671_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1671_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1671_27_end;
        breakableruins_1184_instances.clear_selection();
        if (!check_overlap(minibossganseki_1490_instances, breakableruins_1184_instances)) goto event_1671_27_end;
        for (ObjectIterator it(breakableruins_1184_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, get_min(get_max(get_max(get_abs(((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(4)*1.5), 3)*((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(9), -10), 10));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(5)/math_helper/2.0);
            ((Active*)*it)->alterables->flags.enable(6);
        }
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(10, 4);
        }
    }
    event_1671_27_end: ;
}
void Frames::event_func_5991()
{
    // event 1672_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1672_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1672_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(10, 1);
        }
    }
    event_1672_27_end: ;
}
void Frames::event_func_5992()
{
    // event 1673_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1673_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1673_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1673_27_end: ;
}
void Frames::event_func_5993()
{
    // event 1676_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1676_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1676_27_end: ;
}
void Frames::event_func_5994()
{
    // event 1677_27
    bool or_result_1677_27 = false;
    bool or_temp_result_1677_27_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1677_27_0_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (8))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1677_27_0_end;
        or_result_1677_27 = true;
        or_temp_result_1677_27_0 = true;
    }
    or_event_1677_27_0_end: ;
    minibossganseki_1490_instances.clear_saved_selection();
    if (or_temp_result_1677_27_0) {
        minibossganseki_1490_instances.save_selection();
    }
    // event 1677_27
    bool or_temp_result_1677_27_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1677_27_1_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1677_27_1_end;
        or_result_1677_27 = true;
        or_temp_result_1677_27_1 = true;
        or_event_1677_27_1_end: ;
        if (or_temp_result_1677_27_1) {
            minibossganseki_1490_instances.save_selection();
        }
        if (!or_result_1677_27) goto or_final_or_event_1677_27_1_end;
        minibossganseki_1490_instances.empty_selection();
        if (or_temp_result_1677_27_0 || or_temp_result_1677_27_1) {
            minibossganseki_1490_instances.restore_selection();
        }
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    or_final_or_event_1677_27_1_end: ;
}
void Frames::event_func_5995()
{
    // event 1678_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1678_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1678_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.2, 0));
        }
    }
    event_1678_27_end: ;
}
void Frames::event_func_5996()
{
    // event 1679_27
    bool or_result_1679_27 = false;
    bool or_temp_result_1679_27_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1679_27_0_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1679_27_0_end;
        or_result_1679_27 = true;
        or_temp_result_1679_27_0 = true;
    }
    or_event_1679_27_0_end: ;
    minibossganseki_1490_instances.clear_saved_selection();
    if (or_temp_result_1679_27_0) {
        minibossganseki_1490_instances.save_selection();
    }
    // event 1679_27
    bool or_temp_result_1679_27_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto or_event_1679_27_1_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto or_event_1679_27_1_end;
        or_result_1679_27 = true;
        or_temp_result_1679_27_1 = true;
        or_event_1679_27_1_end: ;
        if (or_temp_result_1679_27_1) {
            minibossganseki_1490_instances.save_selection();
        }
        if (!or_result_1679_27) goto or_final_or_event_1679_27_1_end;
        minibossganseki_1490_instances.empty_selection();
        if (or_temp_result_1679_27_0 || or_temp_result_1679_27_1) {
            minibossganseki_1490_instances.restore_selection();
        }
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, get_max(sin_deg(get_max(0, ((Active*)*it)->alterables->values.get(13)))*-48, -24));
            ((Active*)*it)->alterables->values.set(13, get_min(((Active*)*it)->alterables->values.get(13)+3, 180));
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    or_final_or_event_1679_27_1_end: ;
}
void Frames::event_func_5997()
{
    // event 1680_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1680_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (90))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1680_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(13, 1);
        }
    }
    event_1680_27_end: ;
}
void Frames::event_func_5998()
{
    // event 1681_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1681_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1681_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->force_frame(8);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1681_27_end: ;
}
void Frames::event_func_5999()
{
    // event 1682_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1682_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) == (180))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1682_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(14, 1);
        }
    }
    event_1682_27_end: ;
}
void Frames::event_func_6000()
{
    // event 1683_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1683_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1683_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_min(((Active*)*it)->alterables->values.get(11)+0.4, 9));
        }
    }
    event_1683_27_end: ;
}
void Frames::event_func_6001()
{
    // event 1684_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1684_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (9))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1684_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1684_27_end: ;
}
void Frames::event_func_6002()
{
    // event 1685_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1685_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1685_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(2, 200);
        }
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, get_max(((Active*)*it)->alterables->values.get(13), 91));
        }
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1685_27_end: ;
}
void Frames::event_func_6003()
{
    // event 1686_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1686_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1686_27_end;
        if (not_always_1686_27 > loop_count) {
            not_always_1686_27 = loop_count + 2;
            goto event_1686_27_end;
        }
        not_always_1686_27 = loop_count + 2;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1686_27_end: ;
}
