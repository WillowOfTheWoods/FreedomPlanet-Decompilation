#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19102()
{
    // event 1983_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1983_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1983_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (250))) goto event_1983_82_end;
        if (!((global_values->get(0)) != (1))) goto event_1983_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->set_y(((Active*)get_instance(dialogbox_566_instances))->get_y()+140);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+140);
        ((Active*)get_instance(dialogarrow_568_instances))->set_y(((Active*)get_instance(dialogarrow_568_instances))->get_y()+140);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_y(((TextBlitter*)get_instance(dialogtext_569_instances))->get_y()+140);
    }
    event_1983_82_end: ;
}
void Frames::event_func_19103()
{
    // event 1984_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1984_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1984_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (250))) goto event_1984_82_end;
        if (!((global_values->get(0)) == (1))) goto event_1984_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 2);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1984_82_end: ;
}
void Frames::event_func_19104()
{
    // event 1985_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1985_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1985_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (88))) goto event_1985_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (91))) goto event_1985_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1985_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1985_82_end: ;
}
void Frames::event_func_19105()
{
    // event 1986_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1986_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1986_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (91))) goto event_1986_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1986_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1986_82_end: ;
}
void Frames::event_func_19106()
{
    // event 1987_82
    bool or_result_1987_82 = false;
    bool or_temp_result_1987_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto or_event_1987_82_0_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (19))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (60))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1987_82_0_end;
        if (!((global_values->get(0)) != (1))) goto or_event_1987_82_0_end;
        or_result_1987_82 = true;
        or_temp_result_1987_82_0 = true;
    }
    or_event_1987_82_0_end: ;
    themagister_2115_instances.clear_saved_selection();
    if (or_temp_result_1987_82_0) {
        themagister_2115_instances.save_selection();
    }
    // event 1987_82
    bool or_temp_result_1987_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto or_event_1987_82_1_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (19))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (150))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1987_82_1_end;
        if (!((global_values->get(0)) == (1))) goto or_event_1987_82_1_end;
        or_result_1987_82 = true;
        or_temp_result_1987_82_1 = true;
        or_event_1987_82_1_end: ;
        if (or_temp_result_1987_82_1) {
            themagister_2115_instances.save_selection();
        }
        if (!or_result_1987_82) goto or_final_or_event_1987_82_1_end;
        themagister_2115_instances.empty_selection();
        if (or_temp_result_1987_82_0 || or_temp_result_1987_82_1) {
            themagister_2115_instances.restore_selection();
        }
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
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
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
            group_pause_1 = false;
    
    }
    or_final_or_event_1987_82_1_end: ;
}
void Frames::event_func_19107()
{
    // event 1988_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1988_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1988_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1988_82_end: ;
}
void Frames::event_func_19108()
{
    // event 1989_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1989_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (20))) goto event_1989_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1989_82_end;
        next_frame = 83 + 0;    
    
        global_values->set(4, 21);
        media.stop_channel(25-1);
    }
    event_1989_82_end: ;
}
void Frames::event_func_19109()
{
    // event 1990_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1990_82_end;
        if (!((global_values->get(0)) == (1))) goto event_1990_82_end;
            group_pause_1 = false;
    
    }
    event_1990_82_end: ;
}
void Frames::event_func_19110()
{
    // event 1991_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1991_82_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1991_82_end;
        if (!((global_values->get(0)) == (1))) goto event_1991_82_end;
        if (!((global_values->get(3)) > (50))) goto event_1991_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(3);
    }
    event_1991_82_end: ;
}
void Frames::event_func_19111()
{
    // event 1992_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1992_82_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (0))) goto event_1992_82_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) == (0))) goto event_1992_82_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_on(3))) goto event_1992_82_end;
        next_frame = 86 + 0;    
    
        global_values->set(4, 21);
        media.stop_channel(25-1);
    }
    event_1992_82_end: ;
}
void Frames::event_func_19112()
{
    // event 1993_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_pangu_1)) goto event_1993_82_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_y(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(10)+sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(9))*8);
        npchologram2_3074_instances.clear_selection();
        for (ObjectIterator it(npchologram2_3074_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcpangu_3073_instances));
            if (parent == NULL) goto pos_end_1993_82_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1993_82_0: ;
        }
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(npchologram2_3074_instances, it.current_index));
            if (parent == NULL) goto pos_end_1993_82_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1993_82_1: ;
        }
    }
    event_1993_82_end: ;
}
void Frames::event_func_19113()
{
    // event 1994_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_pangu_1)) goto event_1994_82_end;
        if (!(((Active*)get_instance(npcpangu_3073_instances))->alterables->flags.is_off(1))) goto event_1994_82_end;
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(3, 2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(8, 2);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.add(9, 2);
    }
    event_1994_82_end: ;
}
void Frames::event_func_19114()
{
    // event 1995_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_pangu_1)) goto event_1995_82_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_1995_82_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(14)) == (1))) goto event_1995_82_end;
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4), 0);
        }
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+28+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(npcpangu_3073_instances))->set_direction(0);
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1995_82_end: ;
}
void Frames::event_func_19115()
{
    // event 1996_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_pangu_1)) goto event_1996_82_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(11)) == (0))) goto event_1996_82_end;
        if (!((((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(14)) == (-1))) goto event_1996_82_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_direction(16);
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()-28+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_direction(16);
        }
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcpangu_3073_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcpangu_3073_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)+((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5))*((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(8)-((Active*)get_single(npcpanguleftarm_3075_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(5), 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1996_82_end: ;
}
void Frames::event_func_19116()
{
    // event 1997_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_pangu_1)) goto event_1997_82_end;
        npcpanguleftarm_3075_instances.clear_selection();
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcpanguleftarm_3075_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcpanguleftarm_3075_instances.has_selection()) goto event_1997_82_end;
        for (ObjectIterator it(npcpanguleftarm_3075_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1997_82_end: ;
}
void Frames::event_func_19117()
{
    // event 1998_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_pangu_1)) goto event_1998_82_end;
        npcpangurightarm_3076_instances.clear_selection();
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcpangurightarm_3076_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcpangurightarm_3076_instances.has_selection()) goto event_1998_82_end;
        for (ObjectIterator it(npcpangurightarm_3076_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1998_82_end: ;
}
void Frames::event_func_19118()
{
    // event 2208_82
    {
        if (!(group_main_engine_1)) goto event_2208_82_end;
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!brevondistant_4005_instances.has_selection()) goto event_2208_82_end;
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((SystemBox*)get_instance(parallaxcrashedship_4003_instances, it.current_index, default_systembox_instance))->get_x()+366);
            ((Active*)*it)->set_y(((SystemBox*)get_instance(parallaxcrashedship_4003_instances, it.current_index, default_systembox_instance))->get_y()-6);
        }
    }
    event_2208_82_end: ;
}
void Frames::event_func_19119()
{
    // event 2209_82
    {
        if (!(group_main_engine_1)) goto event_2209_82_end;
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)*0.5+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(frame_top()*0.9+140-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*0.3);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+2+sin_deg(((Active*)*it)->alterables->values.get(0))*1.5)%math_helper%360);
            ((Active*)*it)->set_scale(1+sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*0.005);
        }
    }
    event_2209_82_end: ;
}
void Frames::event_func_19120()
{
    // event 2210_82
    {
        if (!(group_pause_1)) goto event_2210_82_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2210_82_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2210_82_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2210_82_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2210_82_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guipause_453_instances))->move_front();
        ((Active*)get_instance(crystal_456_instances))->move_front();
        ((Active*)get_instance(dialogarrow_568_instances))->stop_animation();
        ((Active*)get_instance(npcmayor_3950_instances))->stop_animation();
        ((Active*)get_instance(npcgong_634_instances))->stop_animation();
        ((Active*)get_instance(playerassistcopilot_2219_instances))->stop_animation();
        ((Active*)get_instance(spaceheroship_3990_instances))->stop_animation();
        ((Active*)get_instance(npcpangu_3073_instances))->stop_animation();
        npchologram2_3074_instances.clear_selection();
        for (ObjectIterator it(npchologram2_3074_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->stop_animation();
        ((Active*)get_instance(npcsyntax_2519_instances))->stop_animation();
        ((Active*)get_instance(bgfireplace2_4008_instances))->stop_animation();
        playerdragonrider_3985_instances.clear_selection();
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcserpentine_947_instances))->stop_animation();
        ((Active*)get_instance(npcneera_2464_instances))->stop_animation();
        ((Active*)get_instance(npcdail_4017_instances))->stop_animation();
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        comet_3988_instances.clear_selection();
        for (ObjectIterator it(comet_3988_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2210_82_end: ;
}
void Frames::event_func_19121()
{
    // event 2211_82
    bool or_result_2211_82 = false;
    bool or_temp_result_2211_82_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2211_82_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2211_82_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2211_82_0_end;
        or_result_2211_82 = true;
        or_temp_result_2211_82_0 = true;
    }
    or_event_2211_82_0_end: ;
    // event 2211_82
    bool or_temp_result_2211_82_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2211_82_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2211_82_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2211_82_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2211_82_1_end;
        or_result_2211_82 = true;
        or_temp_result_2211_82_1 = true;
        or_event_2211_82_1_end: ;
        if (!or_result_2211_82) goto or_final_or_event_2211_82_1_end;
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
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(dialogarrow_568_instances))->start_animation();
        ((Active*)get_instance(npcmayor_3950_instances))->start_animation();
        ((Active*)get_instance(npcgong_634_instances))->start_animation();
        ((Active*)get_instance(playerassistcopilot_2219_instances))->start_animation();
        ((Active*)get_instance(spaceheroship_3990_instances))->start_animation();
        ((Active*)get_instance(npcpangu_3073_instances))->start_animation();
        npchologram2_3074_instances.clear_selection();
        for (ObjectIterator it(npchologram2_3074_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->start_animation();
        ((Active*)get_instance(npcsyntax_2519_instances))->start_animation();
        ((Active*)get_instance(bgfireplace2_4008_instances))->start_animation();
        playerdragonrider_3985_instances.clear_selection();
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcserpentine_947_instances))->start_animation();
        ((Active*)get_instance(npcneera_2464_instances))->start_animation();
        ((Active*)get_instance(npcdail_4017_instances))->start_animation();
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        comet_3988_instances.clear_selection();
        for (ObjectIterator it(comet_3988_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2211_82_1_end: ;
}
void Frames::event_func_19122()
{
    // event 2218_82
    {
        if (!(group_pause_1)) goto event_2218_82_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) >= (3))) goto event_2218_82_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) <= (4))) goto event_2218_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2218_82_end;
        if (!((global_values->get(4)) != (3))) goto event_2218_82_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_off(6))) goto event_2218_82_end;
        global_values->set(4, 0);
        next_frame = 85 + 0;    
    
        media.stop_samples();
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(6);
    }
    event_2218_82_end: ;
}
void Frames::event_func_19123()
{
    // event 2219_82
    {
        if (!(group_pause_1)) goto event_2219_82_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2219_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2219_82_end;
        if (!((global_values->get(4)) == (3))) goto event_2219_82_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_off(6))) goto event_2219_82_end;
        global_values->set(4, 0);
        next_frame = 86 + 0;    
    
        media.stop_samples();
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(6);
    }
    event_2219_82_end: ;
}
void Frames::event_func_19124()
{
    // event 2220_82
    {
        if (!(group_pause_1)) goto event_2220_82_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2220_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2220_82_end;
        if (!((global_values->get(4)) == (3))) goto event_2220_82_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->alterables->flags.is_off(6))) goto event_2220_82_end;
        media.stop_samples();
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
        global_values->set(4, 14);
        next_frame = 15 + 0;    
    
        ((Active*)get_instance(themagister_2115_instances))->alterables->flags.enable(6);
    }
    event_2220_82_end: ;
}
void Frames::handle_frame_83_events()
{
    test_collisions_82();
    event_func_2760();
    event_func_2764();
    event_func_2767();
    event_func_2777();
    event_func_2804();
    event_func_2805();
    event_func_2806();
    event_func_2813();
    event_func_2820();
    event_func_2821();
    event_func_2822();
    event_func_1957();
    event_func_2128();
    event_func_2859();
    event_func_2266();
    event_func_2270();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_2728();
    event_func_2729();
    event_func_2730();
    event_func_2731();
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
    event_func_2735();
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
    event_func_2736();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_6053();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
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
    event_func_2738();
    event_func_2739();
    event_func_2740();
    event_func_2741();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_2742();
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
    event_func_2744();
    event_func_1473();
    event_func_16748();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_2745();
    event_func_2746();
    event_func_2747();
    event_func_2748();
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
    event_func_2749();
    event_func_1542();
    event_func_1543();
    event_func_18592();
    event_func_1545();
    event_func_18593();
    event_func_1547();
    event_func_2750();
    event_func_2751();
    event_func_1550();
    event_func_18594();
    event_func_1552();
    event_func_18595();
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
    event_func_2752();
    event_func_2753();
    event_func_2754();
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
    event_func_2755();
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
    event_func_2756();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_2757();
    event_func_2758();
    event_func_2759();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_2761();
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
    event_func_2762();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_2763();
    event_func_1679();
    event_func_2765();
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
    event_func_2766();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_2768();
    event_func_2769();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_2770();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_2775();
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
    event_func_1726();
    event_func_1727();
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
    event_func_2776();
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
    event_func_2778();
    event_func_2779();
    event_func_2780();
    event_func_2781();
    event_func_1750();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_2782();
    event_func_1755();
    event_func_18596();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_16749();
    event_func_1759();
    event_func_16750();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_16751();
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
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
    event_func_1784();
    event_func_16752();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_2788();
    event_func_1792();
    event_func_2789();
    event_func_2790();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_2791();
    event_func_2792();
    event_func_2793();
    event_func_2794();
    event_func_2795();
    event_func_1806();
    event_func_1807();
    event_func_2796();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_2797();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_2798();
    event_func_2799();
    event_func_2800();
    event_func_2801();
    event_func_2802();
    event_func_2803();
    event_func_2807();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_2808();
    event_func_2809();
    event_func_2810();
    event_func_2811();
    event_func_2812();
    event_func_2814();
    event_func_2815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_2816();
    event_func_2817();
    event_func_2818();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_2819();
    event_func_1844();
    event_func_16753();
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
    event_func_2823();
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
    event_func_16754();
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
    event_func_16755();
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
    event_func_2824();
    event_func_1973();
    event_func_2825();
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
    event_func_18597();
    event_func_1994();
    event_func_1995();
    event_func_18598();
    event_func_18599();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_16756();
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
    event_func_18600();
    event_func_2025();
    event_func_2026();
    event_func_18601();
    event_func_2028();
    event_func_18602();
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
    event_func_2836();
    event_func_2043();
    event_func_2837();
    event_func_2838();
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
    event_func_18603();
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
    event_func_2082();
    event_func_2083();
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
    event_func_2842();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_2698();
    event_func_2147();
    event_func_2148();
    event_func_2843();
    event_func_2844();
    event_func_2151();
    event_func_2845();
    event_func_2846();
    event_func_2847();
    event_func_2848();
    event_func_2156();
    event_func_2849();
    event_func_2850();
    event_func_2851();
    event_func_2852();
    event_func_2853();
    event_func_2854();
    event_func_2855();
    event_func_2856();
    event_func_2857();
    event_func_2858();
    event_func_2860();
    event_func_2861();
    event_func_2862();
    event_func_2863();
    event_func_2864();
    event_func_2865();
    event_func_2866();
    event_func_2867();
    event_func_2868();
    event_func_2869();
    event_func_2870();
    event_func_2871();
    event_func_2872();
    event_func_2873();
    event_func_2874();
    event_func_2875();
    event_func_2876();
    event_func_2877();
    event_func_2878();
    event_func_2879();
    event_func_2880();
    event_func_2881();
    event_func_2882();
    event_func_2883();
    event_func_2884();
    event_func_2885();
    event_func_2886();
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
    event_func_2887();
    event_func_2888();
    event_func_2889();
    event_func_2890();
    event_func_2891();
    event_func_2892();
    event_func_2893();
    event_func_2221();
    event_func_2894();
    event_func_2895();
    event_func_2896();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2897();
    event_func_2898();
    event_func_2899();
    event_func_2900();
    event_func_2237();
    event_func_2901();
    event_func_2902();
    event_func_2903();
    event_func_2904();
    event_func_2905();
    event_func_2906();
    event_func_2907();
    event_func_2908();
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
    event_func_16757();
    event_func_2289();
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
    event_func_2912();
    event_func_2314();
    event_func_2913();
    event_func_2914();
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
    event_func_2939();
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
    event_func_2940();
    event_func_2941();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2942();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2943();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2944();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2945();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2423();
    event_func_2950();
    event_func_2425();
    event_func_2426();
    event_func_2427();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2951();
    event_func_2952();
    event_func_2433();
    event_func_2953();
    event_func_2435();
    event_func_2954();
    event_func_2955();
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
    event_func_6058();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
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
    event_func_2978();
    event_func_2979();
    event_func_2980();
    event_func_4355();
    event_func_4356();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_14812();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_2491();
    event_func_3000();
    event_func_13040();
    event_func_3855();
    event_func_3856();
    event_func_3857();
    event_func_3858();
    event_func_3859();
    event_func_3860();
    event_func_5358();
    event_func_5359();
    event_func_13041();
    event_func_5361();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_1_end;
    event_func_15491();
    event_func_15492();
    event_func_15493();
    event_func_15494();
    event_func_18604();
    event_func_15496();
    event_func_15497();
    event_func_15498();
    event_func_15499();
    event_func_15500();
    event_func_15501();
    event_func_15502();
    event_func_15503();
    event_func_15504();
    event_func_15505();
    event_func_15506();
    event_func_15507();
    event_func_15508();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_15509();
    event_func_15510();
    event_func_15511();
    event_func_15512();
    event_func_15513();
    event_func_15514();
    event_func_15515();
    event_func_15516();
    event_func_18605();
    event_func_15518();
    event_func_15519();
    event_func_15520();
    event_func_15521();
    event_func_15522();
    event_func_18606();
    event_func_18607();
    event_func_18608();
    event_func_15523();
    event_func_18609();
    event_func_18610();
    event_func_18611();
    event_func_18612();
    event_func_18613();
    event_func_18614();
    event_func_18615();
    event_func_18616();
    event_func_18617();
    event_func_18618();
    event_func_18619();
    event_func_18620();
    event_func_15525();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_15526();
    if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end;
    event_func_15527();
    event_func_15528();
    event_func_15529();
    event_func_15530();
    event_func_15531();
    event_func_15532();
    event_func_15533();
    event_func_15534();
    event_func_15535();
    event_func_15536();
    event_func_15537();
    event_func_15538();
    event_func_15539();
    event_func_15540();
    event_func_15541();
    event_func_18621();
    event_func_18622();
    event_func_18623();
    event_func_18624();
    event_func_18625();
    event_func_18626();
    event_func_18627();
    event_func_18628();
    event_func_18629();
    event_func_18630();
    event_func_18631();
    event_func_18632();
    event_func_18633();
    event_func_18634();
    event_func_15543();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1_end: ;
    event_func_15544();
    group_main_engine_level_specific_methods_cutscenes_dialog_system_1_end: ;
    event_func_3004();
    event_func_3005();
    event_func_3006();
    event_func_3007();
    if (!group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1) goto group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1_end;
    event_func_18635();
    event_func_18636();
    event_func_18637();
    event_func_18638();
    event_func_18639();
    event_func_18640();
    event_func_18641();
    event_func_18642();
    event_func_18643();
    event_func_18644();
    event_func_18645();
    event_func_18646();
    event_func_18647();
    event_func_18648();
    event_func_18649();
    event_func_18650();
    event_func_18651();
    event_func_18652();
    event_func_18653();
    event_func_18654();
    event_func_18655();
    event_func_18656();
    event_func_18657();
    event_func_18658();
    event_func_18659();
    event_func_18660();
    event_func_18661();
    event_func_18662();
    event_func_18663();
    event_func_18664();
    event_func_18665();
    event_func_18666();
    event_func_18667();
    event_func_18668();
    event_func_18669();
    event_func_18670();
    event_func_18671();
    event_func_18672();
    event_func_18673();
    event_func_18674();
    event_func_18675();
    event_func_18676();
    event_func_18677();
    event_func_18678();
    event_func_18679();
    event_func_18680();
    event_func_18681();
    event_func_18682();
    event_func_18683();
    event_func_18684();
    event_func_18685();
    event_func_18686();
    event_func_18687();
    event_func_18688();
    event_func_18689();
    event_func_18690();
    event_func_18691();
    event_func_18692();
    event_func_18693();
    event_func_18694();
    event_func_18695();
    event_func_18696();
    event_func_18697();
    event_func_18698();
    event_func_18699();
    event_func_18700();
    event_func_18701();
    event_func_18702();
    event_func_18703();
    event_func_18704();
    event_func_18705();
    event_func_18706();
    event_func_18707();
    event_func_18708();
    event_func_18709();
    event_func_18710();
    event_func_18711();
    event_func_18712();
    event_func_18713();
    event_func_18714();
    event_func_18715();
    event_func_18716();
    event_func_18717();
    event_func_18718();
    event_func_18719();
    event_func_18720();
    event_func_18721();
    event_func_18722();
    event_func_18723();
    event_func_18724();
    event_func_18725();
    event_func_18726();
    event_func_18727();
    event_func_18728();
    event_func_18729();
    event_func_18730();
    event_func_18731();
    event_func_18732();
    event_func_18733();
    event_func_18734();
    event_func_18735();
    event_func_18736();
    event_func_18737();
    event_func_18738();
    event_func_18739();
    event_func_18740();
    event_func_18741();
    event_func_18742();
    event_func_18743();
    event_func_18744();
    event_func_18745();
    event_func_18746();
    event_func_18747();
    event_func_18748();
    event_func_18749();
    event_func_18750();
    event_func_18751();
    event_func_18752();
    event_func_18753();
    event_func_18754();
    event_func_18755();
    event_func_18756();
    event_func_18757();
    event_func_18758();
    event_func_18759();
    event_func_18760();
    event_func_18761();
    event_func_18762();
    event_func_18763();
    event_func_18764();
    event_func_18765();
    event_func_18766();
    event_func_18767();
    event_func_18768();
    event_func_18769();
    event_func_18770();
    event_func_18771();
    event_func_18772();
    event_func_18773();
    event_func_18774();
    event_func_18775();
    event_func_18776();
    event_func_18777();
    event_func_18778();
    event_func_18779();
    event_func_18780();
    event_func_18781();
    event_func_18782();
    event_func_18783();
    event_func_18784();
    event_func_18785();
    event_func_18786();
    event_func_18787();
    event_func_18788();
    event_func_18789();
    event_func_18790();
    event_func_18791();
    event_func_18792();
    event_func_18793();
    event_func_18794();
    event_func_18795();
    event_func_18796();
    event_func_18797();
    event_func_18798();
    event_func_18799();
    event_func_18800();
    event_func_18801();
    event_func_18802();
    event_func_18803();
    event_func_18804();
    event_func_18805();
    event_func_18806();
    event_func_18807();
    event_func_18808();
    event_func_18809();
    event_func_18810();
    event_func_18811();
    event_func_18812();
    event_func_18813();
    event_func_18814();
    event_func_18815();
    event_func_18816();
    event_func_18817();
    event_func_18818();
    event_func_18819();
    event_func_18820();
    event_func_18821();
    event_func_18822();
    event_func_18823();
    event_func_18824();
    event_func_18825();
    event_func_18826();
    event_func_18827();
    event_func_18828();
    event_func_18829();
    event_func_18830();
    event_func_18831();
    event_func_18832();
    event_func_18833();
    event_func_18834();
    event_func_18835();
    event_func_18836();
    event_func_18837();
    event_func_18838();
    event_func_18839();
    event_func_18840();
    event_func_18841();
    event_func_18842();
    event_func_18843();
    event_func_18844();
    event_func_18845();
    event_func_18846();
    event_func_18847();
    event_func_18848();
    event_func_18849();
    event_func_18850();
    event_func_18851();
    event_func_18852();
    event_func_18853();
    event_func_18854();
    event_func_18855();
    event_func_18856();
    event_func_18857();
    event_func_18858();
    event_func_18859();
    event_func_18860();
    event_func_18861();
    event_func_18862();
    event_func_18863();
    event_func_18864();
    event_func_18865();
    event_func_18866();
    event_func_18867();
    event_func_18868();
    event_func_18869();
    event_func_18870();
    event_func_18871();
    event_func_18872();
    event_func_18873();
    event_func_18874();
    event_func_18875();
    event_func_18876();
    event_func_18877();
    event_func_18878();
    event_func_18879();
    event_func_18880();
    event_func_18881();
    event_func_18882();
    event_func_18883();
    event_func_18884();
    event_func_18885();
    group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_1) goto group_main_engine_level_specific_methods_cutscenes_cities_unite_1_end;
    event_func_18886();
    event_func_18887();
    event_func_18888();
    event_func_18889();
    event_func_18890();
    event_func_18891();
    event_func_18892();
    event_func_18893();
    event_func_18894();
    event_func_18895();
    event_func_18896();
    event_func_18897();
    event_func_18898();
    event_func_18899();
    event_func_18900();
    event_func_18901();
    event_func_18902();
    event_func_18903();
    event_func_18904();
    event_func_18905();
    event_func_18906();
    event_func_18907();
    event_func_18908();
    event_func_18909();
    event_func_18910();
    event_func_18911();
    event_func_18912();
    event_func_18913();
    event_func_18914();
    event_func_18915();
    event_func_18916();
    event_func_18917();
    event_func_18918();
    event_func_18919();
    event_func_18920();
    event_func_18921();
    event_func_18922();
    event_func_18923();
    event_func_18924();
    event_func_18925();
    event_func_18926();
    event_func_18927();
    event_func_18928();
    event_func_18929();
    event_func_18930();
    event_func_18931();
    event_func_18932();
    event_func_18933();
    event_func_18934();
    event_func_18935();
    event_func_18936();
    event_func_18937();
    event_func_18938();
    event_func_18939();
    event_func_18940();
    event_func_18941();
    event_func_18942();
    event_func_18943();
    event_func_18944();
    event_func_18945();
    event_func_18946();
    event_func_18947();
    event_func_18948();
    event_func_18949();
    event_func_18950();
    event_func_18951();
    event_func_18952();
    if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1) goto group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1_end;
    event_func_18953();
    event_func_18954();
    event_func_18955();
    event_func_18956();
    event_func_18957();
    event_func_18958();
    event_func_18959();
    event_func_18960();
    group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1) goto group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1_end;
    event_func_18961();
    event_func_18962();
    event_func_18963();
    event_func_18964();
    event_func_18965();
    event_func_18966();
    event_func_18967();
    group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1_end: ;
    event_func_18968();
    event_func_18969();
    event_func_18970();
    event_func_18971();
    event_func_18972();
    event_func_18973();
    event_func_18974();
    event_func_18975();
    event_func_18976();
    event_func_18977();
    event_func_18978();
    event_func_18979();
    event_func_18980();
    event_func_18981();
    event_func_18982();
    event_func_18983();
    event_func_18984();
    event_func_18985();
    event_func_18986();
    event_func_18987();
    event_func_18988();
    event_func_18989();
    event_func_18990();
    event_func_18991();
    event_func_18992();
    event_func_18993();
    event_func_18994();
    event_func_18995();
    event_func_18996();
    event_func_18997();
    event_func_18998();
    event_func_18999();
    group_main_engine_level_specific_methods_cutscenes_cities_unite_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_ship_crash_1) goto group_main_engine_level_specific_methods_cutscenes_ship_crash_1_end;
    event_func_19000();
    event_func_19001();
    event_func_19002();
    event_func_19003();
    event_func_19004();
    event_func_19005();
    event_func_19006();
    event_func_19007();
    event_func_19008();
    event_func_19009();
    event_func_19010();
    event_func_19011();
    event_func_19012();
    event_func_19013();
    event_func_19014();
    event_func_19015();
    event_func_19016();
    event_func_19017();
    event_func_19018();
    event_func_19019();
    event_func_19020();
    event_func_19021();
    event_func_19022();
    event_func_19023();
    event_func_19024();
    event_func_19025();
    event_func_19026();
    event_func_19027();
    event_func_19028();
    event_func_19029();
    event_func_19030();
    event_func_19031();
    event_func_19032();
    event_func_19033();
    event_func_19034();
    event_func_19035();
    event_func_19036();
    event_func_19037();
    event_func_19038();
    group_main_engine_level_specific_methods_cutscenes_ship_crash_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_ending_1) goto group_main_engine_level_specific_methods_cutscenes_ending_1_end;
    event_func_19039();
    event_func_19040();
    if (!group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1) goto group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1_end;
    event_func_19041();
    event_func_19042();
    event_func_19043();
    event_func_19044();
    event_func_19045();
    event_func_19046();
    event_func_19047();
    event_func_19048();
    event_func_19049();
    group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1) goto group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1_end;
    event_func_19050();
    event_func_19051();
    event_func_19052();
    event_func_19053();
    event_func_19054();
    event_func_19055();
    event_func_19056();
    event_func_19057();
    event_func_19058();
    event_func_19059();
    event_func_19060();
    event_func_19061();
    event_func_19062();
    event_func_19063();
    event_func_19064();
    event_func_19065();
    event_func_19066();
    event_func_19067();
    event_func_19068();
    event_func_19069();
    event_func_19070();
    event_func_19071();
    event_func_19072();
    event_func_19073();
    event_func_19074();
    event_func_19075();
    event_func_19076();
    event_func_19077();
    event_func_19078();
    event_func_19079();
    event_func_19080();
    event_func_19081();
    event_func_19082();
    event_func_19083();
    event_func_19084();
    event_func_19085();
    event_func_19086();
    event_func_19087();
    event_func_19088();
    event_func_19089();
    event_func_19090();
    event_func_19091();
    event_func_19092();
    event_func_19093();
    event_func_19094();
    event_func_19095();
    event_func_19096();
    event_func_19097();
    event_func_19098();
    event_func_19099();
    event_func_19100();
    event_func_19101();
    event_func_19102();
    event_func_19103();
    event_func_19104();
    event_func_19105();
    event_func_19106();
    event_func_19107();
    event_func_19108();
    group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1_end: ;
    event_func_19109();
    event_func_19110();
    event_func_19111();
    group_main_engine_level_specific_methods_cutscenes_ending_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_pangu_1) goto group_main_engine_level_specific_methods_cutscenes_pangu_1_end;
    event_func_19112();
    event_func_19113();
    event_func_19114();
    event_func_19115();
    event_func_19116();
    event_func_19117();
    group_main_engine_level_specific_methods_cutscenes_pangu_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_all_shields_1) goto group_main_engine_interface_and_post_processing_methods_all_shields_1_end;
    event_func_3656();
    event_func_3657();
    event_func_3658();
    event_func_3659();
    event_func_3660();
    event_func_3661();
    event_func_3662();
    event_func_3663();
    event_func_3664();
    group_main_engine_interface_and_post_processing_methods_all_shields_1_end: ;
    event_func_3235();
    event_func_3236();
    event_func_3237();
    event_func_3238();
    event_func_3239();
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
    event_func_18567();
    event_func_3958();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_me_music_engine_1) goto group_main_engine_interface_and_post_processing_methods_me_music_engine_1_end;
    event_func_11346();
    event_func_11347();
    event_func_11348();
    event_func_11349();
    event_func_11350();
    event_func_11351();
    event_func_11352();
    event_func_11353();
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1_end: ;
    event_func_3246();
    event_func_3247();
    event_func_3248();
    event_func_19118();
    event_func_19119();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_19120();
    event_func_19121();
    event_func_2644();
    event_func_18570();
    event_func_3252();
    event_func_3253();
    event_func_3975();
    event_func_17719();
    event_func_19122();
    event_func_19123();
    event_func_19124();
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
void Frames::handle_frame_83_pre_events()
{
}
void Frames::event_func_19125()
{
    // event 23_82
    {
        if (!(group_main_engine_1)) goto event_23_82_end;
        levelparallaxpiece0_465_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0_465_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.9);
            ((SystemBox*)*it)->alterables->values.set(4, 0.9);
        }
        levelparallaxpiece1_2_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_2_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.96);
            ((SystemBox*)*it)->alterables->values.set(4, 0.96);
        }
        levelparallaxpiece2_467_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2_467_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.9);
            ((SystemBox*)*it)->alterables->values.set(4, 0.9);
        }
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.85);
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.75);
            ((SystemBox*)*it)->alterables->values.set(4, 0.75);
        }
        for (ObjectIterator it(levelparallaxpiece0_465_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -0.3);
        }
        parallaxcrashedship_4003_instances.clear_selection();
        for (ObjectIterator it(parallaxcrashedship_4003_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.7);
            ((SystemBox*)*it)->alterables->values.set(4, 0.7);
        }
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.7);
            ((SystemBox*)*it)->alterables->values.set(4, 0.7);
            ((SystemBox*)*it)->alterables->values.set(6, -0.5);
        }
        levelparallaxpiece1_466_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_466_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.9);
            ((SystemBox*)*it)->alterables->values.set(4, 0.9);
        }
        levelparallaxpiece8_762_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece8_762_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 1);
            ((SystemBox*)*it)->alterables->values.set(4, 1);
        }
        levelparallaxpiece6layer2_3996_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6layer2_3996_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.75);
            ((SystemBox*)*it)->alterables->values.set(4, 0.75);
        }
    }
    event_23_82_end: ;
}
void Frames::event_func_19126()
{
    // event 1506_82
    {
        if (!(group_main_engine_1)) goto event_1506_82_end;
        if (!((global_values->get(4)) == (0))) goto event_1506_82_end;
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
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1) {
            group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1 = true;
        }
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
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        parallaxcrashedship_4003_instances.clear_selection();
        for (ObjectIterator it(parallaxcrashedship_4003_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece1_466_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_466_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece8_762_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece8_762_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        comet_3988_instances.clear_selection();
        for (ObjectIterator it(comet_3988_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        torqueship_3888_instances.clear_selection();
        for (ObjectIterator it(torqueship_3888_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        soldierwagon_4006_instances.clear_selection();
        for (ObjectIterator it(soldierwagon_4006_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        levelparallaxpiece6layer2_3996_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6layer2_3996_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        playerdragontail_3983_instances.clear_selection();
        spread_value(playerdragontail_3983_instances, 0, 1);
        message_42_instances.clear_selection();
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->destroy();
        }
        playerzaotank2_4013_instances.clear_selection();
        for (ObjectIterator it(playerzaotank2_4013_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerzaotank_4014_instances.clear_selection();
        for (ObjectIterator it(playerzaotank_4014_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        global_values->set(3, 0);
        if (!group_main_engine_level_specific_methods_cutscenes_pangu_1) {
            group_main_engine_level_specific_methods_cutscenes_pangu_1 = true;
        }
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(0, 3360);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(1, 180);
    }
    event_1506_82_end: ;
}
void Frames::event_func_19127()
{
    // event 1761_82
    {
        if (!(group_main_engine_1)) goto event_1761_82_end;
        if (!((global_values->get(4)) == (1))) goto event_1761_82_end;
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
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_1) {
            group_main_engine_level_specific_methods_cutscenes_cities_unite_1 = true;
        }
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
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        parallaxcrashedship_4003_instances.clear_selection();
        for (ObjectIterator it(parallaxcrashedship_4003_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        levelparallaxpiece1_466_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_466_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece8_762_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece8_762_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        comet_3988_instances.clear_selection();
        for (ObjectIterator it(comet_3988_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        torqueship_3888_instances.clear_selection();
        for (ObjectIterator it(torqueship_3888_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        soldierwagon_4006_instances.clear_selection();
        for (ObjectIterator it(soldierwagon_4006_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        levelparallaxpiece6layer2_3996_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6layer2_3996_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale2_3052_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale2_3052_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale3_3053_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale3_3053_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale4_3054_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale4_3054_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        message_42_instances.clear_selection();
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->destroy();
        }
        for (ObjectIterator it(soldierwagon_4006_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
        ((Active*)get_instance(npcneera_2464_instances))->set_visible(false);
        if (!group_main_engine_level_specific_methods_cutscenes_pangu_1) {
            group_main_engine_level_specific_methods_cutscenes_pangu_1 = true;
        }
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(0, 600);
        playerdragontail_3983_instances.clear_selection();
        spread_value(playerdragontail_3983_instances, 0, 1);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1761_82_end: ;
}
void Frames::event_func_19128()
{
    // event 1879_82
    {
        if (!(group_main_engine_1)) goto event_1879_82_end;
        if (!((global_values->get(4)) == (2))) goto event_1879_82_end;
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
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_ship_crash_1) {
            group_main_engine_level_specific_methods_cutscenes_ship_crash_1 = true;
        }
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
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        parallaxcrashedship_4003_instances.clear_selection();
        for (ObjectIterator it(parallaxcrashedship_4003_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_visible(false);
        }
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_visible(false);
        }
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelparallaxpiece2_467_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2_467_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece0_465_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0_465_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece1_2_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_2_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
            group_pause_1 = false;
    
        global_values->set(3, 0);
            group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = false;
    
        torqueship_3888_instances.clear_selection();
        for (ObjectIterator it(torqueship_3888_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        soldierwagon_4006_instances.clear_selection();
        for (ObjectIterator it(soldierwagon_4006_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        caravanwheel_1386_instances.clear_selection();
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale2_3052_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale2_3052_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale3_3053_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale3_3053_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale4_3054_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale4_3054_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        message_42_instances.clear_selection();
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_visible(false);
        }
        playerzaotank_4014_instances.clear_selection();
        for (ObjectIterator it(playerzaotank_4014_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerzaotank2_4013_instances.clear_selection();
        for (ObjectIterator it(playerzaotank2_4013_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1879_82_end: ;
}
void Frames::event_func_19129()
{
    // event 1919_82
    {
        if (!(group_main_engine_1)) goto event_1919_82_end;
        if (!((global_values->get(4)) == (3))) goto event_1919_82_end;
        if (!group_main_engine_level_specific_methods_cutscenes_ending_1) {
            group_main_engine_level_specific_methods_cutscenes_ending_1 = true;
        }
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
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        parallaxcrashedship_4003_instances.clear_selection();
        for (ObjectIterator it(parallaxcrashedship_4003_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        objecttententrance_551_instances.clear_selection();
        for (ObjectIterator it(objecttententrance_551_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        levelparallaxpiece0_465_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece0_465_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece1_2_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_2_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        levelparallaxpiece2_467_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2_467_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        soldierwagon_4006_instances.clear_selection();
        for (ObjectIterator it(soldierwagon_4006_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->destroy();
        }
        bossholodragonhitspot3_3071_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot3_3071_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonhitspot2_3070_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot2_3070_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonhitspot1_3069_instances.clear_selection();
        for (ObjectIterator it(bossholodragonhitspot1_3069_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbrow_3059_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbrow_3059_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonear_3058_instances.clear_selection();
        for (ObjectIterator it(bossholodragonear_3058_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonneck_3057_instances.clear_selection();
        for (ObjectIterator it(bossholodragonneck_3057_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonpupil_3056_instances.clear_selection();
        for (ObjectIterator it(bossholodragonpupil_3056_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragoneye_3055_instances.clear_selection();
        for (ObjectIterator it(bossholodragoneye_3055_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale3_3053_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale3_3053_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale_3051_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale_3051_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale4_3054_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale4_3054_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonscale2_3052_instances.clear_selection();
        for (ObjectIterator it(bossholodragonscale2_3052_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbottomtooth_3050_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbottomtooth_3050_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragontoptooth_3049_instances.clear_selection();
        for (ObjectIterator it(bossholodragontoptooth_3049_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossholodragonbreath_3048_instances.clear_selection();
        for (ObjectIterator it(bossholodragonbreath_3048_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        message_42_instances.clear_selection();
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->destroy();
        }
        playerzaotank2_4013_instances.clear_selection();
        for (ObjectIterator it(playerzaotank2_4013_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerzaotank_4014_instances.clear_selection();
        for (ObjectIterator it(playerzaotank_4014_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        global_values->set(3, 0);
    }
    event_1919_82_end: ;
}
void Frames::on_frame_83_start_events()
{
    event_func_17154();
    event_func_4133();
    event_func_3265();
    event_func_13046();
    event_func_17159();
    event_func_17160();
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
    event_func_19125();
    event_func_3269();
    event_func_17167();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_3270();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_2686();
    event_func_3990();
    event_func_19126();
    event_func_19127();
    event_func_19128();
    event_func_19129();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_13052();
    event_func_18580();
    event_func_11365();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_83_init()
{
    index = 82;
    width = 4800;
    height = 1600;
    virtual_width = 4800;
    virtual_height = 1600;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, NULL};
    qualifier_8.set(9, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, NULL};
    qualifier_9.set(32, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&caravanengine_1395_instances, &bossholodragonhitspot1_3069_instances, &bossholodragonhitspot2_3070_instances, &bossholodragonhitspot3_3071_instances, NULL};
    qualifier_20.set(4, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece8_762_instances, &levelparallaxpiece1_466_instances, &levelparallaxpiece6layer2_3996_instances, &parallaxcrashedship_4003_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(10, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &bossclawbase_1393_instances, &hazardspikesup_558_instances, NULL};
    qualifier_7.set(27, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &playerskinmilla_446_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_32_instances[] = {&bossholodragonbreath_3048_instances, &bossholodragontoptooth_3049_instances, &bossholodragonbottomtooth_3050_instances, &bossholodragonscale_3051_instances, &bossholodragonscale2_3052_instances, &bossholodragonscale3_3053_instances, &bossholodragonscale4_3054_instances, &bossholodragoneye_3055_instances, &bossholodragonpupil_3056_instances, &bossholodragonear_3058_instances, &bossholodragonbrow_3059_instances, NULL};
    qualifier_32.set(11, &qualifier_32_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece8_3981(320, 0), 0);
    add_background_object(create_levelparallaxpiece0_3197(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_3198(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_3199(0, 168), 0);
    add_background_object(create_levelparallaxpiece1_3982(320, 168), 0);
    add_background_object(create_levelparallaxpiece5_3200(0, 224), 0);
    add_background_object(create_levelparallaxpiece6_3201(0, 304), 0);
    add_object(create_playerdragontail_3983(-180, 1332), 0);
    add_object(create_playerdragontail_3983(-212, 1332), 0);
    add_object(create_playerdragontail_3983(-244, 1332), 0);
    add_object(create_playerdragontail_3983(-276, 1332), 0);
    add_object(create_playerdragontail_3983(-308, 1332), 0);
    add_object(create_playerdragontail_3983(-340, 1332), 0);
    add_object(create_playerdragontail_3983(-372, 1332), 0);
    add_object(create_playerdragontail_3983(-404, 1332), 0);
    add_object(create_playerdragontail_3983(-436, 1332), 0);
    add_object(create_playerdragontail_3983(-468, 1332), 0);
    add_object(create_playerdragonhead_3984(-157, 1337), 0);
    add_object(create_playerdragonrider_3985(-169, 1315), 0);
    add_object(create_comet2_3987(623, -89), 0);
    add_object(create_comet_3988(839, 183), 0);
    add_object(create_spaceheroship_3990(573, -26), 0);
    add_object(create_dragontailpath_3995(-380, 1364), 0);
    add_background_object(create_levelparallaxpiece6layer2_3996(0, 304), 1);
    add_background_object(create_jeeppart6_3997(552, 1808), 1);
    add_background_object(create_jeeppart2_3998(552, 1832), 1);
    add_background_object(create_jeeppart3_3999(464, 1832), 1);
    add_background_object(create_jeeppart5_4000(680, 1832), 1);
    add_background_object(create_jeeppart1_4001(488, 1832), 1);
    add_background_object(create_jeeppart1_4001(616, 1832), 1);
    add_background_object(create_jeeppart4_4002(592, 1784), 1);
    add_background_object(create_caravanplatform8_1273(2528, 1408), 1);
    add_background_object(create_caravanplatform8_1273(2816, 1408), 1);
    add_background_object(create_caravanplatform8_1273(2624, 1408), 1);
    add_background_object(create_caravanplatform8_1273(2720, 1408), 1);
    add_background_object(create_caravanplatform8_1273(3024, 1392), 1);
    add_background_object(create_caravanplatform12_1319(3000, 1336), 1);
    add_background_object(create_caravanplatform12_1319(3192, 1408), 1);
    add_background_object(create_caravanplatform3_1320(2536, 1456), 1);
    add_background_object(create_caravanplatform3_1320(2792, 1456), 1);
    add_background_object(create_caravanplatform3_1320(2728, 1456), 1);
    add_background_object(create_caravanplatform3_1320(3128, 1456), 1);
    add_background_object(create_caravanplatform9_1327(2856, 1456), 1);
    add_background_object(create_caravanplatform_1325(2512, 1456), 1);
    add_background_object(create_caravanplatform4_1322(3000, 1456), 1);
    add_background_object(create_caravanplatform4_1322(2600, 1456), 1);
    add_background_object(create_caravanplatform4_1322(2664, 1456), 1);
    add_background_object(create_caravanplatform4_1322(2936, 1456), 1);
    add_background_object(create_caravanplatform4_1322(3064, 1456), 1);
    add_background_object(create_caravanplatform2_1326(2936, 1416), 1);
    add_background_object(create_caravanplatform2_1326(2936, 1376), 1);
    add_background_object(create_caravanplatform2_1326(2936, 1336), 1);
    add_background_object(create_caravanplatform10_1329(2936, 1464), 1);
    add_background_object(create_caravanplatform10_1329(3016, 1464), 1);
    add_background_object(create_caravantruck_1330(3016, 1336), 1);
    add_background_object(create_caravantruck3_1331(3064, 1336), 1);
    add_background_object(create_caravanplatform12_1319(3000, 1304), 1);
    add_background_object(create_caravanplatform11_1332(2992, 1376), 1);
    add_background_object(create_caravanplatform11_1332(2992, 1376), 1);
    add_background_object(create_bossclawbaseback_1333(2872, 1392), 1);
    add_background_object(create_caravanplatform13_1357(2952, 1376), 1);
    add_background_object(create_caravantruck2_3907(3136, 1408), 1);
    add_background_object(create_caravanplatform14_1359(2936, 1336), 1);
    add_background_object(create_caravanplatform14_1359(2936, 1376), 1);
    add_background_object(create_caravandoor_3908(3032, 1408), 1);
    add_background_object(create_backguard_3949(3072, 1384), 1);
    add_background_object(create_backguard_3949(3040, 1384), 1);
    add_background_object(create_parallaxcrashedship_4003(64, 320), 1);
    add_background_object(create_levelparallaxpiece7_4004(0, 496), 1);
    add_object(create_npcmerc_1283(2800, 1439), 1);
    add_object(create_npcmerc_1283(2648, 1439), 1);
    add_object(create_yellowspringup_434(2904, 1408), 1);
    add_object(create_caravanwheel_1386(2568, 1504), 1);
    add_object(create_caravanwheel_1386(2824, 1504), 1);
    add_object(create_caravanwheel_1386(2760, 1504), 1);
    add_object(create_caravanwheel_1386(3160, 1504), 1);
    add_object(create_bossclawbase_1393(2896, 1416), 1);
    add_object(create_caravanengine_1395(3156, 1404), 1);
    add_object(create_active_3911(3186, 1528), 1);
    add_object(create_npcmerc_1283(2688, 1439), 1);
    add_object(create_npcmerc_1283(2752, 1439), 1);
    add_object(create_npcmerc_1283(2832, 1439), 1);
    add_object(create_npcmerc_1283(2776, 1439), 1);
    add_object(create_npcmerc_1283(2720, 1439), 1);
    add_object(create_npcmerc_1283(2672, 1439), 1);
    add_object(create_npcmerc_1283(2568, 1439), 1);
    add_object(create_npcmerc_1283(2608, 1439), 1);
    add_object(create_brevondistant_4005(-57, 638), 1);
    add_object(create_brevondistant2_3989(-57, 650), 1);
    add_object(create_npcshieldguard_3994(3976, 1512), 1);
    add_object(create_npcshieldguard_3994(4024, 1520), 1);
    add_object(create_npcshieldguard_3994(3944, 1504), 1);
    add_object(create_npcshieldguard_3994(4000, 1512), 1);
    add_object(create_npcshieldguard_3994(4056, 1520), 1);
    add_object(create_soldierwagon_4006(2376, 1456), 1);
    add_object(create_soldierwagon_4006(2120, 1456), 1);
    add_object(create_soldierwagon_4006(1864, 1456), 1);
    add_object(create_caravanwheel_1386(2440, 1504), 1);
    add_object(create_caravanwheel_1386(2312, 1504), 1);
    add_object(create_caravanwheel_1386(2184, 1504), 1);
    add_object(create_caravanwheel_1386(2056, 1504), 1);
    add_object(create_caravanwheel_1386(1928, 1504), 1);
    add_object(create_caravanwheel_1386(1800, 1504), 1);
    add_object(create_soldierwagon_4006(1608, 1456), 1);
    add_object(create_caravanwheel_1386(1672, 1504), 1);
    add_object(create_caravanwheel_1386(1544, 1504), 1);
    add_object(create_zaosnowmound_4007(3640, 1528), 1);
    add_object(create_soldierwagon_4006(1352, 1456), 1);
    add_object(create_caravanwheel_1386(1416, 1504), 1);
    add_object(create_caravanwheel_1386(1288, 1504), 1);
    add_object(create_soldierwagon_4006(1096, 1456), 1);
    add_object(create_caravanwheel_1386(1160, 1504), 1);
    add_object(create_caravanwheel_1386(1032, 1504), 1);
    add_object(create_soldierwagon_4006(840, 1456), 1);
    add_object(create_caravanwheel_1386(904, 1504), 1);
    add_object(create_caravanwheel_1386(776, 1504), 1);
    add_object(create_soldierwagon_4006(584, 1456), 1);
    add_object(create_caravanwheel_1386(648, 1504), 1);
    add_object(create_caravanwheel_1386(520, 1504), 1);
    add_object(create_soldierwagon_4006(328, 1456), 1);
    add_object(create_caravanwheel_1386(392, 1504), 1);
    add_object(create_caravanwheel_1386(264, 1504), 1);
    add_object(create_npcstofficer_3941(3290, 1759), 1);
    add_background_object(create_bgsnowdune2_3203(3720, 1464), 2);
    add_background_object(create_bgsnowdune2_3203(3128, 1448), 2);
    add_background_object(create_bgsnowdune2_3203(3864, 1488), 2);
    add_background_object(create_bgsnowdune2_3203(3760, 1448), 2);
    add_background_object(create_bgdeadtree_3204(1576, 1384), 2);
    add_background_object(create_bgdeadtree_3204(272, 1424), 2);
    add_background_object(create_bgsnowdune2_3203(1440, 1448), 2);
    add_background_object(create_bgsnowmound_3207(1792, 1512), 2);
    add_background_object(create_bgsnowmound_3207(1872, 1512), 2);
    add_background_object(create_bgsnowmound_3207(1944, 1512), 2);
    add_background_object(create_bgsnowmound_3207(2048, 1512), 2);
    add_background_object(create_bgsnowmound_3207(2120, 1512), 2);
    add_background_object(create_bgsnowmound_3207(2184, 1520), 2);
    add_background_object(create_bgdeadtree_3204(2336, 1424), 2);
    add_background_object(create_bgsnowdune2_3203(2400, 1480), 2);
    add_background_object(create_bgdeadtree_3204(4528, 1376), 2);
    add_background_object(create_bgsnowdune2_3203(4392, 1440), 2);
    add_background_object(create_bgdeadtree_3204(192, 144), 2);
    add_background_object(create_bgsnowmound_3207(4672, 280), 2);
    add_background_object(create_bgsnowmound_3207(4552, 280), 2);
    add_background_object(create_bgsnowmound_3207(4424, 280), 2);
    add_background_object(create_bgsnowmound_3207(4296, 280), 2);
    add_background_object(create_bgsnowmound_3207(4176, 280), 2);
    add_background_object(create_treehousesolidblack2_636(4160, 440), 2);
    add_background_object(create_treehousesolidblack2_636(4288, 440), 2);
    add_background_object(create_treehousesolidblack2_636(4416, 440), 2);
    add_background_object(create_treehousesolidblack2_636(4544, 440), 2);
    add_background_object(create_treehousesolidblack2_636(4672, 440), 2);
    add_background_object(create_treehousesolidblack2_636(4288, 568), 2);
    add_background_object(create_treehousesolidblack2_636(4416, 568), 2);
    add_background_object(create_treehousesolidblack2_636(4544, 568), 2);
    add_background_object(create_treehousesolidblack2_636(4672, 568), 2);
    add_background_object(create_treehousesolidblack2_636(4288, 696), 2);
    add_background_object(create_treehousesolidblack2_636(4416, 696), 2);
    add_background_object(create_treehousesolidblack2_636(4544, 696), 2);
    add_background_object(create_treehousesolidblack2_636(4672, 696), 2);
    add_background_object(create_fdfloor1_3570(4288, 760), 2);
    add_object(create_torqueship_3888(2359, 1516), 2);
    add_object(create_jeepbase_3991(5000, 1468), 2);
    add_object(create_objecttent2_585(1952, 1432), 2);
    add_object(create_objecttent_583(2112, 1432), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(4856, 269), 2);
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
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_objecttent_583(1944, 1432), 2);
    add_object(create_objecttent2_585(1784, 1432), 2);
    add_object(create_bgfireplace2_4008(2304, 1464), 2);
    add_object(create_jeepwheel1_3992(5064, 1504), 2);
    add_object(create_jeepwheel2_3993(4936, 1504), 2);
    add_object(create_thrusterflame_3886(-258, 1520), 2);
    add_object(create_playerassistcopilot_2219(4942, 1400), 2);
    add_object(create_bossholodragonbreath_3048(5304, 1480), 2);
    add_object(create_bossholodragontoptooth_3049(5365, 1422), 2);
    add_object(create_bossholodragontoptooth_3049(5333, 1438), 2);
    add_object(create_bossholodragontoptooth_3049(5301, 1454), 2);
    add_object(create_bossholodragontoptooth_3049(5269, 1470), 2);
    add_object(create_bossholodragontoptooth_3049(5237, 1486), 2);
    add_object(create_bossholodragontoptooth_3049(5205, 1502), 2);
    add_object(create_bossholodragontoptooth_3049(5173, 1518), 2);
    add_object(create_bossholodragontoptooth_3049(5141, 1534), 2);
    add_object(create_bossholodragonbottomtooth_3050(5403, 1485), 2);
    add_object(create_bossholodragonbottomtooth_3050(5371, 1501), 2);
    add_object(create_bossholodragonbottomtooth_3050(5339, 1517), 2);
    add_object(create_bossholodragonbottomtooth_3050(5307, 1533), 2);
    add_object(create_bossholodragonbottomtooth_3050(5275, 1549), 2);
    add_object(create_bossholodragonbottomtooth_3050(5243, 1565), 2);
    add_object(create_bossholodragonbottomtooth_3050(5211, 1581), 2);
    add_object(create_bossholodragonscale_3051(5187, 1507), 2);
    add_object(create_bossholodragonscale_3051(5251, 1475), 2);
    add_object(create_bossholodragonscale_3051(5315, 1443), 2);
    add_object(create_bossholodragonscale2_3052(5568, 1243), 2);
    add_object(create_bossholodragonscale2_3052(5648, 1243), 2);
    add_object(create_bossholodragonscale2_3052(5728, 1243), 2);
    add_object(create_bossholodragonscale2_3052(5808, 1243), 2);
    add_object(create_bossholodragonscale2_3052(5888, 1243), 2);
    add_object(create_bossholodragonscale2_3052(5968, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6048, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6128, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6208, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6288, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6368, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6448, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6528, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6608, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6688, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6768, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6848, 1243), 2);
    add_object(create_bossholodragonscale2_3052(6928, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7008, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7088, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7176, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7264, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7368, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7472, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7576, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7680, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7784, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7888, 1243), 2);
    add_object(create_bossholodragonscale2_3052(7992, 1243), 2);
    add_object(create_bossholodragonscale2_3052(8096, 1243), 2);
    add_object(create_bossholodragonscale2_3052(8200, 1243), 2);
    add_object(create_bossholodragonscale2_3052(8304, 1243), 2);
    add_object(create_bossholodragonscale3_3053(5608, 1267), 2);
    add_object(create_bossholodragonscale3_3053(5688, 1267), 2);
    add_object(create_bossholodragonscale3_3053(5768, 1267), 2);
    add_object(create_bossholodragonscale3_3053(5848, 1267), 2);
    add_object(create_bossholodragonscale3_3053(5928, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6008, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6088, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6168, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6248, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6328, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6408, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6488, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6568, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6648, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6728, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6808, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6888, 1267), 2);
    add_object(create_bossholodragonscale3_3053(6968, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7048, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7128, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7216, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7312, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7416, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7520, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7624, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7728, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7832, 1267), 2);
    add_object(create_bossholodragonscale3_3053(7936, 1267), 2);
    add_object(create_bossholodragonscale3_3053(8040, 1267), 2);
    add_object(create_bossholodragonscale3_3053(8144, 1267), 2);
    add_object(create_bossholodragonscale3_3053(8248, 1267), 2);
    add_object(create_bossholodragonscale4_3054(5648, 1307), 2);
    add_object(create_bossholodragonscale4_3054(5728, 1307), 2);
    add_object(create_bossholodragonscale4_3054(5808, 1307), 2);
    add_object(create_bossholodragonscale4_3054(5888, 1307), 2);
    add_object(create_bossholodragonscale4_3054(5968, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6048, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6128, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6208, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6288, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6368, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6448, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6528, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6608, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6688, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6768, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6848, 1307), 2);
    add_object(create_bossholodragonscale4_3054(6928, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7008, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7088, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7168, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7256, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7360, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7464, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7568, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7672, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7776, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7880, 1307), 2);
    add_object(create_bossholodragonscale4_3054(7984, 1307), 2);
    add_object(create_bossholodragonscale4_3054(8088, 1307), 2);
    add_object(create_bossholodragonscale4_3054(8192, 1307), 2);
    add_object(create_bossholodragoneye_3055(5344, 1272), 2);
    add_object(create_bossholodragonpupil_3056(5344, 1272), 2);
    add_object(create_bossholodragonneck_3057(5464, 1376), 2);
    add_object(create_bossholodragonear_3058(5552, 1168), 2);
    add_object(create_bossholodragonbrow_3059(5344, 1272), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_bgsnow1_3224(2256, 1528), 3);
    add_background_object(create_bgrocks1_3213(4032, 312), 3);
    add_background_object(create_bgsnow1_3224(4032, 296), 3);
    add_background_object(create_bgsnow1_3224(4160, 296), 3);
    add_background_object(create_bgrocks1_3213(4544, 312), 3);
    add_background_object(create_bgsnow1_3224(4544, 296), 3);
    add_background_object(create_bgsnow1_3224(4672, 296), 3);
    add_background_object(create_bgrocks1_3213(4288, 312), 3);
    add_background_object(create_bgsnow1_3224(4288, 296), 3);
    add_background_object(create_bgsnow1_3224(4416, 296), 3);
    add_background_object(create_bgrocks1_3213(0, 288), 3);
    add_background_object(create_bgrocks9_3227(256, 288), 3);
    add_background_object(create_bgrocks1_3213(0, 1544), 3);
    add_background_object(create_bgrocks1_3213(256, 1544), 3);
    add_background_object(create_bgsnow1_3224(128, 1528), 3);
    add_background_object(create_bgsnow1_3224(256, 1528), 3);
    add_background_object(create_bgsnow1_3224(0, 1528), 3);
    add_background_object(create_bgsnow1_3224(384, 1528), 3);
    add_background_object(create_bgrocks1_3213(-568, 1088), 3);
    add_background_object(create_bgrocks10_3228(-536, 1120), 3);
    add_background_object(create_bgrocks11_3215(-568, 1136), 3);
    add_background_object(create_bgrocks2_3218(-528, 1120), 3);
    add_background_object(create_bgrocks3_3220(-536, 1128), 3);
    add_background_object(create_bgrocks4_3217(-536, 1136), 3);
    add_background_object(create_bgrocks5_3221(-528, 1136), 3);
    add_background_object(create_bgrocks6_3226(-544, 1120), 3);
    add_background_object(create_bgrocks7_3219(-560, 1112), 3);
    add_background_object(create_bgrocks8_3231(-552, 1128), 3);
    add_background_object(create_bgrocks9_3227(-520, 1112), 3);
    add_background_object(create_bgsnow1_3224(-544, 1136), 3);
    add_background_object(create_bgsnow1_3224(-512, 1136), 3);
    add_background_object(create_bgsnow2_3238(-528, 1144), 3);
    add_background_object(create_bgsnow3_3237(-520, 1128), 3);
    add_background_object(create_bgsnow4_3239(-520, 1136), 3);
    add_background_object(create_bgsnow5_3232(-512, 1136), 3);
    add_background_object(create_bgsnow6_3233(-512, 1120), 3);
    add_background_object(create_bgsnow7_3236(-520, 1128), 3);
    add_background_object(create_bgsnow8_3229(-472, 1136), 3);
    add_background_object(create_bgsnow9_3222(-456, 1144), 3);
    add_background_object(create_bgrocks14_3216(-424, 1112), 3);
    add_background_object(create_bgrocks12_3240(-472, 1104), 3);
    add_background_object(create_bgrocks13_3212(-560, 1128), 3);
    add_background_object(create_bgrocks1_3213(512, 1544), 3);
    add_background_object(create_bgrocks1_3213(768, 1544), 3);
    add_background_object(create_bgsnow1_3224(640, 1528), 3);
    add_background_object(create_bgsnow1_3224(768, 1528), 3);
    add_background_object(create_bgsnow1_3224(512, 1528), 3);
    add_background_object(create_bgsnow1_3224(896, 1528), 3);
    add_background_object(create_bgrocks1_3213(1024, 1544), 3);
    add_background_object(create_bgrocks1_3213(1280, 1544), 3);
    add_background_object(create_bgsnow1_3224(1152, 1528), 3);
    add_background_object(create_bgsnow1_3224(1280, 1528), 3);
    add_background_object(create_bgsnow1_3224(1024, 1528), 3);
    add_background_object(create_bgsnow1_3224(1408, 1528), 3);
    add_background_object(create_bgrocks1_3213(1536, 1544), 3);
    add_background_object(create_bgrocks1_3213(1792, 1544), 3);
    add_background_object(create_bgsnow1_3224(1664, 1528), 3);
    add_background_object(create_bgsnow1_3224(1792, 1528), 3);
    add_background_object(create_bgsnow1_3224(1536, 1528), 3);
    add_background_object(create_bgsnow1_3224(1920, 1528), 3);
    add_background_object(create_bgrocks1_3213(2048, 1544), 3);
    add_background_object(create_bgsnow1_3224(2048, 1528), 3);
    add_background_object(create_bgsnow1_3224(2176, 1528), 3);
    add_background_object(create_bgrocks1_3213(2304, 1544), 3);
    add_background_object(create_bgsnow1_3224(2304, 1528), 3);
    add_background_object(create_bgsnow1_3224(2432, 1528), 3);
    add_background_object(create_bgrocks1_3213(2560, 1544), 3);
    add_background_object(create_bgsnow1_3224(2560, 1528), 3);
    add_background_object(create_bgsnow1_3224(2688, 1528), 3);
    add_background_object(create_bgrocks1_3213(2816, 1544), 3);
    add_background_object(create_bgsnow1_3224(2816, 1528), 3);
    add_background_object(create_bgsnow1_3224(2944, 1528), 3);
    add_background_object(create_bgrocks1_3213(3072, 1544), 3);
    add_background_object(create_bgsnow1_3224(3072, 1528), 3);
    add_background_object(create_bgsnow1_3224(3200, 1528), 3);
    add_background_object(create_bgfireplace_4009(2288, 1512), 3);
    add_background_object(create_bgrocks1_3213(3328, 1544), 3);
    add_background_object(create_bgsnow1_3224(3328, 1528), 3);
    add_background_object(create_bgsnow1_3224(3456, 1528), 3);
    add_background_object(create_bgrocks1_3213(3584, 1544), 3);
    add_background_object(create_bgsnow1_3224(3584, 1528), 3);
    add_background_object(create_bgsnow1_3224(3712, 1528), 3);
    add_background_object(create_bgrocks1_3213(3840, 1544), 3);
    add_background_object(create_bgsnow1_3224(3840, 1528), 3);
    add_background_object(create_bgsnow1_3224(3968, 1528), 3);
    add_background_object(create_bgrocks1_3213(4096, 1544), 3);
    add_background_object(create_bgsnow1_3224(4096, 1528), 3);
    add_background_object(create_bgsnow1_3224(4224, 1528), 3);
    add_background_object(create_bgrocks1_3213(4352, 1544), 3);
    add_background_object(create_bgsnow1_3224(4352, 1528), 3);
    add_background_object(create_bgsnow1_3224(4480, 1528), 3);
    add_background_object(create_bgrocks1_3213(4608, 1544), 3);
    add_background_object(create_bgsnow1_3224(4608, 1528), 3);
    add_background_object(create_bgsnow1_3224(4736, 1528), 3);
    add_background_object(create_bgrocks4_3217(0, 208), 3);
    add_background_object(create_bgrocks7_3219(128, 240), 3);
    add_background_object(create_bgrocks15_3214(16, 224), 3);
    add_background_object(create_bgsnow8_3229(256, 256), 3);
    add_background_object(create_bgrocks15_3214(128, 288), 3);
    add_background_object(create_bgsnow4_3239(128, 224), 3);
    add_background_object(create_bgsnow2_3238(0, 192), 3);
    add_background_object(create_bgrocks1_3213(0, 416), 3);
    add_background_object(create_bgrocks9_3227(256, 416), 3);
    add_background_object(create_bgrocks1_3213(0, 544), 3);
    add_background_object(create_bgrocks9_3227(256, 544), 3);
    add_background_object(create_bgrocks1_3213(0, 928), 3);
    add_background_object(create_bgrocks9_3227(256, 928), 3);
    add_background_object(create_bgrocks1_3213(0, 1056), 3);
    add_background_object(create_bgrocks9_3227(256, 1056), 3);
    add_background_object(create_bgrocks8_3231(0, 1168), 3);
    add_background_object(create_bgrocks8_3231(128, 1168), 3);
    add_background_object(create_bgrocks1_3213(0, 672), 3);
    add_background_object(create_bgrocks9_3227(256, 672), 3);
    add_background_object(create_bgrocks1_3213(0, 800), 3);
    add_background_object(create_bgrocks9_3227(256, 800), 3);
    add_background_object(create_bgrocks1_3213(792, 1112), 3);
    add_background_object(create_bgsnow1_3224(792, 1096), 3);
    add_background_object(create_bgsnow1_3224(920, 1096), 3);
    add_background_object(create_bgrocks8_3231(792, 1224), 3);
    add_background_object(create_bgrocks8_3231(920, 1224), 3);
    add_background_object(create_bgrocks10_3228(776, 1104), 3);
    add_background_object(create_bgrocks9_3227(1048, 1104), 3);
    add_background_object(create_bgsnow8_3229(1048, 1096), 3);
    add_background_object(create_bgsnow9_3222(776, 1096), 3);
    add_background_object(create_backdrop6_589(4432, 128), 3);
    add_background_object(create_backdrop6_589(4496, 128), 3);
    add_background_object(create_backdrop6_589(4560, 128), 3);
    add_background_object(create_backdrop6_589(4680, 128), 3);
    add_background_object(create_backdrop6_589(4368, 128), 3);
    add_background_object(create_backdrop6_589(4624, 128), 3);
    add_background_object(create_backdrop6_589(4240, 128), 3);
    add_background_object(create_backdrop6_589(4304, 128), 3);
    add_background_object(create_backdrop7_4010(4184, 128), 3);
    add_background_object(create_backdrop8_4011(4736, 128), 3);
    add_background_object(create_tentfloorfadeleft_613(4184, 296), 3);
    add_background_object(create_tentfloorfaderight_614(4672, 296), 3);
    add_background_object(create_treehousesolidblack2_636(4544, 0), 3);
    add_background_object(create_treehousesolidblack2_636(4672, 0), 3);
    add_background_object(create_treehousesolidblack2_636(4288, 0), 3);
    add_background_object(create_treehousesolidblack2_636(4416, 0), 3);
    add_background_object(create_treehousesolidblack2_636(4160, 0), 3);
    add_background_object(create_treehousesolidblack2_636(4032, 0), 3);
    add_background_object(create_treehousesolidblack2_636(4056, 256), 3);
    add_background_object(create_treehousesolidblack2_636(4056, 128), 3);
    add_background_object(create_treehousesolidblack2_636(3928, 256), 3);
    add_background_object(create_treehousesolidblack2_636(3928, 128), 3);
    add_background_object(create_treehousesolidblack2_636(3904, 0), 3);
    add_background_object(create_tentfloorfadeleft_613(4184, 344), 3);
    add_background_object(create_tentfloorfaderight_614(4672, 344), 3);
    add_background_object(create_tentfloorfaderight_614(4672, 392), 3);
    add_background_object(create_tentfloorfadeleft_613(4184, 392), 3);
    add_background_object(create_treehousesolidblack2_636(4056, 384), 3);
    add_background_object(create_treehousesolidblack2_636(3928, 384), 3);
    add_background_object(create_hearttank_611(4296, 216), 3);
    add_background_object(create_backdrop12_4012(4592, 280), 3);
    add_background_object(create_backdrop12_4012(4464, 280), 3);
    add_background_object(create_backdrop12_4012(4336, 280), 3);
    add_background_object(create_fdpowercore1_3663(4408, 504), 3);
    add_background_object(create_fdpowercore2_3661(4544, 696), 3);
    add_background_object(create_fdpowercore2_3661(4544, 632), 3);
    add_background_object(create_fdpowercore3_3662(4544, 568), 3);
    add_background_object(create_fdcoreterminal_3664(4448, 680), 3);
    add_background_object(create_fdcoreterminal_3664(4608, 680), 3);
    add_background_object(create_fdfloor1_3570(4352, 760), 3);
    add_background_object(create_fdfloor1_3570(4416, 760), 3);
    add_background_object(create_fdfloor1_3570(4480, 760), 3);
    add_background_object(create_fdfloor1_3570(4608, 760), 3);
    add_background_object(create_fdfloor1_3570(4672, 760), 3);
    add_background_object(create_fdfloor1_3570(4736, 760), 3);
    add_object(create_playerzaotank2_4013(3347, 254), 3);
    add_object(create_playerzaotank_4014(3360, 268), 3);
    add_object(create_playerstartingpoint_358(189, 1509), 3);
    add_object(create_objectdigspot_734(4840, 168), 3);
    add_object(create_themagister_2115(-212, 1439), 3);
    add_object(create_gongshield_633(-272, 1424), 3);
    add_object(create_npcgong_634(-272, 1424), 3);
    add_object(create_npcmayor_3950(-328, 1424), 3);
    add_object(create_brevon_3683(827, 1097), 3);
    add_object(create_monitorrings_407(4544, 264), 3);
    add_object(create_monitorrings_407(4416, 264), 3);
    add_object(create_layerobject_10(-160, 536), 3);
    add_object(create_npcneera_2464(4399, 271), 3);
    add_object(create_magisterletter_4015(3497, 1687), 3);
    add_object(create_bossholodragonhitspot1_3069(5568, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(5648, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(5728, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(5808, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(5888, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(5968, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6048, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6128, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6208, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6288, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6368, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6448, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6528, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6608, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6688, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6768, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6848, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(6928, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7008, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7088, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7176, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7264, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7368, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7472, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7576, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7680, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7784, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7888, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(7992, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(8096, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(8200, 1216), 3);
    add_object(create_bossholodragonhitspot1_3069(8304, 1216), 3);
    add_object(create_bossholodragonhitspot2_3070(5608, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(5688, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(5768, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(5848, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(5928, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6008, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6088, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6168, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6248, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6328, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6408, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6488, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6568, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6648, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6728, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6808, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6888, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(6968, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7048, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7128, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7216, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7312, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7416, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7520, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7624, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7728, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7832, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(7936, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(8040, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(8144, 1240), 3);
    add_object(create_bossholodragonhitspot2_3070(8248, 1240), 3);
    add_object(create_bossholodragonhitspot3_3071(5648, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(5728, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(5808, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(5888, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(5968, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6048, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6128, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6208, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6288, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6368, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6448, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6528, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6608, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6688, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6768, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6848, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(6928, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7008, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7088, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7168, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7256, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7360, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7464, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7568, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7672, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7776, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7880, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(7984, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(8088, 1288), 3);
    add_object(create_bossholodragonhitspot3_3071(8192, 1288), 3);
    add_object(create_npchologram1_3060(2910, 1796), 3);
    add_object(create_npcpangu_3073(3040, 1794), 3);
    add_object(create_npchologram2_3074(3014, 1798), 3);
    add_object(create_npcpanguleftarm_3075(3074, 1796), 3);
    add_object(create_npcpanguleftarm_3075(3082, 1796), 3);
    add_object(create_npcpanguleftarm_3075(3098, 1796), 3);
    add_object(create_npcpanguleftarm_3075(3106, 1796), 3);
    add_object(create_npcpanguleftarm_3075(3114, 1796), 3);
    add_object(create_npcpanguleftarm_3075(3122, 1796), 3);
    add_object(create_npcpanguleftarm_3075(3138, 1796), 3);
    add_object(create_npcpanguleftarm_3075(3146, 1796), 3);
    add_object(create_npcpanguleftarm_3075(3154, 1796), 3);
    add_object(create_npcpangurightarm_3076(3074, 1804), 3);
    add_object(create_npcpangurightarm_3076(3082, 1804), 3);
    add_object(create_npcpangurightarm_3076(3098, 1804), 3);
    add_object(create_npcpangurightarm_3076(3106, 1804), 3);
    add_object(create_npcpangurightarm_3076(3114, 1804), 3);
    add_object(create_npcpangurightarm_3076(3122, 1804), 3);
    add_object(create_npcpangurightarm_3076(3138, 1804), 3);
    add_object(create_npcpangurightarm_3076(3146, 1804), 3);
    add_object(create_npcpangurightarm_3076(3154, 1804), 3);
    add_object(create_npcshellduck_533(-148, 1281), 3);
    add_object(create_playerzaotank2_4013(3283, 254), 3);
    add_object(create_playerzaotank_4014(3296, 268), 3);
    add_object(create_schmupfloor_4016(3200, 288), 3);
    add_object(create_schmupfloor_4016(3264, 288), 3);
    add_object(create_schmupfloor_4016(3328, 288), 3);
    add_object(create_schmupfloor_4016(3392, 288), 3);
    add_object(create_schmupfloor_4016(3456, 288), 3);
    add_object(create_schmupfloor_4016(3520, 288), 3);
    add_object(create_schmupfloor_4016(3584, 288), 3);
    add_object(create_schmupfloor_4016(3648, 288), 3);
    add_object(create_playerzaotank2_4013(3219, 254), 3);
    add_object(create_playerzaotank_4014(3232, 268), 3);
    add_object(create_kingdomstone_3665(4576, 672), 3);
    add_object(create_computerterminal_3666(4456, 680), 3);
    add_object(create_computerterminal2_3668(4616, 680), 3);
    add_object(create_enemyspawntube_2195(4576, 804), 3);
    add_object(create_npcsyntaxleftarm_2517(4905, 602), 3);
    add_object(create_npcsyntaxleftarm_2517(4921, 602), 3);
    add_object(create_npcsyntaxleftarm_2517(4937, 602), 3);
    add_object(create_npcsyntaxleftarm_2517(4953, 602), 3);
    add_object(create_npcsyntaxleftarm_2517(4969, 602), 3);
    add_object(create_npcsyntaxleftarm_2517(4985, 602), 3);
    add_object(create_npcsyntaxleftarm_2517(5001, 602), 3);
    add_object(create_npcsyntaxleftarm_2517(4889, 602), 3);
    add_object(create_npcsyntaxleftarm_2517(4873, 602), 3);
    add_object(create_npcsyntaxrightarm_2518(4905, 610), 3);
    add_object(create_npcsyntaxrightarm_2518(4921, 610), 3);
    add_object(create_npcsyntaxrightarm_2518(4937, 610), 3);
    add_object(create_npcsyntaxrightarm_2518(4953, 610), 3);
    add_object(create_npcsyntaxrightarm_2518(4969, 610), 3);
    add_object(create_npcsyntaxrightarm_2518(4985, 610), 3);
    add_object(create_npcsyntaxrightarm_2518(5001, 610), 3);
    add_object(create_npcsyntaxrightarm_2518(4889, 610), 3);
    add_object(create_npcsyntaxrightarm_2518(4873, 610), 3);
    add_object(create_npcsyntax_3976(4448, 645), 3);
    add_object(create_npcdail_4017(4428, 759), 3);
    add_object(create_npcserpentine_947(4388, 732), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_backdrop10_643(4736, 128), 4);
    add_background_object(create_backdrop11_644(4184, 128), 4);
    add_background_object(create_backdrop9_642(4240, 264), 4);
    add_background_object(create_backdrop_592(4256, 264), 4);
    add_object(create_objecttententrance_638(2112, 1432), 4);
    add_object(create_objecttententrance_638(1944, 1432), 4);
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
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_3986(-91, 273), 5);
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
    add_object(create_hazardspikesup_2426(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(2264, -72), 5);
    add_object(create_cameralimitbossleft_421(2103, -192), 5);
    add_object(create_cameralimitbossright_422(2424, -192), 5);
    add_object(create_cameralimitbosstop_423(2264, -313), 5);
    add_object(create_cameratriggerboss_424(2120, -200), 5);
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
    add_object(create_sarassteampluginfreedomplanet_26(-232, -88), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
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
    add_object(create_message_4018(56, 40), 6);
    add_object(create_dialogdata_4019(-136, 464), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_locationname_570(16, 192), 7);
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
    loop_jeeps_running = false;
    loop_jeeps_index = 0;
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
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_sttroops_running = false;
    loop_sttroops_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
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
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
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
    loop_voice_running = false;
    loop_voice_index = 0;
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
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_82, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_82, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_82, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_82, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_82, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_82, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_82, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_82, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_82, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_82, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_82, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_82, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_82, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_82, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_82, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_82, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_82, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_82, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_82, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_82, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_82, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_82, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_82, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_82, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_82, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_82, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_82, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_82, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_82, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_82, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_82, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_82, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_82, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_82, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_82, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_82, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_82, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_82, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_82, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_82, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_82, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_82, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_82, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_82, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_82, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    not_always_1845_15 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_44_13 = loop_count;
    not_always_1424_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_1614_82 = false;
    once_condition_1743_82 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_level_specific_methods_cutscenes_ship_crash_1 = false;
    group_sound_events_spade_1 = false;
    once_condition_565_76 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_1848_15 = loop_count;
    not_always_140_0 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_ending_1 = false;
    once_condition_1599_82 = false;
    not_always_1708_72 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1580_82 = loop_count;
    not_always_97_0 = loop_count;
    once_condition_1687_82 = false;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    once_condition_1881_82 = false;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_1874_82 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1422_13 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_interface_and_post_processing_methods_all_shields_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_814_13 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    once_condition_2058_81 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    once_condition_1744_82 = false;
    once_condition_1691_82 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    once_condition_1973_82 = false;
    once_condition_1693_82 = false;
    once_condition_1742_82 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1695_16 = loop_count;
    not_always_1581_82 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    once_condition_1772_82 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_cities_unite_1 = false;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1 = false;
    not_always_1447_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1 = false;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_main_engine_level_specific_methods_cutscenes_pangu_1 = false;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_101_0 = loop_count;
    not_always_1749_82 = loop_count;
    not_always_1783_69 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    once_condition_1850_82 = false;
    not_always_171_8 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_1972_82 = false;
    once_condition_64_13 = false;
    once_condition_1792_82 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    once_condition_1923_82 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_1802_82 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    once_condition_1508_82 = false;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_2137_46 = loop_count;
    not_always_175_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    once_condition_1851_82 = false;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_1698_16 = loop_count;
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_57_13 = loop_count;
    not_always_450_13 = loop_count;
    not_always_52_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    once_condition_138_0 = false;
    once_condition_1598_82 = false;
    group_mac_controls_1 = false;
    once_condition_1688_82 = false;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1 = false;
    not_always_558_13 = loop_count;
    not_always_1684_72 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    once_condition_1776_82 = false;
    once_condition_1752_82 = false;
    not_always_553_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = true;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_121_0 = loop_count;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_1680_72 = loop_count;
    not_always_41_13 = loop_count;
    once_condition_550_76 = false;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1 = true;
    once_condition_1690_82 = false;
    not_always_540_13 = loop_count;
    once_condition_1864_82 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    once_condition_1932_82 = false;
    not_always_1421_13 = loop_count;
    not_always_1687_72 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    once_condition_1650_82 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_1747_82 = false;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_2136_46 = loop_count;
    once_condition_1507_82 = false;
    not_always_174_8 = loop_count;
    not_always_1048_14 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    once_condition_66_13 = false;
    once_condition_1771_82 = false;
    group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_1764_82 = false;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    once_condition_1613_82 = false;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1683_72 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    once_condition_1610_82 = false;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1 = false;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    once_condition_1713_82 = false;
    not_always_1696_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_1692_82 = false;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    once_condition_1791_82 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_19130()
{
    // event 1643_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1643_83_end;
        breakableshuigangpillar_4104_instances.clear_selection();
        for (ObjectIterator it(breakableshuigangpillar_4104_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!breakableshuigangpillar_4104_instances.has_selection()) goto event_1643_83_end;
        FrameObject * single_instance_1643_83_0; single_instance_1643_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(breakableshuigangpillar_4104_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableshuigangpillarpiece_4020(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1643_83_0 == NULL)
                    single_instance_1643_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1643_83_0))->alterables->values.set(2, loop_pillar_index);
        ((Active*)((Active*)single_instance_1643_83_0))->force_frame(((Active*)single_instance_1643_83_0)->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1643_83_0))->alterables->values.set(1, -5+((Active*)single_instance_1643_83_0)->alterables->values.get(2)*2);
        ((Active*)((Active*)single_instance_1643_83_0))->alterables->values.set(0, 20+((Active*)single_instance_1643_83_0)->alterables->values.get(2));
    }
    event_1643_83_end: ;
}
void Frames::loop_pillar_83()
{
    event_func_19130();
}
void Frames::event_func_19131()
{
    // event 1872_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1872_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1872_83_end;
        FrameObject * single_instance_1872_83_0; single_instance_1872_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1872_83_0 == NULL)
                    single_instance_1872_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1872_83_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1872_83_0))->force_frame(115+((Active*)get_single(enemyelitemask_2511_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1872_83_end: ;
}
void Frames::loop_spawndebris_83()
{
    event_func_1178();
    event_func_19131();
}
void Frames::event_func_19132()
{
    // event 1736_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1736_83_end;
        FrameObject * single_instance_1736_83_0; single_instance_1736_83_0 = NULL;
        // select single: true false false
        npcking_4099_instances.clear_selection();
        for (ObjectIterator p_it(npcking_4099_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsplayersplode_310(parent->x + 0, parent->y + -35), parent->layer);
                if (single_instance_1736_83_0 == NULL)
                    single_instance_1736_83_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1736_83_0))->get_movement()->set_speed(40+randrange(20));
        static FlatObjectList swap_1736_83;
        swap_1736_83.clear();
        {
            swap_1736_83.push_back(((Active*)single_instance_1736_83_0));
        }
        ((Active*)((Active*)single_instance_1736_83_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1736_83_0))->set_x(((Active*)single_instance_1736_83_0)->get_x()-16+randrange(33));
        ((Active*)((Active*)single_instance_1736_83_0))->set_y(((Active*)single_instance_1736_83_0)->get_y()-16+randrange(33));
        ((Active*)((Active*)single_instance_1736_83_0))->set_direction(pick_random(6, 0, 1, 2, 3, 4, 5));
        ((Active*)((Active*)single_instance_1736_83_0))->get_movement()->set_deceleration(0);
        swap_position(swap_1736_83);
    }
    event_1736_83_end: ;
}
void Frames::loop_head_83()
{
    event_func_19132();
}
void Frames::event_func_19133()
{
    // event 3122_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3122_83_end;
        if (!((global_values->get(4)) != (19))) goto event_3122_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_hub5_ogg_310, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3122_83_end: ;
}
void Frames::event_func_19134()
{
    // event 3123_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3123_83_end;
        if (!((global_values->get(4)) == (19))) goto event_3123_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_hub3_ogg_311, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3123_83_end: ;
}
void Frames::event_func_19135()
{
    // event 3124_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3124_83_end;
        if (!((global_values->get(4)) == (20))) goto event_3124_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_rescue_ogg_100, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3124_83_end: ;
}
void Frames::loop_play_music_5_83()
{
    event_func_19133();
    event_func_19134();
    event_func_19135();
}
void Frames::event_func_19136()
{
    // event 3125_83
    bool or_result_3125_83 = false;
    bool or_temp_result_3125_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto or_event_3125_83_0_end;
        if (!((global_values->get(4)) < (2))) goto or_event_3125_83_0_end;
        or_result_3125_83 = true;
        or_temp_result_3125_83_0 = true;
    }
    or_event_3125_83_0_end: ;
    // event 3125_83
    bool or_temp_result_3125_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto or_event_3125_83_1_end;
        if (!((global_values->get(4)) == (5))) goto or_event_3125_83_1_end;
        or_result_3125_83 = true;
        or_temp_result_3125_83_1 = true;
        or_event_3125_83_1_end: ;
        if (!or_result_3125_83) goto or_final_or_event_3125_83_1_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_brevon_ogg_291, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    or_final_or_event_3125_83_1_end: ;
}
void Frames::event_func_19137()
{
    // event 3127_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3127_83_end;
        if (!((global_values->get(4)) == (3))) goto event_3127_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage10c_ogg_236, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3127_83_end: ;
}
void Frames::event_func_19138()
{
    // event 3128_83
    bool or_result_3128_83 = false;
    bool or_temp_result_3128_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto or_event_3128_83_0_end;
        if (!((global_values->get(4)) == (4))) goto or_event_3128_83_0_end;
        or_result_3128_83 = true;
        or_temp_result_3128_83_0 = true;
    }
    or_event_3128_83_0_end: ;
    // event 3128_83
    bool or_temp_result_3128_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto or_event_3128_83_1_end;
        if (!((global_values->get(4)) == (6))) goto or_event_3128_83_1_end;
        or_result_3128_83 = true;
        or_temp_result_3128_83_1 = true;
        or_event_3128_83_1_end: ;
        if (!or_result_3128_83) goto or_final_or_event_3128_83_1_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_hub2_ogg_312, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    or_final_or_event_3128_83_1_end: ;
}
void Frames::event_func_19139()
{
    // event 3129_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3129_83_end;
        if (!((global_values->get(4)) == (7))) goto event_3129_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_chase_ogg_140, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3129_83_end: ;
}
void Frames::event_func_19140()
{
    // event 3130_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3130_83_end;
        if (!((global_values->get(4)) >= (9))) goto event_3130_83_end;
        if (!((global_values->get(4)) <= (11))) goto event_3130_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_hub3_ogg_311, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3130_83_end: ;
}
void Frames::event_func_19141()
{
    // event 3131_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3131_83_end;
        if (!((global_values->get(4)) == (12))) goto event_3131_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_brevon_ogg_291, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3131_83_end: ;
}
void Frames::event_func_19142()
{
    // event 3132_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3132_83_end;
        if (!((global_values->get(4)) == (13))) goto event_3132_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_night_ogg_101, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3132_83_end: ;
}
void Frames::event_func_19143()
{
    // event 3133_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3133_83_end;
        if (!((global_values->get(4)) == (14))) goto event_3133_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_secret_ogg_51, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3133_83_end: ;
}
void Frames::event_func_19144()
{
    // event 3134_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3134_83_end;
        if (!((global_values->get(4)) >= (16))) goto event_3134_83_end;
        if (!((global_values->get(4)) <= (18))) goto event_3134_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_night_ogg_101, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3134_83_end: ;
}
void Frames::event_func_19145()
{
    // event 3135_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3135_83_end;
        if (!((global_values->get(4)) == (19))) goto event_3135_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_river_ogg_289, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3135_83_end: ;
}
void Frames::event_func_19146()
{
    // event 3136_83
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_3136_83_end;
        if (!((global_values->get(4)) == (20))) goto event_3136_83_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_hub4_ogg_216, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_3136_83_end: ;
}
void Frames::loop_play_music_6_83()
{
    event_func_19136();
    event_func_18585();
    event_func_19137();
    event_func_19138();
    event_func_19139();
    event_func_19140();
    event_func_19141();
    event_func_19142();
    event_func_19143();
    event_func_19144();
    event_func_19145();
    event_func_19146();
}
void Frames::event_func_19147()
{
    // event 2402_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_s_briefing_1)) goto event_2402_83_end;
        enemyelite_2510_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemyelite_2510(0, 1655), 3);
            enemyelite_2510_instances.add_back();
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(6300+loop_st_index*40+sin_deg(loop_st_index*65)*30);
            ((Active*)*it)->move_back();
        }
    }
    event_2402_83_end: ;
}
void Frames::loop_st_83()
{
    event_func_19147();
}
void Frames::loop_wrapper_sound_hurt1_83(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_83(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_83(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_83(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_83(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_83(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_46();
}
void Frames::loop_wrapper_sound_idle7_83(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_83(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_83(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_83(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_83(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_83(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_83(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_83(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_46();
}
void Frames::loop_wrapper_process_call_fadeout_music_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_46();
}
void Frames::loop_wrapper_sound_explode8_83(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_46();
}
void Frames::loop_wrapper_sound_hurt2_83(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_83(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_83(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_83(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_83(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_83(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_83(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_83(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_46();
}
void Frames::loop_wrapper_play_music_2_83(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_46();
}
void Frames::loop_wrapper_sound_attack1_83(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_83(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_83(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_83(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_83(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_46();
}
void Frames::loop_wrapper_sound_uppercut3_83(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_83(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_83(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_46();
}
void Frames::loop_wrapper_play_music_0_83(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_46();
}
void Frames::loop_wrapper_play_music_1_83(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_46();
}
void Frames::loop_wrapper_process_call_lock_music_83(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_46();
}
void Frames::loop_wrapper_play_music_3_83(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_46();
}
void Frames::loop_wrapper_play_music_4_83(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_46();
}
void Frames::loop_wrapper_play_music_5_83(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_83();
}
