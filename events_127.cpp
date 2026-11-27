#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_10190()
{
    // event 1632_43
    {
        if (!(group_main_engine_1)) goto event_1632_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1632_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1632_43_end: ;
}
void Frames::event_func_10191()
{
    // event 1634_43
    {
        if (!(group_main_engine_1)) goto event_1634_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1634_43_end: ;
}
void Frames::event_func_10192()
{
    // event 1635_43
    bool or_result_1635_43 = false;
    bool or_temp_result_1635_43_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1635_43_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1635_43_0_end;
        or_result_1635_43 = true;
        or_temp_result_1635_43_0 = true;
    }
    or_event_1635_43_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1635_43_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1635_43
    bool or_temp_result_1635_43_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1635_43_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1635_43_1_end;
        or_result_1635_43 = true;
        or_temp_result_1635_43_1 = true;
    }
    or_event_1635_43_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1635_43_1) {
        enemyelitemask_2511_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1635_43
    bool or_temp_result_1635_43_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1635_43_2_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_8)) goto or_event_1635_43_2_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(qualifier_8, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1635_43_2_end;
        or_result_1635_43 = true;
        or_temp_result_1635_43_2 = true;
        or_event_1635_43_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1635_43_2) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1635_43) goto or_final_or_event_1635_43_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1635_43_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1635_43_2) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1635_43_0 || or_temp_result_1635_43_1 || or_temp_result_1635_43_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    or_final_or_event_1635_43_2_end: ;
}
void Frames::event_func_10193()
{
    // event 1636_43
    bool or_result_1636_43 = false;
    bool or_temp_result_1636_43_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1636_43_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1636_43_0_end;
        or_result_1636_43 = true;
        or_temp_result_1636_43_0 = true;
    }
    or_event_1636_43_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1636_43_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1636_43
    bool or_temp_result_1636_43_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1636_43_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1636_43_1_end;
        or_result_1636_43 = true;
        or_temp_result_1636_43_1 = true;
    }
    or_event_1636_43_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1636_43_1) {
        enemyelitemask_2511_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1636_43
    bool or_temp_result_1636_43_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1636_43_2_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_8)) goto or_event_1636_43_2_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(qualifier_8, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1636_43_2_end;
        or_result_1636_43 = true;
        or_temp_result_1636_43_2 = true;
        or_event_1636_43_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1636_43_2) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1636_43) goto or_final_or_event_1636_43_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1636_43_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1636_43_2) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1636_43_0 || or_temp_result_1636_43_1 || or_temp_result_1636_43_2) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.sub(6, 1);
        }
    }
    or_final_or_event_1636_43_2_end: ;
}
void Frames::event_func_10194()
{
    // event 1639_43
    {
        if (!(group_main_engine_1)) goto event_1639_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1639_43_end;
        if (!check_not_overlap(enemyelitemask_2511_instances, qualifier_7)) goto event_1639_43_end;
        if (!check_not_overlap(enemyelitemask_2511_instances, qualifier_8)) goto event_1639_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1639_43_end: ;
}
void Frames::event_func_10195()
{
    // event 1643_43
    {
        if (!(group_main_engine_1)) goto event_1643_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1643_43_end: ;
}
void Frames::event_func_10196()
{
    // event 1644_43
    bool or_result_1644_43 = false;
    bool or_temp_result_1644_43_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1644_43_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1644_43_0_end;
        or_result_1644_43 = true;
        or_temp_result_1644_43_0 = true;
    }
    or_event_1644_43_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1644_43_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1644_43
    bool or_temp_result_1644_43_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1644_43_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1644_43_1_end;
        or_result_1644_43 = true;
        or_temp_result_1644_43_1 = true;
        or_event_1644_43_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1644_43_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1644_43) goto or_final_or_event_1644_43_1_end;
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1644_43_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1644_43_0 || or_temp_result_1644_43_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_1644_43_1_end: ;
}
void Frames::event_func_10197()
{
    // event 1645_43
    {
        if (!(group_main_engine_1)) goto event_1645_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(3);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1645_43_end: ;
}
void Frames::event_func_10198()
{
    // event 1646_43
    bool or_result_1646_43 = false;
    bool or_temp_result_1646_43_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1646_43_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1646_43_0_end;
        or_result_1646_43 = true;
        or_temp_result_1646_43_0 = true;
    }
    or_event_1646_43_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1646_43_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1646_43
    bool or_temp_result_1646_43_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1646_43_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1646_43_1_end;
        or_result_1646_43 = true;
        or_temp_result_1646_43_1 = true;
        or_event_1646_43_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1646_43_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1646_43) goto or_final_or_event_1646_43_1_end;
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1646_43_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1646_43_0 || or_temp_result_1646_43_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7), 0));
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    or_final_or_event_1646_43_1_end: ;
}
void Frames::event_func_10199()
{
    // event 1647_43
    {
        if (!(group_main_engine_1)) goto event_1647_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(4);
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_1647_43_end: ;
}
void Frames::event_func_10200()
{
    // event 1648_43
    bool or_result_1648_43 = false;
    bool or_temp_result_1648_43_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1648_43_0_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto or_event_1648_43_0_end;
        or_result_1648_43 = true;
        or_temp_result_1648_43_0 = true;
    }
    or_event_1648_43_0_end: ;
    enemyelitemask_2511_instances.clear_saved_selection();
    if (or_temp_result_1648_43_0) {
        enemyelitemask_2511_instances.save_selection();
    }
    // event 1648_43
    bool or_temp_result_1648_43_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1648_43_1_end;
        enemyelitemask_2511_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(enemyelitemask_2511_instances, qualifier_7)) goto or_event_1648_43_1_end;
        or_result_1648_43 = true;
        or_temp_result_1648_43_1 = true;
        or_event_1648_43_1_end: ;
        qualifier_7.clear_saved_selection();
        if (or_temp_result_1648_43_1) {
            enemyelitemask_2511_instances.save_selection();
            qualifier_7.save_selection();
        }
        if (!or_result_1648_43) goto or_final_or_event_1648_43_1_end;
        qualifier_7.empty_selection();
        enemyelitemask_2511_instances.empty_selection();
        if (or_temp_result_1648_43_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1648_43_0 || or_temp_result_1648_43_1) {
            enemyelitemask_2511_instances.restore_selection();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    or_final_or_event_1648_43_1_end: ;
}
void Frames::event_func_10201()
{
    // event 1649_43
    {
        if (!(group_main_engine_1)) goto event_1649_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->force_direction(0);
        }
    }
    event_1649_43_end: ;
}
void Frames::event_func_10202()
{
    // event 1650_43
    {
        if (!(group_main_engine_1)) goto event_1650_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index));
            if (parent == NULL) goto pos_end_1650_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1650_43_0: ;
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(get_max(0, ((Active*)*it)->alterables->values.get(5)), width));
        }
    }
    event_1650_43_end: ;
}
void Frames::event_func_10203()
{
    // event 1651_43
    {
        if (!(group_main_engine_1)) goto event_1651_43_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1651_43_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1651_43_end: ;
}
void Frames::event_func_10204()
{
    // event 1652_43
    {
        if (!(group_main_engine_1)) goto event_1652_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1652_43_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1652_43_0; single_instance_1652_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1652_43_0 == NULL)
                    single_instance_1652_43_0 = new_obj;
            }
        }
        FrameObject * single_instance_1652_43_1; single_instance_1652_43_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1652_43_1 == NULL)
                    single_instance_1652_43_1 = new_obj;
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
                loop_spawndebris_43();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1652_43_end: ;
}
void Frames::event_func_10205()
{
    // event 1654_43
    {
        if (!(group_main_engine_1)) goto event_1654_43_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1654_43_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1654_43_end: ;
}
void Frames::event_func_10206()
{
    // event 1655_43
    {
        if (!(group_main_engine_1)) goto event_1655_43_end;
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemyelitechargeglow_2507_instances.has_selection()) goto event_1655_43_end;
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_CHARGE1_191, -1, 1);
    }
    event_1655_43_end: ;
}
void Frames::event_func_10207()
{
    // event 1656_43
    {
        if (!(group_main_engine_1)) goto event_1656_43_end;
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelitechargeglow_2507_instances.has_selection()) goto event_1656_43_end;
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_scale(get_max(1.0-((Active*)*it)->alterables->values.get(0)*0.04, 0.1));
        }
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(0)*5, 0));
        }
    }
    event_1656_43_end: ;
}
void Frames::event_func_10208()
{
    // event 1657_43
    {
        if (!(group_main_engine_1)) goto event_1657_43_end;
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (25))) { it.deselect(); continue; }
        }
        if (!enemyelitechargeglow_2507_instances.has_selection()) goto event_1657_43_end;
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1657_43_end: ;
}
void Frames::event_func_10209()
{
    // event 1658_43
    {
        if (!(group_main_engine_1)) goto event_1658_43_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1658_43_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
        }
    }
    event_1658_43_end: ;
}
void Frames::event_func_10210()
{
    // event 1659_43
    {
        if (!(group_main_engine_1)) goto event_1659_43_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1659_43_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(2, cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(3, sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_angle(atan2_deg(sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0), 0-cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0))+180, 0);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1659_43_end: ;
}
void Frames::event_func_10211()
{
    // event 1660_43
    {
        if (!(group_main_engine_1)) goto event_1660_43_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1660_43_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1660_43_0; single_instance_1660_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1660_43_0 == NULL)
                    single_instance_1660_43_0 = new_obj;
            }
        }
    }
    event_1660_43_end: ;
}
void Frames::event_func_10212()
{
    // event 1661_43
    {
        if (!(group_main_engine_1)) goto event_1661_43_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (300))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1661_43_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1661_43_0; single_instance_1661_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1661_43_0 == NULL)
                    single_instance_1661_43_0 = new_obj;
            }
        }
    }
    event_1661_43_end: ;
}
void Frames::event_func_10213()
{
    // event 1663_43
    {
        if (!(group_main_engine_1)) goto event_1663_43_end;
        enemytrooperlaser_2508_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, qualifier_20)) goto event_1663_43_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1663_43_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1663_43_end;
        FrameObject * single_instance_1663_43_0; single_instance_1663_43_0 = pick_random(qualifier_20);
        if (single_instance_1663_43_0 == NULL) goto event_1663_43_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1663_43_1; single_instance_1663_43_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1663_43_1 == NULL)
                    single_instance_1663_43_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1663_43_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1663_43_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1663_43_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1663_43_0))->alterables->values.sub(0, 10);
        {
            ((Active*)single_instance_1663_43_0)->set_shader(Render::INVERT);
        }
    }
    event_1663_43_end: ;
}
void Frames::event_func_10214()
{
    // event 1664_43
    {
        if (!(group_main_engine_1)) goto event_1664_43_end;
        enemytrooperlaser_2508_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, playercharactersensor_383_instances)) goto event_1664_43_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1664_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1664_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1664_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1664_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1664_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1664_43_0; single_instance_1664_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1664_43_0 == NULL)
                    single_instance_1664_43_0 = new_obj;
            }
        }
    }
    event_1664_43_end: ;
}
void Frames::event_func_10215()
{
    // event 1665_43
    {
        if (!(group_main_engine_1)) goto event_1665_43_end;
        enemytrooperlaser_2508_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, playercharactersensor_383_instances)) goto event_1665_43_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1665_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1665_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1665_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) > (0))) goto event_1665_43_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1665_43_0; single_instance_1665_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1665_43_0 == NULL)
                    single_instance_1665_43_0 = new_obj;
            }
        }
    }
    event_1665_43_end: ;
}
void Frames::event_func_10216()
{
    // event 1705_43
    {
        if (!(group_main_engine_1)) goto event_1705_43_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (0))) goto event_1705_43_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3560, 556, 3761, 647)) == (0))) goto event_1705_43_end;
        if (!((objects_in_zone(player_389_instances, 5095, 625, 6833, 1041)) == (0))) goto event_1705_43_end;
        if (!((objects_in_zone(player_389_instances, 9311, 504, 12515, 1253)) == (0))) goto event_1705_43_end;
        if (!((objects_in_zone(player_389_instances, 12631, 538, 12904, 690)) == (0))) goto event_1705_43_end;
        if (!((objects_in_zone(player_389_instances, 13078, 535, 13161, 676)) == (0))) goto event_1705_43_end;
        if (!((((Active*)get_instance(player_389_instances))->layer->index+1) < (5))) goto event_1705_43_end;
        if (!(((Active*)get_instance(playersensorbottombig_397_instances))->overlaps_background())) goto event_1705_43_end;
        playersensorbottombig_397_instances.clear_selection();
        if (!check_not_overlap(playersensorbottombig_397_instances, qualifier_26)) goto event_1705_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1705_43_end: ;
}
void Frames::event_func_10217()
{
    // event 1708_43
    {
        if (!(group_main_engine_1)) goto event_1708_43_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (1))) goto event_1708_43_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1708_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_1708_43_end;
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
    event_1708_43_end: ;
}
void Frames::event_func_10218()
{
    // event 1713_43
    {
        if (!(group_main_engine_1)) goto event_1713_43_end;
        if (!((global_values->get(4)) >= (2))) goto event_1713_43_end;
        if (once_condition_1713_43) goto event_1713_43_end;
        once_condition_1713_43 = true;
            group_main_engine_level_specific_methods_cutscenes_neera_1 = false;
    
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercophook2_2440_instances.clear_selection();
        for (ObjectIterator it(bosshovercophook2_2440_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playericedeath_2441_instances.clear_selection();
        for (ObjectIterator it(playericedeath_2441_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopchargeglow_2432_instances.clear_selection();
        for (ObjectIterator it(bosshovercopchargeglow_2432_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossicecrystal_2430_instances.clear_selection();
        for (ObjectIterator it(bossicecrystal_2430_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosshovercophook_2449_instances.clear_selection();
        for (ObjectIterator it(bosshovercophook_2449_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectstickyice_2431_instances.clear_selection();
        for (ObjectIterator it(effectstickyice_2431_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelicebarrierpiece_2463_instances.clear_selection();
        for (ObjectIterator it(levelicebarrierpiece_2463_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelhovercraftlight_2451_instances.clear_selection();
        for (ObjectIterator it(levelhovercraftlight_2451_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1713_43_end: ;
}
void Frames::event_func_10219()
{
    // event 1715_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1715_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+sin_deg(((Active*)*it)->alterables->values.get(2))*5);
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)+2)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(4));
        }
        {
            ObjectIterator other_it(bosshovercop_2332_instances);
            bosshovercopturbine1_2333_instances.clear_selection();
            for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_43_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1715_43_0_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine1_2333_instances);
            bosshovercopsiren1_2336_instances.clear_selection();
            for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_43_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1715_43_1_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine1_2333_instances);
            bosshovercopsiren2_2337_instances.clear_selection();
            for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_43_2_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1715_43_2_end: ;
        {
            ObjectIterator other_it(bosshovercop_2332_instances);
            bosshovercopturbine2_2331_instances.clear_selection();
            for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_43_3_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1715_43_3_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine2_2331_instances);
            bosshovercopsiren4_2329_instances.clear_selection();
            for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_43_4_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1715_43_4_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine2_2331_instances);
            bosshovercopsiren3_2330_instances.clear_selection();
            for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_43_5_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1715_43_5_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine1_2333_instances);
            bosshovercoppropellor_2334_instances.clear_selection();
            for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_43_6_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1715_43_6_end: ;
        {
            ObjectIterator other_it(bosshovercopturbine2_2331_instances);
            bosshovercoppropellor2_2335_instances.clear_selection();
            for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_43_7_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1715_43_7_end: ;
        {
            ObjectIterator other_it(bosshovercop_2332_instances);
            bosshovercophook2_2440_instances.clear_selection();
            for (ObjectIterator it(bosshovercophook2_2440_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1715_43_8_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1715_43_8_end: ;
        for (ObjectIterator it(bosshovercophook2_2440_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosshovercop_2332_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(bosshovercop_2332_instances, it.current_index, default_active_instance))->get_box_index(3)+((Active*)get_single(bosshovercop_2332_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
    }
    event_1715_43_end: ;
}
void Frames::event_func_10220()
{
    // event 1716_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1716_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1716_43_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1716_43_end;
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercop_2332_instances, it.current_index));
            if (parent == NULL) goto pos_end_1716_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -52, parent->get_y() + -31);
            pos_end_1716_43_0: ;
        }
    }
    event_1716_43_end: ;
}
void Frames::event_func_10221()
{
    // event 1717_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1717_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1717_43_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1717_43_end;
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercop_2332_instances, it.current_index));
            if (parent == NULL) goto pos_end_1717_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 28, parent->get_y() + -31);
            pos_end_1717_43_0: ;
        }
    }
    event_1717_43_end: ;
}
void Frames::event_func_10222()
{
    // event 1718_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1718_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1718_43_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1718_43_end;
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercop_2332_instances, it.current_index));
            if (parent == NULL) goto pos_end_1718_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 52, parent->get_y() + -31);
            pos_end_1718_43_0: ;
        }
    }
    event_1718_43_end: ;
}
void Frames::event_func_10223()
{
    // event 1719_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1719_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1719_43_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1719_43_end;
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercop_2332_instances, it.current_index));
            if (parent == NULL) goto pos_end_1719_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -28, parent->get_y() + -31);
            pos_end_1719_43_0: ;
        }
    }
    event_1719_43_end: ;
}
void Frames::event_func_10224()
{
    // event 1720_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1720_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1720_43_end;
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -22, parent->get_y() + -18);
            pos_end_1720_43_0: ;
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_43_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -8, parent->get_y() + -18);
            pos_end_1720_43_1: ;
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_43_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 22, parent->get_y() + -18);
            pos_end_1720_43_2: ;
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_43_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + -18);
            pos_end_1720_43_3: ;
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_43_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1720_43_4: ;
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_43_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1720_43_5: ;
        }
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosshovercophook_2449_instances.clear_selection();
        for (ObjectIterator it(bosshovercophook_2449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        levelhovercraftlight_2451_instances.clear_selection();
        for (ObjectIterator it(levelhovercraftlight_2451_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercop_2332_instances, it.current_index));
            if (parent == NULL) goto pos_end_1720_43_6;
            ((Active*)*it)->set_global_position(parent->get_x() + 54, parent->get_y() + 32);
            pos_end_1720_43_6: ;
        }
        for (ObjectIterator it(levelhovercraftlight_2451_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1720_43_end: ;
}
void Frames::event_func_10225()
{
    // event 1721_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1721_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1721_43_end;
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 22, parent->get_y() + -18);
            pos_end_1721_43_0: ;
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_43_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 8, parent->get_y() + -18);
            pos_end_1721_43_1: ;
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_43_2;
            ((Active*)*it)->set_global_position(parent->get_x() + -22, parent->get_y() + -18);
            pos_end_1721_43_2: ;
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_43_3;
            ((Active*)*it)->set_global_position(parent->get_x() + -8, parent->get_y() + -18);
            pos_end_1721_43_3: ;
        }
        bosshovercoppropellor_2334_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine1_2333_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_43_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1721_43_4: ;
        }
        bosshovercoppropellor2_2335_instances.clear_selection();
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosshovercopturbine2_2331_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_43_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1721_43_5: ;
        }
        for (ObjectIterator it(bosshovercoppropellor_2334_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        for (ObjectIterator it(bosshovercoppropellor2_2335_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->get_angle()+10)%math_helper%360, 0);
        }
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bosshovercophook_2449_instances.clear_selection();
        for (ObjectIterator it(bosshovercophook_2449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        levelhovercraftlight_2451_instances.clear_selection();
        for (ObjectIterator it(levelhovercraftlight_2451_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosshovercop_2332_instances, it.current_index));
            if (parent == NULL) goto pos_end_1721_43_6;
            ((Active*)*it)->set_global_position(parent->get_x() + -54, parent->get_y() + 32);
            pos_end_1721_43_6: ;
        }
        for (ObjectIterator it(levelhovercraftlight_2451_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1721_43_end: ;
}
void Frames::event_func_10226()
{
    // event 1722_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1722_43_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)+5)%math_helper%60);
        }
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, (((Active*)get_single(bosshovercopturbine1_2333_instances, it.current_index, default_active_instance))->alterables->values.get(3)+5)%math_helper%60);
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1722_43_end: ;
}
void Frames::event_func_10227()
{
    // event 1723_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1723_43_end;
        bosshovercopturbine1_2333_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine1_2333_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (30))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine1_2333_instances.has_selection()) goto event_1723_43_end;
        bosshovercopsiren1_2336_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren1_2336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren2_2337_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren2_2337_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1723_43_end: ;
}
void Frames::event_func_10228()
{
    // event 1724_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1724_43_end;
        bosshovercopturbine2_2331_instances.clear_selection();
        for (ObjectIterator it(bosshovercopturbine2_2331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (30))) { it.deselect(); continue; }
        }
        if (!bosshovercopturbine2_2331_instances.has_selection()) goto event_1724_43_end;
        bosshovercopsiren4_2329_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren4_2329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosshovercopsiren3_2330_instances.clear_selection();
        for (ObjectIterator it(bosshovercopsiren3_2330_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1724_43_end: ;
}
void Frames::event_func_10229()
{
    // event 1725_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1725_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7), ((Active*)*it)->alterables->values.get(10)));
        }
        bossneerahitbox_2465_instances.clear_selection();
        for (ObjectIterator it(bossneerahitbox_2465_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(npcneera_2464_instances, it.current_index));
            if (parent == NULL) goto pos_end_1725_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1725_43_0: ;
        }
    }
    event_1725_43_end: ;
}
void Frames::event_func_10230()
{
    // event 1726_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1726_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1726_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_x()-200))) goto event_1726_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        FrameObject * single_instance_1726_43_0; single_instance_1726_43_0 = NULL;
        // select single: true false false
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator p_it(bosshovercop_2332_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossicemissile_2433(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 143), parent->layer);
                if (single_instance_1726_43_0 == NULL)
                    single_instance_1726_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1726_43_0))->alterables->flags.enable(1);
        ((Active*)((Active*)single_instance_1726_43_0))->alterables->values.set(0, ((Active*)single_instance_1726_43_0)->get_x());
        ((Active*)((Active*)single_instance_1726_43_0))->alterables->values.set(2, -12);
        media.play_id(SOUND_NE_FREEZE_2_299, -1, 1);
    }
    event_1726_43_end: ;
}
void Frames::event_func_10231()
{
    // event 1727_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1727_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1727_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 12);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_frame(9);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->move_front();
        }
    }
    event_1727_43_end: ;
}
void Frames::event_func_10232()
{
    // event 1728_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1728_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1728_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_SPLASH_14, -1, 1);
        FrameObject * single_instance_1728_43_0; single_instance_1728_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcneera_2464_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswatersplash_416(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1728_43_0 == NULL)
                    single_instance_1728_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1728_43_0))->set_y(((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2));
    }
    event_1728_43_end: ;
}
void Frames::event_func_10233()
{
    // event 1729_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1729_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (((Active*)*it)->alterables->values.get(10)))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1729_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->force_animation(10);
        }
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
    }
    event_1729_43_end: ;
}
void Frames::event_func_10234()
{
    // event 1730_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1730_43_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1730_43_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcneera_2464_instances, it.current_index));
            if (parent == NULL) goto pos_end_1730_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1730_43_0: ;
        }
    }
    event_1730_43_end: ;
}
void Frames::event_func_10235()
{
    // event 1731_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1731_43_end;
        bossicemissile_2433_instances.clear_selection();
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npcneera_2464_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossicemissile_2433_instances.has_selection()) goto event_1731_43_end;
        for (ObjectIterator it(bossicemissile_2433_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1731_43_0; single_instance_1731_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstickyice_2431(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1731_43_0 == NULL)
                    single_instance_1731_43_0 = new_obj;
            }
        }
        FrameObject * single_instance_1731_43_1; single_instance_1731_43_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossicemissile_2433_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1731_43_1 == NULL)
                    single_instance_1731_43_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1731_43_1))->force_speed(50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        ((Active*)((Active*)single_instance_1731_43_0))->set_scale(3);
    }
    event_1731_43_end: ;
}
void Frames::event_func_10236()
{
    // event 1732_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1732_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1732_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1732_43_end: ;
}
void Frames::event_func_10237()
{
    // event 1733_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1733_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (15))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1733_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
    }
    event_1733_43_end: ;
}
void Frames::event_func_10238()
{
    // event 1734_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1734_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1734_43_end;
        effectstickyice_2431_instances.clear_selection();
        if (!check_overlap(npcneera_2464_instances, effectstickyice_2431_instances)) goto event_1734_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 2);
            ((Active*)*it)->set_visible(false);
        }
        playericedeath_2441_instances.clear_selection();
        for (ObjectIterator it(playericedeath_2441_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playericedeath_2441_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(npcneera_2464_instances, it.current_index));
            if (parent == NULL) goto pos_end_1734_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1734_43_0: ;
        }
    }
    event_1734_43_end: ;
}
void Frames::event_func_10239()
{
    // event 1735_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1735_43_end;
        playericedeath_2441_instances.clear_selection();
        for (ObjectIterator it(playericedeath_2441_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!playericedeath_2441_instances.has_selection()) goto event_1735_43_end;
        for (ObjectIterator it(playericedeath_2441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-1, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(2)));
        }
    }
    event_1735_43_end: ;
}
void Frames::event_func_10240()
{
    // event 1736_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1736_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1736_43_end;
        qualifier_21.clear_selection();
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_21.has_selection()) goto event_1736_43_end;
        for (QualifierIterator it(qualifier_21); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1736_43_end: ;
}
void Frames::event_func_10241()
{
    // event 1737_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1737_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1737_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 3);
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_1737_43_end: ;
}
void Frames::event_func_10242()
{
    // event 1738_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1738_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1738_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)get_instance(minibossbarrier_924_instances, default_active_instance))->get_x()+120))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1738_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1738_43_end: ;
}
void Frames::event_func_10243()
{
    // event 1739_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1739_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1739_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1739_43_end: ;
}
void Frames::event_func_10244()
{
    // event 1740_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1740_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (30))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1740_43_end;
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator p_it(minibossrailing_923_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 12), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 36), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1740_43_end: ;
}
void Frames::event_func_10245()
{
    // event 1741_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1741_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (4))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1741_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.1, -12));
        }
    }
    event_1741_43_end: ;
}
void Frames::event_func_10246()
{
    // event 1742_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1742_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (4))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1742_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playericedeath_2441_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1742_43_end;
        bosshovercophook_2449_instances.clear_selection();
        for (ObjectIterator it(bosshovercophook_2449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(playericedeath_2441_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(get_min(((Active*)get_instance(playericedeath_2441_instances, it.current_index, default_active_instance))->get_x(), ((Active*)get_single(bosshovercop_2332_instances, it.current_index, default_active_instance))->get_x()+200));
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1742_43_end: ;
}
void Frames::event_func_10247()
{
    // event 1743_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_neera_1)) goto event_1743_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (4))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1743_43_end;
        bosshovercop_2332_instances.clear_selection();
        for (ObjectIterator it(bosshovercop_2332_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playericedeath_2441_instances, default_active_instance))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!bosshovercop_2332_instances.has_selection()) goto event_1743_43_end;
        playericedeath_2441_instances.clear_selection();
        for (ObjectIterator it(playericedeath_2441_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosshovercop_2332_instances, it.current_index, default_active_instance))->get_x()+200);
        }
    }
    event_1743_43_end: ;
}
void Frames::event_func_10248()
{
    // event 1744_43
    {
        if (!(group_main_engine_1)) goto event_1744_43_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 9323, 714, 9781, 1024)) > (0))) goto event_1744_43_end;
        if (once_condition_1744_43) goto event_1744_43_end;
        once_condition_1744_43 = true;
        ((Active*)get_instance(npchostagetorque_2520_instances))->alterables->flags.enable(1);
    }
    event_1744_43_end: ;
}
void Frames::event_func_10249()
{
    // event 1745_43
    {
        if (!(group_main_engine_1)) goto event_1745_43_end;
        if (!(((Active*)get_instance(npchostagetorque_2520_instances))->alterables->flags.is_on(1))) goto event_1745_43_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), ((Active*)get_instance(npchostagetorque_2520_instances))->alterables->values.get(0)));
        ((Active*)get_instance(npchostagetorque_2520_instances))->alterables->values.add(0, 0.5);
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1745_43_end: ;
}
void Frames::event_func_10250()
{
    // event 1746_43
    {
        if (!(group_main_engine_1)) goto event_1746_43_end;
        if (!(((Active*)get_instance(npchostagetorque_2520_instances))->alterables->flags.is_on(1))) goto event_1746_43_end;
        if (!((((Active*)get_instance(npchostagetorque_2520_instances))->alterables->values.get(0)) > (10))) goto event_1746_43_end;
        ((Active*)get_instance(npchostagetorque_2520_instances))->alterables->flags.disable(1);
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
    }
    event_1746_43_end: ;
}
void Frames::event_func_10251()
{
    // event 1747_43
    {
        if (!(group_main_engine_1)) goto event_1747_43_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto event_1747_43_end;
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+50);
            ((Active*)*it)->set_x(frame_left()-300+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, 20);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1747_43_end: ;
}
void Frames::event_func_10252()
{
    // event 1748_43
    {
        if (!(group_main_engine_1)) goto event_1748_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(npcsyntax_2519_instances))->get_x()-1200))) goto event_1748_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1) goto event_1748_43_end;
        {
            loop_cutscene_start_running = true;
            int times = int(1);
            loop_cutscene_start_index = 0;
            while (loop_cutscene_start_index < times) {
                loop_cutscene_start_43();
                if (!loop_cutscene_start_running) break;
                loop_cutscene_start_index++;
            }
        }
    }
    event_1748_43_end: ;
}
void Frames::event_func_10253()
{
    // event 1752_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1752_43_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(3, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(8, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(9, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->set_y(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(10)+sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(9))*8);
    }
    event_1752_43_end: ;
}
void Frames::event_func_10254()
{
    // event 1753_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1753_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_1753_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (1))) goto event_1753_43_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4), 0);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+28+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
        }
    }
    event_1753_43_end: ;
}
void Frames::event_func_10255()
{
    // event 1754_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1754_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (1))) goto event_1754_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (1))) goto event_1754_43_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+sin_deg(((Active*)*it)->alterables->values.get(0)*-24)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)*0.5);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+((Active*)*it)->alterables->values.get(0)*(6+sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(9)-90)*0.9));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*16+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4)+90, 0);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+28+sin_deg(((Active*)*it)->alterables->values.get(0)*24)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)*0.5);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+((Active*)*it)->alterables->values.get(0)*(6+sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(9)-90)*0.9));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*-16-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(0);
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1754_43_end: ;
}
void Frames::event_func_10256()
{
    // event 1755_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1755_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (1))) goto event_1755_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (-1))) goto event_1755_43_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()-sin_deg(((Active*)*it)->alterables->values.get(0)*-24)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)*0.5);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+((Active*)*it)->alterables->values.get(0)*(6+sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(9)-90)*0.9));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*-16-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4)-90, 0);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()-28-sin_deg(((Active*)*it)->alterables->values.get(0)*24)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)*0.5);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+((Active*)*it)->alterables->values.get(0)*(6+sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(9)-90)*0.9));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*16+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(16);
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1755_43_end: ;
}
void Frames::event_func_10257()
{
    // event 1756_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1756_43_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxleftarm_2517_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxleftarm_2517_instances.has_selection()) goto event_1756_43_end;
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
        {
            FrameObject * parent = ((Active*)get_single(npcsyntaxleftarm_2517_instances));
            if (parent == NULL) goto pos_end_1756_43_0;
            ((Active*)get_instance(npchostagetorque_2520_instances))->set_global_position(parent->get_x() + -8, parent->get_y() + 0);
            pos_end_1756_43_0: ;
        }
    }
    event_1756_43_end: ;
}
void Frames::event_func_10258()
{
    // event 1757_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1757_43_end;
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxrightarm_2518_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxrightarm_2518_instances.has_selection()) goto event_1757_43_end;
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1757_43_end: ;
}
void Frames::event_func_10259()
{
    // event 1758_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1758_43_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (-1))) goto event_1758_43_end;
        ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.set(0, (((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+357)%math_helper%360);
    }
    event_1758_43_end: ;
}
void Frames::event_func_10260()
{
    // event 1759_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1759_43_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (1))) goto event_1759_43_end;
        ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.set(0, (((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+3)%math_helper%360);
    }
    event_1759_43_end: ;
}
void Frames::event_func_10261()
{
    // event 1760_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1760_43_end;
        if (!((((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.get(3)) > (((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.get(4)))) goto event_1760_43_end;
        ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.set(3, ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.get(4));
    }
    event_1760_43_end: ;
}
void Frames::event_func_10262()
{
    // event 1761_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1761_43_end;
        ((Active*)get_instance(brevonmechtorso_2543_instances))->set_x(((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.get(2));
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances));
            if (parent == NULL) goto pos_end_1761_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1761_43_0: ;
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackshoulder_2514_instances));
            if (parent == NULL) goto pos_end_1761_43_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1761_43_1: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances));
            if (parent == NULL) goto pos_end_1761_43_2;
            ((Active*)get_instance(brevonmechfrontarm_2548_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1761_43_2: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontarm_2548_instances));
            if (parent == NULL) goto pos_end_1761_43_3;
            ((Active*)get_instance(brevonmechfrontclaw_2549_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1761_43_3: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontknee_2542_instances));
            if (parent == NULL) goto pos_end_1761_43_4;
            ((Active*)get_instance(brevonmechfrontfoot_2545_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1761_43_4: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontleg2_2541_instances));
            if (parent == NULL) goto pos_end_1761_43_5;
            ((Active*)get_instance(brevonmechfrontknee_2542_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1761_43_5: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontleg_2539_instances));
            if (parent == NULL) goto pos_end_1761_43_6;
            ((Active*)get_instance(brevonmechfrontleg2_2541_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1761_43_6: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackarm_2516_instances));
            if (parent == NULL) goto pos_end_1761_43_7;
            ((Active*)get_instance(brevonmechbackclaw_2515_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1761_43_7: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackshoulder_2514_instances));
            if (parent == NULL) goto pos_end_1761_43_8;
            ((Active*)get_instance(brevonmechbackarm_2516_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1761_43_8: ;
        }
        ((Active*)get_instance(brevonmechfrontclaw_2549_instances))->alterables->values.set(2, ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.get(3)+56);
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechabdomen_2540_instances));
            if (parent == NULL) goto pos_end_1761_43_9;
            ((Active*)get_instance(brevonmechfrontleg_2539_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1761_43_9: ;
        }
    }
    event_1761_43_end: ;
}
void Frames::event_func_10263()
{
    // event 1762_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1762_43_end;
        ((Active*)get_instance(brevonmechfrontarm_2548_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(brevonmechbackarm_2516_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(brevonmechfrontleg2_2541_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(brevonmechfrontknee_2542_instances))->alterables->values.set(0, 0);
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(1)*-15);
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(1)*-15);
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances));
            if (parent == NULL) goto pos_end_1762_43_0;
            ((Active*)get_instance(brevonmechhead_2544_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1762_43_0: ;
        }
        ((Active*)get_instance(brevonmechfrontclaw_2549_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(brevonmechbackclaw_2515_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(brevonmechfrontfoot_2545_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(brevonmechfrontleg_2539_instances))->alterables->values.set(0, 0);
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances));
            if (parent == NULL) goto pos_end_1762_43_1;
            ((Active*)get_instance(brevonmechaxle_2550_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1762_43_1: ;
        }
    }
    event_1762_43_end: ;
}
void Frames::event_func_10264()
{
    // event 1763_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1763_43_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (-1))) goto event_1763_43_end;
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances));
            if (parent == NULL) goto pos_end_1763_43_0;
            ((Active*)get_instance(brevonmechbackshoulder_2514_instances))->set_global_position(parent->get_x() + -20, parent->get_y() + 17);
            pos_end_1763_43_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances));
            if (parent == NULL) goto pos_end_1763_43_1;
            ((Active*)get_instance(brevonmechfrontshoulder_2547_instances))->set_global_position(parent->get_x() + 86, parent->get_y() + 17);
            pos_end_1763_43_1: ;
        }
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances));
            if (parent == NULL) goto pos_end_1763_43_2;
            ((Active*)get_instance(brevonmechabdomen_2540_instances))->set_global_position(parent->get_x() + 74, parent->get_y() + -10);
            pos_end_1763_43_2: ;
        }
    }
    event_1763_43_end: ;
}
void Frames::event_func_10265()
{
    // event 1764_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1764_43_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (1))) goto event_1764_43_end;
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances));
            if (parent == NULL) goto pos_end_1764_43_0;
            ((Active*)get_instance(brevonmechbackshoulder_2514_instances))->set_global_position(parent->get_x() + 20, parent->get_y() + 17);
            pos_end_1764_43_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances));
            if (parent == NULL) goto pos_end_1764_43_1;
            ((Active*)get_instance(brevonmechfrontshoulder_2547_instances))->set_global_position(parent->get_x() + -86, parent->get_y() + 17);
            pos_end_1764_43_1: ;
        }
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances));
            if (parent == NULL) goto pos_end_1764_43_2;
            ((Active*)get_instance(brevonmechabdomen_2540_instances))->set_global_position(parent->get_x() + -74, parent->get_y() + -10);
            pos_end_1764_43_2: ;
        }
    }
    event_1764_43_end: ;
}
void Frames::event_func_10266()
{
    // event 1765_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1765_43_end;
        ((Active*)get_instance(brevonmechtorso_2543_instances))->set_y(((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.get(3));
    }
    event_1765_43_end: ;
}
void Frames::event_func_10267()
{
    // event 1766_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1766_43_end;
        ((Active*)get_instance(brevonmechhead_2544_instances))->set_y(((Active*)get_instance(brevonmechhead_2544_instances))->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)-60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        ((Active*)get_instance(brevonmechfrontshoulder_2547_instances))->set_y(((Active*)get_instance(brevonmechfrontshoulder_2547_instances))->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        ((Active*)get_instance(brevonmechbackshoulder_2514_instances))->set_y(((Active*)get_instance(brevonmechbackshoulder_2514_instances))->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        ((Active*)get_instance(brevonmechabdomen_2540_instances))->set_y(((Active*)get_instance(brevonmechabdomen_2540_instances))->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+120*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        ((Active*)get_instance(brevonmechfrontarm_2548_instances))->alterables->values.add(0, (323+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*8)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        ((Active*)get_instance(brevonmechbackarm_2516_instances))->alterables->values.add(0, (230+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*-12)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        ((Active*)get_instance(brevonmechfrontleg2_2541_instances))->alterables->values.add(0, (56+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*8)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        ((Active*)get_instance(brevonmechfrontknee_2542_instances))->alterables->values.add(0, (-15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        }
        ((Active*)get_instance(brevonmechfrontleg_2539_instances))->alterables->values.add(0, 300*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
        ((Active*)get_instance(brevonmechtorso_2543_instances))->set_y(((Active*)get_instance(brevonmechtorso_2543_instances))->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0))*8*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2));
    }
    event_1766_43_end: ;
}
void Frames::event_func_10268()
{
    // event 1767_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1767_43_end;
        ((Active*)get_instance(brevonmechfrontarm_2548_instances))->alterables->values.add(0, 353*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)*15-((Active*)*it)->alterables->values.get(1)*15)*15)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0)*15-((Active*)*it)->alterables->values.get(1)*15)*15)*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        }
        ((Active*)get_instance(brevonmechbackarm_2516_instances))->alterables->values.add(0, 335*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        ((Active*)get_instance(brevonmechfrontknee_2542_instances))->alterables->values.add(0, 75*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        ((Active*)get_instance(brevonmechfrontclaw_2549_instances))->alterables->values.add(0, 135*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        ((Active*)get_instance(brevonmechbackclaw_2515_instances))->alterables->values.add(0, 135*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        ((Active*)get_instance(brevonmechfrontleg2_2541_instances))->alterables->values.add(0, 194*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        ((Active*)get_instance(brevonmechfrontfoot_2545_instances))->alterables->values.add(0, 90*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        ((Active*)get_instance(brevonmechfrontleg_2539_instances))->alterables->values.add(0, 15*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
        ((Active*)get_instance(brevonmechtorso_2543_instances))->set_y(((Active*)get_instance(brevonmechtorso_2543_instances))->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(0))*8*((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3));
    }
    event_1767_43_end: ;
}
void Frames::event_func_10269()
{
    // event 1768_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1768_43_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(1)) == (1))) goto event_1768_43_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1768_43_end: ;
}
void Frames::event_func_10270()
{
    // event 1769_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1769_43_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3)) > (0))) goto event_1769_43_end;
        if (not_always_1769_43 > loop_count) {
            not_always_1769_43 = loop_count + 2;
            goto event_1769_43_end;
        }
        not_always_1769_43 = loop_count + 2;
        ((Active*)get_instance(brevonmechaxle_2550_instances))->set_visible(true);
        ((Active*)get_instance(brevonmechfrontshoulder_2547_instances))->move_front(((Active*)get_instance(brevonmechfrontarm_2548_instances)));
    }
    event_1769_43_end: ;
}
void Frames::event_func_10271()
{
    // event 1770_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1770_43_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3)) < (1))) goto event_1770_43_end;
        if (not_always_1770_43 > loop_count) {
            not_always_1770_43 = loop_count + 2;
            goto event_1770_43_end;
        }
        not_always_1770_43 = loop_count + 2;
        ((Active*)get_instance(brevonmechaxle_2550_instances))->set_visible(false);
        ((Active*)get_instance(brevonmechfrontshoulder_2547_instances))->move_back(((Active*)get_instance(brevonmechfrontarm_2548_instances)));
    }
    event_1770_43_end: ;
}
void Frames::event_func_10272()
{
    // event 1771_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1771_43_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1771_43_end: ;
}
void Frames::event_func_10273()
{
    // event 1772_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1)) goto event_1772_43_end;
        if (!((((Active*)get_instance(brevonmechfrontclaw_2549_instances))->alterables->values.get(2)) != (0))) goto event_1772_43_end;
        ((Active*)get_instance(brevonmechfrontclaw_2549_instances))->set_y(get_min(((Active*)get_instance(brevonmechfrontclaw_2549_instances))->get_y(), ((Active*)get_instance(brevonmechfrontclaw_2549_instances))->alterables->values.get(2)));
        ((Active*)get_instance(brevonmechbackclaw_2515_instances))->set_y(get_min(((Active*)get_instance(brevonmechbackclaw_2515_instances))->get_y(), ((Active*)get_instance(brevonmechfrontclaw_2549_instances))->alterables->values.get(2)));
        ((Active*)get_instance(brevonmechfrontfoot_2545_instances))->set_y(get_min(((Active*)get_instance(brevonmechfrontfoot_2545_instances))->get_y(), ((Active*)get_instance(brevonmechfrontclaw_2549_instances))->alterables->values.get(2)-8));
    }
    event_1772_43_end: ;
}
void Frames::event_func_10274()
{
    // event 1773_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_fade_out_1)) goto event_1773_43_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (50))) goto event_1773_43_end;
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
    event_1773_43_end: ;
}
void Frames::event_func_10275()
{
    // event 1774_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_fade_out_1)) goto event_1774_43_end;
        if (not_always_1774_43 > loop_count) {
            not_always_1774_43 = loop_count + 2;
            goto event_1774_43_end;
        }
        not_always_1774_43 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
    }
    event_1774_43_end: ;
}
void Frames::event_func_10276()
{
    // event 1775_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_fade_out_1)) goto event_1775_43_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_1775_43_end: ;
}
void Frames::event_func_10277()
{
    // event 1776_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_fade_out_1)) goto event_1776_43_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1776_43_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
            group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_fade_out_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1) {
            group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1 = true;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(brevonmechtorso_2543_instances))->get_x()+50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.get(3)+50);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(brevonmechhead_2544_instances))->get_x()-700);
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1776_43_end: ;
}
void Frames::event_func_10278()
{
    // event 1777_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1777_43_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1777_43_end;
        if (!((((Active*)get_single(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1777_43_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1777_43_end: ;
}
void Frames::event_func_10279()
{
    // event 1778_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1778_43_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1778_43_end;
        if (!((((Active*)get_single(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1778_43_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1778_43_end: ;
}
void Frames::event_func_10280()
{
    // event 1779_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1779_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) < (2))) goto event_1779_43_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*19+((Active*)get_instance(brevonmechtorso_2543_instances))->get_x()+50)*0.05);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*19+((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.get(3)+50)*0.05);
    }
    event_1779_43_end: ;
}
void Frames::event_func_10281()
{
    // event 1780_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1780_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (0))) goto event_1780_43_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_x()-2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.sub(10, 0.5);
    }
    event_1780_43_end: ;
}
void Frames::event_func_10282()
{
    // event 1781_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1781_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (0))) goto event_1781_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->get_x()) < (((Active*)get_instance(brevonmechtorso_2543_instances))->get_x()-30))) goto event_1781_43_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(12, 1);
    }
    event_1781_43_end: ;
}
void Frames::event_func_10283()
{
    // event 1782_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1782_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (1))) goto event_1782_43_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.sub(10, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(13, 1);
    }
    event_1782_43_end: ;
}
void Frames::event_func_10284()
{
    // event 1783_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1783_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (1))) goto event_1783_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)) > (40))) goto event_1783_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1783_43_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_12_02_ogg_191, 28-1);
    }
    event_1783_43_end: ;
}
void Frames::event_func_10285()
{
    // event 1784_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1784_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (1))) goto event_1784_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)) > (40))) goto event_1784_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1784_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1784_43_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_22_01_ogg_192, 28-1);
    }
    event_1784_43_end: ;
}
void Frames::event_func_10286()
{
    // event 1785_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1785_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (1))) goto event_1785_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)) > (40))) goto event_1785_43_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, -200);
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
    }
    event_1785_43_end: ;
}
void Frames::event_func_10287()
{
    // event 1786_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1786_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (2))) goto event_1786_43_end;
        ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.set(2, get_max(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2)-0.02, 0));
        ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.set(3, get_min(((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3)+0.02, 1));
        ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.add(3, ((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(2)*-4);
    }
    event_1786_43_end: ;
}
void Frames::event_func_10288()
{
    // event 1787_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1787_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (2))) goto event_1787_43_end;
        if (!((((Active*)get_instance(brevonmechanimations_2551_instances))->alterables->values.get(3)) >= (1))) goto event_1787_43_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 10);
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
        media.stop_sample(SOUND_ABSOLUTION_LIFTOFF_297);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(13, 0);
    }
    event_1787_43_end: ;
}
void Frames::event_func_10289()
{
    // event 1788_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1788_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (3))) goto event_1788_43_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.add(2, 20);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 15);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)));
    }
    event_1788_43_end: ;
}
