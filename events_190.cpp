#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14826()
{
    // event 1807_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1807_69_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (180))) { it.deselect(); continue; }
        }
        if (!bosssatellitearm_2252_instances.has_selection()) goto event_1807_69_end;
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(bosssatellite_2251_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1807_69_end: ;
}
void Frames::event_func_14827()
{
    // event 1808_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1808_69_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1808_69_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+18)%math_helper%360);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+0.02, 0));
        }
    }
    event_1808_69_end: ;
}
void Frames::event_func_14828()
{
    // event 1809_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1809_69_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1809_69_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->set_layer(((Active*)*it)->layer->index+1+1-1);
            ((Active*)*it)->move_back();
        }
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        bosssatellitethrusters_2250_instances.clear_selection();
        for (ObjectIterator it(bosssatellitethrusters_2250_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_back();
        }
        bosssatellitetop_2246_instances.clear_selection();
        for (ObjectIterator it(bosssatellitetop_2246_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->layer->index+1-1);
            ((Active*)*it)->move_back();
        }
    }
    event_1809_69_end: ;
}
void Frames::event_func_14829()
{
    // event 1810_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1810_69_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1810_69_end;
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)+6)%math_helper%360);
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(7, (((Active*)*it)->alterables->values.get(7)+5)%math_helper%360);
        }
    }
    event_1810_69_end: ;
}
void Frames::event_func_14830()
{
    // event 1811_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1811_69_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(10)-((Active*)*it)->alterables->values.get(11)))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1811_69_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1);
        }
    }
    event_1811_69_end: ;
}
void Frames::event_func_14831()
{
    // event 1812_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1812_69_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(10)+((Active*)*it)->alterables->values.get(11)))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1812_69_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -1);
        }
    }
    event_1812_69_end: ;
}
void Frames::event_func_14832()
{
    // event 1813_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1813_69_end;
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!bosssatellite_2251_instances.has_selection()) goto event_1813_69_end;
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, (((Active*)*it)->alterables->values.get(7)+10)%math_helper%360);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6)+sin_deg(((Active*)*it)->alterables->values.get(7))*3);
        }
        bosssatellitearm_2252_instances.clear_selection();
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3)*0.2);
            ((Active*)*it)->set_scale(1.0+sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(3)*-0.002);
        }
        bosssatellitethrusters_2250_instances.clear_selection();
        for (ObjectIterator it(bosssatellitethrusters_2250_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->alterables->values.get(7))*3);
        }
        bosssatellitetop_2246_instances.clear_selection();
        for (ObjectIterator it(bosssatellitetop_2246_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->alterables->values.get(7))*3);
        }
        for (ObjectIterator it(bosssatellitethrusters_2250_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->get_x());
        }
        for (ObjectIterator it(bosssatellitetop_2246_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssatellite_2251_instances, it.current_index, default_active_instance))->get_x());
        }
    }
    event_1813_69_end: ;
}
void Frames::event_func_14833()
{
    // event 1814_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1814_69_end;
        if (once_condition_1814_69) goto event_1814_69_end;
        once_condition_1814_69 = true;
        bosssparkytail_3305_instances.clear_selection();
        spread_value(bosssparkytail_3305_instances, 0, 1);
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1.1-((Active*)*it)->alterables->values.get(0)*0.1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(0)*30);
        }
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1814_69_end: ;
}
void Frames::event_func_14834()
{
    // event 1815_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1815_69_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (-30))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1815_69_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-2, -30));
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_1815_69_end: ;
}
void Frames::event_func_14835()
{
    // event 1816_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1816_69_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (30))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1816_69_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+2, 30));
            ((Active*)*it)->alterables->values.sub(4, 2);
        }
    }
    event_1816_69_end: ;
}
void Frames::event_func_14836()
{
    // event 1817_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1817_69_end;
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bosssparkyleftarm_3328_instances.has_selection()) goto event_1817_69_end;
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 2);
        }
    }
    event_1817_69_end: ;
}
void Frames::event_func_14837()
{
    // event 1818_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1818_69_end;
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssparkyleftarm_3328_instances.has_selection()) goto event_1818_69_end;
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 2);
        }
    }
    event_1818_69_end: ;
}
void Frames::event_func_14838()
{
    // event 1819_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1819_69_end;
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bosssparkyrightarm_3329_instances.has_selection()) goto event_1819_69_end;
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 2);
        }
    }
    event_1819_69_end: ;
}
void Frames::event_func_14839()
{
    // event 1820_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1820_69_end;
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssparkyrightarm_3329_instances.has_selection()) goto event_1820_69_end;
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 2);
        }
    }
    event_1820_69_end: ;
}
void Frames::event_func_14840()
{
    // event 1821_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1821_69_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+4)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3)+sin_deg(((Active*)*it)->alterables->values.get(5))*20);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(5)*2)*-8);
        }
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(4)+sin_deg(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(5)*2)*-10);
        }
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(4)+sin_deg(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(5)*2)*-10);
        }
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-3+90+((Active*)*it)->alterables->values.get(0), 0);
        }
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(6)*3-90+((Active*)*it)->alterables->values.get(0), 0);
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+356)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->get_x()+sin_deg(sin_deg(((Active*)*it)->alterables->values.get(1))*30)*((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0)*2));
            ((Active*)*it)->set_y(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->get_y()+cos_deg(sin_deg(((Active*)*it)->alterables->values.get(1))*30)*((Active*)*it)->alterables->values.get(0)*(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(6)-((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(6)*0.08));
        }
    }
    event_1821_69_end: ;
}
void Frames::event_func_14841()
{
    // event 1822_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1822_69_end;
        if (!((playerskinsash_418_instances.size()) == (0))) goto event_1822_69_end;
        FrameObject * single_instance_1822_69_0; single_instance_1822_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsash_418(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1822_69_0 == NULL)
                    single_instance_1822_69_0 = new_obj;
            }
        }
    }
    event_1822_69_end: ;
}
void Frames::event_func_14842()
{
    // event 1823_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1823_69_end;
        if (!((playerskinspade_419_instances.size()) == (0))) goto event_1823_69_end;
        FrameObject * single_instance_1823_69_0; single_instance_1823_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinspade_419(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1823_69_0 == NULL)
                    single_instance_1823_69_0 = new_obj;
            }
        }
    }
    event_1823_69_end: ;
}
void Frames::event_func_14843()
{
    // event 1824_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1824_69_end;
        if (!((playerskincarol_445_instances.size()) == (0))) goto event_1824_69_end;
        FrameObject * single_instance_1824_69_0; single_instance_1824_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarol_445(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1824_69_0 == NULL)
                    single_instance_1824_69_0 = new_obj;
            }
        }
    }
    event_1824_69_end: ;
}
void Frames::event_func_14844()
{
    // event 1825_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1825_69_end;
        if (!((playerskincarolbike_382_instances.size()) == (0))) goto event_1825_69_end;
        FrameObject * single_instance_1825_69_0; single_instance_1825_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincarolbike_382(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1825_69_0 == NULL)
                    single_instance_1825_69_0 = new_obj;
            }
        }
    }
    event_1825_69_end: ;
}
void Frames::event_func_14845()
{
    // event 1826_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1826_69_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1826_69_end;
        FrameObject * single_instance_1826_69_0; single_instance_1826_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_446(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1826_69_0 == NULL)
                    single_instance_1826_69_0 = new_obj;
            }
        }
    }
    event_1826_69_end: ;
}
void Frames::event_func_14846()
{
    // event 1827_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1827_69_end;
        if (!((playerskintorque_450_instances.size()) == (0))) goto event_1827_69_end;
        FrameObject * single_instance_1827_69_0; single_instance_1827_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskintorque_450(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1827_69_0 == NULL)
                    single_instance_1827_69_0 = new_obj;
            }
        }
    }
    event_1827_69_end: ;
}
void Frames::event_func_14847()
{
    // event 1828_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1828_69_end;
        if (!((playerskinsashhair_417_instances.size()) == (0))) goto event_1828_69_end;
        FrameObject * single_instance_1828_69_0; single_instance_1828_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinsashhair_417(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1828_69_0 == NULL)
                    single_instance_1828_69_0 = new_obj;
            }
        }
    }
    event_1828_69_end: ;
}
void Frames::event_func_14848()
{
    // event 1829_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1829_69_end;
        if (!((playerskincaroltail_444_instances.size()) == (0))) goto event_1829_69_end;
        FrameObject * single_instance_1829_69_0; single_instance_1829_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskincaroltail_444(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1829_69_0 == NULL)
                    single_instance_1829_69_0 = new_obj;
            }
        }
    }
    event_1829_69_end: ;
}
void Frames::event_func_14849()
{
    // event 1830_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1830_69_end;
        if (!((playerskinmillatail_381_instances.size()) == (0))) goto event_1830_69_end;
        FrameObject * single_instance_1830_69_0; single_instance_1830_69_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmillatail_381(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1830_69_0 == NULL)
                    single_instance_1830_69_0 = new_obj;
            }
        }
    }
    event_1830_69_end: ;
}
void Frames::event_func_14850()
{
    // event 1831_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1831_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(7)) == (1))) goto event_1831_69_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->strings.set(0, ((Text*)get_instance(dialogdata_565_instances))->get_paragraph(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 0);
    }
    event_1831_69_end: ;
}
void Frames::event_func_14851()
{
    // event 1832_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1832_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1832_69_end;
        if (not_always_1832_69 > loop_count) {
            not_always_1832_69 = loop_count + 2;
            goto event_1832_69_end;
        }
        not_always_1832_69 = loop_count + 2;
        ((Active*)get_instance(dialogbox2_567_instances))->set_visible(false);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->set_visible(false);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(false);
    }
    event_1832_69_end: ;
}
void Frames::event_func_14852()
{
    // event 1833_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1833_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (1))) goto event_1833_69_end;
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
                loop_voice_69();
                if (!loop_voice_running) break;
                loop_voice_index++;
            }
        }
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_visible(true);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1833_69_end: ;
}
void Frames::event_func_14853()
{
    // event 1834_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1834_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1834_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1834_69_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(2, 1);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 15, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)+2));
    }
    event_1834_69_end: ;
}
void Frames::event_func_14854()
{
    // event 1835_69
    bool or_result_1835_69 = false;
    bool or_temp_result_1835_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto or_event_1835_69_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1835_69_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1835_69_0_end;
        if (not_always_1835_69 > loop_count) {
            not_always_1835_69 = loop_count + 2;
            goto or_event_1835_69_0_end;
        }
        not_always_1835_69 = loop_count + 2;
        or_result_1835_69 = true;
        or_temp_result_1835_69_0 = true;
    }
    or_event_1835_69_0_end: ;
    // event 1835_69
    bool or_temp_result_1835_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto or_event_1835_69_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1835_69_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1835_69_1_end;
        if (not_always_1835_69 > loop_count) {
            not_always_1835_69 = loop_count + 2;
            goto or_event_1835_69_1_end;
        }
        not_always_1835_69 = loop_count + 2;
        or_result_1835_69 = true;
        or_temp_result_1835_69_1 = true;
        or_event_1835_69_1_end: ;
        if (!or_result_1835_69) goto or_final_or_event_1835_69_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1835_69_1_end: ;
}
void Frames::event_func_14855()
{
    // event 1836_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1836_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1836_69_end;
        if (not_always_1836_69 > loop_count) {
            not_always_1836_69 = loop_count + 2;
            goto event_1836_69_end;
        }
        not_always_1836_69 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1836_69_end: ;
}
void Frames::event_func_14856()
{
    // event 1837_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1837_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1837_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1837_69_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1837_69_end: ;
}
void Frames::event_func_14857()
{
    // event 1838_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1838_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1838_69_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1838_69_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1838_69_end: ;
}
void Frames::event_func_14858()
{
    // event 1839_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1839_69_end;
        if (!((global_values->get(27)) == (0))) goto event_1839_69_end;
        if (not_always_1839_69 > loop_count) {
            not_always_1839_69 = loop_count + 2;
            goto event_1839_69_end;
        }
        not_always_1839_69 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1839_69_end: ;
}
void Frames::event_func_14859()
{
    // event 1843_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1843_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1843_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1843_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1843_69_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1843_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1843_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1843_69_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1843_69_end: ;
}
void Frames::event_func_14860()
{
    // event 1844_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1844_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1844_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1844_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1844_69_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1844_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1844_69_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1844_69_end: ;
}
void Frames::event_func_14861()
{
    // event 1845_69
    bool or_result_1845_69 = false;
    bool or_temp_result_1845_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1845_69_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1845_69_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1845_69_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1845_69_0_end;
        or_result_1845_69 = true;
        or_temp_result_1845_69_0 = true;
    }
    or_event_1845_69_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1845_69_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1845_69
    bool or_temp_result_1845_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1845_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1845_69_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1845_69_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1845_69_1_end;
        or_result_1845_69 = true;
        or_temp_result_1845_69_1 = true;
        or_event_1845_69_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1845_69_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1845_69) goto or_final_or_event_1845_69_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1845_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1845_69_0 || or_temp_result_1845_69_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1845_69_1_end: ;
}
void Frames::event_func_14862()
{
    // event 1846_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1846_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1846_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1846_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1846_69_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1846_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1846_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1846_69_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1846_69_end: ;
}
void Frames::event_func_14863()
{
    // event 1847_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1847_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1847_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1847_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1847_69_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1847_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1847_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1847_69_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1847_69_end: ;
}
void Frames::event_func_14864()
{
    // event 1848_69
    bool or_result_1848_69 = false;
    bool or_temp_result_1848_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1848_69_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1848_69_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1848_69_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1848_69_0_end;
        or_result_1848_69 = true;
        or_temp_result_1848_69_0 = true;
    }
    or_event_1848_69_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1848_69_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1848_69
    bool or_temp_result_1848_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1848_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1848_69_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1848_69_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1848_69_1_end;
        or_result_1848_69 = true;
        or_temp_result_1848_69_1 = true;
        or_event_1848_69_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1848_69_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1848_69) goto or_final_or_event_1848_69_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1848_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1848_69_0 || or_temp_result_1848_69_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1848_69_1_end: ;
}
void Frames::event_func_14865()
{
    // event 1849_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1849_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1849_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1849_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1849_69_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1849_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1849_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1849_69_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1849_69_end: ;
}
void Frames::event_func_14866()
{
    // event 1850_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1850_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1850_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1850_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1850_69_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1850_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1850_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1850_69_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1850_69_end: ;
}
void Frames::event_func_14867()
{
    // event 1851_69
    bool or_result_1851_69 = false;
    bool or_temp_result_1851_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1851_69_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1851_69_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1851_69_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1851_69_0_end;
        or_result_1851_69 = true;
        or_temp_result_1851_69_0 = true;
    }
    or_event_1851_69_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1851_69_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1851_69
    bool or_temp_result_1851_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1851_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1851_69_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1851_69_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1851_69_1_end;
        or_result_1851_69 = true;
        or_temp_result_1851_69_1 = true;
        or_event_1851_69_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1851_69_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1851_69) goto or_final_or_event_1851_69_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1851_69_0 || or_temp_result_1851_69_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1851_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1851_69_1_end: ;
}
void Frames::event_func_14868()
{
    // event 1852_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1852_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1852_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1852_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1852_69_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1852_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1852_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1852_69_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1852_69_end: ;
}
void Frames::event_func_14869()
{
    // event 1853_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1853_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1853_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1853_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1853_69_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1853_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1853_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1853_69_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1853_69_end: ;
}
void Frames::event_func_14870()
{
    // event 1854_69
    bool or_result_1854_69 = false;
    bool or_temp_result_1854_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1854_69_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1854_69_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1854_69_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1854_69_0_end;
        or_result_1854_69 = true;
        or_temp_result_1854_69_0 = true;
    }
    or_event_1854_69_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1854_69_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1854_69
    bool or_temp_result_1854_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1854_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1854_69_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1854_69_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1854_69_1_end;
        or_result_1854_69 = true;
        or_temp_result_1854_69_1 = true;
        or_event_1854_69_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1854_69_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1854_69) goto or_final_or_event_1854_69_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1854_69_0 || or_temp_result_1854_69_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1854_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1854_69_1_end: ;
}
void Frames::event_func_14871()
{
    // event 1855_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1855_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1855_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1855_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1855_69_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1855_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1855_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1855_69_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1855_69_end: ;
}
void Frames::event_func_14872()
{
    // event 1856_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto event_1856_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1856_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1856_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1856_69_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1856_69_end;
        if (!media.is_channel_playing(20-1)) goto event_1856_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1856_69_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1856_69_end: ;
}
void Frames::event_func_14873()
{
    // event 1857_69
    bool or_result_1857_69 = false;
    bool or_temp_result_1857_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1857_69_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1857_69_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1857_69_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1857_69_0_end;
        or_result_1857_69 = true;
        or_temp_result_1857_69_0 = true;
    }
    or_event_1857_69_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1857_69_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1857_69
    bool or_temp_result_1857_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1857_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1857_69_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1857_69_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1857_69_1_end;
        or_result_1857_69 = true;
        or_temp_result_1857_69_1 = true;
        or_event_1857_69_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1857_69_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1857_69) goto or_final_or_event_1857_69_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1857_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1857_69_0 || or_temp_result_1857_69_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1857_69_1_end: ;
}
void Frames::event_func_14874()
{
    // event 1858_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1858_69_end;
        if (!((global_values->get(27)) == (1))) goto event_1858_69_end;
        if (not_always_1858_69 > loop_count) {
            not_always_1858_69 = loop_count + 2;
            goto event_1858_69_end;
        }
        not_always_1858_69 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1858_69_end: ;
}
void Frames::event_func_14875()
{
    // event 1859_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1859_69_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1859_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1859_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1859_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1859_69_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1859_69_end: ;
}
void Frames::event_func_14876()
{
    // event 1860_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1860_69_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1860_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1860_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1860_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1860_69_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1860_69_end: ;
}
void Frames::event_func_14877()
{
    // event 1861_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1861_69_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1861_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1861_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1861_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1861_69_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1861_69_end: ;
}
void Frames::event_func_14878()
{
    // event 1862_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1862_69_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1862_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1862_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1862_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1862_69_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1862_69_end: ;
}
void Frames::event_func_14879()
{
    // event 1863_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1863_69_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1863_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1863_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1863_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1863_69_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1863_69_end: ;
}
void Frames::event_func_14880()
{
    // event 1864_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1864_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1864_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1864_69_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1864_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1864_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1864_69_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1864_69_end: ;
}
void Frames::event_func_14881()
{
    // event 1865_69
    bool or_result_1865_69 = false;
    bool or_temp_result_1865_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1865_69_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1865_69_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1865_69_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1865_69_0_end;
        or_result_1865_69 = true;
        or_temp_result_1865_69_0 = true;
    }
    or_event_1865_69_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1865_69_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1865_69
    bool or_temp_result_1865_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1865_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1865_69_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1865_69_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1865_69_1_end;
        or_result_1865_69 = true;
        or_temp_result_1865_69_1 = true;
        or_event_1865_69_1_end: ;
        if (or_temp_result_1865_69_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1865_69) goto or_final_or_event_1865_69_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1865_69_0 || or_temp_result_1865_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1865_69_0 || or_temp_result_1865_69_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1865_69_1_end: ;
}
void Frames::event_func_14882()
{
    // event 1866_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1866_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1866_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1866_69_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1866_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1866_69_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1866_69_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1866_69_end: ;
}
void Frames::event_func_14883()
{
    // event 1867_69
    bool or_result_1867_69 = false;
    bool or_temp_result_1867_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1867_69_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1867_69_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1867_69_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1867_69_0_end;
        or_result_1867_69 = true;
        or_temp_result_1867_69_0 = true;
    }
    or_event_1867_69_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1867_69_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1867_69
    bool or_temp_result_1867_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1867_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1867_69_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1867_69_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1867_69_1_end;
        or_result_1867_69 = true;
        or_temp_result_1867_69_1 = true;
        or_event_1867_69_1_end: ;
        if (or_temp_result_1867_69_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1867_69) goto or_final_or_event_1867_69_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1867_69_0 || or_temp_result_1867_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1867_69_0 || or_temp_result_1867_69_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1867_69_1_end: ;
}
void Frames::event_func_14884()
{
    // event 1868_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1868_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1868_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1868_69_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1868_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1868_69_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1868_69_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1868_69_end: ;
}
void Frames::event_func_14885()
{
    // event 1869_69
    bool or_result_1869_69 = false;
    bool or_temp_result_1869_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1869_69_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1869_69_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1869_69_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1869_69_0_end;
        or_result_1869_69 = true;
        or_temp_result_1869_69_0 = true;
    }
    or_event_1869_69_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1869_69_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1869_69
    bool or_temp_result_1869_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1869_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1869_69_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1869_69_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1869_69_1_end;
        or_result_1869_69 = true;
        or_temp_result_1869_69_1 = true;
        or_event_1869_69_1_end: ;
        if (or_temp_result_1869_69_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1869_69) goto or_final_or_event_1869_69_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1869_69_0 || or_temp_result_1869_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1869_69_0 || or_temp_result_1869_69_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1869_69_1_end: ;
}
void Frames::event_func_14886()
{
    // event 1870_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1870_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1870_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1870_69_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1870_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1870_69_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1870_69_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1870_69_end: ;
}
void Frames::event_func_14887()
{
    // event 1871_69
    bool or_result_1871_69 = false;
    bool or_temp_result_1871_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1871_69_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1871_69_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1871_69_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1871_69_0_end;
        or_result_1871_69 = true;
        or_temp_result_1871_69_0 = true;
    }
    or_event_1871_69_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1871_69_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1871_69
    bool or_temp_result_1871_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1871_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1871_69_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1871_69_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1871_69_1_end;
        or_result_1871_69 = true;
        or_temp_result_1871_69_1 = true;
        or_event_1871_69_1_end: ;
        if (or_temp_result_1871_69_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1871_69) goto or_final_or_event_1871_69_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1871_69_0 || or_temp_result_1871_69_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1871_69_0 || or_temp_result_1871_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1871_69_1_end: ;
}
void Frames::event_func_14888()
{
    // event 1872_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto event_1872_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1872_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1872_69_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1872_69_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1872_69_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1872_69_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1872_69_end: ;
}
void Frames::event_func_14889()
{
    // event 1873_69
    bool or_result_1873_69 = false;
    bool or_temp_result_1873_69_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1873_69_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1873_69_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1873_69_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1873_69_0_end;
        or_result_1873_69 = true;
        or_temp_result_1873_69_0 = true;
    }
    or_event_1873_69_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1873_69_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1873_69
    bool or_temp_result_1873_69_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1)) goto or_event_1873_69_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1873_69_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1873_69_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1873_69_1_end;
        or_result_1873_69 = true;
        or_temp_result_1873_69_1 = true;
        or_event_1873_69_1_end: ;
        if (or_temp_result_1873_69_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1873_69) goto or_final_or_event_1873_69_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1873_69_0 || or_temp_result_1873_69_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1873_69_0 || or_temp_result_1873_69_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1873_69_1_end: ;
}
void Frames::event_func_14890()
{
    // event 1875_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1875_69_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1875_69_end: ;
}
void Frames::event_func_14891()
{
    // event 1877_69
    {
        if (!(group_main_engine_1)) goto event_1877_69_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (0))) goto event_1877_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5000))) goto event_1877_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (800))) goto event_1877_69_end;
        if (!((global_values->get(4)) < (3))) goto event_1877_69_end;
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.add(0, 1);
        media.play(str_data_voices_88+global_strings->get(11)+str_br_br_pa_05_ogg_237, 29-1);
        media.lock(29-1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(0));
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(true);
    }
    event_1877_69_end: ;
}
void Frames::event_func_14892()
{
    // event 1879_69
    {
        if (!(group_main_engine_1)) goto event_1879_69_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (1))) goto event_1879_69_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(1)) == (390))) goto event_1879_69_end;
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_text(((Text*)get_instance(subtitledata_3432_instances))->get_paragraph(1));
    }
    event_1879_69_end: ;
}
void Frames::event_func_14893()
{
    // event 1880_69
    {
        if (!(group_main_engine_1)) goto event_1880_69_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (1))) goto event_1880_69_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(1)) == (540))) goto event_1880_69_end;
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.add(1, 1);
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(4);
        }
        media.play_id(SOUND_COMMON_TBALARM2_312, -1, 1);
        ((Active*)get_instance(alarmlight_3476_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(alarmlight_3476_instances))->set_x_scale(43);
        ((Active*)get_instance(alarmlight_3476_instances))->set_y_scale(24);
        ((Active*)get_instance(alarmlight_3476_instances))->set_visible(true);
    }
    event_1880_69_end: ;
}
void Frames::event_func_14894()
{
    // event 1881_69
    {
        if (!(group_main_engine_1)) goto event_1881_69_end;
        if (!(((Active*)get_instance(alarmlight_3476_instances))->alterables->flags.is_on(1))) goto event_1881_69_end;
        ((Active*)get_instance(alarmlight_3476_instances))->blend_color.set_alpha_coefficient(get_max(cos_deg(((Active*)get_instance(alarmlight_3476_instances))->alterables->values.get(0))*200+180, 0));
        ((Active*)get_instance(alarmlight_3476_instances))->alterables->values.set(0, (((Active*)get_instance(alarmlight_3476_instances))->alterables->values.get(0)+5)%math_helper%360);
        ((Active*)get_instance(alarmlight_3476_instances))->alterables->values.add(1, 1);
    }
    event_1881_69_end: ;
}
void Frames::event_func_14895()
{
    // event 1882_69
    {
        if (!(group_main_engine_1)) goto event_1882_69_end;
        if (!(((Active*)get_instance(alarmlight_3476_instances))->alterables->flags.is_on(1))) goto event_1882_69_end;
        if (!((((Active*)get_instance(alarmlight_3476_instances))->alterables->values.get(1)) > (300))) goto event_1882_69_end;
        if (!((((Active*)get_instance(alarmlight_3476_instances))->alterables->values.get(0)) < (20))) goto event_1882_69_end;
        ((Active*)get_instance(alarmlight_3476_instances))->alterables->flags.disable(1);
    }
    event_1882_69_end: ;
}
void Frames::event_func_14896()
{
    // event 1883_69
    {
        if (!(group_main_engine_1)) goto event_1883_69_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(0)) == (1))) goto event_1883_69_end;
        if (!((((Active*)get_instance(objectsiren_3337_instances))->alterables->values.get(1)) > (600))) goto event_1883_69_end;
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.add(1, 1);
        ((TextBlitter*)get_instance(subtitletext_3433_instances))->set_visible(false);
        ((Active*)get_instance(objectsiren_3337_instances))->alterables->values.add(0, 1);
    }
    event_1883_69_end: ;
}
void Frames::event_func_14897()
{
    // event 1884_69
    {
        if (!(group_main_engine_1)) goto event_1884_69_end;
        if (!((global_values->get(4)) < (2))) goto event_1884_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (3874))) goto event_1884_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (3974))) goto event_1884_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (920))) goto event_1884_69_end;
        global_values->set(4, 2);
        global_values->set(5, 3874);
        global_values->set(6, 1090);
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
    event_1884_69_end: ;
}
void Frames::event_func_14898()
{
    // event 1885_69
    {
        if (!(group_main_engine_1)) goto event_1885_69_end;
        if (!((global_values->get(4)) < (3))) goto event_1885_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7500))) goto event_1885_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (7684))) goto event_1885_69_end;
        global_values->set(4, 3);
        global_values->set(5, 7584);
        global_values->set(6, 1080);
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
    event_1885_69_end: ;
}
void Frames::event_func_14899()
{
    // event 1886_69
    {
        if (!(group_main_engine_1)) goto event_1886_69_end;
        if (!((global_values->get(4)) < (4))) goto event_1886_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (10000))) goto event_1886_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (10364))) goto event_1886_69_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (504))) goto event_1886_69_end;
        global_values->set(4, 4);
        global_values->set(5, 10208);
        global_values->set(6, 480);
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
    event_1886_69_end: ;
}
void Frames::event_func_14900()
{
    // event 2050_69
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2050_69_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (2))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2050_69_end;
        if (!((global_values->get(4)) == (1))) goto event_2050_69_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, -40);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1928);
    }
    event_2050_69_end: ;
}
void Frames::event_func_14901()
{
    // event 2051_69
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2051_69_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_2051_69_end;
        if (!((global_values->get(4)) == (1))) goto event_2051_69_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 256);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1984);
    }
    event_2051_69_end: ;
}
void Frames::event_func_14902()
{
    // event 2092_69
    {
        if (!(group_main_engine_1)) goto event_2092_69_end;
        fd3backpillar_3594_instances.clear_selection();
        for (ObjectIterator it(fd3backpillar_3594_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()*0.8+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(frame_top()*0.8+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_angle((((((Active*)*it)->get_x()-frame_left())*1.0)/math_helper/global_values->get(16))*45.0-22.5, 0);
        }
    }
    event_2092_69_end: ;
}
void Frames::event_func_14903()
{
    // event 2096_69
    {
        if (!(group_main_engine_1)) goto event_2096_69_end;
        if (!((global_values->get(3)%math_helper%8) == (5))) goto event_2096_69_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.sub(5, 512);
    }
    event_2096_69_end: ;
}
void Frames::event_func_14904()
{
    // event 2097_69
    {
        if (!(group_pause_1)) goto event_2097_69_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2097_69_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2097_69_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2097_69_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2097_69_end;
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
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        bosssatellitethrusters_2250_instances.clear_selection();
        for (ObjectIterator it(bosssatellitethrusters_2250_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(+1);
        }
        hazardorbitbeamscan_3645_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(lockeddoorseal_2672_instances))->stop_animation();
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->stop_animation();
    }
    event_2097_69_end: ;
}
void Frames::event_func_14905()
{
    // event 2098_69
    bool or_result_2098_69 = false;
    bool or_temp_result_2098_69_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2098_69_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2098_69_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2098_69_0_end;
        or_result_2098_69 = true;
        or_temp_result_2098_69_0 = true;
    }
    or_event_2098_69_0_end: ;
    // event 2098_69
    bool or_temp_result_2098_69_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2098_69_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2098_69_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2098_69_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2098_69_1_end;
        or_result_2098_69 = true;
        or_temp_result_2098_69_1 = true;
        or_event_2098_69_1_end: ;
        if (!or_result_2098_69) goto or_final_or_event_2098_69_1_end;
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
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
        bosssatellitethrusters_2250_instances.clear_selection();
        for (ObjectIterator it(bosssatellitethrusters_2250_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemydnalaser_2236_instances.clear_selection();
        for (ObjectIterator it(enemydnalaser_2236_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objecttransporterstart_3412_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objecttransporter_3344_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemygatlinggundebris_3595_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggundebris_3595_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
        }
        hazardorbitbeamscan_3645_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeamscan_3645_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyhomingbullet_2568_instances.clear_selection();
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(lockeddoorterminal_2606_instances))->start_animation();
        ((Active*)get_instance(lockeddoorseal_2672_instances))->start_animation();
    }
    or_final_or_event_2098_69_1_end: ;
}
void Frames::handle_frame_70_events()
{
    test_collisions_69();
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
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_2750();
    event_func_2751();
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
    event_func_14743();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_14744();
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
    event_func_14745();
    event_func_1778();
    event_func_2784();
    event_func_2785();
    event_func_1781();
    event_func_2786();
    event_func_2787();
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
    event_func_14746();
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
    event_func_2068();
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
    event_func_2079();
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
    event_func_2978();
    event_func_2979();
    event_func_6066();
    event_func_2980();
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_6067();
    event_func_6068();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_13971();
    event_func_13972();
    event_func_13973();
    event_func_13974();
    event_func_13975();
    event_func_13976();
    event_func_14747();
    event_func_13978();
    event_func_13979();
    event_func_13980();
    event_func_13981();
    event_func_13982();
    event_func_13983();
    event_func_13984();
    event_func_13985();
    event_func_14748();
    event_func_14749();
    event_func_14750();
    event_func_14751();
    event_func_14752();
    event_func_14753();
    event_func_14754();
    event_func_14755();
    event_func_14756();
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
    event_func_14757();
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
    event_func_14385();
    event_func_13478();
    event_func_13479();
    event_func_13480();
    event_func_13481();
    event_func_13482();
    event_func_13483();
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
    event_func_14758();
    event_func_14759();
    event_func_10829();
    event_func_10830();
    event_func_10831();
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
    event_func_14760();
    event_func_11482();
    event_func_8705();
    event_func_8706();
    event_func_8707();
    event_func_8708();
    event_func_8709();
    event_func_8710();
    event_func_8711();
    event_func_8712();
    event_func_8714();
    event_func_13242();
    event_func_8718();
    event_func_8719();
    event_func_8720();
    event_func_8721();
    event_func_8722();
    event_func_8723();
    event_func_9128();
    event_func_9129();
    event_func_9130();
    event_func_9131();
    event_func_9132();
    event_func_9133();
    event_func_9134();
    event_func_9135();
    event_func_9136();
    event_func_9137();
    event_func_9138();
    event_func_14761();
    event_func_9140();
    event_func_9141();
    event_func_9142();
    event_func_9143();
    event_func_9144();
    event_func_9145();
    event_func_9146();
    event_func_9147();
    event_func_9148();
    event_func_9149();
    event_func_9150();
    event_func_9151();
    event_func_9152();
    event_func_9153();
    event_func_14037();
    event_func_14038();
    event_func_14039();
    event_func_14040();
    event_func_14041();
    event_func_14042();
    event_func_14043();
    event_func_14044();
    event_func_14045();
    event_func_14046();
    event_func_14047();
    event_func_14048();
    event_func_14049();
    event_func_14050();
    event_func_14762();
    event_func_14052();
    event_func_14053();
    event_func_11910();
    event_func_11913();
    event_func_9713();
    event_func_9714();
    event_func_9715();
    event_func_9716();
    event_func_9717();
    event_func_9718();
    event_func_9719();
    event_func_9720();
    event_func_9721();
    event_func_9722();
    event_func_5516();
    event_func_14763();
    event_func_14764();
    event_func_14765();
    event_func_14766();
    event_func_14767();
    event_func_14768();
    event_func_14769();
    event_func_14770();
    event_func_14771();
    event_func_14772();
    event_func_14773();
    event_func_14774();
    event_func_14775();
    event_func_14776();
    event_func_14777();
    event_func_14778();
    event_func_14779();
    event_func_14780();
    event_func_14781();
    event_func_14782();
    event_func_14783();
    event_func_14784();
    event_func_14785();
    event_func_14786();
    event_func_14787();
    event_func_14788();
    event_func_14789();
    event_func_14790();
    event_func_14791();
    event_func_14792();
    event_func_14793();
    event_func_14794();
    event_func_14795();
    event_func_14796();
    event_func_14797();
    event_func_14798();
    event_func_14799();
    event_func_14800();
    event_func_14801();
    event_func_14802();
    event_func_14803();
    event_func_14804();
    event_func_14805();
    event_func_14806();
    event_func_14807();
    event_func_14808();
    event_func_14809();
    event_func_14810();
    event_func_14811();
    event_func_10851();
    event_func_10852();
    event_func_10853();
    event_func_11483();
    event_func_11484();
    event_func_14531();
    event_func_11486();
    event_func_11487();
    event_func_11488();
    event_func_11489();
    event_func_14532();
    event_func_14533();
    event_func_14534();
    event_func_14812();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1) goto group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end;
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1_end: ;
    if (!group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1) goto group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1_end;
    event_func_14813();
    event_func_14814();
    event_func_14815();
    event_func_14816();
    event_func_14817();
    event_func_14818();
    event_func_14819();
    event_func_14820();
    event_func_14821();
    event_func_14822();
    event_func_14823();
    event_func_14824();
    event_func_14825();
    event_func_14826();
    event_func_14827();
    event_func_14828();
    event_func_14829();
    event_func_14830();
    event_func_14831();
    event_func_14832();
    event_func_14833();
    event_func_14834();
    event_func_14835();
    event_func_14836();
    event_func_14837();
    event_func_14838();
    event_func_14839();
    event_func_14840();
    event_func_14841();
    event_func_14842();
    event_func_14843();
    event_func_14844();
    event_func_14845();
    event_func_14846();
    event_func_14847();
    event_func_14848();
    event_func_14849();
    event_func_14850();
    event_func_14851();
    event_func_14852();
    event_func_14853();
    event_func_14854();
    event_func_14855();
    event_func_14856();
    event_func_14857();
    event_func_14858();
    if (!group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_14859();
    event_func_14860();
    event_func_14861();
    event_func_14862();
    event_func_14863();
    event_func_14864();
    event_func_14865();
    event_func_14866();
    event_func_14867();
    event_func_14868();
    event_func_14869();
    event_func_14870();
    event_func_14871();
    event_func_14872();
    event_func_14873();
    group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_14874();
    if (!group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1_end;
    event_func_14875();
    event_func_14876();
    event_func_14877();
    event_func_14878();
    event_func_14879();
    event_func_14880();
    event_func_14881();
    event_func_14882();
    event_func_14883();
    event_func_14884();
    event_func_14885();
    event_func_14886();
    event_func_14887();
    event_func_14888();
    event_func_14889();
    group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1_end: ;
    event_func_14890();
    group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1_end: ;
    event_func_14891();
    event_func_14537();
    event_func_14892();
    event_func_14893();
    event_func_14894();
    event_func_14895();
    event_func_14896();
    event_func_14897();
    event_func_14898();
    event_func_14899();
    event_func_2519();
    event_func_3234();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
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
    event_func_3957();
    event_func_3958();
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_10929();
    event_func_14900();
    event_func_14901();
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
    event_func_14902();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    event_func_14903();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_14904();
    event_func_14905();
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
void Frames::handle_frame_70_pre_events()
{
}
void Frames::event_func_14906()
{
    // event 1_69
    {
        if (!((global_values->get(4)) == (99))) goto event_1_69_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
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
        if (!group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1) {
            group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 = true;
        }
        ((Active*)get_instance(flashbackbg_3654_instances))->set_x_scale(global_values->get(16)*0.1);
        ((Active*)get_instance(flashbackbg_3654_instances))->set_y_scale(global_values->get(17)*0.1);
        ((Active*)get_instance(flashbackbg_3654_instances))->set_visible(true);
        {
            loop_gui_shiftup_running = true;
            int times = int(50);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        global_values->set(3, 0);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
    }
    event_1_69_end: ;
}
void Frames::event_func_14907()
{
    // event 2_69
    {
        if (!((global_values->get(4)) != (99))) goto event_2_69_end;
        bosssparkyrightarm_3329_instances.clear_selection();
        pick_objects_in_zone(bosssparkyrightarm_3329_instances, -72, 754, 705, 2234);
        bosssatellitearm_2252_instances.clear_selection();
        pick_objects_in_zone(bosssatellitearm_2252_instances, -72, 754, 705, 2234);
        enemyelitemask_2511_instances.clear_selection();
        pick_objects_in_zone(enemyelitemask_2511_instances, -72, 754, 705, 2234);
        bosssparkytail_3305_instances.clear_selection();
        pick_objects_in_zone(bosssparkytail_3305_instances, -72, 754, 705, 2234);
        bosssatellite_2251_instances.clear_selection();
        pick_objects_in_zone(bosssatellite_2251_instances, -72, 754, 705, 2234);
        bosssatellitetop_2246_instances.clear_selection();
        pick_objects_in_zone(bosssatellitetop_2246_instances, -72, 754, 705, 2234);
        bosssparky_3327_instances.clear_selection();
        pick_objects_in_zone(bosssparky_3327_instances, -72, 754, 705, 2234);
        enemyelite_2510_instances.clear_selection();
        pick_objects_in_zone(enemyelite_2510_instances, -72, 754, 705, 2234);
        bosssparkyleftarm_3328_instances.clear_selection();
        pick_objects_in_zone(bosssparkyleftarm_3328_instances, -72, 754, 705, 2234);
        bosssatellitethrusters_2250_instances.clear_selection();
        pick_objects_in_zone(bosssatellitethrusters_2250_instances, -72, 754, 705, 2234);
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssatellitetop_2246_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssatellitethrusters_2250_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2_69_end: ;
}
void Frames::event_func_14908()
{
    // event 7_69
    {
        if (!(group_main_engine_1)) goto event_7_69_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 52);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_7_69_end: ;
}
void Frames::event_func_14909()
{
    // event 24_69
    {
        if (!(group_main_engine_1)) goto event_24_69_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(4, 0.65);
    }
    event_24_69_end: ;
}
void Frames::event_func_14910()
{
    // event 1431_69
    {
        if (!(group_main_engine_1)) goto event_1431_69_end;
        hazardorbitbeam_3644_instances.clear_selection();
        spread_value(hazardorbitbeam_3644_instances, 5, 0);
        for (ObjectIterator it(hazardorbitbeam_3644_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((((Active*)*it)->alterables->values.get(5)/math_helper/6)%math_helper%2)*2-1);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)/math_helper/6)*180+(((Active*)*it)->alterables->values.get(5)%math_helper%6+0.5)*24+18.5);
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
        }
        hazardorbitbeambase_3633_instances.clear_selection();
        for (ObjectIterator it(hazardorbitbeambase_3633_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1431_69_end: ;
}
void Frames::event_func_14911()
{
    // event 1708_69
    {
        if (!(group_main_engine_1)) goto event_1708_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        spread_value(enemygatlinggun_3650_instances, 3, 0);
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, (((Active*)*it)->alterables->values.get(3)*180)-90);
            ((Active*)*it)->alterables->values.set(3, (((Active*)*it)->alterables->values.get(3)*180)+90);
            ((Active*)*it)->alterables->values.set(15, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(16, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(17, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(18, 10);
        }
    }
    event_1708_69_end: ;
}
void Frames::event_func_14912()
{
    // event 1804_69
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1)) goto event_1804_69_end;
        bosssatellitearm_2252_instances.clear_selection();
        spread_value(bosssatellitearm_2252_instances, 3, 0);
        spread_value(bosssatellitearm_2252_instances, 4, 0);
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 56+(((Active*)*it)->alterables->values.get(3)%math_helper%bosssatellitearm_2252_instances.size()/math_helper/2)*24);
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)%math_helper%2)*180);
        }
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(3));
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(6, 240);
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->get_x());
        }
    }
    event_1804_69_end: ;
}
void Frames::event_func_14913()
{
    // event 1876_69
    {
        if (!(group_main_engine_1)) goto event_1876_69_end;
        if (!((global_values->get(4)) < (3))) goto event_1876_69_end;
        enemygatlinggun_3650_instances.clear_selection();
        for (ObjectIterator it(enemygatlinggun_3650_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1876_69_end: ;
}
void Frames::event_func_14914()
{
    // event 2040_69
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2040_69_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(8);
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(13);
        }
    }
    event_2040_69_end: ;
}
void Frames::event_func_14915()
{
    // event 2091_69
    {
        if (!(group_main_engine_1)) goto event_2091_69_end;
        fd3backpillar_3594_instances.clear_selection();
        for (ObjectIterator it(fd3backpillar_3594_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->set_y_scale(4);
        }
    }
    event_2091_69_end: ;
}
void Frames::on_frame_70_start_events()
{
    event_func_14906();
    event_func_14907();
    event_func_3980();
    event_func_4133();
    event_func_3265();
    event_func_14091();
    event_func_14908();
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
    event_func_14909();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
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
    event_func_3986();
    event_func_3987();
    event_func_14910();
    event_func_10707();
    event_func_13539();
    event_func_10939();
    event_func_11501();
    event_func_9226();
    event_func_14097();
    event_func_9809();
    event_func_9810();
    event_func_14911();
    event_func_14431();
    event_func_2686();
    event_func_2687();
    event_func_14912();
    event_func_14913();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_14914();
    event_func_3999();
    event_func_11365();
    event_func_14915();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_70_init()
{
    index = 69;
    width = 14400;
    height = 2016;
    virtual_width = 14400;
    virtual_height = 2016;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.800000011921, 0.800000011921, true, false, false);
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
    static ObjectList* qualifier_20_instances[] = {&enemyrotorbladedeath_2126_instances, &enemyrotorblade_2205_instances, &bosssatellite_2251_instances, &enemydnacannon_2264_instances, &enemybubblorbiter_2443_instances, &enemyelitemask_2511_instances, &enemyseeker_2648_instances, &enemytankbot_2821_instances, &bosssparky_3327_instances, &enemypounder_3419_instances, &hazardorbitbeambase_3633_instances, &enemygatlinggun_3650_instances, NULL};
    qualifier_20.set(12, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece8_762_instances, &levelparallaxpiece9_763_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &objecttransporter_3344_instances, &lockedlabdoorbarrier_3541_instances, &fdlooplayer12_3636_instances, &fdlooplayer03_3639_instances, &fdlooplayer11_3640_instances, &fdlooplayer02_3641_instances, &fdlooplayer13_3642_instances, &fdlooplayer01_3643_instances, &fdlooplayer14_3646_instances, &fdlooplayer04_3647_instances, &fdlooplayer05_3648_instances, &fdlooplayer15_3649_instances, NULL};
    qualifier_7.set(38, &qualifier_7_instances[0]);
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
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &fdlooplayer03_3639_instances, &fdlooplayer02_3641_instances, &fdlooplayer01_3643_instances, &fdlooplayer04_3647_instances, &fdlooplayer05_3648_instances, NULL};
    qualifier_10.set(8, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &fdlooplayer12_3636_instances, &fdlooplayer11_3640_instances, &fdlooplayer13_3642_instances, &fdlooplayer14_3646_instances, &fdlooplayer15_3649_instances, NULL};
    qualifier_11.set(8, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3590(0, 8), 0);
    add_background_object(create_levelparallaxpiece1_3591(0, 0), 0);
    add_background_object(create_levelparallaxpiece7_3592(0, 256), 0);
    add_background_object(create_levelparallaxpiece8_3593(64, 432), 0);
    add_object(create_fd3backpillar_3594(160, -32), 0);
    add_object(create_fd3backpillar_3594(744, -32), 0);
    add_object(create_fd3backpillar_3594(424, -32), 0);
    add_object(create_fd3backpillar_3594(1008, -32), 0);
    add_object(create_fd3backpillar_3594(1328, -32), 0);
    add_object(create_fd3backpillar_3594(1592, -32), 0);
    add_object(create_fd3backpillar_3594(1888, -32), 0);
    add_object(create_fd3backpillar_3594(2152, -32), 0);
    add_object(create_fd3backpillar_3594(2440, -32), 0);
    add_object(create_fd3backpillar_3594(2704, -32), 0);
    add_object(create_fd3backpillar_3594(2984, -32), 0);
    add_object(create_fd3backpillar_3594(3248, -32), 0);
    add_object(create_fd3backpillar_3594(3528, -32), 0);
    add_object(create_fd3backpillar_3594(3792, -32), 0);
    add_background_object(create_levelparallaxpiece9_3596(0, 552), 1);
    add_background_object(create_fdsilo1_3597(1088, 632), 1);
    add_background_object(create_fdsilo1_3597(1088, 760), 1);
    add_background_object(create_fdsilo1_3597(1088, 888), 1);
    add_background_object(create_fdsilo1_3597(1088, 504), 1);
    add_background_object(create_fdsilo1_3597(1088, 1016), 1);
    add_background_object(create_fdsilo1_3597(1088, 1144), 1);
    add_background_object(create_fdsilo1_3597(1088, 1272), 1);
    add_background_object(create_fdsilo1_3597(680, 768), 1);
    add_background_object(create_fdsilo1_3597(680, 896), 1);
    add_background_object(create_fdsilo1_3597(680, 1024), 1);
    add_background_object(create_fdsilo1_3597(680, 1152), 1);
    add_background_object(create_fdsilo1_3597(680, 1280), 1);
    add_background_object(create_fdsilo1_3597(680, 640), 1);
    add_background_object(create_fdsilo1_3597(1536, 632), 1);
    add_background_object(create_fdsilo1_3597(1536, 760), 1);
    add_background_object(create_fdsilo1_3597(1536, 888), 1);
    add_background_object(create_fdsilo1_3597(1536, 504), 1);
    add_background_object(create_fdsilo1_3597(1536, 1016), 1);
    add_background_object(create_fdsilo1_3597(1536, 1144), 1);
    add_background_object(create_fdsilo1_3597(1536, 1272), 1);
    add_background_object(create_fdsilo1_3597(0, 768), 1);
    add_background_object(create_fdsilo1_3597(0, 896), 1);
    add_background_object(create_fdsilo1_3597(0, 1024), 1);
    add_background_object(create_fdsilo1_3597(0, 1152), 1);
    add_background_object(create_fdsilo1_3597(0, 1280), 1);
    add_background_object(create_fdsilo1_3597(0, 640), 1);
    add_background_object(create_fdsilo1_3597(384, 768), 1);
    add_background_object(create_fdsilo1_3597(384, 896), 1);
    add_background_object(create_fdsilo1_3597(384, 1024), 1);
    add_background_object(create_fdsilo1_3597(384, 1152), 1);
    add_background_object(create_fdsilo1_3597(384, 1280), 1);
    add_background_object(create_fdsilo1_3597(384, 640), 1);
    add_background_object(create_fdsilo1_3597(0, 1408), 1);
    add_background_object(create_fdsilo1_3597(0, 1536), 1);
    add_background_object(create_fdsilo1_3597(384, 1408), 1);
    add_background_object(create_fdsilo1_3597(384, 1536), 1);
    add_background_object(create_fdsilo1_3597(0, 512), 1);
    add_background_object(create_fdsilo1_3597(0, 384), 1);
    add_background_object(create_fdsilo1_3597(384, 512), 1);
    add_background_object(create_fdsilo1_3597(384, 384), 1);
    add_background_object(create_fdsilo1_3597(0, 256), 1);
    add_background_object(create_fdsilo1_3597(0, 128), 1);
    add_background_object(create_fdsilo1_3597(384, 256), 1);
    add_background_object(create_fdsilo1_3597(384, 128), 1);
    add_background_object(create_fdsilo1_3597(0, 0), 1);
    add_background_object(create_fdsilo1_3597(384, 0), 1);
    add_background_object(create_fdsilo1_3597(680, 384), 1);
    add_background_object(create_fdsilo1_3597(680, 512), 1);
    add_background_object(create_fdsilo1_3597(680, 256), 1);
    add_background_object(create_fdsilo1_3597(680, 128), 1);
    add_background_object(create_fdsilo1_3597(680, 0), 1);
    add_background_object(create_fdsilo1_3597(1088, 120), 1);
    add_background_object(create_fdsilo1_3597(1088, 248), 1);
    add_background_object(create_fdsilo1_3597(1088, 376), 1);
    add_background_object(create_fdsilo1_3597(1088, -8), 1);
    add_background_object(create_fdsilo1_3597(1536, 120), 1);
    add_background_object(create_fdsilo1_3597(1536, 248), 1);
    add_background_object(create_fdsilo1_3597(1536, 376), 1);
    add_background_object(create_fdsilo1_3597(1536, -8), 1);
    add_background_object(create_fdsilo1_3597(2376, 624), 1);
    add_background_object(create_fdsilo1_3597(2376, 752), 1);
    add_background_object(create_fdsilo1_3597(2376, 880), 1);
    add_background_object(create_fdsilo1_3597(2376, 496), 1);
    add_background_object(create_fdsilo1_3597(2376, 1008), 1);
    add_background_object(create_fdsilo1_3597(2376, 1136), 1);
    add_background_object(create_fdsilo1_3597(2376, 1264), 1);
    add_background_object(create_fdsilo1_3597(1968, 760), 1);
    add_background_object(create_fdsilo1_3597(1968, 888), 1);
    add_background_object(create_fdsilo1_3597(1968, 1016), 1);
    add_background_object(create_fdsilo1_3597(1968, 1144), 1);
    add_background_object(create_fdsilo1_3597(1968, 1272), 1);
    add_background_object(create_fdsilo1_3597(1968, 632), 1);
    add_background_object(create_fdsilo1_3597(2824, 624), 1);
    add_background_object(create_fdsilo1_3597(2824, 752), 1);
    add_background_object(create_fdsilo1_3597(2824, 880), 1);
    add_background_object(create_fdsilo1_3597(2824, 496), 1);
    add_background_object(create_fdsilo1_3597(2824, 1008), 1);
    add_background_object(create_fdsilo1_3597(2824, 1136), 1);
    add_background_object(create_fdsilo1_3597(2824, 1264), 1);
    add_background_object(create_fdsilo1_3597(1968, 376), 1);
    add_background_object(create_fdsilo1_3597(1968, 504), 1);
    add_background_object(create_fdsilo1_3597(1968, 248), 1);
    add_background_object(create_fdsilo1_3597(1968, 120), 1);
    add_background_object(create_fdsilo1_3597(1968, -8), 1);
    add_background_object(create_fdsilo1_3597(2376, 112), 1);
    add_background_object(create_fdsilo1_3597(2376, 240), 1);
    add_background_object(create_fdsilo1_3597(2376, 368), 1);
    add_background_object(create_fdsilo1_3597(2376, -16), 1);
    add_background_object(create_fdsilo1_3597(2824, 112), 1);
    add_background_object(create_fdsilo1_3597(2824, 240), 1);
    add_background_object(create_fdsilo1_3597(2824, 368), 1);
    add_background_object(create_fdsilo1_3597(2824, -16), 1);
    add_background_object(create_fdsilo1_3597(3608, 632), 1);
    add_background_object(create_fdsilo1_3597(3608, 760), 1);
    add_background_object(create_fdsilo1_3597(3608, 888), 1);
    add_background_object(create_fdsilo1_3597(3608, 504), 1);
    add_background_object(create_fdsilo1_3597(3608, 1016), 1);
    add_background_object(create_fdsilo1_3597(3608, 1144), 1);
    add_background_object(create_fdsilo1_3597(3608, 1272), 1);
    add_background_object(create_fdsilo1_3597(3200, 760), 1);
    add_background_object(create_fdsilo1_3597(3200, 888), 1);
    add_background_object(create_fdsilo1_3597(3200, 1016), 1);
    add_background_object(create_fdsilo1_3597(3200, 1144), 1);
    add_background_object(create_fdsilo1_3597(3200, 1272), 1);
    add_background_object(create_fdsilo1_3597(3200, 632), 1);
    add_background_object(create_fdsilo1_3597(4056, 632), 1);
    add_background_object(create_fdsilo1_3597(4056, 760), 1);
    add_background_object(create_fdsilo1_3597(4056, 888), 1);
    add_background_object(create_fdsilo1_3597(4056, 504), 1);
    add_background_object(create_fdsilo1_3597(4056, 1016), 1);
    add_background_object(create_fdsilo1_3597(4056, 1144), 1);
    add_background_object(create_fdsilo1_3597(4056, 1272), 1);
    add_background_object(create_fdsilo1_3597(3200, 376), 1);
    add_background_object(create_fdsilo1_3597(3200, 504), 1);
    add_background_object(create_fdsilo1_3597(3200, 248), 1);
    add_background_object(create_fdsilo1_3597(3200, 120), 1);
    add_background_object(create_fdsilo1_3597(3200, -8), 1);
    add_background_object(create_fdsilo1_3597(3608, 120), 1);
    add_background_object(create_fdsilo1_3597(3608, 248), 1);
    add_background_object(create_fdsilo1_3597(3608, 376), 1);
    add_background_object(create_fdsilo1_3597(3608, -8), 1);
    add_background_object(create_fdsilo1_3597(4056, 120), 1);
    add_background_object(create_fdsilo1_3597(4056, 248), 1);
    add_background_object(create_fdsilo1_3597(4056, 376), 1);
    add_background_object(create_fdsilo1_3597(4056, -8), 1);
    add_background_object(create_fdsilo1_3597(4984, 632), 1);
    add_background_object(create_fdsilo1_3597(4984, 760), 1);
    add_background_object(create_fdsilo1_3597(4984, 888), 1);
    add_background_object(create_fdsilo1_3597(4984, 504), 1);
    add_background_object(create_fdsilo1_3597(4984, 1016), 1);
    add_background_object(create_fdsilo1_3597(4984, 1144), 1);
    add_background_object(create_fdsilo1_3597(4984, 1272), 1);
    add_background_object(create_fdsilo1_3597(4576, 760), 1);
    add_background_object(create_fdsilo1_3597(4576, 888), 1);
    add_background_object(create_fdsilo1_3597(4576, 1016), 1);
    add_background_object(create_fdsilo1_3597(4576, 1144), 1);
    add_background_object(create_fdsilo1_3597(4576, 1272), 1);
    add_background_object(create_fdsilo1_3597(4576, 632), 1);
    add_background_object(create_fdsilo1_3597(5432, 632), 1);
    add_background_object(create_fdsilo1_3597(5432, 760), 1);
    add_background_object(create_fdsilo1_3597(5432, 888), 1);
    add_background_object(create_fdsilo1_3597(5432, 504), 1);
    add_background_object(create_fdsilo1_3597(5432, 1016), 1);
    add_background_object(create_fdsilo1_3597(5432, 1144), 1);
    add_background_object(create_fdsilo1_3597(5432, 1272), 1);
    add_background_object(create_fdsilo1_3597(4576, 376), 1);
    add_background_object(create_fdsilo1_3597(4576, 504), 1);
    add_background_object(create_fdsilo1_3597(4576, 248), 1);
    add_background_object(create_fdsilo1_3597(4576, 120), 1);
    add_background_object(create_fdsilo1_3597(4576, -8), 1);
    add_background_object(create_fdsilo1_3597(4984, 120), 1);
    add_background_object(create_fdsilo1_3597(4984, 248), 1);
    add_background_object(create_fdsilo1_3597(4984, 376), 1);
    add_background_object(create_fdsilo1_3597(4984, -8), 1);
    add_background_object(create_fdsilo1_3597(5432, 120), 1);
    add_background_object(create_fdsilo1_3597(5432, 248), 1);
    add_background_object(create_fdsilo1_3597(5432, 376), 1);
    add_background_object(create_fdsilo1_3597(5432, -8), 1);
    add_background_object(create_fdsilo1_3597(6232, 632), 1);
    add_background_object(create_fdsilo1_3597(6232, 760), 1);
    add_background_object(create_fdsilo1_3597(6232, 888), 1);
    add_background_object(create_fdsilo1_3597(6232, 504), 1);
    add_background_object(create_fdsilo1_3597(6232, 1016), 1);
    add_background_object(create_fdsilo1_3597(6232, 1144), 1);
    add_background_object(create_fdsilo1_3597(6232, 1272), 1);
    add_background_object(create_fdsilo1_3597(5824, 760), 1);
    add_background_object(create_fdsilo1_3597(5824, 888), 1);
    add_background_object(create_fdsilo1_3597(5824, 1016), 1);
    add_background_object(create_fdsilo1_3597(5824, 1144), 1);
    add_background_object(create_fdsilo1_3597(5824, 1272), 1);
    add_background_object(create_fdsilo1_3597(5824, 632), 1);
    add_background_object(create_fdsilo1_3597(6680, 632), 1);
    add_background_object(create_fdsilo1_3597(6680, 760), 1);
    add_background_object(create_fdsilo1_3597(6680, 888), 1);
    add_background_object(create_fdsilo1_3597(6680, 504), 1);
    add_background_object(create_fdsilo1_3597(6680, 1016), 1);
    add_background_object(create_fdsilo1_3597(6680, 1144), 1);
    add_background_object(create_fdsilo1_3597(6680, 1272), 1);
    add_background_object(create_fdsilo1_3597(5824, 376), 1);
    add_background_object(create_fdsilo1_3597(5824, 504), 1);
    add_background_object(create_fdsilo1_3597(5824, 248), 1);
    add_background_object(create_fdsilo1_3597(5824, 120), 1);
    add_background_object(create_fdsilo1_3597(5824, -8), 1);
    add_background_object(create_fdsilo1_3597(6232, 120), 1);
    add_background_object(create_fdsilo1_3597(6232, 248), 1);
    add_background_object(create_fdsilo1_3597(6232, 376), 1);
    add_background_object(create_fdsilo1_3597(6232, -8), 1);
    add_background_object(create_fdsilo1_3597(6680, 120), 1);
    add_background_object(create_fdsilo1_3597(6680, 248), 1);
    add_background_object(create_fdsilo1_3597(6680, 376), 1);
    add_background_object(create_fdsilo1_3597(6680, -8), 1);
    add_background_object(create_fdsilo1_3597(7496, 640), 1);
    add_background_object(create_fdsilo1_3597(7496, 768), 1);
    add_background_object(create_fdsilo1_3597(7496, 896), 1);
    add_background_object(create_fdsilo1_3597(7496, 512), 1);
    add_background_object(create_fdsilo1_3597(7496, 1024), 1);
    add_background_object(create_fdsilo1_3597(7496, 1152), 1);
    add_background_object(create_fdsilo1_3597(7496, 1280), 1);
    add_background_object(create_fdsilo1_3597(7088, 768), 1);
    add_background_object(create_fdsilo1_3597(7088, 896), 1);
    add_background_object(create_fdsilo1_3597(7088, 1024), 1);
    add_background_object(create_fdsilo1_3597(7088, 1152), 1);
    add_background_object(create_fdsilo1_3597(7088, 1280), 1);
    add_background_object(create_fdsilo1_3597(7088, 640), 1);
    add_background_object(create_fdsilo1_3597(7944, 640), 1);
    add_background_object(create_fdsilo1_3597(7944, 768), 1);
    add_background_object(create_fdsilo1_3597(7944, 896), 1);
    add_background_object(create_fdsilo1_3597(7944, 512), 1);
    add_background_object(create_fdsilo1_3597(7944, 1024), 1);
    add_background_object(create_fdsilo1_3597(7944, 1152), 1);
    add_background_object(create_fdsilo1_3597(7944, 1280), 1);
    add_background_object(create_fdsilo1_3597(7088, 384), 1);
    add_background_object(create_fdsilo1_3597(7088, 512), 1);
    add_background_object(create_fdsilo1_3597(7088, 256), 1);
    add_background_object(create_fdsilo1_3597(7088, 128), 1);
    add_background_object(create_fdsilo1_3597(7088, 0), 1);
    add_background_object(create_fdsilo1_3597(7496, 128), 1);
    add_background_object(create_fdsilo1_3597(7496, 256), 1);
    add_background_object(create_fdsilo1_3597(7496, 384), 1);
    add_background_object(create_fdsilo1_3597(7496, 0), 1);
    add_background_object(create_fdsilo1_3597(7944, 128), 1);
    add_background_object(create_fdsilo1_3597(7944, 256), 1);
    add_background_object(create_fdsilo1_3597(7944, 384), 1);
    add_background_object(create_fdsilo1_3597(7944, 0), 1);
    add_background_object(create_fdsilo1_3597(8744, 640), 1);
    add_background_object(create_fdsilo1_3597(8744, 768), 1);
    add_background_object(create_fdsilo1_3597(8744, 896), 1);
    add_background_object(create_fdsilo1_3597(8744, 512), 1);
    add_background_object(create_fdsilo1_3597(8744, 1024), 1);
    add_background_object(create_fdsilo1_3597(8744, 1152), 1);
    add_background_object(create_fdsilo1_3597(8744, 1280), 1);
    add_background_object(create_fdsilo1_3597(8336, 768), 1);
    add_background_object(create_fdsilo1_3597(8336, 896), 1);
    add_background_object(create_fdsilo1_3597(8336, 1024), 1);
    add_background_object(create_fdsilo1_3597(8336, 1152), 1);
    add_background_object(create_fdsilo1_3597(8336, 1280), 1);
    add_background_object(create_fdsilo1_3597(8336, 640), 1);
    add_background_object(create_fdsilo1_3597(9192, 640), 1);
    add_background_object(create_fdsilo1_3597(9192, 768), 1);
    add_background_object(create_fdsilo1_3597(9192, 896), 1);
    add_background_object(create_fdsilo1_3597(9192, 512), 1);
    add_background_object(create_fdsilo1_3597(9192, 1024), 1);
    add_background_object(create_fdsilo1_3597(9192, 1152), 1);
    add_background_object(create_fdsilo1_3597(9192, 1280), 1);
    add_background_object(create_fdsilo1_3597(8336, 384), 1);
    add_background_object(create_fdsilo1_3597(8336, 512), 1);
    add_background_object(create_fdsilo1_3597(8336, 256), 1);
    add_background_object(create_fdsilo1_3597(8336, 128), 1);
    add_background_object(create_fdsilo1_3597(8336, 0), 1);
    add_background_object(create_fdsilo1_3597(8744, 128), 1);
    add_background_object(create_fdsilo1_3597(8744, 256), 1);
    add_background_object(create_fdsilo1_3597(8744, 384), 1);
    add_background_object(create_fdsilo1_3597(8744, 0), 1);
    add_background_object(create_fdsilo1_3597(9192, 128), 1);
    add_background_object(create_fdsilo1_3597(9192, 256), 1);
    add_background_object(create_fdsilo1_3597(9192, 384), 1);
    add_background_object(create_fdsilo1_3597(9192, 0), 1);
    add_background_object(create_fdcoreback1_3598(11968, 656), 2);
    add_background_object(create_fdcoreback1_3598(5728, 272), 2);
    add_background_object(create_fdcoreback1_3598(3360, 656), 2);
    add_background_object(create_fdcoreback1_3598(3488, 656), 2);
    add_background_object(create_fdcoreback1_3598(3360, 528), 2);
    add_background_object(create_fdcoreback1_3598(3488, 528), 2);
    add_background_object(create_fdcoreback1_3598(3360, 336), 2);
    add_background_object(create_fdcoreback1_3598(3488, 336), 2);
    add_background_object(create_fdcoreback1_3598(3360, 208), 2);
    add_background_object(create_fdcoreback1_3598(3488, 208), 2);
    add_background_object(create_fdcoreback1_3598(3744, 1040), 2);
    add_background_object(create_fdcoreback1_3598(3872, 1040), 2);
    add_background_object(create_fdcoreback1_3598(3744, 912), 2);
    add_background_object(create_fdcoreback1_3598(3872, 912), 2);
    add_background_object(create_fdcoreback1_3598(4000, 1040), 2);
    add_background_object(create_fdcoreback2_3599(4128, 1040), 2);
    add_background_object(create_fdcoreback1_3598(4000, 912), 2);
    add_background_object(create_fdcoreback2_3599(4128, 912), 2);
    add_background_object(create_fdcoreback2_3599(2880, 976), 2);
    add_background_object(create_fdcoreback1_3598(2752, 976), 2);
    add_background_object(create_fdcoreback1_3598(2624, 976), 2);
    add_background_object(create_fdcoreback1_3598(2496, 976), 2);
    add_background_object(create_fdcoreback2_3599(2472, 1000), 2);
    add_background_object(create_fdorbitbeamring1_3600(4592, 304), 2);
    add_background_object(create_fdorbitbeamring3_3601(4592, 544), 2);
    add_background_object(create_fdorbitbeamring2_3602(4832, 304), 2);
    add_background_object(create_fdorbitbeamring4_3603(4832, 544), 2);
    add_background_object(create_fdorbitbeamring1_3600(4144, 872), 2);
    add_background_object(create_fdorbitbeamring3_3601(4144, 1112), 2);
    add_background_object(create_fdorbitbeamring2_3602(4384, 872), 2);
    add_background_object(create_fdorbitbeamring4_3603(4384, 1112), 2);
    add_background_object(create_fdcoreback1_3598(5856, 1040), 2);
    add_background_object(create_fdcoreback1_3598(5856, 912), 2);
    add_background_object(create_fdcoreback1_3598(5728, 912), 2);
    add_background_object(create_fdcoreback1_3598(5728, 1040), 2);
    add_background_object(create_fdcoreback1_3598(5728, 1424), 2);
    add_background_object(create_fdcoreback1_3598(5728, 1296), 2);
    add_background_object(create_fdcoreback1_3598(5856, 1424), 2);
    add_background_object(create_fdcoreback1_3598(11744, 336), 2);
    add_background_object(create_fdcoreback1_3598(11744, 208), 2);
    add_background_object(create_fdcoreback1_3598(11872, 208), 2);
    add_background_object(create_fdcoreback1_3598(11872, 336), 2);
    add_background_object(create_fdcoreback1_3598(11744, 656), 2);
    add_background_object(create_fdcoreback1_3598(11744, 528), 2);
    add_background_object(create_fdcoreback1_3598(11872, 528), 2);
    add_background_object(create_fdcoreback1_3598(11872, 656), 2);
    add_background_object(create_fdcoreback1_3598(6144, 912), 2);
    add_background_object(create_fdcoreback1_3598(6272, 912), 2);
    add_background_object(create_fdcoreback1_3598(6400, 912), 2);
    add_background_object(create_fdcoreback1_3598(6400, 720), 2);
    add_background_object(create_fdcoreback1_3598(6272, 720), 2);
    add_background_object(create_fdcoreback1_3598(6144, 720), 2);
    add_background_object(create_fdcoreback2_3599(6528, 912), 2);
    add_background_object(create_fdcoreback2_3599(6528, 720), 2);
    add_background_object(create_fdcoreback1_3598(5696, 112), 2);
    add_background_object(create_fdcoreback1_3598(5824, 112), 2);
    add_background_object(create_fdcoreback1_3598(5952, 112), 2);
    add_background_object(create_fdcoreback1_3598(6080, 112), 2);
    add_background_object(create_fdcoreback1_3598(6208, 112), 2);
    add_background_object(create_fdcoreback1_3598(6048, 224), 2);
    add_background_object(create_fdcoreback1_3598(6048, 400), 2);
    add_background_object(create_fdcoreback2_3599(6024, 272), 2);
    add_background_object(create_fdcoreback2_3599(6176, 272), 2);
    add_background_object(create_fdcoreback2_3599(6176, 400), 2);
    add_background_object(create_fdcoreback2_3599(6024, 400), 2);
    add_background_object(create_fdcoreback1_3598(5728, 400), 2);
    add_background_object(create_fdcoreback2_3599(5856, 272), 2);
    add_background_object(create_fdcoreback2_3599(5856, 400), 2);
    add_background_object(create_fdcoreback1_3598(6336, 112), 2);
    add_background_object(create_fdcoreback1_3598(6464, 112), 2);
    add_background_object(create_fdcoreback1_3598(6592, 112), 2);
    add_background_object(create_fdcoreback1_3598(6848, 304), 2);
    add_background_object(create_fdcoreback2_3599(7464, 400), 2);
    add_background_object(create_fdcoreback1_3598(7488, 144), 2);
    add_background_object(create_fdcoreback1_3598(7488, 272), 2);
    add_background_object(create_fdcoreback1_3598(7488, 400), 2);
    add_background_object(create_fdcoreback2_3599(7616, 400), 2);
    add_background_object(create_fdcoreback1_3598(6336, 1424), 2);
    add_background_object(create_fdcoreback2_3599(6464, 1424), 2);
    add_background_object(create_fdcoreback2_3599(6312, 1424), 2);
    add_background_object(create_fdcoreback2_3599(6312, 1552), 2);
    add_background_object(create_fdcoreback2_3599(6464, 1552), 2);
    add_background_object(create_fdcoreback1_3598(6336, 1624), 2);
    add_background_object(create_fdcoreback1_3598(5312, 1184), 2);
    add_background_object(create_fdcoreback2_3599(5440, 1184), 2);
    add_background_object(create_fdcoreback2_3599(5288, 1184), 2);
    add_background_object(create_fdcoreback2_3599(5288, 1312), 2);
    add_background_object(create_fdcoreback2_3599(5440, 1312), 2);
    add_background_object(create_fdcoreback1_3598(5312, 1384), 2);
    add_background_object(create_fdcoreback1_3598(4840, 912), 2);
    add_background_object(create_fdcoreback2_3599(4968, 912), 2);
    add_background_object(create_fdcoreback2_3599(4816, 912), 2);
    add_background_object(create_fdcoreback2_3599(4816, 1040), 2);
    add_background_object(create_fdcoreback2_3599(4968, 1040), 2);
    add_background_object(create_fdcoreback1_3598(4840, 1112), 2);
    add_background_object(create_fdcoreback1_3598(7488, 528), 2);
    add_background_object(create_fdcoreback2_3599(7464, 528), 2);
    add_background_object(create_fdcoreback2_3599(7616, 528), 2);
    add_background_object(create_fdcoreback2_3599(7464, 656), 2);
    add_background_object(create_fdcoreback2_3599(7616, 656), 2);
    add_background_object(create_fdcoreback1_3598(7488, 688), 2);
    add_background_object(create_fdcoreback1_3598(6568, 224), 2);
    add_background_object(create_fdcoreback1_3598(6568, 448), 2);
    add_background_object(create_fdcoreback2_3599(6544, 272), 2);
    add_background_object(create_fdcoreback2_3599(6544, 400), 2);
    add_background_object(create_fdcoreback2_3599(6696, 400), 2);
    add_background_object(create_fdcoreback2_3599(6696, 272), 2);
    add_background_object(create_fdcoreback1_3598(7232, 848), 2);
    add_background_object(create_fdcoreback2_3599(7208, 848), 2);
    add_background_object(create_fdcoreback2_3599(7616, 976), 2);
    add_background_object(create_fdcoreback1_3598(7000, 936), 2);
    add_background_object(create_fdcoreback1_3598(7000, 760), 2);
    add_background_object(create_fdcoreback2_3599(7128, 912), 2);
    add_background_object(create_fdcoreback2_3599(7128, 784), 2);
    add_background_object(create_fdcoreback2_3599(6976, 912), 2);
    add_background_object(create_fdcoreback2_3599(6976, 784), 2);
    add_background_object(create_fdcoreback1_3598(7360, 848), 2);
    add_background_object(create_fdcoreback1_3598(7360, 976), 2);
    add_background_object(create_fdcoreback1_3598(7488, 976), 2);
    add_background_object(create_fdcoreback1_3598(7232, 976), 2);
    add_background_object(create_fdcoreback1_3598(6848, 432), 2);
    add_background_object(create_fdcoreback1_3598(6848, 560), 2);
    add_background_object(create_fdcoreback1_3598(6848, 688), 2);
    add_background_object(create_fdcoreback2_3599(6976, 512), 2);
    add_background_object(create_fdcoreback1_3598(6848, 816), 2);
    add_background_object(create_fdcoreback1_3598(6848, 944), 2);
    add_background_object(create_fdcoreback1_3598(8032, 976), 2);
    add_background_object(create_fdcoreback1_3598(7904, 976), 2);
    add_background_object(create_fdcoreback2_3599(7880, 976), 2);
    add_background_object(create_fdcoreback1_3598(8032, 848), 2);
    add_background_object(create_fdcoreback1_3598(8032, 720), 2);
    add_background_object(create_fdcoreback1_3598(8160, 896), 2);
    add_background_object(create_fdcoreback1_3598(8160, 672), 2);
    add_background_object(create_fdcoreback1_3598(8288, 848), 2);
    add_background_object(create_fdcoreback1_3598(8288, 720), 2);
    add_background_object(create_fdcoreback1_3598(8416, 848), 2);
    add_background_object(create_fdcoreback1_3598(8416, 720), 2);
    add_background_object(create_fdcoreback1_3598(8544, 848), 2);
    add_background_object(create_fdcoreback1_3598(8544, 672), 2);
    add_background_object(create_fdcoreback1_3598(8032, 528), 2);
    add_background_object(create_fdcoreback1_3598(8160, 544), 2);
    add_background_object(create_fdcoreback1_3598(8288, 592), 2);
    add_background_object(create_fdcoreback1_3598(8416, 592), 2);
    add_background_object(create_fdcoreback1_3598(8032, 400), 2);
    add_background_object(create_fdcoreback1_3598(8288, 464), 2);
    add_background_object(create_fdcoreback1_3598(8160, 416), 2);
    add_background_object(create_fdcoreback1_3598(8032, 272), 2);
    add_background_object(create_fdcoreback1_3598(8032, 144), 2);
    add_background_object(create_fdcoreback1_3598(5408, 208), 2);
    add_background_object(create_fdcoreback2_3599(5384, 208), 2);
    add_background_object(create_fdcoreback1_3598(4384, 208), 2);
    add_background_object(create_fdcoreback1_3598(4512, 208), 2);
    add_background_object(create_fdcoreback1_3598(4384, 80), 2);
    add_background_object(create_fdcoreback1_3598(4512, 80), 2);
    add_background_object(create_fdcoreback2_3599(8992, 784), 2);
    add_background_object(create_fdcoreback2_3599(8992, 656), 2);
    add_background_object(create_fdcoreback2_3599(9160, 784), 2);
    add_background_object(create_fdcoreback2_3599(9160, 656), 2);
    add_background_object(create_fdorbitbeamring1_3600(10304, 104), 2);
    add_background_object(create_fdorbitbeamring3_3601(10304, 344), 2);
    add_background_object(create_fdorbitbeamring2_3602(10544, 104), 2);
    add_background_object(create_fdorbitbeamring4_3603(10544, 344), 2);
    add_background_object(create_fdcoreback2_3599(10720, 568), 2);
    add_background_object(create_fdcoreback2_3599(10760, 568), 2);
    add_background_object(create_fdcoreback2_3599(10720, 696), 2);
    add_background_object(create_fdcoreback2_3599(10760, 696), 2);
    add_background_object(create_fdcoreback2_3599(10976, 568), 2);
    add_background_object(create_fdcoreback2_3599(11016, 568), 2);
    add_background_object(create_fdcoreback2_3599(10720, 824), 2);
    add_background_object(create_fdcoreback2_3599(9920, 440), 2);
    add_background_object(create_fdcoreback2_3599(9960, 440), 2);
    add_background_object(create_fdcoreback2_3599(9920, 568), 2);
    add_background_object(create_fdcoreback2_3599(9960, 568), 2);
    add_background_object(create_fdcoreback2_3599(9920, 696), 2);
    add_background_object(create_fdcoreback2_3599(9960, 696), 2);
    add_background_object(create_fdcoreback2_3599(9920, 824), 2);
    add_background_object(create_fdcoreback2_3599(9960, 824), 2);
    add_background_object(create_fdcoreback2_3599(9920, 952), 2);
    add_background_object(create_fdcoreback2_3599(9960, 952), 2);
    add_background_object(create_fdcoreback2_3599(9920, 1080), 2);
    add_background_object(create_fdcoreback2_3599(9960, 1080), 2);
    add_background_object(create_fdcoreback2_3599(10048, 568), 2);
    add_background_object(create_fdcoreback2_3599(10088, 568), 2);
    add_background_object(create_fdcoreback2_3599(10048, 696), 2);
    add_background_object(create_fdcoreback2_3599(10088, 696), 2);
    add_background_object(create_fdcoreback2_3599(10304, 568), 2);
    add_background_object(create_fdcoreback2_3599(10344, 568), 2);
    add_background_object(create_fdcoreback2_3599(10304, 696), 2);
    add_background_object(create_fdcoreback2_3599(10344, 696), 2);
    add_background_object(create_fdcoreback2_3599(10048, 824), 2);
    add_background_object(create_fdcoreback2_3599(10088, 824), 2);
    add_background_object(create_fdcoreback2_3599(10048, 952), 2);
    add_background_object(create_fdcoreback2_3599(10088, 952), 2);
    add_background_object(create_fdcoreback2_3599(10304, 824), 2);
    add_background_object(create_fdcoreback2_3599(10344, 824), 2);
    add_background_object(create_fdcoreback2_3599(10304, 952), 2);
    add_background_object(create_fdcoreback2_3599(10344, 952), 2);
    add_background_object(create_fdcoreback2_3599(10048, 1080), 2);
    add_background_object(create_fdcoreback2_3599(10088, 1080), 2);
    add_background_object(create_fdcoreback2_3599(10304, 1080), 2);
    add_background_object(create_fdcoreback2_3599(10344, 1080), 2);
    add_background_object(create_fdcoreback2_3599(9536, 184), 2);
    add_background_object(create_fdcoreback2_3599(9536, 312), 2);
    add_background_object(create_fdcoreback1_3598(9440, 376), 2);
    add_background_object(create_fdcoreback2_3599(9568, 376), 2);
    add_background_object(create_fdcoreback1_3598(14272, 144), 2);
    add_background_object(create_fdcoreback2_3599(14248, 144), 2);
    add_background_object(create_fdcoreback1_3598(12096, 656), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(14456, 197), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-244, 727), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-232, 728), 2);
    add_object(create_objectfuel_528(-212, 716), 2);
    add_object(create_bosssatellitetop_2246(256, 2108), 2);
    add_object(create_bosssatellitethrusters_2250(256, 2104), 2);
    add_object(create_bosssatellite_2251(256, 2112), 2);
    add_object(create_bosssatellitearm_2252(132, 2112), 2);
    add_object(create_bosssatellitearm_2252(156, 2112), 2);
    add_object(create_bosssatellitearm_2252(180, 2112), 2);
    add_object(create_bosssatellitearm_2252(204, 2112), 2);
    add_object(create_bosssatellitearm_2252(308, 2112), 2);
    add_object(create_bosssatellitearm_2252(332, 2112), 2);
    add_object(create_bosssatellitearm_2252(356, 2112), 2);
    add_object(create_bosssatellitearm_2252(380, 2112), 2);
    add_object(create_lockedlabdoorback_3506(3784, 1040), 2);
    add_object(create_enemygatlingguntable_3604(6256, 1712), 2);
    add_object(create_enemygatlingguntable_3604(6432, 1456), 2);
    add_object(create_enemygatlingguntable_3604(6464, 1072), 2);
    add_object(create_enemygatlingguntable_3604(5976, 240), 2);
    add_object(create_enemygatlingguntable_3604(6240, 560), 2);
    add_object(create_enemygatlingguntable_3604(7360, 432), 2);
    add_object(create_enemygatlingguntable_3604(7072, 1072), 2);
    add_object(create_enemygatlingguntable_3604(7672, 432), 2);
    add_object(create_enemygatlingguntable_3604(5368, 1480), 2);
    add_object(create_enemygatlingguntable_3604(4024, 944), 2);
    add_object(create_enemygatlingguntable_3604(7416, 880), 2);
    add_object(create_enemygatlingguntable_3604(8192, 1008), 2);
    add_object(create_enemygatlingguntable_3604(9760, 816), 2);
    add_object(create_enemygatlingguntable_3604(9600, 152), 2);
    add_object(create_enemygatlingguntable_3604(10208, 816), 2);
    add_object(create_enemygatlingguntable_3604(13696, 96), 2);
    add_object(create_enemygatlingguntable_3604(13440, 368), 2);
    add_object(create_enemygatlingguntable_3604(14240, 824), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_fdcoreloop2_3605(12328, 664), 3);
    add_background_object(create_fdcore1_3606(1344, 536), 3);
    add_background_object(create_fdcore1_3606(11072, 728), 3);
    add_background_object(create_fdcore4_3607(7264, 368), 3);
    add_background_object(create_fdcore4_3607(7264, 432), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 112), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 624), 3);
    add_background_object(create_fdcore1_3606(7232, 624), 3);
    add_background_object(create_fdcorefloor4_3609(7488, 536), 3);
    add_background_object(create_fdcorefloor2_3608(7584, 536), 3);
    add_background_object(create_fdcoreloop2_3605(8040, 984), 3);
    add_background_object(create_fdcorefloor4_3609(7200, 1008), 3);
    add_background_object(create_fdcoreback1_3598(6336, 1296), 3);
    add_background_object(create_fdcoreback2_3599(6464, 1296), 3);
    add_background_object(create_fdcoreback1_3598(5824, 112), 3);
    add_background_object(create_fdcoreback1_3598(5952, 112), 3);
    add_background_object(create_fdcore4_3607(6848, 432), 3);
    add_background_object(create_fdcore2_3610(6720, 432), 3);
    add_background_object(create_fdcore4_3607(5760, 432), 3);
    add_background_object(create_fdcore4_3607(5696, 432), 3);
    add_background_object(create_fdcore1_3606(5824, 432), 3);
    add_background_object(create_fdcorefloor3_3611(5696, 240), 3);
    add_background_object(create_fdcore1_3606(6656, 688), 3);
    add_background_object(create_fdcore2_3610(6784, 688), 3);
    add_background_object(create_fdcore2_3610(6656, 816), 3);
    add_background_object(create_fdcore1_3606(6656, 944), 3);
    add_background_object(create_fdcore2_3610(11584, 272), 3);
    add_background_object(create_fdcoreloop2_3605(808, 320), 3);
    add_background_object(create_fdcore4_3607(1344, 472), 3);
    add_background_object(create_fdcore6_3612(1344, 408), 3);
    add_background_object(create_fdcore6_3612(1408, 472), 3);
    add_background_object(create_fdcore2_3610(3904, 496), 3);
    add_background_object(create_fdcore1_3606(4032, 496), 3);
    add_background_object(create_fdcore1_3606(3392, 1392), 3);
    add_background_object(create_fdcore2_3610(3520, 1392), 3);
    add_background_object(create_fdcore6_3612(3200, 1264), 3);
    add_background_object(create_fdcore1_3606(2112, 1648), 3);
    add_background_object(create_fdcore2_3610(2112, 1520), 3);
    add_background_object(create_fdcore1_3606(2112, 1904), 3);
    add_background_object(create_fdcore2_3610(2112, 1776), 3);
    add_background_object(create_fdcore1_3606(2112, 1392), 3);
    add_background_object(create_fdcore2_3610(2112, 1264), 3);
    add_background_object(create_fdcore7_3613(2368, 1136), 3);
    add_background_object(create_fdcore5_3614(2304, 1200), 3);
    add_background_object(create_fdcore1_3606(2240, 1264), 3);
    add_background_object(create_fdcore2_3610(2368, 1264), 3);
    add_background_object(create_fdcore1_3606(960, 1344), 3);
    add_background_object(create_fdcore2_3610(960, 1472), 3);
    add_background_object(create_fdcorefloor2_3608(3904, 1136), 3);
    add_background_object(create_fdcore1_3606(3648, 272), 3);
    add_background_object(create_fdcorefloor2_3608(2880, 600), 3);
    add_background_object(create_fdcorefloor3_3611(128, 1344), 3);
    add_background_object(create_fdcore1_3606(1600, 600), 3);
    add_background_object(create_fdcore2_3610(1728, 600), 3);
    add_background_object(create_fdcore6_3612(1472, 536), 3);
    add_background_object(create_fdcorefloor1_3615(64, 440), 3);
    add_background_object(create_fdcorefloor1_3615(128, 440), 3);
    add_background_object(create_fdcoreslope1_3616(1216, 312), 3);
    add_background_object(create_fdcoreslope3_3617(1760, 440), 3);
    add_background_object(create_fdcoreslope5_3618(1440, 480), 3);
    add_background_object(create_fdcorefloor1_3615(1472, 248), 3);
    add_background_object(create_fdcorefloor1_3615(1536, 248), 3);
    add_background_object(create_fdcorefloor1_3615(1600, 248), 3);
    add_background_object(create_fdcorefloor1_3615(1664, 248), 3);
    add_background_object(create_fdcorefloor1_3615(1728, 248), 3);
    add_background_object(create_fdcorefloor1_3615(1856, 248), 3);
    add_background_object(create_fdcorefloor1_3615(0, 1952), 3);
    add_background_object(create_fdcorefloor1_3615(64, 1952), 3);
    add_background_object(create_fdcorefloor1_3615(128, 1952), 3);
    add_background_object(create_fdcorefloor1_3615(320, 1952), 3);
    add_background_object(create_fdcorefloor1_3615(384, 1952), 3);
    add_background_object(create_fdcorefloor1_3615(448, 1952), 3);
    add_background_object(create_fdcorefloor1_3615(512, 1952), 3);
    add_background_object(create_fdcorefloor1_3615(576, 1952), 3);
    add_background_object(create_fdcorefloor1_3615(352, 1760), 3);
    add_background_object(create_fdcorefloor1_3615(416, 1760), 3);
    add_background_object(create_fdcorefloor1_3615(480, 1760), 3);
    add_background_object(create_fdcorefloor1_3615(0, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(64, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(128, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(320, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(384, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(448, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(192, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(256, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(544, 1760), 3);
    add_background_object(create_fdcorefloor1_3615(608, 1760), 3);
    add_background_object(create_fdcorefloor1_3615(512, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(-64, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(0, 1016), 3);
    add_background_object(create_fdcorefloor1_3615(448, 1016), 3);
    add_background_object(create_fdcorefloor1_3615(512, 1016), 3);
    add_background_object(create_fdcorefloor1_3615(-64, 1016), 3);
    add_background_object(create_fdcorefloor1_3615(576, 1016), 3);
    add_background_object(create_fdcore1_3606(64, 472), 3);
    add_background_object(create_fdcore1_3606(-96, 1728), 3);
    add_background_object(create_fdcore2_3610(32, 1728), 3);
    add_background_object(create_fdcorefloor1_3615(-96, 1696), 3);
    add_background_object(create_fdcorefloor1_3615(-32, 1696), 3);
    add_background_object(create_fdcorefloor1_3615(32, 1696), 3);
    add_background_object(create_fdcorefloor1_3615(96, 1696), 3);
    add_background_object(create_fdcorefloor5_3619(160, 1696), 3);
    add_background_object(create_fdcorefloor6_3620(160, 1824), 3);
    add_background_object(create_fdcorefloor8_3621(-128, 1696), 3);
    add_background_object(create_fdcorefloor7_3622(-128, 1824), 3);
    add_background_object(create_fdcorefloor2_3608(160, 1728), 3);
    add_background_object(create_fdcorefloor3_3611(96, 1824), 3);
    add_background_object(create_fdcorefloor4_3609(-128, 1760), 3);
    add_background_object(create_fdcorefloor4_3609(-128, 1728), 3);
    add_background_object(create_fdcorefloor2_3608(160, 1760), 3);
    add_background_object(create_fdcore1_3606(-64, 1984), 3);
    add_background_object(create_fdcore2_3610(64, 1984), 3);
    add_background_object(create_fdcore1_3606(320, 1984), 3);
    add_background_object(create_fdcore2_3610(448, 1984), 3);
    add_background_object(create_fdcore1_3606(576, 1984), 3);
    add_background_object(create_fdcorefloor3_3611(32, 1824), 3);
    add_background_object(create_fdcorefloor3_3611(-32, 1824), 3);
    add_background_object(create_fdcorefloor3_3611(-96, 1824), 3);
    add_background_object(create_fdcorefloor8_3621(320, 1760), 3);
    add_background_object(create_fdcorefloor7_3622(320, 1792), 3);
    add_background_object(create_fdcorefloor3_3611(544, 1792), 3);
    add_background_object(create_fdcorefloor3_3611(480, 1792), 3);
    add_background_object(create_fdcorefloor3_3611(416, 1792), 3);
    add_background_object(create_fdcorefloor3_3611(352, 1792), 3);
    add_background_object(create_fdcorefloor3_3611(608, 1792), 3);
    add_background_object(create_fdcorefloor8_3621(320, 1568), 3);
    add_background_object(create_fdcorefloor7_3622(320, 1600), 3);
    add_background_object(create_fdcorefloor5_3619(160, 1504), 3);
    add_background_object(create_fdcorefloor6_3620(160, 1536), 3);
    add_background_object(create_fdcore1_3606(-64, 600), 3);
    add_background_object(create_fdcore7_3613(1728, 472), 3);
    add_background_object(create_fdcore3_3623(1216, 344), 3);
    add_background_object(create_fdcore4_3607(-64, 760), 3);
    add_background_object(create_fdcore5_3614(1664, 536), 3);
    add_background_object(create_fdcore2_3610(1472, 600), 3);
    add_background_object(create_fdcoreslope2_3624(1504, 544), 3);
    add_background_object(create_fdcorefloor1_3615(2048, 440), 3);
    add_background_object(create_fdcorefloor1_3615(1984, 440), 3);
    add_background_object(create_fdcorefloor1_3615(1920, 440), 3);
    add_background_object(create_fdcorefloor1_3615(1856, 440), 3);
    add_background_object(create_fdcore1_3606(1856, 600), 3);
    add_background_object(create_fdcore2_3610(1984, 600), 3);
    add_background_object(create_fdcoreslope4_3625(1600, 544), 3);
    add_background_object(create_fdcoreslope6_3626(1696, 480), 3);
    add_background_object(create_fdcorefloor2_3608(192, 1984), 3);
    add_background_object(create_fdcorefloor2_3608(192, 2048), 3);
    add_background_object(create_fdcorefloor4_3609(288, 1984), 3);
    add_background_object(create_fdcorefloor4_3609(288, 2048), 3);
    add_background_object(create_fdcorefloor8_3621(288, 1952), 3);
    add_background_object(create_fdcorefloor5_3619(192, 1952), 3);
    add_background_object(create_fdfloor1_3570(224, 1952), 3);
    add_background_object(create_fdcorefloor5_3619(352, 1568), 3);
    add_background_object(create_fdcorefloor6_3620(352, 1600), 3);
    add_background_object(create_fdfloor1_3570(384, 1568), 3);
    add_background_object(create_fdfloor1_3570(448, 1568), 3);
    add_background_object(create_fdfloor1_3570(512, 1568), 3);
    add_background_object(create_fdfloor1_3570(576, 1568), 3);
    add_background_object(create_fdcore2_3610(704, 1984), 3);
    add_background_object(create_fdcore1_3606(704, 1856), 3);
    add_background_object(create_fdcore2_3610(704, 1728), 3);
    add_background_object(create_fdcore1_3606(704, 1600), 3);
    add_background_object(create_fdcorefloor1_3615(640, 1952), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1600), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1664), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1728), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1792), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1856), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1920), 3);
    add_background_object(create_fdcorefloor8_3621(128, 1504), 3);
    add_background_object(create_fdcorefloor7_3622(128, 1536), 3);
    add_background_object(create_fdfloor1_3570(0, 1504), 3);
    add_background_object(create_fdfloor1_3570(64, 1504), 3);
    add_background_object(create_fdfloor1_3570(-64, 1504), 3);
    add_background_object(create_fdcorefloor1_3615(-64, 1952), 3);
    add_background_object(create_fdcorefloor9_3627(672, 1952), 3);
    add_background_object(create_fdcorefloor9_3627(672, 1760), 3);
    add_background_object(create_fdcorefloor9_3627(672, 1792), 3);
    add_background_object(create_fdcore2_3610(704, 1472), 3);
    add_background_object(create_fdcore1_3606(704, 1344), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1344), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1408), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1472), 3);
    add_background_object(create_fdcorefloor4_3609(672, 1536), 3);
    add_background_object(create_fdcorefloor5_3619(576, 1312), 3);
    add_background_object(create_fdcorefloor6_3620(576, 1344), 3);
    add_background_object(create_fdcorefloor7_3622(544, 1344), 3);
    add_background_object(create_fdcorefloor9_3627(640, 1568), 3);
    add_background_object(create_fdcorefloor9_3627(640, 1600), 3);
    add_background_object(create_fdcorefloor8_3621(672, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(704, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(768, 1312), 3);
    add_background_object(create_fdcorefloor3_3611(128, 728), 3);
    add_background_object(create_fdcorefloor3_3611(64, 728), 3);
    add_background_object(create_fdcorefloor3_3611(0, 728), 3);
    add_background_object(create_fdcorefloor3_3611(320, 728), 3);
    add_background_object(create_fdcorefloor3_3611(512, 728), 3);
    add_background_object(create_fdcorefloor3_3611(448, 728), 3);
    add_background_object(create_fdcorefloor3_3611(384, 728), 3);
    add_background_object(create_fdcorefloor3_3611(704, 728), 3);
    add_background_object(create_fdcorefloor3_3611(640, 728), 3);
    add_background_object(create_fdcorefloor3_3611(576, 728), 3);
    add_background_object(create_fdcorefloor3_3611(896, 728), 3);
    add_background_object(create_fdcorefloor3_3611(832, 728), 3);
    add_background_object(create_fdcorefloor3_3611(768, 728), 3);
    add_background_object(create_fdcorefloor3_3611(1024, 728), 3);
    add_background_object(create_fdcorefloor6_3620(192, 728), 3);
    add_background_object(create_fdcorefloor7_3622(288, 728), 3);
    add_background_object(create_fdcorefloor3_3611(960, 728), 3);
    add_background_object(create_fdcore2_3610(64, 600), 3);
    add_background_object(create_fdcore2_3610(-64, 472), 3);
    add_background_object(create_fdcorefloor3_3611(-64, 728), 3);
    add_background_object(create_fdcorefloor5_3619(192, 440), 3);
    add_background_object(create_fdcorefloor8_3621(288, 440), 3);
    add_background_object(create_fdcorefloor4_3609(288, 664), 3);
    add_background_object(create_fdcorefloor4_3609(288, 600), 3);
    add_background_object(create_fdcorefloor4_3609(288, 536), 3);
    add_background_object(create_fdcorefloor4_3609(288, 472), 3);
    add_background_object(create_fdcorefloor2_3608(192, 472), 3);
    add_background_object(create_fdcorefloor2_3608(192, 664), 3);
    add_background_object(create_fdcorefloor2_3608(192, 600), 3);
    add_background_object(create_fdcorefloor2_3608(192, 536), 3);
    add_background_object(create_fdfloor1_3570(224, 440), 3);
    add_background_object(create_fdcorefloor5_3619(640, 1016), 3);
    add_background_object(create_fdcorefloor6_3620(640, 1048), 3);
    add_background_object(create_fdcorefloor7_3622(608, 1048), 3);
    add_background_object(create_fdcore2_3610(832, 1344), 3);
    add_background_object(create_fdcore1_3606(832, 1472), 3);
    add_background_object(create_fdcore2_3610(832, 1600), 3);
    add_background_object(create_fdcore1_3606(832, 1728), 3);
    add_background_object(create_fdcore2_3610(832, 1856), 3);
    add_background_object(create_fdcore1_3606(832, 1984), 3);
    add_background_object(create_fdcorefloor1_3615(832, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(896, 1312), 3);
    add_background_object(create_fdcorefloor8_3621(1440, 248), 3);
    add_background_object(create_fdcorefloor7_3622(1440, 280), 3);
    add_background_object(create_fdcorefloor6_3620(1472, 280), 3);
    add_background_object(create_fdcorefloor5_3619(96, 1312), 3);
    add_background_object(create_fdcorefloor8_3621(192, 1312), 3);
    add_background_object(create_fdcorefloor9_3627(192, 1344), 3);
    add_background_object(create_fdcorefloor9_3627(96, 1344), 3);
    add_background_object(create_fdcorefloor5_3619(288, 1312), 3);
    add_background_object(create_fdcorefloor8_3621(384, 1312), 3);
    add_background_object(create_fdcorefloor3_3611(320, 1344), 3);
    add_background_object(create_fdcorefloor9_3627(384, 1344), 3);
    add_background_object(create_fdcorefloor9_3627(288, 1344), 3);
    add_background_object(create_fdcorefloor3_3611(128, 1048), 3);
    add_background_object(create_fdcorefloor1_3615(64, 1016), 3);
    add_background_object(create_fdcorefloor1_3615(128, 1016), 3);
    add_background_object(create_fdcorefloor1_3615(320, 1016), 3);
    add_background_object(create_fdcorefloor1_3615(384, 1016), 3);
    add_background_object(create_fdcorefloor1_3615(192, 1016), 3);
    add_background_object(create_fdcorefloor1_3615(256, 1016), 3);
    add_background_object(create_fdcorefloor5_3619(96, 1016), 3);
    add_background_object(create_fdcorefloor8_3621(192, 1016), 3);
    add_background_object(create_fdcorefloor9_3627(192, 1048), 3);
    add_background_object(create_fdcorefloor9_3627(96, 1048), 3);
    add_background_object(create_fdcorefloor5_3619(288, 1016), 3);
    add_background_object(create_fdcorefloor8_3621(384, 1016), 3);
    add_background_object(create_fdcorefloor3_3611(320, 1048), 3);
    add_background_object(create_fdcorefloor9_3627(384, 1048), 3);
    add_background_object(create_fdcorefloor9_3627(288, 1048), 3);
    add_background_object(create_fdcorefloor1_3615(64, 408), 3);
    add_background_object(create_fdcorefloor6_3620(32, 440), 3);
    add_background_object(create_fdcorefloor5_3619(32, 408), 3);
    add_background_object(create_fdcorefloor1_3615(-32, 408), 3);
    add_background_object(create_fdcorefloor3_3611(-32, 440), 3);
    add_background_object(create_fdcorefloor1_3615(-64, 472), 3);
    add_background_object(create_fdcorefloor1_3615(0, 472), 3);
    add_background_object(create_fdcorefloor8_3621(64, 440), 3);
    add_background_object(create_fdcore6_3612(2240, 536), 3);
    add_background_object(create_fdcoreslope1_3616(2112, 440), 3);
    add_background_object(create_fdcoreslope5_3618(2208, 480), 3);
    add_background_object(create_fdcore3_3623(2112, 472), 3);
    add_background_object(create_fdcore1_3606(2112, 600), 3);
    add_background_object(create_fdcore2_3610(2240, 600), 3);
    add_background_object(create_fdcoreslope2_3624(2272, 544), 3);
    add_background_object(create_fdcoreslope3_3617(2528, 440), 3);
    add_background_object(create_fdcore7_3613(2496, 472), 3);
    add_background_object(create_fdcore5_3614(2432, 536), 3);
    add_background_object(create_fdcore1_3606(2368, 600), 3);
    add_background_object(create_fdcore2_3610(2496, 600), 3);
    add_background_object(create_fdcoreslope4_3625(2368, 544), 3);
    add_background_object(create_fdcoreslope6_3626(2464, 480), 3);
    add_background_object(create_fdcore6_3612(2752, 536), 3);
    add_background_object(create_fdcoreslope1_3616(2624, 440), 3);
    add_background_object(create_fdcoreslope5_3618(2720, 480), 3);
    add_background_object(create_fdcore3_3623(2624, 472), 3);
    add_background_object(create_fdcore1_3606(2624, 600), 3);
    add_background_object(create_fdcore2_3610(2752, 600), 3);
    add_background_object(create_fdcoreslope2_3624(2784, 544), 3);
    add_background_object(create_fdcorefloor5_3619(1984, 248), 3);
    add_background_object(create_fdcorefloor1_3615(1920, 248), 3);
    add_background_object(create_fdcorefloor7_3622(1952, 280), 3);
    add_background_object(create_fdcorefloor6_3620(1984, 280), 3);
    add_background_object(create_fdcorefloor1_3615(1792, 248), 3);
    add_background_object(create_fdcorefloor1_3615(2880, 592), 3);
    add_background_object(create_fdcorefloor1_3615(2944, 592), 3);
    add_background_object(create_fdcorefloor1_3615(3008, 592), 3);
    add_background_object(create_fdcorefloor1_3615(3072, 592), 3);
    add_background_object(create_fdcore1_3606(2752, 728), 3);
    add_background_object(create_fdcore2_3610(2624, 728), 3);
    add_background_object(create_fdcore1_3606(2368, 856), 3);
    add_background_object(create_fdcore2_3610(2752, 856), 3);
    add_background_object(create_fdcore1_3606(2496, 728), 3);
    add_background_object(create_fdcore2_3610(2368, 728), 3);
    add_background_object(create_fdcore1_3606(2624, 856), 3);
    add_background_object(create_fdcore2_3610(2496, 856), 3);
    add_background_object(create_fdcore1_3606(2112, 856), 3);
    add_background_object(create_fdcore1_3606(2240, 728), 3);
    add_background_object(create_fdcore2_3610(2112, 728), 3);
    add_background_object(create_fdcore2_3610(2240, 856), 3);
    add_background_object(create_fdcorefloor4_3609(1056, 920), 3);
    add_background_object(create_fdcorefloor4_3609(1056, 856), 3);
    add_background_object(create_fdcorefloor4_3609(1056, 792), 3);
    add_background_object(create_fdcorefloor4_3609(1056, 728), 3);
    add_background_object(create_fdcorefloor9_3627(1056, 728), 3);
    add_background_object(create_fdcorefloor3_3611(2112, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2304, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2240, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2176, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2368, 984), 3);
    add_background_object(create_fdcorefloor7_3622(1056, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2432, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2624, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2560, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2496, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2688, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2752, 984), 3);
    add_background_object(create_fdcorefloor3_3611(2816, 984), 3);
    add_background_object(create_fdcore2_3610(1856, 472), 3);
    add_background_object(create_fdcore1_3606(1984, 472), 3);
    add_background_object(create_fdcoreloop1_3628(3360, 208), 3);
    add_background_object(create_fdcoreloop2_3605(3488, 656), 3);
    add_background_object(create_fdcoreloop3_3629(3424, 592), 3);
    add_background_object(create_fdcorefloor1_3615(3264, 592), 3);
    add_background_object(create_fdcorefloor5_3619(3328, 592), 3);
    add_background_object(create_fdcorefloor6_3620(3328, 624), 3);
    add_background_object(create_fdcorefloor3_3611(3264, 624), 3);
    add_background_object(create_fdcorefloor3_3611(3072, 624), 3);
    add_background_object(create_fdcorefloor3_3611(3008, 624), 3);
    add_background_object(create_fdcorefloor3_3611(2944, 624), 3);
    add_background_object(create_fdcorefloor3_3611(2880, 624), 3);
    add_background_object(create_fdcore4_3607(3424, 464), 3);
    add_background_object(create_fdcore4_3607(3488, 464), 3);
    add_background_object(create_fdcoreloop3_3629(3424, 272), 3);
    add_background_object(create_fdcorefloor1_3615(3648, 272), 3);
    add_background_object(create_fdcorefloor3_3611(3648, 368), 3);
    add_background_object(create_fdcorefloor7_3622(3616, 368), 3);
    add_background_object(create_fdcorefloor8_3621(3616, 272), 3);
    add_background_object(create_fdcorefloor1_3615(3712, 272), 3);
    add_background_object(create_fdcorefloor3_3611(3712, 368), 3);
    add_background_object(create_fdcorefloor1_3615(3648, 464), 3);
    add_background_object(create_fdcorefloor8_3621(3616, 464), 3);
    add_background_object(create_fdcorefloor1_3615(3712, 464), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 496), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 560), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 624), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 688), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 752), 3);
    add_background_object(create_fdcore2_3610(3648, 496), 3);
    add_background_object(create_fdcore1_3606(3776, 496), 3);
    add_background_object(create_fdcorefloor1_3615(3776, 464), 3);
    add_background_object(create_fdcorefloor1_3615(3840, 464), 3);
    add_background_object(create_fdcore1_3606(3648, 624), 3);
    add_background_object(create_fdcore2_3610(3776, 624), 3);
    add_background_object(create_fdcore2_3610(3648, 816), 3);
    add_background_object(create_fdcore1_3606(3776, 752), 3);
    add_background_object(create_fdcorefloor1_3615(3552, 784), 3);
    add_background_object(create_fdcorefloor1_3615(3488, 784), 3);
    add_background_object(create_fdcorefloor9_3627(3616, 784), 3);
    add_background_object(create_fdcorefloor1_3615(3424, 784), 3);
    add_background_object(create_fdcorefloor1_3615(3360, 784), 3);
    add_background_object(create_fdcorefloor1_3615(3296, 784), 3);
    add_background_object(create_fdcorefloor1_3615(3232, 784), 3);
    add_background_object(create_fdcorefloor1_3615(3168, 784), 3);
    add_background_object(create_fdcore2_3610(3392, 816), 3);
    add_background_object(create_fdcore1_3606(3520, 816), 3);
    add_background_object(create_fdcore2_3610(3136, 816), 3);
    add_background_object(create_fdcore1_3606(3264, 816), 3);
    add_background_object(create_fdcorefloor1_3615(3104, 784), 3);
    add_background_object(create_fdcorefloor8_3621(3104, 784), 3);
    add_background_object(create_fdcorefloor4_3609(3104, 816), 3);
    add_background_object(create_fdcorefloor4_3609(3104, 880), 3);
    add_background_object(create_fdcorefloor6_3620(2880, 984), 3);
    add_background_object(create_fdcorefloor9_3627(2880, 624), 3);
    add_background_object(create_fdcorefloor2_3608(2880, 920), 3);
    add_background_object(create_fdcorefloor2_3608(2880, 856), 3);
    add_background_object(create_fdcorefloor2_3608(2880, 792), 3);
    add_background_object(create_fdcorefloor2_3608(2880, 728), 3);
    add_background_object(create_fdcorefloor2_3608(2880, 664), 3);
    add_background_object(create_fdcorefloor1_3615(3200, 592), 3);
    add_background_object(create_fdcorefloor3_3611(3200, 624), 3);
    add_background_object(create_fdcorefloor1_3615(3136, 592), 3);
    add_background_object(create_fdcorefloor3_3611(3136, 624), 3);
    add_background_object(create_fdcorefloor3_3611(3584, 176), 3);
    add_background_object(create_fdcorefloor3_3611(3520, 176), 3);
    add_background_object(create_fdcorefloor3_3611(3456, 176), 3);
    add_background_object(create_fdcorefloor3_3611(3392, 176), 3);
    add_background_object(create_fdcorefloor3_3611(3328, 176), 3);
    add_background_object(create_fdcorefloor3_3611(3264, 176), 3);
    add_background_object(create_fdcorefloor6_3620(3648, 176), 3);
    add_background_object(create_fdcore2_3610(3392, 48), 3);
    add_background_object(create_fdcore1_3606(3520, 48), 3);
    add_background_object(create_fdcorefloor2_3608(3648, 112), 3);
    add_background_object(create_fdcorefloor2_3608(3648, 48), 3);
    add_background_object(create_fdcorefloor2_3608(3648, -16), 3);
    add_background_object(create_fdcore2_3610(3520, -80), 3);
    add_background_object(create_fdcorefloor2_3608(3648, -80), 3);
    add_background_object(create_fdcore1_3606(3392, -80), 3);
    add_background_object(create_fdcore1_3606(3264, 48), 3);
    add_background_object(create_fdcore2_3610(3264, -80), 3);
    add_background_object(create_fdcorefloor5_3619(3328, 208), 3);
    add_background_object(create_fdcorefloor8_3621(3296, 208), 3);
    add_background_object(create_fdcorefloor2_3608(3328, 240), 3);
    add_background_object(create_fdcorefloor4_3609(3296, 240), 3);
    add_background_object(create_fdcorefloor2_3608(3328, 304), 3);
    add_background_object(create_fdcorefloor4_3609(3296, 304), 3);
    add_background_object(create_fdcorefloor2_3608(3328, 368), 3);
    add_background_object(create_fdcorefloor4_3609(3296, 368), 3);
    add_background_object(create_fdcorefloor2_3608(3328, 432), 3);
    add_background_object(create_fdcorefloor4_3609(3296, 432), 3);
    add_background_object(create_fdcorefloor6_3620(3328, 496), 3);
    add_background_object(create_fdcorefloor7_3622(3296, 496), 3);
    add_background_object(create_fdcorefloor3_3611(3200, 176), 3);
    add_background_object(create_fdcorefloor3_3611(3136, 176), 3);
    add_background_object(create_fdcore2_3610(3136, 48), 3);
    add_background_object(create_fdcore1_3606(3136, -80), 3);
    add_background_object(create_fdcorefloor4_3609(3104, 48), 3);
    add_background_object(create_fdcorefloor4_3609(3104, 112), 3);
    add_background_object(create_fdcorefloor7_3622(3104, 176), 3);
    add_background_object(create_fdcorefloor4_3609(3104, -16), 3);
    add_background_object(create_fdcorefloor4_3609(3104, -80), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 304), 3);
    add_background_object(create_fdcorefloor5_3619(3904, 336), 3);
    add_background_object(create_fdcorefloor2_3608(3776, 304), 3);
    add_background_object(create_fdcorefloor6_3620(3904, 368), 3);
    add_background_object(create_fdcorefloor1_3615(3776, 336), 3);
    add_background_object(create_fdcorefloor3_3611(3776, 368), 3);
    add_background_object(create_fdcorefloor1_3615(3840, 336), 3);
    add_background_object(create_fdcorefloor3_3611(3840, 368), 3);
    add_background_object(create_fdcorefloor7_3622(3104, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3136, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3200, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3264, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3328, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3392, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3456, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3520, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3584, 944), 3);
    add_background_object(create_fdcore2_3610(3648, 1136), 3);
    add_background_object(create_fdcore1_3606(2880, 1136), 3);
    add_background_object(create_fdcorefloor1_3615(3648, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(2944, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(2880, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(3712, 1104), 3);
    add_background_object(create_fdcore2_3610(3904, 1200), 3);
    add_background_object(create_fdcore1_3606(3776, 1136), 3);
    add_background_object(create_fdcorefloor1_3615(3904, 1168), 3);
    add_background_object(create_fdcorefloor1_3615(3840, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(3776, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(3968, 1168), 3);
    add_background_object(create_fdcore2_3610(2752, 1136), 3);
    add_background_object(create_fdcorefloor1_3615(2752, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(2816, 1104), 3);
    add_background_object(create_fdcorefloor9_3627(3904, 1168), 3);
    add_background_object(create_fdcorefloor5_3619(3904, 1104), 3);
    add_background_object(create_fdcore2_3610(3776, 1264), 3);
    add_background_object(create_fdcore1_3606(3648, 1264), 3);
    add_background_object(create_fdcore2_3610(2880, 1264), 3);
    add_background_object(create_fdcore1_3606(2752, 1264), 3);
    add_background_object(create_fdcore1_3606(3904, 1328), 3);
    add_background_object(create_fdcore1_3606(4032, 1200), 3);
    add_background_object(create_fdcore2_3610(4032, 1328), 3);
    add_background_object(create_fdcorefloor1_3615(4032, 1168), 3);
    add_background_object(create_fdcorefloor1_3615(4096, 1168), 3);
    add_background_object(create_fdcore1_3606(2624, 1136), 3);
    add_background_object(create_fdcorefloor1_3615(2688, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(2624, 1104), 3);
    add_background_object(create_fdcore2_3610(2496, 1136), 3);
    add_background_object(create_fdcorefloor1_3615(2496, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(2560, 1104), 3);
    add_background_object(create_fdcore2_3610(2624, 1264), 3);
    add_background_object(create_fdcore1_3606(2496, 1264), 3);
    add_background_object(create_fdcorefloor1_3615(3904, 464), 3);
    add_background_object(create_fdcorefloor1_3615(4032, 464), 3);
    add_background_object(create_fdcorefloor1_3615(4096, 464), 3);
    add_background_object(create_fdcoreslope3_3617(2400, 1104), 3);
    add_background_object(create_fdcoreslope4_3625(2240, 1208), 3);
    add_background_object(create_fdcoreslope6_3626(2336, 1144), 3);
    add_background_object(create_fdcorefloor1_3615(2144, 1256), 3);
    add_background_object(create_fdcorefloor1_3615(2176, 1256), 3);
    add_background_object(create_fdcorefloor1_3615(960, 1312), 3);
    add_background_object(create_fdcorefloor1_3615(992, 1312), 3);
    add_background_object(create_fdcorefloor5_3619(1056, 1312), 3);
    add_background_object(create_fdcorefloor8_3621(2112, 1256), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1416), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1352), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1288), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1344), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1408), 3);
    add_background_object(create_fdcore1_3606(960, 1600), 3);
    add_background_object(create_fdcore2_3610(960, 1728), 3);
    add_background_object(create_fdcore1_3606(960, 1856), 3);
    add_background_object(create_fdcore2_3610(960, 1984), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1472), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1536), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1600), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1664), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1728), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1792), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1856), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1920), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 1984), 3);
    add_background_object(create_fdcorefloor2_3608(1056, 2048), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1608), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1544), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1480), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1800), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1736), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1672), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1928), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1864), 3);
    add_background_object(create_fdcorefloor4_3609(2112, 1992), 3);
    add_background_object(create_fdcore2_3610(2240, 1392), 3);
    add_background_object(create_fdcore2_3610(2496, 1392), 3);
    add_background_object(create_fdcore1_3606(2368, 1392), 3);
    add_background_object(create_fdcore1_3606(2240, 1520), 3);
    add_background_object(create_fdcore2_3610(2368, 1520), 3);
    add_background_object(create_fdcore1_3606(2496, 1520), 3);
    add_background_object(create_fdcore2_3610(2240, 1648), 3);
    add_background_object(create_fdcore2_3610(2496, 1648), 3);
    add_background_object(create_fdcore1_3606(2368, 1648), 3);
    add_background_object(create_fdcore1_3606(2240, 1776), 3);
    add_background_object(create_fdcore2_3610(2368, 1776), 3);
    add_background_object(create_fdcore1_3606(2496, 1776), 3);
    add_background_object(create_fdcore2_3610(2240, 1904), 3);
    add_background_object(create_fdcore2_3610(2496, 1904), 3);
    add_background_object(create_fdcore1_3606(2368, 1904), 3);
    add_background_object(create_fdcore2_3610(3648, 1392), 3);
    add_background_object(create_fdcore1_3606(2880, 1392), 3);
    add_background_object(create_fdcore2_3610(2752, 1392), 3);
    add_background_object(create_fdcore1_3606(2624, 1392), 3);
    add_background_object(create_fdcore1_3606(3776, 1392), 3);
    add_background_object(create_fdcorefloor5_3619(2944, 656), 3);
    add_background_object(create_fdcorefloor8_3621(2912, 656), 3);
    add_background_object(create_fdcorefloor7_3622(2912, 688), 3);
    add_background_object(create_fdcorefloor6_3620(2944, 688), 3);
    add_background_object(create_fdcore4_3607(3648, 752), 3);
    add_background_object(create_fdcore4_3607(3712, 752), 3);
    add_background_object(create_fdcore4_3607(3776, 880), 3);
    add_background_object(create_fdcore4_3607(3840, 880), 3);
    add_background_object(create_fdcorefloor3_3611(3648, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3712, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3776, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3840, 944), 3);
    add_background_object(create_fdcore2_3610(3904, 816), 3);
    add_background_object(create_fdcore1_3606(3904, 688), 3);
    add_background_object(create_fdcorefloor3_3611(3904, 944), 3);
    add_background_object(create_fdcorefloor3_3611(3968, 944), 3);
    add_background_object(create_fdcore6_3612(3136, 1200), 3);
    add_background_object(create_fdcoreslope1_3616(3008, 1104), 3);
    add_background_object(create_fdcore3_3623(3008, 1136), 3);
    add_background_object(create_fdcore1_3606(3008, 1264), 3);
    add_background_object(create_fdcore2_3610(3008, 1392), 3);
    add_background_object(create_fdcore1_3606(3136, 1328), 3);
    add_background_object(create_fdcore6_3612(3264, 1328), 3);
    add_background_object(create_fdcore4_3607(3136, 1264), 3);
    add_background_object(create_fdcore4_3607(3136, 1456), 3);
    add_background_object(create_fdcore4_3607(3200, 1456), 3);
    add_background_object(create_fdcore2_3610(3264, 1392), 3);
    add_background_object(create_fdcoreslope5_3618(3168, 1208), 3);
    add_background_object(create_fdcoreslope5_3618(3104, 1144), 3);
    add_background_object(create_fdcoreslope5_3618(3232, 1272), 3);
    add_background_object(create_fdcoreslope2_3624(3296, 1336), 3);
    add_background_object(create_fdcore1_3606(3264, 1520), 3);
    add_background_object(create_fdcore2_3610(3136, 1520), 3);
    add_background_object(create_fdcore1_3606(3008, 1520), 3);
    add_background_object(create_fdcore2_3610(2880, 1520), 3);
    add_background_object(create_fdcore1_3606(2752, 1520), 3);
    add_background_object(create_fdcore2_3610(2624, 1520), 3);
    add_background_object(create_fdcore2_3610(3392, 1520), 3);
    add_background_object(create_fdcore1_3606(3520, 1520), 3);
    add_background_object(create_fdcore2_3610(3648, 1520), 3);
    add_background_object(create_fdcore2_3610(3776, 1520), 3);
    add_background_object(create_fdcorefloor1_3615(3392, 1384), 3);
    add_background_object(create_fdcorefloor1_3615(3456, 1384), 3);
    add_background_object(create_fdcorefloor1_3615(3520, 1384), 3);
    add_background_object(create_fdcorefloor1_3615(3584, 1384), 3);
    add_background_object(create_fdcorefloor8_3621(3616, 1104), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 1136), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 1200), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 1264), 3);
    add_background_object(create_fdcorefloor4_3609(3616, 1328), 3);
    add_background_object(create_fdcorefloor9_3627(3616, 1384), 3);
    add_background_object(create_fdcoreloop2_3605(3488, 1256), 3);
    add_background_object(create_fdcorefloor5_3619(3936, 464), 3);
    add_background_object(create_fdcorefloor8_3621(4032, 464), 3);
    add_background_object(create_fdcorefloor1_3615(3968, 496), 3);
    add_background_object(create_fdcorefloor9_3627(3936, 496), 3);
    add_background_object(create_fdcorefloor9_3627(4032, 496), 3);
    add_background_object(create_fdcore4_3607(3904, 624), 3);
    add_background_object(create_fdcore4_3607(3968, 624), 3);
    add_background_object(create_fdcore1_3606(4032, 816), 3);
    add_background_object(create_fdcore4_3607(4032, 752), 3);
    add_background_object(create_fdcore4_3607(4096, 752), 3);
    add_background_object(create_fdcore2_3610(4032, 624), 3);
    add_background_object(create_fdcorefloor1_3615(3968, 464), 3);
    add_background_object(create_fdcorefloor3_3611(4032, 944), 3);
    add_background_object(create_fdcorefloor3_3611(4096, 944), 3);
    add_background_object(create_fdcore1_3606(320, 600), 3);
    add_background_object(create_fdcore2_3610(320, 472), 3);
    add_background_object(create_fdcore1_3606(448, 472), 3);
    add_background_object(create_fdcore2_3610(448, 600), 3);
    add_background_object(create_fdcore1_3606(576, 600), 3);
    add_background_object(create_fdcore2_3610(576, 472), 3);
    add_background_object(create_fdcore1_3606(704, 472), 3);
    add_background_object(create_fdcore2_3610(704, 600), 3);
    add_background_object(create_fdcore1_3606(832, 600), 3);
    add_background_object(create_fdcore2_3610(832, 472), 3);
    add_background_object(create_fdcore1_3606(960, 472), 3);
    add_background_object(create_fdcore2_3610(960, 600), 3);
    add_background_object(create_fdcore1_3606(1088, 600), 3);
    add_background_object(create_fdcore2_3610(1088, 472), 3);
    add_background_object(create_fdcore1_3606(1216, 472), 3);
    add_background_object(create_fdcore2_3610(1216, 600), 3);
    add_background_object(create_fdcore1_3606(1088, 856), 3);
    add_background_object(create_fdcore2_3610(1088, 728), 3);
    add_background_object(create_fdcore1_3606(1216, 728), 3);
    add_background_object(create_fdcore2_3610(1216, 856), 3);
    add_background_object(create_fdcorefloor3_3611(1152, 984), 3);
    add_background_object(create_fdcorefloor3_3611(1088, 984), 3);
    add_background_object(create_fdcorefloor3_3611(1216, 984), 3);
    add_background_object(create_fdcorefloor3_3611(1280, 984), 3);
    add_background_object(create_fdcorefloor1_3615(320, 440), 3);
    add_background_object(create_fdcorefloor1_3615(384, 440), 3);
    add_background_object(create_fdcorefloor1_3615(448, 440), 3);
    add_background_object(create_fdcorefloor1_3615(512, 440), 3);
    add_background_object(create_fdcoreslope5_3618(1376, 416), 3);
    add_background_object(create_fdcoreslope5_3618(1312, 352), 3);
    add_background_object(create_fdcore2_3610(1344, 664), 3);
    add_background_object(create_fdcore1_3606(1344, 856), 3);
    add_background_object(create_fdcore4_3607(1344, 792), 3);
    add_background_object(create_fdcore4_3607(1408, 792), 3);
    add_background_object(create_fdcore1_3606(1472, 728), 3);
    add_background_object(create_fdcore2_3610(1472, 856), 3);
    add_background_object(create_fdcorefloor3_3611(1344, 984), 3);
    add_background_object(create_fdcorefloor3_3611(1408, 984), 3);
    add_background_object(create_fdcorefloor3_3611(1472, 984), 3);
    add_background_object(create_fdcorefloor3_3611(1536, 984), 3);
    add_background_object(create_fdcore1_3606(1088, 344), 3);
    add_background_object(create_fdcore2_3610(960, 344), 3);
    add_background_object(create_fdcorefloor1_3615(960, 312), 3);
    add_background_object(create_fdcorefloor1_3615(1024, 312), 3);
    add_background_object(create_fdcorefloor1_3615(1088, 312), 3);
    add_background_object(create_fdcorefloor1_3615(1152, 312), 3);
    add_background_object(create_fdcorefloor1_3615(576, 440), 3);
    add_background_object(create_fdcorefloor1_3615(640, 440), 3);
    add_background_object(create_fdcorefloor1_3615(704, 440), 3);
    add_background_object(create_fdcorefloor1_3615(768, 440), 3);
    add_background_object(create_fdcorefloor1_3615(832, 440), 3);
    add_background_object(create_fdcorefloor1_3615(896, 440), 3);
    add_background_object(create_fdcorefloor8_3621(928, 312), 3);
    add_background_object(create_fdcorefloor4_3609(928, 344), 3);
    add_background_object(create_fdcorefloor4_3609(928, 408), 3);
    add_background_object(create_fdcorefloor9_3627(928, 440), 3);
    add_background_object(create_fdcorefloor1_3615(320, 312), 3);
    add_background_object(create_fdcorefloor1_3615(384, 312), 3);
    add_background_object(create_fdcorefloor1_3615(448, 312), 3);
    add_background_object(create_fdcorefloor1_3615(512, 312), 3);
    add_background_object(create_fdcorefloor1_3615(576, 312), 3);
    add_background_object(create_fdcorefloor8_3621(288, 312), 3);
    add_background_object(create_fdcorefloor7_3622(288, 344), 3);
    add_background_object(create_fdcorefloor6_3620(320, 344), 3);
    add_background_object(create_fdcorefloor5_3619(768, 312), 3);
    add_background_object(create_fdcorefloor1_3615(704, 312), 3);
    add_background_object(create_fdcorefloor7_3622(736, 344), 3);
    add_background_object(create_fdcorefloor6_3620(768, 344), 3);
    add_background_object(create_fdcorefloor1_3615(640, 312), 3);
    add_background_object(create_fdfloor1_3570(1088, 152), 3);
    add_background_object(create_fdcorefloor8_3621(1024, 152), 3);
    add_background_object(create_fdcorefloor7_3622(1024, 184), 3);
    add_background_object(create_fdcorefloor6_3620(1056, 184), 3);
    add_background_object(create_fdcorefloor5_3619(1056, 152), 3);
    add_background_object(create_fdfloor1_3570(1152, 152), 3);
    add_background_object(create_fdcorefloor8_3621(1216, 152), 3);
    add_background_object(create_fdcorefloor7_3622(1216, 184), 3);
    add_background_object(create_fdcorefloor6_3620(1248, 184), 3);
    add_background_object(create_fdcorefloor5_3619(1248, 152), 3);
    add_background_object(create_fdcorefloor1_3615(416, 184), 3);
    add_background_object(create_fdcorefloor1_3615(480, 184), 3);
    add_background_object(create_fdcorefloor1_3615(544, 184), 3);
    add_background_object(create_fdcorefloor8_3621(384, 184), 3);
    add_background_object(create_fdcorefloor7_3622(384, 216), 3);
    add_background_object(create_fdcorefloor6_3620(416, 216), 3);
    add_background_object(create_fdcorefloor1_3615(608, 184), 3);
    add_background_object(create_fdcorefloor1_3615(672, 184), 3);
    add_background_object(create_fdcorefloor5_3619(736, 184), 3);
    add_background_object(create_fdcorefloor7_3622(704, 216), 3);
    add_background_object(create_fdcorefloor6_3620(736, 216), 3);
    add_background_object(create_sbrotorbladetunnel_2178(512, 480), 3);
    add_background_object(create_fdcorefloor8_3621(576, 440), 3);
    add_background_object(create_fdcorefloor5_3619(480, 440), 3);
    add_background_object(create_fdcorefloor2_3608(480, 472), 3);
    add_background_object(create_fdcorefloor4_3609(576, 472), 3);
    add_background_object(create_fdcorefloor4_3609(576, 536), 3);
    add_background_object(create_fdcorefloor2_3608(480, 536), 3);
    add_background_object(create_fdcorefloor1_3615(512, 568), 3);
    add_background_object(create_fdcorefloor9_3627(480, 568), 3);
    add_background_object(create_fdcorefloor9_3627(576, 568), 3);
    add_background_object(create_fdcorefloor1_3615(4096, 336), 3);
    add_background_object(create_fdcorefloor1_3615(4160, 336), 3);
    add_background_object(create_fdcorefloor8_3621(4064, 336), 3);
    add_background_object(create_fdcorefloor7_3622(4064, 368), 3);
    add_background_object(create_fdcorefloor6_3620(4096, 368), 3);
    add_background_object(create_fdcorefloor1_3615(4224, 336), 3);
    add_background_object(create_fdcorefloor5_3619(4288, 336), 3);
    add_background_object(create_fdcorefloor7_3622(4256, 368), 3);
    add_background_object(create_fdcorefloor6_3620(4288, 368), 3);
    add_background_object(create_fdcorefloor5_3619(3776, 272), 3);
    add_background_object(create_fdcorefloor9_3627(3776, 336), 3);
    add_background_object(create_fdcore1_3606(4160, 624), 3);
    add_background_object(create_fdcore2_3610(4160, 752), 3);
    add_background_object(create_fdcore2_3610(4288, 624), 3);
    add_background_object(create_fdcore1_3606(4288, 752), 3);
    add_background_object(create_fdcore2_3610(4416, 752), 3);
    add_background_object(create_fdcore1_3606(4544, 752), 3);
    add_background_object(create_fdcore2_3610(4672, 752), 3);
    add_background_object(create_fdcorefloor1_3615(4672, 272), 3);
    add_background_object(create_fdcorefloor1_3615(4864, 272), 3);
    add_background_object(create_fdcorefloor1_3615(4928, 272), 3);
    add_background_object(create_fdcorefloor5_3619(4992, 272), 3);
    add_background_object(create_fdcorefloor6_3620(4992, 304), 3);
    add_background_object(create_fdcore1_3606(4800, 752), 3);
    add_background_object(create_fdcore2_3610(4928, 752), 3);
    add_background_object(create_fdcore1_3606(5056, 752), 3);
    add_background_object(create_fdcore2_3610(5184, 752), 3);
    add_background_object(create_fdcorefloor4_3609(5152, 368), 3);
    add_background_object(create_fdcorefloor4_3609(5152, 560), 3);
    add_background_object(create_fdcorefloor4_3609(5152, 624), 3);
    add_background_object(create_fdcorefloor4_3609(5152, 688), 3);
    add_background_object(create_fdcorefloor1_3615(5184, 336), 3);
    add_background_object(create_fdcorefloor1_3615(5248, 336), 3);
    add_background_object(create_fdcorefloor8_3621(5152, 336), 3);
    add_background_object(create_fdcorefloor1_3615(5312, 336), 3);
    add_background_object(create_fdcorefloor1_3615(5376, 336), 3);
    add_background_object(create_fdcore2_3610(5312, 624), 3);
    add_background_object(create_fdcore1_3606(5440, 624), 3);
    add_background_object(create_fdcore1_3606(5312, 752), 3);
    add_background_object(create_fdcore2_3610(5440, 752), 3);
    add_background_object(create_fdcore2_3610(5312, 368), 3);
    add_background_object(create_fdcore1_3606(5440, 368), 3);
    add_background_object(create_fdcore1_3606(5312, 496), 3);
    add_background_object(create_fdcore2_3610(5440, 496), 3);
    add_background_object(create_fdcorefloor1_3615(5440, 336), 3);
    add_background_object(create_fdcorefloor1_3615(5504, 336), 3);
    add_background_object(create_fdcore2_3610(5568, 624), 3);
    add_background_object(create_fdcore1_3606(5696, 624), 3);
    add_background_object(create_fdcore2_3610(5568, 368), 3);
    add_background_object(create_fdcore1_3606(5568, 496), 3);
    add_background_object(create_fdcore2_3610(5696, 496), 3);
    add_background_object(create_fdcore2_3610(5696, -16), 3);
    add_background_object(create_fdcorefloor4_3609(5536, 112), 3);
    add_background_object(create_fdcorefloor4_3609(5536, 176), 3);
    add_background_object(create_fdcorefloor4_3609(5536, 240), 3);
    add_background_object(create_fdcorefloor4_3609(5536, 304), 3);
    add_background_object(create_fdcorefloor9_3627(5536, 336), 3);
    add_background_object(create_fdcore1_3606(5568, -16), 3);
    add_background_object(create_fdcore1_3606(5312, -16), 3);
    add_background_object(create_fdcore2_3610(5440, -16), 3);
    add_background_object(create_fdcore1_3606(5056, -16), 3);
    add_background_object(create_fdcore2_3610(5184, -16), 3);
    add_background_object(create_fdcore1_3606(4800, -16), 3);
    add_background_object(create_fdcorefloor3_3611(5504, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5440, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5376, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5312, 112), 3);
    add_background_object(create_fdcorefloor9_3627(5536, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5248, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5184, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5120, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5056, 112), 3);
    add_background_object(create_fdcorefloor3_3611(4992, 112), 3);
    add_background_object(create_fdcorefloor3_3611(4928, 112), 3);
    add_background_object(create_fdcorefloor3_3611(4736, 112), 3);
    add_background_object(create_fdcorefloor3_3611(4672, 112), 3);
    add_background_object(create_fdcorefloor1_3615(4736, 272), 3);
    add_background_object(create_fdcoreloop2_3605(5024, 488), 3);
    add_background_object(create_fdcorefloor2_3608(4160, 1200), 3);
    add_background_object(create_fdcorefloor5_3619(4160, 1168), 3);
    add_background_object(create_fdcorefloor2_3608(4160, 1264), 3);
    add_background_object(create_fdcorefloor2_3608(4160, 1328), 3);
    add_background_object(create_fdcorefloor2_3608(4160, 1392), 3);
    add_background_object(create_fdfloor1_3570(4192, 1168), 3);
    add_background_object(create_fdfloor1_3570(4256, 1168), 3);
    add_background_object(create_fdfloor1_3570(4320, 1168), 3);
    add_background_object(create_fdfloor1_3570(4384, 1168), 3);
    add_background_object(create_fdfloor1_3570(4448, 1168), 3);
    add_background_object(create_fdfloor1_3570(4512, 1168), 3);
    add_background_object(create_fdcore1_3606(4608, 1200), 3);
    add_background_object(create_fdcore2_3610(4608, 1328), 3);
    add_background_object(create_fdcore2_3610(4736, 1200), 3);
    add_background_object(create_fdcore1_3606(4736, 1328), 3);
    add_background_object(create_fdcorefloor4_3609(4576, 1200), 3);
    add_background_object(create_fdcorefloor4_3609(4576, 1264), 3);
    add_background_object(create_fdcorefloor1_3615(4608, 1168), 3);
    add_background_object(create_fdcorefloor1_3615(4672, 1168), 3);
    add_background_object(create_fdcorefloor8_3621(4576, 1168), 3);
    add_background_object(create_fdcorefloor4_3609(4576, 1328), 3);
    add_background_object(create_fdcorefloor4_3609(4576, 1392), 3);
    add_background_object(create_fdcorefloor1_3615(4736, 1168), 3);
    add_background_object(create_fdcorefloor1_3615(4800, 1168), 3);
    add_background_object(create_fdcorefloor6_3620(4160, 944), 3);
    add_background_object(create_fdcorefloor2_3608(4160, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4160, 880), 3);
    add_background_object(create_fdcorefloor9_3627(4160, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4224, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4288, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4352, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4416, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4480, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4544, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4608, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4672, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4736, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4800, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4864, 880), 3);
    add_background_object(create_fdcorefloor3_3611(4928, 880), 3);
    add_background_object(create_backdrop_3630(4216, -352), 3);
    add_background_object(create_fdcore6_3612(4288, 560), 3);
    add_background_object(create_fdcoreslope1_3616(4160, 464), 3);
    add_background_object(create_fdcoreslope5_3618(4256, 504), 3);
    add_background_object(create_fdcore3_3623(4160, 496), 3);
    add_background_object(create_fdcoreslope2_3624(4320, 568), 3);
    add_background_object(create_fdcorefloor1_3615(5120, 744), 3);
    add_background_object(create_fdcorefloor1_3615(5056, 744), 3);
    add_background_object(create_fdcorefloor1_3615(4992, 744), 3);
    add_background_object(create_fdcorefloor1_3615(4928, 744), 3);
    add_background_object(create_fdcorefloor1_3615(4864, 744), 3);
    add_background_object(create_fdcorefloor1_3615(4800, 744), 3);
    add_background_object(create_fdcorefloor1_3615(4736, 744), 3);
    add_background_object(create_fdcorefloor1_3615(4416, 744), 3);
    add_background_object(create_fdcorefloor1_3615(4672, 744), 3);
    add_background_object(create_fdcorefloor9_3627(5152, 744), 3);
    add_background_object(create_fdcorefloor2_3608(4672, 240), 3);
    add_background_object(create_fdcorefloor2_3608(4672, 176), 3);
    add_background_object(create_fdcorefloor2_3608(4672, 112), 3);
    add_background_object(create_fdcorefloor5_3619(4416, 616), 3);
    add_background_object(create_fdcorefloor2_3608(4416, 648), 3);
    add_background_object(create_fdcorefloor2_3608(4416, 712), 3);
    add_background_object(create_fdcorefloor9_3627(4416, 744), 3);
    add_background_object(create_fdfloor1_3570(4640, 616), 3);
    add_background_object(create_fdfloor1_3570(4704, 616), 3);
    add_background_object(create_fdfloor1_3570(4768, 616), 3);
    add_background_object(create_fdfloor1_3570(4832, 616), 3);
    add_background_object(create_fdfloor1_3570(4896, 616), 3);
    add_background_object(create_fdfloor1_3570(4960, 616), 3);
    add_background_object(create_fdfloor1_3570(5024, 616), 3);
    add_background_object(create_fdfloor1_3570(5088, 616), 3);
    add_background_object(create_fdcorefloor4_3609(5152, 496), 3);
    add_background_object(create_fdcorefloor4_3609(5152, 432), 3);
    add_background_object(create_fdcorefloor9_3627(4672, 272), 3);
    add_background_object(create_fdcorefloor9_3627(4672, 112), 3);
    add_background_object(create_fdcorefloor7_3622(4960, 304), 3);
    add_background_object(create_fdcorefloor6_3620(4672, 368), 3);
    add_background_object(create_fdcore6_3612(5184, 1328), 3);
    add_background_object(create_fdcore6_3612(5120, 1264), 3);
    add_background_object(create_fdcoreslope1_3616(4992, 1168), 3);
    add_background_object(create_fdcore3_3623(4992, 1200), 3);
    add_background_object(create_fdcore1_3606(4992, 1328), 3);
    add_background_object(create_fdcore2_3610(4992, 1456), 3);
    add_background_object(create_fdcore1_3606(5120, 1392), 3);
    add_background_object(create_fdcore6_3612(5248, 1392), 3);
    add_background_object(create_fdcore4_3607(5120, 1328), 3);
    add_background_object(create_fdcore4_3607(5120, 1520), 3);
    add_background_object(create_fdcore4_3607(5184, 1520), 3);
    add_background_object(create_fdcore2_3610(5248, 1456), 3);
    add_background_object(create_fdcoreslope5_3618(5152, 1272), 3);
    add_background_object(create_fdcoreslope5_3618(5088, 1208), 3);
    add_background_object(create_fdcoreslope5_3618(5216, 1336), 3);
    add_background_object(create_fdcoreslope2_3624(5280, 1400), 3);
    add_background_object(create_fdcore1_3606(4864, 1200), 3);
    add_background_object(create_fdcore2_3610(4864, 1328), 3);
    add_background_object(create_fdcorefloor1_3615(4864, 1168), 3);
    add_background_object(create_fdcorefloor1_3615(4928, 1168), 3);
    add_background_object(create_fdcorefloor3_3611(4992, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5056, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5120, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5184, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5248, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5312, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5376, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5440, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5504, 880), 3);
    add_background_object(create_fdcore7_3613(5504, 1328), 3);
    add_background_object(create_fdcore5_3614(5440, 1392), 3);
    add_background_object(create_fdcore1_3606(5376, 1456), 3);
    add_background_object(create_fdcore2_3610(5504, 1456), 3);
    add_background_object(create_fdcoreslope3_3617(5536, 1296), 3);
    add_background_object(create_fdcoreslope4_3625(5376, 1400), 3);
    add_background_object(create_fdcoreslope6_3626(5472, 1336), 3);
    add_background_object(create_fdcorefloor1_3615(5248, 1152), 3);
    add_background_object(create_fdcorefloor1_3615(5312, 1152), 3);
    add_background_object(create_fdcorefloor1_3615(5376, 1152), 3);
    add_background_object(create_fdcorefloor8_3621(5216, 1152), 3);
    add_background_object(create_fdcorefloor7_3622(5216, 1184), 3);
    add_background_object(create_fdcorefloor6_3620(5248, 1184), 3);
    add_background_object(create_fdcorefloor1_3615(5440, 1152), 3);
    add_background_object(create_fdcorefloor5_3619(5504, 1152), 3);
    add_background_object(create_fdcorefloor7_3622(5472, 1184), 3);
    add_background_object(create_fdcorefloor6_3620(5504, 1184), 3);
    add_background_object(create_fdcorefloor5_3619(5632, 1296), 3);
    add_background_object(create_fdcorefloor2_3608(5632, 1328), 3);
    add_background_object(create_fdcorefloor2_3608(5632, 1392), 3);
    add_background_object(create_fdcorefloor2_3608(5632, 1456), 3);
    add_background_object(create_fdcorefloor2_3608(5632, 1520), 3);
    add_background_object(create_fdcorefloor8_3621(5664, 1296), 3);
    add_background_object(create_fdcorefloor5_3619(5696, 1296), 3);
    add_background_object(create_fdcorefloor4_3609(5664, 1328), 3);
    add_background_object(create_fdcorefloor4_3609(5664, 1392), 3);
    add_background_object(create_fdcorefloor4_3609(5664, 1456), 3);
    add_background_object(create_fdcorefloor2_3608(5696, 1328), 3);
    add_background_object(create_fdcorefloor2_3608(5696, 1392), 3);
    add_background_object(create_fdcorefloor2_3608(5696, 1456), 3);
    add_background_object(create_fdcore1_3606(5504, 1584), 3);
    add_background_object(create_fdcore2_3610(5376, 1584), 3);
    add_background_object(create_fdcore1_3606(5248, 1584), 3);
    add_background_object(create_fdcore2_3610(5120, 1584), 3);
    add_background_object(create_fdcore1_3606(5760, 1584), 3);
    add_background_object(create_fdcore2_3610(5632, 1584), 3);
    add_background_object(create_fdcore1_3606(5632, 1712), 3);
    add_background_object(create_fdcore2_3610(5504, 1712), 3);
    add_background_object(create_fdcore2_3610(5760, 1712), 3);
    add_background_object(create_fdcore1_3606(5376, 1712), 3);
    add_background_object(create_fdcore2_3610(5248, 1712), 3);
    add_background_object(create_fdcore1_3606(6016, 1840), 3);
    add_background_object(create_fdcore2_3610(5888, 1584), 3);
    add_background_object(create_fdcore1_3606(5888, 1712), 3);
    add_background_object(create_fdcore2_3610(6016, 1712), 3);
    add_background_object(create_fdcorefloor1_3615(5632, 1552), 3);
    add_background_object(create_fdcorefloor9_3627(5632, 1552), 3);
    add_background_object(create_fdcorefloor1_3615(5696, 1552), 3);
    add_background_object(create_fdcorefloor1_3615(5760, 1552), 3);
    add_background_object(create_fdcorefloor1_3615(5824, 1552), 3);
    add_background_object(create_fdcorefloor7_3622(5664, 1520), 3);
    add_background_object(create_fdcorefloor6_3620(5696, 1520), 3);
    add_background_object(create_fdcorefloor1_3615(5888, 1552), 3);
    add_background_object(create_fdcorefloor1_3615(5952, 1552), 3);
    add_background_object(create_fdcorefloor1_3615(6016, 1680), 3);
    add_background_object(create_fdcoreloop4_3631(5728, 1424), 3);
    add_background_object(create_fdcoreloop5_3632(5856, 912), 3);
    add_background_object(create_fdcore1_3606(5568, 752), 3);
    add_background_object(create_fdcore2_3610(5696, 752), 3);
    add_background_object(create_fdcore1_3606(5824, 752), 3);
    add_background_object(create_fdcore2_3610(5952, 752), 3);
    add_background_object(create_fdcorefloor3_3611(5568, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5632, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5696, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5760, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5824, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5888, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5952, 880), 3);
    add_background_object(create_fdcoreloop2_3605(5856, 1040), 3);
    add_background_object(create_fdcorefloor8_3621(5792, 1168), 3);
    add_background_object(create_fdcorefloor7_3622(5792, 1200), 3);
    add_background_object(create_fdcorefloor1_3615(5824, 1168), 3);
    add_background_object(create_fdcorefloor3_3611(5824, 1200), 3);
    add_background_object(create_fdcorefloor1_3615(5888, 1168), 3);
    add_background_object(create_fdcorefloor3_3611(5888, 1200), 3);
    add_background_object(create_fdcorefloor4_3609(5984, 1104), 3);
    add_background_object(create_fdcorefloor4_3609(5984, 1040), 3);
    add_background_object(create_fdcorefloor4_3609(5984, 976), 3);
    add_background_object(create_fdcorefloor4_3609(5984, 912), 3);
    add_background_object(create_fdcore1_3606(6080, 752), 3);
    add_background_object(create_fdcore2_3610(5824, 560), 3);
    add_background_object(create_fdcore1_3606(5952, 624), 3);
    add_background_object(create_fdcore2_3610(6080, 560), 3);
    add_background_object(create_fdcore2_3610(6016, 880), 3);
    add_background_object(create_fdcorefloor3_3611(5952, 1200), 3);
    add_background_object(create_fdcorefloor3_3611(11968, 176), 3);
    add_background_object(create_fdcorefloor9_3627(5984, 880), 3);
    add_background_object(create_fdcorefloor8_3621(5664, 1168), 3);
    add_background_object(create_fdcorefloor7_3622(5664, 1200), 3);
    add_background_object(create_fdcorefloor5_3619(5696, 1168), 3);
    add_background_object(create_fdcorefloor6_3620(5696, 1200), 3);
    add_background_object(create_fdcorefloor1_3615(5952, 1168), 3);
    add_background_object(create_fdcorefloor9_3627(5984, 1168), 3);
    add_background_object(create_fdcore2_3610(5792, 1296), 3);
    add_background_object(create_fdcore1_3606(5920, 1296), 3);
    add_background_object(create_fdcorefloor8_3621(5792, 1296), 3);
    add_background_object(create_fdcorefloor7_3622(5792, 1392), 3);
    add_background_object(create_fdcorefloor4_3609(5792, 1328), 3);
    add_background_object(create_fdcorefloor1_3615(5824, 1296), 3);
    add_background_object(create_fdcorefloor1_3615(5888, 1296), 3);
    add_background_object(create_fdcorefloor1_3615(5952, 1296), 3);
    add_background_object(create_fdcorefloor3_3611(5824, 1392), 3);
    add_background_object(create_fdcorefloor3_3611(5888, 1392), 3);
    add_background_object(create_fdcorefloor3_3611(5952, 1392), 3);
    add_background_object(create_fdcorefloor6_3620(12032, 176), 3);
    add_background_object(create_fdcorefloor1_3615(6080, 1680), 3);
    add_background_object(create_fdcorefloor1_3615(11648, 272), 3);
    add_background_object(create_fdcorefloor3_3611(11648, 368), 3);
    add_background_object(create_fdcorefloor6_3620(11712, 368), 3);
    add_background_object(create_fdcorefloor5_3619(11712, 272), 3);
    add_background_object(create_fdcorefloor2_3608(11712, 304), 3);
    add_background_object(create_fdcorefloor5_3619(12032, 208), 3);
    add_background_object(create_fdcorefloor8_3621(12000, 208), 3);
    add_background_object(create_fdcorefloor2_3608(12032, 240), 3);
    add_background_object(create_fdcorefloor4_3609(12000, 240), 3);
    add_background_object(create_fdcorefloor2_3608(12032, 304), 3);
    add_background_object(create_fdcorefloor4_3609(12000, 304), 3);
    add_background_object(create_fdcorefloor2_3608(12032, 368), 3);
    add_background_object(create_fdcorefloor4_3609(12000, 368), 3);
    add_background_object(create_fdcorefloor2_3608(12032, 432), 3);
    add_background_object(create_fdcorefloor4_3609(12000, 432), 3);
    add_background_object(create_fdcorefloor6_3620(12032, 496), 3);
    add_background_object(create_fdcorefloor7_3622(12000, 496), 3);
    add_background_object(create_fdcoreloop5_3632(11872, 208), 3);
    add_background_object(create_fdcore2_3610(6400, 1072), 3);
    add_background_object(create_fdcorefloor3_3611(11712, 176), 3);
    add_background_object(create_fdcorefloor3_3611(11776, 176), 3);
    add_background_object(create_fdcorefloor3_3611(11840, 176), 3);
    add_background_object(create_fdcorefloor3_3611(11904, 176), 3);
    add_background_object(create_fdcoreloop3_3629(11808, 592), 3);
    add_background_object(create_fdcore4_3607(11808, 464), 3);
    add_background_object(create_fdcore4_3607(11872, 464), 3);
    add_background_object(create_fdcoreloop3_3629(11808, 272), 3);
    add_background_object(create_fdcoreloop4_3631(11744, 656), 3);
    add_background_object(create_fdcorefloor8_3621(12000, 592), 3);
    add_background_object(create_fdcorefloor7_3622(12000, 624), 3);
    add_background_object(create_fdcorefloor1_3615(12032, 592), 3);
    add_background_object(create_fdcorefloor3_3611(12032, 624), 3);
    add_background_object(create_fdcorefloor5_3619(11712, 464), 3);
    add_background_object(create_fdcorefloor1_3615(11648, 464), 3);
    add_background_object(create_fdcorefloor2_3608(11712, 496), 3);
    add_background_object(create_fdcorefloor2_3608(11712, 560), 3);
    add_background_object(create_fdcorefloor2_3608(11712, 624), 3);
    add_background_object(create_fdcorefloor2_3608(11712, 688), 3);
    add_background_object(create_fdcorefloor2_3608(11712, 752), 3);
    add_background_object(create_fdcorefloor9_3627(11712, 784), 3);
    add_background_object(create_fdcorefloor1_3615(11744, 784), 3);
    add_background_object(create_fdcorefloor1_3615(11808, 784), 3);
    add_background_object(create_fdcorefloor1_3615(11872, 784), 3);
    add_background_object(create_fdcorefloor1_3615(11936, 784), 3);
    add_background_object(create_fdcorefloor1_3615(12000, 784), 3);
    add_background_object(create_fdcorefloor1_3615(12064, 784), 3);
    add_background_object(create_fdcorefloor1_3615(12096, 592), 3);
    add_background_object(create_fdcorefloor3_3611(12096, 624), 3);
    add_background_object(create_fdcore1_3606(11584, 496), 3);
    add_background_object(create_fdcore2_3610(11584, 688), 3);
    add_background_object(create_fdcore1_3606(11584, 816), 3);
    add_background_object(create_fdcore2_3610(11712, 816), 3);
    add_background_object(create_fdcore1_3606(11840, 816), 3);
    add_background_object(create_fdcore2_3610(11968, 816), 3);
    add_background_object(create_fdcore1_3606(12096, 816), 3);
    add_background_object(create_fdcorefloor1_3615(12128, 784), 3);
    add_background_object(create_fdcorefloor1_3615(11584, 464), 3);
    add_background_object(create_fdcorefloor1_3615(11584, 272), 3);
    add_background_object(create_fdcorefloor3_3611(11584, 368), 3);
    add_background_object(create_fdcore2_3610(11456, 496), 3);
    add_background_object(create_fdcore1_3606(11456, 624), 3);
    add_background_object(create_fdcore2_3610(11456, 816), 3);
    add_background_object(create_fdcore4_3607(11456, 752), 3);
    add_background_object(create_fdcore4_3607(11520, 752), 3);
    add_background_object(create_fdcore4_3607(11584, 624), 3);
    add_background_object(create_fdcore4_3607(11648, 624), 3);
    add_background_object(create_fdcorefloor1_3615(11520, 464), 3);
    add_background_object(create_fdcorefloor1_3615(11456, 464), 3);
    add_background_object(create_fdcorefloor5_3619(6016, 1296), 3);
    add_background_object(create_fdcorefloor2_3608(6016, 1328), 3);
    add_background_object(create_fdcorefloor3_3611(6016, 1200), 3);
    add_background_object(create_fdcorefloor3_3611(6080, 1200), 3);
    add_background_object(create_fdcorefloor3_3611(6144, 1200), 3);
    add_background_object(create_fdcorefloor3_3611(6208, 1200), 3);
    add_background_object(create_fdcoreloop5_3632(6176, 1232), 3);
    add_background_object(create_fdcorefloor3_3611(6272, 1200), 3);
    add_background_object(create_fdcorefloor3_3611(6336, 1456), 3);
    add_background_object(create_fdcorefloor3_3611(6400, 1456), 3);
    add_background_object(create_fdcoreloop3_3629(6112, 1296), 3);
    add_background_object(create_fdcore1_3606(6016, 1072), 3);
    add_background_object(create_fdcore2_3610(6144, 1072), 3);
    add_background_object(create_fdcore4_3607(6080, 1008), 3);
    add_background_object(create_fdcore4_3607(6016, 1008), 3);
    add_background_object(create_fdcore1_3606(6272, 1072), 3);
    add_background_object(create_fdcorefloor3_3611(6016, 1392), 3);
    add_background_object(create_fdcorefloor3_3611(6080, 1392), 3);
    add_background_object(create_fdcorefloor3_3611(6112, 1392), 3);
    add_background_object(create_fdcorefloor9_3627(6016, 1360), 3);
    add_background_object(create_fdcorefloor5_3619(6016, 1552), 3);
    add_background_object(create_fdcorefloor2_3608(6016, 1584), 3);
    add_background_object(create_fdcorefloor2_3608(6016, 1648), 3);
    add_background_object(create_fdcorefloor9_3627(6016, 1680), 3);
    add_background_object(create_fdcore1_3606(5760, 1840), 3);
    add_background_object(create_fdcore2_3610(5888, 1840), 3);
    add_background_object(create_fdcore2_3610(5632, 1840), 3);
    add_background_object(create_fdcore1_3606(6272, 1840), 3);
    add_background_object(create_fdcore2_3610(6144, 1840), 3);
    add_background_object(create_fdcore1_3606(6144, 1712), 3);
    add_background_object(create_fdcore2_3610(6272, 1712), 3);
    add_background_object(create_fdcorefloor1_3615(6144, 1680), 3);
    add_background_object(create_fdcorefloor1_3615(6208, 1680), 3);
    add_background_object(create_fdcorefloor1_3615(6272, 1680), 3);
    add_background_object(create_fdcorefloor1_3615(6336, 1680), 3);
    add_background_object(create_fdcoreloop4_3631(6048, 1552), 3);
    add_background_object(create_fdcorefloor4_3609(6304, 1392), 3);
    add_background_object(create_fdcorefloor4_3609(6304, 1328), 3);
    add_background_object(create_fdcorefloor4_3609(6304, 1264), 3);
    add_background_object(create_fdcorefloor4_3609(6304, 1200), 3);
    add_background_object(create_fdcorefloor9_3627(6304, 1200), 3);
    add_background_object(create_fdcorefloor7_3622(6304, 1456), 3);
    add_background_object(create_fdcorefloor6_3620(6464, 1456), 3);
    add_background_object(create_fdcorefloor2_3608(6336, 1392), 3);
    add_background_object(create_fdcorefloor2_3608(6336, 1328), 3);
    add_background_object(create_fdcorefloor2_3608(6336, 1264), 3);
    add_background_object(create_fdcorefloor9_3627(6336, 1264), 3);
    add_background_object(create_fdcore1_3606(6528, 1840), 3);
    add_background_object(create_fdcore2_3610(6400, 1840), 3);
    add_background_object(create_fdcore1_3606(6400, 1712), 3);
    add_background_object(create_fdcore2_3610(6528, 1712), 3);
    add_background_object(create_fdcorefloor1_3615(6400, 1680), 3);
    add_background_object(create_fdcorefloor1_3615(6464, 1680), 3);
    add_background_object(create_fdcorefloor1_3615(6528, 1680), 3);
    add_background_object(create_fdcorefloor1_3615(6592, 1680), 3);
    add_background_object(create_fdcore1_3606(6784, 1840), 3);
    add_background_object(create_fdcore2_3610(6656, 1840), 3);
    add_background_object(create_fdcore1_3606(6656, 1712), 3);
    add_background_object(create_fdcore2_3610(6784, 1712), 3);
    add_background_object(create_fdcore1_3606(6784, 1584), 3);
    add_background_object(create_fdcore2_3610(6656, 1584), 3);
    add_background_object(create_fdcore1_3606(6656, 1456), 3);
    add_background_object(create_fdcore2_3610(6784, 1456), 3);
    add_background_object(create_fdcorefloor4_3609(6624, 1648), 3);
    add_background_object(create_fdcorefloor4_3609(6624, 1584), 3);
    add_background_object(create_fdcorefloor4_3609(6624, 1520), 3);
    add_background_object(create_fdcorefloor4_3609(6624, 1456), 3);
    add_background_object(create_fdcorefloor9_3627(6624, 1680), 3);
    add_background_object(create_fdcore1_3606(6528, 1136), 3);
    add_background_object(create_fdcorefloor3_3611(6496, 1264), 3);
    add_background_object(create_fdcorefloor3_3611(6560, 1264), 3);
    add_background_object(create_fdcore1_3606(6784, 1328), 3);
    add_background_object(create_fdcore2_3610(6656, 1328), 3);
    add_background_object(create_fdcore1_3606(6656, 1200), 3);
    add_background_object(create_fdcore2_3610(6784, 1200), 3);
    add_background_object(create_fdcorefloor4_3609(6624, 1392), 3);
    add_background_object(create_fdcorefloor4_3609(6624, 1328), 3);
    add_background_object(create_fdcorefloor4_3609(6624, 1264), 3);
    add_background_object(create_fdcorefloor9_3627(6624, 1264), 3);
    add_background_object(create_fdcore1_3606(6784, 1072), 3);
    add_background_object(create_fdcore2_3610(6656, 1072), 3);
    add_background_object(create_fdcoreloop2_3605(6496, 1552), 3);
    add_background_object(create_fdcore4_3607(6464, 1200), 3);
    add_background_object(create_fdcorefloor1_3615(6208, 1040), 3);
    add_background_object(create_fdcorefloor1_3615(6272, 1040), 3);
    add_background_object(create_fdcorefloor1_3615(6336, 1040), 3);
    add_background_object(create_fdcorefloor1_3615(6592, 1040), 3);
    add_background_object(create_fdcore4_3607(6528, 1072), 3);
    add_background_object(create_fdcore4_3607(6592, 1072), 3);
    add_background_object(create_fdcorefloor1_3615(6144, 1040), 3);
    add_background_object(create_fdcorefloor4_3609(6656, 720), 3);
    add_background_object(create_fdcorefloor4_3609(6656, 976), 3);
    add_background_object(create_fdcorefloor9_3627(6112, 1040), 3);
    add_background_object(create_fdcorefloor9_3627(6112, 880), 3);
    add_background_object(create_fdcorefloor3_3611(6144, 880), 3);
    add_background_object(create_fdcorefloor3_3611(6208, 688), 3);
    add_background_object(create_fdcorefloor3_3611(6272, 688), 3);
    add_background_object(create_fdcorefloor3_3611(6336, 688), 3);
    add_background_object(create_fdcorefloor3_3611(6592, 688), 3);
    add_background_object(create_fdcore1_3606(6208, 560), 3);
    add_background_object(create_fdcore2_3610(6336, 560), 3);
    add_background_object(create_fdcore1_3606(6464, 560), 3);
    add_background_object(create_fdcorefloor9_3627(6208, 1040), 3);
    add_background_object(create_fdcorefloor9_3627(6656, 1040), 3);
    add_background_object(create_fdcorefloor9_3627(6656, 688), 3);
    add_background_object(create_fdcorefloor2_3608(6112, 912), 3);
    add_background_object(create_fdcorefloor2_3608(6112, 976), 3);
    add_background_object(create_fdcore2_3610(6784, 944), 3);
    add_background_object(create_fdcore1_3606(6784, 816), 3);
    add_background_object(create_fdcore2_3610(6592, 560), 3);
    add_background_object(create_fdcorefloor1_3615(6400, 1040), 3);
    add_background_object(create_fdcorefloor1_3615(6464, 1040), 3);
    add_background_object(create_fdcorefloor3_3611(6400, 688), 3);
    add_background_object(create_fdcorefloor3_3611(6464, 688), 3);
    add_background_object(create_fdcorefloor1_3615(6528, 1040), 3);
    add_background_object(create_fdcorefloor3_3611(6528, 688), 3);
    add_background_object(create_fdcorefloor4_3609(6656, 784), 3);
    add_background_object(create_fdcorefloor9_3627(6208, 688), 3);
    add_background_object(create_fdcorefloor6_3620(6528, 880), 3);
    add_background_object(create_fdcore1_3606(6720, 560), 3);
    add_background_object(create_fdcorefloor4_3609(6656, 848), 3);
    add_background_object(create_fdcorefloor4_3609(6656, 912), 3);
    add_background_object(create_fdcore4_3607(6016, 560), 3);
    add_background_object(create_fdcore4_3607(5952, 560), 3);
    add_background_object(create_fdcore4_3607(5888, 688), 3);
    add_background_object(create_fdcore4_3607(5824, 688), 3);
    add_background_object(create_fdcorefloor2_3608(6208, 720), 3);
    add_background_object(create_fdcorefloor2_3608(6208, 784), 3);
    add_background_object(create_fdcore4_3607(6144, 688), 3);
    add_background_object(create_fdcore4_3607(6080, 688), 3);
    add_background_object(create_fdcorefloor3_3611(6208, 880), 3);
    add_background_object(create_fdcorefloor3_3611(6272, 880), 3);
    add_background_object(create_fdcorefloor3_3611(6336, 880), 3);
    add_background_object(create_fdcorefloor3_3611(6400, 880), 3);
    add_background_object(create_fdcorefloor3_3611(6464, 880), 3);
    add_background_object(create_fdcorefloor1_3615(6272, 848), 3);
    add_background_object(create_fdcorefloor1_3615(6336, 848), 3);
    add_background_object(create_fdcorefloor1_3615(6400, 848), 3);
    add_background_object(create_fdcorefloor1_3615(6464, 848), 3);
    add_background_object(create_fdcorefloor5_3619(6528, 848), 3);
    add_background_object(create_fdcorefloor1_3615(6208, 848), 3);
    add_background_object(create_fdcorefloor9_3627(6208, 848), 3);
    add_background_object(create_fdcoreloop2_3605(6528, 912), 3);
    add_background_object(create_fdcoreloop5_3632(6528, 720), 3);
    add_background_object(create_fdcorefloor1_3615(6080, 528), 3);
    add_background_object(create_fdcorefloor9_3627(6016, 528), 3);
    add_background_object(create_fdcorefloor9_3627(6048, 528), 3);
    add_background_object(create_fdcorefloor5_3619(6048, 496), 3);
    add_background_object(create_fdcorefloor8_3621(6016, 496), 3);
    add_background_object(create_fdcorefloor2_3608(5984, 496), 3);
    add_background_object(create_fdcorefloor4_3609(5952, 496), 3);
    add_background_object(create_fdcorefloor5_3619(5984, 464), 3);
    add_background_object(create_fdcorefloor8_3621(5952, 464), 3);
    add_background_object(create_fdcorefloor9_3627(5952, 528), 3);
    add_background_object(create_fdcorefloor9_3627(5984, 528), 3);
    add_background_object(create_fdcorefloor2_3608(5920, 464), 3);
    add_background_object(create_fdcorefloor5_3619(5920, 432), 3);
    add_background_object(create_fdcorefloor9_3627(5696, 432), 3);
    add_background_object(create_fdcorefloor9_3627(5920, 528), 3);
    add_background_object(create_fdcorefloor1_3615(5728, 432), 3);
    add_background_object(create_fdcorefloor2_3608(5696, 368), 3);
    add_background_object(create_fdcorefloor2_3608(5696, 304), 3);
    add_background_object(create_fdcore1_3606(5824, -16), 3);
    add_background_object(create_fdcore2_3610(5952, -16), 3);
    add_background_object(create_fdcore1_3606(6080, -16), 3);
    add_background_object(create_fdcore2_3610(6208, -16), 3);
    add_background_object(create_fdcorefloor2_3608(5696, 240), 3);
    add_background_object(create_fdcorefloor9_3627(5696, 240), 3);
    add_background_object(create_fdcorefloor3_3611(5760, 240), 3);
    add_background_object(create_fdcorefloor3_3611(5952, 240), 3);
    add_background_object(create_fdcorefloor3_3611(6016, 240), 3);
    add_background_object(create_fdcorefloor3_3611(6080, 240), 3);
    add_background_object(create_fdcorefloor3_3611(6144, 240), 3);
    add_background_object(create_fdcorefloor3_3611(6208, 240), 3);
    add_background_object(create_fdcorefloor3_3611(6272, 240), 3);
    add_background_object(create_fdcorefloor1_3615(6080, 496), 3);
    add_background_object(create_fdcorefloor1_3615(5792, 432), 3);
    add_background_object(create_fdcorefloor3_3611(5824, 240), 3);
    add_background_object(create_fdcorefloor1_3615(5856, 432), 3);
    add_background_object(create_fdcorefloor3_3611(5888, 240), 3);
    add_background_object(create_fdcorefloor1_3615(6144, 208), 3);
    add_background_object(create_fdcorefloor1_3615(6208, 208), 3);
    add_background_object(create_fdcorefloor1_3615(6272, 208), 3);
    add_background_object(create_fdcorefloor1_3615(5952, 208), 3);
    add_background_object(create_fdcorefloor1_3615(6016, 208), 3);
    add_background_object(create_fdcorefloor1_3615(6080, 208), 3);
    add_background_object(create_fdcorefloor1_3615(5760, 208), 3);
    add_background_object(create_fdcorefloor1_3615(5824, 208), 3);
    add_background_object(create_fdcorefloor1_3615(5888, 208), 3);
    add_background_object(create_fdcorefloor1_3615(5696, 208), 3);
    add_background_object(create_fdcorefloor2_3608(5696, 112), 3);
    add_background_object(create_fdcorefloor2_3608(5696, 176), 3);
    add_background_object(create_fdcorefloor9_3627(5696, 208), 3);
    add_background_object(create_fdcorefloor3_3611(5760, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5952, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6016, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6080, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6144, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6208, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6272, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5824, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5888, 112), 3);
    add_background_object(create_fdcorefloor3_3611(5696, 112), 3);
    add_background_object(create_fdcorefloor9_3627(5696, 112), 3);
    add_background_object(create_fdcorefloor1_3615(6464, 528), 3);
    add_background_object(create_fdcorefloor1_3615(6464, 496), 3);
    add_background_object(create_fdcorefloor1_3615(6528, 528), 3);
    add_background_object(create_fdcorefloor1_3615(6592, 528), 3);
    add_background_object(create_fdcorefloor1_3615(6656, 528), 3);
    add_background_object(create_fdcore1_3606(6336, -16), 3);
    add_background_object(create_fdcore2_3610(6464, -16), 3);
    add_background_object(create_fdcorefloor3_3611(6336, 240), 3);
    add_background_object(create_fdcorefloor3_3611(6400, 240), 3);
    add_background_object(create_fdcorefloor3_3611(6464, 240), 3);
    add_background_object(create_fdcorefloor3_3611(6528, 240), 3);
    add_background_object(create_fdcorefloor1_3615(6400, 208), 3);
    add_background_object(create_fdcorefloor1_3615(6464, 208), 3);
    add_background_object(create_fdcorefloor1_3615(6528, 208), 3);
    add_background_object(create_fdcorefloor1_3615(6336, 208), 3);
    add_background_object(create_fdcorefloor3_3611(6336, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6400, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6464, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6528, 112), 3);
    add_background_object(create_fdcore1_3606(6592, -16), 3);
    add_background_object(create_fdcorefloor3_3611(6592, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6656, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6592, 240), 3);
    add_background_object(create_fdcorefloor1_3615(6592, 208), 3);
    add_background_object(create_fdcorefloor3_3611(6656, 240), 3);
    add_background_object(create_fdcorefloor1_3615(6656, 208), 3);
    add_background_object(create_fdcorefloor4_3609(6720, 144), 3);
    add_background_object(create_fdcorefloor9_3627(6720, 112), 3);
    add_background_object(create_fdcorefloor9_3627(6720, 208), 3);
    add_background_object(create_fdcorefloor9_3627(6720, 240), 3);
    add_background_object(create_fdcorefloor4_3609(6720, 272), 3);
    add_background_object(create_fdcore2_3610(6720, -16), 3);
    add_background_object(create_fdcore1_3606(6752, 112), 3);
    add_background_object(create_fdcore2_3610(6752, 240), 3);
    add_background_object(create_fdcorefloor4_3609(6720, 464), 3);
    add_background_object(create_fdcorefloor9_3627(6720, 528), 3);
    add_background_object(create_fdcorefloor9_3627(6656, 528), 3);
    add_background_object(create_fdcorefloor9_3627(6560, 528), 3);
    add_background_object(create_fdcore1_3606(6848, -16), 3);
    add_background_object(create_fdcorefloor8_3621(6720, 432), 3);
    add_background_object(create_fdcorefloor7_3622(6720, 336), 3);
    add_background_object(create_fdcorefloor3_3611(6752, 336), 3);
    add_background_object(create_fdcorefloor3_3611(6816, 336), 3);
    add_background_object(create_fdcorefloor1_3615(6752, 432), 3);
    add_background_object(create_fdcorefloor1_3615(6816, 432), 3);
    add_background_object(create_fdcore1_3606(6880, 240), 3);
    add_background_object(create_fdcore2_3610(6880, 112), 3);
    add_background_object(create_fdcorefloor3_3611(6880, 336), 3);
    add_background_object(create_fdcorefloor3_3611(6944, 336), 3);
    add_background_object(create_fdcore1_3606(7008, 368), 3);
    add_background_object(create_fdcore2_3610(7008, 240), 3);
    add_background_object(create_fdcore1_3606(6976, 624), 3);
    add_background_object(create_fdcore2_3610(7104, 624), 3);
    add_background_object(create_fdcore2_3610(6976, -16), 3);
    add_background_object(create_fdcore1_3606(7104, -16), 3);
    add_background_object(create_fdcore2_3610(7232, -16), 3);
    add_background_object(create_fdcore1_3606(7360, -16), 3);
    add_background_object(create_fdcore1_3606(7392, 240), 3);
    add_background_object(create_fdcore2_3610(7136, 368), 3);
    add_background_object(create_fdcorefloor3_3611(7488, 112), 3);
    add_background_object(create_fdcorefloor3_3611(7552, 112), 3);
    add_background_object(create_fdcore2_3610(7488, -16), 3);
    add_background_object(create_fdcore2_3610(7264, 240), 3);
    add_background_object(create_fdcorefloor2_3608(7488, 240), 3);
    add_background_object(create_fdcorefloor2_3608(7488, 304), 3);
    add_background_object(create_fdcore1_3606(7616, -16), 3);
    add_background_object(create_fdcore2_3610(7616, 112), 3);
    add_background_object(create_fdcore1_3606(7616, 240), 3);
    add_background_object(create_fdcorefloor4_3609(7584, 304), 3);
    add_background_object(create_fdcorefloor4_3609(7584, 240), 3);
    add_background_object(create_fdcorefloor4_3609(7584, 176), 3);
    add_background_object(create_fdcorefloor4_3609(7584, 112), 3);
    add_background_object(create_fdcorefloor9_3627(7584, 112), 3);
    add_background_object(create_fdcorefloor3_3611(7296, 368), 3);
    add_background_object(create_fdcorefloor3_3611(7424, 368), 3);
    add_background_object(create_fdcorefloor3_3611(7744, 368), 3);
    add_background_object(create_fdcorefloor3_3611(7680, 368), 3);
    add_background_object(create_fdcorefloor6_3620(7488, 368), 3);
    add_background_object(create_fdcorefloor7_3622(7584, 368), 3);
    add_background_object(create_fdcorefloor2_3608(7296, 400), 3);
    add_background_object(create_fdcorefloor2_3608(7296, 464), 3);
    add_background_object(create_fdcorefloor2_3608(7328, 624), 3);
    add_background_object(create_fdcorefloor9_3627(7296, 368), 3);
    add_background_object(create_fdcore2_3610(7232, 752), 3);
    add_background_object(create_fdcore1_3606(7360, 752), 3);
    add_background_object(create_fdcorefloor2_3608(7328, 688), 3);
    add_background_object(create_fdcorefloor1_3615(7488, 720), 3);
    add_background_object(create_fdcorefloor1_3615(7424, 720), 3);
    add_background_object(create_fdcorefloor9_3627(7328, 720), 3);
    add_background_object(create_fdcore2_3610(7488, 752), 3);
    add_background_object(create_fdcorefloor1_3615(7616, 720), 3);
    add_background_object(create_fdcorefloor1_3615(7552, 720), 3);
    add_background_object(create_fdcore1_3606(7488, 880), 3);
    add_background_object(create_fdcore2_3610(7744, 240), 3);
    add_background_object(create_fdcore1_3606(7744, 112), 3);
    add_background_object(create_fdcore2_3610(7744, -16), 3);
    add_background_object(create_fdcore1_3606(7744, 624), 3);
    add_background_object(create_fdcore2_3610(7744, 752), 3);
    add_background_object(create_fdcore1_3606(7616, 752), 3);
    add_background_object(create_fdcore2_3610(7616, 880), 3);
    add_background_object(create_fdcore1_3606(7744, 880), 3);
    add_background_object(create_fdcorefloor1_3615(7680, 720), 3);
    add_background_object(create_fdcorefloor4_3609(7744, 688), 3);
    add_background_object(create_fdcorefloor4_3609(7744, 624), 3);
    add_background_object(create_fdcorefloor4_3609(7840, 528), 3);
    add_background_object(create_fdcorefloor4_3609(7776, 432), 3);
    add_background_object(create_fdcorefloor4_3609(7776, 368), 3);
    add_background_object(create_fdcorefloor9_3627(7776, 368), 3);
    add_background_object(create_fdcorefloor9_3627(7744, 720), 3);
    add_background_object(create_fdcorefloor3_3611(7520, 600), 3);
    add_background_object(create_fdcorefloor6_3620(7584, 600), 3);
    add_background_object(create_fdcorefloor7_3622(7488, 600), 3);
    add_background_object(create_fdcorefloor9_3627(7488, 504), 3);
    add_background_object(create_fdcorefloor9_3627(7584, 504), 3);
    add_background_object(create_fdcorefloor1_3615(7520, 568), 3);
    add_background_object(create_fdcorefloor5_3619(7328, 592), 3);
    add_background_object(create_fdcorefloor8_3621(7744, 592), 3);
    add_background_object(create_fdcorefloor1_3615(7776, 592), 3);
    add_background_object(create_fdcorefloor9_3627(7840, 496), 3);
    add_background_object(create_fdcorefloor9_3627(7840, 592), 3);
    add_background_object(create_fdcorefloor7_3622(7776, 560), 3);
    add_background_object(create_fdcorefloor6_3620(7808, 560), 3);
    add_background_object(create_fdcorefloor5_3619(7808, 528), 3);
    add_background_object(create_fdcorefloor8_3621(7776, 528), 3);
    add_background_object(create_fdcore2_3610(7872, 112), 3);
    add_background_object(create_fdcore1_3606(7872, -16), 3);
    add_background_object(create_fdcore2_3610(7872, 368), 3);
    add_background_object(create_fdcore1_3606(7872, 240), 3);
    add_background_object(create_fdcore2_3610(7872, 624), 3);
    add_background_object(create_fdcore1_3606(7872, 496), 3);
    add_background_object(create_fdcore2_3610(7872, 880), 3);
    add_background_object(create_fdcore1_3606(7872, 752), 3);
    add_background_object(create_fdcore4_3607(6848, 496), 3);
    add_background_object(create_fdcore4_3607(6848, 560), 3);
    add_background_object(create_fdcore4_3607(6848, 624), 3);
    add_background_object(create_fdcorefloor2_3608(6880, 528), 3);
    add_background_object(create_fdcorefloor2_3608(6880, 592), 3);
    add_background_object(create_fdcorefloor2_3608(6880, 656), 3);
    add_background_object(create_fdcorefloor2_3608(6880, 720), 3);
    add_background_object(create_fdcorefloor2_3608(6880, 912), 3);
    add_background_object(create_fdcorefloor4_3609(6976, 624), 3);
    add_background_object(create_fdcorefloor4_3609(6976, 688), 3);
    add_background_object(create_fdcorefloor2_3608(6880, 976), 3);
    add_background_object(create_fdcorefloor1_3615(6912, 1040), 3);
    add_background_object(create_fdcorefloor1_3615(6976, 1040), 3);
    add_background_object(create_fdcorefloor9_3627(6880, 1040), 3);
    add_background_object(create_fdcore1_3606(7040, 1072), 3);
    add_background_object(create_fdcore2_3610(6912, 1072), 3);
    add_background_object(create_fdcore1_3606(6912, 1200), 3);
    add_background_object(create_fdcore2_3610(7040, 1200), 3);
    add_background_object(create_fdcorefloor1_3615(7040, 1040), 3);
    add_background_object(create_fdcorefloor1_3615(7104, 1040), 3);
    add_background_object(create_fdcorefloor1_3615(6912, 1008), 3);
    add_background_object(create_fdcore4_3607(6400, 1200), 3);
    add_background_object(create_fdcore4_3607(6336, 1200), 3);
    add_background_object(create_fdcorefloor3_3611(6368, 1264), 3);
    add_background_object(create_fdcorefloor3_3611(6432, 1264), 3);
    add_background_object(create_fdcorefloor1_3615(6336, 1424), 3);
    add_background_object(create_fdcorefloor1_3615(6400, 1424), 3);
    add_background_object(create_fdcorefloor9_3627(6336, 1424), 3);
    add_background_object(create_fdcorefloor5_3619(6464, 1424), 3);
    add_background_object(create_fdcore4_3607(7168, 1072), 3);
    add_background_object(create_fdcore1_3606(7168, 1136), 3);
    add_background_object(create_fdcorefloor2_3608(6880, 784), 3);
    add_background_object(create_fdcorefloor2_3608(6880, 848), 3);
    add_background_object(create_fdcorefloor1_3615(7168, 1040), 3);
    add_background_object(create_fdcore2_3610(7296, 1136), 3);
    add_background_object(create_fdcorefloor9_3627(7200, 1040), 3);
    add_background_object(create_fdcorefloor1_3615(7232, 976), 3);
    add_background_object(create_fdcorefloor8_3621(7200, 976), 3);
    add_background_object(create_fdcorefloor1_3615(7296, 976), 3);
    add_background_object(create_fdcorefloor3_3611(7008, 752), 3);
    add_background_object(create_fdcorefloor7_3622(6976, 752), 3);
    add_background_object(create_fdcorefloor3_3611(7072, 752), 3);
    add_background_object(create_fdcorefloor3_3611(7136, 752), 3);
    add_background_object(create_fdcorefloor4_3609(7200, 752), 3);
    add_background_object(create_fdcorefloor4_3609(7200, 816), 3);
    add_background_object(create_fdcorefloor9_3627(7200, 752), 3);
    add_background_object(create_fdcorefloor3_3611(7232, 880), 3);
    add_background_object(create_fdcorefloor7_3622(7200, 880), 3);
    add_background_object(create_fdcorefloor3_3611(7296, 880), 3);
    add_background_object(create_fdcorefloor3_3611(7360, 880), 3);
    add_background_object(create_fdcorefloor3_3611(7424, 880), 3);
    add_background_object(create_fdcorefloor4_3609(7456, 912), 3);
    add_background_object(create_fdcorefloor9_3627(7456, 880), 3);
    add_background_object(create_fdcorefloor3_3611(7488, 976), 3);
    add_background_object(create_fdcorefloor7_3622(7456, 976), 3);
    add_background_object(create_fdcorefloor3_3611(7552, 976), 3);
    add_background_object(create_fdcorefloor2_3608(7232, 1008), 3);
    add_background_object(create_fdcorefloor5_3619(7360, 976), 3);
    add_background_object(create_fdcore1_3606(7424, 1136), 3);
    add_background_object(create_fdcore2_3610(7552, 1136), 3);
    add_background_object(create_fdcorefloor1_3615(7552, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(7616, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(7488, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(7424, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(7232, 1104), 3);
    add_background_object(create_fdcorefloor9_3627(7232, 1200), 3);
    add_background_object(create_fdcorefloor3_3611(7616, 976), 3);
    add_background_object(create_fdcore2_3610(7424, 1264), 3);
    add_background_object(create_fdcore1_3606(7552, 1264), 3);
    add_background_object(create_fdcore2_3610(7168, 1264), 3);
    add_background_object(create_fdcore1_3606(7296, 1264), 3);
    add_background_object(create_fdcorefloor3_3611(7680, 976), 3);
    add_background_object(create_fdcorefloor3_3611(7744, 976), 3);
    add_background_object(create_fdcorefloor3_3611(7808, 976), 3);
    add_background_object(create_fdcorefloor3_3611(7872, 976), 3);
    add_background_object(create_fdcorefloor3_3611(7936, 976), 3);
    add_background_object(create_fdcore1_3606(7680, 1136), 3);
    add_background_object(create_fdcore2_3610(7808, 1136), 3);
    add_background_object(create_fdcorefloor1_3615(7808, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(7872, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(7744, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(7680, 1104), 3);
    add_background_object(create_fdcore2_3610(7680, 1264), 3);
    add_background_object(create_fdcore1_3606(7808, 1264), 3);
    add_background_object(create_fdcore1_3606(7936, 1136), 3);
    add_background_object(create_fdcore2_3610(8064, 1136), 3);
    add_background_object(create_fdcorefloor1_3615(8064, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(8128, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(8000, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(7936, 1104), 3);
    add_background_object(create_fdcore2_3610(7936, 1264), 3);
    add_background_object(create_fdcore1_3606(8064, 1264), 3);
    add_background_object(create_fdcorefloor1_3615(7360, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(7296, 1104), 3);
    add_background_object(create_fdcorefloor7_3622(7328, 1008), 3);
    add_background_object(create_fdcorefloor6_3620(7360, 1008), 3);
    add_background_object(create_fdcore1_3606(8192, 1136), 3);
    add_background_object(create_fdcore2_3610(8320, 1136), 3);
    add_background_object(create_fdcore2_3610(8192, 1264), 3);
    add_background_object(create_fdcore1_3606(8320, 1264), 3);
    add_background_object(create_fdcore2_3610(8192, 1008), 3);
    add_background_object(create_fdcore1_3606(8320, 1008), 3);
    add_background_object(create_fdcorefloor4_3609(8160, 1072), 3);
    add_background_object(create_fdcorefloor4_3609(8160, 1008), 3);
    add_background_object(create_fdcorefloor9_3627(8160, 1104), 3);
    add_background_object(create_fdcorefloor1_3615(8192, 976), 3);
    add_background_object(create_fdcorefloor8_3621(8160, 976), 3);
    add_background_object(create_fdcorefloor1_3615(8256, 976), 3);
    add_background_object(create_fdcorefloor1_3615(8320, 976), 3);
    add_background_object(create_fdcorefloor1_3615(8384, 976), 3);
    add_background_object(create_fdcorefloor1_3615(7360, 720), 3);
    add_background_object(create_fdcorefloor6_3620(8000, 976), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 912), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 848), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 784), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 720), 3);
    add_background_object(create_fdcorefloor1_3615(8032, 656), 3);
    add_background_object(create_fdcorefloor1_3615(8096, 656), 3);
    add_background_object(create_fdcorefloor1_3615(8160, 656), 3);
    add_background_object(create_fdcorefloor9_3627(8000, 688), 3);
    add_background_object(create_fdcorefloor9_3627(8000, 656), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 560), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 496), 3);
    add_background_object(create_fdcorefloor3_3611(8160, 688), 3);
    add_background_object(create_fdcorefloor3_3611(8096, 688), 3);
    add_background_object(create_fdcorefloor3_3611(8032, 688), 3);
    add_background_object(create_fdcorefloor6_3620(8224, 688), 3);
    add_background_object(create_fdcorefloor5_3619(8224, 656), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 432), 3);
    add_background_object(create_fdcore1_3606(8448, 1136), 3);
    add_background_object(create_fdcore2_3610(8448, 1264), 3);
    add_background_object(create_fdcore2_3610(8448, 1008), 3);
    add_background_object(create_fdcore2_3610(8576, 1072), 3);
    add_background_object(create_fdcore1_3606(8576, 1200), 3);
    add_background_object(create_fdcore1_3606(8576, 944), 3);
    add_background_object(create_fdcorefloor1_3615(8448, 976), 3);
    add_background_object(create_fdcorefloor1_3615(8512, 976), 3);
    add_background_object(create_fdcorefloor6_3620(8448, 880), 3);
    add_background_object(create_fdcorefloor5_3619(8448, 784), 3);
    add_background_object(create_fdcorefloor8_3621(8416, 784), 3);
    add_background_object(create_fdcorefloor7_3622(8416, 880), 3);
    add_background_object(create_fdcorefloor4_3609(8416, 816), 3);
    add_background_object(create_fdcorefloor2_3608(8448, 816), 3);
    add_background_object(create_fdcorefloor1_3615(8576, 912), 3);
    add_background_object(create_fdcorefloor1_3615(8640, 912), 3);
    add_background_object(create_fdcorefloor8_3621(8544, 912), 3);
    add_background_object(create_fdcorefloor4_3609(8544, 944), 3);
    add_background_object(create_fdcorefloor9_3627(8544, 976), 3);
    add_background_object(create_fdcorefloor2_3608(6880, 464), 3);
    add_background_object(create_fdcorefloor5_3619(6880, 432), 3);
    add_background_object(create_fdcorefloor4_3609(6976, 432), 3);
    add_background_object(create_fdcore2_3610(6976, 496), 3);
    add_background_object(create_fdcore1_3606(7168, 496), 3);
    add_background_object(create_fdcorefloor4_3609(6976, 496), 3);
    add_background_object(create_fdcorefloor4_3609(6976, 560), 3);
    add_background_object(create_fdcorefloor2_3608(7296, 528), 3);
    add_background_object(create_fdcorefloor9_3627(7296, 592), 3);
    add_background_object(create_fdcore4_3607(7104, 496), 3);
    add_background_object(create_fdcore4_3607(7104, 560), 3);
    add_background_object(create_fdcorefloor1_3615(6336, 528), 3);
    add_background_object(create_fdcorefloor1_3615(6400, 528), 3);
    add_background_object(create_fdcorefloor1_3615(6208, 528), 3);
    add_background_object(create_fdcorefloor1_3615(6272, 528), 3);
    add_background_object(create_fdcorefloor1_3615(6144, 528), 3);
    add_background_object(create_fdcore2_3610(8704, 944), 3);
    add_background_object(create_fdcore1_3606(8704, 1072), 3);
    add_background_object(create_fdcore2_3610(8704, 1200), 3);
    add_background_object(create_fdcore2_3610(8704, 688), 3);
    add_background_object(create_fdcore1_3606(8704, 816), 3);
    add_background_object(create_fdcorefloor4_3609(8672, 688), 3);
    add_background_object(create_fdcorefloor4_3609(8672, 752), 3);
    add_background_object(create_fdcorefloor4_3609(8672, 816), 3);
    add_background_object(create_fdcorefloor4_3609(8672, 880), 3);
    add_background_object(create_fdcorefloor9_3627(8672, 912), 3);
    add_background_object(create_fdcore1_3606(8704, 560), 3);
    add_background_object(create_fdcore2_3610(8576, 560), 3);
    add_background_object(create_fdcore1_3606(8576, 432), 3);
    add_background_object(create_fdcore2_3610(8704, 432), 3);
    add_background_object(create_fdcorefloor3_3611(8576, 688), 3);
    add_background_object(create_fdcorefloor3_3611(8640, 688), 3);
    add_background_object(create_fdcorefloor9_3627(8672, 688), 3);
    add_background_object(create_fdcorefloor7_3622(8544, 688), 3);
    add_background_object(create_fdcorefloor4_3609(8544, 624), 3);
    add_background_object(create_fdcorefloor4_3609(8544, 560), 3);
    add_background_object(create_fdcorefloor4_3609(8416, 496), 3);
    add_background_object(create_fdcorefloor4_3609(8416, 432), 3);
    add_background_object(create_fdcore2_3610(8448, 432), 3);
    add_background_object(create_fdcorefloor3_3611(8448, 560), 3);
    add_background_object(create_fdcorefloor3_3611(8512, 560), 3);
    add_background_object(create_fdcorefloor7_3622(8416, 560), 3);
    add_background_object(create_fdcorefloor9_3627(8544, 560), 3);
    add_background_object(create_fdcorefloor4_3609(6976, 368), 3);
    add_background_object(create_fdcorefloor9_3627(6976, 336), 3);
    add_background_object(create_fdcore1_3606(7008, 112), 3);
    add_background_object(create_fdcore2_3610(7136, 112), 3);
    add_background_object(create_fdcore1_3606(7264, 112), 3);
    add_background_object(create_fdcore2_3610(7392, 112), 3);
    add_background_object(create_fdcorefloor2_3608(7488, 112), 3);
    add_background_object(create_fdcorefloor9_3627(7488, 112), 3);
    add_background_object(create_fdcorefloor2_3608(7488, 176), 3);
    add_background_object(create_fdcore1_3606(7136, 240), 3);
    add_background_object(create_fdcore1_3606(8448, 304), 3);
    add_background_object(create_fdcore2_3610(8320, 304), 3);
    add_background_object(create_fdcore1_3606(8192, 304), 3);
    add_background_object(create_fdcorefloor3_3611(8192, 432), 3);
    add_background_object(create_fdcorefloor3_3611(8256, 432), 3);
    add_background_object(create_fdcorefloor3_3611(8320, 432), 3);
    add_background_object(create_fdcorefloor3_3611(8384, 432), 3);
    add_background_object(create_fdcorefloor9_3627(8416, 432), 3);
    add_background_object(create_fdcorefloor9_3627(8000, 112), 3);
    add_background_object(create_fdcore1_3606(8320, 112), 3);
    add_background_object(create_fdcore2_3610(8192, 176), 3);
    add_background_object(create_fdcorefloor4_3609(8160, 176), 3);
    add_background_object(create_fdcorefloor4_3609(8160, 112), 3);
    add_background_object(create_fdcorefloor7_3622(8160, 432), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 176), 3);
    add_background_object(create_fdcorefloor3_3611(8032, 112), 3);
    add_background_object(create_fdcorefloor3_3611(8096, 112), 3);
    add_background_object(create_fdcorefloor9_3627(8160, 112), 3);
    add_background_object(create_fdcore1_3606(8128, -16), 3);
    add_background_object(create_fdcore2_3610(8000, -16), 3);
    add_background_object(create_fdcore2_3610(8256, -16), 3);
    add_background_object(create_fdcore1_3606(8384, -16), 3);
    add_background_object(create_fdcore4_3607(8192, 112), 3);
    add_background_object(create_fdcore4_3607(8256, 112), 3);
    add_background_object(create_fdcore4_3607(8320, 240), 3);
    add_background_object(create_fdcore4_3607(8384, 240), 3);
    add_background_object(create_fdcorefloor4_3609(8160, 240), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 240), 3);
    add_background_object(create_fdcorefloor4_3609(8160, 304), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 304), 3);
    add_background_object(create_fdcorefloor4_3609(8160, 368), 3);
    add_background_object(create_fdcorefloor2_3608(8000, 368), 3);
    add_background_object(create_fdcorefloor2_3608(8832, 496), 3);
    add_background_object(create_fdcorefloor2_3608(8832, 560), 3);
    add_background_object(create_fdcorefloor2_3608(8832, 624), 3);
    add_background_object(create_fdcore1_3606(8704, 304), 3);
    add_background_object(create_fdcore2_3610(8576, 304), 3);
    add_background_object(create_fdcore1_3606(8576, 176), 3);
    add_background_object(create_fdcore2_3610(8448, 176), 3);
    add_background_object(create_fdcore2_3610(8704, 176), 3);
    add_background_object(create_fdcore1_3606(8704, 48), 3);
    add_background_object(create_fdcore2_3610(8576, 48), 3);
    add_background_object(create_fdcore4_3607(8448, 112), 3);
    add_background_object(create_fdcore4_3607(8512, 112), 3);
    add_background_object(create_fdcore4_3607(8512, 48), 3);
    add_background_object(create_fdcore4_3607(8512, -16), 3);
    add_background_object(create_fdcore4_3607(8576, -16), 3);
    add_background_object(create_fdcore4_3607(8640, -16), 3);
    add_background_object(create_fdcore4_3607(8704, -16), 3);
    add_background_object(create_fdcore4_3607(8768, -16), 3);
    add_background_object(create_fdcore2_3610(8832, 368), 3);
    add_background_object(create_fdcore1_3606(8832, 176), 3);
    add_background_object(create_fdcore1_3606(8960, 304), 3);
    add_background_object(create_fdcore2_3610(8960, 176), 3);
    add_background_object(create_fdcore1_3606(8960, 560), 3);
    add_background_object(create_fdcore2_3610(8960, 432), 3);
    add_background_object(create_fdcore4_3607(8832, 304), 3);
    add_background_object(create_fdcore4_3607(8896, 304), 3);
    add_background_object(create_fdcorefloor3_3611(8864, 496), 3);
    add_background_object(create_fdcorefloor4_3609(8928, 496), 3);
    add_background_object(create_fdcorefloor4_3609(8928, 560), 3);
    add_background_object(create_fdcorefloor4_3609(8928, 624), 3);
    add_background_object(create_fdcorefloor9_3627(8832, 496), 3);
    add_background_object(create_fdcorefloor9_3627(8928, 496), 3);
    add_background_object(create_fdcorefloor3_3611(8960, 688), 3);
    add_background_object(create_fdcorefloor3_3611(9024, 688), 3);
    add_background_object(create_fdcorefloor7_3622(8928, 688), 3);
    add_background_object(create_fdcorefloor2_3608(8832, 688), 3);
    add_background_object(create_fdcorefloor2_3608(8832, 752), 3);
    add_background_object(create_fdcorefloor2_3608(8832, 816), 3);
    add_background_object(create_fdcore1_3606(8832, 944), 3);
    add_background_object(create_fdcore2_3610(8960, 944), 3);
    add_background_object(create_fdcorefloor2_3608(8832, 880), 3);
    add_background_object(create_fdcore2_3610(8832, 1072), 3);
    add_background_object(create_fdcore1_3606(8960, 1072), 3);
    add_background_object(create_fdcorefloor1_3615(9024, 912), 3);
    add_background_object(create_fdcorefloor1_3615(8960, 912), 3);
    add_background_object(create_fdcorefloor1_3615(8896, 912), 3);
    add_background_object(create_fdcorefloor1_3615(8832, 912), 3);
    add_background_object(create_fdcorefloor9_3627(8832, 912), 3);
    add_background_object(create_fdcorefloor1_3615(8864, 880), 3);
    add_background_object(create_fdcore1_3606(9088, 944), 3);
    add_background_object(create_fdcore2_3610(9216, 880), 3);
    add_background_object(create_fdcore2_3610(9088, 1072), 3);
    add_background_object(create_fdcore1_3606(9216, 1008), 3);
    add_background_object(create_fdcorefloor1_3615(9280, 848), 3);
    add_background_object(create_fdcorefloor1_3615(9216, 848), 3);
    add_background_object(create_fdcorefloor1_3615(9152, 912), 3);
    add_background_object(create_fdcorefloor1_3615(9088, 912), 3);
    add_background_object(create_fdcore1_3606(8832, 1200), 3);
    add_background_object(create_fdcore2_3610(8960, 1200), 3);
    add_background_object(create_fdcore1_3606(9088, 1200), 3);
    add_background_object(create_fdcore2_3610(9216, 1136), 3);
    add_background_object(create_fdcore1_3606(9088, 432), 3);
    add_background_object(create_fdcore2_3610(9088, 304), 3);
    add_background_object(create_fdcore2_3610(9088, 560), 3);
    add_background_object(create_fdcore1_3606(9088, 176), 3);
    add_background_object(create_fdcorefloor3_3611(9088, 688), 3);
    add_background_object(create_fdcorefloor3_3611(9152, 688), 3);
    add_background_object(create_fdcorefloor3_3611(7360, 368), 3);
    add_background_object(create_fdcore4_3607(7808, 368), 3);
    add_background_object(create_fdcore4_3607(7808, 432), 3);
    add_background_object(create_fdcorefloor3_3611(7776, 496), 3);
    add_background_object(create_fdcorefloor7_3622(7776, 496), 3);
    add_background_object(create_fdcorefloor3_3611(7616, 368), 3);
    add_background_object(create_fdcore2_3610(4928, -16), 3);
    add_background_object(create_fdcorefloor3_3611(4864, 112), 3);
    add_background_object(create_fdcorefloor3_3611(4800, 112), 3);
    add_background_object(create_fdcorefloor1_3615(4800, 272), 3);
    add_background_object(create_fdcorefloor1_3615(4608, 744), 3);
    add_background_object(create_fdcorefloor1_3615(4544, 744), 3);
    add_background_object(create_fdcorefloor1_3615(4480, 744), 3);
    add_background_object(create_fdfloor1_3570(4448, 616), 3);
    add_background_object(create_fdfloor1_3570(4512, 616), 3);
    add_background_object(create_fdfloor1_3570(4576, 616), 3);
    add_background_object(create_fdcoreloop5_3632(4512, 80), 3);
    add_background_object(create_fdcorefloor3_3611(4288, 48), 3);
    add_background_object(create_fdcorefloor3_3611(4352, 48), 3);
    add_background_object(create_fdcorefloor3_3611(4416, 48), 3);
    add_background_object(create_fdcorefloor3_3611(4480, 48), 3);
    add_background_object(create_fdcorefloor3_3611(4544, 48), 3);
    add_background_object(create_fdcorefloor3_3611(4608, 48), 3);
    add_background_object(create_fdcoreloop2_3605(4512, 208), 3);
    add_background_object(create_fdcorefloor8_3621(4448, 336), 3);
    add_background_object(create_fdcorefloor7_3622(4448, 368), 3);
    add_background_object(create_fdcorefloor1_3615(4480, 336), 3);
    add_background_object(create_fdcorefloor3_3611(4480, 368), 3);
    add_background_object(create_fdcorefloor1_3615(4544, 336), 3);
    add_background_object(create_fdcorefloor3_3611(4544, 368), 3);
    add_background_object(create_fdcorefloor4_3609(4640, 272), 3);
    add_background_object(create_fdcorefloor4_3609(4640, 208), 3);
    add_background_object(create_fdcorefloor4_3609(4640, 144), 3);
    add_background_object(create_fdcorefloor4_3609(4640, 80), 3);
    add_background_object(create_fdcorefloor3_3611(4608, 368), 3);
    add_background_object(create_fdcorefloor9_3627(4640, 48), 3);
    add_background_object(create_fdcorefloor8_3621(4320, 336), 3);
    add_background_object(create_fdcorefloor7_3622(4320, 368), 3);
    add_background_object(create_fdcorefloor5_3619(4352, 336), 3);
    add_background_object(create_fdcorefloor6_3620(4352, 368), 3);
    add_background_object(create_fdcorefloor1_3615(4608, 336), 3);
    add_background_object(create_fdcorefloor9_3627(4640, 336), 3);
    add_background_object(create_fdcorefloor7_3622(4256, 48), 3);
    add_background_object(create_fdcorefloor4_3609(4256, -16), 3);
    add_background_object(create_fdcore2_3610(4672, -16), 3);
    add_background_object(create_fdcore1_3606(4544, -80), 3);
    add_background_object(create_fdcore2_3610(4416, -80), 3);
    add_background_object(create_fdcorefloor2_3608(4672, 304), 3);
    add_background_object(create_fdcore1_3606(4288, -80), 3);
    add_background_object(create_fdcorefloor4_3609(4256, -80), 3);
    add_background_object(create_fdcore1_3606(5184, 624), 3);
    add_background_object(create_fdcore1_3606(5184, 368), 3);
    add_background_object(create_fdcore2_3610(5184, 496), 3);
    add_background_object(create_fdcore2_3610(5568, 112), 3);
    add_background_object(create_fdcore1_3606(5568, 240), 3);
    add_background_object(create_fdcore1_3606(1856, 856), 3);
    add_background_object(create_fdcore1_3606(1984, 728), 3);
    add_background_object(create_fdcore2_3610(1856, 728), 3);
    add_background_object(create_fdcore2_3610(1984, 856), 3);
    add_background_object(create_fdcore1_3606(1856, 1112), 3);
    add_background_object(create_fdcore1_3606(1984, 984), 3);
    add_background_object(create_fdcore2_3610(1856, 984), 3);
    add_background_object(create_fdcore2_3610(1984, 1112), 3);
    add_background_object(create_fdcore1_3606(1856, 1368), 3);
    add_background_object(create_fdcore1_3606(1984, 1240), 3);
    add_background_object(create_fdcore2_3610(1856, 1240), 3);
    add_background_object(create_fdcore2_3610(1984, 1368), 3);
    add_background_object(create_fdcore1_3606(1728, 728), 3);
    add_background_object(create_fdcore2_3610(1728, 856), 3);
    add_background_object(create_fdcore1_3606(1728, 984), 3);
    add_background_object(create_fdcore2_3610(1728, 1112), 3);
    add_background_object(create_fdcore1_3606(1728, 1240), 3);
    add_background_object(create_fdcore2_3610(1728, 1368), 3);
    add_background_object(create_fdcore1_3606(1600, 856), 3);
    add_background_object(create_fdcore2_3610(1600, 728), 3);
    add_background_object(create_fdcorefloor3_3611(1600, 984), 3);
    add_background_object(create_fdcorefloor3_3611(1664, 984), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1432), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1368), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1304), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1240), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1176), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1112), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1048), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 984), 3);
    add_background_object(create_fdcorefloor9_3627(2080, 984), 3);
    add_background_object(create_fdcore1_3606(1856, 1624), 3);
    add_background_object(create_fdcore1_3606(1984, 1496), 3);
    add_background_object(create_fdcore2_3610(1856, 1496), 3);
    add_background_object(create_fdcore2_3610(1984, 1624), 3);
    add_background_object(create_fdcore1_3606(1728, 1496), 3);
    add_background_object(create_fdcore2_3610(1728, 1624), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1688), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1624), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1560), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1496), 3);
    add_background_object(create_fdcore1_3606(1856, 1880), 3);
    add_background_object(create_fdcore1_3606(1984, 1752), 3);
    add_background_object(create_fdcore2_3610(1856, 1752), 3);
    add_background_object(create_fdcore2_3610(1984, 1880), 3);
    add_background_object(create_fdcore1_3606(1728, 1752), 3);
    add_background_object(create_fdcore2_3610(1728, 1880), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1944), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1880), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1816), 3);
    add_background_object(create_fdcorefloor2_3608(2080, 1752), 3);
    add_background_object(create_fdcorefloor8_3621(2176, 1112), 3);
    add_background_object(create_fdfloor1_3570(2112, 1112), 3);
    add_background_object(create_fdcorefloor7_3622(2176, 1144), 3);
    add_background_object(create_fdcorefloor6_3620(2208, 1144), 3);
    add_background_object(create_fdcorefloor5_3619(2208, 1112), 3);
    add_background_object(create_fdcorefloor6_3620(9216, 688), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 624), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 560), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 496), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 432), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 368), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 304), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 240), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 176), 3);
    add_background_object(create_fdcorefloor5_3619(9344, 848), 3);
    add_background_object(create_fdcorefloor2_3608(9344, 1136), 3);
    add_background_object(create_fdcorefloor2_3608(9344, 1072), 3);
    add_background_object(create_fdcorefloor2_3608(9344, 1008), 3);
    add_background_object(create_fdcorefloor2_3608(9344, 944), 3);
    add_background_object(create_fdcorefloor2_3608(9344, 880), 3);
    add_background_object(create_fdcorefloor2_3608(9344, 1200), 3);
    add_background_object(create_fdfloor1_3570(9376, 848), 3);
    add_background_object(create_fdfloor1_3570(9440, 848), 3);
    add_background_object(create_fdfloor1_3570(9504, 848), 3);
    add_background_object(create_fdfloor1_3570(9568, 848), 3);
    add_background_object(create_fdfloor1_3570(9632, 848), 3);
    add_background_object(create_fdfloor1_3570(9696, 848), 3);
    add_background_object(create_fdcorefloor5_3619(9792, 848), 3);
    add_background_object(create_fdcorefloor2_3608(9792, 1136), 3);
    add_background_object(create_fdcorefloor2_3608(9792, 1072), 3);
    add_background_object(create_fdcorefloor2_3608(9792, 1008), 3);
    add_background_object(create_fdcorefloor2_3608(9792, 944), 3);
    add_background_object(create_fdcorefloor2_3608(9792, 880), 3);
    add_background_object(create_fdcorefloor2_3608(9792, 1200), 3);
    add_background_object(create_fdcorefloor8_3621(9760, 848), 3);
    add_background_object(create_fdcorefloor4_3609(9760, 880), 3);
    add_background_object(create_fdcorefloor4_3609(9760, 944), 3);
    add_background_object(create_fdcorefloor4_3609(9760, 1008), 3);
    add_background_object(create_fdcorefloor4_3609(9760, 1072), 3);
    add_background_object(create_fdcorefloor4_3609(9760, 1136), 3);
    add_background_object(create_fdcorefloor4_3609(9760, 1200), 3);
    add_background_object(create_fdfloor1_3570(9824, 848), 3);
    add_background_object(create_fdfloor1_3570(9888, 848), 3);
    add_background_object(create_fdfloor1_3570(9952, 848), 3);
    add_background_object(create_fdfloor1_3570(10016, 848), 3);
    add_background_object(create_fdfloor1_3570(10080, 848), 3);
    add_background_object(create_fdfloor1_3570(10144, 848), 3);
    add_background_object(create_fdcorefloor5_3619(10240, 848), 3);
    add_background_object(create_fdcorefloor2_3608(10240, 1136), 3);
    add_background_object(create_fdcorefloor2_3608(10240, 1072), 3);
    add_background_object(create_fdcorefloor2_3608(10240, 1008), 3);
    add_background_object(create_fdcorefloor2_3608(10240, 944), 3);
    add_background_object(create_fdcorefloor2_3608(10240, 880), 3);
    add_background_object(create_fdcorefloor2_3608(10240, 1200), 3);
    add_background_object(create_fdcorefloor8_3621(10208, 848), 3);
    add_background_object(create_fdcorefloor4_3609(10208, 880), 3);
    add_background_object(create_fdcorefloor4_3609(10208, 944), 3);
    add_background_object(create_fdcorefloor4_3609(10208, 1008), 3);
    add_background_object(create_fdcorefloor4_3609(10208, 1072), 3);
    add_background_object(create_fdcorefloor4_3609(10208, 1136), 3);
    add_background_object(create_fdcorefloor4_3609(10208, 1200), 3);
    add_background_object(create_fdfloor1_3570(10272, 848), 3);
    add_background_object(create_fdfloor1_3570(10336, 848), 3);
    add_background_object(create_fdfloor1_3570(10400, 848), 3);
    add_background_object(create_fdfloor1_3570(10464, 848), 3);
    add_background_object(create_fdfloor1_3570(10528, 848), 3);
    add_background_object(create_fdfloor1_3570(10592, 848), 3);
    add_background_object(create_fdcorefloor8_3621(10656, 848), 3);
    add_background_object(create_fdcorefloor4_3609(10656, 880), 3);
    add_background_object(create_fdcorefloor4_3609(10656, 944), 3);
    add_background_object(create_fdcorefloor4_3609(10656, 1008), 3);
    add_background_object(create_fdcorefloor4_3609(10656, 1072), 3);
    add_background_object(create_fdcorefloor4_3609(10656, 1136), 3);
    add_background_object(create_fdcorefloor4_3609(10656, 1200), 3);
    add_background_object(create_fdcore7_3613(10816, 728), 3);
    add_background_object(create_fdcore5_3614(10752, 792), 3);
    add_background_object(create_fdcore1_3606(10688, 856), 3);
    add_background_object(create_fdcore2_3610(10816, 856), 3);
    add_background_object(create_fdcoreslope3_3617(10848, 696), 3);
    add_background_object(create_fdcoreslope4_3625(10688, 800), 3);
    add_background_object(create_fdcoreslope6_3626(10784, 736), 3);
    add_background_object(create_fdcore1_3606(10816, 984), 3);
    add_background_object(create_fdcore2_3610(10688, 984), 3);
    add_background_object(create_fdcore2_3610(10816, 1112), 3);
    add_background_object(create_fdcore1_3606(10688, 1112), 3);
    add_background_object(create_fdcore1_3606(10944, 856), 3);
    add_background_object(create_fdcore2_3610(10944, 984), 3);
    add_background_object(create_fdcore1_3606(10944, 1112), 3);
    add_background_object(create_fdcore2_3610(10944, 728), 3);
    add_background_object(create_fdcorefloor1_3615(11072, 728), 3);
    add_background_object(create_fdcorefloor1_3615(11136, 728), 3);
    add_background_object(create_fdcore2_3610(11072, 856), 3);
    add_background_object(create_fdcore1_3606(11072, 984), 3);
    add_background_object(create_fdcore2_3610(11072, 1112), 3);
    add_background_object(create_fdcore2_3610(11200, 408), 3);
    add_background_object(create_fdcore1_3606(11200, 536), 3);
    add_background_object(create_fdcorefloor8_3621(9184, 848), 3);
    add_background_object(create_fdcorefloor4_3609(9184, 880), 3);
    add_background_object(create_fdcorefloor9_3627(9184, 912), 3);
    add_background_object(create_fdcore1_3606(8832, -80), 3);
    add_background_object(create_fdcore1_3606(8960, 48), 3);
    add_background_object(create_fdcore2_3610(8960, -80), 3);
    add_background_object(create_fdcore2_3610(9088, 48), 3);
    add_background_object(create_fdcore1_3606(9088, -80), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 112), 3);
    add_background_object(create_fdcorefloor2_3608(9216, 48), 3);
    add_background_object(create_fdcorefloor2_3608(9216, -16), 3);
    add_background_object(create_fdcorefloor2_3608(9216, -80), 3);
    add_background_object(create_fdcore2_3610(8832, 48), 3);
    add_background_object(create_fdcorefloor4_3609(11168, 344), 3);
    add_background_object(create_fdcorefloor4_3609(11168, 408), 3);
    add_background_object(create_fdcorefloor4_3609(11168, 600), 3);
    add_background_object(create_fdcorefloor4_3609(11168, 664), 3);
    add_background_object(create_fdcorefloor9_3627(11168, 728), 3);
    add_background_object(create_fdcorefloor3_3611(11072, 344), 3);
    add_background_object(create_fdcorefloor3_3611(11136, 344), 3);
    add_background_object(create_fdcorefloor9_3627(11168, 344), 3);
    add_background_object(create_fdcorefloor4_3609(11168, 536), 3);
    add_background_object(create_fdcorefloor4_3609(11168, 472), 3);
    add_background_object(create_fdcorefloor1_3615(10944, 696), 3);
    add_background_object(create_fdcorefloor1_3615(11008, 696), 3);
    add_background_object(create_fdcore1_3606(11200, 792), 3);
    add_background_object(create_fdcore2_3610(11200, 984), 3);
    add_background_object(create_fdcore1_3606(11200, 1112), 3);
    add_background_object(create_fdcore2_3610(11200, 664), 3);
    add_background_object(create_fdcorefloor3_3611(10944, 344), 3);
    add_background_object(create_fdcorefloor3_3611(11008, 344), 3);
    add_background_object(create_fdcore1_3606(10880, 216), 3);
    add_background_object(create_fdcorefloor3_3611(10816, 344), 3);
    add_background_object(create_fdcorefloor3_3611(10880, 344), 3);
    add_background_object(create_fdcorefloor7_3622(10528, 344), 3);
    add_background_object(create_fdcorefloor4_3609(10848, 280), 3);
    add_background_object(create_fdcorefloor4_3609(10848, 216), 3);
    add_background_object(create_fdfloor1_3570(10912, 504), 3);
    add_background_object(create_fdcorefloor7_3622(10976, 536), 3);
    add_background_object(create_fdcorefloor8_3621(10976, 504), 3);
    add_background_object(create_fdcorefloor5_3619(11008, 504), 3);
    add_background_object(create_fdcorefloor6_3620(11008, 536), 3);
    add_background_object(create_fdfloor1_3570(10848, 504), 3);
    add_background_object(create_fdfloor1_3570(10784, 504), 3);
    add_background_object(create_fdcorefloor7_3622(10720, 536), 3);
    add_background_object(create_fdcorefloor8_3621(10720, 504), 3);
    add_background_object(create_fdcorefloor5_3619(10752, 504), 3);
    add_background_object(create_fdcorefloor6_3620(10752, 536), 3);
    add_background_object(create_fdcorefloor8_3621(10848, 184), 3);
    add_background_object(create_fdcorefloor1_3615(10880, 184), 3);
    add_background_object(create_fdcorefloor1_3615(10944, 184), 3);
    add_background_object(create_fdcorefloor1_3615(11008, 184), 3);
    add_background_object(create_fdcore6_3612(11264, 344), 3);
    add_background_object(create_fdcore6_3612(11200, 280), 3);
    add_background_object(create_fdcoreslope1_3616(11072, 184), 3);
    add_background_object(create_fdcore3_3623(11072, 216), 3);
    add_background_object(create_fdcore6_3612(11328, 408), 3);
    add_background_object(create_fdcore4_3607(11200, 344), 3);
    add_background_object(create_fdcore2_3610(11328, 472), 3);
    add_background_object(create_fdcoreslope5_3618(11232, 288), 3);
    add_background_object(create_fdcoreslope5_3618(11168, 224), 3);
    add_background_object(create_fdcoreslope5_3618(11296, 352), 3);
    add_background_object(create_fdcoreslope2_3624(11360, 416), 3);
    add_background_object(create_fdcore4_3607(11200, 920), 3);
    add_background_object(create_fdcore4_3607(11264, 920), 3);
    add_background_object(create_fdcorefloor3_3611(10688, 344), 3);
    add_background_object(create_fdcorefloor3_3611(10752, 344), 3);
    add_background_object(create_fdcorefloor3_3611(10624, 344), 3);
    add_background_object(create_fdcorefloor3_3611(10560, 344), 3);
    add_background_object(create_fdcorefloor8_3621(10528, 312), 3);
    add_background_object(create_fdcorefloor1_3615(10560, 312), 3);
    add_background_object(create_fdcorefloor1_3615(10624, 312), 3);
    add_background_object(create_fdcorefloor1_3615(10688, 312), 3);
    add_background_object(create_fdcorefloor1_3615(10816, 312), 3);
    add_background_object(create_fdcorefloor9_3627(10848, 312), 3);
    add_background_object(create_fdfloor1_3570(10240, 504), 3);
    add_background_object(create_fdcorefloor7_3622(10304, 536), 3);
    add_background_object(create_fdcorefloor8_3621(10304, 504), 3);
    add_background_object(create_fdcorefloor5_3619(10336, 504), 3);
    add_background_object(create_fdcorefloor6_3620(10336, 536), 3);
    add_background_object(create_fdfloor1_3570(10176, 504), 3);
    add_background_object(create_fdfloor1_3570(10112, 504), 3);
    add_background_object(create_fdcorefloor7_3622(10048, 536), 3);
    add_background_object(create_fdcorefloor8_3621(10048, 504), 3);
    add_background_object(create_fdcorefloor5_3619(10080, 504), 3);
    add_background_object(create_fdcorefloor6_3620(10080, 536), 3);
    add_background_object(create_fdcorefloor7_3622(9920, 408), 3);
    add_background_object(create_fdcorefloor8_3621(9920, 120), 3);
    add_background_object(create_fdcorefloor5_3619(9952, 120), 3);
    add_background_object(create_fdcorefloor6_3620(9952, 408), 3);
    add_background_object(create_fdfloor1_3570(10176, 312), 3);
    add_background_object(create_fdcorefloor7_3622(10112, 344), 3);
    add_background_object(create_fdcorefloor8_3621(10112, 312), 3);
    add_background_object(create_fdcorefloor5_3619(10144, 312), 3);
    add_background_object(create_fdcorefloor6_3620(10144, 344), 3);
    add_background_object(create_fdcorefloor7_3622(10240, 344), 3);
    add_background_object(create_fdcorefloor8_3621(10240, 312), 3);
    add_background_object(create_fdcorefloor5_3619(10272, 312), 3);
    add_background_object(create_fdcorefloor6_3620(10272, 344), 3);
    add_background_object(create_fdcorefloor8_3621(9920, 376), 3);
    add_background_object(create_fdcorefloor5_3619(9952, 376), 3);
    add_background_object(create_fdcorefloor7_3622(9920, 152), 3);
    add_background_object(create_fdcorefloor6_3620(9952, 152), 3);
    add_background_object(create_fdfloor1_3570(9920, 312), 3);
    add_background_object(create_fdfloor1_3570(9920, 248), 3);
    add_background_object(create_fdfloor1_3570(9920, 184), 3);
    add_background_object(create_fdcorefloor5_3619(5504, 144), 3);
    add_background_object(create_fdcorefloor6_3620(5504, 176), 3);
    add_background_object(create_fdcorefloor7_3622(5376, 176), 3);
    add_background_object(create_fdcorefloor8_3621(5376, 144), 3);
    add_background_object(create_fdcorefloor3_3611(5440, 176), 3);
    add_background_object(create_fdcorefloor1_3615(5440, 144), 3);
    add_background_object(create_fdcorefloor3_3611(5408, 176), 3);
    add_background_object(create_fdcorefloor1_3615(5408, 144), 3);
    add_background_object(create_fdcorefloor7_3622(10784, 280), 3);
    add_background_object(create_fdcorefloor8_3621(10784, 248), 3);
    add_background_object(create_fdcorefloor5_3619(10816, 248), 3);
    add_background_object(create_fdcorefloor6_3620(10816, 280), 3);
    add_background_object(create_fdcorefloor1_3615(10752, 312), 3);
    add_background_object(create_fdcore4_3607(11008, 280), 3);
    add_background_object(create_fdcore4_3607(11008, 216), 3);
    add_background_object(create_fdcorefloor8_3621(9440, 120), 3);
    add_background_object(create_fdcorefloor5_3619(9536, 120), 3);
    add_background_object(create_fdcorefloor6_3620(9536, 152), 3);
    add_background_object(create_fdcorefloor4_3609(9440, 152), 3);
    add_background_object(create_fdcorefloor4_3609(9440, 216), 3);
    add_background_object(create_fdcorefloor1_3615(9472, 120), 3);
    add_background_object(create_fdcorefloor3_3611(9472, 152), 3);
    add_background_object(create_fdcorefloor2_3608(9472, 216), 3);
    add_background_object(create_fdcorefloor2_3608(9472, 152), 3);
    add_background_object(create_fdcorefloor9_3627(9472, 152), 3);
    add_background_object(create_fdcorefloor4_3609(9440, 408), 3);
    add_background_object(create_fdcorefloor2_3608(9472, 408), 3);
    add_background_object(create_fdcorefloor4_3609(9440, 472), 3);
    add_background_object(create_fdcorefloor2_3608(9472, 472), 3);
    add_background_object(create_fdcorefloor7_3622(9440, 536), 3);
    add_background_object(create_fdcorefloor3_3611(9472, 536), 3);
    add_background_object(create_fdcorefloor3_3611(9536, 536), 3);
    add_background_object(create_fdcorefloor3_3611(9600, 536), 3);
    add_background_object(create_fdcorefloor6_3620(9664, 536), 3);
    add_background_object(create_fdcorefloor5_3619(9664, 504), 3);
    add_background_object(create_fdcorefloor1_3615(9600, 504), 3);
    add_background_object(create_fdcorefloor1_3615(9536, 504), 3);
    add_background_object(create_fdcorefloor1_3615(9472, 504), 3);
    add_background_object(create_fdcorefloor9_3627(9472, 504), 3);
    add_background_object(create_fdcorefloor4_3609(9440, 344), 3);
    add_background_object(create_fdcorefloor2_3608(9472, 344), 3);
    add_background_object(create_fdcorefloor6_3620(9568, 408), 3);
    add_background_object(create_fdcorefloor5_3619(9568, 376), 3);
    add_background_object(create_fdcorefloor4_3609(9440, 280), 3);
    add_background_object(create_fdcorefloor2_3608(9472, 280), 3);
    add_background_object(create_fdcorefloor1_3615(9504, 376), 3);
    add_background_object(create_fdcorefloor3_3611(9504, 408), 3);
    add_background_object(create_fdcorefloor9_3627(9472, 408), 3);
    add_background_object(create_fdcorefloor9_3627(9472, 376), 3);
    add_background_object(create_fdcore1_3606(11328, 600), 3);
    add_background_object(create_fdcore2_3610(11328, 728), 3);
    add_background_object(create_fdcore1_3606(11328, 856), 3);
    add_background_object(create_fdcore2_3610(11328, 984), 3);
    add_background_object(create_fdcore1_3606(11328, 1112), 3);
    add_background_object(create_fdcorefloor5_3619(11040, 696), 3);
    add_background_object(create_fdcorefloor9_3627(11040, 728), 3);
    add_background_object(create_fdcorefloor2_3608(7232, 1136), 3);
    add_background_object(create_fdcorefloor2_3608(7232, 1072), 3);
    add_background_object(create_fdcorefloor8_3621(7328, 1104), 3);
    add_background_object(create_fdcorefloor4_3609(7328, 1136), 3);
    add_background_object(create_fdcorefloor9_3627(7328, 1200), 3);
    add_background_object(create_fdcorefloor1_3615(7264, 1200), 3);
    add_background_object(create_fdcore1_3606(9552, 1432), 3);
    add_background_object(create_fdcore2_3610(9696, 1432), 3);
    add_background_object(create_fdcore3_3623(9840, 1432), 3);
    add_background_object(create_fdcore4_3607(9984, 1496), 3);
    add_background_object(create_fdcore5_3614(10064, 1496), 3);
    add_background_object(create_fdcore6_3612(10144, 1496), 3);
    add_background_object(create_fdcore7_3613(9552, 1576), 3);
    add_background_object(create_fdcorefloor1_3615(9696, 1576), 3);
    add_background_object(create_fdcorefloor2_3608(9776, 1576), 3);
    add_background_object(create_fdcorefloor3_3611(9824, 1576), 3);
    add_background_object(create_fdcorefloor4_3609(9904, 1576), 3);
    add_background_object(create_fdcorefloor5_3619(9952, 1576), 3);
    add_background_object(create_fdcorefloor6_3620(10000, 1576), 3);
    add_background_object(create_fdcorefloor7_3622(10048, 1576), 3);
    add_background_object(create_fdcorefloor8_3621(10096, 1576), 3);
    add_background_object(create_fdcorefloor9_3627(10144, 1576), 3);
    add_background_object(create_fdcoreloop1_3628(9712, 1664), 3);
    add_background_object(create_fdcoreloop3_3629(9864, 1664), 3);
    add_background_object(create_fdcoreslope1_3616(10008, 1664), 3);
    add_background_object(create_fdcoreslope2_3624(10128, 1656), 3);
    add_background_object(create_fdcoreslope3_3617(10008, 1760), 3);
    add_background_object(create_fdcoreslope4_3625(10128, 1760), 3);
    add_background_object(create_fdcoreslope5_3618(9552, 1720), 3);
    add_background_object(create_fdcoreslope6_3626(9632, 1720), 3);
    add_background_object(create_fdcorefloor7_3622(11680, 176), 3);
    add_background_object(create_fdcore2_3610(11712, 48), 3);
    add_background_object(create_fdcorefloor4_3609(11552, 304), 3);
    add_background_object(create_fdcorefloor4_3609(11680, 112), 3);
    add_background_object(create_fdcorefloor4_3609(11680, 48), 3);
    add_background_object(create_fdcore1_3606(11904, 48), 3);
    add_background_object(create_fdcore1_3606(11712, -80), 3);
    add_background_object(create_fdcore2_3610(11840, -80), 3);
    add_background_object(create_fdcorefloor2_3608(12032, 112), 3);
    add_background_object(create_fdcorefloor2_3608(12032, 48), 3);
    add_background_object(create_fdcorefloor2_3608(12032, -16), 3);
    add_background_object(create_fdcorefloor4_3609(11680, -16), 3);
    add_background_object(create_fdcorefloor4_3609(11680, -80), 3);
    add_background_object(create_fdcorefloor2_3608(12032, -80), 3);
    add_background_object(create_fdcore4_3607(11968, -16), 3);
    add_background_object(create_fdcore4_3607(11968, -80), 3);
    add_background_object(create_fdcore4_3607(11840, 112), 3);
    add_background_object(create_fdcore4_3607(11840, 48), 3);
    add_background_object(create_fdcorefloor8_3621(11552, 272), 3);
    add_background_object(create_fdcorefloor7_3622(11552, 368), 3);
    add_background_object(create_fdcorefloor5_3619(12160, 592), 3);
    add_background_object(create_fdcorefloor3_3611(12160, 624), 3);
    add_background_object(create_fdcorefloor3_3611(12224, 624), 3);
    add_background_object(create_fdcorefloor6_3620(12288, 624), 3);
    add_background_object(create_fdcorefloor5_3619(12288, 592), 3);
    add_background_object(create_fdcorefloor8_3621(12256, 592), 3);
    add_background_object(create_fdcore2_3610(12224, 816), 3);
    add_background_object(create_fdcore1_3606(12352, 816), 3);
    add_background_object(create_fdcorefloor1_3615(12192, 784), 3);
    add_background_object(create_fdcorefloor1_3615(12256, 784), 3);
    add_background_object(create_fdcorefloor1_3615(12320, 784), 3);
    add_background_object(create_fdcorefloor1_3615(12384, 784), 3);
    add_background_object(create_fdcore1_3606(11456, 944), 3);
    add_background_object(create_fdcore2_3610(11584, 944), 3);
    add_background_object(create_fdcore1_3606(11712, 944), 3);
    add_background_object(create_fdcore2_3610(11840, 944), 3);
    add_background_object(create_fdcore1_3606(11968, 944), 3);
    add_background_object(create_fdcore2_3610(12096, 944), 3);
    add_background_object(create_fdcore1_3606(12224, 944), 3);
    add_background_object(create_fdcore2_3610(12352, 944), 3);
    add_background_object(create_fdcore2_3610(12480, 816), 3);
    add_background_object(create_fdcore1_3606(12864, 816), 3);
    add_background_object(create_fdcore1_3606(12480, 944), 3);
    add_background_object(create_fdcore2_3610(12864, 944), 3);
    add_background_object(create_fdcore2_3610(12992, 816), 3);
    add_background_object(create_fdcore1_3606(12992, 944), 3);
    add_background_object(create_fdcore1_3606(12864, 496), 3);
    add_background_object(create_fdcore1_3606(12480, 688), 3);
    add_background_object(create_fdcore2_3610(12864, 688), 3);
    add_background_object(create_fdcore2_3610(12992, 560), 3);
    add_background_object(create_fdcore1_3606(12992, 688), 3);
    add_background_object(create_fdcore1_3606(12992, 432), 3);
    add_background_object(create_fdcorefloor4_3609(12448, 688), 3);
    add_background_object(create_fdcorefloor4_3609(12448, 752), 3);
    add_background_object(create_fdcorefloor4_3609(12832, 496), 3);
    add_background_object(create_fdcorefloor4_3609(12576, 624), 3);
    add_background_object(create_fdcorefloor8_3621(12448, 656), 3);
    add_background_object(create_fdcorefloor1_3615(12480, 656), 3);
    add_background_object(create_fdcorefloor1_3615(12544, 656), 3);
    add_background_object(create_fdcorefloor8_3621(12832, 464), 3);
    add_background_object(create_fdcorefloor1_3615(12864, 464), 3);
    add_background_object(create_fdcorefloor1_3615(12928, 464), 3);
    add_background_object(create_fdcorefloor9_3627(12448, 784), 3);
    add_background_object(create_fdcorefloor9_3627(12576, 656), 3);
    add_background_object(create_fdcorefloor4_3609(12960, 432), 3);
    add_background_object(create_fdcorefloor8_3621(12960, 400), 3);
    add_background_object(create_fdcorefloor1_3615(12992, 400), 3);
    add_background_object(create_fdcorefloor1_3615(13056, 400), 3);
    add_background_object(create_fdcorefloor9_3627(12960, 464), 3);
    add_background_object(create_fdcore4_3607(12928, 624), 3);
    add_background_object(create_fdcore4_3607(12864, 624), 3);
    add_background_object(create_fdcorefloor8_3621(12704, 528), 3);
    add_background_object(create_fdcorefloor1_3615(12736, 528), 3);
    add_background_object(create_fdcorefloor1_3615(12800, 528), 3);
    add_background_object(create_fdcorefloor9_3627(12832, 528), 3);
    add_background_object(create_fdcore1_3606(12736, 688), 3);
    add_background_object(create_fdcore2_3610(12736, 816), 3);
    add_background_object(create_fdcore2_3610(12736, 560), 3);
    add_background_object(create_fdcore1_3606(12736, 944), 3);
    add_background_object(create_fdcore1_3606(12608, 624), 3);
    add_background_object(create_fdcore2_3610(12608, 944), 3);
    add_background_object(create_fdcore1_3606(12608, 816), 3);
    add_background_object(create_fdcore4_3607(12672, 752), 3);
    add_background_object(create_fdcore4_3607(12608, 752), 3);
    add_background_object(create_fdcorefloor4_3609(12704, 560), 3);
    add_background_object(create_fdcorefloor1_3615(12608, 592), 3);
    add_background_object(create_fdcorefloor1_3615(12672, 592), 3);
    add_background_object(create_fdcorefloor9_3627(12704, 592), 3);
    add_background_object(create_fdcorefloor8_3621(12576, 592), 3);
    add_background_object(create_fdcore1_3606(13120, 816), 3);
    add_background_object(create_fdcore2_3610(13120, 944), 3);
    add_background_object(create_fdcore2_3610(13248, 816), 3);
    add_background_object(create_fdcore1_3606(13248, 944), 3);
    add_background_object(create_fdcore2_3610(13120, 688), 3);
    add_background_object(create_fdcore1_3606(13248, 688), 3);
    add_background_object(create_fdcore1_3606(13120, 560), 3);
    add_background_object(create_fdcore2_3610(13248, 560), 3);
    add_background_object(create_fdcore2_3610(13120, 368), 3);
    add_background_object(create_fdcore1_3606(13248, 432), 3);
    add_background_object(create_fdcore4_3607(13184, 496), 3);
    add_background_object(create_fdcore4_3607(13120, 496), 3);
    add_background_object(create_fdcore2_3610(13248, 304), 3);
    add_background_object(create_fdcorefloor4_3609(13088, 368), 3);
    add_background_object(create_fdcorefloor8_3621(13088, 336), 3);
    add_background_object(create_fdcorefloor1_3615(13120, 336), 3);
    add_background_object(create_fdcorefloor1_3615(13184, 336), 3);
    add_background_object(create_fdcorefloor9_3627(13088, 400), 3);
    add_background_object(create_fdcorefloor4_3609(13216, 304), 3);
    add_background_object(create_fdcorefloor8_3621(13216, 272), 3);
    add_background_object(create_fdcorefloor1_3615(13248, 272), 3);
    add_background_object(create_fdcorefloor1_3615(13312, 272), 3);
    add_background_object(create_fdcorefloor9_3627(13216, 336), 3);
    add_background_object(create_fdcore2_3610(13760, 560), 3);
    add_background_object(create_fdcore1_3606(13760, 432), 3);
    add_background_object(create_fdcore2_3610(13760, 304), 3);
    add_background_object(create_fdcorefloor1_3615(13760, 272), 3);
    add_background_object(create_fdcorefloor1_3615(13824, 272), 3);
    add_background_object(create_fdcore2_3610(14272, 560), 3);
    add_background_object(create_fdcore1_3606(14272, 432), 3);
    add_background_object(create_fdcore2_3610(14272, 304), 3);
    add_background_object(create_fdcore2_3610(14400, 432), 3);
    add_background_object(create_fdcore1_3606(14400, 304), 3);
    add_background_object(create_fdcore1_3606(14400, 560), 3);
    add_background_object(create_fdcorefloor1_3615(14272, 272), 3);
    add_background_object(create_fdcorefloor1_3615(14336, 272), 3);
    add_background_object(create_fdcorefloor1_3615(14400, 272), 3);
    add_background_object(create_fdcorefloor1_3615(14464, 272), 3);
    add_background_object(create_fdcorefloor8_3621(14240, 272), 3);
    add_background_object(create_fdcorefloor5_3619(13888, 272), 3);
    add_background_object(create_fdcorefloor4_3609(14240, 304), 3);
    add_background_object(create_fdcorefloor2_3608(13888, 304), 3);
    add_background_object(create_fdcorefloor4_3609(14240, 368), 3);
    add_background_object(create_fdcorefloor2_3608(13888, 368), 3);
    add_background_object(create_fdcorefloor4_3609(14240, 432), 3);
    add_background_object(create_fdcorefloor2_3608(13888, 432), 3);
    add_background_object(create_fdcorefloor4_3609(14240, 496), 3);
    add_background_object(create_fdcorefloor2_3608(13888, 496), 3);
    add_background_object(create_fdcorefloor4_3609(14240, 560), 3);
    add_background_object(create_fdcorefloor2_3608(13888, 560), 3);
    add_background_object(create_fdcorefloor4_3609(14240, 624), 3);
    add_background_object(create_fdcorefloor2_3608(13888, 624), 3);
    add_background_object(create_fdfloor1_3570(13920, 272), 3);
    add_background_object(create_fdfloor1_3570(13984, 272), 3);
    add_background_object(create_fdfloor1_3570(14048, 272), 3);
    add_background_object(create_fdfloor1_3570(14112, 272), 3);
    add_background_object(create_fdfloor1_3570(14176, 272), 3);
    add_background_object(create_fdcorefloor8_3621(13728, 272), 3);
    add_background_object(create_fdcorefloor5_3619(13376, 272), 3);
    add_background_object(create_fdcorefloor4_3609(13728, 304), 3);
    add_background_object(create_fdcorefloor2_3608(13376, 304), 3);
    add_background_object(create_fdcorefloor4_3609(13728, 368), 3);
    add_background_object(create_fdcorefloor2_3608(13376, 368), 3);
    add_background_object(create_fdcorefloor4_3609(13728, 432), 3);
    add_background_object(create_fdcorefloor2_3608(13376, 432), 3);
    add_background_object(create_fdcorefloor4_3609(13728, 496), 3);
    add_background_object(create_fdcorefloor2_3608(13376, 496), 3);
    add_background_object(create_fdcorefloor4_3609(13728, 560), 3);
    add_background_object(create_fdcorefloor2_3608(13376, 560), 3);
    add_background_object(create_fdcorefloor4_3609(13728, 624), 3);
    add_background_object(create_fdcorefloor2_3608(13376, 624), 3);
    add_background_object(create_fdfloor1_3570(13408, 272), 3);
    add_background_object(create_fdfloor1_3570(13472, 272), 3);
    add_background_object(create_fdfloor1_3570(13536, 272), 3);
    add_background_object(create_fdfloor1_3570(13600, 272), 3);
    add_background_object(create_fdfloor1_3570(13664, 272), 3);
    add_background_object(create_fdcore2_3610(13504, -32), 3);
    add_background_object(create_fdcorefloor4_3609(13472, -32), 3);
    add_background_object(create_fdcorefloor4_3609(13472, 32), 3);
    add_background_object(create_fdcorefloor2_3608(13632, -32), 3);
    add_background_object(create_fdcorefloor2_3608(13632, 32), 3);
    add_background_object(create_fdcorefloor6_3620(13632, 96), 3);
    add_background_object(create_fdcorefloor7_3622(13472, 96), 3);
    add_background_object(create_fdcorefloor3_3611(13504, 96), 3);
    add_background_object(create_fdcorefloor3_3611(13568, 96), 3);
    add_background_object(create_fdcore2_3610(14272, -16), 3);
    add_background_object(create_fdcorefloor4_3609(14240, -16), 3);
    add_background_object(create_fdcorefloor4_3609(14240, 48), 3);
    add_background_object(create_fdcorefloor2_3608(14400, -16), 3);
    add_background_object(create_fdcorefloor2_3608(14400, 48), 3);
    add_background_object(create_fdcorefloor6_3620(14400, 112), 3);
    add_background_object(create_fdcorefloor7_3622(14240, 112), 3);
    add_background_object(create_fdcorefloor3_3611(14272, 112), 3);
    add_background_object(create_fdcorefloor3_3611(14336, 112), 3);
    add_background_object(create_fdcorefloor6_3620(12384, 208), 3);
    add_background_object(create_fdcorefloor5_3619(12384, 176), 3);
    add_background_object(create_fdcorefloor8_3621(12160, 176), 3);
    add_background_object(create_fdcorefloor7_3622(12160, 208), 3);
    add_background_object(create_fdcorefloor6_3620(12640, 208), 3);
    add_background_object(create_fdcorefloor5_3619(12640, 176), 3);
    add_background_object(create_fdcorefloor8_3621(12608, 176), 3);
    add_background_object(create_fdcorefloor7_3622(12608, 208), 3);
    add_background_object(create_fdfloor1_3570(12416, 176), 3);
    add_background_object(create_fdfloor1_3570(12544, 176), 3);
    add_background_object(create_fdfloor1_3570(12480, 176), 3);
    add_background_object(create_fdcorefloor1_3615(12192, 176), 3);
    add_background_object(create_fdcorefloor1_3615(12256, 176), 3);
    add_background_object(create_fdcorefloor1_3615(12320, 176), 3);
    add_background_object(create_fdcorefloor3_3611(12192, 208), 3);
    add_background_object(create_fdcorefloor3_3611(12256, 208), 3);
    add_background_object(create_fdcorefloor3_3611(12320, 208), 3);
    add_object(create_monitorcrate_409(7168, 1008), 3);
    add_object(create_monitorcrate_409(7136, 1008), 3);
    add_object(create_monitorcrate_409(7104, 1008), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4832, 544), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(4384, 1112), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_hazardorbitbeambase_3633(10544, 344), 3);
    add_object(create_objecttransporterstart_3412(-352, 1312), 3);
    add_object(create_objecttransporterstart_3412(3488, 1048), 3);
    add_object(create_objecttransporterstart_3412(256, 1984), 3);
    add_object(create_objecttransporterstart_3412(6432, 1360), 3);
    add_object(create_objecttransporterstart_3412(6304, 784), 3);
    add_object(create_objecttransporterstart_3412(5792, 352), 3);
    add_object(create_objecttransporterstart_3412(6752, 400), 3);
    add_object(create_objecttransporterstart_3412(7360, 560), 3);
    add_object(create_objecttransporterstart_3412(7744, 560), 3);
    add_object(create_objecttransporterstart_3412(8096, 176), 3);
    add_object(create_objecttransporterstart_3412(4752, 176), 3);
    add_object(create_enemygatlinggunright_3634(6232, 1728), 3);
    add_object(create_enemygatlinggunright_3634(6408, 1472), 3);
    add_object(create_enemygatlinggunright_3634(6440, 1088), 3);
    add_object(create_enemygatlinggunright_3634(5952, 256), 3);
    add_object(create_enemygatlinggunright_3634(6216, 576), 3);
    add_object(create_enemygatlinggunright_3634(7352, 384), 3);
    add_object(create_enemygatlinggunright_3634(7048, 1088), 3);
    add_object(create_enemygatlinggunright_3634(7704, 384), 3);
    add_object(create_enemygatlinggunright_3634(5344, 1496), 3);
    add_object(create_enemygatlinggunright_3634(4000, 960), 3);
    add_object(create_enemygatlinggunleft_3635(6232, 1696), 3);
    add_object(create_enemygatlinggunleft_3635(6408, 1440), 3);
    add_object(create_enemygatlinggunleft_3635(6440, 1056), 3);
    add_object(create_enemygatlinggunleft_3635(5952, 224), 3);
    add_object(create_enemygatlinggunleft_3635(6216, 544), 3);
    add_object(create_enemygatlinggunleft_3635(7352, 352), 3);
    add_object(create_enemygatlinggunleft_3635(7048, 1056), 3);
    add_object(create_enemygatlinggunleft_3635(7704, 352), 3);
    add_object(create_enemygatlinggunleft_3635(5344, 1464), 3);
    add_object(create_enemygatlinggunleft_3635(4000, 928), 3);
    add_object(create_fdlooplayer12_3636(3424, 592), 3);
    add_object(create_fdlooplayer12_3636(3424, 400), 3);
    add_object(create_enemyrotorbladespikes_2204(-265, 1024), 3);
    add_object(create_enemyrotorblade_2205(-264, 1024), 3);
    add_object(create_enemydronelaser_2127(-332, 974), 3);
    add_object(create_playerstartingpoint_358(93, 389), 3);
    add_object(create_enemytankbot_2821(-410, 1106), 3);
    add_object(create_enemytankbot_2821(479, 1529), 3);
    add_object(create_enemyelitemask_2511(404, 1760), 3);
    add_object(create_enemyelite_2510(407, 1759), 3);
    add_object(create_enemyelitemask_2511(156, 1952), 3);
    add_object(create_enemyelite_2510(159, 1951), 3);
    add_object(create_enemyelitemask_2511(332, 1952), 3);
    add_object(create_enemyelite_2510(335, 1951), 3);
    add_object(create_enemytankbot_2821(127, 1465), 3);
    add_object(create_enemyelitemask_2511(356, 1312), 3);
    add_object(create_enemyelite_2510(359, 1311), 3);
    add_object(create_enemyelitemask_2511(132, 1312), 3);
    add_object(create_enemyelite_2510(135, 1311), 3);
    add_object(create_enemyelitemask_2511(244, 1312), 3);
    add_object(create_enemyelite_2510(247, 1311), 3);
    add_object(create_enemyelitemask_2511(460, 1312), 3);
    add_object(create_enemyelite_2510(463, 1311), 3);
    add_object(create_enemyelitemask_2511(84, 1696), 3);
    add_object(create_enemyelite_2510(87, 1695), 3);
    add_object(create_enemyelitemask_2511(508, 1760), 3);
    add_object(create_enemyelite_2510(511, 1759), 3);
    add_object(create_enemylimiter_350(5, 1490), 3);
    add_object(create_enemylimiter_350(213, 1490), 3);
    add_object(create_enemylimiter_350(325, 1554), 3);
    add_object(create_enemylimiter_350(597, 1554), 3);
    add_object(create_enemylimiter_350(5, 1298), 3);
    add_object(create_enemylimiter_350(597, 1298), 3);
    add_object(create_enemylimiter_350(5, 1938), 3);
    add_object(create_enemylimiter_350(661, 1938), 3);
    add_object(create_dialogdata_3637(-168, 464), 3);
    add_object(create_enemylimiter_350(661, 1746), 3);
    add_object(create_enemylimiter_350(325, 1746), 3);
    add_object(create_enemylimiter_350(5, 1682), 3);
    add_object(create_enemylimiter_350(213, 1682), 3);
    add_object(create_enemyelitemask_2511(60, 1312), 3);
    add_object(create_enemyelite_2510(63, 1311), 3);
    add_object(create_enemyelitemask_2511(540, 1312), 3);
    add_object(create_enemyelite_2510(543, 1311), 3);
    add_object(create_enemyseeker_2648(455, 1856), 3);
    add_object(create_enemyseeker_2648(519, 1480), 3);
    add_object(create_bosssparkytail_3305(256, 1744), 3);
    add_object(create_bosssparkytail_3305(256, 1720), 3);
    add_object(create_bosssparkytail_3305(256, 1696), 3);
    add_object(create_bosssparkytail_3305(256, 1672), 3);
    add_object(create_bosssparky_3327(256, 1616), 3);
    add_object(create_bosssparkyleftarm_3328(256, 1616), 3);
    add_object(create_bosssparkyrightarm_3329(256, 1616), 3);
    add_object(create_enemyelitemask_2511(372, 1016), 3);
    add_object(create_enemyelite_2510(375, 1015), 3);
    add_object(create_enemyelitemask_2511(164, 1016), 3);
    add_object(create_enemyelite_2510(167, 1015), 3);
    add_object(create_enemyelitemask_2511(260, 1016), 3);
    add_object(create_enemyelite_2510(263, 1015), 3);
    add_object(create_enemyelitemask_2511(476, 1016), 3);
    add_object(create_enemyelite_2510(479, 1015), 3);
    add_object(create_enemylimiter_350(5, 1002), 3);
    add_object(create_enemylimiter_350(661, 1002), 3);
    add_object(create_enemyelitemask_2511(60, 1016), 3);
    add_object(create_enemyelite_2510(63, 1015), 3);
    add_object(create_enemyelitemask_2511(596, 1016), 3);
    add_object(create_enemyelite_2510(599, 1015), 3);
    add_object(create_enemyseeker_2648(495, 880), 3);
    add_object(create_enemyseeker_2648(519, 1184), 3);
    add_object(create_enemyseeker_2648(543, 816), 3);
    add_object(create_objecttransporternode90_3428(-352, 1248), 3);
    add_object(create_objecttransporternode180_3426(-416, 1312), 3);
    add_object(create_objecttransporternode270_3417(-352, 1376), 3);
    add_object(create_objecttransporternode0_3415(-288, 1312), 3);
    add_object(create_objecttransporterstart2_3416(-354, 1318), 3);
    add_object(create_objecttransporter_3344(-352, 1416), 3);
    add_object(create_enemyelitespawner_3345(-474, 1470), 3);
    add_object(create_objecttransporter_3344(160, 1312), 3);
    add_object(create_objecttransporter_3344(352, 1312), 3);
    add_object(create_objecttransporter_3344(160, 1016), 3);
    add_object(create_objecttransporter_3344(352, 1016), 3);
    add_object(create_objecttransporter_3344(96, 408), 3);
    add_object(create_gimmickspeedbooster_3638(1935, 391), 3);
    add_object(create_gimmickspeedbooster_3638(1999, 391), 3);
    add_object(create_gimmickspeedbooster_3638(1487, 199), 3);
    add_object(create_gimmickspeedbooster_3638(1551, 199), 3);
    add_object(create_fdlooplayer03_3639(3488, 528), 3);
    add_object(create_fdlooplayer11_3640(3488, 208), 3);
    add_object(create_fdlooplayer12_3636(3616, 208), 3);
    add_object(create_fdlooplayer02_3641(3360, 464), 3);
    add_object(create_fdlooplayer02_3641(3360, 592), 3);
    add_object(create_fdlooplayer02_3641(3424, 592), 3);
    add_object(create_fdlooplayer02_3641(3552, 464), 3);
    add_object(create_fdlooplayer02_3641(3488, 272), 3);
    add_object(create_fdlooplayer02_3641(3552, 272), 3);
    add_object(create_fdlooplayer12_3636(3616, 400), 3);
    add_object(create_fdlooplayer13_3642(3360, 656), 3);
    add_object(create_fdlooplayer12_3636(3296, 528), 3);
    add_object(create_fdlooplayer12_3636(3424, 528), 3);
    add_object(create_layerchangeswitch_404(3552, 696), 3);
    add_object(create_fdlooplayer12_3636(3424, 336), 3);
    add_object(create_layerchangeswitch2_1239(3416, 248), 3);
    add_object(create_gimmickspeedbooster_3638(3215, 543), 3);
    add_object(create_gimmickspeedbooster_3638(3151, 543), 3);
    add_object(create_layerchangeswitch2_1239(3272, 536), 3);
    add_object(create_layerchangeswitch_404(3696, 216), 3);
    add_object(create_layerchangeswitch_404(3696, 408), 3);
    add_object(create_gimmickspeedbooster_3638(3791, 415), 3);
    add_object(create_gimmickspeedbooster_3638(3727, 415), 3);
    add_object(create_fdlooplayer12_3636(3296, 720), 3);
    add_object(create_fdlooplayer12_3636(3296, 656), 3);
    add_object(create_layerchangeswitch2_1239(3264, 672), 3);
    add_object(create_layerchangeswitch2_1239(3264, 728), 3);
    add_object(create_lockeddoorterminal_2606(3640, 1104), 3);
    add_object(create_lockedlabdoorbarrier_3541(3784, 976), 3);
    add_object(create_objectkeycard_2643(5496, 312), 3);
    add_object(create_gimmickspeedbooster_3638(3215, 735), 3);
    add_object(create_gimmickspeedbooster_3638(3151, 735), 3);
    add_object(create_fdlooplayer01_3643(3360, 336), 3);
    add_object(create_yellowspringright_435(2912, 760), 3);
    add_object(create_yellowspringright_435(2912, 792), 3);
    add_object(create_yellowspringleft_436(3088, 784), 3);
    add_object(create_yellowspringleft_436(3088, 816), 3);
    add_object(create_yellowspringleft_436(3088, 848), 3);
    add_object(create_yellowspringleft_436(3088, 880), 3);
    add_object(create_yellowspringleft_436(3088, 912), 3);
    add_object(create_yellowspringleft_436(3088, 944), 3);
    add_object(create_yellowspringright_435(2912, 824), 3);
    add_object(create_yellowspringright_435(2912, 856), 3);
    add_object(create_yellowspringright_435(2912, 888), 3);
    add_object(create_yellowspringright_435(2912, 920), 3);
    add_object(create_yellowspringright_435(2912, 952), 3);
    add_object(create_yellowspringright_435(2912, 984), 3);
    add_object(create_yellowspringright_435(2912, 728), 3);
    add_object(create_objecttransporterstart2_3416(3486, 1046), 3);
    add_object(create_objecttransporternode0_3415(3488, 336), 3);
    add_object(create_objecttransporternode270_3417(4000, 336), 3);
    add_object(create_objecttransporter_3344(4000, 464), 3);
    add_object(create_objecttransporterwave_3414(-464, 1512), 3);
    add_object(create_enemydnacannonbase_2262(1158, 115), 3);
    add_object(create_enemydnacannon_2264(1159, 116), 3);
    add_object(create_effectwarning_1513(1212, 128), 3);
    add_object(create_enemydnalaser_2236(-512, 1680), 3);
    add_object(create_gimmickspeedbooster_3638(1071, 263), 3);
    add_object(create_gimmickspeedbooster_3638(1135, 263), 3);
    add_object(create_objectcrystal_279(469, 234), 3);
    add_object(create_objectcrystal_279(501, 234), 3);
    add_object(create_objectcrystal_279(533, 234), 3);
    add_object(create_objectcrystal_279(621, 234), 3);
    add_object(create_objectcrystal_279(653, 234), 3);
    add_object(create_objectcrystal_279(685, 234), 3);
    add_object(create_objectcrystal_279(373, 362), 3);
    add_object(create_objectcrystal_279(405, 362), 3);
    add_object(create_objectcrystal_279(437, 362), 3);
    add_object(create_objectcrystal_279(653, 362), 3);
    add_object(create_objectcrystal_279(685, 362), 3);
    add_object(create_objectcrystal_279(717, 362), 3);
    add_object(create_objectcrystal_279(469, 362), 3);
    add_object(create_objectcrystal_279(501, 362), 3);
    add_object(create_objectcrystal_279(589, 362), 3);
    add_object(create_objectcrystal_279(621, 362), 3);
    add_object(create_objectpetal_302(577, 233), 3);
    add_object(create_objectpetal_302(545, 361), 3);
    add_object(create_enemyseeker_2648(431, 248), 3);
    add_object(create_enemyseeker_2648(551, 368), 3);
    add_object(create_enemyseeker_2648(551, 120), 3);
    add_object(create_enemyseeker_2648(983, 264), 3);
    add_object(create_enemydnacannonbase_2262(734, 147), 3);
    add_object(create_enemydnacannon_2264(735, 148), 3);
    add_object(create_effectwarning_1513(788, 160), 3);
    add_object(create_enemydnacannonbase_2262(3982, 1131), 3);
    add_object(create_enemydnacannon_2264(3983, 1132), 3);
    add_object(create_effectwarning_1513(4036, 1144), 3);
    add_object(create_enemyrotorbladespikes_2204(543, 472), 3);
    add_object(create_enemyrotorblade_2205(544, 472), 3);
    add_object(create_enemyspawntube_2195(544, 484), 3);
    add_object(create_enemyseeker_2648(575, 240), 3);
    add_object(create_enemyseeker_2648(743, 240), 3);
    add_object(create_enemylimiter_350(141, 426), 3);
    add_object(create_enemylimiter_350(941, 426), 3);
    add_object(create_enemylimiter_350(21, 370), 3);
    add_object(create_enemylimiter_350(309, 354), 3);
    add_object(create_enemylimiter_350(405, 218), 3);
    add_object(create_enemypounder_3419(4192, 232), 3);
    add_object(create_enemylimiter_350(4085, 242), 3);
    add_object(create_enemylimiter_350(4325, 242), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeam_3644(4832, 544), 3);
    add_object(create_hazardorbitbeamscan_3645(4816, 488), 3);
    add_object(create_hazardorbitbeamscan_3645(4824, 488), 3);
    add_object(create_hazardorbitbeamscan_3645(4832, 488), 3);
    add_object(create_hazardorbitbeamscan_3645(4840, 488), 3);
    add_object(create_hazardorbitbeamscan_3645(4816, 472), 3);
    add_object(create_hazardorbitbeamscan_3645(4816, 480), 3);
    add_object(create_hazardorbitbeamscan_3645(4824, 472), 3);
    add_object(create_hazardorbitbeamscan_3645(4824, 480), 3);
    add_object(create_hazardorbitbeamscan_3645(4832, 472), 3);
    add_object(create_hazardorbitbeamscan_3645(4832, 480), 3);
    add_object(create_hazardorbitbeamscan_3645(4840, 472), 3);
    add_object(create_hazardorbitbeamscan_3645(4840, 480), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeam_3644(4384, 1112), 3);
    add_object(create_hazardorbitbeamscan_3645(4368, 1056), 3);
    add_object(create_hazardorbitbeamscan_3645(4376, 1056), 3);
    add_object(create_hazardorbitbeamscan_3645(4384, 1056), 3);
    add_object(create_hazardorbitbeamscan_3645(4392, 1056), 3);
    add_object(create_hazardorbitbeamscan_3645(4368, 1040), 3);
    add_object(create_hazardorbitbeamscan_3645(4368, 1048), 3);
    add_object(create_hazardorbitbeamscan_3645(4376, 1040), 3);
    add_object(create_hazardorbitbeamscan_3645(4376, 1048), 3);
    add_object(create_hazardorbitbeamscan_3645(4384, 1040), 3);
    add_object(create_hazardorbitbeamscan_3645(4384, 1048), 3);
    add_object(create_hazardorbitbeamscan_3645(4392, 1040), 3);
    add_object(create_hazardorbitbeamscan_3645(4392, 1048), 3);
    add_object(create_objecttransporterstart2_3416(254, 1982), 3);
    add_object(create_objecttransporternode180_3426(256, 152), 3);
    add_object(create_objecttransporternode270_3417(96, 152), 3);
    add_object(create_enemybubblorbiter_2443(5344, 312), 3);
    add_object(create_enemydnacannonbase_2262(4982, 235), 3);
    add_object(create_enemydnacannon_2264(4983, 236), 3);
    add_object(create_effectwarning_1513(5036, 248), 3);
    add_object(create_gimmickspeedbooster_3638(4783, 1119), 3);
    add_object(create_gimmickspeedbooster_3638(4719, 1119), 3);
    add_object(create_gimmickspeedbooster_3638(5391, 1103), 3);
    add_object(create_gimmickspeedbooster_3638(5327, 1103), 3);
    add_object(create_fdlooplayer14_3646(5728, 912), 3);
    add_object(create_fdlooplayer12_3636(5664, 912), 3);
    add_object(create_fdlooplayer12_3636(5664, 976), 3);
    add_object(create_fdlooplayer12_3636(5664, 1040), 3);
    add_object(create_fdlooplayer12_3636(5664, 1104), 3);
    add_object(create_fdlooplayer12_3636(5664, 1232), 3);
    add_object(create_fdlooplayer12_3636(5664, 1296), 3);
    add_object(create_fdlooplayer12_3636(5664, 1360), 3);
    add_object(create_fdlooplayer12_3636(5664, 1424), 3);
    add_object(create_fdlooplayer12_3636(5664, 1488), 3);
    add_object(create_fdlooplayer02_3641(5728, 1168), 3);
    add_object(create_fdlooplayer02_3641(5728, 1296), 3);
    add_object(create_layerchangeto0_405(5496, 920), 3);
    add_object(create_layerchangeto0_405(5496, 1232), 3);
    add_object(create_layerchangeto0_405(5496, 1296), 3);
    add_object(create_layerchangeto0_405(5496, 976), 3);
    add_object(create_layerchangeto0_405(5496, 1032), 3);
    add_object(create_layerchangeto0_405(5496, 1096), 3);
    add_object(create_layerchangeswitch_404(5848, 920), 3);
    add_object(create_layerchangeswitch_404(5840, 1240), 3);
    add_object(create_fdlooplayer14_3646(11744, 208), 3);
    add_object(create_fdlooplayer12_3636(11680, 208), 3);
    add_object(create_fdlooplayer12_3636(11872, 400), 3);
    add_object(create_fdlooplayer02_3641(11744, 464), 3);
    add_object(create_fdlooplayer02_3641(11872, 592), 3);
    add_object(create_fdlooplayer02_3641(11936, 592), 3);
    add_object(create_fdlooplayer02_3641(11936, 464), 3);
    add_object(create_fdlooplayer02_3641(11744, 272), 3);
    add_object(create_fdlooplayer02_3641(11808, 272), 3);
    add_object(create_fdlooplayer12_3636(11872, 528), 3);
    add_object(create_fdlooplayer12_3636(11872, 336), 3);
    add_object(create_fdlooplayer04_3647(11872, 336), 3);
    add_object(create_fdlooplayer12_3636(11680, 400), 3);
    add_object(create_fdlooplayer05_3648(11744, 528), 3);
    add_object(create_fdlooplayer15_3649(11872, 656), 3);
    add_object(create_fdlooplayer12_3636(12000, 720), 3);
    add_object(create_fdlooplayer12_3636(12000, 656), 3);
    add_object(create_layerchangeswitch2_1239(11624, 408), 3);
    add_object(create_layerchangeswitch_404(11928, 240), 3);
    add_object(create_layerchangeswitch2_1239(11792, 696), 3);
    add_object(create_layerchangeswitch2_1239(11624, 216), 3);
    add_object(create_layerchangeswitch_404(12088, 536), 3);
    add_object(create_fdlooplayer12_3636(12000, 528), 3);
    add_object(create_layerchangeswitch_404(12088, 664), 3);
    add_object(create_layerchangeswitch_404(12088, 728), 3);
    add_object(create_fdlooplayer12_3636(5984, 1232), 3);
    add_object(create_layerchangeto0_405(5928, 1240), 3);
    add_object(create_fdlooplayer02_3641(6048, 1296), 3);
    add_object(create_fdlooplayer02_3641(6112, 1296), 3);
    add_object(create_fdlooplayer12_3636(5984, 1424), 3);
    add_object(create_fdlooplayer12_3636(5984, 1488), 3);
    add_object(create_fdlooplayer14_3646(6048, 1424), 3);
    add_object(create_layerchangeswitch2_1239(5872, 1432), 3);
    add_object(create_layerchangeswitch2_1239(5872, 1496), 3);
    add_object(create_layerchangeswitch_404(6240, 1272), 3);
    add_object(create_objecttransporterstart2_3416(6430, 1358), 3);
    add_object(create_objecttransporternode90_3428(6176, 1360), 3);
    add_object(create_gimmickspeedbooster_3638(6319, 991), 3);
    add_object(create_gimmickspeedbooster_3638(6255, 991), 3);
    add_object(create_objecttransporter_3344(6176, 1040), 3);
    add_object(create_objecttransporternode180_3426(6400, 1360), 3);
    add_object(create_objecttransporterstart2_3416(6302, 782), 3);
    add_object(create_objecttransporternode180_3426(6304, 304), 3);
    add_object(create_objecttransporternode270_3417(6112, 304), 3);
    add_object(create_objecttransporter_3344(6112, 496), 3);
    add_object(create_objecttransporterstart2_3416(5790, 350), 3);
    add_object(create_objecttransporternode0_3415(5792, 176), 3);
    add_object(create_objecttransporter_3344(6496, 496), 3);
    add_object(create_enemyelitespawner_3345(6495, 495), 3);
    add_object(create_objecttransporter_3344(6624, 528), 3);
    add_object(create_objecttransporternode270_3417(6624, 176), 3);
    add_object(create_objecttransporterstart2_3416(6750, 398), 3);
    add_object(create_objecttransporternode0_3415(6784, 400), 3);
    add_object(create_objecttransporter_3344(7552, 568), 3);
    add_object(create_objecttransporternode270_3417(7552, 176), 3);
    add_object(create_objecttransporterstart2_3416(7358, 558), 3);
    add_object(create_objecttransporterstart2_3416(7742, 558), 3);
    add_object(create_objecttransporternode270_3417(6944, 400), 3);
    add_object(create_enemygatlinggun_3650(6256, 1712), 3);
    add_object(create_enemygatlinggun_3650(6432, 1456), 3);
    add_object(create_enemygatlinggun_3650(6464, 1072), 3);
    add_object(create_enemygatlinggun_3650(5976, 240), 3);
    add_object(create_enemygatlinggun_3650(6240, 560), 3);
    add_object(create_enemygatlinggun_3650(7376, 368), 3);
    add_object(create_enemygatlinggun_3650(7072, 1072), 3);
    add_object(create_enemygatlinggun_3650(7728, 368), 3);
    add_object(create_objectsiren_3337(-297, 911), 3);
    add_object(create_objecttransporter_3344(6944, 1008), 3);
    add_object(create_enemygatlinggun_3650(5368, 1480), 3);
    add_object(create_enemygatlinggun_3650(4024, 944), 3);
    add_object(create_enemygatlinggunright_3634(8168, 1024), 3);
    add_object(create_enemygatlinggunleft_3635(8168, 992), 3);
    add_object(create_enemygatlinggun_3650(8192, 1008), 3);
    add_object(create_enemyrotorbladespikes_2204(7295, 1136), 3);
    add_object(create_enemyrotorblade_2205(7296, 1136), 3);
    add_object(create_enemyspawntube_2195(7296, 1148), 3);
    add_object(create_enemylimiter_350(7269, 1090), 3);
    add_object(create_enemylimiter_350(8181, 1090), 3);
    add_object(create_enemygatlinggunright_3634(7392, 896), 3);
    add_object(create_enemygatlinggunleft_3635(7392, 864), 3);
    add_object(create_enemygatlinggun_3650(7416, 880), 3);
    add_object(create_yellowspringup_434(8064, 640), 3);
    add_object(create_yellowspringup_434(8032, 640), 3);
    add_object(create_yellowspringup_434(8096, 640), 3);
    add_object(create_yellowspringup_434(8128, 640), 3);
    add_object(create_objecttransporterstart2_3416(8094, 174), 3);
    add_object(create_objecttransporternode180_3426(8064, 176), 3);
    add_object(create_objecttransporternode0_3415(7784, 560), 3);
    add_object(create_monitorrings_407(7536, 688), 3);
    add_object(create_objecttransporternode270_3417(8896, 560), 3);
    add_object(create_objecttransporter_3344(8896, 880), 3);
    add_object(create_yellowspringupleft_432(8640, 880), 3);
    add_object(create_enemybubblorbiter_2443(9072, 888), 3);
    add_object(create_enemygatlinggunbarrel_3651(7416, 880), 3);
    add_object(create_enemygatlinggunbarrel_3651(8192, 1008), 3);
    add_object(create_enemygatlinggunbarrel_3651(6256, 1712), 3);
    add_object(create_enemygatlinggunbarrel_3651(6432, 1456), 3);
    add_object(create_enemygatlinggunbarrel_3651(6464, 1072), 3);
    add_object(create_enemygatlinggunbarrel_3651(5976, 240), 3);
    add_object(create_enemygatlinggunbarrel_3651(6240, 560), 3);
    add_object(create_enemygatlinggunbarrel_3651(7376, 368), 3);
    add_object(create_enemygatlinggunbarrel_3651(7072, 1072), 3);
    add_object(create_enemygatlinggunbarrel_3651(7728, 368), 3);
    add_object(create_enemygatlinggunbarrel_3651(5368, 1480), 3);
    add_object(create_enemygatlinggunbarrel_3651(4024, 944), 3);
    add_object(create_enemygatlinggun2_3652(7416, 880), 3);
    add_object(create_enemygatlinggun2_3652(8192, 1008), 3);
    add_object(create_enemygatlinggun2_3652(6256, 1712), 3);
    add_object(create_enemygatlinggun2_3652(6432, 1456), 3);
    add_object(create_enemygatlinggun2_3652(6464, 1072), 3);
    add_object(create_enemygatlinggun2_3652(5976, 240), 3);
    add_object(create_enemygatlinggun2_3652(6240, 560), 3);
    add_object(create_enemygatlinggun2_3652(7376, 368), 3);
    add_object(create_enemygatlinggun2_3652(7072, 1072), 3);
    add_object(create_enemygatlinggun2_3652(7728, 368), 3);
    add_object(create_enemygatlinggun2_3652(5368, 1480), 3);
    add_object(create_enemygatlinggun2_3652(4024, 944), 3);
    add_object(create_objectcrystal_279(2365, 562), 3);
    add_object(create_objectcrystal_279(2333, 554), 3);
    add_object(create_objectcrystal_279(2397, 554), 3);
    add_object(create_objectcrystal_279(2301, 538), 3);
    add_object(create_objectcrystal_279(2429, 538), 3);
    add_object(create_objectcrystal_279(2277, 514), 3);
    add_object(create_objectcrystal_279(2453, 514), 3);
    add_object(create_objectcrystal_279(2477, 490), 3);
    add_object(create_objectcrystal_279(2253, 490), 3);
    add_object(create_objectcrystal_279(4813, 490), 3);
    add_object(create_objectcrystal_279(4845, 490), 3);
    add_object(create_objectcrystal_279(4789, 506), 3);
    add_object(create_objectcrystal_279(4869, 506), 3);
    add_object(create_objectcrystal_279(4773, 530), 3);
    add_object(create_objectcrystal_279(4885, 530), 3);
    add_object(create_objectcrystal_279(4773, 562), 3);
    add_object(create_objectcrystal_279(4885, 562), 3);
    add_object(create_objectcrystal_279(4789, 586), 3);
    add_object(create_objectcrystal_279(4869, 586), 3);
    add_object(create_objectcrystal_279(7661, 1074), 3);
    add_object(create_objectcrystal_279(7853, 1074), 3);
    add_object(create_objectcrystal_279(7693, 1074), 3);
    add_object(create_objectcrystal_279(7725, 1074), 3);
    add_object(create_objectcrystal_279(7757, 1074), 3);
    add_object(create_objectcrystal_279(7789, 1074), 3);
    add_object(create_objectcrystal_279(7821, 1074), 3);
    add_object(create_objectpetal_302(8513, 881), 3);
    add_object(create_objectpetal_302(8513, 841), 3);
    add_object(create_objectcrystal_279(8077, 362), 3);
    add_object(create_objectcrystal_279(8093, 378), 3);
    add_object(create_objectcrystal_279(8109, 394), 3);
    add_object(create_objectcrystal_279(8109, 362), 3);
    add_object(create_objectcrystal_279(8077, 394), 3);
    add_object(create_objectcrystal_279(8077, 426), 3);
    add_object(create_objectcrystal_279(8093, 442), 3);
    add_object(create_objectcrystal_279(8109, 426), 3);
    add_object(create_objectcrystal_279(8077, 330), 3);
    add_object(create_objectcrystal_279(8109, 330), 3);
    add_object(create_objectcrystal_279(8093, 314), 3);
    add_object(create_objectcrystal_279(8109, 466), 3);
    add_object(create_objectcrystal_279(8077, 466), 3);
    add_object(create_objectcrystal_279(8077, 498), 3);
    add_object(create_objectcrystal_279(8093, 514), 3);
    add_object(create_objectcrystal_279(8109, 498), 3);
    add_object(create_objectcrystal_279(2973, 794), 3);
    add_object(create_objectcrystal_279(3005, 794), 3);
    add_object(create_objectcrystal_279(3037, 794), 3);
    add_object(create_objectcrystal_279(3589, 1122), 3);
    add_object(create_objectcrystal_279(3589, 1154), 3);
    add_object(create_objectcrystal_279(3589, 1186), 3);
    add_object(create_objectcrystal_279(3589, 1218), 3);
    add_object(create_objectcrystal_279(3589, 1250), 3);
    add_object(create_objectcrystal_279(4365, 1058), 3);
    add_object(create_objectcrystal_279(4397, 1058), 3);
    add_object(create_objectcrystal_279(4341, 1074), 3);
    add_object(create_objectcrystal_279(4421, 1074), 3);
    add_object(create_objectcrystal_279(4325, 1098), 3);
    add_object(create_objectcrystal_279(4437, 1098), 3);
    add_object(create_objectcrystal_279(4325, 1130), 3);
    add_object(create_objectcrystal_279(4437, 1130), 3);
    add_object(create_objectcrystal_279(5749, 1042), 3);
    add_object(create_objectcrystal_279(5965, 1042), 3);
    add_object(create_objectcrystal_279(5957, 1010), 3);
    add_object(create_objectcrystal_279(5757, 1010), 3);
    add_object(create_objectcrystal_279(5941, 978), 3);
    add_object(create_objectcrystal_279(5773, 978), 3);
    add_object(create_objectcrystal_279(5917, 954), 3);
    add_object(create_objectcrystal_279(5797, 954), 3);
    add_object(create_objectcrystal_279(5821, 938), 3);
    add_object(create_objectcrystal_279(5893, 938), 3);
    add_object(create_objectcrystal_279(5861, 930), 3);
    add_object(create_objectcrystal_279(5957, 1074), 3);
    add_object(create_objectcrystal_279(5941, 1098), 3);
    add_object(create_objectcrystal_279(5917, 1122), 3);
    add_object(create_objectcrystal_279(5893, 1138), 3);
    add_object(create_objectcrystal_279(5861, 1146), 3);
    add_object(create_objectcrystal_279(2973, 842), 3);
    add_object(create_objectcrystal_279(3005, 842), 3);
    add_object(create_objectcrystal_279(3037, 842), 3);
    add_object(create_objectcrystal_279(4813, 602), 3);
    add_object(create_objectcrystal_279(4845, 602), 3);
    add_object(create_objectcrystal_279(4341, 1154), 3);
    add_object(create_objectcrystal_279(4421, 1154), 3);
    add_object(create_objecttransporternode0_3415(7400, 560), 3);
    add_object(create_enemypounder_3419(3880, 184), 3);
    add_object(create_enemylimiter_350(3821, 194), 3);
    add_object(create_enemylimiter_350(3957, 194), 3);
    add_object(create_fdlooplayer14_3646(4384, 80), 3);
    add_object(create_fdlooplayer12_3636(4320, 80), 3);
    add_object(create_fdlooplayer12_3636(4320, 144), 3);
    add_object(create_fdlooplayer12_3636(4320, 208), 3);
    add_object(create_fdlooplayer12_3636(4320, 272), 3);
    add_object(create_fdlooplayer02_3641(4384, 336), 3);
    add_object(create_layerchangeswitch_404(4504, 88), 3);
    add_object(create_objectcrystal_279(4405, 210), 3);
    add_object(create_objectcrystal_279(4621, 210), 3);
    add_object(create_objectcrystal_279(4613, 178), 3);
    add_object(create_objectcrystal_279(4413, 178), 3);
    add_object(create_objectcrystal_279(4597, 146), 3);
    add_object(create_objectcrystal_279(4429, 146), 3);
    add_object(create_objectcrystal_279(4573, 122), 3);
    add_object(create_objectcrystal_279(4453, 122), 3);
    add_object(create_objectcrystal_279(4477, 106), 3);
    add_object(create_objectcrystal_279(4549, 106), 3);
    add_object(create_objectcrystal_279(4517, 98), 3);
    add_object(create_objectcrystal_279(4613, 242), 3);
    add_object(create_objectcrystal_279(4597, 266), 3);
    add_object(create_objectcrystal_279(4573, 290), 3);
    add_object(create_objectcrystal_279(4549, 306), 3);
    add_object(create_objectcrystal_279(4517, 314), 3);
    add_object(create_layerchangeto0_405(4256, 272), 3);
    add_object(create_layerchangeto0_405(4256, 208), 3);
    add_object(create_layerchangeto0_405(4256, 144), 3);
    add_object(create_layerchangeto0_405(4256, 80), 3);
    add_object(create_objecttransporternode270_3417(4000, 176), 3);
    add_object(create_objecttransporternode180_3426(4720, 176), 3);
    add_object(create_objecttransporterstart2_3416(4750, 174), 3);
    add_object(create_monitorkeystone_562(2112, 1224), 3);
    add_object(create_monitorkeystone_562(2144, 1224), 3);
    add_object(create_enemyseeker_2648(2319, 1064), 3);
    add_object(create_enemyseeker_2648(3423, 1176), 3);
    add_object(create_enemyseeker_2648(8255, 560), 3);
    add_object(create_gimmickspeedbooster_3638(9295, 799), 3);
    add_object(create_gimmickspeedbooster_3638(9231, 799), 3);
    add_object(create_enemypounder_3419(10016, 736), 3);
    add_object(create_enemylimiter_350(9829, 746), 3);
    add_object(create_enemylimiter_350(10229, 746), 3);
    add_object(create_enemypounder_3419(10464, 736), 3);
    add_object(create_enemylimiter_350(10277, 746), 3);
    add_object(create_enemylimiter_350(10677, 746), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeam_3644(10544, 344), 3);
    add_object(create_hazardorbitbeamscan_3645(10528, 288), 3);
    add_object(create_hazardorbitbeamscan_3645(10536, 288), 3);
    add_object(create_hazardorbitbeamscan_3645(10544, 288), 3);
    add_object(create_hazardorbitbeamscan_3645(10552, 288), 3);
    add_object(create_hazardorbitbeamscan_3645(10528, 272), 3);
    add_object(create_hazardorbitbeamscan_3645(10528, 280), 3);
    add_object(create_hazardorbitbeamscan_3645(10536, 272), 3);
    add_object(create_hazardorbitbeamscan_3645(10536, 280), 3);
    add_object(create_hazardorbitbeamscan_3645(10544, 272), 3);
    add_object(create_hazardorbitbeamscan_3645(10544, 280), 3);
    add_object(create_hazardorbitbeamscan_3645(10552, 272), 3);
    add_object(create_hazardorbitbeamscan_3645(10552, 280), 3);
    add_object(create_gimmickspeedbooster_3638(10863, 455), 3);
    add_object(create_gimmickspeedbooster_3638(10863, 391), 3);
    add_object(create_monitorfireshield_328(9920, 88), 3);
    add_object(create_gimmickspeedbooster_3638(10895, 135), 3);
    add_object(create_gimmickspeedbooster_3638(10959, 135), 3);
    add_object(create_fdlooplayer12_3636(9920, 184), 3);
    add_object(create_fdlooplayer12_3636(9920, 248), 3);
    add_object(create_fdlooplayer12_3636(9920, 312), 3);
    add_object(create_fdlooplayer02_3641(10176, 312), 3);
    add_object(create_objectpetal_302(3905, 425), 3);
    add_object(create_objectpetal_302(3921, 441), 3);
    add_object(create_objectpetal_302(3889, 441), 3);
    add_object(create_monitorkeystone_562(4736, 240), 3);
    add_object(create_enemygatlinggunright_3634(9768, 896), 3);
    add_object(create_enemygatlinggunleft_3635(9768, 864), 3);
    add_object(create_enemygatlinggun_3650(9792, 880), 3);
    add_object(create_enemygatlinggunbarrel_3651(9792, 880), 3);
    add_object(create_enemygatlinggun2_3652(9792, 880), 3);
    add_object(create_enemygatlinggunright_3634(9512, 168), 3);
    add_object(create_enemygatlinggunleft_3635(9512, 136), 3);
    add_object(create_enemygatlinggun_3650(9536, 152), 3);
    add_object(create_enemygatlinggunbarrel_3651(9536, 152), 3);
    add_object(create_enemygatlinggun2_3652(9536, 152), 3);
    add_object(create_enemygatlinggunright_3634(10216, 896), 3);
    add_object(create_enemygatlinggunleft_3635(10216, 864), 3);
    add_object(create_enemygatlinggun_3650(10240, 880), 3);
    add_object(create_enemygatlinggunbarrel_3651(10240, 880), 3);
    add_object(create_enemygatlinggun2_3652(10240, 880), 3);
    add_object(create_enemyseeker_2648(10207, 224), 3);
    add_object(create_enemyseeker_2648(9047, 816), 3);
    add_object(create_enemyseeker_2648(9095, 760), 3);
    add_object(create_monitor1up_410(9520, 472), 3);
    add_object(create_enemygatlinggunright_3634(13544, 112), 3);
    add_object(create_enemygatlinggunleft_3635(13544, 80), 3);
    add_object(create_enemygatlinggun_3650(13568, 96), 3);
    add_object(create_enemygatlinggunbarrel_3651(13568, 96), 3);
    add_object(create_enemygatlinggun2_3652(13568, 96), 3);
    add_object(create_monitorwatershield_327(9152, 880), 3);
    add_object(create_yellowspringup_434(11072, 712), 3);
    add_object(create_yellowspringup_434(11104, 712), 3);
    add_object(create_yellowspringup_434(11136, 712), 3);
    add_object(create_fdlooplayer02_3641(9560, 1848), 3);
    add_object(create_fdlooplayer12_3636(9648, 1848), 3);
    add_object(create_layerchangeswitch2_1239(11640, 160), 3);
    add_object(create_redspringupright_438(12192, 592), 3);
    add_object(create_redspringupright_438(12224, 592), 3);
    add_object(create_objectcrystal_279(10629, 426), 3);
    add_object(create_objectcrystal_279(10589, 426), 3);
    add_object(create_objectcrystal_279(10549, 426), 3);
    add_object(create_objectcrystal_279(10509, 426), 3);
    add_object(create_objectcrystal_279(10469, 426), 3);
    add_object(create_objectcrystal_279(10429, 426), 3);
    add_object(create_objectcrystal_279(10669, 426), 3);
    add_object(create_objectcrystal_279(10013, 322), 3);
    add_object(create_objectcrystal_279(10013, 362), 3);
    add_object(create_objectcrystal_279(10053, 322), 3);
    add_object(create_objectcrystal_279(10053, 362), 3);
    add_object(create_objectcrystal_279(10829, 170), 3);
    add_object(create_objectcrystal_279(10797, 170), 3);
    add_object(create_objectcrystal_279(10829, 138), 3);
    add_object(create_objectcrystal_279(10797, 138), 3);
    add_object(create_objectcrystal_279(11013, 474), 3);
    add_object(create_objectcrystal_279(10989, 450), 3);
    add_object(create_objectcrystal_279(11013, 426), 3);
    add_object(create_objectcrystal_279(10989, 402), 3);
    add_object(create_objectcrystal_279(10629, 218), 3);
    add_object(create_objectcrystal_279(10589, 218), 3);
    add_object(create_objectcrystal_279(10549, 218), 3);
    add_object(create_objectcrystal_279(10509, 218), 3);
    add_object(create_objectcrystal_279(10469, 218), 3);
    add_object(create_objectcrystal_279(10429, 218), 3);
    add_object(create_objectcrystal_279(10669, 218), 3);
    add_object(create_objectcrystal_279(5509, 250), 3);
    add_object(create_objectcrystal_279(5509, 274), 3);
    add_object(create_objectcrystal_279(5509, 298), 3);
    add_object(create_objectcrystal_279(5501, 282), 3);
    add_object(create_objectcrystal_279(5493, 266), 3);
    add_object(create_objectcrystal_279(5525, 266), 3);
    add_object(create_objectcrystal_279(5517, 282), 3);
    add_object(create_objectcrystal_279(5509, 226), 3);
    add_object(create_enemypounder_3419(12640, 440), 3);
    add_object(create_enemylimiter_350(12581, 450), 3);
    add_object(create_enemylimiter_350(12717, 450), 3);
    add_object(create_enemypounder_3419(12896, 312), 3);
    add_object(create_enemylimiter_350(12837, 322), 3);
    add_object(create_enemylimiter_350(12973, 322), 3);
    add_object(create_enemydnacannonbase_2262(13278, 235), 3);
    add_object(create_enemydnacannon_2264(13279, 236), 3);
    add_object(create_effectwarning_1513(13332, 248), 3);
    add_object(create_enemydnacannonbase_2262(13150, 299), 3);
    add_object(create_enemydnacannon_2264(13151, 300), 3);
    add_object(create_effectwarning_1513(13204, 312), 3);
    add_object(create_enemydnacannonbase_2262(13022, 363), 3);
    add_object(create_enemydnacannon_2264(13023, 364), 3);
    add_object(create_effectwarning_1513(13076, 376), 3);
    add_object(create_gimmickspeedbooster_3638(13775, 223), 3);
    add_object(create_gimmickspeedbooster_3638(13839, 223), 3);
    add_object(create_enemygatlinggunright_3634(13352, 320), 3);
    add_object(create_enemygatlinggunleft_3635(13352, 288), 3);
    add_object(create_enemygatlinggun_3650(13376, 304), 3);
    add_object(create_enemygatlinggunbarrel_3651(13376, 304), 3);
    add_object(create_enemygatlinggun2_3652(13376, 304), 3);
    add_object(create_enemygatlinggunright_3634(14296, 768), 3);
    add_object(create_enemygatlinggunleft_3635(14296, 736), 3);
    add_object(create_enemygatlinggun_3650(14320, 752), 3);
    add_object(create_enemygatlinggunbarrel_3651(14320, 752), 3);
    add_object(create_enemygatlinggun2_3652(14320, 752), 3);
    add_object(create_gimmickspeedbooster_3638(12239, 127), 3);
    add_object(create_gimmickspeedbooster_3638(12303, 127), 3);
    add_object(create_gimmickspeedboosterfront_3653(12367, 127), 3);
    add_object(create_gimmickspeedboosterfront_3653(12207, 127), 3);
    add_object(create_objectcrystal_279(12085, 186), 3);
    add_object(create_objectcrystal_279(12101, 210), 3);
    add_object(create_objectcrystal_279(12085, 234), 3);
    add_object(create_objectcrystal_279(12101, 258), 3);
    add_object(create_objectcrystal_279(12085, 282), 3);
    add_object(create_objectcrystal_279(12085, 138), 3);
    add_object(create_objectcrystal_279(12101, 162), 3);
    add_object(create_objectfuel_528(340, 300), 3);
    add_object(create_objectfuel_528(1836, 236), 3);
    add_object(create_objectfuel_528(4076, 1156), 3);
    add_object(create_objectfuel_528(5244, 1140), 3);
    add_object(create_objectfuel_528(5980, 452), 3);
    add_object(create_monitor1up_410(2128, 1080), 3);
    add_object(create_objectcrystal_279(10189, 394), 3);
    add_object(create_objectcrystal_279(10189, 426), 3);
    add_object(create_objectcrystal_279(10141, 394), 3);
    add_object(create_objectcrystal_279(10141, 426), 3);
    add_object(create_objectcrystal_279(10261, 394), 3);
    add_object(create_objectcrystal_279(10261, 426), 3);
    add_object(create_objectcrystal_279(10213, 394), 3);
    add_object(create_objectcrystal_279(10213, 426), 3);
    add_object(create_objectcrystal_279(10237, 394), 3);
    add_object(create_objectcrystal_279(10237, 426), 3);
    add_object(create_objectcrystal_279(10165, 394), 3);
    add_object(create_objectcrystal_279(10165, 426), 3);
    add_object(create_objectpetal_302(11985, 569), 3);
    add_object(create_objectpetal_302(11953, 569), 3);
    add_object(create_labdoorback_3500(-400, 1656), 3);
    add_object(create_labdoorfront_3507(-400, 1656), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_fdcorefloor3_3611(3328, 496), 4);
    add_background_object(create_fdcorefloor3_3611(3392, 496), 4);
    add_background_object(create_fdcorefloor3_3611(3456, 496), 4);
    add_background_object(create_fdcorefloor3_3611(3520, 496), 4);
    add_background_object(create_fdcorefloor1_3615(3456, 464), 4);
    add_background_object(create_fdcorefloor1_3615(3520, 464), 4);
    add_background_object(create_fdcorefloor1_3615(3392, 464), 4);
    add_background_object(create_fdcorefloor1_3615(3328, 464), 4);
    add_background_object(create_fdcorefloor9_3627(3328, 464), 4);
    add_background_object(create_fdfloor1_3570(224, 1952), 4);
    add_background_object(create_fdcorefloor1_3615(11968, 464), 4);
    add_background_object(create_fdcorefloor1_3615(11904, 464), 4);
    add_background_object(create_fdcorefloor1_3615(11840, 464), 4);
    add_background_object(create_fdcorefloor1_3615(11776, 464), 4);
    add_background_object(create_fdcorefloor9_3627(12000, 464), 4);
    add_background_object(create_fdcorefloor3_3611(11968, 496), 4);
    add_background_object(create_fdcorefloor3_3611(11904, 496), 4);
    add_background_object(create_fdcorefloor3_3611(11840, 496), 4);
    add_background_object(create_fdcorefloor3_3611(11776, 496), 4);
    add_background_object(create_fdcorefloor3_3611(11712, 496), 4);
    add_background_object(create_fdcorefloor1_3615(11712, 464), 4);
    add_background_object(create_fdcorefloor9_3627(11712, 496), 4);
    add_background_object(create_fdcorefloor1_3615(3584, 464), 4);
    add_background_object(create_fdcorefloor3_3611(3584, 496), 4);
    add_background_object(create_fdcorefloor9_3627(3616, 496), 4);
    add_background_object(create_fdcoreloop3_3629(6112, 1296), 4);
    add_background_object(create_fdcorefloor3_3611(6112, 1392), 4);
    add_background_object(create_fdcorefloor8_3621(4320, 336), 4);
    add_background_object(create_fdcorefloor7_3622(4320, 368), 4);
    add_background_object(create_fdcorefloor5_3619(4352, 336), 4);
    add_background_object(create_fdcorefloor6_3620(4352, 368), 4);
    add_object(create_gimmickspeedboosterfront_3653(1903, 391), 4);
    add_object(create_gimmickspeedboosterfront_3653(2063, 391), 4);
    add_object(create_gimmickspeedboosterfront_3653(1455, 199), 4);
    add_object(create_gimmickspeedboosterfront_3653(1615, 199), 4);
    add_object(create_fdlooplayer02_3641(3360, 592), 4);
    add_object(create_fdlooplayer02_3641(3424, 592), 4);
    add_object(create_gimmickspeedboosterfront_3653(3119, 543), 4);
    add_object(create_gimmickspeedboosterfront_3653(3279, 543), 4);
    add_object(create_gimmickspeedboosterfront_3653(3695, 415), 4);
    add_object(create_gimmickspeedboosterfront_3653(3855, 415), 4);
    add_object(create_lockedlabdoorfront_3544(3784, 1040), 4);
    add_object(create_lockeddoorseal_2672(3788, 1056), 4);
    add_object(create_gimmickspeedboosterfront_3653(3119, 735), 4);
    add_object(create_gimmickspeedboosterfront_3653(3279, 735), 4);
    add_object(create_fdlooplayer02_3641(3488, 272), 4);
    add_object(create_fdlooplayer02_3641(3552, 272), 4);
    add_object(create_fdlooplayer01_3643(3360, 336), 4);
    add_object(create_fdlooplayer03_3639(3488, 528), 4);
    add_object(create_gimmickspeedboosterfront_3653(1039, 263), 4);
    add_object(create_gimmickspeedboosterfront_3653(1199, 263), 4);
    add_object(create_gimmickspeedboosterfront_3653(4847, 1119), 4);
    add_object(create_gimmickspeedboosterfront_3653(5455, 1103), 4);
    add_object(create_gimmickspeedboosterfront_3653(4687, 1119), 4);
    add_object(create_gimmickspeedboosterfront_3653(5295, 1103), 4);
    add_object(create_fdlooplayer02_3641(11744, 272), 4);
    add_object(create_fdlooplayer02_3641(11808, 272), 4);
    add_object(create_fdlooplayer02_3641(11872, 592), 4);
    add_object(create_fdlooplayer02_3641(11936, 592), 4);
    add_object(create_fdlooplayer04_3647(11872, 336), 4);
    add_object(create_fdlooplayer05_3648(11744, 528), 4);
    add_object(create_objecttransporternode90_3428(6176, 1360), 4);
    add_object(create_gimmickspeedboosterfront_3653(6383, 991), 4);
    add_object(create_gimmickspeedboosterfront_3653(6223, 991), 4);
    add_object(create_fdlooplayer14_3646(4384, 80), 4);
    add_object(create_fdlooplayer12_3636(4320, 80), 4);
    add_object(create_fdlooplayer12_3636(4320, 144), 4);
    add_object(create_fdlooplayer12_3636(4320, 208), 4);
    add_object(create_fdlooplayer12_3636(4320, 272), 4);
    add_object(create_gimmickspeedboosterfront_3653(9359, 799), 4);
    add_object(create_gimmickspeedboosterfront_3653(9199, 799), 4);
    add_object(create_gimmickspeedboosterfront_3653(10927, 391), 4);
    add_object(create_gimmickspeedboosterfront_3653(10927, 455), 4);
    add_object(create_gimmickspeedboosterfront_3653(10831, 391), 4);
    add_object(create_gimmickspeedboosterfront_3653(10831, 455), 4);
    add_object(create_gimmickspeedboosterfront_3653(11023, 135), 4);
    add_object(create_gimmickspeedboosterfront_3653(10863, 135), 4);
    add_object(create_gimmickspeedboosterfront_3653(13903, 223), 4);
    add_object(create_gimmickspeedboosterfront_3653(13743, 223), 4);
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
    add_background_object(create_fdcoreloop3_3629(3424, 592), 5);
    add_background_object(create_fdcoreloop3_3629(3424, 272), 5);
    add_background_object(create_fdcoreloop3_3629(11808, 592), 5);
    add_background_object(create_fdcoreloop3_3629(11808, 272), 5);
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
    add_object(create_hazardspikesup_2426(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(1872, -305), 5);
    add_object(create_cameralimitbossleft_421(1704, -424), 5);
    add_object(create_cameralimitbossright_422(2031, -424), 5);
    add_object(create_cameralimitbosstop_423(1872, -544), 5);
    add_object(create_cameratriggerboss_424(1728, -432), 5);
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
    add_object(create_flashbackbg_3654(0, 0), 5);
    add_object(create_objecttransporternode90_3428(3488, 656), 5);
    add_object(create_objecttransporternode0_3415(3488, 336), 5);
    add_object(create_objecttransporternode90_3428(11872, 656), 5);
    add_object(create_objecttransporternode90_3428(11872, 336), 5);
    add_object(create_alarmlight_3476(0, 0), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
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
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-152, 70), 6);
    add_object(create_dialogarrow_568(136, 40), 6);
    add_object(create_dialogtext_569(-144, 8), 6);
    add_object(create_guikeycards_2673(38, 231), 6);
    add_object(create_guikeycardicon_2674(16, 228), 6);
    add_object(create_subtitletext_3433(-160, 176), 6);
    add_object(create_subtitledata_3655(-168, 512), 6);
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
    loop_gd_running = false;
    loop_gd_index = 0;
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
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
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
    loop_bbls_running = false;
    loop_bbls_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_69, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_69, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_69, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_69, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_69, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_69, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_69, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_69, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_69, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_69, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_69, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_69, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_69, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_69, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_69, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_69, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_69, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_69, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_69, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_69, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_69, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_69, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_69, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_69, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_69, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_69, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_69, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_69, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_69, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_69, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_69, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_69, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_69, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_69, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_69, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_69, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_69, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_69, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_69, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_69, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_69, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_69, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_69, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_69, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_69, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_69, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_69, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_69, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_69, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_69, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_69, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_69, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_69, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    not_always_1745_47 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1550_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_1858_69 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_97_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1434_69 = loop_count;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_40_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1835_69 = loop_count;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_101_0 = loop_count;
    not_always_1783_69 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1832_69 = loop_count;
    not_always_171_8 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_2137_46 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_57_13 = loop_count;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_172_8 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    once_condition_1796_69 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1761_69 = loop_count;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    not_always_1836_69 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_2136_46 = loop_count;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_1799_69 = false;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_voice_acting_1 = false;
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
    group_main_engine_level_specific_methods_cutscenes_intro_cutscene_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    once_condition_1814_69 = false;
    not_always_1762_69 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_1744_47 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_torque_s_explanation_dialog_system_dialog_voices_blips_1 = false;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1695_16 = loop_count;
    not_always_1696_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_1839_69 = loop_count;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_cacteon_floor_70()
{
    event_func_8588();
    event_func_4501();
}
void Frames::loop_cacteon_70()
{
    event_func_8593();
    event_func_8594();
    event_func_4505();
    event_func_4506();
}
void Frames::event_func_14916()
{
    // event 2488_70
    {
        if (!(group_main_engine_1)) goto event_2488_70_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage10c_ogg_236, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2488_70_end: ;
}
void Frames::loop_play_music_5_70()
{
    event_func_14916();
}
void Frames::event_func_14917()
{
    // event 1966_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1966_70_end;
        if (!((global_values->get(26)) == (0))) goto event_1966_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1966_70_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1966_70_end: ;
}
void Frames::event_func_14918()
{
    // event 1967_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1967_70_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1967_70_end: ;
}
