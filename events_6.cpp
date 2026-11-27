#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_425()
{
    // event 10_3
    {
        // group: Load keys
        if (!((global_values->get(7)) == (1))) goto event_10_3_end;
        if (not_always_10_3 > loop_count) {
            not_always_10_3 = loop_count + 2;
            goto event_10_3_end;
        }
        not_always_10_3 = loop_count + 2;
        if (!group_load_keys_load_keys_controller_1) {
            group_load_keys_load_keys_controller_1 = true;
        }
    }
    event_10_3_end: ;
}
void Frames::event_func_426()
{
    // event 11_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_11_3_end;
        if (!((global_values->get(7)) == (1))) goto event_11_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (0))) goto event_11_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (0))) goto event_11_3_end;
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->set_value(((Active*)get_instance(iconjoypad_86_instances))->alterables->values.get(loop_load_keys_index), 1+loop_load_keys_index, 1);
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->set_value(((Active*)get_instance(iconjoypad_86_instances))->alterables->values.get(loop_load_keys_index+8), 1+loop_load_keys_index, 0);
    }
    event_11_3_end: ;
}
void Frames::event_func_427()
{
    // event 12_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_12_3_end;
        if (!((global_values->get(7)) == (1))) goto event_12_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (0))) goto event_12_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_button_16+number_to_string(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)));
        }
    }
    event_12_3_end: ;
}
void Frames::event_func_428()
{
    // event 13_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_13_3_end;
        if (!((global_values->get(7)) == (1))) goto event_13_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (1))) goto event_13_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_d_pad_17+number_to_string(((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)));
        }
    }
    event_13_3_end: ;
}
void Frames::event_func_429()
{
    // event 14_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_14_3_end;
        if (!((global_values->get(7)) == (1))) goto event_14_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (2))) goto event_14_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (-1))) goto event_14_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_joystick_left_18);
        }
    }
    event_14_3_end: ;
}
void Frames::event_func_430()
{
    // event 15_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_15_3_end;
        if (!((global_values->get(7)) == (1))) goto event_15_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (2))) goto event_15_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (1))) goto event_15_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_joystick_right_19);
        }
    }
    event_15_3_end: ;
}
void Frames::event_func_431()
{
    // event 16_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_16_3_end;
        if (!((global_values->get(7)) == (1))) goto event_16_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (3))) goto event_16_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (-1))) goto event_16_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_joystick_up_20);
        }
    }
    event_16_3_end: ;
}
void Frames::event_func_432()
{
    // event 17_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_17_3_end;
        if (!((global_values->get(7)) == (1))) goto event_17_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (3))) goto event_17_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (1))) goto event_17_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_joystick_down_21);
        }
    }
    event_17_3_end: ;
}
void Frames::event_func_433()
{
    // event 18_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_18_3_end;
        if (!((global_values->get(7)) == (1))) goto event_18_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (4))) goto event_18_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (-1))) goto event_18_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_z_22);
        }
    }
    event_18_3_end: ;
}
void Frames::event_func_434()
{
    // event 19_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_19_3_end;
        if (!((global_values->get(7)) == (1))) goto event_19_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (4))) goto event_19_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (1))) goto event_19_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_z_23);
        }
    }
    event_19_3_end: ;
}
void Frames::event_func_435()
{
    // event 20_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_20_3_end;
        if (!((global_values->get(7)) == (1))) goto event_20_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (5))) goto event_20_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (-1))) goto event_20_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_analog_left_24);
        }
    }
    event_20_3_end: ;
}
void Frames::event_func_436()
{
    // event 21_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_21_3_end;
        if (!((global_values->get(7)) == (1))) goto event_21_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (5))) goto event_21_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (1))) goto event_21_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_analog_right_25);
        }
    }
    event_21_3_end: ;
}
void Frames::event_func_437()
{
    // event 22_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_22_3_end;
        if (!((global_values->get(7)) == (1))) goto event_22_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (6))) goto event_22_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (-1))) goto event_22_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_analog_up_26);
        }
    }
    event_22_3_end: ;
}
void Frames::event_func_438()
{
    // event 23_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_23_3_end;
        if (!((global_values->get(7)) == (1))) goto event_23_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (6))) goto event_23_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (1))) goto event_23_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_analog_down_27);
        }
    }
    event_23_3_end: ;
}
void Frames::event_func_439()
{
    // event 24_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_24_3_end;
        if (!((global_values->get(7)) == (1))) goto event_24_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (7))) goto event_24_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (-1))) goto event_24_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_zr_28);
        }
    }
    event_24_3_end: ;
}
void Frames::event_func_440()
{
    // event 25_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_25_3_end;
        if (!((global_values->get(7)) == (1))) goto event_25_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (7))) goto event_25_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (1))) goto event_25_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_zr_29);
        }
    }
    event_25_3_end: ;
}
void Frames::event_func_441()
{
    // event 26_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_26_3_end;
        if (!((global_values->get(7)) == (1))) goto event_26_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (8))) goto event_26_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (-1))) goto event_26_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_slider_30);
        }
    }
    event_26_3_end: ;
}
void Frames::event_func_442()
{
    // event 27_3
    {
        if (!(group_load_keys_load_keys_controller_1)) goto event_27_3_end;
        if (!((global_values->get(7)) == (1))) goto event_27_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 0)) == (8))) goto event_27_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->get_value(1+loop_load_keys_index, 1)) == (1))) goto event_27_3_end;
        {
            double check_value = loop_load_keys_index;
            controlbox_69_instances.clear_selection();
            for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
                if (!((*it)->alterables->values.get(0) == check_value)) it.deselect();
            }
        }
        for (ObjectIterator it(controlbox_69_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->strings.set(0, str_slider_31);
        }
    }
    event_27_3_end: ;
}
void Frames::loop_load_keys_3()
{
    event_func_421();
    event_func_422();
    event_func_423();
    event_func_424();
    event_func_425();
    event_func_426();
    event_func_427();
    event_func_428();
    event_func_429();
    event_func_430();
    event_func_431();
    event_func_432();
    event_func_433();
    event_func_434();
    event_func_435();
    event_func_436();
    event_func_437();
    event_func_438();
    event_func_439();
    event_func_440();
    event_func_441();
    event_func_442();
}
void Frames::event_func_443()
{
    // event 179_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_key_1)) goto event_179_3_end;
        if (!((((ArrayObject*)get_instance(mapdatatemporary_129_instances))->get_value(1+loop_check_keys_index, 1)) == (((Active*)get_instance(okay2_78_instances))->alterables->values.get(0)))) goto event_179_3_end;
        ((ArrayObject*)get_instance(mapdatatemporary_129_instances))->set_value(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(3), 1+loop_check_keys_index, 1);
    }
    event_179_3_end: ;
}
void Frames::event_func_444()
{
    // event 180_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_key_1)) goto event_180_3_end;
        if (!((loop_check_keys_index) == (8))) goto event_180_3_end;
        ((ArrayObject*)get_instance(mapdatatemporary_129_instances))->set_value(((Active*)get_instance(okay2_78_instances))->alterables->values.get(0), ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0), 1);
        set_timer((0) / 1000.0);
            group_controls_controls_assign_key_1 = false;
    
        if (!group_controls_controls_select_options_1) {
            group_controls_controls_select_options_1 = true;
        }
        {
            loop_load_keys_running = true;
            int times = int(8);
            loop_load_keys_index = 0;
            while (loop_load_keys_index < times) {
                loop_load_keys_3();
                if (!loop_load_keys_running) break;
                loop_load_keys_index++;
            }
        }
    }
    event_180_3_end: ;
}
void Frames::loop_check_keys_3()
{
    event_func_443();
    event_func_444();
}
void Frames::event_func_445()
{
    // event 215_3
    {
        if (!(group_controls_1 && group_controls_controls_assign_controller_1 && group_controls_controls_assign_controller_p1_waiting_for_input_1 && group_controls_controls_assign_controller_p1_waiting_for_input_p1_waiting_for_input_controller_1)) goto event_215_3_end;
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->set_value(((Active*)get_instance(iconjoypad_86_instances))->alterables->values.get(24), ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0), 0, 0);
        ((ArrayObject*)get_instance(mapdatatemporary2_130_instances))->set_value(((Active*)get_instance(iconjoypad_86_instances))->alterables->values.get(25), ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0), 1, 0);
            group_controls_controls_assign_controller_1 = false;
    
        if (!group_controls_controls_select_options_1) {
            group_controls_controls_select_options_1 = true;
        }
        {
            loop_load_keys_running = true;
            int times = int(8);
            loop_load_keys_index = 0;
            while (loop_load_keys_index < times) {
                loop_load_keys_3();
                if (!loop_load_keys_running) break;
                loop_load_keys_index++;
            }
        }
        set_timer((0) / 1000.0);
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
    }
    event_215_3_end: ;
}
void Frames::loop_save_input_3()
{
    event_func_445();
}
void Frames::test_collisions_3()
{
    ObjectList::iterator it1, it2;
}
void Frames::event_func_446()
{
    // event 31_3
    {
        if (!(group_fade_in_1)) goto event_31_3_end;
        if (!((fade_54_instances.size()) > (0))) goto event_31_3_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->alterables->values.get(0)*4, 128));
        }
    }
    event_31_3_end: ;
}
void Frames::event_func_447()
{
    // event 32_3
    {
        if (!(group_fade_in_1)) goto event_32_3_end;
        fade_54_instances.clear_selection();
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (32))) { it.deselect(); continue; }
        }
        if (!fade_54_instances.has_selection()) goto event_32_3_end;
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        set_timer((0) / 1000.0);
            group_fade_in_1 = false;
    
        if (!group_select_an_option_1) {
            group_select_an_option_1 = true;
        }
    }
    event_32_3_end: ;
}
void Frames::event_func_448()
{
    // event 34_3
    {
        // group: Background
        ((SystemBox*)get_instance(backgroundsystembox2_60_instances))->set_global_position(((SystemBox*)get_instance(backgroundsystembox2_60_instances))->get_x(), frame_top()+((SystemBox*)get_instance(backgroundsystembox2_60_instances))->alterables->values.get(0)+sin_deg(((Active*)get_instance(mainoption1_70_instances))->alterables->values.get(0))*16);
        particle_61_instances.clear_selection();
        for (ObjectIterator it(particle_61_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(0));
        }
        ((Active*)get_instance(mainoption1_70_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(mainoption1_70_instances))->alterables->values.add(2, 1);
    }
    event_34_3_end: ;
}
void Frames::event_func_449()
{
    // event 35_3
    {
        // group: Background
        if (!((((Active*)get_instance(mainoption1_70_instances))->alterables->values.get(1)%math_helper%10) == (0))) goto event_35_3_end;
        ((SystemBox*)get_instance(backgroundsystembox2_60_instances))->set_global_position(((SystemBox*)get_instance(backgroundsystembox2_60_instances))->get_x()-1, ((SystemBox*)get_instance(backgroundsystembox2_60_instances))->get_y());
    }
    event_35_3_end: ;
}
void Frames::event_func_450()
{
    // event 36_3
    {
        // group: Background
        particle_61_instances.clear_selection();
        for (ObjectIterator it(particle_61_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (100))) { it.deselect(); continue; }
        }
        if (!particle_61_instances.has_selection()) goto event_36_3_end;
        for (ObjectIterator it(particle_61_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
            ((Active*)*it)->alterables->values.sub(1, 100);
        }
    }
    event_36_3_end: ;
}
void Frames::event_func_451()
{
    // event 37_3
    {
        // group: Background
        particle_61_instances.clear_selection();
        for (ObjectIterator it(particle_61_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-100))) { it.deselect(); continue; }
        }
        if (!particle_61_instances.has_selection()) goto event_37_3_end;
        for (ObjectIterator it(particle_61_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+200+global_values->get(16));
            ((Active*)*it)->set_direction(pick_random(3, 0, 1, 2));
        }
    }
    event_37_3_end: ;
}
void Frames::event_func_452()
{
    // event 38_3
    {
        // group: Background
        if (!((((Active*)get_instance(mainoption1_70_instances))->alterables->values.get(0)) >= (360))) goto event_38_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->values.sub(0, 360);
    }
    event_38_3_end: ;
}
void Frames::event_func_453()
{
    // event 39_3
    {
        // group: Background
        if (!((((Active*)get_instance(mainoption1_70_instances))->alterables->values.get(1)) >= (3200))) goto event_39_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->values.sub(1, 3200);
        ((SystemBox*)get_instance(backgroundsystembox2_60_instances))->set_global_position(((SystemBox*)get_instance(backgroundsystembox2_60_instances))->get_x()+320, ((SystemBox*)get_instance(backgroundsystembox2_60_instances))->get_y());
    }
    event_39_3_end: ;
}
void Frames::event_func_454()
{
    // event 40_3
    {
        // group: Background
        if (!((((Active*)get_instance(mainoption1_70_instances))->alterables->values.get(2)) > (30))) goto event_40_3_end;
        star_63_instances.clear_selection();
        FrameObject * single_instance_40_3_0; single_instance_40_3_0 = pick_random(star_63_instances);
        if (single_instance_40_3_0 == NULL) goto event_40_3_end;
        if (((Active*)single_instance_40_3_0)->test_animation(7)) goto event_40_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->values.sub(2, 10+randrange(80));
        ((Active*)((Active*)single_instance_40_3_0))->force_animation(7);
    }
    event_40_3_end: ;
}
void Frames::event_func_455()
{
    // event 41_3
    {
        if (!(group_select_an_option_1)) goto event_41_3_end;
        set_lives(global_values->get(8));
    }
    event_41_3_end: ;
}
void Frames::event_func_456()
{
    // event 42_3
    {
        if (!(group_select_an_option_1)) goto event_42_3_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_42_3_end;
        {
            FrameObject * parent = ((Active*)get_single(qualifier_1));
            if (parent == NULL) goto pos_end_42_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_42_3_0: ;
        }
    }
    event_42_3_end: ;
}
void Frames::event_func_457()
{
    // event 43_3
    {
        if (!(group_select_an_option_1)) goto event_43_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_43_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_43_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_43_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_43_3_end: ;
}
void Frames::event_func_458()
{
    // event 44_3
    {
        if (!(group_select_an_option_1)) goto event_44_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_44_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_44_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) > (0))) goto event_44_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_44_3_end: ;
}
void Frames::event_func_459()
{
    // event 45_3
    {
        if (!(group_select_an_option_1)) goto event_45_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_45_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_45_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (4))) goto event_45_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_45_3_end: ;
}
void Frames::event_func_460()
{
    // event 46_3
    {
        if (!(group_select_an_option_1)) goto event_46_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_46_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_46_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_46_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_46_3_end: ;
}
void Frames::event_func_461()
{
    // event 47_3
    {
        if (!(group_select_an_option_1)) goto event_47_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_47_3_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!qualifier_1.has_selection()) goto event_47_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, 4);
        }
    }
    event_47_3_end: ;
}
void Frames::event_func_462()
{
    // event 48_3
    bool or_result_48_3 = false;
    bool or_temp_result_48_3_0 = false;
    {
        if (!(group_select_an_option_1)) goto or_event_48_3_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_48_3_0_end;
        if (!(frame_time >= 0.2)) goto or_event_48_3_0_end;
        or_result_48_3 = true;
        or_temp_result_48_3_0 = true;
    }
    or_event_48_3_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_48_3_0) {
        playerinput_19_instances.save_selection();
    }
    // event 48_3
    bool or_temp_result_48_3_1 = false;
    {
        if (!(group_select_an_option_1)) goto or_event_48_3_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_48_3_1_end;
        if (!(frame_time >= 0.2)) goto or_event_48_3_1_end;
        or_result_48_3 = true;
        or_temp_result_48_3_1 = true;
    }
    or_event_48_3_1_end: ;
    if (or_temp_result_48_3_1) {
        playerinput_19_instances.save_selection();
    }
    // event 48_3
    bool or_temp_result_48_3_2 = false;
    {
        if (!(group_select_an_option_1)) goto or_event_48_3_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_48_3_2_end;
        if (!(frame_time >= 0.2)) goto or_event_48_3_2_end;
        or_result_48_3 = true;
        or_temp_result_48_3_2 = true;
        or_event_48_3_2_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_48_3_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_48_3) goto or_final_or_event_48_3_2_end;
        inputsp1_21_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_48_3_0 || or_temp_result_48_3_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_48_3_2) {
            inputsp1_21_instances.restore_selection();
        }
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_48_3_2_end: ;
}
void Frames::event_func_463()
{
    // event 49_3
    {
        if (!(group_select_an_option_1)) goto event_49_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_49_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_49_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
            group_select_an_option_1 = false;
    
        if (!group_adventure_1) {
            group_adventure_1 = true;
        }
        if (!group_adventure_adventure_zoom_in_1) {
            group_adventure_adventure_zoom_in_1 = true;
        }
        if (!group_adventure_adventure_menu_display_1) {
            group_adventure_adventure_menu_display_1 = true;
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        {
            loop_load_running = true;
            int times = int(8);
            loop_load_index = 0;
            while (loop_load_index < times) {
                loop_load_3();
                if (!loop_load_running) break;
                loop_load_index++;
            }
        }
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_49_3_end: ;
}
void Frames::event_func_464()
{
    // event 50_3
    {
        if (!(group_select_an_option_1)) goto event_50_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_50_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_50_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
            group_select_an_option_1 = false;
    
        if (!group_transition_1) {
            group_transition_1 = true;
        }
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        fade_54_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fade_54(0, 0), 3);
            fade_54_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 3);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
        }
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(240);
        }
        media.stop_channel(32-1);
        global_values->set(0, 0);
    }
    event_50_3_end: ;
}
void Frames::event_func_465()
{
    // event 51_3
    {
        if (!(group_select_an_option_1)) goto event_51_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_51_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_51_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
            group_select_an_option_1 = false;
    
        if (!group_transition_1) {
            group_transition_1 = true;
        }
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        fade_54_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fade_54(0, 0), 3);
            fade_54_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 3);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
        }
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(240);
        }
        media.stop_channel(32-1);
        global_values->set(0, 0);
    }
    event_51_3_end: ;
}
void Frames::event_func_466()
{
    // event 52_3
    {
        if (!(group_select_an_option_1)) goto event_52_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_52_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_52_3_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
            group_select_an_option_1 = false;
    
        if (!group_options_1) {
            group_options_1 = true;
        }
        if (!group_options_options_zoom_in_1) {
            group_options_options_zoom_in_1 = true;
        }
        if (!group_options_options_menu_selection_1) {
            group_options_options_menu_selection_1 = true;
        }
    }
    event_52_3_end: ;
}
void Frames::event_func_467()
{
    // event 53_3
    {
        if (!(group_select_an_option_1)) goto event_53_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_53_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_53_3_end;
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
            group_select_an_option_1 = false;
    
        if (!group_transition_1) {
            group_transition_1 = true;
        }
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        fade_54_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fade_54(0, 0), 3);
            fade_54_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 3);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
        }
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(240);
        }
        media.stop_channel(32-1);
    }
    event_53_3_end: ;
}
void Frames::event_func_468()
{
    // event 57_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_zoom_in_1)) goto event_57_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_y()) < (360))) goto event_57_3_end;
        ((Active*)get_instance(scrolldot_6_instances))->set_y(get_min(((Active*)get_instance(scrolldot_6_instances))->get_y()+24, 360));
        set_display_center(-1, ((Active*)get_instance(scrolldot_6_instances))->get_y());
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(copy_112_instances))->set_visible(false);
    }
    event_57_3_end: ;
}
void Frames::event_func_469()
{
    // event 58_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_zoom_in_1)) goto event_58_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_y()) >= (360))) goto event_58_3_end;
        if (!group_adventure_adventure_select_options_1) {
            group_adventure_adventure_select_options_1 = true;
        }
            group_adventure_adventure_zoom_in_1 = false;
    
    }
    event_58_3_end: ;
}
void Frames::event_func_470()
{
    // event 59_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto event_59_3_end;
        qualifier_1.clear_selection();
        for (QualifierIterator it(qualifier_1); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)*it)->alterables->values.get(23));
        }
    }
    event_59_3_end: ;
}
void Frames::event_func_471()
{
    // event 60_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto event_60_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_60_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_60_3_end;
        if (!((((Active*)get_instance(fileback_96_instances))->alterables->values.get(9)) == (0))) goto event_60_3_end;
        ((Active*)get_instance(fileback_96_instances))->alterables->values.set(9, 120);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(12, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)+8-1)%math_helper%8);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_60_3_end: ;
}
void Frames::event_func_472()
{
    // event 61_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto event_61_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_61_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_61_3_end;
        if (!((((Active*)get_instance(fileback_96_instances))->alterables->values.get(9)) == (0))) goto event_61_3_end;
        ((Active*)get_instance(fileback_96_instances))->alterables->values.set(9, -120);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(12, (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)+1)%math_helper%8);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_61_3_end: ;
}
void Frames::event_func_473()
{
    // event 62_3
    bool or_result_62_3 = false;
    bool or_temp_result_62_3_0 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto or_event_62_3_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_62_3_0_end;
        fileback_96_instances.clear_selection();
        for (ObjectIterator it(fileback_96_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!fileback_96_instances.has_selection()) goto or_event_62_3_0_end;
        or_result_62_3 = true;
        or_temp_result_62_3_0 = true;
    }
    or_event_62_3_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    fileback_96_instances.clear_saved_selection();
    if (or_temp_result_62_3_0) {
        playerinput_19_instances.save_selection();
        fileback_96_instances.save_selection();
    }
    // event 62_3
    bool or_temp_result_62_3_1 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto or_event_62_3_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_62_3_1_end;
        fileback_96_instances.clear_selection();
        for (ObjectIterator it(fileback_96_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!fileback_96_instances.has_selection()) goto or_event_62_3_1_end;
        or_result_62_3 = true;
        or_temp_result_62_3_1 = true;
        or_event_62_3_1_end: ;
        if (or_temp_result_62_3_1) {
            playerinput_19_instances.save_selection();
            fileback_96_instances.save_selection();
        }
        if (!or_result_62_3) goto or_final_or_event_62_3_1_end;
        fileback_96_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_62_3_0 || or_temp_result_62_3_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_62_3_0 || or_temp_result_62_3_1) {
            fileback_96_instances.restore_selection();
        }
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%2);
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    or_final_or_event_62_3_1_end: ;
}
void Frames::event_func_474()
{
    // event 63_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto event_63_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_63_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_63_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(filetext_114_instances))->alterables->values.set(25, 4);
    }
    event_63_3_end: ;
}
void Frames::event_func_475()
{
    // event 64_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto event_64_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_64_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_64_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(return_111_instances))->alterables->values.set(25, 4);
    }
    event_64_3_end: ;
}
void Frames::event_func_476()
{
    // event 65_3
    bool or_result_65_3 = false;
    bool or_temp_result_65_3_0 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto or_event_65_3_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_65_3_0_end;
        or_result_65_3 = true;
        or_temp_result_65_3_0 = true;
    }
    or_event_65_3_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_65_3_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 65_3
    bool or_temp_result_65_3_1 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto or_event_65_3_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_65_3_1_end;
        or_result_65_3 = true;
        or_temp_result_65_3_1 = true;
    }
    or_event_65_3_1_end: ;
    if (or_temp_result_65_3_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 65_3
    bool or_temp_result_65_3_2 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto or_event_65_3_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_65_3_2_end;
        or_result_65_3 = true;
        or_temp_result_65_3_2 = true;
        or_event_65_3_2_end: ;
        if (or_temp_result_65_3_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_65_3) goto or_final_or_event_65_3_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_65_3_0 || or_temp_result_65_3_1 || or_temp_result_65_3_2) {
            inputsp1_21_instances.restore_selection();
        }
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_65_3_2_end: ;
}
void Frames::event_func_477()
{
    // event 66_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto event_66_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_66_3_end;
        if (!((((Active*)get_instance(fileback_96_instances))->alterables->values.get(9)) == (0))) goto event_66_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_66_3_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!filesaveslot_108_instances.has_selection()) goto event_66_3_end;
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
            group_adventure_adventure_select_options_1 = false;
    
        if (!group_adventure_adventure_file_options_1) {
            group_adventure_adventure_file_options_1 = true;
        }
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(false);
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 2);
    }
    event_66_3_end: ;
}
void Frames::event_func_478()
{
    // event 67_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto event_67_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_67_3_end;
        if (!((((Active*)get_instance(fileback_96_instances))->alterables->values.get(9)) == (0))) goto event_67_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_67_3_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!filesaveslot_108_instances.has_selection()) goto event_67_3_end;
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_67_3_end: ;
}
void Frames::event_func_479()
{
    // event 68_3
    bool or_result_68_3 = false;
    bool or_temp_result_68_3_0 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto or_event_68_3_0_end;
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!mainoption1_70_instances.has_selection()) goto or_event_68_3_0_end;
        fileback_96_instances.clear_selection();
        for (ObjectIterator it(fileback_96_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!fileback_96_instances.has_selection()) goto or_event_68_3_0_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_68_3_0_end;
        or_result_68_3 = true;
        or_temp_result_68_3_0 = true;
    }
    or_event_68_3_0_end: ;
    crystalcursor_75_instances.clear_saved_selection();
    mainoption1_70_instances.clear_saved_selection();
    fileback_96_instances.clear_saved_selection();
    if (or_temp_result_68_3_0) {
        crystalcursor_75_instances.save_selection();
        mainoption1_70_instances.save_selection();
        fileback_96_instances.save_selection();
    }
    // event 68_3
    bool or_temp_result_68_3_1 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto or_event_68_3_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_68_3_1_end;
        fileback_96_instances.clear_selection();
        for (ObjectIterator it(fileback_96_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!fileback_96_instances.has_selection()) goto or_event_68_3_1_end;
        crystalcursor_75_instances.clear_selection();
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!crystalcursor_75_instances.has_selection()) goto or_event_68_3_1_end;
        or_result_68_3 = true;
        or_temp_result_68_3_1 = true;
        or_event_68_3_1_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_68_3_1) {
            crystalcursor_75_instances.save_selection();
            inputsp1_21_instances.save_selection();
            fileback_96_instances.save_selection();
        }
        if (!or_result_68_3) goto or_final_or_event_68_3_1_end;
        mainoption1_70_instances.empty_selection();
        inputsp1_21_instances.empty_selection();
        fileback_96_instances.empty_selection();
        crystalcursor_75_instances.empty_selection();
        if (or_temp_result_68_3_0 || or_temp_result_68_3_1) {
            crystalcursor_75_instances.restore_selection();
        }
        if (or_temp_result_68_3_0) {
            mainoption1_70_instances.restore_selection();
        }
        if (or_temp_result_68_3_1) {
            inputsp1_21_instances.restore_selection();
        }
        if (or_temp_result_68_3_0 || or_temp_result_68_3_1) {
            fileback_96_instances.restore_selection();
        }
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
            group_adventure_adventure_select_options_1 = false;
    
            group_adventure_adventure_menu_display_1 = false;
    
        if (!group_adventure_adventure_zoom_out_1) {
            group_adventure_adventure_zoom_out_1 = true;
        }
        for (ObjectIterator it(crystalcursor_75_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(mainoption3_72_instances, it.current_index));
            if (parent == NULL) goto pos_end_68_3_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_68_3_0: ;
        }
    }
    or_final_or_event_68_3_1_end: ;
}
void Frames::event_func_480()
{
    // event 69_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_select_options_1)) goto event_69_3_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(13)) == (1))) goto event_69_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) != (1))) goto event_69_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_69_3_end: ;
}
void Frames::event_func_481()
{
    // event 70_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_70_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_off(1))) goto event_70_3_end;
        if (!((((Active*)get_instance(start_113_instances))->alterables->values.get(0)) < (300))) goto event_70_3_end;
        ((Active*)get_instance(start_113_instances))->alterables->values.add(0, 30);
        ((Active*)get_instance(start_113_instances))->set_x(((Active*)get_instance(start_113_instances))->get_x()-30);
        ((Active*)get_instance(copy_112_instances))->set_x(((Active*)get_instance(copy_112_instances))->get_x()-30);
        ((Active*)get_instance(filetext_114_instances))->set_x(((Active*)get_instance(filetext_114_instances))->get_x()-30);
        ((Counter*)get_instance(fileid_109_instances))->set_x(((Counter*)get_instance(fileid_109_instances))->get_x()-10);
    }
    event_70_3_end: ;
}
void Frames::event_func_482()
{
    // event 71_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_71_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_off(1))) goto event_71_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_off(0))) goto event_71_3_end;
        if (!((((Active*)get_instance(start_113_instances))->alterables->values.get(0)) >= (300))) goto event_71_3_end;
        ((Active*)get_instance(start_113_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
        ((Active*)get_instance(start_113_instances))->set_x(((Active*)get_instance(return_111_instances))->get_x());
        ((Active*)get_instance(start_113_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(copy_112_instances))->set_x(((Active*)get_instance(return_111_instances))->get_x());
        ((Active*)get_instance(copy_112_instances))->alterables->values.set(23, 0);
    }
    event_71_3_end: ;
}
void Frames::event_func_483()
{
    // event 72_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_72_3_end;
        if (!(((Active*)get_instance(filestageicon_98_instances))->flags & VISIBLE)) goto event_72_3_end;
        if (not_always_72_3 > loop_count) {
            not_always_72_3 = loop_count + 2;
            goto event_72_3_end;
        }
        not_always_72_3 = loop_count + 2;
        ((Active*)get_instance(copy_112_instances))->set_visible(true);
        ((Active*)get_instance(start_113_instances))->set_y(((Active*)get_instance(start_113_instances))->alterables->values.get(1));
        ((Active*)get_instance(start_113_instances))->force_frame(0);
        ((Active*)get_instance(copy_112_instances))->force_frame(0);
    }
    event_72_3_end: ;
}
void Frames::event_func_484()
{
    // event 73_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_73_3_end;
        if (((Active*)get_instance(filestageicon_98_instances))->flags & VISIBLE) goto event_73_3_end;
        if (not_always_73_3 > loop_count) {
            not_always_73_3 = loop_count + 2;
            goto event_73_3_end;
        }
        not_always_73_3 = loop_count + 2;
        ((Active*)get_instance(start_113_instances))->set_y(((Active*)get_instance(start_113_instances))->alterables->values.get(1));
        ((Active*)get_instance(copy_112_instances))->set_visible(true);
        ((Active*)get_instance(start_113_instances))->force_frame(1);
        ((Active*)get_instance(copy_112_instances))->force_frame(1);
    }
    event_73_3_end: ;
}
void Frames::event_func_485()
{
    // event 74_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_74_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_74_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_74_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_74_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_on(0))) goto event_74_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_off(1))) goto event_74_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_74_3_end: ;
}
void Frames::event_func_486()
{
    // event 75_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_75_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(6)) == (1))) goto event_75_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_75_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) > (2))) goto event_75_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_on(0))) goto event_75_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_off(1))) goto event_75_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.sub(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_75_3_end: ;
}
void Frames::event_func_487()
{
    // event 76_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_76_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_76_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_76_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) < (4))) goto event_76_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_on(0))) goto event_76_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_off(1))) goto event_76_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.add(0, 1);
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_76_3_end: ;
}
void Frames::event_func_488()
{
    // event 77_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_77_3_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(7)) == (1))) goto event_77_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_off(3))) goto event_77_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_77_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_on(0))) goto event_77_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_off(1))) goto event_77_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 2);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_77_3_end: ;
}
void Frames::event_func_489()
{
    // event 78_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_78_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_78_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_78_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(start_113_instances))->alterables->values.set(25, 4);
    }
    event_78_3_end: ;
}
void Frames::event_func_490()
{
    // event 79_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_79_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_79_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_79_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(copy_112_instances))->alterables->values.set(25, 4);
    }
    event_79_3_end: ;
}
void Frames::event_func_491()
{
    // event 80_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_80_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_80_3_end;
        if (!(((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.is_on(3))) goto event_80_3_end;
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.disable(3);
        ((Active*)get_instance(return_111_instances))->alterables->values.set(25, 4);
    }
    event_80_3_end: ;
}
void Frames::event_func_492()
{
    // event 81_3
    bool or_result_81_3 = false;
    bool or_temp_result_81_3_0 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto or_event_81_3_0_end;
        start_113_instances.clear_selection();
        for (ObjectIterator it(start_113_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!start_113_instances.has_selection()) goto or_event_81_3_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_81_3_0_end;
        or_result_81_3 = true;
        or_temp_result_81_3_0 = true;
    }
    or_event_81_3_0_end: ;
    start_113_instances.clear_saved_selection();
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_81_3_0) {
        start_113_instances.save_selection();
        inputsp1_21_instances.save_selection();
    }
    // event 81_3
    bool or_temp_result_81_3_1 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto or_event_81_3_1_end;
        start_113_instances.clear_selection();
        for (ObjectIterator it(start_113_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!start_113_instances.has_selection()) goto or_event_81_3_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_81_3_1_end;
        or_result_81_3 = true;
        or_temp_result_81_3_1 = true;
    }
    or_event_81_3_1_end: ;
    if (or_temp_result_81_3_1) {
        start_113_instances.save_selection();
        inputsp1_21_instances.save_selection();
    }
    // event 81_3
    bool or_temp_result_81_3_2 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto or_event_81_3_2_end;
        start_113_instances.clear_selection();
        for (ObjectIterator it(start_113_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!start_113_instances.has_selection()) goto or_event_81_3_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_81_3_2_end;
        or_result_81_3 = true;
        or_temp_result_81_3_2 = true;
        or_event_81_3_2_end: ;
        if (or_temp_result_81_3_2) {
            start_113_instances.save_selection();
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_81_3) goto or_final_or_event_81_3_2_end;
        start_113_instances.empty_selection();
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_81_3_0 || or_temp_result_81_3_1 || or_temp_result_81_3_2) {
            start_113_instances.restore_selection();
        }
        if (or_temp_result_81_3_0 || or_temp_result_81_3_1 || or_temp_result_81_3_2) {
            inputsp1_21_instances.restore_selection();
        }
        mainoption1_70_instances.clear_selection();
        for (ObjectIterator it(mainoption1_70_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_81_3_2_end: ;
}
void Frames::event_func_493()
{
    // event 82_3
    bool or_result_82_3 = false;
    bool or_temp_result_82_3_0 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto or_event_82_3_0_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto or_event_82_3_0_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto or_event_82_3_0_end;
        if (((Active*)get_instance(filestageicon_98_instances))->flags & VISIBLE) goto or_event_82_3_0_end;
        or_result_82_3 = true;
        or_temp_result_82_3_0 = true;
    }
    or_event_82_3_0_end: ;
    // event 82_3
    bool or_temp_result_82_3_1 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto or_event_82_3_1_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto or_event_82_3_1_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto or_event_82_3_1_end;
        if (((Active*)get_instance(filestageicon_98_instances))->flags & VISIBLE) goto or_event_82_3_1_end;
        or_result_82_3 = true;
        or_temp_result_82_3_1 = true;
        or_event_82_3_1_end: ;
        if (!or_result_82_3) goto or_final_or_event_82_3_1_end;
        global_values->set(0, -2+(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)-2));
    }
    or_final_or_event_82_3_1_end: ;
}
void Frames::event_func_494()
{
    // event 83_3
    bool or_result_83_3 = false;
    bool or_temp_result_83_3_0 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto or_event_83_3_0_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto or_event_83_3_0_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto or_event_83_3_0_end;
        or_result_83_3 = true;
        or_temp_result_83_3_0 = true;
    }
    or_event_83_3_0_end: ;
    // event 83_3
    bool or_temp_result_83_3_1 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto or_event_83_3_1_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto or_event_83_3_1_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto or_event_83_3_1_end;
        if (((Active*)get_instance(filestageicon_98_instances))->flags & VISIBLE) goto or_event_83_3_1_end;
        or_result_83_3 = true;
        or_temp_result_83_3_1 = true;
        or_event_83_3_1_end: ;
        if (!or_result_83_3) goto or_final_or_event_83_3_1_end;
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(start_113_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(start_113_instances))->alterables->flags.disable(0);
        global_values->set(10, ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)+1);
            group_adventure_adventure_file_options_1 = false;
    
        if (!group_transition_1) {
            group_transition_1 = true;
        }
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        media.stop_channel(32-1);
        fade_54_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fade_54(0, 0), 3);
            fade_54_instances.add_back();
        }
        fadeedge_57_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_fadeedge_57(0, 0), 3);
            fadeedge_57_instances.add_back();
        }
        for (ObjectIterator it(fade_54_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(240);
        }
        for (ObjectIterator it(fadeedge_57_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_direction(8);
        }
        global_values->set(1, ((Active*)get_instance(filestageicon_98_instances))->alterables->values.get(0));
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 2);
            group_adventure_adventure_menu_display_1 = false;
    
    }
    or_final_or_event_83_3_1_end: ;
}
void Frames::event_func_495()
{
    // event 84_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_84_3_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto event_84_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_84_3_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)))) { it.deselect(); continue; }
        }
        if (!filesaveslot_108_instances.has_selection()) goto event_84_3_end;
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(false);
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(start_113_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(start_113_instances))->alterables->flags.disable(0);
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1);
        }
    }
    event_84_3_end: ;
}
void Frames::event_func_496()
{
    // event 85_3
    bool or_result_85_3 = false;
    bool or_temp_result_85_3_0 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto or_event_85_3_0_end;
        if (!(((Active*)get_instance(mainoption1_70_instances))->alterables->flags.is_on(0))) goto or_event_85_3_0_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto or_event_85_3_0_end;
        or_result_85_3 = true;
        or_temp_result_85_3_0 = true;
    }
    or_event_85_3_0_end: ;
    // event 85_3
    bool or_temp_result_85_3_1 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto or_event_85_3_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(13)) == (1))) goto or_event_85_3_1_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_on(0))) goto or_event_85_3_1_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto or_event_85_3_1_end;
        or_result_85_3 = true;
        or_temp_result_85_3_1 = true;
        or_event_85_3_1_end: ;
        if (!or_result_85_3) goto or_final_or_event_85_3_1_end;
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(false);
        ((Active*)get_instance(mainoption1_70_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(start_113_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(start_113_instances))->alterables->flags.disable(0);
    }
    or_final_or_event_85_3_1_end: ;
}
void Frames::event_func_497()
{
    // event 86_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_86_3_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(13)) == (1))) goto event_86_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_on(0))) goto event_86_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) != (4))) goto event_86_3_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(crystalcursor_75_instances))->alterables->flags.enable(3);
    }
    event_86_3_end: ;
}
void Frames::event_func_498()
{
    // event 87_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_87_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_on(1))) goto event_87_3_end;
        if (!((((Active*)get_instance(start_113_instances))->alterables->values.get(0)) > (0))) goto event_87_3_end;
        ((Active*)get_instance(start_113_instances))->alterables->values.add(0, -30);
        ((Active*)get_instance(start_113_instances))->set_x(((Active*)get_instance(start_113_instances))->get_x()+30);
        ((Active*)get_instance(copy_112_instances))->set_x(((Active*)get_instance(copy_112_instances))->get_x()+30);
        ((Active*)get_instance(filetext_114_instances))->set_x(((Active*)get_instance(filetext_114_instances))->get_x()+30);
        ((Counter*)get_instance(fileid_109_instances))->set_x(((Counter*)get_instance(fileid_109_instances))->get_x()-10);
    }
    event_87_3_end: ;
}
void Frames::event_func_499()
{
    // event 88_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_file_options_1)) goto event_88_3_end;
        if (!(((Active*)get_instance(start_113_instances))->alterables->flags.is_on(1))) goto event_88_3_end;
        if (!((((Active*)get_instance(start_113_instances))->alterables->values.get(0)) <= (0))) goto event_88_3_end;
        ((Active*)get_instance(start_113_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(crystalcursor_75_instances))->set_visible(true);
            group_adventure_adventure_file_options_1 = false;
    
        if (!group_adventure_adventure_select_options_1) {
            group_adventure_adventure_select_options_1 = true;
        }
    }
    event_88_3_end: ;
}
void Frames::event_func_500()
{
    // event 89_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_zoom_out_1)) goto event_89_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_y()) > (120))) goto event_89_3_end;
        ((Active*)get_instance(scrolldot_6_instances))->set_y(get_max(((Active*)get_instance(scrolldot_6_instances))->get_y()-24, 120));
        set_display_center(-1, ((Active*)get_instance(scrolldot_6_instances))->get_y());
    }
    event_89_3_end: ;
}
void Frames::event_func_501()
{
    // event 90_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_zoom_out_1)) goto event_90_3_end;
        if (!((((Active*)get_instance(scrolldot_6_instances))->get_y()) <= (120))) goto event_90_3_end;
        if (!group_select_an_option_1) {
            group_select_an_option_1 = true;
        }
            group_adventure_adventure_zoom_out_1 = false;
    
        if (!group_clear_files_that_are_flagged_for_deletion_1) {
            group_clear_files_that_are_flagged_for_deletion_1 = true;
        }
        filesaveslotcharacter_110_instances.clear_selection();
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_90_3_end: ;
}
void Frames::event_func_502()
{
    // event 91_3
    bool or_result_91_3 = false;
    bool or_temp_result_91_3_0 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto or_event_91_3_0_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!filesaveslot_108_instances.has_selection()) goto or_event_91_3_0_end;
        or_result_91_3 = true;
        or_temp_result_91_3_0 = true;
    }
    or_event_91_3_0_end: ;
    filesaveslot_108_instances.clear_saved_selection();
    if (or_temp_result_91_3_0) {
        filesaveslot_108_instances.save_selection();
    }
    // event 91_3
    bool or_temp_result_91_3_1 = false;
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto or_event_91_3_1_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!filesaveslot_108_instances.has_selection()) goto or_event_91_3_1_end;
        or_result_91_3 = true;
        or_temp_result_91_3_1 = true;
        or_event_91_3_1_end: ;
        if (or_temp_result_91_3_1) {
            filesaveslot_108_instances.save_selection();
        }
        if (!or_result_91_3) goto or_final_or_event_91_3_1_end;
        filesaveslot_108_instances.clear_selection();
        if (or_temp_result_91_3_0 || or_temp_result_91_3_1) {
            filesaveslot_108_instances.restore_selection();
        }
        ((Active*)get_instance(filelabel_104_instances))->set_visible(false);
        ((Active*)get_instance(filelabel2_105_instances))->set_visible(false);
        ((Active*)get_instance(filestageicon_98_instances))->set_visible(false);
        ((Active*)get_instance(fileicon_99_instances))->set_visible(false);
        ((Counter*)get_instance(filecurrentstage_97_instances))->set_visible(false);
        ((Counter*)get_instance(filelives_100_instances))->set_visible(false);
        ((Counter*)get_instance(filetimemilli_101_instances))->set_visible(false);
        ((Counter*)get_instance(filedeaths_102_instances))->set_visible(false);
        ((Counter*)get_instance(filecrystals_103_instances))->set_visible(false);
        ((Counter*)get_instance(filetimes_106_instances))->set_visible(false);
        ((Counter*)get_instance(filetimem_107_instances))->set_visible(false);
        ((TextBlitter*)get_instance(filemessage_117_instances))->set_text(((Text*)get_instance(filemessagelist_126_instances))->get_paragraph(0));
        ((TextBlitter*)get_instance(filemessage_117_instances))->set_visible(true);
    }
    or_final_or_event_91_3_1_end: ;
}
void Frames::event_func_503()
{
    // event 92_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_92_3_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!filesaveslot_108_instances.has_selection()) goto event_92_3_end;
        ((Active*)get_instance(filelabel_104_instances))->set_visible(true);
        ((Active*)get_instance(filelabel2_105_instances))->set_visible(true);
        ((Active*)get_instance(filestageicon_98_instances))->set_visible(true);
        ((Active*)get_instance(fileicon_99_instances))->set_visible(true);
        ((Counter*)get_instance(filecurrentstage_97_instances))->set_visible(true);
        ((Counter*)get_instance(filelives_100_instances))->set_visible(true);
        ((Counter*)get_instance(filetimemilli_101_instances))->set_visible(true);
        ((Counter*)get_instance(filedeaths_102_instances))->set_visible(true);
        ((Counter*)get_instance(filecrystals_103_instances))->set_visible(true);
        ((Counter*)get_instance(filetimes_106_instances))->set_visible(true);
        ((Counter*)get_instance(filetimem_107_instances))->set_visible(true);
        ((TextBlitter*)get_instance(filemessage_117_instances))->set_visible(false);
    }
    event_92_3_end: ;
}
void Frames::event_func_504()
{
    // event 93_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_93_3_end;
        if (((Active*)get_instance(filestageicon_98_instances))->flags & VISIBLE) goto event_93_3_end;
        global_values->set(0, 0-get_max(0, get_min(2-(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)-2), 2)));
        ((TextBlitter*)get_instance(filemessage_117_instances))->set_text(((Text*)get_instance(filemessagelist_126_instances))->get_paragraph(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)));
    }
    event_93_3_end: ;
}
void Frames::event_func_505()
{
    // event 94_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_94_3_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!filesaveslot_108_instances.has_selection()) goto event_94_3_end;
        ((TextBlitter*)get_instance(filemessage_117_instances))->set_text(((Text*)get_instance(filemessagelist_126_instances))->get_paragraph(1));
    }
    event_94_3_end: ;
}
void Frames::event_func_506()
{
    // event 95_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_95_3_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(fileback_96_instances))->get_x()-480+(((Active*)*it)->alterables->values.get(7)*120+((Active*)get_instance(fileback_96_instances))->alterables->values.get(8))%math_helper%960);
        }
        filesaveslotcharacter_110_instances.clear_selection();
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(filesaveslot_108_instances, it.current_index));
            if (parent == NULL) goto pos_end_95_3_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_95_3_0: ;
        }
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(fileback_96_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(fileback_96_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_single(filesaveslot_108_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(filesaveslot_108_instances, it.current_index, default_active_instance))->alterables->values.get(0));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(filesaveslot_108_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
        ((Counter*)get_instance(fileid_109_instances))->set(((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)+1);
        {
            FrameObject * parent = ((Active*)get_instance(filetext_114_instances));
            if (parent == NULL) goto pos_end_95_3_1;
            ((Counter*)get_instance(fileid_109_instances))->set_global_position(parent->get_x() + 30, parent->get_y() + 9);
            pos_end_95_3_1: ;
        }
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(filesaveslot_108_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        ((Active*)get_instance(fileback_96_instances))->alterables->values.set(2, 0);
    }
    event_95_3_end: ;
}
void Frames::event_func_507()
{
    // event 96_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_96_3_end;
        filesaveslotcharacter_110_instances.clear_selection();
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!filesaveslotcharacter_110_instances.has_selection()) goto event_96_3_end;
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(1)+1);
        }
    }
    event_96_3_end: ;
}
void Frames::event_func_508()
{
    // event 97_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_97_3_end;
        filesaveslotcharacter_110_instances.clear_selection();
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!filesaveslotcharacter_110_instances.has_selection()) goto event_97_3_end;
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(64);
        }
    }
    event_97_3_end: ;
}
void Frames::event_func_509()
{
    // event 98_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_98_3_end;
        filesaveslotcharacter_110_instances.clear_selection();
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!filesaveslotcharacter_110_instances.has_selection()) goto event_98_3_end;
        for (ObjectIterator it(filesaveslotcharacter_110_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_98_3_end: ;
}
void Frames::event_func_510()
{
    // event 99_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_99_3_end;
        {
            loop_avatar_running = true;
            int times = int(8);
            loop_avatar_index = 0;
            while (loop_avatar_index < times) {
                loop_avatar_3();
                if (!loop_avatar_running) break;
                loop_avatar_index++;
            }
        }
    }
    event_99_3_end: ;
}
void Frames::event_func_511()
{
    // event 103_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_103_3_end;
        if (!((((Active*)get_instance(fileback_96_instances))->alterables->values.get(9)) > (0))) goto event_103_3_end;
        ((Active*)get_instance(fileback_96_instances))->alterables->values.set(8, (((Active*)get_instance(fileback_96_instances))->alterables->values.get(8)+10)%math_helper%960);
        ((Active*)get_instance(fileback_96_instances))->alterables->values.sub(9, 10);
    }
    event_103_3_end: ;
}
void Frames::event_func_512()
{
    // event 104_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_104_3_end;
        if (!((((Active*)get_instance(fileback_96_instances))->alterables->values.get(9)) < (0))) goto event_104_3_end;
        ((Active*)get_instance(fileback_96_instances))->alterables->values.set(8, (((Active*)get_instance(fileback_96_instances))->alterables->values.get(8)+960-10)%math_helper%960);
        ((Active*)get_instance(fileback_96_instances))->alterables->values.add(9, 10);
    }
    event_104_3_end: ;
}
void Frames::event_func_513()
{
    // event 105_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_105_3_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!filesaveslot_108_instances.has_selection()) goto event_105_3_end;
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_105_3_end: ;
}
void Frames::event_func_514()
{
    // event 106_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_106_3_end;
        filesaveslot_108_instances.clear_selection();
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(12)))) { it.deselect(); continue; }
        }
        if (!filesaveslot_108_instances.has_selection()) goto event_106_3_end;
        for (ObjectIterator it(filesaveslot_108_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        ((Active*)get_instance(fileicon_99_instances))->set_direction(((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(6));
        ((Active*)get_instance(filestageicon_98_instances))->force_frame(((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(1));
        ((Counter*)get_instance(filelives_100_instances))->set(((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(4));
        ((Counter*)get_instance(filedeaths_102_instances))->set(((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(3));
        ((Counter*)get_instance(filecrystals_103_instances))->set(((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(5));
        ((Counter*)get_instance(filetimemilli_101_instances))->set((((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(2)/math_helper/10)%math_helper%100);
        ((Counter*)get_instance(filetimes_106_instances))->set((((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(2)/math_helper/1000)%math_helper%60);
        ((Counter*)get_instance(filetimem_107_instances))->set(((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(2)/math_helper/60000);
        ((Active*)get_instance(filestageicon_98_instances))->alterables->values.set(4, -1+((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(0)+((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)get_instance(filestageicon_98_instances))->alterables->values.set(0, ((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(6));
        ((Active*)get_instance(filelabel_104_instances))->force_frame(((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(10));
        global_values->set(0, 0-get_max(0, get_min(2-((Active*)get_single(filesaveslot_108_instances, default_active_instance))->alterables->values.get(10), 2)));
    }
    event_106_3_end: ;
}
void Frames::event_func_515()
{
    // event 107_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_107_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (0))) goto event_107_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(filetext_114_instances));
            if (parent == NULL) goto pos_end_107_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_107_3_0: ;
        }
    }
    event_107_3_end: ;
}
void Frames::event_func_516()
{
    // event 108_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_108_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (1))) goto event_108_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(return_111_instances));
            if (parent == NULL) goto pos_end_108_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_108_3_0: ;
        }
    }
    event_108_3_end: ;
}
void Frames::event_func_517()
{
    // event 109_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_109_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (2))) goto event_109_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(start_113_instances));
            if (parent == NULL) goto pos_end_109_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_109_3_0: ;
        }
    }
    event_109_3_end: ;
}
void Frames::event_func_518()
{
    // event 110_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_110_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (3))) goto event_110_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(copy_112_instances));
            if (parent == NULL) goto pos_end_110_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_110_3_0: ;
        }
    }
    event_110_3_end: ;
}
void Frames::event_func_519()
{
    // event 111_3
    {
        if (!(group_adventure_1 && group_adventure_adventure_menu_display_1)) goto event_111_3_end;
        if (!((((Active*)get_instance(crystalcursor_75_instances))->alterables->values.get(0)) == (4))) goto event_111_3_end;
        {
            FrameObject * parent = ((Active*)get_instance(return_111_instances));
            if (parent == NULL) goto pos_end_111_3_0;
            ((Active*)get_instance(crystalcursor_75_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_111_3_0: ;
        }
    }
    event_111_3_end: ;
}
void Frames::event_func_520()
{
    // event 112_3
    {
        if (!(group_clear_files_that_are_flagged_for_deletion_1)) goto event_112_3_end;
        if (not_always_112_3 > loop_count) {
            not_always_112_3 = loop_count + 2;
            goto event_112_3_end;
        }
        not_always_112_3 = loop_count + 2;
        {
            loop_delete_running = true;
            int times = int(8);
            loop_delete_index = 0;
            while (loop_delete_index < times) {
                loop_delete_3();
                if (!loop_delete_running) break;
                loop_delete_index++;
            }
        }
    }
    event_112_3_end: ;
}
