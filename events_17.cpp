#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1331()
{
    // event 1171_13
    {
        if (!(group_main_engine_1)) goto event_1171_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1171_13_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
        spread_value(((Active*)col_instance_2), 8, 1);
    }
    event_1171_13_end: ;
}
void Frames::event_func_1332()
{
    // event 1172_13
    {
        if (!(group_main_engine_1)) goto event_1172_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1172_13_end;
        {
            loop_itm_running = true;
            int times = int(2);
            loop_itm_index = 0;
            while (loop_itm_index < times) {
                loop_itm_13();
                if (!loop_itm_running) break;
                loop_itm_index++;
            }
        }
    }
    event_1172_13_end: ;
}
void Frames::col_0_13()
{
    event_func_1331();
    event_func_1332();
}
void Frames::event_func_1333()
{
    // event 1077_13
    {
        if (!(group_main_engine_1)) goto event_1077_13_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(0))) goto event_1077_13_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_2))->advance_movement(-1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(7, 0.5);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(6, 8);
    }
    event_1077_13_end: ;
}
void Frames::col_1_13()
{
    event_func_1333();
}
void Frames::event_func_1334()
{
    // event 1071_13
    {
        if (!(group_main_engine_1)) goto event_1071_13_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(6))) goto event_1071_13_end;
        if (((Active*)col_instance_2)->is_near_border(-50)) goto event_1071_13_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_13();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1071_13_end: ;
}
void Frames::col_2_13()
{
    event_func_1334();
}
void Frames::event_func_1335()
{
    // event 1430_13
    {
        if (!(group_main_engine_1)) goto event_1430_13_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) > (3))) goto event_1430_13_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1430_13_0; single_instance_1430_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdust_305(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1430_13_0 == NULL)
                single_instance_1430_13_0 = new_obj;
        }
    }
    event_1430_13_end: ;
}
void Frames::col_3_13()
{
    event_func_1335();
}
void Frames::event_func_1336()
{
    // event 787_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_787_13_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) == (2))) goto event_787_13_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 3);
        FrameObject * single_instance_787_13_0; single_instance_787_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_787_13_0 == NULL)
                single_instance_787_13_0 = new_obj;
        }
    }
    event_787_13_end: ;
}
void Frames::col_5_13()
{
    event_func_1336();
}
void Frames::event_func_1337()
{
    // event 1408_13
    {
        if (!(group_main_engine_1)) goto event_1408_13_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(6)) != (1))) goto event_1408_13_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(1))) goto event_1408_13_end;
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1408_13_end: ;
}
void Frames::event_func_1338()
{
    // event 1409_13
    {
        if (!(group_main_engine_1)) goto event_1409_13_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(6)) != (1))) goto event_1409_13_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(10)) <= (0))) goto event_1409_13_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1409_13_0; single_instance_1409_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_thunderspark_339(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1409_13_0 == NULL)
                single_instance_1409_13_0 = new_obj;
        }
    }
    event_1409_13_end: ;
}
void Frames::event_func_1339()
{
    // event 1410_13
    {
        if (!(group_main_engine_1)) goto event_1410_13_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(10)) > (0))) goto event_1410_13_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
    }
    event_1410_13_end: ;
}
void Frames::event_func_1340()
{
    // event 1416_13
    {
        if (!(group_main_engine_1)) goto event_1416_13_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(6)) == (1))) goto event_1416_13_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
    }
    event_1416_13_end: ;
}
void Frames::col_6_13()
{
    event_func_1337();
    event_func_1338();
    event_func_1339();
    event_func_1340();
}
void Frames::col_7_13()
{
    event_func_1340();
}
void Frames::event_func_1341()
{
    // event 1231_13
    {
        if (!(group_main_engine_1)) goto event_1231_13_end;
        if (!((((Active*)col_instance_1)->get_frame()) == (9))) goto event_1231_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1231_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 20);
    }
    event_1231_13_end: ;
}
void Frames::col_8_13()
{
    event_func_1341();
}
void Frames::event_func_1342()
{
    // event 1428_13
    {
        if (!(group_main_engine_1)) goto event_1428_13_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) > (3))) goto event_1428_13_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1428_13_0; single_instance_1428_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdust_305(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1428_13_0 == NULL)
                single_instance_1428_13_0 = new_obj;
        }
    }
    event_1428_13_end: ;
}
void Frames::col_11_13()
{
    event_func_1342();
}
void Frames::event_func_1343()
{
    // event 1076_13
    {
        if (!(group_main_engine_1)) goto event_1076_13_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(0))) goto event_1076_13_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->advance_movement(-1);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(7, 0.5);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(6, 8);
    }
    event_1076_13_end: ;
}
void Frames::col_12_13()
{
    event_func_1343();
}
void Frames::event_func_1344()
{
    // event 1408_13
    {
        if (!(group_main_engine_1)) goto event_1408_13_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(6)) != (1))) goto event_1408_13_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_off(1))) goto event_1408_13_end;
        media.play_id(SOUND_COMMON_NULLHIT_2_30, -1, 1);
    }
    event_1408_13_end: ;
}
void Frames::event_func_1345()
{
    // event 1409_13
    {
        if (!(group_main_engine_1)) goto event_1409_13_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(6)) != (1))) goto event_1409_13_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(10)) <= (0))) goto event_1409_13_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1409_13_0; single_instance_1409_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_thunderspark_339(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1409_13_0 == NULL)
                single_instance_1409_13_0 = new_obj;
        }
    }
    event_1409_13_end: ;
}
void Frames::event_func_1346()
{
    // event 1410_13
    {
        if (!(group_main_engine_1)) goto event_1410_13_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(10)) > (0))) goto event_1410_13_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(3);
    }
    event_1410_13_end: ;
}
void Frames::event_func_1347()
{
    // event 1416_13
    {
        if (!(group_main_engine_1)) goto event_1416_13_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(6)) == (1))) goto event_1416_13_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
    }
    event_1416_13_end: ;
}
void Frames::col_13_13()
{
    event_func_1344();
    event_func_1345();
    event_func_1346();
    event_func_1347();
}
void Frames::event_func_1348()
{
    // event 787_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_787_13_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) == (2))) goto event_787_13_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(0, 3);
        FrameObject * single_instance_787_13_0; single_instance_787_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_787_13_0 == NULL)
                single_instance_787_13_0 = new_obj;
        }
    }
    event_787_13_end: ;
}
void Frames::col_14_13()
{
    event_func_1348();
}
void Frames::test_collisions_13()
{
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2147483648, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 536870912, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_1_13);
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
void Frames::event_func_1349()
{
    // event 4_13
    {
        if (!(group_main_engine_1)) goto event_4_13_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(0)) == (0))) goto event_4_13_end;
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_4_13_end: ;
}
void Frames::event_func_1350()
{
    // event 35_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_35_13_end;
        if (!((playerskinsash_418_instances.size()) > (0))) goto event_35_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (1))) goto event_35_13_end;
        if (once_condition_35_13) goto event_35_13_end;
        once_condition_35_13 = true;
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(120, 252, 64));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(40, 184, 0));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(24, 148, 56));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(0, 124, 80));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(0, 64, 48));
    }
    event_35_13_end: ;
}
void Frames::event_func_1351()
{
    // event 36_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_36_13_end;
        if (!((playerskinsash_418_instances.size()) > (0))) goto event_36_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (2))) goto event_36_13_end;
        if (once_condition_36_13) goto event_36_13_end;
        once_condition_36_13 = true;
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(248, 132, 248));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(248, 32, 244));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(200, 0, 180));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(144, 0, 104));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 64));
    }
    event_36_13_end: ;
}
void Frames::event_func_1352()
{
    // event 37_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_37_13_end;
        if (!((playerskinsash_418_instances.size()) > (0))) goto event_37_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (3))) goto event_37_13_end;
        if (once_condition_37_13) goto event_37_13_end;
        once_condition_37_13 = true;
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(248, 200, 40));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(248, 152, 0));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(200, 80, 0));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(160, 0, 32));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(88, 0, 40));
    }
    event_37_13_end: ;
}
void Frames::event_func_1353()
{
    // event 38_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_38_13_end;
        if (!((playerskinsash_418_instances.size()) > (0))) goto event_38_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 21)) == (4))) goto event_38_13_end;
        if (once_condition_38_13) goto event_38_13_end;
        once_condition_38_13 = true;
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(104, 200, 248), make_color_int(160, 160, 128));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 144, 248), make_color_int(100, 100, 80));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 108, 200), make_color_int(72, 72, 72));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 64, 168), make_color_int(32, 32, 64));
        ((Active*)get_instance(playerskinsash_418_instances))->replace_color(make_color_int(0, 36, 88), make_color_int(8, 8, 32));
    }
    event_38_13_end: ;
}
void Frames::event_func_1354()
{
    // event 39_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_39_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_39_13_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_39_13_end;
        if (not_always_39_13 > loop_count) {
            not_always_39_13 = loop_count + 2;
            goto event_39_13_end;
        }
        not_always_39_13 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_39_13_end: ;
}
void Frames::event_func_1355()
{
    // event 40_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_40_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_40_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_40_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (0))) goto event_40_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_40_13_end;
        if (not_always_40_13 > loop_count) {
            not_always_40_13 = loop_count + 2;
            goto event_40_13_end;
        }
        not_always_40_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(0, -7);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(1, -3);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(4, -170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(6, 170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(7, 4);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(8, 0.5);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(11, 0.01);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(13, 12);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(14, 0.0334);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(15, 0.2);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(16, 0.035);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(17, 0.25);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(18, 0.7);
    }
    event_40_13_end: ;
}
void Frames::event_func_1356()
{
    // event 41_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_41_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_41_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) != (0))) goto event_41_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_41_13_end;
        if (not_always_41_13 > loop_count) {
            not_always_41_13 = loop_count + 2;
            goto event_41_13_end;
        }
        not_always_41_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(0, -7);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(1, -3);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(4, -170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(6, 170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(7, 4);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(8, 0.5);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(11, 0.01);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(13, 12);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(14, 0.0334);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(15, 0.2);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(16, 0.035);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(17, 0.25);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(18, 0.7);
    }
    event_41_13_end: ;
}
void Frames::event_func_1357()
{
    // event 42_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_42_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (0))) goto event_42_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_42_13_end;
        if (not_always_42_13 > loop_count) {
            not_always_42_13 = loop_count + 2;
            goto event_42_13_end;
        }
        not_always_42_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 4);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.05688);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(0, -6);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(4, -170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(6, 170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(7, 4);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(8, 0.5);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(11, 0.01);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(13, 12);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(14, 0.0217);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(15, 0.12);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(16, 0.035);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(17, 0.25);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(18, 0.7);
    }
    event_42_13_end: ;
}
void Frames::event_func_1358()
{
    // event 43_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_43_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) != (0))) goto event_43_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_43_13_end;
        if (not_always_43_13 > loop_count) {
            not_always_43_13 = loop_count + 2;
            goto event_43_13_end;
        }
        not_always_43_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 6);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.05688);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(0, -6);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(4, -170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(6, 170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(7, 4);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(8, 0.5);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(11, 0.01);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(13, 12);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(14, 0.0217);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(15, 0.12);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(16, 0.035);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(17, 0.25);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(18, 0.7);
    }
    event_43_13_end: ;
}
void Frames::event_func_1359()
{
    // event 44_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_44_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_44_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_44_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_44_13_end;
        if (not_always_44_13 > loop_count) {
            not_always_44_13 = loop_count + 2;
            goto event_44_13_end;
        }
        not_always_44_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(8, 0.25);
    }
    event_44_13_end: ;
}
void Frames::event_func_1360()
{
    // event 45_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_45_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_45_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_45_13_end;
        if (not_always_45_13 > loop_count) {
            not_always_45_13 = loop_count + 2;
            goto event_45_13_end;
        }
        not_always_45_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(8, 0.15);
    }
    event_45_13_end: ;
}
void Frames::event_func_1361()
{
    // event 46_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_46_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_46_13_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_46_13_end;
        if (not_always_46_13 > loop_count) {
            not_always_46_13 = loop_count + 2;
            goto event_46_13_end;
        }
        not_always_46_13 = loop_count + 2;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_46_13_end: ;
}
void Frames::event_func_1362()
{
    // event 47_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_47_13_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_47_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (1))) goto event_47_13_end;
        if (once_condition_47_13) goto event_47_13_end;
        once_condition_47_13 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(248, 252, 0));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(176, 132, 0));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(248, 252, 0));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(176, 132, 0));
        }
    }
    event_47_13_end: ;
}
void Frames::event_func_1363()
{
    // event 48_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_48_13_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_48_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (2))) goto event_48_13_end;
        if (once_condition_48_13) goto event_48_13_end;
        once_condition_48_13 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(248, 100, 248));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(168, 36, 168));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(248, 100, 248));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(168, 36, 168));
        }
    }
    event_48_13_end: ;
}
void Frames::event_func_1364()
{
    // event 49_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_49_13_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_49_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (3))) goto event_49_13_end;
        if (once_condition_49_13) goto event_49_13_end;
        once_condition_49_13 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(96, 116, 248));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(0, 0, 248));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(96, 116, 248));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(0, 0, 248));
        }
    }
    event_49_13_end: ;
}
void Frames::event_func_1365()
{
    // event 50_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_50_13_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_50_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (4))) goto event_50_13_end;
        if (once_condition_50_13) goto event_50_13_end;
        once_condition_50_13 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(232, 232, 232));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(128, 128, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(200, 0, 0), make_color_int(232, 232, 232));
            ((Active*)*it)->replace_color(make_color_int(96, 0, 0), make_color_int(128, 128, 128));
        }
    }
    event_50_13_end: ;
}
void Frames::event_func_1366()
{
    // event 51_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_51_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_51_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_51_13_end;
        if (!((playerskinmilla_446_instances.size()) > (0))) goto event_51_13_end;
        if (not_always_51_13 > loop_count) {
            not_always_51_13 = loop_count + 2;
            goto event_51_13_end;
        }
        not_always_51_13 = loop_count + 2;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_51_13_end: ;
}
void Frames::event_func_1367()
{
    // event 52_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_52_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_52_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (0))) goto event_52_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_52_13_end;
        if (not_always_52_13 > loop_count) {
            not_always_52_13 = loop_count + 2;
            goto event_52_13_end;
        }
        not_always_52_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 12);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(0, -7);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(1, -3);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(4, -170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(6, 170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(7, 4);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(8, 0.5);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(11, 0.01);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(13, 12);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(14, 0.0334);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(15, 0.2);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(16, 0.035);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(17, 0.25);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(18, 0.7);
    }
    event_52_13_end: ;
}
void Frames::event_func_1368()
{
    // event 53_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_53_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_53_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) != (0))) goto event_53_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_53_13_end;
        if (not_always_53_13 > loop_count) {
            not_always_53_13 = loop_count + 2;
            goto event_53_13_end;
        }
        not_always_53_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 12);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.84);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(0, -7);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(1, -3);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(4, -170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(6, 170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(7, 4);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(8, 0.5);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(11, 0.01);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(13, 12);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(14, 0.0334);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(15, 0.2);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(16, 0.035);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(17, 0.25);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(18, 0.7);
    }
    event_53_13_end: ;
}
void Frames::event_func_1369()
{
    // event 54_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_54_13_end;
        if (!((playerskincarolbike_382_instances.size()) > (0))) goto event_54_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 23)) == (1))) goto event_54_13_end;
        if (once_condition_54_13) goto event_54_13_end;
        once_condition_54_13 = true;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 128, 96), make_color_int(248, 248, 0));
            ((Active*)*it)->replace_color(make_color_int(248, 0, 0), make_color_int(216, 216, 0));
            ((Active*)*it)->replace_color(make_color_int(176, 0, 0), make_color_int(160, 160, 0));
            ((Active*)*it)->replace_color(make_color_int(120, 0, 40), make_color_int(100, 100, 0));
        }
    }
    event_54_13_end: ;
}
void Frames::event_func_1370()
{
    // event 55_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_55_13_end;
        if (!((playerskincarolbike_382_instances.size()) > (0))) goto event_55_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 23)) == (2))) goto event_55_13_end;
        if (once_condition_55_13) goto event_55_13_end;
        once_condition_55_13 = true;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 128, 96), make_color_int(248, 176, 248));
            ((Active*)*it)->replace_color(make_color_int(248, 0, 0), make_color_int(248, 100, 248));
            ((Active*)*it)->replace_color(make_color_int(176, 0, 0), make_color_int(168, 36, 168));
            ((Active*)*it)->replace_color(make_color_int(120, 0, 40), make_color_int(100, 0, 100));
        }
    }
    event_55_13_end: ;
}
void Frames::event_func_1371()
{
    // event 56_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_56_13_end;
        if (!((playerskincarolbike_382_instances.size()) > (0))) goto event_56_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 23)) == (3))) goto event_56_13_end;
        if (once_condition_56_13) goto event_56_13_end;
        once_condition_56_13 = true;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 128, 96), make_color_int(0, 200, 240));
            ((Active*)*it)->replace_color(make_color_int(248, 0, 0), make_color_int(0, 100, 248));
            ((Active*)*it)->replace_color(make_color_int(176, 0, 0), make_color_int(0, 0, 248));
            ((Active*)*it)->replace_color(make_color_int(120, 0, 40), make_color_int(0, 0, 128));
        }
    }
    event_56_13_end: ;
}
void Frames::event_func_1372()
{
    // event 57_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_57_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_57_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (0))) goto event_57_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)) != (8))) goto event_57_13_end;
        if (not_always_57_13 > loop_count) {
            not_always_57_13 = loop_count + 2;
            goto event_57_13_end;
        }
        not_always_57_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 8);
    }
    event_57_13_end: ;
}
void Frames::event_func_1373()
{
    // event 58_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_58_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_58_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) != (0))) goto event_58_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(2)) != (10))) goto event_58_13_end;
        if (not_always_58_13 > loop_count) {
            not_always_58_13 = loop_count + 2;
            goto event_58_13_end;
        }
        not_always_58_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 10);
    }
    event_58_13_end: ;
}
void Frames::event_func_1374()
{
    // event 59_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_59_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_59_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_59_13_end;
        if (not_always_59_13 > loop_count) {
            not_always_59_13 = loop_count + 2;
            goto event_59_13_end;
        }
        not_always_59_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(8, 0.3);
    }
    event_59_13_end: ;
}
void Frames::event_func_1375()
{
    // event 60_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_60_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_60_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)) != (0.074))) goto event_60_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.00575);
    }
    event_60_13_end: ;
}
void Frames::event_func_1376()
{
    // event 61_13
    bool or_result_61_13 = false;
    bool or_temp_result_61_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_61_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_61_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_61_13_0_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_61_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_61_13_0_end;
        or_result_61_13 = true;
        or_temp_result_61_13_0 = true;
    }
    or_event_61_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_61_13_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
    }
    // event 61_13
    bool or_temp_result_61_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_61_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_61_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_61_13_1_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_61_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_61_13_1_end;
        or_result_61_13 = true;
        or_temp_result_61_13_1 = true;
        or_event_61_13_1_end: ;
        if (or_temp_result_61_13_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerothers_123_instances.save_selection();
        }
        if (!or_result_61_13) goto or_final_or_event_61_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_61_13_0 || or_temp_result_61_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_61_13_0 || or_temp_result_61_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_61_13_0 || or_temp_result_61_13_1) {
            playerothers_123_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0.06);
        }
    }
    or_final_or_event_61_13_1_end: ;
}
void Frames::event_func_1377()
{
    // event 62_13
    bool or_result_62_13 = false;
    bool or_temp_result_62_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_62_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_62_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_62_13_0_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_62_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_62_13_0_end;
        or_result_62_13 = true;
        or_temp_result_62_13_0 = true;
    }
    or_event_62_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_62_13_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
    }
    // event 62_13
    bool or_temp_result_62_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_62_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_62_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_62_13_1_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_62_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_62_13_1_end;
        or_result_62_13 = true;
        or_temp_result_62_13_1 = true;
        or_event_62_13_1_end: ;
        if (or_temp_result_62_13_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerothers_123_instances.save_selection();
        }
        if (!or_result_62_13) goto or_final_or_event_62_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_62_13_0 || or_temp_result_62_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_62_13_0 || or_temp_result_62_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_62_13_0 || or_temp_result_62_13_1) {
            playerothers_123_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0.06+((Active*)get_single(playerinput_19_instances, it.current_index, default_active_instance))->alterables->values.get(13)*0.3);
        }
    }
    or_final_or_event_62_13_1_end: ;
}
void Frames::event_func_1378()
{
    // event 63_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_63_13_end;
        if (!((playerskinmilla_446_instances.size()) > (0))) goto event_63_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (1))) goto event_63_13_end;
        if (once_condition_63_13) goto event_63_13_end;
        once_condition_63_13 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 196, 72), make_color_int(248, 140, 72));
            ((Active*)*it)->replace_color(make_color_int(248, 120, 40), make_color_int(248, 48, 40));
            ((Active*)*it)->replace_color(make_color_int(192, 84, 0), make_color_int(192, 16, 0));
            ((Active*)*it)->replace_color(make_color_int(112, 28, 0), make_color_int(112, 0, 8));
        }
    }
    event_63_13_end: ;
}
void Frames::event_func_1379()
{
    // event 64_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_64_13_end;
        if (!((playerskinmilla_446_instances.size()) > (0))) goto event_64_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (2))) goto event_64_13_end;
        if (once_condition_64_13) goto event_64_13_end;
        once_condition_64_13 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 196, 72), make_color_int(72, 252, 224));
            ((Active*)*it)->replace_color(make_color_int(248, 120, 40), make_color_int(40, 172, 248));
            ((Active*)*it)->replace_color(make_color_int(192, 84, 0), make_color_int(0, 112, 192));
            ((Active*)*it)->replace_color(make_color_int(112, 28, 0), make_color_int(0, 80, 112));
        }
    }
    event_64_13_end: ;
}
void Frames::event_func_1380()
{
    // event 65_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_65_13_end;
        if (!((playerskinmilla_446_instances.size()) > (0))) goto event_65_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (3))) goto event_65_13_end;
        if (once_condition_65_13) goto event_65_13_end;
        once_condition_65_13 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 196, 72), make_color_int(248, 188, 184));
            ((Active*)*it)->replace_color(make_color_int(248, 120, 40), make_color_int(248, 40, 232));
            ((Active*)*it)->replace_color(make_color_int(192, 84, 0), make_color_int(192, 0, 168));
            ((Active*)*it)->replace_color(make_color_int(112, 28, 0), make_color_int(104, 0, 112));
        }
    }
    event_65_13_end: ;
}
void Frames::event_func_1381()
{
    // event 66_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_66_13_end;
        if (!((playerskinmilla_446_instances.size()) > (0))) goto event_66_13_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (4))) goto event_66_13_end;
        if (once_condition_66_13) goto event_66_13_end;
        once_condition_66_13 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->replace_color(make_color_int(248, 196, 72), make_color_int(160, 140, 88));
            ((Active*)*it)->replace_color(make_color_int(248, 120, 40), make_color_int(96, 72, 56));
            ((Active*)*it)->replace_color(make_color_int(192, 84, 0), make_color_int(48, 28, 16));
            ((Active*)*it)->replace_color(make_color_int(112, 28, 0), make_color_int(24, 12, 8));
        }
    }
    event_66_13_end: ;
}
void Frames::event_func_1382()
{
    // event 67_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_67_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_67_13_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_67_13_end;
        if (not_always_67_13 > loop_count) {
            not_always_67_13 = loop_count + 2;
            goto event_67_13_end;
        }
        not_always_67_13 = loop_count + 2;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_67_13_end: ;
}
void Frames::event_func_1383()
{
    // event 68_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_68_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_68_13_end;
        if (!((playerskincarol_445_instances.size()) > (0))) goto event_68_13_end;
        if (not_always_68_13 > loop_count) {
            not_always_68_13 = loop_count + 2;
            goto event_68_13_end;
        }
        not_always_68_13 = loop_count + 2;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_68_13_end: ;
}
void Frames::event_func_1384()
{
    // event 69_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_69_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (5))) goto event_69_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (0))) goto event_69_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_69_13_end;
        if (not_always_69_13 > loop_count) {
            not_always_69_13 = loop_count + 2;
            goto event_69_13_end;
        }
        not_always_69_13 = loop_count + 2;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 4.5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(4, 0.07375);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(5, 0.20312);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(7, 15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(9, 0.5);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(0, -7);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(1, -3);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(4, -170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(6, 170);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(7, 4);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(8, 0.5);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(11, 0.01);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(12, 6);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(13, 12);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(14, 0.0334);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(15, 0.2);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(16, 0.035);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(17, 0.25);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(18, 0.7);
    }
    event_69_13_end: ;
}
void Frames::event_func_1385()
{
    // event 70_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1 && group_main_engine_global_methods_player_player_movement_initial_movement_1)) goto event_70_13_end;
        if (not_always_70_13 > loop_count) {
            not_always_70_13 = loop_count + 2;
            goto event_70_13_end;
        }
        not_always_70_13 = loop_count + 2;
            group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    
    }
    event_70_13_end: ;
}
void Frames::event_func_1386()
{
    // event 138_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_138_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_floor(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*10000)/math_helper/10000);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_floor(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*10000)/math_helper/10000);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, get_floor(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)*10000)/math_helper/10000);
    }
    event_138_13_end: ;
}
void Frames::event_func_1387()
{
    // event 139_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_139_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(3)))) goto event_139_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(3));
    }
    event_139_13_end: ;
}
void Frames::event_func_1388()
{
    // event 140_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_140_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(3)))) goto event_140_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(3));
    }
    event_140_13_end: ;
}
void Frames::event_func_1389()
{
    // event 141_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_141_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(7)))) goto event_141_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(7));
    }
    event_141_13_end: ;
}
void Frames::event_func_1390()
{
    // event 142_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_142_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(10, 0);
    }
    event_142_13_end: ;
}
void Frames::event_func_1391()
{
    // event 143_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_143_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(15)) == (0))) goto event_143_13_end;
        qualifier_10.clear_selection();
        for (QualifierIterator it(qualifier_10); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        // icache destruction
        sbloop2_2210_instances.clear_selection();
        active2_2271_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        active_2270_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        for (QualifierIterator it(qualifier_11); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_143_13_end: ;
}
void Frames::event_func_1392()
{
    // event 144_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_144_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(15)) == (1))) goto event_144_13_end;
        qualifier_10.clear_selection();
        for (QualifierIterator it(qualifier_10); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        // icache destruction
        sbloop2_2210_instances.clear_selection();
        active2_2271_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        active_2270_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        for (QualifierIterator it(qualifier_11); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_144_13_end: ;
}
void Frames::event_func_1393()
{
    // event 145_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_145_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) >= (5))) goto event_145_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) <= (6))) goto event_145_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_145_13_end: ;
}
void Frames::event_func_1394()
{
    // event 146_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_146_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(21, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(22, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
    }
    event_146_13_end: ;
}
void Frames::event_func_1395()
{
    // event 147_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_147_13_end;
    }
    event_147_13_end: ;
}
void Frames::event_func_1396()
{
    // event 148_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_148_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(19)) == (1))) goto event_148_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(3, str_player01wallcollision_60);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(4, str_player01wallcollision_60);
        {
            loop_player01wallcollision_running = true;
            int times = int(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))+1);
            loop_player01wallcollision_index = 0;
            while (loop_player01wallcollision_index < times) {
                loop_player01wallcollision_13();
                if (!loop_player01wallcollision_running) break;
                loop_player01wallcollision_index++;
            }
        }
    }
    event_148_13_end: ;
}
void Frames::event_func_1397()
{
    // event 152_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_152_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(20)) == (1))) goto event_152_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_152_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(1, str_player01up_61);
        {
            loop_player01up_running = true;
            int times = int(10);
            loop_player01up_index = 0;
            while (loop_player01up_index < times) {
                loop_player01up_13();
                if (!loop_player01up_running) break;
                loop_player01up_index++;
            }
        }
    }
    event_152_13_end: ;
}
void Frames::event_func_1398()
{
    // event 155_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_155_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(19)) == (1))) goto event_155_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_155_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(3, str_player01wallcollision_60);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(4, str_player01wallcollision_60);
        {
            loop_player01wallcollision_running = true;
            int times = int(20);
            loop_player01wallcollision_index = 0;
            while (loop_player01wallcollision_index < times) {
                loop_player01wallcollision_13();
                if (!loop_player01wallcollision_running) break;
                loop_player01wallcollision_index++;
            }
        }
    }
    event_155_13_end: ;
}
void Frames::event_func_1399()
{
    // event 156_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_156_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(20)) == (1))) goto event_156_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_156_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(2, str_player01down_62);
        {
            loop_player01down_running = true;
            int times = int(10);
            loop_player01down_index = 0;
            while (loop_player01down_index < times) {
                loop_player01down_13();
                if (!loop_player01down_running) break;
                loop_player01down_index++;
            }
        }
    }
    event_156_13_end: ;
}
void Frames::event_func_1400()
{
    // event 159_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_159_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_159_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_159_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_159_13_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_159_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
    }
    event_159_13_end: ;
}
void Frames::event_func_1401()
{
    // event 160_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_160_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_160_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_160_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_160_13_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_160_13_end;
        {
            loop_player01detectsensoredges_running = true;
            int times = int(1);
            loop_player01detectsensoredges_index = 0;
            while (loop_player01detectsensoredges_index < times) {
                loop_player01detectsensoredges_13();
                if (!loop_player01detectsensoredges_running) break;
                loop_player01detectsensoredges_index++;
            }
        }
    }
    event_160_13_end: ;
}
void Frames::event_func_1402()
{
    // event 161_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_161_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_161_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_161_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_161_13_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_161_13_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_161_13_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_161_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01detectangle_63);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(24, 0);
        {
            loop_player01detectangle_running = true;
            int times = int(20);
            loop_player01detectangle_index = 0;
            while (loop_player01detectangle_index < times) {
                loop_player01detectangle_13();
                if (!loop_player01detectangle_running) break;
                loop_player01detectangle_index++;
            }
        }
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(0, ((Active*)get_instance(playersensorleftangle_400_instances))->get_x()-((Active*)get_instance(playersensorrightangle_401_instances))->get_x());
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(1, ((Active*)get_instance(playersensorleftangle_400_instances))->get_y()-((Active*)get_instance(playersensorrightangle_401_instances))->get_y());
        {
            loop_toolsanglecalculator_running = true;
            int times = int(1);
            loop_toolsanglecalculator_index = 0;
            while (loop_toolsanglecalculator_index < times) {
                loop_toolsanglecalculator_13();
                if (!loop_toolsanglecalculator_running) break;
                loop_toolsanglecalculator_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13));
    }
    event_161_13_end: ;
}
void Frames::event_func_1403()
{
    // event 162_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_162_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_162_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_162_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_162_13_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_162_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (22))) goto event_162_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (338))) goto event_162_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(9))));
    }
    event_162_13_end: ;
}
void Frames::event_func_1404()
{
    // event 163_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_163_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_163_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_163_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_163_13_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_163_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(22, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
    }
    event_163_13_end: ;
}
void Frames::event_func_1405()
{
    // event 164_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_164_13_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(15, 0);
    }
    event_164_13_end: ;
}
void Frames::event_func_1406()
{
    // event 165_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_165_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(21)) == (1))) goto event_165_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_165_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (-1.75))) goto event_165_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (42))) goto event_165_13_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_165_13_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(15, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 180);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 180);
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
    event_165_13_end: ;
}
void Frames::event_func_1407()
{
    // event 166_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_166_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(15)) == (1))) goto event_166_13_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.get(25)) == (1))) goto event_166_13_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(15, 2);
        {
            loop_player01detectsensoredges_running = true;
            int times = int(1);
            loop_player01detectsensoredges_index = 0;
            while (loop_player01detectsensoredges_index < times) {
                loop_player01detectsensoredges_13();
                if (!loop_player01detectsensoredges_running) break;
                loop_player01detectsensoredges_index++;
            }
        }
    }
    event_166_13_end: ;
}
void Frames::event_func_1408()
{
    // event 167_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_167_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(15)) == (2))) goto event_167_13_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_167_13_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_167_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01detectangle_63);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(24, 0);
        {
            loop_player01detectangle_running = true;
            int times = int(20);
            loop_player01detectangle_index = 0;
            while (loop_player01detectangle_index < times) {
                loop_player01detectangle_13();
                if (!loop_player01detectangle_running) break;
                loop_player01detectangle_index++;
            }
        }
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(0, ((Active*)get_instance(playersensorleftangle_400_instances))->get_x()-((Active*)get_instance(playersensorrightangle_401_instances))->get_x());
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(1, ((Active*)get_instance(playersensorleftangle_400_instances))->get_y()-((Active*)get_instance(playersensorrightangle_401_instances))->get_y());
        {
            loop_toolsanglecalculator_running = true;
            int times = int(1);
            loop_toolsanglecalculator_index = 0;
            while (loop_toolsanglecalculator_index < times) {
                loop_toolsanglecalculator_13();
                if (!loop_toolsanglecalculator_running) break;
                loop_toolsanglecalculator_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13));
    }
    event_167_13_end: ;
}
void Frames::event_func_1409()
{
    // event 168_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_168_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(15)) == (2))) goto event_168_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) < (170))) goto event_168_13_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(15, 3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))/math_helper/0.35)*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(9))));
    }
    event_168_13_end: ;
}
void Frames::event_func_1410()
{
    // event 169_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_169_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(15)) == (2))) goto event_169_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) > (190))) goto event_169_13_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(15, 3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-((sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))/math_helper/0.35)*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(9))));
    }
    event_169_13_end: ;
}
void Frames::event_func_1411()
{
    // event 170_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_170_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(15)) == (3))) goto event_170_13_end;
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(22, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
    }
    event_170_13_end: ;
}
void Frames::event_func_1412()
{
    // event 171_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_171_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(15)) > (0))) goto event_171_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_171_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
    }
    event_171_13_end: ;
}
void Frames::event_func_1413()
{
    // event 172_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_172_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_172_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(0, str_player01slopesdown_64);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(5, str_player01slopesdown_64);
        {
            loop_player01slopesdown_running = true;
            int times = int(15);
            loop_player01slopesdown_index = 0;
            while (loop_player01slopesdown_index < times) {
                loop_player01slopesdown_13();
                if (!loop_player01slopesdown_running) break;
                loop_player01slopesdown_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(0, str_player01slopesup_65);
        {
            loop_player01slopesup_running = true;
            int times = int(15);
            loop_player01slopesup_index = 0;
            while (loop_player01slopesup_index < times) {
                loop_player01slopesup_13();
                if (!loop_player01slopesup_running) break;
                loop_player01slopesup_index++;
            }
        }
    }
    event_172_13_end: ;
}
void Frames::event_func_1414()
{
    // event 177_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_177_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_177_13_end;
        {
            loop_player01detectsensoredges_running = true;
            int times = int(1);
            loop_player01detectsensoredges_index = 0;
            while (loop_player01detectsensoredges_index < times) {
                loop_player01detectsensoredges_13();
                if (!loop_player01detectsensoredges_running) break;
                loop_player01detectsensoredges_index++;
            }
        }
    }
    event_177_13_end: ;
}
void Frames::event_func_1415()
{
    // event 178_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_178_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_178_13_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_178_13_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_178_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->strings.set(7, str_player01detectangle_63);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(24, 0);
        {
            loop_player01detectangle_running = true;
            int times = int(20);
            loop_player01detectangle_index = 0;
            while (loop_player01detectangle_index < times) {
                loop_player01detectangle_13();
                if (!loop_player01detectangle_running) break;
                loop_player01detectangle_index++;
            }
        }
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(0, ((Active*)get_instance(playersensorleftangle_400_instances))->get_x()-((Active*)get_instance(playersensorrightangle_401_instances))->get_x());
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(1, ((Active*)get_instance(playersensorleftangle_400_instances))->get_y()-((Active*)get_instance(playersensorrightangle_401_instances))->get_y());
        {
            loop_toolsanglecalculator_running = true;
            int times = int(1);
            loop_toolsanglecalculator_index = 0;
            while (loop_toolsanglecalculator_index < times) {
                loop_toolsanglecalculator_13();
                if (!loop_toolsanglecalculator_running) break;
                loop_toolsanglecalculator_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2));
    }
    event_178_13_end: ;
}
void Frames::event_func_1416()
{
    // event 179_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_179_13_end;
        generalanglechanger75_386_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(generalanglechanger75_386_instances, player_389_instances)) goto event_179_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_179_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) >= (((Active*)get_instance(generalanglechanger75_386_instances))->alterables->values.get(0)))) goto event_179_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)) <= (((Active*)get_instance(generalanglechanger75_386_instances))->alterables->values.get(1)))) goto event_179_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, ((Active*)get_instance(generalanglechanger75_386_instances))->alterables->values.get(2));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, ((Active*)get_instance(generalanglechanger75_386_instances))->alterables->values.get(2));
    }
    event_179_13_end: ;
}
void Frames::event_func_1417()
{
    // event 180_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_movement_1)) goto event_180_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_180_13_end;
        if (!((((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.get(25)) == (1))) goto event_180_13_end;
        if (!((((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.get(25)) == (1))) goto event_180_13_end;
        if (!((get_abs((360+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))) < (get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))))) goto event_180_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 360+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13));
    }
    event_180_13_end: ;
}
