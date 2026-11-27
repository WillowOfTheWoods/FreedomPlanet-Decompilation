#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_18902()
{
    // event 1778_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1778_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1778_82_end;
        if (!((global_values->get(1)) == (0))) goto event_1778_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1778_82_end: ;
}
void Frames::event_func_18903()
{
    // event 1779_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1779_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1779_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (160))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1779_82_end;
        if (!((global_values->get(1)) == (0))) goto event_1779_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(gongshield_633_instances))->set_layer(2-1);
        ((Active*)get_instance(npcgong_634_instances))->set_layer(2-1);
        {
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(3895, 1489);
            pos_end_1779_82_0: ;
        }
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 4393);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 240);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(72);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(4370);
            ((Active*)*it)->set_y(281);
        }
        media.stop_channel(25-1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(4236);
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(281);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(18);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1779_82_end: ;
}
void Frames::event_func_18904()
{
    // event 1780_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1780_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1780_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
    }
    event_1780_82_end: ;
}
void Frames::event_func_18905()
{
    // event 1781_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1781_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1781_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1781_82_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1781_82_end: ;
}
void Frames::event_func_18906()
{
    // event 1782_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1782_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1782_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (64))) goto event_1782_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) != (65))) goto event_1782_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (70))) goto event_1782_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1782_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1782_82_end: ;
}
void Frames::event_func_18907()
{
    // event 1783_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1783_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1783_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (65))) goto event_1783_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1783_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1783_82_end: ;
}
void Frames::event_func_18908()
{
    // event 1784_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1784_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1784_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_1784_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1784_82_end: ;
}
void Frames::event_func_18909()
{
    // event 1785_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1785_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1785_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1785_82_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(18);
    }
    event_1785_82_end: ;
}
void Frames::event_func_18910()
{
    // event 1786_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1786_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1786_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1786_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1786_82_end: ;
}
void Frames::event_func_18911()
{
    // event 1787_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1787_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1787_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (140))) goto event_1787_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1787_82_end: ;
}
void Frames::event_func_18912()
{
    // event 1788_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1788_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (70))) goto event_1788_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_1788_82_end: ;
}
void Frames::event_func_18913()
{
    // event 1789_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1789_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1789_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (70))) goto event_1789_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (71))) goto event_1789_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1789_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1789_82_end: ;
}
void Frames::event_func_18914()
{
    // event 1790_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1790_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1790_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1790_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_1790_82_end: ;
}
void Frames::event_func_18915()
{
    // event 1791_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1791_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1791_82_end;
        if (!((global_values->get(1)) != (0))) goto event_1791_82_end;
        if (once_condition_1791_82) goto event_1791_82_end;
        once_condition_1791_82 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
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
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1791_82_end: ;
}
void Frames::event_func_18916()
{
    // event 1792_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1792_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1792_82_end;
        if (once_condition_1792_82) goto event_1792_82_end;
        once_condition_1792_82 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
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
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1792_82_end: ;
}
void Frames::event_func_18917()
{
    // event 1793_82
    bool or_result_1793_82 = false;
    bool or_temp_result_1793_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto or_event_1793_82_0_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1793_82_0_end;
        if (!((global_values->get(1)) != (0))) goto or_event_1793_82_0_end;
        or_result_1793_82 = true;
        or_temp_result_1793_82_0 = true;
    }
    or_event_1793_82_0_end: ;
    themagister_2115_instances.clear_saved_selection();
    if (or_temp_result_1793_82_0) {
        themagister_2115_instances.save_selection();
    }
    // event 1793_82
    bool or_temp_result_1793_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto or_event_1793_82_1_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1793_82_1_end;
        or_result_1793_82 = true;
        or_temp_result_1793_82_1 = true;
        or_event_1793_82_1_end: ;
        if (or_temp_result_1793_82_1) {
            themagister_2115_instances.save_selection();
        }
        if (!or_result_1793_82) goto or_final_or_event_1793_82_1_end;
        themagister_2115_instances.empty_selection();
        if (or_temp_result_1793_82_0 || or_temp_result_1793_82_1) {
            themagister_2115_instances.restore_selection();
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    or_final_or_event_1793_82_1_end: ;
}
void Frames::event_func_18918()
{
    // event 1794_82
    bool or_result_1794_82 = false;
    bool or_temp_result_1794_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto or_event_1794_82_0_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto or_event_1794_82_0_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (140))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto or_event_1794_82_0_end;
        if (!((global_values->get(1)) != (0))) goto or_event_1794_82_0_end;
        or_result_1794_82 = true;
        or_temp_result_1794_82_0 = true;
    }
    or_event_1794_82_0_end: ;
    levelcardfade2_24_instances.clear_saved_selection();
    if (or_temp_result_1794_82_0) {
        levelcardfade2_24_instances.save_selection();
    }
    // event 1794_82
    bool or_temp_result_1794_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto or_event_1794_82_1_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto or_event_1794_82_1_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (140))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto or_event_1794_82_1_end;
        or_result_1794_82 = true;
        or_temp_result_1794_82_1 = true;
        or_event_1794_82_1_end: ;
        if (or_temp_result_1794_82_1) {
            levelcardfade2_24_instances.save_selection();
        }
        if (!or_result_1794_82) goto or_final_or_event_1794_82_1_end;
        levelcardfade2_24_instances.clear_selection();
        if (or_temp_result_1794_82_0 || or_temp_result_1794_82_1) {
            levelcardfade2_24_instances.restore_selection();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 4393);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 240);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(72);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(4370);
            ((Active*)*it)->set_y(281);
        }
        media.stop_channel(25-1);
        ((Active*)get_instance(npcshellduck_533_instances))->set_x(4236);
        ((Active*)get_instance(npcshellduck_533_instances))->set_y(281);
        ((Active*)get_instance(npcshellduck_533_instances))->set_direction(0);
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(18);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 13);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 128);
        }
    }
    or_final_or_event_1794_82_1_end: ;
}
void Frames::event_func_18919()
{
    // event 1795_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1795_82_end;
        FrameObject * single_instance_1795_82_0; single_instance_1795_82_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerdragonhead_3984_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dragontailpath_3995(parent->x + 8, parent->y + 0), parent->layer);
                if (single_instance_1795_82_0 == NULL)
                    single_instance_1795_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1795_82_0))->alterables->values.set(1, ((Active*)get_instance(playerdragonhead_3984_instances))->get_angle());
        ((Active*)((Active*)single_instance_1795_82_0))->set_y(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1));
    }
    event_1795_82_end: ;
}
void Frames::event_func_18920()
{
    // event 1796_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1796_82_end;
        dragontailpath_3995_instances.clear_selection();
        for (ObjectIterator it(dragontailpath_3995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
        spread_value(dragontailpath_3995_instances, 0, 0);
        {
            SavedSelection extra_dragontailpath_3995_instances(dragontailpath_3995_instances);
            for (SavedIterator it(extra_dragontailpath_3995_instances); !it.end(); ++it) {
                foreach_instance_t = ((Active*)*it);
                foreach_t_82();
            }
        }
    }
    event_1796_82_end: ;
}
void Frames::event_func_18921()
{
    // event 1798_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1798_82_end;
        dragontailpath_3995_instances.clear_selection();
        for (ObjectIterator it(dragontailpath_3995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
        }
        if (!dragontailpath_3995_instances.has_selection()) goto event_1798_82_end;
        for (ObjectIterator it(dragontailpath_3995_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1798_82_end: ;
}
void Frames::event_func_18922()
{
    // event 1799_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1799_82_end;
        playerdragontail_3983_instances.clear_selection();
        for (ObjectIterator it(playerdragontail_3983_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0)-((Active*)*it)->alterables->values.get(0)*32);
            ((Active*)*it)->set_angle(cos_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2)-((Active*)*it)->alterables->values.get(0)*30)*-10, 0);
        }
    }
    event_1799_82_end: ;
}
void Frames::event_func_18923()
{
    // event 1800_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1800_82_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(2, (((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2)+5)%math_helper%360);
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_x(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_y(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2))*8);
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_angle(cos_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2))*-10, 0);
        ((Active*)get_instance(playerdragonhead_3984_instances))->force_frame(get_ceil(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(3)));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(0, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(1, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6));
    }
    event_1800_82_end: ;
}
void Frames::event_func_18924()
{
    // event 1801_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1801_82_end;
        playerdragonrider_3985_instances.clear_selection();
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!playerdragonrider_3985_instances.has_selection()) goto event_1801_82_end;
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerdragonhead_3984_instances));
            if (parent == NULL) goto pos_end_1801_82_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1801_82_0: ;
        }
    }
    event_1801_82_end: ;
}
void Frames::event_func_18925()
{
    // event 1802_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1802_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1802_82_end;
        if (once_condition_1802_82) goto event_1802_82_end;
        once_condition_1802_82 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3510);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height-global_values->get(17)*0.5-8);
        soldierwagon_4006_instances.clear_selection();
        for (ObjectIterator it(soldierwagon_4006_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.stop_channel(32-1);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(0, 3360);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(1, 180);
        {
            loop_jeeps_running = true;
            int times = int(10);
            loop_jeeps_index = 0;
            while (loop_jeeps_index < times) {
                loop_jeeps_82();
                if (!loop_jeeps_running) break;
                loop_jeeps_index++;
            }
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1802_82_end: ;
}
void Frames::event_func_18926()
{
    // event 1804_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1804_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1804_82_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(4)*10);
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1804_82_end: ;
}
void Frames::event_func_18927()
{
    // event 1805_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1805_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+randrange(get_max(0, get_min(get_abs(((Active*)*it)->alterables->values.get(3)), 3))));
        }
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances, it.current_index));
            if (parent == NULL) goto pos_end_1805_82_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -64, parent->get_y() + 37);
            pos_end_1805_82_0: ;
        }
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(jeepbase_3991_instances, it.current_index, default_active_instance))->alterables->values.get(2), 0);
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances, it.current_index));
            if (parent == NULL) goto pos_end_1805_82_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 64, parent->get_y() + 37);
            pos_end_1805_82_1: ;
        }
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(jeepbase_3991_instances, it.current_index, default_active_instance))->alterables->values.get(2), 0);
        }
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, ((Active*)*it)->alterables->values.get(3)*-3);
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(3));
        }
        {
            ObjectIterator other_it(jeepbase_3991_instances);
            for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1805_82_2_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1805_82_2_end: ;
        {
            ObjectIterator other_it(jeepbase_3991_instances);
            for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1805_82_3_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1805_82_3_end: ;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1805_82_end: ;
}
void Frames::event_func_18928()
{
    // event 1806_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1806_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (100))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1806_82_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 50-randrange(100));
            ((Active*)*it)->force_frame(randrange(4));
        }
    }
    event_1806_82_end: ;
}
void Frames::event_func_18929()
{
    // event 1807_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1807_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (frame_left()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_left()+300))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1807_82_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        media.play_id(SOUND_SCENE_JEEPSTOP_435, -1, 1);
    }
    event_1807_82_end: ;
}
void Frames::event_func_18930()
{
    // event 1808_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1808_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1808_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (340))) goto event_1808_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
    }
    event_1808_82_end: ;
}
void Frames::event_func_18931()
{
    // event 1809_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1809_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1809_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1809_82_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1809_82_end: ;
}
void Frames::event_func_18932()
{
    // event 1810_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1810_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1810_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1810_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (300))) goto event_1810_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
    }
    event_1810_82_end: ;
}
void Frames::event_func_18933()
{
    // event 1811_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1811_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1811_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_1811_82_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_x(-1 + 2)+16);
    }
    event_1811_82_end: ;
}
void Frames::event_func_18934()
{
    // event 1812_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1812_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1812_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1812_82_end;
        media.play_id(SOUND_SCENE_TRUCKSTOP_2_425, -1, 1);
    }
    event_1812_82_end: ;
}
void Frames::event_func_18935()
{
    // event 1813_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1813_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1813_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_1813_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (340))) goto event_1813_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 4);
    }
    event_1813_82_end: ;
}
void Frames::event_func_18936()
{
    // event 1814_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1814_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1814_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (340))) goto event_1814_82_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_x(frame_left()-100);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, frame_top()+200);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(14, 1);
        npchologram2_3074_instances.clear_selection();
        for (ObjectIterator it(npchologram2_3074_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(5);
        }
    }
    event_1814_82_end: ;
}
void Frames::event_func_18937()
{
    // event 1815_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1815_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1815_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (340))) goto event_1815_82_end;
        ((Active*)get_instance(npcpangu_3073_instances))->set_x((((Active*)get_instance(npcpangu_3073_instances))->get_x()*19+frame_left()+180)*0.05);
        ((Active*)get_instance(npcpangu_3073_instances))->alterables->values.set(10, (((Active*)get_instance(npcpangu_3073_instances))->alterables->values.get(10)*19+frame_top()+120)*0.05);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcpangu_3073_instances));
            if (parent == NULL) goto pos_end_1815_82_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -4, parent->get_y() + 36);
            pos_end_1815_82_0: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->move_back();
        }
    }
    event_1815_82_end: ;
}
void Frames::event_func_18938()
{
    // event 1816_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1816_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1816_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (380))) goto event_1816_82_end;
        media.play_id(SOUND_PLBLOCK_APPEAR_330, -1, 1);
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        npchologram2_3074_instances.clear_selection();
        for (ObjectIterator it(npchologram2_3074_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1816_82_end: ;
}
void Frames::event_func_18939()
{
    // event 1817_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1817_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1817_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (410))) goto event_1817_82_end;
        media.play_id(SOUND_DRAGONROAR_5_333, -1, 1);
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
    }
    event_1817_82_end: ;
}
void Frames::event_func_18940()
{
    // event 1818_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1818_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1818_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (410))) goto event_1818_82_end;
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_scale(1+((Active*)*it)->alterables->values.get(0)*0.02);
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1818_82_end: ;
}
void Frames::event_func_18941()
{
    // event 1819_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1819_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1819_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (500))) goto event_1819_82_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, 0);
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        caravanwheel_1386_instances.clear_selection();
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        soldierwagon_4006_instances.clear_selection();
        for (ObjectIterator it(soldierwagon_4006_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerzaotank2_4013_instances.clear_selection();
        spread_value(playerzaotank2_4013_instances, 1, 1);
        schmupfloor_4016_instances.clear_selection();
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3200+global_values->get(16)*0.5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 320-global_values->get(17)*0.5);
        levelparallaxpiece2_467_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece2_467_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -0.1);
        }
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(6, -0.15);
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, -0.25);
        }
        for (ObjectIterator it(playerzaotank2_4013_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerzaotank_4014_instances.clear_selection();
        for (ObjectIterator it(playerzaotank_4014_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 128);
        }
        npchologram1_3060_instances.clear_selection();
        for (ObjectIterator it(npchologram1_3060_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        npchologram2_3074_instances.clear_selection();
        for (ObjectIterator it(npchologram2_3074_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1819_82_end: ;
}
void Frames::event_func_18942()
{
    // event 1820_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1820_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1820_82_end;
        if (!((playerdragonrider_3985_instances.size()) < (4))) goto event_1820_82_end;
        playerdragonrider_3985_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_playerdragonrider_3985(0, 0), 3);
            playerdragonrider_3985_instances.add_back();
        }
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, playerdragonrider_3985_instances.size()-1);
        }
    }
    event_1820_82_end: ;
}
void Frames::event_func_18943()
{
    // event 1821_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1821_82_end;
        playerdragonrider_3985_instances.clear_selection();
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!playerdragonrider_3985_instances.has_selection()) goto event_1821_82_end;
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1821_82_end: ;
}
void Frames::event_func_18944()
{
    // event 1822_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1822_82_end;
        playerdragonrider_3985_instances.clear_selection();
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!playerdragonrider_3985_instances.has_selection()) goto event_1822_82_end;
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1822_82_end: ;
}
void Frames::event_func_18945()
{
    // event 1823_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1823_82_end;
        playerdragonrider_3985_instances.clear_selection();
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!playerdragonrider_3985_instances.has_selection()) goto event_1823_82_end;
        for (ObjectIterator it(playerdragonrider_3985_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
    }
    event_1823_82_end: ;
}
void Frames::event_func_18946()
{
    // event 1824_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1824_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (14))) goto event_1824_82_end;
        {
            playerzaotank2_4013_instances.clear_selection();
            SavedSelection extra_playerzaotank2_4013_instances(playerzaotank2_4013_instances);
            for (SavedIterator it(extra_playerzaotank2_4013_instances); !it.end(); ++it) {
                foreach_instance_tr = ((Active*)*it);
                foreach_tr_82();
            }
        }
        schmupfloor_4016_instances.clear_selection();
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.sub(3, 4);
        }
        for (ObjectIterator it(playerzaotank2_4013_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerzaotank_4014_instances, it.current_index));
            if (parent == NULL) goto pos_end_1824_82_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -14, parent->get_y() + -12);
            pos_end_1824_82_0: ;
        }
        for (ObjectIterator it(playerzaotank2_4013_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)-45, 0);
        }
    }
    event_1824_82_end: ;
}
void Frames::event_func_18947()
{
    // event 1825_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1825_82_end;
        schmupfloor_4016_instances.clear_selection();
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (-64))) { it.deselect(); continue; }
        }
        if (!schmupfloor_4016_instances.has_selection()) goto event_1825_82_end;
        for (ObjectIterator it(schmupfloor_4016_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 64);
        }
    }
    event_1825_82_end: ;
}
void Frames::event_func_18948()
{
    // event 1827_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1827_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1827_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
    }
    event_1827_82_end: ;
}
void Frames::event_func_18949()
{
    // event 1828_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1828_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1828_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1828_82_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1828_82_end: ;
}
void Frames::event_func_18950()
{
    // event 1829_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1829_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1829_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1829_82_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
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
    }
    event_1829_82_end: ;
}
void Frames::event_func_18951()
{
    // event 1830_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1830_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1830_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
    }
    event_1830_82_end: ;
}
void Frames::event_func_18952()
{
    // event 1831_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1831_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1831_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1831_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1) {
            group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1 = true;
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(4739);
            ((Active*)*it)->set_y(759);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(16);
        }
            group_main_engine_level_specific_methods_cutscenes_pangu_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1) {
            group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1 = true;
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, 1);
        npcsyntaxleftarm_2517_instances.clear_selection();
        spread_value(npcsyntaxleftarm_2517_instances, 0, 0);
        npcsyntaxrightarm_2518_instances.clear_selection();
        spread_value(npcsyntaxrightarm_2518_instances, 0, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(kingdomstone_1587_instances))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(kingdomstone_1587_instances))->get_y());
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(10, ((Active*)get_instance(npcsyntax_2519_instances))->get_y());
        ((Active*)get_instance(npcdail_4017_instances))->set_visible(true);
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(true);
        ((Active*)get_instance(npcdail_4017_instances))->force_animation(5);
    }
    event_1831_82_end: ;
}
void Frames::event_func_18953()
{
    // event 1832_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1)) goto event_1832_82_end;
        if (!((kingdomstonewave_3656_instances.size()) == (0))) goto event_1832_82_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.enable(1);
    }
    event_1832_82_end: ;
}
void Frames::event_func_18954()
{
    // event 1833_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1)) goto event_1833_82_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(1))) goto event_1833_82_end;
        FrameObject * single_instance_1833_82_0; single_instance_1833_82_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_kingdomstonewave_3656(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1833_82_0 == NULL)
                    single_instance_1833_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1833_82_0))->alterables->values.set(0, -2);
    }
    event_1833_82_end: ;
}
void Frames::event_func_18955()
{
    // event 1834_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1)) goto event_1834_82_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(1))) goto event_1834_82_end;
        FrameObject * single_instance_1834_82_0; single_instance_1834_82_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_kingdomstonewave_3656(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1834_82_0 == NULL)
                    single_instance_1834_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1834_82_0))->alterables->values.set(0, 2);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.disable(1);
    }
    event_1834_82_end: ;
}
void Frames::event_func_18956()
{
    // event 1835_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1)) goto event_1835_82_end;
        if (!((kingdomstonewave_3656_instances.size()) > (0))) goto event_1835_82_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (22))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_1835_82_end;
        FrameObject * single_instance_1835_82_0; single_instance_1835_82_0 = pick_random(kingdomstonewave_3656_instances);
        if (single_instance_1835_82_0 == NULL) goto event_1835_82_end;
        FrameObject * single_instance_1835_82_1; single_instance_1835_82_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ringsparkle_139(((Active*)single_instance_1835_82_0)->x + 0, ((Active*)single_instance_1835_82_0)->y + 0), ((Active*)single_instance_1835_82_0)->layer);
            if (single_instance_1835_82_1 == NULL)
                single_instance_1835_82_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1835_82_1))->set_x(((Active*)single_instance_1835_82_1)->get_x()-30+randrange(62));
    }
    event_1835_82_end: ;
}
void Frames::event_func_18957()
{
    // event 1836_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1)) goto event_1836_82_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1836_82_end: ;
}
void Frames::event_func_18958()
{
    // event 1837_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1)) goto event_1837_82_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (20))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_1837_82_end;
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*0.5);
        }
    }
    event_1837_82_end: ;
}
void Frames::event_func_18959()
{
    // event 1838_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1)) goto event_1838_82_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (20))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_1838_82_end;
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient((((Active*)*it)->alterables->values.get(1)-10)*10);
        }
    }
    event_1838_82_end: ;
}
void Frames::event_func_18960()
{
    // event 1839_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1)) goto event_1839_82_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_1839_82_end;
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1839_82_end: ;
}
void Frames::event_func_18961()
{
    // event 1840_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1)) goto event_1840_82_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_y(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(10)+sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(9))*8);
    }
    event_1840_82_end: ;
}
void Frames::event_func_18962()
{
    // event 1841_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1)) goto event_1841_82_end;
        if (!(((Active*)get_instance(npcsyntax_2519_instances))->alterables->flags.is_off(1))) goto event_1841_82_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(3, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(8, 2);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(9, 2);
    }
    event_1841_82_end: ;
}
void Frames::event_func_18963()
{
    // event 1842_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1)) goto event_1842_82_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_1842_82_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_y(get_min(((Active*)get_instance(npcsyntax_2519_instances))->get_y(), 1765));
    }
    event_1842_82_end: ;
}
void Frames::event_func_18964()
{
    // event 1843_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1)) goto event_1843_82_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_1843_82_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (1))) goto event_1843_82_end;
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
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(0);
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1843_82_end: ;
}
void Frames::event_func_18965()
{
    // event 1844_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1)) goto event_1844_82_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(11)) == (0))) goto event_1844_82_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(14)) == (-1))) goto event_1844_82_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->set_direction(16);
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()-28+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4))*((Active*)*it)->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(6)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(4), 0);
            ((Active*)*it)->set_direction(16);
        }
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcsyntax_2519_instances))->get_action_x()+cos_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_y(((Active*)get_instance(npcsyntax_2519_instances))->get_action_y()-1+sin_deg(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15)*((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)+((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5))*((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*6);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(8)-((Active*)get_single(npcsyntaxleftarm_2517_instances, it.current_index, default_active_instance))->alterables->values.get(0)*20)*(0-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(7)-((Active*)*it)->alterables->values.get(0)*4)-((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(5), 0);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1844_82_end: ;
}
void Frames::event_func_18966()
{
    // event 1845_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1)) goto event_1845_82_end;
        npcsyntaxleftarm_2517_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxleftarm_2517_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxleftarm_2517_instances.has_selection()) goto event_1845_82_end;
        for (ObjectIterator it(npcsyntaxleftarm_2517_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1845_82_end: ;
}
void Frames::event_func_18967()
{
    // event 1846_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1)) goto event_1846_82_end;
        npcsyntaxrightarm_2518_instances.clear_selection();
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (npcsyntaxrightarm_2518_instances.size()-1))) { it.deselect(); continue; }
        }
        if (!npcsyntaxrightarm_2518_instances.has_selection()) goto event_1846_82_end;
        for (ObjectIterator it(npcsyntaxrightarm_2518_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
    }
    event_1846_82_end: ;
}
void Frames::event_func_18968()
{
    // event 1847_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1847_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1847_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -3);
        }
    }
    event_1847_82_end: ;
}
void Frames::event_func_18969()
{
    // event 1848_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1848_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1848_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1848_82_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 98);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1848_82_end: ;
}
void Frames::event_func_18970()
{
    // event 1849_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1849_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1849_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (98))) goto event_1849_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (100))) goto event_1849_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1849_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1849_82_end: ;
}
void Frames::event_func_18971()
{
    // event 1850_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1850_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (99))) goto event_1850_82_end;
        if (once_condition_1850_82) goto event_1850_82_end;
        once_condition_1850_82 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1850_82_end: ;
}
void Frames::event_func_18972()
{
    // event 1851_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1851_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (100))) goto event_1851_82_end;
        if (once_condition_1851_82) goto event_1851_82_end;
        once_condition_1851_82 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1851_82_end: ;
}
void Frames::event_func_18973()
{
    // event 1852_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1852_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1852_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (100))) goto event_1852_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1852_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
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
    }
    event_1852_82_end: ;
}
void Frames::event_func_18974()
{
    // event 1853_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1853_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1853_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
    }
    event_1853_82_end: ;
}
void Frames::event_func_18975()
{
    // event 1854_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1854_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (18))) goto event_1854_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1854_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1) {
            group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1 = true;
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(4739);
            ((Active*)*it)->set_y(759);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(16);
        }
            group_main_engine_level_specific_methods_cutscenes_pangu_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1) {
            group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1 = true;
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, 1);
        npcsyntaxleftarm_2517_instances.clear_selection();
        spread_value(npcsyntaxleftarm_2517_instances, 0, 0);
        npcsyntaxrightarm_2518_instances.clear_selection();
        spread_value(npcsyntaxrightarm_2518_instances, 0, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3200+global_values->get(16)*0.5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 320-global_values->get(17)*0.5);
    }
    event_1854_82_end: ;
}
void Frames::event_func_18976()
{
    // event 1855_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1855_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (19))) goto event_1855_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -3);
        }
    }
    event_1855_82_end: ;
}
void Frames::event_func_18977()
{
    // event 1856_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1856_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (19))) goto event_1856_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1856_82_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 78);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1856_82_end: ;
}
void Frames::event_func_18978()
{
    // event 1857_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1857_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1857_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (78))) goto event_1857_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1857_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1857_82_end: ;
}
void Frames::event_func_18979()
{
    // event 1858_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1858_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1858_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (79))) goto event_1858_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1858_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
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
    }
    event_1858_82_end: ;
}
void Frames::event_func_18980()
{
    // event 1859_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1859_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_1859_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
    }
    event_1859_82_end: ;
}
void Frames::event_func_18981()
{
    // event 1860_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1860_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (21))) goto event_1860_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1860_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1) {
            group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1 = true;
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(4739);
            ((Active*)*it)->set_y(759);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(16);
        }
            group_main_engine_level_specific_methods_cutscenes_pangu_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1) {
            group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1 = true;
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, 1);
        npcsyntaxleftarm_2517_instances.clear_selection();
        spread_value(npcsyntaxleftarm_2517_instances, 0, 0);
        npcsyntaxrightarm_2518_instances.clear_selection();
        spread_value(npcsyntaxrightarm_2518_instances, 0, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(kingdomstone_1587_instances))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(kingdomstone_1587_instances))->get_y());
        ((Active*)get_instance(npcdail_4017_instances))->set_visible(false);
    }
    event_1860_82_end: ;
}
void Frames::event_func_18982()
{
    // event 1861_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1861_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1861_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -3);
        }
    }
    event_1861_82_end: ;
}
void Frames::event_func_18983()
{
    // event 1862_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1862_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (22))) goto event_1862_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1862_82_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 101);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(4);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1862_82_end: ;
}
void Frames::event_func_18984()
{
    // event 1863_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1863_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (101))) goto event_1863_82_end;
        if (!((media.get_channel_position(-1 +20)) > (4000))) goto event_1863_82_end;
        if (!((media.get_channel_position(-1 +20)) < (4750))) goto event_1863_82_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(28);
        }
    }
    event_1863_82_end: ;
}
void Frames::event_func_18985()
{
    // event 1864_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1864_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (101))) goto event_1864_82_end;
        if (!((media.get_channel_position(-1 +20)) > (4750))) goto event_1864_82_end;
        if (once_condition_1864_82) goto event_1864_82_end;
        once_condition_1864_82 = true;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(16);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 16);
    }
    event_1864_82_end: ;
}
void Frames::event_func_18986()
{
    // event 1865_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1865_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1865_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (101))) goto event_1865_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1865_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
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
    }
    event_1865_82_end: ;
}
void Frames::event_func_18987()
{
    // event 1866_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1866_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1866_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 3);
        }
    }
    event_1866_82_end: ;
}
void Frames::event_func_18988()
{
    // event 1867_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1867_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (24))) goto event_1867_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1867_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1) {
            group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_kingdom_stone_wave_1 = true;
        }
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_x(4739);
            ((Active*)*it)->set_y(759);
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(16);
        }
            group_main_engine_level_specific_methods_cutscenes_pangu_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1) {
            group_main_engine_level_specific_methods_cutscenes_cities_unite_final_assault_syntax_1 = true;
        }
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(14, 1);
        npcsyntaxleftarm_2517_instances.clear_selection();
        spread_value(npcsyntaxleftarm_2517_instances, 0, 0);
        npcsyntaxrightarm_2518_instances.clear_selection();
        spread_value(npcsyntaxrightarm_2518_instances, 0, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3200+global_values->get(16)*0.5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 320-global_values->get(17)*0.5);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(npcserpentine_947_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_1867_82_end: ;
}
void Frames::event_func_18989()
{
    // event 1868_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1868_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_1868_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -3);
        }
    }
    event_1868_82_end: ;
}
void Frames::event_func_18990()
{
    // event 1869_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1869_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (25))) goto event_1869_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1869_82_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 80);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1869_82_end: ;
}
void Frames::event_func_18991()
{
    // event 1870_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1870_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1870_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (80))) goto event_1870_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1870_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1870_82_end: ;
}
void Frames::event_func_18992()
{
    // event 1871_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1871_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1871_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (81))) goto event_1871_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1871_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 102);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(kingdomstone_1587_instances))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(kingdomstone_1587_instances))->get_y());
    }
    event_1871_82_end: ;
}
void Frames::event_func_18993()
{
    // event 1872_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1872_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1872_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (102))) goto event_1872_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1872_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 82);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3200+global_values->get(16)*0.5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 320-global_values->get(17)*0.5);
    }
    event_1872_82_end: ;
}
void Frames::event_func_18994()
{
    // event 1873_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1873_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1873_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (82))) goto event_1873_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1873_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
    }
    event_1873_82_end: ;
}
void Frames::event_func_18995()
{
    // event 1874_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1874_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1874_82_end;
        if (not_always_1874_82 > loop_count) {
            not_always_1874_82 = loop_count + 2;
            goto event_1874_82_end;
        }
        not_always_1874_82 = loop_count + 2;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 2);
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
        media.stop_channel(32-1);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_1874_82_end: ;
}
void Frames::event_func_18996()
{
    // event 1875_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1875_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1875_82_end;
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
    event_1875_82_end: ;
}
void Frames::event_func_18997()
{
    // event 1876_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1876_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (27))) goto event_1876_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1876_82_end;
        next_frame = 85 + 0;    
    
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, ((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 3));
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
    }
    event_1876_82_end: ;
}
void Frames::event_func_18998()
{
    // event 1877_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1877_82_end;
        {
            FrameObject * parent = ((Active*)get_instance(npcgong_634_instances));
            if (parent == NULL) goto pos_end_1877_82_0;
            ((Active*)get_instance(gongshield_633_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1877_82_0: ;
        }
        ((Active*)get_instance(gongshield_633_instances))->set_direction(((Active*)get_instance(npcgong_634_instances))->get_direction());
        ((Active*)get_instance(gongshield_633_instances))->move_back(((Active*)get_instance(npcgong_634_instances)));
    }
    event_1877_82_end: ;
}
void Frames::event_func_18999()
{
    // event 1878_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_cities_unite_1)) goto event_1878_82_end;
        if (!((((Active*)get_instance(npcgong_634_instances))->get_frame()) >= (6))) goto event_1878_82_end;
        if (!((((Active*)get_instance(npcgong_634_instances))->get_frame()) < (9))) goto event_1878_82_end;
        ((Active*)get_instance(gongshield_633_instances))->set_direction(((Active*)get_instance(gongshield_633_instances))->get_direction()+16);
    }
    event_1878_82_end: ;
}
void Frames::event_func_19000()
{
    // event 1880_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1880_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1880_82_end: ;
}
void Frames::event_func_19001()
{
    // event 1881_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1881_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1881_82_end;
        if (once_condition_1881_82) goto event_1881_82_end;
        once_condition_1881_82 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 380);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1000);
        media.play_id(SOUND_DREADNOUGHT_FLAME_437, 22-1, 0);
        media.set_channel_volume(22-1, 0);
    }
    event_1881_82_end: ;
}
