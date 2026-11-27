#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_5673()
{
    // event 1481_26
    {
        if (!(group_main_engine_1)) goto event_1481_26_end;
        breakablespike_1284_instances.clear_selection();
        for (ObjectIterator it(breakablespike_1284_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!breakablespike_1284_instances.has_selection()) goto event_1481_26_end;
        for (ObjectIterator it(breakablespike_1284_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1481_26_end: ;
}
void Frames::event_func_5674()
{
    // event 1483_26
    {
        if (!(group_main_engine_1)) goto event_1483_26_end;
        levelhandcarfloor1_1417_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor1_1417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-28);
        }
        levelhandcarfloor2_1418_instances.clear_selection();
        for (ObjectIterator it(levelhandcarfloor2_1418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*28);
        }
    }
    event_1483_26_end: ;
}
void Frames::event_func_5675()
{
    // event 1484_26
    {
        if (!(group_main_engine_1)) goto event_1484_26_end;
        {
            loop_cart_floorcheck_running = true;
            int times = int(12);
            loop_cart_floorcheck_index = 0;
            while (loop_cart_floorcheck_index < times) {
                loop_cart_floorcheck_26();
                if (!loop_cart_floorcheck_running) break;
                loop_cart_floorcheck_index++;
            }
        }
    }
    event_1484_26_end: ;
}
void Frames::event_func_5676()
{
    // event 1493_26
    {
        if (!(group_main_engine_1)) goto event_1493_26_end;
        levelhandcar_1415_instances.clear_selection();
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelhandcar_1415_instances.has_selection()) goto event_1493_26_end;
        for (ObjectIterator it(levelhandcar_1415_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(0, 0-atan2_deg(((Active*)get_instance(levelhandcarfloor2_1418_instances, it.current_index, default_active_instance))->get_y()-((Active*)get_instance(levelhandcarfloor1_1417_instances, it.current_index, default_active_instance))->get_y(), ((Active*)get_instance(levelhandcarfloor2_1418_instances, it.current_index, default_active_instance))->get_x()-((Active*)get_instance(levelhandcarfloor1_1417_instances, it.current_index, default_active_instance))->get_x()));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 1);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y((((Active*)get_instance(levelhandcarfloor1_1417_instances, it.current_index, default_active_instance))->get_y()+((Active*)get_instance(levelhandcarfloor2_1418_instances, it.current_index, default_active_instance))->get_y())*0.5);
        }
        levelhandcartop_1416_instances.clear_selection();
        for (ObjectIterator it(levelhandcartop_1416_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(levelhandcar_1415_instances, it.current_index));
            if (parent == NULL) goto pos_end_1493_26_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1493_26_0: ;
        }
        for (ObjectIterator it(levelhandcartop_1416_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_angle(), 1);
        }
        levelhandcarhandle_1414_instances.clear_selection();
        for (ObjectIterator it(levelhandcarhandle_1414_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(levelhandcartop_1416_instances, it.current_index));
            if (parent == NULL) goto pos_end_1493_26_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1493_26_1: ;
        }
        for (ObjectIterator it(levelhandcarhandle_1414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1493_26_end: ;
}
void Frames::event_func_5677()
{
    // event 1494_26
    {
        if (!(group_main_engine_1)) goto event_1494_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (90))) goto event_1494_26_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_action_x()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-35+sin_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-14);
            ((Active*)*it)->set_y(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_action_y()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-14-sin_deg(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-35);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(levelhandcar_1415_instances, default_active_instance))->get_action_x()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, default_active_instance))->alterables->values.get(0))*-35+sin_deg(((Active*)get_instance(levelhandcar_1415_instances, default_active_instance))->alterables->values.get(0))*-14);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(levelhandcar_1415_instances, default_active_instance))->get_action_y()+cos_deg(((Active*)get_instance(levelhandcar_1415_instances, default_active_instance))->alterables->values.get(0))*-14-sin_deg(((Active*)get_instance(levelhandcar_1415_instances, default_active_instance))->alterables->values.get(0))*-35);
    }
    event_1494_26_end: ;
}
void Frames::event_func_5678()
{
    // event 1495_26
    {
        if (!(group_main_engine_1)) goto event_1495_26_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(41))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(128))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1495_26_end;
        levelhandcarhandle_1414_instances.clear_selection();
        for (ObjectIterator it(levelhandcarhandle_1414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_frame()*30)*-28+((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->get_angle(), 1);
        }
    }
    event_1495_26_end: ;
}
void Frames::event_func_5679()
{
    // event 1496_26
    {
        if (!(group_main_engine_1)) goto event_1496_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (90))) goto event_1496_26_end;
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances, it.current_index));
            if (parent == NULL) goto pos_end_1496_26_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1496_26_0: ;
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(levelhandcar_1415_instances, it.current_index, default_active_instance))->alterables->values.get(0), 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, ((Active*)get_instance(levelhandcar_1415_instances, default_active_instance))->alterables->values.get(0));
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
    }
    event_1496_26_end: ;
}
void Frames::event_func_5680()
{
    // event 1497_26
    {
        if (!(group_main_engine_1)) goto event_1497_26_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickelevator2_1398_instances)) goto event_1497_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1497_26_end;
        if (!(((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->flags.is_off(1))) goto event_1497_26_end;
        ((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(gimmickelevator_1397_instances))->force_animation(1);
        media.play_id(SOUND_COMMON_LIFT_264, -1, 0);
    }
    event_1497_26_end: ;
}
void Frames::event_func_5681()
{
    // event 1498_26
    {
        if (!(group_main_engine_1)) goto event_1498_26_end;
        if (!(((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->flags.is_on(1))) goto event_1498_26_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickelevator2_1398_instances)) goto event_1498_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1498_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, ((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerskinsash_418_instances))->set_y(((Active*)get_instance(playerskinsash_418_instances))->get_y()+((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_y(((Active*)get_instance(playerskinsashhair_417_instances))->get_y()+((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(0));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(0));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(0));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(0));
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
    }
    event_1498_26_end: ;
}
void Frames::event_func_5682()
{
    // event 1499_26
    {
        if (!(group_main_engine_1)) goto event_1499_26_end;
        if (!(((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->flags.is_on(1))) goto event_1499_26_end;
        ((Active*)get_instance(gimmickelevator_1397_instances))->set_y(((Active*)get_instance(gimmickelevator2_1398_instances))->get_y());
        ((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.add(9, ((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(16));
    }
    event_1499_26_end: ;
}
void Frames::event_func_5683()
{
    // event 1500_26
    {
        if (!(group_main_engine_1)) goto event_1500_26_end;
        if (!(((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->flags.is_on(1))) goto event_1500_26_end;
        if (!((((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(9)) < (((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(17)))) goto event_1500_26_end;
        ((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.set(16, get_min(((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(16)+0.02, 12));
    }
    event_1500_26_end: ;
}
void Frames::event_func_5684()
{
    // event 1501_26
    {
        if (!(group_main_engine_1)) goto event_1501_26_end;
        if (!(((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->flags.is_on(1))) goto event_1501_26_end;
        if (!((((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(9)) >= (((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(17)))) goto event_1501_26_end;
        ((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.set(16, get_max(((Active*)get_instance(gimmickelevator2_1398_instances))->alterables->values.get(16)-0.06, 0));
    }
    event_1501_26_end: ;
}
void Frames::event_func_5685()
{
    // event 1502_26
    {
        if (!(group_main_engine_1)) goto event_1502_26_end;
        gimmickelevator2_1398_instances.clear_selection();
        for (ObjectIterator it(gimmickelevator2_1398_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (((Active*)*it)->alterables->values.get(17)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (0))) { it.deselect(); continue; }
        }
        if (!gimmickelevator2_1398_instances.has_selection()) goto event_1502_26_end;
        if (not_always_1502_26 > loop_count) {
            not_always_1502_26 = loop_count + 2;
            goto event_1502_26_end;
        }
        not_always_1502_26 = loop_count + 2;
        gimmickelevator_1397_instances.clear_selection();
        for (ObjectIterator it(gimmickelevator_1397_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        media.stop_sample(SOUND_COMMON_LIFT_264);
    }
    event_1502_26_end: ;
}
void Frames::event_func_5686()
{
    // event 1604_26
    bool or_result_1604_26 = false;
    bool or_temp_result_1604_26_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1604_26_0_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1604_26_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_7)) goto or_event_1604_26_0_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1604_26_0_end;
        or_result_1604_26 = true;
        or_temp_result_1604_26_0 = true;
    }
    or_event_1604_26_0_end: ;
    enemyhopper_1168_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1604_26_0) {
        enemyhopper_1168_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1604_26
    bool or_temp_result_1604_26_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1604_26_1_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1604_26_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemyhopper_1168_instances, qualifier_8)) goto or_event_1604_26_1_end;
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1604_26_1_end;
        or_result_1604_26 = true;
        or_temp_result_1604_26_1 = true;
    }
    or_event_1604_26_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1604_26_1) {
        enemyhopper_1168_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1604_26
    bool or_temp_result_1604_26_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1604_26_2_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto or_event_1604_26_2_end;
        or_result_1604_26 = true;
        or_temp_result_1604_26_2 = true;
        or_event_1604_26_2_end: ;
        if (or_temp_result_1604_26_2) {
            enemyhopper_1168_instances.save_selection();
        }
        if (!or_result_1604_26) goto or_final_or_event_1604_26_2_end;
        qualifier_8.empty_selection();
        enemyhopper_1168_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1604_26_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1604_26_0 || or_temp_result_1604_26_1 || or_temp_result_1604_26_2) {
            enemyhopper_1168_instances.restore_selection();
        }
        if (or_temp_result_1604_26_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1604_26_0; single_instance_1604_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1604_26_0 == NULL)
                    single_instance_1604_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1604_26_0))->set_direction(2);
        FrameObject * single_instance_1604_26_1; single_instance_1604_26_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhopper_1168_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1604_26_1 == NULL)
                    single_instance_1604_26_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_26();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1604_26_2_end: ;
}
void Frames::event_func_5687()
{
    // event 1617_26
    {
        if (!(group_main_engine_1)) goto event_1617_26_end;
        ((Active*)get_instance(enemyextractorbase_1176_instances))->force_animation(((Active*)get_instance(enemyextractorhead_1177_instances, default_active_instance))->current_animation);
        ((Active*)get_instance(enemyextractorbase_1176_instances))->force_frame(((Active*)get_instance(enemyextractorhead_1177_instances, default_active_instance))->get_frame());
        ((Active*)get_instance(enemyextractorbase_1176_instances))->set_direction(((Active*)get_instance(enemyextractorhead_1177_instances, default_active_instance))->get_direction());
        {
            FrameObject * parent = ((Active*)get_instance(enemyextractorhead_1177_instances));
            if (parent == NULL) goto pos_end_1617_26_0;
            ((Active*)get_instance(enemyextractorbase_1176_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1617_26_0: ;
        }
    }
    event_1617_26_end: ;
}
void Frames::event_func_5688()
{
    // event 1624_26
    {
        if (!(group_main_engine_1)) goto event_1624_26_end;
        enemyextractorhead_1177_instances.clear_selection();
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (17))) { it.deselect(); continue; }
        }
        if (!enemyextractorhead_1177_instances.has_selection()) goto event_1624_26_end;
        for (ObjectIterator it(enemyextractorhead_1177_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        FrameObject * single_instance_1624_26_0; single_instance_1624_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyextractorhead_1177_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1277(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1624_26_0 == NULL)
                    single_instance_1624_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1624_26_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1624_26_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1624_26_0))->get_movement()->set_speed(((Active*)single_instance_1624_26_0)->get_movement()->get_speed()-10+randrange(20));
        media.play_id(SOUND_SERPENT_MOVE_2_35, -1, 1);
    }
    event_1624_26_end: ;
}
void Frames::event_func_5689()
{
    // event 1654_26
    {
        if (!(group_main_engine_1)) goto event_1654_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1654_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(3)*(2+((Active*)*it)->alterables->flags.get(13)*2));
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1654_26_end: ;
}
void Frames::event_func_5690()
{
    // event 1655_26
    {
        if (!(group_main_engine_1)) goto event_1655_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1655_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1655_26_end: ;
}
void Frames::event_func_5691()
{
    // event 1656_26
    bool or_result_1656_26 = false;
    bool or_temp_result_1656_26_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1656_26_0_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1656_26_0_end;
        if (!(test_obstacle(((Active*)get_single(enemyfirespitter_1385_instances, default_active_instance))->get_x(), ((Active*)get_single(enemyfirespitter_1385_instances, default_active_instance))->get_box_index(3)))) goto or_event_1656_26_0_end;
        or_result_1656_26 = true;
        or_temp_result_1656_26_0 = true;
    }
    or_event_1656_26_0_end: ;
    enemyfirespitter_1385_instances.clear_saved_selection();
    if (or_temp_result_1656_26_0) {
        enemyfirespitter_1385_instances.save_selection();
    }
    // event 1656_26
    bool or_temp_result_1656_26_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1656_26_1_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1656_26_1_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyfirespitter_1385_instances, qualifier_7)) goto or_event_1656_26_1_end;
        or_result_1656_26 = true;
        or_temp_result_1656_26_1 = true;
    }
    or_event_1656_26_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1656_26_1) {
        enemyfirespitter_1385_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1656_26
    bool or_temp_result_1656_26_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1656_26_2_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-80)) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1656_26_2_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemyfirespitter_1385_instances, qualifier_8)) goto or_event_1656_26_2_end;
        or_result_1656_26 = true;
        or_temp_result_1656_26_2 = true;
        or_event_1656_26_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1656_26_2) {
            enemyfirespitter_1385_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1656_26) goto or_final_or_event_1656_26_2_end;
        qualifier_8.empty_selection();
        enemyfirespitter_1385_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1656_26_0 || or_temp_result_1656_26_1 || or_temp_result_1656_26_2) {
            enemyfirespitter_1385_instances.restore_selection();
        }
        if (or_temp_result_1656_26_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1656_26_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    or_final_or_event_1656_26_2_end: ;
}
void Frames::event_func_5692()
{
    // event 1657_26
    {
        if (!(group_main_engine_1)) goto event_1657_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(14))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1657_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(14);
        }
    }
    event_1657_26_end: ;
}
void Frames::event_func_5693()
{
    // event 1660_26
    {
        if (!(group_main_engine_1)) goto event_1660_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1660_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1660_26_end: ;
}
void Frames::event_func_5694()
{
    // event 1661_26
    {
        if (!(group_main_engine_1)) goto event_1661_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1661_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1661_26_end: ;
}
void Frames::event_func_5695()
{
    // event 1662_26
    bool or_result_1662_26 = false;
    bool or_temp_result_1662_26_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1662_26_0_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (50))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1662_26_0_end;
        or_result_1662_26 = true;
        or_temp_result_1662_26_0 = true;
    }
    or_event_1662_26_0_end: ;
    enemyfirespitter_1385_instances.clear_saved_selection();
    if (or_temp_result_1662_26_0) {
        enemyfirespitter_1385_instances.save_selection();
    }
    // event 1662_26
    bool or_temp_result_1662_26_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1662_26_1_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (30))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1662_26_1_end;
        or_result_1662_26 = true;
        or_temp_result_1662_26_1 = true;
        or_event_1662_26_1_end: ;
        if (or_temp_result_1662_26_1) {
            enemyfirespitter_1385_instances.save_selection();
        }
        if (!or_result_1662_26) goto or_final_or_event_1662_26_1_end;
        enemyfirespitter_1385_instances.empty_selection();
        if (or_temp_result_1662_26_0 || or_temp_result_1662_26_1) {
            enemyfirespitter_1385_instances.restore_selection();
        }
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1+((Active*)*it)->alterables->flags.get(13));
        }
    }
    or_final_or_event_1662_26_1_end: ;
}
void Frames::event_func_5696()
{
    // event 1663_26
    {
        if (!(group_main_engine_1)) goto event_1663_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (50))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1663_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1663_26_end: ;
}
void Frames::event_func_5697()
{
    // event 1664_26
    {
        if (!(group_main_engine_1)) goto event_1664_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (50))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1664_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1664_26_end: ;
}
void Frames::event_func_5698()
{
    // event 1665_26
    {
        if (!(group_main_engine_1)) goto event_1665_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (51))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1665_26_end;
        media.play_id(SOUND_COMMON_FLAMETHROWER1_70, -1, 1);
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 52);
        }
    }
    event_1665_26_end: ;
}
void Frames::event_func_5699()
{
    // event 1666_26
    {
        if (!(group_main_engine_1)) goto event_1666_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (50))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1666_26_end;
        if (!((((Active*)get_single(enemyfirespitter_1385_instances, default_active_instance))->alterables->values.get(4)%math_helper%3) == (0))) goto event_1666_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(10)) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1666_26_end;
        FrameObject * single_instance_1666_26_0; single_instance_1666_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossflame_1199(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1666_26_0 == NULL)
                    single_instance_1666_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1666_26_0))->alterables->values.set(0, ((Active*)single_instance_1666_26_0)->get_x());
        ((Active*)((Active*)single_instance_1666_26_0))->alterables->values.set(1, ((Active*)single_instance_1666_26_0)->get_y());
        ((Active*)((Active*)single_instance_1666_26_0))->alterables->values.set(2, ((Active*)get_single(enemyfirespitter_1385_instances, default_active_instance))->alterables->values.get(3)*(5+((Active*)get_single(enemyfirespitter_1385_instances, default_active_instance))->alterables->flags.get(13)*2));
        ((Active*)((Active*)single_instance_1666_26_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1666_26_0))->alterables->values.set(4, ((Active*)get_single(enemyfirespitter_1385_instances))->get_fixed());
    }
    event_1666_26_end: ;
}
void Frames::event_func_5700()
{
    // event 1667_26
    {
        if (!(group_main_engine_1)) goto event_1667_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (50))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1667_26_end;
        if (!((((Active*)get_single(enemyfirespitter_1385_instances, default_active_instance))->alterables->values.get(4)%math_helper%3) == (0))) goto event_1667_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(10))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1667_26_end;
        FrameObject * single_instance_1667_26_0; single_instance_1667_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossflame_1199(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1667_26_0 == NULL)
                    single_instance_1667_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1667_26_0))->alterables->values.set(0, ((Active*)single_instance_1667_26_0)->get_x());
        ((Active*)((Active*)single_instance_1667_26_0))->alterables->values.set(1, ((Active*)single_instance_1667_26_0)->get_y());
        ((Active*)((Active*)single_instance_1667_26_0))->alterables->values.set(2, ((Active*)get_single(enemyfirespitter_1385_instances, default_active_instance))->alterables->values.get(3)*(3-((Active*)get_single(enemyfirespitter_1385_instances, default_active_instance))->get_frame()*0.6)*-1);
        ((Active*)((Active*)single_instance_1667_26_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1667_26_0))->alterables->values.set(4, ((Active*)get_single(enemyfirespitter_1385_instances))->get_fixed());
    }
    event_1667_26_end: ;
}
void Frames::event_func_5701()
{
    // event 1668_26
    {
        if (!(group_main_engine_1)) goto event_1668_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (210))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1668_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -90);
        }
    }
    event_1668_26_end: ;
}
void Frames::event_func_5702()
{
    // event 1669_26
    {
        if (!(group_main_engine_1)) goto event_1669_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1669_26_end;
        FrameObject * single_instance_1669_26_0; single_instance_1669_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                int x_off; x_off = 0;
                int y_off; y_off = 0;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_enemyfirespitterbase_1280(parent->x + x_off, parent->y + y_off), parent->layer);
                if (single_instance_1669_26_0 == NULL)
                    single_instance_1669_26_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1669_26_0))->move_back();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.disable(16);
        }
    }
    event_1669_26_end: ;
}
void Frames::event_func_5703()
{
    // event 1670_26
    {
        if (!(group_main_engine_1)) goto event_1670_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1670_26_end;
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(50+randrange(30));
            ((Active*)*it)->force_frame(16);
        }
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->set_angle(0, 0);
        }
    }
    event_1670_26_end: ;
}
void Frames::event_func_5704()
{
    // event 1671_26
    bool or_result_1671_26 = false;
    bool or_temp_result_1671_26_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1671_26_0_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1671_26_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyfirespitter_1385_instances, qualifier_7)) goto or_event_1671_26_0_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1671_26_0_end;
        or_result_1671_26 = true;
        or_temp_result_1671_26_0 = true;
    }
    or_event_1671_26_0_end: ;
    enemyfirespitter_1385_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1671_26_0) {
        enemyfirespitter_1385_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1671_26
    bool or_temp_result_1671_26_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1671_26_1_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1671_26_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemyfirespitter_1385_instances, qualifier_8)) goto or_event_1671_26_1_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1671_26_1_end;
        or_result_1671_26 = true;
        or_temp_result_1671_26_1 = true;
    }
    or_event_1671_26_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1671_26_1) {
        enemyfirespitter_1385_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1671_26
    bool or_temp_result_1671_26_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1671_26_2_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto or_event_1671_26_2_end;
        or_result_1671_26 = true;
        or_temp_result_1671_26_2 = true;
        or_event_1671_26_2_end: ;
        if (or_temp_result_1671_26_2) {
            enemyfirespitter_1385_instances.save_selection();
        }
        if (!or_result_1671_26) goto or_final_or_event_1671_26_2_end;
        qualifier_8.empty_selection();
        enemyfirespitter_1385_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1671_26_0 || or_temp_result_1671_26_1 || or_temp_result_1671_26_2) {
            enemyfirespitter_1385_instances.restore_selection();
        }
        if (or_temp_result_1671_26_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1671_26_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1671_26_0; single_instance_1671_26_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1671_26_0 == NULL)
                    single_instance_1671_26_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1671_26_0))->set_direction(3);
        FrameObject * single_instance_1671_26_1; single_instance_1671_26_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyfirespitter_1385_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1671_26_1 == NULL)
                    single_instance_1671_26_1 = new_obj;
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
                loop_spawndebris_26();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1671_26_2_end: ;
}
void Frames::event_func_5705()
{
    // event 1673_26
    {
        if (!(group_main_engine_1)) goto event_1673_26_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1673_26_end;
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1673_26_end: ;
}
void Frames::event_func_5706()
{
    // event 1674_26
    {
        if (!(group_main_engine_1)) goto event_1674_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width+20))) goto event_1674_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1674_26_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_off(1))) goto event_1674_26_end;
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
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(0);
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(1);
    }
    event_1674_26_end: ;
}
void Frames::event_func_5707()
{
    // event 1675_26
    {
        if (!(group_main_engine_1)) goto event_1675_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width+90))) goto event_1675_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
    }
    event_1675_26_end: ;
}
void Frames::event_func_5708()
{
    // event 1677_26
    {
        if (!(group_main_engine_1)) goto event_1677_26_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1677_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1677_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 2);
    }
    event_1677_26_end: ;
}
void Frames::event_func_5709()
{
    // event 1680_26
    {
        if (!(group_main_engine_1)) goto event_1680_26_end;
        if (!((global_values->get(4)) >= (10))) goto event_1680_26_end;
        if (once_condition_1680_26) goto event_1680_26_end;
        once_condition_1680_26 = true;
        bossclawbase_1393_instances.clear_selection();
        for (ObjectIterator it(bossclawbase_1393_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        backgroundwall_1296_instances.clear_selection();
        for (ObjectIterator it(backgroundwall_1296_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablecolumn1_1383_instances.clear_selection();
        for (ObjectIterator it(breakablecolumn1_1383_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablecolumn2_1382_instances.clear_selection();
        for (ObjectIterator it(breakablecolumn2_1382_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablerelicwall_1384_instances.clear_selection();
        for (ObjectIterator it(breakablerelicwall_1384_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        shrine2_1391_instances.clear_selection();
        for (ObjectIterator it(shrine2_1391_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        breakablerelicwalldebris_1279_instances.clear_selection();
        for (ObjectIterator it(breakablerelicwalldebris_1279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        backgroundwall2_1297_instances.clear_selection();
        for (ObjectIterator it(backgroundwall2_1297_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossclawhitbox_1388_instances.clear_selection();
        for (ObjectIterator it(bossclawhitbox_1388_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        active_1396_instances.clear_selection();
        for (ObjectIterator it(active_1396_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        caravanwheel_1386_instances.clear_selection();
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1680_26_end: ;
}
void Frames::event_func_5710()
{
    // event 1682_26
    {
        if (!(group_main_engine_1)) goto event_1682_26_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1682_26_end;
        if (once_condition_1682_26) goto event_1682_26_end;
        once_condition_1682_26 = true;
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
    event_1682_26_end: ;
}
void Frames::event_func_5711()
{
    // event 1687_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1)) goto event_1687_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1687_26_end;
        global_values->set(1, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
    }
    event_1687_26_end: ;
}
void Frames::event_func_5712()
{
    // event 1691_26
    {
        if (!(group_main_engine_1)) goto event_1691_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1691_26_end: ;
}
void Frames::event_func_5713()
{
    // event 1692_26
    {
        if (!(group_main_engine_1)) goto event_1692_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1692_26_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.4, 12));
        }
    }
    event_1692_26_end: ;
}
void Frames::event_func_5714()
{
    // event 1693_26
    {
        if (!(group_main_engine_1)) goto event_1693_26_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
        }
        if (!npcmerc_1283_instances.has_selection()) goto event_1693_26_end;
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1693_26_end: ;
}
void Frames::event_func_5715()
{
    // event 1694_26
    {
        if (!(group_main_engine_1)) goto event_1694_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1694_26_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1694_26_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, cameratriggerboss_424_instances)) goto event_1694_26_end;
        caravanengine_1395_instances.clear_selection();
        for (ObjectIterator it(caravanengine_1395_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!caravanengine_1395_instances.has_selection()) goto event_1694_26_end;
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
        if (!group_main_engine_level_specific_methods_cutscenes_claw_appears_1) {
            group_main_engine_level_specific_methods_cutscenes_claw_appears_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        global_values->set(3, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
    }
    event_1694_26_end: ;
}
void Frames::event_func_5716()
{
    // event 1695_26
    {
        if (!(group_main_engine_1)) goto event_1695_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1695_26_end;
        if (once_condition_1695_26) goto event_1695_26_end;
        once_condition_1695_26 = true;
        rmalternatepath2_1379_instances.clear_selection();
        for (ObjectIterator it(rmalternatepath2_1379_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1695_26_end: ;
}
void Frames::event_func_5717()
{
    // event 1696_26
    {
        if (!(group_main_engine_1)) goto event_1696_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1696_26_end;
        if (once_condition_1696_26) goto event_1696_26_end;
        once_condition_1696_26 = true;
        rmalternatepath_1420_instances.clear_selection();
        for (ObjectIterator it(rmalternatepath_1420_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1696_26_end: ;
}
void Frames::event_func_5718()
{
    // event 1697_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1697_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1697_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-1, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-1, 0));
        }
    }
    event_1697_26_end: ;
}
void Frames::event_func_5719()
{
    // event 1698_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1698_26_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (80))) goto event_1698_26_end;
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
    event_1698_26_end: ;
}
void Frames::event_func_5720()
{
    // event 1699_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1699_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1699_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_single(shrine3_1390_instances, default_active_instance))->get_x()-80))) goto event_1699_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_1699_26_end: ;
}
void Frames::event_func_5721()
{
    // event 1700_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1700_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1700_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) >= (((Active*)get_single(shrine3_1390_instances, default_active_instance))->get_x()-80))) goto event_1700_26_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
    }
    event_1700_26_end: ;
}
void Frames::event_func_5722()
{
    // event 1701_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1701_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1701_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1701_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (50))) goto event_1701_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(28);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
    }
    event_1701_26_end: ;
}
void Frames::event_func_5723()
{
    // event 1702_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1702_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1702_26_end;
        if (!((global_values->get(3)) > (80))) goto event_1702_26_end;
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1702_26_end: ;
}
void Frames::event_func_5724()
{
    // event 1703_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1703_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1703_26_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(7)) <= (0))) goto event_1703_26_end;
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (300))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1703_26_end;
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1703_26_end: ;
}
void Frames::event_func_5725()
{
    // event 1704_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1704_26_end;
        every_1704_26 += manager.dt;
        if (every_1704_26 < 0.4) goto event_1704_26_end;
        every_1704_26 -= 0.4;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (100))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1704_26_end;
        media.play_id(SOUND_TUNNELING_2_149, -1, 1);
    }
    event_1704_26_end: ;
}
void Frames::event_func_5726()
{
    // event 1705_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1705_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (100))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1705_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1705_26_end: ;
}
void Frames::event_func_5727()
{
    // event 1706_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1706_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (50))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1706_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1706_26_end: ;
}
void Frames::event_func_5728()
{
    // event 1707_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1707_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (70))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1707_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_1707_26_end: ;
}
void Frames::event_func_5729()
{
    // event 1708_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1708_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (100))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1708_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 12));
        backgroundwall_1296_instances.clear_selection();
        spread_value(backgroundwall_1296_instances, 0, 0);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossclawpiece1_1281_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece1_1281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        {
            loop_destroy_wall_running = true;
            int times = int(32);
            loop_destroy_wall_index = 0;
            while (loop_destroy_wall_index < times) {
                loop_destroy_wall_26();
                if (!loop_destroy_wall_running) break;
                loop_destroy_wall_index++;
            }
        }
    }
    event_1708_26_end: ;
}
void Frames::event_func_5730()
{
    // event 1711_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1711_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (100))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1711_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)-0.1, 0));
        backgroundwall_1296_instances.clear_selection();
        for (ObjectIterator it(backgroundwall_1296_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1711_26_end: ;
}
void Frames::event_func_5731()
{
    // event 1712_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1712_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (105))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (130))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1712_26_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 1);
    }
    event_1712_26_end: ;
}
void Frames::event_func_5732()
{
    // event 1713_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1713_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (165))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1713_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1713_26_end;
        media.play_id(SOUND_LILAC_GASP1_95, -1, 1);
    }
    event_1713_26_end: ;
}
void Frames::event_func_5733()
{
    // event 1714_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1714_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (160))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1714_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(27);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(27);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(27);
        }
    }
    event_1714_26_end: ;
}
void Frames::event_func_5734()
{
    // event 1715_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1715_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (160))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1715_26_end;
        media.play_id(SOUND_FLANGE_2_68, -1, 1);
    }
    event_1715_26_end: ;
}
void Frames::event_func_5735()
{
    // event 1716_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1716_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (160))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (210))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1716_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_single(shrine3_1390_instances, default_active_instance))->get_y()-30))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1716_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(shrine3_1390_instances, it.current_index, default_active_instance))->get_y()-30);
        }
    }
    event_1716_26_end: ;
}
void Frames::event_func_5736()
{
    // event 1717_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1717_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (180))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1717_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1717_26_end: ;
}
void Frames::event_func_5737()
{
    // event 1718_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1718_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (210))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1718_26_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1718_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1718_26_end: ;
}
void Frames::event_func_5738()
{
    // event 1719_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1719_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (210))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1719_26_end;
        if (!((global_values->get(3)%math_helper%4) == (2))) goto event_1719_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1719_26_end: ;
}
void Frames::event_func_5739()
{
    // event 1720_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1720_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (190))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1720_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1720_26_end: ;
}
void Frames::event_func_5740()
{
    // event 1721_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1721_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (190))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (210))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1721_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0))) goto event_1721_26_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 1);
    }
    event_1721_26_end: ;
}
void Frames::event_func_5741()
{
    // event 1722_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1722_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (210))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1722_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 12);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -5);
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -6);
        }
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(5, 0);
    }
    event_1722_26_end: ;
}
void Frames::event_func_5742()
{
    // event 1723_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1723_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (210))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1723_26_end;
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(0);
        }
    }
    event_1723_26_end: ;
}
void Frames::event_func_5743()
{
    // event 1724_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1724_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (12))) goto event_1724_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(6, 0.5);
    }
    event_1724_26_end: ;
}
void Frames::event_func_5744()
{
    // event 1725_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1725_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (210))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1725_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(shrine2_1391_instances, default_active_instance))->get_y()-120))) { it.deselect(); continue; }
        }
        if (!bossclaw_1389_instances.has_selection()) goto event_1725_26_end;
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(shrine2_1391_instances, it.current_index, default_active_instance))->get_y()-120);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1725_26_end: ;
}
void Frames::event_func_5745()
{
    // event 1726_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1726_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (210))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (260))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1726_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1726_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (50))) goto event_1726_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(15);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 51);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(15);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(15);
        }
    }
    event_1726_26_end: ;
}
void Frames::event_func_5746()
{
    // event 1727_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1727_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1727_26_end;
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.1, 12));
        }
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+1, ((Active*)get_single(bossclawpiece4_1278_instances, it.current_index, default_active_instance))->alterables->values.get(1)));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-1, 0);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-1, 0);
        }
    }
    event_1727_26_end: ;
}
void Frames::event_func_5747()
{
    // event 1728_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1728_26_end;
        if (!((((Active*)get_instance(bossclaw_1389_instances, default_active_instance))->get_angle()) > (90))) goto event_1728_26_end;
        if (!((((Active*)get_instance(bossclaw_1389_instances, default_active_instance))->get_angle()) < (270))) goto event_1728_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1, 0);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+1, 0);
        }
    }
    event_1728_26_end: ;
}
void Frames::event_func_5748()
{
    // event 1729_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1729_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1729_26_end;
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1.5))) { it.deselect(); continue; }
        }
        if (!bossclawpiece4_1278_instances.has_selection()) goto event_1729_26_end;
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.1, 12));
        }
    }
    event_1729_26_end: ;
}
void Frames::event_func_5749()
{
    // event 1730_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1730_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (252))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1730_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1730_26_end;
        media.play_id(SOUND_LILAC_SCREAMNO_96, -1, 1);
    }
    event_1730_26_end: ;
}
void Frames::event_func_5750()
{
    // event 1731_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1731_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (245))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1731_26_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(27);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(27);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(27);
        }
    }
    event_1731_26_end: ;
}
void Frames::event_func_5751()
{
    // event 1732_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1732_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (275))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1732_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1732_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(13, 0);
        media.play_id(SOUND_LILAC_COMETSTART_9, -1, 1);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1732_26_end: ;
}
void Frames::event_func_5752()
{
    // event 1733_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1733_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (275))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1733_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1733_26_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 100);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 6);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 2);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_animation();
            ((Active*)*it)->force_animation(2);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_animation();
            ((Active*)*it)->force_animation(2);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->restore_frame();
        ((Active*)get_instance(playerskinsash_418_instances))->restore_speed();
        ((Active*)get_instance(playerskinsash_418_instances))->restore_animation();
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1733_26_end: ;
}
void Frames::event_func_5753()
{
    // event 1734_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1734_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (275))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1734_26_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-40))) goto event_1734_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(player_389_instances))->get_x()+40, ((Active*)get_instance(bossclaw_1389_instances, default_active_instance))->get_x()-80));
    }
    event_1734_26_end: ;
}
void Frames::event_func_5754()
{
    // event 1735_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1735_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (280))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1735_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_1735_26_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, 0);
    }
    event_1735_26_end: ;
}
void Frames::event_func_5755()
{
    // event 1736_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1736_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1736_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1736_26_end;
        playersensorbottombig_397_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1736_26_end;
        if (!((((Active*)get_instance(playersensorbottombig_397_instances))->get_x()) > (((Active*)get_single(objectjumppad_530_instances, default_active_instance))->get_x()))) goto event_1736_26_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1736_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (48))) goto event_1736_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1736_26_end: ;
}
void Frames::event_func_5756()
{
    // event 1737_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1737_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1737_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1737_26_end;
        playersensorbottombig_397_instances.clear_selection();
        objectjumppad_530_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1737_26_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (14))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1737_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 48);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(objectjumppad_530_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->flags.disable(8);
        }
    }
    event_1737_26_end: ;
}
void Frames::event_func_5757()
{
    // event 1738_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1738_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1738_26_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (7))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1738_26_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
    }
    event_1738_26_end: ;
}
void Frames::event_func_5758()
{
    // event 1739_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1739_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1739_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1739_26_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, objectjumppad_530_instances)) goto event_1739_26_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
    }
    event_1739_26_end: ;
}
void Frames::event_func_5759()
{
    // event 1740_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1740_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1740_26_end;
        backgroundwall2_1297_instances.clear_selection();
        for (ObjectIterator it(backgroundwall2_1297_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossclawpiece4_1278_instances, default_active_instance))->get_x()-48))) { it.deselect(); continue; }
        }
        if (!backgroundwall2_1297_instances.has_selection()) goto event_1740_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
        breakableruinspiece_1102_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(backgroundwall2_1297_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 16, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 32, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 48, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 64, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 80, parent->y + 12), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 16, parent->y + 24), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 32, parent->y + 24), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 48, parent->y + 24), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 64, parent->y + 24), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableruinspiece_1102(parent->x + 80, parent->y + 24), parent->layer);
                breakableruinspiece_1102_instances.add_back();
            }
        }
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3.0+randrange(6.0));
            ((Active*)*it)->alterables->values.set(1, -1.0+randrange(4.0));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(4)*90, 0);
        }
        effectsexplosion01_309_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(backgroundwall2_1297_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 16, parent->y + 16), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 33, parent->y + 35), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 52, parent->y + 16), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 80, parent->y + 36), parent->layer);
                effectsexplosion01_309_instances.add_back();
            }
        }
        for (ObjectIterator it(backgroundwall2_1297_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1740_26_end: ;
}
void Frames::event_func_5760()
{
    // event 1741_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1741_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1741_26_end;
        breakablecolumn1_1383_instances.clear_selection();
        for (ObjectIterator it(breakablecolumn1_1383_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossclawpiece4_1278_instances, default_active_instance))->get_x()-48))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!breakablecolumn1_1383_instances.has_selection()) goto event_1741_26_end;
        for (ObjectIterator it(breakablecolumn1_1383_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(0, 8);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
    }
    event_1741_26_end: ;
}
void Frames::event_func_5761()
{
    // event 1742_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1742_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1742_26_end;
        breakablecolumn2_1382_instances.clear_selection();
        for (ObjectIterator it(breakablecolumn2_1382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossclawpiece4_1278_instances, default_active_instance))->get_x()-48))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!breakablecolumn2_1382_instances.has_selection()) goto event_1742_26_end;
        for (ObjectIterator it(breakablecolumn2_1382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(0, 7+randrange(4));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1742_26_end: ;
}
void Frames::event_func_5762()
{
    // event 1743_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1743_26_end;
        breakablecolumn1_1383_instances.clear_selection();
        for (ObjectIterator it(breakablecolumn1_1383_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablecolumn1_1383_instances.has_selection()) goto event_1743_26_end;
        for (ObjectIterator it(breakablecolumn1_1383_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.add(1, 0.2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1743_26_end: ;
}
void Frames::event_func_5763()
{
    // event 1744_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1744_26_end;
        breakablecolumn2_1382_instances.clear_selection();
        for (ObjectIterator it(breakablecolumn2_1382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!breakablecolumn2_1382_instances.has_selection()) goto event_1744_26_end;
        for (ObjectIterator it(breakablecolumn2_1382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.add(1, 0.2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1744_26_end: ;
}
void Frames::event_func_5764()
{
    // event 1747_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1747_26_end;
        shrine3_1390_instances.clear_selection();
        for (ObjectIterator it(shrine3_1390_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (230))) { it.deselect(); continue; }
        }
        if (!shrine3_1390_instances.has_selection()) goto event_1747_26_end;
        breakablerelicwall_1384_instances.clear_selection();
        for (ObjectIterator it(breakablerelicwall_1384_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bossclawpiece4_1278_instances, default_active_instance))->get_x()-48))) { it.deselect(); continue; }
        }
        if (!breakablerelicwall_1384_instances.has_selection()) goto event_1747_26_end;
        for (ObjectIterator it(breakablerelicwall_1384_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        {
            loop_ceiling_crush_running = true;
            int times = int(13);
            loop_ceiling_crush_index = 0;
            while (loop_ceiling_crush_index < times) {
                loop_ceiling_crush_26();
                if (!loop_ceiling_crush_running) break;
                loop_ceiling_crush_index++;
            }
        }
    }
    event_1747_26_end: ;
}
void Frames::event_func_5765()
{
    // event 1749_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1749_26_end;
        breakablerelicwall_1384_instances.clear_selection();
        for (ObjectIterator it(breakablerelicwall_1384_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (13))) { it.deselect(); continue; }
        }
        if (!breakablerelicwall_1384_instances.has_selection()) goto event_1749_26_end;
        for (ObjectIterator it(breakablerelicwall_1384_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1749_26_end: ;
}
void Frames::event_func_5766()
{
    // event 1750_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1750_26_end;
        breakablerelicwalldebris_1279_instances.clear_selection();
        for (ObjectIterator it(breakablerelicwalldebris_1279_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, get_max(((Active*)*it)->alterables->values.get(1), 0));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.2, 15));
        }
    }
    event_1750_26_end: ;
}
void Frames::event_func_5767()
{
    // event 1751_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1751_26_end;
        breakablerelicwalldebris_1279_instances.clear_selection();
        for (ObjectIterator it(breakablerelicwalldebris_1279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (frame_bottom()+20))) { it.deselect(); continue; }
        }
        if (!breakablerelicwalldebris_1279_instances.has_selection()) goto event_1751_26_end;
        for (ObjectIterator it(breakablerelicwalldebris_1279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1751_26_end: ;
}
void Frames::event_func_5768()
{
    // event 1752_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1752_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (3760))) goto event_1752_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1752_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 15);
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 15);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 1);
    }
    event_1752_26_end: ;
}
void Frames::event_func_5769()
{
    // event 1753_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1753_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (3900))) goto event_1753_26_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
        {
            loop_cutscene_end_running = true;
            int times = int(1);
            loop_cutscene_end_index = 0;
            while (loop_cutscene_end_index < times) {
                loop_cutscene_end_13();
                if (!loop_cutscene_end_running) break;
                loop_cutscene_end_index++;
            }
        }
        levelparallaxpiece5_510_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece5_510_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_visible(true);
        }
    }
    event_1753_26_end: ;
}
void Frames::event_func_5770()
{
    // event 1754_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_claw_appears_1)) goto event_1754_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (3900))) goto event_1754_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1754_26_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
            group_main_engine_level_specific_methods_cutscenes_claw_appears_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_caravan_section_1) {
            group_main_engine_level_specific_methods_cutscenes_caravan_section_1 = true;
        }
        levelparallaxpiece1r_1091_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1r_1091_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -1);
        }
        levelparallaxpiece2r_1092_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2r_1092_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -3);
        }
        levelparallaxpiece3r_1093_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece3r_1093_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -4.8);
        }
        levelparallaxpiece4r_1094_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece4r_1094_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -5);
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        levelparallaxpiece5_510_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece5_510_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -8);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 4032);
        bossclaw_1389_instances.clear_selection();
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_angle(90, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
        bossclawtalons_1392_instances.clear_selection();
        for (ObjectIterator it(bossclawtalons_1392_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bossclaw_1389_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
        cameralimitbossleft_421_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossleft_421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(6040);
        }
        cameralimitbossright_422_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossright_422_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(6456);
        }
        cameralimitbossbottom_420_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(672);
        }
        cameralimitbosstop_423_instances.clear_selection();
        for (ObjectIterator it(cameralimitbosstop_423_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(320);
        }
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(6296, 437);
            pos_end_1754_26_0: ;
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(bossclawbase_1393_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossclawbase_1393_instances, it.current_index, default_active_instance))->get_y());
        }
        bossclawpiece4_1278_instances.clear_selection();
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(bossclawbase_1393_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossclawbase_1393_instances, it.current_index, default_active_instance))->get_y());
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        for (ObjectIterator it(bossclawpiece4_1278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        for (ObjectIterator it(bossclaw_1389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1754_26_end: ;
}
void Frames::event_func_5771()
{
    // event 1755_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1755_26_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1755_26_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(2);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1755_26_end: ;
}
void Frames::event_func_5772()
{
    // event 1756_26
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_1 && group_main_engine_level_specific_methods_cutscenes_caravan_section_caravan_section_main_1)) goto event_1756_26_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1756_26_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (0))) goto event_1756_26_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1756_26_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 4032);
    }
    event_1756_26_end: ;
}
