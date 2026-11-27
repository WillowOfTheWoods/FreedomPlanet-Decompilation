#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::test_collisions_38()
{
    test_collisions(enemyfragbomb_2049_instances, enemyhoppermkii_2200_instances, 1, 1, (EventFunction)&Frames::col_0_36);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(enemylimiter_350_instances, bosscrystalspikespawner1_2294_instances, 1, 1, (EventFunction)&Frames::col_4_38);
    test_collisions(enemylimiter_350_instances, gimmickcrusherplatform_2306_instances, 2, 1, (EventFunction)&Frames::col_5_38);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 268435456, 4, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 134217728, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 67108864, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(player_389_instances, gimmickcannonbullet_2050_instances, 1, 1, (EventFunction)&Frames::col_9_36);
    test_collisions(qualifier_14, monitorbomb_563_instances, 2147483648, 1, (EventFunction)&Frames::col_8_37);
    test_collisions(qualifier_7, effectsdebris_319_instances, 33554432, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(enemylimiter_350_instances, bosscrystalspikespawner2_2295_instances, 4, 1, (EventFunction)&Frames::col_14_38);
    test_collisions(qualifier_7, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(hazardspikesup_558_instances, enemyrotorbladespikes_2204_instances, 1, 1, (EventFunction)&Frames::col_16_36);
    test_collisions(qualifier_7, objectcrystal_279_instances, 8388608, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(enemylimiter_350_instances, enemyrotorblade_2205_instances, 8, 1, (EventFunction)&Frames::col_19_38);
    test_collisions(enemyhoppermkii_2200_instances, enemyrotorbladespikes_2204_instances, 2, 2, (EventFunction)&Frames::col_22_36);
    test_collisions(playercharactersensor_383_instances, enemyslimeburst_652_instances, 2, 1, (EventFunction)&Frames::col_11_16);
    test_collisions(player_389_instances, bosshomingspark_2278_instances, 2, 1, (EventFunction)&Frames::col_22_38);
    test_collisions(playersensorbottombig_397_instances, levelsbmovingblock1_2310_instances, 1, 1, (EventFunction)&Frames::col_23_38);
    test_collisions(qualifier_20, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 4, (EventFunction)&Frames::col_8_13);
    test_collisions(playerreflect_447_instances, bosshomingspark_2278_instances, 8, 2, (EventFunction)&Frames::col_26_38);
    test_collisions(player_389_instances, enemyfragbomb_2049_instances, 8, 2, (EventFunction)&Frames::col_27_36);
    test_collisions(playerreflect_447_instances, enemyfragbomb_2049_instances, 16, 4, (EventFunction)&Frames::col_29_36);
    test_collisions(qualifier_7, enemypellet_863_instances, 2097152, 8, (EventFunction)&Frames::col_8_20);
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
    for (it1 = enemyfragbomb_2049_instances.begin(); it1 != enemyfragbomb_2049_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_31_36();
    }
    for (it1 = bosshomingspark_2278_instances.begin(); it1 != bosshomingspark_2278_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_32_38();
    }
    for (it1 = breakablespike2_2123_instances.begin(); it1 != breakablespike2_2123_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_30_26();
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
    for (it1 = bosscrystalspire_2293_instances.begin(); it1 != bosscrystalspire_2293_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_36_38();
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
void Frames::event_func_9248()
{
    // event 1544_38
    bool or_result_1544_38 = false;
    bool or_temp_result_1544_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1544_38_0_end;
        if (!((((Active*)foreach_instance_magnetizer)->alterables->values.get(3)) == (0))) goto or_event_1544_38_0_end;
        if (!((((Active*)foreach_instance_magnetizer)->alterables->values.get(5)) == (1))) goto or_event_1544_38_0_end;
        if (!((((Active*)foreach_instance_magnetizer)->get_x()) > (((Active*)foreach_instance_magnetizer)->alterables->values.get(4)+((Active*)foreach_instance_magnetizer)->alterables->values.get(6)))) goto or_event_1544_38_0_end;
        or_result_1544_38 = true;
        or_temp_result_1544_38_0 = true;
    }
    or_event_1544_38_0_end: ;
    // event 1544_38
    bool or_temp_result_1544_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1544_38_1_end;
        if (!((((Active*)foreach_instance_magnetizer)->alterables->values.get(3)) == (0))) goto or_event_1544_38_1_end;
        if (!((((Active*)foreach_instance_magnetizer)->alterables->values.get(5)) == (-1))) goto or_event_1544_38_1_end;
        if (!((((Active*)foreach_instance_magnetizer)->get_x()) < (((Active*)foreach_instance_magnetizer)->alterables->values.get(4)-((Active*)foreach_instance_magnetizer)->alterables->values.get(6)))) goto or_event_1544_38_1_end;
        or_result_1544_38 = true;
        or_temp_result_1544_38_1 = true;
        or_event_1544_38_1_end: ;
        if (!or_result_1544_38) goto or_final_or_event_1544_38_1_end;
        ((Active*)((Active*)foreach_instance_magnetizer))->alterables->values.set(5, 0-((Active*)foreach_instance_magnetizer)->alterables->values.get(5));
    }
    or_final_or_event_1544_38_1_end: ;
}
void Frames::event_func_9249()
{
    // event 1545_38
    {
        if (!(group_main_engine_1)) goto event_1545_38_end;
        if (((Active*)foreach_instance_magnetizer)->is_near_border(-100)) goto event_1545_38_end;
        if (!((((Active*)foreach_instance_magnetizer)->alterables->values.get(3)) == (0))) goto event_1545_38_end;
        ((Active*)((Active*)foreach_instance_magnetizer))->set_x(((Active*)foreach_instance_magnetizer)->get_x()+3*((Active*)foreach_instance_magnetizer)->alterables->values.get(5));
        ((Active*)((Active*)foreach_instance_magnetizer))->alterables->values.add(8, 1);
    }
    event_1545_38_end: ;
}
void Frames::event_func_9250()
{
    // event 1547_38
    {
        if (!(group_main_engine_1)) goto event_1547_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->get_x()) > (((Active*)foreach_instance_magnetizer)->get_x()-6))) goto event_1547_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->get_x()) < (((Active*)foreach_instance_magnetizer)->get_x()+6))) goto event_1547_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->get_y()) < (((Active*)foreach_instance_magnetizer)->get_y()+200))) goto event_1547_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->get_y()) > (((Active*)foreach_instance_magnetizer)->get_y()))) goto event_1547_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(0)) == (0))) goto event_1547_38_end;
        if (!((((Active*)foreach_instance_magnetizer)->alterables->values.get(3)) == (0))) goto event_1547_38_end;
        if (!((((Active*)foreach_instance_magnetizer)->alterables->values.get(8)) > (30))) goto event_1547_38_end;
        if (!((((Active*)foreach_instance_magnetizer)->alterables->values.get(10)) == (0))) goto event_1547_38_end;
        ((Active*)((Active*)foreach_instance_magnetizer))->alterables->values.add(3, 1);
        ((Active*)((Active*)foreach_instance_magnetizer))->alterables->values.set(8, 0);
    }
    event_1547_38_end: ;
}
void Frames::foreach_magnetizer_38()
{
    event_func_9248();
    event_func_9249();
    event_func_9250();
}
void Frames::event_func_9251()
{
    // event 1563_38
    {
        if (!(group_main_engine_1)) goto event_1563_38_end;
        FrameObject * fixed_test_1563_38_0 = get_object_from_fixed(((Active*)foreach_instance_mt2)->alterables->values.get(1));
        if (fixed_test_1563_38_0 == NULL) goto event_1563_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((*it) == fixed_test_1563_38_0)) it.deselect();
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1563_38_end;
        ((Active*)((Active*)foreach_instance_mt2))->alterables->values.set(0, ((Active*)get_single(enemymagnetizer_2300_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)foreach_instance_mt2))->set_x(((Active*)get_single(enemymagnetizer_2300_instances, default_active_instance))->get_x());
        ((Active*)((Active*)foreach_instance_mt2))->set_y(((Active*)get_single(enemymagnetizer_2300_instances, default_active_instance))->get_y()+((Active*)get_single(enemymagnetizer_2300_instances, default_active_instance))->alterables->values.get(7));
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)foreach_instance_mt2)->alterables->values.get(2));
        }
    }
    event_1563_38_end: ;
}
void Frames::foreach_mt2_38()
{
    event_func_9251();
}
void Frames::event_func_9252()
{
    // event 1564_38
    {
        if (!(group_main_engine_1)) goto event_1564_38_end;
        FrameObject * fixed_test_1564_38_0 = get_object_from_fixed(((Active*)foreach_instance_mt3)->alterables->values.get(1));
        if (fixed_test_1564_38_0 == NULL) goto event_1564_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((*it) == fixed_test_1564_38_0)) it.deselect();
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1564_38_end;
        {
            FrameObject * parent = ((Active*)get_single(enemymagnetizer_2300_instances));
            if (parent == NULL) goto pos_end_1564_38_1;
            ((Active*)foreach_instance_mt3)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1564_38_1: ;
        }
        ((Active*)((Active*)foreach_instance_mt3))->set_y_scale(get_max(0, ((Active*)get_single(enemymagnetizer_2300_instances, default_active_instance))->alterables->values.get(7)-7));
        ((Active*)((Active*)foreach_instance_mt3))->alterables->values.set(0, ((Active*)get_single(enemymagnetizer_2300_instances, default_active_instance))->alterables->values.get(3));
    }
    event_1564_38_end: ;
}
void Frames::foreach_mt3_38()
{
    event_func_9252();
}
void Frames::event_func_9253()
{
    // event 1576_38
    {
        if (!(group_main_engine_1)) goto event_1576_38_end;
        if (!((((Active*)foreach_instance_crate)->alterables->values.get(0)) == (1))) goto event_1576_38_end;
        FrameObject * fixed_test_1576_38_0 = get_object_from_fixed(((Active*)foreach_instance_crate)->alterables->values.get(1));
        if (fixed_test_1576_38_0 == NULL) goto event_1576_38_end;
        enemymagnetizerhand_2298_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            if (!((*it) == fixed_test_1576_38_0)) it.deselect();
        }
        if (!enemymagnetizerhand_2298_instances.has_selection()) goto event_1576_38_end;
        ((Active*)((Active*)foreach_instance_crate))->set_x(((Active*)get_single(enemymagnetizerhand_2298_instances, default_active_instance))->get_x()+((Active*)foreach_instance_crate)->alterables->values.get(4));
        ((Active*)((Active*)foreach_instance_crate))->set_y(((Active*)get_single(enemymagnetizerhand_2298_instances, default_active_instance))->get_action_y()+((Active*)foreach_instance_crate)->alterables->values.get(2));
        ((Active*)((Active*)foreach_instance_crate))->alterables->values.set(5, ((Active*)get_single(enemymagnetizerhand_2298_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)foreach_instance_crate))->alterables->values.set(7, 3);
    }
    event_1576_38_end: ;
}
void Frames::foreach_crate_38()
{
    event_func_9253();
}
void Frames::event_func_9254()
{
    // event 1463_38
    {
        if (!(group_main_engine_1)) goto event_1463_38_end;
        enemylimiter_350_instances.clear_selection();
        for (ObjectIterator it(enemylimiter_350_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_ch1)->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_ch1)->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_ch1)->get_box_index(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_ch1)->get_box_index(3)))) { it.deselect(); continue; }
        }
        if (!enemylimiter_350_instances.has_selection()) goto event_1463_38_end;
        ((Active*)((Active*)foreach_instance_ch1))->alterables->values.set(1, 0);
    }
    event_1463_38_end: ;
}
void Frames::foreach_ch1_38()
{
    event_func_9254();
}
void Frames::event_func_9255()
{
    // event 1464_38
    {
        if (!(group_main_engine_1)) goto event_1464_38_end;
        enemylimiter_350_instances.clear_selection();
        for (ObjectIterator it(enemylimiter_350_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_ch2)->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_ch2)->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_ch2)->get_box_index(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_ch2)->get_box_index(3)))) { it.deselect(); continue; }
        }
        if (!enemylimiter_350_instances.has_selection()) goto event_1464_38_end;
        ((Active*)((Active*)foreach_instance_ch2))->alterables->values.set(1, 0);
    }
    event_1464_38_end: ;
}
void Frames::foreach_ch2_38()
{
    event_func_9255();
}
void Frames::event_func_9256()
{
    // event 536_38
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_536_38_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_536_38_end;
        FrameObject * single_instance_536_38_0; single_instance_536_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_536_38_0 == NULL)
                    single_instance_536_38_0 = new_obj;
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
                loop_spawndebris_38();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_536_38_end: ;
}
void Frames::event_func_9257()
{
    // event 553_38
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_553_38_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_553_38_end;
        FrameObject * single_instance_553_38_0; single_instance_553_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_553_38_0 == NULL)
                    single_instance_553_38_0 = new_obj;
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
                loop_spawndebris_38();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_553_38_end: ;
}
void Frames::event_func_9258()
{
    // event 687_38
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_687_38_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_687_38_end;
        FrameObject * single_instance_687_38_0; single_instance_687_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_687_38_0 == NULL)
                    single_instance_687_38_0 = new_obj;
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
                loop_spawndebris_38();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_687_38_end: ;
}
void Frames::event_func_9259()
{
    // event 1397_38
    {
        if (!(group_main_engine_1)) goto event_1397_38_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1397_38_end;
        if (not_always_1397_38 > loop_count) {
            not_always_1397_38 = loop_count + 2;
            goto event_1397_38_end;
        }
        not_always_1397_38 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1397_38_end: ;
}
void Frames::event_func_9260()
{
    // event 1398_38
    {
        if (!(group_main_engine_1)) goto event_1398_38_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1398_38_end;
        if (not_always_1398_38 > loop_count) {
            not_always_1398_38 = loop_count + 2;
            goto event_1398_38_end;
        }
        not_always_1398_38 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1398_38_end: ;
}
void Frames::event_func_9261()
{
    // event 1430_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1430_38_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1430_38_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1430_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1430_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1430_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1430_38_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1430_38_end;
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
    }
    event_1430_38_end: ;
}
void Frames::event_func_9262()
{
    // event 1431_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1431_38_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1431_38_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1431_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1431_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1431_38_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1431_38_end;
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
                loop_player01allsensors_13();
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
    event_1431_38_end: ;
}
void Frames::event_func_9263()
{
    // event 1432_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1)) goto event_1432_38_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) <= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1432_38_end;
        playersensortopbig_395_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_23)) goto event_1432_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (0))) goto event_1432_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1432_38_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1432_38_end;
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
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
    }
    event_1432_38_end: ;
}
void Frames::event_func_9264()
{
    // event 1444_38
    {
        if (!(group_main_engine_1)) goto event_1444_38_end;
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (30))) { it.deselect(); continue; }
        }
        if (!gimmickcannonbase_2198_instances.has_selection()) goto event_1444_38_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        FrameObject * single_instance_1444_38_0; single_instance_1444_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickcannonbase_2198_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1444_38_0 == NULL)
                    single_instance_1444_38_0 = new_obj;
            }
        }
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_38();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1444_38_end: ;
}
void Frames::event_func_9265()
{
    // event 1458_38
    {
        if (!(group_main_engine_1)) goto event_1458_38_end;
        if (!((((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)) > (0))) goto event_1458_38_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (0))) goto event_1458_38_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1458_38_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(0)) == (((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(2)))) goto event_1458_38_end;
        ((Active*)get_instance(switchplatform_2100_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(switchplatform_2100_instances))->alterables->values.set(1, get_max(((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)-0.25, 0));
        ((Active*)get_instance(switchdoor_735_instances))->set_y(((Active*)get_instance(switchdoor_735_instances))->get_y()+1);
        ((Active*)get_instance(switchdoor_735_instances))->alterables->values.add(2, -1);
    }
    event_1458_38_end: ;
}
void Frames::event_func_9266()
{
    // event 1459_38
    {
        if (!(group_main_engine_1)) goto event_1459_38_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1459_38_end;
        if (!((((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)) > (0))) goto event_1459_38_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (0))) goto event_1459_38_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1459_38_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(0)) == (((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(2)))) goto event_1459_38_end;
        ((Active*)get_instance(switchplatform_2100_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(switchplatform_2100_instances))->alterables->values.set(1, get_max(((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)-0.25, 0));
        ((Active*)get_instance(switchdoor_735_instances))->set_y(((Active*)get_instance(switchdoor_735_instances))->get_y()+1);
        ((Active*)get_instance(switchdoor_735_instances))->alterables->values.add(2, -1);
    }
    event_1459_38_end: ;
}
void Frames::event_func_9267()
{
    // event 1462_38
    {
        if (!(group_main_engine_1)) goto event_1462_38_end;
        gimmickchainwallmaskup_2307_instances.clear_selection();
        for (ObjectIterator it(gimmickchainwallmaskup_2307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1));
        }
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        for (ObjectIterator it(gimmickchainwallmaskdown_2305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(gimmickchainwallmaskup_2307_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -3);
        }
        for (ObjectIterator it(gimmickchainwallmaskdown_2305_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
        gimmickchainwallup_2291_instances.clear_selection();
        for (ObjectIterator it(gimmickchainwallup_2291_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickchainwallmaskup_2307_instances, it.current_index));
            if (parent == NULL) goto pos_end_1462_38_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1462_38_0: ;
        }
        gimmickchainwalldown_2292_instances.clear_selection();
        for (ObjectIterator it(gimmickchainwalldown_2292_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickchainwallmaskdown_2305_instances, it.current_index));
            if (parent == NULL) goto pos_end_1462_38_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1462_38_1: ;
        }
        {
            SavedSelection extra_gimmickchainwallmaskup_2307_instances(gimmickchainwallmaskup_2307_instances);
            for (SavedIterator selected(extra_gimmickchainwallmaskup_2307_instances); !selected.end(); ++selected) {
                foreach_instance_ch1 = ((Active*)*selected);
                foreach_ch1_38();
            }
        }
        {
            SavedSelection extra_gimmickchainwallmaskdown_2305_instances(gimmickchainwallmaskdown_2305_instances);
            for (SavedIterator selected(extra_gimmickchainwallmaskdown_2305_instances); !selected.end(); ++selected) {
                foreach_instance_ch2 = ((Active*)*selected);
                foreach_ch2_38();
            }
        }
        levelscrollingchainup_2288_instances.clear_selection();
        for (ObjectIterator it(levelscrollingchainup_2288_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+64-(global_values->get(3)*3)%math_helper%64);
        }
        levelscrollingchaindown_2289_instances.clear_selection();
        for (ObjectIterator it(levelscrollingchaindown_2289_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+(global_values->get(3)*3)%math_helper%64);
        }
    }
    event_1462_38_end: ;
}
void Frames::event_func_9268()
{
    // event 1465_38
    {
        if (!(group_main_engine_1)) goto event_1465_38_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickchainwallmaskup_2307_instances)) goto event_1465_38_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->get_x()) < (((Active*)get_single(gimmickchainwallmaskup_2307_instances, default_active_instance))->get_x()))) goto event_1465_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1465_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, -2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_1465_38_end: ;
}
void Frames::event_func_9269()
{
    // event 1466_38
    {
        if (!(group_main_engine_1)) goto event_1466_38_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickchainwallmaskup_2307_instances)) goto event_1466_38_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->get_x()) >= (((Active*)get_single(gimmickchainwallmaskup_2307_instances, default_active_instance))->get_x()))) goto event_1466_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1466_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_1466_38_end: ;
}
void Frames::event_func_9270()
{
    // event 1467_38
    {
        if (!(group_main_engine_1)) goto event_1467_38_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickchainwallmaskdown_2305_instances)) goto event_1467_38_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->get_x()) < (((Active*)get_single(gimmickchainwallmaskdown_2305_instances, default_active_instance))->get_x()))) goto event_1467_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1467_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, -2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_1467_38_end: ;
}
void Frames::event_func_9271()
{
    // event 1468_38
    {
        if (!(group_main_engine_1)) goto event_1468_38_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickchainwallmaskdown_2305_instances)) goto event_1468_38_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->get_x()) >= (((Active*)get_single(gimmickchainwallmaskdown_2305_instances, default_active_instance))->get_x()))) goto event_1468_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1468_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
    }
    event_1468_38_end: ;
}
void Frames::event_func_9272()
{
    // event 1470_38
    {
        if (!(group_main_engine_1)) goto event_1470_38_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickchainwallmaskup_2307_instances)) goto event_1470_38_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_1470_38_end;
        ((Counter*)get_instance(guirings_122_instances))->set(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
    }
    event_1470_38_end: ;
}
void Frames::event_func_9273()
{
    // event 1473_38
    {
        if (!(group_main_engine_1)) goto event_1473_38_end;
        gimmicksbbar_2308_instances.clear_selection();
        for (ObjectIterator it(gimmicksbbar_2308_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!gimmicksbbar_2308_instances.has_selection()) goto event_1473_38_end;
        for (ObjectIterator it(gimmicksbbar_2308_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
    }
    event_1473_38_end: ;
}
void Frames::event_func_9274()
{
    // event 1474_38
    {
        if (!(group_main_engine_1)) goto event_1474_38_end;
        gimmicksbbar_2308_instances.clear_selection();
        for (ObjectIterator it(gimmicksbbar_2308_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (180))) { it.deselect(); continue; }
        }
        if (!gimmicksbbar_2308_instances.has_selection()) goto event_1474_38_end;
        for (ObjectIterator it(gimmicksbbar_2308_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1474_38_end: ;
}
void Frames::event_func_9275()
{
    // event 1475_38
    {
        if (!(group_main_engine_1)) goto event_1475_38_end;
        gimmicksbbarmask_2309_instances.clear_selection();
        for (ObjectIterator it(gimmicksbbarmask_2309_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!gimmicksbbarmask_2309_instances.has_selection()) goto event_1475_38_end;
        for (ObjectIterator it(gimmicksbbarmask_2309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
    }
    event_1475_38_end: ;
}
void Frames::event_func_9276()
{
    // event 1476_38
    {
        if (!(group_main_engine_1)) goto event_1476_38_end;
        gimmicksbbarmask_2309_instances.clear_selection();
        for (ObjectIterator it(gimmicksbbarmask_2309_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (180))) { it.deselect(); continue; }
        }
        if (!gimmicksbbarmask_2309_instances.has_selection()) goto event_1476_38_end;
        for (ObjectIterator it(gimmicksbbarmask_2309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
    }
    event_1476_38_end: ;
}
void Frames::event_func_9277()
{
    // event 1477_38
    {
        if (!(group_main_engine_1)) goto event_1477_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (41))) goto event_1477_38_end;
        qualifier_23.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_23.has_selection()) goto event_1477_38_end;
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(17, 1);
        }
    }
    event_1477_38_end: ;
}
void Frames::event_func_9278()
{
    // event 1478_38
    {
        if (!(group_main_engine_1)) goto event_1478_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (41))) goto event_1478_38_end;
        {
            double check_value = 0;
            qualifier_23.clear_selection();
            for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(16) == check_value)) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(17, 40);
        }
    }
    event_1478_38_end: ;
}
void Frames::event_func_9279()
{
    // event 1479_38
    {
        if (!(group_main_engine_1)) goto event_1479_38_end;
        gimmicksbbarmask_2309_instances.clear_selection();
        for (ObjectIterator it(gimmicksbbarmask_2309_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
        }
        if (!gimmicksbbarmask_2309_instances.has_selection()) goto event_1479_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        // icache destruction
        gimmickbgbarmask_3266_instances.clear_selection();
        gimmickhangingmovingsensor2_1247_instances.clear_selection();
        gimmickwaterlevelmask1_2852_instances.clear_selection();
        gimmickhangingmovingsensor_1962_instances.clear_selection();
        gimmickwaterlevelmask2_2853_instances.clear_selection();
        gimmickhangingmovingsensor_737_instances.clear_selection();
        gimmickhangingidleswitch_1257_instances.clear_selection();
        gimmickhangingidlesensor_740_instances.clear_selection();
        gimmickhangingidleballoon_1973_instances.clear_selection();
        gimmickhangingidlemover_1259_instances.clear_selection();
        for (QualifierIterator it(qualifier_23); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 0);
        }
    }
    event_1479_38_end: ;
}
void Frames::event_func_9280()
{
    // event 1481_38
    {
        if (!(group_main_engine_1)) goto event_1481_38_end;
        gimmickcrusherchain_2290_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherchain_2290_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(gimmickcrusherplatform_2306_instances, it.current_index));
            if (parent == NULL) goto pos_end_1481_38_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1481_38_0: ;
        }
        gimmickcrusherplatform_2306_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/5)%math_helper%8);
        }
    }
    event_1481_38_end: ;
}
void Frames::event_func_9281()
{
    // event 1482_38
    {
        if (!(group_main_engine_1)) goto event_1482_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1482_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
        }
    }
    event_1482_38_end: ;
}
void Frames::event_func_9282()
{
    // event 1483_38
    {
        if (!(group_main_engine_1)) goto event_1483_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1483_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1483_38_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickcrusherplatform_2306_instances)) goto event_1483_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1483_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 2);
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
    event_1483_38_end: ;
}
void Frames::event_func_9283()
{
    // event 1485_38
    {
        if (!(group_main_engine_1)) goto event_1485_38_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickcrusherplatform_2306_instances)) goto event_1485_38_end;
        if (!(((Active*)get_instance(playersensortopbig_395_instances))->overlaps_background())) goto event_1485_38_end;
        ((Counter*)get_instance(guirings_122_instances))->set(0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 9);
    }
    event_1485_38_end: ;
}
void Frames::event_func_9284()
{
    // event 1486_38
    {
        if (!(group_main_engine_1)) goto event_1486_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-48))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+48))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-(((Active*)*it)->alterables->values.get(0)-((Active*)*it)->get_y())-40))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1486_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1486_38_end: ;
}
void Frames::event_func_9285()
{
    // event 1487_38
    {
        if (!(group_main_engine_1)) goto event_1487_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1487_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, 0.25);
        }
    }
    event_1487_38_end: ;
}
void Frames::event_func_9286()
{
    // event 1488_38
    {
        if (!(group_main_engine_1)) goto event_1488_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        if (!check_overlap(gimmickcrusherplatform_2306_instances, breakablefloor1_1760_instances)) goto event_1488_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1488_38_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1488_38_end: ;
}
void Frames::event_func_9287()
{
    // event 1489_38
    {
        if (!(group_main_engine_1)) goto event_1489_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(gimmickcrusherplatform_2306_instances, breakablefloor2_1761_instances)) goto event_1489_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1489_38_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1489_38_end: ;
}
void Frames::event_func_9288()
{
    // event 1490_38
    {
        if (!(group_main_engine_1)) goto event_1490_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1490_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        media.play_id(SOUND_MINESTEEL_75, -1, 1);
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1490_38_end: ;
}
void Frames::event_func_9289()
{
    // event 1491_38
    {
        if (!(group_main_engine_1)) goto event_1491_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (2))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1491_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1491_38_end: ;
}
void Frames::event_func_9290()
{
    // event 1492_38
    {
        if (!(group_main_engine_1)) goto event_1492_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (60))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1492_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1492_38_end: ;
}
void Frames::event_func_9291()
{
    // event 1493_38
    {
        if (!(group_main_engine_1)) goto event_1493_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!gimmickcrusherplatform_2306_instances.has_selection()) goto event_1493_38_end;
        if (!check_not_overlap(gimmickcrusherplatform_2306_instances, player_389_instances)) goto event_1493_38_end;
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1493_38_end: ;
}
void Frames::event_func_9292()
{
    // event 1494_38
    {
        if (!(group_main_engine_1)) goto event_1494_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1494_38_end;
        playersensortopbig_395_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, gimmickcrusherplatform_2306_instances)) goto event_1494_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 15);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1494_38_end: ;
}
void Frames::event_func_9293()
{
    // event 1504_38
    {
        if (!(group_main_engine_1)) goto event_1504_38_end;
        levelsbmovingblock1_2310_instances.clear_selection();
        for (ObjectIterator it(levelsbmovingblock1_2310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!levelsbmovingblock1_2310_instances.has_selection()) goto event_1504_38_end;
        for (ObjectIterator it(levelsbmovingblock1_2310_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+0.25, 15));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1504_38_end: ;
}
void Frames::event_func_9294()
{
    // event 1505_38
    {
        if (!(group_main_engine_1)) goto event_1505_38_end;
        levelsbmovingblock1_2310_instances.clear_selection();
        for (ObjectIterator it(levelsbmovingblock1_2310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!levelsbmovingblock1_2310_instances.has_selection()) goto event_1505_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1505_38_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levelsbmovingblock1_2310_instances)) goto event_1505_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, ((Active*)get_single(levelsbmovingblock1_2310_instances, default_active_instance))->alterables->values.get(0));
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
    event_1505_38_end: ;
}
void Frames::event_func_9295()
{
    // event 1506_38
    {
        if (!(group_main_engine_1)) goto event_1506_38_end;
        levelsbmovingblock1_2310_instances.clear_selection();
        for (ObjectIterator it(levelsbmovingblock1_2310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!levelsbmovingblock1_2310_instances.has_selection()) goto event_1506_38_end;
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(levelsbmovingblock1_2310_instances, breakablefloor2_1761_instances)) goto event_1506_38_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1506_38_end: ;
}
void Frames::event_func_9296()
{
    // event 1507_38
    {
        if (!(group_main_engine_1)) goto event_1507_38_end;
        levelsbmovingblock1_2310_instances.clear_selection();
        for (ObjectIterator it(levelsbmovingblock1_2310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!levelsbmovingblock1_2310_instances.has_selection()) goto event_1507_38_end;
        breakablefloor1_1760_instances.clear_selection();
        if (!check_overlap(levelsbmovingblock1_2310_instances, breakablefloor1_1760_instances)) goto event_1507_38_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1507_38_end: ;
}
void Frames::event_func_9297()
{
    // event 1508_38
    {
        if (!(group_main_engine_1)) goto event_1508_38_end;
        levelsbmovingblock1_2310_instances.clear_selection();
        for (ObjectIterator it(levelsbmovingblock1_2310_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!levelsbmovingblock1_2310_instances.has_selection()) goto event_1508_38_end;
        for (ObjectIterator it(levelsbmovingblock1_2310_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1508_38_end: ;
}
void Frames::event_func_9298()
{
    // event 1537_38
    bool or_result_1537_38 = false;
    bool or_temp_result_1537_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1537_38_0_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1537_38_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemydrone_2222_instances, qualifier_7)) goto or_event_1537_38_0_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1537_38_0_end;
        or_result_1537_38 = true;
        or_temp_result_1537_38_0 = true;
    }
    or_event_1537_38_0_end: ;
    enemydrone_2222_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1537_38_0) {
        enemydrone_2222_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1537_38
    bool or_temp_result_1537_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1537_38_1_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1537_38_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemydrone_2222_instances, qualifier_8)) goto or_event_1537_38_1_end;
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1537_38_1_end;
        or_result_1537_38 = true;
        or_temp_result_1537_38_1 = true;
    }
    or_event_1537_38_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1537_38_1) {
        enemydrone_2222_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1537_38
    bool or_temp_result_1537_38_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1537_38_2_end;
        enemydrone_2222_instances.clear_selection();
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrone_2222_instances.has_selection()) goto or_event_1537_38_2_end;
        or_result_1537_38 = true;
        or_temp_result_1537_38_2 = true;
        or_event_1537_38_2_end: ;
        if (or_temp_result_1537_38_2) {
            enemydrone_2222_instances.save_selection();
        }
        if (!or_result_1537_38) goto or_final_or_event_1537_38_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemydrone_2222_instances.empty_selection();
        if (or_temp_result_1537_38_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1537_38_0 || or_temp_result_1537_38_1 || or_temp_result_1537_38_2) {
            enemydrone_2222_instances.restore_selection();
        }
        if (or_temp_result_1537_38_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1537_38_0; single_instance_1537_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1537_38_0 == NULL)
                    single_instance_1537_38_0 = new_obj;
            }
        }
        FrameObject * single_instance_1537_38_1; single_instance_1537_38_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrone_2222_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1537_38_1 == NULL)
                    single_instance_1537_38_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemydrone_2222_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_38();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1537_38_2_end: ;
}
void Frames::event_func_9299()
{
    // event 1541_38
    {
        if (!(group_main_engine_1)) goto event_1541_38_end;
        {
            enemymagnetizer_2300_instances.clear_selection();
            SavedSelection extra_enemymagnetizer_2300_instances(enemymagnetizer_2300_instances);
            for (SavedIterator selected(extra_enemymagnetizer_2300_instances); !selected.end(); ++selected) {
                foreach_instance_magnetizer = ((Active*)*selected);
                foreach_magnetizer_38();
            }
        }
        {
            {
                foreach_instance_crate = ((Active*)get_instance(enemymagnetizercrate_2301_instances));
                foreach_crate_38();
            }
        }
        {
            enemymagnetizerhand_2298_instances.clear_selection();
            SavedSelection extra_enemymagnetizerhand_2298_instances(enemymagnetizerhand_2298_instances);
            for (SavedIterator selected(extra_enemymagnetizerhand_2298_instances); !selected.end(); ++selected) {
                foreach_instance_mt2 = ((Active*)*selected);
                foreach_mt2_38();
            }
        }
        {
            enemymagnetizerline_2299_instances.clear_selection();
            SavedSelection extra_enemymagnetizerline_2299_instances(enemymagnetizerline_2299_instances);
            for (SavedIterator selected(extra_enemymagnetizerline_2299_instances); !selected.end(); ++selected) {
                foreach_instance_mt3 = ((Active*)*selected);
                foreach_mt3_38();
            }
        }
    }
    event_1541_38_end: ;
}
void Frames::event_func_9300()
{
    // event 1542_38
    {
        if (!(group_main_engine_1)) goto event_1542_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(0)) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1542_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1542_38_end: ;
}
void Frames::event_func_9301()
{
    // event 1543_38
    {
        if (!(group_main_engine_1)) goto event_1543_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1543_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1543_38_end: ;
}
void Frames::event_func_9302()
{
    // event 1546_38
    bool or_result_1546_38 = false;
    bool or_temp_result_1546_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1546_38_0_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (192))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1546_38_0_end;
        or_result_1546_38 = true;
        or_temp_result_1546_38_0 = true;
    }
    or_event_1546_38_0_end: ;
    enemymagnetizer_2300_instances.clear_saved_selection();
    if (or_temp_result_1546_38_0) {
        enemymagnetizer_2300_instances.save_selection();
    }
    // event 1546_38
    bool or_temp_result_1546_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1546_38_1_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_y()-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1546_38_1_end;
        or_result_1546_38 = true;
        or_temp_result_1546_38_1 = true;
    }
    or_event_1546_38_1_end: ;
    if (or_temp_result_1546_38_1) {
        enemymagnetizer_2300_instances.save_selection();
    }
    // event 1546_38
    bool or_temp_result_1546_38_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1546_38_2_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (60))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1546_38_2_end;
        or_result_1546_38 = true;
        or_temp_result_1546_38_2 = true;
        or_event_1546_38_2_end: ;
        if (or_temp_result_1546_38_2) {
            enemymagnetizer_2300_instances.save_selection();
        }
        if (!or_result_1546_38) goto or_final_or_event_1546_38_2_end;
        enemymagnetizer_2300_instances.empty_selection();
        if (or_temp_result_1546_38_0 || or_temp_result_1546_38_1 || or_temp_result_1546_38_2) {
            enemymagnetizer_2300_instances.restore_selection();
        }
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    or_final_or_event_1546_38_2_end: ;
}
void Frames::event_func_9303()
{
    // event 1548_38
    bool or_result_1548_38 = false;
    bool or_temp_result_1548_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1548_38_0_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1548_38_0_end;
        or_result_1548_38 = true;
        or_temp_result_1548_38_0 = true;
    }
    or_event_1548_38_0_end: ;
    enemymagnetizer_2300_instances.clear_saved_selection();
    if (or_temp_result_1548_38_0) {
        enemymagnetizer_2300_instances.save_selection();
    }
    // event 1548_38
    bool or_temp_result_1548_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1548_38_1_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (5))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1548_38_1_end;
        or_result_1548_38 = true;
        or_temp_result_1548_38_1 = true;
        or_event_1548_38_1_end: ;
        if (or_temp_result_1548_38_1) {
            enemymagnetizer_2300_instances.save_selection();
        }
        if (!or_result_1548_38) goto or_final_or_event_1548_38_1_end;
        enemymagnetizer_2300_instances.empty_selection();
        if (or_temp_result_1548_38_0 || or_temp_result_1548_38_1) {
            enemymagnetizer_2300_instances.restore_selection();
        }
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    or_final_or_event_1548_38_1_end: ;
}
void Frames::event_func_9304()
{
    // event 1549_38
    {
        if (!(group_main_engine_1)) goto event_1549_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1549_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        media.play_id(SOUND_CABLE_LAUNCH_257, -1, 1);
    }
    event_1549_38_end: ;
}
void Frames::event_func_9305()
{
    // event 1550_38
    {
        if (!(group_main_engine_1)) goto event_1550_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1550_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 5);
        }
    }
    event_1550_38_end: ;
}
void Frames::event_func_9306()
{
    // event 1551_38
    {
        if (!(group_main_engine_1)) goto event_1551_38_end;
        enemymagnetizerhand_2298_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!enemymagnetizerhand_2298_instances.has_selection()) goto event_1551_38_end;
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1551_38_end: ;
}
void Frames::event_func_9307()
{
    // event 1552_38
    {
        if (!(group_main_engine_1)) goto event_1552_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (40))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1552_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1552_38_end: ;
}
void Frames::event_func_9308()
{
    // event 1553_38
    {
        if (!(group_main_engine_1)) goto event_1553_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1553_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 6);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(7)+8);
        }
    }
    event_1553_38_end: ;
}
void Frames::event_func_9309()
{
    // event 1554_38
    bool or_result_1554_38 = false;
    bool or_temp_result_1554_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1554_38_0_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1554_38_0_end;
        or_result_1554_38 = true;
        or_temp_result_1554_38_0 = true;
    }
    or_event_1554_38_0_end: ;
    enemymagnetizer_2300_instances.clear_saved_selection();
    if (or_temp_result_1554_38_0) {
        enemymagnetizer_2300_instances.save_selection();
    }
    // event 1554_38
    bool or_temp_result_1554_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1554_38_1_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1554_38_1_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymagnetizer_2300_instances, qualifier_7)) goto or_event_1554_38_1_end;
        or_result_1554_38 = true;
        or_temp_result_1554_38_1 = true;
    }
    or_event_1554_38_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1554_38_1) {
        enemymagnetizer_2300_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1554_38
    bool or_temp_result_1554_38_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1554_38_2_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1554_38_2_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemymagnetizer_2300_instances, qualifier_8)) goto or_event_1554_38_2_end;
        or_result_1554_38 = true;
        or_temp_result_1554_38_2 = true;
    }
    or_event_1554_38_2_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1554_38_2) {
        enemymagnetizer_2300_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1554_38
    bool or_temp_result_1554_38_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1554_38_3_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (200))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1554_38_3_end;
        or_result_1554_38 = true;
        or_temp_result_1554_38_3 = true;
        or_event_1554_38_3_end: ;
        if (or_temp_result_1554_38_3) {
            enemymagnetizer_2300_instances.save_selection();
        }
        if (!or_result_1554_38) goto or_final_or_event_1554_38_3_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemymagnetizer_2300_instances.empty_selection();
        if (or_temp_result_1554_38_0 || or_temp_result_1554_38_1 || or_temp_result_1554_38_2 || or_temp_result_1554_38_3) {
            enemymagnetizer_2300_instances.restore_selection();
        }
        if (or_temp_result_1554_38_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1554_38_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
        }
    }
    or_final_or_event_1554_38_3_end: ;
}
void Frames::event_func_9310()
{
    // event 1555_38
    {
        if (!(group_main_engine_1)) goto event_1555_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1555_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
        }
    }
    event_1555_38_end: ;
}
void Frames::event_func_9311()
{
    // event 1556_38
    {
        if (!(group_main_engine_1)) goto event_1556_38_end;
        enemymagnetizerhand_2298_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizerhand_2298_instances.has_selection()) goto event_1556_38_end;
        enemymagnetizercrate_2301_instances.clear_selection();
        if (!check_overlap(enemymagnetizerhand_2298_instances, enemymagnetizercrate_2301_instances)) goto event_1556_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(0)) == (0))) goto event_1556_38_end;
        FrameObject * single_instance_1556_38_0; single_instance_1556_38_0 = pick_random(enemymagnetizercrate_2301_instances);
        if (single_instance_1556_38_0 == NULL) goto event_1556_38_end;
        ((Active*)((Active*)single_instance_1556_38_0))->alterables->values.set(1, ((Active*)get_single(enemymagnetizerhand_2298_instances))->get_fixed());
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
        }
        ((Active*)((Active*)single_instance_1556_38_0))->alterables->values.set(4, ((Active*)single_instance_1556_38_0)->get_x()-((Active*)get_single(enemymagnetizerhand_2298_instances, default_active_instance))->get_x());
        ((Active*)((Active*)single_instance_1556_38_0))->alterables->values.set(2, ((Active*)single_instance_1556_38_0)->get_y()-((Active*)get_single(enemymagnetizerhand_2298_instances, default_active_instance))->get_action_y());
        ((Active*)((Active*)single_instance_1556_38_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1556_38_0))->alterables->values.set(5, 1);
    }
    event_1556_38_end: ;
}
void Frames::event_func_9312()
{
    // event 1557_38
    {
        if (!(group_main_engine_1)) goto event_1557_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1557_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-6, 0));
        }
    }
    event_1557_38_end: ;
}
void Frames::event_func_9313()
{
    // event 1558_38
    {
        if (!(group_main_engine_1)) goto event_1558_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1558_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1558_38_end: ;
}
void Frames::event_func_9314()
{
    // event 1559_38
    {
        if (!(group_main_engine_1)) goto event_1559_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1559_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1559_38_end: ;
}
void Frames::event_func_9315()
{
    // event 1560_38
    bool or_result_1560_38 = false;
    bool or_temp_result_1560_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1560_38_0_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1560_38_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemymagnetizer_2300_instances, qualifier_7)) goto or_event_1560_38_0_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1560_38_0_end;
        or_result_1560_38 = true;
        or_temp_result_1560_38_0 = true;
    }
    or_event_1560_38_0_end: ;
    enemymagnetizer_2300_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1560_38_0) {
        enemymagnetizer_2300_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1560_38
    bool or_temp_result_1560_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1560_38_1_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1560_38_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemymagnetizer_2300_instances, qualifier_8)) goto or_event_1560_38_1_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1560_38_1_end;
        or_result_1560_38 = true;
        or_temp_result_1560_38_1 = true;
    }
    or_event_1560_38_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1560_38_1) {
        enemymagnetizer_2300_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1560_38
    bool or_temp_result_1560_38_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1560_38_2_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto or_event_1560_38_2_end;
        or_result_1560_38 = true;
        or_temp_result_1560_38_2 = true;
        or_event_1560_38_2_end: ;
        if (or_temp_result_1560_38_2) {
            enemymagnetizer_2300_instances.save_selection();
        }
        if (!or_result_1560_38) goto or_final_or_event_1560_38_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemymagnetizer_2300_instances.empty_selection();
        if (or_temp_result_1560_38_0 || or_temp_result_1560_38_1 || or_temp_result_1560_38_2) {
            enemymagnetizer_2300_instances.restore_selection();
        }
        if (or_temp_result_1560_38_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1560_38_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1560_38_0; single_instance_1560_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymagnetizer_2300_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1560_38_0 == NULL)
                    single_instance_1560_38_0 = new_obj;
            }
        }
        FrameObject * single_instance_1560_38_1; single_instance_1560_38_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymagnetizer_2300_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1560_38_1 == NULL)
                    single_instance_1560_38_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        ((Active*)((Active*)single_instance_1560_38_0))->set_direction(4);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_38();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1560_38_2_end: ;
}
void Frames::event_func_9316()
{
    // event 1562_38
    {
        if (!(group_main_engine_1)) goto event_1562_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1562_38_end;
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1562_38_end: ;
}
void Frames::event_func_9317()
{
    // event 1565_38
    {
        if (!(group_main_engine_1)) goto event_1565_38_end;
        enemymagnetizerhand_2298_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(0)) { it.deselect(); continue; }
        }
        if (!enemymagnetizerhand_2298_instances.has_selection()) goto event_1565_38_end;
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1565_38_end: ;
}
void Frames::event_func_9318()
{
    // event 1566_38
    {
        if (!(group_main_engine_1)) goto event_1566_38_end;
        enemymagnetizerhand_2298_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!enemymagnetizerhand_2298_instances.has_selection()) goto event_1566_38_end;
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1566_38_end: ;
}
void Frames::event_func_9319()
{
    // event 1567_38
    {
        if (!(group_main_engine_1)) goto event_1567_38_end;
        enemymagnetizerhand_2298_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!enemymagnetizerhand_2298_instances.has_selection()) goto event_1567_38_end;
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1567_38_end: ;
}
void Frames::event_func_9320()
{
    // event 1568_38
    {
        if (!(group_main_engine_1)) goto event_1568_38_end;
        enemymagnetizerline_2299_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) != (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(0)) { it.deselect(); continue; }
        }
        if (!enemymagnetizerline_2299_instances.has_selection()) goto event_1568_38_end;
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1568_38_end: ;
}
void Frames::event_func_9321()
{
    // event 1569_38
    {
        if (!(group_main_engine_1)) goto event_1569_38_end;
        enemymagnetizerline_2299_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!enemymagnetizerline_2299_instances.has_selection()) goto event_1569_38_end;
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1569_38_end: ;
}
void Frames::event_func_9322()
{
    // event 1570_38
    {
        if (!(group_main_engine_1)) goto event_1570_38_end;
        enemymagnetizerhand_2298_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!enemymagnetizerhand_2298_instances.has_selection()) goto event_1570_38_end;
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1570_38_end: ;
}
void Frames::event_func_9323()
{
    // event 1571_38
    {
        if (!(group_main_engine_1)) goto event_1571_38_end;
        enemymagnetizerline_2299_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!enemymagnetizerline_2299_instances.has_selection()) goto event_1571_38_end;
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 1);
        }
    }
    event_1571_38_end: ;
}
void Frames::event_func_9324()
{
    // event 1572_38
    {
        if (!(group_main_engine_1)) goto event_1572_38_end;
        enemymagnetizerhand_2298_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizerhand_2298_instances.has_selection()) goto event_1572_38_end;
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1572_38_end: ;
}
void Frames::event_func_9325()
{
    // event 1573_38
    {
        if (!(group_main_engine_1)) goto event_1573_38_end;
        enemymagnetizerline_2299_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizerline_2299_instances.has_selection()) goto event_1573_38_end;
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1573_38_end: ;
}
void Frames::event_func_9326()
{
    // event 1574_38
    {
        if (!(group_main_engine_1)) goto event_1574_38_end;
        enemymagnetizerhand_2298_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemymagnetizerhand_2298_instances, playercharactersensor_383_instances)) goto event_1574_38_end;
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!enemymagnetizerhand_2298_instances.has_selection()) goto event_1574_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1574_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1574_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1574_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1574_38_end: ;
}
void Frames::event_func_9327()
{
    // event 1575_38
    {
        if (!(group_main_engine_1)) goto event_1575_38_end;
        enemymagnetizerline_2299_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemymagnetizerline_2299_instances, playercharactersensor_383_instances)) goto event_1575_38_end;
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!enemymagnetizerline_2299_instances.has_selection()) goto event_1575_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1575_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1575_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1575_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1575_38_end: ;
}
void Frames::event_func_9328()
{
    // event 1577_38
    {
        if (!(group_main_engine_1)) goto event_1577_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(0)) == (1))) goto event_1577_38_end;
        ((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.sub(7, 1);
    }
    event_1577_38_end: ;
}
void Frames::event_func_9329()
{
    // event 1578_38
    bool or_result_1578_38 = false;
    bool or_temp_result_1578_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1578_38_0_end;
        enemymagnetizercrate_2301_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizercrate_2301_instances.has_selection()) goto or_event_1578_38_0_end;
        or_result_1578_38 = true;
        or_temp_result_1578_38_0 = true;
    }
    or_event_1578_38_0_end: ;
    enemymagnetizercrate_2301_instances.clear_saved_selection();
    if (or_temp_result_1578_38_0) {
        enemymagnetizercrate_2301_instances.save_selection();
    }
    // event 1578_38
    bool or_temp_result_1578_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1578_38_1_end;
        enemymagnetizercrate_2301_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizercrate_2301_instances.has_selection()) goto or_event_1578_38_1_end;
        or_result_1578_38 = true;
        or_temp_result_1578_38_1 = true;
        or_event_1578_38_1_end: ;
        if (or_temp_result_1578_38_1) {
            enemymagnetizercrate_2301_instances.save_selection();
        }
        if (!or_result_1578_38) goto or_final_or_event_1578_38_1_end;
        enemymagnetizercrate_2301_instances.empty_selection();
        if (or_temp_result_1578_38_0 || or_temp_result_1578_38_1) {
            enemymagnetizercrate_2301_instances.restore_selection();
        }
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(7, 3);
        }
    }
    or_final_or_event_1578_38_1_end: ;
}
void Frames::event_func_9330()
{
    // event 1579_38
    {
        if (!(group_main_engine_1)) goto event_1579_38_end;
        if (((Active*)get_instance(enemymagnetizercrate_2301_instances))->is_near_border(-120)) goto event_1579_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(0)) == (2))) goto event_1579_38_end;
        ((Active*)get_instance(enemymagnetizercrate_2301_instances))->set_y(((Active*)get_instance(enemymagnetizercrate_2301_instances))->get_y()+((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(3));
        ((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.set(3, get_min(((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(3)+0.2, 12));
    }
    event_1579_38_end: ;
}
void Frames::event_func_9331()
{
    // event 1580_38
    bool or_result_1580_38 = false;
    bool or_temp_result_1580_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1580_38_0_end;
        enemymagnetizercrate_2301_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemymagnetizercrate_2301_instances.has_selection()) goto or_event_1580_38_0_end;
        or_result_1580_38 = true;
        or_temp_result_1580_38_0 = true;
    }
    or_event_1580_38_0_end: ;
    enemymagnetizercrate_2301_instances.clear_saved_selection();
    if (or_temp_result_1580_38_0) {
        enemymagnetizercrate_2301_instances.save_selection();
    }
    // event 1580_38
    bool or_temp_result_1580_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1580_38_1_end;
        enemymagnetizercrate_2301_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!enemymagnetizercrate_2301_instances.has_selection()) goto or_event_1580_38_1_end;
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
        lockeddoorbarrier_2667_instances.clear_selection();
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
        floorcandle2_4117_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        enemyrocketpunchershield_3162_instances.clear_selection();
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
        gimmickcannonbase_2198_instances.clear_selection();
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
        enemytotematic_3103_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        if (!check_overlap(enemymagnetizercrate_2301_instances, qualifier_7)) goto or_event_1580_38_1_end;
        or_result_1580_38 = true;
        or_temp_result_1580_38_1 = true;
    }
    or_event_1580_38_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1580_38_1) {
        qualifier_7.save_selection();
    }
    // event 1580_38
    bool or_temp_result_1580_38_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1580_38_2_end;
        enemymagnetizercrate_2301_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!enemymagnetizercrate_2301_instances.has_selection()) goto or_event_1580_38_2_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemymagnetizercrate_2301_instances, qualifier_8)) goto or_event_1580_38_2_end;
        or_result_1580_38 = true;
        or_temp_result_1580_38_2 = true;
        or_event_1580_38_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1580_38_2) {
            enemymagnetizercrate_2301_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1580_38) goto or_final_or_event_1580_38_2_end;
        qualifier_8.empty_selection();
        enemymagnetizercrate_2301_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1580_38_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1580_38_0 || or_temp_result_1580_38_2) {
            enemymagnetizercrate_2301_instances.restore_selection();
        }
        if (or_temp_result_1580_38_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        media.play_id(SOUND_BOOSTBLOCK_163, -1, 1);
    }
    or_final_or_event_1580_38_2_end: ;
}
void Frames::event_func_9332()
{
    // event 1581_38
    {
        if (!(group_main_engine_1)) goto event_1581_38_end;
        if (((Active*)get_instance(enemymagnetizercrate_2301_instances))->is_near_border(-120)) goto event_1581_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(0)) == (0))) goto event_1581_38_end;
        if (((Active*)get_instance(enemymagnetizercrate_2301_instances))->overlaps_background()) goto event_1581_38_end;
        enemymagnetizercrate_2301_instances.clear_selection();
        if (!check_not_overlap(enemymagnetizercrate_2301_instances, qualifier_8)) goto event_1581_38_end;
        ((Active*)get_instance(enemymagnetizercrate_2301_instances))->set_y(((Active*)get_instance(enemymagnetizercrate_2301_instances))->get_y()+1);
    }
    event_1581_38_end: ;
}
void Frames::event_func_9333()
{
    // event 1582_38
    bool or_result_1582_38 = false;
    bool or_temp_result_1582_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1582_38_0_end;
        enemymagnetizercrate_2301_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemymagnetizercrate_2301_instances.has_selection()) goto or_event_1582_38_0_end;
        or_result_1582_38 = true;
        or_temp_result_1582_38_0 = true;
    }
    or_event_1582_38_0_end: ;
    enemymagnetizercrate_2301_instances.clear_saved_selection();
    if (or_temp_result_1582_38_0) {
        enemymagnetizercrate_2301_instances.save_selection();
    }
    // event 1582_38
    bool or_temp_result_1582_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1582_38_1_end;
        enemymagnetizercrate_2301_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-120)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!enemymagnetizercrate_2301_instances.has_selection()) goto or_event_1582_38_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemymagnetizercrate_2301_instances, qualifier_8)) goto or_event_1582_38_1_end;
        or_result_1582_38 = true;
        or_temp_result_1582_38_1 = true;
        or_event_1582_38_1_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1582_38_1) {
            enemymagnetizercrate_2301_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1582_38) goto or_final_or_event_1582_38_1_end;
        qualifier_8.empty_selection();
        enemymagnetizercrate_2301_instances.empty_selection();
        if (or_temp_result_1582_38_0 || or_temp_result_1582_38_1) {
            enemymagnetizercrate_2301_instances.restore_selection();
        }
        if (or_temp_result_1582_38_1) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemymagnetizercrate_2301_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    or_final_or_event_1582_38_1_end: ;
}
void Frames::event_func_9334()
{
    // event 1583_38
    {
        if (!(group_main_engine_1)) goto event_1583_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(0)) == (0))) goto event_1583_38_end;
        ((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->flags.disable(0);
    }
    event_1583_38_end: ;
}
void Frames::event_func_9335()
{
    // event 1584_38
    {
        if (!(group_main_engine_1)) goto event_1584_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(0)) == (2))) goto event_1584_38_end;
        ((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->flags.enable(0);
    }
    event_1584_38_end: ;
}
void Frames::event_func_9336()
{
    // event 1585_38
    {
        if (!(group_main_engine_1)) goto event_1585_38_end;
        playersensortopbig_395_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, enemymagnetizercrate_2301_instances)) goto event_1585_38_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_1585_38_end;
        if (!((((Active*)get_instance(enemymagnetizercrate_2301_instances))->alterables->values.get(0)) != (0))) goto event_1585_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1585_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1585_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1585_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
    }
    event_1585_38_end: ;
}
void Frames::event_func_9337()
{
    // event 1636_38
    {
        if (!(group_main_engine_1)) goto event_1636_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto event_1636_38_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)+sin_deg(global_values->get(3)%math_helper%360)*20);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1636_38_end: ;
}
void Frames::event_func_9338()
{
    // event 1637_38
    {
        if (!(group_main_engine_1)) goto event_1637_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto event_1637_38_end;
        FrameObject * single_instance_1637_38_0; single_instance_1637_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->x + -17, parent->y + 13), parent->layer);
                if (single_instance_1637_38_0 == NULL)
                    single_instance_1637_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1637_38_0))->set_direction(20);
        ((Active*)((Active*)single_instance_1637_38_0))->get_movement()->set_gravity(0);
        FrameObject * single_instance_1637_38_1; single_instance_1637_38_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + -17, parent->y + 13), parent->layer);
                if (single_instance_1637_38_1 == NULL)
                    single_instance_1637_38_1 = new_obj;
            }
        }
    }
    event_1637_38_end: ;
}
void Frames::event_func_9339()
{
    // event 1638_38
    {
        if (!(group_main_engine_1)) goto event_1638_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto event_1638_38_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        FrameObject * single_instance_1638_38_0; single_instance_1638_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->x + 17, parent->y + 13), parent->layer);
                if (single_instance_1638_38_0 == NULL)
                    single_instance_1638_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1638_38_0))->set_direction(28);
        ((Active*)((Active*)single_instance_1638_38_0))->get_movement()->set_gravity(0);
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        media.play_id(SOUND_COMMON_BLASTER3_440, -1, 1);
        FrameObject * single_instance_1638_38_1; single_instance_1638_38_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 17, parent->y + 13), parent->layer);
                if (single_instance_1638_38_1 == NULL)
                    single_instance_1638_38_1 = new_obj;
            }
        }
    }
    event_1638_38_end: ;
}
void Frames::event_func_9340()
{
    // event 1639_38
    {
        if (!(group_main_engine_1)) goto event_1639_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto event_1639_38_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
        }
    }
    event_1639_38_end: ;
}
