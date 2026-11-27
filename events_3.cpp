#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_149()
{
    // event 65_0
    {
        // group: Controller Setup | Memory Management
        if (!((((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0)) > (0))) goto event_65_0_end;
        if (is_joystick_attached(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0))) goto event_65_0_end;
        if (not_always_65_0 > loop_count) {
            not_always_65_0 = loop_count + 2;
            goto event_65_0_end;
        }
        not_always_65_0 = loop_count + 2;
        if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) {
            group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = true;
        }
            group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 1, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 2, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 3, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 4, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 5, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 6, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 7, 2, 0);
        ((ArrayObject*)get_instance(mapdata2_32_instances))->set_value(0, 8, 2, 0);
    }
    event_65_0_end: ;
}
void Frames::event_func_150()
{
    // event 66_0
    {
        // group: Controller Setup | Memory Management
        if (!((((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0)) > (0))) goto event_66_0_end;
        if (!(is_joystick_attached(((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(0)))) goto event_66_0_end;
        if (not_always_66_0 > loop_count) {
            not_always_66_0 = loop_count + 2;
            goto event_66_0_end;
        }
        not_always_66_0 = loop_count + 2;
        if (!group_pc_controls_input_management_record_input_record_input_controller_1) {
            group_pc_controls_input_management_record_input_record_input_controller_1 = true;
        }
        if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) {
            group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = true;
        }
    }
    event_66_0_end: ;
}
void Frames::event_func_151()
{
    // event 67_0
    {
        if (!(group_pc_controls_input_management_record_input_1)) goto event_67_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(7, 0);
        {
            loop_record_inputs_running = true;
            int times = int(8);
            loop_record_inputs_index = 0;
            while (loop_record_inputs_index < times) {
                loop_record_inputs_0();
                if (!loop_record_inputs_running) break;
                loop_record_inputs_index++;
            }
        }
    }
    event_67_0_end: ;
}
void Frames::event_func_152()
{
    // event 89_0
    {
        if (!(group_pc_controls_input_management_record_input_1)) goto event_89_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(0, get_max(((ArrayObject*)get_instance(mapdata_30_instances))->get_value(1, 2, 0), ((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(1, 2, 0)));
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(1, get_max(((ArrayObject*)get_instance(mapdata_30_instances))->get_value(2, 2, 0), ((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(2, 2, 0)));
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(2, get_max(((ArrayObject*)get_instance(mapdata_30_instances))->get_value(3, 2, 0), ((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(3, 2, 0)));
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(3, get_max(((ArrayObject*)get_instance(mapdata_30_instances))->get_value(4, 2, 0), ((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(4, 2, 0)));
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(4, get_max(((ArrayObject*)get_instance(mapdata_30_instances))->get_value(5, 2, 0), ((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(5, 2, 0)));
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(5, get_max(((ArrayObject*)get_instance(mapdata_30_instances))->get_value(6, 2, 0), ((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(6, 2, 0)));
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(6, get_max(((ArrayObject*)get_instance(mapdata_30_instances))->get_value(7, 2, 0), ((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(7, 2, 0)));
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(7, get_max(((ArrayObject*)get_instance(mapdata_30_instances))->get_value(8, 2, 0), ((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(8, 2, 0)));
    }
    event_89_0_end: ;
}
void Frames::event_func_153()
{
    // event 90_0
    {
        // group: - Pressed States
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(15, 0);
    }
    event_90_0_end: ;
}
void Frames::event_func_154()
{
    // event 91_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(0)) > (0))) goto event_91_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(0)) >= (1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(5)))) goto event_91_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(1)) <= (1+999*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(5)))) goto event_91_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(8, 2);
    }
    event_91_0_end: ;
}
void Frames::event_func_155()
{
    // event 92_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(1)) > (0))) goto event_92_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(1)) >= (1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(5)))) goto event_92_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(0)) <= (1+999*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(5)))) goto event_92_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(9, 2);
    }
    event_92_0_end: ;
}
void Frames::event_func_156()
{
    // event 93_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(2)) > (0))) goto event_93_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(2)) >= (1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(4)))) goto event_93_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(3)) <= (1+999*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(4)))) goto event_93_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(10, 2);
    }
    event_93_0_end: ;
}
void Frames::event_func_157()
{
    // event 94_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(3)) > (0))) goto event_94_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(3)) >= (1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(4)))) goto event_94_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(2)) <= (1+999*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(4)))) goto event_94_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(11, 2);
    }
    event_94_0_end: ;
}
void Frames::event_func_158()
{
    // event 95_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(0)) > (0))) goto event_95_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(0)) >= (1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(5)))) goto event_95_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(1)) <= (1+999*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(5)))) goto event_95_0_end;
        if (not_always_95_0 > loop_count) {
            not_always_95_0 = loop_count + 2;
            goto event_95_0_end;
        }
        not_always_95_0 = loop_count + 2;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(8, 1);
    }
    event_95_0_end: ;
}
void Frames::event_func_159()
{
    // event 96_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(1)) > (0))) goto event_96_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(1)) >= (1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(5)))) goto event_96_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(0)) <= (1+999*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(5)))) goto event_96_0_end;
        if (not_always_96_0 > loop_count) {
            not_always_96_0 = loop_count + 2;
            goto event_96_0_end;
        }
        not_always_96_0 = loop_count + 2;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(9, 1);
    }
    event_96_0_end: ;
}
void Frames::event_func_160()
{
    // event 97_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(2)) > (0))) goto event_97_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(2)) >= (1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(4)))) goto event_97_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(3)) <= (1+999*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(4)))) goto event_97_0_end;
        if (not_always_97_0 > loop_count) {
            not_always_97_0 = loop_count + 2;
            goto event_97_0_end;
        }
        not_always_97_0 = loop_count + 2;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(10, 1);
    }
    event_97_0_end: ;
}
void Frames::event_func_161()
{
    // event 98_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(3)) > (0))) goto event_98_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(3)) >= (1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(4)))) goto event_98_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(2)) <= (1+999*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(4)))) goto event_98_0_end;
        if (not_always_98_0 > loop_count) {
            not_always_98_0 = loop_count + 2;
            goto event_98_0_end;
        }
        not_always_98_0 = loop_count + 2;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(11, 1);
    }
    event_98_0_end: ;
}
void Frames::event_func_162()
{
    // event 99_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(4)) == (1000))) goto event_99_0_end;
        if (not_always_99_0 > loop_count) {
            not_always_99_0 = loop_count + 2;
            goto event_99_0_end;
        }
        not_always_99_0 = loop_count + 2;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(12, 1);
    }
    event_99_0_end: ;
}
void Frames::event_func_163()
{
    // event 100_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(5)) == (1000))) goto event_100_0_end;
        if (not_always_100_0 > loop_count) {
            not_always_100_0 = loop_count + 2;
            goto event_100_0_end;
        }
        not_always_100_0 = loop_count + 2;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(13, 1);
    }
    event_100_0_end: ;
}
void Frames::event_func_164()
{
    // event 101_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(6)) == (1000))) goto event_101_0_end;
        if (not_always_101_0 > loop_count) {
            not_always_101_0 = loop_count + 2;
            goto event_101_0_end;
        }
        not_always_101_0 = loop_count + 2;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(14, 1);
    }
    event_101_0_end: ;
}
void Frames::event_func_165()
{
    // event 102_0
    {
        // group: - Pressed States
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) == (1000))) goto event_102_0_end;
        if (not_always_102_0 > loop_count) {
            not_always_102_0 = loop_count + 2;
            goto event_102_0_end;
        }
        not_always_102_0 = loop_count + 2;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(15, 1);
    }
    event_102_0_end: ;
}
void Frames::event_func_166()
{
    // event 103_0
    {
        // group: - Analog Factors
        if (not_always_103_0 > loop_count) {
            not_always_103_0 = loop_count + 2;
            goto event_103_0_end;
        }
        not_always_103_0 = loop_count + 2;
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(8, 1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(4));
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(9, 1000*((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(5));
    }
    event_103_0_end: ;
}
void Frames::event_func_167()
{
    // event 104_0
    {
        // group: - Analog Factors
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(17, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(19, 0);
    }
    event_104_0_end: ;
}
void Frames::event_func_168()
{
    // event 105_0
    {
        // group: - Analog Factors
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(8)) > (0))) goto event_105_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(16, (((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(0)-((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(9))/math_helper/(1000.0-((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(9)));
    }
    event_105_0_end: ;
}
void Frames::event_func_169()
{
    // event 106_0
    {
        // group: - Analog Factors
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(9)) > (0))) goto event_106_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(17, (((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(1)-((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(9))/math_helper/(1000.0-((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(9)));
    }
    event_106_0_end: ;
}
void Frames::event_func_170()
{
    // event 107_0
    {
        // group: - Analog Factors
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(10)) > (0))) goto event_107_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(18, (((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(2)-((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(8))/math_helper/(1000.0-((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(8)));
    }
    event_107_0_end: ;
}
void Frames::event_func_171()
{
    // event 108_0
    {
        // group: - Analog Factors
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(11)) > (0))) goto event_108_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(19, (((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(3)-((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(8))/math_helper/(1000.0-((Active*)get_instance(globalinputdata_22_instances))->alterables->values.get(8)));
    }
    event_108_0_end: ;
}
void Frames::event_func_172()
{
    // event 109_0
    {
        // group: - Analog Factors
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(20, get_max(((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(18), ((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(19)));
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(21, get_max(((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(16), ((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(17)));
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(22, ((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(20));
    }
    event_109_0_end: ;
}
void Frames::event_func_173()
{
    // event 110_0
    {
        // group: - Analog Factors
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(20)) == (0))) goto event_110_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(22, 1);
    }
    event_110_0_end: ;
}
void Frames::event_func_174()
{
    // event 111_0
    {
        // group: - Query input and pack
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(1, 0);
    }
    event_111_0_end: ;
}
void Frames::event_func_175()
{
    // event 112_0
    {
        // group: - Query input and pack
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(8)) > (0))) goto event_112_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_112_0_end;
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(0, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)+1);
    }
    event_112_0_end: ;
}
void Frames::event_func_176()
{
    // event 113_0
    {
        // group: - Query input and pack
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(9)) > (0))) goto event_113_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_113_0_end;
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(0, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)+2);
    }
    event_113_0_end: ;
}
void Frames::event_func_177()
{
    // event 114_0
    {
        // group: - Query input and pack
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(10)) > (0))) goto event_114_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_114_0_end;
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(0, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)+4);
    }
    event_114_0_end: ;
}
void Frames::event_func_178()
{
    // event 115_0
    {
        // group: - Query input and pack
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(11)) > (0))) goto event_115_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_115_0_end;
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(0, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)+8);
    }
    event_115_0_end: ;
}
void Frames::event_func_179()
{
    // event 116_0
    {
        // group: - Query input and pack
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(4)) == (1000))) goto event_116_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_116_0_end;
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(0, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)+16);
    }
    event_116_0_end: ;
}
void Frames::event_func_180()
{
    // event 117_0
    {
        // group: - Query input and pack
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(5)) == (1000))) goto event_117_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_117_0_end;
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(0, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)+32);
    }
    event_117_0_end: ;
}
void Frames::event_func_181()
{
    // event 118_0
    {
        // group: - Query input and pack
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(6)) == (1000))) goto event_118_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_118_0_end;
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(0, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)+64);
    }
    event_118_0_end: ;
}
void Frames::event_func_182()
{
    // event 119_0
    {
        // group: - Query input and pack
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(2, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(3));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(3, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(4));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(4, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(5));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(5, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(6));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(6, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(7));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(7, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(8));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(8, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(9));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(9, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(10));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(10, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(11));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(11, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(12));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(12, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(13));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(13, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(14));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(14, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(15));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(15, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(16));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(16, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(17));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(17, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(18));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(18, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(19));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(19, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(20));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(20, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(21));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(21, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(22));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(22, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(23));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(23, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(24));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(24, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(25));
        ((Active*)get_instance(masterinput_20_instances))->alterables->values.set(25, ((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0));
    }
    event_119_0_end: ;
}
void Frames::event_func_183()
{
    // event 120_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_120_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(13, 0);
    }
    event_120_0_end: ;
}
void Frames::event_func_184()
{
    // event 121_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (1))) goto event_121_0_end;
        if (not_always_121_0 > loop_count) {
            not_always_121_0 = loop_count + 2;
            goto event_121_0_end;
        }
        not_always_121_0 = loop_count + 2;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(13, 0);
    }
    event_121_0_end: ;
}
void Frames::event_func_185()
{
    // event 122_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_122_0_end;
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&1) == (1))) goto event_122_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(6, 1);
    }
    event_122_0_end: ;
}
void Frames::event_func_186()
{
    // event 123_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_123_0_end;
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&2) == (2))) goto event_123_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(7, 1);
    }
    event_123_0_end: ;
}
void Frames::event_func_187()
{
    // event 124_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_124_0_end;
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&4) == (4))) goto event_124_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(8, 1);
    }
    event_124_0_end: ;
}
void Frames::event_func_188()
{
    // event 125_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_125_0_end;
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&8) == (8))) goto event_125_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(9, 1);
    }
    event_125_0_end: ;
}
void Frames::event_func_189()
{
    // event 126_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (0))) goto event_126_0_end;
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&16) == (16))) goto event_126_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 1);
    }
    event_126_0_end: ;
}
void Frames::event_func_190()
{
    // event 127_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto event_127_0_end;
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&32) == (32))) goto event_127_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 1);
    }
    event_127_0_end: ;
}
void Frames::event_func_191()
{
    // event 128_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_128_0_end;
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&64) == (64))) goto event_128_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 1);
    }
    event_128_0_end: ;
}
void Frames::event_func_192()
{
    // event 129_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_129_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(5, 0);
    }
    event_129_0_end: ;
}
void Frames::event_func_193()
{
    // event 130_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (1))) goto event_130_0_end;
        if (not_always_130_0 > loop_count) {
            not_always_130_0 = loop_count + 2;
            goto event_130_0_end;
        }
        not_always_130_0 = loop_count + 2;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(5, 0);
    }
    event_130_0_end: ;
}
void Frames::event_func_194()
{
    // event 131_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&1) == (1))) goto event_131_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 1);
    }
    event_131_0_end: ;
}
void Frames::event_func_195()
{
    // event 132_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&2) == (2))) goto event_132_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 1);
    }
    event_132_0_end: ;
}
void Frames::event_func_196()
{
    // event 133_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&4) == (4))) goto event_133_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
    }
    event_133_0_end: ;
}
void Frames::event_func_197()
{
    // event 134_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&8) == (8))) goto event_134_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_134_0_end: ;
}
void Frames::event_func_198()
{
    // event 135_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&16) == (16))) goto event_135_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 1);
    }
    event_135_0_end: ;
}
void Frames::event_func_199()
{
    // event 136_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&32) == (32))) goto event_136_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(5, 1);
    }
    event_136_0_end: ;
}
void Frames::event_func_200()
{
    // event 137_0
    {
        // group: - Unpack and assign
        if (!((((Active*)get_instance(masterinput_20_instances))->alterables->values.get(0)&math_helper&64) == (64))) goto event_137_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(13, 1);
    }
    event_137_0_end: ;
}
void Frames::event_func_201()
{
    // event 138_0
    {
        // group: - Poststep
        if (once_condition_138_0) goto event_138_0_end;
        once_condition_138_0 = true;
        if (!group_pc_controls_input_management_record_input_1) {
            group_pc_controls_input_management_record_input_1 = true;
        }
    }
    event_138_0_end: ;
}
void Frames::event_func_202()
{
    // event 139_0
    {
        if (!(group_mac_controls_1)) goto event_139_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_139_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(15, 0);
    }
    event_139_0_end: ;
}
void Frames::event_func_203()
{
    // event 140_0
    {
        if (!(group_mac_controls_1)) goto event_140_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (1))) goto event_140_0_end;
        if (not_always_140_0 > loop_count) {
            not_always_140_0 = loop_count + 2;
            goto event_140_0_end;
        }
        not_always_140_0 = loop_count + 2;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(15, 0);
    }
    event_140_0_end: ;
}
void Frames::event_func_204()
{
    // event 141_0
    {
        if (!(group_mac_controls_1)) goto event_141_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_141_0_end;
        if (!(is_player_pressed(1, CONTROL_UP))) goto event_141_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(6, 1);
    }
    event_141_0_end: ;
}
void Frames::event_func_205()
{
    // event 142_0
    {
        if (!(group_mac_controls_1)) goto event_142_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_142_0_end;
        if (!(is_player_pressed(1, CONTROL_DOWN))) goto event_142_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(7, 1);
    }
    event_142_0_end: ;
}
void Frames::event_func_206()
{
    // event 143_0
    {
        if (!(group_mac_controls_1)) goto event_143_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_143_0_end;
        if (!(is_player_pressed(1, CONTROL_LEFT))) goto event_143_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(8, 1);
    }
    event_143_0_end: ;
}
void Frames::event_func_207()
{
    // event 144_0
    {
        if (!(group_mac_controls_1)) goto event_144_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_144_0_end;
        if (!(is_player_pressed(1, CONTROL_RIGHT))) goto event_144_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(9, 1);
    }
    event_144_0_end: ;
}
void Frames::event_func_208()
{
    // event 145_0
    {
        if (!(group_mac_controls_1)) goto event_145_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (0))) goto event_145_0_end;
        if (!(is_player_pressed(1, CONTROL_BUTTON1))) goto event_145_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(10, 1);
    }
    event_145_0_end: ;
}
void Frames::event_func_209()
{
    // event 146_0
    {
        if (!(group_mac_controls_1)) goto event_146_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto event_146_0_end;
        if (!(is_player_pressed(1, CONTROL_BUTTON2))) goto event_146_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(11, 1);
    }
    event_146_0_end: ;
}
void Frames::event_func_210()
{
    // event 147_0
    {
        if (!(group_mac_controls_1)) goto event_147_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_147_0_end;
        if (!(is_player_pressed(1, CONTROL_BUTTON3))) goto event_147_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(14, 1);
    }
    event_147_0_end: ;
}
void Frames::event_func_211()
{
    // event 148_0
    {
        if (!(group_mac_controls_1)) goto event_148_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(7)) == (0))) goto event_148_0_end;
        if (!(is_player_pressed(1, CONTROL_BUTTON4))) goto event_148_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(15, 1);
    }
    event_148_0_end: ;
}
void Frames::event_func_212()
{
    // event 149_0
    {
        if (!(group_mac_controls_1)) goto event_149_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_149_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(7, 0);
    }
    event_149_0_end: ;
}
void Frames::event_func_213()
{
    // event 150_0
    {
        if (!(group_mac_controls_1)) goto event_150_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (1))) goto event_150_0_end;
        if (not_always_150_0 > loop_count) {
            not_always_150_0 = loop_count + 2;
            goto event_150_0_end;
        }
        not_always_150_0 = loop_count + 2;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(7, 0);
    }
    event_150_0_end: ;
}
void Frames::event_func_214()
{
    // event 151_0
    {
        if (!(group_mac_controls_1)) goto event_151_0_end;
        if (!(is_player_pressed(1, CONTROL_UP))) goto event_151_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(0, 1);
    }
    event_151_0_end: ;
}
void Frames::event_func_215()
{
    // event 152_0
    {
        if (!(group_mac_controls_1)) goto event_152_0_end;
        if (!(is_player_pressed(1, CONTROL_DOWN))) goto event_152_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(1, 1);
    }
    event_152_0_end: ;
}
void Frames::event_func_216()
{
    // event 153_0
    {
        if (!(group_mac_controls_1)) goto event_153_0_end;
        if (!(is_player_pressed(1, CONTROL_LEFT))) goto event_153_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(2, 1);
    }
    event_153_0_end: ;
}
void Frames::event_func_217()
{
    // event 154_0
    {
        if (!(group_mac_controls_1)) goto event_154_0_end;
        if (!(is_player_pressed(1, CONTROL_RIGHT))) goto event_154_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(3, 1);
    }
    event_154_0_end: ;
}
void Frames::event_func_218()
{
    // event 155_0
    {
        if (!(group_mac_controls_1)) goto event_155_0_end;
        if (!(is_player_pressed(1, CONTROL_BUTTON1))) goto event_155_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(4, 1);
    }
    event_155_0_end: ;
}
void Frames::event_func_219()
{
    // event 156_0
    {
        if (!(group_mac_controls_1)) goto event_156_0_end;
        if (!(is_player_pressed(1, CONTROL_BUTTON2))) goto event_156_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(5, 1);
    }
    event_156_0_end: ;
}
void Frames::event_func_220()
{
    // event 157_0
    {
        if (!(group_mac_controls_1)) goto event_157_0_end;
        if (!(is_player_pressed(1, CONTROL_BUTTON3))) goto event_157_0_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(13, 1);
    }
    event_157_0_end: ;
}
void Frames::event_func_221()
{
    // event 158_0
    {
        if (!(group_mac_controls_1)) goto event_158_0_end;
        if (!(is_player_pressed(1, CONTROL_BUTTON4))) goto event_158_0_end;
        ((Active*)get_instance(inputsp1_21_instances))->alterables->values.set(7, 1);
    }
    event_158_0_end: ;
}
void Frames::event_func_222()
{
    // event 168_0
    {
        // group: Sound Events
        if (!((global_values->get(23)) == (0))) goto event_168_0_end;
        if (not_always_168_0 > loop_count) {
            not_always_168_0 = loop_count + 2;
            goto event_168_0_end;
        }
        not_always_168_0 = loop_count + 2;
            group_sound_events_spade_1 = false;
    
            group_sound_events_carol_1 = false;
    
            group_sound_events_lilac_1 = false;
    
            group_sound_events_milla_1 = false;
    
            group_sound_events_torque_1 = false;
    
    }
    event_168_0_end: ;
}
void Frames::event_func_223()
{
    // event 235_0
    {
        if (!(group_debug_mode_1)) goto event_235_0_end;
        if (!((global_values->get(22)) == (1))) goto event_235_0_end;
        if (!group_debug_mode_debugging_1) {
            group_debug_mode_debugging_1 = true;
        }
        media.play_id(SOUND_ITEM_PETALGET2_4, -1, 1);
        global_values->add(22, 1);
    }
    event_235_0_end: ;
}
void Frames::event_func_224()
{
    // event 236_0
    {
        if (!(group_debug_mode_1)) goto event_236_0_end;
        if (!((global_values->get(22)) == (3))) goto event_236_0_end;
            group_debug_mode_debugging_1 = false;
    
        media.play_id(SOUND_MENU_SCROLL_142, -1, 1);
        global_values->set(22, 0);
    }
    event_236_0_end: ;
}
void Frames::event_func_225()
{
    // event 237_0
    {
        if (!(group_debug_mode_1 && group_debug_mode_debugging_1)) goto event_237_0_end;
        if (!(is_key_pressed_once(SDLK_5))) goto event_237_0_end;
        set_lives(((manager.lives)%math_helper%5)+1);
    }
    event_237_0_end: ;
}
void Frames::event_func_226()
{
    // event 241_0
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F5))) goto event_241_0_end;
        manager.set_window_scale(1.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        global_values->set(24, 1);
    WindowControl::set_placement(4);
    }
    event_241_0_end: ;
}
void Frames::event_func_227()
{
    // event 242_0
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F6))) goto event_242_0_end;
        manager.set_window_scale(2.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)*2+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)*2+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        global_values->set(24, 2);
    WindowControl::set_placement(4);
    }
    event_242_0_end: ;
}
void Frames::event_func_228()
{
    // event 243_0
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F7))) goto event_243_0_end;
        manager.set_window_scale(3.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)*3+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)*3+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        global_values->set(24, 3);
    WindowControl::set_placement(4);
    }
    event_243_0_end: ;
}
void Frames::event_func_229()
{
    // event 244_0
    {
        // group: Screen size
        if (!(is_key_pressed_once(SDLK_F8))) goto event_244_0_end;
        manager.set_window_scale(1.0);
        manager.set_window(true);
        global_values->set(24, 4);
    }
    event_244_0_end: ;
}
void Frames::handle_frame_1_events()
{
    test_collisions_0();
    if (!group_game_startup_1) goto group_game_startup_1_end;
    event_func_98();
    event_func_99();
    event_func_100();
    event_func_101();
    event_func_102();
    event_func_103();
    event_func_104();
    event_func_105();
    event_func_106();
    event_func_107();
    event_func_108();
    event_func_109();
    event_func_110();
    event_func_111();
    event_func_112();
    event_func_113();
    event_func_114();
    event_func_115();
    event_func_116();
    event_func_117();
    event_func_118();
    event_func_119();
    event_func_120();
    event_func_121();
    event_func_122();
    event_func_123();
    event_func_124();
    event_func_125();
    group_game_startup_1_end: ;
    event_func_126();
    event_func_127();
    event_func_128();
    event_func_129();
    if (!group_cutscene_1) goto group_cutscene_1_end;
    event_func_130();
    event_func_131();
    event_func_132();
    event_func_133();
    event_func_134();
    event_func_135();
    event_func_136();
    event_func_137();
    event_func_138();
    event_func_139();
    event_func_140();
    group_cutscene_1_end: ;
    event_func_141();
    event_func_142();
    event_func_143();
    event_func_144();
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
    event_func_224();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_225();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
}
void Frames::handle_frame_1_pre_events()
{
}
void Frames::event_func_230()
{
    // event 1_0
    {
        if (!((global_values->get(4)) == (99))) goto event_1_0_end;
            group_game_startup_1 = false;
    
        if (!group_cutscene_1) {
            group_cutscene_1 = true;
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        set_display_center(-1, height);
        sparkletrail_15_instances.clear_selection();
        for (ObjectIterator it(sparkletrail_15_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        beam_16_instances.clear_selection();
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        gtlogo2_14_instances.clear_selection();
        for (ObjectIterator it(gtlogo2_14_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bgstar_4_instances.clear_selection();
        spread_value(bgstar_4_instances, 2, 0);
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(2)%math_helper%20);
            ((Active*)*it)->restore_frame();
        }
        static FlatObjectList swap_1_0;
        swap_1_0.clear();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            swap_1_0.push_back(((Active*)*it));
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->show_layer(3-1);
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, newline_character+str_shuigang_palace_8);
        swap_position(swap_1_0);
    }
    event_1_0_end: ;
}
void Frames::event_func_231()
{
    // event 2_0
    {
        if (!(group_game_startup_1)) goto event_2_0_end;
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->download("./records.dat");
        ((ArrayObject*)get_instance(recorddata_34_instances))->load(get_app_drive()+get_app_dir()+str_records_dat_9);
        media.stop_samples();
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_shuigang_palace_10+newline_character+str_planet_avalice_11);
        bgstar_4_instances.clear_selection();
        spread_value(bgstar_4_instances, 2, 0);
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(2)%math_helper%20);
            ((Active*)*it)->restore_frame();
        }
        static FlatObjectList swap_2_0;
        swap_2_0.clear();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            swap_2_0.push_back(((Active*)*it));
        }
        swap_position(swap_2_0);
    }
    event_2_0_end: ;
}
void Frames::event_func_232()
{
    // event 3_0
    {
        if (!(group_game_startup_1)) goto event_3_0_end;
        if (!((global_values->get(24)) == (0))) goto event_3_0_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 34)) <= (0))) goto event_3_0_end;
        manager.set_window_scale(2.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)*2+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)*2+get_abs(WindowControl::get_height()-WindowControl::get_height()));
    WindowControl::set_placement(4);
        global_values->set(24, 2);
    }
    event_3_0_end: ;
}
void Frames::event_func_233()
{
    // event 4_0
    {
        if (!(group_game_startup_1)) goto event_4_0_end;
        if (!((global_values->get(24)) == (0))) goto event_4_0_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 34)) == (1))) goto event_4_0_end;
        manager.set_window_scale(1.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        global_values->set(24, 1);
    WindowControl::set_placement(4);
    }
    event_4_0_end: ;
}
void Frames::event_func_234()
{
    // event 5_0
    {
        if (!(group_game_startup_1)) goto event_5_0_end;
        if (!((global_values->get(24)) == (0))) goto event_5_0_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 34)) == (2))) goto event_5_0_end;
        manager.set_window_scale(2.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)*2+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)*2+get_abs(WindowControl::get_height()-WindowControl::get_height()));
    WindowControl::set_placement(4);
        global_values->set(24, 2);
    }
    event_5_0_end: ;
}
void Frames::event_func_235()
{
    // event 6_0
    {
        if (!(group_game_startup_1)) goto event_6_0_end;
        if (!((global_values->get(24)) == (0))) goto event_6_0_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 34)) == (3))) goto event_6_0_end;
        manager.set_window_scale(3.0);
        manager.set_window(false);
    WindowControl::set_width(global_values->get(16)*3+get_abs(WindowControl::get_width()-WindowControl::get_width()));
    WindowControl::set_height(global_values->get(17)*3+get_abs(WindowControl::get_height()-WindowControl::get_height()));
        global_values->set(24, 3);
    WindowControl::set_placement(4);
    }
    event_6_0_end: ;
}
void Frames::event_func_236()
{
    // event 7_0
    {
        if (!(group_game_startup_1)) goto event_7_0_end;
        if (!((global_values->get(24)) == (0))) goto event_7_0_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(1, 34)) >= (4))) goto event_7_0_end;
        manager.set_window_scale(1.0);
        manager.set_window(true);
        global_values->set(24, 4);
    }
    event_7_0_end: ;
}
void Frames::event_func_237()
{
    // event 8_0
    {
        if (!(group_game_startup_1)) goto event_8_0_end;
        set_display_center(-1, ((Active*)get_instance(scrolldot_6_instances))->get_y());
        beam_16_instances.clear_selection();
        for (ObjectIterator it(beam_16_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(0.6);
        }
        ((Active*)get_instance(scrolldot_6_instances))->alterables->values.set(24, ((Active*)get_instance(scrolldot_6_instances))->get_y());
        sparkletrail_15_instances.clear_selection();
        for (ObjectIterator it(sparkletrail_15_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -90);
        }
        {
            ((Active*)get_instance(whitefade_17_instances))->blend_color.set_semi_transparency(128);
        }
        set_display_center(213, -1);
        gtlogo1_13_instances.clear_selection();
        for (ObjectIterator it(gtlogo1_13_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        gtlogo2_14_instances.clear_selection();
        for (ObjectIterator it(gtlogo2_14_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
    }
    event_8_0_end: ;
}
void Frames::event_func_238()
{
    // event 56_0
    {
            group_pc_controls_input_management_record_input_1 = false;
    
        media.set_channel_volume(32-1, global_values->get(25));
    }
    event_56_0_end: ;
}
void Frames::event_func_239()
{
    // event 59_0
    {
        // group: Controller Setup | Profiles
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(1, 1, 0)) == (0))) goto event_59_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->load(get_app_drive()+get_app_dir()+str_keyboard_cfg_12);
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(0, 0);
        {
            loop_import_deadzones_running = true;
            int times = int(1);
            loop_import_deadzones_index = 0;
            while (loop_import_deadzones_index < times) {
                loop_import_deadzones_0();
                if (!loop_import_deadzones_running) break;
                loop_import_deadzones_index++;
            }
        }
    }
    event_59_0_end: ;
}
void Frames::event_func_240()
{
    // event 60_0
    {
        // group: Controller Setup | Profiles
        if (!((((ArrayObject*)get_instance(mapdata_30_instances))->get_value(1, 1, 0)) == (0))) goto event_60_0_end;
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(38, 1, 1, 0);
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(40, 2, 1, 0);
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(37, 3, 1, 0);
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(39, 4, 1, 0);
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(90, 5, 1, 0);
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(88, 6, 1, 0);
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(67, 7, 1, 0);
        ((ArrayObject*)get_instance(mapdata_30_instances))->set_value(13, 8, 1, 0);
    }
    event_60_0_end: ;
}
void Frames::event_func_241()
{
    // event 61_0
    {
        // group: Controller Setup | Profiles
        if (!((((ArrayObject*)get_instance(mapdata2_32_instances))->get_value(1, 1, 0)) == (0))) goto event_61_0_end;
        ((ArrayObject*)get_instance(mapdata2_32_instances))->load(get_app_drive()+get_app_dir()+str_gamepad_cfg_13);
        ((Active*)get_instance(globalinputdata_22_instances))->alterables->values.set(0, 1);
        {
            loop_import_deadzones_running = true;
            int times = int(1);
            loop_import_deadzones_index = 0;
            while (loop_import_deadzones_index < times) {
                loop_import_deadzones_0();
                if (!loop_import_deadzones_running) break;
                loop_import_deadzones_index++;
            }
        }
    }
    event_61_0_end: ;
}
void Frames::on_frame_1_start_events()
{
    event_func_230();
    event_func_231();
    event_func_232();
    event_func_233();
    event_func_234();
    event_func_235();
    event_func_236();
    event_func_237();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_1_init()
{
    index = 0;
    width = 640;
    height = 480;
    virtual_width = 640;
    virtual_height = 480;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(4);
    layers[0].init(0, 0.20000000298, 0.20000000298, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, false, false, false);
    layers[3].init(3, 0.0, 0.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, NULL};
    qualifier_0.set(1, &qualifier_0_instances[0]);
    add_background_object(create_introsky_0(384, 0), 0);
    add_background_object(create_introsky_0(0, 0), 0);
    add_background_object(create_quickbackdrop_1(0, 240), 0);
    add_background_object(create_levelparallaxpiece1_2(0, 184), 0);
    add_background_object(create_levelparallaxpiece1_2(320, 184), 0);
    add_object(create_bgstar_4(22, 31), 0);
    add_object(create_bgstar_4(91, 45), 0);
    add_object(create_bgstar_4(86, 31), 0);
    add_object(create_bgstar_4(120, 5), 0);
    add_object(create_bgstar_4(155, 12), 0);
    add_object(create_bgstar_4(161, 52), 0);
    add_object(create_bgstar_4(147, 57), 0);
    add_object(create_bgstar_4(85, 80), 0);
    add_object(create_bgstar_4(33, 86), 0);
    add_object(create_bgstar_4(18, 92), 0);
    add_object(create_bgstar_4(10, 111), 0);
    add_object(create_bgstar_4(98, 109), 0);
    add_object(create_bgstar_4(111, 113), 0);
    add_object(create_bgstar_4(122, 125), 0);
    add_object(create_bgstar_4(99, 158), 0);
    add_object(create_bgstar_4(170, 186), 0);
    add_object(create_bgstar_4(227, 158), 0);
    add_object(create_bgstar_4(216, 109), 0);
    add_object(create_bgstar_4(224, 98), 0);
    add_object(create_bgstar_4(187, 86), 0);
    add_object(create_bgstar_4(238, 113), 0);
    add_object(create_bgstar_4(265, 111), 0);
    add_object(create_bgstar_4(273, 101), 0);
    add_object(create_bgstar_4(300, 136), 0);
    add_object(create_bgstar_4(353, 109), 0);
    add_object(create_bgstar_4(368, 113), 0);
    add_object(create_bgstar_4(354, 159), 0);
    add_object(create_bgstar_4(394, 110), 0);
    add_object(create_bgstar_4(403, 91), 0);
    add_object(create_bgstar_4(418, 85), 0);
    add_object(create_bgstar_4(412, 118), 0);
    add_object(create_bgstar_4(410, 142), 0);
    add_object(create_bgstar_4(362, 77), 0);
    add_object(create_bgstar_4(357, 91), 0);
    add_object(create_bgstar_4(412, 46), 0);
    add_object(create_bgstar_4(406, 31), 0);
    add_object(create_bgstar_4(471, 31), 0);
    add_object(create_bgstar_4(441, 5), 0);
    add_object(create_bgstar_4(426, 120), 0);
    add_object(create_bgstar_4(482, 159), 0);
    add_object(create_bgstar_4(482, 109), 0);
    add_object(create_bgstar_4(496, 114), 0);
    add_object(create_bgstar_4(469, 80), 0);
    add_object(create_bgstar_4(506, 5), 0);
    add_object(create_bgstar_4(531, 58), 0);
    add_object(create_scrolldot_6(213, 197), 1);
    add_object(create_levelparalaxwatersurface_7(0, 485), 1);
    add_background_object(create_introscene2_8(0, 408), 2);
    add_background_object(create_introscene1_9(0, 280), 2);
    add_object(create_layerobject_10(-120, 272), 2);
    add_object(create_brevonmechflyby_11(576, 375), 2);
    add_background_object(create_separatormasterobjects2_12(-328, 0), 3);
    add_object(create_gtlogo1_13(-9, 117), 3);
    add_object(create_gtlogo2_14(24, 131), 3);
    add_object(create_sparkletrail_15(3, 120), 3);
    add_object(create_sparkle_3(-105, 135), 3);
    add_object(create_beam_16(426, 120), 3);
    add_object(create_whitefade_17(-8, 0), 3);
    add_object(create_playerinput_19(-312, 24), 3);
    add_object(create_masterinput_20(-288, 24), 3);
    add_object(create_inputsp1_21(-264, 24), 3);
    add_object(create_globalinputdata_22(-240, 24), 3);
    add_object(create_levelcardfade2_24(-128, 16), 3);
    add_object(create_locationname_25(24, 184), 3);
    add_object(create_sarassteampluginfreedomplanet_26(-248, 136), 3);
    add_object(create_windowcontrol_27(-32, 0), 3);
    add_object(create_savedata_28(-64, 0), 3);
    add_object(create_mapdata_30(-280, 80), 3);
    add_object(create_mapdata2_32(-280, 88), 3);
    add_object(create_recorddata_34(-280, 136), 3);
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
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
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_0, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_0, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_0, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_0, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_0, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_0, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_0, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_0, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_0, &loop_sound_explode4_running, &loop_sound_explode4_index);
        loops_initialized = true;
    }
    not_always_100_0 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_21_0 = loop_count;
    group_cutscene_1 = false;
    group_debug_mode_debugging_1 = false;
    group_sound_events_spade_1 = false;
    not_always_95_0 = loop_count;
    group_mac_controls_1 = false;
    group_sound_events_milla_1 = false;
    not_always_103_0 = loop_count;
    once_condition_28_0 = false;
    group_sound_events_carol_1 = false;
    not_always_140_0 = loop_count;
    group_sound_events_lilac_1 = false;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    group_game_startup_1 = true;
    once_condition_63_0 = false;
    group_debug_mode_1 = false;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_101_0 = loop_count;
    once_condition_24_0 = false;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_25_0 = false;
    not_always_13_0 = loop_count;
    not_always_65_0 = loop_count;
    not_always_102_0 = loop_count;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_121_0 = loop_count;
    once_condition_27_0 = false;
    once_condition_31_0 = false;
}
void Frames::event_func_242()
{
    // event 317_1
    {
        media.resume_samples();
        media.stop_samples();
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(9, global_values->get(14));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(14, global_values->get(15));
        set_lives(get_max(global_values->get(28)-1, 1));
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 7)+1, 1, 7);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(3, 3)+1, 3, 3);
    }
    event_317_1_end: ;
}
void Frames::loop_restart_1()
{
    event_func_86();
    event_func_242();
}
void Frames::event_func_243()
{
    // event 87_1
    {
        if (!(group_debug_keys_jump_to_frame_1)) goto event_87_1_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(0, 2, 1+loop_clear_index);
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->clear_achievement(number_to_string(loop_clear_index+1));
    }
    event_87_1_end: ;
}
