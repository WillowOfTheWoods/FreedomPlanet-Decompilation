#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_15337()
{
    // event 2048_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2048_72_end;
        ((Active*)((Active*)col_instance_1))->destroy();
    }
    event_2048_72_end: ;
}
void Frames::col_12_72()
{
    event_func_15337();
}
void Frames::event_func_15338()
{
    // event 1843_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1843_72_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1843_72_0; single_instance_1843_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion02_411(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1843_72_0 == NULL)
                single_instance_1843_72_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1843_72_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1843_72_0))->force_speed(50);
    }
    event_1843_72_end: ;
}
void Frames::col_19_72()
{
    event_func_15338();
}
void Frames::event_func_15339()
{
    // event 2034_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2034_72_end;
        if (((Active*)col_instance_1)->test_animation(7)) goto event_2034_72_end;
        if (!((((Active*)col_instance_1)->get_y()) > (((Active*)get_instance(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5)-20))) goto event_2034_72_end;
        FrameObject * single_instance_2034_72_0; single_instance_2034_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_brevonsuitflametrail_3742(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_2034_72_0 == NULL)
                single_instance_2034_72_0 = new_obj;
        }
        media.play_id(SOUND_BLAST1_55, -1, 1);
    }
    event_2034_72_end: ;
}
void Frames::event_func_15340()
{
    // event 2035_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2035_72_end;
        if (((Active*)col_instance_1)->test_animation(7)) goto event_2035_72_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_2035_72_0; single_instance_2035_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_2035_72_0 == NULL)
                single_instance_2035_72_0 = new_obj;
        }
    }
    event_2035_72_end: ;
}
void Frames::event_func_15341()
{
    // event 2213_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2213_72_end;
        if (((Active*)col_instance_1)->test_animation(7)) goto event_2213_72_end;
        if (!((((Active*)col_instance_1)->get_y()) > (((Active*)get_instance(brevon_3683_instances))->alterables->values.get(7)-20))) goto event_2213_72_end;
        FrameObject * single_instance_2213_72_0; single_instance_2213_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_brevonsuitflametrail_3742(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_2213_72_0 == NULL)
                single_instance_2213_72_0 = new_obj;
        }
        media.play_id(SOUND_BLAST1_55, -1, 1);
    }
    event_2213_72_end: ;
}
void Frames::event_func_15342()
{
    // event 2214_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_lord_brevon_1)) goto event_2214_72_end;
        if (((Active*)col_instance_1)->test_animation(7)) goto event_2214_72_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_2214_72_0; single_instance_2214_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_2214_72_0 == NULL)
                single_instance_2214_72_0 = new_obj;
        }
    }
    event_2214_72_end: ;
}
void Frames::col_22_72()
{
    event_func_15339();
    event_func_15340();
    event_func_15341();
    event_func_15342();
}
void Frames::event_func_15343()
{
    // event 1850_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1850_72_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(2)) == (0))) goto event_1850_72_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(2, 1);
        ((Active*)((Active*)col_instance_1))->force_animation(10);
    }
    event_1850_72_end: ;
}
void Frames::col_23_72()
{
    event_func_15343();
}
void Frames::test_collisions_72()
{
    test_collisions(qualifier_7, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_19, qualifier_19, 1073741824, 1073741824, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 536870912, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 1073741824, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_7, enemyhomingbullet_2568_instances, 268435456, 1, (EventFunction)&Frames::col_7_44);
    test_collisions(playerreflect_447_instances, enemyhomingbullet_2568_instances, 1, 2, (EventFunction)&Frames::col_8_44);
    test_collisions(player_389_instances, bosssparkyplasmashot_3288_instances, 1, 1, (EventFunction)&Frames::col_6_72);
    test_collisions_save(playerreflect_447_instances, bosssparkyplasmashot_3288_instances, 2, 2, (EventFunction)&Frames::col_7_72);
    test_collisions(playerreflect_447_instances, minibossacid_658_instances, 4, 1, (EventFunction)&Frames::col_8_72);
    test_collisions(playercharactersensor_383_instances, enemyhomingbullet_2568_instances, 1, 4, (EventFunction)&Frames::col_12_44);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 8, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(brevonsuitspeedline2_3744_instances, brevonsuitaura_3785_instances, 1, 1, (EventFunction)&Frames::col_12_72);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 16777216, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 8388608, 16, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 4194304, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
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
    for (it1 = brevonsuitlaser_3741_instances.begin(); it1 != brevonsuitlaser_3741_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_22_72();
    }
    for (it1 = minibossacid_658_instances.begin(); it1 != minibossacid_658_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_23_72();
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
    for (it1 = bosssparkyplasmashot_3288_instances.begin(); it1 != bosssparkyplasmashot_3288_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_19_72();
    }
}
void Frames::event_func_15344()
{
    // event 544_72
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_544_72_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_544_72_end;
        FrameObject * single_instance_544_72_0; single_instance_544_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_544_72_0 == NULL)
                    single_instance_544_72_0 = new_obj;
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
                loop_spawndebris_72();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_544_72_end: ;
}
void Frames::event_func_15345()
{
    // event 561_72
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_561_72_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_561_72_end;
        FrameObject * single_instance_561_72_0; single_instance_561_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_561_72_0 == NULL)
                    single_instance_561_72_0 = new_obj;
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
                loop_spawndebris_72();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_561_72_end: ;
}
void Frames::event_func_15346()
{
    // event 695_72
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_695_72_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_695_72_end;
        FrameObject * single_instance_695_72_0; single_instance_695_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_695_72_0 == NULL)
                    single_instance_695_72_0 = new_obj;
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
                loop_spawndebris_72();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_695_72_end: ;
}
void Frames::event_func_15347()
{
    // event 1419_72
    {
        if (!(group_main_engine_1)) goto event_1419_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (95))) goto event_1419_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1419_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1419_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1419_72_end;
        player_389_instances.clear_selection();
        objecttransporterstart_3412_instances.clear_selection();
        if (!check_overlap(player_389_instances, objecttransporterstart_3412_instances)) goto event_1419_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 95);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.set(0, ((Active*)get_instance(objecttransporterstart_3412_instances))->alterables->values.get(0));
        {
            FrameObject * parent = ((Active*)get_instance(objecttransporterstart_3412_instances));
            if (parent == NULL) goto pos_end_1419_72_0;
            ((Active*)get_instance(objecttransporterwave_3414_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1419_72_0: ;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(objecttransporterstart_3412_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(objecttransporterstart_3412_instances))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->flags.enable(1);
    }
    event_1419_72_end: ;
}
void Frames::event_func_15348()
{
    // event 1426_72
    {
        if (!(group_main_engine_1)) goto event_1426_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1426_72_end;
        if (!((((Active*)get_instance(objecttransporter_3344_instances))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-12))) goto event_1426_72_end;
        if (!((((Active*)get_instance(objecttransporter_3344_instances))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+12))) goto event_1426_72_end;
        if (!((((Active*)get_instance(objecttransporter_3344_instances))->get_y()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-28))) goto event_1426_72_end;
        if (!((((Active*)get_instance(objecttransporter_3344_instances))->get_y()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-4))) goto event_1426_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(objecttransporter_3344_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(objecttransporter_3344_instances))->get_y()-16);
    }
    event_1426_72_end: ;
}
void Frames::event_func_15349()
{
    // event 1440_72
    bool or_result_1440_72 = false;
    bool or_temp_result_1440_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto or_event_1440_72_0_end;
        brevoncrosshair_3789_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!brevoncrosshair_3789_instances.has_selection()) goto or_event_1440_72_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) > (64))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1440_72_0_end;
        or_result_1440_72 = true;
        or_temp_result_1440_72_0 = true;
    }
    or_event_1440_72_0_end: ;
    brevoncrosshair_3789_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1440_72_0) {
        playermovementvalues_245_instances.save_selection();
        brevoncrosshair_3789_instances.save_selection();
    }
    // event 1440_72
    bool or_temp_result_1440_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto or_event_1440_72_1_end;
        brevoncrosshair_3789_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!brevoncrosshair_3789_instances.has_selection()) goto or_event_1440_72_1_end;
        or_result_1440_72 = true;
        or_temp_result_1440_72_1 = true;
        or_event_1440_72_1_end: ;
        if (or_temp_result_1440_72_1) {
            brevoncrosshair_3789_instances.save_selection();
        }
        if (!or_result_1440_72) goto or_final_or_event_1440_72_1_end;
        playermovementvalues_245_instances.empty_selection();
        brevoncrosshair_3789_instances.empty_selection();
        if (or_temp_result_1440_72_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1440_72_0 || or_temp_result_1440_72_1) {
            brevoncrosshair_3789_instances.restore_selection();
        }
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        brevoncrosshair6_3790_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair6_3790_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
        brevoncrosshair7_3791_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair7_3791_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    or_final_or_event_1440_72_1_end: ;
}
void Frames::event_func_15350()
{
    // event 1441_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1441_72_end;
        brevoncrosshair_3789_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (31))) { it.deselect(); continue; }
        }
        if (!brevoncrosshair_3789_instances.has_selection()) goto event_1441_72_end;
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*25);
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
    }
    event_1441_72_end: ;
}
void Frames::event_func_15351()
{
    // event 1442_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1442_72_end;
        brevoncrosshair_3789_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!brevoncrosshair_3789_instances.has_selection()) goto event_1442_72_end;
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)*9+((Active*)*it)->alterables->values.get(2))*0.1);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)*9+((Active*)*it)->alterables->values.get(3))*0.1);
        }
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->set_x_scale(((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.get(0)*0.01);
    }
    event_1442_72_end: ;
}
void Frames::event_func_15352()
{
    // event 1443_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1443_72_end;
        brevoncrosshair_3789_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!brevoncrosshair_3789_instances.has_selection()) goto event_1443_72_end;
        if (!((global_values->get(3)%math_helper%50) == (0))) goto event_1443_72_end;
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*25);
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        }
    }
    event_1443_72_end: ;
}
void Frames::event_func_15353()
{
    // event 1444_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1444_72_end;
        brevoncrosshair_3789_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!brevoncrosshair_3789_instances.has_selection()) goto event_1444_72_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_1444_72_end;
        if (!((((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.get(1)) <= (0))) goto event_1444_72_end;
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.add(0, 1);
    }
    event_1444_72_end: ;
}
void Frames::event_func_15354()
{
    // event 1445_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1445_72_end;
        if (!((((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.get(0)) >= (100))) goto event_1445_72_end;
        if (!((((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.get(1)) == (0))) goto event_1445_72_end;
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.set(1, 30);
        FrameObject * single_instance_1445_72_0; single_instance_1445_72_0 = NULL;
        // select single: true false false
        brevoncrosshair_3789_instances.clear_selection();
        for (ObjectIterator p_it(brevoncrosshair_3789_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1445_72_0 == NULL)
                    single_instance_1445_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1445_72_0))->force_frame(9);
        ((Active*)((Active*)single_instance_1445_72_0))->set_layer(4-1);
    }
    event_1445_72_end: ;
}
void Frames::event_func_15355()
{
    // event 1446_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1446_72_end;
        if (!((((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.get(1)) > (1))) goto event_1446_72_end;
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.sub(1, 1);
    }
    event_1446_72_end: ;
}
void Frames::event_func_15356()
{
    // event 1447_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1447_72_end;
        if (!((((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.get(1)) == (1))) goto event_1447_72_end;
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.set(1, 0);
    }
    event_1447_72_end: ;
}
void Frames::event_func_15357()
{
    // event 1448_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1448_72_end;
        brevoncrosshair2_3792_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair2_3792_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevoncrosshair_3789_instances, it.current_index));
            if (parent == NULL) goto pos_end_1448_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 32, parent->get_y() + 0);
            pos_end_1448_72_0: ;
        }
        brevoncrosshair3_3793_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair3_3793_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevoncrosshair_3789_instances, it.current_index));
            if (parent == NULL) goto pos_end_1448_72_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -32, parent->get_y() + 0);
            pos_end_1448_72_1: ;
        }
        brevoncrosshair4_3794_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair4_3794_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevoncrosshair_3789_instances, it.current_index));
            if (parent == NULL) goto pos_end_1448_72_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 32);
            pos_end_1448_72_2: ;
        }
        brevoncrosshair5_3795_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair5_3795_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevoncrosshair_3789_instances, it.current_index));
            if (parent == NULL) goto pos_end_1448_72_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -32);
            pos_end_1448_72_3: ;
        }
    }
    event_1448_72_end: ;
}
void Frames::event_func_15358()
{
    // event 1449_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1)) goto event_1449_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (1700))) goto event_1449_72_end;
        brevoncrosshair_3789_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair_3789_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevoncrosshair2_3792_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair2_3792_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevoncrosshair3_3793_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair3_3793_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevoncrosshair4_3794_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair4_3794_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevoncrosshair5_3795_instances.clear_selection();
        for (ObjectIterator it(brevoncrosshair5_3795_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_level_specific_methods_gimmicks_and_special_objects_crosshair_1 = false;
    
        ((Active*)get_instance(brevoncrosshair6_3790_instances))->set_y(((Active*)get_instance(brevoncrosshair6_3790_instances))->get_y()+((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.get(2));
        ((Active*)get_instance(brevoncrosshair7_3791_instances))->set_y(((Active*)get_instance(brevoncrosshair7_3791_instances))->get_y()+((Active*)get_instance(brevoncrosshair7_3791_instances))->alterables->values.get(2));
    }
    event_1449_72_end: ;
}
void Frames::event_func_15359()
{
    // event 1465_72
    {
        if (!(group_main_engine_1)) goto event_1465_72_end;
        ((Active*)get_instance(enemygatlinggun2_3652_instances))->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3), 0);
        ((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3), 0);
        {
            FrameObject * parent = ((Active*)get_instance(enemygatlinggun_3650_instances));
            if (parent == NULL) goto pos_end_1465_72_0;
            ((Active*)get_instance(enemygatlinggun2_3652_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1465_72_0: ;
        }
        ((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->set_x(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->set_y(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)get_instance(enemygatlinggunleft_3635_instances))->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3), 0);
        ((Active*)get_instance(enemygatlinggunleft_3635_instances))->set_x(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(5)+sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(11))*-16);
        ((Active*)get_instance(enemygatlinggunleft_3635_instances))->set_y(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(5)+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(11))*-16);
        ((Active*)get_instance(enemygatlinggunright_3634_instances))->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3), 0);
        ((Active*)get_instance(enemygatlinggunright_3634_instances))->set_x(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(6)+sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(11))*16);
        ((Active*)get_instance(enemygatlinggunright_3634_instances))->set_y(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(6)+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(11))*16);
        ((Active*)get_instance(enemygatlingguntable_3604_instances))->set_angle(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(10), 0);
        ((Active*)get_instance(enemygatlingguntable_3604_instances))->set_x(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(10))*((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(9));
        ((Active*)get_instance(enemygatlingguntable_3604_instances))->set_y(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(10))*((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(9));
        ((Active*)get_instance(enemygatlinggunleft_3635_instances))->alterables->values.set(0, ((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->flags.get(1));
        ((Active*)get_instance(enemygatlinggunright_3634_instances))->alterables->values.set(0, ((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->flags.get(2));
        ((Active*)get_instance(enemygatlinggun2_3652_instances))->alterables->values.set(0, ((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->alterables->values.set(0, ((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)get_instance(enemygatlinggunleft_3635_instances))->alterables->values.set(1, ((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)get_instance(enemygatlinggunright_3634_instances))->alterables->values.set(1, ((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)get_instance(enemygatlinggun2_3652_instances))->alterables->values.set(1, ((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->alterables->values.set(1, ((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)get_instance(enemygatlinggun2_3652_instances))->set_visible(true);
        ((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->set_visible(true);
        ((Active*)get_instance(enemygatlinggunleft_3635_instances))->set_visible(true);
        ((Active*)get_instance(enemygatlinggunright_3634_instances))->set_visible(true);
    }
    event_1465_72_end: ;
}
void Frames::event_func_15360()
{
    // event 1481_72
    {
        if (!(group_main_engine_1)) goto event_1481_72_end;
        if (!((((Active*)get_instance(enemygatlinggunleft_3635_instances))->alterables->values.get(0)) == (1))) goto event_1481_72_end;
        if (!(((Active*)get_instance(enemygatlinggunleft_3635_instances))->alterables->flags.is_off(1))) goto event_1481_72_end;
        enemygatlinggunleft_3635_instances.clear_selection();
        FrameObject * single_instance_1481_72_0; single_instance_1481_72_0 = pick_random(enemygatlinggunleft_3635_instances);
        if (single_instance_1481_72_0 == NULL) goto event_1481_72_end;
        FrameObject * single_instance_1481_72_1; single_instance_1481_72_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemytrooperlaser_2508(((Active*)single_instance_1481_72_0)->get_action_x() - ((Active*)single_instance_1481_72_0)->layer->off_x + 0, ((Active*)single_instance_1481_72_0)->get_action_y() - ((Active*)single_instance_1481_72_0)->layer->off_y + 0), ((Active*)single_instance_1481_72_0)->layer);
            if (single_instance_1481_72_1 == NULL)
                single_instance_1481_72_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1481_72_1))->alterables->values.set(0, 12);
        ((Active*)((Active*)single_instance_1481_72_1))->alterables->values.set(1, 0-((Active*)single_instance_1481_72_0)->get_angle());
        ((Active*)((Active*)single_instance_1481_72_1))->set_direction(4);
        ((Active*)single_instance_1481_72_1)->move_back(((Active*)single_instance_1481_72_0));
        ((Active*)((Active*)single_instance_1481_72_0))->alterables->flags.enable(1);
        media.play_id(SOUND_SERP_MEGALASER_378, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        ((Active*)((Active*)single_instance_1481_72_1))->set_angle(((Active*)single_instance_1481_72_0)->get_angle(), 0);
    }
    event_1481_72_end: ;
}
void Frames::event_func_15361()
{
    // event 1482_72
    {
        if (!(group_main_engine_1)) goto event_1482_72_end;
        if (!(((Active*)get_instance(enemygatlinggunleft_3635_instances))->alterables->flags.is_on(1))) goto event_1482_72_end;
        if (!((((Active*)get_instance(enemygatlinggunleft_3635_instances))->alterables->values.get(0)) == (0))) goto event_1482_72_end;
        ((Active*)get_instance(enemygatlinggunleft_3635_instances))->alterables->flags.disable(1);
    }
    event_1482_72_end: ;
}
void Frames::event_func_15362()
{
    // event 1483_72
    {
        if (!(group_main_engine_1)) goto event_1483_72_end;
        if (!((((Active*)get_instance(enemygatlinggunright_3634_instances))->alterables->values.get(0)) == (1))) goto event_1483_72_end;
        if (!(((Active*)get_instance(enemygatlinggunright_3634_instances))->alterables->flags.is_off(1))) goto event_1483_72_end;
        enemygatlinggunright_3634_instances.clear_selection();
        FrameObject * single_instance_1483_72_0; single_instance_1483_72_0 = pick_random(enemygatlinggunright_3634_instances);
        if (single_instance_1483_72_0 == NULL) goto event_1483_72_end;
        FrameObject * single_instance_1483_72_1; single_instance_1483_72_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemytrooperlaser_2508(((Active*)single_instance_1483_72_0)->get_action_x() - ((Active*)single_instance_1483_72_0)->layer->off_x + 0, ((Active*)single_instance_1483_72_0)->get_action_y() - ((Active*)single_instance_1483_72_0)->layer->off_y + 0), ((Active*)single_instance_1483_72_0)->layer);
            if (single_instance_1483_72_1 == NULL)
                single_instance_1483_72_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1483_72_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1483_72_1))->alterables->values.set(0, 12);
        ((Active*)((Active*)single_instance_1483_72_1))->alterables->values.set(1, 0-((Active*)single_instance_1483_72_0)->get_angle());
        ((Active*)((Active*)single_instance_1483_72_1))->set_direction(4);
        ((Active*)single_instance_1483_72_1)->move_back(((Active*)single_instance_1483_72_0));
        media.play_id(SOUND_SERP_MEGALASER_378, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        ((Active*)((Active*)single_instance_1483_72_1))->set_angle(((Active*)single_instance_1483_72_0)->get_angle(), 0);
    }
    event_1483_72_end: ;
}
void Frames::event_func_15363()
{
    // event 1484_72
    {
        if (!(group_main_engine_1)) goto event_1484_72_end;
        if (!(((Active*)get_instance(enemygatlinggunright_3634_instances))->alterables->flags.is_on(1))) goto event_1484_72_end;
        if (!((((Active*)get_instance(enemygatlinggunright_3634_instances))->alterables->values.get(0)) == (0))) goto event_1484_72_end;
        ((Active*)get_instance(enemygatlinggunright_3634_instances))->alterables->flags.disable(1);
    }
    event_1484_72_end: ;
}
void Frames::event_func_15364()
{
    // event 1485_72
    {
        if (!(group_main_engine_1)) goto event_1485_72_end;
        if (!((((Active*)get_instance(enemygatlinggun2_3652_instances))->alterables->values.get(0)) > (1))) goto event_1485_72_end;
        if (!((((Active*)get_instance(enemygatlinggun2_3652_instances))->alterables->values.get(0)) < (10))) goto event_1485_72_end;
        ((Active*)get_instance(enemygatlinggun2_3652_instances))->force_frame(get_min(((Active*)get_instance(enemygatlinggun2_3652_instances))->alterables->values.get(1), 1));
    }
    event_1485_72_end: ;
}
void Frames::event_func_15365()
{
    // event 1486_72
    {
        if (!(group_main_engine_1)) goto event_1486_72_end;
        if (!((((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->alterables->values.get(0)) > (1))) goto event_1486_72_end;
        if (!((((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->alterables->values.get(0)) < (10))) goto event_1486_72_end;
        ((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->force_frame(get_min(((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->alterables->values.get(1), 1));
    }
    event_1486_72_end: ;
}
void Frames::event_func_15366()
{
    // event 1490_72
    {
        if (!(group_main_engine_1)) goto event_1490_72_end;
        if (!((((Active*)get_instance(enemygatlinggun2_3652_instances))->alterables->values.get(0)) == (10))) goto event_1490_72_end;
        ((Active*)get_instance(enemygatlinggun2_3652_instances))->force_frame((((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(8)/math_helper/2)%math_helper%2);
    }
    event_1490_72_end: ;
}
void Frames::event_func_15367()
{
    // event 1491_72
    {
        if (!(group_main_engine_1)) goto event_1491_72_end;
        if (!((((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->alterables->values.get(0)) == (10))) goto event_1491_72_end;
        ((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->force_frame((((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(8)/math_helper/2)%math_helper%2);
    }
    event_1491_72_end: ;
}
void Frames::event_func_15368()
{
    // event 1492_72
    {
        if (!(group_main_engine_1)) goto event_1492_72_end;
        if (!((((Active*)get_instance(enemygatlinggunleft_3635_instances))->alterables->values.get(1)) == (10))) goto event_1492_72_end;
        ((Active*)get_instance(enemygatlinggunleft_3635_instances))->force_frame((((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(8)/math_helper/2)%math_helper%2);
    }
    event_1492_72_end: ;
}
void Frames::event_func_15369()
{
    // event 1493_72
    {
        if (!(group_main_engine_1)) goto event_1493_72_end;
        if (!((((Active*)get_instance(enemygatlinggunright_3634_instances))->alterables->values.get(1)) == (10))) goto event_1493_72_end;
        ((Active*)get_instance(enemygatlinggunright_3634_instances))->force_frame((((Active*)get_instance(enemygatlinggun_3650_instances, default_active_instance))->alterables->values.get(8)/math_helper/2)%math_helper%2);
    }
    event_1493_72_end: ;
}
void Frames::event_func_15370()
{
    // event 1496_72
    {
        if (!(group_main_engine_1)) goto event_1496_72_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (60))) { it.deselect(); continue; }
        }
        if (!enemygatlinggun_3650_instances.has_selection()) goto event_1496_72_end;
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 11);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
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
    event_1496_72_end: ;
}
void Frames::event_func_15371()
{
    // event 1499_72
    {
        if (!(group_main_engine_1)) goto event_1499_72_end;
        if (!((((Active*)get_instance(enemygatlinggun2_3652_instances))->alterables->values.get(0)) == (11))) goto event_1499_72_end;
        ((Active*)get_instance(enemygatlinggun2_3652_instances))->set_visible(false);
    }
    event_1499_72_end: ;
}
void Frames::event_func_15372()
{
    // event 1500_72
    {
        if (!(group_main_engine_1)) goto event_1500_72_end;
        if (!((((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->alterables->values.get(0)) == (11))) goto event_1500_72_end;
        ((Active*)get_instance(enemygatlinggunbarrel_3651_instances))->set_visible(false);
    }
    event_1500_72_end: ;
}
void Frames::event_func_15373()
{
    // event 1501_72
    {
        if (!(group_main_engine_1)) goto event_1501_72_end;
        if (!((((Active*)get_instance(enemygatlinggunleft_3635_instances))->alterables->values.get(1)) == (11))) goto event_1501_72_end;
        ((Active*)get_instance(enemygatlinggunleft_3635_instances))->set_visible(false);
    }
    event_1501_72_end: ;
}
void Frames::event_func_15374()
{
    // event 1502_72
    {
        if (!(group_main_engine_1)) goto event_1502_72_end;
        if (!((((Active*)get_instance(enemygatlinggunright_3634_instances))->alterables->values.get(1)) == (11))) goto event_1502_72_end;
        ((Active*)get_instance(enemygatlinggunright_3634_instances))->set_visible(false);
    }
    event_1502_72_end: ;
}
void Frames::event_func_15375()
{
    // event 1510_72
    {
        if (!(group_main_engine_1)) goto event_1510_72_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1510_72_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1510_72_0; single_instance_1510_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyspiderbeamer_3729_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1510_72_0 == NULL)
                    single_instance_1510_72_0 = new_obj;
            }
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_72();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1510_72_end: ;
}
void Frames::event_func_15376()
{
    // event 1519_72
    {
        if (!(group_main_engine_1)) goto event_1519_72_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1519_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1519_72_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
    }
    event_1519_72_end: ;
}
void Frames::event_func_15377()
{
    // event 1520_72
    {
        if (!(group_main_engine_1)) goto event_1520_72_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (1600))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1520_72_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1520_72_end: ;
}
void Frames::event_func_15378()
{
    // event 1521_72
    {
        if (!(group_main_engine_1)) goto event_1521_72_end;
        enemyspiderbeamer_3729_instances.clear_selection();
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()+global_values->get(16)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+80))) { it.deselect(); continue; }
        }
        if (!enemyspiderbeamer_3729_instances.has_selection()) goto event_1521_72_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_1521_72_end;
        for (ObjectIterator it(enemyspiderbeamer_3729_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1521_72_end: ;
}
void Frames::event_func_15379()
{
    // event 1522_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1522_72_end;
        if (not_always_1522_72 > loop_count) {
            not_always_1522_72 = loop_count + 2;
            goto event_1522_72_end;
        }
        not_always_1522_72 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
    }
    event_1522_72_end: ;
}
void Frames::event_func_15380()
{
    // event 1523_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1523_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1523_72_end: ;
}
void Frames::event_func_15381()
{
    // event 1524_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1524_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1524_72_end;
        next_frame = 8 + 0;    
    
    }
    event_1524_72_end: ;
}
void Frames::event_func_15382()
{
    // event 1541_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1541_72_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(2)) == (280))) goto event_1541_72_end;
        ((Active*)get_instance(scorevalues_425_instances))->alterables->values.set(0, 1);
    }
    event_1541_72_end: ;
}
void Frames::event_func_15383()
{
    // event 1551_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_stage_clear_1 && group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1)) goto event_1551_72_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (150))) goto event_1551_72_end;
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
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_1551_72_end: ;
}
void Frames::event_func_15384()
{
    // event 1555_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_play_bgm_1)) goto event_1555_72_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1555_72_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1555_72_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1555_72_end: ;
}
void Frames::event_func_15385()
{
    // event 1561_72
    {
        if (!(group_main_engine_1)) goto event_1561_72_end;
        if (!((kingdomstonewave_3656_instances.size()) == (0))) goto event_1561_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.enable(1);
    }
    event_1561_72_end: ;
}
void Frames::event_func_15386()
{
    // event 1562_72
    {
        if (!(group_main_engine_1)) goto event_1562_72_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(1))) goto event_1562_72_end;
        FrameObject * single_instance_1562_72_0; single_instance_1562_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_kingdomstonewave_3656(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1562_72_0 == NULL)
                    single_instance_1562_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1562_72_0))->alterables->values.set(0, -2);
    }
    event_1562_72_end: ;
}
void Frames::event_func_15387()
{
    // event 1563_72
    {
        if (!(group_main_engine_1)) goto event_1563_72_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(1))) goto event_1563_72_end;
        FrameObject * single_instance_1563_72_0; single_instance_1563_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_kingdomstonewave_3656(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1563_72_0 == NULL)
                    single_instance_1563_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1563_72_0))->alterables->values.set(0, 2);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.disable(1);
    }
    event_1563_72_end: ;
}
void Frames::event_func_15388()
{
    // event 1564_72
    {
        if (!(group_main_engine_1)) goto event_1564_72_end;
        if (!((kingdomstonewave_3656_instances.size()) > (0))) goto event_1564_72_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (22))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_1564_72_end;
        FrameObject * single_instance_1564_72_0; single_instance_1564_72_0 = pick_random(kingdomstonewave_3656_instances);
        if (single_instance_1564_72_0 == NULL) goto event_1564_72_end;
        FrameObject * single_instance_1564_72_1; single_instance_1564_72_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ringsparkle_139(((Active*)single_instance_1564_72_0)->x + 0, ((Active*)single_instance_1564_72_0)->y + 0), ((Active*)single_instance_1564_72_0)->layer);
            if (single_instance_1564_72_1 == NULL)
                single_instance_1564_72_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1564_72_1))->set_x(((Active*)single_instance_1564_72_1)->get_x()-30+randrange(62));
    }
    event_1564_72_end: ;
}
void Frames::event_func_15389()
{
    // event 1565_72
    {
        if (!(group_main_engine_1)) goto event_1565_72_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1565_72_end: ;
}
void Frames::event_func_15390()
{
    // event 1566_72
    {
        if (!(group_main_engine_1)) goto event_1566_72_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (20))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_1566_72_end;
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*0.5);
        }
    }
    event_1566_72_end: ;
}
void Frames::event_func_15391()
{
    // event 1567_72
    {
        if (!(group_main_engine_1)) goto event_1567_72_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (20))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_1567_72_end;
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient((((Active*)*it)->alterables->values.get(1)-10)*10);
        }
    }
    event_1567_72_end: ;
}
void Frames::event_func_15392()
{
    // event 1568_72
    {
        if (!(group_main_engine_1)) goto event_1568_72_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_1568_72_end;
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1568_72_end: ;
}
void Frames::event_func_15393()
{
    // event 1570_72
    {
        if (!(group_main_engine_1)) goto event_1570_72_end;
        bosshealthbar1_3760_instances.clear_selection();
        for (ObjectIterator it(bosshealthbar1_3760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/4+((Active*)*it)->alterables->values.get(0))%math_helper%4);
        }
        bosshealthbar2_3761_instances.clear_selection();
        for (ObjectIterator it(bosshealthbar2_3761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/2+((Active*)*it)->alterables->values.get(0))%math_helper%6);
        }
        for (ObjectIterator it(bosshealthbar1_3760_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(bosshealthbar2_3761_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1570_72_end: ;
}
void Frames::event_func_15394()
{
    // event 1571_72
    {
        if (!(group_main_engine_1)) goto event_1571_72_end;
        bosshealthbar1_3760_instances.clear_selection();
        for (ObjectIterator it(bosshealthbar1_3760_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)get_instance(brevonmechweakspot_3316_instances, default_active_instance))->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!bosshealthbar1_3760_instances.has_selection()) goto event_1571_72_end;
        for (ObjectIterator it(bosshealthbar1_3760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(5, 1);
    }
    event_1571_72_end: ;
}
void Frames::event_func_15395()
{
    // event 1572_72
    {
        if (!(group_main_engine_1)) goto event_1572_72_end;
        bosshealthbar2_3761_instances.clear_selection();
        for (ObjectIterator it(bosshealthbar2_3761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)get_instance(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(15)*2))) { it.deselect(); continue; }
        }
        if (!bosshealthbar2_3761_instances.has_selection()) goto event_1572_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(6, 1);
        for (ObjectIterator it(bosshealthbar2_3761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1572_72_end: ;
}
void Frames::event_func_15396()
{
    // event 1573_72
    {
        if (!(group_main_engine_1)) goto event_1573_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(5)) > (0))) goto event_1573_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.sub(5, 1);
        bosshealthbar1_3760_instances.clear_selection();
        for (ObjectIterator it(bosshealthbar1_3760_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
    }
    event_1573_72_end: ;
}
void Frames::event_func_15397()
{
    // event 1574_72
    {
        if (!(group_main_engine_1)) goto event_1574_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(6)) > (0))) goto event_1574_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.sub(6, 1);
        bosshealthbar2_3761_instances.clear_selection();
        for (ObjectIterator it(bosshealthbar2_3761_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8);
        }
    }
    event_1574_72_end: ;
}
void Frames::event_func_15398()
{
    // event 1575_72
    {
        if (!(group_main_engine_1)) goto event_1575_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (336))) goto event_1575_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+global_values->get(17)*0.5-2, 336));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()-32);
    }
    event_1575_72_end: ;
}
void Frames::event_func_15399()
{
    // event 1576_72
    {
        if (!(group_main_engine_1)) goto event_1576_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (336))) goto event_1576_72_end;
        if (!((global_values->get(4)) < (2))) goto event_1576_72_end;
        if (once_condition_1576_72) goto event_1576_72_end;
        once_condition_1576_72 = true;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_approach_brevon_1) {
            group_main_engine_level_specific_methods_cutscenes_approach_brevon_1 = true;
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1576_72_end: ;
}
void Frames::event_func_15400()
{
    // event 1577_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1577_72_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1577_72_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1577_72_end: ;
}
void Frames::event_func_15401()
{
    // event 1578_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1578_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1578_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1578_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_1578_72_end: ;
}
void Frames::event_func_15402()
{
    // event 1579_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1579_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1579_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(brevon_3683_instances))->get_x()-192))) goto event_1579_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -5);
    }
    event_1579_72_end: ;
}
void Frames::event_func_15403()
{
    // event 1580_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1580_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1580_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) <= (((Active*)get_instance(brevon_3683_instances))->get_x()-192))) goto event_1580_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(66);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(75);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(4);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        enemyelite_2510_instances.clear_selection();
        spread_value(enemyelite_2510_instances, 7, 2);
    }
    event_1580_72_end: ;
}
void Frames::event_func_15404()
{
    // event 1581_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1581_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) <= (2))) goto event_1581_72_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) goto event_1581_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+1, ((Active*)get_instance(kingdomstone_1587_instances))->get_x()));
    }
    event_1581_72_end: ;
}
void Frames::event_func_15405()
{
    // event 1582_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1582_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) <= (2))) goto event_1582_72_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) > (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) goto event_1582_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-1, ((Active*)get_instance(kingdomstone_1587_instances))->get_x()));
    }
    event_1582_72_end: ;
}
void Frames::event_func_15406()
{
    // event 1583_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1583_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1583_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1583_72_end: ;
}
void Frames::event_func_15407()
{
    // event 1584_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1584_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1584_72_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(kingdomstone_1587_instances))->get_x()+((Active*)*it)->alterables->values.get(7)*40))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1584_72_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->force_speed(35);
        }
    }
    event_1584_72_end: ;
}
void Frames::event_func_15408()
{
    // event 1585_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1585_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1585_72_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(kingdomstone_1587_instances))->get_x()+((Active*)*it)->alterables->values.get(7)*40))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1585_72_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        FrameObject * single_instance_1585_72_0; single_instance_1585_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelite_2510_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitemask_2511(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1585_72_0 == NULL)
                    single_instance_1585_72_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1585_72_end: ;
}
void Frames::event_func_15409()
{
    // event 1586_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1586_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1586_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (20))) goto event_1586_72_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(2))) goto event_1586_72_end;
        if (!((global_values->get(1)) == (0))) goto event_1586_72_end;
            group_main_engine_level_specific_methods_cutscenes_approach_brevon_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1) {
            group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1 = true;
        }
        if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_1) {
            group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = true;
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1586_72_end: ;
}
void Frames::event_func_15410()
{
    // event 1587_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1587_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1587_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (20))) goto event_1587_72_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(2))) goto event_1587_72_end;
        if (!((global_values->get(1)) == (2))) goto event_1587_72_end;
            group_main_engine_level_specific_methods_cutscenes_approach_brevon_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1) {
            group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1 = true;
        }
        if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_1) {
            group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = true;
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1587_72_end: ;
}
void Frames::event_func_15411()
{
    // event 1588_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1588_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1588_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (60))) goto event_1588_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)get_single(brevonmechturret_3333_instances, it.current_index, default_active_instance))->alterables->flags.get(1));
        }
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (1-((Active*)*it)->alterables->flags.get(1))*540);
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1) {
            group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1 = true;
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
    }
    event_1588_72_end: ;
}
void Frames::event_func_15412()
{
    // event 1589_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1589_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1589_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (90))) goto event_1589_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(10);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(17);
        ((Active*)get_instance(brevon_3683_instances))->set_y(((Active*)get_instance(brevon_3683_instances))->get_y()-48);
        brevondummycape_3758_instances.clear_selection();
        for (ObjectIterator it(brevondummycape_3758_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-26);
        }
    }
    event_1589_72_end: ;
}
void Frames::event_func_15413()
{
    // event 1590_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1590_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1590_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (90))) goto event_1590_72_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(brevon_3683_instances))->get_x()-300))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1590_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        brevondummycape_3758_instances.clear_selection();
        for (ObjectIterator it(brevondummycape_3758_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(brevon_3683_instances))->force_animation(7);
    }
    event_1590_72_end: ;
}
void Frames::event_func_15414()
{
    // event 1591_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1591_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (3))) goto event_1591_72_end;
        ((Active*)get_instance(brevon_3683_instances))->set_y(((Active*)get_instance(brevon_3683_instances))->get_y()-8);
    }
    event_1591_72_end: ;
}
void Frames::event_func_15415()
{
    // event 1592_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_approach_brevon_1)) goto event_1592_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (3))) goto event_1592_72_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_y()) < (((Active*)get_instance(brevonmechhead_2544_instances, default_active_instance))->get_y()))) goto event_1592_72_end;
        ((Active*)get_instance(brevon_3683_instances))->set_visible(false);
        ((Active*)get_instance(brevon_3683_instances))->set_x(0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(6, ((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(4, -1);
            ((Active*)*it)->alterables->values.set(15, 1);
            ((Active*)*it)->alterables->values.set(16, 1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
            group_main_engine_level_specific_methods_cutscenes_approach_brevon_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1) {
            group_main_engine_level_specific_methods_cutscenes_restore_hud_and_star_background_1 = true;
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_1592_72_end: ;
}
void Frames::event_func_15416()
{
    // event 1593_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1593_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(7)) == (0))) goto event_1593_72_end;
        if (!((global_values->get(1)) == (0))) goto event_1593_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1593_72_end: ;
}
void Frames::event_func_15417()
{
    // event 1594_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1594_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(7)) == (0))) goto event_1594_72_end;
        if (!((global_values->get(1)) != (0))) goto event_1594_72_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 7);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(7, 1);
    }
    event_1594_72_end: ;
}
void Frames::event_func_15418()
{
    // event 1595_72
    bool or_result_1595_72 = false;
    bool or_temp_result_1595_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto or_event_1595_72_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1595_72_0_end;
        or_result_1595_72 = true;
        or_temp_result_1595_72_0 = true;
    }
    or_event_1595_72_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1595_72_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1595_72
    bool or_temp_result_1595_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto or_event_1595_72_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1595_72_1_end;
        or_result_1595_72 = true;
        or_temp_result_1595_72_1 = true;
    }
    or_event_1595_72_1_end: ;
    if (or_temp_result_1595_72_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1595_72
    bool or_temp_result_1595_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto or_event_1595_72_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1595_72_2_end;
        or_result_1595_72 = true;
        or_temp_result_1595_72_2 = true;
        or_event_1595_72_2_end: ;
        if (or_temp_result_1595_72_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1595_72) goto or_final_or_event_1595_72_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1595_72_0 || or_temp_result_1595_72_1 || or_temp_result_1595_72_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1595_72_2_end: ;
}
void Frames::event_func_15419()
{
    // event 1596_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1596_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(7)) == (1))) goto event_1596_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(8)) < (2))) goto event_1596_72_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(8, 1);
    }
    event_1596_72_end: ;
}
void Frames::event_func_15420()
{
    // event 1597_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1597_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1597_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1597_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1597_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1597_72_end: ;
}
void Frames::event_func_15421()
{
    // event 1598_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1598_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1598_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (7))) goto event_1598_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1598_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1598_72_end: ;
}
void Frames::event_func_15422()
{
    // event 1599_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1599_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1599_72_end;
        if (once_condition_1599_72) goto event_1599_72_end;
        once_condition_1599_72 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1599_72_end: ;
}
void Frames::event_func_15423()
{
    // event 1600_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1600_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1600_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1600_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1600_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(7, 1);
    }
    event_1600_72_end: ;
}
void Frames::event_func_15424()
{
    // event 1601_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1601_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(7)) == (2))) goto event_1601_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(8, 1);
    }
    event_1601_72_end: ;
}
void Frames::event_func_15425()
{
    // event 1602_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1602_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(7)) == (2))) goto event_1602_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(8)) > (60))) goto event_1602_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(7, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1602_72_end: ;
}
void Frames::event_func_15426()
{
    // event 1603_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1603_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1603_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (2))) goto event_1603_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1603_72_end;
        if (!((global_values->get(1)) == (0))) goto event_1603_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(7, 1);
    }
    event_1603_72_end: ;
}
void Frames::event_func_15427()
{
    // event 1604_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1604_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1604_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (2))) goto event_1604_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1604_72_end;
        if (!((global_values->get(1)) != (0))) goto event_1604_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 8);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1604_72_end: ;
}
void Frames::event_func_15428()
{
    // event 1605_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1605_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1605_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (8))) goto event_1605_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1605_72_end;
        if (!((global_values->get(1)) != (0))) goto event_1605_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 3);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1605_72_end: ;
}
void Frames::event_func_15429()
{
    // event 1606_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1606_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(7)) == (4))) goto event_1606_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(8, 1);
    }
    event_1606_72_end: ;
}
void Frames::event_func_15430()
{
    // event 1607_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1607_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(7)) == (4))) goto event_1607_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(8)) == (50))) goto event_1607_72_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1607_72_end: ;
}
void Frames::event_func_15431()
{
    // event 1608_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_conversation_1)) goto event_1608_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(7)) == (4))) goto event_1608_72_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(8)) > (100))) goto event_1608_72_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(7, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1608_72_end: ;
}
