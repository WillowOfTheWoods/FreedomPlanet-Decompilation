#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_11414()
{
    // event 1427_47
    {
        if (!(group_main_engine_1)) goto event_1427_47_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1427_47_end;
        if (not_always_1427_47 > loop_count) {
            not_always_1427_47 = loop_count + 2;
            goto event_1427_47_end;
        }
        not_always_1427_47 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1427_47_end: ;
}
void Frames::event_func_11415()
{
    // event 1428_47
    {
        if (!(group_main_engine_1)) goto event_1428_47_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1428_47_end;
        if (not_always_1428_47 > loop_count) {
            not_always_1428_47 = loop_count + 2;
            goto event_1428_47_end;
        }
        not_always_1428_47 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1428_47_end: ;
}
void Frames::event_func_11416()
{
    // event 1431_47
    {
        if (!(group_main_engine_1)) goto event_1431_47_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1431_47_end;
        if (not_always_1431_47 > loop_count) {
            not_always_1431_47 = loop_count + 2;
            goto event_1431_47_end;
        }
        not_always_1431_47 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1431_47_end: ;
}
void Frames::event_func_11417()
{
    // event 1432_47
    {
        if (!(group_main_engine_1)) goto event_1432_47_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1432_47_end;
        if (not_always_1432_47 > loop_count) {
            not_always_1432_47 = loop_count + 2;
            goto event_1432_47_end;
        }
        not_always_1432_47 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(1, 90);
        }
    }
    event_1432_47_end: ;
}
void Frames::event_func_11418()
{
    // event 1433_47
    {
        if (!(group_main_engine_1)) goto event_1433_47_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1433_47_end;
        if (not_always_1433_47 > loop_count) {
            not_always_1433_47 = loop_count + 2;
            goto event_1433_47_end;
        }
        not_always_1433_47 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 180);
        }
    }
    event_1433_47_end: ;
}
void Frames::event_func_11419()
{
    // event 1434_47
    {
        if (!(group_main_engine_1)) goto event_1434_47_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1434_47_end;
        if (not_always_1434_47 > loop_count) {
            not_always_1434_47 = loop_count + 2;
            goto event_1434_47_end;
        }
        not_always_1434_47 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1434_47_end: ;
}
void Frames::event_func_11420()
{
    // event 1435_47
    {
        if (!(group_main_engine_1)) goto event_1435_47_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1435_47_end;
        if (not_always_1435_47 > loop_count) {
            not_always_1435_47 = loop_count + 2;
            goto event_1435_47_end;
        }
        not_always_1435_47 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(1, 270);
        }
    }
    event_1435_47_end: ;
}
void Frames::event_func_11421()
{
    // event 1436_47
    {
        if (!(group_main_engine_1)) goto event_1436_47_end;
        ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.set(10, ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.get(12));
        ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.set(11, ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.get(13));
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        for (ObjectIterator it(gimmickcrankplatformtop2_2802_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->alterables->values.get(12));
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->alterables->values.get(13));
        }
    }
    event_1436_47_end: ;
}
void Frames::event_func_11422()
{
    // event 1437_47
    {
        if (!(group_main_engine_1)) goto event_1437_47_end;
        ((Active*)get_instance(gimmickcrankplatformarm1_2777_instances))->alterables->values.set(1, 180-(global_values->get(3)*2)%math_helper%360);
        ((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->alterables->values.set(1, 180-(global_values->get(3)*2)%math_helper%360);
        gimmickcrankplatformbase2_2773_instances.clear_selection();
        for (ObjectIterator it(gimmickcrankplatformbase2_2773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270+(global_values->get(3)*2)%math_helper%360);
        }
        gimmickcrankplatformarm2_2774_instances.clear_selection();
        for (ObjectIterator it(gimmickcrankplatformarm2_2774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270+(global_values->get(3)*2)%math_helper%360);
        }
        ((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->alterables->values.set(0, 90+sin_deg(((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->alterables->values.get(1))*45);
        ((Active*)get_instance(gimmickcrankplatformarm1_2777_instances))->alterables->values.set(0, 180+cos_deg(((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->alterables->values.get(1))*-45);
        for (ObjectIterator it(gimmickcrankplatformbase2_2773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 90+sin_deg(((Active*)*it)->alterables->values.get(1))*45);
        }
        for (ObjectIterator it(gimmickcrankplatformarm2_2774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(((Active*)*it)->alterables->values.get(1))*45);
        }
        ((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->set_angle(((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->alterables->values.get(0), 0);
        {
            FrameObject * parent = ((Active*)get_instance(gimmickcrankplatformbase1_2776_instances));
            if (parent == NULL) goto pos_end_1437_47_0;
            ((Active*)get_instance(gimmickcrankplatformarm1_2777_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1437_47_0: ;
        }
        ((Active*)get_instance(gimmickcrankplatformarm1_2777_instances))->set_angle(((Active*)get_instance(gimmickcrankplatformarm1_2777_instances))->alterables->values.get(0), 0);
        {
            FrameObject * parent = ((Active*)get_instance(gimmickcrankplatformbase1_2776_instances));
            if (parent == NULL) goto pos_end_1437_47_1;
            ((Active*)get_instance(gimmickcrankplatformmid1_2775_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1437_47_1: ;
        }
        ((Active*)get_instance(gimmickcrankplatformmid1_2775_instances))->alterables->values.set(0, get_abs(sqrt((((Active*)get_instance(gimmickcrankplatformarm1_2777_instances))->get_action_x()-((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->get_x())*math_helper*2+(((Active*)get_instance(gimmickcrankplatformarm1_2777_instances))->get_action_y()-((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->get_y())*math_helper*2)));
        ((Active*)get_instance(gimmickcrankplatformmid1_2775_instances))->set_x_scale(((Active*)get_instance(gimmickcrankplatformmid1_2775_instances))->alterables->values.get(0)*0.1);
        ((Active*)get_instance(gimmickcrankplatformmid1_2775_instances))->set_angle(0-atan2_deg(((Active*)get_instance(gimmickcrankplatformarm1_2777_instances))->get_action_y()-((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->get_y(), ((Active*)get_instance(gimmickcrankplatformarm1_2777_instances))->get_action_x()-((Active*)get_instance(gimmickcrankplatformbase1_2776_instances))->get_x()), 0);
        for (ObjectIterator it(gimmickcrankplatformbase2_2773_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        for (ObjectIterator it(gimmickcrankplatformarm2_2774_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickcrankplatformbase2_2773_instances, it.current_index));
            if (parent == NULL) goto pos_end_1437_47_2;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1437_47_2: ;
        }
        for (ObjectIterator it(gimmickcrankplatformarm2_2774_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        gimmickcrankplatformmid2_2772_instances.clear_selection();
        for (ObjectIterator it(gimmickcrankplatformmid2_2772_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickcrankplatformbase2_2773_instances, it.current_index));
            if (parent == NULL) goto pos_end_1437_47_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1437_47_3: ;
        }
        for (ObjectIterator it(gimmickcrankplatformmid2_2772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_abs(sqrt((((Active*)get_single(gimmickcrankplatformarm2_2774_instances, it.current_index, default_active_instance))->get_action_x()-((Active*)get_single(gimmickcrankplatformbase2_2773_instances, it.current_index, default_active_instance))->get_x())*math_helper*2+(((Active*)get_single(gimmickcrankplatformarm2_2774_instances, it.current_index, default_active_instance))->get_action_y()-((Active*)get_single(gimmickcrankplatformbase2_2773_instances, it.current_index, default_active_instance))->get_y())*math_helper*2)));
            ((Active*)*it)->set_x_scale(((Active*)*it)->alterables->values.get(0)*0.1);
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_single(gimmickcrankplatformarm2_2774_instances, it.current_index, default_active_instance))->get_action_y()-((Active*)get_single(gimmickcrankplatformbase2_2773_instances, it.current_index, default_active_instance))->get_y(), ((Active*)get_single(gimmickcrankplatformarm2_2774_instances, it.current_index, default_active_instance))->get_action_x()-((Active*)get_single(gimmickcrankplatformbase2_2773_instances, it.current_index, default_active_instance))->get_x()), 0);
        }
        {
            FrameObject * parent = ((Active*)get_instance(gimmickcrankplatformarm1_2777_instances));
            if (parent == NULL) goto pos_end_1437_47_4;
            ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + -32);
            pos_end_1437_47_4: ;
        }
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        for (ObjectIterator it(gimmickcrankplatformtop2_2802_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(gimmickcrankplatformarm2_2774_instances, it.current_index));
            if (parent == NULL) goto pos_end_1437_47_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + -32);
            pos_end_1437_47_5: ;
        }
        ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.set(12, ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->get_x());
        ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.set(13, ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->get_y());
        for (ObjectIterator it(gimmickcrankplatformtop2_2802_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(13, ((Active*)*it)->get_y());
        }
    }
    event_1437_47_end: ;
}
void Frames::event_func_11423()
{
    // event 1438_47
    {
        if (!(group_main_engine_1)) goto event_1438_47_end;
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_y(((Active*)get_instance(playersensorbottombig_397_instances))->get_y()+1);
        ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.set(14, get_floor(((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.get(12))-get_floor(((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.get(10)));
        ((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.set(15, get_floor(((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.get(13))-get_floor(((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.get(11)));
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        for (ObjectIterator it(gimmickcrankplatformtop2_2802_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, get_floor(((Active*)*it)->alterables->values.get(12))-get_floor(((Active*)*it)->alterables->values.get(10)));
            ((Active*)*it)->alterables->values.set(15, get_floor(((Active*)*it)->alterables->values.get(13))-get_floor(((Active*)*it)->alterables->values.get(11)));
        }
    }
    event_1438_47_end: ;
}
void Frames::event_func_11424()
{
    // event 1439_47
    {
        if (!(group_main_engine_1)) goto event_1439_47_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1439_47_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickcrankplatformtop1_2801_instances)) goto event_1439_47_end;
        if (!(((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->flags.is_off(6))) goto event_1439_47_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.get(14));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_instance(gimmickcrankplatformtop1_2801_instances))->alterables->values.get(15));
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(25, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
    }
    event_1439_47_end: ;
}
void Frames::event_func_11425()
{
    // event 1440_47
    {
        if (!(group_main_engine_1)) goto event_1440_47_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1440_47_end;
        playersensorbottombig_397_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, gimmickcrankplatformtop2_2802_instances)) goto event_1440_47_end;
        for (ObjectIterator it(gimmickcrankplatformtop2_2802_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!gimmickcrankplatformtop2_2802_instances.has_selection()) goto event_1440_47_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(gimmickcrankplatformtop2_2802_instances, default_active_instance))->alterables->values.get(14));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_single(gimmickcrankplatformtop2_2802_instances, default_active_instance))->alterables->values.get(15));
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
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 1);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(25, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
    }
    event_1440_47_end: ;
}
void Frames::event_func_11426()
{
    // event 1447_47
    {
        if (!(group_main_engine_1)) goto event_1447_47_end;
        qualifier_31.clear_selection();
        for (QualifierIterator it(qualifier_31); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(0)/math_helper/2.0)%math_helper%8);
            ((Active*)*it)->force_frame(get_abs(int_round(((Active*)*it)->alterables->values.get(1))));
        }
    }
    event_1447_47_end: ;
}
void Frames::event_func_11427()
{
    // event 1448_47
    bool or_result_1448_47 = false;
    bool or_temp_result_1448_47_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1448_47_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto or_event_1448_47_0_end;
        if (!((((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.get(25)) == (0))) goto or_event_1448_47_0_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_31.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_31)) goto or_event_1448_47_0_end;
        for (QualifierIterator it(qualifier_31); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_31.has_selection()) goto or_event_1448_47_0_end;
        or_result_1448_47 = true;
        or_temp_result_1448_47_0 = true;
    }
    or_event_1448_47_0_end: ;
    playersensorbottombig_397_instances.clear_saved_selection();
    qualifier_31.clear_saved_selection();
    if (or_temp_result_1448_47_0) {
        playersensorbottombig_397_instances.save_selection();
        qualifier_31.save_selection();
    }
    // event 1448_47
    bool or_temp_result_1448_47_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1448_47_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto or_event_1448_47_1_end;
        if (!((((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.get(25)) == (0))) goto or_event_1448_47_1_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_31.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_31)) goto or_event_1448_47_1_end;
        for (QualifierIterator it(qualifier_31); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!qualifier_31.has_selection()) goto or_event_1448_47_1_end;
        or_result_1448_47 = true;
        or_temp_result_1448_47_1 = true;
        or_event_1448_47_1_end: ;
        if (or_temp_result_1448_47_1) {
            playersensorbottombig_397_instances.save_selection();
            qualifier_31.save_selection();
        }
        if (!or_result_1448_47) goto or_final_or_event_1448_47_1_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_31.clear_selection();
        if (or_temp_result_1448_47_0 || or_temp_result_1448_47_1) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1448_47_0 || or_temp_result_1448_47_1) {
            qualifier_31.restore_selection();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(qualifier_31, default_active_instance))->alterables->values.get(0));
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
    or_final_or_event_1448_47_1_end: ;
}
void Frames::event_func_11428()
{
    // event 1472_47
    {
        if (!(group_main_engine_1)) goto event_1472_47_end;
        waterfallfront_1061_instances.clear_selection();
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)*it)->alterables->values.get(0)-1);
        }
        waterfallback_1016_instances.clear_selection();
        for (ObjectIterator it(waterfallback_1016_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/10)%math_helper%5);
        }
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((global_values->get(3)+5)/math_helper/10)%math_helper%5);
        }
        waterfallfront4_1062_instances.clear_selection();
        for (ObjectIterator it(waterfallfront4_1062_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((global_values->get(3)/math_helper/10)%math_helper%4);
        }
    }
    event_1472_47_end: ;
}
void Frames::event_func_11429()
{
    // event 1473_47
    {
        if (!(group_main_engine_1)) goto event_1473_47_end;
        tubebubblespawner_2765_instances.clear_selection();
        for (ObjectIterator it(tubebubblespawner_2765_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (8))) { it.deselect(); continue; }
        }
        if (!tubebubblespawner_2765_instances.has_selection()) goto event_1473_47_end;
        FrameObject * single_instance_1473_47_0; single_instance_1473_47_0 = pick_random(tubebubblespawner_2765_instances);
        if (single_instance_1473_47_0 == NULL) goto event_1473_47_end;
        FrameObject * single_instance_1473_47_1; single_instance_1473_47_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_tubebubble_2762(((Active*)single_instance_1473_47_0)->x + 0, ((Active*)single_instance_1473_47_0)->y + 0), ((Active*)single_instance_1473_47_0)->layer);
            if (single_instance_1473_47_1 == NULL)
                single_instance_1473_47_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1473_47_1))->alterables->values.set(1, ((Active*)single_instance_1473_47_1)->get_y());
        ((Active*)((Active*)single_instance_1473_47_1))->alterables->values.set(2, ((Active*)single_instance_1473_47_1)->get_x());
        ((Active*)((Active*)single_instance_1473_47_1))->alterables->values.set(3, ((Active*)single_instance_1473_47_1)->get_y()-((Active*)single_instance_1473_47_0)->alterables->values.get(0)*23);
        ((Active*)((Active*)single_instance_1473_47_1))->set_x(((Active*)single_instance_1473_47_1)->alterables->values.get(2)-40+randrange(81));
        ((Active*)((Active*)single_instance_1473_47_1))->force_frame(randrange(4));
        ((Active*)((Active*)single_instance_1473_47_1))->alterables->values.set(0, randrange(50)*-0.1-3);
        ((Active*)((Active*)single_instance_1473_47_0))->alterables->values.add(0, 1);
    }
    event_1473_47_end: ;
}
void Frames::event_func_11430()
{
    // event 1474_47
    {
        if (!(group_main_engine_1)) goto event_1474_47_end;
        tubebubble_2762_instances.clear_selection();
        for (ObjectIterator it(tubebubble_2762_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1474_47_end: ;
}
void Frames::event_func_11431()
{
    // event 1475_47
    {
        if (!(group_main_engine_1)) goto event_1475_47_end;
        tubebubble_2762_instances.clear_selection();
        for (ObjectIterator it(tubebubble_2762_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (((Active*)*it)->alterables->values.get(1)-192))) { it.deselect(); continue; }
        }
        if (!tubebubble_2762_instances.has_selection()) goto event_1475_47_end;
        FrameObject * single_instance_1475_47_0; single_instance_1475_47_0 = pick_random(tubebubble_2762_instances);
        if (single_instance_1475_47_0 == NULL) goto event_1475_47_end;
        ((Active*)((Active*)single_instance_1475_47_0))->alterables->values.set(3, ((Active*)single_instance_1475_47_0)->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1475_47_0))->set_x(((Active*)single_instance_1475_47_0)->alterables->values.get(2)-40+randrange(81));
        ((Active*)((Active*)single_instance_1475_47_0))->force_frame(randrange(4));
        ((Active*)((Active*)single_instance_1475_47_0))->alterables->values.set(0, randrange(50)*-0.1-3);
    }
    event_1475_47_end: ;
}
void Frames::event_func_11432()
{
    // event 1572_47
    {
        if (!(group_main_engine_1)) goto event_1572_47_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1572_47_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1572_47_0; single_instance_1572_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1572_47_0 == NULL)
                    single_instance_1572_47_0 = new_obj;
            }
        }
        FrameObject * single_instance_1572_47_1; single_instance_1572_47_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1572_47_1 == NULL)
                    single_instance_1572_47_1 = new_obj;
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
                loop_spawndebris_47();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1572_47_end: ;
}
void Frames::event_func_11433()
{
    // event 1604_47
    {
        if (!(group_main_engine_1)) goto event_1604_47_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto event_1604_47_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_19)) goto event_1604_47_end;
        FrameObject * single_instance_1604_47_0; single_instance_1604_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1604_47_0 == NULL)
                    single_instance_1604_47_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1604_47_0))->set_direction(2);
        FrameObject * single_instance_1604_47_1; single_instance_1604_47_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1604_47_1 == NULL)
                    single_instance_1604_47_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        FrameObject * single_instance_1604_47_2; single_instance_1604_47_2 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1604_47_2 == NULL)
                    single_instance_1604_47_2 = new_obj;
            }
        }
        FrameObject * single_instance_1604_47_3; single_instance_1604_47_3 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1604_47_3 == NULL)
                    single_instance_1604_47_3 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1604_47_2))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1604_47_2))->move_back();
        ((Active*)((Active*)single_instance_1604_47_3))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_47();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1604_47_end: ;
}
void Frames::event_func_11434()
{
    // event 1605_47
    bool or_result_1605_47 = false;
    bool or_temp_result_1605_47_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1605_47_0_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1605_47_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyseeker_2648_instances, qualifier_7)) goto or_event_1605_47_0_end;
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1605_47_0_end;
        or_result_1605_47 = true;
        or_temp_result_1605_47_0 = true;
    }
    or_event_1605_47_0_end: ;
    enemyseeker_2648_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1605_47_0) {
        enemyseeker_2648_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1605_47
    bool or_temp_result_1605_47_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1605_47_1_end;
        enemyseeker_2648_instances.clear_selection();
        for (ObjectIterator it(enemyseeker_2648_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyseeker_2648_instances.has_selection()) goto or_event_1605_47_1_end;
        or_result_1605_47 = true;
        or_temp_result_1605_47_1 = true;
        or_event_1605_47_1_end: ;
        if (or_temp_result_1605_47_1) {
            enemyseeker_2648_instances.save_selection();
        }
        if (!or_result_1605_47) goto or_final_or_event_1605_47_1_end;
        enemyseeker_2648_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1605_47_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1605_47_0 || or_temp_result_1605_47_1) {
            enemyseeker_2648_instances.restore_selection();
        }
        FrameObject * single_instance_1605_47_0; single_instance_1605_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyseeker_2648_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1605_47_0 == NULL)
                    single_instance_1605_47_0 = new_obj;
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
                loop_spawndebris_47();
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
    or_final_or_event_1605_47_1_end: ;
}
void Frames::event_func_11435()
{
    // event 1646_47
    {
        if (!(group_main_engine_1)) goto event_1646_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1646_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.1, 3));
        }
    }
    event_1646_47_end: ;
}
void Frames::event_func_11436()
{
    // event 1647_47
    {
        if (!(group_main_engine_1)) goto event_1647_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1647_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.1, -3));
        }
    }
    event_1647_47_end: ;
}
void Frames::event_func_11437()
{
    // event 1648_47
    {
        if (!(group_main_engine_1)) goto event_1648_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
        {
            SavedSelection extra_enemysaucer_2812_instances(enemysaucer_2812_instances);
            for (SavedIterator it(extra_enemysaucer_2812_instances); !it.end(); ++it) {
                foreach_instance_saucer = ((Active*)*it);
                foreach_saucer_47();
            }
        }
    }
    event_1648_47_end: ;
}
void Frames::event_func_11438()
{
    // event 1650_47
    {
        if (!(group_main_engine_1)) goto event_1650_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1650_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(8, 0-((Active*)*it)->alterables->values.get(8));
        }
    }
    event_1650_47_end: ;
}
void Frames::event_func_11439()
{
    // event 1651_47
    {
        if (!(group_main_engine_1)) goto event_1651_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1651_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1651_47_end: ;
}
void Frames::event_func_11440()
{
    // event 1652_47
    {
        if (!(group_main_engine_1)) goto event_1652_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+90+((Active*)*it)->alterables->values.get(6)*1.4)%math_helper%90);
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)-sin_deg(((Active*)*it)->alterables->values.get(3)*2)*10);
        }
    }
    event_1652_47_end: ;
}
void Frames::event_func_11441()
{
    // event 1653_47
    {
        if (!(group_main_engine_1)) goto event_1653_47_end;
        enemysaucerleg1_2811_instances.clear_selection();
        for (ObjectIterator it(enemysaucerleg1_2811_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->get_x()-sin_deg(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        enemysaucerleg2_2813_instances.clear_selection();
        for (ObjectIterator it(enemysaucerleg2_2813_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(3)-90)*((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        enemysaucerleg3_2814_instances.clear_selection();
        for (ObjectIterator it(enemysaucerleg3_2814_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(3))*((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        enemysaucerleg4_2810_instances.clear_selection();
        for (ObjectIterator it(enemysaucerleg4_2810_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(3)+90)*((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        for (ObjectIterator it(enemysaucerleg2_2813_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(5)+sin_deg(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(3)*2)*-20);
        }
        for (ObjectIterator it(enemysaucerleg4_2810_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(5)+sin_deg(((Active*)get_instance(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(3)*2)*-20);
        }
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
        for (ObjectIterator it(enemysaucerleg1_2811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->flags.get(6));
        }
        for (ObjectIterator it(enemysaucerleg2_2813_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->flags.get(6));
        }
        for (ObjectIterator it(enemysaucerleg3_2814_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->flags.get(6));
        }
        for (ObjectIterator it(enemysaucerleg4_2810_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->flags.get(6));
        }
        for (ObjectIterator it(enemysaucerleg1_2811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(23)-2);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(24)-2);
        }
        for (ObjectIterator it(enemysaucerleg2_2813_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(23)-4);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(24)+1);
        }
        for (ObjectIterator it(enemysaucerleg3_2814_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(23)+4);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(24)-1);
        }
        for (ObjectIterator it(enemysaucerleg4_2810_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(23)+2);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(enemysaucer_2812_instances, it.current_index, default_active_instance))->alterables->values.get(24)+2);
        }
        {
            ObjectIterator other_it(enemysaucer_2812_instances);
            for (ObjectIterator it(enemysaucerleg4_2810_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1653_47_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1653_47_0_end: ;
        {
            ObjectIterator other_it(enemysaucer_2812_instances);
            for (ObjectIterator it(enemysaucerleg1_2811_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1653_47_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1653_47_1_end: ;
        {
            ObjectIterator other_it(enemysaucer_2812_instances);
            for (ObjectIterator it(enemysaucerleg2_2813_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1653_47_2_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1653_47_2_end: ;
        {
            ObjectIterator other_it(enemysaucer_2812_instances);
            for (ObjectIterator it(enemysaucerleg3_2814_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1653_47_3_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1653_47_3_end: ;
    }
    event_1653_47_end: ;
}
void Frames::event_func_11442()
{
    // event 1654_47
    {
        if (!(group_main_engine_1)) goto event_1654_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (180))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1654_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1654_47_end: ;
}
void Frames::event_func_11443()
{
    // event 1655_47
    {
        if (!(group_main_engine_1)) goto event_1655_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1655_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1655_47_end: ;
}
void Frames::event_func_11444()
{
    // event 1656_47
    {
        if (!(group_main_engine_1)) goto event_1656_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (40))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1656_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1656_47_0; single_instance_1656_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucer_2812_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickfireball_1096(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1656_47_0 == NULL)
                    single_instance_1656_47_0 = new_obj;
            }
        }
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1656_47_end: ;
}
void Frames::event_func_11445()
{
    // event 1657_47
    {
        if (!(group_main_engine_1)) goto event_1657_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (55))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1657_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1657_47_0; single_instance_1657_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucer_2812_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickfireball_1096(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1657_47_0 == NULL)
                    single_instance_1657_47_0 = new_obj;
            }
        }
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1657_47_end: ;
}
void Frames::event_func_11446()
{
    // event 1658_47
    {
        if (!(group_main_engine_1)) goto event_1658_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (70))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1658_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1658_47_0; single_instance_1658_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucer_2812_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickfireball_1096(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1658_47_0 == NULL)
                    single_instance_1658_47_0 = new_obj;
            }
        }
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1658_47_end: ;
}
void Frames::event_func_11447()
{
    // event 1659_47
    {
        if (!(group_main_engine_1)) goto event_1659_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (85))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1659_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_1659_47_0; single_instance_1659_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucer_2812_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickfireball_1096(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1659_47_0 == NULL)
                    single_instance_1659_47_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1659_47_end: ;
}
void Frames::event_func_11448()
{
    // event 1660_47
    {
        if (!(group_main_engine_1)) goto event_1660_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (90))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1660_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1660_47_end: ;
}
void Frames::event_func_11449()
{
    // event 1661_47
    {
        if (!(group_main_engine_1)) goto event_1661_47_end;
        enemysaucerleg1_2811_instances.clear_selection();
        for (ObjectIterator it(enemysaucerleg1_2811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysaucerleg1_2811_instances.has_selection()) goto event_1661_47_end;
        for (ObjectIterator it(enemysaucerleg1_2811_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1661_47_0; single_instance_1661_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerleg1_2811_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysaucerdebris_2761(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1661_47_0 == NULL)
                    single_instance_1661_47_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1661_47_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1661_47_0))->alterables->values.set(23, ((Active*)get_single(enemysaucerleg1_2811_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1661_47_0))->alterables->values.set(24, ((Active*)get_single(enemysaucerleg1_2811_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1661_47_end: ;
}
void Frames::event_func_11450()
{
    // event 1662_47
    {
        if (!(group_main_engine_1)) goto event_1662_47_end;
        enemysaucerleg2_2813_instances.clear_selection();
        for (ObjectIterator it(enemysaucerleg2_2813_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysaucerleg2_2813_instances.has_selection()) goto event_1662_47_end;
        FrameObject * single_instance_1662_47_0; single_instance_1662_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerleg2_2813_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysaucerdebris_2761(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1662_47_0 == NULL)
                    single_instance_1662_47_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1662_47_0))->force_frame(2);
        for (ObjectIterator it(enemysaucerleg2_2813_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1662_47_0))->alterables->values.set(23, ((Active*)get_single(enemysaucerleg2_2813_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1662_47_0))->alterables->values.set(24, ((Active*)get_single(enemysaucerleg2_2813_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1662_47_end: ;
}
void Frames::event_func_11451()
{
    // event 1663_47
    {
        if (!(group_main_engine_1)) goto event_1663_47_end;
        enemysaucerleg3_2814_instances.clear_selection();
        for (ObjectIterator it(enemysaucerleg3_2814_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysaucerleg3_2814_instances.has_selection()) goto event_1663_47_end;
        FrameObject * single_instance_1663_47_0; single_instance_1663_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerleg3_2814_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysaucerdebris_2761(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1663_47_0 == NULL)
                    single_instance_1663_47_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemysaucerleg3_2814_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1663_47_0))->force_frame(2);
        ((Active*)((Active*)single_instance_1663_47_0))->alterables->values.set(23, ((Active*)get_single(enemysaucerleg3_2814_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1663_47_0))->alterables->values.set(24, ((Active*)get_single(enemysaucerleg3_2814_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1663_47_end: ;
}
void Frames::event_func_11452()
{
    // event 1664_47
    {
        if (!(group_main_engine_1)) goto event_1664_47_end;
        enemysaucerleg4_2810_instances.clear_selection();
        for (ObjectIterator it(enemysaucerleg4_2810_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!enemysaucerleg4_2810_instances.has_selection()) goto event_1664_47_end;
        FrameObject * single_instance_1664_47_0; single_instance_1664_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerleg4_2810_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysaucerdebris_2761(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1664_47_0 == NULL)
                    single_instance_1664_47_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemysaucerleg4_2810_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1664_47_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1664_47_0))->alterables->values.set(23, ((Active*)get_single(enemysaucerleg4_2810_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1664_47_0))->alterables->values.set(24, ((Active*)get_single(enemysaucerleg4_2810_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1664_47_end: ;
}
void Frames::event_func_11453()
{
    // event 1665_47
    {
        if (!(group_main_engine_1)) goto event_1665_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemysaucer_2812_instances.has_selection()) goto event_1665_47_end;
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1665_47_0; single_instance_1665_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucer_2812_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysaucerdebris_2761(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1665_47_0 == NULL)
                    single_instance_1665_47_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1665_47_0))->alterables->values.set(23, ((Active*)get_single(enemysaucer_2812_instances, default_active_instance))->alterables->values.get(23));
        ((Active*)((Active*)single_instance_1665_47_0))->alterables->values.set(24, ((Active*)get_single(enemysaucer_2812_instances, default_active_instance))->alterables->values.get(24));
        media.stop_sample(SOUND_COMMON_STRIKE_23);
    }
    event_1665_47_end: ;
}
void Frames::event_func_11454()
{
    // event 1666_47
    {
        if (!(group_main_engine_1)) goto event_1666_47_end;
        if (!((enemysaucerleg1_2811_instances.size()) > (enemysaucer_2812_instances.size()))) goto event_1666_47_end;
        enemysaucerleg1_2811_instances.clear_selection();
        FrameObject * single_instance_1666_47_0; single_instance_1666_47_0 = pick_random(enemysaucerleg1_2811_instances);
        if (single_instance_1666_47_0 == NULL) goto event_1666_47_end;
        ((Active*)((Active*)single_instance_1666_47_0))->destroy();
    }
    event_1666_47_end: ;
}
void Frames::event_func_11455()
{
    // event 1667_47
    {
        if (!(group_main_engine_1)) goto event_1667_47_end;
        if (!((enemysaucerleg2_2813_instances.size()) > (enemysaucer_2812_instances.size()))) goto event_1667_47_end;
        enemysaucerleg2_2813_instances.clear_selection();
        FrameObject * single_instance_1667_47_0; single_instance_1667_47_0 = pick_random(enemysaucerleg2_2813_instances);
        if (single_instance_1667_47_0 == NULL) goto event_1667_47_end;
        ((Active*)((Active*)single_instance_1667_47_0))->destroy();
    }
    event_1667_47_end: ;
}
void Frames::event_func_11456()
{
    // event 1668_47
    {
        if (!(group_main_engine_1)) goto event_1668_47_end;
        if (!((enemysaucerleg3_2814_instances.size()) > (enemysaucer_2812_instances.size()))) goto event_1668_47_end;
        enemysaucerleg3_2814_instances.clear_selection();
        FrameObject * single_instance_1668_47_0; single_instance_1668_47_0 = pick_random(enemysaucerleg3_2814_instances);
        if (single_instance_1668_47_0 == NULL) goto event_1668_47_end;
        ((Active*)((Active*)single_instance_1668_47_0))->destroy();
    }
    event_1668_47_end: ;
}
void Frames::event_func_11457()
{
    // event 1669_47
    {
        if (!(group_main_engine_1)) goto event_1669_47_end;
        if (!((enemysaucerleg4_2810_instances.size()) > (enemysaucer_2812_instances.size()))) goto event_1669_47_end;
        enemysaucerleg4_2810_instances.clear_selection();
        FrameObject * single_instance_1669_47_0; single_instance_1669_47_0 = pick_random(enemysaucerleg4_2810_instances);
        if (single_instance_1669_47_0 == NULL) goto event_1669_47_end;
        ((Active*)((Active*)single_instance_1669_47_0))->destroy();
    }
    event_1669_47_end: ;
}
void Frames::event_func_11458()
{
    // event 1670_47
    bool or_result_1670_47 = false;
    bool or_temp_result_1670_47_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1670_47_0_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1670_47_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysaucerdebris_2761_instances, qualifier_7)) goto or_event_1670_47_0_end;
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1670_47_0_end;
        or_result_1670_47 = true;
        or_temp_result_1670_47_0 = true;
    }
    or_event_1670_47_0_end: ;
    enemysaucerdebris_2761_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1670_47_0) {
        enemysaucerdebris_2761_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1670_47
    bool or_temp_result_1670_47_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1670_47_1_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1670_47_1_end;
        or_result_1670_47 = true;
        or_temp_result_1670_47_1 = true;
        or_event_1670_47_1_end: ;
        if (or_temp_result_1670_47_1) {
            enemysaucerdebris_2761_instances.save_selection();
        }
        if (!or_result_1670_47) goto or_final_or_event_1670_47_1_end;
        enemysaucerdebris_2761_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1670_47_0 || or_temp_result_1670_47_1) {
            enemysaucerdebris_2761_instances.restore_selection();
        }
        if (or_temp_result_1670_47_0) {
            qualifier_7.restore_selection();
        }
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1670_47_0; single_instance_1670_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerdebris_2761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1670_47_0 == NULL)
                    single_instance_1670_47_0 = new_obj;
            }
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(3);
        }
        FrameObject * single_instance_1670_47_1; single_instance_1670_47_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerdebris_2761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1670_47_1 == NULL)
                    single_instance_1670_47_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1670_47_1_end: ;
}
void Frames::event_func_11459()
{
    // event 1671_47
    bool or_result_1671_47 = false;
    bool or_temp_result_1671_47_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1671_47_0_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1671_47_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemysaucerdebris_2761_instances, qualifier_7)) goto or_event_1671_47_0_end;
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1671_47_0_end;
        or_result_1671_47 = true;
        or_temp_result_1671_47_0 = true;
    }
    or_event_1671_47_0_end: ;
    enemysaucerdebris_2761_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1671_47_0) {
        enemysaucerdebris_2761_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1671_47
    bool or_temp_result_1671_47_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1671_47_1_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto or_event_1671_47_1_end;
        or_result_1671_47 = true;
        or_temp_result_1671_47_1 = true;
        or_event_1671_47_1_end: ;
        if (or_temp_result_1671_47_1) {
            enemysaucerdebris_2761_instances.save_selection();
        }
        if (!or_result_1671_47) goto or_final_or_event_1671_47_1_end;
        enemysaucerdebris_2761_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1671_47_0 || or_temp_result_1671_47_1) {
            enemysaucerdebris_2761_instances.restore_selection();
        }
        if (or_temp_result_1671_47_0) {
            qualifier_7.restore_selection();
        }
        FrameObject * single_instance_1671_47_0; single_instance_1671_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysaucerdebris_2761_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1671_47_0 == NULL)
                    single_instance_1671_47_0 = new_obj;
            }
        }
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_47();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1671_47_1_end: ;
}
void Frames::event_func_11460()
{
    // event 1673_47
    {
        if (!(group_main_engine_1)) goto event_1673_47_end;
        enemysaucerdebris_2761_instances.clear_selection();
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemysaucerdebris_2761_instances.has_selection()) goto event_1673_47_end;
        for (ObjectIterator it(enemysaucerdebris_2761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1673_47_end: ;
}
void Frames::event_func_11461()
{
    // event 1674_47
    {
        if (!(group_main_engine_1)) goto event_1674_47_end;
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!gimmickfireball_1096_instances.has_selection()) goto event_1674_47_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
    }
    event_1674_47_end: ;
}
void Frames::event_func_11462()
{
    // event 1680_47
    {
        if (!(group_main_engine_1)) goto event_1680_47_end;
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (-32))) { it.deselect(); continue; }
        }
        if (!gimmickfireball_1096_instances.has_selection()) goto event_1680_47_end;
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1680_47_end: ;
}
void Frames::event_func_11463()
{
    // event 1684_47
    {
        if (!(group_main_engine_1)) goto event_1684_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1684_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1684_47_end: ;
}
void Frames::event_func_11464()
{
    // event 1685_47
    {
        if (!(group_main_engine_1)) goto event_1685_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1685_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1685_47_end: ;
}
void Frames::event_func_11465()
{
    // event 1686_47
    {
        if (!(group_main_engine_1)) goto event_1686_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1686_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(5)*2);
        }
    }
    event_1686_47_end: ;
}
void Frames::event_func_11466()
{
    // event 1687_47
    {
        if (!(group_main_engine_1)) goto event_1687_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1687_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_1687_47_end: ;
}
void Frames::event_func_11467()
{
    // event 1688_47
    {
        if (!(group_main_engine_1)) goto event_1688_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1688_47_end;
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, enemylimiter_350_instances)) goto event_1688_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1688_47_end: ;
}
void Frames::event_func_11468()
{
    // event 1689_47
    {
        if (!(group_main_engine_1)) goto event_1689_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1689_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1689_47_end: ;
}
void Frames::event_func_11469()
{
    // event 1690_47
    {
        if (!(group_main_engine_1)) goto event_1690_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1690_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 10);
            ((Active*)*it)->alterables->values.set(5, 0-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1690_47_end: ;
}
void Frames::event_func_11470()
{
    // event 1691_47
    {
        if (!(group_main_engine_1)) goto event_1691_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1691_47_end;
        if (!check_not_overlap(enemytankbot_2821_instances, enemylimiter_350_instances)) goto event_1691_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1691_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_1691_47_end: ;
}
void Frames::event_func_11471()
{
    // event 1692_47
    {
        if (!(group_main_engine_1)) goto event_1692_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1692_47_end;
        if (!check_not_overlap(enemytankbot_2821_instances, enemylimiter_350_instances)) goto event_1692_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1692_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_1692_47_end: ;
}
void Frames::event_func_11472()
{
    // event 1693_47
    {
        if (!(group_main_engine_1)) goto event_1693_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1693_47_end;
        if (!check_not_overlap(enemytankbot_2821_instances, enemylimiter_350_instances)) goto event_1693_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1693_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1693_47_end: ;
}
void Frames::event_func_11473()
{
    // event 1694_47
    {
        if (!(group_main_engine_1)) goto event_1694_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1694_47_end;
        if (!check_not_overlap(enemytankbot_2821_instances, enemylimiter_350_instances)) goto event_1694_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+100))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1694_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 2);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1694_47_end: ;
}
void Frames::event_func_11474()
{
    // event 1695_47
    {
        if (!(group_main_engine_1)) goto event_1695_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (15))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1695_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1695_47_end: ;
}
void Frames::event_func_11475()
{
    // event 1696_47
    bool or_result_1696_47 = false;
    bool or_temp_result_1696_47_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1696_47_0_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (8))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1696_47_0_end;
        or_result_1696_47 = true;
        or_temp_result_1696_47_0 = true;
    }
    or_event_1696_47_0_end: ;
    enemytankbot_2821_instances.clear_saved_selection();
    if (or_temp_result_1696_47_0) {
        enemytankbot_2821_instances.save_selection();
    }
    // event 1696_47
    bool or_temp_result_1696_47_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1696_47_1_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (15))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1696_47_1_end;
        or_result_1696_47 = true;
        or_temp_result_1696_47_1 = true;
        or_event_1696_47_1_end: ;
        if (or_temp_result_1696_47_1) {
            enemytankbot_2821_instances.save_selection();
        }
        if (!or_result_1696_47) goto or_final_or_event_1696_47_1_end;
        enemytankbot_2821_instances.empty_selection();
        if (or_temp_result_1696_47_0 || or_temp_result_1696_47_1) {
            enemytankbot_2821_instances.restore_selection();
        }
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
        FrameObject * single_instance_1696_47_0; single_instance_1696_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1696_47_0 == NULL)
                    single_instance_1696_47_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1696_47_0))->set_direction(((Active*)get_single(enemytankbot_2821_instances, default_active_instance))->get_direction());
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)((Active*)single_instance_1696_47_0))->get_movement()->set_speed(50);
    }
    or_final_or_event_1696_47_1_end: ;
}
void Frames::event_func_11476()
{
    // event 1697_47
    {
        if (!(group_main_engine_1)) goto event_1697_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1697_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(6, 90);
        }
    }
    event_1697_47_end: ;
}
void Frames::event_func_11477()
{
    // event 1698_47
    {
        if (!(group_main_engine_1)) goto event_1698_47_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (9))) goto event_1698_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (20))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1698_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 20);
        }
    }
    event_1698_47_end: ;
}
void Frames::event_func_11478()
{
    // event 1699_47
    {
        if (!(group_main_engine_1)) goto event_1699_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1699_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    event_1699_47_end: ;
}
void Frames::event_func_11479()
{
    // event 1700_47
    {
        if (!(group_main_engine_1)) goto event_1700_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1700_47_end;
        FrameObject * single_instance_1700_47_0; single_instance_1700_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                int x_off; x_off = 0;
                int y_off; y_off = 0;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_enemytankbotdebris_2763(parent->x + x_off, parent->y + y_off), parent->layer);
                if (single_instance_1700_47_0 == NULL)
                    single_instance_1700_47_0 = new_obj;
                new_obj->set_direction(parent->direction);
            }
        }
        ((Active*)((Active*)single_instance_1700_47_0))->move_back();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.disable(16);
        }
        media.play_id(SOUND_COMMON_EXPLODE9_313, -1, 1);
        FrameObject * single_instance_1700_47_1; single_instance_1700_47_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 16), parent->layer);
                if (single_instance_1700_47_1 == NULL)
                    single_instance_1700_47_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1700_47_end: ;
}
void Frames::event_func_11480()
{
    // event 1701_47
    {
        if (!(group_main_engine_1)) goto event_1701_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1701_47_end;
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(50+randrange(30));
            ((Active*)*it)->force_frame(16);
        }
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1701_47_end: ;
}
void Frames::event_func_11481()
{
    // event 1702_47
    bool or_result_1702_47 = false;
    bool or_temp_result_1702_47_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1702_47_0_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1702_47_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_7)) goto or_event_1702_47_0_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1702_47_0_end;
        or_result_1702_47 = true;
        or_temp_result_1702_47_0 = true;
    }
    or_event_1702_47_0_end: ;
    enemytankbot_2821_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1702_47_0) {
        enemytankbot_2821_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1702_47
    bool or_temp_result_1702_47_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1702_47_1_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1702_47_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemytankbot_2821_instances, qualifier_8)) goto or_event_1702_47_1_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1702_47_1_end;
        or_result_1702_47 = true;
        or_temp_result_1702_47_1 = true;
    }
    or_event_1702_47_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1702_47_1) {
        enemytankbot_2821_instances.save_selection();
        qualifier_8.save_selection();
    }
    // event 1702_47
    bool or_temp_result_1702_47_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1702_47_2_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto or_event_1702_47_2_end;
        or_result_1702_47 = true;
        or_temp_result_1702_47_2 = true;
        or_event_1702_47_2_end: ;
        if (or_temp_result_1702_47_2) {
            enemytankbot_2821_instances.save_selection();
        }
        if (!or_result_1702_47) goto or_final_or_event_1702_47_2_end;
        enemytankbot_2821_instances.empty_selection();
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1702_47_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1702_47_0 || or_temp_result_1702_47_1 || or_temp_result_1702_47_2) {
            enemytankbot_2821_instances.restore_selection();
        }
        if (or_temp_result_1702_47_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1702_47_0; single_instance_1702_47_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1702_47_0 == NULL)
                    single_instance_1702_47_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1702_47_0))->set_direction(2);
        FrameObject * single_instance_1702_47_1; single_instance_1702_47_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytankbot_2821_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1702_47_1 == NULL)
                    single_instance_1702_47_1 = new_obj;
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
                loop_spawndebris_47();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
    }
    or_final_or_event_1702_47_2_end: ;
}
void Frames::event_func_11482()
{
    // event 1704_47
    {
        if (!(group_main_engine_1)) goto event_1704_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1704_47_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1704_47_end: ;
}
void Frames::event_func_11483()
{
    // event 1744_47
    {
        if (!(group_main_engine_1)) goto event_1744_47_end;
        if (!((((Counter*)get_instance(guikeycards_2673_instances))->value) <= (0))) goto event_1744_47_end;
        if (not_always_1744_47 > loop_count) {
            not_always_1744_47 = loop_count + 2;
            goto event_1744_47_end;
        }
        not_always_1744_47 = loop_count + 2;
        ((Active*)get_instance(guikeycardicon_2674_instances))->set_visible(false);
        ((Counter*)get_instance(guikeycards_2673_instances))->set_visible(false);
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->set_direction(0);
    }
    event_1744_47_end: ;
}
void Frames::event_func_11484()
{
    // event 1745_47
    {
        if (!(group_main_engine_1)) goto event_1745_47_end;
        if (!((((Counter*)get_instance(guikeycards_2673_instances))->value) > (0))) goto event_1745_47_end;
        if (not_always_1745_47 > loop_count) {
            not_always_1745_47 = loop_count + 2;
            goto event_1745_47_end;
        }
        not_always_1745_47 = loop_count + 2;
        ((Counter*)get_instance(guikeycards_2673_instances))->set_visible(true);
        ((Active*)get_instance(guikeycardicon_2674_instances))->set_visible(true);
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->set_direction(1);
    }
    event_1745_47_end: ;
}
void Frames::event_func_11485()
{
    // event 1749_47
    {
        if (!(group_main_engine_1)) goto event_1749_47_end;
        {
            {
                foreach_instance_door = ((Active*)get_instance(lockeddoorterminal_2606_instances));
                foreach_door_47();
            }
        }
    }
    event_1749_47_end: ;
}
void Frames::event_func_11486()
{
    // event 1754_47
    {
        if (!(group_main_engine_1)) goto event_1754_47_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1754_47_end;
        if (!((((Active*)get_instance(lockeddoorterminal_2606_instances))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-40))) goto event_1754_47_end;
        if (!((((Active*)get_instance(lockeddoorterminal_2606_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+40))) goto event_1754_47_end;
        if (!((((Active*)get_instance(lockeddoorterminal_2606_instances))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()))) goto event_1754_47_end;
        if (!((((Active*)get_instance(lockeddoorterminal_2606_instances))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+60))) goto event_1754_47_end;
        if (!((((Active*)get_instance(lockeddoorterminal_2606_instances))->alterables->values.get(0)) == (0))) goto event_1754_47_end;
        if (!((((Counter*)get_instance(guikeycards_2673_instances))->value) > (0))) goto event_1754_47_end;
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->force_animation(7);
        ((Counter*)get_instance(guikeycards_2673_instances))->subtract(1);
        media.play_id(SOUND_COMMON_DOORUNLOCK_288, -1, 1);
    }
    event_1754_47_end: ;
}
void Frames::event_func_11487()
{
    // event 1755_47
    {
        if (!(group_main_engine_1)) goto event_1755_47_end;
        if (!((((Active*)get_instance(lockeddoorterminal_2606_instances))->alterables->values.get(0)) == (1))) goto event_1755_47_end;
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->alterables->values.add(2, 1);
    }
    event_1755_47_end: ;
}
void Frames::event_func_11488()
{
    // event 1756_47
    {
        if (!(group_main_engine_1)) goto event_1756_47_end;
        if (!((((Active*)get_instance(lockeddoorterminal_2606_instances))->alterables->values.get(0)) == (1))) goto event_1756_47_end;
        if (!((((Active*)get_instance(lockeddoorterminal_2606_instances))->alterables->values.get(2)) > (30))) goto event_1756_47_end;
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->alterables->values.set(0, 2);
        media.play_id(SOUND_DOORMETAL_OPEN_281, -1, 1);
    }
    event_1756_47_end: ;
}
void Frames::event_func_11489()
{
    // event 1757_47
    {
        if (!(group_main_engine_1)) goto event_1757_47_end;
        if (!((((Active*)get_instance(lockeddoorseal_2672_instances))->alterables->values.get(0)) > (0))) goto event_1757_47_end;
        if (!(((Active*)get_instance(lockeddoorseal_2672_instances))->flags & VISIBLE)) goto event_1757_47_end;
        ((Active*)get_instance(lockeddoorseal_2672_instances))->set_visible(false);
        FrameObject * single_instance_1757_47_0; single_instance_1757_47_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(lockeddoorseal_2672_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1757_47_0 == NULL)
                    single_instance_1757_47_0 = new_obj;
            }
        }
    }
    event_1757_47_end: ;
}
void Frames::event_func_11490()
{
    // event 1758_47
    {
        if (!(group_main_engine_1)) goto event_1758_47_end;
        if (!((((Active*)get_instance(lockeddoorbarrier_2667_instances))->alterables->values.get(0)) > (1))) goto event_1758_47_end;
        ((Active*)get_instance(lockeddoorbarrier_2667_instances))->alterables->flags.enable(0);
    }
    event_1758_47_end: ;
}
void Frames::event_func_11491()
{
    // event 1759_47
    {
        if (!(group_main_engine_1)) goto event_1759_47_end;
        if (!((((Active*)get_instance(lockeddoorback_2605_instances))->alterables->values.get(0)) > (1))) goto event_1759_47_end;
        ((Active*)get_instance(lockeddoorback_2605_instances))->force_speed(25);
    }
    event_1759_47_end: ;
}
void Frames::event_func_11492()
{
    // event 1760_47
    {
        if (!(group_main_engine_1)) goto event_1760_47_end;
        if (!((((Active*)get_instance(lockeddoorfront_2671_instances))->alterables->values.get(0)) > (1))) goto event_1760_47_end;
        ((Active*)get_instance(lockeddoorfront_2671_instances))->force_speed(25);
    }
    event_1760_47_end: ;
}
void Frames::event_func_11493()
{
    // event 1777_47
    {
        if (!(group_main_engine_1)) goto event_1777_47_end;
        if (!((global_values->get(4)) < (2))) goto event_1777_47_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2500))) goto event_1777_47_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (2600))) goto event_1777_47_end;
        global_values->set(4, 2);
        global_values->set(5, 2664);
        global_values->set(6, 2648);
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
    event_1777_47_end: ;
}
void Frames::event_func_11494()
{
    // event 1778_47
    {
        if (!(group_main_engine_1)) goto event_1778_47_end;
        if (!((global_values->get(4)) < (3))) goto event_1778_47_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2800))) goto event_1778_47_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (2900))) goto event_1778_47_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (2500))) goto event_1778_47_end;
        global_values->set(4, 3);
        global_values->set(5, 2912);
        global_values->set(6, 2648);
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
    event_1778_47_end: ;
}
void Frames::event_func_11495()
{
    // event 1779_47
    {
        if (!(group_main_engine_1)) goto event_1779_47_end;
        if (((Active*)get_instance(sbbackeye2_2242_instances))->is_near_border(-100)) goto event_1779_47_end;
        {
            ((Active*)get_instance(sbbackeye2_2242_instances))->blend_color.set_semi_transparency(64+sin_deg(((Active*)get_instance(sbbackeye2_2242_instances))->alterables->values.get(0))*64);
        }
        ((Active*)get_instance(sbbackeye2_2242_instances))->alterables->values.set(0, (((Active*)get_instance(sbbackeye2_2242_instances))->alterables->values.get(0)+4)%math_helper%360);
    }
    event_1779_47_end: ;
}
void Frames::event_func_11496()
{
    // event 2010_47
    {
        if (!(group_pause_1)) goto event_2010_47_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2010_47_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2010_47_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2010_47_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2010_47_end;
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
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->stop_animation();
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemypushuplaser3_2572_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser3_2572_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemypushuplaser_2570_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser_2570_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypushuplaser2_2571_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswaterhit_655_instances.clear_selection();
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        tubebubble_2762_instances.clear_selection();
        for (ObjectIterator it(tubebubble_2762_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(lockeddoorseal_2672_instances))->stop_animation();
        ((Active*)get_instance(lockeddoorback_2605_instances))->stop_animation();
        ((Active*)get_instance(lockeddoorfront_2671_instances))->stop_animation();
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->stop_animation();
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(switchbuttonright_2714_instances))->stop_animation();
        ((Active*)get_instance(switchbuttonleft_2715_instances))->stop_animation();
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2010_47_end: ;
}
void Frames::event_func_11497()
{
    // event 2011_47
    bool or_result_2011_47 = false;
    bool or_temp_result_2011_47_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2011_47_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2011_47_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2011_47_0_end;
        or_result_2011_47 = true;
        or_temp_result_2011_47_0 = true;
    }
    or_event_2011_47_0_end: ;
    // event 2011_47
    bool or_temp_result_2011_47_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2011_47_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2011_47_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2011_47_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2011_47_1_end;
        or_result_2011_47 = true;
        or_temp_result_2011_47_1 = true;
        or_event_2011_47_1_end: ;
        if (!or_result_2011_47) goto or_final_or_event_2011_47_1_end;
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
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->start_animation();
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemypushuplaser_2570_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser_2570_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        enemypushuplaser2_2571_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser2_2571_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        enemypushuplaser3_2572_instances.clear_selection();
        for (ObjectIterator it(enemypushuplaser3_2572_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswaterhit_655_instances.clear_selection();
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        tubebubble_2762_instances.clear_selection();
        for (ObjectIterator it(tubebubble_2762_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(lockeddoorseal_2672_instances))->start_animation();
        ((Active*)get_instance(lockeddoorback_2605_instances))->start_animation();
        ((Active*)get_instance(lockeddoorfront_2671_instances))->start_animation();
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblepatch_806_instances))->start_animation();
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(switchbuttonright_2714_instances))->start_animation();
        ((Active*)get_instance(switchbuttonleft_2715_instances))->start_animation();
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2011_47_1_end: ;
}
void Frames::handle_frame_48_events()
{
    test_collisions_47();
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
    event_func_10837();
    event_func_5247();
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
    event_func_11389();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_11390();
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
    event_func_11391();
    event_func_11392();
    event_func_11393();
    event_func_11394();
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
    event_func_11395();
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
    event_func_11396();
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
    event_func_11397();
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
    event_func_11398();
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
    event_func_11399();
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
    event_func_10753();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_11400();
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
    event_func_10755();
    event_func_1776();
    event_func_11401();
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
    event_func_11402();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_11403();
    event_func_11404();
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
    event_func_11405();
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
    event_func_11406();
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
    event_func_11407();
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
    event_func_11408();
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
    event_func_11409();
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
    event_func_11410();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_4529();
    event_func_4530();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_4531();
    event_func_1987();
    event_func_4532();
    event_func_1988();
    event_func_1989();
    event_func_4533();
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
    event_func_11411();
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
    event_func_11412();
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
    event_func_11413();
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
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4541();
    event_func_4914();
    event_func_11414();
    event_func_11415();
    event_func_4749();
    event_func_7083();
    event_func_11416();
    event_func_11417();
    event_func_11418();
    event_func_11419();
    event_func_11420();
    event_func_11421();
    event_func_11422();
    event_func_11423();
    event_func_11424();
    event_func_11425();
    event_func_2979();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_11426();
    event_func_11427();
    event_func_10992();
    event_func_10993();
    event_func_10994();
    event_func_10995();
    event_func_10996();
    event_func_10997();
    event_func_10998();
    event_func_10999();
    event_func_11000();
    event_func_11117();
    event_func_11118();
    event_func_11119();
    event_func_7545();
    event_func_7546();
    event_func_7547();
    event_func_7548();
    event_func_7549();
    event_func_7550();
    event_func_4786();
    event_func_4787();
    event_func_4788();
    event_func_11428();
    event_func_11429();
    event_func_11430();
    event_func_11431();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_10124();
    event_func_10125();
    event_func_10126();
    event_func_10127();
    event_func_10128();
    event_func_10129();
    event_func_10130();
    event_func_10131();
    event_func_10132();
    event_func_10133();
    event_func_10134();
    event_func_10135();
    event_func_10136();
    event_func_10137();
    event_func_10138();
    event_func_10139();
    event_func_10140();
    event_func_10141();
    event_func_10142();
    event_func_10143();
    event_func_10144();
    event_func_10145();
    event_func_10146();
    event_func_10147();
    event_func_10148();
    event_func_10149();
    event_func_10150();
    event_func_10151();
    event_func_10152();
    event_func_10153();
    event_func_10154();
    event_func_10155();
    event_func_10156();
    event_func_10157();
    event_func_10158();
    event_func_10159();
    event_func_10160();
    event_func_10161();
    event_func_10162();
    event_func_10163();
    event_func_10164();
    event_func_10165();
    event_func_10166();
    event_func_10167();
    event_func_10168();
    event_func_10169();
    event_func_10170();
    event_func_10171();
    event_func_10172();
    event_func_10173();
    event_func_10174();
    event_func_10175();
    event_func_10176();
    event_func_10177();
    event_func_10178();
    event_func_10179();
    event_func_10180();
    event_func_10181();
    event_func_10182();
    event_func_10183();
    event_func_10184();
    event_func_10185();
    event_func_10186();
    event_func_10187();
    event_func_10188();
    event_func_10189();
    event_func_10190();
    event_func_10191();
    event_func_10192();
    event_func_10193();
    event_func_10193();
    event_func_10193();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10195();
    event_func_10196();
    event_func_10197();
    event_func_10198();
    event_func_10199();
    event_func_10200();
    event_func_10201();
    event_func_10202();
    event_func_10203();
    event_func_11432();
    event_func_10205();
    event_func_10206();
    event_func_10207();
    event_func_10208();
    event_func_10209();
    event_func_10210();
    event_func_10211();
    event_func_10212();
    event_func_10213();
    event_func_10808();
    event_func_10809();
    event_func_10810();
    event_func_10811();
    event_func_10812();
    event_func_10813();
    event_func_10814();
    event_func_10815();
    event_func_10816();
    event_func_10817();
    event_func_10818();
    event_func_10819();
    event_func_10820();
    event_func_10821();
    event_func_10822();
    event_func_10823();
    event_func_10824();
    event_func_10825();
    event_func_10826();
    event_func_11433();
    event_func_11434();
    event_func_10829();
    event_func_10830();
    event_func_10831();
    event_func_10832();
    event_func_10833();
    event_func_10834();
    event_func_10835();
    event_func_10836();
    event_func_10838();
    event_func_10839();
    event_func_10840();
    event_func_10841();
    event_func_10842();
    event_func_10843();
    event_func_10844();
    event_func_10845();
    event_func_10846();
    event_func_10847();
    event_func_10848();
    event_func_10849();
    event_func_10850();
    event_func_11435();
    event_func_11436();
    event_func_11437();
    event_func_11438();
    event_func_11439();
    event_func_11440();
    event_func_11441();
    event_func_11442();
    event_func_11443();
    event_func_11444();
    event_func_11445();
    event_func_11446();
    event_func_11447();
    event_func_11448();
    event_func_11449();
    event_func_11450();
    event_func_11451();
    event_func_11452();
    event_func_11453();
    event_func_11454();
    event_func_11455();
    event_func_11456();
    event_func_11457();
    event_func_11458();
    event_func_11459();
    event_func_11460();
    event_func_11461();
    event_func_5240();
    event_func_5241();
    event_func_11462();
    event_func_11463();
    event_func_11464();
    event_func_11465();
    event_func_11466();
    event_func_11467();
    event_func_11468();
    event_func_11469();
    event_func_11470();
    event_func_11471();
    event_func_11472();
    event_func_11473();
    event_func_11474();
    event_func_11475();
    event_func_11476();
    event_func_11477();
    event_func_11478();
    event_func_11479();
    event_func_11480();
    event_func_11481();
    event_func_11482();
    event_func_11136();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_2491();
    event_func_3823();
    event_func_3824();
    event_func_3825();
    event_func_3826();
    event_func_3827();
    event_func_3828();
    event_func_3829();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_3836();
    event_func_3837();
    event_func_4051();
    event_func_4052();
    event_func_3838();
    event_func_3839();
    event_func_3840();
    event_func_3841();
    event_func_3842();
    event_func_3843();
    event_func_10851();
    event_func_10852();
    event_func_10853();
    event_func_11483();
    event_func_11484();
    event_func_11485();
    event_func_11486();
    event_func_11487();
    event_func_11488();
    event_func_11489();
    event_func_11490();
    event_func_11491();
    event_func_11492();
    event_func_11138();
    event_func_10876();
    event_func_10877();
    event_func_10878();
    event_func_10879();
    event_func_10880();
    event_func_10881();
    event_func_10882();
    event_func_10883();
    event_func_10884();
    event_func_10885();
    event_func_10886();
    event_func_10887();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_11493();
    event_func_11494();
    event_func_11495();
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
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_10929();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_3942();
    event_func_3943();
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_4308();
    event_func_4309();
    event_func_4310();
    event_func_4311();
    event_func_3953();
    event_func_3954();
    event_func_4124();
    event_func_4125();
    event_func_4126();
    event_func_4127();
    event_func_4128();
    event_func_4129();
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
    event_func_11496();
    event_func_11497();
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
void Frames::handle_frame_48_pre_events()
{
}
void Frames::event_func_11498()
{
    // event 2_47
    {
        if (!(group_main_engine_1)) goto event_2_47_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 3400);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 65);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 29);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_2_47_end: ;
}
void Frames::event_func_11499()
{
    // event 19_47
    {
        if (!(group_main_engine_1)) goto event_19_47_end;
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(6, -4);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.5);
    }
    event_19_47_end: ;
}
void Frames::event_func_11500()
{
    // event 1645_47
    {
        if (!(group_main_engine_1)) goto event_1645_47_end;
        enemysaucer_2812_instances.clear_selection();
        for (ObjectIterator it(enemysaucer_2812_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
        enemysaucerlimiter_2815_instances.clear_selection();
        for (ObjectIterator it(enemysaucerlimiter_2815_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_y());
        }
    }
    event_1645_47_end: ;
}
void Frames::event_func_11501()
{
    // event 1683_47
    {
        if (!(group_main_engine_1)) goto event_1683_47_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1683_47_end: ;
}
void Frames::event_func_11502()
{
    // event 1716_47
    {
        if (!(group_main_engine_1)) goto event_1716_47_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1716_47_end: ;
}
void Frames::on_frame_48_start_events()
{
    event_func_4133();
    event_func_11498();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_3267();
    event_func_11499();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_3272();
    event_func_3986();
    event_func_3987();
    event_func_10707();
    event_func_10939();
    event_func_10940();
    event_func_11500();
    event_func_11501();
    event_func_2686();
    event_func_11502();
    event_func_10941();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_11072();
    event_func_11073();
    event_func_4146();
    event_func_4143();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_48_init()
{
    index = 47;
    width = 8000;
    height = 4480;
    virtual_width = 8000;
    virtual_height = 4480;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &airventplatform_2668_instances, &gimmickcrankplatformtop1_2801_instances, &gimmickcrankplatformtop2_2802_instances, NULL};
    qualifier_8.set(12, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &airventplatform_2668_instances, &hazardspikesup_558_instances, &gimmickcrankplatformtop1_2801_instances, &gimmickcrankplatformtop2_2802_instances, NULL};
    qualifier_9.set(35, &qualifier_9_instances[0]);
    static ObjectList* qualifier_31_instances[] = {&gimmickconveyorbeltright_2818_instances, &gimmickconveyorbeltright2_2819_instances, &gimmickconveyorbeltright3_2820_instances, &gimmickconveyorbeltleft_2824_instances, &gimmickconveyorbeltleft2_2825_instances, &gimmickconveyorbeltleft3_2826_instances, NULL};
    qualifier_31.set(6, &qualifier_31_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyelitemask_2511_instances, &enemyseeker_2648_instances, &enemypushuphitbox_2653_instances, &enemylavasquiddebris_2677_instances, &enemysaucerdebris_2761_instances, &enemysaucer_2812_instances, &enemytankbot_2821_instances, NULL};
    qualifier_20.set(7, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece3_468_instances, NULL};
    qualifier_0.set(3, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &lockeddoorbarrier_2667_instances, &hazardspikesup_558_instances, &objectexplosiveblock_2708_instances, &hazardfloortrap_2748_instances, &tbpipeloop1_2803_instances, &tbpipeloop2_2804_instances, &tbpipeloop5_2805_instances, &tbpipeloop7_2806_instances, &tbpipeloop3_2807_instances, &tbpipeloop4_2808_instances, &tbpipeloop6_2809_instances, &gimmickconveyorbeltright_2818_instances, &gimmickconveyorbeltright2_2819_instances, &gimmickconveyorbeltright3_2820_instances, &tbpipeloop8_2822_instances, &tbpipeloop9_2823_instances, &gimmickconveyorbeltleft_2824_instances, &gimmickconveyorbeltleft2_2825_instances, &gimmickconveyorbeltleft3_2826_instances, NULL};
    qualifier_7.set(44, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &tbpipeloop2_2804_instances, &tbpipeloop5_2805_instances, &tbpipeloop7_2806_instances, &tbpipeloop3_2807_instances, &tbpipeloop6_2809_instances, &tbpipeloop9_2823_instances, NULL};
    qualifier_10.set(9, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &tbpipeloop1_2803_instances, &tbpipeloop4_2808_instances, &tbpipeloop8_2822_instances, NULL};
    qualifier_11.set(6, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece1_2758(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_2759(0, 0), 0);
    add_background_object(create_levelparallaxpiece3_2760(0, 0), 0);
    add_background_object(create_tbhugetube2_2764(760, 2536), 1);
    add_background_object(create_tbhugetube2_2764(760, 2344), 1);
    add_background_object(create_tbhugetube2_2764(760, 2152), 1);
    add_background_object(create_tbhugetube2_2764(760, 1960), 1);
    add_background_object(create_tbhugetube2_2764(2136, 2088), 1);
    add_background_object(create_tbhugetube2_2764(2136, 1896), 1);
    add_background_object(create_tbhugetube2_2764(2136, 1192), 1);
    add_background_object(create_tbhugetube2_2764(6264, 2920), 1);
    add_background_object(create_tbhugetube2_2764(6264, 2728), 1);
    add_background_object(create_tbhugetube2_2764(6520, 2920), 1);
    add_background_object(create_tbhugetube2_2764(6520, 2728), 1);
    add_background_object(create_tbhugetube2_2764(5528, 3048), 1);
    add_background_object(create_tbhugetube2_2764(5024, 3048), 1);
    add_background_object(create_tbhugetube2_2764(2936, 2152), 1);
    add_background_object(create_tbhugetube2_2764(2936, 1960), 1);
    add_object(create_bubblepatch_806(-544, 319), 1);
    add_object(create_tubebubblespawner_2765(800, 2719), 1);
    add_object(create_tubebubblespawner_2765(800, 2527), 1);
    add_object(create_tubebubblespawner_2765(800, 2335), 1);
    add_object(create_tubebubblespawner_2765(800, 2143), 1);
    add_object(create_tubebubblespawner_2765(2176, 2271), 1);
    add_object(create_tubebubblespawner_2765(2176, 2079), 1);
    add_object(create_tubebubblespawner_2765(2176, 1375), 1);
    add_object(create_tubebubblespawner_2765(6560, 3103), 1);
    add_object(create_tubebubblespawner_2765(6304, 3103), 1);
    add_object(create_tubebubblespawner_2765(6304, 2911), 1);
    add_object(create_tubebubblespawner_2765(6560, 2911), 1);
    add_object(create_tubebubblespawner_2765(5568, 3231), 1);
    add_object(create_tubebubblespawner_2765(5064, 3231), 1);
    add_background_object(create_tbbluewall1_2766(7616, 2984), 2);
    add_background_object(create_tbbluewall1_2766(7744, 3000), 2);
    add_background_object(create_tbbluewall1_2766(7360, 2872), 2);
    add_background_object(create_tbbluewall1_2766(7488, 2936), 2);
    add_background_object(create_tbbluewall1_2766(6976, 2888), 2);
    add_background_object(create_tbbluewall1_2766(128, 2440), 2);
    add_background_object(create_tbbluewall1_2766(0, 2440), 2);
    add_background_object(create_tbladder_2636(-320, 1584), 2);
    add_background_object(create_tbtunnelbottom1_2576(-368, 1656), 2);
    add_background_object(create_tbtunneltop1_2577(-360, 1664), 2);
    add_background_object(create_tbtunnelwall_2578(-336, 1664), 2);
    add_background_object(create_tbwall24_2737(-360, 1768), 2);
    add_background_object(create_tbbluepiping1_2767(-480, 1672), 2);
    add_background_object(create_tbbluepiping2_2768(-224, 1672), 2);
    add_background_object(create_tbhugetube1_2769(704, 2536), 2);
    add_background_object(create_tbhugetube1_2769(704, 2344), 2);
    add_background_object(create_tbhugetube1_2769(704, 2152), 2);
    add_background_object(create_tbhugetube1_2769(704, 1960), 2);
    add_background_object(create_tbhugetube1_2769(2880, 2152), 2);
    add_background_object(create_tbhugetube1_2769(2880, 1960), 2);
    add_background_object(create_tbbluewall1_2766(192, 2120), 2);
    add_background_object(create_tbbluewall1_2766(192, 1960), 2);
    add_background_object(create_tbbluewall1_2766(2880, 2504), 2);
    add_background_object(create_tbbluewall1_2766(2752, 2504), 2);
    add_background_object(create_tbhugetube1_2769(2080, 2088), 2);
    add_background_object(create_tbhugetube1_2769(2080, 1896), 2);
    add_background_object(create_tbtunnelbottom1_2576(3072, 2216), 2);
    add_background_object(create_tbtunnelbottom1_2576(3200, 2216), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 2152), 2);
    add_background_object(create_tbtunnelwall_2578(3248, 2152), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 2088), 2);
    add_background_object(create_tbtunnelwall_2578(3248, 2088), 2);
    add_background_object(create_tbtunneltop1_2577(3072, 1992), 2);
    add_background_object(create_tbtunneltop1_2577(3200, 1992), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 2056), 2);
    add_background_object(create_tbtunnelwall_2578(3248, 2056), 2);
    add_background_object(create_tbtunneltop1_2577(3328, 1992), 2);
    add_background_object(create_tbtunnelbottom1_2576(3072, 1928), 2);
    add_background_object(create_tbtunnelbottom1_2576(3200, 1928), 2);
    add_background_object(create_tbtunnelbottom1_2576(3328, 1928), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 1864), 2);
    add_background_object(create_tbtunnelwall_2578(3248, 1864), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 1800), 2);
    add_background_object(create_tbtunnelwall_2578(3248, 1800), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 1736), 2);
    add_background_object(create_tbtunnelwall_2578(3248, 1736), 2);
    add_background_object(create_tbtunneltop1_2577(3072, 1640), 2);
    add_background_object(create_tbtunneltop1_2577(3200, 1640), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 1704), 2);
    add_background_object(create_tbtunnelwall_2578(3248, 1704), 2);
    add_background_object(create_tbtunneltop1_2577(3328, 1640), 2);
    add_background_object(create_tbtunnelbottom1_2576(3072, 1576), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 1512), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 1448), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 1384), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 1320), 2);
    add_background_object(create_tbtunnelwall_2578(3120, 1256), 2);
    add_background_object(create_tbtunneltop1_2577(3072, 1192), 2);
    add_background_object(create_tbtunnelbottom1_2576(1984, 2792), 2);
    add_background_object(create_tbtunnelbottom1_2576(2112, 2792), 2);
    add_background_object(create_tbtunnelbottom1_2576(2240, 2792), 2);
    add_background_object(create_tbtunnelbottom1_2576(2368, 2792), 2);
    add_background_object(create_tbtunnelbottom1_2576(2496, 2792), 2);
    add_background_object(create_tbtunneltop1_2577(2112, 2856), 2);
    add_background_object(create_tbtunneltop1_2577(1984, 2856), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 2920), 2);
    add_background_object(create_tbtunnelwall_2578(2160, 2920), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 2984), 2);
    add_background_object(create_tbtunnelwall_2578(2160, 2984), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 3048), 2);
    add_background_object(create_tbtunnelwall_2578(2160, 3048), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 3112), 2);
    add_background_object(create_tbtunnelwall_2578(2160, 3112), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 2664), 2);
    add_background_object(create_tbtunnelwall_2578(2160, 2664), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 2728), 2);
    add_background_object(create_tbtunnelwall_2578(2160, 2728), 2);
    add_background_object(create_tbtunnelwall_2578(2288, 2664), 2);
    add_background_object(create_tbtunnelwall_2578(2416, 2664), 2);
    add_background_object(create_tbtunnelwall_2578(2288, 2728), 2);
    add_background_object(create_tbtunnelwall_2578(2416, 2728), 2);
    add_background_object(create_tbtunnelwall_2578(2544, 2664), 2);
    add_background_object(create_tbtunnelwall_2578(2544, 2728), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 2536), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 2600), 2);
    add_background_object(create_tbtunnelwall_2578(2416, 2536), 2);
    add_background_object(create_tbtunnelwall_2578(2416, 2600), 2);
    add_background_object(create_tbtunnelwall_2578(2544, 2536), 2);
    add_background_object(create_tbtunnelwall_2578(2544, 2600), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 2408), 2);
    add_background_object(create_tbtunnelwall_2578(2032, 2472), 2);
    add_background_object(create_tbtunnelwall_2578(2416, 2408), 2);
    add_background_object(create_tbtunnelwall_2578(2416, 2472), 2);
    add_background_object(create_tbtunnelwall_2578(2544, 2408), 2);
    add_background_object(create_tbtunnelwall_2578(2544, 2472), 2);
    add_background_object(create_tbtunnelwall_2578(2160, 2408), 2);
    add_background_object(create_tbtunnelwall_2578(2288, 2408), 2);
    add_background_object(create_tbtunneltop1_2577(2112, 2344), 2);
    add_background_object(create_tbtunneltop1_2577(1984, 2344), 2);
    add_background_object(create_tbtunneltop1_2577(2368, 2344), 2);
    add_background_object(create_tbtunneltop1_2577(2240, 2344), 2);
    add_background_object(create_tbtunneltop1_2577(2496, 2344), 2);
    add_background_object(create_tbtunneltop1_2577(2624, 2344), 2);
    add_background_object(create_tbtunnelwall_2578(2672, 2536), 2);
    add_background_object(create_tbtunnelwall_2578(2672, 2600), 2);
    add_background_object(create_tbtunneltop1_2577(2752, 2344), 2);
    add_background_object(create_tbtunnelbottom1_2576(2496, 2280), 2);
    add_background_object(create_tbtunnelbottom1_2576(2624, 2280), 2);
    add_background_object(create_tbtunnelbottom1_2576(2752, 2280), 2);
    add_background_object(create_tbtunnelwall_2578(2800, 2216), 2);
    add_background_object(create_tbtunnelwall_2578(2672, 2216), 2);
    add_background_object(create_tbtunnelwall_2578(2544, 2216), 2);
    add_background_object(create_tbtunneltop1_2577(2496, 2152), 2);
    add_background_object(create_tbtunneltop1_2577(2624, 2152), 2);
    add_background_object(create_tbtunneltop1_2577(2752, 2152), 2);
    add_background_object(create_tbtunneltop1_2577(2944, 1640), 2);
    add_background_object(create_tbtunnelbottom1_2576(2944, 1576), 2);
    add_background_object(create_tbtunneltop1_2577(2816, 1640), 2);
    add_background_object(create_tbtunnelbottom1_2576(2816, 1576), 2);
    add_background_object(create_tbtunneltop1_2577(2688, 1640), 2);
    add_background_object(create_tbtunnelbottom1_2576(2688, 1576), 2);
    add_background_object(create_tbtunneltop1_2577(2560, 1640), 2);
    add_background_object(create_tbtunnelbottom1_2576(2560, 1576), 2);
    add_background_object(create_tbtunneltop1_2577(2432, 1640), 2);
    add_background_object(create_tbtunnelbottom1_2576(2432, 1576), 2);
    add_background_object(create_tbtunnelwall_2578(2992, 1704), 2);
    add_background_object(create_tbtunnelwall_2578(2992, 1768), 2);
    add_background_object(create_tbtunnelwall_2578(2992, 1832), 2);
    add_background_object(create_tbtunnelwall_2578(2992, 1896), 2);
    add_background_object(create_tbtunnelwall_2578(2864, 1704), 2);
    add_background_object(create_tbtunnelwall_2578(2864, 1768), 2);
    add_background_object(create_tbtunnelwall_2578(2864, 1832), 2);
    add_background_object(create_tbtunnelwall_2578(2864, 1896), 2);
    add_background_object(create_tbtunnelwall_2578(2736, 1704), 2);
    add_background_object(create_tbtunnelwall_2578(2736, 1768), 2);
    add_background_object(create_tbtunnelwall_2578(2736, 1832), 2);
    add_background_object(create_tbtunnelwall_2578(2736, 1896), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1704), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1768), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1832), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1896), 2);
    add_background_object(create_tbtunnelwall_2578(2480, 1704), 2);
    add_background_object(create_tbtunnelwall_2578(2480, 1768), 2);
    add_background_object(create_tbtunnelwall_2578(2480, 1832), 2);
    add_background_object(create_tbtunnelwall_2578(2480, 1896), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1960), 2);
    add_background_object(create_tbtunnelwall_2578(2480, 1960), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 2024), 2);
    add_background_object(create_tbtunnelwall_2578(2480, 2024), 2);
    add_background_object(create_tbtunnelbottom1_2576(2432, 2088), 2);
    add_background_object(create_tbtunnelbottom1_2576(2560, 2088), 2);
    add_background_object(create_tbtunnelwall_2578(2992, 1448), 2);
    add_background_object(create_tbtunnelwall_2578(2992, 1512), 2);
    add_background_object(create_tbtunnelwall_2578(2864, 1448), 2);
    add_background_object(create_tbtunnelwall_2578(2864, 1512), 2);
    add_background_object(create_tbtunnelwall_2578(2736, 1448), 2);
    add_background_object(create_tbtunnelwall_2578(2736, 1512), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1448), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1512), 2);
    add_background_object(create_tbtunnelwall_2578(2992, 1320), 2);
    add_background_object(create_tbtunnelwall_2578(2992, 1384), 2);
    add_background_object(create_tbtunnelwall_2578(2864, 1320), 2);
    add_background_object(create_tbtunnelwall_2578(2864, 1384), 2);
    add_background_object(create_tbtunnelwall_2578(2736, 1320), 2);
    add_background_object(create_tbtunnelwall_2578(2736, 1384), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1320), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1384), 2);
    add_background_object(create_tbtunnelwall_2578(2992, 1256), 2);
    add_background_object(create_tbtunnelwall_2578(2864, 1256), 2);
    add_background_object(create_tbtunnelwall_2578(2736, 1256), 2);
    add_background_object(create_tbtunnelwall_2578(2608, 1256), 2);
    add_background_object(create_tbtunneltop1_2577(2944, 1192), 2);
    add_background_object(create_tbtunneltop1_2577(2816, 1192), 2);
    add_background_object(create_tbtunneltop1_2577(2688, 1192), 2);
    add_background_object(create_tbtunneltop1_2577(2560, 1192), 2);
    add_background_object(create_tbhugetube1_2769(2080, 1192), 2);
    add_background_object(create_tbbluewall1_2766(3136, 3048), 2);
    add_background_object(create_tbbluewall1_2766(3264, 3048), 2);
    add_background_object(create_tbbluewall1_2766(4032, 3208), 2);
    add_background_object(create_tbbluewall1_2766(4160, 3208), 2);
    add_background_object(create_tbtunnelbottom1_2576(3904, 3688), 2);
    add_background_object(create_tbtunnelbottom1_2576(4032, 3688), 2);
    add_background_object(create_tbtunnelbottom1_2576(4160, 3688), 2);
    add_background_object(create_tbtunnelbottom1_2576(4288, 3688), 2);
    add_background_object(create_tbtunneltop1_2577(3904, 3624), 2);
    add_background_object(create_tbtunneltop1_2577(4032, 3624), 2);
    add_background_object(create_tbtunneltop1_2577(4160, 3624), 2);
    add_background_object(create_tbtunneltop1_2577(4288, 3624), 2);
    add_background_object(create_tbtunneltop2_2770(4288, 3560), 2);
    add_background_object(create_tbtunneltop1_2577(3904, 3048), 2);
    add_background_object(create_tbtunnelbottom1_2576(3904, 3368), 2);
    add_background_object(create_tbtunnelbottom1_2576(3776, 3368), 2);
    add_background_object(create_tbtunnelwall_2578(3952, 3304), 2);
    add_background_object(create_tbtunnelwall_2578(3952, 3240), 2);
    add_background_object(create_tbtunnelwall_2578(3952, 3176), 2);
    add_background_object(create_tbtunnelwall_2578(3952, 3112), 2);
    add_background_object(create_tbtunnelwall_2578(3824, 3304), 2);
    add_background_object(create_tbtunnelwall_2578(3824, 3240), 2);
    add_background_object(create_tbtunnelwall_2578(3824, 3176), 2);
    add_background_object(create_tbtunneltop2_2770(4352, 3560), 2);
    add_background_object(create_tbtunneltop2_2770(2368, 2088), 2);
    add_background_object(create_tbtunneltop2_2770(2368, 2024), 2);
    add_background_object(create_tbtunneltop2_2770(2368, 1960), 2);
    add_background_object(create_tbtunneltop2_2770(2368, 1896), 2);
    add_background_object(create_tbtunneltop2_2770(2432, 2088), 2);
    add_background_object(create_tbtunneltop2_2770(2432, 2024), 2);
    add_background_object(create_tbtunneltop2_2770(2432, 1960), 2);
    add_background_object(create_tbtunneltop2_2770(2432, 1896), 2);
    add_background_object(create_tbtunneltop2_2770(2432, 1320), 2);
    add_background_object(create_tbtunneltop2_2770(2432, 1256), 2);
    add_background_object(create_tbtunneltop2_2770(2368, 1320), 2);
    add_background_object(create_tbtunneltop2_2770(2368, 1256), 2);
    add_background_object(create_tbtunneltop2_2770(2304, 1320), 2);
    add_background_object(create_tbtunneltop2_2770(2304, 1256), 2);
    add_background_object(create_tbbluewall1_2766(7104, 2888), 2);
    add_background_object(create_tbbluewall1_2766(7232, 2888), 2);
    add_background_object(create_tbbluewall1_2766(7360, 2952), 2);
    add_background_object(create_tbbluewall1_2766(7488, 3016), 2);
    add_background_object(create_tbbluewall1_2766(7616, 3080), 2);
    add_background_object(create_tbbluewall1_2766(7744, 3080), 2);
    add_background_object(create_tbbluewall1_2766(7872, 3080), 2);
    add_background_object(create_tbhugetube1_2769(6208, 2920), 2);
    add_background_object(create_tbhugetube1_2769(6208, 2728), 2);
    add_background_object(create_tbhugetube1_2769(6464, 2920), 2);
    add_background_object(create_tbhugetube1_2769(6464, 2728), 2);
    add_background_object(create_tbhugetube1_2769(5472, 3048), 2);
    add_background_object(create_tbhugetube1_2769(4968, 3048), 2);
    add_background_object(create_tbtunneltop2_2770(1984, 1832), 2);
    add_background_object(create_tbtunneltop2_2770(1984, 1768), 2);
    add_background_object(create_tbtunneltop2_2770(1984, 1704), 2);
    add_background_object(create_tbtunneltop2_2770(1984, 1640), 2);
    add_background_object(create_tbtunneltop2_2770(1984, 1576), 2);
    add_background_object(create_tbtunneltop2_2770(1984, 1512), 2);
    add_background_object(create_tbtunneltop2_2770(1984, 1448), 2);
    add_background_object(create_tbtunneltop2_2770(1984, 1320), 2);
    add_background_object(create_tbtunneltop2_2770(1984, 1256), 2);
    add_background_object(create_tbtunneltop2_2770(1920, 1320), 2);
    add_background_object(create_tbtunneltop2_2770(1920, 1256), 2);
    add_background_object(create_tbtunneltop2_2770(1856, 1320), 2);
    add_background_object(create_tbtunneltop2_2770(1856, 1256), 2);
    add_background_object(create_tbtunneltop2_2770(2048, 1192), 2);
    add_background_object(create_tbtunneltop2_2770(2048, 1256), 2);
    add_background_object(create_tbtunneltop2_2770(2048, 1320), 2);
    add_background_object(create_tbtunneltop2_2770(2240, 1192), 2);
    add_background_object(create_tbtunneltop2_2770(2240, 1256), 2);
    add_background_object(create_tbtunneltop2_2770(2240, 1320), 2);
    add_background_object(create_tbtunneltop2_2770(1856, 2216), 2);
    add_background_object(create_tbtunneltop2_2770(1920, 2216), 2);
    add_background_object(create_tbtunneltop2_2770(5696, 2912), 2);
    add_background_object(create_tbtunneltop2_2770(5696, 2976), 2);
    add_background_object(create_tbtunneltop2_2770(5760, 2912), 2);
    add_background_object(create_tbtunneltop2_2770(5760, 2976), 2);
    add_background_object(create_tbtunneltop2_2770(5824, 2912), 2);
    add_background_object(create_tbtunneltop2_2770(5824, 2976), 2);
    add_background_object(create_tbtunneltop2_2770(5760, 3240), 2);
    add_background_object(create_tbtunneltop2_2770(3904, 3560), 2);
    add_background_object(create_tbtunneltop2_2770(3968, 3560), 2);
    add_background_object(create_tbtunneltop2_2770(3904, 3496), 2);
    add_background_object(create_tbtunneltop2_2770(3968, 3496), 2);
    add_background_object(create_tbtunneltop2_2770(3904, 3432), 2);
    add_background_object(create_tbtunneltop2_2770(3968, 3432), 2);
    add_background_object(create_tbtunneltop2_2770(3776, 3432), 2);
    add_background_object(create_tbtunneltop2_2770(3840, 3432), 2);
    add_background_object(create_tbtunneltop2_2770(4416, 3560), 2);
    add_background_object(create_tbtunneltop2_2770(4544, 3560), 2);
    add_background_object(create_tbtunneltop2_2770(4288, 3496), 2);
    add_background_object(create_tbtunneltop2_2770(4352, 3496), 2);
    add_background_object(create_tbtunneltop2_2770(4416, 3496), 2);
    add_background_object(create_tbtunneltop2_2770(4480, 3496), 2);
    add_background_object(create_tbtunneltop2_2770(4544, 3496), 2);
    add_background_object(create_tbtunneltop2_2770(4608, 3496), 2);
    add_background_object(create_tbtunneltop2_2770(4288, 3432), 2);
    add_background_object(create_tbtunneltop2_2770(4352, 3432), 2);
    add_background_object(create_tbtunneltop2_2770(4416, 3432), 2);
    add_background_object(create_tbtunneltop2_2770(4480, 3432), 2);
    add_background_object(create_tbtunneltop2_2770(4544, 3432), 2);
    add_background_object(create_tbtunneltop2_2770(4608, 3432), 2);
    add_background_object(create_tbtunnelbottom2_2771(4288, 3400), 2);
    add_background_object(create_tbtunnelbottom2_2771(4416, 3400), 2);
    add_background_object(create_tbtunnelbottom2_2771(4544, 3400), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(8000, -43), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_metaldoorback_2604(24, 2552), 2);
    add_object(create_lockeddoorback_2605(2776, 2616), 2);
    add_object(create_lockeddoorterminal_2606(2720, 2664), 2);
    add_object(create_tbwalllightanim_2603(-384, 1864), 2);
    add_object(create_gimmickcrankplatformmid2_2772(584, 2568), 2);
    add_object(create_gimmickcrankplatformbase2_2773(432, 2600), 2);
    add_object(create_gimmickcrankplatformarm2_2774(432, 2568), 2);
    add_object(create_gimmickcrankplatformmid1_2775(904, 2504), 2);
    add_object(create_gimmickcrankplatformbase1_2776(936, 2536), 2);
    add_object(create_gimmickcrankplatformarm1_2777(936, 2504), 2);
    add_object(create_gimmickcrankplatformmid2_2772(1416, 2312), 2);
    add_object(create_gimmickcrankplatformbase2_2773(1264, 2344), 2);
    add_object(create_gimmickcrankplatformarm2_2774(1264, 2312), 2);
    add_object(create_gimmickcrankplatformmid2_2772(2728, 1848), 2);
    add_object(create_gimmickcrankplatformbase2_2773(2576, 1880), 2);
    add_object(create_gimmickcrankplatformarm2_2774(2576, 1848), 2);
    add_object(create_objectcrystal_279(2813, 1386), 2);
    add_object(create_objectcrystal_279(2845, 1386), 2);
    add_object(create_objectcrystal_279(2877, 1386), 2);
    add_object(create_objectcrystal_279(2909, 1386), 2);
    add_object(create_objectcrystal_279(2941, 1386), 2);
    add_object(create_metaldoorback_2604(3032, 2616), 2);
    add_object(create_metaldoorback_2604(280, 2552), 2);
    add_object(create_metaldoorback_2604(6936, 3000), 2);
    add_object(create_metaldoorback_2604(7960, 3192), 2);
    add_object(create_waterfallback_2778(4416, 2720), 2);
    add_object(create_waterfallback_2778(4416, 2816), 2);
    add_object(create_waterfallback_2778(4416, 2912), 2);
    add_object(create_waterfallback_2778(4416, 3008), 2);
    add_object(create_waterfallback_2778(4416, 3104), 2);
    add_object(create_waterfallback_2778(4416, 3200), 2);
    add_object(create_waterfallback_2778(4416, 3296), 2);
    add_object(create_waterfallback_2778(4560, 2720), 2);
    add_object(create_waterfallback_2778(4560, 2816), 2);
    add_object(create_waterfallback_2778(4560, 2912), 2);
    add_object(create_waterfallback_2778(4560, 3008), 2);
    add_object(create_waterfallback_2778(4560, 3104), 2);
    add_object(create_waterfallback_2778(4560, 3200), 2);
    add_object(create_waterfallback_2778(4560, 3296), 2);
    add_object(create_waterfallback_2778(4768, 2720), 2);
    add_object(create_waterfallback_2778(4768, 2816), 2);
    add_object(create_waterfallback_2778(4768, 2912), 2);
    add_object(create_waterfallback_2778(4768, 3008), 2);
    add_object(create_waterfallback_2778(4768, 3104), 2);
    add_object(create_waterfallback_2778(4768, 3200), 2);
    add_object(create_waterfallback_2778(4768, 3296), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_tbwall8_2610(2024, 1384), 3);
    add_background_object(create_tbwallshadow_2598(6976, 2856), 3);
    add_background_object(create_tbwall8_2610(6912, 2888), 3);
    add_background_object(create_tbsolidblack_2688(5760, 3304), 3);
    add_background_object(create_tbsolidblack_2688(5632, 3304), 3);
    add_background_object(create_tbsolidblack_2688(5632, 3432), 3);
    add_background_object(create_tbsolidblack_2688(4864, 3304), 3);
    add_background_object(create_tbsolidblack_2688(4864, 3432), 3);
    add_background_object(create_tbinvertedloop3_2779(4352, 3688), 3);
    add_background_object(create_tbinvertedloop4_2780(3840, 3688), 3);
    add_background_object(create_tbinvertedloop1_2781(3840, 2984), 3);
    add_background_object(create_tbinvertedloop4_2780(3264, 2920), 3);
    add_background_object(create_tbwall8_2610(256, 2440), 3);
    add_background_object(create_tbwall8_2610(3008, 2504), 3);
    add_background_object(create_tbwallshadow_2598(2816, 2472), 3);
    add_background_object(create_tbbluepiping2_2768(3360, 2056), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2216), 3);
    add_background_object(create_tbsolidblack_2688(3328, 2216), 3);
    add_background_object(create_tbsolidblack_2688(4984, 2160), 3);
    add_background_object(create_tbsolidblack_2688(2192, 2504), 3);
    add_background_object(create_tbsolidblack_2688(512, 2664), 3);
    add_background_object(create_tbinvertedloop3_2779(2304, 2216), 3);
    add_background_object(create_tbsolidblack_2688(1152, 3176), 3);
    add_background_object(create_tbsolidblack_2688(1024, 3176), 3);
    add_background_object(create_tbsolidblack_2688(1280, 3176), 3);
    add_background_object(create_tbinvertedloop3_2779(1408, 3048), 3);
    add_background_object(create_tbsolidblack_2688(1024, 2792), 3);
    add_background_object(create_tbinvertedloop1_2781(1920, 2280), 3);
    add_background_object(create_tbwall8_2610(0, 2440), 3);
    add_background_object(create_tbwall8_2610(2752, 2504), 3);
    add_background_object(create_tblongrailing2_2689(2776, 1488), 3);
    add_background_object(create_tblongrailing3_2690(2976, 1488), 3);
    add_background_object(create_tblongrailing_2707(2784, 1536), 3);
    add_background_object(create_tblongrailing_2707(2848, 1536), 3);
    add_background_object(create_tblongrailing_2707(2912, 1536), 3);
    add_background_object(create_tbswitchpadright_2691(7096, 544), 3);
    add_background_object(create_tbswitchpadfloor_2692(7112, 544), 3);
    add_background_object(create_tbswitchpadfloor_2692(2496, 1416), 3);
    add_background_object(create_tbswitchpadleft_2693(2528, 1416), 3);
    add_background_object(create_tbwallshadow_2598(64, 2408), 3);
    add_background_object(create_tbwallshadow_2598(64, 2504), 3);
    add_background_object(create_tbbluewall2_2782(0, 2600), 3);
    add_background_object(create_tbbluewall4_2783(-192, 2792), 3);
    add_background_object(create_tbbluewall6_2784(-192, 2856), 3);
    add_background_object(create_tbbluewall8_2785(-256, 2856), 3);
    add_background_object(create_tbbluewall3_2786(-192, 2920), 3);
    add_background_object(create_tbbluewall5_2787(-192, 2984), 3);
    add_background_object(create_tbbluewall7_2788(-256, 2984), 3);
    add_background_object(create_tbbluewall9_2789(-256, 2920), 3);
    add_background_object(create_tbbluewall10_2790(-256, 3112), 3);
    add_background_object(create_tbbluewall11_2791(-256, 3048), 3);
    add_background_object(create_tbbluewall12_2792(-192, 3048), 3);
    add_background_object(create_tbbluewall13_2793(-192, 3112), 3);
    add_background_object(create_tbbluewall14_2794(-128, 2792), 3);
    add_background_object(create_tbbluewall2_2782(64, 2600), 3);
    add_background_object(create_tbbluewall2_2782(128, 2600), 3);
    add_background_object(create_tbbluewall2_2782(192, 2600), 3);
    add_background_object(create_tbbluewall2_2782(256, 2600), 3);
    add_background_object(create_tbbluewall2_2782(320, 2600), 3);
    add_background_object(create_tbbluewall2_2782(384, 2600), 3);
    add_background_object(create_tbbluewall2_2782(448, 2600), 3);
    add_background_object(create_tbbluewall6_2784(0, 2408), 3);
    add_background_object(create_tbbluewall6_2784(64, 2408), 3);
    add_background_object(create_tbbluewall6_2784(128, 2408), 3);
    add_background_object(create_tbbluewall6_2784(192, 2408), 3);
    add_background_object(create_tbbluewall2_2782(-256, 2792), 3);
    add_background_object(create_tbbluewall10_2790(576, 2728), 3);
    add_background_object(create_tbbluewall3_2786(512, 2600), 3);
    add_background_object(create_tbbluewall2_2782(704, 2728), 3);
    add_background_object(create_tbbluewall2_2782(768, 2728), 3);
    add_background_object(create_tbbluewall2_2782(832, 2728), 3);
    add_background_object(create_tbbluewall2_2782(896, 2728), 3);
    add_background_object(create_tbbluewall2_2782(640, 2728), 3);
    add_background_object(create_tbbluewall2_2782(960, 2728), 3);
    add_background_object(create_tbbluewall2_2782(1024, 2728), 3);
    add_background_object(create_tbbluewall2_2782(1088, 2728), 3);
    add_background_object(create_tbsolidblack_2688(0, 2664), 3);
    add_background_object(create_tbsolidblack_2688(128, 2664), 3);
    add_background_object(create_tbsolidblack_2688(256, 2664), 3);
    add_background_object(create_tbsolidblack_2688(384, 2664), 3);
    add_background_object(create_tbbluewall5_2787(256, 2408), 3);
    add_background_object(create_tbsolidblack_2688(0, 2280), 3);
    add_background_object(create_tbsolidblack_2688(128, 2280), 3);
    add_background_object(create_tbbluewall4_2783(256, 2344), 3);
    add_background_object(create_tbbluewall14_2794(1024, 2536), 3);
    add_background_object(create_tbbluewall14_2794(960, 2536), 3);
    add_background_object(create_tbbluewall14_2794(896, 2536), 3);
    add_background_object(create_tbbluewall3_2786(256, 2280), 3);
    add_background_object(create_tbbluewall10_2790(192, 2280), 3);
    add_background_object(create_tbsolidblack_2688(0, 2152), 3);
    add_background_object(create_tbsolidblack_2688(128, 2152), 3);
    add_background_object(create_tbsolidblack_2688(0, 2024), 3);
    add_background_object(create_tbsolidblack_2688(128, 2024), 3);
    add_background_object(create_tbsolidblack_2688(0, 1896), 3);
    add_background_object(create_tbsolidblack_2688(128, 1896), 3);
    add_background_object(create_tbsolidblack_2688(256, 1832), 3);
    add_background_object(create_tbsolidblack_2688(0, 1768), 3);
    add_background_object(create_tbsolidblack_2688(128, 1768), 3);
    add_background_object(create_tbsolidblack_2688(256, 1704), 3);
    add_background_object(create_tbsolidblack_2688(384, 1832), 3);
    add_background_object(create_tbsolidblack_2688(384, 1704), 3);
    add_background_object(create_tbsolidblack_2688(512, 1832), 3);
    add_background_object(create_tbsolidblack_2688(512, 1704), 3);
    add_background_object(create_tbbluewall4_2783(192, 2216), 3);
    add_background_object(create_tbbluewall4_2783(192, 2152), 3);
    add_background_object(create_tbbluewall4_2783(192, 2088), 3);
    add_background_object(create_tbbluewall4_2783(192, 2024), 3);
    add_background_object(create_tbbluewall6_2784(256, 1960), 3);
    add_background_object(create_tbbluewall11_2791(192, 1960), 3);
    add_background_object(create_tbbluewall6_2784(320, 1960), 3);
    add_background_object(create_tbbluewall6_2784(384, 1960), 3);
    add_background_object(create_tbbluewall6_2784(448, 1960), 3);
    add_background_object(create_tbbluewall6_2784(512, 1960), 3);
    add_background_object(create_tbbluewall6_2784(576, 1960), 3);
    add_background_object(create_tbbluewall14_2794(1216, 2344), 3);
    add_background_object(create_tbbluewall14_2794(1152, 2344), 3);
    add_background_object(create_tbbluewall14_2794(1280, 2344), 3);
    add_background_object(create_tbbluewall14_2794(1344, 2344), 3);
    add_background_object(create_tbbluewall14_2794(1088, 2344), 3);
    add_background_object(create_tbinvertedloop2_2795(1600, 2600), 3);
    add_background_object(create_tbinvertedloop3_2779(1600, 2728), 3);
    add_background_object(create_tbinvertedloop3_2779(2112, 3112), 3);
    add_background_object(create_tbwall24_2737(1600, 3176), 3);
    add_background_object(create_tbinvertedloop2_2795(1664, 2984), 3);
    add_background_object(create_tbbluewall3_2786(2240, 2856), 3);
    add_background_object(create_tbbluewall5_2787(2240, 2920), 3);
    add_background_object(create_tbbluewall7_2788(2176, 2920), 3);
    add_background_object(create_tbbluewall9_2789(2176, 2856), 3);
    add_background_object(create_tbinvertedloop1_2781(2128, 2440), 3);
    add_background_object(create_tbinvertedloop2_2795(2256, 2440), 3);
    add_background_object(create_tbinvertedloop3_2779(2256, 2568), 3);
    add_background_object(create_tbinvertedloop4_2780(2128, 2568), 3);
    add_background_object(create_tbbluewall5_2787(1984, 2920), 3);
    add_background_object(create_tbbluewall7_2788(1856, 2920), 3);
    add_background_object(create_tbbluewall8_2785(1856, 2856), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2792), 3);
    add_background_object(create_tbbluewall8_2785(1856, 2792), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2728), 3);
    add_background_object(create_tbbluewall8_2785(1856, 2728), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2664), 3);
    add_background_object(create_tbbluewall8_2785(1856, 2664), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2600), 3);
    add_background_object(create_tbbluewall8_2785(1856, 2600), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2536), 3);
    add_background_object(create_tbbluewall8_2785(1856, 2536), 3);
    add_background_object(create_tbbluewall12_2792(1856, 2472), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2472), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2408), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2344), 3);
    add_background_object(create_tbbluewall6_2784(1792, 2472), 3);
    add_background_object(create_tbbluewall6_2784(1728, 2472), 3);
    add_background_object(create_tbbluewall7_2788(1664, 2472), 3);
    add_background_object(create_tbbluewall8_2785(1664, 2408), 3);
    add_background_object(create_tbbluewall8_2785(1664, 2344), 3);
    add_background_object(create_tbsolidblack_2688(1728, 2344), 3);
    add_background_object(create_tbsolidblack_2688(1792, 2344), 3);
    add_background_object(create_tbbluewall9_2789(1664, 2280), 3);
    add_background_object(create_tbbluewall14_2794(1664, 2216), 3);
    add_background_object(create_tbbluewall6_2784(1920, 2920), 3);
    add_background_object(create_tbbluewall10_2790(1920, 2856), 3);
    add_background_object(create_tbbluewall3_2786(1984, 2856), 3);
    add_background_object(create_tbsolidblack_2688(384, 2792), 3);
    add_background_object(create_tbsolidblack_2688(256, 2792), 3);
    add_background_object(create_tbsolidblack_2688(384, 2920), 3);
    add_background_object(create_tbsolidblack_2688(256, 2920), 3);
    add_background_object(create_tbsolidblack_2688(640, 2792), 3);
    add_background_object(create_tbsolidblack_2688(512, 2792), 3);
    add_background_object(create_tbsolidblack_2688(640, 2920), 3);
    add_background_object(create_tbsolidblack_2688(512, 2920), 3);
    add_background_object(create_tbsolidblack_2688(896, 2792), 3);
    add_background_object(create_tbsolidblack_2688(768, 2792), 3);
    add_background_object(create_tbsolidblack_2688(896, 2920), 3);
    add_background_object(create_tbsolidblack_2688(768, 2920), 3);
    add_background_object(create_tbbluewall14_2794(1600, 2216), 3);
    add_background_object(create_tbbluewall3_2786(1152, 2728), 3);
    add_background_object(create_tbbluewall4_2783(1024, 2920), 3);
    add_background_object(create_tbbluewall4_2783(1024, 2984), 3);
    add_background_object(create_tbbluewall5_2787(1152, 2856), 3);
    add_background_object(create_tbbluewall11_2791(1024, 2856), 3);
    add_background_object(create_tbinvertedloop4_2780(1088, 3048), 3);
    add_background_object(create_tbsolidblack_2688(896, 3048), 3);
    add_background_object(create_tbbluewall4_2783(1024, 3048), 3);
    add_background_object(create_tbbluewall4_2783(1024, 3112), 3);
    add_background_object(create_tbsolidblack_2688(768, 3048), 3);
    add_background_object(create_tbsolidblack_2688(896, 3176), 3);
    add_background_object(create_tbsolidblack_2688(768, 3176), 3);
    add_background_object(create_tbsolidblack_2688(896, 3304), 3);
    add_background_object(create_tbsolidblack_2688(768, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1152, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1024, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1408, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1280, 3304), 3);
    add_background_object(create_tbbluewall10_2790(1024, 3176), 3);
    add_background_object(create_tbbluewall2_2782(1152, 3176), 3);
    add_background_object(create_tbbluewall2_2782(1216, 3176), 3);
    add_background_object(create_tbbluewall2_2782(1280, 3176), 3);
    add_background_object(create_tbbluewall2_2782(1344, 3176), 3);
    add_background_object(create_tbbluewall2_2782(1472, 3240), 3);
    add_background_object(create_tbbluewall2_2782(1536, 3240), 3);
    add_background_object(create_tbsolidblack_2688(1664, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1536, 3304), 3);
    add_background_object(create_tbbluewall2_2782(1600, 3240), 3);
    add_background_object(create_tbbluewall2_2782(1664, 3240), 3);
    add_background_object(create_tbbluewall2_2782(1728, 3240), 3);
    add_background_object(create_tbbluewall2_2782(1792, 3240), 3);
    add_background_object(create_tbsolidblack_2688(1920, 3304), 3);
    add_background_object(create_tbsolidblack_2688(1792, 3304), 3);
    add_background_object(create_tbbluewall2_2782(1856, 3240), 3);
    add_background_object(create_tbbluewall2_2782(1920, 3240), 3);
    add_background_object(create_tbbluewall2_2782(1984, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2048, 3240), 3);
    add_background_object(create_tbsolidblack_2688(2176, 3304), 3);
    add_background_object(create_tbsolidblack_2688(2048, 3304), 3);
    add_background_object(create_tbbluewall2_2782(2112, 3240), 3);
    add_background_object(create_tbbluewall2_2782(2176, 3240), 3);
    add_background_object(create_tbbluewall13_2793(2240, 3240), 3);
    add_background_object(create_tbbluewall8_2785(2240, 3176), 3);
    add_background_object(create_tbbluewall8_2785(2240, 3112), 3);
    add_background_object(create_tbbluewall8_2785(2240, 3048), 3);
    add_background_object(create_tbbluewall9_2789(2240, 2984), 3);
    add_background_object(create_tbsolidblack_2688(2304, 3176), 3);
    add_background_object(create_tbsolidblack_2688(2304, 3048), 3);
    add_background_object(create_tbsolidblack_2688(2304, 3304), 3);
    add_background_object(create_tbinvertedloop2_2795(1216, 2728), 3);
    add_background_object(create_tbinvertedloop3_2779(1216, 2856), 3);
    add_background_object(create_tbbluewall2_2782(1088, 3176), 3);
    add_background_object(create_tbbluewall6_2784(1088, 2856), 3);
    add_background_object(create_tbinvertedloop1_2781(1088, 2920), 3);
    add_background_object(create_tbbluewall4_2783(1152, 2792), 3);
    add_background_object(create_tbinvertedloop4_2780(1472, 3112), 3);
    add_background_object(create_tbbluetube1_2796(1216, 3112), 3);
    add_background_object(create_tbbluetube1_2796(1280, 3112), 3);
    add_background_object(create_tbbluetube1_2796(1344, 3112), 3);
    add_background_object(create_tbbluetube3_2797(1664, 3176), 3);
    add_background_object(create_tbbluetube2_2798(1472, 2728), 3);
    add_background_object(create_tbbluewall3_2786(1408, 3176), 3);
    add_background_object(create_tbbluewall10_2790(1408, 3240), 3);
    add_background_object(create_tbbluewall4_2783(1792, 2216), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2088), 3);
    add_background_object(create_tbbluewall4_2783(1920, 2024), 3);
    add_background_object(create_tbbluewall13_2793(1728, 2280), 3);
    add_background_object(create_tbbluewall8_2785(1728, 2216), 3);
    add_background_object(create_tbbluewall8_2785(1728, 2152), 3);
    add_background_object(create_tbbluewall8_2785(1728, 2088), 3);
    add_background_object(create_tbsolidblack_2688(1792, 1960), 3);
    add_background_object(create_tbbluewall4_2783(1920, 1960), 3);
    add_background_object(create_tbbluewall8_2785(1728, 2024), 3);
    add_background_object(create_tbsolidblack_2688(2368, 2984), 3);
    add_background_object(create_tbsolidblack_2688(2496, 2984), 3);
    add_background_object(create_tbbluewall13_2793(2496, 2984), 3);
    add_background_object(create_tbbluewall10_2790(2560, 2920), 3);
    add_background_object(create_tbbluewall3_2786(2560, 2856), 3);
    add_background_object(create_tbbluewall9_2789(2496, 2856), 3);
    add_background_object(create_tbsolidblack_2688(2432, 3112), 3);
    add_background_object(create_tbsolidblack_2688(2432, 3240), 3);
    add_background_object(create_tbbluewall13_2793(2624, 2920), 3);
    add_background_object(create_tbbluewall8_2785(2624, 2856), 3);
    add_background_object(create_tbbluewall8_2785(2624, 2792), 3);
    add_background_object(create_tbbluewall8_2785(2624, 2728), 3);
    add_background_object(create_tbsolidblack_2688(2624, 2984), 3);
    add_background_object(create_tbsolidblack_2688(2560, 3112), 3);
    add_background_object(create_tbsolidblack_2688(2688, 3112), 3);
    add_background_object(create_tbsolidblack_2688(2752, 2984), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2856), 3);
    add_background_object(create_tbsolidblack_2688(2688, 2728), 3);
    add_background_object(create_tbbluewall9_2789(2624, 2664), 3);
    add_background_object(create_tbbluewall2_2782(2688, 2664), 3);
    add_background_object(create_tbbluewall2_2782(2752, 2664), 3);
    add_background_object(create_tbbluewall6_2784(2816, 2472), 3);
    add_background_object(create_tbbluewall6_2784(2752, 2472), 3);
    add_background_object(create_tbbluewall7_2788(2688, 2472), 3);
    add_background_object(create_tbbluewall9_2789(2688, 2408), 3);
    add_background_object(create_tbbluewall2_2782(2752, 2408), 3);
    add_background_object(create_tbbluewall2_2782(2880, 2344), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2728), 3);
    add_background_object(create_tbbluewall2_2782(2944, 2664), 3);
    add_background_object(create_tbbluewall2_2782(3008, 2664), 3);
    add_background_object(create_tbladder_2636(2648, 2408), 3);
    add_background_object(create_tbladder_2636(2648, 2440), 3);
    add_background_object(create_tbladder_2636(2648, 2472), 3);
    add_background_object(create_tbladder_2636(2648, 2504), 3);
    add_background_object(create_tbladder_2636(2648, 2536), 3);
    add_background_object(create_tbladder_2636(2648, 2568), 3);
    add_background_object(create_tbbluewall7_2788(2368, 2280), 3);
    add_background_object(create_tbbluewall5_2787(2432, 2280), 3);
    add_background_object(create_tbbluewall4_2783(2432, 2216), 3);
    add_background_object(create_tbbluewall8_2785(2368, 2216), 3);
    add_background_object(create_tbbluewall9_2789(2368, 2152), 3);
    add_background_object(create_tbbluewall3_2786(2432, 2152), 3);
    add_background_object(create_tbbluewall10_2790(512, 2664), 3);
    add_background_object(create_tbbluewall3_2786(576, 2664), 3);
    add_background_object(create_tbsolidblack_2688(0, 2792), 3);
    add_background_object(create_tbsolidblack_2688(128, 2792), 3);
    add_background_object(create_tbsolidblack_2688(0, 2920), 3);
    add_background_object(create_tbsolidblack_2688(128, 2920), 3);
    add_background_object(create_tbbackeye_2799(2192, 2504), 3);
    add_background_object(create_tbsolidblack_2688(640, 1832), 3);
    add_background_object(create_tbsolidblack_2688(640, 1704), 3);
    add_background_object(create_tbsolidblack_2688(768, 1832), 3);
    add_background_object(create_tbsolidblack_2688(768, 1704), 3);
    add_background_object(create_tbbluewall6_2784(704, 1896), 3);
    add_background_object(create_tbbluewall6_2784(768, 1896), 3);
    add_background_object(create_tbbluewall6_2784(832, 1896), 3);
    add_background_object(create_tbsolidblack_2688(896, 1832), 3);
    add_background_object(create_tbsolidblack_2688(896, 1704), 3);
    add_background_object(create_tbsolidblack_2688(1024, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1024, 1704), 3);
    add_background_object(create_tbbluewall6_2784(960, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1024, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1088, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1152, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1152, 1704), 3);
    add_background_object(create_tbsolidblack_2688(1280, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1280, 1704), 3);
    add_background_object(create_tbbluewall6_2784(1152, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1216, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1280, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1344, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1408, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1408, 1704), 3);
    add_background_object(create_tbsolidblack_2688(1536, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1536, 1704), 3);
    add_background_object(create_tbbluewall6_2784(1408, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1472, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1536, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1600, 1960), 3);
    add_background_object(create_tbbluewall6_2784(1664, 1960), 3);
    add_background_object(create_tbbluewall12_2792(1728, 1960), 3);
    add_background_object(create_tbsolidblack_2688(1664, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1664, 1704), 3);
    add_background_object(create_tbsolidblack_2688(1792, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1792, 1704), 3);
    add_background_object(create_tbbluewall4_2783(1920, 1896), 3);
    add_background_object(create_tbbluewall6_2784(2112, 1832), 3);
    add_background_object(create_tbsolidblack_2688(2048, 1704), 3);
    add_background_object(create_tbbluewall5_2787(2176, 1832), 3);
    add_background_object(create_tbbluewall4_2783(2176, 1768), 3);
    add_background_object(create_tbbluewall4_2783(2176, 1704), 3);
    add_background_object(create_tbsolidblack_2688(1792, 1576), 3);
    add_background_object(create_tbsolidblack_2688(2048, 1448), 3);
    add_background_object(create_tbbluewall4_2783(2176, 1640), 3);
    add_background_object(create_tbbluewall4_2783(2176, 1576), 3);
    add_background_object(create_tbsolidblack_2688(1664, 1576), 3);
    add_background_object(create_tbbluetube2_2798(1472, 2792), 3);
    add_background_object(create_tbbluetube2_2798(1472, 2856), 3);
    add_background_object(create_tbbluetube2_2798(1472, 2920), 3);
    add_background_object(create_tbbluetube2_2798(1472, 2984), 3);
    add_background_object(create_tbbluetube2_2798(1472, 3048), 3);
    add_background_object(create_tbbluetube4_2800(2176, 3048), 3);
    add_background_object(create_tbbluetube3_2797(1728, 3176), 3);
    add_background_object(create_tbbluetube3_2797(1792, 3176), 3);
    add_background_object(create_tbbluetube3_2797(1856, 3176), 3);
    add_background_object(create_tbbluetube3_2797(1920, 3176), 3);
    add_background_object(create_tbbluetube3_2797(1984, 3176), 3);
    add_background_object(create_tbbluetube3_2797(2048, 3176), 3);
    add_background_object(create_tbbluetube3_2797(2048, 2280), 3);
    add_background_object(create_tbbluetube3_2797(2112, 2280), 3);
    add_background_object(create_tbbluetube3_2797(2176, 2280), 3);
    add_background_object(create_tbbluetube3_2797(2240, 2280), 3);
    add_background_object(create_tbbluetube3_2797(2304, 2920), 3);
    add_background_object(create_tbbluetube3_2797(2368, 2920), 3);
    add_background_object(create_tbbluetube3_2797(2432, 2920), 3);
    add_background_object(create_tbbluewall5_2787(640, 1960), 3);
    add_background_object(create_tbbluewall7_2788(896, 1960), 3);
    add_background_object(create_tbbluewall12_2792(896, 1896), 3);
    add_background_object(create_tbbluewall11_2791(640, 1896), 3);
    add_background_object(create_tbbluetube3_2797(2304, 2280), 3);
    add_background_object(create_tbbluewall7_2788(2688, 2088), 3);
    add_background_object(create_tbbluewall5_2787(2816, 2088), 3);
    add_background_object(create_tbbluewall6_2784(2752, 2088), 3);
    add_background_object(create_tbbluewall2_2782(2432, 2984), 3);
    add_background_object(create_tbbluewall2_2782(2368, 2984), 3);
    add_background_object(create_tbbluewall2_2782(2304, 2984), 3);
    add_background_object(create_tbbluewall8_2785(2496, 2920), 3);
    add_background_object(create_tbbluewall9_2789(2816, 2344), 3);
    add_background_object(create_tbbluewall13_2793(2816, 2408), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2856), 3);
    add_background_object(create_tbsolidblack_2688(2880, 2408), 3);
    add_background_object(create_tbbluewall6_2784(2880, 2472), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2856), 3);
    add_background_object(create_tbbluewall3_2786(3136, 2664), 3);
    add_background_object(create_tbsolidblack_2688(4856, 2160), 3);
    add_background_object(create_tbsolidblack_2688(4728, 2160), 3);
    add_background_object(create_tbsolidblack_2688(5112, 2160), 3);
    add_background_object(create_tbbluewall6_2784(3392, 2472), 3);
    add_background_object(create_tbbluewall6_2784(3456, 2472), 3);
    add_background_object(create_tbbluewall6_2784(3520, 2472), 3);
    add_background_object(create_tbbluewall6_2784(3584, 2472), 3);
    add_background_object(create_tbbluewall6_2784(3648, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3456, 2344), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2344), 3);
    add_background_object(create_tbsolidblack_2688(3328, 2344), 3);
    add_background_object(create_tbbluewall6_2784(3328, 2472), 3);
    add_background_object(create_tbsolidblack_2688(5240, 2160), 3);
    add_background_object(create_tbsolidblack_2688(5368, 2160), 3);
    add_background_object(create_tbsolidblack_2688(5496, 2160), 3);
    add_background_object(create_tbbluewall6_2784(3264, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3200, 2344), 3);
    add_background_object(create_tbbluewall6_2784(3200, 2472), 3);
    add_background_object(create_tbbluewall6_2784(3136, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2344), 3);
    add_background_object(create_tbbluewall6_2784(3072, 2472), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2344), 3);
    add_background_object(create_tbbluewall6_2784(3008, 2472), 3);
    add_background_object(create_tbbluewall6_2784(2944, 2472), 3);
    add_background_object(create_tbbluewall6_2784(3776, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3712, 2344), 3);
    add_background_object(create_tbbluewall6_2784(3712, 2472), 3);
    add_background_object(create_tbbluewall6_2784(3904, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3840, 2344), 3);
    add_background_object(create_tbbluewall6_2784(3840, 2472), 3);
    add_background_object(create_tbbluewall2_2782(3136, 2280), 3);
    add_background_object(create_tbbluewall9_2789(3072, 2280), 3);
    add_background_object(create_tbbluewall13_2793(3072, 2344), 3);
    add_background_object(create_tbbluewall2_2782(2944, 2344), 3);
    add_background_object(create_tbbluewall2_2782(3008, 2344), 3);
    add_background_object(create_tbbluewall2_2782(3200, 2280), 3);
    add_background_object(create_tbbluewall2_2782(3264, 2280), 3);
    add_background_object(create_tbbluewall13_2793(3328, 2280), 3);
    add_background_object(create_tbsolidblack_2688(3520, 2088), 3);
    add_background_object(create_tbsolidblack_2688(3648, 2088), 3);
    add_background_object(create_tbsolidblack_2688(3520, 1960), 3);
    add_background_object(create_tbsolidblack_2688(3648, 1960), 3);
    add_background_object(create_tbbluewall8_2785(3456, 2152), 3);
    add_background_object(create_tbbluewall8_2785(3456, 2088), 3);
    add_background_object(create_tbbluewall8_2785(3456, 2024), 3);
    add_background_object(create_tbbluewall8_2785(3456, 1960), 3);
    add_background_object(create_tbsolidblack_2688(2752, 1960), 3);
    add_background_object(create_tbbluewall11_2791(2816, 2024), 3);
    add_background_object(create_tbbluewall6_2784(2880, 2024), 3);
    add_background_object(create_tbbluewall6_2784(2944, 2024), 3);
    add_background_object(create_tbbluewall5_2787(3008, 2024), 3);
    add_background_object(create_tbbluewall3_2786(3008, 1960), 3);
    add_background_object(create_tbbluewall2_2782(2880, 1960), 3);
    add_background_object(create_tbbluewall2_2782(2944, 1960), 3);
    add_background_object(create_tbbluewall9_2789(3328, 2216), 3);
    add_background_object(create_tbbluewall13_2793(3456, 2216), 3);
    add_background_object(create_tbbluewall2_2782(3392, 2216), 3);
    add_background_object(create_tbbluepiping2_2768(3360, 1896), 3);
    add_background_object(create_tbbluewall8_2785(3456, 1896), 3);
    add_background_object(create_tbbluepiping2_2768(3360, 1736), 3);
    add_background_object(create_tbbluepiping2_2768(3360, 1576), 3);
    add_background_object(create_tbbluewall8_2785(3456, 1832), 3);
    add_background_object(create_tbsolidblack_2688(3520, 1832), 3);
    add_background_object(create_tbsolidblack_2688(3648, 1832), 3);
    add_background_object(create_tbbluewall8_2785(3456, 1768), 3);
    add_background_object(create_tbbluewall8_2785(3456, 1704), 3);
    add_background_object(create_tbsolidblack_2688(3520, 1704), 3);
    add_background_object(create_tbsolidblack_2688(3648, 1704), 3);
    add_background_object(create_tbbluewall8_2785(3456, 1640), 3);
    add_background_object(create_tbbluewall8_2785(3456, 1576), 3);
    add_background_object(create_tbsolidblack_2688(3520, 1576), 3);
    add_background_object(create_tbsolidblack_2688(3648, 1576), 3);
    add_background_object(create_tbsolidblack_2688(3520, 1448), 3);
    add_background_object(create_tbsolidblack_2688(3648, 1448), 3);
    add_background_object(create_tbsolidblack_2688(3520, 1320), 3);
    add_background_object(create_tbsolidblack_2688(3648, 1320), 3);
    add_background_object(create_tbsolidblack_2688(3264, 1384), 3);
    add_background_object(create_tbsolidblack_2688(3392, 1384), 3);
    add_background_object(create_tbsolidblack_2688(3264, 1256), 3);
    add_background_object(create_tbbluewall12_2792(3456, 1512), 3);
    add_background_object(create_tbbluewall6_2784(3392, 1512), 3);
    add_background_object(create_tbwallshadow_2598(2816, 2568), 3);
    add_background_object(create_tbbluewall2_2782(2816, 1960), 3);
    add_background_object(create_tbbluewall2_2782(2752, 1960), 3);
    add_background_object(create_tbbluewall8_2785(2688, 2024), 3);
    add_background_object(create_tbbluewall9_2789(2688, 1960), 3);
    add_background_object(create_tbbluewall14_2794(2240, 1832), 3);
    add_background_object(create_tbbluewall7_2788(2368, 1832), 3);
    add_background_object(create_tbbluewall5_2787(2432, 1832), 3);
    add_background_object(create_tbbluewall4_2783(2432, 1768), 3);
    add_background_object(create_tbbluewall4_2783(2432, 1704), 3);
    add_background_object(create_tbbluewall4_2783(2432, 1640), 3);
    add_background_object(create_tbbluewall4_2783(2432, 1576), 3);
    add_background_object(create_tbbluewall8_2785(2368, 1768), 3);
    add_background_object(create_tbbluewall8_2785(2368, 1704), 3);
    add_background_object(create_tbbluewall8_2785(2368, 1640), 3);
    add_background_object(create_tbbluewall8_2785(2368, 1576), 3);
    add_background_object(create_tbsolidblack_2688(2048, 1576), 3);
    add_background_object(create_tbsolidblack_2688(2176, 1448), 3);
    add_background_object(create_tbsolidblack_2688(2304, 1448), 3);
    add_background_object(create_tbbluewall11_2791(2176, 1512), 3);
    add_background_object(create_tbbluewall12_2792(2368, 1512), 3);
    add_background_object(create_tbbluewall6_2784(2240, 1512), 3);
    add_background_object(create_tbbluewall6_2784(2304, 1512), 3);
    add_background_object(create_tbbluewall7_2788(3200, 1512), 3);
    add_background_object(create_tbbluewall8_2785(3200, 1448), 3);
    add_background_object(create_tbbluewall8_2785(3200, 1384), 3);
    add_background_object(create_tblongrailing2_2689(2776, 1424), 3);
    add_background_object(create_tblongrailing3_2690(2976, 1424), 3);
    add_background_object(create_tblongrailing2_2689(2776, 1360), 3);
    add_background_object(create_tblongrailing3_2690(2976, 1360), 3);
    add_background_object(create_tblongrailing2_2689(2776, 1296), 3);
    add_background_object(create_tblongrailing3_2690(2976, 1296), 3);
    add_background_object(create_tblongrailing_2707(2784, 1344), 3);
    add_background_object(create_tblongrailing_2707(2848, 1344), 3);
    add_background_object(create_tblongrailing_2707(2912, 1344), 3);
    add_background_object(create_tblongrailing2_2689(2776, 1232), 3);
    add_background_object(create_tblongrailing3_2690(2976, 1232), 3);
    add_background_object(create_tblongrailing2_2689(2776, 1168), 3);
    add_background_object(create_tblongrailing3_2690(2976, 1168), 3);
    add_background_object(create_tbbluewall11_2791(2432, 1512), 3);
    add_background_object(create_tbbluewall6_2784(2496, 1512), 3);
    add_background_object(create_tbbluewall5_2787(2560, 1512), 3);
    add_background_object(create_tbbluewall3_2786(2560, 1448), 3);
    add_background_object(create_tbbluewall2_2782(2496, 1448), 3);
    add_background_object(create_tbbluewall10_2790(2432, 1448), 3);
    add_background_object(create_tbbluewall3_2786(2432, 1384), 3);
    add_background_object(create_tbbluewall2_2782(2368, 1384), 3);
    add_background_object(create_tbbluewall2_2782(2304, 1384), 3);
    add_background_object(create_tbbluewall14_2794(3200, 1576), 3);
    add_background_object(create_tbbluewall14_2794(3136, 1576), 3);
    add_background_object(create_tbbluewall11_2791(3328, 1512), 3);
    add_background_object(create_tbbluewall12_2792(3264, 1512), 3);
    add_background_object(create_tbbluewall5_2787(3328, 1576), 3);
    add_background_object(create_tbbluewall7_2788(3264, 1576), 3);
    add_background_object(create_tbsolidblack_2688(3264, 1256), 3);
    add_background_object(create_tbbluewall8_2785(3200, 1320), 3);
    add_background_object(create_tbbluewall8_2785(3200, 1256), 3);
    add_background_object(create_tbsolidblack_2688(3264, 1128), 3);
    add_background_object(create_tbbluewall8_2785(3200, 1192), 3);
    add_background_object(create_tbbluewall12_2792(3200, 1128), 3);
    add_background_object(create_tbbluewall6_2784(3136, 1128), 3);
    add_background_object(create_tbbluewall6_2784(3072, 1128), 3);
    add_background_object(create_tbbluewall6_2784(3008, 1128), 3);
    add_background_object(create_tbbluewall6_2784(2944, 1128), 3);
    add_background_object(create_tbbluewall6_2784(2880, 1128), 3);
    add_background_object(create_tbbluewall6_2784(2816, 1128), 3);
    add_background_object(create_tbbluewall6_2784(2752, 1128), 3);
    add_background_object(create_tbsolidblack_2688(3264, 1000), 3);
    add_background_object(create_tbsolidblack_2688(3136, 1000), 3);
    add_background_object(create_tbsolidblack_2688(3008, 1000), 3);
    add_background_object(create_tbsolidblack_2688(2880, 1000), 3);
    add_background_object(create_tbsolidblack_2688(2752, 1000), 3);
    add_background_object(create_tbbluewall6_2784(2688, 1128), 3);
    add_background_object(create_tbbluewall6_2784(2624, 1128), 3);
    add_background_object(create_tbsolidblack_2688(2624, 1000), 3);
    add_background_object(create_tbbluewall6_2784(2496, 1192), 3);
    add_background_object(create_tbsolidblack_2688(2496, 1064), 3);
    add_background_object(create_tbbluewall5_2787(2560, 1192), 3);
    add_background_object(create_tbbluewall11_2791(2560, 1128), 3);
    add_background_object(create_tbsolidblack_2688(2496, 936), 3);
    add_background_object(create_tbbluewall6_2784(2368, 1192), 3);
    add_background_object(create_tbsolidblack_2688(2368, 1064), 3);
    add_background_object(create_tbsolidblack_2688(2368, 936), 3);
    add_background_object(create_tbbluewall6_2784(2432, 1192), 3);
    add_background_object(create_tbbluewall2_2782(2240, 1384), 3);
    add_background_object(create_tbbluewall2_2782(2176, 1384), 3);
    add_background_object(create_tbbluewall7_2788(2304, 1192), 3);
    add_background_object(create_tbsolidblack_2688(2240, 1000), 3);
    add_background_object(create_tbbluewall12_2792(2304, 1128), 3);
    add_background_object(create_tbbluewall6_2784(2240, 1128), 3);
    add_background_object(create_tbsolidblack_2688(2112, 1000), 3);
    add_background_object(create_tbbluewall6_2784(2176, 1128), 3);
    add_background_object(create_tbbluewall6_2784(2112, 1128), 3);
    add_background_object(create_tbbluewall2_2782(2112, 1384), 3);
    add_background_object(create_tbsolidblack_2688(1984, 1064), 3);
    add_background_object(create_tbsolidblack_2688(1856, 1064), 3);
    add_background_object(create_tbbluewall6_2784(1920, 1192), 3);
    add_background_object(create_tbbluewall6_2784(1856, 1192), 3);
    add_background_object(create_tbbluewall2_2782(1856, 1384), 3);
    add_background_object(create_tbsolidblack_2688(1792, 1448), 3);
    add_background_object(create_tbsolidblack_2688(1664, 1448), 3);
    add_background_object(create_tbsolidblack_2688(1792, 1064), 3);
    add_background_object(create_tbsolidblack_2688(1600, 936), 3);
    add_background_object(create_tbsolidblack_2688(1536, 1448), 3);
    add_background_object(create_tbbluewall4_2783(1792, 1320), 3);
    add_background_object(create_tbbluewall11_2791(1792, 1192), 3);
    add_background_object(create_tbbluewall10_2790(1792, 1384), 3);
    add_background_object(create_tbbluewall4_2783(1792, 1256), 3);
    add_background_object(create_tbsolidblack_2688(1536, 1320), 3);
    add_background_object(create_tbsolidblack_2688(1536, 1576), 3);
    add_background_object(create_tbsolidblack_2688(1536, 1192), 3);
    add_background_object(create_tbsolidblack_2688(1536, 1064), 3);
    add_background_object(create_tbsolidblack_2688(1472, 936), 3);
    add_background_object(create_tbsolidblack_2688(3584, 2216), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2728), 3);
    add_background_object(create_tbbluewall2_2782(2816, 2664), 3);
    add_background_object(create_tbbluewall2_2782(2880, 2664), 3);
    add_background_object(create_tbinvertedloop2_2795(3200, 2664), 3);
    add_background_object(create_tbbluewall3_2786(3200, 2728), 3);
    add_background_object(create_tbbluewall2_2782(3072, 2664), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2728), 3);
    add_background_object(create_tbsolidblack_2688(3072, 2856), 3);
    add_background_object(create_tbbluewall10_2790(3136, 2728), 3);
    add_background_object(create_tbbluetube2_2798(3264, 2792), 3);
    add_background_object(create_tbbluetube2_2798(3264, 2856), 3);
    add_background_object(create_tbbluewall4_2783(3200, 2856), 3);
    add_background_object(create_tbbluewall4_2783(3200, 2792), 3);
    add_background_object(create_tbsolidblack_2688(2816, 2984), 3);
    add_background_object(create_tbbluetube2_2798(3392, 2664), 3);
    add_background_object(create_tbbluetube2_2798(3392, 2728), 3);
    add_background_object(create_tbbluetube2_2798(3392, 2536), 3);
    add_background_object(create_tbbluetube2_2798(3392, 2600), 3);
    add_background_object(create_tbinvertedloop3_2779(3648, 2920), 3);
    add_background_object(create_tbinvertedloop2_2795(3648, 2728), 3);
    add_background_object(create_tbinvertedloop1_2781(3520, 2728), 3);
    add_background_object(create_tbbluetube2_2798(3520, 2856), 3);
    add_background_object(create_tbbluetube2_2798(3520, 2984), 3);
    add_background_object(create_tbbluetube4_2800(2176, 2984), 3);
    add_background_object(create_tbbluetube4_2800(3712, 2856), 3);
    add_background_object(create_tbinvertedloop4_2780(3520, 3112), 3);
    add_background_object(create_tbinvertedloop3_2779(3776, 3112), 3);
    add_background_object(create_tbbluetube1_2796(3648, 3176), 3);
    add_background_object(create_tbbluetube1_2796(3712, 3176), 3);
    add_background_object(create_tbbluewall14_2794(3840, 2984), 3);
    add_background_object(create_tbinvertedloop2_2795(3968, 2984), 3);
    add_background_object(create_tbbluetube3_2797(3904, 2984), 3);
    add_background_object(create_tbbluewall14_2794(3904, 2792), 3);
    add_background_object(create_tbinvertedloop4_2780(3776, 2536), 3);
    add_background_object(create_tbbluetube1_2796(3904, 2600), 3);
    add_background_object(create_tbbluetube1_2796(3968, 2600), 3);
    add_background_object(create_tbinvertedloop3_2779(4032, 2536), 3);
    add_background_object(create_tbbluewall6_2784(4032, 2472), 3);
    add_background_object(create_tbsolidblack_2688(3968, 2344), 3);
    add_background_object(create_tbbluewall6_2784(3968, 2472), 3);
    add_background_object(create_tbbluewall6_2784(4160, 2472), 3);
    add_background_object(create_tbsolidblack_2688(4096, 2344), 3);
    add_background_object(create_tbbluewall6_2784(4096, 2472), 3);
    add_background_object(create_tbbluetube4_2800(3840, 3048), 3);
    add_background_object(create_tbsolidblack_2688(2816, 3112), 3);
    add_background_object(create_tbsolidblack_2688(3200, 3112), 3);
    add_background_object(create_tbbluewall4_2783(3328, 3176), 3);
    add_background_object(create_tbsolidblack_2688(2944, 2984), 3);
    add_background_object(create_tbsolidblack_2688(3072, 3240), 3);
    add_background_object(create_tbsolidblack_2688(3200, 3240), 3);
    add_background_object(create_tbbluewall4_2783(3328, 3240), 3);
    add_background_object(create_tbsolidblack_2688(3072, 3368), 3);
    add_background_object(create_tbsolidblack_2688(3200, 3368), 3);
    add_background_object(create_tbsolidblack_2688(3072, 3496), 3);
    add_background_object(create_tbsolidblack_2688(3200, 3496), 3);
    add_background_object(create_tbsolidblack_2688(3328, 3496), 3);
    add_background_object(create_tbsolidblack_2688(3456, 3496), 3);
    add_background_object(create_tbbluewall10_2790(3328, 3304), 3);
    add_background_object(create_tbbluewall2_2782(3392, 3304), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3496), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3496), 3);
    add_background_object(create_tbbluetube3_2797(3968, 2984), 3);
    add_background_object(create_tbbluewall14_2794(4032, 2984), 3);
    add_background_object(create_tbbluetube4_2800(4032, 3048), 3);
    add_background_object(create_tbbluewall10_2790(3200, 2920), 3);
    add_background_object(create_tbbluewall3_2786(3264, 2920), 3);
    add_background_object(create_tbbluewall5_2787(3264, 2984), 3);
    add_background_object(create_tbbluewall14_2794(3328, 2984), 3);
    add_background_object(create_tbbluewall3_2786(3328, 3112), 3);
    add_background_object(create_tbbluewall2_2782(3264, 3112), 3);
    add_background_object(create_tbbluewall2_2782(3200, 3112), 3);
    add_background_object(create_tbsolidblack_2688(2944, 3112), 3);
    add_background_object(create_tbsolidblack_2688(2944, 3240), 3);
    add_background_object(create_tbbluewall6_2784(3200, 2984), 3);
    add_background_object(create_tbsolidblack_2688(2816, 3240), 3);
    add_background_object(create_tbsolidblack_2688(2944, 3368), 3);
    add_background_object(create_tbsolidblack_2688(2816, 3368), 3);
    add_background_object(create_tbsolidblack_2688(2944, 3496), 3);
    add_background_object(create_tbsolidblack_2688(3072, 3112), 3);
    add_background_object(create_tbbluewall2_2782(3136, 3112), 3);
    add_background_object(create_tbbluewall6_2784(3136, 2984), 3);
    add_background_object(create_tbbluewall11_2791(3072, 2984), 3);
    add_background_object(create_tbbluewall10_2790(3072, 3112), 3);
    add_background_object(create_tbbluewall4_2783(3072, 3048), 3);
    add_background_object(create_tbsolidblack_2688(3328, 3368), 3);
    add_background_object(create_tbsolidblack_2688(3456, 3368), 3);
    add_background_object(create_tbbluewall14_2794(3968, 2792), 3);
    add_background_object(create_tbbluewall14_2794(4032, 2792), 3);
    add_background_object(create_tbbluewall14_2794(4096, 2792), 3);
    add_background_object(create_tbbluewall14_2794(4160, 2792), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3368), 3);
    add_background_object(create_tbbluewall2_2782(3648, 3368), 3);
    add_background_object(create_tbbluewall3_2786(3712, 3368), 3);
    add_background_object(create_tbbluewall2_2782(3584, 3368), 3);
    add_background_object(create_tbbluewall2_2782(3520, 3368), 3);
    add_background_object(create_tbbluewall10_2790(3456, 3368), 3);
    add_background_object(create_tbbluewall3_2786(3456, 3304), 3);
    add_background_object(create_tbbluewall9_2789(4032, 3112), 3);
    add_background_object(create_tbbluewall7_2788(4032, 3176), 3);
    add_background_object(create_tbbluewall2_2782(4096, 3112), 3);
    add_background_object(create_tbbluewall2_2782(4160, 3112), 3);
    add_background_object(create_tbbluewall6_2784(4096, 3176), 3);
    add_background_object(create_tbbluewall6_2784(4160, 3176), 3);
    add_background_object(create_tbbluewall4_2783(3712, 3432), 3);
    add_background_object(create_tbbluewall4_2783(3840, 3560), 3);
    add_background_object(create_tbbluewall9_2789(4032, 3368), 3);
    add_background_object(create_tbbluewall2_2782(4096, 3368), 3);
    add_background_object(create_tbbluewall2_2782(4160, 3368), 3);
    add_background_object(create_tbsolidblack_2688(4096, 3432), 3);
    add_background_object(create_tbbluewall8_2785(4032, 3432), 3);
    add_background_object(create_tbbluewall8_2785(4032, 3496), 3);
    add_background_object(create_tbbluewall7_2788(4032, 3560), 3);
    add_background_object(create_tbbluewall6_2784(4096, 3560), 3);
    add_background_object(create_tbbluewall6_2784(4160, 3560), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3624), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3624), 3);
    add_background_object(create_tbbluewall4_2783(3840, 3624), 3);
    add_background_object(create_tbbluewall4_2783(3840, 3688), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3752), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3752), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3816), 3);
    add_background_object(create_tbsolidblack_2688(3968, 3816), 3);
    add_background_object(create_tbsolidblack_2688(3584, 3880), 3);
    add_background_object(create_tbsolidblack_2688(3712, 3880), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3944), 3);
    add_background_object(create_tbsolidblack_2688(3968, 3944), 3);
    add_background_object(create_tbsolidblack_2688(4096, 3816), 3);
    add_background_object(create_tbsolidblack_2688(4224, 3816), 3);
    add_background_object(create_tbsolidblack_2688(4096, 3944), 3);
    add_background_object(create_tbsolidblack_2688(4224, 3944), 3);
    add_background_object(create_tbbluewall10_2790(3840, 3752), 3);
    add_background_object(create_tbbluewall2_2782(3904, 3752), 3);
    add_background_object(create_tbbluewall2_2782(3968, 3752), 3);
    add_background_object(create_tbbluewall2_2782(4032, 3752), 3);
    add_background_object(create_tbbluewall2_2782(4096, 3752), 3);
    add_background_object(create_tbbluewall2_2782(4160, 3752), 3);
    add_background_object(create_tbbluewall3_2786(4224, 3368), 3);
    add_background_object(create_tbbluewall5_2787(4224, 3560), 3);
    add_background_object(create_tbbluewall4_2783(4224, 3496), 3);
    add_background_object(create_tbbluewall4_2783(4224, 3432), 3);
    add_background_object(create_tbbluewall2_2782(4224, 3752), 3);
    add_background_object(create_tbbluewall2_2782(4288, 3752), 3);
    add_background_object(create_tbsolidblack_2688(4352, 3816), 3);
    add_background_object(create_tbsolidblack_2688(4352, 3944), 3);
    add_background_object(create_tbbluewall2_2782(4352, 3752), 3);
    add_background_object(create_tbsolidblack_2688(4480, 3816), 3);
    add_background_object(create_tbsolidblack_2688(4480, 3944), 3);
    add_background_object(create_tbsolidblack_2688(4480, 3688), 3);
    add_background_object(create_tbbluewall13_2793(4416, 3752), 3);
    add_background_object(create_tbbluewall8_2785(4416, 3688), 3);
    add_background_object(create_tbbluewall9_2789(4416, 3624), 3);
    add_background_object(create_tbbluewall2_2782(4544, 3624), 3);
    add_background_object(create_tbsolidblack_2688(4608, 3816), 3);
    add_background_object(create_tbsolidblack_2688(4608, 3944), 3);
    add_background_object(create_tbsolidblack_2688(4608, 3688), 3);
    add_background_object(create_tbbluewall2_2782(4608, 3624), 3);
    add_background_object(create_tbbluewall13_2793(4672, 3624), 3);
    add_background_object(create_tbbluewall8_2785(4672, 3496), 3);
    add_background_object(create_tbbluewall8_2785(4672, 3432), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3816), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3944), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3560), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3688), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3432), 3);
    add_background_object(create_tbbluewall9_2789(4672, 3368), 3);
    add_background_object(create_tbbluewall2_2782(4736, 3368), 3);
    add_background_object(create_tbbluewall2_2782(4800, 3368), 3);
    add_background_object(create_tbbluewall3_2786(4224, 3112), 3);
    add_background_object(create_tbbluewall5_2787(4224, 3176), 3);
    add_background_object(create_tbbluewall13_2793(4864, 3368), 3);
    add_background_object(create_tbbluewall9_2789(4864, 3240), 3);
    add_background_object(create_tbbluewall2_2782(4928, 3240), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3304), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3432), 3);
    add_background_object(create_tbbluewall2_2782(4992, 3240), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3432), 3);
    add_background_object(create_tbsolidblack_2688(5248, 3304), 3);
    add_background_object(create_tbsolidblack_2688(5248, 3432), 3);
    add_background_object(create_tbbluewall2_2782(5056, 3240), 3);
    add_background_object(create_tbbluewall3_2786(5120, 3240), 3);
    add_background_object(create_tbbluewall10_2790(5120, 3432), 3);
    add_background_object(create_tbbluewall2_2782(5312, 3304), 3);
    add_background_object(create_tbsolidblack_2688(4864, 3560), 3);
    add_background_object(create_tbsolidblack_2688(4864, 3688), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3560), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3560), 3);
    add_background_object(create_tbsolidblack_2688(5248, 3560), 3);
    add_background_object(create_tbbluewall13_2793(5248, 3432), 3);
    add_background_object(create_tbbluewall9_2789(5248, 3304), 3);
    add_background_object(create_tbbluewall4_2783(5120, 3304), 3);
    add_background_object(create_tbsolidblack_2688(5376, 3304), 3);
    add_background_object(create_tbsolidblack_2688(5376, 3432), 3);
    add_background_object(create_tbsolidblack_2688(5376, 3560), 3);
    add_background_object(create_tbbluewall2_2782(5376, 3304), 3);
    add_background_object(create_tbbluewall13_2793(5440, 3304), 3);
    add_background_object(create_tbbluewall9_2789(5440, 3240), 3);
    add_background_object(create_tbbluewall2_2782(5504, 3240), 3);
    add_background_object(create_tbsolidblack_2688(5504, 3304), 3);
    add_background_object(create_tbbluewall2_2782(5568, 3240), 3);
    add_background_object(create_tbbluewall2_2782(5632, 3240), 3);
    add_background_object(create_tbsolidblack_2688(5504, 3432), 3);
    add_background_object(create_tbsolidblack_2688(5504, 3560), 3);
    add_background_object(create_tbbluewall3_2786(5696, 3240), 3);
    add_background_object(create_tbbluewall10_2790(5696, 3304), 3);
    add_background_object(create_tbbluewall2_2782(5760, 3304), 3);
    add_background_object(create_tbsolidblack_2688(5632, 3560), 3);
    add_background_object(create_tbsolidblack_2688(5760, 3432), 3);
    add_background_object(create_tbsolidblack_2688(5760, 3560), 3);
    add_background_object(create_tbbluewall13_2793(5824, 3304), 3);
    add_background_object(create_tbbluewall8_2785(5824, 3240), 3);
    add_background_object(create_tbbluewall9_2789(5824, 3176), 3);
    add_background_object(create_tbbluewall2_2782(6016, 3176), 3);
    add_background_object(create_tbbluewall2_2782(6080, 3176), 3);
    add_background_object(create_tbsolidblack_2688(6016, 3240), 3);
    add_background_object(create_tbsolidblack_2688(6016, 3368), 3);
    add_background_object(create_tbsolidblack_2688(6016, 3496), 3);
    add_background_object(create_tbsolidblack_2688(4224, 2344), 3);
    add_background_object(create_tbbluewall6_2784(4224, 2472), 3);
    add_background_object(create_tbbluewall12_2792(4288, 2472), 3);
    add_background_object(create_tbbluewall8_2785(4288, 2536), 3);
    add_background_object(create_tbbluewall7_2788(4288, 2600), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2344), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2472), 3);
    add_background_object(create_tbbluewall6_2784(4352, 2600), 3);
    add_background_object(create_tbbluewall6_2784(4416, 2600), 3);
    add_background_object(create_tbsolidblack_2688(4480, 2344), 3);
    add_background_object(create_tbsolidblack_2688(4480, 2472), 3);
    add_background_object(create_tbbluewall6_2784(4480, 2600), 3);
    add_background_object(create_tbbluewall6_2784(4544, 2600), 3);
    add_background_object(create_tbsolidblack_2688(4608, 2344), 3);
    add_background_object(create_tbsolidblack_2688(4608, 2472), 3);
    add_background_object(create_tbbluewall6_2784(4608, 2600), 3);
    add_background_object(create_tbbluewall6_2784(4672, 2600), 3);
    add_background_object(create_tbsolidblack_2688(4736, 2344), 3);
    add_background_object(create_tbsolidblack_2688(4736, 2472), 3);
    add_background_object(create_tbbluewall6_2784(4736, 2600), 3);
    add_background_object(create_tbbluewall6_2784(4800, 2600), 3);
    add_background_object(create_tbsolidblack_2688(4864, 2344), 3);
    add_background_object(create_tbsolidblack_2688(4864, 2472), 3);
    add_background_object(create_tbbluewall6_2784(4864, 2600), 3);
    add_background_object(create_tbsolidblack_2688(4992, 2344), 3);
    add_background_object(create_tbsolidblack_2688(4992, 2472), 3);
    add_background_object(create_tbsolidblack_2688(4992, 2600), 3);
    add_background_object(create_tbsolidblack_2688(4992, 2728), 3);
    add_background_object(create_tbbluewall12_2792(4928, 2600), 3);
    add_background_object(create_tbbluewall8_2785(4928, 2664), 3);
    add_background_object(create_tbbluewall8_2785(4928, 2728), 3);
    add_background_object(create_tbsolidblack_2688(4992, 2856), 3);
    add_background_object(create_tbbluewall7_2788(4928, 2984), 3);
    add_background_object(create_tbbluewall6_2784(4992, 2984), 3);
    add_background_object(create_tbbluewall6_2784(5056, 2984), 3);
    add_background_object(create_tbsolidblack_2688(5120, 2472), 3);
    add_background_object(create_tbsolidblack_2688(5120, 2600), 3);
    add_background_object(create_tbsolidblack_2688(5120, 2728), 3);
    add_background_object(create_tbsolidblack_2688(5120, 2856), 3);
    add_background_object(create_tbbluewall6_2784(5120, 2984), 3);
    add_background_object(create_tbbluewall6_2784(5184, 2984), 3);
    add_background_object(create_tbsolidblack_2688(5248, 2728), 3);
    add_background_object(create_tbsolidblack_2688(5248, 2856), 3);
    add_background_object(create_tbbluewall6_2784(5248, 2984), 3);
    add_background_object(create_tbbluewall6_2784(5312, 2984), 3);
    add_background_object(create_tbsolidblack_2688(5376, 2728), 3);
    add_background_object(create_tbsolidblack_2688(5376, 2856), 3);
    add_background_object(create_tbbluewall6_2784(5376, 2984), 3);
    add_background_object(create_tbbluewall6_2784(5440, 2984), 3);
    add_background_object(create_tbsolidblack_2688(5504, 2728), 3);
    add_background_object(create_tbsolidblack_2688(5504, 2856), 3);
    add_background_object(create_tbbluewall6_2784(5504, 2984), 3);
    add_background_object(create_tbbluewall6_2784(5568, 2984), 3);
    add_background_object(create_tbbluewall5_2787(5632, 2984), 3);
    add_background_object(create_tbbluewall4_2783(5632, 2920), 3);
    add_background_object(create_tbbluetube4_2800(4416, 2664), 3);
    add_background_object(create_tbbluetube4_2800(5376, 3048), 3);
    add_background_object(create_tbbluetube4_2800(4608, 3560), 3);
    add_background_object(create_tbbluewall8_2785(4672, 3560), 3);
    add_background_object(create_tbbluetube4_2800(4480, 3560), 3);
    add_background_object(create_tbbluewall2_2782(4480, 3624), 3);
    add_background_object(create_tbbluewall14_2794(4416, 3560), 3);
    add_background_object(create_tbbluewall14_2794(4544, 3560), 3);
    add_background_object(create_tbbluewall2_2782(5888, 3176), 3);
    add_background_object(create_tbbluewall2_2782(5952, 3176), 3);
    add_background_object(create_tbsolidblack_2688(5888, 3240), 3);
    add_background_object(create_tbsolidblack_2688(5888, 3368), 3);
    add_background_object(create_tbsolidblack_2688(5888, 3496), 3);
    add_background_object(create_tbsolidblack_2688(6144, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6144, 3240), 3);
    add_background_object(create_tbsolidblack_2688(6144, 3368), 3);
    add_background_object(create_tbbluewall13_2793(6144, 3176), 3);
    add_background_object(create_tbbluewall9_2789(6144, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6272, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6272, 3240), 3);
    add_background_object(create_tbsolidblack_2688(6272, 3368), 3);
    add_background_object(create_tbsolidblack_2688(6400, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6400, 3240), 3);
    add_background_object(create_tbsolidblack_2688(6400, 3368), 3);
    add_background_object(create_tbsolidblack_2688(6528, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6528, 3240), 3);
    add_background_object(create_tbsolidblack_2688(6528, 3368), 3);
    add_background_object(create_tbsolidblack_2688(6656, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6656, 3240), 3);
    add_background_object(create_tbsolidblack_2688(6656, 3368), 3);
    add_background_object(create_tbbluewall2_2782(6208, 3112), 3);
    add_background_object(create_tbbluewall2_2782(6272, 3112), 3);
    add_background_object(create_tbbluewall2_2782(6336, 3112), 3);
    add_background_object(create_tbbluewall2_2782(6400, 3112), 3);
    add_background_object(create_tbbluewall2_2782(6464, 3112), 3);
    add_background_object(create_tbbluewall2_2782(6528, 3112), 3);
    add_background_object(create_tbbluewall2_2782(6592, 3112), 3);
    add_background_object(create_tbbluewall2_2782(6656, 3112), 3);
    add_background_object(create_tbbluewall13_2793(6720, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6784, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6784, 3240), 3);
    add_background_object(create_tbsolidblack_2688(6784, 3368), 3);
    add_background_object(create_tbbluewall9_2789(6720, 3048), 3);
    add_background_object(create_tbbluewall2_2782(6784, 3048), 3);
    add_background_object(create_tbbluewall2_2782(6848, 3048), 3);
    add_background_object(create_tbsolidblack_2688(6912, 3112), 3);
    add_background_object(create_tbsolidblack_2688(6912, 3240), 3);
    add_background_object(create_tbbluewall2_2782(6912, 3048), 3);
    add_background_object(create_tbbluewall2_2782(6976, 3048), 3);
    add_background_object(create_tbsolidblack_2688(7040, 3112), 3);
    add_background_object(create_tbsolidblack_2688(7040, 3240), 3);
    add_background_object(create_tbbluewall2_2782(7040, 3048), 3);
    add_background_object(create_tbbluewall2_2782(7104, 3048), 3);
    add_background_object(create_tbsolidblack_2688(7168, 3112), 3);
    add_background_object(create_tbsolidblack_2688(7168, 3240), 3);
    add_background_object(create_tbbluewall2_2782(7168, 3048), 3);
    add_background_object(create_tbbluewall2_2782(7232, 3048), 3);
    add_background_object(create_tbsolidblack_2688(6912, 2728), 3);
    add_background_object(create_tbbluewall6_2784(6912, 2856), 3);
    add_background_object(create_tbbluewall6_2784(6976, 2856), 3);
    add_background_object(create_tbbluewall7_2788(6848, 2856), 3);
    add_background_object(create_tbbluewall8_2785(6848, 2792), 3);
    add_background_object(create_tbsolidblack_2688(7040, 2728), 3);
    add_background_object(create_tbbluewall6_2784(7040, 2856), 3);
    add_background_object(create_tbbluewall6_2784(7104, 2856), 3);
    add_background_object(create_tbsolidblack_2688(7168, 2728), 3);
    add_background_object(create_tbbluewall6_2784(7168, 2856), 3);
    add_background_object(create_tbbluewall6_2784(7232, 2856), 3);
    add_background_object(create_tbbluewall3_2786(7296, 3048), 3);
    add_background_object(create_tbbluewall10_2790(7296, 3112), 3);
    add_background_object(create_tbbluewall2_2782(7360, 3112), 3);
    add_background_object(create_tbbluewall3_2786(7424, 3112), 3);
    add_background_object(create_tbbluewall10_2790(7424, 3176), 3);
    add_background_object(create_tbbluewall2_2782(7488, 3176), 3);
    add_background_object(create_tbbluewall3_2786(7552, 3176), 3);
    add_background_object(create_tbbluewall10_2790(7552, 3240), 3);
    add_background_object(create_tbbluewall2_2782(7616, 3240), 3);
    add_background_object(create_tbbluewall2_2782(7680, 3240), 3);
    add_background_object(create_tbbluewall2_2782(7744, 3240), 3);
    add_background_object(create_tbbluewall2_2782(7808, 3240), 3);
    add_background_object(create_tbbluewall2_2782(7872, 3240), 3);
    add_background_object(create_tbbluewall2_2782(7936, 3240), 3);
    add_background_object(create_tbbluewall2_2782(8000, 3240), 3);
    add_background_object(create_tbsolidblack_2688(7296, 3176), 3);
    add_background_object(create_tbsolidblack_2688(7296, 3304), 3);
    add_background_object(create_tbsolidblack_2688(7424, 3240), 3);
    add_background_object(create_tbsolidblack_2688(7424, 3368), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3304), 3);
    add_background_object(create_tbsolidblack_2688(7552, 3432), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3304), 3);
    add_background_object(create_tbsolidblack_2688(7680, 3432), 3);
    add_background_object(create_tbsolidblack_2688(7808, 3304), 3);
    add_background_object(create_tbsolidblack_2688(7808, 3432), 3);
    add_background_object(create_tbsolidblack_2688(7936, 3304), 3);
    add_background_object(create_tbsolidblack_2688(7936, 3432), 3);
    add_background_object(create_tbsolidblack_2688(7296, 2728), 3);
    add_background_object(create_tbbluewall6_2784(7296, 2856), 3);
    add_background_object(create_tbbluewall6_2784(7360, 2856), 3);
    add_background_object(create_tbsolidblack_2688(7424, 2728), 3);
    add_background_object(create_tbbluewall6_2784(7424, 2856), 3);
    add_background_object(create_tbbluewall12_2792(7488, 2856), 3);
    add_background_object(create_tbbluewall7_2788(7488, 2920), 3);
    add_background_object(create_tbbluewall6_2784(7552, 2920), 3);
    add_background_object(create_tbbluewall7_2788(7680, 2984), 3);
    add_background_object(create_tbsolidblack_2688(7552, 2792), 3);
    add_background_object(create_tbsolidblack_2688(7552, 2664), 3);
    add_background_object(create_tbbluewall6_2784(7616, 2920), 3);
    add_background_object(create_tbbluewall6_2784(7744, 2984), 3);
    add_background_object(create_tbsolidblack_2688(7680, 2856), 3);
    add_background_object(create_tbsolidblack_2688(7680, 2728), 3);
    add_background_object(create_tbbluewall6_2784(7808, 2984), 3);
    add_background_object(create_tbsolidblack_2688(7808, 2856), 3);
    add_background_object(create_tbsolidblack_2688(7808, 2728), 3);
    add_background_object(create_tbsolidblack_2688(7936, 2920), 3);
    add_background_object(create_tbsolidblack_2688(7936, 2792), 3);
    add_background_object(create_tbwallshadow_2598(6976, 2952), 3);
    add_background_object(create_tbwall8_2610(7936, 3080), 3);
    add_background_object(create_tbbluewall12_2792(7872, 2984), 3);
    add_background_object(create_tbbluewall7_2788(7872, 3048), 3);
    add_background_object(create_tbbluewall6_2784(7936, 3048), 3);
    add_background_object(create_tbsolidblack_2688(6912, 3368), 3);
    add_background_object(create_tbsolidblack_2688(7040, 3368), 3);
    add_background_object(create_tbsolidblack_2688(7168, 3368), 3);
    add_background_object(create_tbbluewall7_2788(4928, 2792), 3);
    add_background_object(create_tbbluewall9_2789(4928, 2920), 3);
    add_background_object(create_tbbluewall13_2793(4992, 2920), 3);
    add_background_object(create_tbbluewall8_2785(4992, 2856), 3);
    add_background_object(create_tbbluewall12_2792(4992, 2792), 3);
    add_background_object(create_tbsolidblack_2688(7296, 3432), 3);
    add_background_object(create_tbsolidblack_2688(5632, 2728), 3);
    add_background_object(create_tbsolidblack_2688(5504, 2600), 3);
    add_background_object(create_tbsolidblack_2688(5632, 2600), 3);
    add_background_object(create_tbsolidblack_2688(5760, 2728), 3);
    add_background_object(create_tbsolidblack_2688(5760, 2600), 3);
    add_background_object(create_tbbluewall11_2791(5632, 2856), 3);
    add_background_object(create_tbbluewall6_2784(5696, 2856), 3);
    add_background_object(create_tbbluewall6_2784(5760, 2856), 3);
    add_background_object(create_tbbluewall6_2784(5824, 2856), 3);
    add_background_object(create_tbsolidblack_2688(5888, 2728), 3);
    add_background_object(create_tbsolidblack_2688(5888, 2600), 3);
    add_background_object(create_tbbluewall6_2784(5888, 2856), 3);
    add_background_object(create_tbbluewall6_2784(5952, 2856), 3);
    add_background_object(create_tbsolidblack_2688(5888, 2472), 3);
    add_background_object(create_tbsolidblack_2688(6016, 2600), 3);
    add_background_object(create_tbsolidblack_2688(6016, 2472), 3);
    add_background_object(create_tbbluewall6_2784(6080, 2728), 3);
    add_background_object(create_tbbluewall5_2787(6016, 2856), 3);
    add_background_object(create_tbbluewall4_2783(6016, 2792), 3);
    add_background_object(create_tbbluewall11_2791(6016, 2728), 3);
    add_background_object(create_tbsolidblack_2688(6144, 2600), 3);
    add_background_object(create_tbsolidblack_2688(6144, 2472), 3);
    add_background_object(create_tbbluewall6_2784(6144, 2728), 3);
    add_background_object(create_tbbluewall6_2784(6208, 2728), 3);
    add_background_object(create_tbsolidblack_2688(6272, 2600), 3);
    add_background_object(create_tbsolidblack_2688(6272, 2472), 3);
    add_background_object(create_tbbluewall6_2784(6272, 2728), 3);
    add_background_object(create_tbbluewall6_2784(6336, 2728), 3);
    add_background_object(create_tbsolidblack_2688(6400, 2600), 3);
    add_background_object(create_tbsolidblack_2688(6400, 2472), 3);
    add_background_object(create_tbbluewall6_2784(6400, 2728), 3);
    add_background_object(create_tbbluewall6_2784(6464, 2728), 3);
    add_background_object(create_tbsolidblack_2688(6528, 2600), 3);
    add_background_object(create_tbsolidblack_2688(6528, 2472), 3);
    add_background_object(create_tbbluewall6_2784(6528, 2728), 3);
    add_background_object(create_tbbluewall6_2784(6592, 2728), 3);
    add_background_object(create_tbsolidblack_2688(6656, 2600), 3);
    add_background_object(create_tbsolidblack_2688(6656, 2472), 3);
    add_background_object(create_tbbluewall6_2784(6656, 2728), 3);
    add_background_object(create_tbbluewall6_2784(6720, 2728), 3);
    add_background_object(create_tbsolidblack_2688(6784, 2600), 3);
    add_background_object(create_tbsolidblack_2688(6784, 2472), 3);
    add_background_object(create_tbbluewall6_2784(6784, 2728), 3);
    add_background_object(create_tbbluewall12_2792(6848, 2728), 3);
    add_background_object(create_tbsolidblack_2688(6912, 2600), 3);
    add_background_object(create_tbsolidblack_2688(6912, 2472), 3);
    add_background_object(create_tbsolidblack_2688(7040, 2600), 3);
    add_background_object(create_tbsolidblack_2688(7040, 2472), 3);
    add_background_object(create_tblongrailing2_2689(3136, 1640), 3);
    add_background_object(create_tblongrailing3_2690(3272, 1640), 3);
    add_background_object(create_tblongrailing_2707(3144, 1688), 3);
    add_background_object(create_tblongrailing_2707(3208, 1688), 3);
    add_background_object(create_tbbluewall14_2794(4864, 2984), 3);
    add_background_object(create_tbbluetube3_2797(1984, 2280), 3);
    add_background_object(create_tbbluewall7_2788(2048, 1832), 3);
    add_background_object(create_tbbluewall8_2785(2048, 1768), 3);
    add_background_object(create_tbbluewall8_2785(2048, 1704), 3);
    add_background_object(create_tbbluewall8_2785(2048, 1640), 3);
    add_background_object(create_tbbluewall8_2785(2048, 1576), 3);
    add_background_object(create_tbbluewall8_2785(2048, 1512), 3);
    add_background_object(create_tbbluewall8_2785(2048, 1448), 3);
    add_background_object(create_tbbluewall9_2789(2048, 1384), 3);
    add_background_object(create_tbbluewall3_2786(1920, 1384), 3);
    add_background_object(create_tbbluewall4_2783(1920, 1640), 3);
    add_background_object(create_tbbluewall4_2783(1920, 1576), 3);
    add_background_object(create_tbbluewall4_2783(1920, 1512), 3);
    add_background_object(create_tbbluewall4_2783(1920, 1448), 3);
    add_background_object(create_tbbluewall4_2783(1920, 1768), 3);
    add_background_object(create_tbbluewall4_2783(1920, 1704), 3);
    add_background_object(create_tbbluewall4_2783(1920, 1832), 3);
    add_background_object(create_tbsolidblack_2688(1664, 1320), 3);
    add_background_object(create_tbsolidblack_2688(1664, 1192), 3);
    add_background_object(create_tbsolidblack_2688(1664, 1064), 3);
    add_background_object(create_tbsolidblack_2688(2240, 872), 3);
    add_background_object(create_tbsolidblack_2688(2112, 872), 3);
    add_background_object(create_tbsolidblack_2688(1984, 936), 3);
    add_background_object(create_tbsolidblack_2688(1856, 936), 3);
    add_background_object(create_tbladder_2636(1984, 1384), 3);
    add_background_object(create_tbladder_2636(1984, 1416), 3);
    add_background_object(create_tbsolidblack_2688(1728, 936), 3);
    add_background_object(create_tbbluewall6_2784(2048, 1128), 3);
    add_background_object(create_tbbluewall5_2787(1984, 1192), 3);
    add_background_object(create_tbbluewall11_2791(1984, 1128), 3);
    add_background_object(create_tbbluewall6_2784(1856, 2152), 3);
    add_background_object(create_tbbluewall5_2787(1920, 2152), 3);
    add_background_object(create_tbbluewall11_2791(1792, 2152), 3);
    add_background_object(create_tbbluewall3_2786(1920, 2280), 3);
    add_background_object(create_tbbluewall10_2790(1792, 2280), 3);
    add_background_object(create_tbbluewall2_2782(1856, 2280), 3);
    add_background_object(create_tbsolidblack_2688(3456, 3624), 3);
    add_background_object(create_tbbluewall4_2783(5120, 3368), 3);
    add_background_object(create_tbbluewall8_2785(5248, 3368), 3);
    add_background_object(create_tbbluetube4_2800(4560, 2664), 3);
    add_background_object(create_tbbluetube4_2800(4768, 2664), 3);
    add_background_object(create_tbbluetube4_2800(5184, 3400), 3);
    add_background_object(create_tbbluewall8_2785(4864, 3304), 3);
    add_background_object(create_tbbluewall3_2786(3840, 3496), 3);
    add_background_object(create_tbbluewall10_2790(3712, 3496), 3);
    add_background_object(create_tbbluewall2_2782(3776, 3496), 3);
    add_background_object(create_tbbluewall2_2782(5184, 3432), 3);
    add_background_object(create_tbbluewall12_2792(7680, 2920), 3);
    add_background_object(create_tbsolidblack_2688(1792, 2024), 3);
    add_object(create_objectjumppad_530(7616, 3208), 3);
    add_object(create_objectjumppad_530(7328, 3048), 3);
    add_object(create_objectjumppad_530(5792, 2920), 3);
    add_object(create_objectjumppad_530(5824, 3208), 3);
    add_object(create_objectjumppad_530(4864, 3272), 3);
    add_object(create_objectjumppad_530(4160, 3240), 3);
    add_object(create_objectjumppad_530(3744, 3368), 3);
    add_object(create_objectjumppad_530(3424, 3304), 3);
    add_object(create_objectjumppad_530(3520, 3080), 3);
    add_object(create_objectjumppad_530(3136, 3080), 3);
    add_object(create_objectjumppad_530(4896, 2664), 3);
    add_object(create_objectjumppad_530(4520, 2664), 3);
    add_object(create_objectjumppad_530(4192, 2792), 3);
    add_object(create_playerstartingpoint_358(157, 2581), 3);
    add_object(create_lockeddoorbarrier_2667(2776, 2568), 3);
    add_object(create_gimmickclothesline_1970(2848, 1544), 3);
    add_object(create_gimmickhanginglongsensor2_1741(2768, 1552), 3);
    add_object(create_gimmickhanginglongsensor2_1741(2976, 1552), 3);
    add_object(create_gimmickclothesline_1970(2920, 1544), 3);
    add_object(create_gimmickclothesline_1970(2968, 1544), 3);
    add_object(create_enemypushup_2656(-380, 2567), 3);
    add_object(create_enemypushuphitbox_2653(-379, 2497), 3);
    add_object(create_enemyseeker_2648(-377, 2624), 3);
    add_object(create_switchbuttonright_2714(7096, 544), 3);
    add_object(create_objectexplosiveblock_2708(7144, 512), 3);
    add_object(create_objectexplosiveblock_2708(7144, 448), 3);
    add_object(create_objectexplosiveblock_2708(7144, 384), 3);
    add_object(create_objectexplosiveblock_2708(2432, 1256), 3);
    add_object(create_objectexplosiveblock_2708(2432, 1320), 3);
    add_object(create_switchbuttonleft_2715(2528, 1416), 3);
    add_object(create_enemyelitemask_2511(6420, 3112), 3);
    add_object(create_enemyelite_2510(6423, 3111), 3);
    add_object(create_cameratriggerboss_424(4728, -272), 3);
    add_object(create_hazardfloortrap_2748(6784, 3040), 3);
    add_object(create_gimmickcrankplatformtop1_2801(1000, 2456), 3);
    add_object(create_gimmickcrankplatformtop2_2802(496, 2520), 3);
    add_object(create_gimmickcrankplatformtop2_2802(1328, 2264), 3);
    add_object(create_tbpipeloop1_2803(1472, 2600), 3);
    add_object(create_tbpipeloop2_2804(1472, 2728), 3);
    add_object(create_tbpipeloop5_2805(1472, 2472), 3);
    add_object(create_tbpipeloop7_2806(1408, 2344), 3);
    add_object(create_tbpipeloop3_2807(1664, 3112), 3);
    add_object(create_layerchangeswitch_404(1632, 2704), 3);
    add_object(create_layerchangeswitch_404(1688, 3064), 3);
    add_object(create_tbpipeloop1_2803(1536, 2984), 3);
    add_object(create_tbpipeloop4_2808(1536, 3112), 3);
    add_object(create_redspringup_440(1984, 2840), 3);
    add_object(create_redspringup_440(2016, 2840), 3);
    add_object(create_layerchangeto1_406(1800, 3120), 3);
    add_object(create_layerchangeswitch2_1239(1544, 2904), 3);
    add_object(create_objectcrystal_279(1381, 2330), 3);
    add_object(create_objectcrystal_279(1317, 2330), 3);
    add_object(create_objectcrystal_279(1349, 2330), 3);
    add_object(create_objectcrystal_279(1285, 2330), 3);
    add_object(create_objectcrystal_279(1253, 2330), 3);
    add_object(create_layerchangeswitch_404(1440, 2736), 3);
    add_object(create_layerchangeswitch_404(1440, 2672), 3);
    add_object(create_layerchangeswitch_404(1440, 2608), 3);
    add_object(create_layerchangeswitch_404(1432, 2544), 3);
    add_object(create_layerchangeswitch_404(1416, 2480), 3);
    add_object(create_tbpipeloop5_2805(1472, 2536), 3);
    add_object(create_tbpipeloop5_2805(1472, 2600), 3);
    add_object(create_tbpipeloop5_2805(1472, 2664), 3);
    add_object(create_tbpipeloop6_2809(1472, 2792), 3);
    add_object(create_layerchangeswitch2_1239(1736, 2704), 3);
    add_object(create_layerchangeswitch2_1239(1768, 2704), 3);
    add_object(create_layerchangeswitch2_1239(1800, 2704), 3);
    add_object(create_layerchangeswitch2_1239(1832, 2704), 3);
    add_object(create_objectcrystal_279(1453, 2826), 3);
    add_object(create_objectcrystal_279(1453, 2890), 3);
    add_object(create_objectcrystal_279(1453, 2954), 3);
    add_object(create_objectcrystal_279(1453, 3018), 3);
    add_object(create_objectcrystal_279(1453, 2762), 3);
    add_object(create_yellowspringupright_433(1088, 2536), 3);
    add_object(create_objectcrystal_279(2101, 2570), 3);
    add_object(create_objectcrystal_279(2253, 2410), 3);
    add_object(create_objectcrystal_279(2253, 2722), 3);
    add_object(create_objectcrystal_279(2141, 2450), 3);
    add_object(create_objectcrystal_279(2373, 2450), 3);
    add_object(create_objectcrystal_279(2141, 2682), 3);
    add_object(create_objectcrystal_279(2373, 2682), 3);
    add_object(create_objectcrystal_279(2413, 2570), 3);
    add_object(create_objectcrystal_279(2189, 2714), 3);
    add_object(create_objectcrystal_279(2317, 2714), 3);
    add_object(create_objectcrystal_279(2189, 2418), 3);
    add_object(create_objectcrystal_279(2317, 2418), 3);
    add_object(create_objectcrystal_279(2109, 2506), 3);
    add_object(create_objectcrystal_279(2109, 2634), 3);
    add_object(create_objectcrystal_279(2405, 2506), 3);
    add_object(create_objectcrystal_279(2405, 2626), 3);
    add_object(create_yellowspringupright_433(1088, 2568), 3);
    add_object(create_layerchangeswitch_404(1392, 2424), 3);
    add_object(create_objectpetal_302(1553, 2953), 3);
    add_object(create_objectpetal_302(1553, 3017), 3);
    add_object(create_objectpetal_302(1553, 3081), 3);
    add_object(create_monitorfireshield_328(1648, 2184), 3);
    add_object(create_laddertop_357(2668, 2431), 3);
    add_object(create_objectcrystal_279(717, 2698), 3);
    add_object(create_objectcrystal_279(757, 2698), 3);
    add_object(create_objectcrystal_279(797, 2698), 3);
    add_object(create_objectcrystal_279(837, 2698), 3);
    add_object(create_objectcrystal_279(877, 2698), 3);
    add_object(create_sbbackeye2_2242(2192, 2504), 3);
    add_object(create_objectpetal_302(273, 2257), 3);
    add_object(create_objectpetal_302(305, 2257), 3);
    add_object(create_objectpetal_302(273, 2225), 3);
    add_object(create_objectpetal_302(305, 2225), 3);
    add_object(create_enemysaucerleg4_2810(976, 2704), 3);
    add_object(create_enemysaucerleg1_2811(944, 2704), 3);
    add_object(create_enemysaucer_2812(944, 2704), 3);
    add_object(create_enemysaucerleg2_2813(912, 2704), 3);
    add_object(create_enemysaucerleg3_2814(944, 2704), 3);
    add_object(create_objectcrystal_279(989, 2698), 3);
    add_object(create_objectcrystal_279(1069, 2698), 3);
    add_object(create_objectcrystal_279(1029, 2698), 3);
    add_object(create_objectcrystal_279(1109, 2698), 3);
    add_object(create_enemysaucerleg4_2810(1240, 2320), 3);
    add_object(create_enemysaucerleg1_2811(1208, 2320), 3);
    add_object(create_enemysaucer_2812(1208, 2320), 3);
    add_object(create_enemysaucerleg2_2813(1176, 2320), 3);
    add_object(create_enemysaucerleg3_2814(1208, 2320), 3);
    add_object(create_enemysaucerleg4_2810(2520, 2832), 3);
    add_object(create_enemysaucerleg1_2811(2488, 2832), 3);
    add_object(create_enemysaucer_2812(2488, 2832), 3);
    add_object(create_enemysaucerleg2_2813(2456, 2832), 3);
    add_object(create_enemysaucerleg3_2814(2488, 2832), 3);
    add_object(create_enemysaucerlimiter_2815(704, 2704), 3);
    add_object(create_enemysaucerlimiter_2815(1152, 2320), 3);
    add_object(create_enemysaucerlimiter_2815(2240, 2832), 3);
    add_object(create_enemysaucerlimiter_2815(1152, 2704), 3);
    add_object(create_enemysaucerlimiter_2815(1344, 2320), 3);
    add_object(create_enemysaucerlimiter_2815(2560, 2832), 3);
    add_object(create_layerchangeto0_405(1384, 2296), 3);
    add_object(create_layerchangeto0_405(1408, 2256), 3);
    add_object(create_layerchangeto0_405(1440, 2232), 3);
    add_object(create_layerchangeto0_405(1472, 2216), 3);
    add_object(create_layerchangeto0_405(1504, 2216), 3);
    add_object(create_layerchangeto0_405(1536, 2216), 3);
    add_object(create_layerchangeto0_405(1568, 2216), 3);
    add_object(create_gimmickbubblewavespawner_2816(2768, 807), 3);
    add_object(create_gimmickbubblewavespawner2_2817(2768, 872), 3);
    add_object(create_gimmickconveyorbeltright_2818(2336, 2856), 3);
    add_object(create_gimmickconveyorbeltright2_2819(2304, 2856), 3);
    add_object(create_gimmickconveyorbeltright3_2820(2464, 2856), 3);
    add_object(create_enemytankbot_2821(2999, 2305), 3);
    add_object(create_enemylimiter_350(3093, 2322), 3);
    add_object(create_enemylimiter_350(2821, 2322), 3);
    add_object(create_enemytankbot_2821(3183, 2241), 3);
    add_object(create_enemylimiter_350(3349, 2258), 3);
    add_object(create_enemylimiter_350(3077, 2258), 3);
    add_object(create_yellowspringup_434(3328, 2200), 3);
    add_object(create_gimmickconveyorbeltright2_2819(3072, 1960), 3);
    add_object(create_gimmickconveyorbeltright3_2820(3232, 1960), 3);
    add_object(create_gimmickconveyorbeltright_2818(3104, 1960), 3);
    add_object(create_enemytankbot_2821(3015, 1921), 3);
    add_object(create_enemylimiter_350(3093, 1938), 3);
    add_object(create_enemylimiter_350(2693, 1938), 3);
    add_object(create_enemytankbot_2821(2727, 1921), 3);
    add_object(create_objectpetal_302(3225, 1937), 3);
    add_object(create_objectpetal_302(3169, 1937), 3);
    add_object(create_objectpetal_302(3113, 1937), 3);
    add_object(create_objectcodec_354(2274, 1805), 3);
    add_object(create_objectpetal_302(2273, 1769), 3);
    add_object(create_objectpetal_302(2257, 1745), 3);
    add_object(create_objectpetal_302(2273, 1721), 3);
    add_object(create_objectpetal_302(2257, 1697), 3);
    add_object(create_objectpetal_302(2273, 1673), 3);
    add_object(create_objectpetal_302(2289, 1745), 3);
    add_object(create_objectpetal_302(2289, 1697), 3);
    add_object(create_objectcrystal_279(2005, 1922), 3);
    add_object(create_objectcrystal_279(2005, 1986), 3);
    add_object(create_objectcrystal_279(2005, 2050), 3);
    add_object(create_objectcrystal_279(2005, 2114), 3);
    add_object(create_objectcrystal_279(2005, 2178), 3);
    add_object(create_gimmickcrankplatformtop2_2802(2640, 1800), 3);
    add_object(create_gimmickconveyorbeltright3_2820(2560, 1864), 3);
    add_object(create_gimmickconveyorbeltright_2818(2432, 1864), 3);
    add_object(create_gimmickconveyorbeltright2_2819(2752, 2376), 3);
    add_object(create_gimmickconveyorbeltright3_2820(2784, 2376), 3);
    add_object(create_gimmickclothesline_1970(2848, 1352), 3);
    add_object(create_gimmickhanginglongsensor2_1741(2768, 1360), 3);
    add_object(create_gimmickhanginglongsensor2_1741(2976, 1360), 3);
    add_object(create_gimmickclothesline_1970(2920, 1352), 3);
    add_object(create_gimmickclothesline_1970(2968, 1352), 3);
    add_object(create_objectcrystal_279(2821, 1578), 3);
    add_object(create_objectcrystal_279(2853, 1578), 3);
    add_object(create_objectcrystal_279(2885, 1578), 3);
    add_object(create_objectcrystal_279(2917, 1578), 3);
    add_object(create_objectcrystal_279(2949, 1578), 3);
    add_object(create_gimmickconveyorbeltright2_2819(3072, 1608), 3);
    add_object(create_gimmickconveyorbeltright3_2820(3104, 1608), 3);
    add_object(create_yellowspringupleft_432(3168, 1544), 3);
    add_object(create_objectexplosiveblock_2708(2368, 1256), 3);
    add_object(create_objectexplosiveblock_2708(2368, 1320), 3);
    add_object(create_objectexplosiveblock_2708(2304, 1256), 3);
    add_object(create_objectexplosiveblock_2708(2304, 1320), 3);
    add_object(create_objectkeycard_2643(-280, 1872), 3);
    add_object(create_tbpipeloop8_2822(3520, 2920), 3);
    add_object(create_tbpipeloop9_2823(3584, 2984), 3);
    add_object(create_layerchangeto0_405(3200, 2608), 3);
    add_object(create_layerchangeswitch_404(3640, 2800), 3);
    add_object(create_layerchangeswitch2_1239(3640, 2672), 3);
    add_object(create_layerchangeswitch2_1239(3640, 2608), 3);
    add_object(create_layerchangeswitch2_1239(3640, 2544), 3);
    add_object(create_tbpipeloop2_2804(3392, 2792), 3);
    add_object(create_tbpipeloop9_2823(3456, 2984), 3);
    add_object(create_layerchangeto0_405(3200, 2544), 3);
    add_object(create_tbpipeloop9_2823(3392, 2984), 3);
    add_object(create_tbpipeloop8_2822(3520, 3048), 3);
    add_object(create_layerchangeswitch2_1239(3672, 3056), 3);
    add_object(create_layerchangeswitch2_1239(3672, 3120), 3);
    add_object(create_monitorcrate_409(3264, 3080), 3);
    add_object(create_monitorcrate_409(3296, 3080), 3);
    add_object(create_monitorcrate_409(3200, 3080), 3);
    add_object(create_monitorcrate_409(3232, 3080), 3);
    add_object(create_layerchangeswitch_404(3504, 3136), 3);
    add_object(create_enemytankbot_2821(4111, 2753), 3);
    add_object(create_enemylimiter_350(4245, 2770), 3);
    add_object(create_enemylimiter_350(3909, 2770), 3);
    add_object(create_enemypushup_2656(4156, 3111), 3);
    add_object(create_enemypushuphitbox_2653(4157, 3041), 3);
    add_object(create_gimmickconveyorbeltleft_2824(4704, 3336), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(4672, 3336), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(4832, 3336), 3);
    add_object(create_gimmickconveyorbeltleft_2824(5280, 3272), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(5248, 3272), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(5408, 3272), 3);
    add_object(create_hazardspikesup_2669(5184, 3368), 3);
    add_object(create_hazardspikesup_2669(5216, 3368), 3);
    add_object(create_gimmickconveyorbeltleft_2824(5856, 3144), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(5824, 3144), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(6112, 3144), 3);
    add_object(create_enemytankbot_2821(5607, 3201), 3);
    add_object(create_enemylimiter_350(5781, 3218), 3);
    add_object(create_enemylimiter_350(5445, 3218), 3);
    add_object(create_hazardspikesup_2669(5760, 3272), 3);
    add_object(create_hazardspikesup_2669(5792, 3272), 3);
    add_object(create_enemyseeker_2648(5663, 3120), 3);
    add_object(create_enemytankbot_2821(5719, 3201), 3);
    add_object(create_enemyseeker_2648(2175, 2192), 3);
    add_object(create_gimmickconveyorbeltright2_2819(4224, 2824), 3);
    add_object(create_gimmickconveyorbeltright_2818(4256, 2824), 3);
    add_object(create_gimmickconveyorbeltright3_2820(4384, 2824), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(4576, 2984), 3);
    add_object(create_gimmickconveyorbeltright2_2819(4288, 3208), 3);
    add_object(create_gimmickconveyorbeltright_2818(4320, 3208), 3);
    add_object(create_gimmickconveyorbeltright3_2820(4448, 3208), 3);
    add_object(create_monitorrings_407(4144, 3336), 3);
    add_object(create_objectpetal_302(5377, 3249), 3);
    add_object(create_objectpetal_302(5313, 3249), 3);
    add_object(create_enemysaucerleg4_2810(5056, 3216), 3);
    add_object(create_enemysaucerleg1_2811(5024, 3216), 3);
    add_object(create_enemysaucer_2812(5024, 3216), 3);
    add_object(create_enemysaucerleg2_2813(4992, 3216), 3);
    add_object(create_enemysaucerleg3_2814(5024, 3216), 3);
    add_object(create_enemysaucerlimiter_2815(4928, 3216), 3);
    add_object(create_enemysaucerlimiter_2815(5120, 3216), 3);
    add_object(create_enemylimiter_350(4173, 3082), 3);
    add_object(create_gimmickconveyorbeltleft_2824(4608, 2984), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(4736, 2984), 3);
    add_object(create_gimmickconveyorbeltleft2_2825(4416, 3016), 3);
    add_object(create_gimmickconveyorbeltleft_2824(4448, 3016), 3);
    add_object(create_gimmickconveyorbeltleft3_2826(4576, 3016), 3);
    add_object(create_gimmickconveyorbeltleft_2824(5984, 3144), 3);
    add_object(create_enemytankbot_2821(6239, 3073), 3);
    add_object(create_enemylimiter_350(6741, 3090), 3);
    add_object(create_enemylimiter_350(6149, 3090), 3);
    add_object(create_enemytankbot_2821(6663, 3073), 3);
    add_object(create_objectcrystal_279(4453, 3186), 3);
    add_object(create_objectcrystal_279(4421, 3186), 3);
    add_object(create_objectcrystal_279(4389, 3186), 3);
    add_object(create_enemyseeker_2648(4159, 3688), 3);
    add_object(create_objectcrystal_279(4269, 3346), 3);
    add_object(create_objectcrystal_279(4045, 3346), 3);
    add_object(create_objectcrystal_279(4045, 3306), 3);
    add_object(create_objectcrystal_279(4269, 3306), 3);
    add_object(create_objectcrystal_279(4269, 3266), 3);
    add_object(create_objectcrystal_279(4045, 3266), 3);
    add_object(create_objectcrystal_279(4061, 3730), 3);
    add_object(create_objectcrystal_279(4125, 3730), 3);
    add_object(create_objectcrystal_279(4189, 3730), 3);
    add_object(create_objectcrystal_279(4253, 3730), 3);
    add_object(create_objectcrystal_279(4157, 3730), 3);
    add_object(create_objectcrystal_279(4093, 3730), 3);
    add_object(create_objectcrystal_279(4221, 3730), 3);
    add_object(create_enemyelitemask_2511(7420, 3112), 3);
    add_object(create_enemyelite_2510(7423, 3111), 3);
    add_object(create_enemylimiter_350(7509, 3066), 3);
    add_object(create_hazardfloortrap_2748(7808, 3232), 3);
    add_object(create_hazardfloortrap_2748(7872, 3232), 3);
    add_object(create_hazardfloortrap_2748(3456, 3296), 3);
    add_object(create_hazardfloortrap_2748(576, 2656), 3);
    add_object(create_hazardfloortrap_2748(2368, 2144), 3);
    add_object(create_hazardfloortrap_2748(2432, 2144), 3);
    add_object(create_monitorfireshield_328(4032, 2952), 3);
    add_object(create_monitormetalshield_329(4960, 2888), 3);
    add_object(create_enemyseeker_2648(7327, 2968), 3);
    add_object(create_objectpetal_302(5897, 3121), 3);
    add_object(create_objectpetal_302(5937, 3121), 3);
    add_object(create_objectpetal_302(5977, 3121), 3);
    add_object(create_objectpetal_302(6017, 3121), 3);
    add_object(create_enemytankbot_2821(7151, 3009), 3);
    add_object(create_enemylimiter_350(6997, 3018), 3);
    add_object(create_enemylimiter_350(7381, 3018), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3128, 1704), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3272, 1704), 3);
    add_object(create_gimmickclothesline_1970(3208, 1696), 3);
    add_object(create_gimmickclothesline_1970(3264, 1696), 3);
    add_object(create_objectcrystal_279(3173, 1730), 3);
    add_object(create_objectcrystal_279(3197, 1730), 3);
    add_object(create_objectcrystal_279(3221, 1730), 3);
    add_object(create_objectcrystal_279(3245, 1730), 3);
    add_object(create_monitorcrate_409(3520, 3336), 3);
    add_object(create_monitorcrate_409(3552, 3336), 3);
    add_object(create_monitorcrate_409(3584, 3336), 3);
    add_object(create_objectcrystal_279(2005, 1730), 3);
    add_object(create_objectcrystal_279(2005, 1794), 3);
    add_object(create_objectcrystal_279(2005, 1858), 3);
    add_object(create_objectcrystal_279(2005, 1538), 3);
    add_object(create_objectcrystal_279(2005, 1602), 3);
    add_object(create_objectcrystal_279(2005, 1666), 3);
    add_object(create_objectcrystal_279(2005, 1474), 3);
    add_object(create_laddertop_357(2004, 1407), 3);
    add_object(create_objectkeycard_2643(1880, 1352), 3);
    add_object(create_hazardfloortrap_2748(1920, 1376), 3);
    add_object(create_hazardfloortrap_2748(1856, 1376), 3);
    add_object(create_hazardfloortrap_2748(2144, 1376), 3);
    add_object(create_monitorearthshield_326(1904, 2248), 3);
    add_object(create_airventplatform_2668(5696, 3040), 3);
    add_object(create_airventplatform_2668(5760, 3040), 3);
    add_object(create_airventplatform_2668(5824, 3040), 3);
    add_object(create_monitorwoodshield_325(5712, 3008), 3);
    add_object(create_waterfallfront_1061(4448, 2776), 3);
    add_object(create_waterfallfront_1061(4448, 2872), 3);
    add_object(create_waterfallfront_1061(4448, 2968), 3);
    add_object(create_waterfallfront_1061(4448, 3064), 3);
    add_object(create_waterfallfront_1061(4448, 3160), 3);
    add_object(create_waterfallfront_1061(4448, 3256), 3);
    add_object(create_waterfallfront_1061(4448, 3352), 3);
    add_object(create_waterfallfront4_1062(4392, 3384), 3);
    add_object(create_waterfallfront_1061(4592, 2776), 3);
    add_object(create_waterfallfront_1061(4592, 2872), 3);
    add_object(create_waterfallfront_1061(4592, 2968), 3);
    add_object(create_waterfallfront_1061(4592, 3064), 3);
    add_object(create_waterfallfront_1061(4592, 3160), 3);
    add_object(create_waterfallfront_1061(4592, 3256), 3);
    add_object(create_waterfallfront_1061(4592, 3352), 3);
    add_object(create_waterfallfront_1061(4800, 2776), 3);
    add_object(create_waterfallfront_1061(4800, 2872), 3);
    add_object(create_waterfallfront_1061(4800, 2968), 3);
    add_object(create_waterfallfront_1061(4800, 3064), 3);
    add_object(create_waterfallfront_1061(4800, 3160), 3);
    add_object(create_waterfallfront_1061(4800, 3256), 3);
    add_object(create_waterfallfront_1061(4800, 3352), 3);
    add_object(create_waterfallfront4_1062(4536, 3384), 3);
    add_object(create_waterfallfront4_1062(4744, 3384), 3);
    add_object(create_objectcodec_354(3170, 3085), 3);
    add_object(create_objectfuel_528(3648, 2716), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_tbinvertedloop1_2781(1472, 2600), 4);
    add_background_object(create_tbinvertedloop3_2779(1664, 3112), 4);
    add_background_object(create_tbinvertedloop4_2780(1472, 3112), 4);
    add_background_object(create_tbbluetube1_2796(1600, 3176), 4);
    add_background_object(create_tbbluetube2_2798(1472, 2728), 4);
    add_background_object(create_tbbluetube2_2798(1472, 2792), 4);
    add_background_object(create_tbbluetube2_2798(1472, 2856), 4);
    add_background_object(create_tbbluetube2_2798(1472, 2920), 4);
    add_background_object(create_tbbluetube2_2798(1472, 2984), 4);
    add_background_object(create_tbbluetube2_2798(1472, 3048), 4);
    add_background_object(create_tbbluewall5_2787(2432, 1832), 4);
    add_background_object(create_tbbluetube2_2798(3520, 2984), 4);
    add_background_object(create_tbbluetube2_2798(3520, 2920), 4);
    add_background_object(create_tbbluetube2_2798(3520, 2856), 4);
    add_background_object(create_tbbluetube2_2798(3520, 3048), 4);
    add_object(create_metaldoorfront_2670(24, 2552), 4);
    add_object(create_lockeddoorfront_2671(2776, 2616), 4);
    add_object(create_lockeddoorseal_2672(2780, 2624), 4);
    add_object(create_metaldoorfront_2670(3032, 2616), 4);
    add_object(create_metaldoorfront_2670(280, 2552), 4);
    add_object(create_metaldoorfront_2670(6936, 3000), 4);
    add_object(create_metaldoorfront_2670(7960, 3192), 4);
    add_background_object(create_tbbluetube2_2798(4352, 888), 5);
    add_background_object(create_tbbluetube2_2798(4352, 824), 5);
    add_background_object(create_tbinvertedloop3_2779(4288, 952), 5);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_background_object(create_tbinvertedloop3_2779(4288, 1080), 5);
    add_background_object(create_tbbluetube1_2796(4224, 1144), 5);
    add_background_object(create_tbbluetube1_2796(4160, 1144), 5);
    add_background_object(create_tbbluetube4_2800(4352, 1016), 5);
    add_background_object(create_tbbluetube4_2800(4352, 952), 5);
    add_background_object(create_tbinvertedloop1_2781(4352, 1272), 5);
    add_background_object(create_tbinvertedloop2_2795(4288, 824), 5);
    add_background_object(create_tbinvertedloop1_2781(4160, 824), 5);
    add_background_object(create_tbinvertedloop4_2780(4160, 952), 5);
    add_background_object(create_tbbluetube2_2798(4352, 1400), 5);
    add_background_object(create_tbbluetube3_2797(4480, 1272), 5);
    add_background_object(create_tbbluetube3_2797(4544, 1272), 5);
    add_background_object(create_tbinvertedloop2_2795(4992, 952), 5);
    add_background_object(create_tbinvertedloop1_2781(4864, 952), 5);
    add_background_object(create_tbinvertedloop4_2780(5056, 1080), 5);
    add_background_object(create_tbbluetube2_2798(4864, 1144), 5);
    add_background_object(create_tbbluetube2_2798(4864, 1080), 5);
    add_background_object(create_tbbluewall7_2788(4608, 1272), 5);
    add_background_object(create_tbbluewall9_2789(4608, 1208), 5);
    add_background_object(create_tbbluewall3_2786(4864, 1208), 5);
    add_background_object(create_tbbluewall5_2787(4864, 1272), 5);
    add_background_object(create_tbbluewall2_2782(4672, 1208), 5);
    add_background_object(create_tbbluewall2_2782(4736, 1208), 5);
    add_background_object(create_tbbluewall2_2782(4800, 1208), 5);
    add_background_object(create_tbbluewall6_2784(4672, 1272), 5);
    add_background_object(create_tbbluewall6_2784(4736, 1272), 5);
    add_background_object(create_tbbluewall6_2784(4800, 1272), 5);
    add_background_object(create_tbhugetube2_2764(4664, 1016), 5);
    add_background_object(create_tbhugetube1_2769(4608, 1016), 5);
    add_background_object(create_tbbluewall14_2794(4736, 952), 5);
    add_background_object(create_tbbluewall14_2794(4672, 952), 5);
    add_background_object(create_tbbluewall14_2794(4608, 952), 5);
    add_background_object(create_tbbluewall14_2794(4544, 952), 5);
    add_background_object(create_tbbluewall14_2794(4480, 952), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_2669(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-368, 9), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(4736, -41), 5);
    add_object(create_cameralimitbossleft_421(4536, -176), 5);
    add_object(create_cameralimitbossright_422(4919, -184), 5);
    add_object(create_cameralimitbosstop_423(4736, -336), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_mediumbubble_769(-468, 316), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiair_759(-16, 96), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeycards_2673(38, 231), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_guikeycardicon_2674(16, 228), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_action_jump_running = false;
    loop_action_jump_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_p_debris_running = false;
    loop_p_debris_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_47, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_47, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_47, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_47, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_47, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_47, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_47, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_47, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_47, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_47, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_47, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_47, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_47, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_47, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_47, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_47, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_47, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_47, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_47, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_47, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_47, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_47, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_47, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_47, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_47, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_47, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_47, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_47, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_47, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_47, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_47, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_47, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_47, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_47, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_47, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_47, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_47, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_47, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_47, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_47, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_47, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_47, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_47, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_47, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_47, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    not_always_1431_47 = loop_count;
    not_always_1745_47 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_1696_16 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1677_44 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1831_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1405_31 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1427_47 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_173_8 = loop_count;
    not_always_1505_16 = loop_count;
    not_always_1502_16 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1432_47 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1416_22 = loop_count;
    not_always_99_0 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1398_23 = loop_count;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1695_16 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_1459_46 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    not_always_1435_47 = loop_count;
    not_always_1434_47 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1504_16 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1428_47 = loop_count;
    once_condition_138_0 = false;
    not_always_1678_44 = loop_count;
    group_mac_controls_1 = false;
    not_always_1663_46 = loop_count;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1506_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1697_16 = loop_count;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1516_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1515_16 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_1698_16 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    not_always_1405_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1503_16 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_1433_47 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_1744_47 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1514_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_spawndebris_48()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_10018();
    event_func_10728();
    event_func_10945();
    event_func_11380();
    event_func_11381();
}
void Frames::event_func_11503()
{
    // event 2064_48
    {
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_2064_48_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1), ((Active*)get_instance(levellift_2647_instances, default_active_instance))->get_y()-global_values->get(17)*0.4));
    }
    event_2064_48_end: ;
}
void Frames::loop_camera_mode0_48()
{
    event_func_3685();
    event_func_3686();
    event_func_3687();
    event_func_3688();
    event_func_3689();
    event_func_3690();
    event_func_3691();
    event_func_3692();
    event_func_3693();
    event_func_3694();
    event_func_3695();
    event_func_3696();
    event_func_3697();
    event_func_3698();
    event_func_3699();
    event_func_3700();
    event_func_3701();
    event_func_3702();
    event_func_3703();
    event_func_3704();
    event_func_3705();
    event_func_3706();
    event_func_3707();
    event_func_3708();
    event_func_3709();
    event_func_3710();
    event_func_11503();
}
void Frames::loop_wrapper_sound_kick1_48(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_48(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_48(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_48(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
