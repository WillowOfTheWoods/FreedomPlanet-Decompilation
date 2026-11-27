#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_10290()
{
    // event 1789_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1789_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (3))) goto event_1789_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)) > (80))) goto event_1789_43_end;
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(brevonmechtorso_2543_instances))->alterables->values.set(3, -500);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, (frame_top()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(24))-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
    }
    event_1789_43_end: ;
}
void Frames::event_func_10291()
{
    // event 1790_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1790_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (4))) goto event_1790_43_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1790_43_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1790_43_end: ;
}
void Frames::event_func_10292()
{
    // event 1791_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1791_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (4))) goto event_1791_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (13500))) goto event_1791_43_end;
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_x(frame_left()+global_values->get(16)+120);
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_y(frame_top()+100);
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.set(0, ((Active*)get_instance(brevonmechflyby_11_instances))->get_x());
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_visible(true);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(12, 1);
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.set(13, 0);
    }
    event_1791_43_end: ;
}
void Frames::event_func_10293()
{
    // event 1792_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_abduction_torque_s_abduction_takeoff_1)) goto event_1792_43_end;
        if (!((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(12)) == (5))) goto event_1792_43_end;
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_x(((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.get(0));
        ((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.add(13, 1);
        ((Active*)get_instance(brevonmechflyby_11_instances))->alterables->values.add(0, -5+get_min(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)*0.05, 4));
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_scale(1.0-get_min(get_max(0, get_log10((((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)+20)*0.05)), 1));
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_blend_color(make_color_int(248-get_min(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)*2, 248), 248-get_min(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)*2, 248), 255));
        ((Active*)get_instance(brevonmechflyby_11_instances))->set_angle(20-get_min(((Active*)get_instance(npcsyntax_2519_instances))->alterables->values.get(13)*0.2, 20), 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y());
    }
    event_1792_43_end: ;
}
void Frames::event_func_10294()
{
    // event 1793_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1793_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(15, 1);
    }
    event_1793_43_end: ;
}
void Frames::event_func_10295()
{
    // event 1794_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1794_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (0))) goto event_1794_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) == (10))) goto event_1794_43_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1794_43_end: ;
}
void Frames::event_func_10296()
{
    // event 1795_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1795_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (0))) goto event_1795_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) == (20))) goto event_1795_43_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1795_43_end: ;
}
void Frames::event_func_10297()
{
    // event 1796_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1796_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (0))) goto event_1796_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) > (30))) goto event_1796_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(14, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1796_43_end: ;
}
void Frames::event_func_10298()
{
    // event 1797_43
    bool or_result_1797_43 = false;
    bool or_temp_result_1797_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto or_event_1797_43_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1797_43_0_end;
        or_result_1797_43 = true;
        or_temp_result_1797_43_0 = true;
    }
    or_event_1797_43_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1797_43_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1797_43
    bool or_temp_result_1797_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto or_event_1797_43_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1797_43_1_end;
        or_result_1797_43 = true;
        or_temp_result_1797_43_1 = true;
    }
    or_event_1797_43_1_end: ;
    if (or_temp_result_1797_43_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1797_43
    bool or_temp_result_1797_43_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto or_event_1797_43_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1797_43_2_end;
        or_result_1797_43 = true;
        or_temp_result_1797_43_2 = true;
        or_event_1797_43_2_end: ;
        if (or_temp_result_1797_43_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1797_43) goto or_final_or_event_1797_43_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1797_43_0 || or_temp_result_1797_43_1 || or_temp_result_1797_43_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1797_43_2_end: ;
}
void Frames::event_func_10299()
{
    // event 1798_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1798_43_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1798_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) != (1))) goto event_1798_43_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1798_43_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(14, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(15, 0);
    }
    event_1798_43_end: ;
}
void Frames::event_func_10300()
{
    // event 1799_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1799_43_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1799_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1799_43_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1799_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1799_43_end: ;
}
void Frames::event_func_10301()
{
    // event 1800_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1800_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (2))) goto event_1800_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) > (80))) goto event_1800_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(14, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1800_43_end: ;
}
void Frames::event_func_10302()
{
    // event 1801_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1801_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (2))) goto event_1801_43_end;
        if (once_condition_1801_43) goto event_1801_43_end;
        once_condition_1801_43 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(66);
        }
    }
    event_1801_43_end: ;
}
void Frames::event_func_10303()
{
    // event 1802_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1802_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (4))) goto event_1802_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) == (30))) goto event_1802_43_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(39);
        }
    }
    event_1802_43_end: ;
}
void Frames::event_func_10304()
{
    // event 1803_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1803_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (4))) goto event_1803_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) == (90))) goto event_1803_43_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_1803_43_end: ;
}
void Frames::event_func_10305()
{
    // event 1804_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1804_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (4))) goto event_1804_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) > (140))) goto event_1804_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(14, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(15, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1804_43_end: ;
}
void Frames::event_func_10306()
{
    // event 1805_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1805_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (6))) goto event_1805_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) == (30))) goto event_1805_43_end;
        if (not_always_1805_43 > loop_count) {
            not_always_1805_43 = loop_count + 2;
            goto event_1805_43_end;
        }
        not_always_1805_43 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
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
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1805_43_end: ;
}
void Frames::event_func_10307()
{
    // event 1806_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1806_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (6))) goto event_1806_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) > (30))) goto event_1806_43_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1806_43_end: ;
}
void Frames::event_func_10308()
{
    // event 1807_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1807_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(14)) == (6))) goto event_1807_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(15)) > (30))) goto event_1807_43_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1807_43_end;
        next_frame = 8 + 0;    
    
    }
    event_1807_43_end: ;
}
void Frames::event_func_10309()
{
    // event 1808_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1808_43_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1808_43_end;
        FrameObject * single_instance_1808_43_0; single_instance_1808_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1808_43_0 == NULL)
                    single_instance_1808_43_0 = new_obj;
            }
        }
    }
    event_1808_43_end: ;
}
void Frames::event_func_10310()
{
    // event 1809_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1809_43_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1809_43_end;
        FrameObject * single_instance_1809_43_0; single_instance_1809_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1809_43_0 == NULL)
                    single_instance_1809_43_0 = new_obj;
            }
        }
    }
    event_1809_43_end: ;
}
void Frames::event_func_10311()
{
    // event 1810_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1810_43_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1810_43_end;
        FrameObject * single_instance_1810_43_0; single_instance_1810_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1810_43_0 == NULL)
                    single_instance_1810_43_0 = new_obj;
            }
        }
    }
    event_1810_43_end: ;
}
void Frames::event_func_10312()
{
    // event 1811_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1811_43_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1811_43_end;
        FrameObject * single_instance_1811_43_0; single_instance_1811_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1811_43_0 == NULL)
                    single_instance_1811_43_0 = new_obj;
            }
        }
    }
    event_1811_43_end: ;
}
void Frames::event_func_10313()
{
    // event 1812_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1812_43_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1812_43_end;
        FrameObject * single_instance_1812_43_0; single_instance_1812_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1812_43_0 == NULL)
                    single_instance_1812_43_0 = new_obj;
            }
        }
    }
    event_1812_43_end: ;
}
void Frames::event_func_10314()
{
    // event 1813_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1813_43_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1813_43_end;
        FrameObject * single_instance_1813_43_0; single_instance_1813_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1813_43_0 == NULL)
                    single_instance_1813_43_0 = new_obj;
            }
        }
    }
    event_1813_43_end: ;
}
void Frames::event_func_10315()
{
    // event 1814_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1814_43_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1814_43_end;
        FrameObject * single_instance_1814_43_0; single_instance_1814_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1814_43_0 == NULL)
                    single_instance_1814_43_0 = new_obj;
            }
        }
    }
    event_1814_43_end: ;
}
void Frames::event_func_10316()
{
    // event 1815_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1815_43_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1815_43_end;
        FrameObject * single_instance_1815_43_0; single_instance_1815_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1815_43_0 == NULL)
                    single_instance_1815_43_0 = new_obj;
            }
        }
    }
    event_1815_43_end: ;
}
void Frames::event_func_10317()
{
    // event 1816_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1816_43_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1816_43_end;
        FrameObject * single_instance_1816_43_0; single_instance_1816_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1816_43_0 == NULL)
                    single_instance_1816_43_0 = new_obj;
            }
        }
    }
    event_1816_43_end: ;
}
void Frames::event_func_10318()
{
    // event 1817_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1817_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1817_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1817_43_end: ;
}
void Frames::event_func_10319()
{
    // event 1818_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1818_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1818_43_end;
        if (not_always_1818_43 > loop_count) {
            not_always_1818_43 = loop_count + 2;
            goto event_1818_43_end;
        }
        not_always_1818_43 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1818_43_end: ;
}
void Frames::event_func_10320()
{
    // event 1819_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1819_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1819_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(true);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(1, string_size(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0))-15);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(3, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 0, 2)));
        ((Active*)get_instance(dialogbox2_567_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3));
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 2);
        {
            loop_voice_running = true;
            int times = int(1);
            loop_voice_index = 0;
            while (loop_voice_index < times) {
                loop_voice_43();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1819_43_end: ;
}
void Frames::event_func_10321()
{
    // event 1820_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1820_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1820_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1820_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1820_43_end: ;
}
void Frames::event_func_10322()
{
    // event 1821_43
    bool or_result_1821_43 = false;
    bool or_temp_result_1821_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto or_event_1821_43_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1821_43_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1821_43_0_end;
        if (not_always_1821_43 > loop_count) {
            not_always_1821_43 = loop_count + 2;
            goto or_event_1821_43_0_end;
        }
        not_always_1821_43 = loop_count + 2;
        or_result_1821_43 = true;
        or_temp_result_1821_43_0 = true;
    }
    or_event_1821_43_0_end: ;
    // event 1821_43
    bool or_temp_result_1821_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto or_event_1821_43_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1821_43_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1821_43_1_end;
        if (not_always_1821_43 > loop_count) {
            not_always_1821_43 = loop_count + 2;
            goto or_event_1821_43_1_end;
        }
        not_always_1821_43 = loop_count + 2;
        or_result_1821_43 = true;
        or_temp_result_1821_43_1 = true;
        or_event_1821_43_1_end: ;
        if (!or_result_1821_43) goto or_final_or_event_1821_43_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1821_43_1_end: ;
}
void Frames::event_func_10323()
{
    // event 1822_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1822_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1822_43_end;
        if (not_always_1822_43 > loop_count) {
            not_always_1822_43 = loop_count + 2;
            goto event_1822_43_end;
        }
        not_always_1822_43 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1822_43_end: ;
}
void Frames::event_func_10324()
{
    // event 1823_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1823_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1823_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1823_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1823_43_end: ;
}
void Frames::event_func_10325()
{
    // event 1824_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1824_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1824_43_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1824_43_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1824_43_end: ;
}
void Frames::event_func_10326()
{
    // event 1825_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1825_43_end;
        if (!((global_values->get(27)) == (0))) goto event_1825_43_end;
        if (not_always_1825_43 > loop_count) {
            not_always_1825_43 = loop_count + 2;
            goto event_1825_43_end;
        }
        not_always_1825_43 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1825_43_end: ;
}
void Frames::event_func_10327()
{
    // event 1829_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1829_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1829_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1829_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1829_43_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1829_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1829_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1829_43_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1829_43_end: ;
}
void Frames::event_func_10328()
{
    // event 1830_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1830_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1830_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1830_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1830_43_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1830_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1830_43_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1830_43_end: ;
}
void Frames::event_func_10329()
{
    // event 1831_43
    bool or_result_1831_43 = false;
    bool or_temp_result_1831_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1831_43_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1831_43_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1831_43_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1831_43_0_end;
        or_result_1831_43 = true;
        or_temp_result_1831_43_0 = true;
    }
    or_event_1831_43_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1831_43_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1831_43
    bool or_temp_result_1831_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1831_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1831_43_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1831_43_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1831_43_1_end;
        or_result_1831_43 = true;
        or_temp_result_1831_43_1 = true;
        or_event_1831_43_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1831_43_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1831_43) goto or_final_or_event_1831_43_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1831_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1831_43_0 || or_temp_result_1831_43_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1831_43_1_end: ;
}
void Frames::event_func_10330()
{
    // event 1832_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1832_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1832_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1832_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1832_43_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1832_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1832_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1832_43_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1832_43_end: ;
}
void Frames::event_func_10331()
{
    // event 1833_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1833_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1833_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1833_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1833_43_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1833_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1833_43_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1833_43_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1833_43_end: ;
}
void Frames::event_func_10332()
{
    // event 1834_43
    bool or_result_1834_43 = false;
    bool or_temp_result_1834_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1834_43_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1834_43_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1834_43_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1834_43_0_end;
        or_result_1834_43 = true;
        or_temp_result_1834_43_0 = true;
    }
    or_event_1834_43_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1834_43_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1834_43
    bool or_temp_result_1834_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1834_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1834_43_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1834_43_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1834_43_1_end;
        or_result_1834_43 = true;
        or_temp_result_1834_43_1 = true;
        or_event_1834_43_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1834_43_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1834_43) goto or_final_or_event_1834_43_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1834_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1834_43_0 || or_temp_result_1834_43_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1834_43_1_end: ;
}
void Frames::event_func_10333()
{
    // event 1835_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1835_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1835_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1835_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1835_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1835_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1835_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1835_43_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1835_43_end: ;
}
void Frames::event_func_10334()
{
    // event 1836_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1836_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1836_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1836_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1836_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1836_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1836_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1836_43_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1836_43_end: ;
}
void Frames::event_func_10335()
{
    // event 1837_43
    bool or_result_1837_43 = false;
    bool or_temp_result_1837_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1837_43_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1837_43_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1837_43_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1837_43_0_end;
        or_result_1837_43 = true;
        or_temp_result_1837_43_0 = true;
    }
    or_event_1837_43_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1837_43_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1837_43
    bool or_temp_result_1837_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1837_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1837_43_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1837_43_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1837_43_1_end;
        or_result_1837_43 = true;
        or_temp_result_1837_43_1 = true;
        or_event_1837_43_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1837_43_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1837_43) goto or_final_or_event_1837_43_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1837_43_0 || or_temp_result_1837_43_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1837_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1837_43_1_end: ;
}
void Frames::event_func_10336()
{
    // event 1838_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1838_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1838_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1838_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1838_43_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1838_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1838_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1838_43_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1838_43_end: ;
}
void Frames::event_func_10337()
{
    // event 1839_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1839_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1839_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1839_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1839_43_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1839_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1839_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1839_43_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1839_43_end: ;
}
void Frames::event_func_10338()
{
    // event 1840_43
    bool or_result_1840_43 = false;
    bool or_temp_result_1840_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1840_43_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1840_43_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1840_43_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1840_43_0_end;
        or_result_1840_43 = true;
        or_temp_result_1840_43_0 = true;
    }
    or_event_1840_43_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1840_43_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1840_43
    bool or_temp_result_1840_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1840_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1840_43_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1840_43_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1840_43_1_end;
        or_result_1840_43 = true;
        or_temp_result_1840_43_1 = true;
        or_event_1840_43_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1840_43_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1840_43) goto or_final_or_event_1840_43_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1840_43_0 || or_temp_result_1840_43_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1840_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1840_43_1_end: ;
}
void Frames::event_func_10339()
{
    // event 1841_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1841_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1841_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1841_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1841_43_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1841_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1841_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1841_43_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1841_43_end: ;
}
void Frames::event_func_10340()
{
    // event 1842_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1842_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1842_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1842_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1842_43_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1842_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1842_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1842_43_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1842_43_end: ;
}
void Frames::event_func_10341()
{
    // event 1843_43
    bool or_result_1843_43 = false;
    bool or_temp_result_1843_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1843_43_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1843_43_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1843_43_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1843_43_0_end;
        or_result_1843_43 = true;
        or_temp_result_1843_43_0 = true;
    }
    or_event_1843_43_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1843_43_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1843_43
    bool or_temp_result_1843_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1843_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1843_43_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1843_43_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1843_43_1_end;
        or_result_1843_43 = true;
        or_temp_result_1843_43_1 = true;
        or_event_1843_43_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1843_43_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1843_43) goto or_final_or_event_1843_43_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1843_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1843_43_0 || or_temp_result_1843_43_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1843_43_1_end: ;
}
void Frames::event_func_10342()
{
    // event 1844_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1844_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1844_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1844_43_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto event_1844_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1844_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1844_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1844_43_end: ;
}
void Frames::event_func_10343()
{
    // event 1845_43
    bool or_result_1845_43 = false;
    bool or_temp_result_1845_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1845_43_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1845_43_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1845_43_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1845_43_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1845_43_0_end;
        or_result_1845_43 = true;
        or_temp_result_1845_43_0 = true;
    }
    or_event_1845_43_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1845_43_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1845_43
    bool or_temp_result_1845_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1845_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1845_43_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1845_43_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1845_43_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1845_43_1_end;
        or_result_1845_43 = true;
        or_temp_result_1845_43_1 = true;
        or_event_1845_43_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1845_43_1) {
            npcserpentine_947_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1845_43) goto or_final_or_event_1845_43_1_end;
        npcserpentine_947_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1845_43_0 || or_temp_result_1845_43_1) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1845_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1845_43_1_end: ;
}
void Frames::event_func_10344()
{
    // event 1846_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto event_1846_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1846_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (8))) goto event_1846_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1846_43_end;
        if (!media.is_channel_playing(20-1)) goto event_1846_43_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1846_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1846_43_end: ;
}
void Frames::event_func_10345()
{
    // event 1847_43
    bool or_result_1847_43 = false;
    bool or_temp_result_1847_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1847_43_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1847_43_0_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1847_43_0_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1847_43_0_end;
        or_result_1847_43 = true;
        or_temp_result_1847_43_0 = true;
    }
    or_event_1847_43_0_end: ;
    npcneera_2464_instances.clear_saved_selection();
    if (or_temp_result_1847_43_0) {
        npcneera_2464_instances.save_selection();
    }
    // event 1847_43
    bool or_temp_result_1847_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1847_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (8))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1847_43_1_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1847_43_1_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1847_43_1_end;
        or_result_1847_43 = true;
        or_temp_result_1847_43_1 = true;
        or_event_1847_43_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1847_43_1) {
            dialogbox_566_instances.save_selection();
            npcneera_2464_instances.save_selection();
        }
        if (!or_result_1847_43) goto or_final_or_event_1847_43_1_end;
        dialogbox_566_instances.empty_selection();
        npcneera_2464_instances.empty_selection();
        if (or_temp_result_1847_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1847_43_0 || or_temp_result_1847_43_1) {
            npcneera_2464_instances.restore_selection();
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1847_43_1_end: ;
}
void Frames::event_func_10346()
{
    // event 1848_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1848_43_end;
        if (!((global_values->get(27)) == (1))) goto event_1848_43_end;
        if (not_always_1848_43 > loop_count) {
            not_always_1848_43 = loop_count + 2;
            goto event_1848_43_end;
        }
        not_always_1848_43 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1848_43_end: ;
}
void Frames::event_func_10347()
{
    // event 1849_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1849_43_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1849_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1849_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1849_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1849_43_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1849_43_end: ;
}
void Frames::event_func_10348()
{
    // event 1850_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1850_43_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1850_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1850_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1850_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1850_43_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1850_43_end: ;
}
void Frames::event_func_10349()
{
    // event 1851_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1851_43_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1851_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1851_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1851_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1851_43_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1851_43_end: ;
}
void Frames::event_func_10350()
{
    // event 1852_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1852_43_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1852_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1852_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1852_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1852_43_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1852_43_end: ;
}
void Frames::event_func_10351()
{
    // event 1853_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1853_43_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1853_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1853_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1853_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1853_43_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1853_43_end: ;
}
void Frames::event_func_10352()
{
    // event 1854_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1854_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1854_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1854_43_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1854_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1854_43_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1854_43_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1854_43_end: ;
}
void Frames::event_func_10353()
{
    // event 1855_43
    bool or_result_1855_43 = false;
    bool or_temp_result_1855_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1855_43_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1855_43_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1855_43_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1855_43_0_end;
        or_result_1855_43 = true;
        or_temp_result_1855_43_0 = true;
    }
    or_event_1855_43_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1855_43_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1855_43
    bool or_temp_result_1855_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1855_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1855_43_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1855_43_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1855_43_1_end;
        or_result_1855_43 = true;
        or_temp_result_1855_43_1 = true;
        or_event_1855_43_1_end: ;
        if (or_temp_result_1855_43_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1855_43) goto or_final_or_event_1855_43_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1855_43_0 || or_temp_result_1855_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1855_43_0 || or_temp_result_1855_43_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1855_43_1_end: ;
}
void Frames::event_func_10354()
{
    // event 1856_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1856_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1856_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1856_43_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1856_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1856_43_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1856_43_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1856_43_end: ;
}
void Frames::event_func_10355()
{
    // event 1857_43
    bool or_result_1857_43 = false;
    bool or_temp_result_1857_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1857_43_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1857_43_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1857_43_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1857_43_0_end;
        or_result_1857_43 = true;
        or_temp_result_1857_43_0 = true;
    }
    or_event_1857_43_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1857_43_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1857_43
    bool or_temp_result_1857_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1857_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1857_43_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1857_43_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1857_43_1_end;
        or_result_1857_43 = true;
        or_temp_result_1857_43_1 = true;
        or_event_1857_43_1_end: ;
        if (or_temp_result_1857_43_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1857_43) goto or_final_or_event_1857_43_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1857_43_0 || or_temp_result_1857_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1857_43_0 || or_temp_result_1857_43_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1857_43_1_end: ;
}
void Frames::event_func_10356()
{
    // event 1858_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1858_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1858_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1858_43_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1858_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1858_43_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1858_43_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1858_43_end: ;
}
void Frames::event_func_10357()
{
    // event 1859_43
    bool or_result_1859_43 = false;
    bool or_temp_result_1859_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1859_43_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1859_43_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1859_43_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1859_43_0_end;
        or_result_1859_43 = true;
        or_temp_result_1859_43_0 = true;
    }
    or_event_1859_43_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1859_43_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1859_43
    bool or_temp_result_1859_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1859_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1859_43_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1859_43_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1859_43_1_end;
        or_result_1859_43 = true;
        or_temp_result_1859_43_1 = true;
        or_event_1859_43_1_end: ;
        if (or_temp_result_1859_43_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1859_43) goto or_final_or_event_1859_43_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1859_43_0 || or_temp_result_1859_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1859_43_0 || or_temp_result_1859_43_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1859_43_1_end: ;
}
void Frames::event_func_10358()
{
    // event 1860_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1860_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1860_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1860_43_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1860_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1860_43_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1860_43_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1860_43_end: ;
}
void Frames::event_func_10359()
{
    // event 1861_43
    bool or_result_1861_43 = false;
    bool or_temp_result_1861_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1861_43_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1861_43_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1861_43_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1861_43_0_end;
        or_result_1861_43 = true;
        or_temp_result_1861_43_0 = true;
    }
    or_event_1861_43_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1861_43_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1861_43
    bool or_temp_result_1861_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1861_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1861_43_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1861_43_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1861_43_1_end;
        or_result_1861_43 = true;
        or_temp_result_1861_43_1 = true;
        or_event_1861_43_1_end: ;
        if (or_temp_result_1861_43_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1861_43) goto or_final_or_event_1861_43_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1861_43_0 || or_temp_result_1861_43_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1861_43_0 || or_temp_result_1861_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1861_43_1_end: ;
}
void Frames::event_func_10360()
{
    // event 1862_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1862_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1862_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1862_43_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1862_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1862_43_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1862_43_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1862_43_end: ;
}
void Frames::event_func_10361()
{
    // event 1863_43
    bool or_result_1863_43 = false;
    bool or_temp_result_1863_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1863_43_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1863_43_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1863_43_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1863_43_0_end;
        or_result_1863_43 = true;
        or_temp_result_1863_43_0 = true;
    }
    or_event_1863_43_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1863_43_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1863_43
    bool or_temp_result_1863_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1863_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1863_43_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1863_43_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1863_43_1_end;
        or_result_1863_43 = true;
        or_temp_result_1863_43_1 = true;
        or_event_1863_43_1_end: ;
        if (or_temp_result_1863_43_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1863_43) goto or_final_or_event_1863_43_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1863_43_0 || or_temp_result_1863_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1863_43_0 || or_temp_result_1863_43_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1863_43_1_end: ;
}
void Frames::event_func_10362()
{
    // event 1864_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1864_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1864_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1864_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1864_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1864_43_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1864_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1864_43_end: ;
}
void Frames::event_func_10363()
{
    // event 1865_43
    bool or_result_1865_43 = false;
    bool or_temp_result_1865_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1865_43_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1865_43_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1865_43_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1865_43_0_end;
        or_result_1865_43 = true;
        or_temp_result_1865_43_0 = true;
    }
    or_event_1865_43_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1865_43_0) {
        npcserpentine_947_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1865_43
    bool or_temp_result_1865_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1865_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1865_43_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1865_43_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1865_43_1_end;
        or_result_1865_43 = true;
        or_temp_result_1865_43_1 = true;
        or_event_1865_43_1_end: ;
        if (or_temp_result_1865_43_1) {
            npcserpentine_947_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1865_43) goto or_final_or_event_1865_43_1_end;
        npcserpentine_947_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1865_43_0 || or_temp_result_1865_43_1) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1865_43_0 || or_temp_result_1865_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1865_43_1_end: ;
}
void Frames::event_func_10364()
{
    // event 1866_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto event_1866_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1866_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (8))) goto event_1866_43_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto event_1866_43_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1866_43_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1866_43_end;
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1866_43_end: ;
}
void Frames::event_func_10365()
{
    // event 1867_43
    bool or_result_1867_43 = false;
    bool or_temp_result_1867_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1867_43_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1867_43_0_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1867_43_0_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1867_43_0_end;
        or_result_1867_43 = true;
        or_temp_result_1867_43_0 = true;
    }
    or_event_1867_43_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcneera_2464_instances.clear_saved_selection();
    if (or_temp_result_1867_43_0) {
        dialogbox_566_instances.save_selection();
        npcneera_2464_instances.save_selection();
    }
    // event 1867_43
    bool or_temp_result_1867_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_dialog_system_dialog_voices_blips_1)) goto or_event_1867_43_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (8))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1867_43_1_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1867_43_1_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1867_43_1_end;
        or_result_1867_43 = true;
        or_temp_result_1867_43_1 = true;
        or_event_1867_43_1_end: ;
        if (or_temp_result_1867_43_1) {
            dialogbox_566_instances.save_selection();
            npcneera_2464_instances.save_selection();
        }
        if (!or_result_1867_43) goto or_final_or_event_1867_43_1_end;
        dialogbox_566_instances.empty_selection();
        npcneera_2464_instances.empty_selection();
        if (or_temp_result_1867_43_0 || or_temp_result_1867_43_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1867_43_0 || or_temp_result_1867_43_1) {
            npcneera_2464_instances.restore_selection();
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1867_43_1_end: ;
}
void Frames::event_func_10366()
{
    // event 1869_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_what_do_we_do_1)) goto event_1869_43_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1869_43_end: ;
}
void Frames::event_func_10367()
{
    // event 1870_43
    {
        if (!(group_main_engine_1)) goto event_1870_43_end;
        if (!((global_values->get(4)) < (2))) goto event_1870_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (9800))) goto event_1870_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (9999))) goto event_1870_43_end;
        global_values->set(4, 2);
        global_values->set(5, 9826);
        global_values->set(6, 800);
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
    event_1870_43_end: ;
}
void Frames::event_func_10368()
{
    // event 1871_43
    {
        if (!(group_main_engine_1)) goto event_1871_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6860))) goto event_1871_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (9999))) goto event_1871_43_end;
        if (once_condition_1871_43) goto event_1871_43_end;
        once_condition_1871_43 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_12000_193);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1871_43_end: ;
}
void Frames::event_func_10369()
{
    // event 1935_43
    {
        if (!(group_main_engine_1)) goto event_1935_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1935_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1935_43_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1935_43_end;
        if (not_always_1935_43 > loop_count) {
            not_always_1935_43 = loop_count + 2;
            goto event_1935_43_end;
        }
        not_always_1935_43 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1935_43_end: ;
}
void Frames::event_func_10370()
{
    // event 1936_43
    {
        if (!(group_main_engine_1)) goto event_1936_43_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1936_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_single(cameratriggerboss_424_instances, default_active_instance))->get_x()))) goto event_1936_43_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        {
            loop_trigger_deactivate_boss_running = true;
            int times = int(1);
            loop_trigger_deactivate_boss_index = 0;
            while (loop_trigger_deactivate_boss_index < times) {
                loop_trigger_deactivate_boss_23();
                if (!loop_trigger_deactivate_boss_running) break;
                loop_trigger_deactivate_boss_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_1 = true;
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
        }
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(npcserpentine_947_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1936_43_end: ;
}
void Frames::event_func_10371()
{
    // event 1937_43
    {
        if (!(group_main_engine_1)) goto event_1937_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x(), width-60));
        }
    }
    event_1937_43_end: ;
}
void Frames::event_func_10372()
{
    // event 1940_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_1940_43_end;
        if (once_condition_1940_43) goto event_1940_43_end;
        once_condition_1940_43 = true;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, -1);
        }
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_43();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_se_serp_gotyounow_ogg_194, 25-1);
    }
    event_1940_43_end: ;
}
void Frames::event_func_10373()
{
    // event 1942_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1942_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
        }
    }
    event_1942_43_end: ;
}
void Frames::event_func_10374()
{
    // event 1943_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1943_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1943_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_1943_43_end: ;
}
void Frames::event_func_10375()
{
    // event 1944_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1944_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1944_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_1944_43_end: ;
}
void Frames::event_func_10376()
{
    // event 1945_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1945_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1945_43_end;
        if (!(test_obstacle(((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_x()+24*((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(5), ((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_box_index(3)-8))) goto event_1945_43_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 2);
        }
    }
    event_1945_43_end: ;
}
void Frames::event_func_10377()
{
    // event 1947_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1947_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1947_43_end;
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1);
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(7, -1);
        }
        media.play_id(SOUND_COMMON_CHARGE1_191, -1, 1);
    }
    event_1947_43_end: ;
}
void Frames::event_func_10378()
{
    // event 1948_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1948_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1948_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(get_max(1.0-((Active*)get_single(npcserpentine_947_instances, it.current_index, default_active_instance))->alterables->values.get(6)*0.04, 0.1));
        }
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)get_single(npcserpentine_947_instances, it.current_index, default_active_instance))->alterables->values.get(6)*5, 0));
        }
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(npcserpentine_947_instances, it.current_index));
            if (parent == NULL) goto pos_end_1948_43_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1948_43_0: ;
        }
    }
    event_1948_43_end: ;
}
void Frames::event_func_10379()
{
    // event 1949_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1949_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (25))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1949_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(-128, 0);
            pos_end_1949_43_0: ;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1949_43_end: ;
}
void Frames::event_func_10380()
{
    // event 1950_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1950_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1950_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(6);
        }
    }
    event_1950_43_end: ;
}
void Frames::event_func_10381()
{
    // event 1951_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1951_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1951_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1951_43_0; single_instance_1951_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcserpentine_947_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1951_43_0 == NULL)
                    single_instance_1951_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1951_43_0))->set_direction(3);
        ((Active*)((Active*)single_instance_1951_43_0))->alterables->values.set(0, 16);
        ((Active*)((Active*)single_instance_1951_43_0))->alterables->values.set(1, (((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(5)-1)*-90+((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(4)*-3*((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(5));
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1951_43_end: ;
}
void Frames::event_func_10382()
{
    // event 1952_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1952_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1952_43_end;
        if (not_always_1952_43 > loop_count) {
            not_always_1952_43 = loop_count + 2;
            goto event_1952_43_end;
        }
        not_always_1952_43 = loop_count + 2;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1952_43_end: ;
}
void Frames::event_func_10383()
{
    // event 1953_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1)) goto event_1953_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (4))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1953_43_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1953_43_end: ;
}
void Frames::event_func_10384()
{
    // event 1954_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1954_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1954_43_end;
        if (not_always_1954_43 > loop_count) {
            not_always_1954_43 = loop_count + 2;
            goto event_1954_43_end;
        }
        not_always_1954_43 = loop_count + 2;
        media.play_id(SOUND_COMMON_FLAMETHROWER1_70, -1, 1);
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -90);
        }
    }
    event_1954_43_end: ;
}
void Frames::event_func_10385()
{
    // event 1955_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1955_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1955_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(7, 1);
        }
    }
    event_1955_43_end: ;
}
void Frames::event_func_10386()
{
    // event 1956_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1956_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1956_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_1956_43_end: ;
}
void Frames::event_func_10387()
{
    // event 1957_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1957_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1957_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_1957_43_end: ;
}
void Frames::event_func_10388()
{
    // event 1958_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1958_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1958_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(3, -5);
            ((Active*)*it)->alterables->values.set(2, 2*((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
        }
        media.play_id(SOUND_COMMON_JUMP_8, -1, 1);
    }
    event_1958_43_end: ;
}
void Frames::event_func_10389()
{
    // event 1959_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1959_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1959_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.2, 8));
        }
    }
    event_1959_43_end: ;
}
