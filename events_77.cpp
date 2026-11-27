#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_6329()
{
    // event 1797_28
    bool or_result_1797_28 = false;
    bool or_temp_result_1797_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto or_event_1797_28_0_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (40))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1797_28_0_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemhead_1584_instances.has_selection()) goto or_event_1797_28_0_end;
        or_result_1797_28 = true;
        or_temp_result_1797_28_0 = true;
    }
    or_event_1797_28_0_end: ;
    minibossbonegolempiece5_1579_instances.clear_saved_selection();
    minibossbonegolemhead_1584_instances.clear_saved_selection();
    if (or_temp_result_1797_28_0) {
        minibossbonegolempiece5_1579_instances.save_selection();
        minibossbonegolemhead_1584_instances.save_selection();
    }
    // event 1797_28
    bool or_temp_result_1797_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto or_event_1797_28_1_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (40))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1797_28_1_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemhead_1584_instances.has_selection()) goto or_event_1797_28_1_end;
        or_result_1797_28 = true;
        or_temp_result_1797_28_1 = true;
        or_event_1797_28_1_end: ;
        if (or_temp_result_1797_28_1) {
            minibossbonegolempiece5_1579_instances.save_selection();
            minibossbonegolemhead_1584_instances.save_selection();
        }
        if (!or_result_1797_28) goto or_final_or_event_1797_28_1_end;
        minibossbonegolemhead_1584_instances.empty_selection();
        minibossbonegolempiece5_1579_instances.empty_selection();
        if (or_temp_result_1797_28_0 || or_temp_result_1797_28_1) {
            minibossbonegolempiece5_1579_instances.restore_selection();
        }
        if (or_temp_result_1797_28_0 || or_temp_result_1797_28_1) {
            minibossbonegolemhead_1584_instances.restore_selection();
        }
        FrameObject * single_instance_1797_28_0; single_instance_1797_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossbonegolemhead_1584_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1797_28_0 == NULL)
                    single_instance_1797_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1797_28_0))->set_direction(((Active*)get_single(minibossbonegolemhead_1584_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1797_28_0))->set_y(((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_y()-4);
        ((Active*)((Active*)single_instance_1797_28_0))->alterables->values.set(1, 30);
    }
    or_final_or_event_1797_28_1_end: ;
}
void Frames::event_func_6330()
{
    // event 1798_28
    bool or_result_1798_28 = false;
    bool or_temp_result_1798_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto or_event_1798_28_0_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (40))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1798_28_0_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemhead_1584_instances.has_selection()) goto or_event_1798_28_0_end;
        or_result_1798_28 = true;
        or_temp_result_1798_28_0 = true;
    }
    or_event_1798_28_0_end: ;
    minibossbonegolempiece5_1579_instances.clear_saved_selection();
    minibossbonegolemhead_1584_instances.clear_saved_selection();
    if (or_temp_result_1798_28_0) {
        minibossbonegolempiece5_1579_instances.save_selection();
        minibossbonegolemhead_1584_instances.save_selection();
    }
    // event 1798_28
    bool or_temp_result_1798_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto or_event_1798_28_1_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (40))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto or_event_1798_28_1_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolemhead_1584_instances.has_selection()) goto or_event_1798_28_1_end;
        or_result_1798_28 = true;
        or_temp_result_1798_28_1 = true;
        or_event_1798_28_1_end: ;
        if (or_temp_result_1798_28_1) {
            minibossbonegolempiece5_1579_instances.save_selection();
            minibossbonegolemhead_1584_instances.save_selection();
        }
        if (!or_result_1798_28) goto or_final_or_event_1798_28_1_end;
        minibossbonegolemhead_1584_instances.empty_selection();
        minibossbonegolempiece5_1579_instances.empty_selection();
        if (or_temp_result_1798_28_0 || or_temp_result_1798_28_1) {
            minibossbonegolempiece5_1579_instances.restore_selection();
        }
        if (or_temp_result_1798_28_0 || or_temp_result_1798_28_1) {
            minibossbonegolemhead_1584_instances.restore_selection();
        }
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        FrameObject * single_instance_1798_28_0; single_instance_1798_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossbonegolemhead_1584_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1798_28_0 == NULL)
                    single_instance_1798_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1798_28_0))->set_direction(((Active*)get_single(minibossbonegolemhead_1584_instances, default_active_instance))->get_direction()+16);
        ((Active*)((Active*)single_instance_1798_28_0))->set_y(((Active*)get_single(minibossbonegolempiece5_1579_instances, default_active_instance))->get_y()-4);
        ((Active*)((Active*)single_instance_1798_28_0))->alterables->values.set(1, 30);
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_min(((Active*)*it)->alterables->values.get(25)+6, 6));
        }
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 10);
            ((Active*)*it)->alterables->values.set(23, 0);
            ((Active*)*it)->alterables->values.set(24, 10);
            ((Active*)*it)->alterables->values.sub(0, 25);
        }
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 10);
        }
    }
    or_final_or_event_1798_28_1_end: ;
}
void Frames::event_func_6331()
{
    // event 1799_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto event_1799_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1799_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1799_28_end;
        if (once_condition_1799_28) goto event_1799_28_end;
        once_condition_1799_28 = true;
        media.play_id(SOUND_LILAC_HITMEIFYOUCAN_131, -1, 1);
    }
    event_1799_28_end: ;
}
void Frames::event_func_6332()
{
    // event 1800_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto event_1800_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1800_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(((Active*)*it)->alterables->values.get(0)-100-180+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(((Active*)get_single(minibossbonegolemneck1_1580_instances, it.current_index, default_active_instance))->alterables->values.get(0)-22.5-100-180+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(((Active*)get_single(minibossbonegolemneck1_1580_instances, it.current_index, default_active_instance))->alterables->values.get(0)-30-100-180+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(get_max(((Active*)get_single(minibossbonegolemneck1_1580_instances, it.current_index, default_active_instance))->alterables->values.get(0)-80-100-180+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, -125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+1, 0));
        }
    }
    event_1800_28_end: ;
}
void Frames::event_func_6333()
{
    // event 1801_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto event_1801_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1801_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(((Active*)*it)->alterables->values.get(0)+100+180-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-1, 0));
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(((Active*)*it)->alterables->values.get(0)+22.5+100+180-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(((Active*)*it)->alterables->values.get(0)+30+100+180-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 125), ((Active*)*it)->alterables->values.get(0)));
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(get_min(((Active*)*it)->alterables->values.get(0)+80+100+180-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(2)*5, 125), ((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_1801_28_end: ;
}
void Frames::event_func_6334()
{
    // event 1802_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1)) goto event_1802_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossbonegolempiece5_1579_instances.has_selection()) goto event_1802_28_end;
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
            group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_miniboss_bone_golem_attacks_back_peck_1 = false;
    
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1802_28_end: ;
}
void Frames::event_func_6335()
{
    // event 1803_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1803_28_end;
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+90, 0);
        }
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece3_1575_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+45, 0);
        }
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)-45, 0);
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+90, 0);
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+90, 0);
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)+90, 0);
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1803_28_end: ;
}
void Frames::event_func_6336()
{
    // event 1804_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1)) goto event_1804_28_end;
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibossbonegolem_1576_instances.has_selection()) goto event_1804_28_end;
        minibossbonegolempiece5_1579_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece5_1579_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(minibossbonegolem_1576_instances, it.current_index, default_active_instance))->alterables->values.get(23)*0.5);
        }
        minibossbonegolemneck1_1580_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(minibossbonegolem_1576_instances, it.current_index, default_active_instance))->alterables->values.get(23)+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*2);
        }
        minibossbonegolemneck2_1581_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(minibossbonegolem_1576_instances, it.current_index, default_active_instance))->alterables->values.get(23)+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*3);
        }
        minibossbonegolemneck3_1582_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(minibossbonegolem_1576_instances, it.current_index, default_active_instance))->alterables->values.get(23)+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*4);
        }
        minibossbonegolemneck4_1583_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(minibossbonegolem_1576_instances, it.current_index, default_active_instance))->alterables->values.get(23)+((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*5);
        }
        minibossbonegolemhead_1584_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolemhead_1584_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(minibossbonegolem_1576_instances, it.current_index, default_active_instance))->alterables->values.get(23));
        }
        for (ObjectIterator it(minibossbonegolemneck1_1580_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, -2);
        }
        for (ObjectIterator it(minibossbonegolemneck2_1581_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        for (ObjectIterator it(minibossbonegolemneck3_1582_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, -4);
        }
        for (ObjectIterator it(minibossbonegolemneck4_1583_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, -5);
        }
        minibossbonegolempiece6_1578_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece6_1578_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(minibossbonegolem_1576_instances, it.current_index, default_active_instance))->alterables->values.get(23)*0.5);
            ((Active*)*it)->alterables->values.set(24, -2);
        }
        minibossbonegolempiece_1577_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolempiece_1577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(minibossbonegolem_1576_instances, it.current_index, default_active_instance))->alterables->values.get(23)-((Active*)get_single(minibossbonegolempiece5_1579_instances, it.current_index, default_active_instance))->alterables->values.get(0)*(3+((Active*)*it)->alterables->values.get(1)*2));
            ((Active*)*it)->alterables->values.set(24, -4);
        }
            group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_main_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1 = true;
        }
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        // icache destruction
        minibossbonegolempiece3_1575_instances.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1804_28_end: ;
}
void Frames::event_func_6337()
{
    // event 1805_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1805_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(16))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1805_28_end;
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+get_max(((Active*)*it)->alterables->values.get(23)*2, 8), 0);
        }
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1805_28_end: ;
}
void Frames::event_func_6338()
{
    // event 1806_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1806_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(18)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1806_28_end;
        FrameObject * single_instance_1806_28_0; single_instance_1806_28_0 = NULL;
        // select single: true false false
        qualifier_20.clear_selection();
        for (QualifierIterator p_it(qualifier_20); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1806_28_0 == NULL)
                    single_instance_1806_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1806_28_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1806_28_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1806_28_0))->set_direction(8+((((Active*)get_single(qualifier_20, default_active_instance))->alterables->values.get(18)+1)/math_helper/2)*((((Active*)get_single(qualifier_20, default_active_instance))->alterables->values.get(18)%math_helper%2)*2-1));
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(18, 1);
        }
    }
    event_1806_28_end: ;
}
void Frames::event_func_6339()
{
    // event 1807_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1807_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (1448))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1807_28_end;
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->alterables->values.get(24)*-0.7);
            ((Active*)*it)->alterables->values.add(25, 1);
        }
    }
    event_1807_28_end: ;
}
void Frames::event_func_6340()
{
    // event 1808_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1808_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (184))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) < (0))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1808_28_end;
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->alterables->values.get(23)*-1);
        }
    }
    event_1808_28_end: ;
}
void Frames::event_func_6341()
{
    // event 1809_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1809_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (872))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1809_28_end;
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->alterables->values.get(23)*-1);
        }
    }
    event_1809_28_end: ;
}
void Frames::event_func_6342()
{
    // event 1810_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1810_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) > (0.05))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1810_28_end;
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(23, 0.02);
        }
    }
    event_1810_28_end: ;
}
void Frames::event_func_6343()
{
    // event 1811_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1811_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) < (-0.05))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1811_28_end;
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(23, 0.02);
        }
    }
    event_1811_28_end: ;
}
void Frames::event_func_6344()
{
    // event 1812_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1812_28_end;
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) >= (2))) { it.deselect(); continue; }
        }
        if (!qualifier_28.has_selection()) goto event_1812_28_end;
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
    }
    event_1812_28_end: ;
}
void Frames::event_func_6345()
{
    // event 1813_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1813_28_end;
        if (!((((Active*)get_instance(gimmickmovingpillar1_1407_instances))->alterables->values.get(3)) < (88))) goto event_1813_28_end;
        ((Active*)get_instance(gimmickmovingpillar1_1407_instances))->set_y(((Active*)get_instance(gimmickmovingpillar1_1407_instances))->get_y()+2);
        ((Active*)get_instance(gimmickmovingpillar3_1409_instances))->set_y(((Active*)get_instance(gimmickmovingpillar3_1409_instances))->get_y()+2);
        ((Active*)get_instance(gimmickmovingpillar1_1407_instances))->alterables->values.add(3, 2);
    }
    event_1813_28_end: ;
}
void Frames::event_func_6346()
{
    // event 1814_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_miniboss_bone_golem_miniboss_bone_golem_defeated_1)) goto event_1814_28_end;
        if (!((((Active*)get_instance(gimmickmovingpillar1_1407_instances))->alterables->values.get(3)) == (88))) goto event_1814_28_end;
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
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
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(gimmickmovingpillar1_1407_instances))->alterables->values.set(3, 90);
    }
    event_1814_28_end: ;
}
void Frames::event_func_6347()
{
    // event 1815_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1815_28_end;
        if (!(((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.is_on(1))) goto event_1815_28_end;
        if (!(((Active*)get_instance(lightstonebase2_1570_instances))->alterables->flags.is_on(1))) goto event_1815_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (400))) goto event_1815_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (970))) goto event_1815_28_end;
        if (!((global_values->get(4)) >= (0))) goto event_1815_28_end;
        if (!((global_values->get(4)) != (2))) goto event_1815_28_end;
        global_values->set(4, 2);
        global_values->set(5, 341);
        global_values->set(6, 533);
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
    event_1815_28_end: ;
}
void Frames::event_func_6348()
{
    // event 1816_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_approach_shrine_1)) goto event_1816_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2920-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1816_28_end;
        if (not_always_1816_28 > loop_count) {
            not_always_1816_28 = loop_count + 2;
            goto event_1816_28_end;
        }
        not_always_1816_28 = loop_count + 2;
            group_main_engine_level_specific_methods_rooms_1 = false;
    
            group_main_engine_level_specific_methods_local_transitions_1 = false;
    
            group_pause_1 = false;
    
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
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(lightstonebase_1569_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(lightstonebase2_1570_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1816_28_end: ;
}
void Frames::event_func_6349()
{
    // event 1817_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_approach_shrine_1)) goto event_1817_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2920-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1817_28_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_1817_28_end: ;
}
void Frames::event_func_6350()
{
    // event 1818_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_approach_shrine_1)) goto event_1818_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2920-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1818_28_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1818_28_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(2);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1818_28_end: ;
}
void Frames::event_func_6351()
{
    // event 1819_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_approach_shrine_1)) goto event_1819_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2920-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1819_28_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1819_28_end;
        if (!((global_values->get(0)) >= (2))) goto event_1819_28_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(7))) goto event_1819_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1432);
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
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->get_movement()->set_speed(0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(11));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
            group_main_engine_level_specific_methods_bosses_boss_shrine_approach_shrine_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1) {
            group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 = true;
        }
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 180);
            ((Active*)*it)->alterables->values.set(7, -10);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 6344);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(7);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(shrine2_1391_instances))->get_x()-80);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(shrine2_1391_instances))->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
    }
    event_1819_28_end: ;
}
void Frames::event_func_6352()
{
    // event 1820_28
    bool or_result_1820_28 = false;
    bool or_temp_result_1820_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_approach_shrine_1)) goto or_event_1820_28_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2920-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto or_event_1820_28_0_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto or_event_1820_28_0_end;
        if (!((global_values->get(0)) < (2))) goto or_event_1820_28_0_end;
        or_result_1820_28 = true;
        or_temp_result_1820_28_0 = true;
    }
    or_event_1820_28_0_end: ;
    // event 1820_28
    bool or_temp_result_1820_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_approach_shrine_1)) goto or_event_1820_28_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (2920-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto or_event_1820_28_1_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto or_event_1820_28_1_end;
        if (!((global_values->get(0)) >= (2))) goto or_event_1820_28_1_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(7))) goto or_event_1820_28_1_end;
        or_result_1820_28 = true;
        or_temp_result_1820_28_1 = true;
        or_event_1820_28_1_end: ;
        if (!or_result_1820_28) goto or_final_or_event_1820_28_1_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1432);
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
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->get_movement()->set_speed(0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(11));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
            group_main_engine_level_specific_methods_bosses_boss_shrine_approach_shrine_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1) {
            group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1 = true;
        }
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 180);
            ((Active*)*it)->alterables->values.set(7, -10);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    or_final_or_event_1820_28_1_end: ;
}
void Frames::event_func_6353()
{
    // event 1821_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1821_28_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1821_28_end;
        if (!((((Active*)get_single(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) < (32))) goto event_1821_28_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1821_28_end: ;
}
void Frames::event_func_6354()
{
    // event 1822_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1822_28_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(256)) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1822_28_end;
        if (!((((Active*)get_single(levelcardfade_461_instances, default_active_instance))->alterables->values.get(0)) >= (32))) goto event_1822_28_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1822_28_end: ;
}
void Frames::event_func_6355()
{
    // event 1823_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1823_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_1823_28_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyfirespitterbase_1280_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitterbase_1280_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemyiris_1183_instances.clear_selection();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbonegolem_1576_instances.clear_selection();
        for (ObjectIterator it(minibossbonegolem_1576_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        qualifier_28.clear_selection();
        for (QualifierIterator it(qualifier_28); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(npchookline_1601_instances))->set_y_scale(20);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(2, ((Active*)get_instance(kingdomstone_1587_instances))->get_y());
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(3, 1);
    }
    event_1823_28_end: ;
}
void Frames::event_func_6356()
{
    // event 1824_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1824_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1824_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_1824_28_end: ;
}
void Frames::event_func_6357()
{
    // event 1825_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1825_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1825_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (15))) goto event_1825_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->force_animation(7);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->alterables->values.set(0, -8);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1825_28_end: ;
}
void Frames::event_func_6358()
{
    // event 1826_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1826_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1826_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (15))) goto event_1826_28_end;
        if (!(((Active*)get_instance(placeholdercharacter_1588_instances))->test_directions(1))) goto event_1826_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_y(((Active*)get_instance(placeholdercharacter_1588_instances))->get_y()+((Active*)get_instance(placeholdercharacter_1588_instances))->alterables->values.get(0));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->alterables->values.add(0, 0.5);
    }
    event_1826_28_end: ;
}
void Frames::event_func_6359()
{
    // event 1827_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1827_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1827_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (15))) goto event_1827_28_end;
        if (!(((Active*)get_instance(placeholdercharacter_1588_instances))->test_directions(1))) goto event_1827_28_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1827_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_x(get_min(((Active*)get_instance(placeholdercharacter_1588_instances))->get_x()+1, ((Active*)get_instance(kingdomstone_1587_instances))->get_x()-14));
    }
    event_1827_28_end: ;
}
void Frames::event_func_6360()
{
    // event 1828_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1828_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1828_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (15))) goto event_1828_28_end;
        if (!((((Active*)get_instance(placeholdercharacter_1588_instances))->alterables->values.get(0)) > (0))) goto event_1828_28_end;
        if (!((((Active*)get_instance(placeholdercharacter_1588_instances))->get_y()) >= (((Active*)get_instance(kingdomstone_1587_instances))->get_y()))) goto event_1828_28_end;
        if (!(((Active*)get_instance(placeholdercharacter_1588_instances))->test_directions(1))) goto event_1828_28_end;
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_y(((Active*)get_instance(kingdomstone_1587_instances))->get_y());
        ((Active*)get_instance(placeholdercharacter_1588_instances))->force_animation(0);
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_direction(1);
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        ksprojectile1_1525_instances.clear_selection();
        for (ObjectIterator it(ksprojectile1_1525_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ksprojectile2_1606_instances.clear_selection();
        for (ObjectIterator it(ksprojectile2_1606_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
    }
    event_1828_28_end: ;
}
void Frames::event_func_6361()
{
    // event 1829_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1829_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (1))) goto event_1829_28_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+4, 128));
        }
    }
    event_1829_28_end: ;
}
void Frames::event_func_6362()
{
    // event 1830_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1830_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (1))) goto event_1830_28_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1830_28_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1830_28_end: ;
}
void Frames::event_func_6363()
{
    // event 1831_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1831_28_end;
        ksprojectile1_1525_instances.clear_selection();
        for (ObjectIterator it(ksprojectile1_1525_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ksprojectile1_1525_instances.has_selection()) goto event_1831_28_end;
        for (ObjectIterator it(ksprojectile1_1525_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
    }
    event_1831_28_end: ;
}
void Frames::event_func_6364()
{
    // event 1832_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1832_28_end;
        ksprojectile2_1606_instances.clear_selection();
        for (ObjectIterator it(ksprojectile2_1606_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!ksprojectile2_1606_instances.has_selection()) goto event_1832_28_end;
        for (ObjectIterator it(ksprojectile2_1606_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8);
        }
    }
    event_1832_28_end: ;
}
void Frames::event_func_6365()
{
    // event 1833_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1833_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1833_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (80))) goto event_1833_28_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1833_28_end;
        FrameObject * single_instance_1833_28_0; single_instance_1833_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->x + 0, parent->y + 4), parent->layer);
                if (single_instance_1833_28_0 == NULL)
                    single_instance_1833_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1833_28_0))->force_speed(100);
        ((Active*)((Active*)single_instance_1833_28_0))->set_x(((Active*)single_instance_1833_28_0)->get_x()-20+randrange(41));
        media.play_id(SOUND_BLAST1_55, -1, 1);
    }
    event_1833_28_end: ;
}
void Frames::event_func_6366()
{
    // event 1834_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1834_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_1834_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (140))) goto event_1834_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        FrameObject * single_instance_1834_28_0; single_instance_1834_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1834_28_0 == NULL)
                    single_instance_1834_28_0 = new_obj;
            }
        }
        media.play_id(SOUND_METALHIT_45, -1, 1);
        media.play_id(SOUND_COMMON_LIGHTRAY_111, -1, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        ksprojectile1_1525_instances.clear_selection();
        for (ObjectIterator it(ksprojectile1_1525_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ksprojectile2_1606_instances.clear_selection();
        for (ObjectIterator it(ksprojectile2_1606_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1834_28_end: ;
}
void Frames::event_func_6367()
{
    // event 1835_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1835_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (2))) goto event_1835_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(1, get_max(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(1)-0.1, -16));
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(0, ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(1));
        ((Active*)get_instance(kingdomstone_1587_instances))->set_y(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(2)+((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(0));
        ((Active*)get_instance(placeholdercharacter_1588_instances))->set_y(((Active*)get_instance(kingdomstone_1587_instances))->get_y());
        ((Active*)get_instance(npchookline_1601_instances))->set_y(((Active*)get_instance(kingdomstone_1587_instances))->get_box_index(1));
    }
    event_1835_28_end: ;
}
void Frames::event_func_6368()
{
    // event 1836_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1836_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) < (3))) goto event_1836_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(shrine2_1391_instances))->get_y()+64);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 6344);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(shrine2_1391_instances))->get_x()-30);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(shrine2_1391_instances))->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
    }
    event_1836_28_end: ;
}
void Frames::event_func_6369()
{
    // event 1837_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1837_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_1837_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(0)) < (-100))) goto event_1837_28_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
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
        ((Active*)get_instance(player_389_instances))->set_x(frame_left()-50);
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_instance(shrine2_1391_instances))->get_y()+50);
    }
    event_1837_28_end: ;
}
void Frames::event_func_6370()
{
    // event 1838_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1838_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (3))) goto event_1838_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(kingdomstone_1587_instances))->get_x()-80))) goto event_1838_28_end;
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()+5);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1838_28_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1838_28_0: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1838_28_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1838_28_1: ;
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1838_28_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1838_28_2: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1838_28_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1838_28_3: ;
        }
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1838_28_4;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1838_28_4: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1838_28_5;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1838_28_5: ;
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(30);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
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
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1838_28_end: ;
}
void Frames::event_func_6371()
{
    // event 1839_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1839_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (3))) goto event_1839_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(kingdomstone_1587_instances))->get_x()-80))) goto event_1839_28_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        {
            loop_start_player_running = true;
            int times = int(1);
            loop_start_player_index = 0;
            while (loop_start_player_index < times) {
                loop_start_player_13();
                if (!loop_start_player_running) break;
                loop_start_player_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(player_389_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(player_389_instances))->get_y());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
    }
    event_1839_28_end: ;
}
void Frames::event_func_6372()
{
    // event 1840_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1840_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (14))) goto event_1840_28_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
        {
            loop_start_player_running = true;
            int times = int(1);
            loop_start_player_index = 0;
            while (loop_start_player_index < times) {
                loop_start_player_13();
                if (!loop_start_player_running) break;
                loop_start_player_index++;
            }
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
    }
    event_1840_28_end: ;
}
void Frames::event_func_6373()
{
    // event 1841_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1841_28_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) >= (3))) goto event_1841_28_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_1841_28_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1841_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1841_28_end;
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
    event_1841_28_end: ;
}
void Frames::event_func_6374()
{
    // event 1842_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1842_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 3200);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -60);
    }
    event_1842_28_end: ;
}
void Frames::event_func_6375()
{
    // event 1843_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1)) goto event_1843_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(kingdomstone_1587_instances))->get_x()-80))) goto event_1843_28_end;
        if (!((frame_right()) >= (4360+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23)))) goto event_1843_28_end;
            group_main_engine_level_specific_methods_bosses_boss_shrine_classic_mode_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1) {
            group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1843_28_end: ;
}
void Frames::event_func_6376()
{
    // event 1844_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1844_28_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_1844_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (60))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1844_28_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(2);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_14();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1844_28_end: ;
}
void Frames::event_func_6377()
{
    // event 1845_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1845_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (61))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1845_28_end;
        if (once_condition_1845_28) goto event_1845_28_end;
        once_condition_1845_28 = true;
        media.play_id(SOUND_BOSS_RUMBLE_215, -1, 1);
    }
    event_1845_28_end: ;
}
void Frames::event_func_6378()
{
    // event 1846_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1846_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (61))) { it.deselect(); continue; }
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1846_28_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1846_28_end;
        breakableruinspiece_1102_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_breakableruinspiece_1428(-32, 0), 2);
            breakableruinspiece_1102_instances.add_back();
        }
        for (ObjectIterator it(breakableruinspiece_1102_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (-10+randrange(21))*0.1);
            ((Active*)*it)->alterables->values.set(1, randrange(40)*0.1);
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-100+randrange(201));
            ((Active*)*it)->alterables->values.set(4, frame_top()-50);
            ((Active*)*it)->alterables->values.set(2, 0.3);
            ((Active*)*it)->set_angle(randrange(360), 0);
        }
    }
    event_1846_28_end: ;
}
void Frames::event_func_6379()
{
    // event 1847_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1847_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (61))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1847_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(2, 4360);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -60);
    }
    event_1847_28_end: ;
}
void Frames::event_func_6380()
{
    // event 1848_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1848_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) < (60))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1848_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 4360-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 4360+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
    }
    event_1848_28_end: ;
}
void Frames::event_func_6381()
{
    // event 1849_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1849_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (60))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1849_28_end;
        if (!group_main_engine_level_specific_methods_bosses_boss_mantalith_1) {
            group_main_engine_level_specific_methods_bosses_boss_mantalith_1 = true;
        }
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1849_28_end: ;
}
void Frames::event_func_6382()
{
    // event 1850_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1850_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (61))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1850_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 4360-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, 4360+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 3);
    }
    event_1850_28_end: ;
}
void Frames::event_func_6383()
{
    // event 1851_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1851_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (30))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1851_28_end;
        if (once_condition_1851_28) goto event_1851_28_end;
        once_condition_1851_28 = true;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1851_28_end: ;
}
void Frames::event_func_6384()
{
    // event 1852_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1852_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (61))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1852_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (0))) goto event_1852_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1852_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, get_min(frame_left(), ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, get_max(frame_right(), ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
    }
    event_1852_28_end: ;
}
void Frames::event_func_6385()
{
    // event 1853_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1853_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (62))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1853_28_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1853_28_end;
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
    event_1853_28_end: ;
}
void Frames::event_func_6386()
{
    // event 1854_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1854_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (62))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1854_28_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1854_28_end;
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
            group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1 = false;
    
    }
    event_1854_28_end: ;
}
void Frames::event_func_6387()
{
    // event 1855_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto event_1855_28_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 36)) == (0))) goto event_1855_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_1855_28_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto event_1855_28_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 36);
    }
    event_1855_28_end: ;
}
void Frames::event_func_6388()
{
    // event 1856_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1856_28_end;
        {
            FrameObject * parent = ((Active*)get_instance(shrine2_1391_instances));
            if (parent == NULL) goto pos_end_1856_28_0;
            ((Active*)get_instance(lightray_1589_instances))->set_global_position(parent->get_x() + 24, parent->get_y() + 20);
            pos_end_1856_28_0: ;
        }
        ((Active*)get_instance(lightray_1589_instances))->set_y_scale(100);
        ((Active*)get_instance(lightray_1589_instances))->set_x_scale(get_min(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(0)*-0.06, 8));
        ((Active*)get_instance(lightray_1589_instances))->set_angle(35-get_min(get_ln(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(0)*-0.1)*12.0, 35), 0);
        {
            FrameObject * parent = ((Active*)get_instance(shrine2_1391_instances));
            if (parent == NULL) goto pos_end_1856_28_1;
            ((Active*)get_instance(lightray2_1590_instances))->set_global_position(parent->get_x() + 24, parent->get_y() + 20);
            pos_end_1856_28_1: ;
        }
        ((Active*)get_instance(lightray2_1590_instances))->set_y_scale(100);
        ((Active*)get_instance(lightray2_1590_instances))->set_x_scale(get_min(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(0)*-0.06, 8));
        ((Active*)get_instance(lightray2_1590_instances))->set_angle(-35+get_min(get_ln(((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(0)*-0.1)*12.0, 35), 0);
    }
    event_1856_28_end: ;
}
void Frames::event_func_6389()
{
    // event 1858_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1858_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances))->get_x()-80))) goto event_1858_28_end;
        if (!((((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)) != (120))) goto event_1858_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1858_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) == (0))) goto event_1858_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (0))) goto event_1858_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (0))) goto event_1858_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(1, 1);
    }
    event_1858_28_end: ;
}
void Frames::event_func_6390()
{
    // event 1859_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1859_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances))->get_x()+80))) goto event_1859_28_end;
        if (!((((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)) != (120))) goto event_1859_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1859_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) == (0))) goto event_1859_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (0))) goto event_1859_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (0))) goto event_1859_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(1, -1);
    }
    event_1859_28_end: ;
}
void Frames::event_func_6391()
{
    // event 1860_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1860_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)) <= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1860_28_end;
        if (!((((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)) == (120))) goto event_1860_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) == (0))) goto event_1860_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (0))) goto event_1860_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (0))) goto event_1860_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(1, 1);
    }
    event_1860_28_end: ;
}
void Frames::event_func_6392()
{
    // event 1861_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1861_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1861_28_end;
        if (!((((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)) == (120))) goto event_1861_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) == (0))) goto event_1861_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (0))) goto event_1861_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (0))) goto event_1861_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(1, -1);
    }
    event_1861_28_end: ;
}
void Frames::event_func_6393()
{
    // event 1862_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1862_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) != (0))) goto event_1862_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (0))) goto event_1862_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(15, get_min(0, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*40)+24);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(19, get_min(0, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)+180)*40)+24);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(16, 320+cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(20, 40+cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)+180)*20);
    }
    event_1862_28_end: ;
}
void Frames::event_func_6394()
{
    // event 1863_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1863_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) == (1))) goto event_1863_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)) < (360))) goto event_1863_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (0))) goto event_1863_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(0, 10);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(2, ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)+4);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(5, get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*10));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(3, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*-8);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(5, -16+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*5);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(9, 16+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*8);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(7, -24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*10);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(11, 24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*16);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(1, get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*-10));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(2, 0-get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*-10));
    }
    event_1863_28_end: ;
}
void Frames::event_func_6395()
{
    // event 1864_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1864_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) == (-1))) goto event_1864_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)) > (-360))) goto event_1864_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (0))) goto event_1864_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.sub(0, 10);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(2, ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)-4);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(5, get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*10));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(3, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*-8);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(5, -16+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*8);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(9, 16+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*5);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(7, -24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*16);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(11, 24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*10);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(1, get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*-10));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(2, 0-get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*-10));
    }
    event_1864_28_end: ;
}
void Frames::event_func_6396()
{
    // event 1865_28
    bool or_result_1865_28 = false;
    bool or_temp_result_1865_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1865_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (170))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1865_28_0_end;
        or_result_1865_28 = true;
        or_temp_result_1865_28_0 = true;
    }
    or_event_1865_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    if (or_temp_result_1865_28_0) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1865_28
    bool or_temp_result_1865_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1865_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-170))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1865_28_1_end;
        or_result_1865_28 = true;
        or_temp_result_1865_28_1 = true;
    }
    or_event_1865_28_1_end: ;
    if (or_temp_result_1865_28_1) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1865_28
    bool or_temp_result_1865_28_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1865_28_2_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (350))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1865_28_2_end;
        or_result_1865_28 = true;
        or_temp_result_1865_28_2 = true;
    }
    or_event_1865_28_2_end: ;
    if (or_temp_result_1865_28_2) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1865_28
    bool or_temp_result_1865_28_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1865_28_3_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-350))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1865_28_3_end;
        or_result_1865_28 = true;
        or_temp_result_1865_28_3 = true;
        or_event_1865_28_3_end: ;
        if (or_temp_result_1865_28_3) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1865_28) goto or_final_or_event_1865_28_3_end;
        bossmantalithbody_1529_instances.empty_selection();
        if (or_temp_result_1865_28_0 || or_temp_result_1865_28_1 || or_temp_result_1865_28_2 || or_temp_result_1865_28_3) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        media.play_id(SOUND_MANTALITH_STEP_2_146, -1, 1);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_min(((Active*)*it)->alterables->values.get(25)+3, 3));
        }
    }
    or_final_or_event_1865_28_3_end: ;
}
void Frames::event_func_6397()
{
    // event 1866_28
    bool or_result_1866_28 = false;
    bool or_temp_result_1866_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1866_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (360))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1866_28_0_end;
        or_result_1866_28 = true;
        or_temp_result_1866_28_0 = true;
    }
    or_event_1866_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    if (or_temp_result_1866_28_0) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1866_28
    bool or_temp_result_1866_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1866_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-360))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1866_28_1_end;
        or_result_1866_28 = true;
        or_temp_result_1866_28_1 = true;
        or_event_1866_28_1_end: ;
        if (or_temp_result_1866_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1866_28) goto or_final_or_event_1866_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        if (or_temp_result_1866_28_0 || or_temp_result_1866_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        bossanimationdata_1593_instances.clear_selection();
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(5, -16);
            ((Active*)*it)->alterables->values.set(9, 16);
            ((Active*)*it)->alterables->values.set(7, -24);
            ((Active*)*it)->alterables->values.set(11, 24);
        }
    }
    or_final_or_event_1866_28_1_end: ;
}
void Frames::event_func_6398()
{
    // event 1867_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1867_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_1867_28_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto event_1867_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+1)%math_helper%340);
        }
    }
    event_1867_28_end: ;
}
void Frames::event_func_6399()
{
    // event 1868_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1868_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1868_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1868_28_end: ;
}
void Frames::event_func_6400()
{
    // event 1869_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1869_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1869_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1869_28_end: ;
}
void Frames::event_func_6401()
{
    // event 1870_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1870_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (250))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1870_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, get_min(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)+6, 120));
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1870_28_end: ;
}
void Frames::event_func_6402()
{
    // event 1871_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1871_28_end;
        if (!((((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)) <= (0))) goto event_1871_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1871_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1871_28_end: ;
}
void Frames::event_func_6403()
{
    // event 1872_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1872_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (250))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1872_28_end;
        if (!((((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)) > (0))) goto event_1872_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)-5, 0));
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+1)%math_helper%400);
        }
    }
    event_1872_28_end: ;
}
void Frames::event_func_6404()
{
    // event 1873_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1873_28_end;
        if (!((((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)) == (120))) goto event_1873_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->set_direction(get_max(0, get_min(((Active*)*it)->alterables->values.get(4)/math_helper/5, 2)));
        }
    }
    event_1873_28_end: ;
}
void Frames::event_func_6405()
{
    // event 1874_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1874_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (20))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1874_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -10);
        }
        FrameObject * single_instance_1874_28_0; single_instance_1874_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossmantalithhead_1598_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosschomp_1526(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1874_28_0 == NULL)
                    single_instance_1874_28_0 = new_obj;
            }
        }
        media.play_id(SOUND_MANTALITH_CHOMP_2_152, -1, 1);
    }
    event_1874_28_end: ;
}
void Frames::event_func_6406()
{
    // event 1877_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1877_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(15)) > (0))) goto event_1877_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.sub(15, 1);
    }
    event_1877_28_end: ;
}
void Frames::event_func_6407()
{
    // event 1878_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1878_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) != (0))) goto event_1878_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) == (0))) goto event_1878_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) <= (360))) goto event_1878_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(15, 24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)+90)*-10+10);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(19, 24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)+90)*-10+10);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(5, 0-sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)-90)*10-10);
    }
    event_1878_28_end: ;
}
void Frames::event_func_6408()
{
    // event 1879_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1879_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (240))) goto event_1879_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(8))) goto event_1879_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.enable(8);
        media.play_id(SOUND_MANTALITH_SLASH_151, -1, 1);
    }
    event_1879_28_end: ;
}
void Frames::event_func_6409()
{
    // event 1880_28
    bool or_result_1880_28 = false;
    bool or_temp_result_1880_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1880_28_0_end;
        bossmantalitharm6_1599_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm6_1599_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (1))) { it.deselect(); continue; }
        }
        if (!bossmantalitharm6_1599_instances.has_selection()) goto or_event_1880_28_0_end;
        if (not_always_1880_28 > loop_count) {
            not_always_1880_28 = loop_count + 2;
            goto or_event_1880_28_0_end;
        }
        not_always_1880_28 = loop_count + 2;
        or_result_1880_28 = true;
        or_temp_result_1880_28_0 = true;
    }
    or_event_1880_28_0_end: ;
    bossmantalitharm6_1599_instances.clear_saved_selection();
    if (or_temp_result_1880_28_0) {
        bossmantalitharm6_1599_instances.save_selection();
    }
    // event 1880_28
    bool or_temp_result_1880_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1880_28_1_end;
        bossmantalitharm3_1600_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm3_1600_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (1))) { it.deselect(); continue; }
        }
        if (!bossmantalitharm3_1600_instances.has_selection()) goto or_event_1880_28_1_end;
        if (not_always_1880_28 > loop_count) {
            not_always_1880_28 = loop_count + 2;
            goto or_event_1880_28_1_end;
        }
        not_always_1880_28 = loop_count + 2;
        or_result_1880_28 = true;
        or_temp_result_1880_28_1 = true;
        or_event_1880_28_1_end: ;
        bossmantalitharm3_1600_instances.clear_saved_selection();
        if (or_temp_result_1880_28_1) {
            bossmantalitharm3_1600_instances.save_selection();
        }
        if (!or_result_1880_28) goto or_final_or_event_1880_28_1_end;
        bossmantalitharm6_1599_instances.empty_selection();
        bossmantalitharm3_1600_instances.empty_selection();
        if (or_temp_result_1880_28_1) {
            bossmantalitharm3_1600_instances.restore_selection();
        }
        if (or_temp_result_1880_28_0) {
            bossmantalitharm6_1599_instances.restore_selection();
        }
        media.play_id(SOUND_SHIMMERFAST_150, -1, 1);
    }
    or_final_or_event_1880_28_1_end: ;
}
void Frames::event_func_6410()
{
    // event 1881_28
    bool or_result_1881_28 = false;
    bool or_temp_result_1881_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1881_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-56))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (2))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1881_28_0_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1881_28_0_end;
        bossanimationdata_1593_instances.clear_selection();
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (1))) { it.deselect(); continue; }
        }
        if (!bossanimationdata_1593_instances.has_selection()) goto or_event_1881_28_0_end;
        or_result_1881_28 = true;
        or_temp_result_1881_28_0 = true;
    }
    or_event_1881_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    bossanimationdata_1593_instances.clear_saved_selection();
    bossmantalithhead_1598_instances.clear_saved_selection();
    if (or_temp_result_1881_28_0) {
        bossmantalithbody_1529_instances.save_selection();
        bossanimationdata_1593_instances.save_selection();
        bossmantalithhead_1598_instances.save_selection();
    }
    // event 1881_28
    bool or_temp_result_1881_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1881_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1881_28_1_end;
        or_result_1881_28 = true;
        or_temp_result_1881_28_1 = true;
        or_event_1881_28_1_end: ;
        if (or_temp_result_1881_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1881_28) goto or_final_or_event_1881_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        bossanimationdata_1593_instances.empty_selection();
        bossmantalithhead_1598_instances.empty_selection();
        if (or_temp_result_1881_28_0 || or_temp_result_1881_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        if (or_temp_result_1881_28_0) {
            bossanimationdata_1593_instances.restore_selection();
        }
        if (or_temp_result_1881_28_0) {
            bossmantalithhead_1598_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -1);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.add(14, 1);
        }
        bossmantalitharm3_1600_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm3_1600_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
            ((Active*)*it)->alterables->values.set(15, 80);
        }
    }
    or_final_or_event_1881_28_1_end: ;
}
void Frames::event_func_6411()
{
    // event 1882_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1882_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (-1))) goto event_1882_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_1882_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(7, 1);
    }
    event_1882_28_end: ;
}
void Frames::event_func_6412()
{
    // event 1883_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1883_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (-1))) goto event_1883_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(6, 5+get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8), 1));
    }
    event_1883_28_end: ;
}
void Frames::event_func_6413()
{
    // event 1884_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1884_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (-1))) goto event_1884_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) <= (360))) goto event_1884_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(6, cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*40);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, 0-sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)-90)*10-10);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(22, -22.5+cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*22.5);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(12, cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*-20-20);
    }
    event_1884_28_end: ;
}
void Frames::event_func_6414()
{
    // event 1885_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1885_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (-1))) goto event_1885_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (180))) goto event_1885_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (330))) goto event_1885_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(6, 8);
    }
    event_1885_28_end: ;
}
void Frames::event_func_6415()
{
    // event 1886_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1886_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (-1))) goto event_1886_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (350))) goto event_1886_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1886_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(2))) goto event_1886_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_1886_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.enable(2);
        FrameObject * single_instance_1886_28_0; single_instance_1886_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm3_1600_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossslash_1527(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1886_28_0 == NULL)
                    single_instance_1886_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1886_28_0))->set_angle(315, 0);
        ((Active*)((Active*)single_instance_1886_28_0))->set_direction(28);
    }
    event_1886_28_end: ;
}
void Frames::event_func_6416()
{
    // event 1887_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1887_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (-1))) goto event_1887_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (180))) goto event_1887_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) <= (360))) goto event_1887_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(8, 10+cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*50);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, 30-sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)-90)*50);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(22, cos_deg(get_min((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)-90)*2, 360))*35);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(5, -16+cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*20+20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(7, -24+cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*30+30);
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_direction(get_min(get_max(0, (((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(5))*0.2)+5, 8));
    }
    event_1887_28_end: ;
}
void Frames::event_func_6417()
{
    // event 1888_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1888_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (-1))) goto event_1888_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (360))) goto event_1888_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(22, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(22)-3, 0));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)-6, 0));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(5, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(5)-4, -16));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(7, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(7)-4, -24));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(6, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(6)-4, 40));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(8, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(8)-6, -40));
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_direction(get_max(((Active*)get_instance(bossmantalitharm3_1600_instances))->get_direction()-1, 0));
    }
    event_1888_28_end: ;
}
void Frames::event_func_6418()
{
    // event 1889_28
    bool or_result_1889_28 = false;
    bool or_temp_result_1889_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1889_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+56))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (2))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1889_28_0_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1889_28_0_end;
        bossanimationdata_1593_instances.clear_selection();
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (1))) { it.deselect(); continue; }
        }
        if (!bossanimationdata_1593_instances.has_selection()) goto or_event_1889_28_0_end;
        or_result_1889_28 = true;
        or_temp_result_1889_28_0 = true;
    }
    or_event_1889_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    bossanimationdata_1593_instances.clear_saved_selection();
    bossmantalithhead_1598_instances.clear_saved_selection();
    if (or_temp_result_1889_28_0) {
        bossmantalithbody_1529_instances.save_selection();
        bossanimationdata_1593_instances.save_selection();
        bossmantalithhead_1598_instances.save_selection();
    }
    // event 1889_28
    bool or_temp_result_1889_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1889_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1889_28_1_end;
        or_result_1889_28 = true;
        or_temp_result_1889_28_1 = true;
        or_event_1889_28_1_end: ;
        if (or_temp_result_1889_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1889_28) goto or_final_or_event_1889_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        bossanimationdata_1593_instances.empty_selection();
        bossmantalithhead_1598_instances.empty_selection();
        if (or_temp_result_1889_28_0 || or_temp_result_1889_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        if (or_temp_result_1889_28_0) {
            bossanimationdata_1593_instances.restore_selection();
        }
        if (or_temp_result_1889_28_0) {
            bossmantalithhead_1598_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 1);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.add(14, 1);
        }
        bossmantalitharm6_1599_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm6_1599_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
            ((Active*)*it)->alterables->values.set(15, 80);
        }
    }
    or_final_or_event_1889_28_1_end: ;
}
void Frames::event_func_6419()
{
    // event 1890_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1890_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (1))) goto event_1890_28_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto event_1890_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(7, -1);
    }
    event_1890_28_end: ;
}
void Frames::event_func_6420()
{
    // event 1891_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1891_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (1))) goto event_1891_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(6, 5+get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8), 1));
    }
    event_1891_28_end: ;
}
void Frames::event_func_6421()
{
    // event 1892_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1892_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (1))) goto event_1892_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) <= (360))) goto event_1892_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(10, cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*40);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, 0-sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)-90)*10-10);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(23, 22.5-cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*22.5);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(8, cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*-20-20);
    }
    event_1892_28_end: ;
}
void Frames::event_func_6422()
{
    // event 1893_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1893_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (1))) goto event_1893_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (180))) goto event_1893_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (330))) goto event_1893_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(6, 8);
    }
    event_1893_28_end: ;
}
void Frames::event_func_6423()
{
    // event 1894_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1894_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (1))) goto event_1894_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (350))) goto event_1894_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1894_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(2))) goto event_1894_28_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto event_1894_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.enable(2);
        FrameObject * single_instance_1894_28_0; single_instance_1894_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm6_1599_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossslash_1527(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1894_28_0 == NULL)
                    single_instance_1894_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1894_28_0))->set_angle(45, 0);
        ((Active*)((Active*)single_instance_1894_28_0))->set_direction(20);
    }
    event_1894_28_end: ;
}
void Frames::event_func_6424()
{
    // event 1895_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1895_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (1))) goto event_1895_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (180))) goto event_1895_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) <= (360))) goto event_1895_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(12, 10+cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*50);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, 30-sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)-90)*50);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(23, cos_deg(get_min((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)-90)*2, 360))*-35);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(9, 16-cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*20-20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(11, 24-cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*30-30);
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_direction(get_min(get_max(0, 8-(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(9))*0.2)+5, 8));
    }
    event_1895_28_end: ;
}
void Frames::event_func_6425()
{
    // event 1896_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1896_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (1))) goto event_1896_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (360))) goto event_1896_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(23, get_min(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(22)+3, 0));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)-6, 0));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(9, get_min(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(9)+4, 16));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(11, get_min(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(11)+4, 24));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(10, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(10)-4, 40));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(12, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(12)-6, -40));
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_direction(get_max(((Active*)get_instance(bossmantalitharm6_1599_instances))->get_direction()-1, 0));
    }
    event_1896_28_end: ;
}
void Frames::event_func_6426()
{
    // event 1897_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1897_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1897_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1897_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(7, (randrange(2)*2)-1);
    }
    event_1897_28_end: ;
}
void Frames::event_func_6427()
{
    // event 1898_28
    bool or_result_1898_28 = false;
    bool or_temp_result_1898_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1898_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+56))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+80))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1898_28_0_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1898_28_0_end;
        bossanimationdata_1593_instances.clear_selection();
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (1))) { it.deselect(); continue; }
        }
        if (!bossanimationdata_1593_instances.has_selection()) goto or_event_1898_28_0_end;
        or_result_1898_28 = true;
        or_temp_result_1898_28_0 = true;
    }
    or_event_1898_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    bossanimationdata_1593_instances.clear_saved_selection();
    bossmantalithhead_1598_instances.clear_saved_selection();
    if (or_temp_result_1898_28_0) {
        bossmantalithbody_1529_instances.save_selection();
        bossanimationdata_1593_instances.save_selection();
        bossmantalithhead_1598_instances.save_selection();
    }
    // event 1898_28
    bool or_temp_result_1898_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1898_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-56))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1898_28_1_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1898_28_1_end;
        bossanimationdata_1593_instances.clear_selection();
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (1))) { it.deselect(); continue; }
        }
        if (!bossanimationdata_1593_instances.has_selection()) goto or_event_1898_28_1_end;
        or_result_1898_28 = true;
        or_temp_result_1898_28_1 = true;
    }
    or_event_1898_28_1_end: ;
    if (or_temp_result_1898_28_1) {
        bossmantalithbody_1529_instances.save_selection();
        bossanimationdata_1593_instances.save_selection();
        bossmantalithhead_1598_instances.save_selection();
    }
    // event 1898_28
    bool or_temp_result_1898_28_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1898_28_2_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+80))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1898_28_2_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1898_28_2_end;
        or_result_1898_28 = true;
        or_temp_result_1898_28_2 = true;
    }
    or_event_1898_28_2_end: ;
    if (or_temp_result_1898_28_2) {
        bossmantalithbody_1529_instances.save_selection();
        bossmantalithhead_1598_instances.save_selection();
    }
    // event 1898_28
    bool or_temp_result_1898_28_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1898_28_3_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1898_28_3_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1898_28_3_end;
        or_result_1898_28 = true;
        or_temp_result_1898_28_3 = true;
        or_event_1898_28_3_end: ;
        if (or_temp_result_1898_28_3) {
            bossmantalithbody_1529_instances.save_selection();
            bossmantalithhead_1598_instances.save_selection();
        }
        if (!or_result_1898_28) goto or_final_or_event_1898_28_3_end;
        bossmantalithbody_1529_instances.empty_selection();
        bossanimationdata_1593_instances.empty_selection();
        bossmantalithhead_1598_instances.empty_selection();
        if (or_temp_result_1898_28_0 || or_temp_result_1898_28_1 || or_temp_result_1898_28_2 || or_temp_result_1898_28_3) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        if (or_temp_result_1898_28_0 || or_temp_result_1898_28_1) {
            bossanimationdata_1593_instances.restore_selection();
        }
        if (or_temp_result_1898_28_0 || or_temp_result_1898_28_1 || or_temp_result_1898_28_2 || or_temp_result_1898_28_3) {
            bossmantalithhead_1598_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 2);
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        bossmantalitharm3_1600_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm3_1600_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        bossmantalitharm6_1599_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm6_1599_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(8);
            ((Active*)*it)->alterables->values.set(15, 80);
        }
    }
    or_final_or_event_1898_28_3_end: ;
}
void Frames::event_func_6428()
{
    // event 1899_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1899_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1899_28_end;
        if (!((((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.get(3)) <= (0))) goto event_1899_28_end;
        if (!((((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.get(3)) <= (0))) goto event_1899_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(6, 5+get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8), 1));
    }
    event_1899_28_end: ;
}
