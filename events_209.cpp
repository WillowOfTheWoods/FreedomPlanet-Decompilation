#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_16465()
{
    // event 1494_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1494_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_1494_73_end;
        if (((Active*)get_instance(objectinfo_3854_instances))->test_directions(2147483648)) goto event_1494_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1494_73_end;
        if (!(((Active*)get_instance(hand_292_instances))->alterables->flags.is_on(0))) goto event_1494_73_end;
        qualifier_29.clear_selection();
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
        }
        if (!qualifier_29.has_selection()) goto event_1494_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, 5);
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, ((Active*)get_single(qualifier_29, default_active_instance))->alterables->values.get(0));
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        ((Active*)get_instance(hand_292_instances))->set_x((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(0)+((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(2))*0.5);
        ((Active*)get_instance(hand_292_instances))->set_y((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(1)+((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(3))*0.5);
    }
    event_1494_73_end: ;
}
void Frames::event_func_16466()
{
    // event 1495_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1495_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (0))) goto event_1495_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, get_max(((Active*)get_instance(hand_292_instances))->alterables->values.get(11)-1, 0));
    }
    event_1495_73_end: ;
}
void Frames::event_func_16467()
{
    // event 1496_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1)) goto event_1496_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_1496_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1496_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, 5);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1496_73_end: ;
}
void Frames::event_func_16468()
{
    // event 1497_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1497_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_1497_73_end;
        if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1) {
            group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1 = true;
        }
    }
    event_1497_73_end: ;
}
void Frames::event_func_16469()
{
    // event 1498_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1498_73_end;
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_1498_73_end;
        if (not_always_1498_73 > loop_count) {
            not_always_1498_73 = loop_count + 2;
            goto event_1498_73_end;
        }
        not_always_1498_73 = loop_count + 2;
        ((Active*)get_instance(hand_292_instances))->set_x((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(0)+((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(2))*0.5);
        ((Active*)get_instance(hand_292_instances))->set_y((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(1)+((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(3))*0.5);
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1498_73_end: ;
}
void Frames::event_func_16470()
{
    // event 1499_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1499_73_end;
        qualifier_8.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_1499_73_end;
        if (not_always_1499_73 > loop_count) {
            not_always_1499_73 = loop_count + 2;
            goto event_1499_73_end;
        }
        not_always_1499_73 = loop_count + 2;
        ((Active*)get_instance(hand_292_instances))->set_x((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(0)+((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(2))*0.5);
        ((Active*)get_instance(hand_292_instances))->set_y((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(1)+((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(3))*0.5);
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1499_73_end: ;
}
void Frames::event_func_16471()
{
    // event 1500_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1500_73_end;
        qualifier_29.clear_selection();
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
        }
        if (!qualifier_29.has_selection()) goto event_1500_73_end;
        if (not_always_1500_73 > loop_count) {
            not_always_1500_73 = loop_count + 2;
            goto event_1500_73_end;
        }
        not_always_1500_73 = loop_count + 2;
        ((Active*)get_instance(hand_292_instances))->set_x((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(0)+((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(2))*0.5);
        ((Active*)get_instance(hand_292_instances))->set_y((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(1)+((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(3))*0.5);
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1500_73_end: ;
}
void Frames::event_func_16472()
{
    // event 1501_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1501_73_end;
        startlocationmaker_3830_instances.clear_selection();
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
        }
        if (!startlocationmaker_3830_instances.has_selection()) goto event_1501_73_end;
        if (not_always_1501_73 > loop_count) {
            not_always_1501_73 = loop_count + 2;
            goto event_1501_73_end;
        }
        not_always_1501_73 = loop_count + 2;
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_y());
        }
    }
    event_1501_73_end: ;
}
void Frames::event_func_16473()
{
    // event 1502_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1502_73_end;
        {
            ((Active*)get_instance(highlighter_36_instances))->blend_color.set_semi_transparency(80+sin_deg(((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0))*5);
        }
        ((Active*)get_instance(highlighter_36_instances))->alterables->values.set(0, (((Active*)get_instance(highlighter_36_instances))->alterables->values.get(0)+8)%math_helper%360);
        ((Active*)get_instance(highlighter_36_instances))->set_direction(0);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, get_max(((Active*)get_instance(hand_292_instances))->alterables->values.get(11)-1, 0));
        ((Active*)get_instance(highlighter_36_instances))->move_front();
        ((Active*)get_instance(hand_292_instances))->move_front();
        ((Active*)get_instance(objectinfo_3854_instances))->move_front();
        ((Active*)get_instance(levelcardselect_3857_instances))->set_visible(false);
    }
    event_1502_73_end: ;
}
void Frames::event_func_16474()
{
    // event 1503_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1503_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_1503_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_1503_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_1503_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_1503_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(12, 1);
    }
    event_1503_73_end: ;
}
void Frames::event_func_16475()
{
    // event 1504_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1504_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_1504_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(12, get_min(((Active*)get_instance(hand_292_instances))->alterables->values.get(12)+0.1, 3));
        ((Active*)get_instance(hand_292_instances))->set_x(((Active*)get_instance(hand_292_instances))->get_x()+((Active*)get_instance(hand_292_instances))->alterables->values.get(12));
    }
    event_1504_73_end: ;
}
void Frames::event_func_16476()
{
    // event 1505_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1505_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_1505_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(12, get_min(((Active*)get_instance(hand_292_instances))->alterables->values.get(12)+0.1, 3));
        ((Active*)get_instance(hand_292_instances))->set_x(((Active*)get_instance(hand_292_instances))->get_x()-((Active*)get_instance(hand_292_instances))->alterables->values.get(12));
    }
    event_1505_73_end: ;
}
void Frames::event_func_16477()
{
    // event 1506_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1506_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1506_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(12, get_min(((Active*)get_instance(hand_292_instances))->alterables->values.get(12)+0.1, 3));
        ((Active*)get_instance(hand_292_instances))->set_y(((Active*)get_instance(hand_292_instances))->get_y()+((Active*)get_instance(hand_292_instances))->alterables->values.get(12));
    }
    event_1506_73_end: ;
}
void Frames::event_func_16478()
{
    // event 1507_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1507_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_1507_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(12, get_min(((Active*)get_instance(hand_292_instances))->alterables->values.get(12)+0.1, 3));
        ((Active*)get_instance(hand_292_instances))->set_y(((Active*)get_instance(hand_292_instances))->get_y()-((Active*)get_instance(hand_292_instances))->alterables->values.get(12));
    }
    event_1507_73_end: ;
}
void Frames::event_func_16479()
{
    // event 1508_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1508_73_end;
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_1508_73_end;
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(hand_292_instances))->get_x()-(((Active*)*it)->get_box_index(2)-((Active*)*it)->get_box_index(0))*0.5);
            ((Active*)*it)->set_y(((Active*)get_instance(hand_292_instances))->get_y()-(((Active*)*it)->get_box_index(3)-((Active*)*it)->get_box_index(1))*0.5);
        }
        ((Active*)get_instance(highlighter_36_instances))->set_x(((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(0)+4)/math_helper/8)*8);
        ((Active*)get_instance(highlighter_36_instances))->set_y(((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(1)+4)/math_helper/8)*8);
        ((Active*)get_instance(highlighter_36_instances))->set_x_scale((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(2)-((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(0))/math_helper/8);
        ((Active*)get_instance(highlighter_36_instances))->set_y_scale((((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(3)-((Active*)get_single(qualifier_7, default_active_instance))->get_box_index(1))/math_helper/8);
    }
    event_1508_73_end: ;
}
void Frames::event_func_16480()
{
    // event 1509_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1509_73_end;
        qualifier_8.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_1509_73_end;
        ((Active*)get_instance(highlighter_36_instances))->set_x(((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(0)+4)/math_helper/8)*8);
        ((Active*)get_instance(highlighter_36_instances))->set_y(((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(1)+4)/math_helper/8)*8);
        ((Active*)get_instance(highlighter_36_instances))->set_x_scale((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(2)-((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(0))/math_helper/8);
        ((Active*)get_instance(highlighter_36_instances))->set_y_scale((((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(3)-((Active*)get_single(qualifier_8, default_active_instance))->get_box_index(1))/math_helper/8);
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(hand_292_instances))->get_x()-(((Active*)*it)->get_box_index(2)-((Active*)*it)->get_box_index(0))*0.5);
            ((Active*)*it)->set_y(((Active*)get_instance(hand_292_instances))->get_y()-(((Active*)*it)->get_box_index(3)-((Active*)*it)->get_box_index(1))*0.5);
        }
    }
    event_1509_73_end: ;
}
void Frames::event_func_16481()
{
    // event 1510_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1510_73_end;
        qualifier_29.clear_selection();
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
        }
        if (!qualifier_29.has_selection()) goto event_1510_73_end;
        ((Active*)get_instance(highlighter_36_instances))->set_x((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(0)/math_helper/8)*8);
        ((Active*)get_instance(highlighter_36_instances))->set_y((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(1)/math_helper/8)*8);
        ((Active*)get_instance(highlighter_36_instances))->set_x_scale((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(2)-((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(0))/math_helper/8);
        ((Active*)get_instance(highlighter_36_instances))->set_y_scale((((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(3)-((Active*)get_single(qualifier_29, default_active_instance))->get_box_index(1))/math_helper/8);
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(hand_292_instances))->get_x()-(((Active*)*it)->get_box_index(2)-((Active*)*it)->get_box_index(0))*0.5);
            ((Active*)*it)->set_y(((Active*)get_instance(hand_292_instances))->get_y()-(((Active*)*it)->get_box_index(3)-((Active*)*it)->get_box_index(1))*0.5);
        }
    }
    event_1510_73_end: ;
}
void Frames::event_func_16482()
{
    // event 1511_73
    bool or_result_1511_73 = false;
    bool or_temp_result_1511_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto or_event_1511_73_0_end;
        highlighter_36_instances.clear_selection();
        for (ObjectIterator it(highlighter_36_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!highlighter_36_instances.has_selection()) goto or_event_1511_73_0_end;
        or_result_1511_73 = true;
        or_temp_result_1511_73_0 = true;
    }
    or_event_1511_73_0_end: ;
    highlighter_36_instances.clear_saved_selection();
    if (or_temp_result_1511_73_0) {
        highlighter_36_instances.save_selection();
    }
    // event 1511_73
    bool or_temp_result_1511_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto or_event_1511_73_1_end;
        highlighter_36_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(highlighter_36_instances, qualifier_7)) goto or_event_1511_73_1_end;
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(29))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto or_event_1511_73_1_end;
        or_result_1511_73 = true;
        or_temp_result_1511_73_1 = true;
    }
    or_event_1511_73_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1511_73_1) {
        highlighter_36_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1511_73
    bool or_temp_result_1511_73_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto or_event_1511_73_2_end;
        highlighter_36_instances.clear_selection();
        qualifier_29.clear_selection();
        if (!check_overlap(highlighter_36_instances, qualifier_29)) goto or_event_1511_73_2_end;
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(29))) { it.deselect(); continue; }
        }
        if (!qualifier_29.has_selection()) goto or_event_1511_73_2_end;
        or_result_1511_73 = true;
        or_temp_result_1511_73_2 = true;
    }
    or_event_1511_73_2_end: ;
    qualifier_29.clear_saved_selection();
    if (or_temp_result_1511_73_2) {
        qualifier_29.save_selection();
        highlighter_36_instances.save_selection();
    }
    // event 1511_73
    bool or_temp_result_1511_73_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto or_event_1511_73_3_end;
        highlighter_36_instances.clear_selection();
        qualifier_8.clear_selection();
        if (!check_overlap(highlighter_36_instances, qualifier_8)) goto or_event_1511_73_3_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(29))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto or_event_1511_73_3_end;
        or_result_1511_73 = true;
        or_temp_result_1511_73_3 = true;
        or_event_1511_73_3_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1511_73_3) {
            highlighter_36_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1511_73) goto or_final_or_event_1511_73_3_end;
        qualifier_8.empty_selection();
        highlighter_36_instances.empty_selection();
        qualifier_29.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1511_73_0 || or_temp_result_1511_73_1 || or_temp_result_1511_73_2 || or_temp_result_1511_73_3) {
            highlighter_36_instances.restore_selection();
        }
        if (or_temp_result_1511_73_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1511_73_3) {
            qualifier_8.restore_selection();
        }
        if (or_temp_result_1511_73_2) {
            qualifier_29.restore_selection();
        }
        for (ObjectIterator it(highlighter_36_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    or_final_or_event_1511_73_3_end: ;
}
void Frames::event_func_16483()
{
    // event 1512_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1512_73_end;
        if (!(((Active*)get_instance(hand_292_instances))->flags & VISIBLE)) goto event_1512_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        set_display_center(((Active*)get_instance(hand_292_instances))->get_x(), -1);
        set_display_center(-1, ((Active*)get_instance(hand_292_instances))->get_y());
        ((Active*)get_instance(hand_292_instances))->force_frame(2);
        {
            FrameObject * parent = ((Active*)get_instance(hand_292_instances));
            if (parent == NULL) goto pos_end_1512_73_0;
            ((Active*)get_instance(objectinfo_3854_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1512_73_0: ;
        }
        ((Active*)get_instance(objectinfo_3854_instances))->set_direction(1);
    }
    event_1512_73_end: ;
}
void Frames::event_func_16484()
{
    // event 1513_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1513_73_end;
        startlocationmaker_3830_instances.clear_selection();
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
        }
        if (!startlocationmaker_3830_instances.has_selection()) goto event_1513_73_end;
        ((Active*)get_instance(objectinfo_3854_instances))->set_direction(2);
    }
    event_1513_73_end: ;
}
void Frames::event_func_16485()
{
    // event 1514_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1514_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1514_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1514_73_end;
        if (!(((Active*)get_instance(highlighter_36_instances))->test_directions(1))) goto event_1514_73_end;
        {
            qualifier_7.clear_selection();
            for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
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
            minibossgolem_1252_instances.clear_selection();
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
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
            }
            qualifier_29.clear_selection();
            for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)*it)->get_x()+4)/math_helper/8)*8);
            ((Active*)*it)->set_y(((((Active*)*it)->get_y()+4)/math_helper/8)*8);
        }
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)*it)->get_x()+4)/math_helper/8)*8);
            ((Active*)*it)->set_y(((((Active*)*it)->get_y()+4)/math_helper/8)*8);
        }
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)*it)->get_x()+4)/math_helper/8)*8);
            ((Active*)*it)->set_y(((((Active*)*it)->get_y()+4)/math_helper/8)*8);
        }
    }
    event_1514_73_end: ;
}
void Frames::event_func_16486()
{
    // event 1515_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1515_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1515_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1515_73_end;
        if (!(((Active*)get_instance(highlighter_36_instances))->test_directions(1))) goto event_1515_73_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, 5);
        media.play_id(SOUND_EDITOR_PLACEOBJECT_143, -1, 1);
        ((Active*)get_instance(levelcardselect_3857_instances))->set_visible(true);
    }
    event_1515_73_end: ;
}
void Frames::event_func_16487()
{
    // event 1516_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1516_73_end;
        qualifier_29.clear_selection();
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_29.has_selection()) goto event_1516_73_end;
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1516_73_end: ;
}
void Frames::event_func_16488()
{
    // event 1517_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1517_73_end;
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_1517_73_end;
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1517_73_end: ;
}
void Frames::event_func_16489()
{
    // event 1518_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1518_73_end;
        qualifier_8.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->mouse_over() && is_mouse_pressed_once(SDL_BUTTON_LEFT))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_1518_73_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1518_73_end: ;
}
void Frames::event_func_16490()
{
    // event 1519_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1519_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_1519_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1519_73_end;
        startlocationmaker_3830_instances.clear_selection();
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(29))) { it.deselect(); continue; }
        }
        if (!startlocationmaker_3830_instances.has_selection()) goto event_1519_73_end;
        {
            qualifier_7.clear_selection();
            for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
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
            minibossgolem_1252_instances.clear_selection();
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
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
            }
            // icache destruction
            bossmantalithleftknee_1532_instances.clear_selection();
            objectplatformmaker2_3839_instances.clear_selection();
            objecttargetmaker_3829_instances.clear_selection();
            bossmantalithleg3_1534_instances.clear_selection();
            customtile9_3807_instances.clear_selection();
            bossmantalitharm6_1599_instances.clear_selection();
            bossmantalithrightknee_1533_instances.clear_selection();
            bossmantalithneck4_1530_instances.clear_selection();
            bossmantalithdebris_1602_instances.clear_selection();
            customtile28_3826_instances.clear_selection();
            customtile8_3806_instances.clear_selection();
            laddertopmaker_3842_instances.clear_selection();
            bossmantalithneck2_1536_instances.clear_selection();
            bossmantalithleg2_1535_instances.clear_selection();
            laddermaker_3828_instances.clear_selection();
            gimmickhangingidlebar_3827_instances.clear_selection();
            bossmantalithbody_1529_instances.clear_selection();
            bossmantalithhead3_1596_instances.clear_selection();
            bossmantalithneck3_1531_instances.clear_selection();
            bossmantalithhead2_1597_instances.clear_selection();
            bossmantalithhead_1598_instances.clear_selection();
            customtile29_3837_instances.clear_selection();
            objectplatformmaker1_3838_instances.clear_selection();
            bossmantalitharm3_1600_instances.clear_selection();
            objectmonitormaker_3831_instances.clear_selection();
            objectspiketrapmask_3836_instances.clear_selection();
            bossmantalithneck1_1537_instances.clear_selection();
            objectbombmaker_3832_instances.clear_selection();
            gimmickspikechainmaker_3843_instances.clear_selection();
            bossmantalithleg1_1528_instances.clear_selection();
            for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(29))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1519_73_end: ;
}
void Frames::event_func_16491()
{
    // event 1520_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1520_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_1520_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1520_73_end;
        startlocationmaker_3830_instances.clear_selection();
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(29))) { it.deselect(); continue; }
        }
        if (!startlocationmaker_3830_instances.has_selection()) goto event_1520_73_end;
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1520_73_end: ;
}
void Frames::event_func_16492()
{
    // event 1521_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1)) goto event_1521_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_1521_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1521_73_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, 5);
        media.play_id(SOUND_EDITOR_DELETE_144, -1, 1);
        ((Active*)get_instance(levelcardselect_3857_instances))->set_visible(true);
    }
    event_1521_73_end: ;
}
void Frames::event_func_16493()
{
    // event 1522_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1522_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (2))) goto event_1522_73_end;
        if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1) {
            group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1 = true;
        }
    }
    event_1522_73_end: ;
}
void Frames::event_func_16494()
{
    // event 1523_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1523_73_end;
        if (not_always_1523_73 > loop_count) {
            not_always_1523_73 = loop_count + 2;
            goto event_1523_73_end;
        }
        not_always_1523_73 = loop_count + 2;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(hand_292_instances))->set_layer(7-1);
        ((Active*)get_instance(levelcardselect_3857_instances))->set_direction(8);
        ((Active*)get_instance(levelcardselect_3857_instances))->set_visible(true);
        ((Active*)get_instance(hand_292_instances))->restore_frame();
        qualifier_29.clear_selection();
        for (QualifierIterator it(qualifier_29); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
        }
        qualifier_7.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(29);
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
        minibossgolem_1252_instances.clear_selection();
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
            ((Active*)*it)->alterables->flags.disable(29);
        }
    }
    event_1523_73_end: ;
}
void Frames::event_func_16495()
{
    // event 1524_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1524_73_end;
        ((Active*)get_instance(hand_292_instances))->set_x(((Active*)get_instance(levelcardselect_3857_instances))->get_x());
        ((Active*)get_instance(hand_292_instances))->set_y(((Active*)get_instance(levelcardselect_3857_instances))->get_y()+38+((Active*)get_instance(hand_292_instances))->alterables->values.get(6)*79);
    }
    event_1524_73_end: ;
}
void Frames::event_func_16496()
{
    // event 1525_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1525_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (0))) goto event_1525_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, get_max(((Active*)get_instance(hand_292_instances))->alterables->values.get(11)-1, 0));
    }
    event_1525_73_end: ;
}
void Frames::event_func_16497()
{
    // event 1526_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1526_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_1526_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(6)) > (0))) goto event_1526_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.sub(6, 1);
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
    }
    event_1526_73_end: ;
}
void Frames::event_func_16498()
{
    // event 1527_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1527_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_1527_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(6)) < (2))) goto event_1527_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.add(6, 1);
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
    }
    event_1527_73_end: ;
}
void Frames::event_func_16499()
{
    // event 1528_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1528_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(9)) == (1))) goto event_1528_73_end;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(hand_292_instances))->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!inventory_3858_instances.has_selection()) goto event_1528_73_end;
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+1)%math_helper%((Active*)*it)->alterables->values.get(2));
        }
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
    }
    event_1528_73_end: ;
}
void Frames::event_func_16500()
{
    // event 1529_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1529_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(8)) == (1))) goto event_1529_73_end;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(hand_292_instances))->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!inventory_3858_instances.has_selection()) goto event_1529_73_end;
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(2)-1)%math_helper%((Active*)*it)->alterables->values.get(2));
        }
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
    }
    event_1529_73_end: ;
}
void Frames::event_func_16501()
{
    // event 1530_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1530_73_end;
        ((Active*)get_instance(hand_292_instances))->set_direction(8);
    }
    event_1530_73_end: ;
}
void Frames::event_func_16502()
{
    // event 1531_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1531_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1531_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1531_73_end;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!inventory_3858_instances.has_selection()) goto event_1531_73_end;
        hand_292_instances.clear_selection();
        if (!check_overlap(hand_292_instances, inventory_3858_instances)) goto event_1531_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 1+((Active*)get_single(inventory_3858_instances, default_active_instance))->alterables->values.get(1));
    }
    event_1531_73_end: ;
}
void Frames::event_func_16503()
{
    // event 1532_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1532_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1532_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1532_73_end;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!inventory_3858_instances.has_selection()) goto event_1532_73_end;
        hand_292_instances.clear_selection();
        if (!check_overlap(hand_292_instances, inventory_3858_instances)) goto event_1532_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 101+((Active*)get_single(inventory_3858_instances, default_active_instance))->alterables->values.get(1));
    }
    event_1532_73_end: ;
}
void Frames::event_func_16504()
{
    // event 1533_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1533_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1533_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1533_73_end;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!inventory_3858_instances.has_selection()) goto event_1533_73_end;
        hand_292_instances.clear_selection();
        if (!check_overlap(hand_292_instances, inventory_3858_instances)) goto event_1533_73_end;
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(3, 200+((Active*)get_single(inventory_3858_instances, default_active_instance))->alterables->values.get(1));
    }
    event_1533_73_end: ;
}
void Frames::event_func_16505()
{
    // event 1534_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1534_73_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_1534_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(11)) <= (0))) goto event_1534_73_end;
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(levelcardselect_3857_instances))->set_direction(24);
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(hand_292_instances))->set_layer(3-1);
        ((Active*)get_instance(hand_292_instances))->alterables->values.set(11, 5);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1534_73_end: ;
}
void Frames::event_func_16506()
{
    // event 1535_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto event_1535_73_end;
        ((Active*)get_instance(hand_292_instances))->set_direction(global_values->get(1));
    }
    event_1535_73_end: ;
}
void Frames::event_func_16507()
{
    // event 1536_73
    bool or_result_1536_73 = false;
    bool or_temp_result_1536_73_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto or_event_1536_73_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1536_73_0_end;
        hand_292_instances.clear_selection();
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (0))) { it.deselect(); continue; }
        }
        if (!hand_292_instances.has_selection()) goto or_event_1536_73_0_end;
        or_result_1536_73 = true;
        or_temp_result_1536_73_0 = true;
    }
    or_event_1536_73_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    hand_292_instances.clear_saved_selection();
    if (or_temp_result_1536_73_0) {
        playerinput_19_instances.save_selection();
        hand_292_instances.save_selection();
    }
    // event 1536_73
    bool or_temp_result_1536_73_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1)) goto or_event_1536_73_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1536_73_1_end;
        hand_292_instances.clear_selection();
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (0))) { it.deselect(); continue; }
        }
        if (!hand_292_instances.has_selection()) goto or_event_1536_73_1_end;
        or_result_1536_73 = true;
        or_temp_result_1536_73_1 = true;
        or_event_1536_73_1_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_1536_73_1) {
            hand_292_instances.save_selection();
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1536_73) goto or_final_or_event_1536_73_1_end;
        inputsp1_21_instances.empty_selection();
        hand_292_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_1536_73_1) {
            inputsp1_21_instances.restore_selection();
        }
        if (or_temp_result_1536_73_0) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1536_73_0 || or_temp_result_1536_73_1) {
            hand_292_instances.restore_selection();
        }
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        crystal_456_instances.clear_selection();
        for (ObjectIterator it(crystal_456_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        levelcardselect_3857_instances.clear_selection();
        for (ObjectIterator it(levelcardselect_3857_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(hand_292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 5);
        }
    }
    or_final_or_event_1536_73_1_end: ;
}
void Frames::event_func_16508()
{
    // event 1537_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1537_73_end;
        if (!(is_key_pressed_once(SDLK_1))) goto event_1537_73_end;
        ((Counter*)get_instance(maptoload_3862_instances))->subtract(1);
    }
    event_1537_73_end: ;
}
void Frames::event_func_16509()
{
    // event 1538_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1538_73_end;
        if (!(is_key_pressed_once(SDLK_2))) goto event_1538_73_end;
        ((Counter*)get_instance(maptoload_3862_instances))->add(1);
    }
    event_1538_73_end: ;
}
void Frames::event_func_16510()
{
    // event 1539_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1539_73_end;
        if (!(is_key_pressed_once(SDLK_l))) goto event_1539_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (7))) goto event_1539_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 7);
        {
            loop_delete_running = true;
            int times = int(1);
            loop_delete_index = 0;
            while (loop_delete_index < times) {
                loop_delete_73();
                if (!loop_delete_running) break;
                loop_delete_index++;
            }
        }
    }
    event_1539_73_end: ;
}
void Frames::event_func_16511()
{
    // event 1540_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1540_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (7))) goto event_1540_73_end;
        if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1) {
            group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1 = true;
        }
    }
    event_1540_73_end: ;
}
void Frames::event_func_16512()
{
    // event 1541_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1)) goto event_1541_73_end;
        if (not_always_1541_73 > loop_count) {
            not_always_1541_73 = loop_count + 2;
            goto event_1541_73_end;
        }
        not_always_1541_73 = loop_count + 2;
        ((INI*)get_instance(ini_3855_instances))->load_file(create_temp_file(str_c_maps_map_269+number_to_string(((Counter*)get_instance(maptoload_3862_instances))->value)+str_map_270));
        {
            loop_load_running = true;
            int times = int(((INI*)get_instance(ini_3855_instances))->get_value(str_properties_267, str_objects_268));
            loop_load_index = 0;
            while (loop_load_index < times) {
                loop_load_73();
                if (!loop_load_running) break;
                loop_load_index++;
            }
        }
    }
    event_1541_73_end: ;
}
void Frames::event_func_16513()
{
    // event 1544_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1)) goto event_1544_73_end;
        if (not_always_1544_73 > loop_count) {
            not_always_1544_73 = loop_count + 2;
            goto event_1544_73_end;
        }
        not_always_1544_73 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
    }
    event_1544_73_end: ;
}
void Frames::event_func_16514()
{
    // event 1545_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1545_73_end;
        if (!(is_key_pressed_once(SDLK_s))) goto event_1545_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (8))) goto event_1545_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 8);
    }
    event_1545_73_end: ;
}
void Frames::event_func_16515()
{
    // event 1546_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1546_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (8))) goto event_1546_73_end;
        if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1) {
            group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1 = true;
        }
    }
    event_1546_73_end: ;
}
void Frames::event_func_16516()
{
    // event 1547_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1)) goto event_1547_73_end;
        qualifier_7.clear_selection();
        pick_objects_in_zone(qualifier_7, 0, 0, 1280, 640);
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
        minibossgolem_1252_instances.clear_selection();
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
        pick_objects_in_zone(qualifier_8, 0, 0, 1280, 640);
        qualifier_29.clear_selection();
        pick_objects_in_zone(qualifier_29, 0, 0, 1280, 640);
        if (not_always_1547_73 > loop_count) {
            not_always_1547_73 = loop_count + 2;
            goto event_1547_73_end;
        }
        not_always_1547_73 = loop_count + 2;
        spread_value(qualifier_29, 8, qualifier_7.size()+qualifier_8.size());
        spread_value(qualifier_7, 8, 0);
        spread_value(qualifier_8, 8, qualifier_7.size());
    }
    event_1547_73_end: ;
}
void Frames::event_func_16517()
{
    // event 1548_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1)) goto event_1548_73_end;
        if (not_always_1548_73 > loop_count) {
            not_always_1548_73 = loop_count + 2;
            goto event_1548_73_end;
        }
        not_always_1548_73 = loop_count + 2;
        {
            loop_clear_running = true;
            int times = int(((INI*)get_instance(ini_3855_instances))->get_value(str_properties_267, str_objects_268));
            loop_clear_index = 0;
            while (loop_clear_index < times) {
                loop_clear_73();
                if (!loop_clear_running) break;
                loop_clear_index++;
            }
        }
    }
    event_1548_73_end: ;
}
void Frames::event_func_16518()
{
    // event 1550_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1)) goto event_1550_73_end;
        if (not_always_1550_73 > loop_count) {
            not_always_1550_73 = loop_count + 2;
            goto event_1550_73_end;
        }
        not_always_1550_73 = loop_count + 2;
        ((INI*)get_instance(ini_3855_instances))->load_file(create_temp_file(str_c_maps_map_269+number_to_string(((Counter*)get_instance(maptoload_3862_instances))->value)+str_map_270));
        ((INI*)get_instance(ini_3855_instances))->set_group(str_properties_267);
        ((INI*)get_instance(ini_3855_instances))->set_value(str_objects_268, qualifier_7.size()+qualifier_8.size()+qualifier_29.size());
        {
            loop_save_running = true;
            int times = int(qualifier_7.size()+qualifier_8.size()+qualifier_29.size());
            loop_save_index = 0;
            while (loop_save_index < times) {
                loop_save_73();
                if (!loop_save_running) break;
                loop_save_index++;
            }
        }
    }
    event_1550_73_end: ;
}
void Frames::event_func_16519()
{
    // event 1554_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1)) goto event_1554_73_end;
        if (not_always_1554_73 > loop_count) {
            not_always_1554_73 = loop_count + 2;
            goto event_1554_73_end;
        }
        not_always_1554_73 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
    }
    event_1554_73_end: ;
}
void Frames::event_func_16520()
{
    // event 1555_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1555_73_end;
        if (!(is_key_pressed_once(SDLK_q))) goto event_1555_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) != (9))) goto event_1555_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 9);
    }
    event_1555_73_end: ;
}
void Frames::event_func_16521()
{
    // event 1556_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1)) goto event_1556_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (9))) goto event_1556_73_end;
        if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1) {
            group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1 = true;
        }
    }
    event_1556_73_end: ;
}
void Frames::event_func_16522()
{
    // event 1557_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1)) goto event_1557_73_end;
        if (not_always_1557_73 > loop_count) {
            not_always_1557_73 = loop_count + 2;
            goto event_1557_73_end;
        }
        not_always_1557_73 = loop_count + 2;
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1557_73_end: ;
}
void Frames::event_func_16523()
{
    // event 1558_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1)) goto event_1558_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1558_73_end: ;
}
void Frames::event_func_16524()
{
    // event 1559_73
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_editor_1 && group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1)) goto event_1559_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1559_73_end;
            group_main_engine_level_specific_methods_academy_stages_editor_1 = false;
    
        if (!group_main_engine_level_specific_methods_academy_stages_select_a_stage_1) {
            group_main_engine_level_specific_methods_academy_stages_select_a_stage_1 = true;
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
        if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) {
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(hand_292_instances))->set_visible(false);
        objectchair_522_instances.clear_selection();
        for (ObjectIterator it(objectchair_522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(levelcardselect_3857_instances))->set_direction(0);
        {
            loop_delete_running = true;
            int times = int(1);
            loop_delete_index = 0;
            while (loop_delete_index < times) {
                loop_delete_73();
                if (!loop_delete_running) break;
                loop_delete_index++;
            }
        }
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Counter*)get_instance(mapselect_3863_instances))->set_visible(true);
        ((Active*)get_instance(return_111_instances))->set_visible(true);
        ((Counter*)get_instance(maptoload_3862_instances))->set_visible(false);
    }
    event_1559_73_end: ;
}
void Frames::event_func_16525()
{
    // event 1561_73
    {
        if (!(group_main_engine_1)) goto event_1561_73_end;
        if (!((((Active*)get_instance(hand_292_instances))->alterables->values.get(3)) > (0))) goto event_1561_73_end;
        {
            loop_create_running = true;
            int times = int(1);
            loop_create_index = 0;
            while (loop_create_index < times) {
                loop_create_73();
                if (!loop_create_running) break;
                loop_create_index++;
            }
        }
    }
    event_1561_73_end: ;
}
void Frames::event_func_16526()
{
    // event 1623_73
    {
        if (!(group_main_engine_1)) goto event_1623_73_end;
        ((Active*)get_instance(objectbasketball_3856_instances))->set_y(((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.get(2)+((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.get(0));
    }
    event_1623_73_end: ;
}
void Frames::event_func_16527()
{
    // event 1624_73
    {
        if (!(group_main_engine_1)) goto event_1624_73_end;
        if (((Active*)get_instance(objectbasketball_3856_instances))->test_animation(7)) goto event_1624_73_end;
        ((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.add(0, ((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.get(1));
        ((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.set(1, get_min(((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.get(1)+0.4, 12));
    }
    event_1624_73_end: ;
}
void Frames::event_func_16528()
{
    // event 1625_73
    {
        if (!(group_main_engine_1)) goto event_1625_73_end;
        if (((Active*)get_instance(objectbasketball_3856_instances))->test_animation(7)) goto event_1625_73_end;
        if (!((((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.get(0)) >= (0))) goto event_1625_73_end;
        ((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(objectbasketball_3856_instances))->force_animation(7);
        ((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.set(1, -5);
    }
    event_1625_73_end: ;
}
void Frames::event_func_16529()
{
    // event 1627_73
    {
        if (!(group_main_engine_1)) goto event_1627_73_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 7)) == (0))) goto event_1627_73_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(8, 1)) >= (18))) goto event_1627_73_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 7);
    }
    event_1627_73_end: ;
}
void Frames::event_func_16530()
{
    // event 1628_73
    {
        if (!(group_main_engine_1)) goto event_1628_73_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 8)) == (0))) goto event_1628_73_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(10, 1)) >= (18))) goto event_1628_73_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 8);
    }
    event_1628_73_end: ;
}
void Frames::event_func_16531()
{
    // event 1629_73
    {
        if (!(group_main_engine_1)) goto event_1629_73_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 9)) == (0))) goto event_1629_73_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(11, 1)) >= (18))) goto event_1629_73_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 9);
    }
    event_1629_73_end: ;
}
void Frames::event_func_16532()
{
    // event 1666_73
    {
        if (!(group_main_engine_1)) goto event_1666_73_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1666_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1666_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (23))) goto event_1666_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_1666_73_end;
        if (not_always_1666_73 > loop_count) {
            not_always_1666_73 = loop_count + 2;
            goto event_1666_73_end;
        }
        not_always_1666_73 = loop_count + 2;
        FrameObject * single_instance_1666_73_0; single_instance_1666_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playercharactersensor_383_instances));
            {
                int x_off; x_off = 0;
                int y_off; y_off = 13;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + x_off, parent->y + y_off), parent->layer);
                if (single_instance_1666_73_0 == NULL)
                    single_instance_1666_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1666_73_0))->get_movement()->set_speed(4);
        ((Active*)((Active*)single_instance_1666_73_0))->set_direction(pick_random(3, 8, 9, 10));
    }
    event_1666_73_end: ;
}
void Frames::event_func_16533()
{
    // event 1667_73
    {
        if (!(group_main_engine_1)) goto event_1667_73_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1667_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1667_73_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (23))) goto event_1667_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playeractionvaluesb_388_instances.has_selection()) goto event_1667_73_end;
        if (not_always_1667_73 > loop_count) {
            not_always_1667_73 = loop_count + 2;
            goto event_1667_73_end;
        }
        not_always_1667_73 = loop_count + 2;
        FrameObject * single_instance_1667_73_0; single_instance_1667_73_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playercharactersensor_383_instances));
            {
                int x_off; x_off = 0;
                int y_off; y_off = 13;
                transform_pos(x_off, y_off, parent);
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + x_off, parent->y + y_off), parent->layer);
                if (single_instance_1667_73_0 == NULL)
                    single_instance_1667_73_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1667_73_0))->get_movement()->set_speed(4);
        ((Active*)((Active*)single_instance_1667_73_0))->set_direction(pick_random(3, 6, 7, 8));
    }
    event_1667_73_end: ;
}
void Frames::event_func_16534()
{
    // event 1782_73
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1782_73_end;
        if (!((global_values->get(4)) != (0))) goto event_1782_73_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(0, get_min(((Active*)*it)->alterables->values.get(1)*3, 128)));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1782_73_end: ;
}
void Frames::event_func_16535()
{
    // event 1783_73
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1783_73_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1783_73_end;
        if (!((global_values->get(4)) != (0))) goto event_1783_73_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_academy_stages_select_a_stage_1) {
            group_main_engine_level_specific_methods_academy_stages_select_a_stage_1 = true;
        }
        ((Active*)get_instance(levelcardselect_3857_instances))->set_visible(true);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 45);
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(return_111_instances))->set_visible(true);
    }
    event_1783_73_end: ;
}
void Frames::event_func_16536()
{
    // event 1826_73
    {
        if (group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_begin_stage_1) goto event_1826_73_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_academy_stages_during_stage_1) goto event_1826_73_end;
        if (group_pause_1) goto event_1826_73_end;
        ((Active*)get_instance(guitimer_564_instances))->set_visible(false);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_visible(false);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_visible(false);
        ((Counter*)get_instance(guitimers_362_instances))->set_visible(false);
        ((Counter*)get_instance(guitimers2_363_instances))->set_visible(false);
        ((Counter*)get_instance(guitimerm_364_instances))->set_visible(false);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(false);
    }
    event_1826_73_end: ;
}
void Frames::event_func_16537()
{
    // event 1827_73
    {
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(23)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_1827_73_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->get_x()-frame_left());
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y()-frame_top());
        }
    }
    event_1827_73_end: ;
}
void Frames::event_func_16538()
{
    // event 1828_73
    {
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_1828_73_end;
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+((Active*)*it)->alterables->values.get(23)+cos_deg(((Active*)*it)->alterables->values.get(25)*200)*((Active*)*it)->alterables->values.get(25));
            ((Active*)*it)->set_y(frame_top()+((Active*)*it)->alterables->values.get(24)+sin_deg(((Active*)*it)->alterables->values.get(25)*200)*((Active*)*it)->alterables->values.get(25)*0.5);
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25)-0.4, 0));
        }
    }
    event_1828_73_end: ;
}
void Frames::event_func_16539()
{
    // event 1829_73
    {
        if (!(group_pause_1)) goto event_1829_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_1829_73_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1829_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_1829_73_end;
        objecttarget_367_instances.clear_selection();
        for (ObjectIterator it(objecttarget_367_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        gimmickspikechain1_3844_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechain1_3844_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 0);
        layers[3-1].destroy_backgrounds();
        laddertop_357_instances.clear_selection();
        for (ObjectIterator it(laddertop_357_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
        ((Active*)get_instance(levelcardready_3859_instances))->set_direction(0);
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        levelmovingplatform2_940_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform2_940_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelmovingplatform1_3840_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_3840_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectspiketrap_3835_instances.clear_selection();
        for (ObjectIterator it(objectspiketrap_3835_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile1_3799_instances.clear_selection();
        for (ObjectIterator it(customtile1_3799_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile2_3800_instances.clear_selection();
        for (ObjectIterator it(customtile2_3800_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile3_3801_instances.clear_selection();
        for (ObjectIterator it(customtile3_3801_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile4_3802_instances.clear_selection();
        for (ObjectIterator it(customtile4_3802_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile5_3803_instances.clear_selection();
        for (ObjectIterator it(customtile5_3803_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile6_3804_instances.clear_selection();
        for (ObjectIterator it(customtile6_3804_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile7_3805_instances.clear_selection();
        for (ObjectIterator it(customtile7_3805_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile8_3806_instances.clear_selection();
        for (ObjectIterator it(customtile8_3806_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile9_3807_instances.clear_selection();
        for (ObjectIterator it(customtile9_3807_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile11_3809_instances.clear_selection();
        for (ObjectIterator it(customtile11_3809_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile10_3808_instances.clear_selection();
        for (ObjectIterator it(customtile10_3808_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile12_3810_instances.clear_selection();
        for (ObjectIterator it(customtile12_3810_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile13_3811_instances.clear_selection();
        for (ObjectIterator it(customtile13_3811_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile14_3812_instances.clear_selection();
        for (ObjectIterator it(customtile14_3812_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile15_3813_instances.clear_selection();
        for (ObjectIterator it(customtile15_3813_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile16_3814_instances.clear_selection();
        for (ObjectIterator it(customtile16_3814_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile17_3815_instances.clear_selection();
        for (ObjectIterator it(customtile17_3815_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile18_3816_instances.clear_selection();
        for (ObjectIterator it(customtile18_3816_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile19_3817_instances.clear_selection();
        for (ObjectIterator it(customtile19_3817_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile20_3818_instances.clear_selection();
        for (ObjectIterator it(customtile20_3818_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile21_3819_instances.clear_selection();
        for (ObjectIterator it(customtile21_3819_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile22_3820_instances.clear_selection();
        for (ObjectIterator it(customtile22_3820_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile23_3821_instances.clear_selection();
        for (ObjectIterator it(customtile23_3821_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile24_3822_instances.clear_selection();
        for (ObjectIterator it(customtile24_3822_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile26_3824_instances.clear_selection();
        for (ObjectIterator it(customtile26_3824_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile25_3823_instances.clear_selection();
        for (ObjectIterator it(customtile25_3823_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile27_3825_instances.clear_selection();
        for (ObjectIterator it(customtile27_3825_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile29_3837_instances.clear_selection();
        for (ObjectIterator it(customtile29_3837_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        customtile28_3826_instances.clear_selection();
        for (ObjectIterator it(customtile28_3826_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        laddertopmaker_3842_instances.clear_selection();
        for (ObjectIterator it(laddertopmaker_3842_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        laddermaker_3828_instances.clear_selection();
        for (ObjectIterator it(laddermaker_3828_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectspiketrapmask_3836_instances.clear_selection();
        for (ObjectIterator it(objectspiketrapmask_3836_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectplatformmaker1_3838_instances.clear_selection();
        for (ObjectIterator it(objectplatformmaker1_3838_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectplatformmaker2_3839_instances.clear_selection();
        for (ObjectIterator it(objectplatformmaker2_3839_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        gimmickspikechainmaker_3843_instances.clear_selection();
        for (ObjectIterator it(gimmickspikechainmaker_3843_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        gimmickhangingidlebar_3827_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingidlebar_3827_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        startlocationmaker_3830_instances.clear_selection();
        for (ObjectIterator it(startlocationmaker_3830_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objecttargetmaker_3829_instances.clear_selection();
        for (ObjectIterator it(objecttargetmaker_3829_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectmonitormaker_3831_instances.clear_selection();
        for (ObjectIterator it(objectmonitormaker_3831_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        objectbombmaker_3832_instances.clear_selection();
        for (ObjectIterator it(objectbombmaker_3832_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringupleft_432_instances.clear_selection();
        for (ObjectIterator it(yellowspringupleft_432_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringupright_433_instances.clear_selection();
        for (ObjectIterator it(yellowspringupright_433_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringdown_437_instances.clear_selection();
        for (ObjectIterator it(yellowspringdown_437_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringright_435_instances.clear_selection();
        for (ObjectIterator it(yellowspringright_435_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringleft_436_instances.clear_selection();
        for (ObjectIterator it(yellowspringleft_436_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        yellowspringup_434_instances.clear_selection();
        for (ObjectIterator it(yellowspringup_434_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringupright_438_instances.clear_selection();
        for (ObjectIterator it(redspringupright_438_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringupleft_439_instances.clear_selection();
        for (ObjectIterator it(redspringupleft_439_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringdown_443_instances.clear_selection();
        for (ObjectIterator it(redspringdown_443_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringright_441_instances.clear_selection();
        for (ObjectIterator it(redspringright_441_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringleft_442_instances.clear_selection();
        for (ObjectIterator it(redspringleft_442_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        redspringup_440_instances.clear_selection();
        for (ObjectIterator it(redspringup_440_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspikesup_558_instances.clear_selection();
        for (ObjectIterator it(hazardspikesup_558_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspikesdown_559_instances.clear_selection();
        for (ObjectIterator it(hazardspikesdown_559_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspikesleft_560_instances.clear_selection();
        for (ObjectIterator it(hazardspikesleft_560_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        hazardspikesright_561_instances.clear_selection();
        for (ObjectIterator it(hazardspikesright_561_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        
        if (!group_main_engine_level_specific_methods_academy_stages_load_stage_1) {
            group_main_engine_level_specific_methods_academy_stages_load_stage_1 = true;
        }
            group_main_engine_level_specific_methods_academy_stages_during_stage_1 = false;
    
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_73();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        global_values->set(3, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_1829_73_end: ;
}
void Frames::event_func_16540()
{
    // event 1830_73
    {
        if (!(group_pause_1)) goto event_1830_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1830_73_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1830_73_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1830_73_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1830_73_end;
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
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y());
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
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
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
    }
    event_1830_73_end: ;
}
void Frames::event_func_16541()
{
    // event 1831_73
    bool or_result_1831_73 = false;
    bool or_temp_result_1831_73_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1831_73_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1831_73_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1831_73_0_end;
        or_result_1831_73 = true;
        or_temp_result_1831_73_0 = true;
    }
    or_event_1831_73_0_end: ;
    // event 1831_73
    bool or_temp_result_1831_73_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1831_73_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1831_73_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1831_73_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1831_73_1_end;
        or_result_1831_73 = true;
        or_temp_result_1831_73_1 = true;
        or_event_1831_73_1_end: ;
        if (!or_result_1831_73) goto or_final_or_event_1831_73_1_end;
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
        effectsconfetti_2890_instances.clear_selection();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        for (ObjectIterator it(effectsconfetti_2890_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
    }
    or_final_or_event_1831_73_1_end: ;
}
void Frames::event_func_16542()
{
    // event 1833_73
    {
        if (!(group_pause_1)) goto event_1833_73_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1833_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(9)) == (1))) goto event_1833_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) < (2))) goto event_1833_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, ((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)+1);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y()+((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)*24);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1833_73_end: ;
}
void Frames::event_func_16543()
{
    // event 1834_73
    {
        if (!(group_pause_1)) goto event_1834_73_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1834_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(8)) == (1))) goto event_1834_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) > (0))) goto event_1834_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) < (3))) goto event_1834_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, ((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)-1);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y()+((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)*24);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
    }
    event_1834_73_end: ;
}
void Frames::event_func_16544()
{
    // event 1835_73
    {
        if (!(group_pause_1)) goto event_1835_73_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_1835_73_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1835_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (2))) goto event_1835_73_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 3);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 6);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        media.resume_samples();
    }
    event_1835_73_end: ;
}
void Frames::event_func_16545()
{
    // event 1836_73
    {
        if (!(group_pause_1)) goto event_1836_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_1836_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x()+32, frame_left()));
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        fadeedge_57_instances.clear_selection();
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_x()+global_values->get(16)+120);
            ((Active*)*it)->set_y(((Active*)get_single(levelcardfade2_24_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1836_73_end: ;
}
void Frames::event_func_16546()
{
    // event 1837_73
    {
        if (!(group_pause_1)) goto event_1837_73_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_1837_73_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1837_73_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
        next_frame = (index+1-0)-1 + 0;    
    
    }
    event_1837_73_end: ;
}
void Frames::handle_frame_74_events()
{
    test_collisions_73();
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
    event_func_16487();
    event_func_16488();
    event_func_16489();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
    event_func_16150();
    event_func_16151();
    event_func_16152();
    event_func_16153();
    event_func_16154();
    event_func_1359();
    event_func_1360();
    event_func_16155();
    event_func_16156();
    event_func_16157();
    event_func_16158();
    event_func_16159();
    event_func_1366();
    event_func_16160();
    event_func_16161();
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
    event_func_16162();
    event_func_16163();
    event_func_16164();
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
    event_func_16165();
    event_func_1403();
    event_func_16166();
    event_func_16167();
    event_func_16168();
    event_func_16169();
    event_func_16170();
    event_func_16171();
    event_func_16172();
    event_func_16173();
    event_func_16174();
    event_func_1413();
    event_func_1414();
    event_func_16175();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_16176();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_16177();
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
    event_func_16178();
    event_func_1450();
    event_func_16179();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_16180();
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
    event_func_16181();
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
    event_func_16182();
    event_func_1541();
    event_func_1542();
    event_func_16183();
    event_func_16184();
    event_func_16185();
    event_func_16186();
    event_func_16187();
    event_func_16188();
    event_func_16189();
    event_func_1550();
    event_func_1551();
    event_func_16190();
    event_func_16191();
    event_func_16192();
    event_func_1555();
    event_func_1556();
    event_func_16193();
    event_func_16194();
    event_func_16195();
    event_func_16196();
    event_func_1561();
    event_func_1562();
    event_func_16197();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_16198();
    event_func_1569();
    event_func_1570();
    event_func_16199();
    event_func_16200();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_16201();
    event_func_1577();
    event_func_16202();
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
    event_func_16203();
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
    event_func_16204();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_16205();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_16206();
    event_func_1614();
    event_func_16207();
    event_func_1616();
    event_func_1617();
    event_func_16208();
    event_func_16209();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_16210();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_16211();
    event_func_16212();
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
    event_func_16213();
    event_func_16214();
    event_func_1644();
    event_func_16215();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
    event_func_1652();
    event_func_16216();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_16217();
    event_func_1657();
    event_func_16218();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_16219();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_16220();
    event_func_16221();
    event_func_16222();
    event_func_16223();
    event_func_16224();
    event_func_16225();
    event_func_16226();
    event_func_16227();
    event_func_16228();
    event_func_16229();
    event_func_1674();
    event_func_1675();
    event_func_16230();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
    event_func_16231();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_16232();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_16233();
    event_func_1693();
    event_func_16234();
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
    event_func_6649();
    event_func_6650();
    event_func_6651();
    event_func_2774();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_16235();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_16236();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_16237();
    event_func_1720();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_16238();
    event_func_1724();
    event_func_1725();
    event_func_16239();
    event_func_16240();
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
    event_func_16241();
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
    event_func_16242();
    event_func_16243();
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
    event_func_16244();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_16245();
    event_func_1755();
    event_func_16246();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_1761();
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
    event_func_16247();
    event_func_1776();
    event_func_1777();
    event_func_1778();
    event_func_16248();
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
    event_func_16249();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_16250();
    event_func_16251();
    event_func_16252();
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
    event_func_16253();
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
    event_func_16254();
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
    event_func_16255();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_16256();
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
    event_func_1905();
    event_func_1906();
    event_func_16257();
    event_func_1908();
    event_func_1909();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_16258();
    event_func_1920();
    event_func_1921();
    event_func_1924();
    event_func_1925();
    event_func_16259();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_16260();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_16261();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_16262();
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
    event_func_16263();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_16264();
    event_func_16265();
    event_func_16266();
    event_func_16267();
    event_func_16268();
    event_func_16269();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_16270();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_16271();
    event_func_1973();
    event_func_16272();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_16273();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_16274();
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
    event_func_1997();
    event_func_1998();
    event_func_1999();
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
    event_func_2024();
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
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2042();
    event_func_2043();
    event_func_16275();
    event_func_16276();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_16277();
    event_func_16278();
    event_func_2049();
    event_func_2050();
    event_func_2052();
    event_func_16279();
    event_func_2054();
    event_func_2055();
    event_func_16280();
    event_func_16281();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_16282();
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
    event_func_16283();
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
    event_func_16284();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_16058();
    event_func_2147();
    event_func_2148();
    event_func_16285();
    event_func_16286();
    event_func_16287();
    event_func_16288();
    event_func_16289();
    event_func_16290();
    event_func_16291();
    event_func_2156();
    event_func_16292();
    event_func_16293();
    event_func_16294();
    event_func_16295();
    event_func_16296();
    event_func_16297();
    event_func_16298();
    event_func_16299();
    event_func_16300();
    event_func_16301();
    event_func_16302();
    event_func_16303();
    event_func_16304();
    event_func_16305();
    event_func_16306();
    event_func_16307();
    event_func_16308();
    event_func_16309();
    event_func_16310();
    event_func_16311();
    event_func_16312();
    event_func_16313();
    event_func_16314();
    event_func_16315();
    event_func_16316();
    event_func_16317();
    event_func_16318();
    event_func_16319();
    event_func_16320();
    event_func_16321();
    event_func_16322();
    event_func_16323();
    event_func_16324();
    event_func_16325();
    event_func_16326();
    event_func_16327();
    event_func_16328();
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
    event_func_16329();
    event_func_16330();
    event_func_16331();
    event_func_16332();
    event_func_16333();
    event_func_16334();
    event_func_16335();
    event_func_16336();
    event_func_16337();
    event_func_16338();
    event_func_16339();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_16340();
    event_func_16341();
    event_func_2234();
    event_func_16342();
    event_func_16343();
    event_func_2237();
    event_func_16344();
    event_func_2239();
    event_func_16345();
    event_func_16346();
    event_func_16347();
    event_func_16348();
    event_func_16349();
    event_func_16350();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_16351();
    event_func_2250();
    event_func_16352();
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
    event_func_16353();
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
    event_func_16354();
    event_func_16355();
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
    event_func_16356();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_16357();
    event_func_2435();
    event_func_16358();
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
    event_func_16359();
    event_func_16360();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_16361();
    event_func_2979();
    event_func_16362();
    event_func_16363();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_16364();
    event_func_16365();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_16366();
    event_func_4378();
    event_func_16367();
    event_func_16368();
    event_func_16369();
    event_func_16370();
    event_func_16371();
    event_func_4383();
    event_func_2988();
    event_func_2989();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_3867();
    event_func_2491();
    event_func_16372();
    event_func_16373();
    event_func_16374();
    if (!group_main_engine_level_specific_methods_academy_stages_select_a_stage_1) goto group_main_engine_level_specific_methods_academy_stages_select_a_stage_1_end;
    event_func_16375();
    event_func_16376();
    event_func_16377();
    event_func_16378();
    event_func_16379();
    event_func_16380();
    event_func_16381();
    event_func_16382();
    event_func_16383();
    event_func_16384();
    event_func_16385();
    event_func_16386();
    event_func_16387();
    event_func_16388();
    event_func_16389();
    event_func_16390();
    event_func_16391();
    event_func_16392();
    event_func_16393();
    event_func_16394();
    event_func_16395();
    group_main_engine_level_specific_methods_academy_stages_select_a_stage_1_end: ;
    if (!group_main_engine_level_specific_methods_academy_stages_load_stage_1) goto group_main_engine_level_specific_methods_academy_stages_load_stage_1_end;
    event_func_16396();
    event_func_16397();
    event_func_16398();
    event_func_16399();
    event_func_16400();
    event_func_16401();
    event_func_16402();
    event_func_16403();
    event_func_16404();
    event_func_16405();
    event_func_16406();
    event_func_16407();
    event_func_16408();
    event_func_16409();
    group_main_engine_level_specific_methods_academy_stages_load_stage_1_end: ;
    if (!group_main_engine_level_specific_methods_academy_stages_begin_stage_1) goto group_main_engine_level_specific_methods_academy_stages_begin_stage_1_end;
    event_func_16410();
    event_func_16411();
    event_func_16412();
    event_func_16413();
    event_func_16414();
    event_func_16415();
    event_func_16416();
    event_func_16417();
    event_func_16418();
    event_func_16419();
    event_func_16420();
    group_main_engine_level_specific_methods_academy_stages_begin_stage_1_end: ;
    if (!group_main_engine_level_specific_methods_academy_stages_during_stage_1) goto group_main_engine_level_specific_methods_academy_stages_during_stage_1_end;
    event_func_16421();
    event_func_16422();
    event_func_16423();
    event_func_16424();
    event_func_16425();
    event_func_16426();
    event_func_16427();
    event_func_16428();
    event_func_16429();
    event_func_16430();
    event_func_16431();
    event_func_16432();
    event_func_16433();
    event_func_16434();
    event_func_16435();
    event_func_16436();
    event_func_16437();
    event_func_16438();
    event_func_16439();
    group_main_engine_level_specific_methods_academy_stages_during_stage_1_end: ;
    event_func_16440();
    event_func_16441();
    if (!group_main_engine_level_specific_methods_academy_stages_editor_1) goto group_main_engine_level_specific_methods_academy_stages_editor_1_end;
    event_func_16442();
    event_func_16443();
    event_func_16444();
    event_func_16445();
    event_func_16446();
    event_func_16447();
    event_func_16448();
    if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1) goto group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1_end;
    event_func_16449();
    event_func_16450();
    event_func_16451();
    event_func_16452();
    event_func_16453();
    event_func_16454();
    event_func_16455();
    event_func_16456();
    event_func_16457();
    event_func_16458();
    event_func_16459();
    event_func_16460();
    event_func_16461();
    event_func_16462();
    event_func_16463();
    event_func_16464();
    event_func_16465();
    event_func_16466();
    event_func_16467();
    group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1_end: ;
    event_func_16468();
    if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1) goto group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1_end;
    event_func_16469();
    event_func_16470();
    event_func_16471();
    event_func_16472();
    event_func_16473();
    event_func_16474();
    event_func_16475();
    event_func_16476();
    event_func_16477();
    event_func_16478();
    event_func_16479();
    event_func_16480();
    event_func_16481();
    event_func_16482();
    event_func_16483();
    event_func_16484();
    event_func_16485();
    event_func_16486();
    event_func_16490();
    event_func_16491();
    event_func_16492();
    group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1_end: ;
    event_func_16493();
    if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1) goto group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1_end;
    event_func_16494();
    event_func_16495();
    event_func_16496();
    event_func_16497();
    event_func_16498();
    event_func_16499();
    event_func_16500();
    event_func_16501();
    event_func_16502();
    event_func_16503();
    event_func_16504();
    event_func_16505();
    event_func_16506();
    event_func_16507();
    group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1_end: ;
    event_func_16508();
    event_func_16509();
    event_func_16510();
    event_func_16511();
    if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1) goto group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1_end;
    event_func_16512();
    event_func_16513();
    group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1_end: ;
    event_func_16514();
    event_func_16515();
    if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1) goto group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1_end;
    event_func_16516();
    event_func_16517();
    event_func_16518();
    event_func_16519();
    group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1_end: ;
    event_func_16520();
    event_func_16521();
    if (!group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1) goto group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1_end;
    event_func_16522();
    event_func_16523();
    event_func_16524();
    group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1_end: ;
    group_main_engine_level_specific_methods_academy_stages_editor_1_end: ;
    event_func_16525();
    event_func_11837();
    event_func_11838();
    event_func_11839();
    event_func_16526();
    event_func_16527();
    event_func_16528();
    event_func_16529();
    event_func_16530();
    event_func_16531();
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
    event_func_16532();
    event_func_16533();
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
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_2576();
    event_func_2577();
    event_func_2578();
    event_func_2579();
    event_func_2580();
    event_func_2581();
    event_func_2582();
    event_func_2583();
    event_func_2584();
    event_func_2585();
    event_func_2586();
    event_func_2587();
    event_func_2588();
    event_func_2589();
    event_func_2590();
    event_func_2591();
    event_func_2592();
    event_func_2593();
    event_func_2594();
    event_func_2595();
    event_func_2596();
    event_func_2597();
    event_func_2598();
    event_func_2599();
    event_func_2600();
    event_func_2601();
    event_func_2602();
    event_func_2603();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    event_func_2605();
    event_func_2606();
    event_func_2607();
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
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_16534();
    event_func_16535();
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
    group_main_engine_1_end: ;
    event_func_16536();
    event_func_16537();
    event_func_16538();
    if (!group_pause_1) goto group_pause_1_end;
    event_func_16539();
    event_func_16540();
    event_func_16541();
    event_func_2644();
    event_func_16542();
    event_func_16543();
    event_func_16544();
    event_func_16545();
    event_func_16546();
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
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_74_pre_events()
{
}
void Frames::event_func_16547()
{
    // event 1_73
    {
        global_values->set(4, 1);
        set_lives(get_max(global_values->get(8), 3));
        global_values->set(12, 1);
        global_values->set(10, 0);
    }
    event_1_73_end: ;
}
void Frames::event_func_16548()
{
    // event 2_73
    {
        if (!(group_main_engine_1)) goto event_2_73_end;
        ((Active*)get_instance(guipause_453_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(crystal_456_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_action_x());
        ((Active*)get_instance(levelcardgameover_462_instances))->set_x(((Active*)get_instance(levelcardgameover_462_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        ((Active*)get_instance(levelcardselect_3857_instances))->set_x(((Active*)get_instance(levelcardselect_3857_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        inventory_3858_instances.clear_selection();
        for (ObjectIterator it(inventory_3858_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        }
        ((Active*)get_instance(levelcardready_3859_instances))->set_x(((Active*)get_instance(levelcardready_3859_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        ((Active*)get_instance(levelcardready2_3860_instances))->set_x(((Active*)get_instance(levelcardready2_3860_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        ((Counter*)get_instance(targetsleft_3861_instances))->set_x(((Counter*)get_instance(targetsleft_3861_instances))->get_x()+global_values->get(16));
        ((Counter*)get_instance(timerecordmin_219_instances))->set_x(((Counter*)get_instance(timerecordmin_219_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(timerecordsec_218_instances))->set_x(((Counter*)get_instance(timerecordsec_218_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_x(((Counter*)get_instance(timerecordmil_216_instances))->get_x()+global_values->get(16)*0.5);
        recordcolon2_209_instances.clear_selection();
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        ((Active*)get_instance(recordlabel_210_instances))->set_x(((Active*)get_instance(recordlabel_210_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(newrecord_3864_instances))->set_x(((Active*)get_instance(newrecord_3864_instances))->get_x()+global_values->get(16)*0.5);
        ((Counter*)get_instance(mapselect_3863_instances))->set_x(((Counter*)get_instance(mapselect_3863_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        mapicon_265_instances.clear_selection();
        for (ObjectIterator it(mapicon_265_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        }
        ((Active*)get_instance(return_111_instances))->set_x(((Active*)get_instance(return_111_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        ((Counter*)get_instance(guitimermilli_360_instances))->set_x(((Counter*)get_instance(guitimermilli_360_instances))->get_x()+(global_values->get(16)*0.5-150));
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_x(((Counter*)get_instance(guitimermilli2_361_instances))->get_x()+(global_values->get(16)*0.5-150));
        ((Counter*)get_instance(guitimers_362_instances))->set_x(((Counter*)get_instance(guitimers_362_instances))->get_x()+(global_values->get(16)*0.5-150));
        ((Counter*)get_instance(guitimers2_363_instances))->set_x(((Counter*)get_instance(guitimers2_363_instances))->get_x()+(global_values->get(16)*0.5-150));
        ((Counter*)get_instance(guitimerm_364_instances))->set_x(((Counter*)get_instance(guitimerm_364_instances))->get_x()+(global_values->get(16)*0.5-150));
        ((Counter*)get_instance(guitimerm2_365_instances))->set_x(((Counter*)get_instance(guitimerm2_365_instances))->get_x()+(global_values->get(16)*0.5-150));
        ((Active*)get_instance(guitimer_564_instances))->set_x(((Active*)get_instance(guitimer_564_instances))->get_x()+(global_values->get(16)*0.5-150));
        ((Counter*)get_instance(timerecordmin_219_instances))->set_visible(false);
        ((Active*)get_instance(recordlabel_210_instances))->set_visible(false);
        for (ObjectIterator it(recordcolon2_209_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Counter*)get_instance(timerecordsec_218_instances))->set_visible(false);
        ((Counter*)get_instance(timerecordmil_216_instances))->set_visible(false);
    }
    event_2_73_end: ;
}
void Frames::event_func_16549()
{
    // event 3_73
    {
        if (!(group_main_engine_1)) goto event_3_73_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 99);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(25, 0);
    }
    event_3_73_end: ;
}
void Frames::event_func_16550()
{
    // event 20_73
    {
        if (!(group_main_engine_1)) goto event_20_73_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.25);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.25);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.2);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.2);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.15);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.15);
    }
    event_20_73_end: ;
}
void Frames::event_func_16551()
{
    // event 30_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_30_73_end;
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, 0.96875);
        }
        ((Active*)get_instance(playersensorleft_390_instances))->alterables->values.set(0, -12);
        ((Active*)get_instance(playersensorleft_390_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.set(0, -13);
        ((Active*)get_instance(playersensorleftbig_391_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensorright_392_instances))->alterables->values.set(0, 12);
        ((Active*)get_instance(playersensorright_392_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.set(0, 13);
        ((Active*)get_instance(playersensorrightbig_393_instances))->alterables->values.set(1, -2);
        ((Active*)get_instance(playersensortop_394_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensortop_394_instances))->alterables->values.set(1, -12);
        ((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensortopbig_395_instances))->alterables->values.set(1, -13);
        ((Active*)get_instance(playersensorbottom_396_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorbottom_396_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorbottombig_397_instances))->alterables->values.set(1, 13);
        ((Active*)get_instance(playersensorslopes_398_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorslopes_398_instances))->alterables->values.set(1, 24);
        ((Active*)get_instance(playersensorplatform_399_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playersensorplatform_399_instances))->alterables->values.set(1, -5);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(0, -7);
        ((Active*)get_instance(playersensorleftangle_400_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(0, 7);
        ((Active*)get_instance(playersensorrightangle_401_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.set(0, -8);
        ((Active*)get_instance(playersensorleftedge_402_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.set(0, 8);
        ((Active*)get_instance(playersensorrightedge_403_instances))->alterables->values.set(1, 12);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->flags.disable(10);
    }
    event_30_73_end: ;
}
void Frames::event_func_16552()
{
    // event 34_73
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_34_73_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        playeractionvaluesa_387_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesa_387_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        ((Active*)get_instance(playerothers_123_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playergimmickactions_413_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playerinput_19_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playercharactersensor_383_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(player_389_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensortopbig_395_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensortop_394_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorbottombig_397_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorbottom_396_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorplatform_399_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleft_390_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorright_392_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorslopes_398_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftedge_402_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightedge_403_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorleftangle_400_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        ((Active*)get_instance(playersensorrightangle_401_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
        ((Active*)get_instance(playerreflect_447_instances))->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(playerstartingpoint_358_instances))->layer->index+1-1);
        }
    }
    event_34_73_end: ;
}
void Frames::event_func_16553()
{
    // event 1387_73
    {
        if (!(group_main_engine_1)) goto event_1387_73_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_1387_73_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1387_73_end: ;
}
void Frames::event_func_16554()
{
    // event 1395_73
    {
        if (!(group_main_engine_1)) goto event_1395_73_end;
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->download("./records.dat");
        ((ArrayObject*)get_instance(recorddata_34_instances))->load(get_app_drive()+get_app_dir()+str_records_dat_9);
    }
    event_1395_73_end: ;
}
void Frames::event_func_16555()
{
    // event 1622_73
    {
        if (!(group_main_engine_1)) goto event_1622_73_end;
        ((Active*)get_instance(objectbasketball_3856_instances))->alterables->values.set(2, ((Active*)get_instance(objectbasketball_3856_instances))->get_y());
    }
    event_1622_73_end: ;
}
void Frames::event_func_16556()
{
    // event 1781_73
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1781_73_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_73();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1781_73_end: ;
}
void Frames::on_frame_74_start_events()
{
    event_func_16547();
    event_func_16548();
    event_func_16549();
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
    event_func_16550();
    event_func_3269();
    event_func_16551();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_16552();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_2686();
    event_func_16553();
    event_func_16554();
    event_func_16555();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_16556();
    event_func_11365();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_74_init()
{
    index = 73;
    width = 1280;
    height = 640;
    virtual_width = 1280;
    virtual_height = 640;
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
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&objecttarget_367_instances, &gimmickspikechain1_3844_instances, NULL};
    qualifier_20.set(2, &qualifier_20_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&objectchair_522_instances, NULL};
    qualifier_22.set(1, &qualifier_22_instances[0]);
    static ObjectList* qualifier_29_instances[] = {&customtile8_3806_instances, &customtile9_3807_instances, &customtile28_3826_instances, &gimmickhangingidlebar_3827_instances, &laddermaker_3828_instances, &objecttargetmaker_3829_instances, &startlocationmaker_3830_instances, &objectmonitormaker_3831_instances, &objectbombmaker_3832_instances, &objectspiketrapmask_3836_instances, &customtile29_3837_instances, &objectplatformmaker1_3838_instances, &objectplatformmaker2_3839_instances, &laddertopmaker_3842_instances, &gimmickspikechainmaker_3843_instances, NULL};
    qualifier_29.set(15, &qualifier_29_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelmovingplatform1_3840_instances, &levelmovingplatform2_940_instances, NULL};
    qualifier_8.set(11, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesdown_559_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &levelmovingplatform1_3840_instances, &levelmovingplatform2_940_instances, NULL};
    qualifier_9.set(34, &qualifier_9_instances[0]);
    static ObjectList* qualifier_2_instances[] = {&targetsleft_3861_instances, &maptoload_3862_instances, &mapselect_3863_instances, NULL};
    qualifier_2.set(3, &qualifier_2_instances[0]);
    static ObjectList* qualifier_3_instances[] = {&mapicon_265_instances, NULL};
    qualifier_3.set(1, &qualifier_3_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece1_2_instances, NULL};
    qualifier_0.set(3, &qualifier_0_instances[0]);
    static ObjectList* qualifier_1_instances[] = {&levelcardready_3859_instances, &newrecord_3864_instances, &return_111_instances, NULL};
    qualifier_1.set(3, &qualifier_1_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &breakablerock_951_instances, &hazardspikesdown_559_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &customtile1_3799_instances, &customtile2_3800_instances, &customtile3_3801_instances, &customtile4_3802_instances, &customtile5_3803_instances, &customtile6_3804_instances, &customtile7_3805_instances, &customtile10_3808_instances, &customtile11_3809_instances, &customtile12_3810_instances, &customtile13_3811_instances, &customtile14_3812_instances, &customtile15_3813_instances, &customtile16_3814_instances, &customtile17_3815_instances, &customtile18_3816_instances, &customtile19_3817_instances, &customtile20_3818_instances, &customtile21_3819_instances, &customtile22_3820_instances, &customtile23_3821_instances, &customtile24_3822_instances, &customtile25_3823_instances, &customtile26_3824_instances, &customtile27_3825_instances, &objectspiketrap_3835_instances, NULL};
    qualifier_7.set(53, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(32, &qualifier_4_instances[0]);
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelmovingplatform1_3840_instances, &levelmovingplatform2_940_instances, NULL};
    qualifier_12.set(4, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelmovingplatform1_3840_instances, &levelmovingplatform2_940_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3796(0, 8), 0);
    add_background_object(create_levelparallaxpiece3_3797(0, 264), 0);
    add_background_object(create_levelparallaxpiece1_3798(0, 240), 0);
    add_background_object(create_housefloor_3845(0, 568), 2);
    add_background_object(create_housefloor2_3846(0, 584), 2);
    add_background_object(create_housefloor_3845(320, 568), 2);
    add_background_object(create_housefloor2_3846(320, 584), 2);
    add_background_object(create_housefloor_3845(640, 568), 2);
    add_background_object(create_housefloor2_3846(640, 584), 2);
    add_background_object(create_housefloor2_3846(960, 584), 2);
    add_background_object(create_housefloor3_3847(1280, 400), 2);
    add_background_object(create_housefloor_3845(960, 568), 2);
    add_background_object(create_housefloor3_3847(1280, 160), 2);
    add_background_object(create_housefloor3_3847(1280, -80), 2);
    add_background_object(create_housefloor2_3846(960, -56), 2);
    add_background_object(create_housefloor2_3846(640, -56), 2);
    add_background_object(create_housefloor2_3846(320, -56), 2);
    add_background_object(create_housefloor2_3846(0, -56), 2);
    add_background_object(create_housefloor3_3847(-32, 400), 2);
    add_background_object(create_housefloor3_3847(-32, 160), 2);
    add_background_object(create_housefloor3_3847(-32, -80), 2);
    add_object(create_gimmickhangingidlebar_3827(-80, 688), 2);
    add_object(create_objectchair_3848(45, 560), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(12984, 85), 2);
    add_object(create_playerstartingpoint_358(53, 565), 2);
    add_object(create_link_352(-176, -192), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_laddertop_357(-308, 807), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_breakablerock_951(-328, 736), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 184), 2);
    add_object(create_objectjumppad_530(-472, 304), 2);
    add_object(create_startlocationmaker_3830(624, 552), 2);
    add_object(create_objectchair_3848(285, 560), 2);
    add_object(create_highlighter_3852(-152, 528), 2);
    add_object(create_hand_3853(136, 498), 2);
    add_object(create_objectinfo_3854(-135, 568), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_ini_3855(-80, 448), 2);
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
    add_object(create_playerskinmillatail_381(-83, 273), 5);
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
    add_object(create_hazardspikesup_3118(-208, 392), 5);
    add_object(create_hazardspikesdown_3106(-168, 392), 5);
    add_object(create_hazardspikesleft_3119(-128, 392), 5);
    add_object(create_hazardspikesright_3120(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-153, 273), 5);
    add_object(create_playerskinsash_418(-155, 275), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
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
    add_object(create_playerskincaroltail_444(-66, 273), 5);
    add_object(create_playerskincarol_445(-84, 273), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerskinmilla_446(-99, 273), 5);
    add_object(create_playerskintorquearm_449(-112, 232), 5);
    add_object(create_playerskintorque_450(-60, 273), 5);
    add_object(create_playerreflect_447(-120, 304), 5);
    add_object(create_objectbasketball_3856(-116, 740), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-144, 448), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_mapdata2_32(-432, 240), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(296, -128), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(193, 35), 6);
    add_object(create_guitimermilli2_361(183, 35), 6);
    add_object(create_guitimers_362(167, 35), 6);
    add_object(create_guitimers2_363(157, 35), 6);
    add_object(create_guitimerm_364(141, 35), 6);
    add_object(create_guitimerm2_365(131, 35), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(247, -140), 6);
    add_object(create_guilives_454(236, -133), 6);
    add_object(create_guipause_453(0, 100), 6);
    add_object(create_guikeystone_455(280, -128), 6);
    add_object(create_guikeystone_455(264, -128), 6);
    add_object(create_guikeystone_455(248, -128), 6);
    add_object(create_guikeystone_455(232, -128), 6);
    add_object(create_levelcardselect_3857(0, 0), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_inventory_3858(80, 200), 6);
    add_object(create_inventory_3858(40, 200), 6);
    add_object(create_inventory_3858(0, 200), 6);
    add_object(create_inventory_3858(-40, 200), 6);
    add_object(create_inventory_3858(-80, 200), 6);
    add_object(create_inventory_3858(80, 120), 6);
    add_object(create_inventory_3858(40, 120), 6);
    add_object(create_inventory_3858(0, 120), 6);
    add_object(create_inventory_3858(-40, 120), 6);
    add_object(create_inventory_3858(-80, 120), 6);
    add_object(create_inventory_3858(80, 40), 6);
    add_object(create_inventory_3858(40, 40), 6);
    add_object(create_inventory_3858(0, 40), 6);
    add_object(create_inventory_3858(-40, 40), 6);
    add_object(create_inventory_3858(-80, 40), 6);
    add_object(create_levelcardready_3859(0, 184), 6);
    add_object(create_levelcardready2_3860(-59, 195), 6);
    add_object(create_targetsleft_3861(-136, 8), 6);
    add_object(create_maptoload_3862(254, 24), 6);
    add_object(create_mapselect_3863(57, 68), 6);
    add_object(create_newrecord_3864(-3, 18), 6);
    add_object(create_return_3865(-1, 207), 6);
    add_object(create_mapicon_3866(3, 164), 6);
    add_object(create_mapicon_3866(3, 128), 6);
    add_object(create_mapicon_3866(3, 92), 6);
    add_object(create_mapicon_3866(-53, 164), 6);
    add_object(create_mapicon_3866(-53, 128), 6);
    add_object(create_mapicon_3866(-53, 92), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guitimer_564(100, 16), 6);
    add_object(create_recordcolon2_209(7, 74), 6);
    add_object(create_recordcolon2_209(31, 74), 6);
    add_object(create_recordlabel_210(-65, 74), 6);
    add_object(create_timerecordmil_216(59, 85), 6);
    add_object(create_timerecordsec_218(35, 85), 6);
    add_object(create_timerecordmin_219(11, 85), 6);
    add_object(create_sarassteampluginfreedomplanet_26(-232, -88), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
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
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_save_running = false;
    loop_save_index = 0;
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
    loop_create_running = false;
    loop_create_index = 0;
    loop_load_running = false;
    loop_load_index = 0;
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
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_clear_running = false;
    loop_clear_index = 0;
    loop_delete_running = false;
    loop_delete_index = 0;
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
    loop_sc_running = false;
    loop_sc_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_73, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_73, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_73, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_73, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_73, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_73, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_73, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_73, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_73, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_73, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_73, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_73, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_73, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_73, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_73, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_73, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_73, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_73, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_73, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_73, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_73, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_73, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_73, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_73, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_73, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_73, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_73, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_73, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_73, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_73, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_73, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_73, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_73, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_73, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_73, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_73, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_73, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_73, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_73, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_73, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_73, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_1024_73 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1529_13 = loop_count;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1550_16 = loop_count;
    not_always_1501_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    not_always_1021_73 = loop_count;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_43_73 = loop_count;
    not_always_1417_73 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    once_condition_50_73 = false;
    not_always_1438_73 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_1500_73 = loop_count;
    not_always_1472_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1484_73 = loop_count;
    not_always_585_13 = loop_count;
    not_always_1439_73 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_level_specific_methods_academy_stages_during_stage_1 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1023_73 = loop_count;
    not_always_1499_73 = loop_count;
    not_always_100_0 = loop_count;
    not_always_1465_73 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_1020_73 = loop_count;
    not_always_121_0 = loop_count;
    not_always_54_73 = loop_count;
    not_always_173_8 = loop_count;
    not_always_600_13 = loop_count;
    not_always_1544_73 = loop_count;
    not_always_65_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1550_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_47_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    not_always_1466_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    group_main_engine_level_specific_methods_academy_stages_editor_editor_exit_1 = false;
    not_always_130_0 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_1523_73 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_98_0 = loop_count;
    group_main_engine_level_specific_methods_academy_stages_editor_editor_save_map_1 = false;
    once_condition_63_0 = false;
    group_main_engine_level_specific_methods_academy_stages_load_stage_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1464_73 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_1418_73 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    not_always_1022_73 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_101_0 = loop_count;
    group_main_engine_level_specific_methods_academy_stages_editor_editor_grab_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_40_73 = loop_count;
    not_always_1455_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1396_73 = loop_count;
    once_condition_49_73 = false;
    once_condition_48_73 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1458_13 = loop_count;
    not_always_1547_73 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_1422_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_66_0 = loop_count;
    not_always_675_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_67_73 = loop_count;
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_57_13 = loop_count;
    not_always_450_13 = loop_count;
    group_main_engine_level_specific_methods_academy_stages_editor_editor_object_selection_1 = false;
    group_main_engine_level_specific_methods_academy_stages_editor_1 = false;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_53_73 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_1666_73 = loop_count;
    not_always_1548_73 = loop_count;
    group_mac_controls_1 = false;
    not_always_1554_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_42_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_41_73 = loop_count;
    not_always_553_13 = loop_count;
    not_always_1667_73 = loop_count;
    not_always_140_0 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_1498_73 = loop_count;
    not_always_1450_13 = loop_count;
    not_always_66_73 = loop_count;
    not_always_817_73 = loop_count;
    group_pause_1 = false;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_44_73 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1458_73 = loop_count;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    once_condition_51_73 = false;
    once_condition_63_13 = false;
    not_always_1437_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_2136_46 = loop_count;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_1039_13 = loop_count;
    group_main_engine_level_specific_methods_academy_stages_select_a_stage_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    not_always_809_13 = loop_count;
    not_always_103_0 = loop_count;
    not_always_816_73 = loop_count;
    not_always_1025_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    group_main_engine_level_specific_methods_academy_stages_editor_editor_load_map_1 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_96_0 = loop_count;
    not_always_744_13 = loop_count;
    not_always_2137_46 = loop_count;
    not_always_1557_73 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_1460_73 = loop_count;
    not_always_59_13 = loop_count;
    group_main_engine_level_specific_methods_academy_stages_begin_stage_1 = false;
    once_condition_37_13 = false;
    not_always_447_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1541_73 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    group_main_engine_level_specific_methods_academy_stages_editor_editor_look_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_collect_item_74()
{
    event_func_1183();
    event_func_16057();
    event_func_1186();
    event_func_1187();
    event_func_1188();
}
void Frames::loop_wrapper_sound_kick1_74(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_74(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_74(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
