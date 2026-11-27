#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::col_17_76()
{
    event_func_16740();
    event_func_1342();
}
void Frames::event_func_16741()
{
    // event 1588_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1588_76_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(1))) goto event_1588_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(4)) > (0))) goto event_1588_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(5)) < (0))) goto event_1588_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(5)) > (-4))) goto event_1588_76_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(4, 0-((Active*)col_instance_1)->alterables->values.get(4)*0.5);
    }
    event_1588_76_end: ;
}
void Frames::event_func_16742()
{
    // event 1590_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1590_76_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(1))) goto event_1590_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(5)) > (2))) goto event_1590_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) == (7))) goto event_1590_76_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(8)) < (1))) goto event_1590_76_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(0, 6);
    }
    event_1590_76_end: ;
}
void Frames::event_func_16743()
{
    // event 1591_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1591_76_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(1))) goto event_1591_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(5)) > (2))) goto event_1591_76_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(5, 0-((Active*)col_instance_1)->alterables->values.get(5)*0.5);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(4, ((Active*)col_instance_1)->alterables->values.get(4)*0.5);
    }
    event_1591_76_end: ;
}
void Frames::event_func_16744()
{
    // event 1592_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1592_76_end;
        if (!(((Active*)col_instance_1)->alterables->flags.is_on(1))) goto event_1592_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(5)) > (0))) goto event_1592_76_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(5, 0);
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(1);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(4, 0);
    }
    event_1592_76_end: ;
}
void Frames::col_18_76()
{
    event_func_16741();
    event_func_16742();
    event_func_16743();
    event_func_16744();
}
void Frames::event_func_16745()
{
    // event 1573_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_rescue_torque_1)) goto event_1573_76_end;
        if (!((((Active*)get_instance(npcshellduck_533_instances))->alterables->values.get(0)) >= (4))) goto event_1573_76_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(7)) == (0))) goto event_1573_76_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.set(7, 1);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(0, 0);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(24, -5);
        ((Active*)((Active*)col_instance_1))->alterables->values.set(23, -2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1573_76_end: ;
}
void Frames::col_19_76()
{
    event_func_16745();
}
void Frames::test_collisions_76()
{
    test_collisions(npcshellduck_533_instances, enemylaser_1626_instances, 1, 1, (EventFunction)&Frames::col_0_76);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2147483648, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 536870912, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(playerreflect_447_instances, enemylaser_1626_instances, 1, 2, (EventFunction)&Frames::col_5_29);
    test_collisions(npcshellduck_533_instances, bossrapidbullet_1834_instances, 2, 1, (EventFunction)&Frames::col_6_76);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_7, playerprojectile_320_instances, 67108864, 1, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_20, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_7_13);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 1, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 4, (EventFunction)&Frames::col_5_13);
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
    for (it1 = torqueshiptail_3889_instances.begin(); it1 != torqueshiptail_3889_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_15_76();
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
        col_17_76();
    }
    for (it1 = npcshellduck_533_instances.begin(); it1 != npcshellduck_533_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_18_76();
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
    for (it1 = bosssnakebody_995_instances.begin(); it1 != bosssnakebody_995_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_19_76();
    }
    for (it1 = enemylaser_1626_instances.begin(); it1 != enemylaser_1626_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_23_29();
    }
}
void Frames::event_func_16746()
{
    // event 1452_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1452_76_end;
        if (!(((Active*)foreach_instance_m)->alterables->flags.is_on(6))) goto event_1452_76_end;
        if (!((((Active*)foreach_instance_m)->alterables->values.get(4)) < (45))) goto event_1452_76_end;
        FrameObject * single_instance_1452_76_0; single_instance_1452_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(((Active*)foreach_instance_m)->x + 0, ((Active*)foreach_instance_m)->y + 0), ((Active*)foreach_instance_m)->layer);
            if (single_instance_1452_76_0 == NULL)
                single_instance_1452_76_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1452_76_0))->set_x(((Active*)foreach_instance_m)->get_x()+sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*132)*(8+sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*2)*40));
        ((Active*)((Active*)single_instance_1452_76_0))->set_y(((Active*)foreach_instance_m)->get_y()-sin_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*5)*80);
        ((Active*)((Active*)single_instance_1452_76_0))->force_speed(30+cos_deg(((Active*)foreach_instance_m)->alterables->values.get(4)*143)*10);
        ((Active*)((Active*)foreach_instance_m))->alterables->values.add(4, 1);
        ((Active*)((Active*)foreach_instance_m))->set_visible(false);
        ((Active*)((Active*)foreach_instance_m))->force_animation(8);
        ((Active*)((Active*)foreach_instance_m))->get_movement()->stop(false);
    }
    event_1452_76_end: ;
}
void Frames::foreach_m_76()
{
    event_func_16746();
}
void Frames::event_func_16747()
{
    // event 2_76
    {
        if (!(group_debug_1)) goto event_2_76_end;
        if (!(is_key_pressed_once(SDLK_UP))) goto event_2_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2_76_end: ;
}
void Frames::event_func_16748()
{
    // event 256_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_256_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_256_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_256_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (44))) goto event_256_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (0))) goto event_256_76_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) < (100))) goto event_256_76_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_256_76_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_min(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)+0.2, 100));
    }
    event_256_76_end: ;
}
void Frames::event_func_16749()
{
    // event 543_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_543_76_end;
        effectsplayersplode_310_instances.clear_selection();
        for (ObjectIterator it(effectsplayersplode_310_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1+((Active*)*it)->get_movement()->get_speed()*0.2, 0);
            ((Active*)*it)->force_frame(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
    }
    event_543_76_end: ;
}
void Frames::event_func_16750()
{
    // event 545_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_545_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_545_76_end;
        global_values->set(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        FrameObject * single_instance_545_76_0; single_instance_545_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_545_76_0 == NULL)
                    single_instance_545_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_545_76_0))->alterables->flags.enable(6);
    }
    event_545_76_end: ;
}
void Frames::event_func_16751()
{
    // event 550_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_550_76_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (1))) goto event_550_76_end;
        if (!((global_values->get(0)) > (0))) goto event_550_76_end;
        if (once_condition_550_76) goto event_550_76_end;
        once_condition_550_76 = true;
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 7)+1, 1, 7);
    }
    event_550_76_end: ;
}
void Frames::event_func_16752()
{
    // event 565_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_565_76_end;
        if (!((((Active*)get_instance(player_389_instances))->alterables->values.get(4)) == (1))) goto event_565_76_end;
        if (!((global_values->get(0)) > (0))) goto event_565_76_end;
        if (once_condition_565_76) goto event_565_76_end;
        once_condition_565_76 = true;
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 7)+1, 1, 7);
    }
    event_565_76_end: ;
}
void Frames::event_func_16753()
{
    // event 625_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 && group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1)) goto event_625_76_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_625_76_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_625_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (20))) goto event_625_76_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 20);
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    
        {
            loop_stop_voices_running = true;
            int times = int(1);
            loop_stop_voices_index = 0;
            while (loop_stop_voices_index < times) {
                loop_stop_voices_8();
                if (!loop_stop_voices_running) break;
                loop_stop_voices_index++;
            }
        }
    }
    event_625_76_end: ;
}
void Frames::event_func_16754()
{
    // event 690_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_690_76_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_690_76_end;
        FrameObject * single_instance_690_76_0; single_instance_690_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_690_76_0 == NULL)
                    single_instance_690_76_0 = new_obj;
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
                loop_spawndebris_76();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_690_76_end: ;
}
void Frames::event_func_16755()
{
    // event 745_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_745_76_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (2))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_745_76_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 1-((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->alterables->values.get(1));
    }
    event_745_76_end: ;
}
void Frames::event_func_16756()
{
    // event 795_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_795_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (30))) goto event_795_76_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_795_76_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto event_795_76_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_795_76_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 5);
    }
    event_795_76_end: ;
}
void Frames::event_func_16757()
{
    // event 1117_76
    {
        if (!(group_main_engine_1)) goto event_1117_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1117_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1117_76_end;
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcodec_354_instances.has_selection()) goto event_1117_76_end;
        ringsparkle_139_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectcodec_354_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
        }
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(objectcodec_354_instances, it.current_index, default_active_instance))->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)get_single(objectcodec_354_instances, it.current_index, default_active_instance))->get_y()+randrange(16)-randrange(16));
        }
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        media.play_id(SOUND_ITEM_STARCARD_32, -1, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
    }
    event_1117_76_end: ;
}
void Frames::event_func_16758()
{
    // event 1264_76
    {
        if (!(group_main_engine_1)) goto event_1264_76_end;
            group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1 = false;
    
            group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1 = false;
    
            group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1 = false;
    
            group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1 = false;
    
            group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1 = false;
    
    }
    event_1264_76_end: ;
}
void Frames::event_func_16759()
{
    // event 1265_76
    {
        if (!(group_main_engine_1)) goto event_1265_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (1))) goto event_1265_76_end;
        if (!group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1) {
            group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1 = true;
        }
    }
    event_1265_76_end: ;
}
void Frames::event_func_16760()
{
    // event 1266_76
    {
        if (!(group_main_engine_1)) goto event_1266_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (2))) goto event_1266_76_end;
        if (!group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1) {
            group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1 = true;
        }
    }
    event_1266_76_end: ;
}
void Frames::event_func_16761()
{
    // event 1267_76
    {
        if (!(group_main_engine_1)) goto event_1267_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (3))) goto event_1267_76_end;
        if (!group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1) {
            group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1 = true;
        }
    }
    event_1267_76_end: ;
}
void Frames::event_func_16762()
{
    // event 1268_76
    {
        if (!(group_main_engine_1)) goto event_1268_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (4))) goto event_1268_76_end;
        if (!group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1) {
            group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1 = true;
        }
    }
    event_1268_76_end: ;
}
void Frames::event_func_16763()
{
    // event 1269_76
    {
        if (!(group_main_engine_1)) goto event_1269_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (5))) goto event_1269_76_end;
        if (!group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1) {
            group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1 = true;
        }
    }
    event_1269_76_end: ;
}
void Frames::event_func_16764()
{
    // event 1270_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1)) goto event_1270_76_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1270_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1270_76_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1270_76_end: ;
}
void Frames::event_func_16765()
{
    // event 1271_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1)) goto event_1271_76_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1271_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1271_76_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1271_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1271_76_0_end: ;
    }
    event_1271_76_end: ;
}
void Frames::event_func_16766()
{
    // event 1272_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1)) goto event_1272_76_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1272_76_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_1272_76_end;
        FrameObject * single_instance_1272_76_0; single_instance_1272_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldwood_313_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsshield_306(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1272_76_0 == NULL)
                    single_instance_1272_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1272_76_0))->force_frame(0);
        ((Active*)((Active*)single_instance_1272_76_0))->stop_animation();
        ((Active*)((Active*)single_instance_1272_76_0))->alterables->values.set(2, 30+randrange(121));
        ((Active*)((Active*)single_instance_1272_76_0))->alterables->values.set(0, cos_deg(((Active*)single_instance_1272_76_0)->alterables->values.get(2))*26);
        ((Active*)((Active*)single_instance_1272_76_0))->alterables->values.set(1, sin_deg(((Active*)single_instance_1272_76_0)->alterables->values.get(2))*-26);
        ((Active*)single_instance_1272_76_0)->move_back(((Active*)get_instance(playerskinsashhair_417_instances)));
        ((Active*)((Active*)single_instance_1272_76_0))->alterables->values.set(3, randrange(360));
        ((Active*)((Active*)single_instance_1272_76_0))->set_angle(randrange(360), 0);
    }
    event_1272_76_end: ;
}
void Frames::event_func_16767()
{
    // event 1273_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1)) goto event_1273_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1273_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 0.7);
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(3))*1.3);
            ((Active*)*it)->alterables->values.add(3, 8);
        }
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+4, 0);
        }
    }
    event_1273_76_end: ;
}
void Frames::event_func_16768()
{
    // event 1274_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1)) goto event_1274_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (64))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1274_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1274_76_end: ;
}
void Frames::event_func_16769()
{
    // event 1275_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1)) goto event_1275_76_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (15))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1275_76_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1275_76_0; single_instance_1275_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldwood_313_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1275_76_0 == NULL)
                    single_instance_1275_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1275_76_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1275_76_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_1275_76_0))->set_direction(8);
        media.play_id(SOUND_ITEM_HIDDEN_58, -1, 1);
    }
    event_1275_76_end: ;
}
void Frames::event_func_16770()
{
    // event 1276_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1)) goto event_1276_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-120))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1276_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1276_76_end: ;
}
void Frames::event_func_16771()
{
    // event 1277_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1)) goto event_1277_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1277_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1277_76_end: ;
}
void Frames::event_func_16772()
{
    // event 1278_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_1_wood_shield_2_1)) goto event_1278_76_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1278_76_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->advance_movement(-1);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(7, 0.5);
            ((Active*)*it)->alterables->values.set(6, 5);
        }
    }
    event_1278_76_end: ;
}
void Frames::event_func_16773()
{
    // event 1279_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1)) goto event_1279_76_end;
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflamefront_316_instances.has_selection()) goto event_1279_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1279_76_end;
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1279_76_end: ;
}
void Frames::event_func_16774()
{
    // event 1280_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1)) goto event_1280_76_end;
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflameback_315_instances.has_selection()) goto event_1280_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1280_76_end;
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1280_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1280_76_0_end: ;
    }
    event_1280_76_end: ;
}
void Frames::event_func_16775()
{
    // event 1281_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1)) goto event_1281_76_end;
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflamefront_316_instances.has_selection()) goto event_1281_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1281_76_end;
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1281_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1281_76_0_end: ;
    }
    event_1281_76_end: ;
}
void Frames::event_func_16776()
{
    // event 1282_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_2_flame_shield_2_1)) goto event_1282_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1282_76_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_ITEM_SHIELDBREAK_11, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, 0);
    }
    event_1282_76_end: ;
}
void Frames::event_func_16777()
{
    // event 1283_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1)) goto event_1283_76_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1283_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1283_76_end;
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1283_76_end: ;
}
void Frames::event_func_16778()
{
    // event 1284_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_3_magnetic_shield_2_1)) goto event_1284_76_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1284_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1284_76_end;
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1284_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1284_76_0_end: ;
    }
    event_1284_76_end: ;
}
void Frames::event_func_16779()
{
    // event 1285_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1)) goto event_1285_76_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1285_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1285_76_end;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0-(1-get_min(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)))*30);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1285_76_end: ;
}
void Frames::event_func_16780()
{
    // event 1286_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1)) goto event_1286_76_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1286_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1286_76_end;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1286_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1286_76_0_end: ;
    }
    event_1286_76_end: ;
}
void Frames::event_func_16781()
{
    // event 1287_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1)) goto event_1287_76_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (4))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1287_76_end;
        if (not_always_1287_76 > loop_count) {
            not_always_1287_76 = loop_count + 2;
            goto event_1287_76_end;
        }
        not_always_1287_76 = loop_count + 2;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+90, 0);
        }
    }
    event_1287_76_end: ;
}
void Frames::event_func_16782()
{
    // event 1288_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1)) goto event_1288_76_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1288_76_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1288_76_end;
        FrameObject * single_instance_1288_76_0; single_instance_1288_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldwater_318_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsshield_306(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1288_76_0 == NULL)
                    single_instance_1288_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1288_76_0))->force_frame(2);
        ((Active*)((Active*)single_instance_1288_76_0))->stop_animation();
        ((Active*)((Active*)single_instance_1288_76_0))->alterables->values.set(2, 30+randrange(121));
        ((Active*)((Active*)single_instance_1288_76_0))->alterables->values.set(0, cos_deg(((Active*)single_instance_1288_76_0)->alterables->values.get(2))*26);
        ((Active*)((Active*)single_instance_1288_76_0))->alterables->values.set(1, sin_deg(((Active*)single_instance_1288_76_0)->alterables->values.get(2))*26);
        ((Active*)single_instance_1288_76_0)->move_back(((Active*)get_instance(playerskinsashhair_417_instances)));
        {
            ((Active*)single_instance_1288_76_0)->set_shader(Render::ADDITIVE);
        }
    }
    event_1288_76_end: ;
}
void Frames::event_func_16783()
{
    // event 1289_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1)) goto event_1289_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1289_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+3);
        }
    }
    event_1289_76_end: ;
}
void Frames::event_func_16784()
{
    // event 1290_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1)) goto event_1290_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (-64))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1290_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1290_76_end: ;
}
void Frames::event_func_16785()
{
    // event 1291_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_4_water_shield_2_1)) goto event_1291_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()-10-sin_deg(((Active*)*it)->alterables->values.get(2))*24))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1291_76_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1291_76_end: ;
}
void Frames::event_func_16786()
{
    // event 1292_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1)) goto event_1292_76_end;
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldearth_314_instances.has_selection()) goto event_1292_76_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1292_76_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1292_76_end: ;
}
void Frames::event_func_16787()
{
    // event 1293_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1)) goto event_1293_76_end;
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldearth_314_instances.has_selection()) goto event_1293_76_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1293_76_end;
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1293_76_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1293_76_0_end: ;
    }
    event_1293_76_end: ;
}
void Frames::event_func_16788()
{
    // event 1294_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1)) goto event_1294_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-120))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1294_76_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1294_76_end: ;
}
void Frames::event_func_16789()
{
    // event 1295_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1)) goto event_1295_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1295_76_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1295_76_end: ;
}
void Frames::event_func_16790()
{
    // event 1296_76
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_5_earth_shield_2_1)) goto event_1296_76_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1296_76_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->advance_movement(-1);
            ((Active*)*it)->alterables->values.set(7, 0.5);
            ((Active*)*it)->alterables->values.set(6, 8);
        }
    }
    event_1296_76_end: ;
}
void Frames::event_func_16791()
{
    // event 1424_76
    {
        if (!(group_main_engine_1)) goto event_1424_76_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1424_76_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1424_76_end;
        global_values->set(4, -1);
        next_frame = index + 1 + 0;    
    
    }
    event_1424_76_end: ;
}
void Frames::event_func_16792()
{
    // event 1431_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1431_76_end;
        if (once_condition_1431_76) goto event_1431_76_end;
        once_condition_1431_76 = true;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, -0.01*20);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(6, -0.02*20);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.04*20-0.1);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(6, -0.05*20);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.08*20-0.3);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(6, -0.4*20);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(6, -0.5*20);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(6, -0.65*20);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1560);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 320);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(3, -4);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(4, -0.4);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1431_76_end: ;
}
void Frames::event_func_16793()
{
    // event 1432_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1432_76_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) == (3))) goto event_1432_76_end;
        if (not_always_1432_76 > loop_count) {
            not_always_1432_76 = loop_count + 2;
            goto event_1432_76_end;
        }
        not_always_1432_76 = loop_count + 2;
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
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1432_76_end: ;
}
void Frames::event_func_16794()
{
    // event 1433_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1433_76_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1433_76_end;
        FrameObject * single_instance_1433_76_0; single_instance_1433_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(torqueship_3888_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + -44, parent->y + 5), parent->layer);
                if (single_instance_1433_76_0 == NULL)
                    single_instance_1433_76_0 = new_obj;
            }
        }
    }
    event_1433_76_end: ;
}
void Frames::event_func_16795()
{
    // event 1434_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1434_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->set_x(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(2))*32);
        ((Active*)get_instance(torqueship_3888_instances))->set_y(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(1)+cos_deg(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(2)*2+90)*32);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(2, (((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(2)+1.7)%math_helper%360);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.add(0, ((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(3));
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.add(1, ((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(4));
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+sin_deg(global_values->get(3)*2+((Active*)*it)->alterables->values.get(6)*115)*(36-((Active*)*it)->alterables->values.get(6)*12));
        }
        thrusterflame_3886_instances.clear_selection();
        for (ObjectIterator it(thrusterflame_3886_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(torqueship_3888_instances));
            if (parent == NULL) goto pos_end_1434_76_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -68, parent->get_y() + 0);
            pos_end_1434_76_0: ;
        }
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.add(19, 1);
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-16);
        }
    }
    event_1434_76_end: ;
}
void Frames::event_func_16796()
{
    // event 1435_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1435_76_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1435_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) < (2))) goto event_1435_76_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(6+randrange(5)));
            if (dyn_it == (*loops).end()) goto dynamic_1435_76_0_end;
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
        dynamic_1435_76_0_end: ;
    }
    event_1435_76_end: ;
}
void Frames::event_func_16797()
{
    // event 1436_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1436_76_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1436_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) < (2))) goto event_1436_76_end;
        FrameObject * single_instance_1436_76_0; single_instance_1436_76_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(torqueship_3888_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1436_76_0 == NULL)
                    single_instance_1436_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1436_76_0))->set_x(((Active*)single_instance_1436_76_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1436_76_0))->set_y(((Active*)single_instance_1436_76_0)->get_y()-26+randrange(33));
        ((Active*)((Active*)single_instance_1436_76_0))->force_speed(50);
    }
    event_1436_76_end: ;
}
void Frames::event_func_16798()
{
    // event 1437_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1437_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (0))) goto event_1437_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(0)) < (1700))) goto event_1437_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(3, get_min(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(3)+0.05, 0));
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(4, get_min(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(4)+0.01, 0));
    }
    event_1437_76_end: ;
}
void Frames::event_func_16799()
{
    // event 1438_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1438_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (0))) goto event_1438_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(19)) > (170))) goto event_1438_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(6, 1);
    }
    event_1438_76_end: ;
}
void Frames::event_func_16800()
{
    // event 1439_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1439_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (1))) goto event_1439_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 20);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 3);
    }
    event_1439_76_end: ;
}
void Frames::event_func_16801()
{
    // event 1440_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1440_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (1))) goto event_1440_76_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (200))) goto event_1440_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(6, 2);
    }
    event_1440_76_end: ;
}
void Frames::event_func_16802()
{
    // event 1441_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1441_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) >= (2))) goto event_1441_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) <= (3))) goto event_1441_76_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 0.75-(((Active*)*it)->alterables->values.get(6)*0.25));
        }
    }
    event_1441_76_end: ;
}
void Frames::event_func_16803()
{
    // event 1442_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1442_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (2))) goto event_1442_76_end;
        if (!((global_values->get(3)%math_helper%15) == (0))) goto event_1442_76_end;
        levelbackgroundplane2_865_instances.clear_selection();
        for (ObjectIterator it(levelbackgroundplane2_865_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!levelbackgroundplane2_865_instances.has_selection()) goto event_1442_76_end;
        FrameObject * single_instance_1442_76_0; single_instance_1442_76_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(levelbackgroundplane2_865_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmissile_2122(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1442_76_0 == NULL)
                    single_instance_1442_76_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1442_76_0))->set_direction(28);
        ((Active*)((Active*)single_instance_1442_76_0))->get_movement()->set_speed(80);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.add(9, 1);
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    event_1442_76_end: ;
}
void Frames::event_func_16804()
{
    // event 1443_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1443_76_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1443_76_end;
        if (!((global_values->get(3)%math_helper%12) == (0))) goto event_1443_76_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+1);
        }
    }
    event_1443_76_end: ;
}
void Frames::event_func_16805()
{
    // event 1444_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1444_76_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1444_76_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1444_76_end: ;
}
void Frames::event_func_16806()
{
    // event 1445_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1445_76_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1445_76_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(get_min(((Active*)*it)->get_movement()->get_speed()+2, 200));
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(torqueship_3888_instances))->x + 0, ((Active*)get_instance(torqueship_3888_instances))->y + 0));
        }
    }
    event_1445_76_end: ;
}
void Frames::event_func_16807()
{
    // event 1446_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1446_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (2))) goto event_1446_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(9)) > (6))) goto event_1446_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(6, 3);
    }
    event_1446_76_end: ;
}
void Frames::event_func_16808()
{
    // event 1447_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1447_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (3))) goto event_1447_76_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(0)))) goto event_1447_76_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 20);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(1, 3);
    }
    event_1447_76_end: ;
}
void Frames::event_func_16809()
{
    // event 1448_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1448_76_end;
        bossmissile_2023_instances.clear_selection();
        torqueship_3888_instances.clear_selection();
        if (!check_overlap(bossmissile_2023_instances, torqueship_3888_instances)) goto event_1448_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(0)) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+300))) goto event_1448_76_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1448_76_end: ;
}
void Frames::event_func_16810()
{
    // event 1449_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1449_76_end;
        bossmissile_2023_instances.clear_selection();
        torqueship_3888_instances.clear_selection();
        if (!check_overlap(bossmissile_2023_instances, torqueship_3888_instances)) goto event_1449_76_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(torqueship_3888_instances))->get_x()-30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1449_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(0)) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+250))) goto event_1449_76_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 10);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->flags.enable(6);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.add(25, 1);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.sub(2, 10);
        ((Active*)get_instance(torqueship_3888_instances))->force_frame(8);
        ((Active*)get_instance(torqueship_3888_instances))->restore_frame();
    }
    event_1449_76_end: ;
}
void Frames::event_func_16811()
{
    // event 1450_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1450_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (3))) goto event_1450_76_end;
        if (!(((Active*)get_instance(torqueship_3888_instances))->alterables->flags.is_on(6))) goto event_1450_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(25)) > (3))) goto event_1450_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(6, 4);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(8, 360);
    }
    event_1450_76_end: ;
}
void Frames::event_func_16812()
{
    // event 1451_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1451_76_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1451_76_end;
        {
            SavedSelection extra_bossmissile_2023_instances(bossmissile_2023_instances);
            for (SavedIterator selected(extra_bossmissile_2023_instances); !selected.end(); ++selected) {
                foreach_instance_m = ((Active*)*selected);
                foreach_m_76();
            }
        }
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1451_76_end: ;
}
void Frames::event_func_16813()
{
    // event 1453_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1453_76_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (45))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1453_76_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1453_76_end: ;
}
void Frames::event_func_16814()
{
    // event 1454_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1454_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (4))) goto event_1454_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(8, ((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(8)-(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(25)*0.1)-((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(10));
        ((Active*)get_instance(torqueship_3888_instances))->set_angle(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(8), 0);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.add(9, 1);
    }
    event_1454_76_end: ;
}
void Frames::event_func_16815()
{
    // event 1455_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1455_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (4))) goto event_1455_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(25)) > (4))) goto event_1455_76_end;
        if (!(((Active*)get_instance(torqueship_3888_instances))->test_directions(1))) goto event_1455_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->set_direction(1);
        {
            FrameObject * parent = ((Active*)get_instance(torqueship_3888_instances));
            if (parent == NULL) goto pos_end_1455_76_0;
            ((Active*)get_instance(torqueshiptail_3889_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1455_76_0: ;
        }
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_visible(true);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(3, -6);
        thrusterflame_3886_instances.clear_selection();
        for (ObjectIterator it(thrusterflame_3886_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(3, 10);
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(4, 3);
    }
    event_1455_76_end: ;
}
void Frames::event_func_16816()
{
    // event 1456_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1456_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (4))) goto event_1456_76_end;
        if (((Active*)get_instance(torqueship_3888_instances))->test_directions(1)) goto event_1456_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(4, get_min(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(4)+0.02, 6));
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(3, get_min(((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(3)+0.1, 10));
    }
    event_1456_76_end: ;
}
void Frames::event_func_16817()
{
    // event 1457_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1457_76_end;
        if (!(((Active*)get_instance(torqueshiptail_3889_instances))->flags & VISIBLE)) goto event_1457_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_x(((Active*)get_instance(torqueshiptail_3889_instances))->get_x()+((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(3));
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_y(((Active*)get_instance(torqueshiptail_3889_instances))->get_y()+((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(4));
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.add(4, 0.2);
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_angle(((Active*)get_instance(torqueshiptail_3889_instances))->get_angle()-10, 0);
    }
    event_1457_76_end: ;
}
void Frames::event_func_16818()
{
    // event 1458_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1458_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (4))) goto event_1458_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(9)) > (120))) goto event_1458_76_end;
        ((Active*)get_instance(torqueship_3888_instances))->alterables->values.set(6, 6);
    }
    event_1458_76_end: ;
}
void Frames::event_func_16819()
{
    // event 1459_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1459_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (0))) goto event_1459_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    event_1459_76_end: ;
}
void Frames::event_func_16820()
{
    // event 1460_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1460_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (0))) goto event_1460_76_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1460_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1460_76_end: ;
}
void Frames::event_func_16821()
{
    // event 1461_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1461_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (6))) goto event_1461_76_end;
        if (not_always_1461_76 > loop_count) {
            not_always_1461_76 = loop_count + 2;
            goto event_1461_76_end;
        }
        not_always_1461_76 = loop_count + 2;
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
            group_pause_1 = false;
    
    }
    event_1461_76_end: ;
}
void Frames::event_func_16822()
{
    // event 1462_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1462_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (6))) goto event_1462_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1462_76_end: ;
}
void Frames::event_func_16823()
{
    // event 1463_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1)) goto event_1463_76_end;
        if (!((((Active*)get_instance(torqueship_3888_instances))->alterables->values.get(6)) == (6))) goto event_1463_76_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1463_76_end;
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_airship_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1) {
            group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1 = true;
        }
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(6, 0);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(6, 0);
    }
    event_1463_76_end: ;
}
void Frames::event_func_16824()
{
    // event 1464_76
    bool or_result_1464_76 = false;
    bool or_temp_result_1464_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1464_76_0_end;
        torqueshiptail_3889_instances.clear_selection();
        for (ObjectIterator it(torqueshiptail_3889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (7))) { it.deselect(); continue; }
        }
        if (!torqueshiptail_3889_instances.has_selection()) goto or_event_1464_76_0_end;
        or_result_1464_76 = true;
        or_temp_result_1464_76_0 = true;
    }
    or_event_1464_76_0_end: ;
    torqueshiptail_3889_instances.clear_saved_selection();
    if (or_temp_result_1464_76_0) {
        torqueshiptail_3889_instances.save_selection();
    }
    // event 1464_76
    bool or_temp_result_1464_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1464_76_1_end;
        torqueshiptail_3889_instances.clear_selection();
        for (ObjectIterator it(torqueshiptail_3889_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (13))) { it.deselect(); continue; }
        }
        if (!torqueshiptail_3889_instances.has_selection()) goto or_event_1464_76_1_end;
        or_result_1464_76 = true;
        or_temp_result_1464_76_1 = true;
        or_event_1464_76_1_end: ;
        if (or_temp_result_1464_76_1) {
            torqueshiptail_3889_instances.save_selection();
        }
        if (!or_result_1464_76) goto or_final_or_event_1464_76_1_end;
        torqueshiptail_3889_instances.empty_selection();
        if (or_temp_result_1464_76_0 || or_temp_result_1464_76_1) {
            torqueshiptail_3889_instances.restore_selection();
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    or_final_or_event_1464_76_1_end: ;
}
void Frames::event_func_16825()
{
    // event 1465_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1465_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (7))) goto event_1465_76_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1465_76_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        {
            ((Active*)get_instance(torqueshiptail_3889_instances))->set_global_position(562, 860);
            pos_end_1465_76_0: ;
        }
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_visible(true);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 1);
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_layer(3-1);
    }
    event_1465_76_end: ;
}
void Frames::event_func_16826()
{
    // event 1466_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1466_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (11))) goto event_1466_76_end;
        if (!((objectbike_322_instances.size()) == (0))) goto event_1466_76_end;
        objectbike_322_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_objectbike_322(767, 1194), 0);
            objectbike_322_instances.add_back();
        }
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1466_76_end: ;
}
void Frames::event_func_16827()
{
    // event 1467_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1467_76_end;
        if (once_condition_1467_76) goto event_1467_76_end;
        once_condition_1467_76 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(640, 1186);
            pos_end_1467_76_0: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(712, 1193);
            pos_end_1467_76_1: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_x()+100);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_y());
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 99);
    }
    event_1467_76_end: ;
}
void Frames::event_func_16828()
{
    // event 1468_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1468_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) < (7))) goto event_1468_76_end;
        {
            loop_floorcheck_running = true;
            int times = int(4);
            loop_floorcheck_index = 0;
            while (loop_floorcheck_index < times) {
                loop_floorcheck_76();
                if (!loop_floorcheck_running) break;
                loop_floorcheck_index++;
            }
        }
    }
    event_1468_76_end: ;
}
void Frames::event_func_16829()
{
    // event 1473_76
    bool or_result_1473_76 = false;
    bool or_temp_result_1473_76_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1473_76_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1473_76_0_end;
        or_result_1473_76 = true;
        or_temp_result_1473_76_0 = true;
    }
    or_event_1473_76_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1473_76_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1473_76
    bool or_temp_result_1473_76_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1473_76_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1473_76_1_end;
        or_result_1473_76 = true;
        or_temp_result_1473_76_1 = true;
    }
    or_event_1473_76_1_end: ;
    if (or_temp_result_1473_76_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1473_76
    bool or_temp_result_1473_76_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto or_event_1473_76_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1473_76_2_end;
        or_result_1473_76 = true;
        or_temp_result_1473_76_2 = true;
        or_event_1473_76_2_end: ;
        if (or_temp_result_1473_76_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1473_76) goto or_final_or_event_1473_76_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1473_76_0 || or_temp_result_1473_76_1 || or_temp_result_1473_76_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1473_76_2_end: ;
}
void Frames::event_func_16830()
{
    // event 1474_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1474_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1474_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (6))) goto event_1474_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1474_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1474_76_end: ;
}
void Frames::event_func_16831()
{
    // event 1475_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1475_76_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1475_76_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (6))) goto event_1475_76_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1475_76_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        {
            ((Active*)get_instance(torqueshiptail_3889_instances))->set_global_position(562, 860);
            pos_end_1475_76_0: ;
        }
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_visible(true);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(6, 1);
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_layer(3-1);
        media.stop_channel(20-1);
    }
    event_1475_76_end: ;
}
void Frames::event_func_16832()
{
    // event 1476_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1476_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) > (0))) goto event_1476_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_x(((Active*)get_instance(torqueshiptail_3889_instances))->get_x()+((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(3));
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_y(((Active*)get_instance(torqueshiptail_3889_instances))->get_y()+((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(4));
    }
    event_1476_76_end: ;
}
void Frames::event_func_16833()
{
    // event 1477_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1477_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (1))) goto event_1477_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_angle(((Active*)get_instance(torqueshiptail_3889_instances))->get_angle()-10, 0);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(3, 15);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(4, 15);
    }
    event_1477_76_end: ;
}
void Frames::event_func_16834()
{
    // event 1479_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1479_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (2))) goto event_1479_76_end;
        ((Active*)get_instance(torqueshiptail_3889_instances))->set_angle(((Active*)get_instance(torqueshiptail_3889_instances))->get_angle()-10, 0);
        ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.set(4, ((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(4)+0.25);
    }
    event_1479_76_end: ;
}
void Frames::event_func_16835()
{
    // event 1480_76
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 && group_main_engine_level_specific_methods_cutscenes_intro_cutscene_lilac_and_carol_1)) goto event_1480_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(6)) == (2))) goto event_1480_76_end;
        if (!((((Active*)get_instance(torqueshiptail_3889_instances))->alterables->values.get(4)) > (-5))) goto event_1480_76_end;
        if (not_always_1480_76 > loop_count) {
            not_always_1480_76 = loop_count + 2;
            goto event_1480_76_end;
        }
        not_always_1480_76 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(18);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_01_05_ogg_277, 17-1);
    }
    event_1480_76_end: ;
}
