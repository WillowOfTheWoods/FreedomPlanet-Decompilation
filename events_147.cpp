#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_11751()
{
    // event 1507_50
    {
        if (!(group_main_engine_1)) goto event_1507_50_end;
        if (!((((Active*)foreach_instance_sf)->alterables->values.get(3)) == (2))) goto event_1507_50_end;
        if (!((((Active*)foreach_instance_sf)->alterables->values.get(4)) < (60))) goto event_1507_50_end;
        FrameObject * single_instance_1507_50_0; single_instance_1507_50_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemysleepgas_2889(((Active*)foreach_instance_sf)->get_action_x() - ((Active*)foreach_instance_sf)->layer->off_x + 0, ((Active*)foreach_instance_sf)->get_action_y() - ((Active*)foreach_instance_sf)->layer->off_y + 0), ((Active*)foreach_instance_sf)->layer);
            if (single_instance_1507_50_0 == NULL)
                single_instance_1507_50_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1507_50_0))->alterables->values.set(3, ((Active*)foreach_instance_sf)->get_action_x());
        ((Active*)((Active*)single_instance_1507_50_0))->alterables->values.set(4, ((Active*)foreach_instance_sf)->get_action_y());
        ((Active*)((Active*)single_instance_1507_50_0))->alterables->values.set(2, (((Active*)foreach_instance_sf)->alterables->values.get(5)+1)*90+200-randrange(41));
        ((Active*)((Active*)single_instance_1507_50_0))->alterables->values.set(5, randrange(20)-15);
    }
    event_1507_50_end: ;
}
void Frames::foreach_sf_50()
{
    event_func_11751();
}
void Frames::event_func_11752()
{
    // event 1437_50
    {
        if (!(group_main_engine_1)) goto event_1437_50_end;
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (((Active*)foreach_instance_br)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!objecttimegatepiece_2966_instances.has_selection()) goto event_1437_50_end;
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+3)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)foreach_instance_br)->get_x()+cos_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(2)*0.5);
            ((Active*)*it)->set_y(((Active*)foreach_instance_br)->get_y()+sin_deg(((Active*)*it)->alterables->values.get(3))*((Active*)*it)->alterables->values.get(2)*-1);
            ((Active*)*it)->set_scale(0.8+cos_deg(((Active*)*it)->alterables->values.get(3))*0.2);
        }
    }
    event_1437_50_end: ;
}
void Frames::foreach_br_50()
{
    event_func_11752();
}
void Frames::event_func_11753()
{
    // event 1513_50
    {
        if (!(group_main_engine_1)) goto event_1513_50_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) < (65))) goto event_1513_50_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1513_50_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (1))) goto event_1513_50_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1513_50_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 90);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 128, 255));
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
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 128, 255));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 128, 255));
        }
    }
    event_1513_50_end: ;
}
void Frames::col_6_50()
{
    event_func_11753();
}
void Frames::event_func_11754()
{
    // event 1410_50
    bool or_result_1410_50 = false;
    bool or_temp_result_1410_50_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1410_50_0_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) == (0))) goto or_event_1410_50_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1410_50_0_end;
        or_result_1410_50 = true;
        or_temp_result_1410_50_0 = true;
    }
    or_event_1410_50_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1410_50_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1410_50
    bool or_temp_result_1410_50_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1410_50_1_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(0)) == (0))) goto or_event_1410_50_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (26))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1410_50_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (2))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1410_50_1_end;
        or_result_1410_50 = true;
        or_temp_result_1410_50_1 = true;
        or_event_1410_50_1_end: ;
        playerskinsash_418_instances.clear_saved_selection();
        if (or_temp_result_1410_50_1) {
            playermovementvalues_245_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1410_50) goto or_final_or_event_1410_50_1_end;
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1410_50_0 || or_temp_result_1410_50_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1410_50_1) {
            playerskinsash_418_instances.restore_selection();
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, 1);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, ((Active*)col_instance_2)->get_x()-((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(23));
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 26);
        }
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        ((Active*)((Active*)col_instance_2))->set_direction(1);
    }
    or_final_or_event_1410_50_1_end: ;
}
void Frames::col_8_50()
{
    event_func_11754();
}
void Frames::event_func_11755()
{
    // event 1440_50
    {
        if (!(group_main_engine_1)) goto event_1440_50_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(3)) == (0))) goto event_1440_50_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1440_50_end;
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->flags.enable(8);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(3, 1);
        media.play_id(SOUND_BOOST_RING_326, -1, 1);
    }
    event_1440_50_end: ;
}
void Frames::col_9_50()
{
    event_func_11755();
}
void Frames::test_collisions_50()
{
    test_collisions(qualifier_7, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 134217728, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(playercharactersensor_383_instances, enemysleepgas_2889_instances, 1, 1, (EventFunction)&Frames::col_6_50);
    test_collisions(qualifier_8, playerreflect_447_instances, 67108864, 1, (EventFunction)&Frames::col_5_13);
    test_collisions(playersensorbottombig_397_instances, objectcyclonetop_2963_instances, 1, 1, (EventFunction)&Frames::col_8_50);
    test_collisions(player_389_instances, objecttimegate_2965_instances, 1, 1, (EventFunction)&Frames::col_9_50);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
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
void Frames::event_func_11756()
{
    // event 538_50
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_538_50_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_538_50_end;
        FrameObject * single_instance_538_50_0; single_instance_538_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_538_50_0 == NULL)
                    single_instance_538_50_0 = new_obj;
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
                loop_spawndebris_50();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_538_50_end: ;
}
void Frames::event_func_11757()
{
    // event 555_50
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_555_50_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_555_50_end;
        FrameObject * single_instance_555_50_0; single_instance_555_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_555_50_0 == NULL)
                    single_instance_555_50_0 = new_obj;
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
                loop_spawndebris_50();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_555_50_end: ;
}
void Frames::event_func_11758()
{
    // event 689_50
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_689_50_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_689_50_end;
        FrameObject * single_instance_689_50_0; single_instance_689_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_689_50_0 == NULL)
                    single_instance_689_50_0 = new_obj;
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
                loop_spawndebris_50();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_689_50_end: ;
}
void Frames::event_func_11759()
{
    // event 1411_50
    {
        if (!(group_main_engine_1)) goto event_1411_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1411_50_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+16);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->alterables->values.set(8, get_min(((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8), 2));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), -1));
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+1, 100));
    }
    event_1411_50_end: ;
}
void Frames::event_func_11760()
{
    // event 1412_50
    {
        if (!(group_main_engine_1)) goto event_1412_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1412_50_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_1412_50_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1412_50_end: ;
}
void Frames::event_func_11761()
{
    // event 1413_50
    {
        if (!(group_main_engine_1)) goto event_1413_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1413_50_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+2, 0));
        }
    }
    event_1413_50_end: ;
}
void Frames::event_func_11762()
{
    // event 1414_50
    {
        if (!(group_main_engine_1)) goto event_1414_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1414_50_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-2, 0));
        }
    }
    event_1414_50_end: ;
}
void Frames::event_func_11763()
{
    // event 1415_50
    bool or_result_1415_50 = false;
    bool or_temp_result_1415_50_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1415_50_0_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto or_event_1415_50_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1415_50_0_end;
        or_result_1415_50 = true;
        or_temp_result_1415_50_0 = true;
    }
    or_event_1415_50_0_end: ;
    objectcyclonetop_2963_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1415_50_0) {
        objectcyclonetop_2963_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1415_50
    bool or_temp_result_1415_50_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1415_50_1_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto or_event_1415_50_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (20))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1415_50_1_end;
        or_result_1415_50 = true;
        or_temp_result_1415_50_1 = true;
        or_event_1415_50_1_end: ;
        if (or_temp_result_1415_50_1) {
            objectcyclonetop_2963_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1415_50) goto or_final_or_event_1415_50_1_end;
        playermovementvalues_245_instances.empty_selection();
        objectcyclonetop_2963_instances.empty_selection();
        if (or_temp_result_1415_50_0 || or_temp_result_1415_50_1) {
            objectcyclonetop_2963_instances.restore_selection();
        }
        if (or_temp_result_1415_50_0 || or_temp_result_1415_50_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 26);
        }
    }
    or_final_or_event_1415_50_1_end: ;
}
void Frames::event_func_11764()
{
    // event 1416_50
    {
        if (!(group_main_engine_1)) goto event_1416_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (180))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1416_50_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
        }
    }
    event_1416_50_end: ;
}
void Frames::event_func_11765()
{
    // event 1417_50
    {
        if (!(group_main_engine_1)) goto event_1417_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1417_50_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1417_50_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -6);
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 26);
        FrameObject * single_instance_1417_50_0; single_instance_1417_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectcyclonetop_2963_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1417_50_0 == NULL)
                    single_instance_1417_50_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1417_50_0))->set_y_scale(0.25);
    }
    event_1417_50_end: ;
}
void Frames::event_func_11766()
{
    // event 1418_50
    {
        if (!(group_main_engine_1)) goto event_1418_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1418_50_end;
        if (!((((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.get(25)) == (1))) goto event_1418_50_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, 4);
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
    }
    event_1418_50_end: ;
}
void Frames::event_func_11767()
{
    // event 1419_50
    bool or_result_1419_50 = false;
    bool or_temp_result_1419_50_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1419_50_0_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto or_event_1419_50_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (26))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (20))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1419_50_0_end;
        or_result_1419_50 = true;
        or_temp_result_1419_50_0 = true;
    }
    or_event_1419_50_0_end: ;
    objectcyclonetop_2963_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1419_50_0) {
        objectcyclonetop_2963_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1419_50
    bool or_temp_result_1419_50_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1419_50_1_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (250))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto or_event_1419_50_1_end;
        or_result_1419_50 = true;
        or_temp_result_1419_50_1 = true;
        or_event_1419_50_1_end: ;
        if (or_temp_result_1419_50_1) {
            objectcyclonetop_2963_instances.save_selection();
        }
        if (!or_result_1419_50) goto or_final_or_event_1419_50_1_end;
        playermovementvalues_245_instances.empty_selection();
        objectcyclonetop_2963_instances.empty_selection();
        if (or_temp_result_1419_50_0 || or_temp_result_1419_50_1) {
            objectcyclonetop_2963_instances.restore_selection();
        }
        if (or_temp_result_1419_50_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    or_final_or_event_1419_50_1_end: ;
}
void Frames::event_func_11768()
{
    // event 1420_50
    {
        if (!(group_main_engine_1)) goto event_1420_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1420_50_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.1, 15));
        }
    }
    event_1420_50_end: ;
}
void Frames::event_func_11769()
{
    // event 1421_50
    {
        if (!(group_main_engine_1)) goto event_1421_50_end;
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!objectcyclonetop_2963_instances.has_selection()) goto event_1421_50_end;
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1421_50_end: ;
}
void Frames::event_func_11770()
{
    // event 1436_50
    {
        if (!(group_main_engine_1)) goto event_1436_50_end;
        {
            objecttimegate_2965_instances.clear_selection();
            SavedSelection extra_objecttimegate_2965_instances(objecttimegate_2965_instances);
            for (SavedIterator it(extra_objecttimegate_2965_instances); !it.end(); ++it) {
                foreach_instance_br = ((Active*)*it);
                foreach_br_50();
            }
        }
    }
    event_1436_50_end: ;
}
void Frames::event_func_11771()
{
    // event 1438_50
    {
        if (!(group_main_engine_1)) goto event_1438_50_end;
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (270))) { it.deselect(); continue; }
        }
        if (!objecttimegatepiece_2966_instances.has_selection()) goto event_1438_50_end;
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1438_50_end: ;
}
void Frames::event_func_11772()
{
    // event 1439_50
    {
        if (!(group_main_engine_1)) goto event_1439_50_end;
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (270))) { it.deselect(); continue; }
        }
        if (!objecttimegatepiece_2966_instances.has_selection()) goto event_1439_50_end;
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1439_50_end: ;
}
void Frames::event_func_11773()
{
    // event 1441_50
    {
        if (!(group_main_engine_1)) goto event_1441_50_end;
        objecttimegate_2965_instances.clear_selection();
        for (ObjectIterator it(objecttimegate_2965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!objecttimegate_2965_instances.has_selection()) goto event_1441_50_end;
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/15)%math_helper%2);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1441_50_end: ;
}
void Frames::event_func_11774()
{
    // event 1442_50
    {
        if (!(group_main_engine_1)) goto event_1442_50_end;
        objecttimegate_2965_instances.clear_selection();
        for (ObjectIterator it(objecttimegate_2965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!objecttimegate_2965_instances.has_selection()) goto event_1442_50_end;
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+3)%math_helper%360);
            ((Active*)*it)->alterables->values.sub(2, 5);
        }
        for (ObjectIterator it(objecttimegate_2965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1442_50_end: ;
}
void Frames::event_func_11775()
{
    // event 1443_50
    {
        if (!(group_main_engine_1)) goto event_1443_50_end;
        objecttimegate_2965_instances.clear_selection();
        for (ObjectIterator it(objecttimegate_2965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (10))) { it.deselect(); continue; }
        }
        if (!objecttimegate_2965_instances.has_selection()) goto event_1443_50_end;
        for (ObjectIterator it(objecttimegate_2965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1443_50_end: ;
}
void Frames::event_func_11776()
{
    // event 1444_50
    {
        if (!(group_main_engine_1)) goto event_1444_50_end;
        objecttimegate_2965_instances.clear_selection();
        for (ObjectIterator it(objecttimegate_2965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!objecttimegate_2965_instances.has_selection()) goto event_1444_50_end;
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+3)%math_helper%360);
        }
        for (ObjectIterator it(objecttimegate_2965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+5, 50));
        }
    }
    event_1444_50_end: ;
}
void Frames::event_func_11777()
{
    // event 1445_50
    {
        if (!(group_main_engine_1)) goto event_1445_50_end;
        objecttimegate_2965_instances.clear_selection();
        for (ObjectIterator it(objecttimegate_2965_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (10))) { it.deselect(); continue; }
        }
        if (!objecttimegate_2965_instances.has_selection()) goto event_1445_50_end;
        for (ObjectIterator it(objecttimegate_2965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1445_50_end: ;
}
void Frames::event_func_11778()
{
    // event 1447_50
    {
        if (!(group_main_engine_1)) goto event_1447_50_end;
        objectpinwheel_2956_instances.clear_selection();
        for (ObjectIterator it(objectpinwheel_2956_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.05, 3));
            ((Active*)*it)->alterables->values.sub(0, ((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1447_50_end: ;
}
void Frames::event_func_11779()
{
    // event 1448_50
    {
        if (!(group_main_engine_1)) goto event_1448_50_end;
        objectpinwheel_2956_instances.clear_selection();
        for (ObjectIterator it(objectpinwheel_2956_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (get_min(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))+1, 15)))) { it.deselect(); continue; }
        }
        if (!objectpinwheel_2956_instances.has_selection()) goto event_1448_50_end;
        for (ObjectIterator it(objectpinwheel_2956_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/5));
        }
    }
    event_1448_50_end: ;
}
void Frames::event_func_11780()
{
    // event 1449_50
    {
        if (!(group_main_engine_1)) goto event_1449_50_end;
        objectpinwheel_2956_instances.clear_selection();
        for (ObjectIterator it(objectpinwheel_2956_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+40))) { it.deselect(); continue; }
        }
        if (!objectpinwheel_2956_instances.has_selection()) goto event_1449_50_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_1449_50_end;
        for (ObjectIterator it(objectpinwheel_2956_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (15))) { it.deselect(); continue; }
        }
        if (!objectpinwheel_2956_instances.has_selection()) goto event_1449_50_end;
        for (ObjectIterator it(objectpinwheel_2956_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 0.5);
        }
    }
    event_1449_50_end: ;
}
void Frames::event_func_11781()
{
    // event 1450_50
    {
        if (!(group_main_engine_1)) goto event_1450_50_end;
        objectpinwheel_2956_instances.clear_selection();
        for (ObjectIterator it(objectpinwheel_2956_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (15))) { it.deselect(); continue; }
        }
        if (!objectpinwheel_2956_instances.has_selection()) goto event_1450_50_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto event_1450_50_end;
        FrameObject * single_instance_1450_50_0; single_instance_1450_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectpinwheel_2956_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1450_50_0 == NULL)
                    single_instance_1450_50_0 = new_obj;
            }
        }
    }
    event_1450_50_end: ;
}
void Frames::event_func_11782()
{
    // event 1457_50
    {
        if (!(group_main_engine_1)) goto event_1457_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1457_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1457_50_end: ;
}
void Frames::event_func_11783()
{
    // event 1458_50
    {
        if (!(group_main_engine_1)) goto event_1458_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (50))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1458_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1458_50_end: ;
}
void Frames::event_func_11784()
{
    // event 1459_50
    {
        if (!(group_main_engine_1)) goto event_1459_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1459_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1459_50_end: ;
}
void Frames::event_func_11785()
{
    // event 1460_50
    {
        if (!(group_main_engine_1)) goto event_1460_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (30))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1460_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, randrange(30));
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1460_50_end: ;
}
void Frames::event_func_11786()
{
    // event 1461_50
    {
        if (!(group_main_engine_1)) goto event_1461_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1461_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1461_50_end: ;
}
void Frames::event_func_11787()
{
    // event 1462_50
    {
        if (!(group_main_engine_1)) goto event_1462_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1462_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1462_50_end: ;
}
void Frames::event_func_11788()
{
    // event 1463_50
    {
        if (!(group_main_engine_1)) goto event_1463_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+10+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-10+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1463_50_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (10))) goto event_1463_50_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (11))) goto event_1463_50_end;
        FrameObject * single_instance_1463_50_0; single_instance_1463_50_0 = pick_random(enemystinger_2891_instances);
        if (single_instance_1463_50_0 == NULL) goto event_1463_50_end;
        ((Active*)((Active*)single_instance_1463_50_0))->alterables->values.set(3, 2);
        ((Active*)((Active*)single_instance_1463_50_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1463_50_0))->alterables->values.set(4, -4);
        ((Active*)((Active*)single_instance_1463_50_0))->alterables->values.set(7, 0);
    }
    event_1463_50_end: ;
}
void Frames::event_func_11789()
{
    // event 1464_50
    {
        if (!(group_main_engine_1)) goto event_1464_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+10-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-10-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-((Active*)*it)->alterables->values.get(6))))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1464_50_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (10))) goto event_1464_50_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (11))) goto event_1464_50_end;
        FrameObject * single_instance_1464_50_0; single_instance_1464_50_0 = pick_random(enemystinger_2891_instances);
        if (single_instance_1464_50_0 == NULL) goto event_1464_50_end;
        ((Active*)((Active*)single_instance_1464_50_0))->alterables->values.set(3, 2);
        ((Active*)((Active*)single_instance_1464_50_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1464_50_0))->alterables->values.set(4, 4);
        ((Active*)((Active*)single_instance_1464_50_0))->alterables->values.set(7, 0);
    }
    event_1464_50_end: ;
}
void Frames::event_func_11790()
{
    // event 1465_50
    {
        if (!(group_main_engine_1)) goto event_1465_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1465_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)-(((Active*)*it)->alterables->values.get(7)*0.5));
        }
    }
    event_1465_50_end: ;
}
void Frames::event_func_11791()
{
    // event 1466_50
    {
        if (!(group_main_engine_1)) goto event_1466_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1466_50_end;
        {
            loop_stinger_running = true;
            int times = int(4);
            loop_stinger_index = 0;
            while (loop_stinger_index < times) {
                loop_stinger_50();
                if (!loop_stinger_running) break;
                loop_stinger_index++;
            }
        }
    }
    event_1466_50_end: ;
}
void Frames::event_func_11792()
{
    // event 1467_50
    {
        if (!(group_main_engine_1)) goto event_1467_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1467_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(4, 4);
        }
    }
    event_1467_50_end: ;
}
void Frames::event_func_11793()
{
    // event 1468_50
    {
        if (!(group_main_engine_1)) goto event_1468_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1468_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(4, -4);
        }
    }
    event_1468_50_end: ;
}
void Frames::event_func_11794()
{
    // event 1471_50
    {
        if (!(group_main_engine_1)) goto event_1471_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (30))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1471_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1471_50_end: ;
}
void Frames::event_func_11795()
{
    // event 1472_50
    {
        if (!(group_main_engine_1)) goto event_1472_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (15))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1472_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 3);
        }
    }
    event_1472_50_end: ;
}
void Frames::event_func_11796()
{
    // event 1473_50
    {
        if (!(group_main_engine_1)) goto event_1473_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (15))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1473_50_end;
        FrameObject * single_instance_1473_50_0; single_instance_1473_50_0 = pick_random(enemystinger_2891_instances);
        if (single_instance_1473_50_0 == NULL) goto event_1473_50_end;
        media.play_id(SOUND_ENEMY_DIVE_10, -1, 1);
        ((Active*)((Active*)single_instance_1473_50_0))->alterables->values.add(7, 1);
    }
    event_1473_50_end: ;
}
void Frames::event_func_11797()
{
    // event 1474_50
    {
        if (!(group_main_engine_1)) goto event_1474_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (15))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1474_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
            ((Active*)*it)->alterables->values.set(1, 5);
        }
    }
    event_1474_50_end: ;
}
void Frames::event_func_11798()
{
    // event 1475_50
    {
        if (!(group_main_engine_1)) goto event_1475_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1475_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+5);
        }
    }
    event_1475_50_end: ;
}
void Frames::event_func_11799()
{
    // event 1476_50
    {
        if (!(group_main_engine_1)) goto event_1476_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1476_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+5);
        }
    }
    event_1476_50_end: ;
}
void Frames::event_func_11800()
{
    // event 1477_50
    {
        if (!(group_main_engine_1)) goto event_1477_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1477_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1477_50_end: ;
}
void Frames::event_func_11801()
{
    // event 1478_50
    {
        if (!(group_main_engine_1)) goto event_1478_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)*it)->alterables->values.get(6)+150))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1478_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 4);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1478_50_end: ;
}
void Frames::event_func_11802()
{
    // event 1479_50
    {
        if (!(group_main_engine_1)) goto event_1479_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1479_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1479_50_end: ;
}
void Frames::event_func_11803()
{
    // event 1480_50
    {
        if (!(group_main_engine_1)) goto event_1480_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (10))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1480_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1480_50_end: ;
}
void Frames::event_func_11804()
{
    // event 1481_50
    {
        if (!(group_main_engine_1)) goto event_1481_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (10))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1481_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-3);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1481_50_end: ;
}
void Frames::event_func_11805()
{
    // event 1482_50
    {
        if (!(group_main_engine_1)) goto event_1482_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1482_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1482_50_end: ;
}
void Frames::event_func_11806()
{
    // event 1483_50
    {
        if (!(group_main_engine_1)) goto event_1483_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1483_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 5);
        }
    }
    event_1483_50_end: ;
}
void Frames::event_func_11807()
{
    // event 1484_50
    {
        if (!(group_main_engine_1)) goto event_1484_50_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto event_1484_50_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1484_50_end: ;
}
void Frames::event_func_11808()
{
    // event 1485_50
    bool or_result_1485_50 = false;
    bool or_temp_result_1485_50_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1485_50_0_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto or_event_1485_50_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemystinger_2891_instances, qualifier_7)) goto or_event_1485_50_0_end;
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto or_event_1485_50_0_end;
        or_result_1485_50 = true;
        or_temp_result_1485_50_0 = true;
    }
    or_event_1485_50_0_end: ;
    enemystinger_2891_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1485_50_0) {
        enemystinger_2891_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1485_50
    bool or_temp_result_1485_50_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1485_50_1_end;
        enemystinger_2891_instances.clear_selection();
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystinger_2891_instances.has_selection()) goto or_event_1485_50_1_end;
        or_result_1485_50 = true;
        or_temp_result_1485_50_1 = true;
        or_event_1485_50_1_end: ;
        if (or_temp_result_1485_50_1) {
            enemystinger_2891_instances.save_selection();
        }
        if (!or_result_1485_50) goto or_final_or_event_1485_50_1_end;
        qualifier_7.empty_selection();
        enemystinger_2891_instances.empty_selection();
        if (or_temp_result_1485_50_0 || or_temp_result_1485_50_1) {
            enemystinger_2891_instances.restore_selection();
        }
        if (or_temp_result_1485_50_0) {
            qualifier_7.restore_selection();
        }
        for (ObjectIterator it(enemystinger_2891_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1485_50_0; single_instance_1485_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemystinger_2891_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1485_50_0 == NULL)
                    single_instance_1485_50_0 = new_obj;
            }
        }
        FrameObject * single_instance_1485_50_1; single_instance_1485_50_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemystinger_2891_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1485_50_1 == NULL)
                    single_instance_1485_50_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1485_50_1_end: ;
}
void Frames::event_func_11809()
{
    // event 1487_50
    {
        if (!(group_main_engine_1)) goto event_1487_50_end;
        enemystingernest_2961_instances.clear_selection();
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3)-get_min(((Active*)*it)->alterables->values.get(5)*0.5, 5)+randrange(get_min(((Active*)*it)->alterables->values.get(5), 5)));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)-get_min(((Active*)*it)->alterables->values.get(5)*0.5, 5)+randrange(get_min(((Active*)*it)->alterables->values.get(5), 5)));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.5, 0));
        }
    }
    event_1487_50_end: ;
}
void Frames::event_func_11810()
{
    // event 1488_50
    {
        if (!(group_main_engine_1)) goto event_1488_50_end;
        enemystingernest_2961_instances.clear_selection();
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystingernest_2961_instances.has_selection()) goto event_1488_50_end;
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_abs(((Active*)*it)->alterables->values.get(23))+get_abs(((Active*)*it)->alterables->values.get(24)));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1488_50_end: ;
}
void Frames::event_func_11811()
{
    // event 1489_50
    {
        if (!(group_main_engine_1)) goto event_1489_50_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_1489_50_end;
        enemystingernest_2961_instances.clear_selection();
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!enemystingernest_2961_instances.has_selection()) goto event_1489_50_end;
        FrameObject * single_instance_1489_50_0; single_instance_1489_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemystingernest_2961_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemystinger_2891(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1489_50_0 == NULL)
                    single_instance_1489_50_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1489_50_0))->alterables->values.set(3, 1);
        ((Active*)((Active*)single_instance_1489_50_0))->alterables->values.set(4, (randrange(2)*2-1)*4);
        ((Active*)((Active*)single_instance_1489_50_0))->set_x(((Active*)single_instance_1489_50_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1489_50_0))->set_y(((Active*)single_instance_1489_50_0)->get_y()-30+randrange(61));
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
        ((Active*)((Active*)single_instance_1489_50_0))->alterables->values.set(5, ((Active*)single_instance_1489_50_0)->get_x());
        ((Active*)((Active*)single_instance_1489_50_0))->alterables->values.set(6, ((Active*)single_instance_1489_50_0)->get_y());
        media.play_id(SOUND_SWARM_325, -1, 1);
    }
    event_1489_50_end: ;
}
void Frames::event_func_11812()
{
    // event 1490_50
    {
        if (!(group_main_engine_1)) goto event_1490_50_end;
        enemystingernest_2961_instances.clear_selection();
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemystingernest_2961_instances.has_selection()) goto event_1490_50_end;
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1490_50_end: ;
}
void Frames::event_func_11813()
{
    // event 1491_50
    {
        if (!(group_main_engine_1)) goto event_1491_50_end;
        enemystingernest_2961_instances.clear_selection();
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemystingernest_2961_instances.has_selection()) goto event_1491_50_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1491_50_end;
        FrameObject * single_instance_1491_50_0; single_instance_1491_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemystingernest_2961_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1491_50_0 == NULL)
                    single_instance_1491_50_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1491_50_0))->set_x(((Active*)single_instance_1491_50_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1491_50_0))->set_y(((Active*)single_instance_1491_50_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1491_50_1_end;
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
        dynamic_1491_50_1_end: ;
    }
    event_1491_50_end: ;
}
void Frames::event_func_11814()
{
    // event 1492_50
    {
        if (!(group_main_engine_1)) goto event_1492_50_end;
        enemystingernest_2961_instances.clear_selection();
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (10))) { it.deselect(); continue; }
        }
        if (!enemystingernest_2961_instances.has_selection()) goto event_1492_50_end;
        FrameObject * single_instance_1492_50_0; single_instance_1492_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemystingernest_2961_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1492_50_0 == NULL)
                    single_instance_1492_50_0 = new_obj;
            }
        }
        FrameObject * single_instance_1492_50_1; single_instance_1492_50_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemystingernest_2961_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1492_50_1 == NULL)
                    single_instance_1492_50_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_50();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1492_50_end: ;
}
void Frames::event_func_11815()
{
    // event 1494_50
    {
        if (!(group_main_engine_1)) goto event_1494_50_end;
        enemystingernest_2961_instances.clear_selection();
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemystingernest_2961_instances.has_selection()) goto event_1494_50_end;
        for (ObjectIterator it(enemystingernest_2961_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1494_50_end: ;
}
void Frames::event_func_11816()
{
    // event 1496_50
    {
        if (!(group_main_engine_1)) goto event_1496_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1496_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1496_50_end: ;
}
void Frames::event_func_11817()
{
    // event 1497_50
    {
        if (!(group_main_engine_1)) goto event_1497_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1497_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1497_50_end: ;
}
void Frames::event_func_11818()
{
    // event 1498_50
    {
        if (!(group_main_engine_1)) goto event_1498_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1498_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1498_50_end: ;
}
void Frames::event_func_11819()
{
    // event 1499_50
    {
        if (!(group_main_engine_1)) goto event_1499_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1499_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1499_50_end: ;
}
void Frames::event_func_11820()
{
    // event 1500_50
    {
        if (!(group_main_engine_1)) goto event_1500_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1500_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1500_50_end: ;
}
void Frames::event_func_11821()
{
    // event 1501_50
    {
        if (!(group_main_engine_1)) goto event_1501_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1501_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.1, 1));
            ((Active*)*it)->force_frame(3+((Active*)*it)->alterables->values.get(5)*3);
        }
    }
    event_1501_50_end: ;
}
void Frames::event_func_11822()
{
    // event 1502_50
    {
        if (!(group_main_engine_1)) goto event_1502_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1502_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.1, -1));
            ((Active*)*it)->force_frame(3+((Active*)*it)->alterables->values.get(5)*3);
        }
    }
    event_1502_50_end: ;
}
void Frames::event_func_11823()
{
    // event 1503_50
    {
        if (!(group_main_engine_1)) goto event_1503_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1503_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1503_50_end: ;
}
void Frames::event_func_11824()
{
    // event 1504_50
    {
        if (!(group_main_engine_1)) goto event_1504_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1504_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_frame(0);
        }
        media.play_id(SOUND_GEYSER_2_44, -1, 1);
    }
    event_1504_50_end: ;
}
void Frames::event_func_11825()
{
    // event 1505_50
    {
        if (!(group_main_engine_1)) goto event_1505_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1505_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_frame(6);
        }
        media.play_id(SOUND_GEYSER_2_44, -1, 1);
    }
    event_1505_50_end: ;
}
void Frames::event_func_11826()
{
    // event 1506_50
    {
        if (!(group_main_engine_1)) goto event_1506_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (60))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1506_50_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1506_50_end;
        {
            SavedSelection extra_enemysunflora_2960_instances(enemysunflora_2960_instances);
            for (SavedIterator it(extra_enemysunflora_2960_instances); !it.end(); ++it) {
                foreach_instance_sf = ((Active*)*it);
                foreach_sf_50();
            }
        }
    }
    event_1506_50_end: ;
}
void Frames::event_func_11827()
{
    // event 1508_50
    {
        if (!(group_main_engine_1)) goto event_1508_50_end;
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(3, cos_deg(((Active*)*it)->alterables->values.get(2))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(4, sin_deg(((Active*)*it)->alterables->values.get(2))*((Active*)*it)->alterables->values.get(1)*-1);
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->blend_color.set_alpha_coefficient(96+get_max(0, ((Active*)*it)->alterables->values.get(0)*3-90));
            ((Active*)*it)->alterables->values.sub(1, 0.04);
        }
    }
    event_1508_50_end: ;
}
void Frames::event_func_11828()
{
    // event 1509_50
    {
        if (!(group_main_engine_1)) goto event_1509_50_end;
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (20+((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!enemysleepgas_2889_instances.has_selection()) goto event_1509_50_end;
        FrameObject * single_instance_1509_50_0; single_instance_1509_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysleepgas_2889_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1509_50_0 == NULL)
                    single_instance_1509_50_0 = new_obj;
            }
        }
    }
    event_1509_50_end: ;
}
void Frames::event_func_11829()
{
    // event 1510_50
    {
        if (!(group_main_engine_1)) goto event_1510_50_end;
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (40+((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!enemysleepgas_2889_instances.has_selection()) goto event_1510_50_end;
        FrameObject * single_instance_1510_50_0; single_instance_1510_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysleepgas_2889_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1510_50_0 == NULL)
                    single_instance_1510_50_0 = new_obj;
            }
        }
    }
    event_1510_50_end: ;
}
void Frames::event_func_11830()
{
    // event 1511_50
    {
        if (!(group_main_engine_1)) goto event_1511_50_end;
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (60+((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!enemysleepgas_2889_instances.has_selection()) goto event_1511_50_end;
        FrameObject * single_instance_1511_50_0; single_instance_1511_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysleepgas_2889_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1511_50_0 == NULL)
                    single_instance_1511_50_0 = new_obj;
            }
        }
    }
    event_1511_50_end: ;
}
void Frames::event_func_11831()
{
    // event 1512_50
    {
        if (!(group_main_engine_1)) goto event_1512_50_end;
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (80))) { it.deselect(); continue; }
        }
        if (!enemysleepgas_2889_instances.has_selection()) goto event_1512_50_end;
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1512_50_end: ;
}
void Frames::event_func_11832()
{
    // event 1514_50
    {
        if (!(group_main_engine_1)) goto event_1514_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (80))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1514_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1514_50_end: ;
}
void Frames::event_func_11833()
{
    // event 1515_50
    {
        if (!(group_main_engine_1)) goto event_1515_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1515_50_end;
        FrameObject * single_instance_1515_50_0; single_instance_1515_50_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysunflora_2960_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1515_50_0 == NULL)
                    single_instance_1515_50_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction((((Active*)*it)->alterables->values.get(5)+1)*8+16);
        }
        effectsconfetti_2890_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(enemysunflora_2960_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsconfetti_2890(parent->x + 0, parent->y + 0), parent->layer);
                effectsconfetti_2890_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(randrange(12));
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->get_movement()->set_speed(20+randrange(20));
        }
    }
    event_1515_50_end: ;
}
void Frames::event_func_11834()
{
    // event 1516_50
    {
        if (!(group_main_engine_1)) goto event_1516_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (250))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1516_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(get_min((((Active*)*it)->alterables->values.get(4)-250)*0.02, 1));
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1516_50_end: ;
}
void Frames::event_func_11835()
{
    // event 1517_50
    {
        if (!(group_main_engine_1)) goto event_1517_50_end;
        enemysunflora_2960_instances.clear_selection();
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (300))) { it.deselect(); continue; }
        }
        if (!enemysunflora_2960_instances.has_selection()) goto event_1517_50_end;
        for (ObjectIterator it(enemysunflora_2960_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 12);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1517_50_end: ;
}
void Frames::event_func_11836()
{
    // event 1527_50
    {
        if (!(group_main_engine_1)) goto event_1527_50_end;
        if (!((global_values->get(4)) < (2))) goto event_1527_50_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (9200))) goto event_1527_50_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (9400))) goto event_1527_50_end;
        global_values->set(4, 2);
        global_values->set(5, 9264);
        global_values->set(6, 474);
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
    event_1527_50_end: ;
}
void Frames::event_func_11837()
{
    // event 1529_50
    {
        if (!(group_main_engine_1)) goto event_1529_50_end;
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)*it)->alterables->values.get(0))*45, 0);
            ((Active*)*it)->alterables->values.add(0, 4);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+get_max((((Active*)*it)->alterables->values.get(1)-20)/math_helper/10, 1));
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1529_50_end: ;
}
void Frames::event_func_11838()
{
    // event 1530_50
    {
        if (!(group_main_engine_1)) goto event_1530_50_end;
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (360))) { it.deselect(); continue; }
        }
        if (!effectsconfetti_2890_instances.has_selection()) goto event_1530_50_end;
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 360);
        }
    }
    event_1530_50_end: ;
}
void Frames::event_func_11839()
{
    // event 1531_50
    {
        if (!(group_main_engine_1)) goto event_1531_50_end;
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (height+20))) { it.deselect(); continue; }
        }
        if (!effectsconfetti_2890_instances.has_selection()) goto event_1531_50_end;
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1531_50_end: ;
}
void Frames::event_func_11840()
{
    // event 1738_50
    {
        if (!(group_pause_1)) goto event_1738_50_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1738_50_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1738_50_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1738_50_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1738_50_end;
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
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
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
    }
    event_1738_50_end: ;
}
void Frames::event_func_11841()
{
    // event 1739_50
    bool or_result_1739_50 = false;
    bool or_temp_result_1739_50_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1739_50_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1739_50_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1739_50_0_end;
        or_result_1739_50 = true;
        or_temp_result_1739_50_0 = true;
    }
    or_event_1739_50_0_end: ;
    // event 1739_50
    bool or_temp_result_1739_50_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1739_50_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1739_50_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1739_50_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1739_50_1_end;
        or_result_1739_50 = true;
        or_temp_result_1739_50_1 = true;
        or_event_1739_50_1_end: ;
        if (!or_result_1739_50) goto or_final_or_event_1739_50_1_end;
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
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
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
        enemysleepgas_2889_instances.clear_selection();
        for (ObjectIterator it(enemysleepgas_2889_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcyclonetop_2963_instances.clear_selection();
        for (ObjectIterator it(objectcyclonetop_2963_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objecttimegatepiece_2966_instances.clear_selection();
        for (ObjectIterator it(objecttimegatepiece_2966_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1739_50_1_end: ;
}
void Frames::handle_frame_51_events()
{
    test_collisions_50();
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
    event_func_5410();
    event_func_5411();
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
    event_func_3722();
    event_func_3723();
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
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
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
    event_func_11756();
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
    event_func_11757();
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
    event_func_11758();
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
    event_func_3730();
    event_func_3731();
    event_func_2425();
    event_func_3732();
    event_func_3733();
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
    event_func_3735();
    event_func_3736();
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_11759();
    event_func_11760();
    event_func_11761();
    event_func_11762();
    event_func_11763();
    event_func_11764();
    event_func_11765();
    event_func_11766();
    event_func_11767();
    event_func_11768();
    event_func_11769();
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    event_func_11770();
    event_func_11771();
    event_func_11772();
    event_func_11773();
    event_func_11774();
    event_func_11775();
    event_func_11776();
    event_func_11777();
    event_func_11778();
    event_func_11779();
    event_func_11780();
    event_func_11781();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_11782();
    event_func_11783();
    event_func_11784();
    event_func_11785();
    event_func_11786();
    event_func_11787();
    event_func_11788();
    event_func_11789();
    event_func_11790();
    event_func_11791();
    event_func_11792();
    event_func_11793();
    event_func_11794();
    event_func_11795();
    event_func_11796();
    event_func_11797();
    event_func_11798();
    event_func_11799();
    event_func_11800();
    event_func_11801();
    event_func_11802();
    event_func_11803();
    event_func_11804();
    event_func_11805();
    event_func_11806();
    event_func_11807();
    event_func_11808();
    event_func_11809();
    event_func_11810();
    event_func_11811();
    event_func_11812();
    event_func_11813();
    event_func_11814();
    event_func_11815();
    event_func_11816();
    event_func_11817();
    event_func_11818();
    event_func_11819();
    event_func_11820();
    event_func_11821();
    event_func_11822();
    event_func_11823();
    event_func_11824();
    event_func_11825();
    event_func_11826();
    event_func_11827();
    event_func_11828();
    event_func_11829();
    event_func_11830();
    event_func_11831();
    event_func_11832();
    event_func_11833();
    event_func_11834();
    event_func_11835();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_2491();
    event_func_11836();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    event_func_11837();
    event_func_11838();
    event_func_11839();
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
    event_func_11840();
    event_func_11841();
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
void Frames::handle_frame_51_pre_events()
{
}
void Frames::event_func_11842()
{
    // event 2_50
    {
        global_values->set(1, 0);
    }
    event_2_50_end: ;
}
