#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_6004()
{
    // event 1687_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1687_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1687_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, 6);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1687_27_end: ;
}
void Frames::event_func_6005()
{
    // event 1688_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1688_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1688_27_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1688_27_end;
        FrameObject * single_instance_1688_27_0; single_instance_1688_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossganseki_1490_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1688_27_0 == NULL)
                    single_instance_1688_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1688_27_0))->set_x(((Active*)single_instance_1688_27_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1688_27_0))->set_y(((Active*)single_instance_1688_27_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1688_27_1_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_1688_27_1_end: ;
    }
    event_1688_27_end: ;
}
void Frames::event_func_6006()
{
    // event 1689_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1689_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (15))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1689_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(16, 1);
        }
    }
    event_1689_27_end: ;
}
void Frames::event_func_6007()
{
    // event 1690_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1690_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) > (16))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1690_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(17, 1);
        }
    }
    event_1690_27_end: ;
}
void Frames::event_func_6008()
{
    // event 1691_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1691_27_end;
        minibossgansekicap_1491_instances.clear_selection();
        for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgansekicap_1491_instances.has_selection()) goto event_1691_27_end;
        FrameObject * single_instance_1691_27_0; single_instance_1691_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgansekicap_1491_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossgansekidebris_1430(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1691_27_0 == NULL)
                    single_instance_1691_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1691_27_0))->force_frame(0);
        ((Active*)((Active*)single_instance_1691_27_0))->stop_animation();
        ((Active*)((Active*)single_instance_1691_27_0))->get_movement()->set_speed(((Active*)single_instance_1691_27_0)->get_movement()->get_speed()-10+randrange(15));
        ((Active*)((Active*)single_instance_1691_27_0))->set_direction(12);
    }
    event_1691_27_end: ;
}
void Frames::event_func_6009()
{
    // event 1692_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1692_27_end;
        minibossgansekicap_1491_instances.clear_selection();
        for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgansekicap_1491_instances.has_selection()) goto event_1692_27_end;
        for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1692_27_0; single_instance_1692_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgansekicap_1491_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossgansekidebris_1430(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1692_27_0 == NULL)
                    single_instance_1692_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1692_27_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1692_27_0))->stop_animation();
        ((Active*)((Active*)single_instance_1692_27_0))->get_movement()->set_speed(((Active*)single_instance_1692_27_0)->get_movement()->get_speed()-10+randrange(15));
        ((Active*)((Active*)single_instance_1692_27_0))->set_direction(4);
    }
    event_1692_27_end: ;
}
void Frames::event_func_6010()
{
    // event 1693_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1693_27_end;
        minibossgansekispike1_1492_instances.clear_selection();
        for (ObjectIterator it(minibossgansekispike1_1492_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgansekispike1_1492_instances.has_selection()) goto event_1693_27_end;
        for (ObjectIterator it(minibossgansekispike1_1492_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1693_27_0; single_instance_1693_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgansekispike1_1492_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossgansekidebris_1430(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1693_27_0 == NULL)
                    single_instance_1693_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1693_27_0))->force_frame(2);
        ((Active*)((Active*)single_instance_1693_27_0))->stop_animation();
        ((Active*)((Active*)single_instance_1693_27_0))->get_movement()->set_speed(((Active*)single_instance_1693_27_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1693_27_end: ;
}
void Frames::event_func_6011()
{
    // event 1694_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1694_27_end;
        minibossgansekispike2_1493_instances.clear_selection();
        for (ObjectIterator it(minibossgansekispike2_1493_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgansekispike2_1493_instances.has_selection()) goto event_1694_27_end;
        for (ObjectIterator it(minibossgansekispike2_1493_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1694_27_0; single_instance_1694_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgansekispike2_1493_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossgansekidebris_1430(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1694_27_0 == NULL)
                    single_instance_1694_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1694_27_0))->force_frame(3);
        ((Active*)((Active*)single_instance_1694_27_0))->stop_animation();
        ((Active*)((Active*)single_instance_1694_27_0))->get_movement()->set_speed(((Active*)single_instance_1694_27_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1694_27_end: ;
}
void Frames::event_func_6012()
{
    // event 1695_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1695_27_end;
        minibossgansekispike3_1494_instances.clear_selection();
        for (ObjectIterator it(minibossgansekispike3_1494_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgansekispike3_1494_instances.has_selection()) goto event_1695_27_end;
        for (ObjectIterator it(minibossgansekispike3_1494_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1695_27_0; single_instance_1695_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgansekispike3_1494_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossgansekidebris_1430(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1695_27_0 == NULL)
                    single_instance_1695_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1695_27_0))->force_frame(3);
        ((Active*)((Active*)single_instance_1695_27_0))->stop_animation();
        ((Active*)((Active*)single_instance_1695_27_0))->get_movement()->set_speed(((Active*)single_instance_1695_27_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1695_27_end: ;
}
void Frames::event_func_6013()
{
    // event 1696_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1696_27_end;
        minibossgansekispike4_1495_instances.clear_selection();
        for (ObjectIterator it(minibossgansekispike4_1495_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibossgansekispike4_1495_instances.has_selection()) goto event_1696_27_end;
        for (ObjectIterator it(minibossgansekispike4_1495_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1696_27_0; single_instance_1696_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossgansekispike4_1495_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossgansekidebris_1430(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1696_27_0 == NULL)
                    single_instance_1696_27_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1696_27_0))->force_frame(2);
        ((Active*)((Active*)single_instance_1696_27_0))->stop_animation();
        ((Active*)((Active*)single_instance_1696_27_0))->get_movement()->set_speed(((Active*)single_instance_1696_27_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1696_27_end: ;
}
void Frames::event_func_6014()
{
    // event 1697_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1697_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(17)) >= (2))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1697_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        FrameObject * single_instance_1697_27_0; single_instance_1697_27_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossganseki_1490_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1697_27_0 == NULL)
                    single_instance_1697_27_0 = new_obj;
            }
        }
        FrameObject * single_instance_1697_27_1; single_instance_1697_27_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossganseki_1490_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1697_27_1 == NULL)
                    single_instance_1697_27_1 = new_obj;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1697_27_end: ;
}
void Frames::event_func_6015()
{
    // event 1698_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1698_27_end;
        minibossgansekidebris_1430_instances.clear_selection();
        for (ObjectIterator it(minibossgansekidebris_1430_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!minibossgansekidebris_1430_instances.has_selection()) goto event_1698_27_end;
        for (ObjectIterator it(minibossgansekidebris_1430_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1698_27_end: ;
}
void Frames::event_func_6016()
{
    // event 1699_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1699_27_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5920))) goto event_1699_27_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (1630))) goto event_1699_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (4000))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1699_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 5700);
            ((Active*)*it)->alterables->values.set(7, 2012);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(9, 1);
            ((Active*)*it)->alterables->values.set(15, 0);
            ((Active*)*it)->alterables->values.set(14, 1);
            ((Active*)*it)->alterables->values.set(4, 10);
        }
    }
    event_1699_27_end: ;
}
void Frames::event_func_6017()
{
    // event 1700_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1700_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (4000))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (2840))) { it.deselect(); continue; }
        }
        if (!minibossganseki_1490_instances.has_selection()) goto event_1700_27_end;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, get_min(((Active*)*it)->alterables->values.get(15), 2));
        }
    }
    event_1700_27_end: ;
}
void Frames::event_func_6018()
{
    // event 1701_27
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1)) goto event_1701_27_end;
        minibossgansekispike1_1492_instances.clear_selection();
        for (ObjectIterator it(minibossgansekispike1_1492_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_action_y()+((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(12));
            ((Active*)*it)->set_x(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(8))*32);
        }
        minibossgansekispike2_1493_instances.clear_selection();
        for (ObjectIterator it(minibossgansekispike2_1493_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_action_y()+((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(12));
            ((Active*)*it)->set_x(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(8)+90)*32);
        }
        minibossgansekispike3_1494_instances.clear_selection();
        for (ObjectIterator it(minibossgansekispike3_1494_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_action_y()+((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(12));
            ((Active*)*it)->set_x(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(8)+180)*32);
        }
        minibossgansekispike4_1495_instances.clear_selection();
        for (ObjectIterator it(minibossgansekispike4_1495_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_action_y()+((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(12));
            ((Active*)*it)->set_x(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_x()+sin_deg(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(8)+270)*32);
        }
        for (ObjectIterator it(minibossgansekispike1_1492_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(8))*-45, 0);
        }
        for (ObjectIterator it(minibossgansekispike2_1493_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(8)+90)*-45, 0);
        }
        for (ObjectIterator it(minibossgansekispike3_1494_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(8)+180)*-45, 0);
        }
        for (ObjectIterator it(minibossgansekispike4_1495_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(8)+270)*-45, 0);
        }
        {
            minibossganseki_1490_instances.clear_selection();
            ObjectIterator other_it(minibossganseki_1490_instances);
            minibossgansekicap_1491_instances.clear_selection();
            for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1701_27_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1701_27_0_end: ;
        {
            ObjectIterator other_it(minibossganseki_1490_instances);
            for (ObjectIterator it(minibossgansekispike2_1493_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1701_27_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1701_27_1_end: ;
        {
            ObjectIterator other_it(minibossganseki_1490_instances);
            for (ObjectIterator it(minibossgansekispike4_1495_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1701_27_2_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1701_27_2_end: ;
        {
            ObjectIterator other_it(minibossganseki_1490_instances);
            for (ObjectIterator it(minibossgansekispike3_1494_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1701_27_3_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1701_27_3_end: ;
        {
            ObjectIterator other_it(minibossganseki_1490_instances);
            for (ObjectIterator it(minibossgansekispike1_1492_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1701_27_4_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1701_27_4_end: ;
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+((Active*)*it)->alterables->values.get(11))%math_helper%90);
        }
        for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->get_y()+((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(12));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(14));
        }
        for (ObjectIterator it(minibossgansekispike2_1493_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->flags.get(6));
        }
        for (ObjectIterator it(minibossgansekispike3_1494_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->flags.get(6));
        }
        for (ObjectIterator it(minibossgansekicap_1491_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(17));
        }
        for (ObjectIterator it(minibossgansekispike1_1492_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(17));
        }
        for (ObjectIterator it(minibossgansekispike2_1493_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(17));
        }
        for (ObjectIterator it(minibossgansekispike3_1494_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(17));
        }
        for (ObjectIterator it(minibossgansekispike4_1495_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)get_single(minibossganseki_1490_instances, it.current_index, default_active_instance))->alterables->values.get(17));
        }
    }
    event_1701_27_end: ;
}
void Frames::event_func_6019()
{
    // event 1888_27
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1888_27_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1888_27_end;
        if (!((global_values->get(4)) != (0))) goto event_1888_27_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        manager.ignore_controls = false;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Counter*)get_instance(guilives_454_instances))->set_visible(true);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12), 2));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1 = true;
        }
    }
    event_1888_27_end: ;
}
void Frames::event_func_6020()
{
    // event 1931_27
    {
        if (!(group_pause_1)) goto event_1931_27_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1931_27_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1931_27_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1931_27_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1931_27_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
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
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
            group_main_engine_1 = false;
    
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(gimmickpickaxebase_1401_instances))->stop_animation();
        ((Active*)get_instance(gimmickpickaxebase2_1403_instances))->stop_animation();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        minibossgansekidebris_1430_instances.clear_selection();
        for (ObjectIterator it(minibossgansekidebris_1430_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
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
        enemysentinelspike_1429_instances.clear_selection();
        for (ObjectIterator it(enemysentinelspike_1429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(playerdig_448_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(effectwarning_1065_instances))->stop_animation();
    }
    event_1931_27_end: ;
}
void Frames::event_func_6021()
{
    // event 1932_27
    bool or_result_1932_27 = false;
    bool or_temp_result_1932_27_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1932_27_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1932_27_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1932_27_0_end;
        or_result_1932_27 = true;
        or_temp_result_1932_27_0 = true;
    }
    or_event_1932_27_0_end: ;
    // event 1932_27
    bool or_temp_result_1932_27_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1932_27_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1932_27_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1932_27_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1932_27_1_end;
        or_result_1932_27 = true;
        or_temp_result_1932_27_1 = true;
        or_event_1932_27_1_end: ;
        if (!or_result_1932_27) goto or_final_or_event_1932_27_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
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
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickpickaxe_1402_instances.clear_selection();
        for (ObjectIterator it(gimmickpickaxe_1402_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(gimmickpickaxebase_1401_instances))->start_animation();
        ((Active*)get_instance(gimmickpickaxebase2_1403_instances))->start_animation();
        for (ObjectIterator it(enemyiris_1183_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        minibossgansekidebris_1430_instances.clear_selection();
        for (ObjectIterator it(minibossgansekidebris_1430_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
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
        enemysentinelspike_1429_instances.clear_selection();
        for (ObjectIterator it(enemysentinelspike_1429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(playerdig_448_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        enemyspark_1101_instances.clear_selection();
        for (ObjectIterator it(enemyspark_1101_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyfiresprite_1095_instances.clear_selection();
        for (ObjectIterator it(enemyfiresprite_1095_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(effectwarning_1065_instances))->start_animation();
    }
    or_final_or_event_1932_27_1_end: ;
}
void Frames::handle_frame_28_events()
{
    test_collisions_27();
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
    event_func_5307();
    event_func_3904();
    event_func_5998();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_5915();
    event_func_5399();
    event_func_5916();
    event_func_5401();
    event_func_5917();
    event_func_5918();
    event_func_5919();
    event_func_5920();
    event_func_5921();
    event_func_5922();
    event_func_5923();
    event_func_5924();
    event_func_5925();
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
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
    event_func_1369();
    event_func_1370();
    event_func_1371();
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
    event_func_1406();
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
    event_func_1423();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_3721();
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
    event_func_1449();
    event_func_1450();
    event_func_1451();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
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
    event_func_1541();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_1548();
    event_func_1549();
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
    event_func_1570();
    event_func_1571();
    event_func_1572();
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
    event_func_1604();
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
    event_func_1636();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
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
    event_func_1676();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
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
    event_func_1693();
    event_func_1694();
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
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_1706();
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
    event_func_1732();
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
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_3728();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_5926();
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
    event_func_2783();
    event_func_1776();
    event_func_5927();
    event_func_1778();
    event_func_1779();
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
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
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
    event_func_1866();
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
    event_func_5928();
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
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_4529();
    event_func_4530();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_4531();
    event_func_1987();
    event_func_4532();
    event_func_1988();
    event_func_1989();
    event_func_4533();
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
    event_func_2044();
    event_func_2045();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
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
    event_func_2141();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_1189();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
    event_func_2152();
    event_func_2153();
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
    event_func_2166();
    event_func_2168();
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
    event_func_2176();
    event_func_2177();
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
    event_func_2191();
    event_func_2192();
    event_func_2193();
    event_func_2194();
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
    event_func_2214();
    event_func_2215();
    event_func_2216();
    event_func_2217();
    event_func_2218();
    event_func_2219();
    event_func_2220();
    event_func_2221();
    event_func_2222();
    event_func_2223();
    event_func_2224();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
    event_func_2236();
    event_func_2237();
    event_func_2238();
    event_func_2239();
    event_func_2240();
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
    event_func_2245();
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
    event_func_2313();
    event_func_2314();
    event_func_2315();
    event_func_2316();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2924();
    event_func_2925();
    event_func_2926();
    event_func_2927();
    event_func_2928();
    event_func_2929();
    event_func_2930();
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
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
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
    event_func_4534();
    event_func_5605();
    event_func_2962();
    event_func_4536();
    event_func_5606();
    event_func_5607();
    event_func_5608();
    event_func_4540();
    event_func_4541();
    event_func_4914();
    event_func_5929();
    event_func_4748();
    event_func_5930();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_3734();
    event_func_2979();
    event_func_3735();
    event_func_3736();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_4561();
    event_func_4562();
    event_func_4563();
    event_func_4564();
    event_func_4565();
    event_func_4566();
    event_func_4759();
    event_func_5931();
    event_func_5422();
    event_func_5215();
    event_func_5932();
    event_func_5933();
    event_func_5206();
    event_func_5207();
    event_func_5934();
    event_func_5935();
    event_func_5210();
    event_func_5936();
    event_func_5937();
    event_func_5212();
    event_func_5213();
    event_func_5615();
    event_func_5616();
    event_func_5617();
    event_func_5618();
    event_func_5619();
    event_func_5620();
    event_func_5621();
    event_func_5622();
    event_func_5623();
    event_func_5624();
    event_func_5625();
    event_func_5626();
    event_func_5627();
    event_func_5628();
    event_func_5629();
    event_func_5630();
    event_func_5631();
    event_func_5632();
    event_func_5633();
    event_func_5634();
    event_func_5635();
    event_func_5938();
    event_func_5939();
    event_func_5940();
    event_func_5941();
    event_func_5942();
    event_func_5943();
    event_func_5944();
    event_func_5945();
    event_func_5946();
    event_func_5947();
    event_func_5948();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_5308();
    event_func_5309();
    event_func_5310();
    event_func_5311();
    event_func_5312();
    event_func_5313();
    event_func_5314();
    event_func_5315();
    event_func_5316();
    event_func_5317();
    event_func_5318();
    event_func_5319();
    event_func_5320();
    event_func_5321();
    event_func_5322();
    event_func_5271();
    event_func_5272();
    event_func_5273();
    event_func_5274();
    event_func_5275();
    event_func_5276();
    event_func_5277();
    event_func_5278();
    event_func_5279();
    event_func_5280();
    event_func_5281();
    event_func_5282();
    event_func_5283();
    event_func_5284();
    event_func_5285();
    event_func_5286();
    event_func_5287();
    event_func_5288();
    event_func_5289();
    event_func_5290();
    event_func_5291();
    event_func_5292();
    event_func_5293();
    event_func_5294();
    event_func_5295();
    event_func_5296();
    event_func_5297();
    event_func_5298();
    event_func_5299();
    event_func_5300();
    event_func_5301();
    event_func_5302();
    event_func_5303();
    event_func_5304();
    event_func_5305();
    event_func_5306();
    event_func_5323();
    event_func_5324();
    event_func_5325();
    event_func_5326();
    event_func_5327();
    event_func_5328();
    event_func_5329();
    event_func_5688();
    event_func_5331();
    event_func_5332();
    event_func_5333();
    event_func_5334();
    event_func_5335();
    event_func_5336();
    event_func_5337();
    event_func_5338();
    event_func_5339();
    event_func_5340();
    event_func_3902();
    event_func_3903();
    event_func_5341();
    event_func_5342();
    event_func_5343();
    event_func_5344();
    event_func_5345();
    event_func_5346();
    event_func_5347();
    event_func_5348();
    event_func_5349();
    event_func_5949();
    event_func_5950();
    event_func_5951();
    event_func_5952();
    event_func_5953();
    event_func_5954();
    event_func_5955();
    event_func_5956();
    event_func_5957();
    event_func_5958();
    event_func_5959();
    event_func_5960();
    event_func_5961();
    event_func_5962();
    event_func_5963();
    event_func_5964();
    event_func_5689();
    event_func_5690();
    event_func_5691();
    event_func_5692();
    event_func_5693();
    event_func_5694();
    event_func_5695();
    event_func_5696();
    event_func_5697();
    event_func_5698();
    event_func_5699();
    event_func_5700();
    event_func_5701();
    event_func_5702();
    event_func_5703();
    event_func_5965();
    event_func_5705();
    event_func_5966();
    event_func_5967();
    event_func_5968();
    event_func_5969();
    event_func_5970();
    event_func_3867();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_5971();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1) goto group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1_end;
    event_func_5972();
    event_func_5973();
    event_func_5974();
    event_func_5975();
    event_func_5976();
    event_func_5977();
    event_func_5978();
    event_func_5979();
    event_func_5980();
    event_func_5981();
    event_func_5982();
    event_func_5983();
    event_func_5984();
    event_func_5985();
    event_func_5986();
    event_func_5987();
    event_func_5988();
    event_func_5989();
    event_func_5990();
    event_func_5991();
    event_func_5992();
    event_func_5993();
    event_func_5994();
    event_func_5995();
    event_func_5996();
    event_func_5997();
    event_func_5999();
    event_func_6000();
    event_func_6001();
    event_func_6002();
    event_func_6003();
    event_func_6004();
    event_func_6005();
    event_func_6006();
    event_func_6007();
    event_func_6008();
    event_func_6009();
    event_func_6010();
    event_func_6011();
    event_func_6012();
    event_func_6013();
    event_func_6014();
    event_func_6015();
    event_func_6016();
    event_func_6017();
    event_func_6018();
    group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1_end: ;
    event_func_5505();
    event_func_5506();
    event_func_5520();
    event_func_5866();
    event_func_5867();
    event_func_5868();
    event_func_5869();
    event_func_5870();
    event_func_5871();
    event_func_5872();
    event_func_5873();
    event_func_5874();
    event_func_5875();
    event_func_5876();
    event_func_5529();
    event_func_5530();
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
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_6019();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_3246();
    event_func_3247();
    event_func_4174();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_6020();
    event_func_6021();
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
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_28_pre_events()
{
}
void Frames::event_func_6022()
{
    // event 16_27
    {
        if (!(group_main_engine_1)) goto event_16_27_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 18);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 6);
    }
    event_16_27_end: ;
}
void Frames::event_func_6023()
{
    // event 33_27
    {
        if (!(group_main_engine_1)) goto event_33_27_end;
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(3, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(4, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.85);
    }
    event_33_27_end: ;
}
void Frames::event_func_6024()
{
    // event 1482_27
    {
        if (!(group_main_engine_1)) goto event_1482_27_end;
        redspringup_440_instances.clear_selection();
        spread_value(redspringup_440_instances, 8, 0);
        gimmickdrillplatform_1503_instances.clear_selection();
        for (ObjectIterator it(gimmickdrillplatform_1503_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1482_27_end: ;
}
void Frames::event_func_6025()
{
    // event 1593_27
    {
        if (!(group_main_engine_1)) goto event_1593_27_end;
        enemysentinel_1496_instances.clear_selection();
        for (ObjectIterator it(enemysentinel_1496_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
    }
    event_1593_27_end: ;
}
void Frames::event_func_6026()
{
    // event 1650_27
    {
        if (!(group_main_engine_1)) goto event_1650_27_end;
        minibossganseki_1490_instances.clear_selection();
        for (ObjectIterator it(minibossganseki_1490_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
        }
        spread_value(minibossganseki_1490_instances, 16, 0);
    }
    event_1650_27_end: ;
}
void Frames::event_func_6027()
{
    // event 1706_27
    {
        if (!(group_main_engine_1)) goto event_1706_27_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 4411, 658, 4458, 894);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 4411, 658, 4458, 894);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 4411, 658, 4458, 894);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 144);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 144);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 144);
        }
    }
    event_1706_27_end: ;
}
void Frames::event_func_6028()
{
    // event 1707_27
    {
        if (!(group_main_engine_1)) goto event_1707_27_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 4459, 658, 4506, 894);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 4459, 658, 4506, 894);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 4459, 658, 4506, 894);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 128);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 128);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 128);
        }
    }
    event_1707_27_end: ;
}
void Frames::event_func_6029()
{
    // event 1708_27
    {
        if (!(group_main_engine_1)) goto event_1708_27_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 4508, 660, 4555, 896);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 4508, 660, 4555, 896);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 4508, 660, 4555, 896);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 112);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 112);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 112);
        }
    }
    event_1708_27_end: ;
}
void Frames::event_func_6030()
{
    // event 1709_27
    {
        if (!(group_main_engine_1)) goto event_1709_27_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 4557, 659, 4604, 895);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 4557, 659, 4604, 895);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 4557, 659, 4604, 895);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 96);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 96);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 96);
        }
    }
    event_1709_27_end: ;
}
void Frames::event_func_6031()
{
    // event 1710_27
    {
        if (!(group_main_engine_1)) goto event_1710_27_end;
        gimmickmovingpillar3_1409_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar3_1409_instances, 4604, 661, 4651, 897);
        gimmickmovingpillar2_1408_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar2_1408_instances, 4604, 661, 4651, 897);
        gimmickmovingpillar1_1407_instances.clear_selection();
        pick_objects_in_zone(gimmickmovingpillar1_1407_instances, 4604, 661, 4651, 897);
        for (ObjectIterator it(gimmickmovingpillar1_1407_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 80);
        }
        for (ObjectIterator it(gimmickmovingpillar3_1409_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 80);
        }
        for (ObjectIterator it(gimmickmovingpillar2_1408_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 80);
        }
    }
    event_1710_27_end: ;
}
void Frames::event_func_6032()
{
    // event 1880_27
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1880_27_end;
        if (!((global_values->get(4)) <= (0))) goto event_1880_27_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
        if (!group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1) {
            group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1 = true;
        }
    }
    event_1880_27_end: ;
}
void Frames::event_func_6033()
{
    // event 1881_27
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1881_27_end;
        if (!((global_values->get(4)) >= (10))) goto event_1881_27_end;
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1881_27_end: ;
}
void Frames::on_frame_28_start_events()
{
    event_func_5881();
    event_func_4133();
    event_func_6022();
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
    event_func_6023();
    event_func_4179();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_3271();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_4700();
    event_func_5884();
    event_func_5885();
    event_func_6024();
    event_func_6025();
    event_func_5556();
    event_func_5557();
    event_func_2686();
    event_func_2687();
    event_func_6026();
    event_func_5891();
    event_func_6027();
    event_func_6028();
    event_func_6029();
    event_func_6030();
    event_func_6031();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_5899();
    event_func_4145();
    event_func_6032();
    event_func_6033();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_28_init()
{
    index = 27;
    width = 8776;
    height = 3400;
    virtual_width = 8776;
    virtual_height = 3400;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickrisingswing_1405_instances, &gimmickrollingplatformcave_1497_instances, &levelrmplatform_1506_instances, NULL};
    qualifier_8.set(12, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &pushableblock1_531_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickrisingswing_1405_instances, &gimmickrollingplatformcave_1497_instances, &levelrmplatform_1506_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyextractorhead_1177_instances, &enemyslug_1182_instances, &enemyiris_1183_instances, &enemyfirespitter_1385_instances, &minibossganseki_1490_instances, &enemysentinel_1496_instances, NULL};
    qualifier_20.set(6, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece9_763_instances, NULL};
    qualifier_0.set(3, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &pushableblock1_531_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickmovingpillar1_1407_instances, &gimmickmovingpillar2_1408_instances, &gimmickmovingpillar3_1409_instances, &levellayer117_1487_instances, &breakableruins_1184_instances, &levellayer115_348_instances, &levellayer002_1260_instances, &levellayer001_1237_instances, &levellayer02_1238_instances, &levellayer015_1261_instances, &gimmickdrillplatform_1503_instances, &levellayer1loop2_1504_instances, &levellayer03_1505_instances, &switchdoor_735_instances, NULL};
    qualifier_7.set(41, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(33, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, &gimmickhangingidleswitch_1257_instances, NULL};
    qualifier_23.set(2, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, &pushableblock1_531_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &levellayer002_1260_instances, &levellayer001_1237_instances, &levellayer02_1238_instances, &levellayer015_1261_instances, &levellayer03_1505_instances, NULL};
    qualifier_10.set(8, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &levellayer117_1487_instances, &levellayer115_348_instances, &levellayer1loop2_1504_instances, NULL};
    qualifier_11.set(6, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &gimmickrisingswing_1405_instances, &gimmickrollingplatformcave_1497_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece6_1425(0, 0), 0);
    add_background_object(create_levelparallaxpiece7_1426(0, -184), 0);
    add_background_object(create_levelparallaxpiece9_1427(0, -184), 0);
    add_background_object(create_cavecolumn2_1291(5992, 2064), 1);
    add_background_object(create_cavecolumn1_1285(6168, 2024), 1);
    add_background_object(create_cavecolumn1_1285(6312, 1984), 1);
    add_background_object(create_cavecolumn1_1285(7112, 1752), 1);
    add_background_object(create_cavecolumn1_1285(6808, 1800), 1);
    add_background_object(create_cavecolumn2_1291(6608, 1824), 1);
    add_background_object(create_cavecolumn2_1291(6424, 1904), 1);
    add_background_object(create_cavecolumn1_1285(5288, 872), 1);
    add_background_object(create_cavecolumn1_1285(5360, 1024), 1);
    add_background_object(create_cavecolumn3_1431(5536, 1400), 1);
    add_background_object(create_cavecolumn1_1285(5088, 800), 1);
    add_background_object(create_cavecolumn2_1291(4912, 984), 1);
    add_background_object(create_cavecolumn4_1432(4880, 1296), 1);
    add_background_object(create_cavecolumn1_1285(5040, 1120), 1);
    add_background_object(create_cavecolumn2_1291(5160, 1176), 1);
    add_background_object(create_cavecolumn4_1432(4984, 1392), 1);
    add_background_object(create_cavecolumn4_1432(5096, 1496), 1);
    add_background_object(create_cavecolumn4_1432(5216, 1600), 1);
    add_background_object(create_cavecolumn1_1285(5328, 1376), 1);
    add_background_object(create_shaft3_1286(3688, 952), 1);
    add_background_object(create_shaft3_1286(3576, 1128), 1);
    add_background_object(create_shaft3_1286(1136, 928), 1);
    add_background_object(create_shaft3_1286(1256, 880), 1);
    add_background_object(create_shaft3_1286(1256, 952), 1);
    add_background_object(create_shaft3_1286(1256, 1024), 1);
    add_background_object(create_shaft3_1286(1320, 824), 1);
    add_background_object(create_shaft3_1286(1320, 896), 1);
    add_background_object(create_cavecolumn1_1285(1584, 1056), 1);
    add_background_object(create_cavecolumn1_1285(1040, 264), 1);
    add_background_object(create_cavecolumn2_1291(544, 208), 1);
    add_background_object(create_cavecolumn2_1291(392, 488), 1);
    add_background_object(create_cavecolumn2_1291(848, 56), 1);
    add_background_object(create_cavecolumn1_1285(880, 360), 1);
    add_background_object(create_cavecolumn1_1285(-144, 136), 1);
    add_background_object(create_cavecolumn1_1285(720, 232), 1);
    add_background_object(create_cavecolumn1_1285(8, 528), 1);
    add_background_object(create_cavecolumn2_1291(240, 592), 1);
    add_background_object(create_cavecolumn2_1291(752, 496), 1);
    add_background_object(create_cavecolumn2_1291(568, 600), 1);
    add_background_object(create_cavecolumn2_1291(464, 680), 1);
    add_background_object(create_cavecolumn2_1291(256, 976), 1);
    add_background_object(create_cavecolumn2_1291(592, 1008), 1);
    add_background_object(create_cavecolumn3_1431(872, 912), 1);
    add_background_object(create_cavecolumn4_1432(128, 976), 1);
    add_background_object(create_cavecolumn2_1291(392, 1072), 1);
    add_background_object(create_cavecolumn3_1431(744, 1024), 1);
    add_background_object(create_cavecolumn3_1431(1000, 768), 1);
    add_background_object(create_cavecolumn3_1431(768, 888), 1);
    add_background_object(create_cavecolumn4_1432(-8, 944), 1);
    add_background_object(create_cavecolumn4_1432(240, 1360), 1);
    add_background_object(create_cavecolumn3_1431(712, 1360), 1);
    add_background_object(create_cavecolumn3_1431(600, 1440), 1);
    add_background_object(create_cavecolumn4_1432(408, 1408), 1);
    add_background_object(create_cavecolumn3_1431(1168, 672), 1);
    add_background_object(create_cavecolumn2_1291(1208, 920), 1);
    add_background_object(create_cavecolumn1_1285(1400, 976), 1);
    add_background_object(create_cavecolumn4_1432(1368, 1352), 1);
    add_background_object(create_cavecolumn3_1431(1528, 1384), 1);
    add_background_object(create_cavecolumn3_1431(1728, 1400), 1);
    add_background_object(create_shaft3_1286(1136, 1000), 1);
    add_background_object(create_shaft3_1286(1136, 1072), 1);
    add_background_object(create_shaft3_1286(1136, 1144), 1);
    add_background_object(create_shaft3_1286(1136, 1216), 1);
    add_background_object(create_shaft3_1286(1136, 1288), 1);
    add_background_object(create_cavecolumn4_1432(1048, 1288), 1);
    add_background_object(create_cavecolumn4_1432(1184, 1248), 1);
    add_background_object(create_cavecolumn2_1291(2880, 1016), 1);
    add_background_object(create_cavecolumn1_1285(2672, 1184), 1);
    add_background_object(create_cavecolumn2_1291(3600, 952), 1);
    add_background_object(create_cavecolumn2_1291(3384, 1184), 1);
    add_background_object(create_cavecolumn2_1291(3560, 1272), 1);
    add_background_object(create_cavecolumn1_1285(3296, 1384), 1);
    add_background_object(create_cavecolumn1_1285(3744, 1296), 1);
    add_background_object(create_shaft3_1286(3576, 1056), 1);
    add_background_object(create_shaft3_1286(3576, 984), 1);
    add_background_object(create_shaft3_1286(3576, 912), 1);
    add_background_object(create_shaft3_1286(3576, 840), 1);
    add_background_object(create_shaft3_1286(3576, 768), 1);
    add_background_object(create_shaft3_1286(3688, 880), 1);
    add_background_object(create_shaft3_1286(3688, 808), 1);
    add_background_object(create_shaft3_1286(3688, 736), 1);
    add_background_object(create_shaft3_1286(3576, 696), 1);
    add_background_object(create_shaft3_1286(3688, 664), 1);
    add_background_object(create_shaft3_1286(3576, 624), 1);
    add_background_object(create_shaft3_1286(3576, 552), 1);
    add_background_object(create_shaft3_1286(3688, 592), 1);
    add_background_object(create_shaft3_1286(3688, 520), 1);
    add_background_object(create_shaft3_1286(3576, 480), 1);
    add_background_object(create_shaft3_1286(3688, 448), 1);
    add_background_object(create_shaft3_1286(3576, 408), 1);
    add_background_object(create_shaft3_1286(3688, 376), 1);
    add_background_object(create_shaft3_1286(3576, 336), 1);
    add_background_object(create_cavecolumn1_1285(5504, 2272), 1);
    add_background_object(create_cavecolumn2_1291(5344, 2328), 1);
    add_background_object(create_cavecolumn1_1285(5200, 2488), 1);
    add_background_object(create_shaft3_1286(5368, 2456), 1);
    add_background_object(create_shaft3_1286(5368, 2384), 1);
    add_background_object(create_shaft3_1286(5368, 2312), 1);
    add_background_object(create_shaft3_1286(5368, 2240), 1);
    add_background_object(create_shaft3_1286(5368, 2168), 1);
    add_background_object(create_shaft3_1286(5368, 2096), 1);
    add_background_object(create_shaft3_1286(5368, 2600), 1);
    add_background_object(create_shaft3_1286(5368, 2528), 1);
    add_background_object(create_shaft3_1286(5520, 2400), 1);
    add_background_object(create_shaft3_1286(5520, 2328), 1);
    add_background_object(create_shaft3_1286(5520, 2256), 1);
    add_background_object(create_shaft3_1286(5520, 2184), 1);
    add_background_object(create_shaft3_1286(5520, 2112), 1);
    add_background_object(create_shaft3_1286(5520, 2040), 1);
    add_background_object(create_shaft3_1286(5520, 2544), 1);
    add_background_object(create_shaft3_1286(5520, 2472), 1);
    add_background_object(create_shaft3_1286(5368, 2024), 1);
    add_background_object(create_shaft3_1286(5368, 1952), 1);
    add_background_object(create_shaft3_1286(5520, 1968), 1);
    add_background_object(create_shaft3_1286(5368, 1880), 1);
    add_background_object(create_shaft3_1286(5520, 1896), 1);
    add_background_object(create_cavecolumn4_1432(5320, 1704), 1);
    add_background_object(create_cavecolumn4_1432(5440, 1784), 1);
    add_background_object(create_cavecolumn3_1431(5568, 1696), 1);
    add_background_object(create_cavecolumn2_1291(4752, 1632), 1);
    add_background_object(create_cavecolumn2_1291(4496, 1472), 1);
    add_background_object(create_cavecolumn1_1285(4672, 1544), 1);
    add_background_object(create_cavecolumn1_1285(4816, 1952), 1);
    add_background_object(create_cavecolumn2_1291(4888, 2168), 1);
    add_background_object(create_cavecolumn2_1291(4640, 1944), 1);
    add_background_object(create_cavecolumn2_1291(5696, 2328), 1);
    add_background_object(create_cavecolumn2_1291(5880, 2280), 1);
    add_background_object(create_cavecolumn2_1291(6072, 2224), 1);
    add_background_object(create_cavecolumn1_1285(5960, 2352), 1);
    add_background_object(create_cavecolumn1_1285(6264, 2144), 1);
    add_background_object(create_cavecolumn1_1285(6208, 2408), 1);
    add_background_object(create_cavecolumn2_1291(6432, 2312), 1);
    add_background_object(create_cavecolumn1_1285(6632, 2152), 1);
    add_background_object(create_cavecolumn2_1291(6976, 1872), 1);
    add_background_object(create_stalactites2_1433(6544, 648), 2);
    add_background_object(create_rmcavebrick4_1434(6712, 816), 2);
    add_background_object(create_rmcavebrick4_1434(6712, 880), 2);
    add_background_object(create_rmcavebrick4_1434(6712, 848), 2);
    add_background_object(create_rmcavebrick4_1434(6712, 912), 2);
    add_background_object(create_rmcavebrick4_1434(6640, 816), 2);
    add_background_object(create_rmcavebrick4_1434(6640, 880), 2);
    add_background_object(create_rmcavebrick4_1434(6640, 848), 2);
    add_background_object(create_rmcavebrick4_1434(6640, 912), 2);
    add_background_object(create_cavesoil1_1310(6896, 696), 2);
    add_background_object(create_cavesoil17_1309(7752, 2784), 2);
    add_background_object(create_rmscaleypillar_1435(8328, 2440), 2);
    add_background_object(create_rmcavebrick6_1436(8448, 2504), 2);
    add_background_object(create_rmcavebrick6_1436(8448, 2472), 2);
    add_background_object(create_rmcavebrick6_1436(8448, 2440), 2);
    add_background_object(create_rmcavebrick6_1436(8448, 2408), 2);
    add_background_object(create_rmcavebrick6_1436(8448, 2376), 2);
    add_background_object(create_rmcavebrick8_1437(8424, 2376), 2);
    add_background_object(create_rmcavebrick6_1436(8360, 2536), 2);
    add_background_object(create_rmcavebrick6_1436(8424, 2536), 2);
    add_background_object(create_column8_1343(7720, 2464), 2);
    add_background_object(create_column5_1318(7720, 2512), 2);
    add_background_object(create_column5_1318(3320, 952), 2);
    add_background_object(create_column5_1318(3248, 952), 2);
    add_background_object(create_column5_1318(6112, 2136), 2);
    add_background_object(create_stalactites2_1433(7456, 2184), 2);
    add_background_object(create_stalactites_1438(7744, 2136), 2);
    add_background_object(create_stalactites2_1433(7800, 2176), 2);
    add_background_object(create_stalactites2_1433(7624, 2144), 2);
    add_background_object(create_stalactites_1438(7656, 2168), 2);
    add_background_object(create_stalactites_1438(7296, 2168), 2);
    add_background_object(create_column8_1343(8272, 2344), 2);
    add_background_object(create_column8_1343(8080, 2344), 2);
    add_background_object(create_column5_1318(8080, 2488), 2);
    add_background_object(create_gateway_1439(8128, 2392), 2);
    add_background_object(create_column5_1318(8272, 2488), 2);
    add_background_object(create_column5_1318(7896, 2512), 2);
    add_background_object(create_column5_1318(7808, 2512), 2);
    add_background_object(create_rmscaleypillar_1435(8328, 2248), 2);
    add_background_object(create_rmscaleypillar_1435(7976, 2248), 2);
    add_background_object(create_rmcavebrick3_1440(8104, 2536), 2);
    add_background_object(create_rmcavebrick3_1440(8168, 2536), 2);
    add_background_object(create_rmcavebrick3_1440(8232, 2536), 2);
    add_background_object(create_rmcavebrick3_1440(8296, 2536), 2);
    add_background_object(create_rmcavebrick3_1440(7976, 2536), 2);
    add_background_object(create_cavebrick11_1441(7912, 2536), 2);
    add_background_object(create_rmcavebrick3_1440(8040, 2536), 2);
    add_background_object(create_rmcavebrick6_1436(8360, 2240), 2);
    add_background_object(create_rmcavebrick6_1436(8360, 2272), 2);
    add_background_object(create_rmcavebrick6_1436(8040, 2304), 2);
    add_background_object(create_rmcavebrick6_1436(7976, 2240), 2);
    add_background_object(create_rmcavebrick6_1436(7976, 2272), 2);
    add_background_object(create_rmcavebrick8_1437(7952, 2304), 2);
    add_background_object(create_rmcavebrick14_1442(7952, 2336), 2);
    add_background_object(create_rmcavebrick13_1443(7976, 2336), 2);
    add_background_object(create_rmcavebrick8_1437(7952, 2272), 2);
    add_background_object(create_rmcavebrick8_1437(7952, 2240), 2);
    add_background_object(create_rmscaleypillar_1435(4968, 736), 2);
    add_background_object(create_rmscaleypillar_1435(4968, 640), 2);
    add_background_object(create_rmscaleypillar_1435(4968, 544), 2);
    add_background_object(create_rmscaleypillar_1435(4968, 448), 2);
    add_background_object(create_rmcavebrick4_1434(6360, 816), 2);
    add_background_object(create_shaft2_1303(5392, 576), 2);
    add_background_object(create_rmcavebrick4_1434(5168, 944), 2);
    add_background_object(create_switchbase_1444(5088, 1088), 2);
    add_background_object(create_rmcavebrick4_1434(5920, 1088), 2);
    add_background_object(create_rmcavebrick4_1434(6296, 984), 2);
    add_background_object(create_rmcavebrick4_1434(6296, 1048), 2);
    add_background_object(create_stalactites_1438(5760, 648), 2);
    add_background_object(create_stalactites2_1433(5824, 608), 2);
    add_background_object(create_stalactites2_1433(6016, 624), 2);
    add_background_object(create_stalactites2_1433(6152, 648), 2);
    add_background_object(create_stalactites_1438(6112, 600), 2);
    add_background_object(create_stalactites_1438(6264, 624), 2);
    add_background_object(create_cavesoil1_1310(6664, 1424), 2);
    add_background_object(create_rmbluecrystal2_1301(5672, 1632), 2);
    add_background_object(create_rmbluecrystal1_1306(5712, 1664), 2);
    add_background_object(create_rmbluecrystal2_1301(5792, 1744), 2);
    add_background_object(create_rmbluecrystal1_1306(5904, 1816), 2);
    add_background_object(create_cavesoil12_1350(5504, 632), 2);
    add_background_object(create_cavesoil17_1309(6176, 856), 2);
    add_background_object(create_cavesoil17_1309(6240, 856), 2);
    add_background_object(create_rmbluecrystal1_1306(5568, 824), 2);
    add_background_object(create_rmbluecrystal2_1301(5272, 784), 2);
    add_background_object(create_rmbluecrystal1_1306(5024, 768), 2);
    add_background_object(create_stalactites2_1433(5536, 496), 2);
    add_background_object(create_stalactites_1438(5600, 496), 2);
    add_background_object(create_cavesoil17_1309(5584, 608), 2);
    add_background_object(create_cavesoil17_1309(5520, 608), 2);
    add_background_object(create_rmcavebrick4_1434(6104, 1088), 2);
    add_background_object(create_rmcavebrick4_1434(5992, 848), 2);
    add_background_object(create_rmcavebrick4_1434(6104, 864), 2);
    add_background_object(create_rmcavebrick2_1445(6160, 840), 2);
    add_background_object(create_rmcavebrick3_1440(5968, 840), 2);
    add_background_object(create_stalactites2_1433(5288, 496), 2);
    add_background_object(create_stalactites2_1433(5176, 496), 2);
    add_background_object(create_stalactites_1438(5256, 472), 2);
    add_background_object(create_shaft2_1303(5392, 480), 2);
    add_background_object(create_rmcavebrick4_1434(5616, 1088), 2);
    add_background_object(create_rmcavebrick2_1445(5704, 1104), 2);
    add_background_object(create_rmcavebrick7_1446(5640, 1104), 2);
    add_background_object(create_cavesoil33_1447(5728, 1112), 2);
    add_background_object(create_cavesoil17_1309(5728, 1176), 2);
    add_background_object(create_cavesoil17_1309(5664, 1176), 2);
    add_background_object(create_stalactites_1438(5568, 1920), 2);
    add_background_object(create_stalactites2_1433(5712, 1920), 2);
    add_background_object(create_shaft2_1303(5504, 1904), 2);
    add_background_object(create_shaft2_1303(5504, 2000), 2);
    add_background_object(create_backdrop_1222(1496, 112), 2);
    add_background_object(create_cavesoil17_1309(1496, 344), 2);
    add_background_object(create_cavesoil17_1309(1496, 280), 2);
    add_background_object(create_cavesoil1_1310(1384, 280), 2);
    add_background_object(create_rmcavebrick4_1434(1624, 168), 2);
    add_background_object(create_rmcavebrick4_1434(1624, 232), 2);
    add_background_object(create_rmcavebrick4_1434(1624, 200), 2);
    add_background_object(create_rmcavebrick4_1434(1624, 264), 2);
    add_background_object(create_rmcavebrick4_1434(1264, 232), 2);
    add_background_object(create_rmcavebrick4_1434(1264, 200), 2);
    add_background_object(create_rmcavebrick4_1434(1264, 168), 2);
    add_background_object(create_stalactites2_1433(824, 832), 2);
    add_background_object(create_stalactites_1438(896, 872), 2);
    add_background_object(create_stalactites2_1433(968, 904), 2);
    add_background_object(create_stalactites_1438(1000, 872), 2);
    add_background_object(create_stalactites_1438(1064, 936), 2);
    add_background_object(create_stalactites2_1433(1616, 992), 2);
    add_background_object(create_stalactites2_1433(1832, 1016), 2);
    add_background_object(create_stalactites_1438(1768, 992), 2);
    add_background_object(create_stalactites_1438(1736, 1016), 2);
    add_background_object(create_stalactites2_1433(2080, 568), 2);
    add_background_object(create_stalactites2_1433(6320, 1696), 2);
    add_background_object(create_stalactites_1438(6264, 1720), 2);
    add_background_object(create_stalactites2_1433(6200, 1680), 2);
    add_background_object(create_stalactites2_1433(6064, 1680), 2);
    add_background_object(create_stalactites_1438(5992, 1640), 2);
    add_background_object(create_stalactites2_1433(6472, 2816), 2);
    add_background_object(create_stalactites_1438(5960, 2464), 2);
    add_background_object(create_stalactites2_1433(6072, 2416), 2);
    add_background_object(create_cavecolumn1_1285(6208, 2968), 2);
    add_background_object(create_rmcavebrick4_1434(6992, 3048), 2);
    add_background_object(create_rmcavebrick4_1434(6992, 3016), 2);
    add_background_object(create_rmcavebrick5_1448(6992, 2984), 2);
    add_background_object(create_rmcavebrick5_1448(6896, 3048), 2);
    add_background_object(create_rmbluecrystal2_1301(6632, 3016), 2);
    add_background_object(create_rmbluecrystal1_1306(6064, 2896), 2);
    add_background_object(create_stalactites_1438(6256, 2432), 2);
    add_background_object(create_stalactites_1438(6392, 2432), 2);
    add_background_object(create_rmbluecrystal2_1301(6632, 2512), 2);
    add_background_object(create_rmbluecrystal1_1306(6400, 2144), 2);
    add_background_object(create_rmbluecrystal2_1301(6192, 2128), 2);
    add_background_object(create_rmcavebrick4_1434(6040, 2160), 2);
    add_background_object(create_rmcavebrick4_1434(6040, 2128), 2);
    add_background_object(create_rmcavebrick5_1448(6040, 2096), 2);
    add_background_object(create_cavesoil17_1309(7688, 2704), 2);
    add_background_object(create_shaft2_1303(7056, 2712), 2);
    add_background_object(create_shaft2_1303(7056, 2808), 2);
    add_background_object(create_shaft2_1303(7056, 2904), 2);
    add_background_object(create_shaft2_1303(6416, 2840), 2);
    add_background_object(create_shaft2_1303(6416, 2936), 2);
    add_background_object(create_shaft2_1303(6552, 2792), 2);
    add_background_object(create_shaft2_1303(6552, 2888), 2);
    add_background_object(create_shaft2_1303(6552, 2984), 2);
    add_background_object(create_shaft2_1303(7160, 2184), 2);
    add_background_object(create_shaft2_1303(7216, 2184), 2);
    add_background_object(create_shaft2_1303(7160, 2856), 2);
    add_background_object(create_shaft2_1303(7216, 2856), 2);
    add_background_object(create_shaft2_1303(7296, 2736), 2);
    add_background_object(create_shaft2_1303(7296, 2832), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2640), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2672), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2640), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2672), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2704), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2736), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2704), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2736), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2768), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2800), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2768), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2800), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2832), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2864), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2832), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2864), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2576), 2);
    add_background_object(create_rmcavebrick4_1434(7632, 2608), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2576), 2);
    add_background_object(create_rmcavebrick4_1434(7568, 2608), 2);
    add_background_object(create_rmcavebrick1_1449(7552, 2560), 2);
    add_background_object(create_cavesoil1_1310(7304, 2512), 2);
    add_background_object(create_cavesoil1_1310(7432, 2512), 2);
    add_background_object(create_stalactites_1438(5536, 1168), 2);
    add_background_object(create_stalactites_1438(5696, 1352), 2);
    add_background_object(create_cavesoil17_1309(6408, 3152), 2);
    add_background_object(create_cavesoil36_1450(6152, 2640), 2);
    add_background_object(create_cavesoil17_1309(6216, 2704), 2);
    add_background_object(create_cavesoil17_1309(6280, 2704), 2);
    add_background_object(create_cavesoil17_1309(6344, 2704), 2);
    add_background_object(create_cavesoil33_1447(6536, 2192), 2);
    add_background_object(create_cavesoil33_1447(6536, 2320), 2);
    add_background_object(create_cavesoil36_1450(6152, 2576), 2);
    add_background_object(create_cavesoil17_1309(5952, 1872), 2);
    add_background_object(create_cavesoil17_1309(5896, 1872), 2);
    add_background_object(create_cavesoil1_1310(5720, 1808), 2);
    add_background_object(create_cavesoil9_1307(5848, 1808), 2);
    add_background_object(create_cavesoil17_1309(5656, 1696), 2);
    add_background_object(create_cavesoil17_1309(5656, 1760), 2);
    add_background_object(create_cavesoil9_1307(5720, 1688), 2);
    add_background_object(create_cavesoil1_1310(5512, 1680), 2);
    add_background_object(create_cavesoil1_1310(5384, 1680), 2);
    add_background_object(create_cavesoil9_1307(5504, 1344), 2);
    add_background_object(create_cavesoil1_1310(5664, 1240), 2);
    add_background_object(create_stalactites_1438(2008, 600), 2);
    add_background_object(create_stalactites_1438(3248, 184), 2);
    add_background_object(create_stalactites_1438(1672, 240), 2);
    add_background_object(create_rmcavebrick4_1434(4688, 1568), 2);
    add_background_object(create_rmcavebrick4_1434(4688, 1664), 2);
    add_background_object(create_rmcavebrick4_1434(4768, 1648), 2);
    add_background_object(create_rmcavebrick4_1434(4848, 1648), 2);
    add_background_object(create_rmscaleypillar_1435(5048, 1256), 2);
    add_background_object(create_rmscaleypillar_1435(4920, 1256), 2);
    add_background_object(create_rmscaleypillar_1435(5048, 1352), 2);
    add_background_object(create_rmscaleypillar_1435(4920, 1352), 2);
    add_background_object(create_rmscaleypillar_1435(5048, 1448), 2);
    add_background_object(create_rmscaleypillar_1435(4920, 1448), 2);
    add_background_object(create_rmscaleypillar_1435(5048, 1544), 2);
    add_background_object(create_rmscaleypillar_1435(4920, 1544), 2);
    add_background_object(create_rmscaleypillar_1435(5048, 1640), 2);
    add_background_object(create_rmscaleypillar_1435(4920, 1640), 2);
    add_background_object(create_cavesoil17_1309(5312, 1304), 2);
    add_background_object(create_cavesoil17_1309(5312, 1240), 2);
    add_background_object(create_cavesoil1_1310(5296, 1552), 2);
    add_background_object(create_cavesoil9_1307(5408, 1248), 2);
    add_background_object(create_cavesoil27_1304(4744, 1496), 2);
    add_background_object(create_cavesoil17_1309(4616, 1496), 2);
    add_background_object(create_cavesoil17_1309(4680, 1496), 2);
    add_background_object(create_rmcavebrick6_1436(4680, 1424), 2);
    add_background_object(create_cavesoil1_1310(4488, 1296), 2);
    add_background_object(create_rmcavebrick6_1436(4552, 1264), 2);
    add_background_object(create_rmcavebrick6_1436(4488, 1264), 2);
    add_background_object(create_rmcavebrick6_1436(4616, 1232), 2);
    add_background_object(create_rmcavebrick6_1436(4552, 1232), 2);
    add_background_object(create_rmscaleypillar_1435(4968, 1136), 2);
    add_background_object(create_rmscaleypillar_1435(4968, 1040), 2);
    add_background_object(create_rmscaleypillar_1435(4968, 944), 2);
    add_background_object(create_rmscaleypillar_1435(4536, 912), 2);
    add_background_object(create_rmcavebrick4_1434(4832, 720), 2);
    add_background_object(create_rmcavebrick4_1434(4832, 848), 2);
    add_background_object(create_cavesoil17_1309(4880, 896), 2);
    add_background_object(create_cavesoil17_1309(4816, 896), 2);
    add_background_object(create_cavesoil26_1352(4816, 832), 2);
    add_background_object(create_rmcavebrick4_1434(4680, 744), 2);
    add_background_object(create_rmcavebrick4_1434(4680, 872), 2);
    add_background_object(create_rmcavebrick8_1437(4656, 656), 2);
    add_background_object(create_rmcavebrick4_1434(4328, 704), 2);
    add_background_object(create_rmcavebrick4_1434(4328, 832), 2);
    add_background_object(create_rmcavebrick8_1437(4512, 888), 2);
    add_background_object(create_rmcavebrick10_1451(4360, 1200), 2);
    add_background_object(create_rmscaleypillar_1435(3904, 680), 2);
    add_background_object(create_rmcavebrick10_1451(4680, 1360), 2);
    add_background_object(create_rmcavebrick10_1451(4296, 1040), 2);
    add_background_object(create_rmcavebrick6_1436(4424, 1232), 2);
    add_background_object(create_rmcavebrick6_1436(4424, 1264), 2);
    add_background_object(create_loop7back_1452(4424, 1104), 2);
    add_background_object(create_levellayer116back_1453(4400, 1040), 2);
    add_background_object(create_levellayer116back_1453(4400, 912), 2);
    add_background_object(create_rmcavebrick4_1434(1856, 360), 2);
    add_background_object(create_rmcavebrick4_1434(2000, 360), 2);
    add_background_object(create_rmcavebrick4_1434(2000, 456), 2);
    add_background_object(create_rmcavebrick4_1434(1856, 296), 2);
    add_background_object(create_rmcavebrick4_1434(1856, 392), 2);
    add_background_object(create_backdrop_1222(1400, 112), 2);
    add_background_object(create_rmcavebrick4_1434(2872, 632), 2);
    add_background_object(create_rmcavebrick4_1434(2872, 504), 2);
    add_background_object(create_shaft2_1303(3200, 392), 2);
    add_background_object(create_shaft2_1303(3200, 488), 2);
    add_background_object(create_shaft2_1303(3424, 392), 2);
    add_background_object(create_shaft2_1303(3424, 488), 2);
    add_background_object(create_cavecolumn1_1285(3672, -72), 2);
    add_background_object(create_cavecolumn1_1285(3640, 168), 2);
    add_background_object(create_cavecolumn4_1432(3680, 520), 2);
    add_background_object(create_rmscaleypillar_1435(3904, 776), 2);
    add_background_object(create_rmscaleypillar_1435(3904, 872), 2);
    add_background_object(create_rmcavebrick8_1437(4144, 1136), 2);
    add_background_object(create_rmcavebrick4_1434(4008, 1128), 2);
    add_background_object(create_cavecolumn2_1291(3608, 1136), 2);
    add_background_object(create_rmcavebrick4_1434(3848, 1128), 2);
    add_background_object(create_rmcavebrick4_1434(3848, 1096), 2);
    add_background_object(create_rmscaleypillar_1435(3904, 1064), 2);
    add_background_object(create_rmscaleypillar_1435(3552, 584), 2);
    add_background_object(create_rmscaleypillar_1435(3552, 968), 2);
    add_background_object(create_rmscaleypillar_1435(3552, 1064), 2);
    add_background_object(create_rmscaleypillar_1435(3552, 776), 2);
    add_background_object(create_rmscaleypillar_1435(3552, 872), 2);
    add_background_object(create_shaft2_1303(3424, 216), 2);
    add_background_object(create_shaft2_1303(3424, 120), 2);
    add_background_object(create_shaft2_1303(3200, 216), 2);
    add_background_object(create_shaft2_1303(3200, 120), 2);
    add_background_object(create_cavesoil17_1309(3528, 520), 2);
    add_background_object(create_cavesoil15_1316(3152, 584), 2);
    add_background_object(create_cavesoil17_1309(3528, 584), 2);
    add_background_object(create_cavesoil17_1309(3464, 584), 2);
    add_background_object(create_cavesoil17_1309(3400, 584), 2);
    add_background_object(create_cavesoil17_1309(3336, 584), 2);
    add_background_object(create_cavesoil14_1314(3152, 568), 2);
    add_background_object(create_cavesoil2_1338(3152, 568), 2);
    add_background_object(create_cavesoil8_1454(3472, 568), 2);
    add_background_object(create_cavesoil2_1338(3344, 568), 2);
    add_background_object(create_cavesoil1_1310(2248, 1536), 2);
    add_background_object(create_rmcavebrick4_1434(2576, 696), 2);
    add_background_object(create_rmcavebrick4_1434(2576, 664), 2);
    add_background_object(create_rmcavebrick5_1448(2576, 632), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 632), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 600), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 568), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 536), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 504), 2);
    add_background_object(create_rmcavebrick4_1434(2552, 1056), 2);
    add_background_object(create_rmcavebrick4_1434(2552, 1088), 2);
    add_background_object(create_rmcavebrick4_1434(2552, 1120), 2);
    add_background_object(create_rmcavebrick4_1434(2552, 1152), 2);
    add_background_object(create_rmcavebrick4_1434(2552, 1184), 2);
    add_background_object(create_rmcavebrick4_1434(2552, 1216), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 1056), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 1088), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 1120), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 1152), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 1184), 2);
    add_background_object(create_rmcavebrick4_1434(2616, 1216), 2);
    add_background_object(create_rmbluecrystal1_1306(2192, 1144), 2);
    add_background_object(create_rmbluecrystal2_1301(2136, 1112), 2);
    add_background_object(create_rmcavebrick4_1434(2264, 1200), 2);
    add_background_object(create_rmcavebrick4_1434(2344, 1232), 2);
    add_background_object(create_rmcavebrick9_1455(3560, 968), 2);
    add_background_object(create_rmcavebrick6_1436(3496, 1128), 2);
    add_background_object(create_rmcavebrick6_1436(3432, 1064), 2);
    add_background_object(create_rmcavebrick6_1436(3496, 1064), 2);
    add_background_object(create_rmcavebrick6_1436(3432, 1096), 2);
    add_background_object(create_rmcavebrick6_1436(3496, 1096), 2);
    add_background_object(create_rmcavebrick6_1436(3368, 1000), 2);
    add_background_object(create_rmcavebrick6_1436(3432, 1000), 2);
    add_background_object(create_rmcavebrick6_1436(3368, 1032), 2);
    add_background_object(create_rmcavebrick6_1436(3432, 1032), 2);
    add_background_object(create_rmcavebrick6_1436(3496, 1032), 2);
    add_background_object(create_cavesoil17_1309(3104, 984), 2);
    add_background_object(create_cavesoil13_1456(3144, 1016), 2);
    add_background_object(create_cavesoil13_1456(3144, 984), 2);
    add_background_object(create_rmcavebrick1_1449(3152, 1000), 2);
    add_background_object(create_rmcavebrick7_1446(3176, 1000), 2);
    add_background_object(create_rmcavebrick7_1446(3240, 1000), 2);
    add_background_object(create_rmcavebrick7_1446(3304, 1000), 2);
    add_background_object(create_rmcavebrick7_1446(3368, 968), 2);
    add_background_object(create_rmcavebrick7_1446(3432, 968), 2);
    add_background_object(create_cavesoil17_1309(3104, 920), 2);
    add_background_object(create_rmbluecrystal2_1301(3568, 1488), 2);
    add_background_object(create_rmcavebrick4_1434(3144, 1320), 2);
    add_background_object(create_rmcavebrick4_1434(3144, 1160), 2);
    add_background_object(create_rmcavebrick4_1434(3144, 1256), 2);
    add_background_object(create_rmcavebrick4_1434(3144, 1192), 2);
    add_background_object(create_rmcavebrick4_1434(3144, 1224), 2);
    add_background_object(create_rmcavebrick4_1434(3144, 1288), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1496), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1336), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1432), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1368), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1400), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1464), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1176), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1272), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1208), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1240), 2);
    add_background_object(create_rmcavebrick4_1434(3208, 1304), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1408), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1160), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1320), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1256), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1192), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1224), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1288), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1376), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1536), 2);
    add_background_object(create_rmcavebrick4_1434(3464, 1432), 2);
    add_background_object(create_rmcavebrick4_1434(3464, 1528), 2);
    add_background_object(create_rmcavebrick4_1434(3672, 1432), 2);
    add_background_object(create_rmcavebrick4_1434(3672, 1528), 2);
    add_background_object(create_cavesoil1_1310(4104, 1552), 2);
    add_background_object(create_cavesoil1_1310(4104, 1168), 2);
    add_background_object(create_cavesoil1_1310(4104, 1296), 2);
    add_background_object(create_cavesoil1_1310(4104, 1424), 2);
    add_background_object(create_cavesoil11_1313(4040, 1240), 2);
    add_background_object(create_cavesoil11_1313(4048, 1336), 2);
    add_background_object(create_cavesoil11_1313(4040, 1440), 2);
    add_background_object(create_cavesoil1_1310(3464, 1168), 2);
    add_background_object(create_cavesoil1_1310(3464, 1296), 2);
    add_background_object(create_cavesoil1_1310(3592, 1168), 2);
    add_background_object(create_cavecolumn2_1291(3600, 1528), 2);
    add_background_object(create_rmcavebrick4_1434(3832, 1432), 2);
    add_background_object(create_rmcavebrick4_1434(3896, 1432), 2);
    add_background_object(create_rmcavebrick4_1434(3832, 1464), 2);
    add_background_object(create_rmcavebrick4_1434(3896, 1464), 2);
    add_background_object(create_rmcavebrick4_1434(3832, 1496), 2);
    add_background_object(create_rmcavebrick4_1434(3896, 1496), 2);
    add_background_object(create_rmcavebrick4_1434(3832, 1528), 2);
    add_background_object(create_rmcavebrick4_1434(3896, 1528), 2);
    add_background_object(create_cavesoil1_1310(3848, 1552), 2);
    add_background_object(create_cavesoil1_1310(3848, 1680), 2);
    add_background_object(create_cavesoil1_1310(3848, 1808), 2);
    add_background_object(create_cavesoil15_1316(3336, 1360), 2);
    add_background_object(create_cavesoil14_1314(3336, 1352), 2);
    add_background_object(create_cavesoil1_1310(3592, 1296), 2);
    add_background_object(create_cavesoil15_1316(3032, 1088), 2);
    add_background_object(create_cavesoil14_1314(3080, 1104), 2);
    add_background_object(create_rmcavebrick13_1443(3144, 1160), 2);
    add_background_object(create_rmcavebrick6_1436(3144, 1416), 2);
    add_background_object(create_rmcavebrick6_1436(3144, 1384), 2);
    add_background_object(create_levellayer116back_1453(3184, 1320), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 1256), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 1288), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 1320), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 1352), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 1128), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 1160), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 1192), 2);
    add_background_object(create_rmcavebrick6_1436(3400, 1224), 2);
    add_background_object(create_rmcavebrick6_1436(3336, 1128), 2);
    add_background_object(create_rmcavebrick6_1436(3272, 1128), 2);
    add_background_object(create_rmcavebrick6_1436(3208, 1128), 2);
    add_background_object(create_rmcavebrick6_1436(3144, 1128), 2);
    add_background_object(create_cavesoil17_1309(2968, 1032), 2);
    add_background_object(create_cavesoil10_1457(2984, 920), 2);
    add_background_object(create_cavesoil9_1307(2992, 1240), 2);
    add_background_object(create_rmbluecrystal1_1306(1984, 792), 2);
    add_background_object(create_rmbluecrystal2_1301(2624, 600), 2);
    add_background_object(create_rmbluecrystal2_1301(2456, 664), 2);
    add_background_object(create_shaft2_1303(2816, 1080), 2);
    add_background_object(create_shaft2_1303(2816, 1176), 2);
    add_background_object(create_shaft2_1303(2816, 888), 2);
    add_background_object(create_shaft2_1303(2816, 984), 2);
    add_background_object(create_cavecolumn1_1285(2640, 1216), 2);
    add_background_object(create_cavesoil1_1310(1920, 1584), 2);
    add_background_object(create_cavecolumn4_1432(2664, 648), 2);
    add_background_object(create_cavecolumn3_1431(2640, 744), 2);
    add_background_object(create_cavecolumn1_1285(2640, -144), 2);
    add_background_object(create_cavecolumn3_1431(2672, 296), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 376), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 504), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 608), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 768), 2);
    add_background_object(create_cavesoil17_1309(2632, 664), 2);
    add_background_object(create_cavesoil17_1309(2048, 536), 2);
    add_background_object(create_cavesoil27_1304(1984, 600), 2);
    add_background_object(create_rmcavebrick4_1434(1064, 368), 2);
    add_background_object(create_rmcavebrick4_1434(1064, 240), 2);
    add_background_object(create_cavecolumn1_1285(1088, 456), 2);
    add_background_object(create_rmcavebrick4_1434(1112, 544), 2);
    add_background_object(create_rmcavebrick4_1434(1112, 704), 2);
    add_background_object(create_cavesoil1_1310(1992, 856), 2);
    add_background_object(create_stalactites_1438(2816, 120), 2);
    add_background_object(create_rmcavebrick4_1434(1984, 1112), 2);
    add_background_object(create_rmcavebrick4_1434(1984, 1080), 2);
    add_background_object(create_rmcavebrick4_1434(1984, 1048), 2);
    add_background_object(create_rmcavebrick4_1434(1368, 1040), 2);
    add_background_object(create_rmcavebrick4_1434(1736, 1424), 2);
    add_background_object(create_rmcavebrick4_1434(1736, 1392), 2);
    add_background_object(create_rmcavebrick4_1434(1736, 1360), 2);
    add_background_object(create_rmcavebrick4_1434(1736, 1328), 2);
    add_background_object(create_rmcavebrick4_1434(1656, 1416), 2);
    add_background_object(create_rmcavebrick4_1434(1656, 1384), 2);
    add_background_object(create_rmcavebrick4_1434(1656, 1352), 2);
    add_background_object(create_rmcavebrick5_1448(1656, 1320), 2);
    add_background_object(create_rmbluecrystal2_1301(1776, 1392), 2);
    add_background_object(create_rmbluecrystal1_1306(1608, 1408), 2);
    add_background_object(create_rmbluecrystal2_1301(1544, 1392), 2);
    add_background_object(create_cavesoil13_1456(1392, 1320), 2);
    add_background_object(create_rmbluecrystal1_1306(928, 584), 2);
    add_background_object(create_cavecolumn2_1291(1296, 520), 2);
    add_background_object(create_cavecolumn1_1285(1496, 568), 2);
    add_background_object(create_cavesoil17_1309(1288, 1216), 2);
    add_background_object(create_cavesoil17_1309(1288, 1152), 2);
    add_background_object(create_cavesoil1_1310(1096, 856), 2);
    add_background_object(create_cavesoil1_1310(768, 1344), 2);
    add_background_object(create_cavesoil1_1310(1024, 1344), 2);
    add_background_object(create_cavesoil17_1309(1408, 656), 2);
    add_background_object(create_rmcavebrick4_1434(216, 440), 2);
    add_background_object(create_cavesoil27_1304(256, 384), 2);
    add_background_object(create_rmcavebrick4_1434(776, 544), 2);
    add_background_object(create_rmcavebrick4_1434(776, 512), 2);
    add_background_object(create_rmcavebrick4_1434(776, 480), 2);
    add_background_object(create_rmcavebrick4_1434(776, 320), 2);
    add_background_object(create_rmbluecrystal1_1306(536, 592), 2);
    add_background_object(create_rmbluecrystal2_1301(400, 608), 2);
    add_background_object(create_rmcavebrick4_1434(472, 600), 2);
    add_background_object(create_rmcavebrick4_1434(472, 568), 2);
    add_background_object(create_rmcavebrick5_1448(472, 536), 2);
    add_background_object(create_rmcavebrick4_1434(624, 528), 2);
    add_background_object(create_rmbluecrystal2_1301(488, 576), 2);
    add_background_object(create_rmcavebrick4_1434(624, 368), 2);
    add_background_object(create_shaft2_1303(760, 896), 2);
    add_background_object(create_shaft2_1303(760, 992), 2);
    add_background_object(create_shaft2_1303(528, 856), 2);
    add_background_object(create_shaft2_1303(528, 952), 2);
    add_background_object(create_shaft2_1303(528, 1048), 2);
    add_background_object(create_shaft2_1303(344, 800), 2);
    add_background_object(create_shaft2_1303(344, 896), 2);
    add_background_object(create_shaft2_1303(344, 992), 2);
    add_background_object(create_shaft2_1303(256, 752), 2);
    add_background_object(create_shaft2_1303(256, 848), 2);
    add_background_object(create_shaft2_1303(256, 944), 2);
    add_background_object(create_cavesoil1_1310(256, 640), 2);
    add_background_object(create_cavesoil1_1310(384, 640), 2);
    add_background_object(create_cavesoil1_1310(512, 640), 2);
    add_background_object(create_cavesoil17_1309(384, 768), 2);
    add_background_object(create_cavesoil17_1309(448, 768), 2);
    add_background_object(create_rmcavebrick4_1434(1584, 880), 2);
    add_background_object(create_rmcavebrick4_1434(1696, 880), 2);
    add_background_object(create_rmcavebrick4_1434(1696, 848), 2);
    add_background_object(create_rmcavebrick4_1434(1584, 848), 2);
    add_background_object(create_cavesoil9_1307(1320, 792), 2);
    add_background_object(create_cavesoil9_1307(1248, 728), 2);
    add_background_object(create_cavesoil1_1310(1096, 728), 2);
    add_background_object(create_cavesoil1_1310(1048, 408), 2);
    add_background_object(create_cavesoil17_1309(768, 576), 2);
    add_background_object(create_cavesoil26_1352(640, 512), 2);
    add_background_object(create_gimmickrisingswingbase_1311(4240, 1000), 2);
    add_background_object(create_rmucurvecave_1458(4832, 1272), 2);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 2);
    add_background_object(create_signpostback_1459(9048, 2968), 2);
    add_background_object(create_cavesoil1_1310(0, 544), 2);
    add_background_object(create_cavesoil1_1310(0, 672), 2);
    add_background_object(create_cavesoil1_1310(0, 320), 2);
    add_background_object(create_cavesoil1_1310(128, 320), 2);
    add_background_object(create_cavesoil1_1310(0, 768), 2);
    add_background_object(create_cavesoil3_1339(0, 424), 2);
    add_background_object(create_cavesoil3_1339(128, 424), 2);
    add_background_object(create_cavesoil1_1310(256, 256), 2);
    add_background_object(create_cavesoil1_1310(512, 256), 2);
    add_background_object(create_cavesoil3_1339(512, 360), 2);
    add_background_object(create_cavesoil1_1310(512, 768), 2);
    add_background_object(create_cavesoil1_1310(0, 128), 2);
    add_background_object(create_cavesoil1_1310(128, 128), 2);
    add_background_object(create_cavesoil1_1310(256, 128), 2);
    add_background_object(create_cavesoil1_1310(512, 128), 2);
    add_background_object(create_cavesoil1_1310(0, 0), 2);
    add_background_object(create_cavesoil1_1310(128, 0), 2);
    add_background_object(create_cavesoil1_1310(256, 0), 2);
    add_background_object(create_cavesoil1_1310(512, 0), 2);
    add_background_object(create_cavesoil1_1310(640, 640), 2);
    add_background_object(create_cavesoil17_1309(640, 576), 2);
    add_background_object(create_cavesoil17_1309(704, 576), 2);
    add_background_object(create_cavesoil11_1313(640, 560), 2);
    add_background_object(create_cavesoil12_1350(624, 576), 2);
    add_background_object(create_cavesoil12_1350(624, 608), 2);
    add_background_object(create_cavesoil2_1338(512, 632), 2);
    add_background_object(create_cavesoil19_1460(624, 560), 2);
    add_background_object(create_cavesoil13_1456(752, 512), 2);
    add_background_object(create_cavesoil24_1353(640, 496), 2);
    add_background_object(create_cavesoil19_1460(768, 496), 2);
    add_background_object(create_cavesoil13_1456(752, 544), 2);
    add_background_object(create_cavesoil8_1454(768, 576), 2);
    add_background_object(create_cavesoil1_1310(768, 640), 2);
    add_background_object(create_cavesoil25_1317(832, 584), 2);
    add_background_object(create_cavesoil1_1310(896, 640), 2);
    add_background_object(create_cavesoil11_1313(752, 608), 2);
    add_background_object(create_cavesoil23_1351(832, 576), 2);
    add_background_object(create_cavesoil13_1456(1008, 640), 2);
    add_background_object(create_cavesoil8_1454(960, 640), 2);
    add_background_object(create_cavesoil19_1460(1024, 640), 2);
    add_background_object(create_cavesoil13_1456(1008, 672), 2);
    add_background_object(create_cavesoil13_1456(1008, 704), 2);
    add_background_object(create_cavesoil26_1352(920, 408), 2);
    add_background_object(create_cavesoil15_1316(920, 472), 2);
    add_background_object(create_cavesoil11_1313(1008, 408), 2);
    add_background_object(create_cavesoil24_1353(920, 392), 2);
    add_background_object(create_cavesoil14_1314(920, 464), 2);
    add_background_object(create_cavesoil27_1304(640, 320), 2);
    add_background_object(create_cavesoil17_1309(640, 256), 2);
    add_background_object(create_cavesoil17_1309(704, 256), 2);
    add_background_object(create_cavesoil17_1309(768, 256), 2);
    add_background_object(create_cavesoil17_1309(832, 256), 2);
    add_background_object(create_cavesoil27_1304(896, 256), 2);
    add_background_object(create_cavesoil1_1310(640, 128), 2);
    add_background_object(create_cavesoil1_1310(640, 0), 2);
    add_background_object(create_cavesoil1_1310(768, 128), 2);
    add_background_object(create_cavesoil1_1310(896, 128), 2);
    add_background_object(create_cavesoil11_1313(704, 168), 2);
    add_background_object(create_cavesoil18_1305(640, 304), 2);
    add_background_object(create_cavesoil11_1313(784, 192), 2);
    add_background_object(create_cavesoil18_1305(896, 240), 2);
    add_background_object(create_cavesoil1_1310(896, 0), 2);
    add_background_object(create_cavesoil1_1310(768, 0), 2);
    add_background_object(create_cavesoil3_1339(768, 296), 2);
    add_background_object(create_cavesoil2_1338(1048, 392), 2);
    add_background_object(create_cavesoil3_1339(1048, 520), 2);
    add_background_object(create_cavesoil1_1310(1024, 0), 2);
    add_background_object(create_cavesoil1_1310(1024, 128), 2);
    add_background_object(create_cavesoil3_1339(1024, 232), 2);
    add_background_object(create_cavesoil1_1310(896, 768), 2);
    add_background_object(create_cavesoil1_1310(768, 768), 2);
    add_background_object(create_cavesoil11_1313(1144, 728), 2);
    add_background_object(create_cavesoil7_1346(1224, 720), 2);
    add_background_object(create_cavesoil2_1338(1096, 720), 2);
    add_background_object(create_cavesoil15_1316(1176, 536), 2);
    add_background_object(create_cavesoil1_1310(1176, 408), 2);
    add_background_object(create_cavesoil14_1314(1176, 528), 2);
    add_background_object(create_cavesoil15_1316(1304, 664), 2);
    add_background_object(create_cavesoil1_1310(1304, 536), 2);
    add_background_object(create_cavesoil1_1310(1304, 408), 2);
    add_background_object(create_cavesoil11_1313(1176, 816), 2);
    add_background_object(create_cavesoil11_1313(1248, 840), 2);
    add_background_object(create_cavesoil1_1310(640, 768), 2);
    add_background_object(create_cavesoil1_1310(0, 896), 2);
    add_background_object(create_cavesoil1_1310(968, 728), 2);
    add_background_object(create_cavesoil11_1313(960, 736), 2);
    add_background_object(create_cavesoil8_1454(1032, 720), 2);
    add_background_object(create_cavesoil12_1350(1280, 624), 2);
    add_background_object(create_cavesoil12_1350(1280, 592), 2);
    add_background_object(create_cavesoil14_1314(1280, 640), 2);
    add_background_object(create_cavesoil1_1310(1608, 920), 2);
    add_background_object(create_cavesoil1_1310(1736, 920), 2);
    add_background_object(create_cavesoil2_1338(1608, 912), 2);
    add_background_object(create_cavesoil1_1310(1864, 920), 2);
    add_background_object(create_cavesoil1_1310(1864, 792), 2);
    add_background_object(create_cavesoil8_1454(1736, 912), 2);
    add_background_object(create_cavesoil12_1350(1856, 792), 2);
    add_background_object(create_cavesoil12_1350(1856, 824), 2);
    add_background_object(create_cavesoil12_1350(1856, 856), 2);
    add_background_object(create_cavesoil12_1350(1856, 888), 2);
    add_background_object(create_cavesoil28_1461(1792, 848), 2);
    add_background_object(create_cavesoil1_1310(1856, 536), 2);
    add_background_object(create_cavesoil30_1462(1664, 536), 2);
    add_background_object(create_cavesoil31_1463(1472, 536), 2);
    add_background_object(create_rmcavebrick4_1434(1584, 784), 2);
    add_background_object(create_rmcavebrick4_1434(1584, 816), 2);
    add_background_object(create_rmcavebrick4_1434(1696, 784), 2);
    add_background_object(create_rmcavebrick4_1434(1696, 816), 2);
    add_background_object(create_cavesoil13_1456(1440, 680), 2);
    add_background_object(create_rmcavebrick3_1440(1664, 760), 2);
    add_background_object(create_rmcavebrick3_1440(1600, 760), 2);
    add_background_object(create_rmcavebrick2_1445(1728, 760), 2);
    add_background_object(create_rmcavebrick1_1449(1576, 760), 2);
    add_background_object(create_cavesoil19_1460(1856, 784), 2);
    add_background_object(create_cavesoil20_1464(1856, 656), 2);
    add_background_object(create_cavesoil1_1310(1728, 408), 2);
    add_background_object(create_cavesoil1_1310(1600, 408), 2);
    add_background_object(create_cavesoil1_1310(1472, 408), 2);
    add_background_object(create_cavesoil1_1310(384, 256), 2);
    add_background_object(create_cavesoil3_1339(384, 360), 2);
    add_background_object(create_cavesoil1_1310(384, 128), 2);
    add_background_object(create_cavesoil1_1310(384, 0), 2);
    add_background_object(create_cavesoil2_1338(384, 632), 2);
    add_background_object(create_cavesoil20_1464(256, 544), 2);
    add_background_object(create_cavesoil3_1339(128, 536), 2);
    add_background_object(create_cavesoil19_1460(256, 536), 2);
    add_background_object(create_cavesoil13_1456(104, 640), 2);
    add_background_object(create_cavesoil13_1456(104, 608), 2);
    add_background_object(create_cavesoil13_1456(104, 576), 2);
    add_background_object(create_cavesoil13_1456(104, 544), 2);
    add_background_object(create_cavesoil2_1338(0, 536), 2);
    add_background_object(create_cavesoil2_1338(128, 536), 2);
    add_background_object(create_cavesoil15_1316(256, 768), 2);
    add_background_object(create_cavesoil2_1338(256, 632), 2);
    add_background_object(create_cavesoil15_1316(384, 832), 2);
    add_background_object(create_cavesoil14_1314(384, 824), 2);
    add_background_object(create_cavesoil11_1313(576, 664), 2);
    add_background_object(create_cavesoil13_1456(104, 832), 2);
    add_background_object(create_cavesoil13_1456(104, 800), 2);
    add_background_object(create_cavesoil13_1456(104, 768), 2);
    add_background_object(create_cavesoil13_1456(104, 864), 2);
    add_background_object(create_cavesoil25_1317(128, 896), 2);
    add_background_object(create_cavesoil25_1317(256, 960), 2);
    add_background_object(create_cavesoil17_1309(128, 960), 2);
    add_background_object(create_cavesoil17_1309(192, 960), 2);
    add_background_object(create_cavesoil1_1310(0, 1024), 2);
    add_background_object(create_cavesoil1_1310(128, 1024), 2);
    add_background_object(create_cavesoil1_1310(256, 1024), 2);
    add_background_object(create_cavesoil11_1313(96, 936), 2);
    add_background_object(create_cavesoil23_1351(128, 888), 2);
    add_background_object(create_cavesoil14_1314(256, 760), 2);
    add_background_object(create_cavesoil3_1339(512, 880), 2);
    add_background_object(create_cavesoil1_1310(0, 1152), 2);
    add_background_object(create_cavesoil1_1310(128, 1152), 2);
    add_background_object(create_cavesoil1_1310(256, 1152), 2);
    add_background_object(create_cavesoil1_1310(384, 1152), 2);
    add_background_object(create_cavesoil1_1310(512, 1152), 2);
    add_background_object(create_cavesoil1_1310(640, 1152), 2);
    add_background_object(create_cavesoil13_1456(368, 1120), 2);
    add_background_object(create_cavesoil13_1456(368, 1088), 2);
    add_background_object(create_cavesoil13_1456(368, 1056), 2);
    add_background_object(create_cavesoil13_1456(368, 1024), 2);
    add_background_object(create_cavesoil23_1351(256, 952), 2);
    add_background_object(create_cavesoil2_1338(384, 1136), 2);
    add_background_object(create_cavesoil19_1460(384, 1016), 2);
    add_background_object(create_cavesoil2_1338(512, 1136), 2);
    add_background_object(create_cavesoil3_1339(640, 880), 2);
    add_background_object(create_cavesoil16_1344(768, 880), 2);
    add_background_object(create_cavesoil1_1310(768, 1216), 2);
    add_background_object(create_cavesoil1_1310(768, 1088), 2);
    add_background_object(create_cavesoil13_1456(104, 736), 2);
    add_background_object(create_cavesoil13_1456(104, 704), 2);
    add_background_object(create_cavesoil13_1456(104, 672), 2);
    add_background_object(create_cavesoil12_1350(752, 1088), 2);
    add_background_object(create_cavesoil12_1350(752, 1120), 2);
    add_background_object(create_cavesoil2_1338(640, 1136), 2);
    add_background_object(create_cavesoil19_1460(752, 1080), 2);
    add_background_object(create_cavesoil1_1310(0, 1280), 2);
    add_background_object(create_cavesoil1_1310(128, 1280), 2);
    add_background_object(create_cavesoil1_1310(256, 1280), 2);
    add_background_object(create_cavesoil1_1310(384, 1280), 2);
    add_background_object(create_cavesoil1_1310(512, 1280), 2);
    add_background_object(create_cavesoil1_1310(640, 1280), 2);
    add_background_object(create_rmcavebrick4_1434(624, 496), 2);
    add_background_object(create_rmcavebrick4_1434(624, 464), 2);
    add_background_object(create_rmcavebrick4_1434(624, 432), 2);
    add_background_object(create_rmcavebrick4_1434(624, 400), 2);
    add_background_object(create_rmcavebrick4_1434(216, 472), 2);
    add_background_object(create_rmcavebrick4_1434(776, 448), 2);
    add_background_object(create_rmcavebrick4_1434(776, 416), 2);
    add_background_object(create_rmcavebrick4_1434(776, 384), 2);
    add_background_object(create_rmcavebrick4_1434(776, 352), 2);
    add_background_object(create_cavesoil11_1313(-8, 704), 2);
    add_background_object(create_rmcavebrick4_1434(216, 504), 2);
    add_background_object(create_cavesoil18_1305(256, 368), 2);
    add_background_object(create_cavesoil11_1313(176, 232), 2);
    add_background_object(create_cavesoil11_1313(72, 224), 2);
    add_background_object(create_cavesoil11_1313(-8, 240), 2);
    add_background_object(create_cavesoil11_1313(144, 296), 2);
    add_background_object(create_cavesoil2_1338(1176, 392), 2);
    add_background_object(create_cavesoil17_1309(1408, 600), 2);
    add_background_object(create_cavesoil11_1313(1368, 496), 2);
    add_background_object(create_cavesoil13_1456(1440, 648), 2);
    add_background_object(create_cavesoil9_1307(920, 1088), 2);
    add_background_object(create_cavesoil9_1307(1048, 1216), 2);
    add_background_object(create_cavesoil1_1310(920, 1216), 2);
    add_background_object(create_cavesoil11_1313(816, 1088), 2);
    add_background_object(create_cavesoil7_1346(896, 1080), 2);
    add_background_object(create_cavesoil2_1338(768, 1080), 2);
    add_background_object(create_cavesoil11_1313(840, 1184), 2);
    add_background_object(create_rmucurvecave_1458(1520, 1176), 2);
    add_background_object(create_cavesoil16_1344(1408, 696), 2);
    add_background_object(create_cavesoil11_1313(1272, 488), 2);
    add_background_object(create_cavesoil13_1456(1440, 696), 2);
    add_background_object(create_cavesoil1_1310(1152, 1280), 2);
    add_background_object(create_cavesoil11_1313(1040, 1264), 2);
    add_background_object(create_cavesoil4_1345(1024, 1176), 2);
    add_background_object(create_cavesoil1_1310(896, 1344), 2);
    add_background_object(create_cavesoil1_1310(1152, 1408), 2);
    add_background_object(create_cavesoil11_1313(816, 1288), 2);
    add_background_object(create_cavesoil28_1461(1216, 1208), 2);
    add_background_object(create_cavesoil8_1454(1152, 1272), 2);
    add_background_object(create_cavesoil1_1310(1272, 1280), 2);
    add_background_object(create_cavesoil1_1310(1280, 1408), 2);
    add_background_object(create_cavesoil15_1316(968, 912), 2);
    add_background_object(create_cavesoil14_1314(968, 904), 2);
    add_background_object(create_cavesoil11_1313(1192, 864), 2);
    add_background_object(create_cavesoil3_1339(1608, 1024), 2);
    add_background_object(create_cavesoil11_1313(1256, 864), 2);
    add_background_object(create_cavesoil3_1339(1096, 960), 2);
    add_background_object(create_cavesoil3_1339(808, 880), 2);
    add_background_object(create_cavesoil11_1313(1016, 808), 2);
    add_background_object(create_cavesoil11_1313(936, 800), 2);
    add_background_object(create_cavesoil14_1314(936, 888), 2);
    add_background_object(create_cavesoil3_1339(1736, 1024), 2);
    add_background_object(create_cavesoil12_1350(1280, 1152), 2);
    add_background_object(create_cavesoil12_1350(1280, 1184), 2);
    add_background_object(create_cavesoil12_1350(1280, 1216), 2);
    add_background_object(create_cavesoil12_1350(1280, 1248), 2);
    add_background_object(create_cavesoil17_1309(1336, 1216), 2);
    add_background_object(create_cavesoil17_1309(1336, 1152), 2);
    add_background_object(create_cavesoil13_1456(1392, 1152), 2);
    add_background_object(create_cavesoil13_1456(1392, 1184), 2);
    add_background_object(create_cavesoil13_1456(1392, 1216), 2);
    add_background_object(create_cavesoil13_1456(1392, 1248), 2);
    add_background_object(create_cavesoil11_1313(1280, 1176), 2);
    add_background_object(create_cavesoil2_1338(1280, 1136), 2);
    add_background_object(create_cavesoil13_1456(1392, 1280), 2);
    add_background_object(create_cavesoil13_1456(1392, 1312), 2);
    add_background_object(create_cavesoil13_1456(1392, 1344), 2);
    add_background_object(create_cavesoil13_1456(1392, 1376), 2);
    add_background_object(create_cavesoil19_1460(1408, 1136), 2);
    add_background_object(create_edgeoverlay_496(1064, 960), 2);
    add_background_object(create_edgeoverlay_496(1032, 944), 2);
    add_background_object(create_edgeoverlay_496(1000, 928), 2);
    add_background_object(create_edgeoverlay_496(968, 912), 2);
    add_background_object(create_edgeoverlay_496(936, 896), 2);
    add_background_object(create_edgeoverlay_496(1376, 696), 2);
    add_background_object(create_edgeoverlay_496(1344, 680), 2);
    add_background_object(create_edgeoverlay_496(1312, 664), 2);
    add_background_object(create_edgeoverlay_496(1280, 648), 2);
    add_background_object(create_edgeoverlay_496(1272, 584), 2);
    add_background_object(create_edgeoverlay_496(1240, 568), 2);
    add_background_object(create_edgeoverlay_496(1208, 552), 2);
    add_background_object(create_edgeoverlay_496(1176, 536), 2);
    add_background_object(create_edgeoverlay_496(1016, 520), 2);
    add_background_object(create_edgeoverlay_496(984, 504), 2);
    add_background_object(create_edgeoverlay_496(952, 488), 2);
    add_background_object(create_edgeoverlay_496(920, 472), 2);
    add_background_object(create_edgeoverlay_496(640, 360), 2);
    add_background_object(create_edgeoverlay_496(672, 344), 2);
    add_background_object(create_edgeoverlay_496(704, 328), 2);
    add_background_object(create_edgeoverlay_496(736, 312), 2);
    add_background_object(create_edgeoverlay_496(896, 296), 2);
    add_background_object(create_edgeoverlay_496(928, 280), 2);
    add_background_object(create_edgeoverlay_496(960, 264), 2);
    add_background_object(create_edgeoverlay_496(992, 248), 2);
    add_background_object(create_cavesoil29_1465(1080, 1608), 2);
    add_background_object(create_cavesoil21_1349(1424, 1328), 2);
    add_background_object(create_cavesoil1_1310(1408, 1456), 2);
    add_background_object(create_cavesoil1_1310(1536, 1456), 2);
    add_background_object(create_cavesoil1_1310(1664, 1456), 2);
    add_background_object(create_cavesoil1_1310(1992, 1280), 2);
    add_background_object(create_cavesoil1_1310(1992, 1152), 2);
    add_background_object(create_cavesoil1_1310(1992, 1408), 2);
    add_background_object(create_cavesoil1_1310(1792, 1456), 2);
    add_background_object(create_cavesoil1_1310(1992, 1536), 2);
    add_background_object(create_cavesoil1_1310(1408, 1584), 2);
    add_background_object(create_cavesoil1_1310(1536, 1584), 2);
    add_background_object(create_cavesoil1_1310(1664, 1584), 2);
    add_background_object(create_cavesoil1_1310(1792, 1584), 2);
    add_background_object(create_cavesoil12_1350(1976, 1152), 2);
    add_background_object(create_cavesoil19_1460(1976, 1136), 2);
    add_background_object(create_cavesoil2_1338(1992, 1136), 2);
    add_background_object(create_cavesoil12_1350(1976, 1184), 2);
    add_background_object(create_cavesoil12_1350(1976, 1216), 2);
    add_background_object(create_cavesoil12_1350(1976, 1248), 2);
    add_background_object(create_cavesoil12_1350(1976, 1280), 2);
    add_background_object(create_cavesoil12_1350(1976, 1312), 2);
    add_background_object(create_cavesoil12_1350(1976, 1344), 2);
    add_background_object(create_cavesoil12_1350(1976, 1376), 2);
    add_background_object(create_cavesoil12_1350(1976, 1408), 2);
    add_background_object(create_cavesoil11_1313(1304, 1336), 2);
    add_background_object(create_cavesoil11_1313(1328, 1400), 2);
    add_background_object(create_cavesoil1_1310(1280, 1536), 2);
    add_background_object(create_cavesoil1_1310(1152, 1536), 2);
    add_background_object(create_cavesoil1_1310(1024, 1472), 2);
    add_background_object(create_cavesoil1_1310(896, 1472), 2);
    add_background_object(create_cavesoil12_1350(1976, 1440), 2);
    add_background_object(create_cavesoil11_1313(1880, 1448), 2);
    add_background_object(create_cavesoil2_1338(1856, 1448), 2);
    add_background_object(create_cavesoil2_1338(1728, 1448), 2);
    add_background_object(create_cavesoil2_1338(1512, 1448), 2);
    add_background_object(create_cavesoil8_1454(1664, 1448), 2);
    add_background_object(create_cavesoil19_1460(1496, 1448), 2);
    add_background_object(create_cavesoil3_1339(1864, 1024), 2);
    add_background_object(create_rmcavebrick5_1448(1736, 1296), 2);
    add_background_object(create_rmcavebrick4_1434(1368, 1104), 2);
    add_background_object(create_rmcavebrick4_1434(1368, 1072), 2);
    add_background_object(create_cavesoil27_1304(2056, 984), 2);
    add_background_object(create_cavesoil18_1305(2056, 968), 2);
    add_background_object(create_cavesoil11_1313(1928, 856), 2);
    add_background_object(create_cavesoil11_1313(688, 1160), 2);
    add_background_object(create_rmcavebrick4_1434(1112, 576), 2);
    add_background_object(create_rmcavebrick4_1434(1112, 608), 2);
    add_background_object(create_rmcavebrick4_1434(1112, 640), 2);
    add_background_object(create_rmcavebrick4_1434(1112, 672), 2);
    add_background_object(create_rmcavebrick4_1434(1064, 336), 2);
    add_background_object(create_rmcavebrick4_1434(1064, 304), 2);
    add_background_object(create_rmcavebrick4_1434(1064, 272), 2);
    add_background_object(create_cavesoil1_1310(1152, 0), 2);
    add_background_object(create_cavesoil1_1310(1152, 128), 2);
    add_background_object(create_cavesoil1_1310(1280, 0), 2);
    add_background_object(create_cavesoil1_1310(1408, 0), 2);
    add_background_object(create_cavesoil3_1339(1408, 104), 2);
    add_background_object(create_cavesoil1_1310(1536, 0), 2);
    add_background_object(create_cavesoil1_1310(1664, 0), 2);
    add_background_object(create_cavesoil1_1310(1664, 128), 2);
    add_background_object(create_cavesoil17_1309(1856, 472), 2);
    add_background_object(create_cavesoil17_1309(1920, 472), 2);
    add_background_object(create_cavesoil25_1317(1856, 408), 2);
    add_background_object(create_cavesoil11_1313(1848, 456), 2);
    add_background_object(create_cavesoil2_1338(1728, 392), 2);
    add_background_object(create_cavesoil8_1454(1664, 392), 2);
    add_background_object(create_cavesoil23_1351(1856, 392), 2);
    add_background_object(create_cavesoil25_1317(1984, 472), 2);
    add_background_object(create_cavesoil23_1351(1984, 456), 2);
    add_background_object(create_cavesoil16_1344(1872, 648), 2);
    add_background_object(create_cavesoil16_1344(1920, 648), 2);
    add_background_object(create_cavesoil18_1305(1984, 592), 2);
    add_background_object(create_cavesoil17_1309(1984, 536), 2);
    add_background_object(create_cavesoil17_1309(2112, 536), 2);
    add_background_object(create_cavesoil13_1456(2160, 536), 2);
    add_background_object(create_cavesoil13_1456(2160, 568), 2);
    add_background_object(create_cavesoil16_1344(2112, 584), 2);
    add_background_object(create_cavesoil8_1454(2112, 520), 2);
    add_background_object(create_cavesoil19_1460(2176, 520), 2);
    add_background_object(create_cavesoil20_1464(2176, 592), 2);
    add_background_object(create_cavesoil13_1456(1976, 824), 2);
    add_background_object(create_cavesoil13_1456(1976, 792), 2);
    add_background_object(create_cavesoil2_1338(1872, 784), 2);
    add_background_object(create_cavesoil19_1460(1992, 784), 2);
    add_background_object(create_cavesoil1_1310(2120, 792), 2);
    add_background_object(create_cavesoil12_1350(2104, 824), 2);
    add_background_object(create_cavesoil12_1350(2104, 792), 2);
    add_background_object(create_cavesoil19_1460(2104, 784), 2);
    add_background_object(create_cavesoil2_1338(1992, 848), 2);
    add_background_object(create_cavesoil2_1338(2120, 784), 2);
    add_background_object(create_cavesoil1_1310(1792, 0), 2);
    add_background_object(create_cavesoil1_1310(1792, 128), 2);
    add_background_object(create_cavesoil15_1316(1792, 256), 2);
    add_background_object(create_cavesoil14_1314(1792, 240), 2);
    add_background_object(create_cavesoil15_1316(1920, 320), 2);
    add_background_object(create_cavesoil17_1309(1984, 256), 2);
    add_background_object(create_cavesoil17_1309(1920, 256), 2);
    add_background_object(create_cavesoil14_1314(1920, 304), 2);
    add_background_object(create_cavesoil1_1310(1920, 0), 2);
    add_background_object(create_cavesoil1_1310(1920, 128), 2);
    add_background_object(create_cavesoil11_1313(1920, 160), 2);
    add_background_object(create_cavesoil26_1352(2248, 728), 2);
    add_background_object(create_cavesoil1_1310(2248, 792), 2);
    add_background_object(create_cavesoil1_1310(2376, 792), 2);
    add_background_object(create_cavesoil1_1310(2504, 792), 2);
    add_background_object(create_cavesoil17_1309(2376, 728), 2);
    add_background_object(create_cavesoil17_1309(2440, 728), 2);
    add_background_object(create_cavesoil17_1309(2504, 728), 2);
    add_background_object(create_cavesoil17_1309(2568, 728), 2);
    add_background_object(create_cavesoil11_1313(2336, 752), 2);
    add_background_object(create_cavesoil24_1353(2248, 720), 2);
    add_background_object(create_cavesoil12_1350(2616, 664), 2);
    add_background_object(create_cavesoil12_1350(2616, 696), 2);
    add_background_object(create_cavesoil2_1338(2376, 720), 2);
    add_background_object(create_cavesoil19_1460(2616, 656), 2);
    add_background_object(create_cavesoil1_1310(2048, 0), 2);
    add_background_object(create_cavesoil1_1310(2048, 128), 2);
    add_background_object(create_cavesoil1_1310(2048, 256), 2);
    add_background_object(create_cavesoil3_1339(2048, 360), 2);
    add_background_object(create_cavesoil1_1310(2176, 128), 2);
    add_background_object(create_cavesoil1_1310(2176, 256), 2);
    add_background_object(create_cavesoil15_1316(2176, 384), 2);
    add_background_object(create_cavesoil14_1314(2176, 368), 2);
    add_background_object(create_cavesoil15_1316(2304, 448), 2);
    add_background_object(create_cavesoil17_1309(2368, 384), 2);
    add_background_object(create_cavesoil17_1309(2304, 384), 2);
    add_background_object(create_cavesoil14_1314(2304, 432), 2);
    add_background_object(create_cavesoil1_1310(2304, 128), 2);
    add_background_object(create_cavesoil1_1310(2304, 256), 2);
    add_background_object(create_cavesoil11_1313(2304, 288), 2);
    add_background_object(create_cavesoil1_1310(2176, 0), 2);
    add_background_object(create_cavesoil1_1310(2304, 0), 2);
    add_background_object(create_cavesoil1_1310(2560, 128), 2);
    add_background_object(create_cavesoil1_1310(2560, 256), 2);
    add_background_object(create_cavesoil1_1310(2560, 384), 2);
    add_background_object(create_cavesoil1_1310(2560, 0), 2);
    add_background_object(create_cavesoil8_1454(2632, 656), 2);
    add_background_object(create_cavesoil17_1309(2632, 728), 2);
    add_background_object(create_cavesoil17_1309(2632, 792), 2);
    add_background_object(create_cavesoil17_1309(2632, 856), 2);
    add_background_object(create_cavesoil11_1313(2568, 768), 2);
    add_background_object(create_cavesoil13_1456(2680, 664), 2);
    add_background_object(create_cavesoil13_1456(2680, 696), 2);
    add_background_object(create_cavesoil13_1456(2680, 728), 2);
    add_background_object(create_cavesoil13_1456(2680, 760), 2);
    add_background_object(create_cavesoil13_1456(2680, 792), 2);
    add_background_object(create_cavesoil13_1456(2680, 824), 2);
    add_background_object(create_cavesoil13_1456(2680, 856), 2);
    add_background_object(create_cavesoil13_1456(2680, 888), 2);
    add_background_object(create_cavesoil20_1464(2696, 904), 2);
    add_background_object(create_cavesoil19_1460(2696, 656), 2);
    add_background_object(create_cavesoil13_1456(2680, 480), 2);
    add_background_object(create_cavesoil3_1339(2568, 488), 2);
    add_background_object(create_cavesoil20_1464(2696, 496), 2);
    add_background_object(create_cavesoil20_1464(2560, 496), 2);
    add_background_object(create_cavesoil13_1456(2680, 256), 2);
    add_background_object(create_cavesoil13_1456(2680, 288), 2);
    add_background_object(create_cavesoil13_1456(2680, 320), 2);
    add_background_object(create_cavesoil13_1456(2680, 352), 2);
    add_background_object(create_cavesoil13_1456(2680, 384), 2);
    add_background_object(create_cavesoil13_1456(2680, 416), 2);
    add_background_object(create_cavesoil13_1456(2680, 448), 2);
    add_background_object(create_cavesoil13_1456(2680, 64), 2);
    add_background_object(create_cavesoil13_1456(2680, 96), 2);
    add_background_object(create_cavesoil13_1456(2680, 128), 2);
    add_background_object(create_cavesoil13_1456(2680, 160), 2);
    add_background_object(create_cavesoil13_1456(2680, 192), 2);
    add_background_object(create_cavesoil13_1456(2680, 224), 2);
    add_background_object(create_cavesoil13_1456(2680, 0), 2);
    add_background_object(create_cavesoil13_1456(2680, 32), 2);
    add_background_object(create_cavesoil1_1310(2824, 664), 2);
    add_background_object(create_cavesoil1_1310(2824, 792), 2);
    add_background_object(create_cavesoil1_1310(2824, 256), 2);
    add_background_object(create_cavesoil1_1310(2824, 384), 2);
    add_background_object(create_cavesoil12_1350(2808, 256), 2);
    add_background_object(create_cavesoil12_1350(2808, 288), 2);
    add_background_object(create_cavesoil12_1350(2808, 320), 2);
    add_background_object(create_cavesoil12_1350(2808, 352), 2);
    add_background_object(create_cavesoil12_1350(2808, 384), 2);
    add_background_object(create_cavesoil12_1350(2808, 416), 2);
    add_background_object(create_cavesoil12_1350(2808, 448), 2);
    add_background_object(create_cavesoil12_1350(2808, 480), 2);
    add_background_object(create_cavesoil12_1350(2808, 664), 2);
    add_background_object(create_cavesoil12_1350(2808, 696), 2);
    add_background_object(create_cavesoil12_1350(2808, 728), 2);
    add_background_object(create_cavesoil12_1350(2808, 760), 2);
    add_background_object(create_cavesoil12_1350(2808, 792), 2);
    add_background_object(create_cavesoil12_1350(2808, 824), 2);
    add_background_object(create_cavesoil12_1350(2808, 856), 2);
    add_background_object(create_cavesoil12_1350(2808, 888), 2);
    add_background_object(create_cavesoil19_1460(2808, 656), 2);
    add_background_object(create_cavesoil2_1338(2824, 656), 2);
    add_background_object(create_cavesoil20_1464(2808, 496), 2);
    add_background_object(create_cavesoil1_1310(2824, 0), 2);
    add_background_object(create_cavesoil12_1350(2808, 0), 2);
    add_background_object(create_cavesoil12_1350(2808, 32), 2);
    add_background_object(create_cavesoil12_1350(2808, 64), 2);
    add_background_object(create_cavesoil12_1350(2808, 96), 2);
    add_background_object(create_cavesoil3_1339(2824, 896), 2);
    add_background_object(create_cavesoil20_1464(2808, 904), 2);
    add_background_object(create_cavesoil19_1460(2808, 240), 2);
    add_background_object(create_cavesoil20_1464(2808, 120), 2);
    add_background_object(create_cavesoil1_1310(2952, 256), 2);
    add_background_object(create_cavesoil1_1310(2952, 128), 2);
    add_background_object(create_cavesoil1_1310(2952, 0), 2);
    add_background_object(create_cavesoil1_1310(3080, 64), 2);
    add_background_object(create_cavesoil12_1350(2936, 128), 2);
    add_background_object(create_cavesoil12_1350(2936, 160), 2);
    add_background_object(create_cavesoil12_1350(2936, 192), 2);
    add_background_object(create_cavesoil12_1350(2936, 224), 2);
    add_background_object(create_cavesoil3_1339(2824, 112), 2);
    add_background_object(create_cavesoil2_1338(2824, 240), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 704), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 672), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 640), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 736), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 472), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 440), 2);
    add_background_object(create_rmcavebrick4_1434(2144, 408), 2);
    add_background_object(create_cavesoilcrater_1354(2152, 776), 2);
    add_background_object(create_cavesoil2_1338(2504, 720), 2);
    add_background_object(create_cavesoil3_1339(2568, 896), 2);
    add_background_object(create_cavesoil1_1310(2432, 128), 2);
    add_background_object(create_cavesoil1_1310(2432, 256), 2);
    add_background_object(create_cavesoil1_1310(2432, 384), 2);
    add_background_object(create_cavesoil1_1310(2432, 0), 2);
    add_background_object(create_cavesoil3_1339(2432, 488), 2);
    add_background_object(create_cavesoil8_1454(1600, 1448), 2);
    add_background_object(create_cavesoil11_1313(1888, 1536), 2);
    add_background_object(create_cavesoil1_1310(1280, 1584), 2);
    add_background_object(create_cavesoil11_1313(1264, 1544), 2);
    add_background_object(create_cavesoil1_1310(1280, 1712), 2);
    add_background_object(create_cavesoil1_1310(1408, 1712), 2);
    add_background_object(create_cavesoil1_1310(1536, 1712), 2);
    add_background_object(create_cavesoil1_1310(1664, 1712), 2);
    add_background_object(create_cavesoil1_1310(1792, 1712), 2);
    add_background_object(create_cavesoil1_1310(1920, 1712), 2);
    add_background_object(create_cavesoil27_1304(2440, 920), 2);
    add_background_object(create_cavesoil18_1305(2440, 904), 2);
    add_background_object(create_cavesoil17_1309(2376, 920), 2);
    add_background_object(create_cavesoil17_1309(2312, 920), 2);
    add_background_object(create_cavesoil17_1309(2248, 920), 2);
    add_background_object(create_cavesoil17_1309(2184, 920), 2);
    add_background_object(create_cavesoil17_1309(2120, 920), 2);
    add_background_object(create_cavesoil11_1313(2128, 840), 2);
    add_background_object(create_cavesoil11_1313(2256, 848), 2);
    add_background_object(create_cavesoil11_1313(2376, 824), 2);
    add_background_object(create_cavesoil3_1339(2312, 960), 2);
    add_background_object(create_cavesoil3_1339(2184, 960), 2);
    add_background_object(create_cavesoil17_1309(2824, 1048), 2);
    add_background_object(create_cavesoil17_1309(2888, 1048), 2);
    add_background_object(create_cavesoil12_1350(2808, 1080), 2);
    add_background_object(create_cavesoil12_1350(2808, 1048), 2);
    add_background_object(create_cavesoil2_1338(2824, 1032), 2);
    add_background_object(create_cavesoil19_1460(2808, 1032), 2);
    add_background_object(create_cavesoil20_1464(2808, 1104), 2);
    add_background_object(create_cavesoil1_1310(2824, 1240), 2);
    add_background_object(create_cavesoil1_1310(2568, 1240), 2);
    add_background_object(create_cavesoil12_1350(2808, 1336), 2);
    add_background_object(create_cavesoil12_1350(2808, 1304), 2);
    add_background_object(create_cavesoil12_1350(2808, 1272), 2);
    add_background_object(create_cavesoil12_1350(2808, 1240), 2);
    add_background_object(create_cavesoil19_1460(2808, 1224), 2);
    add_background_object(create_cavesoil13_1456(2680, 1240), 2);
    add_background_object(create_cavesoil13_1456(2680, 1272), 2);
    add_background_object(create_cavesoil13_1456(2680, 1304), 2);
    add_background_object(create_cavesoil13_1456(2680, 1336), 2);
    add_background_object(create_cavesoil2_1338(2568, 1224), 2);
    add_background_object(create_cavesoil19_1460(2696, 1224), 2);
    add_background_object(create_cavesoil3_1339(2824, 1096), 2);
    add_background_object(create_cavesoil25_1317(2120, 1152), 2);
    add_background_object(create_cavesoil25_1317(2248, 1216), 2);
    add_background_object(create_cavesoil1_1310(2120, 1280), 2);
    add_background_object(create_cavesoil1_1310(2248, 1280), 2);
    add_background_object(create_cavesoil1_1310(2376, 1280), 2);
    add_background_object(create_cavesoil26_1352(2440, 1240), 2);
    add_background_object(create_cavesoil17_1309(2184, 1216), 2);
    add_background_object(create_cavesoil17_1309(2120, 1216), 2);
    add_background_object(create_cavesoil11_1313(2088, 1192), 2);
    add_background_object(create_cavesoil11_1313(2208, 1256), 2);
    add_background_object(create_cavesoil23_1351(2120, 1136), 2);
    add_background_object(create_cavesoil23_1351(2248, 1200), 2);
    add_background_object(create_cavesoil24_1353(2440, 1224), 2);
    add_background_object(create_cavesoil11_1313(2392, 1272), 2);
    add_background_object(create_cavesoil8_1454(2376, 1264), 2);
    add_background_object(create_cavesoil8_1454(2424, 1264), 2);
    add_background_object(create_cavesoil1_1310(2568, 1368), 2);
    add_background_object(create_cavesoil1_1310(2440, 1368), 2);
    add_background_object(create_cavesoil11_1313(2480, 1280), 2);
    add_background_object(create_cavesoil13_1456(2680, 1496), 2);
    add_background_object(create_cavesoil1_1310(2824, 1368), 2);
    add_background_object(create_cavesoil12_1350(2808, 1496), 2);
    add_background_object(create_cavesoil1_1310(2952, 1368), 2);
    add_background_object(create_cavesoil1_1310(2568, 1496), 2);
    add_background_object(create_cavesoil1_1310(2440, 1496), 2);
    add_background_object(create_cavesoil1_1310(2824, 1496), 2);
    add_background_object(create_cavesoil1_1310(2952, 1496), 2);
    add_background_object(create_cavesoil1_1310(2568, 1624), 2);
    add_background_object(create_cavesoil1_1310(2440, 1624), 2);
    add_background_object(create_cavesoil1_1310(2824, 1624), 2);
    add_background_object(create_cavesoil1_1310(2952, 1624), 2);
    add_background_object(create_cavesoil1_1310(2696, 1624), 2);
    add_background_object(create_cavesoil1_1310(2696, 1752), 2);
    add_background_object(create_cavesoil13_1456(2680, 1528), 2);
    add_background_object(create_cavesoil13_1456(2680, 1560), 2);
    add_background_object(create_cavesoil13_1456(2680, 1592), 2);
    add_background_object(create_cavesoil12_1350(2808, 1560), 2);
    add_background_object(create_cavesoil12_1350(2808, 1528), 2);
    add_background_object(create_cavesoil12_1350(2808, 1592), 2);
    add_background_object(create_cavesoil2_1338(2696, 1616), 2);
    add_background_object(create_cavesoil13_1456(2680, 1368), 2);
    add_background_object(create_cavesoil12_1350(2808, 1368), 2);
    add_background_object(create_cavesoil13_1456(2680, 1400), 2);
    add_background_object(create_cavesoil13_1456(2680, 1432), 2);
    add_background_object(create_cavesoil13_1456(2680, 1464), 2);
    add_background_object(create_cavesoil12_1350(2808, 1432), 2);
    add_background_object(create_cavesoil12_1350(2808, 1400), 2);
    add_background_object(create_cavesoil12_1350(2808, 1464), 2);
    add_background_object(create_cavesoil1_1310(2120, 1408), 2);
    add_background_object(create_cavesoil1_1310(2248, 1408), 2);
    add_background_object(create_cavesoil1_1310(2568, 1752), 2);
    add_background_object(create_cavesoil1_1310(2440, 1752), 2);
    add_background_object(create_cavesoil1_1310(2824, 1752), 2);
    add_background_object(create_cavesoil1_1310(2952, 1752), 2);
    add_background_object(create_cavesoil11_1313(2336, 1368), 2);
    add_background_object(create_cavesoil11_1313(2336, 1464), 2);
    add_background_object(create_edgeoverlay_496(1792, 248), 2);
    add_background_object(create_edgeoverlay_496(1824, 264), 2);
    add_background_object(create_edgeoverlay_496(1856, 280), 2);
    add_background_object(create_edgeoverlay_496(1888, 296), 2);
    add_background_object(create_edgeoverlay_496(1920, 312), 2);
    add_background_object(create_edgeoverlay_496(1952, 328), 2);
    add_background_object(create_edgeoverlay_496(1984, 344), 2);
    add_background_object(create_edgeoverlay_496(2016, 360), 2);
    add_background_object(create_edgeoverlay_496(2176, 376), 2);
    add_background_object(create_edgeoverlay_496(2208, 392), 2);
    add_background_object(create_edgeoverlay_496(2240, 408), 2);
    add_background_object(create_edgeoverlay_496(2272, 424), 2);
    add_background_object(create_edgeoverlay_496(2304, 440), 2);
    add_background_object(create_edgeoverlay_496(2336, 456), 2);
    add_background_object(create_edgeoverlay_496(2368, 472), 2);
    add_background_object(create_edgeoverlay_496(2400, 488), 2);
    add_background_object(create_cavesoil17_1309(2952, 1048), 2);
    add_background_object(create_cavesoil17_1309(3016, 1048), 2);
    add_background_object(create_cavesoil11_1313(2880, 1232), 2);
    add_background_object(create_cavesoil4_1345(3016, 1256), 2);
    add_background_object(create_cavesoil8_1454(2888, 1224), 2);
    add_background_object(create_cavesoil8_1454(2824, 1224), 2);
    add_background_object(create_cavesoil7_1346(2952, 1224), 2);
    add_background_object(create_cavesoil11_1313(2920, 1320), 2);
    add_background_object(create_cavesoil3_1339(2952, 1096), 2);
    add_background_object(create_cavesoil11_1313(3032, 976), 2);
    add_background_object(create_cavesoil6_1340(3016, 904), 2);
    add_background_object(create_cavesoil5_1347(2952, 936), 2);
    add_background_object(create_loop7back_1452(3208, 1448), 2);
    add_background_object(create_loop1_1466(3272, 1256), 2);
    add_background_object(create_loop3_1467(3304, 1160), 2);
    add_background_object(create_loop5back_1468(3208, 1160), 2);
    add_background_object(create_loop2_1469(3400, 1208), 2);
    add_background_object(create_loop4_1470(3256, 1144), 2);
    add_background_object(create_loop6down_1471(3184, 1384), 2);
    add_background_object(create_levellayer116back_1453(3184, 1256), 2);
    add_background_object(create_levellayer116back_1453(3184, 1384), 2);
    add_background_object(create_rmcavebrick13_1443(3272, 1384), 2);
    add_background_object(create_rmcavebrick13_1443(3336, 1384), 2);
    add_background_object(create_cavesoil21_1349(3208, 1416), 2);
    add_background_object(create_rmcavebrick7_1446(3144, 1352), 2);
    add_background_object(create_rmcavebrick6_1436(3144, 1448), 2);
    add_background_object(create_cavesoil1_1310(3208, 1544), 2);
    add_background_object(create_cavesoil1_1310(3080, 1552), 2);
    add_background_object(create_cavesoil11_1313(3096, 1456), 2);
    add_background_object(create_cavesoil11_1313(3040, 1432), 2);
    add_background_object(create_rmcavebrick8_1437(3120, 1128), 2);
    add_background_object(create_rmcavebrick14_1442(3120, 1160), 2);
    add_background_object(create_cavesoil11_1313(3192, 1016), 2);
    add_background_object(create_cavesoil11_1313(3104, 1016), 2);
    add_background_object(create_cavesoil11_1313(3280, 1016), 2);
    add_background_object(create_cavesoil11_1313(3368, 1024), 2);
    add_background_object(create_cavesoil11_1313(3416, 1096), 2);
    add_background_object(create_cavesoil11_1313(3424, 1192), 2);
    add_background_object(create_rmcavebrick13_1443(3400, 1384), 2);
    add_background_object(create_cavesoil11_1313(3424, 1272), 2);
    add_background_object(create_cavesoil1_1310(3208, 1680), 2);
    add_background_object(create_cavesoil1_1310(3080, 1680), 2);
    add_background_object(create_cavesoil11_1313(3016, 1552), 2);
    add_background_object(create_cavesoil1_1310(3336, 1552), 2);
    add_background_object(create_cavesoil1_1310(3336, 1680), 2);
    add_background_object(create_cavesoil2_1338(3336, 1544), 2);
    add_background_object(create_cavesoil11_1313(3128, 1576), 2);
    add_background_object(create_cavesoil11_1313(3224, 1592), 2);
    add_background_object(create_cavesoil19_1460(3320, 1544), 2);
    add_background_object(create_cavesoil1_1310(3592, 1552), 2);
    add_background_object(create_cavesoil1_1310(3592, 1680), 2);
    add_background_object(create_cavesoil2_1338(3592, 1544), 2);
    add_background_object(create_cavesoil1_1310(3208, 1808), 2);
    add_background_object(create_cavesoil1_1310(3080, 1808), 2);
    add_background_object(create_cavesoil1_1310(3336, 1808), 2);
    add_background_object(create_cavesoil1_1310(3592, 1808), 2);
    add_background_object(create_cavesoil12_1350(3832, 1656), 2);
    add_background_object(create_cavesoil12_1350(3832, 1624), 2);
    add_background_object(create_cavesoil12_1350(3832, 1592), 2);
    add_background_object(create_cavesoil12_1350(3832, 1560), 2);
    add_background_object(create_cavesoil12_1350(3832, 1752), 2);
    add_background_object(create_cavesoil12_1350(3832, 1720), 2);
    add_background_object(create_cavesoil12_1350(3832, 1784), 2);
    add_background_object(create_cavesoil12_1350(3832, 1688), 2);
    add_background_object(create_cavesoil19_1460(3832, 1544), 2);
    add_background_object(create_cavesoil19_1460(3720, 1544), 2);
    add_background_object(create_cavesoil13_1456(3704, 1560), 2);
    add_background_object(create_cavesoil13_1456(3704, 1592), 2);
    add_background_object(create_cavesoil13_1456(3704, 1624), 2);
    add_background_object(create_cavesoil13_1456(3704, 1656), 2);
    add_background_object(create_cavesoil13_1456(3704, 1720), 2);
    add_background_object(create_cavesoil13_1456(3704, 1752), 2);
    add_background_object(create_cavesoil13_1456(3704, 1784), 2);
    add_background_object(create_cavesoil13_1456(3704, 1688), 2);
    add_background_object(create_cavesoil1_1310(3720, 1808), 2);
    add_background_object(create_cavesoil1_1310(3720, 1936), 2);
    add_background_object(create_cavesoil2_1338(3720, 1800), 2);
    add_background_object(create_cavesoil1_1310(3848, 1936), 2);
    add_background_object(create_cavesoil1_1310(3336, 1936), 2);
    add_background_object(create_cavesoil1_1310(3592, 1936), 2);
    add_background_object(create_cavesoil1_1310(3208, 1936), 2);
    add_background_object(create_cavesoil2_1338(3848, 1544), 2);
    add_background_object(create_cavesoil13_1456(3704, 1296), 2);
    add_background_object(create_cavesoil13_1456(3704, 1328), 2);
    add_background_object(create_cavesoil13_1456(3704, 1360), 2);
    add_background_object(create_cavesoil13_1456(3704, 1392), 2);
    add_background_object(create_cavesoil20_1464(3720, 1416), 2);
    add_background_object(create_cavesoil3_1339(3592, 1408), 2);
    add_background_object(create_rmcavebrick1_1449(3832, 1408), 2);
    add_background_object(create_rmcavebrick3_1440(3856, 1408), 2);
    add_background_object(create_rmcavebrick2_1445(3920, 1408), 2);
    add_background_object(create_cavesoil1_1310(3848, 1168), 2);
    add_background_object(create_cavesoil12_1350(3832, 1232), 2);
    add_background_object(create_cavesoil12_1350(3832, 1200), 2);
    add_background_object(create_cavesoil12_1350(3832, 1168), 2);
    add_background_object(create_cavesoil12_1350(3832, 1264), 2);
    add_background_object(create_cavesoil20_1464(3832, 1288), 2);
    add_background_object(create_cavesoil3_1339(3848, 1280), 2);
    add_background_object(create_cavesoil1_1310(3976, 1168), 2);
    add_background_object(create_cavesoil1_1310(3976, 1552), 2);
    add_background_object(create_cavesoil1_1310(3976, 1680), 2);
    add_background_object(create_cavesoil1_1310(3976, 1808), 2);
    add_background_object(create_cavesoil1_1310(3976, 1936), 2);
    add_background_object(create_cavesoil1_1310(4104, 1680), 2);
    add_background_object(create_cavesoil1_1310(4104, 1808), 2);
    add_background_object(create_cavesoil1_1310(4104, 1936), 2);
    add_background_object(create_cavesoil12_1350(4040, 1520), 2);
    add_background_object(create_cavesoil12_1350(4040, 1488), 2);
    add_background_object(create_cavesoil12_1350(4040, 1456), 2);
    add_background_object(create_cavesoil12_1350(4040, 1424), 2);
    add_background_object(create_cavesoil12_1350(4040, 1392), 2);
    add_background_object(create_cavesoil12_1350(4040, 1360), 2);
    add_background_object(create_cavesoil12_1350(4040, 1328), 2);
    add_background_object(create_cavesoil12_1350(4040, 1296), 2);
    add_background_object(create_cavesoil28_1461(3976, 1480), 2);
    add_background_object(create_cavesoil32_1472(3976, 1280), 2);
    add_background_object(create_cavesoil13_1456(3704, 1168), 2);
    add_background_object(create_cavesoil13_1456(3704, 1200), 2);
    add_background_object(create_cavesoil13_1456(3704, 1232), 2);
    add_background_object(create_cavesoil13_1456(3704, 1264), 2);
    add_background_object(create_cavesoil1_1310(3464, 1552), 2);
    add_background_object(create_cavesoil1_1310(3464, 1680), 2);
    add_background_object(create_cavesoil2_1338(3464, 1544), 2);
    add_background_object(create_cavesoil1_1310(3464, 1808), 2);
    add_background_object(create_cavesoil1_1310(3464, 1936), 2);
    add_background_object(create_cavesoil3_1339(3464, 1408), 2);
    add_background_object(create_cavesoil2_1338(3592, 1152), 2);
    add_background_object(create_cavesoil19_1460(3832, 1152), 2);
    add_background_object(create_cavesoil19_1460(3720, 1152), 2);
    add_background_object(create_cavesoil2_1338(3848, 1152), 2);
    add_background_object(create_cavesoil2_1338(4040, 1152), 2);
    add_background_object(create_rmcavebrick4_1434(3672, 1464), 2);
    add_background_object(create_rmcavebrick4_1434(3672, 1496), 2);
    add_background_object(create_rmcavebrick4_1434(3464, 1464), 2);
    add_background_object(create_rmcavebrick4_1434(3464, 1496), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1472), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1440), 2);
    add_background_object(create_rmcavebrick4_1434(3352, 1504), 2);
    add_background_object(create_rmcavebrick4_1434(3680, 1120), 2);
    add_background_object(create_rmcavebrick5_1448(3680, 1088), 2);
    add_background_object(create_cavesoil1_1310(2952, 664), 2);
    add_background_object(create_cavesoil33_1447(3080, 664), 2);
    add_background_object(create_cavesoil13_1456(2936, 880), 2);
    add_background_object(create_cavesoil13_1456(2936, 848), 2);
    add_background_object(create_cavesoil20_1464(2952, 904), 2);
    add_background_object(create_cavesoil34_1473(3120, 720), 2);
    add_background_object(create_cavesoil13_1456(3144, 920), 2);
    add_background_object(create_cavesoil19_1460(3160, 904), 2);
    add_background_object(create_cavesoil19_1460(3144, 904), 2);
    add_background_object(create_cavesoil13_1456(3144, 952), 2);
    add_background_object(create_rmcavebrick7_1446(3496, 968), 2);
    add_background_object(create_rmcavebrick2_1445(3560, 968), 2);
    add_background_object(create_rmcavebrick9_1455(3560, 1000), 2);
    add_background_object(create_rmcavebrick9_1455(3560, 1032), 2);
    add_background_object(create_rmcavebrick9_1455(3560, 1064), 2);
    add_background_object(create_rmcavebrick9_1455(3560, 1096), 2);
    add_background_object(create_rmcavebrick9_1455(3560, 1128), 2);
    add_background_object(create_cavesoil11_1313(3464, 1136), 2);
    add_background_object(create_cavesoil19_1460(3576, 1152), 2);
    add_background_object(create_rmcavebrick1_1449(3344, 968), 2);
    add_background_object(create_rmladder_1152(3584, 1000), 2);
    add_background_object(create_rmladder_1152(3584, 968), 2);
    add_background_object(create_rmladder_1152(3584, 1032), 2);
    add_background_object(create_rmladder_1152(3584, 1064), 2);
    add_background_object(create_rmcavebrick4_1434(2264, 1168), 2);
    add_background_object(create_rmcavebrick4_1434(2264, 1136), 2);
    add_background_object(create_rmcavebrick4_1434(2344, 1200), 2);
    add_background_object(create_rmcavebrick4_1434(2344, 1168), 2);
    add_background_object(create_rmcavebrick4_1434(2424, 1232), 2);
    add_background_object(create_rmcavebrick5_1448(2264, 1104), 2);
    add_background_object(create_rmcavebrick5_1448(2344, 1136), 2);
    add_background_object(create_rmcavebrick5_1448(2424, 1200), 2);
    add_background_object(create_rmcavebrick2_1445(2640, 1032), 2);
    add_background_object(create_rmladder_1152(2664, 1032), 2);
    add_background_object(create_rmladder_1152(2664, 1064), 2);
    add_background_object(create_rmladder_1152(2664, 1096), 2);
    add_background_object(create_rmcavebrick3_1440(2576, 1032), 2);
    add_background_object(create_rmcavebrick1_1449(2552, 1032), 2);
    add_background_object(create_cavesoil2_1338(2952, 656), 2);
    add_background_object(create_cavesoil1_1310(3592, 384), 2);
    add_background_object(create_cavesoil13_1456(3704, 448), 2);
    add_background_object(create_cavesoil13_1456(3704, 480), 2);
    add_background_object(create_cavesoil13_1456(3704, 384), 2);
    add_background_object(create_cavesoil13_1456(3704, 416), 2);
    add_background_object(create_cavesoil1_1310(3848, 384), 2);
    add_background_object(create_cavesoil12_1350(3832, 384), 2);
    add_background_object(create_cavesoil12_1350(3832, 416), 2);
    add_background_object(create_cavesoil12_1350(3832, 448), 2);
    add_background_object(create_cavesoil12_1350(3832, 480), 2);
    add_background_object(create_cavesoil1_1310(3592, 256), 2);
    add_background_object(create_cavesoil13_1456(3704, 320), 2);
    add_background_object(create_cavesoil13_1456(3704, 352), 2);
    add_background_object(create_cavesoil13_1456(3704, 256), 2);
    add_background_object(create_cavesoil13_1456(3704, 288), 2);
    add_background_object(create_cavesoil1_1310(3592, 128), 2);
    add_background_object(create_cavesoil13_1456(3704, 192), 2);
    add_background_object(create_cavesoil13_1456(3704, 224), 2);
    add_background_object(create_cavesoil13_1456(3704, 128), 2);
    add_background_object(create_cavesoil13_1456(3704, 160), 2);
    add_background_object(create_cavesoil1_1310(3848, 128), 2);
    add_background_object(create_cavesoil12_1350(3832, 128), 2);
    add_background_object(create_cavesoil12_1350(3832, 160), 2);
    add_background_object(create_cavesoil12_1350(3832, 192), 2);
    add_background_object(create_cavesoil12_1350(3832, 224), 2);
    add_background_object(create_cavesoil1_1310(3592, 0), 2);
    add_background_object(create_cavesoil13_1456(3704, 64), 2);
    add_background_object(create_cavesoil13_1456(3704, 96), 2);
    add_background_object(create_cavesoil13_1456(3704, 0), 2);
    add_background_object(create_cavesoil13_1456(3704, 32), 2);
    add_background_object(create_cavesoil1_1310(3848, 0), 2);
    add_background_object(create_cavesoil12_1350(3832, 0), 2);
    add_background_object(create_cavesoil12_1350(3832, 32), 2);
    add_background_object(create_cavesoil12_1350(3832, 64), 2);
    add_background_object(create_cavesoil12_1350(3832, 96), 2);
    add_background_object(create_cavesoil1_1310(3592, 512), 2);
    add_background_object(create_cavesoil13_1456(3704, 576), 2);
    add_background_object(create_cavesoil13_1456(3704, 608), 2);
    add_background_object(create_cavesoil13_1456(3704, 512), 2);
    add_background_object(create_cavesoil13_1456(3704, 544), 2);
    add_background_object(create_cavesoil1_1310(3848, 640), 2);
    add_background_object(create_cavesoil12_1350(3832, 640), 2);
    add_background_object(create_cavesoil12_1350(3832, 672), 2);
    add_background_object(create_cavesoil12_1350(3832, 704), 2);
    add_background_object(create_cavesoil12_1350(3832, 736), 2);
    add_background_object(create_cavesoil3_1339(3848, 744), 2);
    add_background_object(create_cavesoil20_1464(3720, 632), 2);
    add_background_object(create_cavesoil20_1464(3832, 752), 2);
    add_background_object(create_cavesoil3_1339(1224, 960), 2);
    add_background_object(create_cavesoil12_1350(1336, 1016), 2);
    add_background_object(create_cavesoil20_1464(1336, 1032), 2);
    add_background_object(create_cavesoil12_1350(1336, 984), 2);
    add_background_object(create_cavesoil12_1350(1336, 968), 2);
    add_background_object(create_cavesoil13_1456(2936, 816), 2);
    add_background_object(create_cavesoil13_1456(2936, 784), 2);
    add_background_object(create_cavesoil3_1339(2952, 776), 2);
    add_background_object(create_edgeoverlay_496(2056, 1024), 2);
    add_background_object(create_edgeoverlay_496(2088, 1008), 2);
    add_background_object(create_edgeoverlay_496(2120, 992), 2);
    add_background_object(create_edgeoverlay_496(2152, 976), 2);
    add_background_object(create_cavesoil1_1310(2120, 1536), 2);
    add_background_object(create_cavesoil11_1313(2344, 1536), 2);
    add_background_object(create_cavesoil1_1310(2048, 1712), 2);
    add_background_object(create_cavesoil11_1313(2024, 1624), 2);
    add_background_object(create_cavesoil1_1310(2176, 1712), 2);
    add_background_object(create_cavesoil1_1310(2304, 1712), 2);
    add_background_object(create_cavesoil11_1313(2120, 1624), 2);
    add_background_object(create_cavesoil11_1313(2224, 1616), 2);
    add_background_object(create_cavesoil11_1313(2328, 1624), 2);
    add_background_object(create_cavesoil11_1313(2368, 1712), 2);
    add_background_object(create_cavesoilcrater_1354(3472, 560), 2);
    add_background_object(create_cavesoil11_1313(3528, 520), 2);
    add_background_object(create_cavesoil3_1339(3592, 624), 2);
    add_background_object(create_cavesoil3_1339(3472, 624), 2);
    add_background_object(create_cavesoil12_1350(3520, 536), 2);
    add_background_object(create_cavesoil1_1310(3464, 64), 2);
    add_background_object(create_cavesoil1_1310(3336, 64), 2);
    add_background_object(create_cavesoil1_1310(3208, 64), 2);
    add_background_object(create_cavesoil17_1309(3272, 320), 2);
    add_background_object(create_cavesoil17_1309(3208, 320), 2);
    add_background_object(create_cavesoil13_1456(2936, 384), 2);
    add_background_object(create_cavesoil13_1456(2936, 416), 2);
    add_background_object(create_cavesoil13_1456(2936, 448), 2);
    add_background_object(create_cavesoil13_1456(2936, 480), 2);
    add_background_object(create_cavesoil3_1339(2824, 488), 2);
    add_background_object(create_cavesoil20_1464(2952, 496), 2);
    add_background_object(create_cavesoil12_1350(3520, 248), 2);
    add_background_object(create_cavesoil12_1350(3520, 280), 2);
    add_background_object(create_cavesoil12_1350(3520, 312), 2);
    add_background_object(create_cavesoil12_1350(3520, 344), 2);
    add_background_object(create_cavesoil12_1350(3520, 376), 2);
    add_background_object(create_cavesoil12_1350(3520, 408), 2);
    add_background_object(create_cavesoil12_1350(3520, 440), 2);
    add_background_object(create_cavesoil12_1350(3520, 472), 2);
    add_background_object(create_cavesoil12_1350(3520, 504), 2);
    add_background_object(create_cavesoil15_1316(3464, 192), 2);
    add_background_object(create_cavesoil12_1350(3520, 216), 2);
    add_background_object(create_cavesoil3_1339(3208, 176), 2);
    add_background_object(create_cavesoil3_1339(3336, 176), 2);
    add_background_object(create_cavesoil14_1314(3464, 184), 2);
    add_background_object(create_rmladder_1152(3480, 304), 2);
    add_background_object(create_rmladder_1152(3480, 336), 2);
    add_background_object(create_rmladder_1152(3480, 368), 2);
    add_background_object(create_rmladder_1152(3480, 400), 2);
    add_background_object(create_cavesoil17_1309(3336, 320), 2);
    add_background_object(create_cavesoil17_1309(3400, 320), 2);
    add_background_object(create_cavesoil13_1456(3448, 320), 2);
    add_background_object(create_cavesoil13_1456(3448, 352), 2);
    add_background_object(create_cavesoil20_1464(3464, 376), 2);
    add_background_object(create_cavesoil19_1460(3464, 304), 2);
    add_background_object(create_cavesoil2_1338(3336, 304), 2);
    add_background_object(create_cavesoil3_1339(3336, 368), 2);
    add_background_object(create_cavesoil13_1456(3064, 352), 2);
    add_background_object(create_cavesoil13_1456(3064, 320), 2);
    add_background_object(create_cavesoil13_1456(3064, 288), 2);
    add_background_object(create_cavesoil13_1456(3064, 256), 2);
    add_background_object(create_cavesoil13_1456(3064, 224), 2);
    add_background_object(create_cavesoil13_1456(3064, 192), 2);
    add_background_object(create_cavesoil3_1339(2952, 368), 2);
    add_background_object(create_cavesoil20_1464(3080, 376), 2);
    add_background_object(create_cavesoil12_1350(3192, 320), 2);
    add_background_object(create_cavesoil12_1350(3192, 352), 2);
    add_background_object(create_cavesoil2_1338(3208, 304), 2);
    add_background_object(create_cavesoil3_1339(3208, 368), 2);
    add_background_object(create_cavesoil20_1464(3192, 376), 2);
    add_background_object(create_cavesoil19_1460(3192, 304), 2);
    add_background_object(create_cavesoil3_1339(3080, 176), 2);
    add_background_object(create_rmscaleypillar_1435(3552, 680), 2);
    add_background_object(create_rmscaleypillar_1435(3904, 968), 2);
    add_background_object(create_rmcavebrick4_1434(3848, 1064), 2);
    add_background_object(create_rmcavebrick4_1434(3848, 1032), 2);
    add_background_object(create_rmcavebrick4_1434(4008, 1096), 2);
    add_background_object(create_rmcavebrick4_1434(4008, 1064), 2);
    add_background_object(create_rmcavebrick4_1434(4008, 1032), 2);
    add_background_object(create_rmcavebrick3_1440(3856, 1008), 2);
    add_background_object(create_rmcavebrick1_1449(3832, 1008), 2);
    add_background_object(create_rmcavebrick2_1445(4048, 1008), 2);
    add_background_object(create_rmcavebrick3_1440(3984, 1008), 2);
    add_background_object(create_rmcavebrick3_1440(3920, 1008), 2);
    add_background_object(create_rmcavebrick6_1436(4168, 1136), 2);
    add_background_object(create_rmcavebrick6_1436(4232, 1136), 2);
    add_background_object(create_rmcavebrick8_1437(4144, 1104), 2);
    add_background_object(create_rmcavebrick1_1449(4144, 1104), 2);
    add_background_object(create_rmcavebrick7_1446(4168, 1104), 2);
    add_background_object(create_cavesoil8_1454(3976, 1152), 2);
    add_background_object(create_cavesoil1_1310(4232, 1552), 2);
    add_background_object(create_cavesoil1_1310(4232, 1168), 2);
    add_background_object(create_cavesoil1_1310(4232, 1296), 2);
    add_background_object(create_cavesoil1_1310(4232, 1424), 2);
    add_background_object(create_cavesoil1_1310(4232, 1680), 2);
    add_background_object(create_rmcavebrick6_1436(4296, 1136), 2);
    add_background_object(create_rmcavebrick7_1446(4232, 1104), 2);
    add_background_object(create_rmcavebrick7_1446(4296, 848), 2);
    add_background_object(create_rmcavebrick6_1436(4296, 1104), 2);
    add_background_object(create_rmcavebrick8_1437(4272, 848), 2);
    add_background_object(create_rmcavebrick1_1449(4272, 848), 2);
    add_background_object(create_cavesoil11_1313(4160, 1144), 2);
    add_background_object(create_cavesoil1_1310(3976, 640), 2);
    add_background_object(create_cavesoil3_1339(3976, 744), 2);
    add_background_object(create_cavesoil1_1310(3976, 384), 2);
    add_background_object(create_cavesoil1_1310(3976, 256), 2);
    add_background_object(create_cavesoil1_1310(3976, 128), 2);
    add_background_object(create_cavesoil1_1310(3976, 0), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 1136), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 1168), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 1232), 2);
    add_background_object(create_rmcavebrick8_1437(4272, 1072), 2);
    add_background_object(create_rmcavebrick8_1437(4272, 1040), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 1072), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 1104), 2);
    add_background_object(create_rmcavebrick8_1437(4272, 1008), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 1040), 2);
    add_background_object(create_rmcavebrick8_1437(4272, 976), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 944), 2);
    add_background_object(create_rmcavebrick8_1437(4272, 944), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 912), 2);
    add_background_object(create_rmcavebrick8_1437(4272, 912), 2);
    add_background_object(create_rmcavebrick8_1437(4272, 880), 2);
    add_background_object(create_cavesoil1_1310(3848, 512), 2);
    add_background_object(create_cavesoil12_1350(3832, 512), 2);
    add_background_object(create_cavesoil12_1350(3832, 544), 2);
    add_background_object(create_cavesoil12_1350(3832, 576), 2);
    add_background_object(create_cavesoil12_1350(3832, 608), 2);
    add_background_object(create_cavesoil1_1310(3976, 512), 2);
    add_background_object(create_rmladder_1152(3480, 432), 2);
    add_background_object(create_cavesoil11_1313(3536, 104), 2);
    add_background_object(create_cavesoil11_1313(3528, 184), 2);
    add_background_object(create_cavesoil11_1313(3528, 264), 2);
    add_background_object(create_cavesoil11_1313(3528, 368), 2);
    add_background_object(create_cavesoil11_1313(3536, 448), 2);
    add_background_object(create_cavesoil17_1309(3272, 584), 2);
    add_background_object(create_cavesoil3_1339(3280, 624), 2);
    add_background_object(create_caveelbowcurve1_1474(3144, -168), 2);
    add_background_object(create_caveelbowcurve2_1475(3080, 656), 2);
    add_background_object(create_caveelbowcurve3_1476(3144, -104), 2);
    add_background_object(create_caveelbowcurve4_1477(3080, 744), 2);
    add_background_object(create_cavesoil16_1344(3408, 624), 2);
    add_background_object(create_cavesoil8_1454(3280, 568), 2);
    add_background_object(create_cavesoilcrater_1354(3248, 560), 2);
    add_background_object(create_cavesoil11_1313(3480, -24), 2);
    add_background_object(create_cavesoil11_1313(3384, -32), 2);
    add_background_object(create_cavesoil11_1313(3288, -16), 2);
    add_background_object(create_cavesoil11_1313(3192, -32), 2);
    add_background_object(create_cavesoil11_1313(3104, -16), 2);
    add_background_object(create_cavesoil11_1313(3032, -32), 2);
    add_background_object(create_cavesoil17_1309(1992, 984), 2);
    add_background_object(create_cavesoil16_1344(1992, 1024), 2);
    add_background_object(create_cavesoil11_1313(2000, 888), 2);
    add_background_object(create_rmcavebrick4_1434(2872, 600), 2);
    add_background_object(create_rmcavebrick4_1434(2872, 568), 2);
    add_background_object(create_rmcavebrick4_1434(2872, 536), 2);
    add_background_object(create_backdrop4_1478(1400, 176), 2);
    add_background_object(create_rmcavebrick4_1434(2000, 424), 2);
    add_background_object(create_rmcavebrick4_1434(2000, 392), 2);
    add_background_object(create_rmcavebrick4_1434(1856, 328), 2);
    add_background_object(create_cavesoil27_1304(4104, 704), 2);
    add_background_object(create_cavesoil18_1305(4104, 688), 2);
    add_background_object(create_cavesoil1_1310(4104, 0), 2);
    add_background_object(create_cavesoil1_1310(4104, 384), 2);
    add_background_object(create_cavesoil1_1310(4104, 256), 2);
    add_background_object(create_cavesoil1_1310(4104, 128), 2);
    add_background_object(create_cavesoil1_1310(4104, 512), 2);
    add_background_object(create_cavesoil1_1310(4104, 576), 2);
    add_background_object(create_cavesoil11_1313(4104, 504), 2);
    add_background_object(create_cavesoil11_1313(4040, 584), 2);
    add_background_object(create_cavesoil1_1310(4232, -64), 2);
    add_background_object(create_cavesoil1_1310(4232, 64), 2);
    add_background_object(create_cavesoil1_1310(4232, 192), 2);
    add_background_object(create_cavesoil1_1310(4232, 320), 2);
    add_background_object(create_cavesoil1_1310(4232, 448), 2);
    add_background_object(create_cavesoil11_1313(4160, 464), 2);
    add_background_object(create_loop6_1479(4408, 1056), 2);
    add_background_object(create_loop7_1480(4424, 1104), 2);
    add_background_object(create_cavesoil11_1313(4256, 1144), 2);
    add_background_object(create_loop6down_1471(4400, 1040), 2);
    add_background_object(create_loop6down_1471(4400, 912), 2);
    add_background_object(create_rmcavebrick7_1446(4680, 1200), 2);
    add_background_object(create_rmcavebrick9_1455(4744, 1200), 2);
    add_background_object(create_rmcavebrick9_1455(4744, 1232), 2);
    add_background_object(create_rmcavebrick2_1445(4744, 1200), 2);
    add_background_object(create_rmcavebrick6_1436(4680, 1232), 2);
    add_background_object(create_rmcavebrick6_1436(4488, 1232), 2);
    add_background_object(create_rmcavebrick9_1455(4744, 1264), 2);
    add_background_object(create_rmcavebrick6_1436(4680, 1264), 2);
    add_background_object(create_rmcavebrick9_1455(4744, 1296), 2);
    add_background_object(create_rmcavebrick6_1436(4680, 1296), 2);
    add_background_object(create_rmcavebrick9_1455(4744, 1328), 2);
    add_background_object(create_rmcavebrick6_1436(4680, 1328), 2);
    add_background_object(create_rmcavebrick9_1455(4744, 1360), 2);
    add_background_object(create_rmcavebrick9_1455(4744, 1392), 2);
    add_background_object(create_rmcavebrick6_1436(4680, 1392), 2);
    add_background_object(create_rmcavebrick9_1455(4744, 1456), 2);
    add_background_object(create_rmcavebrick6_1436(4680, 1456), 2);
    add_background_object(create_cavesoil1_1310(4360, 1552), 2);
    add_background_object(create_cavesoil1_1310(4360, 1296), 2);
    add_background_object(create_cavesoil1_1310(4488, 1424), 2);
    add_background_object(create_cavesoil1_1310(4360, 1680), 2);
    add_background_object(create_cavesoil11_1313(4608, 1232), 2);
    add_background_object(create_cavesoil11_1313(4328, 1192), 2);
    add_background_object(create_cavesoil11_1313(4568, 1288), 2);
    add_background_object(create_rmcavebrick10_1451(3496, 1000), 2);
    add_background_object(create_levellayer116back_1453(4400, 848), 2);
    add_background_object(create_rmcavebrick10_1451(4360, 880), 2);
    add_background_object(create_rmcavebrick7_1446(4360, 848), 2);
    add_background_object(create_loop6down_1471(4400, 848), 2);
    add_background_object(create_cavesoil11_1313(4520, 1328), 2);
    add_background_object(create_rmcavebrick6_1436(4296, 976), 2);
    add_background_object(create_rmcavebrick6_1436(4296, 1008), 2);
    add_background_object(create_rmcavebrick6_1436(4296, 944), 2);
    add_background_object(create_rmcavebrick6_1436(4296, 880), 2);
    add_background_object(create_rmcavebrick6_1436(4296, 1072), 2);
    add_background_object(create_rmcavebrick10_1451(4296, 912), 2);
    add_background_object(create_rmscaleypillar_1435(4536, 1104), 2);
    add_background_object(create_rmscaleypillar_1435(4536, 1008), 2);
    add_background_object(create_rmcavebrick1_1449(4512, 888), 2);
    add_background_object(create_rmcavebrick7_1446(4536, 888), 2);
    add_background_object(create_rmcavebrick7_1446(4600, 888), 2);
    add_background_object(create_rmcavebrick8_1437(4512, 920), 2);
    add_background_object(create_rmcavebrick14_1442(4512, 952), 2);
    add_background_object(create_rmcavebrick15_1481(4792, 952), 2);
    add_background_object(create_rmcavebrick10_1451(4536, 920), 2);
    add_background_object(create_rmcavebrick6_1436(4600, 920), 2);
    add_background_object(create_rmcavebrick13_1443(4536, 952), 2);
    add_background_object(create_rmcavebrick13_1443(4600, 952), 2);
    add_background_object(create_cavesoil20_1464(4360, 688), 2);
    add_background_object(create_cavesoil3_1339(4232, 680), 2);
    add_background_object(create_cavesoil1_1310(4360, 0), 2);
    add_background_object(create_cavesoil1_1310(4360, 128), 2);
    add_background_object(create_cavesoil1_1310(4360, 256), 2);
    add_background_object(create_cavesoil1_1310(4488, 0), 2);
    add_background_object(create_cavesoil1_1310(4488, 128), 2);
    add_background_object(create_cavesoil1_1310(4488, 256), 2);
    add_background_object(create_cavesoil1_1310(4616, 0), 2);
    add_background_object(create_cavesoil1_1310(4616, 128), 2);
    add_background_object(create_cavesoil1_1310(4616, 256), 2);
    add_background_object(create_cavesoil1_1310(4360, 384), 2);
    add_background_object(create_cavesoil1_1310(4488, 384), 2);
    add_background_object(create_cavesoil1_1310(4616, 384), 2);
    add_background_object(create_cavesoil11_1313(4296, 384), 2);
    add_background_object(create_cavesoil11_1313(4296, 280), 2);
    add_background_object(create_cavesoil3_1339(4488, 496), 2);
    add_background_object(create_cavesoil3_1339(4616, 496), 2);
    add_background_object(create_cavesoil13_1456(4344, 544), 2);
    add_background_object(create_cavesoil3_1339(4360, 496), 2);
    add_background_object(create_cavesoil20_1464(4360, 568), 2);
    add_background_object(create_cavesoil3_1339(4232, 560), 2);
    add_background_object(create_cavesoil2_1338(4232, 680), 2);
    add_background_object(create_cavesoil19_1460(4360, 680), 2);
    add_background_object(create_cavesoil13_1456(4216, 568), 2);
    add_background_object(create_cavesoil13_1456(4216, 600), 2);
    add_background_object(create_cavesoil13_1456(4216, 632), 2);
    add_background_object(create_cavesoil13_1456(4216, 664), 2);
    add_background_object(create_cavesoil13_1456(4344, 512), 2);
    add_background_object(create_cavesoil13_1456(4344, 480), 2);
    add_background_object(create_cavesoil11_1313(4280, 392), 2);
    add_background_object(create_rmcavebrick4_1434(4328, 736), 2);
    add_background_object(create_rmcavebrick4_1434(4328, 768), 2);
    add_background_object(create_rmcavebrick4_1434(4328, 800), 2);
    add_background_object(create_rmcavebrick1_1449(4656, 656), 2);
    add_background_object(create_rmcavebrick8_1437(4656, 688), 2);
    add_background_object(create_rmcavebrick8_1437(4656, 720), 2);
    add_background_object(create_rmcavebrick14_1442(4656, 752), 2);
    add_background_object(create_rmcavebrick7_1446(4680, 656), 2);
    add_background_object(create_rmcavebrick10_1451(4680, 688), 2);
    add_background_object(create_rmcavebrick6_1436(4680, 720), 2);
    add_background_object(create_rmcavebrick13_1443(4680, 752), 2);
    add_background_object(create_rmcavebrick7_1446(4664, 888), 2);
    add_background_object(create_rmcavebrick6_1436(4664, 920), 2);
    add_background_object(create_rmcavebrick13_1443(4664, 952), 2);
    add_background_object(create_cavesoil1_1310(4744, 0), 2);
    add_background_object(create_cavesoil1_1310(4744, 128), 2);
    add_background_object(create_cavesoil1_1310(4744, 256), 2);
    add_background_object(create_cavesoil1_1310(4744, 384), 2);
    add_background_object(create_cavesoil3_1339(4744, 496), 2);
    add_background_object(create_cavesoil1_1310(4872, 0), 2);
    add_background_object(create_cavesoil1_1310(4872, 128), 2);
    add_background_object(create_cavesoil1_1310(4872, 256), 2);
    add_background_object(create_cavesoil1_1310(4872, 384), 2);
    add_background_object(create_cavesoil3_1339(4872, 496), 2);
    add_background_object(create_cavesoil1_1310(5000, 0), 2);
    add_background_object(create_cavesoil1_1310(5000, 128), 2);
    add_background_object(create_cavesoil1_1310(5000, 256), 2);
    add_background_object(create_cavesoil1_1310(5000, 384), 2);
    add_background_object(create_cavesoil3_1339(5000, 496), 2);
    add_background_object(create_cavesoil1_1310(5128, 0), 2);
    add_background_object(create_cavesoil1_1310(5128, 128), 2);
    add_background_object(create_cavesoil1_1310(5128, 256), 2);
    add_background_object(create_cavesoil1_1310(5128, 384), 2);
    add_background_object(create_cavesoil3_1339(5128, 496), 2);
    add_background_object(create_rmcavebrick7_1446(4744, 656), 2);
    add_background_object(create_rmcavebrick10_1451(4808, 688), 2);
    add_background_object(create_rmcavebrick6_1436(4744, 720), 2);
    add_background_object(create_rmcavebrick13_1443(4744, 752), 2);
    add_background_object(create_rmcavebrick4_1434(4680, 776), 2);
    add_background_object(create_rmcavebrick4_1434(4680, 808), 2);
    add_background_object(create_rmcavebrick4_1434(4680, 840), 2);
    add_background_object(create_rmcavebrick7_1446(4728, 888), 2);
    add_background_object(create_rmcavebrick13_1443(4728, 952), 2);
    add_background_object(create_rmcavebrick9_1455(4792, 888), 2);
    add_background_object(create_rmcavebrick9_1455(4792, 920), 2);
    add_background_object(create_rmcavebrick2_1445(4792, 888), 2);
    add_background_object(create_rmcavebrick10_1451(4728, 920), 2);
    add_background_object(create_cavesoil12_1350(4816, 888), 2);
    add_background_object(create_cavesoil12_1350(4816, 920), 2);
    add_background_object(create_cavesoil24_1353(4816, 824), 2);
    add_background_object(create_cavesoil1_1310(4944, 832), 2);
    add_background_object(create_cavesoil16_1344(4816, 928), 2);
    add_background_object(create_cavesoil16_1344(4880, 928), 2);
    add_background_object(create_cavesoil16_1344(4944, 928), 2);
    add_background_object(create_cavesoil16_1344(5008, 928), 2);
    add_background_object(create_cavesoil2_1338(4944, 824), 2);
    add_background_object(create_rmcavebrick15_1481(4808, 752), 2);
    add_background_object(create_rmcavebrick6_1436(4744, 688), 2);
    add_background_object(create_rmcavebrick7_1446(4808, 656), 2);
    add_background_object(create_rmcavebrick13_1443(4808, 720), 2);
    add_background_object(create_rmcavebrick9_1455(4808, 720), 2);
    add_background_object(create_rmcavebrick9_1455(4872, 688), 2);
    add_background_object(create_rmcavebrick9_1455(4872, 656), 2);
    add_background_object(create_rmcavebrick2_1445(4872, 656), 2);
    add_background_object(create_rmcavebrick15_1481(4872, 720), 2);
    add_background_object(create_rmcavebrick4_1434(4832, 752), 2);
    add_background_object(create_rmcavebrick4_1434(4832, 784), 2);
    add_background_object(create_rmcavebrick4_1434(4832, 816), 2);
    add_background_object(create_rmcavebrick1_1449(4912, 1232), 2);
    add_background_object(create_rmcavebrick3_1440(4936, 1232), 2);
    add_background_object(create_rmcavebrick3_1440(5000, 1232), 2);
    add_background_object(create_rmcavebrick8_1437(5040, 1200), 2);
    add_background_object(create_rmcavebrick8_1437(5040, 1168), 2);
    add_background_object(create_rmcavebrick8_1437(5040, 1104), 2);
    add_background_object(create_rmcavebrick8_1437(5040, 1072), 2);
    add_background_object(create_rmcavebrick1_1449(5040, 1072), 2);
    add_background_object(create_rmcavebrick6_1436(5064, 1200), 2);
    add_background_object(create_rmcavebrick3_1440(5064, 1232), 2);
    add_background_object(create_rmcavebrick6_1436(5064, 1168), 2);
    add_background_object(create_rmcavebrick6_1436(5064, 1136), 2);
    add_background_object(create_rmcavebrick7_1446(5064, 1104), 2);
    add_background_object(create_rmcavebrick2_1445(5128, 1232), 2);
    add_background_object(create_rmcavebrick9_1455(5128, 1200), 2);
    add_background_object(create_rmcavebrick9_1455(5128, 1168), 2);
    add_background_object(create_rmcavebrick13_1443(5128, 1136), 2);
    add_background_object(create_rmcavebrick9_1455(5128, 1136), 2);
    add_background_object(create_rmcavebrick7_1446(5128, 1104), 2);
    add_background_object(create_levellayer116back_1453(4400, 976), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 976), 2);
    add_background_object(create_rmcavebrick6_1436(4360, 1008), 2);
    add_background_object(create_loop6down_1471(4400, 976), 2);
    add_background_object(create_rmcavebrick13_1443(5192, 1136), 2);
    add_background_object(create_rmcavebrick7_1446(5192, 1104), 2);
    add_background_object(create_rmcavebrick13_1443(5256, 1136), 2);
    add_background_object(create_rmcavebrick7_1446(5256, 1104), 2);
    add_background_object(create_cavesoil1_1310(4360, 1424), 2);
    add_background_object(create_cavesoil1_1310(4488, 1552), 2);
    add_background_object(create_rmcavebrick7_1446(4616, 1200), 2);
    add_background_object(create_rmcavebrick7_1446(4552, 1200), 2);
    add_background_object(create_cavesoil11_1313(4424, 1256), 2);
    add_background_object(create_cavesoil11_1313(4488, 1280), 2);
    add_background_object(create_cavesoil2_1338(4680, 1480), 2);
    add_background_object(create_cavesoil8_1454(4808, 1480), 2);
    add_background_object(create_cavesoil18_1305(4744, 1480), 2);
    add_background_object(create_cavesoil3_1339(4616, 1536), 2);
    add_background_object(create_rmcavebrick9_1455(4744, 1424), 2);
    add_background_object(create_cavesoil11_1313(4584, 1384), 2);
    add_background_object(create_cavesoil1_1310(4488, 1680), 2);
    add_background_object(create_cavesoil1_1310(4616, 1680), 2);
    add_background_object(create_cavesoil1_1310(4744, 1680), 2);
    add_background_object(create_cavesoil1_1310(4872, 1680), 2);
    add_background_object(create_cavesoil1_1310(5000, 1680), 2);
    add_background_object(create_cavesoil1_1310(5128, 1680), 2);
    add_background_object(create_cavesoil1_1310(5256, 1680), 2);
    add_background_object(create_cavesoil1_1310(5312, 1368), 2);
    add_background_object(create_cavesoil1_1310(5312, 1496), 2);
    add_background_object(create_cavesoil1_1310(5312, 1624), 2);
    add_background_object(create_cavesoil22_1355(5168, 1552), 2);
    add_background_object(create_cavesoil12_1350(5296, 1240), 2);
    add_background_object(create_cavesoil12_1350(5296, 1272), 2);
    add_background_object(create_cavesoil12_1350(5296, 1304), 2);
    add_background_object(create_cavesoil12_1350(5296, 1336), 2);
    add_background_object(create_cavesoil12_1350(5296, 1368), 2);
    add_background_object(create_cavesoil12_1350(5296, 1400), 2);
    add_background_object(create_cavesoil12_1350(5296, 1432), 2);
    add_background_object(create_cavesoil12_1350(5296, 1464), 2);
    add_background_object(create_cavesoil12_1350(5296, 1496), 2);
    add_background_object(create_cavesoil12_1350(5296, 1528), 2);
    add_background_object(create_cavesoil11_1313(5296, 1560), 2);
    add_background_object(create_cavesoil11_1313(5232, 1656), 2);
    add_background_object(create_cavesoil11_1313(5304, 1240), 2);
    add_background_object(create_cavesoil11_1313(5336, 1304), 2);
    add_background_object(create_cavesoil8_1454(5312, 1232), 2);
    add_background_object(create_cavesoil7_1346(5376, 1232), 2);
    add_background_object(create_cavesoil19_1460(5296, 1232), 2);
    add_background_object(create_cavesoil1_1310(5504, 1432), 2);
    add_background_object(create_cavesoil2_1338(4616, 1672), 2);
    add_background_object(create_cavesoil2_1338(4744, 1672), 2);
    add_background_object(create_cavesoil2_1338(4872, 1672), 2);
    add_background_object(create_cavesoil2_1338(5000, 1672), 2);
    add_background_object(create_cavesoil2_1338(5128, 1672), 2);
    add_background_object(create_rmcavebrick6_1436(4984, 1248), 2);
    add_background_object(create_rmcavebrick6_1436(5016, 1248), 2);
    add_background_object(create_rmcavebrick8_1437(4960, 1248), 2);
    add_background_object(create_rmcavebrick9_1455(5080, 1248), 2);
    add_background_object(create_rmcavebrick3_1440(4984, 1280), 2);
    add_background_object(create_rmcavebrick1_1449(4960, 1280), 2);
    add_background_object(create_rmcavebrick2_1445(5080, 1280), 2);
    add_background_object(create_rmcavebrick3_1440(5016, 1280), 2);
    add_background_object(create_rmcavebrick4_1434(4848, 1616), 2);
    add_background_object(create_rmcavebrick5_1448(4848, 1584), 2);
    add_background_object(create_rmcavebrick5_1448(4768, 1616), 2);
    add_background_object(create_rmcavebrick4_1434(4688, 1600), 2);
    add_background_object(create_rmcavebrick4_1434(4688, 1632), 2);
    add_background_object(create_cavesoil13_1456(4600, 1544), 2);
    add_background_object(create_cavesoil13_1456(4600, 1576), 2);
    add_background_object(create_cavesoil13_1456(4600, 1608), 2);
    add_background_object(create_cavesoil13_1456(4600, 1640), 2);
    add_background_object(create_cavesoil13_1456(4600, 1672), 2);
    add_background_object(create_cavesoil1_1310(5072, 832), 2);
    add_background_object(create_cavesoil16_1344(5072, 928), 2);
    add_background_object(create_cavesoil16_1344(5136, 928), 2);
    add_background_object(create_cavesoil2_1338(5072, 824), 2);
    add_background_object(create_cavesoil1_1310(5200, 832), 2);
    add_background_object(create_cavesoil16_1344(5200, 928), 2);
    add_background_object(create_cavesoil16_1344(5264, 928), 2);
    add_background_object(create_cavesoil2_1338(5200, 824), 2);
    add_background_object(create_cavesoil34_1473(3120, 736), 2);
    add_background_object(create_caveelbowcurve2_1475(3208, -168), 2);
    add_background_object(create_caveelbowcurve4_1477(3208, -104), 2);
    add_background_object(create_cavesoil1_1310(4232, 1808), 2);
    add_background_object(create_cavesoil1_1310(4360, 1808), 2);
    add_background_object(create_cavesoil1_1310(4488, 1808), 2);
    add_background_object(create_cavesoil1_1310(4616, 1808), 2);
    add_background_object(create_cavesoil1_1310(4744, 1808), 2);
    add_background_object(create_cavesoil1_1310(4872, 1808), 2);
    add_background_object(create_cavesoil1_1310(5000, 1808), 2);
    add_background_object(create_cavesoil1_1310(5128, 1808), 2);
    add_background_object(create_cavesoil1_1310(5256, 1808), 2);
    add_background_object(create_cavesoil1_1310(4232, 1936), 2);
    add_background_object(create_cavesoil1_1310(4360, 1936), 2);
    add_background_object(create_cavesoil1_1310(4488, 1936), 2);
    add_background_object(create_cavesoil1_1310(4616, 1936), 2);
    add_background_object(create_cavesoil1_1310(4744, 1936), 2);
    add_background_object(create_cavesoil1_1310(4872, 1936), 2);
    add_background_object(create_cavesoil1_1310(5000, 1936), 2);
    add_background_object(create_cavesoil1_1310(5128, 1936), 2);
    add_background_object(create_cavesoil13_1456(5616, 1528), 2);
    add_background_object(create_cavesoil13_1456(5616, 1496), 2);
    add_background_object(create_cavesoil13_1456(5616, 1464), 2);
    add_background_object(create_cavesoil13_1456(5616, 1432), 2);
    add_background_object(create_cavesoil4_1345(5504, 1328), 2);
    add_background_object(create_cavesoil19_1460(5632, 1424), 2);
    add_background_object(create_edgeoverlay_496(5648, 1424), 2);
    add_background_object(create_cavesoil12_1350(5648, 1240), 2);
    add_background_object(create_cavesoil12_1350(5648, 1272), 2);
    add_background_object(create_cavesoil12_1350(5648, 1304), 2);
    add_background_object(create_cavesoil12_1350(5648, 1336), 2);
    add_background_object(create_cavesoil20_1464(5648, 1352), 2);
    add_background_object(create_cavesoil16_1344(5664, 1344), 2);
    add_background_object(create_cavesoil15_1316(5536, 1176), 2);
    add_background_object(create_cavesoil14_1314(5536, 1168), 2);
    add_background_object(create_cavesoil1_1310(5504, 1560), 2);
    add_background_object(create_cavesoil13_1456(5616, 1656), 2);
    add_background_object(create_cavesoil13_1456(5616, 1624), 2);
    add_background_object(create_cavesoil13_1456(5616, 1592), 2);
    add_background_object(create_cavesoil13_1456(5616, 1560), 2);
    add_background_object(create_cavesoil11_1313(5400, 1352), 2);
    add_background_object(create_cavesoil11_1313(5400, 1448), 2);
    add_background_object(create_cavesoil11_1313(5400, 1544), 2);
    add_background_object(create_cavesoil11_1313(5400, 1616), 2);
    add_background_object(create_cavesoil1_1310(5512, 1808), 2);
    add_background_object(create_cavesoil4_1345(5824, 1776), 2);
    add_background_object(create_cavesoil1_1310(5640, 1808), 2);
    add_background_object(create_cavesoil11_1313(5576, 1688), 2);
    add_background_object(create_cavesoil7_1346(5696, 1680), 2);
    add_background_object(create_cavesoil8_1454(5632, 1680), 2);
    add_background_object(create_cavesoil11_1313(5696, 1792), 2);
    add_background_object(create_cavesoil1_1310(5256, 2064), 2);
    add_background_object(create_cavesoil1_1310(5384, 2064), 2);
    add_background_object(create_cavesoil1_1310(5512, 2064), 2);
    add_background_object(create_cavesoil1_1310(5640, 2064), 2);
    add_background_object(create_cavesoil1_1310(5768, 2064), 2);
    add_background_object(create_cavesoil1_1310(5896, 2064), 2);
    add_background_object(create_cavesoil2_1338(5448, 2048), 2);
    add_background_object(create_cavesoil2_1338(5640, 2048), 2);
    add_background_object(create_cavesoil2_1338(5768, 2048), 2);
    add_background_object(create_cavesoil3_1339(5640, 1920), 2);
    add_background_object(create_cavesoil3_1339(5768, 1920), 2);
    add_background_object(create_cavesoil13_1456(6008, 2064), 2);
    add_background_object(create_cavesoil13_1456(6008, 2096), 2);
    add_background_object(create_cavesoil13_1456(6000, 1912), 2);
    add_background_object(create_cavesoil13_1456(6000, 1880), 2);
    add_background_object(create_cavesoil3_1339(5888, 1920), 2);
    add_background_object(create_cavesoil8_1454(5952, 1872), 2);
    add_background_object(create_cavesoil19_1460(6016, 1872), 2);
    add_background_object(create_cavesoil20_1464(6016, 1928), 2);
    add_background_object(create_cavesoil2_1338(5896, 2048), 2);
    add_background_object(create_cavesoil19_1460(6024, 2048), 2);
    add_background_object(create_cavesoil1_1310(5896, 2192), 2);
    add_background_object(create_cavesoil1_1310(5768, 2192), 2);
    add_background_object(create_cavesoil1_1310(6024, 2192), 2);
    add_background_object(create_cavesoil13_1456(6008, 2128), 2);
    add_background_object(create_cavesoil13_1456(6008, 2160), 2);
    add_background_object(create_cavesoil2_1338(6024, 2184), 2);
    add_background_object(create_cavesoil1_1310(6152, 2192), 2);
    add_background_object(create_cavesoil2_1338(6152, 2184), 2);
    add_background_object(create_cavesoil1_1310(6280, 2192), 2);
    add_background_object(create_cavesoil2_1338(6280, 2184), 2);
    add_background_object(create_cavesoil1_1310(6408, 1872), 2);
    add_background_object(create_cavesoil1_1310(6408, 1744), 2);
    add_background_object(create_cavesoil1_1310(6408, 1616), 2);
    add_background_object(create_cavesoil12_1350(6392, 1968), 2);
    add_background_object(create_cavesoil12_1350(6392, 1936), 2);
    add_background_object(create_cavesoil12_1350(6392, 1904), 2);
    add_background_object(create_cavesoil12_1350(6392, 1872), 2);
    add_background_object(create_cavesoil12_1350(6392, 1840), 2);
    add_background_object(create_cavesoil12_1350(6392, 1808), 2);
    add_background_object(create_cavesoil12_1350(6392, 1776), 2);
    add_background_object(create_cavesoil12_1350(6392, 1744), 2);
    add_background_object(create_cavesoil15_1316(6408, 2000), 2);
    add_background_object(create_cavesoil14_1314(6392, 1984), 2);
    add_background_object(create_cavesoil20_1464(6520, 2048), 2);
    add_background_object(create_cavesoil1_1310(5384, 2192), 2);
    add_background_object(create_cavesoil1_1310(5256, 2192), 2);
    add_background_object(create_cavesoil1_1310(5512, 2192), 2);
    add_background_object(create_cavesoil1_1310(5640, 2192), 2);
    add_background_object(create_cavesoil1_1310(5896, 2320), 2);
    add_background_object(create_cavesoil1_1310(5768, 2320), 2);
    add_background_object(create_cavesoil1_1310(6024, 2320), 2);
    add_background_object(create_cavesoil1_1310(6152, 2320), 2);
    add_background_object(create_cavesoil1_1310(6280, 2320), 2);
    add_background_object(create_cavesoil30_1462(6536, 2064), 2);
    add_background_object(create_cavesoil1_1310(6536, 1872), 2);
    add_background_object(create_cavesoil1_1310(6536, 1744), 2);
    add_background_object(create_cavesoil1_1310(6536, 1616), 2);
    add_background_object(create_cavesoil17_1309(6536, 2000), 2);
    add_background_object(create_cavesoil17_1309(6600, 2000), 2);
    add_background_object(create_cavesoil1_1310(6408, 2192), 2);
    add_background_object(create_cavesoil2_1338(6408, 2184), 2);
    add_background_object(create_cavesoil1_1310(6408, 2320), 2);
    add_background_object(create_caveelbowcurve2_1475(6536, 2184), 2);
    add_background_object(create_cavesoil11_1313(6472, 2264), 2);
    add_background_object(create_cavesoil35_1482(6568, 2248), 2);
    add_background_object(create_cavesoil35_1482(6568, 2312), 2);
    add_background_object(create_cavesoil38_1483(6152, 2632), 2);
    add_background_object(create_caveelbowcurve4_1477(6536, 2392), 2);
    add_background_object(create_cavesoil34_1473(6576, 2376), 2);
    add_background_object(create_cavesoil1_1310(6664, 1936), 2);
    add_background_object(create_cavesoil1_1310(6664, 1808), 2);
    add_background_object(create_cavesoil1_1310(6728, 2064), 2);
    add_background_object(create_cavesoil1_1310(6792, 1936), 2);
    add_background_object(create_cavesoil1_1310(6792, 1808), 2);
    add_background_object(create_cavesoil11_1313(6600, 1952), 2);
    add_background_object(create_cavesoil11_1313(6704, 1984), 2);
    add_background_object(create_cavesoil1_1310(6856, 2064), 2);
    add_background_object(create_cavesoil1_1310(6920, 1936), 2);
    add_background_object(create_cavesoil1_1310(6920, 1808), 2);
    add_background_object(create_cavesoil11_1313(6832, 2016), 2);
    add_background_object(create_cavesoil1_1310(6728, 2192), 2);
    add_background_object(create_cavesoil1_1310(6856, 2192), 2);
    add_background_object(create_cavesoil1_1310(6728, 2320), 2);
    add_background_object(create_cavesoil1_1310(6856, 2320), 2);
    add_background_object(create_cavesoil1_1310(6728, 2448), 2);
    add_background_object(create_cavesoil1_1310(6856, 2448), 2);
    add_background_object(create_cavesoil3_1339(6408, 2424), 2);
    add_background_object(create_cavesoil3_1339(6280, 2424), 2);
    add_background_object(create_cavesoil31_1463(6024, 2448), 2);
    add_background_object(create_cavesoil16_1344(6216, 2424), 2);
    add_background_object(create_cavesoil1_1310(5640, 2320), 2);
    add_background_object(create_cavesoil1_1310(5896, 2448), 2);
    add_background_object(create_cavesoil1_1310(5768, 2448), 2);
    add_background_object(create_cavesoil1_1310(5640, 2448), 2);
    add_background_object(create_cavesoil1_1310(5896, 2576), 2);
    add_background_object(create_cavesoil1_1310(5768, 2576), 2);
    add_background_object(create_cavesoil1_1310(5640, 2576), 2);
    add_background_object(create_cavesoil1_1310(6728, 2576), 2);
    add_background_object(create_cavesoil1_1310(6856, 2576), 2);
    add_background_object(create_cavesoil1_1310(6472, 2576), 2);
    add_background_object(create_cavesoil1_1310(6600, 2576), 2);
    add_background_object(create_cavesoil12_1350(6720, 2160), 2);
    add_background_object(create_cavesoil12_1350(6720, 2192), 2);
    add_background_object(create_cavesoil12_1350(6720, 2224), 2);
    add_background_object(create_cavesoil12_1350(6720, 2256), 2);
    add_background_object(create_cavesoil12_1350(6720, 2288), 2);
    add_background_object(create_cavesoil12_1350(6720, 2320), 2);
    add_background_object(create_cavesoil12_1350(6720, 2352), 2);
    add_background_object(create_cavesoil12_1350(6720, 2384), 2);
    add_background_object(create_cavesoil12_1350(6720, 2416), 2);
    add_background_object(create_cavesoil12_1350(6720, 2448), 2);
    add_background_object(create_cavesoil12_1350(6720, 2480), 2);
    add_background_object(create_cavesoil12_1350(6720, 2512), 2);
    add_background_object(create_cavesoil12_1350(6720, 2544), 2);
    add_background_object(create_cavesoil2_1338(6536, 2568), 2);
    add_background_object(create_cavesoil28_1461(6656, 2504), 2);
    add_background_object(create_cavesoil8_1454(6472, 2568), 2);
    add_background_object(create_cavesoil1_1310(6344, 2576), 2);
    add_background_object(create_cavesoil1_1310(6408, 2704), 2);
    add_background_object(create_cavesoil2_1338(6344, 2568), 2);
    add_background_object(create_cavesoil1_1310(6216, 2576), 2);
    add_background_object(create_cavesoil2_1338(6216, 2568), 2);
    add_background_object(create_caveelbowcurve1_1474(6152, 2568), 2);
    add_background_object(create_caveelbowcurve3_1476(6152, 2712), 2);
    add_background_object(create_cavesoil37_1484(6152, 2696), 2);
    add_background_object(create_cavesoil13_1456(6000, 2544), 2);
    add_background_object(create_cavesoil13_1456(6000, 2576), 2);
    add_background_object(create_cavesoil13_1456(6000, 2608), 2);
    add_background_object(create_cavesoil13_1456(6000, 2640), 2);
    add_background_object(create_cavesoil13_1456(6000, 2672), 2);
    add_background_object(create_cavesoil3_1339(6216, 2744), 2);
    add_background_object(create_cavesoil1_1310(5896, 2704), 2);
    add_background_object(create_cavesoil1_1310(5768, 2704), 2);
    add_background_object(create_cavesoil1_1310(5640, 2704), 2);
    add_background_object(create_cavesoil13_1456(6000, 2704), 2);
    add_background_object(create_cavesoil13_1456(6000, 2736), 2);
    add_background_object(create_cavesoil13_1456(6000, 2768), 2);
    add_background_object(create_cavesoil13_1456(6000, 2800), 2);
    add_background_object(create_cavesoil32_1472(6344, 2744), 2);
    add_background_object(create_cavesoil16_1344(6408, 2816), 2);
    add_background_object(create_cavesoil11_1313(6384, 2632), 2);
    add_background_object(create_cavesoil1_1310(5904, 2832), 2);
    add_background_object(create_cavesoil1_1310(5896, 2960), 2);
    add_background_object(create_cavesoil1_1310(6024, 2960), 2);
    add_background_object(create_cavesoil1_1310(5768, 2832), 2);
    add_background_object(create_cavesoil1_1310(5640, 2832), 2);
    add_background_object(create_cavesoil1_1310(5768, 2960), 2);
    add_background_object(create_cavesoil1_1310(5640, 2960), 2);
    add_background_object(create_cavesoil1_1310(5896, 3088), 2);
    add_background_object(create_cavesoil1_1310(6024, 3088), 2);
    add_background_object(create_cavesoil1_1310(5768, 3088), 2);
    add_background_object(create_cavesoil1_1310(5640, 3088), 2);
    add_background_object(create_cavesoil21_1349(6032, 2832), 2);
    add_background_object(create_cavesoil13_1456(6000, 2832), 2);
    add_background_object(create_cavesoil11_1313(5912, 2824), 2);
    add_background_object(create_cavesoil11_1313(5808, 2776), 2);
    add_background_object(create_cavesoil11_1313(5808, 2880), 2);
    add_background_object(create_cavesoil1_1310(6152, 3088), 2);
    add_background_object(create_cavesoil1_1310(6152, 2960), 2);
    add_background_object(create_cavesoil2_1338(6152, 2952), 2);
    add_background_object(create_cavesoil8_1454(6088, 2952), 2);
    add_background_object(create_cavesoil11_1313(6000, 2944), 2);
    add_background_object(create_cavesoil13_1456(6264, 2960), 2);
    add_background_object(create_cavesoil13_1456(6264, 2992), 2);
    add_background_object(create_cavesoil13_1456(6264, 3024), 2);
    add_background_object(create_cavesoil13_1456(6264, 3056), 2);
    add_background_object(create_cavesoil13_1456(6264, 3088), 2);
    add_background_object(create_cavesoil13_1456(6264, 3120), 2);
    add_background_object(create_cavesoil13_1456(6264, 3152), 2);
    add_background_object(create_cavesoil13_1456(6264, 3184), 2);
    add_background_object(create_cavesoil1_1310(5896, 3216), 2);
    add_background_object(create_cavesoil1_1310(6024, 3216), 2);
    add_background_object(create_cavesoil1_1310(6152, 3216), 2);
    add_background_object(create_cavesoil1_1310(6280, 3216), 2);
    add_background_object(create_cavesoil1_1310(6408, 3216), 2);
    add_background_object(create_cavesoil1_1310(6536, 3216), 2);
    add_background_object(create_cavesoil1_1310(6280, 3344), 2);
    add_background_object(create_cavesoil1_1310(6408, 3344), 2);
    add_background_object(create_cavesoil1_1310(6536, 3344), 2);
    add_background_object(create_cavesoil1_1310(5896, 3344), 2);
    add_background_object(create_cavesoil1_1310(6024, 3344), 2);
    add_background_object(create_cavesoil1_1310(6152, 3344), 2);
    add_background_object(create_cavesoil1_1310(6408, 3024), 2);
    add_background_object(create_cavesoil1_1310(6536, 3088), 2);
    add_background_object(create_cavesoil19_1460(6280, 2952), 2);
    add_background_object(create_cavesoil12_1350(6392, 3184), 2);
    add_background_object(create_cavesoil12_1350(6392, 3152), 2);
    add_background_object(create_cavesoil12_1350(6392, 3056), 2);
    add_background_object(create_cavesoil12_1350(6392, 3024), 2);
    add_background_object(create_cavesoil19_1460(6392, 3008), 2);
    add_background_object(create_cavesoil8_1454(6280, 3200), 2);
    add_background_object(create_cavesoil8_1454(6344, 3200), 2);
    add_background_object(create_cavesoil1_1310(6408, 1488), 2);
    add_background_object(create_cavesoil1_1310(6536, 1488), 2);
    add_background_object(create_cavesoil1_1310(5920, 1240), 2);
    add_background_object(create_cavesoil1_1310(5920, 1368), 2);
    add_background_object(create_cavesoil1_1310(5920, 1496), 2);
    add_background_object(create_cavesoil15_1316(5920, 1624), 2);
    add_background_object(create_cavesoil1_1310(6280, 1616), 2);
    add_background_object(create_cavesoil1_1310(6280, 1488), 2);
    add_background_object(create_cavesoil1_1310(6160, 1616), 2);
    add_background_object(create_cavesoil1_1310(6152, 1488), 2);
    add_background_object(create_cavesoil15_1316(6032, 1680), 2);
    add_background_object(create_cavesoil1_1310(6048, 1552), 2);
    add_background_object(create_cavesoil1_1310(6048, 1424), 2);
    add_background_object(create_cavesoil1_1310(6048, 1296), 2);
    add_background_object(create_cavesoil11_1313(6000, 1296), 2);
    add_background_object(create_cavesoil11_1313(6008, 1544), 2);
    add_background_object(create_cavesoil11_1313(6120, 1600), 2);
    add_background_object(create_cavesoil11_1313(6248, 1592), 2);
    add_background_object(create_cavesoil12_1350(6392, 3120), 2);
    add_background_object(create_cavesoil12_1350(6392, 3088), 2);
    add_background_object(create_cavesoil17_1309(6472, 3152), 2);
    add_background_object(create_cavesoil11_1313(6416, 3120), 2);
    add_background_object(create_cavesoil1_1310(5000, 2064), 2);
    add_background_object(create_cavesoil1_1310(5128, 2064), 2);
    add_background_object(create_cavesoil1_1310(5128, 2192), 2);
    add_background_object(create_cavesoil1_1310(5000, 2192), 2);
    add_background_object(create_cavesoil13_1456(6520, 3024), 2);
    add_background_object(create_cavesoil13_1456(6520, 3056), 2);
    add_background_object(create_cavesoil2_1338(6408, 3008), 2);
    add_background_object(create_cavesoil2_1338(6536, 3072), 2);
    add_background_object(create_cavesoil19_1460(6536, 3008), 2);
    add_background_object(create_cavesoil1_1310(6664, 3216), 2);
    add_background_object(create_cavesoil1_1310(6664, 3344), 2);
    add_background_object(create_cavesoil1_1310(6664, 3088), 2);
    add_background_object(create_cavesoil2_1338(6664, 3072), 2);
    add_background_object(create_cavesoil1_1310(6792, 3216), 2);
    add_background_object(create_cavesoil1_1310(6792, 3344), 2);
    add_background_object(create_cavesoil1_1310(6792, 3088), 2);
    add_background_object(create_cavesoil1_1310(6920, 3216), 2);
    add_background_object(create_cavesoil1_1310(6920, 3344), 2);
    add_background_object(create_cavesoil1_1310(6920, 3088), 2);
    add_background_object(create_cavesoil1_1310(7048, 3216), 2);
    add_background_object(create_cavesoil1_1310(7048, 3088), 2);
    add_background_object(create_cavesoil1_1310(7048, 2960), 2);
    add_background_object(create_cavesoil12_1350(7032, 2960), 2);
    add_background_object(create_cavesoil12_1350(7032, 3056), 2);
    add_background_object(create_cavesoil2_1338(7048, 2944), 2);
    add_background_object(create_cavesoil19_1460(7032, 2944), 2);
    add_background_object(create_cavesoil12_1350(7032, 2992), 2);
    add_background_object(create_cavesoil12_1350(7032, 3024), 2);
    add_background_object(create_rmcavebrick13_1443(5320, 1136), 2);
    add_background_object(create_rmcavebrick7_1446(5320, 1104), 2);
    add_background_object(create_rmcavebrick13_1443(5384, 1136), 2);
    add_background_object(create_rmcavebrick7_1446(5384, 1104), 2);
    add_background_object(create_rmcavebrick13_1443(5448, 1136), 2);
    add_background_object(create_rmcavebrick7_1446(5448, 1104), 2);
    add_background_object(create_rmcavebrick7_1446(5512, 1104), 2);
    add_background_object(create_rmcavebrick6_1436(5512, 1136), 2);
    add_background_object(create_rmcavebrick8_1437(5488, 1136), 2);
    add_background_object(create_rmcavebrick14_1442(5488, 1168), 2);
    add_background_object(create_rmcavebrick13_1443(5512, 1168), 2);
    add_background_object(create_rmcavebrick7_1446(5576, 1104), 2);
    add_background_object(create_rmcavebrick6_1436(5576, 1136), 2);
    add_background_object(create_rmcavebrick13_1443(5576, 1168), 2);
    add_background_object(create_cavesoil11_1313(5624, 1112), 2);
    add_background_object(create_cavesoil14_1314(6032, 1664), 2);
    add_background_object(create_cavesoil12_1350(5904, 1584), 2);
    add_background_object(create_cavesoil12_1350(5904, 1560), 2);
    add_background_object(create_cavesoil12_1350(5904, 1528), 2);
    add_background_object(create_cavesoil12_1350(5904, 1496), 2);
    add_background_object(create_cavesoil12_1350(5904, 1464), 2);
    add_background_object(create_cavesoil12_1350(5904, 1432), 2);
    add_background_object(create_cavesoil14_1314(5904, 1600), 2);
    add_background_object(create_cavesoil12_1350(5904, 1400), 2);
    add_background_object(create_cavesoil8_1454(6856, 3072), 2);
    add_background_object(create_cavesoil8_1454(6792, 3080), 2);
    add_background_object(create_cavesoil1_1310(7048, 3344), 2);
    add_background_object(create_cavesoil1_1310(7176, 3216), 2);
    add_background_object(create_cavesoil1_1310(7176, 3088), 2);
    add_background_object(create_cavesoil1_1310(7176, 2960), 2);
    add_background_object(create_cavesoil1_1310(7304, 3216), 2);
    add_background_object(create_cavesoil1_1310(7304, 3088), 2);
    add_background_object(create_cavesoil1_1310(7304, 2896), 2);
    add_background_object(create_cavesoil17_1309(7304, 3024), 2);
    add_background_object(create_cavesoil17_1309(7368, 3024), 2);
    add_background_object(create_cavesoil11_1313(7248, 2968), 2);
    add_background_object(create_cavesoil12_1350(7288, 2896), 2);
    add_background_object(create_cavesoil12_1350(7288, 2920), 2);
    add_background_object(create_cavesoil2_1338(7176, 2944), 2);
    add_background_object(create_cavesoil19_1460(7288, 2880), 2);
    add_background_object(create_cavesoil2_1338(7304, 2880), 2);
    add_background_object(create_cavesoil1_1310(6984, 2576), 2);
    add_background_object(create_cavesoil1_1310(6984, 2064), 2);
    add_background_object(create_cavesoil1_1310(6984, 2192), 2);
    add_background_object(create_cavesoil1_1310(6984, 2320), 2);
    add_background_object(create_cavesoil1_1310(6984, 2448), 2);
    add_background_object(create_cavesoil1_1310(7304, 2640), 2);
    add_background_object(create_cavesoil12_1350(7288, 2640), 2);
    add_background_object(create_cavesoil12_1350(7288, 2672), 2);
    add_background_object(create_cavesoil12_1350(7288, 2704), 2);
    add_background_object(create_cavesoil12_1350(7288, 2736), 2);
    add_background_object(create_cavesoil3_1339(7304, 2752), 2);
    add_background_object(create_cavesoil20_1464(7288, 2760), 2);
    add_background_object(create_cavesoil1_1310(7432, 2896), 2);
    add_background_object(create_cavesoil2_1338(7432, 2880), 2);
    add_background_object(create_cavesoil1_1310(7432, 3024), 2);
    add_background_object(create_cavesoil11_1313(7368, 2992), 2);
    add_background_object(create_cavesoil1_1310(7432, 2640), 2);
    add_background_object(create_cavesoil1_1310(7560, 2896), 2);
    add_background_object(create_cavesoil1_1310(7560, 3024), 2);
    add_background_object(create_cavesoil1_1310(7432, 3152), 2);
    add_background_object(create_cavesoil1_1310(7560, 3152), 2);
    add_background_object(create_cavesoil1_1310(7688, 2896), 2);
    add_background_object(create_cavesoil1_1310(7688, 3024), 2);
    add_background_object(create_cavesoil1_1310(7688, 3152), 2);
    add_background_object(create_cavesoil1_1310(7688, 2576), 2);
    add_background_object(create_cavesoil1_1310(6472, 2704), 2);
    add_background_object(create_cavesoil11_1313(6440, 2696), 2);
    add_background_object(create_cavesoil17_1309(6600, 2704), 2);
    add_background_object(create_cavesoil17_1309(6664, 2704), 2);
    add_background_object(create_cavesoil27_1304(6728, 2704), 2);
    add_background_object(create_cavesoil11_1313(6640, 2624), 2);
    add_background_object(create_cavesoil18_1305(6728, 2696), 2);
    add_background_object(create_cavesoil3_1339(6856, 2688), 2);
    add_background_object(create_cavesoil3_1339(6984, 2688), 2);
    add_background_object(create_cavesoil13_1456(7096, 2672), 2);
    add_background_object(create_cavesoil13_1456(7096, 2640), 2);
    add_background_object(create_cavesoil12_1350(7288, 2576), 2);
    add_background_object(create_cavesoil12_1350(7288, 2608), 2);
    add_background_object(create_cavesoil13_1456(7096, 2608), 2);
    add_background_object(create_cavesoil13_1456(7096, 2576), 2);
    add_background_object(create_cavesoil20_1464(7112, 2696), 2);
    add_background_object(create_cavesoil12_1350(7288, 2512), 2);
    add_background_object(create_cavesoil12_1350(7288, 2544), 2);
    add_background_object(create_cavesoil13_1456(7096, 2544), 2);
    add_background_object(create_cavesoil13_1456(7096, 2512), 2);
    add_background_object(create_cavesoil1_1310(7112, 1936), 2);
    add_background_object(create_cavesoil1_1310(7112, 2064), 2);
    add_background_object(create_cavesoil1_1310(7240, 1936), 2);
    add_background_object(create_cavesoil1_1310(7240, 2064), 2);
    add_background_object(create_cavesoil1_1310(7368, 1936), 2);
    add_background_object(create_cavesoil1_1310(7368, 2064), 2);
    add_background_object(create_cavesoil11_1313(7008, 1984), 2);
    add_background_object(create_cavesoil1_1310(7304, 2384), 2);
    add_background_object(create_cavesoil1_1310(7432, 2384), 2);
    add_background_object(create_cavesoil12_1350(7288, 2448), 2);
    add_background_object(create_cavesoil12_1350(7288, 2480), 2);
    add_background_object(create_cavesoil12_1350(7288, 2384), 2);
    add_background_object(create_cavesoil12_1350(7288, 2416), 2);
    add_background_object(create_cavesoil13_1456(7096, 2480), 2);
    add_background_object(create_cavesoil13_1456(7096, 2448), 2);
    add_background_object(create_cavesoil13_1456(7096, 2416), 2);
    add_background_object(create_cavesoil12_1350(7672, 2704), 2);
    add_background_object(create_cavesoil12_1350(7672, 2640), 2);
    add_background_object(create_cavesoil12_1350(7672, 2672), 2);
    add_background_object(create_cavesoil12_1350(7672, 2576), 2);
    add_background_object(create_cavesoil12_1350(7672, 2608), 2);
    add_background_object(create_cavesoil12_1350(7672, 2736), 2);
    add_background_object(create_cavesoil13_1456(7544, 2480), 2);
    add_background_object(create_cavesoil13_1456(7544, 2512), 2);
    add_background_object(create_cavesoil13_1456(7544, 2544), 2);
    add_background_object(create_cavesoil13_1456(7544, 2576), 2);
    add_background_object(create_cavesoil13_1456(7544, 2608), 2);
    add_background_object(create_cavesoil13_1456(7544, 2640), 2);
    add_background_object(create_cavesoil13_1456(7544, 2672), 2);
    add_background_object(create_cavesoil13_1456(7544, 2704), 2);
    add_background_object(create_cavesoil13_1456(7544, 2736), 2);
    add_background_object(create_cavesoil3_1339(7432, 2752), 2);
    add_background_object(create_cavesoil2_1338(7688, 2560), 2);
    add_background_object(create_cavesoil19_1460(7672, 2560), 2);
    add_background_object(create_cavesoil11_1313(7352, 2656), 2);
    add_background_object(create_cavesoil11_1313(7352, 2880), 2);
    add_background_object(create_cavesoil11_1313(7424, 2880), 2);
    add_background_object(create_cavesoil11_1313(7432, 2656), 2);
    add_background_object(create_cavesoil13_1456(7096, 2320), 2);
    add_background_object(create_cavesoil13_1456(7096, 2288), 2);
    add_background_object(create_cavesoil13_1456(7096, 2256), 2);
    add_background_object(create_cavesoil19_1460(7288, 2368), 2);
    add_background_object(create_cavesoil2_1338(7304, 2368), 2);
    add_background_object(create_cavesoil2_1338(7432, 2368), 2);
    add_background_object(create_shaft2_1303(7160, 2760), 2);
    add_background_object(create_shaft2_1303(7216, 2760), 2);
    add_background_object(create_shaft2_1303(7160, 2664), 2);
    add_background_object(create_shaft2_1303(7216, 2664), 2);
    add_background_object(create_shaft2_1303(7160, 2568), 2);
    add_background_object(create_shaft2_1303(7216, 2568), 2);
    add_background_object(create_shaft2_1303(7160, 2472), 2);
    add_background_object(create_shaft2_1303(7216, 2472), 2);
    add_background_object(create_shaft2_1303(7160, 2376), 2);
    add_background_object(create_shaft2_1303(7216, 2376), 2);
    add_background_object(create_shaft2_1303(7160, 2280), 2);
    add_background_object(create_shaft2_1303(7216, 2280), 2);
    add_background_object(create_rmladder_1152(7192, 2592), 2);
    add_background_object(create_rmladder_1152(7192, 2624), 2);
    add_background_object(create_rmladder_1152(7192, 2656), 2);
    add_background_object(create_rmladder_1152(7192, 2688), 2);
    add_background_object(create_rmladder_1152(7192, 2464), 2);
    add_background_object(create_rmladder_1152(7192, 2496), 2);
    add_background_object(create_rmladder_1152(7192, 2528), 2);
    add_background_object(create_rmladder_1152(7192, 2560), 2);
    add_background_object(create_rmladder_1152(7192, 2368), 2);
    add_background_object(create_rmladder_1152(7192, 2400), 2);
    add_background_object(create_rmladder_1152(7192, 2432), 2);
    add_background_object(create_cavesoil27_1304(7112, 2192), 2);
    add_background_object(create_cavesoil18_1305(7112, 2184), 2);
    add_background_object(create_cavesoil3_1339(7240, 2176), 2);
    add_background_object(create_cavesoil3_1339(7368, 2176), 2);
    add_background_object(create_cavesoilcrater2_1356(7280, 2624), 2);
    add_background_object(create_cavesoilcrater2_1356(7280, 2408), 2);
    add_background_object(create_rmladder_1152(7192, 2720), 2);
    add_background_object(create_rmladder_1152(7192, 2752), 2);
    add_background_object(create_rmladder_1152(7192, 2784), 2);
    add_background_object(create_cavesoil8_1454(7128, 2368), 2);
    add_background_object(create_cavesoil8_1454(7232, 2368), 2);
    add_background_object(create_cavesoil19_1460(7112, 2368), 2);
    add_background_object(create_cavesoil13_1456(7096, 2352), 2);
    add_background_object(create_cavesoil13_1456(7096, 2384), 2);
    add_background_object(create_cavesoil13_1456(6584, 2768), 2);
    add_background_object(create_cavesoil13_1456(6584, 2800), 2);
    add_background_object(create_cavesoil3_1339(6472, 2816), 2);
    add_background_object(create_cavesoil20_1464(6600, 2824), 2);
    add_background_object(create_cavesoil3_1339(6600, 2752), 2);
    add_background_object(create_edgeoverlay_496(7112, 2240), 2);
    add_background_object(create_edgeoverlay_496(7144, 2224), 2);
    add_background_object(create_edgeoverlay_496(7176, 2208), 2);
    add_background_object(create_edgeoverlay_496(7208, 2192), 2);
    add_background_object(create_cavesoil11_1313(7008, 1888), 2);
    add_background_object(create_cavesoil16_1344(7544, 2752), 2);
    add_background_object(create_cavesoil3_1339(6160, 1720), 2);
    add_background_object(create_cavesoil3_1339(6288, 1720), 2);
    add_background_object(create_cavesoil17_1309(7752, 2704), 2);
    add_background_object(create_cavesoil1_1310(7496, 1936), 2);
    add_background_object(create_cavesoil1_1310(7496, 2064), 2);
    add_background_object(create_cavesoil3_1339(7496, 2176), 2);
    add_background_object(create_cavesoil11_1313(6232, 2616), 2);
    add_background_object(create_levellayer116back_1453(1264, 200), 2);
    add_background_object(create_loop5back_1468(1288, 136), 2);
    add_background_object(create_backdrop6_1485(1264, 136), 2);
    add_background_object(create_cavesoil16_1344(1344, 104), 2);
    add_background_object(create_cavesoil16_1344(1280, 104), 2);
    add_background_object(create_rmcavebrick4_1434(1264, 328), 2);
    add_background_object(create_rmcavebrick4_1434(1264, 296), 2);
    add_background_object(create_rmcavebrick4_1434(1264, 264), 2);
    add_background_object(create_rmcavebrick4_1434(1264, 360), 2);
    add_background_object(create_cavesoil20_1464(1280, 240), 2);
    add_background_object(create_cavesoil3_1339(1152, 232), 2);
    add_background_object(create_cavesoil8_1454(1304, 392), 2);
    add_background_object(create_cavesoil11_1313(1392, 408), 2);
    add_background_object(create_cavesoil11_1313(1368, 344), 2);
    add_background_object(create_cavesoil12_1350(1368, 344), 2);
    add_background_object(create_cavesoil13_1456(1544, 344), 2);
    add_background_object(create_cavesoil12_1350(1368, 376), 2);
    add_background_object(create_cavesoil13_1456(1544, 376), 2);
    add_background_object(create_loop3_1467(1552, 136), 2);
    add_background_object(create_cavesoil16_1344(1600, 104), 2);
    add_background_object(create_cavesoil16_1344(1536, 104), 2);
    add_background_object(create_rmcavebrick9_1455(1648, 136), 2);
    add_background_object(create_rmcavebrick9_1455(1648, 168), 2);
    add_background_object(create_rmcavebrick9_1455(1648, 200), 2);
    add_background_object(create_rmcavebrick9_1455(1648, 232), 2);
    add_background_object(create_rmcavebrick4_1434(1624, 328), 2);
    add_background_object(create_rmcavebrick4_1434(1624, 296), 2);
    add_background_object(create_rmcavebrick4_1434(1624, 360), 2);
    add_background_object(create_loop2_1469(1648, 184), 2);
    add_background_object(create_cavesoil20_1464(1648, 248), 2);
    add_background_object(create_cavesoil3_1339(1664, 240), 2);
    add_background_object(create_cavesoil20_1464(1792, 248), 2);
    add_background_object(create_cavesoil8_1454(1368, 264), 2);
    add_background_object(create_cavesoil8_1454(1496, 264), 2);
    add_background_object(create_cavesoil12_1350(1368, 280), 2);
    add_background_object(create_cavesoil13_1456(1544, 280), 2);
    add_background_object(create_cavesoil12_1350(1368, 312), 2);
    add_background_object(create_cavesoil13_1456(1544, 312), 2);
    add_background_object(create_cavesoil8_1454(1432, 264), 2);
    add_background_object(create_cavesoil11_1313(1432, 304), 2);
    add_background_object(create_cavesoil8_1454(1584, 392), 2);
    add_background_object(create_cavesoil19_1460(1560, 264), 2);
    add_background_object(create_cavesoil19_1460(1368, 264), 2);
    add_background_object(create_cavesoil19_1460(1648, 392), 2);
    add_background_object(create_cavesoil19_1460(1568, 392), 2);
    add_background_object(create_cavesoil19_1460(1368, 392), 2);
    add_background_object(create_backdrop4_1478(1496, 176), 2);
    add_background_object(create_cavesoil1_1310(5256, 1936), 2);
    add_background_object(create_cavesoil12_1350(5496, 1904), 2);
    add_background_object(create_cavesoil12_1350(5496, 1872), 2);
    add_background_object(create_cavesoil12_1350(5496, 1840), 2);
    add_background_object(create_cavesoil12_1350(5496, 1808), 2);
    add_background_object(create_cavesoil3_1339(5512, 1920), 2);
    add_background_object(create_cavesoil20_1464(5496, 1928), 2);
    add_background_object(create_cavesoil13_1456(5368, 1808), 2);
    add_background_object(create_cavesoil3_1339(5384, 1792), 2);
    add_background_object(create_cavesoil13_1456(5368, 1840), 2);
    add_background_object(create_cavesoil13_1456(5368, 1872), 2);
    add_background_object(create_cavesoil13_1456(5368, 1904), 2);
    add_background_object(create_cavesoil13_1456(5368, 1936), 2);
    add_background_object(create_cavesoil13_1456(5368, 1968), 2);
    add_background_object(create_cavesoil13_1456(5368, 2000), 2);
    add_background_object(create_cavesoil13_1456(5368, 2032), 2);
    add_background_object(create_cavesoil8_1454(5576, 2048), 2);
    add_background_object(create_cavesoil8_1454(5384, 2048), 2);
    add_background_object(create_rmladder_1152(7192, 2816), 2);
    add_background_object(create_cavesoil8_1454(6920, 3072), 2);
    add_background_object(create_cavesoil8_1454(6984, 3072), 2);
    add_background_object(create_cavesoil1_1310(5328, 832), 2);
    add_background_object(create_cavesoil16_1344(5328, 928), 2);
    add_background_object(create_cavesoil16_1344(5392, 928), 2);
    add_background_object(create_cavesoil16_1344(5456, 928), 2);
    add_background_object(create_cavesoil16_1344(5520, 928), 2);
    add_background_object(create_cavesoil16_1344(5584, 928), 2);
    add_background_object(create_cavesoil12_1350(5904, 1368), 2);
    add_background_object(create_cavesoil12_1350(5904, 1336), 2);
    add_background_object(create_cavesoil12_1350(5904, 1304), 2);
    add_background_object(create_cavesoil12_1350(5904, 1272), 2);
    add_background_object(create_caveelbowcurve2_1475(5744, 1104), 2);
    add_background_object(create_cavesoil35_1482(5776, 1168), 2);
    add_background_object(create_cavesoil35_1482(5776, 1232), 2);
    add_background_object(create_cavesoil16_1344(5728, 1344), 2);
    add_background_object(create_cavesoil19_1460(5728, 1104), 2);
    add_background_object(create_cavesoil1_1310(5920, 1112), 2);
    add_background_object(create_cavesoil12_1350(5904, 1208), 2);
    add_background_object(create_cavesoil12_1350(5904, 1176), 2);
    add_background_object(create_cavesoil12_1350(5904, 1144), 2);
    add_background_object(create_cavesoil12_1350(5904, 1112), 2);
    add_background_object(create_cavesoil12_1350(5904, 1240), 2);
    add_background_object(create_cavesoil1_1310(6048, 1112), 2);
    add_background_object(create_cavesoil11_1313(6032, 1200), 2);
    add_background_object(create_cavesoil17_1309(5456, 672), 2);
    add_background_object(create_cavesoil17_1309(5392, 672), 2);
    add_background_object(create_cavesoil12_1350(5376, 672), 2);
    add_background_object(create_cavesoil12_1350(5376, 704), 2);
    add_background_object(create_cavesoil19_1460(5376, 664), 2);
    add_background_object(create_cavesoil1_1310(5256, 0), 2);
    add_background_object(create_cavesoil1_1310(5256, 128), 2);
    add_background_object(create_cavesoil1_1310(5256, 256), 2);
    add_background_object(create_cavesoil1_1310(5256, 384), 2);
    add_background_object(create_cavesoil3_1339(5256, 496), 2);
    add_background_object(create_cavesoil1_1310(5384, 0), 2);
    add_background_object(create_cavesoil1_1310(5384, 128), 2);
    add_background_object(create_cavesoil1_1310(5384, 256), 2);
    add_background_object(create_cavesoil1_1310(5384, 384), 2);
    add_background_object(create_cavesoil1_1310(5512, 0), 2);
    add_background_object(create_cavesoil1_1310(5512, 128), 2);
    add_background_object(create_cavesoil1_1310(5512, 256), 2);
    add_background_object(create_cavesoil1_1310(5512, 384), 2);
    add_background_object(create_cavesoil17_1309(5520, 896), 2);
    add_background_object(create_cavesoil17_1309(5456, 896), 2);
    add_background_object(create_cavesoil17_1309(5584, 896), 2);
    add_background_object(create_cavesoil2_1338(5920, 1104), 2);
    add_background_object(create_cavesoil19_1460(5904, 1104), 2);
    add_background_object(create_cavesoil25_1317(5520, 832), 2);
    add_background_object(create_cavesoil23_1351(5520, 824), 2);
    add_background_object(create_cavesoil16_1344(5456, 928), 2);
    add_background_object(create_cavesoil16_1344(5520, 928), 2);
    add_background_object(create_cavesoil16_1344(5584, 928), 2);
    add_background_object(create_rmcavebrick4_1434(5616, 992), 2);
    add_background_object(create_rmcavebrick4_1434(5616, 960), 2);
    add_background_object(create_rmcavebrick4_1434(5616, 1024), 2);
    add_background_object(create_rmcavebrick4_1434(5616, 1056), 2);
    add_background_object(create_cavesoil12_1350(5504, 608), 2);
    add_background_object(create_cavesoil12_1350(5504, 640), 2);
    add_background_object(create_cavesoil3_1339(5384, 496), 2);
    add_background_object(create_cavesoil2_1338(5392, 664), 2);
    add_background_object(create_cavesoil1_1310(6176, 1112), 2);
    add_background_object(create_cavesoil1_1310(6176, 1240), 2);
    add_background_object(create_cavesoil11_1313(6104, 1216), 2);
    add_background_object(create_cavesoil2_1338(6048, 1104), 2);
    add_background_object(create_cavesoil12_1350(6160, 856), 2);
    add_background_object(create_cavesoil12_1350(6160, 888), 2);
    add_background_object(create_cavesoil1_1310(5712, 832), 2);
    add_background_object(create_cavesoil16_1344(5712, 928), 2);
    add_background_object(create_cavesoil16_1344(5776, 928), 2);
    add_background_object(create_cavesoil16_1344(5648, 928), 2);
    add_background_object(create_cavesoil17_1309(5648, 896), 2);
    add_background_object(create_cavesoil16_1344(5648, 928), 2);
    add_background_object(create_cavesoil12_1350(5696, 864), 2);
    add_background_object(create_cavesoil12_1350(5696, 832), 2);
    add_background_object(create_cavesoil8_1454(5648, 888), 2);
    add_background_object(create_cavesoil2_1338(5712, 816), 2);
    add_background_object(create_cavesoil19_1460(5696, 816), 2);
    add_background_object(create_cavesoil11_1313(5496, 344), 2);
    add_background_object(create_cavesoil27_1304(5520, 672), 2);
    add_background_object(create_cavesoil1_1310(5840, 832), 2);
    add_background_object(create_cavesoil16_1344(5840, 928), 2);
    add_background_object(create_cavesoil13_1456(5952, 928), 2);
    add_background_object(create_cavesoil13_1456(5952, 896), 2);
    add_background_object(create_cavesoil13_1456(5952, 864), 2);
    add_background_object(create_cavesoil13_1456(5952, 832), 2);
    add_background_object(create_cavesoil2_1338(5840, 816), 2);
    add_background_object(create_cavesoil16_1344(5904, 928), 2);
    add_background_object(create_cavesoil20_1464(5968, 936), 2);
    add_background_object(create_cavesoil19_1460(5968, 816), 2);
    add_background_object(create_cavesoil19_1460(6160, 840), 2);
    add_background_object(create_cavesoil2_1338(6176, 840), 2);
    add_background_object(create_rmcavebrick4_1434(5992, 880), 2);
    add_background_object(create_rmcavebrick4_1434(6104, 896), 2);
    add_background_object(create_rmcavebrick4_1434(5992, 912), 2);
    add_background_object(create_rmcavebrick4_1434(6104, 928), 2);
    add_background_object(create_rmcavebrick4_1434(5992, 944), 2);
    add_background_object(create_rmcavebrick4_1434(6104, 960), 2);
    add_background_object(create_rmcavebrick4_1434(5992, 976), 2);
    add_background_object(create_rmcavebrick4_1434(6104, 992), 2);
    add_background_object(create_rmcavebrick4_1434(5992, 1008), 2);
    add_background_object(create_rmcavebrick4_1434(6104, 1024), 2);
    add_background_object(create_rmcavebrick4_1434(5992, 1040), 2);
    add_background_object(create_rmcavebrick4_1434(6104, 1056), 2);
    add_background_object(create_rmcavebrick4_1434(5992, 1072), 2);
    add_background_object(create_cavesoil1_1310(5768, 544), 2);
    add_background_object(create_cavesoil1_1310(5640, 0), 2);
    add_background_object(create_cavesoil1_1310(5640, 128), 2);
    add_background_object(create_cavesoil1_1310(5640, 256), 2);
    add_background_object(create_cavesoil1_1310(5640, 384), 2);
    add_background_object(create_cavesoil11_1313(5568, 368), 2);
    add_background_object(create_cavesoil13_1456(5632, 608), 2);
    add_background_object(create_cavesoil13_1456(5632, 640), 2);
    add_background_object(create_cavesoil18_1305(5520, 656), 2);
    add_background_object(create_cavesoil20_1464(5648, 656), 2);
    add_background_object(create_cavesoil2_1338(5520, 592), 2);
    add_background_object(create_cavesoil19_1460(5504, 592), 2);
    add_background_object(create_cavesoil3_1339(5512, 496), 2);
    add_background_object(create_cavesoil1_1310(5768, 384), 2);
    add_background_object(create_cavesoil11_1313(5752, 456), 2);
    add_background_object(create_cavesoil12_1350(5752, 544), 2);
    add_background_object(create_cavesoil12_1350(5752, 576), 2);
    add_background_object(create_cavesoil12_1350(5752, 608), 2);
    add_background_object(create_cavesoil12_1350(5752, 640), 2);
    add_background_object(create_cavesoil3_1339(5768, 648), 2);
    add_background_object(create_cavesoil20_1464(5752, 656), 2);
    add_background_object(create_cavesoil12_1350(5752, 512), 2);
    add_background_object(create_cavesoil3_1339(5640, 496), 2);
    add_background_object(create_cavesoil8_1454(5648, 592), 2);
    add_background_object(create_rmladder_1152(5712, 592), 2);
    add_background_object(create_rmladder_1152(5712, 624), 2);
    add_background_object(create_rmladder_1152(5712, 656), 2);
    add_background_object(create_rmladder_1152(5712, 688), 2);
    add_background_object(create_cavesoil1_1310(6176, 1368), 2);
    add_background_object(create_cavesoil20_1464(6160, 904), 2);
    add_background_object(create_cavesoil17_1309(6240, 1080), 2);
    add_background_object(create_cavesoil12_1350(6224, 1080), 2);
    add_background_object(create_cavesoil8_1454(6176, 1104), 2);
    add_background_object(create_cavesoil19_1460(6224, 1072), 2);
    add_background_object(create_cavesoil1_1310(6304, 1080), 2);
    add_background_object(create_cavesoil1_1310(6304, 1176), 2);
    add_background_object(create_cavesoil1_1310(6304, 1368), 2);
    add_background_object(create_cavesoil17_1309(6304, 1304), 2);
    add_background_object(create_cavesoil17_1309(6368, 1304), 2);
    add_background_object(create_cavesoil11_1313(6288, 1120), 2);
    add_background_object(create_cavesoil2_1338(6240, 1072), 2);
    add_background_object(create_cavesoil1_1310(6304, 856), 2);
    add_background_object(create_cavesoil12_1350(6288, 952), 2);
    add_background_object(create_cavesoil12_1350(6288, 920), 2);
    add_background_object(create_cavesoil3_1339(6176, 896), 2);
    add_background_object(create_cavesoil3_1339(6304, 960), 2);
    add_background_object(create_cavesoil20_1464(6288, 968), 2);
    add_background_object(create_cavesoil2_1338(6304, 840), 2);
    add_background_object(create_cavesoil33_1447(6432, 856), 2);
    add_background_object(create_caveelbowcurve2_1475(6432, 840), 2);
    add_background_object(create_caveelbowcurve4_1477(6432, 928), 2);
    add_background_object(create_cavesoil34_1473(6472, 904), 2);
    add_background_object(create_cavesoil34_1473(6472, 920), 2);
    add_background_object(create_cavesoil1_1310(6432, 1080), 2);
    add_background_object(create_cavesoil2_1338(6368, 1072), 2);
    add_background_object(create_cavesoil1_1310(6432, 1208), 2);
    add_background_object(create_cavesoil1_1310(6560, 1080), 2);
    add_background_object(create_cavesoil1_1310(6560, 1208), 2);
    add_background_object(create_cavesoil1_1310(6432, 1336), 2);
    add_background_object(create_cavesoil1_1310(6560, 1336), 2);
    add_background_object(create_cavesoil11_1313(6408, 1416), 2);
    add_background_object(create_cavesoil11_1313(6496, 1416), 2);
    add_background_object(create_cavesoil8_1454(6496, 1072), 2);
    add_background_object(create_cavesoil1_1310(6640, 952), 2);
    add_background_object(create_cavesoil1_1310(6688, 1080), 2);
    add_background_object(create_cavesoil1_1310(6688, 1208), 2);
    add_background_object(create_cavesoil1_1310(6688, 1336), 2);
    add_background_object(create_cavesoil11_1313(6640, 1032), 2);
    add_background_object(create_cavesoil12_1350(6624, 1048), 2);
    add_background_object(create_cavesoil12_1350(6624, 1016), 2);
    add_background_object(create_cavesoil12_1350(6624, 984), 2);
    add_background_object(create_cavesoil12_1350(6624, 952), 2);
    add_background_object(create_cavesoil28_1461(6560, 1008), 2);
    add_background_object(create_cavesoil1_1310(6768, 952), 2);
    add_background_object(create_cavesoil1_1310(6816, 1080), 2);
    add_background_object(create_cavesoil1_1310(6816, 1208), 2);
    add_background_object(create_cavesoil1_1310(6816, 1336), 2);
    add_background_object(create_cavesoil11_1313(6600, 1416), 2);
    add_background_object(create_cavesoil1_1310(6768, 824), 2);
    add_background_object(create_rmcavebrick8_1437(5040, 1136), 2);
    add_background_object(create_rmcavebrick9_1455(5064, 1072), 2);
    add_background_object(create_rmcavebrick2_1445(5064, 1072), 2);
    add_background_object(create_rmladder_1152(5000, 1072), 2);
    add_background_object(create_rmladder_1152(5000, 1104), 2);
    add_background_object(create_rmladder_1152(5000, 1136), 2);
    add_background_object(create_cavesoil1_1310(5768, 0), 2);
    add_background_object(create_cavesoil1_1310(5768, 128), 2);
    add_background_object(create_cavesoil1_1310(5768, 256), 2);
    add_background_object(create_cavesoil1_1310(5896, 544), 2);
    add_background_object(create_cavesoil3_1339(5896, 648), 2);
    add_background_object(create_cavesoil1_1310(6024, 544), 2);
    add_background_object(create_cavesoil3_1339(6024, 648), 2);
    add_background_object(create_cavesoil1_1310(6152, 544), 2);
    add_background_object(create_cavesoil3_1339(6152, 648), 2);
    add_background_object(create_cavesoil1_1310(6280, 544), 2);
    add_background_object(create_cavesoil3_1339(6280, 648), 2);
    add_background_object(create_cavesoil1_1310(5896, 416), 2);
    add_background_object(create_cavesoil1_1310(6024, 416), 2);
    add_background_object(create_cavesoil1_1310(6152, 416), 2);
    add_background_object(create_cavesoil1_1310(6280, 416), 2);
    add_background_object(create_cavesoil11_1313(5832, 448), 2);
    add_background_object(create_cavesoil1_1310(5896, 288), 2);
    add_background_object(create_cavesoil1_1310(6024, 288), 2);
    add_background_object(create_cavesoil1_1310(6152, 288), 2);
    add_background_object(create_cavesoil1_1310(6280, 288), 2);
    add_background_object(create_cavesoil1_1310(6408, 544), 2);
    add_background_object(create_cavesoil3_1339(6408, 648), 2);
    add_background_object(create_cavesoil1_1310(6408, 416), 2);
    add_background_object(create_cavesoil1_1310(6408, 288), 2);
    add_background_object(create_cavesoil1_1310(6640, 696), 2);
    add_background_object(create_cavesoil12_1350(6624, 792), 2);
    add_background_object(create_cavesoil12_1350(6624, 760), 2);
    add_background_object(create_cavesoil12_1350(6624, 728), 2);
    add_background_object(create_cavesoil12_1350(6624, 696), 2);
    add_background_object(create_cavesoil1_1310(6768, 696), 2);
    add_background_object(create_cavesoil1_1310(6536, 544), 2);
    add_background_object(create_cavesoil1_1310(6536, 416), 2);
    add_background_object(create_cavesoil1_1310(6536, 288), 2);
    add_background_object(create_cavesoil1_1310(6664, 544), 2);
    add_background_object(create_cavesoil1_1310(6664, 416), 2);
    add_background_object(create_cavesoil1_1310(6664, 288), 2);
    add_background_object(create_cavesoil1_1310(6792, 544), 2);
    add_background_object(create_cavesoil1_1310(6792, 416), 2);
    add_background_object(create_cavesoil1_1310(6792, 288), 2);
    add_background_object(create_cavesoil12_1350(6624, 664), 2);
    add_background_object(create_cavesoil3_1339(6536, 648), 2);
    add_background_object(create_cavesoil11_1313(6632, 592), 2);
    add_background_object(create_cavesoil11_1313(6728, 608), 2);
    add_background_object(create_cavesoil11_1313(6816, 632), 2);
    add_background_object(create_cavesoil1_1310(5896, 160), 2);
    add_background_object(create_cavesoil1_1310(6024, 160), 2);
    add_background_object(create_cavesoil1_1310(6152, 160), 2);
    add_background_object(create_cavesoil1_1310(6280, 160), 2);
    add_background_object(create_cavesoil1_1310(5896, 32), 2);
    add_background_object(create_cavesoil1_1310(6024, 32), 2);
    add_background_object(create_cavesoil1_1310(6152, 32), 2);
    add_background_object(create_cavesoil1_1310(6280, 32), 2);
    add_background_object(create_cavesoil1_1310(6408, 160), 2);
    add_background_object(create_cavesoil1_1310(6408, 32), 2);
    add_background_object(create_cavesoil1_1310(6536, 160), 2);
    add_background_object(create_cavesoil1_1310(6536, 32), 2);
    add_background_object(create_cavesoil1_1310(6664, 160), 2);
    add_background_object(create_cavesoil1_1310(6664, 32), 2);
    add_background_object(create_cavesoil1_1310(6792, 160), 2);
    add_background_object(create_cavesoil1_1310(6792, 32), 2);
    add_background_object(create_cavesoil1_1310(5896, -96), 2);
    add_background_object(create_cavesoil1_1310(6024, -96), 2);
    add_background_object(create_cavesoil1_1310(6152, -96), 2);
    add_background_object(create_cavesoil1_1310(6280, -96), 2);
    add_background_object(create_cavesoil1_1310(6408, -96), 2);
    add_background_object(create_cavesoil1_1310(6536, -96), 2);
    add_background_object(create_cavesoil1_1310(6664, -96), 2);
    add_background_object(create_cavesoil1_1310(6792, -96), 2);
    add_background_object(create_cavesoil1_1310(6664, 1680), 2);
    add_background_object(create_cavesoil1_1310(6664, 1552), 2);
    add_background_object(create_rmcavebrick4_1434(6296, 1016), 2);
    add_background_object(create_rmcavebrick4_1434(5920, 960), 2);
    add_background_object(create_rmcavebrick4_1434(5920, 992), 2);
    add_background_object(create_rmcavebrick4_1434(5920, 1024), 2);
    add_background_object(create_rmcavebrick4_1434(5920, 1056), 2);
    add_background_object(create_rmcavebrick8_1437(5136, 1072), 2);
    add_background_object(create_rmcavebrick9_1455(5224, 1072), 2);
    add_background_object(create_rmcavebrick2_1445(5224, 1072), 2);
    add_background_object(create_rmcavebrick1_1449(5136, 1072), 2);
    add_background_object(create_rmcavebrick7_1446(5160, 1072), 2);
    add_background_object(create_rmcavebrick4_1434(5168, 1040), 2);
    add_background_object(create_rmcavebrick4_1434(5168, 1008), 2);
    add_background_object(create_rmcavebrick4_1434(5168, 976), 2);
    add_background_object(create_rmladder_1152(4896, 656), 2);
    add_background_object(create_rmladder_1152(4896, 688), 2);
    add_background_object(create_rmladder_1152(4896, 720), 2);
    add_background_object(create_cavesoil1_1310(5392, 736), 2);
    add_background_object(create_cavesoil12_1350(5376, 736), 2);
    add_background_object(create_cavesoil12_1350(5376, 768), 2);
    add_background_object(create_cavesoil12_1350(5376, 800), 2);
    add_background_object(create_cavesoil11_1313(5400, 808), 2);
    add_background_object(create_cavesoil13_1456(5496, 816), 2);
    add_background_object(create_cavesoil13_1456(5496, 784), 2);
    add_background_object(create_cavesoil13_1456(5496, 752), 2);
    add_background_object(create_cavesoil13_1456(5496, 720), 2);
    add_background_object(create_cavesoil1_1310(7816, 2832), 2);
    add_background_object(create_cavesoil1_1310(7816, 2960), 2);
    add_background_object(create_cavesoil1_1310(7816, 2704), 2);
    add_background_object(create_rmcavebrick4_1434(6360, 784), 2);
    add_background_object(create_rmcavebrick5_1448(6360, 752), 2);
    add_background_object(create_cavesoil8_1454(5328, 824), 2);
    add_background_object(create_cavesoilcrater_1354(5156, 816), 2);
    add_background_object(create_cavesoil1_1310(7944, 2832), 2);
    add_background_object(create_cavesoil1_1310(7944, 2960), 2);
    add_background_object(create_cavesoil1_1310(7944, 2704), 2);
    add_background_object(create_cavesoil1_1310(8072, 2832), 2);
    add_background_object(create_cavesoil1_1310(8072, 2960), 2);
    add_background_object(create_cavesoil1_1310(8072, 2704), 2);
    add_background_object(create_cavesoil1_1310(7624, 1936), 2);
    add_background_object(create_cavesoil1_1310(7624, 2064), 2);
    add_background_object(create_cavesoil3_1339(7624, 2176), 2);
    add_background_object(create_cavesoil1_1310(7752, 1936), 2);
    add_background_object(create_cavesoil1_1310(7752, 2064), 2);
    add_background_object(create_cavesoil3_1339(7752, 2176), 2);
    add_background_object(create_cavesoil1_1310(7880, 2064), 2);
    add_background_object(create_cavesoil1_1310(8200, 2832), 2);
    add_background_object(create_cavesoil1_1310(8200, 2960), 2);
    add_background_object(create_cavesoil1_1310(8200, 2704), 2);
    add_background_object(create_cavesoil1_1310(8328, 2576), 2);
    add_background_object(create_cavesoil1_1310(8328, 2832), 2);
    add_background_object(create_cavesoil1_1310(8328, 2960), 2);
    add_background_object(create_cavesoil1_1310(8328, 2704), 2);
    add_background_object(create_cavesoil2_1338(8328, 2560), 2);
    add_background_object(create_cavesoil1_1310(8008, 1984), 2);
    add_background_object(create_cavesoil1_1310(8008, 2176), 2);
    add_background_object(create_cavesoil11_1313(7992, 2080), 2);
    add_background_object(create_cavesoil12_1350(7992, 2272), 2);
    add_background_object(create_rmcavebrick13_1443(8040, 2336), 2);
    add_background_object(create_rmcavebrick6_1436(8104, 2304), 2);
    add_background_object(create_rmcavebrick13_1443(8104, 2336), 2);
    add_background_object(create_rmcavebrick13_1443(8168, 2336), 2);
    add_background_object(create_cavesoil1_1310(8136, 2176), 2);
    add_background_object(create_cavesoil1_1310(8136, 2048), 2);
    add_background_object(create_cavesoil11_1313(8072, 2064), 2);
    add_background_object(create_cavesoil1_1310(8264, 2176), 2);
    add_background_object(create_cavesoil1_1310(8264, 2048), 2);
    add_background_object(create_cavesoil1_1310(8392, 1984), 2);
    add_background_object(create_cavesoil1_1310(8392, 2112), 2);
    add_background_object(create_cavesoil11_1313(8320, 2112), 2);
    add_background_object(create_cavesoil1_1310(8264, 1920), 2);
    add_background_object(create_cavesoil1_1310(8136, 1920), 2);
    add_background_object(create_rmcavebrick6_1436(8232, 2304), 2);
    add_background_object(create_rmcavebrick13_1443(8232, 2336), 2);
    add_background_object(create_rmcavebrick6_1436(8360, 2304), 2);
    add_background_object(create_rmcavebrick13_1443(8296, 2336), 2);
    add_background_object(create_rmcavebrick10_1451(7976, 2304), 2);
    add_background_object(create_rmcavebrick10_1451(8168, 2304), 2);
    add_background_object(create_rmcavebrick10_1451(8296, 2304), 2);
    add_background_object(create_cavesoil1_1310(8200, 2576), 2);
    add_background_object(create_cavesoil2_1338(8200, 2560), 2);
    add_background_object(create_cavesoil1_1310(8072, 2576), 2);
    add_background_object(create_cavesoil2_1338(8072, 2560), 2);
    add_background_object(create_cavesoil1_1310(7944, 2576), 2);
    add_background_object(create_cavesoil1_1310(7816, 2576), 2);
    add_background_object(create_cavesoil2_1338(7816, 2560), 2);
    add_background_object(create_cavesoil2_1338(7944, 2560), 2);
    add_background_object(create_rmscaleypillar_1435(7976, 2440), 2);
    add_background_object(create_rmscaleypillar_1435(7976, 2344), 2);
    add_background_object(create_rmscaleypillar_1435(8328, 2344), 2);
    add_background_object(create_cavesoil1_1310(8456, 2576), 2);
    add_background_object(create_cavesoil1_1310(8456, 2832), 2);
    add_background_object(create_cavesoil1_1310(8456, 2960), 2);
    add_background_object(create_cavesoil1_1310(8456, 2704), 2);
    add_background_object(create_column6_1341(7808, 2464), 2);
    add_background_object(create_column7_1342(7808, 2416), 2);
    add_background_object(create_column7_1342(7896, 2464), 2);
    add_background_object(create_column8_1343(8080, 2440), 2);
    add_background_object(create_column8_1343(8272, 2440), 2);
    add_background_object(create_column5_1318(8080, 2392), 2);
    add_background_object(create_column5_1318(8272, 2392), 2);
    add_background_object(create_column6_1341(6112, 2088), 2);
    add_background_object(create_column7_1342(6112, 2040), 2);
    add_background_object(create_column6_1341(3320, 904), 2);
    add_background_object(create_column6_1341(3320, 856), 2);
    add_background_object(create_column7_1342(3320, 808), 2);
    add_background_object(create_column6_1341(3248, 920), 2);
    add_background_object(create_column7_1342(3248, 888), 2);
    add_background_object(create_rmcavebrick13_1443(8360, 2336), 2);
    add_background_object(create_cavesoil1_1310(8392, 2240), 2);
    add_background_object(create_cavesoil15_1316(8392, 2368), 2);
    add_background_object(create_cavesoil14_1314(8392, 2352), 2);
    add_background_object(create_cavesoil11_1313(8360, 2208), 2);
    add_background_object(create_edgeoverlay_496(8424, 2376), 2);
    add_background_object(create_edgeoverlay_496(8392, 2360), 2);
    add_background_object(create_cavesoil1_1310(8520, 2240), 2);
    add_background_object(create_cavesoil1_1310(8520, 2112), 2);
    add_background_object(create_cavesoil1_1310(8520, 1984), 2);
    add_background_object(create_cavesoil1_1310(8648, 2368), 2);
    add_background_object(create_cavesoil1_1310(8648, 2240), 2);
    add_background_object(create_cavesoil1_1310(8648, 2112), 2);
    add_background_object(create_cavesoil17_1309(8584, 2368), 2);
    add_background_object(create_cavesoil17_1309(8520, 2368), 2);
    add_background_object(create_cavesoil1_1310(8584, 2576), 2);
    add_background_object(create_cavesoil1_1310(8584, 2832), 2);
    add_background_object(create_cavesoil1_1310(8584, 2960), 2);
    add_background_object(create_cavesoil1_1310(8584, 2704), 2);
    add_background_object(create_cavesoil1_1310(8712, 2576), 2);
    add_background_object(create_cavesoil1_1310(8712, 2832), 2);
    add_background_object(create_cavesoil1_1310(8712, 2960), 2);
    add_background_object(create_cavesoil1_1310(8712, 2704), 2);
    add_background_object(create_cavesoil15_1316(7880, 2192), 2);
    add_background_object(create_cavesoil14_1314(7880, 2184), 2);
    add_background_object(create_cavesoil12_1350(7992, 2240), 2);
    add_background_object(create_cavesoil1_1310(7880, 1936), 2);
    add_background_object(create_edgeoverlay_496(7880, 2192), 2);
    add_background_object(create_edgeoverlay_496(7912, 2208), 2);
    add_background_object(create_edgeoverlay_496(7944, 2224), 2);
    add_background_object(create_cavesoil17_1309(7560, 2384), 2);
    add_background_object(create_cavesoil25_1317(7624, 2384), 2);
    add_background_object(create_cavesoil8_1454(7560, 2368), 2);
    add_background_object(create_cavesoil23_1351(7624, 2368), 2);
    add_background_object(create_cavesoil20_1464(7752, 2440), 2);
    add_background_object(create_cavesoil19_1460(7752, 2432), 2);
    add_background_object(create_cavesoil3_1339(7624, 2432), 2);
    add_background_object(create_cavesoil16_1344(7560, 2432), 2);
    add_background_object(create_cavesoil13_1456(7544, 2448), 2);
    add_background_object(create_cavesoil1_1310(8648, 2496), 2);
    add_background_object(create_cavesoil11_1313(8456, 2496), 2);
    add_background_object(create_cavesoil11_1313(8544, 2496), 2);
    add_background_object(create_cavesoil1_1310(8456, 2304), 2);
    add_background_object(create_cavesoil12_1350(8448, 2392), 2);
    add_background_object(create_cavesoil12_1350(8448, 2360), 2);
    add_background_object(create_cavesoil11_1313(8432, 2264), 2);
    add_background_object(create_cavesoil1_1310(8456, 2432), 2);
    add_background_object(create_cavesoil12_1350(8448, 2552), 2);
    add_background_object(create_cavesoil12_1350(8448, 2520), 2);
    add_background_object(create_cavesoil12_1350(8448, 2488), 2);
    add_background_object(create_cavesoil12_1350(8448, 2456), 2);
    add_background_object(create_cavesoil12_1350(8448, 2424), 2);
    add_background_object(create_cavesoil11_1313(8560, 2408), 2);
    add_background_object(create_rmcavebrick8_1437(8360, 2504), 2);
    add_background_object(create_rmcavebrick8_1437(8360, 2472), 2);
    add_background_object(create_rmcavebrick8_1437(8424, 2440), 2);
    add_background_object(create_rmcavebrick8_1437(8424, 2408), 2);
    add_background_object(create_switchwallbase_1486(8344, 2488), 2);
    add_background_object(create_rmcavebrick7_1446(8384, 2472), 2);
    add_background_object(create_rmcavebrick1_1449(8360, 2472), 2);
    add_background_object(create_rmcavebrick10_1451(8384, 2504), 2);
    add_background_object(create_cavesoil12_1350(7728, 2768), 2);
    add_background_object(create_cavesoil12_1350(7728, 2800), 2);
    add_background_object(create_cavesoil12_1350(7728, 2832), 2);
    add_background_object(create_cavesoil12_1350(7728, 2864), 2);
    add_background_object(create_cavesoil16_1344(7688, 2752), 2);
    add_background_object(create_cavesoil20_1464(7672, 2760), 2);
    add_background_object(create_cavesoil8_1454(7688, 2880), 2);
    add_background_object(create_cavesoil8_1454(7616, 2880), 2);
    add_background_object(create_cavesoil19_1460(7672, 2880), 2);
    add_background_object(create_cavesoil8_1454(7560, 2880), 2);
    add_background_object(create_cavesoil11_1313(7736, 2680), 2);
    add_background_object(create_cavesoil11_1313(7736, 2824), 2);
    add_background_object(create_cavesoil11_1313(7680, 2880), 2);
    add_background_object(create_cavesoil11_1313(7680, 2656), 2);
    add_background_object(create_cavesoil12_1350(5776, 1384), 2);
    add_background_object(create_cavesoil12_1350(5776, 1352), 2);
    add_background_object(create_cavesoil35_1482(5776, 1360), 2);
    add_background_object(create_cavesoil35_1482(5776, 1296), 2);
    add_background_object(create_cavesoil20_1464(5792, 1408), 2);
    add_background_object(create_cavesoil20_1464(5776, 1408), 2);
    add_background_object(create_rmcavebrick1_1449(5040, 1104), 2);
    add_background_object(create_cavesoil3_1339(3848, 224), 2);
    add_background_object(create_cavesoil2_1338(3848, 384), 2);
    add_background_object(create_cavesoil19_1460(3832, 384), 2);
    add_background_object(create_cavesoil20_1464(3832, 232), 2);
    add_background_object(create_cavesoil12_1350(3968, 256), 2);
    add_background_object(create_cavesoil12_1350(3968, 288), 2);
    add_background_object(create_cavesoil12_1350(3968, 320), 2);
    add_background_object(create_cavesoil12_1350(3968, 352), 2);
    add_background_object(create_cavesoil1_1310(6896, 952), 2);
    add_background_object(create_cavesoil1_1310(6896, 824), 2);
    add_background_object(create_cavesoil1_1310(6896, 1080), 2);
    add_background_object(create_cavesoil1_1310(6896, 1208), 2);
    add_background_object(create_cavesoil20_1464(6624, 808), 2);
    add_background_object(create_cavesoil19_1460(6624, 944), 2);
    add_background_object(create_cavesoil2_1338(6640, 944), 2);
    add_background_object(create_cavesoil12_1350(6752, 816), 2);
    add_background_object(create_cavesoil12_1350(6752, 848), 2);
    add_background_object(create_cavesoil12_1350(6752, 880), 2);
    add_background_object(create_cavesoil12_1350(6752, 912), 2);
    add_background_object(create_cavesoil3_1339(6640, 800), 2);
    add_object(create_objectpetal_302(7105, 2737), 2);
    add_object(create_objectpetal_302(7057, 2737), 2);
    add_object(create_objectpetal_302(7009, 2737), 2);
    add_object(create_objectpetal_302(6961, 2737), 2);
    add_object(create_objectpetal_302(6913, 2737), 2);
    add_object(create_objectpetal_302(6865, 2737), 2);
    add_object(create_objectcrystal_279(3789, 1170), 2);
    add_object(create_objectcrystal_279(3781, 1202), 2);
    add_object(create_objectcrystal_279(3789, 1234), 2);
    add_object(create_objectcrystal_279(3781, 1266), 2);
    add_object(create_objectcrystal_279(3789, 1298), 2);
    add_object(create_objectcrystal_279(3781, 1330), 2);
    add_object(create_objectcrystal_279(3789, 1362), 2);
    add_object(create_objectcrystal_279(3781, 1394), 2);
    add_object(create_levellayer117_1487(3184, 1320), 2);
    add_object(create_objectcrystal_279(2733, 1098), 2);
    add_object(create_objectcrystal_279(2789, 1098), 2);
    add_object(create_objectcrystal_279(2789, 1050), 2);
    add_object(create_objectcrystal_279(2789, 1146), 2);
    add_object(create_objectcrystal_279(2733, 1050), 2);
    add_object(create_objectcrystal_279(2733, 1146), 2);
    add_object(create_objectcrystal_279(2761, 1050), 2);
    add_object(create_objectcrystal_279(2761, 1098), 2);
    add_object(create_objectcrystal_279(2761, 1146), 2);
    add_object(create_objectcrystal_279(2789, 1002), 2);
    add_object(create_objectcrystal_279(2733, 1002), 2);
    add_object(create_objectcrystal_279(2761, 1002), 2);
    add_object(create_enemyextractorbase_1176(2172, 740), 2);
    add_object(create_objectcrystal_279(157, 602), 2);
    add_object(create_objectcrystal_279(189, 602), 2);
    add_object(create_objectcrystal_279(189, 642), 2);
    add_object(create_objectcrystal_279(157, 642), 2);
    add_object(create_objectcrystal_279(221, 602), 2);
    add_object(create_objectcrystal_279(221, 642), 2);
    add_object(create_objectcrystal_279(157, 682), 2);
    add_object(create_objectcrystal_279(157, 722), 2);
    add_object(create_objectcrystal_279(221, 682), 2);
    add_object(create_objectcrystal_279(221, 722), 2);
    add_object(create_enemyextractorhead_1177(2172, 740), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_playerstartingpoint_358(61, 517), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_gimmickrollingplatformcave2_1488(5032, 1286), 2);
    add_object(create_playerinput_19(-440, 176), 2);
    add_object(create_masterinput_20(-464, 176), 2);
    add_object(create_inputsp1_21(-416, 176), 2);
    add_object(create_globalinputdata_22(-392, 176), 2);
    add_object(create_cameratriggerboss_424(688, -200), 2);
    add_object(create_breakableruins_1489(-96, 1016), 2);
    add_object(create_sign_351(9056, 2997), 2);
    add_object(create_gimmickspinnycup_1399(5665, 1528), 2);
    add_object(create_gimmickpickaxehandle_1400(3376, 556), 2);
    add_object(create_gimmickpickaxebase_1401(3376, 556), 2);
    add_object(create_gimmickpickaxe_1402(3376, 560), 2);
    add_object(create_gimmickpickaxehandle_1400(7272, 2532), 2);
    add_object(create_gimmickpickaxebase2_1403(7277, 2535), 2);
    add_object(create_gimmickpickaxe_1402(7272, 2536), 2);
    add_object(create_gimmickrelicflippanel2_1242(7264, 2424), 2);
    add_object(create_gimmickrisingswing_1405(4262, 1014), 2);
    add_object(create_gimmickrisingswingpiece_1406(4258, 1034), 2);
    add_object(create_gimmickrisingswingpiece_1406(4258, 1058), 2);
    add_object(create_gimmickrisingswingpiece_1406(4258, 1082), 2);
    add_object(create_gimmickrisingswingpiece_1406(4258, 1106), 2);
    add_object(create_gimmickhangingswitch_1381(4704, 568), 2);
    add_object(create_gimmickhangingidleswitch_1257(4705, 568), 2);
    add_object(create_cavesoilcraterfront2_1411(7280, 2408), 2);
    add_object(create_breakableruins_1489(1856, 672), 2);
    add_object(create_breakableruins_1489(1856, 728), 2);
    add_object(create_breakableruins_1489(208, 552), 2);
    add_object(create_breakableruins_1489(208, 608), 2);
    add_object(create_breakableruins_1489(160, 552), 2);
    add_object(create_breakableruins_1489(160, 608), 2);
    add_object(create_breakableruins_1489(112, 552), 2);
    add_object(create_breakableruins_1489(112, 608), 2);
    add_object(create_minibossganseki_1490(640, 495), 2);
    add_object(create_minibossgansekicap_1491(712, 455), 2);
    add_object(create_minibossgansekispike1_1492(662, 447), 2);
    add_object(create_minibossgansekispike2_1493(678, 447), 2);
    add_object(create_minibossgansekispike3_1494(694, 447), 2);
    add_object(create_minibossgansekispike4_1495(710, 447), 2);
    add_object(create_breakableruins_1489(208, 664), 2);
    add_object(create_breakableruins_1489(160, 664), 2);
    add_object(create_breakableruins_1489(112, 664), 2);
    add_object(create_breakableruins_1489(208, 720), 2);
    add_object(create_breakableruins_1489(160, 720), 2);
    add_object(create_breakableruins_1489(112, 720), 2);
    add_object(create_objectcrystal_279(461, 538), 2);
    add_object(create_objectcrystal_279(493, 514), 2);
    add_object(create_objectcrystal_279(525, 538), 2);
    add_object(create_objectcrystal_279(461, 578), 2);
    add_object(create_objectcrystal_279(525, 578), 2);
    add_object(create_enemysentinel_1496(824, 536), 2);
    add_object(create_enemysentinel_1496(1160, 328), 2);
    add_object(create_gimmickrollingplatformcave2_1488(1720, 1190), 2);
    add_object(create_gimmickrollingplatformcave_1497(1720, 1190), 2);
    add_object(create_levellayer115_1498(1440, 728), 2);
    add_object(create_levellayer115_1498(1440, 792), 2);
    add_object(create_levellayer002_1499(1480, 920), 2);
    add_object(create_levellayer115_1498(1440, 856), 2);
    add_object(create_levellayer115_1498(1440, 920), 2);
    add_object(create_levellayer115_1498(1440, 984), 2);
    add_object(create_levellayer001_1500(1480, 912), 2);
    add_object(create_levellayer02_1501(1480, 1024), 2);
    add_object(create_levellayer002_1499(1352, 920), 2);
    add_object(create_levellayer015_1502(1352, 816), 2);
    add_object(create_layerchangeswitch_404(1496, 616), 2);
    add_object(create_layerchangeto0_405(1352, 712), 2);
    add_object(create_layerchangeto0_405(1352, 768), 2);
    add_object(create_layerchangeto0_405(1936, 680), 2);
    add_object(create_layerchangeto0_405(1936, 736), 2);
    add_object(create_levellayer02_1501(1352, 1024), 2);
    add_object(create_layerchangeto0_405(1336, 1072), 2);
    add_object(create_objectcrystal_279(1661, 562), 2);
    add_object(create_objectcrystal_279(1613, 570), 2);
    add_object(create_objectcrystal_279(1709, 570), 2);
    add_object(create_objectcrystal_279(1565, 586), 2);
    add_object(create_objectcrystal_279(1757, 586), 2);
    add_object(create_objectcrystal_279(1797, 610), 2);
    add_object(create_objectcrystal_279(1525, 610), 2);
    add_object(create_objectcrystal_279(1029, 618), 2);
    add_object(create_objectcrystal_279(957, 546), 2);
    add_object(create_objectcrystal_279(981, 570), 2);
    add_object(create_objectcrystal_279(1005, 594), 2);
    add_object(create_monitorrings_407(1056, 688), 2);
    add_object(create_redspringleft_442(1960, 1416), 2);
    add_object(create_breakableruins_1489(2704, 656), 2);
    add_object(create_breakableruins_1489(2752, 656), 2);
    add_object(create_breakableruins_1489(2704, 456), 2);
    add_object(create_breakableruins_1489(2752, 456), 2);
    add_object(create_breakableruins_1489(2704, 400), 2);
    add_object(create_breakableruins_1489(2752, 400), 2);
    add_object(create_breakableruins_1489(2704, 704), 2);
    add_object(create_breakableruins_1489(2752, 704), 2);
    add_object(create_breakableruins_1489(2704, 752), 2);
    add_object(create_breakableruins_1489(2752, 752), 2);
    add_object(create_breakableruins_1489(2704, 808), 2);
    add_object(create_breakableruins_1489(2752, 808), 2);
    add_object(create_breakableruins_1489(2704, 864), 2);
    add_object(create_breakableruins_1489(2752, 864), 2);
    add_object(create_breakableruins_1489(2704, 344), 2);
    add_object(create_breakableruins_1489(2752, 344), 2);
    add_object(create_cavesoilcraterfront_1410(2152, 776), 2);
    add_object(create_gimmickdrillplatform_1503(2760, 80), 2);
    add_object(create_breakableruins_1489(2704, 1224), 2);
    add_object(create_breakableruins_1489(2752, 1224), 2);
    add_object(create_breakableruins_1489(2704, 1280), 2);
    add_object(create_breakableruins_1489(2752, 1280), 2);
    add_object(create_breakableruins_1489(2704, 1336), 2);
    add_object(create_breakableruins_1489(2752, 1336), 2);
    add_object(create_breakableruins_1489(2704, 1032), 2);
    add_object(create_breakableruins_1489(2752, 1032), 2);
    add_object(create_breakableruins_1489(2704, 1064), 2);
    add_object(create_breakableruins_1489(2752, 1064), 2);
    add_object(create_monitorcrystals_324(2864, 1192), 2);
    add_object(create_levellayer117_1487(3184, 1256), 2);
    add_object(create_levellayer1loop2_1504(3184, 1160), 2);
    add_object(create_levellayer03_1505(3208, 1352), 2);
    add_object(create_layerchangeswitch_404(3296, 1160), 2);
    add_object(create_breakableruins_1489(3728, 1544), 2);
    add_object(create_breakableruins_1489(3776, 1544), 2);
    add_object(create_breakableruins_1489(3728, 1600), 2);
    add_object(create_breakableruins_1489(3776, 1600), 2);
    add_object(create_breakableruins_1489(3728, 1656), 2);
    add_object(create_breakableruins_1489(3776, 1656), 2);
    add_object(create_objectcrystal_279(4013, 1482), 2);
    add_object(create_objectcrystal_279(4013, 1426), 2);
    add_object(create_objectcrystal_279(4013, 1370), 2);
    add_object(create_breakableruins_1489(3728, 1320), 2);
    add_object(create_breakableruins_1489(3776, 1320), 2);
    add_object(create_breakableruins_1489(3728, 1376), 2);
    add_object(create_breakableruins_1489(3776, 1376), 2);
    add_object(create_breakableruins_1489(3728, 1208), 2);
    add_object(create_breakableruins_1489(3776, 1208), 2);
    add_object(create_breakableruins_1489(3728, 1264), 2);
    add_object(create_breakableruins_1489(3776, 1264), 2);
    add_object(create_gimmickdrillplatform_1503(3784, 296), 2);
    add_object(create_layerchangeto0_405(2952, 1128), 2);
    add_object(create_layerchangeto0_405(2952, 1184), 2);
    add_object(create_breakableruins_1489(3728, 1152), 2);
    add_object(create_breakableruins_1489(3776, 1152), 2);
    add_object(create_objectcrystal_279(3493, 1522), 2);
    add_object(create_objectcrystal_279(3525, 1522), 2);
    add_object(create_objectcrystal_279(3557, 1522), 2);
    add_object(create_objectcrystal_279(3589, 1522), 2);
    add_object(create_objectcrystal_279(3621, 1522), 2);
    add_object(create_objectcrystal_279(3653, 1522), 2);
    add_object(create_objectcrystal_279(3685, 1522), 2);
    add_object(create_objectcrystal_279(3253, 1202), 2);
    add_object(create_objectcrystal_279(3357, 1202), 2);
    add_object(create_objectcrystal_279(3357, 1314), 2);
    add_object(create_objectcrystal_279(3381, 1258), 2);
    add_object(create_objectcrystal_279(3309, 1178), 2);
    add_object(create_layerchangeswitch2_1239(3416, 1432), 2);
    add_object(create_layerchangeswitch2_1239(3416, 1488), 2);
    add_object(create_laddertop_357(3604, 991), 2);
    add_object(create_enemysentinel_1496(3472, 880), 2);
    add_object(create_laddertop_357(2684, 1055), 2);
    add_object(create_monitorkeystone_562(2552, 1000), 2);
    add_object(create_monitorbomb_563(3528, 936), 2);
    add_object(create_objectpetal_302(1297, 1017), 2);
    add_object(create_objectpetal_302(1321, 1041), 2);
    add_object(create_yellowspringright_435(2968, 808), 2);
    add_object(create_laddertop_357(3500, 327), 2);
    add_object(create_monitor1up_410(3296, 272), 2);
    add_object(create_enemyiris_1183(2928, 532), 2);
    add_object(create_enemyiris_1183(2864, 532), 2);
    add_object(create_objectcrystal_279(3365, 530), 2);
    add_object(create_objectcrystal_279(3341, 546), 2);
    add_object(create_objectcrystal_279(3389, 530), 2);
    add_object(create_objectcrystal_279(3413, 546), 2);
    add_object(create_enemyslug_1182(3951, 1140), 2);
    add_object(create_breakableruins_1489(3728, 536), 2);
    add_object(create_breakableruins_1489(3776, 536), 2);
    add_object(create_breakableruins_1489(3728, 592), 2);
    add_object(create_breakableruins_1489(3776, 592), 2);
    add_object(create_enemyiris_1183(2032, 1068), 2);
    add_object(create_layerchangeswitch_404(3280, 1304), 2);
    add_object(create_gimmickhangingidlesensor_740(1425, 176), 2);
    add_object(create_enemyiris_1183(1752, 284), 2);
    add_object(create_enemyiris_1183(1880, 316), 2);
    add_object(create_monitorkeystone_562(224, 504), 2);
    add_object(create_gimmickmovingpillar1_1407(4416, 816), 2);
    add_object(create_gimmickmovingpillar3_1409(4416, 848), 2);
    add_object(create_gimmickmovingpillar1_1407(4464, 784), 2);
    add_object(create_gimmickmovingpillar3_1409(4464, 848), 2);
    add_object(create_gimmickmovingpillar1_1407(4512, 752), 2);
    add_object(create_gimmickmovingpillar3_1409(4512, 848), 2);
    add_object(create_gimmickmovingpillar1_1407(4560, 720), 2);
    add_object(create_gimmickmovingpillar3_1409(4560, 848), 2);
    add_object(create_gimmickmovingpillar1_1407(4608, 688), 2);
    add_object(create_gimmickmovingpillar3_1409(4608, 848), 2);
    add_object(create_gimmickmovingpillar2_1408(4512, 784), 2);
    add_object(create_gimmickmovingpillar2_1408(4560, 784), 2);
    add_object(create_gimmickmovingpillar2_1408(4608, 752), 2);
    add_object(create_gimmickmovingpillar2_1408(4608, 816), 2);
    add_object(create_gimmickrollingplatformcave_1497(5032, 1286), 2);
    add_object(create_redspringright_441(4632, 1640), 2);
    add_object(create_redspringright_441(4632, 1576), 2);
    add_object(create_redspringright_441(4632, 1608), 2);
    add_object(create_monitorrings_407(3936, 976), 2);
    add_object(create_enemysentinel_1496(4584, 608), 2);
    add_object(create_yellowspringleft_436(6376, 1968), 2);
    add_object(create_yellowspringleft_436(6376, 1936), 2);
    add_object(create_yellowspringleft_436(6376, 1904), 2);
    add_object(create_yellowspringleft_436(6376, 1872), 2);
    add_object(create_redspringright_441(6040, 2152), 2);
    add_object(create_redspringright_441(6040, 2120), 2);
    add_object(create_redspringright_441(6040, 2088), 2);
    add_object(create_redspringright_441(6040, 2056), 2);
    add_object(create_yellowspringup_434(6296, 3184), 2);
    add_object(create_yellowspringup_434(6360, 3184), 2);
    add_object(create_yellowspringup_434(6328, 3184), 2);
    add_object(create_breakableruins_1489(5968, 1912), 2);
    add_object(create_breakableruins_1489(5968, 1968), 2);
    add_object(create_breakableruins_1489(5912, 1912), 2);
    add_object(create_breakableruins_1489(5912, 1968), 2);
    add_object(create_breakableruins_1489(5968, 2024), 2);
    add_object(create_breakableruins_1489(5912, 2024), 2);
    add_object(create_breakableruins_1489(5856, 1912), 2);
    add_object(create_breakableruins_1489(5856, 1968), 2);
    add_object(create_breakableruins_1489(5856, 2024), 2);
    add_object(create_yellowspringup_434(6792, 3072), 2);
    add_object(create_yellowspringup_434(6824, 3072), 2);
    add_object(create_levelrmplatform_1506(7608, 2560), 2);
    add_object(create_levelrmplatform_1506(7576, 2560), 2);
    add_object(create_breakableruins_1489(7352, 2776), 2);
    add_object(create_breakableruins_1489(7352, 2832), 2);
    add_object(create_breakableruins_1489(7408, 2776), 2);
    add_object(create_breakableruins_1489(7408, 2832), 2);
    add_object(create_breakableruins_1489(7464, 2776), 2);
    add_object(create_breakableruins_1489(7464, 2832), 2);
    add_object(create_laddertop_357(7212, 2391), 2);
    add_object(create_cavesoilcraterfront2_1411(7280, 2624), 2);
    add_object(create_yellowspringup_434(7576, 2752), 2);
    add_object(create_objectcrystal_279(7717, 2802), 2);
    add_object(create_objectcrystal_279(7693, 2830), 2);
    add_object(create_objectcrystal_279(7717, 2830), 2);
    add_object(create_objectcrystal_279(7693, 2858), 2);
    add_object(create_objectcrystal_279(7717, 2858), 2);
    add_object(create_objectcrystal_279(7693, 2802), 2);
    add_object(create_objectcrystal_279(6293, 2162), 2);
    add_object(create_objectcrystal_279(6341, 2162), 2);
    add_object(create_objectcrystal_279(6389, 2162), 2);
    add_object(create_objectcrystal_279(6437, 2162), 2);
    add_object(create_objectcrystal_279(6533, 2482), 2);
    add_object(create_objectcrystal_279(6533, 2538), 2);
    add_object(create_objectcrystal_279(6453, 2482), 2);
    add_object(create_objectcrystal_279(6493, 2482), 2);
    add_object(create_objectcrystal_279(6493, 2538), 2);
    add_object(create_objectcrystal_279(6413, 2482), 2);
    add_object(create_objectcrystal_279(6453, 2538), 2);
    add_object(create_objectcrystal_279(6413, 2538), 2);
    add_object(create_objectcrystal_279(6373, 2482), 2);
    add_object(create_objectcrystal_279(6373, 2538), 2);
    add_object(create_objectcrystal_279(6293, 2482), 2);
    add_object(create_objectcrystal_279(6333, 2482), 2);
    add_object(create_objectcrystal_279(6333, 2538), 2);
    add_object(create_objectcrystal_279(6253, 2482), 2);
    add_object(create_objectcrystal_279(6293, 2538), 2);
    add_object(create_objectcrystal_279(6253, 2538), 2);
    add_object(create_objectcrystal_279(6941, 2882), 2);
    add_object(create_objectcrystal_279(6973, 2866), 2);
    add_object(create_objectcrystal_279(7005, 2850), 2);
    add_object(create_objectcrystal_279(1921, 386), 2);
    add_object(create_objectcrystal_279(1953, 402), 2);
    add_object(create_objectcrystal_279(1985, 418), 2);
    add_object(create_hazardspikesup_1172(1368, 232), 2);
    add_object(create_hazardspikesup_1172(1384, 232), 2);
    add_object(create_hazardspikesup_1172(1416, 232), 2);
    add_object(create_hazardspikesup_1172(1512, 232), 2);
    add_object(create_hazardspikesup_1172(1544, 232), 2);
    add_object(create_hazardspikesup_1172(1448, 232), 2);
    add_object(create_hazardspikesup_1172(1480, 232), 2);
    add_object(create_yellowspringup_434(1336, 376), 2);
    add_object(create_yellowspringup_434(1576, 376), 2);
    add_object(create_gimmickhangingidlesensor_740(1521, 176), 2);
    add_object(create_monitorcrate_409(5400, 2016), 2);
    add_object(create_breakableruins_1489(7064, 2696), 2);
    add_object(create_breakableruins_1489(7008, 2696), 2);
    add_object(create_breakableruins_1489(6952, 2696), 2);
    add_object(create_breakableruins_1489(6896, 2696), 2);
    add_object(create_breakableruins_1489(6840, 2696), 2);
    add_object(create_breakableruins_1489(6784, 2696), 2);
    add_object(create_monitorrings_407(6928, 3040), 2);
    add_object(create_redspringupright_438(5248, 1072), 2);
    add_object(create_redspringdown_443(5336, 960), 2);
    add_object(create_redspringupright_438(5312, 1072), 2);
    add_object(create_redspringdown_443(5400, 960), 2);
    add_object(create_redspringupright_438(5376, 1072), 2);
    add_object(create_redspringdown_443(5464, 960), 2);
    add_object(create_redspringupright_438(5440, 1072), 2);
    add_object(create_redspringdown_443(5528, 960), 2);
    add_object(create_redspringupright_438(5504, 1072), 2);
    add_object(create_redspringdown_443(5592, 960), 2);
    add_object(create_redspringdown_443(5368, 960), 2);
    add_object(create_redspringdown_443(5432, 960), 2);
    add_object(create_redspringdown_443(5496, 960), 2);
    add_object(create_redspringdown_443(5560, 960), 2);
    add_object(create_redspringdown_443(5624, 960), 2);
    add_object(create_redspringupright_438(5280, 1072), 2);
    add_object(create_redspringupright_438(5344, 1072), 2);
    add_object(create_redspringupright_438(5408, 1072), 2);
    add_object(create_redspringupright_438(5472, 1072), 2);
    add_object(create_redspringupright_438(5536, 1072), 2);
    add_object(create_levelrmplatform_1506(6096, 840), 2);
    add_object(create_levelrmplatform_1506(6032, 840), 2);
    add_object(create_enemyfirespitter_1385(5820, 800), 2);
    add_object(create_enemylimiter_350(5701, 802), 2);
    add_object(create_enemylimiter_350(6005, 802), 2);
    add_object(create_objectcodec_354(5689, 644), 2);
    add_object(create_laddertop_357(5732, 615), 2);
    add_object(create_objectcrystal_279(4261, 610), 2);
    add_object(create_objectcrystal_279(4357, 610), 2);
    add_object(create_objectcrystal_279(4293, 610), 2);
    add_object(create_objectcrystal_279(4325, 610), 2);
    add_object(create_objectcrystal_279(4261, 634), 2);
    add_object(create_objectcrystal_279(4357, 634), 2);
    add_object(create_objectcrystal_279(4293, 634), 2);
    add_object(create_objectcrystal_279(4325, 634), 2);
    add_object(create_objectcrystal_279(4261, 658), 2);
    add_object(create_objectcrystal_279(4357, 658), 2);
    add_object(create_objectcrystal_279(4293, 658), 2);
    add_object(create_objectcrystal_279(4325, 658), 2);
    add_object(create_objectcrystal_279(5181, 1186), 2);
    add_object(create_objectcrystal_279(5205, 1186), 2);
    add_object(create_objectcrystal_279(5229, 1186), 2);
    add_object(create_objectcrystal_279(5253, 1186), 2);
    add_object(create_objectcrystal_279(5277, 1186), 2);
    add_object(create_yellowspringleft_436(6208, 1072), 2);
    add_object(create_objectpetal_302(5545, 561), 2);
    add_object(create_objectpetal_302(5609, 561), 2);
    add_object(create_objectpetal_302(5673, 561), 2);
    add_object(create_laddertop_357(5020, 1095), 2);
    add_object(create_objectpetal_302(4793, 1457), 2);
    add_object(create_objectpetal_302(4793, 1425), 2);
    add_object(create_objectpetal_302(4825, 1457), 2);
    add_object(create_objectcrystal_279(5317, 1026), 2);
    add_object(create_objectcrystal_279(5349, 1026), 2);
    add_object(create_objectcrystal_279(5381, 1026), 2);
    add_object(create_objectcrystal_279(5413, 1026), 2);
    add_object(create_objectcrystal_279(5445, 1026), 2);
    add_object(create_objectcrystal_279(5477, 1026), 2);
    add_object(create_objectcrystal_279(5509, 1026), 2);
    add_object(create_objectcrystal_279(5541, 1026), 2);
    add_object(create_objectcrystal_279(5573, 1026), 2);
    add_object(create_objectcrystal_279(5605, 1026), 2);
    add_object(create_monitorcrate_409(5984, 808), 2);
    add_object(create_pushableblock1_531(5061, 1065), 2);
    add_object(create_switchpressureplate_1507(5088, 1088), 2);
    add_object(create_switchdoor_1508(5176, 944), 2);
    add_object(create_redspringdown_443(5304, 960), 2);
    add_object(create_objectpetal_302(4441, 905), 2);
    add_object(create_objectpetal_302(4441, 945), 2);
    add_object(create_laddertop_357(4916, 679), 2);
    add_object(create_enemylimiter_350(7293, 2354), 2);
    add_object(create_enemylimiter_350(7597, 2354), 2);
    add_object(create_enemyfirespitter_1385(7412, 2352), 2);
    add_object(create_yellowspringupleft_432(5344, 792), 2);
    add_object(create_enemyextractorbase_1176(5176, 780), 2);
    add_object(create_enemyextractorhead_1177(5176, 780), 2);
    add_object(create_cavesoilcraterfront_1410(5156, 816), 2);
    add_object(create_objectpetal_302(4857, 745), 2);
    add_object(create_objectpetal_302(4857, 793), 2);
    add_object(create_objectpetal_302(1473, 161), 2);
    add_object(create_objectpetal_302(4857, 841), 2);
    add_object(create_breakableruins_1489(5376, 624), 2);
    add_object(create_gatewayfront2_1509(8200, 2492), 2);
    add_object(create_breakableruins_1489(5376, 568), 2);
    add_object(create_objectjumppad_1510(1472, 688), 2);
    add_object(create_breakableruins_1489(5376, 512), 2);
    add_object(create_gatewayfront_1511(8200, 2492), 2);
    add_object(create_switchwallplate_1512(8344, 2488), 2);
    add_object(create_objectjumppad_1510(1656, 912), 2);
    add_object(create_enemysentinel_1496(8200, 2400), 2);
    add_object(create_objectjumppad_1510(560, 632), 2);
    add_object(create_shieldearth_314(-132, 340), 2);
    add_object(create_shieldwater_318(-76, 332), 2);
    add_object(create_shieldmagnetic_317(-76, 340), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldflamefront_316(-124, 332), 2);
    add_object(create_shieldwood_313(-140, 332), 2);
    add_object(create_breakableruins_1489(7672, 2776), 2);
    add_object(create_objectjumppad_1510(496, 392), 2);
    add_object(create_breakableruins_1489(7672, 2832), 2);
    add_object(create_objectjumppad_1510(368, 632), 2);
    add_object(create_monitorrings_407(600, 1104), 2);
    add_object(create_monitorearthshield_326(3384, 936), 2);
    add_object(create_enemylimiter_350(3853, 1138), 2);
    add_object(create_monitorfireshield_328(2904, 208), 2);
    add_object(create_objectpetal_302(5785, 1633), 2);
    add_object(create_objectpetal_302(5785, 1585), 2);
    add_object(create_monitorkeystone_562(3936, 352), 2);
    add_object(create_monitorkeystone_562(3904, 352), 2);
    add_object(create_cavesoilcraterfront_1410(3472, 560), 2);
    add_object(create_cavesoilcraterfront_1410(3248, 560), 2);
    add_object(create_objecttaostone_532(6699, 890), 2);
    add_object(create_objectcodec_354(5450, 1893), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_mapdata_30(-432, 232), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_cavesoil17_1309(5096, 864), 3);
    add_background_object(create_rmbluecrystal2_1301(3512, 1016), 3);
    add_background_object(create_rmbluecrystal1_1306(3400, 952), 3);
    add_background_object(create_gimmickspinnycupaxle_1423(5640, 1520), 3);
    add_background_object(create_cavesoil19_1460(256, 536), 3);
    add_background_object(create_cavesoil2_1338(128, 536), 3);
    add_background_object(create_cavesoil2_1338(0, 536), 3);
    add_background_object(create_cavesoil1_1310(1352, 920), 3);
    add_background_object(create_cavesoil11_1313(1248, 840), 3);
    add_background_object(create_cavesoil4_1345(1352, 816), 3);
    add_background_object(create_cavesoil1_1310(1480, 920), 3);
    add_background_object(create_cavesoil2_1338(1480, 912), 3);
    add_background_object(create_cavesoil3_1339(1480, 1024), 3);
    add_background_object(create_cavesoil3_1339(1352, 1024), 3);
    add_background_object(create_rmcavebrick7_1446(3208, 1352), 3);
    add_background_object(create_rmcavebrick13_1443(3208, 1384), 3);
    add_background_object(create_rmcavebrick7_1446(3144, 1352), 3);
    add_background_object(create_cavesoil11_1313(3048, 1344), 3);
    add_background_object(create_rmcavebrick1_1449(3408, 1008), 3);
    add_background_object(create_rmcavebrick2_1445(3432, 1008), 3);
    add_background_object(create_rmcavebrick1_1449(3520, 1072), 3);
    add_background_object(create_rmcavebrick2_1445(3544, 1072), 3);
    add_background_object(create_cavesoil20_1464(1336, 1032), 3);
    add_background_object(create_rmcavebrick1_1449(4144, 1104), 3);
    add_background_object(create_rmcavebrick7_1446(4168, 1104), 3);
    add_background_object(create_rmcavebrick7_1446(4232, 1104), 3);
    add_background_object(create_cavesoil3_1339(4616, 496), 3);
    add_background_object(create_cavesoil16_1344(7544, 2752), 3);
    add_background_object(create_rmbluecrystal2_1301(6312, 2160), 3);
    add_background_object(create_cavesoil8_1454(6312, 2216), 3);
    add_background_object(create_cavesoil1_1310(5200, 832), 3);
    add_background_object(create_cavesoil16_1344(5264, 928), 3);
    add_background_object(create_cavesoil11_1313(5144, 824), 3);
    add_background_object(create_cavesoil2_1338(5200, 824), 3);
    add_background_object(create_cavesoil16_1344(5136, 928), 3);
    add_background_object(create_cavesoil16_1344(5200, 928), 3);
    add_background_object(create_cavesoil8_1454(6792, 3080), 3);
    add_background_object(create_rmcavebrick3_1440(8104, 2536), 3);
    add_background_object(create_rmcavebrick3_1440(8168, 2536), 3);
    add_background_object(create_rmcavebrick3_1440(8232, 2536), 3);
    add_background_object(create_cavesoil1_1310(8200, 2576), 3);
    add_background_object(create_cavesoil1_1310(8072, 2576), 3);
    add_background_object(create_cavesoil2_1338(8200, 2560), 3);
    add_background_object(create_cavesoil2_1338(8072, 2560), 3);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
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
    add_object(create_playerskincarolbike_382(-112, 264), 5);
    add_object(create_playerskinmilla_446(-83, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-130, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
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
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_1172(-208, 392), 5);
    add_object(create_hazardspikesdown_1192(-168, 392), 5);
    add_object(create_hazardspikesleft_1193(-128, 392), 5);
    add_object(create_hazardspikesright_1194(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(952, -41), 5);
    add_object(create_cameralimitbossleft_421(792, -160), 5);
    add_object(create_cameralimitbossright_422(1111, -160), 5);
    add_object(create_cameralimitbosstop_423(952, -352), 5);
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
    add_object(create_effectwarning_1513(-212, 1200), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-64, 224), 5);
    add_object(create_playerdig_448(-48, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-60, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
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
    add_object(create_guikeystone_455(440, -112), 6);
    add_object(create_guikeystone_455(424, -112), 6);
    add_object(create_guikeystone_455(408, -112), 6);
    add_object(create_guikeystone_455(392, -112), 6);
    add_object(create_guikeystone_455(376, -112), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
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
    loop_spark_down_running = false;
    loop_spark_down_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_drillplatform_running = false;
    loop_drillplatform_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_bossganseki_floor_running = false;
    loop_bossganseki_floor_index = 0;
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
    loop_slug_running = false;
    loop_slug_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_risingswing_running = false;
    loop_risingswing_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    loop_cp_running = false;
    loop_cp_index = 0;
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
    loop_slug_floor_running = false;
    loop_slug_floor_index = 0;
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
    loop_spark_up_running = false;
    loop_spark_up_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_27, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_27, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_27, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_27, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_27, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_27, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_27, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_27, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_27, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_27, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_27, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_27, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_27, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_27, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_27, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_27, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_27, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_27, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_27, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_27, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_27, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_27, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_27, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_27, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_27, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_27, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_27, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_27, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_27, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_27, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_27, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_27, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_27, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_27, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_27, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_27, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_27, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_27, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_27, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_27, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_27, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_27, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_27, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_27, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_27, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_27, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_27, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_27, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_27, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_27, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_27, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_27, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_27, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_27, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1529_13 = loop_count;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1550_16 = loop_count;
    once_condition_56_13 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1408_24 = loop_count;
    not_always_1408_27 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_554_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_1406_27 = loop_count;
    not_always_600_13 = loop_count;
    once_condition_54_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_1655_25 = loop_count;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1398_23 = loop_count;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1455_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    not_always_1686_27 = loop_count;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_ganseki_1 = false;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    not_always_1405_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_540_13 = loop_count;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    once_condition_55_13 = false;
    once_condition_35_13 = false;
    not_always_1415_22 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_6034()
{
    // event 1442_28
    {
        if (!(group_main_engine_1)) goto event_1442_28_end;
        objectbluepot_1565_instances.clear_selection();
        for (ObjectIterator it(objectbluepot_1565_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (5))) { it.deselect(); continue; }
        }
        if (!objectbluepot_1565_instances.has_selection()) goto event_1442_28_end;
        FrameObject * single_instance_1442_28_0; single_instance_1442_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbluepot_1565_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1442_28_0 == NULL)
                    single_instance_1442_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1442_28_0))->get_movement()->set_speed(40+randrange(30));
        ((Active*)((Active*)single_instance_1442_28_0))->force_frame(51+(((Active*)get_single(objectbluepot_1565_instances, default_active_instance))->alterables->values.get(3)%math_helper%2));
        ((Active*)((Active*)single_instance_1442_28_0))->set_direction(4+((Active*)get_single(objectbluepot_1565_instances, default_active_instance))->alterables->values.get(3)*2);
        for (ObjectIterator it(objectbluepot_1565_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1442_28_end: ;
}
void Frames::loop_pot_28()
{
    event_func_6034();
}
void Frames::event_func_6035()
{
    // event 2271_28
    {
        if (!(group_main_engine_1)) goto event_2271_28_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_trouble_ogg_143, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2271_28_end: ;
}
void Frames::loop_play_music_6_28()
{
    event_func_6035();
}
void Frames::event_func_6036()
{
    // event 1646_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1646_28_end;
        if (!((global_values->get(26)) == (0))) goto event_1646_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(8)) == (0))) goto event_1646_28_end;
        media.play(str_data_voices_88+global_strings->get(11)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 2)+str__89+mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 6, 8)+str_ogg_90, 20-1);
    }
    event_1646_28_end: ;
}
void Frames::event_func_6037()
{
    // event 1647_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1647_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 0);
    }
    event_1647_28_end: ;
}
void Frames::event_func_6038()
{
    // event 1648_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_dialog_system_dialog_voices_voice_acting_1)) goto event_1648_28_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)) < (6))) goto event_1648_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(9, 1);
    }
    event_1648_28_end: ;
}
void Frames::event_func_6039()
{
    // event 1680_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_encounter_with_spade_1)) goto event_1680_28_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, string_to_number(mid_string(((Active*)get_instance(dialogbox_566_instances))->alterables->strings.get(0), 3, 2)));
    }
    event_1680_28_end: ;
}
void Frames::loop_voice_28()
{
    event_func_6036();
    event_func_6037();
    event_func_6038();
    event_func_6039();
}
void Frames::loop_wrapper_sound_hurt1_28(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_28(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_28(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_28(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_28(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_28(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_28(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_28(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_28(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_28(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_28(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_28(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_28(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_28(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_28(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_28(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_28(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_28(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_28(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_28(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_28(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_28(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_28(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_28(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_28(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_28(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_28(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_28(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_28(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_28(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_28(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_28(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_28(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_28(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_28(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_28(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_23();
}
void Frames::loop_wrapper_play_music_5_28(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_27();
}
void Frames::loop_wrapper_play_music_6_28(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_28();
}
void Frames::loop_wrapper_sound_go0_28(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_28(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_27();
}
void Frames::loop_wrapper_sound_explode3_28(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_28(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_28(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_28(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_28(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_6040()
{
    // event 1875_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1875_28_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1875_28_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1875_28_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->advance_movement(+1);
            ((Active*)*it)->set_scale(1);
        }
    }
    event_1875_28_end: ;
}
void Frames::col_0_28()
{
    event_func_6040();
}
void Frames::event_func_6041()
{
    // event 1985_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1985_28_end;
        FrameObject * single_instance_1985_28_0; single_instance_1985_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1985_28_0 == NULL)
                single_instance_1985_28_0 = new_obj;
        }
        FrameObject * single_instance_1985_28_1; single_instance_1985_28_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1985_28_1 == NULL)
                single_instance_1985_28_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1985_28_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1985_28_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1985_28_0))->move_back();
        ((Active*)((Active*)single_instance_1985_28_1))->alterables->values.set(1, ((Active*)get_instance(minibossflame_1199_instances, default_active_instance))->alterables->values.get(4));
    }
    event_1985_28_end: ;
}
