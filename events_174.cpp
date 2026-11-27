#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::loop_wrapper_sound_explode2_64(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_64(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_64(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_46();
}
void Frames::event_func_13554()
{
    // event 1739_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1739_64_end;
        if (!((((Active*)foreach_instance_bolt)->alterables->values.get(9)) >= (5))) goto event_1739_64_end;
        if (!((((Active*)foreach_instance_bolt)->alterables->values.get(9)) <= (6))) goto event_1739_64_end;
        FrameObject * single_instance_1739_64_0; single_instance_1739_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosslightning2_2058(((Active*)foreach_instance_bolt)->x + 0, ((Active*)foreach_instance_bolt)->y + 0), ((Active*)foreach_instance_bolt)->layer);
            if (single_instance_1739_64_0 == NULL)
                single_instance_1739_64_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1739_64_0))->alterables->values.set(0, -90);
    }
    event_1739_64_end: ;
}
void Frames::event_func_13555()
{
    // event 1740_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1740_64_end;
        if (!((((Active*)foreach_instance_bolt)->alterables->values.get(9)) >= (5))) goto event_1740_64_end;
        if (!((((Active*)foreach_instance_bolt)->alterables->values.get(9)) <= (6))) goto event_1740_64_end;
        FrameObject * single_instance_1740_64_0; single_instance_1740_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_bosslightning2_2058(((Active*)foreach_instance_bolt)->x + 0, ((Active*)foreach_instance_bolt)->y + 0), ((Active*)foreach_instance_bolt)->layer);
            if (single_instance_1740_64_0 == NULL)
                single_instance_1740_64_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1740_64_0))->alterables->values.set(0, 90);
    }
    event_1740_64_end: ;
}
void Frames::foreach_bolt_64()
{
    event_func_13554();
    event_func_13555();
}
void Frames::event_func_13556()
{
    // event 1818_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1818_64_end;
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
        }
        if (!bossdail_3359_instances.has_selection()) goto event_1818_64_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(6)) == (1))) goto event_1818_64_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(6);
        ((Active*)get_instance(bossvortex2_3365_instances))->set_visible(false);
        ((Active*)get_instance(bossvortex1_3362_instances))->set_visible(false);
        ((Active*)get_instance(leveldarksky_2069_instances))->set_visible(false);
        ((Active*)((Active*)col_instance_2))->force_animation(0);
        ((Active*)((Active*)col_instance_2))->set_direction(16);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(1, 0);
    }
    event_1818_64_end: ;
}
void Frames::col_3_64()
{
    event_func_13556();
}
void Frames::event_func_13557()
{
    // event 1624_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1624_64_end;
        ((Active*)((Active*)col_instance_1))->alterables->flags.enable(2);
    }
    event_1624_64_end: ;
}
void Frames::col_6_64()
{
    event_func_13557();
}
void Frames::event_func_13558()
{
    // event 1692_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1)) goto event_1692_64_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1692_64_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(3))) goto event_1692_64_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(3);
        media.play_id(SOUND_ITEM_SHIELDBREAK_11, -1, 1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, ((Active*)col_instance_2)->alterables->values.get(0)*-1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(1, ((Active*)col_instance_2)->alterables->values.get(1)*-1);
    }
    event_1692_64_end: ;
}
void Frames::col_12_64()
{
    event_func_13558();
}
void Frames::test_collisions_64()
{
    test_collisions(qualifier_7, playerprojectile_320_instances, 2147483648, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(playerprojectile_320_instances, bossdailfall_3366_instances, 2, 1, (EventFunction)&Frames::col_3_64);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 268435456, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(objectpetal_302_instances, bosshatchdoor_3317_instances, 1, 1, (EventFunction)&Frames::col_6_64);
    test_collisions(player_389_instances, bosssparkyplasmashot_3288_instances, 1, 1, (EventFunction)&Frames::col_20_62);
    test_collisions(objectcrystal_279_instances, bosshatchdoor_3317_instances, 4, 2, (EventFunction)&Frames::col_6_64);
    test_collisions_save(playerreflect_447_instances, bosssparkyplasmashot_3288_instances, 1, 2, (EventFunction)&Frames::col_15_62);
    test_collisions(qualifier_7, effectsdebris_319_instances, 134217728, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 67108864, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(playerreflect_447_instances, bossvortexhitzone_3349_instances, 4, 1, (EventFunction)&Frames::col_12_64);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 4, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 8, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 8388608, 8, (EventFunction)&Frames::col_1_13);
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
void Frames::event_func_13559()
{
    // event 1415_64
    {
        if (!(group_main_engine_1)) goto event_1415_64_end;
        objectexplosiveblock_2708_instances.clear_selection();
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblock_2708_instances.has_selection()) goto event_1415_64_end;
        monitoricon_331_instances.clear_selection();
        if (!check_overlap(objectexplosiveblock_2708_instances, monitoricon_331_instances)) goto event_1415_64_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1415_64_end;
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
        FrameObject * single_instance_1415_64_0; single_instance_1415_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectexplosiveblock_2708_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 32, parent->y + 32), parent->layer);
                if (single_instance_1415_64_0 == NULL)
                    single_instance_1415_64_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1415_64_end: ;
}
void Frames::event_func_13560()
{
    // event 1419_64
    {
        if (!(group_main_engine_1)) goto event_1419_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1419_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
        }
    }
    event_1419_64_end: ;
}
void Frames::event_func_13561()
{
    // event 1420_64
    {
        if (!(group_main_engine_1)) goto event_1420_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) != (0))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1420_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.add(9, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.3, 15));
        }
    }
    event_1420_64_end: ;
}
void Frames::event_func_13562()
{
    // event 1421_64
    {
        if (!(group_main_engine_1)) goto event_1421_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1421_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
        ((Active*)get_single(enemybeastiris_3353_instances, default_active_instance))->move_back(((Active*)get_instance(player_389_instances)));
    }
    event_1421_64_end: ;
}
void Frames::event_func_13563()
{
    // event 1422_64
    {
        if (!(group_main_engine_1)) goto event_1422_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (((Active*)*it)->alterables->values.get(3)))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1422_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1422_64_end: ;
}
void Frames::event_func_13564()
{
    // event 1423_64
    {
        if (!(group_main_engine_1)) goto event_1423_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1423_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -4);
        }
    }
    event_1423_64_end: ;
}
void Frames::event_func_13565()
{
    // event 1424_64
    {
        if (!(group_main_engine_1)) goto event_1424_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1424_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 4);
        }
    }
    event_1424_64_end: ;
}
void Frames::event_func_13566()
{
    // event 1425_64
    {
        if (!(group_main_engine_1)) goto event_1425_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1425_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-1, 0));
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1425_64_end: ;
}
void Frames::event_func_13567()
{
    // event 1426_64
    {
        if (!(group_main_engine_1)) goto event_1426_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1426_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1426_64_end: ;
}
void Frames::event_func_13568()
{
    // event 1427_64
    {
        if (!(group_main_engine_1)) goto event_1427_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1427_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1427_64_end: ;
}
void Frames::event_func_13569()
{
    // event 1428_64
    {
        if (!(group_main_engine_1)) goto event_1428_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1428_64_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemybeastiris_3353_instances, enemylimiter_350_instances)) goto event_1428_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 10);
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1428_64_end: ;
}
void Frames::event_func_13570()
{
    // event 1429_64
    {
        if (!(group_main_engine_1)) goto event_1429_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1429_64_end;
        player_389_instances.clear_selection();
        if (!check_overlap(enemybeastiris_3353_instances, player_389_instances)) goto event_1429_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 2);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1429_64_end: ;
}
void Frames::event_func_13571()
{
    // event 1430_64
    {
        if (!(group_main_engine_1)) goto event_1430_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1430_64_end;
        player_389_instances.clear_selection();
        if (!check_overlap(enemybeastiris_3353_instances, player_389_instances)) goto event_1430_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 2);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1430_64_end: ;
}
void Frames::event_func_13572()
{
    // event 1431_64
    {
        if (!(group_main_engine_1)) goto event_1431_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1431_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1431_64_end: ;
}
void Frames::event_func_13573()
{
    // event 1432_64
    {
        if (!(group_main_engine_1)) goto event_1432_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (14))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1432_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1432_64_end: ;
}
void Frames::event_func_13574()
{
    // event 1433_64
    {
        if (!(group_main_engine_1)) goto event_1433_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (16))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1433_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1433_64_end: ;
}
void Frames::event_func_13575()
{
    // event 1434_64
    {
        if (!(group_main_engine_1)) goto event_1434_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1434_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 10);
        }
    }
    event_1434_64_end: ;
}
void Frames::event_func_13576()
{
    // event 1435_64
    {
        if (!(group_main_engine_1)) goto event_1435_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1435_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 10);
        }
    }
    event_1435_64_end: ;
}
void Frames::event_func_13577()
{
    // event 1436_64
    {
        if (!(group_main_engine_1)) goto event_1436_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1436_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 1);
            ((Active*)*it)->alterables->values.set(7, -80);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1436_64_end: ;
}
void Frames::event_func_13578()
{
    // event 1437_64
    {
        if (!(group_main_engine_1)) goto event_1437_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (6))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1437_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 6);
        }
    }
    event_1437_64_end: ;
}
void Frames::event_func_13579()
{
    // event 1438_64
    {
        if (!(group_main_engine_1)) goto event_1438_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (6))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1438_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1438_64_end: ;
}
void Frames::event_func_13580()
{
    // event 1439_64
    {
        if (!(group_main_engine_1)) goto event_1439_64_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(22)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto event_1439_64_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
        media.play_id(SOUND_ATTACK2_137, -1, 1);
    }
    event_1439_64_end: ;
}
void Frames::event_func_13581()
{
    // event 1440_64
    bool or_result_1440_64 = false;
    bool or_temp_result_1440_64_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1440_64_0_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1440_64_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybeastiris_3353_instances, qualifier_7)) goto or_event_1440_64_0_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1440_64_0_end;
        or_result_1440_64 = true;
        or_temp_result_1440_64_0 = true;
    }
    or_event_1440_64_0_end: ;
    enemybeastiris_3353_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1440_64_0) {
        enemybeastiris_3353_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1440_64
    bool or_temp_result_1440_64_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1440_64_1_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1440_64_1_end;
        or_result_1440_64 = true;
        or_temp_result_1440_64_1 = true;
        or_event_1440_64_1_end: ;
        if (or_temp_result_1440_64_1) {
            enemybeastiris_3353_instances.save_selection();
        }
        if (!or_result_1440_64) goto or_final_or_event_1440_64_1_end;
        enemybeastiris_3353_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1440_64_0 || or_temp_result_1440_64_1) {
            enemybeastiris_3353_instances.restore_selection();
        }
        if (or_temp_result_1440_64_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1440_64_0; single_instance_1440_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybeastiris_3353_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1440_64_0 == NULL)
                    single_instance_1440_64_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1440_64_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1440_64_0))->set_direction(8);
        ((Active*)((Active*)single_instance_1440_64_0))->alterables->values.set(0, 2);
    }
    or_final_or_event_1440_64_1_end: ;
}
void Frames::event_func_13582()
{
    // event 1441_64
    bool or_result_1441_64 = false;
    bool or_temp_result_1441_64_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1441_64_0_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1441_64_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemybeastiris_3353_instances, qualifier_7)) goto or_event_1441_64_0_end;
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1441_64_0_end;
        or_result_1441_64 = true;
        or_temp_result_1441_64_0 = true;
    }
    or_event_1441_64_0_end: ;
    enemybeastiris_3353_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1441_64_0) {
        enemybeastiris_3353_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1441_64
    bool or_temp_result_1441_64_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1441_64_1_end;
        enemybeastiris_3353_instances.clear_selection();
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemybeastiris_3353_instances.has_selection()) goto or_event_1441_64_1_end;
        or_result_1441_64 = true;
        or_temp_result_1441_64_1 = true;
        or_event_1441_64_1_end: ;
        if (or_temp_result_1441_64_1) {
            enemybeastiris_3353_instances.save_selection();
        }
        if (!or_result_1441_64) goto or_final_or_event_1441_64_1_end;
        enemybeastiris_3353_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1441_64_0 || or_temp_result_1441_64_1) {
            enemybeastiris_3353_instances.restore_selection();
        }
        if (or_temp_result_1441_64_0) {
            qualifier_7.restore_selection();
        }
        for (ObjectIterator it(enemybeastiris_3353_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1441_64_0; single_instance_1441_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybeastiris_3353_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1441_64_0 == NULL)
                    single_instance_1441_64_0 = new_obj;
            }
        }
        FrameObject * single_instance_1441_64_1; single_instance_1441_64_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybeastiris_3353_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1441_64_1 == NULL)
                    single_instance_1441_64_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1441_64_1_end: ;
}
void Frames::event_func_13583()
{
    // event 1469_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1469_64_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1469_64_end;
        if (!((global_values->get(0)) < (1))) goto event_1469_64_end;
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
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        if (!group_main_engine_level_specific_methods_frame_transition_1) {
            group_main_engine_level_specific_methods_frame_transition_1 = true;
        }
    }
    event_1469_64_end: ;
}
void Frames::event_func_13584()
{
    // event 1470_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1470_64_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1470_64_end;
        if (!((global_values->get(0)) == (1))) goto event_1470_64_end;
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
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        if (!group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1) {
            group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1 = true;
        }
    }
    event_1470_64_end: ;
}
void Frames::event_func_13585()
{
    // event 1471_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1471_64_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1471_64_end;
        if (!((global_values->get(0)) >= (2))) goto event_1471_64_end;
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
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 0);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(0, 999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(levelcardactclear1_847_instances))->alterables->flags.disable(0);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_y(-99);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers_362_instances))->set_y(-99);
        ((Counter*)get_instance(guitimers2_363_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm_364_instances))->set_y(-99);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_y(-99);
        if (!group_main_engine_level_specific_methods_cutscenes_team_meeting_1) {
            group_main_engine_level_specific_methods_cutscenes_team_meeting_1 = true;
        }
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(18, 0);
            group_main_engine_level_specific_methods_bosses_1 = false;
    
    }
    event_1471_64_end: ;
}
void Frames::event_func_13586()
{
    // event 1480_64
    {
        if (!(group_main_engine_1)) goto event_1480_64_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 799, 1904, 865, 1985)) > (0))) goto event_1480_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1480_64_end: ;
}
void Frames::event_func_13587()
{
    // event 1481_64
    {
        if (!(group_main_engine_1)) goto event_1481_64_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 1182, 1905, 1248, 1986)) > (0))) goto event_1481_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1481_64_end: ;
}
void Frames::event_func_13588()
{
    // event 1490_64
    {
        if (!(group_main_engine_1)) goto event_1490_64_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1490_64_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1490_64_0; single_instance_1490_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitormetalshield_329(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1490_64_0 == NULL)
                    single_instance_1490_64_0 = new_obj;
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
        ((Active*)((Active*)single_instance_1490_64_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1490_64_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1490_64_0))->alterables->flags.enable(3);
        ((Active*)((Active*)single_instance_1490_64_0))->set_layer(((Active*)get_single(objectdigspot_734_instances, default_active_instance))->layer->index+1-1-1);
        ((Active*)((Active*)single_instance_1490_64_0))->alterables->values.set(1, -4);
    }
    event_1490_64_end: ;
}
void Frames::event_func_13589()
{
    // event 1491_64
    {
        if (!(group_main_engine_1)) goto event_1491_64_end;
        objectdigspot_734_instances.clear_selection();
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectdigspot_734_instances.has_selection()) goto event_1491_64_end;
        for (ObjectIterator it(objectdigspot_734_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1491_64_0; single_instance_1491_64_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectdigspot_734_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorinvincibility_408(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1491_64_0 == NULL)
                    single_instance_1491_64_0 = new_obj;
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
        ((Active*)((Active*)single_instance_1491_64_0))->alterables->values.set(0, 1);
        ((Active*)((Active*)single_instance_1491_64_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1491_64_0))->alterables->flags.enable(3);
        ((Active*)((Active*)single_instance_1491_64_0))->set_layer(((Active*)get_single(objectdigspot_734_instances, default_active_instance))->layer->index+1-1-1);
        ((Active*)((Active*)single_instance_1491_64_0))->alterables->values.set(1, -4);
    }
    event_1491_64_end: ;
}
void Frames::event_func_13590()
{
    // event 1498_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1498_64_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1498_64_end;
        FrameObject * single_instance_1498_64_0; single_instance_1498_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1498_64_0 == NULL)
                    single_instance_1498_64_0 = new_obj;
            }
        }
    }
    event_1498_64_end: ;
}
void Frames::event_func_13591()
{
    // event 1499_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1499_64_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1499_64_end;
        FrameObject * single_instance_1499_64_0; single_instance_1499_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1499_64_0 == NULL)
                    single_instance_1499_64_0 = new_obj;
            }
        }
    }
    event_1499_64_end: ;
}
void Frames::event_func_13592()
{
    // event 1500_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1500_64_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1500_64_end;
        FrameObject * single_instance_1500_64_0; single_instance_1500_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1500_64_0 == NULL)
                    single_instance_1500_64_0 = new_obj;
            }
        }
    }
    event_1500_64_end: ;
}
void Frames::event_func_13593()
{
    // event 1501_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1501_64_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1501_64_end;
        FrameObject * single_instance_1501_64_0; single_instance_1501_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1501_64_0 == NULL)
                    single_instance_1501_64_0 = new_obj;
            }
        }
    }
    event_1501_64_end: ;
}
void Frames::event_func_13594()
{
    // event 1502_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1502_64_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1502_64_end;
        FrameObject * single_instance_1502_64_0; single_instance_1502_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1502_64_0 == NULL)
                    single_instance_1502_64_0 = new_obj;
            }
        }
    }
    event_1502_64_end: ;
}
void Frames::event_func_13595()
{
    // event 1503_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1503_64_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1503_64_end;
        FrameObject * single_instance_1503_64_0; single_instance_1503_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1503_64_0 == NULL)
                    single_instance_1503_64_0 = new_obj;
            }
        }
    }
    event_1503_64_end: ;
}
void Frames::event_func_13596()
{
    // event 1504_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1504_64_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1504_64_end;
        FrameObject * single_instance_1504_64_0; single_instance_1504_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1504_64_0 == NULL)
                    single_instance_1504_64_0 = new_obj;
            }
        }
    }
    event_1504_64_end: ;
}
void Frames::event_func_13597()
{
    // event 1505_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1505_64_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1505_64_end;
        FrameObject * single_instance_1505_64_0; single_instance_1505_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1505_64_0 == NULL)
                    single_instance_1505_64_0 = new_obj;
            }
        }
    }
    event_1505_64_end: ;
}
void Frames::event_func_13598()
{
    // event 1506_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1506_64_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1506_64_end;
        FrameObject * single_instance_1506_64_0; single_instance_1506_64_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1506_64_0 == NULL)
                    single_instance_1506_64_0 = new_obj;
            }
        }
    }
    event_1506_64_end: ;
}
void Frames::event_func_13599()
{
    // event 1507_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1507_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1507_64_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1507_64_end: ;
}
void Frames::event_func_13600()
{
    // event 1508_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1508_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1508_64_end;
        if (not_always_1508_64 > loop_count) {
            not_always_1508_64 = loop_count + 2;
            goto event_1508_64_end;
        }
        not_always_1508_64 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1508_64_end: ;
}
void Frames::event_func_13601()
{
    // event 1509_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1509_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1509_64_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(1, string_size(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0))-15);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(3, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 0, 2)));
        ((Active*)get_instance(dialogbox2_567_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3));
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 2);
        {
            loop_voice_running = true;
            int times = int(1);
            loop_voice_index = 0;
            while (loop_voice_index < times) {
                loop_voice_64();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1509_64_end: ;
}
void Frames::event_func_13602()
{
    // event 1510_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1510_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1510_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1510_64_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1510_64_end: ;
}
void Frames::event_func_13603()
{
    // event 1511_64
    bool or_result_1511_64 = false;
    bool or_temp_result_1511_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto or_event_1511_64_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1511_64_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1511_64_0_end;
        if (not_always_1511_64 > loop_count) {
            not_always_1511_64 = loop_count + 2;
            goto or_event_1511_64_0_end;
        }
        not_always_1511_64 = loop_count + 2;
        or_result_1511_64 = true;
        or_temp_result_1511_64_0 = true;
    }
    or_event_1511_64_0_end: ;
    // event 1511_64
    bool or_temp_result_1511_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto or_event_1511_64_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1511_64_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1511_64_1_end;
        if (not_always_1511_64 > loop_count) {
            not_always_1511_64 = loop_count + 2;
            goto or_event_1511_64_1_end;
        }
        not_always_1511_64 = loop_count + 2;
        or_result_1511_64 = true;
        or_temp_result_1511_64_1 = true;
        or_event_1511_64_1_end: ;
        if (!or_result_1511_64) goto or_final_or_event_1511_64_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1511_64_1_end: ;
}
void Frames::event_func_13604()
{
    // event 1512_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1512_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1512_64_end;
        if (not_always_1512_64 > loop_count) {
            not_always_1512_64 = loop_count + 2;
            goto event_1512_64_end;
        }
        not_always_1512_64 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1512_64_end: ;
}
void Frames::event_func_13605()
{
    // event 1513_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1513_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1513_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1513_64_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1513_64_end: ;
}
void Frames::event_func_13606()
{
    // event 1514_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1514_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1514_64_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1514_64_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1514_64_end: ;
}
void Frames::event_func_13607()
{
    // event 1515_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1515_64_end;
        if (!((global_values->get(27)) == (0))) goto event_1515_64_end;
        if (not_always_1515_64 > loop_count) {
            not_always_1515_64 = loop_count + 2;
            goto event_1515_64_end;
        }
        not_always_1515_64 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1515_64_end: ;
}
void Frames::event_func_13608()
{
    // event 1519_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1519_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1519_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1519_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1519_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1519_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1519_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1519_64_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1519_64_end: ;
}
void Frames::event_func_13609()
{
    // event 1520_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1520_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1520_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1520_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1520_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1520_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1520_64_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1520_64_end: ;
}
void Frames::event_func_13610()
{
    // event 1521_64
    bool or_result_1521_64 = false;
    bool or_temp_result_1521_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1521_64_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1521_64_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1521_64_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1521_64_0_end;
        or_result_1521_64 = true;
        or_temp_result_1521_64_0 = true;
    }
    or_event_1521_64_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1521_64_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1521_64
    bool or_temp_result_1521_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1521_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1521_64_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1521_64_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1521_64_1_end;
        or_result_1521_64 = true;
        or_temp_result_1521_64_1 = true;
        or_event_1521_64_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1521_64_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1521_64) goto or_final_or_event_1521_64_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1521_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1521_64_0 || or_temp_result_1521_64_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1521_64_1_end: ;
}
void Frames::event_func_13611()
{
    // event 1522_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1522_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1522_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1522_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1522_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1522_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1522_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1522_64_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1522_64_end: ;
}
void Frames::event_func_13612()
{
    // event 1523_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1523_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1523_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1523_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1523_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1523_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1523_64_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1523_64_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1523_64_end: ;
}
void Frames::event_func_13613()
{
    // event 1524_64
    bool or_result_1524_64 = false;
    bool or_temp_result_1524_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1524_64_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1524_64_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1524_64_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1524_64_0_end;
        or_result_1524_64 = true;
        or_temp_result_1524_64_0 = true;
    }
    or_event_1524_64_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1524_64_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1524_64
    bool or_temp_result_1524_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1524_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1524_64_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1524_64_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1524_64_1_end;
        or_result_1524_64 = true;
        or_temp_result_1524_64_1 = true;
        or_event_1524_64_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1524_64_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1524_64) goto or_final_or_event_1524_64_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1524_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1524_64_0 || or_temp_result_1524_64_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1524_64_1_end: ;
}
void Frames::event_func_13614()
{
    // event 1525_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1525_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1525_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1525_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1525_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1525_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1525_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1525_64_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1525_64_end: ;
}
void Frames::event_func_13615()
{
    // event 1526_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1526_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1526_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1526_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1526_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1526_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1526_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1526_64_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1526_64_end: ;
}
void Frames::event_func_13616()
{
    // event 1527_64
    bool or_result_1527_64 = false;
    bool or_temp_result_1527_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1527_64_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1527_64_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1527_64_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1527_64_0_end;
        or_result_1527_64 = true;
        or_temp_result_1527_64_0 = true;
    }
    or_event_1527_64_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1527_64_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1527_64
    bool or_temp_result_1527_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1527_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1527_64_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1527_64_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1527_64_1_end;
        or_result_1527_64 = true;
        or_temp_result_1527_64_1 = true;
        or_event_1527_64_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1527_64_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1527_64) goto or_final_or_event_1527_64_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1527_64_0 || or_temp_result_1527_64_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1527_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1527_64_1_end: ;
}
void Frames::event_func_13617()
{
    // event 1528_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1528_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1528_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1528_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1528_64_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1528_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1528_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1528_64_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1528_64_end: ;
}
void Frames::event_func_13618()
{
    // event 1529_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1529_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1529_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1529_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1529_64_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1529_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1529_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1529_64_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1529_64_end: ;
}
void Frames::event_func_13619()
{
    // event 1530_64
    bool or_result_1530_64 = false;
    bool or_temp_result_1530_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1530_64_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1530_64_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1530_64_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1530_64_0_end;
        or_result_1530_64 = true;
        or_temp_result_1530_64_0 = true;
    }
    or_event_1530_64_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1530_64_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1530_64
    bool or_temp_result_1530_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1530_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1530_64_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1530_64_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1530_64_1_end;
        or_result_1530_64 = true;
        or_temp_result_1530_64_1 = true;
        or_event_1530_64_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1530_64_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1530_64) goto or_final_or_event_1530_64_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1530_64_0 || or_temp_result_1530_64_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1530_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1530_64_1_end: ;
}
void Frames::event_func_13620()
{
    // event 1531_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1531_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1531_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1531_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1531_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1531_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1531_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1531_64_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1531_64_end: ;
}
void Frames::event_func_13621()
{
    // event 1532_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto event_1532_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1532_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1532_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1532_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1532_64_end;
        if (!media.is_channel_playing(20-1)) goto event_1532_64_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1532_64_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1532_64_end: ;
}
void Frames::event_func_13622()
{
    // event 1533_64
    bool or_result_1533_64 = false;
    bool or_temp_result_1533_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1533_64_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1533_64_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1533_64_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1533_64_0_end;
        or_result_1533_64 = true;
        or_temp_result_1533_64_0 = true;
    }
    or_event_1533_64_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1533_64_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1533_64
    bool or_temp_result_1533_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1533_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1533_64_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1533_64_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1533_64_1_end;
        or_result_1533_64 = true;
        or_temp_result_1533_64_1 = true;
        or_event_1533_64_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1533_64_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1533_64) goto or_final_or_event_1533_64_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1533_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1533_64_0 || or_temp_result_1533_64_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1533_64_1_end: ;
}
void Frames::event_func_13623()
{
    // event 1534_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1534_64_end;
        if (!((global_values->get(27)) == (1))) goto event_1534_64_end;
        if (not_always_1534_64 > loop_count) {
            not_always_1534_64 = loop_count + 2;
            goto event_1534_64_end;
        }
        not_always_1534_64 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1534_64_end: ;
}
void Frames::event_func_13624()
{
    // event 1535_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1535_64_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1535_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1535_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1535_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1535_64_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1535_64_end: ;
}
void Frames::event_func_13625()
{
    // event 1536_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1536_64_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1536_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1536_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1536_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1536_64_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1536_64_end: ;
}
void Frames::event_func_13626()
{
    // event 1537_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1537_64_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1537_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1537_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1537_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1537_64_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1537_64_end: ;
}
void Frames::event_func_13627()
{
    // event 1538_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1538_64_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1538_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1538_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1538_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1538_64_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1538_64_end: ;
}
void Frames::event_func_13628()
{
    // event 1539_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1539_64_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1539_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1539_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1539_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1539_64_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1539_64_end: ;
}
void Frames::event_func_13629()
{
    // event 1540_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1540_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1540_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1540_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1540_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1540_64_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1540_64_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1540_64_end: ;
}
void Frames::event_func_13630()
{
    // event 1541_64
    bool or_result_1541_64 = false;
    bool or_temp_result_1541_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1541_64_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1541_64_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1541_64_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1541_64_0_end;
        or_result_1541_64 = true;
        or_temp_result_1541_64_0 = true;
    }
    or_event_1541_64_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1541_64_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1541_64
    bool or_temp_result_1541_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1541_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1541_64_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1541_64_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1541_64_1_end;
        or_result_1541_64 = true;
        or_temp_result_1541_64_1 = true;
        or_event_1541_64_1_end: ;
        if (or_temp_result_1541_64_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1541_64) goto or_final_or_event_1541_64_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1541_64_0 || or_temp_result_1541_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1541_64_0 || or_temp_result_1541_64_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1541_64_1_end: ;
}
void Frames::event_func_13631()
{
    // event 1542_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1542_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1542_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1542_64_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1542_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1542_64_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1542_64_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1542_64_end: ;
}
void Frames::event_func_13632()
{
    // event 1543_64
    bool or_result_1543_64 = false;
    bool or_temp_result_1543_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1543_64_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1543_64_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1543_64_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1543_64_0_end;
        or_result_1543_64 = true;
        or_temp_result_1543_64_0 = true;
    }
    or_event_1543_64_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1543_64_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1543_64
    bool or_temp_result_1543_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1543_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1543_64_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1543_64_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1543_64_1_end;
        or_result_1543_64 = true;
        or_temp_result_1543_64_1 = true;
        or_event_1543_64_1_end: ;
        if (or_temp_result_1543_64_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1543_64) goto or_final_or_event_1543_64_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1543_64_0 || or_temp_result_1543_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1543_64_0 || or_temp_result_1543_64_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1543_64_1_end: ;
}
void Frames::event_func_13633()
{
    // event 1544_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1544_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1544_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1544_64_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1544_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1544_64_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1544_64_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1544_64_end: ;
}
void Frames::event_func_13634()
{
    // event 1545_64
    bool or_result_1545_64 = false;
    bool or_temp_result_1545_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1545_64_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1545_64_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1545_64_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1545_64_0_end;
        or_result_1545_64 = true;
        or_temp_result_1545_64_0 = true;
    }
    or_event_1545_64_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1545_64_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1545_64
    bool or_temp_result_1545_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1545_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1545_64_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1545_64_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1545_64_1_end;
        or_result_1545_64 = true;
        or_temp_result_1545_64_1 = true;
        or_event_1545_64_1_end: ;
        if (or_temp_result_1545_64_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1545_64) goto or_final_or_event_1545_64_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1545_64_0 || or_temp_result_1545_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1545_64_0 || or_temp_result_1545_64_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1545_64_1_end: ;
}
void Frames::event_func_13635()
{
    // event 1546_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1546_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1546_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1546_64_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1546_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1546_64_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1546_64_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1546_64_end: ;
}
void Frames::event_func_13636()
{
    // event 1547_64
    bool or_result_1547_64 = false;
    bool or_temp_result_1547_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1547_64_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1547_64_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1547_64_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1547_64_0_end;
        or_result_1547_64 = true;
        or_temp_result_1547_64_0 = true;
    }
    or_event_1547_64_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1547_64_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1547_64
    bool or_temp_result_1547_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1547_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1547_64_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1547_64_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1547_64_1_end;
        or_result_1547_64 = true;
        or_temp_result_1547_64_1 = true;
        or_event_1547_64_1_end: ;
        if (or_temp_result_1547_64_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1547_64) goto or_final_or_event_1547_64_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1547_64_0 || or_temp_result_1547_64_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1547_64_0 || or_temp_result_1547_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1547_64_1_end: ;
}
void Frames::event_func_13637()
{
    // event 1548_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto event_1548_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1548_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1548_64_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1548_64_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1548_64_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1548_64_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1548_64_end: ;
}
void Frames::event_func_13638()
{
    // event 1549_64
    bool or_result_1549_64 = false;
    bool or_temp_result_1549_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1549_64_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1549_64_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1549_64_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1549_64_0_end;
        or_result_1549_64 = true;
        or_temp_result_1549_64_0 = true;
    }
    or_event_1549_64_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1549_64_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1549_64
    bool or_temp_result_1549_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1)) goto or_event_1549_64_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1549_64_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1549_64_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1549_64_1_end;
        or_result_1549_64 = true;
        or_temp_result_1549_64_1 = true;
        or_event_1549_64_1_end: ;
        if (or_temp_result_1549_64_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1549_64) goto or_final_or_event_1549_64_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1549_64_0 || or_temp_result_1549_64_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1549_64_0 || or_temp_result_1549_64_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1549_64_1_end: ;
}
void Frames::event_func_13639()
{
    // event 1551_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1551_64_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1551_64_end: ;
}
void Frames::event_func_13640()
{
    // event 1552_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1552_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(19, 1);
    }
    event_1552_64_end: ;
}
void Frames::event_func_13641()
{
    // event 1553_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1553_64_end;
        if (once_condition_1553_64) goto event_1553_64_end;
        once_condition_1553_64 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1553_64_end: ;
}
void Frames::event_func_13642()
{
    // event 1554_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1554_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1554_64_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_x(2200);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_x(2120);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_x(2080);
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_x(2160);
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_x(2400);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 20);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
        }
        if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) {
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(bossdailfall_3366_instances))->set_visible(false);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->flags.enable(14);
    }
    event_1554_64_end: ;
}
void Frames::event_func_13643()
{
    // event 1555_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1555_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1555_64_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (1900))) goto event_1555_64_end;
        if (once_condition_1555_64) goto event_1555_64_end;
        once_condition_1555_64 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 11);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1555_64_end: ;
}
void Frames::event_func_13644()
{
    // event 1556_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto event_1556_64_end;
        if (!((((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.get(18)) == (0))) goto event_1556_64_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (2260))) goto event_1556_64_end;
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.add(18, 1);
        ((Active*)get_instance(bossdailfall_3366_instances))->alterables->values.set(19, 0);
    }
    event_1556_64_end: ;
}
void Frames::event_func_13645()
{
    // event 1557_64
    bool or_result_1557_64 = false;
    bool or_temp_result_1557_64_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto or_event_1557_64_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1557_64_0_end;
        or_result_1557_64 = true;
        or_temp_result_1557_64_0 = true;
    }
    or_event_1557_64_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1557_64_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1557_64
    bool or_temp_result_1557_64_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto or_event_1557_64_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1557_64_1_end;
        or_result_1557_64 = true;
        or_temp_result_1557_64_1 = true;
    }
    or_event_1557_64_1_end: ;
    if (or_temp_result_1557_64_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1557_64
    bool or_temp_result_1557_64_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_team_meeting_1)) goto or_event_1557_64_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1557_64_2_end;
        or_result_1557_64 = true;
        or_temp_result_1557_64_2 = true;
        or_event_1557_64_2_end: ;
        if (or_temp_result_1557_64_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1557_64) goto or_final_or_event_1557_64_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1557_64_0 || or_temp_result_1557_64_1 || or_temp_result_1557_64_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1557_64_2_end: ;
}
