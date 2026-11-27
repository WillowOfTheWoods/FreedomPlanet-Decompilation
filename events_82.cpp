#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_6764()
{
    // event 1541_29
    {
        if (!(group_main_engine_1)) goto event_1541_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3)+((Active*)*it)->alterables->values.get(7), 0);
        }
        enemycoilpiece1_1751_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_max(get_min(45, ((Active*)*it)->alterables->values.get(0)), -90)+((Active*)get_single(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(7), 0);
        }
        enemycoilpiece2_1753_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece2_1753_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_max(get_min(0, ((Active*)*it)->alterables->values.get(0)), -120)+((Active*)get_single(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(7), 0);
        }
        enemycoilpiece3_1752_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_min(get_max(-45, ((Active*)*it)->alterables->values.get(0)), 90)+((Active*)get_single(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(7), 0);
        }
        enemycoilpiece4_1754_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece4_1754_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(get_min(get_max(0, ((Active*)*it)->alterables->values.get(0)), 120)+((Active*)get_single(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(7), 0);
        }
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_single(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
    }
    event_1541_29_end: ;
}
void Frames::event_func_6765()
{
    // event 1542_29
    {
        if (!(group_main_engine_1)) goto event_1542_29_end;
        enemycoilpiece1_1751_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemycoil_1755_instances, it.current_index));
            if (parent == NULL) goto pos_end_1542_29_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1542_29_0: ;
        }
        enemycoilpiece2_1753_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece2_1753_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemycoil_1755_instances, it.current_index));
            if (parent == NULL) goto pos_end_1542_29_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1542_29_1: ;
        }
        enemycoilpiece3_1752_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemycoil_1755_instances, it.current_index));
            if (parent == NULL) goto pos_end_1542_29_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1542_29_2: ;
        }
        enemycoilpiece4_1754_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece4_1754_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemycoil_1755_instances, it.current_index));
            if (parent == NULL) goto pos_end_1542_29_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1542_29_3: ;
        }
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemycoilhead_1782_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->flags.get(1)+((Active*)get_single(enemycoil_1755_instances, it.current_index, default_active_instance))->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(enemycoil_1755_instances, it.current_index, default_active_instance))->get_action_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_single(enemycoil_1755_instances, it.current_index, default_active_instance))->get_action_y());
        }
    }
    event_1542_29_end: ;
}
void Frames::event_func_6766()
{
    // event 1543_29
    {
        if (!(group_main_engine_1)) goto event_1543_29_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1543_29_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(6), 0);
        }
    }
    event_1543_29_end: ;
}
void Frames::event_func_6767()
{
    // event 1544_29
    {
        if (!(group_main_engine_1)) goto event_1544_29_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1544_29_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
        }
    }
    event_1544_29_end: ;
}
void Frames::event_func_6768()
{
    // event 1545_29
    bool or_result_1545_29 = false;
    bool or_temp_result_1545_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1545_29_0_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1545_29_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemycoilhead_1782_instances, qualifier_7)) goto or_event_1545_29_0_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1545_29_0_end;
        or_result_1545_29 = true;
        or_temp_result_1545_29_0 = true;
    }
    or_event_1545_29_0_end: ;
    enemycoilhead_1782_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1545_29_0) {
        enemycoilhead_1782_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1545_29
    bool or_temp_result_1545_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1545_29_1_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto or_event_1545_29_1_end;
        or_result_1545_29 = true;
        or_temp_result_1545_29_1 = true;
        or_event_1545_29_1_end: ;
        if (or_temp_result_1545_29_1) {
            enemycoilhead_1782_instances.save_selection();
        }
        if (!or_result_1545_29) goto or_final_or_event_1545_29_1_end;
        enemycoilhead_1782_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1545_29_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1545_29_0 || or_temp_result_1545_29_1) {
            enemycoilhead_1782_instances.restore_selection();
        }
        FrameObject * single_instance_1545_29_0; single_instance_1545_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycoilhead_1782_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1545_29_0 == NULL)
                    single_instance_1545_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1545_29_0))->set_direction(2);
        FrameObject * single_instance_1545_29_1; single_instance_1545_29_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemycoilhead_1782_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1545_29_1 == NULL)
                    single_instance_1545_29_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -8);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        {
            loop_spawndebris_running = true;
            int times = int(8);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_29();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1545_29_1_end: ;
}
void Frames::event_func_6769()
{
    // event 1547_29
    {
        if (!(group_main_engine_1)) goto event_1547_29_end;
        enemycoilhead_1782_instances.clear_selection();
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemycoilhead_1782_instances.has_selection()) goto event_1547_29_end;
        for (ObjectIterator it(enemycoilhead_1782_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1547_29_end: ;
}
void Frames::event_func_6770()
{
    // event 1548_29
    {
        if (!(group_main_engine_1)) goto event_1548_29_end;
        enemycoilpiece2_1753_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece2_1753_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece2_1753_instances.has_selection()) goto event_1548_29_end;
        for (ObjectIterator it(enemycoilpiece2_1753_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1548_29_end: ;
}
void Frames::event_func_6771()
{
    // event 1549_29
    {
        if (!(group_main_engine_1)) goto event_1549_29_end;
        enemycoilpiece4_1754_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece4_1754_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece4_1754_instances.has_selection()) goto event_1549_29_end;
        for (ObjectIterator it(enemycoilpiece4_1754_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1549_29_end: ;
}
void Frames::event_func_6772()
{
    // event 1550_29
    {
        if (!(group_main_engine_1)) goto event_1550_29_end;
        enemycoilpiece2_1753_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece2_1753_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece2_1753_instances.has_selection()) goto event_1550_29_end;
        for (ObjectIterator it(enemycoilpiece2_1753_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1550_29_end: ;
}
void Frames::event_func_6773()
{
    // event 1551_29
    {
        if (!(group_main_engine_1)) goto event_1551_29_end;
        enemycoilpiece1_1751_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece1_1751_instances.has_selection()) goto event_1551_29_end;
        for (ObjectIterator it(enemycoilpiece1_1751_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1551_29_end: ;
}
void Frames::event_func_6774()
{
    // event 1552_29
    {
        if (!(group_main_engine_1)) goto event_1552_29_end;
        enemycoilpiece3_1752_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece3_1752_instances.has_selection()) goto event_1552_29_end;
        for (ObjectIterator it(enemycoilpiece3_1752_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1552_29_end: ;
}
void Frames::event_func_6775()
{
    // event 1553_29
    {
        if (!(group_main_engine_1)) goto event_1553_29_end;
        enemycoilpiece4_1754_instances.clear_selection();
        for (ObjectIterator it(enemycoilpiece4_1754_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!enemycoilpiece4_1754_instances.has_selection()) goto event_1553_29_end;
        for (ObjectIterator it(enemycoilpiece4_1754_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1553_29_end: ;
}
void Frames::event_func_6776()
{
    // event 1554_29
    {
        if (!(group_main_engine_1)) goto event_1554_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1554_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(4, 99);
        }
    }
    event_1554_29_end: ;
}
void Frames::event_func_6777()
{
    // event 1556_29
    {
        if (!(group_main_engine_1)) goto event_1556_29_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(3));
        }
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(3));
        }
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(3));
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)+sin_deg(global_values->get(3))*24);
        }
    }
    event_1556_29_end: ;
}
void Frames::event_func_6778()
{
    // event 1557_29
    {
        if (!(group_main_engine_1)) goto event_1557_29_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1557_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)+sin_deg(global_values->get(3))*24);
        }
    }
    event_1557_29_end: ;
}
void Frames::event_func_6779()
{
    // event 1558_29
    {
        if (!(group_main_engine_1)) goto event_1558_29_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-240))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1558_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1558_29_end: ;
}
void Frames::event_func_6780()
{
    // event 1559_29
    {
        if (!(group_main_engine_1)) goto event_1559_29_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1559_29_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto event_1559_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1559_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1559_29_end: ;
}
void Frames::event_func_6781()
{
    // event 1560_29
    {
        if (!(group_main_engine_1)) goto event_1560_29_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1560_29_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto event_1560_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (8))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1560_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1560_29_end: ;
}
void Frames::event_func_6782()
{
    // event 1561_29
    bool or_result_1561_29 = false;
    bool or_temp_result_1561_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1561_29_0_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto or_event_1561_29_0_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto or_event_1561_29_0_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto or_event_1561_29_0_end;
        or_result_1561_29 = true;
        or_temp_result_1561_29_0 = true;
    }
    or_event_1561_29_0_end: ;
    enemytrafficle1_1757_instances.clear_saved_selection();
    if (or_temp_result_1561_29_0) {
        enemytrafficle1_1757_instances.save_selection();
    }
    // event 1561_29
    bool or_temp_result_1561_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1561_29_1_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto or_event_1561_29_1_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto or_event_1561_29_1_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (8))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto or_event_1561_29_1_end;
        or_result_1561_29 = true;
        or_temp_result_1561_29_1 = true;
        or_event_1561_29_1_end: ;
        if (or_temp_result_1561_29_1) {
            enemytrafficle1_1757_instances.save_selection();
        }
        if (!or_result_1561_29) goto or_final_or_event_1561_29_1_end;
        enemytrafficle1_1757_instances.empty_selection();
        if (or_temp_result_1561_29_0 || or_temp_result_1561_29_1) {
            enemytrafficle1_1757_instances.restore_selection();
        }
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    or_final_or_event_1561_29_1_end: ;
}
void Frames::event_func_6783()
{
    // event 1562_29
    {
        if (!(group_main_engine_1)) goto event_1562_29_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (10))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1562_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+8);
        }
    }
    event_1562_29_end: ;
}
void Frames::event_func_6784()
{
    // event 1563_29
    {
        if (!(group_main_engine_1)) goto event_1563_29_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1563_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        FrameObject * single_instance_1563_29_0; single_instance_1563_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrafficle1_1757_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1563_29_0 == NULL)
                    single_instance_1563_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1563_29_0))->alterables->values.set(0, 8);
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)single_instance_1563_29_0)->move_back(((Active*)get_single(enemytrafficle1_1757_instances)));
        ((Active*)((Active*)single_instance_1563_29_0))->alterables->values.set(1, (((Active*)get_single(enemytrafficle1_1757_instances, default_active_instance))->alterables->values.get(4)+1)*90-180);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
    }
    event_1563_29_end: ;
}
void Frames::event_func_6785()
{
    // event 1564_29
    {
        if (!(group_main_engine_1)) goto event_1564_29_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (18))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1564_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*-1);
        }
    }
    event_1564_29_end: ;
}
void Frames::event_func_6786()
{
    // event 1565_29
    {
        if (!(group_main_engine_1)) goto event_1565_29_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto event_1565_29_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1565_29_end: ;
}
void Frames::event_func_6787()
{
    // event 1566_29
    bool or_result_1566_29 = false;
    bool or_temp_result_1566_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1566_29_0_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto or_event_1566_29_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytrafficle1_1757_instances, qualifier_7)) goto or_event_1566_29_0_end;
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto or_event_1566_29_0_end;
        or_result_1566_29 = true;
        or_temp_result_1566_29_0 = true;
    }
    or_event_1566_29_0_end: ;
    enemytrafficle1_1757_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1566_29_0) {
        enemytrafficle1_1757_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1566_29
    bool or_temp_result_1566_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1566_29_1_end;
        enemytrafficle1_1757_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle1_1757_instances.has_selection()) goto or_event_1566_29_1_end;
        or_result_1566_29 = true;
        or_temp_result_1566_29_1 = true;
        or_event_1566_29_1_end: ;
        if (or_temp_result_1566_29_1) {
            enemytrafficle1_1757_instances.save_selection();
        }
        if (!or_result_1566_29) goto or_final_or_event_1566_29_1_end;
        qualifier_7.empty_selection();
        enemytrafficle1_1757_instances.empty_selection();
        if (or_temp_result_1566_29_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1566_29_0 || or_temp_result_1566_29_1) {
            enemytrafficle1_1757_instances.restore_selection();
        }
        for (ObjectIterator it(enemytrafficle1_1757_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1566_29_0; single_instance_1566_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrafficle1_1757_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1566_29_0 == NULL)
                    single_instance_1566_29_0 = new_obj;
            }
        }
        FrameObject * single_instance_1566_29_1; single_instance_1566_29_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrafficle1_1757_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1566_29_1 == NULL)
                    single_instance_1566_29_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1566_29_1_end: ;
}
void Frames::event_func_6788()
{
    // event 1567_29
    {
        if (!(group_main_engine_1)) goto event_1567_29_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1567_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)+sin_deg(global_values->get(3))*24);
        }
    }
    event_1567_29_end: ;
}
void Frames::event_func_6789()
{
    // event 1568_29
    {
        if (!(group_main_engine_1)) goto event_1568_29_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-240))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1568_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1568_29_end: ;
}
void Frames::event_func_6790()
{
    // event 1569_29
    {
        if (!(group_main_engine_1)) goto event_1569_29_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1569_29_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto event_1569_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1569_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1569_29_end: ;
}
void Frames::event_func_6791()
{
    // event 1570_29
    {
        if (!(group_main_engine_1)) goto event_1570_29_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1570_29_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto event_1570_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (8))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1570_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1570_29_end: ;
}
void Frames::event_func_6792()
{
    // event 1571_29
    bool or_result_1571_29 = false;
    bool or_temp_result_1571_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1571_29_0_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto or_event_1571_29_0_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto or_event_1571_29_0_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto or_event_1571_29_0_end;
        or_result_1571_29 = true;
        or_temp_result_1571_29_0 = true;
    }
    or_event_1571_29_0_end: ;
    enemytrafficle2_1758_instances.clear_saved_selection();
    if (or_temp_result_1571_29_0) {
        enemytrafficle2_1758_instances.save_selection();
    }
    // event 1571_29
    bool or_temp_result_1571_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1571_29_1_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto or_event_1571_29_1_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto or_event_1571_29_1_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (8))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto or_event_1571_29_1_end;
        or_result_1571_29 = true;
        or_temp_result_1571_29_1 = true;
        or_event_1571_29_1_end: ;
        if (or_temp_result_1571_29_1) {
            enemytrafficle2_1758_instances.save_selection();
        }
        if (!or_result_1571_29) goto or_final_or_event_1571_29_1_end;
        enemytrafficle2_1758_instances.empty_selection();
        if (or_temp_result_1571_29_0 || or_temp_result_1571_29_1) {
            enemytrafficle2_1758_instances.restore_selection();
        }
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    or_final_or_event_1571_29_1_end: ;
}
void Frames::event_func_6793()
{
    // event 1572_29
    {
        if (!(group_main_engine_1)) goto event_1572_29_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (10))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1572_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+8);
        }
    }
    event_1572_29_end: ;
}
void Frames::event_func_6794()
{
    // event 1573_29
    {
        if (!(group_main_engine_1)) goto event_1573_29_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1573_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        FrameObject * single_instance_1573_29_0; single_instance_1573_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrafficle2_1758_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1573_29_0 == NULL)
                    single_instance_1573_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1573_29_0))->alterables->values.set(0, 8);
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)single_instance_1573_29_0)->move_back(((Active*)get_single(enemytrafficle2_1758_instances)));
        ((Active*)((Active*)single_instance_1573_29_0))->alterables->values.set(1, (((Active*)get_single(enemytrafficle2_1758_instances, default_active_instance))->alterables->values.get(4)+1)*90-180);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
        ((Active*)((Active*)single_instance_1573_29_0))->set_direction(1);
    }
    event_1573_29_end: ;
}
void Frames::event_func_6795()
{
    // event 1574_29
    {
        if (!(group_main_engine_1)) goto event_1574_29_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (18))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1574_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*-1);
        }
    }
    event_1574_29_end: ;
}
void Frames::event_func_6796()
{
    // event 1575_29
    {
        if (!(group_main_engine_1)) goto event_1575_29_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto event_1575_29_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1575_29_end: ;
}
void Frames::event_func_6797()
{
    // event 1576_29
    bool or_result_1576_29 = false;
    bool or_temp_result_1576_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1576_29_0_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto or_event_1576_29_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytrafficle2_1758_instances, qualifier_7)) goto or_event_1576_29_0_end;
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto or_event_1576_29_0_end;
        or_result_1576_29 = true;
        or_temp_result_1576_29_0 = true;
    }
    or_event_1576_29_0_end: ;
    enemytrafficle2_1758_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1576_29_0) {
        enemytrafficle2_1758_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1576_29
    bool or_temp_result_1576_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1576_29_1_end;
        enemytrafficle2_1758_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle2_1758_instances.has_selection()) goto or_event_1576_29_1_end;
        or_result_1576_29 = true;
        or_temp_result_1576_29_1 = true;
        or_event_1576_29_1_end: ;
        if (or_temp_result_1576_29_1) {
            enemytrafficle2_1758_instances.save_selection();
        }
        if (!or_result_1576_29) goto or_final_or_event_1576_29_1_end;
        enemytrafficle2_1758_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1576_29_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1576_29_0 || or_temp_result_1576_29_1) {
            enemytrafficle2_1758_instances.restore_selection();
        }
        for (ObjectIterator it(enemytrafficle2_1758_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1576_29_0; single_instance_1576_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrafficle2_1758_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1576_29_0 == NULL)
                    single_instance_1576_29_0 = new_obj;
            }
        }
        FrameObject * single_instance_1576_29_1; single_instance_1576_29_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrafficle2_1758_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1576_29_1 == NULL)
                    single_instance_1576_29_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1576_29_1_end: ;
}
void Frames::event_func_6798()
{
    // event 1577_29
    {
        if (!(group_main_engine_1)) goto event_1577_29_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1577_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)+sin_deg(global_values->get(3))*24);
        }
    }
    event_1577_29_end: ;
}
void Frames::event_func_6799()
{
    // event 1578_29
    {
        if (!(group_main_engine_1)) goto event_1578_29_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-240))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1578_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1578_29_end: ;
}
void Frames::event_func_6800()
{
    // event 1579_29
    {
        if (!(group_main_engine_1)) goto event_1579_29_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1579_29_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto event_1579_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1579_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1579_29_end: ;
}
void Frames::event_func_6801()
{
    // event 1580_29
    {
        if (!(group_main_engine_1)) goto event_1580_29_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1580_29_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto event_1580_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (8))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1580_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1580_29_end: ;
}
void Frames::event_func_6802()
{
    // event 1581_29
    bool or_result_1581_29 = false;
    bool or_temp_result_1581_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1581_29_0_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto or_event_1581_29_0_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto or_event_1581_29_0_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto or_event_1581_29_0_end;
        or_result_1581_29 = true;
        or_temp_result_1581_29_0 = true;
    }
    or_event_1581_29_0_end: ;
    enemytrafficle3_1759_instances.clear_saved_selection();
    if (or_temp_result_1581_29_0) {
        enemytrafficle3_1759_instances.save_selection();
    }
    // event 1581_29
    bool or_temp_result_1581_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1581_29_1_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto or_event_1581_29_1_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto or_event_1581_29_1_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (8))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto or_event_1581_29_1_end;
        or_result_1581_29 = true;
        or_temp_result_1581_29_1 = true;
        or_event_1581_29_1_end: ;
        if (or_temp_result_1581_29_1) {
            enemytrafficle3_1759_instances.save_selection();
        }
        if (!or_result_1581_29) goto or_final_or_event_1581_29_1_end;
        enemytrafficle3_1759_instances.empty_selection();
        if (or_temp_result_1581_29_0 || or_temp_result_1581_29_1) {
            enemytrafficle3_1759_instances.restore_selection();
        }
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    or_final_or_event_1581_29_1_end: ;
}
void Frames::event_func_6803()
{
    // event 1582_29
    {
        if (!(group_main_engine_1)) goto event_1582_29_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (10))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1582_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+8);
        }
    }
    event_1582_29_end: ;
}
void Frames::event_func_6804()
{
    // event 1583_29
    {
        if (!(group_main_engine_1)) goto event_1583_29_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->is_near_border(-100)) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1583_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        FrameObject * single_instance_1583_29_0; single_instance_1583_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrafficle3_1759_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1583_29_0 == NULL)
                    single_instance_1583_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1583_29_0))->alterables->values.set(0, 8);
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)single_instance_1583_29_0)->move_back(((Active*)get_single(enemytrafficle3_1759_instances)));
        ((Active*)((Active*)single_instance_1583_29_0))->alterables->values.set(1, (((Active*)get_single(enemytrafficle3_1759_instances, default_active_instance))->alterables->values.get(4)+1)*90-180);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
        ((Active*)((Active*)single_instance_1583_29_0))->set_direction(2);
    }
    event_1583_29_end: ;
}
void Frames::event_func_6805()
{
    // event 1584_29
    {
        if (!(group_main_engine_1)) goto event_1584_29_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (18))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1584_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*-1);
        }
    }
    event_1584_29_end: ;
}
void Frames::event_func_6806()
{
    // event 1585_29
    {
        if (!(group_main_engine_1)) goto event_1585_29_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto event_1585_29_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1585_29_end: ;
}
void Frames::event_func_6807()
{
    // event 1586_29
    bool or_result_1586_29 = false;
    bool or_temp_result_1586_29_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1586_29_0_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto or_event_1586_29_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemytrafficle3_1759_instances, qualifier_7)) goto or_event_1586_29_0_end;
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto or_event_1586_29_0_end;
        or_result_1586_29 = true;
        or_temp_result_1586_29_0 = true;
    }
    or_event_1586_29_0_end: ;
    enemytrafficle3_1759_instances.clear_saved_selection();
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1586_29_0) {
        enemytrafficle3_1759_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1586_29
    bool or_temp_result_1586_29_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1586_29_1_end;
        enemytrafficle3_1759_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemytrafficle3_1759_instances.has_selection()) goto or_event_1586_29_1_end;
        or_result_1586_29 = true;
        or_temp_result_1586_29_1 = true;
        or_event_1586_29_1_end: ;
        if (or_temp_result_1586_29_1) {
            enemytrafficle3_1759_instances.save_selection();
        }
        if (!or_result_1586_29) goto or_final_or_event_1586_29_1_end;
        enemytrafficle3_1759_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1586_29_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1586_29_0 || or_temp_result_1586_29_1) {
            enemytrafficle3_1759_instances.restore_selection();
        }
        for (ObjectIterator it(enemytrafficle3_1759_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1586_29_0; single_instance_1586_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrafficle3_1759_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1586_29_0 == NULL)
                    single_instance_1586_29_0 = new_obj;
            }
        }
        FrameObject * single_instance_1586_29_1; single_instance_1586_29_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrafficle3_1759_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1586_29_1 == NULL)
                    single_instance_1586_29_1 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
    }
    or_final_or_event_1586_29_1_end: ;
}
void Frames::event_func_6808()
{
    // event 1587_29
    {
        if (!(group_main_engine_1)) goto event_1587_29_end;
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemylaser_1626_instances.has_selection()) goto event_1587_29_end;
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
        }
    }
    event_1587_29_end: ;
}
void Frames::event_func_6809()
{
    // event 1588_29
    {
        if (!(group_main_engine_1)) goto event_1588_29_end;
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemylaser_1626_instances.has_selection()) goto event_1588_29_end;
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(2, cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(3, sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_angle(atan2_deg(sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0), cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0)), 0);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1588_29_end: ;
}
void Frames::event_func_6810()
{
    // event 1590_29
    {
        if (!(group_main_engine_1)) goto event_1590_29_end;
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (300))) { it.deselect(); continue; }
        }
        if (!enemylaser_1626_instances.has_selection()) goto event_1590_29_end;
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1590_29_0; single_instance_1590_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylaser_1626_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1590_29_0 == NULL)
                    single_instance_1590_29_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1590_29_0))->set_scale(0.5);
    }
    event_1590_29_end: ;
}
void Frames::event_func_6811()
{
    // event 1592_29
    {
        if (!(group_main_engine_1)) goto event_1592_29_end;
        enemylaser_1626_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(enemylaser_1626_instances, qualifier_20)) goto event_1592_29_end;
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (4))) { it.deselect(); continue; }
        }
        if (!enemylaser_1626_instances.has_selection()) goto event_1592_29_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1592_29_end;
        FrameObject * single_instance_1592_29_0; single_instance_1592_29_0 = pick_random(qualifier_20);
        if (single_instance_1592_29_0 == NULL) goto event_1592_29_end;
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1592_29_1; single_instance_1592_29_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylaser_1626_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1592_29_1 == NULL)
                    single_instance_1592_29_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1592_29_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1592_29_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1592_29_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1592_29_0))->alterables->values.sub(0, 10);
        {
            ((Active*)single_instance_1592_29_0)->set_shader(Render::INVERT);
        }
    }
    event_1592_29_end: ;
}
void Frames::event_func_6812()
{
    // event 1593_29
    {
        if (!(group_main_engine_1)) goto event_1593_29_end;
        enemylaser_1626_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemylaser_1626_instances, playercharactersensor_383_instances)) goto event_1593_29_end;
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (4))) { it.deselect(); continue; }
        }
        if (!enemylaser_1626_instances.has_selection()) goto event_1593_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1593_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1593_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1593_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1593_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1593_29_0; single_instance_1593_29_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemylaser_1626_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1593_29_0 == NULL)
                    single_instance_1593_29_0 = new_obj;
            }
        }
    }
    event_1593_29_end: ;
}
void Frames::event_func_6813()
{
    // event 1594_29
    {
        if (!(group_main_engine_1)) goto event_1594_29_end;
        enemycoil_1755_instances.clear_selection();
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) != (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (1500))) { it.deselect(); continue; }
        }
        if (!enemycoil_1755_instances.has_selection()) goto event_1594_29_end;
        for (ObjectIterator it(enemycoil_1755_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 180);
        }
        enemycoilflip_1756_instances.clear_selection();
        for (ObjectIterator it(enemycoilflip_1756_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1594_29_end: ;
}
void Frames::event_func_6814()
{
    // event 1595_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1595_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (width-50))) goto event_1595_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1595_29_end;
        if (not_always_1595_29 > loop_count) {
            not_always_1595_29 = loop_count + 2;
            goto event_1595_29_end;
        }
        not_always_1595_29 = loop_count + 2;
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
    event_1595_29_end: ;
}
void Frames::event_func_6815()
{
    // event 1598_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1598_29_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1598_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1598_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
    }
    event_1598_29_end: ;
}
void Frames::event_func_6816()
{
    // event 1599_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_frame_transition_1)) goto event_1599_29_end;
        if (!(((Active*)get_instance(sign_351_instances))->alterables->flags.is_on(1))) goto event_1599_29_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1599_29_end;
        global_values->set(4, -1);
        next_frame = index + 1 + 0;    
    
    }
    event_1599_29_end: ;
}
void Frames::event_func_6817()
{
    // event 1608_29
    {
        if (!(group_main_engine_1)) goto event_1608_29_end;
        gimmicklanternbridge1_1727_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!gimmicklanternbridge1_1727_instances.has_selection()) goto event_1608_29_end;
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(2, 1);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1608_29_end: ;
}
void Frames::event_func_6818()
{
    // event 1609_29
    {
        if (!(group_main_engine_1)) goto event_1609_29_end;
        gimmicklanternbridge1_1727_instances.clear_selection();
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!gimmicklanternbridge1_1727_instances.has_selection()) goto event_1609_29_end;
        for (ObjectIterator it(gimmicklanternbridge1_1727_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->alterables->values.set(2, -1);
        }
    }
    event_1609_29_end: ;
}
void Frames::event_func_6819()
{
    // event 1610_29
    {
        if (!(group_main_engine_1)) goto event_1610_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1610_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1610_29_end: ;
}
void Frames::event_func_6820()
{
    // event 1611_29
    {
        if (!(group_main_engine_1)) goto event_1611_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1611_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(pick_random(4, 0, 1, 16, 17));
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(2, -80+randrange(60));
        }
    }
    event_1611_29_end: ;
}
void Frames::event_func_6821()
{
    // event 1612_29
    {
        if (!(group_main_engine_1)) goto event_1612_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1612_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 4+randrange(3));
            ((Active*)*it)->alterables->values.set(1, -7+get_abs(((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
        media.play_id(SOUND_PIGEON_FLY_245, -1, 1);
    }
    event_1612_29_end: ;
}
void Frames::event_func_6822()
{
    // event 1613_29
    {
        if (!(group_main_engine_1)) goto event_1613_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1613_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, -4-randrange(3));
            ((Active*)*it)->alterables->values.set(1, -7+get_abs(((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
        media.play_id(SOUND_PIGEON_FLY_245, -1, 1);
    }
    event_1613_29_end: ;
}
void Frames::event_func_6823()
{
    // event 1614_29
    {
        if (!(group_main_engine_1)) goto event_1614_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_qualifier(qualifier_20, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_qualifier(qualifier_20, default_active_instance))->get_x()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_qualifier(qualifier_20, default_active_instance))->get_y()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_qualifier(qualifier_20, default_active_instance))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1614_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 4+randrange(3));
            ((Active*)*it)->alterables->values.set(1, -7+get_abs(((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
        media.play_id(SOUND_PIGEON_FLY_245, -1, 1);
    }
    event_1614_29_end: ;
}
void Frames::event_func_6824()
{
    // event 1615_29
    {
        if (!(group_main_engine_1)) goto event_1615_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_qualifier(qualifier_20, default_active_instance))->get_x()-60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_qualifier(qualifier_20, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_qualifier(qualifier_20, default_active_instance))->get_y()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_qualifier(qualifier_20, default_active_instance))->get_y()+60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1615_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, -4-randrange(3));
            ((Active*)*it)->alterables->values.set(1, -7+get_abs(((Active*)*it)->alterables->values.get(0)));
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
        media.play_id(SOUND_PIGEON_FLY_245, -1, 1);
    }
    event_1615_29_end: ;
}
void Frames::event_func_6825()
{
    // event 1616_29
    {
        if (!(group_main_engine_1)) goto event_1616_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1616_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.05, -12));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1616_29_end: ;
}
void Frames::event_func_6826()
{
    // event 1617_29
    {
        if (!(group_main_engine_1)) goto event_1617_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (-100))) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1617_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1617_29_end: ;
}
void Frames::event_func_6827()
{
    // event 1618_29
    {
        if (!(group_main_engine_1)) goto event_1618_29_end;
        if (!((global_values->get(3)%math_helper%30) == (1))) goto event_1618_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (10))) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1618_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1618_29_end: ;
}
void Frames::event_func_6828()
{
    // event 1619_29
    {
        if (!(group_main_engine_1)) goto event_1619_29_end;
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!pigeon_1724_instances.has_selection()) goto event_1619_29_end;
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1619_29_end: ;
}
void Frames::event_func_6829()
{
    // event 1620_29
    {
        if (!(group_main_engine_1)) goto event_1620_29_end;
        fireworklauncher_1633_instances.clear_selection();
        for (ObjectIterator it(fireworklauncher_1633_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+10))) { it.deselect(); continue; }
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!fireworklauncher_1633_instances.has_selection()) goto event_1620_29_end;
        for (ObjectIterator it(fireworklauncher_1633_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1620_29_end: ;
}
void Frames::event_func_6830()
{
    // event 1621_29
    {
        if (!(group_main_engine_1)) goto event_1621_29_end;
        fireworklauncher_1633_instances.clear_selection();
        for (ObjectIterator it(fireworklauncher_1633_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!fireworklauncher_1633_instances.has_selection()) goto event_1621_29_end;
        for (ObjectIterator it(fireworklauncher_1633_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-6);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1621_29_end: ;
}
void Frames::event_func_6831()
{
    // event 1622_29
    {
        if (!(group_main_engine_1)) goto event_1622_29_end;
        fireworklauncher_1633_instances.clear_selection();
        for (ObjectIterator it(fireworklauncher_1633_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
        }
        if (!fireworklauncher_1633_instances.has_selection()) goto event_1622_29_end;
        fireworkparticle_1622_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(fireworklauncher_1633_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
        }
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(30+randrange(10));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-16+randrange(33));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-16+randrange(33));
            ((Active*)*it)->force_frame(randrange(4));
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(fireworklauncher_1633_instances, it.current_index))->x + 0, ((Active*)get_single(fireworklauncher_1633_instances, it.current_index))->y + 0));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
    }
    event_1622_29_end: ;
}
void Frames::event_func_6832()
{
    // event 1623_29
    {
        if (!(group_main_engine_1)) goto event_1623_29_end;
        fireworklauncher_1633_instances.clear_selection();
        for (ObjectIterator it(fireworklauncher_1633_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
        }
        if (!fireworklauncher_1633_instances.has_selection()) goto event_1623_29_end;
        fireworkparticle_1622_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(fireworklauncher_1633_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_fireworkparticle_1622(parent->x + 0, parent->y + 0), parent->layer);
                fireworkparticle_1622_instances.add_back();
            }
        }
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(20+randrange(20));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-16+randrange(33));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-16+randrange(33));
            ((Active*)*it)->force_frame(1+randrange(5));
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_single(fireworklauncher_1633_instances, it.current_index))->x + 0, ((Active*)get_single(fireworklauncher_1633_instances, it.current_index))->y + 0));
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
        for (ObjectIterator it(fireworklauncher_1633_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_FIRECRACKER_432, -1, 1);
    }
    event_1623_29_end: ;
}
void Frames::event_func_6833()
{
    // event 1624_29
    {
        if (!(group_main_engine_1)) goto event_1624_29_end;
        if (!((global_values->get(3)%math_helper%2) == (1))) goto event_1624_29_end;
        fireworkparticle_1622_instances.clear_selection();
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1624_29_end: ;
}
void Frames::event_func_6834()
{
    // event 1625_29
    {
        if (!(group_main_engine_1)) goto event_1625_29_end;
        fireworkparticle_1622_instances.clear_selection();
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!fireworkparticle_1622_instances.has_selection()) goto event_1625_29_end;
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1625_29_end: ;
}
void Frames::event_func_6835()
{
    // event 1626_29
    {
        if (!(group_main_engine_1)) goto event_1626_29_end;
        fireworkparticle_1622_instances.clear_selection();
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(7))) { it.deselect(); continue; }
        }
        if (!fireworkparticle_1622_instances.has_selection()) goto event_1626_29_end;
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1626_29_end: ;
}
void Frames::event_func_6836()
{
    // event 1627_29
    {
        if (!(group_main_engine_1)) goto event_1627_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7700))) goto event_1627_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (width-100))) goto event_1627_29_end;
        if (!((global_values->get(4)) < (2))) goto event_1627_29_end;
        global_values->set(4, 2);
        global_values->set(5, 7700);
        global_values->set(6, 1500);
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
    event_1627_29_end: ;
}
void Frames::event_func_6837()
{
    // event 1628_29
    {
        if (!(group_main_engine_1)) goto event_1628_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1628_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1628_29_end: ;
}
void Frames::event_func_6838()
{
    // event 1629_29
    {
        if (!(group_main_engine_1)) goto event_1629_29_end;
        player_389_instances.clear_selection();
        cameratriggerboss_424_instances.clear_selection();
        if (!check_overlap(player_389_instances, cameratriggerboss_424_instances)) goto event_1629_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1629_29_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1) goto event_1629_29_end;
        if (!group_main_engine_level_specific_methods_bosses_miniboss_ufo_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_ufo_1 = true;
        }
        ((Active*)get_instance(minibossufohatch1_1722_instances))->set_visible(true);
        ((Active*)get_instance(minibossufohatch2_1723_instances))->set_visible(true);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_y());
            ((Active*)*it)->set_visible(true);
        }
        minibossufo2_1764_instances.clear_selection();
        spread_value(minibossufo2_1764_instances, 0, 0);
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1629_29_end: ;
}
void Frames::event_func_6839()
{
    // event 1630_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1630_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1630_29_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) > (((Active*)get_single(minibossufo_1763_instances, default_active_instance))->get_y()+300))) goto event_1630_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1630_29_end: ;
}
void Frames::event_func_6840()
{
    // event 1631_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1631_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3), 0);
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(3), 0);
        }
        ((Active*)get_instance(minibossufohatch1_1722_instances))->set_angle(((Active*)get_single(minibossufo_1763_instances, default_active_instance))->alterables->values.get(3)-((Active*)get_single(minibossufo_1763_instances, default_active_instance))->alterables->values.get(10), 0);
        ((Active*)get_instance(minibossufohatch2_1723_instances))->set_angle(((Active*)get_single(minibossufo_1763_instances, default_active_instance))->alterables->values.get(3)+((Active*)get_single(minibossufo_1763_instances, default_active_instance))->alterables->values.get(10), 0);
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1631_29_end: ;
}
void Frames::event_func_6841()
{
    // event 1632_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1632_29_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)*it)->alterables->values.get(0)*90+((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(4))*80);
            ((Active*)*it)->set_y(((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->get_y()-sin_deg(((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(3))*cos_deg(((Active*)*it)->alterables->values.get(0)*90+((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(4))*80);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(minibossufo_1763_instances, it.current_index, default_active_instance))->alterables->values.get(4)+((Active*)*it)->alterables->values.get(0)*90);
        }
        {
            FrameObject * parent = ((Active*)get_instance(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1632_29_0;
            ((Active*)get_instance(minibossufohatch1_1722_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1632_29_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(minibossufo_1763_instances));
            if (parent == NULL) goto pos_end_1632_29_1;
            ((Active*)get_instance(minibossufohatch2_1723_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1632_29_1: ;
        }
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1632_29_end: ;
}
void Frames::event_func_6842()
{
    // event 1633_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1633_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+4)%math_helper%360);
        }
    }
    event_1633_29_end: ;
}
void Frames::event_func_6843()
{
    // event 1634_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1634_29_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (180))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1634_29_end;
        {
            minibossufo_1763_instances.clear_selection();
            ObjectIterator other_it(minibossufo_1763_instances);
            for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1634_29_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1634_29_0_end: ;
    }
    event_1634_29_end: ;
}
void Frames::event_func_6844()
{
    // event 1635_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1635_29_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (360))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1635_29_end;
        {
            minibossufo_1763_instances.clear_selection();
            ObjectIterator other_it(minibossufo_1763_instances);
            for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1635_29_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1635_29_0_end: ;
    }
    event_1635_29_end: ;
}
void Frames::event_func_6845()
{
    // event 1636_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1636_29_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (360))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1636_29_end;
        ((Active*)get_single(minibossufo2_1764_instances, default_active_instance))->move_back(((Active*)get_instance(minibossufohatch1_1722_instances)));
    }
    event_1636_29_end: ;
}
void Frames::event_func_6846()
{
    // event 1637_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1637_29_end;
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (180+360))) { it.deselect(); continue; }
        }
        if (!minibossufo2_1764_instances.has_selection()) goto event_1637_29_end;
        ((Active*)get_single(minibossufo2_1764_instances, default_active_instance))->move_back(((Active*)get_instance(minibossufohatch1_1722_instances)));
    }
    event_1637_29_end: ;
}
void Frames::event_func_6847()
{
    // event 1638_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1638_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1638_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 12);
        }
    }
    event_1638_29_end: ;
}
void Frames::event_func_6848()
{
    // event 1639_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1639_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(minibossufoborder_1762_instances, default_active_instance))->get_x()-450))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1639_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1639_29_end: ;
}
void Frames::event_func_6849()
{
    // event 1640_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1640_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1640_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, 3));
        }
    }
    event_1640_29_end: ;
}
void Frames::event_func_6850()
{
    // event 1641_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1641_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (-2))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1641_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, -0.075);
        }
    }
    event_1641_29_end: ;
}
void Frames::event_func_6851()
{
    // event 1642_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1642_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1642_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 0.075);
        }
    }
    event_1642_29_end: ;
}
void Frames::event_func_6852()
{
    // event 1643_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1643_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (3))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1643_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1643_29_end: ;
}
void Frames::event_func_6853()
{
    // event 1644_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1644_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1644_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+1, 0));
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.1, 0));
        }
    }
    event_1644_29_end: ;
}
void Frames::event_func_6854()
{
    // event 1645_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1645_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (2))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1645_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(8)+sin_deg(((Active*)*it)->alterables->values.get(9))*10);
            ((Active*)*it)->alterables->values.add(9, 2);
        }
    }
    event_1645_29_end: ;
}
void Frames::event_func_6855()
{
    // event 1647_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1647_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1647_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_min(((Active*)*it)->alterables->values.get(10)+3, 45));
        }
    }
    event_1647_29_end: ;
}
void Frames::event_func_6856()
{
    // event 1648_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1648_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (45))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1648_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        media.play_id(SOUND_CHARGESMALL_2_168, -1, 1);
    }
    event_1648_29_end: ;
}
void Frames::event_func_6857()
{
    // event 1649_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1649_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1649_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1649_29_end: ;
}
void Frames::event_func_6858()
{
    // event 1650_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1650_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (60))) { it.deselect(); continue; }
        }
        if (!minibossufo_1763_instances.has_selection()) goto event_1650_29_end;
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        media.play_id(SOUND_COMMON_BUBBLESWEEP_169, -1, 1);
    }
    event_1650_29_end: ;
}
void Frames::event_func_6859()
{
    // event 1651_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1651_29_end;
        minibossufobeam_1721_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossufobeam_1721_instances, playercharactersensor_383_instances)) goto event_1651_29_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->flags & VISIBLE)) goto event_1651_29_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1651_29_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1651_29_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1651_29_end: ;
}
void Frames::event_func_6860()
{
    // event 1652_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1652_29_end;
        minibossufobeam_1721_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        if (!check_overlap(minibossufobeam_1721_instances, breakablefloor1_1760_instances)) goto event_1652_29_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->flags & VISIBLE)) goto event_1652_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.sub(0, 0.5);
        effectswhiteburst_5_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(minibossufobeam_1721_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + -16, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 16, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
        }
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10+randrange(21));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8+randrange(17));
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1652_29_end: ;
}
void Frames::event_func_6861()
{
    // event 1653_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1653_29_end;
        minibossufobeam_1721_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(minibossufobeam_1721_instances, breakablefloor2_1761_instances)) goto event_1653_29_end;
        if (!(((Active*)get_instance(minibossufobeam_1721_instances))->flags & VISIBLE)) goto event_1653_29_end;
        minibossufo_1763_instances.clear_selection();
        for (ObjectIterator it(minibossufo_1763_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        effectswhiteburst_5_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(minibossufobeam_1721_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + -16, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 16, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectswhiteburst_5_instances.add_back();
            }
        }
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-10+randrange(21));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-8+randrange(17));
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->alterables->values.sub(0, 0.5);
    }
    event_1653_29_end: ;
}
void Frames::event_func_6862()
{
    // event 1654_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1654_29_end;
        breakablefloor1_1760_instances.clear_selection();
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!breakablefloor1_1760_instances.has_selection()) goto event_1654_29_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, -4);
        }
    }
    event_1654_29_end: ;
}
void Frames::event_func_6863()
{
    // event 1655_29
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ufo_1)) goto event_1655_29_end;
        breakablefloor2_1761_instances.clear_selection();
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (5))) { it.deselect(); continue; }
        }
        if (!breakablefloor2_1761_instances.has_selection()) goto event_1655_29_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, -4);
        }
    }
    event_1655_29_end: ;
}
