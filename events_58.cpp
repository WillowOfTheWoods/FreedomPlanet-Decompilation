#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4849()
{
    // event 1769_22
    {
        if (!(group_main_engine_1)) goto event_1769_22_end;
        if (!((minibosstreddright2_1039_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1769_22_end;
        minibosstreddright2_1039_instances.clear_selection();
        FrameObject * single_instance_1769_22_0; single_instance_1769_22_0 = pick_random(minibosstreddright2_1039_instances);
        if (single_instance_1769_22_0 == NULL) goto event_1769_22_end;
        ((Active*)((Active*)single_instance_1769_22_0))->destroy();
    }
    event_1769_22_end: ;
}
void Frames::event_func_4850()
{
    // event 1770_22
    {
        if (!(group_main_engine_1)) goto event_1770_22_end;
        if (!((minibosstreddright3_1043_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1770_22_end;
        minibosstreddright3_1043_instances.clear_selection();
        FrameObject * single_instance_1770_22_0; single_instance_1770_22_0 = pick_random(minibosstreddright3_1043_instances);
        if (single_instance_1770_22_0 == NULL) goto event_1770_22_end;
        ((Active*)((Active*)single_instance_1770_22_0))->destroy();
    }
    event_1770_22_end: ;
}
void Frames::event_func_4851()
{
    // event 1771_22
    {
        if (!(group_main_engine_1)) goto event_1771_22_end;
        if (!((minibosstreddright4_1040_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1771_22_end;
        minibosstreddright4_1040_instances.clear_selection();
        FrameObject * single_instance_1771_22_0; single_instance_1771_22_0 = pick_random(minibosstreddright4_1040_instances);
        if (single_instance_1771_22_0 == NULL) goto event_1771_22_end;
        ((Active*)((Active*)single_instance_1771_22_0))->destroy();
    }
    event_1771_22_end: ;
}
void Frames::event_func_4852()
{
    // event 1772_22
    {
        if (!(group_main_engine_1)) goto event_1772_22_end;
        if (!((minibosstreddright5_1042_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1772_22_end;
        minibosstreddright5_1042_instances.clear_selection();
        FrameObject * single_instance_1772_22_0; single_instance_1772_22_0 = pick_random(minibosstreddright5_1042_instances);
        if (single_instance_1772_22_0 == NULL) goto event_1772_22_end;
        ((Active*)((Active*)single_instance_1772_22_0))->destroy();
    }
    event_1772_22_end: ;
}
void Frames::event_func_4853()
{
    // event 1773_22
    {
        if (!(group_main_engine_1)) goto event_1773_22_end;
        if (!((minibosstreddright6_1041_instances.size()) > (minibosstredd_1044_instances.size()))) goto event_1773_22_end;
        minibosstreddright6_1041_instances.clear_selection();
        FrameObject * single_instance_1773_22_0; single_instance_1773_22_0 = pick_random(minibosstreddright6_1041_instances);
        if (single_instance_1773_22_0 == NULL) goto event_1773_22_end;
        ((Active*)((Active*)single_instance_1773_22_0))->destroy();
    }
    event_1773_22_end: ;
}
void Frames::event_func_4854()
{
    // event 1774_22
    {
        if (!(group_main_engine_1)) goto event_1774_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1774_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_1774_22_end: ;
}
void Frames::event_func_4855()
{
    // event 1775_22
    {
        if (!(group_main_engine_1)) goto event_1775_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1775_22_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1775_22_end;
        FrameObject * single_instance_1775_22_0; single_instance_1775_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstredd_1044_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1775_22_0 == NULL)
                    single_instance_1775_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1775_22_0))->set_x(((Active*)single_instance_1775_22_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1775_22_0))->set_y(((Active*)single_instance_1775_22_0)->get_y()-20+randrange(41));
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1775_22_1_end;
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
        dynamic_1775_22_1_end: ;
    }
    event_1775_22_end: ;
}
void Frames::event_func_4856()
{
    // event 1776_22
    {
        if (!(group_main_engine_1)) goto event_1776_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (15))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1776_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
            ((Active*)*it)->alterables->values.set(18, 10);
        }
    }
    event_1776_22_end: ;
}
void Frames::event_func_4857()
{
    // event 1777_22
    {
        if (!(group_main_engine_1)) goto event_1777_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (16))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1777_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1777_22_end: ;
}
void Frames::event_func_4858()
{
    // event 1778_22
    {
        if (!(group_main_engine_1)) goto event_1778_22_end;
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft1_1051_instances.has_selection()) goto event_1778_22_end;
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1778_22_0; single_instance_1778_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddleft1_1051_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1778_22_0 == NULL)
                    single_instance_1778_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1778_22_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1778_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1778_22_0))->get_movement()->set_speed(((Active*)single_instance_1778_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1778_22_end: ;
}
void Frames::event_func_4859()
{
    // event 1779_22
    {
        if (!(group_main_engine_1)) goto event_1779_22_end;
        minibosstreddleft2_1049_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft2_1049_instances.has_selection()) goto event_1779_22_end;
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1779_22_0; single_instance_1779_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddleft2_1049_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1779_22_0 == NULL)
                    single_instance_1779_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1779_22_0))->force_frame(2);
        ((Active*)((Active*)single_instance_1779_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1779_22_0))->get_movement()->set_speed(((Active*)single_instance_1779_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1779_22_end: ;
}
void Frames::event_func_4860()
{
    // event 1780_22
    {
        if (!(group_main_engine_1)) goto event_1780_22_end;
        minibosstreddleft3_1050_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft3_1050_instances.has_selection()) goto event_1780_22_end;
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1780_22_0; single_instance_1780_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddleft3_1050_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1780_22_0 == NULL)
                    single_instance_1780_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1780_22_0))->force_frame(3);
        ((Active*)((Active*)single_instance_1780_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1780_22_0))->get_movement()->set_speed(((Active*)single_instance_1780_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1780_22_end: ;
}
void Frames::event_func_4861()
{
    // event 1781_22
    {
        if (!(group_main_engine_1)) goto event_1781_22_end;
        minibosstreddleft4_1047_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft4_1047_instances.has_selection()) goto event_1781_22_end;
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1781_22_0; single_instance_1781_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddleft4_1047_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1781_22_0 == NULL)
                    single_instance_1781_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1781_22_0))->force_frame(4);
        ((Active*)((Active*)single_instance_1781_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1781_22_0))->get_movement()->set_speed(((Active*)single_instance_1781_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1781_22_end: ;
}
void Frames::event_func_4862()
{
    // event 1782_22
    {
        if (!(group_main_engine_1)) goto event_1782_22_end;
        minibosstreddleft5_1048_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft5_1048_instances.has_selection()) goto event_1782_22_end;
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1782_22_0; single_instance_1782_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddleft5_1048_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1782_22_0 == NULL)
                    single_instance_1782_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1782_22_0))->force_frame(5);
        ((Active*)((Active*)single_instance_1782_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1782_22_0))->get_movement()->set_speed(((Active*)single_instance_1782_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1782_22_end: ;
}
void Frames::event_func_4863()
{
    // event 1783_22
    {
        if (!(group_main_engine_1)) goto event_1783_22_end;
        minibosstreddleft6_1046_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddleft6_1046_instances.has_selection()) goto event_1783_22_end;
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1783_22_0; single_instance_1783_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddleft6_1046_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1783_22_0 == NULL)
                    single_instance_1783_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1783_22_0))->force_frame(6);
        ((Active*)((Active*)single_instance_1783_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1783_22_0))->get_movement()->set_speed(((Active*)single_instance_1783_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1783_22_end: ;
}
void Frames::event_func_4864()
{
    // event 1784_22
    {
        if (!(group_main_engine_1)) goto event_1784_22_end;
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddright1_1045_instances.has_selection()) goto event_1784_22_end;
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1784_22_0; single_instance_1784_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddright1_1045_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1784_22_0 == NULL)
                    single_instance_1784_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1784_22_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1784_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1784_22_0))->get_movement()->set_speed(((Active*)single_instance_1784_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1784_22_end: ;
}
void Frames::event_func_4865()
{
    // event 1785_22
    {
        if (!(group_main_engine_1)) goto event_1785_22_end;
        minibosstreddright2_1039_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddright2_1039_instances.has_selection()) goto event_1785_22_end;
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1785_22_0; single_instance_1785_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddright2_1039_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1785_22_0 == NULL)
                    single_instance_1785_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1785_22_0))->force_frame(2);
        ((Active*)((Active*)single_instance_1785_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1785_22_0))->get_movement()->set_speed(((Active*)single_instance_1785_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1785_22_end: ;
}
void Frames::event_func_4866()
{
    // event 1786_22
    {
        if (!(group_main_engine_1)) goto event_1786_22_end;
        minibosstreddright3_1043_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddright3_1043_instances.has_selection()) goto event_1786_22_end;
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1786_22_0; single_instance_1786_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddright3_1043_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1786_22_0 == NULL)
                    single_instance_1786_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1786_22_0))->force_frame(3);
        ((Active*)((Active*)single_instance_1786_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1786_22_0))->get_movement()->set_speed(((Active*)single_instance_1786_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1786_22_end: ;
}
void Frames::event_func_4867()
{
    // event 1787_22
    {
        if (!(group_main_engine_1)) goto event_1787_22_end;
        minibosstreddright4_1040_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddright4_1040_instances.has_selection()) goto event_1787_22_end;
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1787_22_0; single_instance_1787_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddright4_1040_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1787_22_0 == NULL)
                    single_instance_1787_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1787_22_0))->force_frame(4);
        ((Active*)((Active*)single_instance_1787_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1787_22_0))->get_movement()->set_speed(((Active*)single_instance_1787_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1787_22_end: ;
}
void Frames::event_func_4868()
{
    // event 1788_22
    {
        if (!(group_main_engine_1)) goto event_1788_22_end;
        minibosstreddright5_1042_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddright5_1042_instances.has_selection()) goto event_1788_22_end;
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1788_22_0; single_instance_1788_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddright5_1042_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1788_22_0 == NULL)
                    single_instance_1788_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1788_22_0))->force_frame(5);
        ((Active*)((Active*)single_instance_1788_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1788_22_0))->get_movement()->set_speed(((Active*)single_instance_1788_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1788_22_end: ;
}
void Frames::event_func_4869()
{
    // event 1789_22
    {
        if (!(group_main_engine_1)) goto event_1789_22_end;
        minibosstreddright6_1041_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosstreddright6_1041_instances.has_selection()) goto event_1789_22_end;
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1789_22_0; single_instance_1789_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstreddright6_1041_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibosstredddebris_1014(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1789_22_0 == NULL)
                    single_instance_1789_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1789_22_0))->force_frame(6);
        ((Active*)((Active*)single_instance_1789_22_0))->stop_animation();
        ((Active*)((Active*)single_instance_1789_22_0))->get_movement()->set_speed(((Active*)single_instance_1789_22_0)->get_movement()->get_speed()-10+randrange(15));
    }
    event_1789_22_end: ;
}
void Frames::event_func_4870()
{
    // event 1790_22
    {
        if (!(group_main_engine_1)) goto event_1790_22_end;
        minibosstredd_1044_instances.clear_selection();
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (2))) { it.deselect(); continue; }
        }
        if (!minibosstredd_1044_instances.has_selection()) goto event_1790_22_end;
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        FrameObject * single_instance_1790_22_0; single_instance_1790_22_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstredd_1044_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1790_22_0 == NULL)
                    single_instance_1790_22_0 = new_obj;
            }
        }
        FrameObject * single_instance_1790_22_1; single_instance_1790_22_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosstredd_1044_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1790_22_1 == NULL)
                    single_instance_1790_22_1 = new_obj;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1790_22_end: ;
}
void Frames::event_func_4871()
{
    // event 1791_22
    {
        if (!(group_main_engine_1)) goto event_1791_22_end;
        minibosstredddebris_1014_instances.clear_selection();
        for (ObjectIterator it(minibosstredddebris_1014_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-100))) { it.deselect(); continue; }
        }
        if (!minibosstredddebris_1014_instances.has_selection()) goto event_1791_22_end;
        for (ObjectIterator it(minibosstredddebris_1014_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1791_22_end: ;
}
void Frames::event_func_4872()
{
    // event 1793_22
    {
        if (!(group_main_engine_1)) goto event_1793_22_end;
        if (!(!media.is_channel_playing(31-1))) goto event_1793_22_end;
        media.play_id(SOUND_WATERFALL_153, 31-1, 0);
    }
    event_1793_22_end: ;
}
void Frames::event_func_4873()
{
    // event 1794_22
    {
        if (!(group_main_engine_1)) goto event_1794_22_end;
        media.set_channel_pan(31-1, sin_deg(global_values->get(3))*5);
        ((Active*)get_instance(treefront_1038_instances))->alterables->values.set(0, 0);
    }
    event_1794_22_end: ;
}
void Frames::event_func_4874()
{
    // event 1795_22
    {
        if (!(group_main_engine_1)) goto event_1795_22_end;
        waterfallfront_1061_instances.clear_selection();
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-250)) { it.deselect(); continue; }
        }
        if (!waterfallfront_1061_instances.has_selection()) goto event_1795_22_end;
        ((Active*)get_instance(treefront_1038_instances))->alterables->values.add(0, 1);
    }
    event_1795_22_end: ;
}
void Frames::event_func_4875()
{
    // event 1796_22
    {
        if (!(group_main_engine_1)) goto event_1796_22_end;
        waterfallfront_1061_instances.clear_selection();
        for (ObjectIterator it(waterfallfront_1061_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!waterfallfront_1061_instances.has_selection()) goto event_1796_22_end;
        ((Active*)get_instance(treefront_1038_instances))->alterables->values.add(0, 1);
    }
    event_1796_22_end: ;
}
void Frames::event_func_4876()
{
    // event 1797_22
    {
        if (!(group_main_engine_1)) goto event_1797_22_end;
        if (!((media.get_channel_volume(-1 +31)) < (((Active*)get_instance(treefront_1038_instances))->alterables->values.get(0)*60))) goto event_1797_22_end;
        media.set_channel_volume(31-1, get_min(media.get_channel_volume(-1 +31)+1, 100));
    }
    event_1797_22_end: ;
}
void Frames::event_func_4877()
{
    // event 1798_22
    {
        if (!(group_main_engine_1)) goto event_1798_22_end;
        if (!((media.get_channel_volume(-1 +31)) > (((Active*)get_instance(treefront_1038_instances))->alterables->values.get(0)*60))) goto event_1798_22_end;
        media.set_channel_volume(31-1, get_max(media.get_channel_volume(-1 +31)-1, 10));
    }
    event_1798_22_end: ;
}
void Frames::event_func_4878()
{
    // event 1799_22
    {
        if (!(group_main_engine_1)) goto event_1799_22_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3680, 1682, 3936, 2546)) > (0))) goto event_1799_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.set(2, 3904);
        ((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.set(3, 60);
    }
    event_1799_22_end: ;
}
void Frames::event_func_4879()
{
    // event 1800_22
    {
        if (!(group_main_engine_1)) goto event_1800_22_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 4192, 2169, 4448, 2696)) > (0))) goto event_1800_22_end;
        ((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.set(2, 4416);
        ((Active*)get_instance(bossserpentinehead_948_instances))->alterables->values.set(3, 0);
    }
    event_1800_22_end: ;
}
void Frames::event_func_4880()
{
    // event 1801_22
    bool or_result_1801_22 = false;
    bool or_temp_result_1801_22_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1801_22_0_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 3680, 1682, 3936, 2546)) > (0))) goto or_event_1801_22_0_end;
        or_result_1801_22 = true;
        or_temp_result_1801_22_0 = true;
    }
    or_event_1801_22_0_end: ;
    player_389_instances.clear_saved_selection();
    if (or_temp_result_1801_22_0) {
        player_389_instances.save_selection();
    }
    // event 1801_22
    bool or_temp_result_1801_22_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1801_22_1_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 4192, 2169, 4448, 2696)) > (0))) goto or_event_1801_22_1_end;
        or_result_1801_22 = true;
        or_temp_result_1801_22_1 = true;
    }
    or_event_1801_22_1_end: ;
    if (or_temp_result_1801_22_1) {
        player_389_instances.save_selection();
    }
    // event 1801_22
    bool or_temp_result_1801_22_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1801_22_2_end;
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (60))) { it.deselect(); continue; }
        }
        if (!bossserpentinehead_948_instances.has_selection()) goto or_event_1801_22_2_end;
        or_result_1801_22 = true;
        or_temp_result_1801_22_2 = true;
        or_event_1801_22_2_end: ;
        bossserpentinehead_948_instances.clear_saved_selection();
        if (or_temp_result_1801_22_2) {
            bossserpentinehead_948_instances.save_selection();
        }
        if (!or_result_1801_22) goto or_final_or_event_1801_22_2_end;
        bossserpentinehead_948_instances.empty_selection();
        player_389_instances.empty_selection();
        if (or_temp_result_1801_22_2) {
            bossserpentinehead_948_instances.restore_selection();
        }
        if (or_temp_result_1801_22_0 || or_temp_result_1801_22_1) {
            player_389_instances.restore_selection();
        }
        {
            loop_waterfall_snake_running = true;
            int times = int(1);
            loop_waterfall_snake_index = 0;
            while (loop_waterfall_snake_index < times) {
                loop_waterfall_snake_22();
                if (!loop_waterfall_snake_running) break;
                loop_waterfall_snake_index++;
            }
        }
    }
    or_final_or_event_1801_22_2_end: ;
}
void Frames::event_func_4881()
{
    // event 1809_22
    {
        if (!(group_main_engine_1)) goto event_1809_22_end;
        if (!(((Active*)get_instance(bossserpentinehead_948_instances))->test_animation(11))) goto event_1809_22_end;
        if (!((((Active*)get_instance(bossserpentinehead_948_instances))->get_frame()) != (1))) goto event_1809_22_end;
        if (not_always_1809_22 > loop_count) {
            not_always_1809_22 = loop_count + 2;
            goto event_1809_22_end;
        }
        not_always_1809_22 = loop_count + 2;
        FrameObject * single_instance_1809_22_0; single_instance_1809_22_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossserpentinehead_948_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossfireball_967(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1809_22_0 == NULL)
                    single_instance_1809_22_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1809_22_0))->set_direction((((Active*)get_instance(bossserpentinehead_948_instances))->get_frame()*8)+16);
        media.play_id(SOUND_FIREBALL_2_46, -1, 1);
    }
    event_1809_22_end: ;
}
void Frames::event_func_4882()
{
    // event 1810_22
    {
        if (!(group_main_engine_1)) goto event_1810_22_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1810_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1810_22_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1810_22_end;
        playercharactersensor_383_instances.clear_selection();
        bossfireball_967_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, bossfireball_967_instances)) goto event_1810_22_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, ((Active*)get_single(bossfireball_967_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1810_22_end: ;
}
void Frames::event_func_4883()
{
    // event 1972_22
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_event_camera_system_1)) goto event_1972_22_end;
        set_display_center(frame_left()+((frame_right()-frame_left())/math_helper/2)+(106-global_values->get(19)*53)+(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)-(frame_left()+((frame_right()-frame_left())/math_helper/2)))*0.1, -1);
        set_display_center(-1, frame_top()+((frame_bottom()-frame_top())/math_helper/2)+(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)-(frame_top()+((frame_bottom()-frame_top())/math_helper/2)))*0.1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1972_22_end: ;
}
void Frames::event_func_4884()
{
    // event 2056_22
    {
        if (!(group_pause_1)) goto event_2056_22_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2056_22_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2056_22_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2056_22_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2056_22_end;
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
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bossserpentinehead_948_instances))->stop_animation();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossfireball_967_instances.clear_selection();
        for (ObjectIterator it(bossfireball_967_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        minibosstredddebris_1014_instances.clear_selection();
        for (ObjectIterator it(minibosstredddebris_1014_instances); !it.end(); ++it) {
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
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
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
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        gimmickbamboospike2_1057_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike2_1057_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bubblepatch_806_instances.clear_selection();
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bigbubble_428_instances))->stop_animation();
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
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
        effectswaterhit_655_instances.clear_selection();
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2056_22_end: ;
}
void Frames::event_func_4885()
{
    // event 2057_22
    bool or_result_2057_22 = false;
    bool or_temp_result_2057_22_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2057_22_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2057_22_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2057_22_0_end;
        or_result_2057_22 = true;
        or_temp_result_2057_22_0 = true;
    }
    or_event_2057_22_0_end: ;
    // event 2057_22
    bool or_temp_result_2057_22_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2057_22_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2057_22_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2057_22_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2057_22_1_end;
        or_result_2057_22 = true;
        or_temp_result_2057_22_1 = true;
        or_event_2057_22_1_end: ;
        if (!or_result_2057_22) goto or_final_or_event_2057_22_1_end;
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
        enemysporeprojectile_969_instances.clear_selection();
        for (ObjectIterator it(enemysporeprojectile_969_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bossserpentinehead_948_instances))->start_animation();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossfireball_967_instances.clear_selection();
        for (ObjectIterator it(bossfireball_967_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        minibosstredddebris_1014_instances.clear_selection();
        for (ObjectIterator it(minibosstredddebris_1014_instances); !it.end(); ++it) {
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
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
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
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
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
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        gimmickbamboospike2_1057_instances.clear_selection();
        for (ObjectIterator it(gimmickbamboospike2_1057_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bubblepatch_806_instances.clear_selection();
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bigbubble_428_instances))->start_animation();
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
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
        effectswaterhit_655_instances.clear_selection();
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2057_22_1_end: ;
}
void Frames::handle_frame_23_events()
{
    test_collisions_22();
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
    event_func_4593();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
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
    event_func_4342();
    event_func_4343();
    event_func_4344();
    event_func_4345();
    event_func_4346();
    event_func_4347();
    event_func_4348();
    event_func_4349();
    event_func_4350();
    event_func_4351();
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
    event_func_4526();
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
    event_func_4527();
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
    event_func_4528();
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
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4745();
    event_func_4746();
    event_func_4747();
    event_func_4748();
    event_func_4749();
    event_func_4750();
    event_func_4547();
    event_func_4548();
    event_func_4751();
    event_func_4752();
    event_func_4753();
    event_func_4754();
    event_func_4755();
    event_func_4756();
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
    event_func_4355();
    event_func_4356();
    event_func_2981();
    event_func_2982();
    event_func_2983();
    event_func_2984();
    event_func_2985();
    event_func_2986();
    event_func_2987();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_4357();
    event_func_4358();
    event_func_4359();
    event_func_4360();
    event_func_4361();
    event_func_4362();
    event_func_4363();
    event_func_4374();
    event_func_4375();
    event_func_4376();
    event_func_4377();
    event_func_4378();
    event_func_4379();
    event_func_4380();
    event_func_4381();
    event_func_4382();
    event_func_4383();
    event_func_2988();
    event_func_2989();
    event_func_4552();
    event_func_4553();
    event_func_4554();
    event_func_4555();
    event_func_4556();
    event_func_4557();
    event_func_4558();
    event_func_4559();
    event_func_4560();
    event_func_4757();
    event_func_4562();
    event_func_4564();
    event_func_4758();
    event_func_4759();
    event_func_4760();
    event_func_4761();
    event_func_4569();
    event_func_4570();
    event_func_4762();
    event_func_4763();
    event_func_4764();
    event_func_4765();
    event_func_4766();
    event_func_4767();
    event_func_4768();
    event_func_4769();
    event_func_4770();
    event_func_4771();
    event_func_4772();
    event_func_4773();
    event_func_4774();
    event_func_4775();
    event_func_4776();
    event_func_4777();
    event_func_4778();
    event_func_4779();
    event_func_4780();
    event_func_4781();
    event_func_4782();
    event_func_4783();
    event_func_4784();
    event_func_4785();
    event_func_4786();
    event_func_4787();
    event_func_4788();
    event_func_4789();
    event_func_4790();
    event_func_4791();
    event_func_3813();
    event_func_4792();
    event_func_4793();
    event_func_4794();
    event_func_4795();
    event_func_4796();
    event_func_4797();
    event_func_4798();
    event_func_4799();
    event_func_4800();
    event_func_4801();
    event_func_4802();
    event_func_4803();
    event_func_4804();
    event_func_4805();
    event_func_4806();
    event_func_4807();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_4384();
    event_func_4385();
    event_func_4386();
    event_func_4387();
    event_func_4388();
    event_func_4389();
    event_func_4390();
    event_func_4391();
    event_func_4392();
    event_func_4393();
    event_func_4578();
    event_func_4395();
    event_func_4396();
    event_func_4397();
    event_func_4398();
    event_func_4399();
    event_func_4400();
    event_func_4401();
    event_func_4402();
    event_func_4403();
    event_func_4404();
    event_func_4405();
    event_func_4406();
    event_func_4407();
    event_func_4408();
    event_func_4409();
    event_func_4410();
    event_func_4411();
    event_func_4412();
    event_func_4413();
    event_func_4414();
    event_func_4415();
    event_func_4416();
    event_func_4417();
    event_func_4418();
    event_func_4419();
    event_func_4420();
    event_func_4421();
    event_func_4422();
    event_func_4423();
    event_func_4424();
    event_func_4425();
    event_func_4579();
    event_func_4580();
    event_func_4581();
    event_func_4582();
    event_func_4583();
    event_func_4584();
    event_func_4585();
    event_func_4586();
    event_func_4587();
    event_func_4588();
    event_func_4589();
    event_func_4590();
    event_func_4591();
    event_func_4592();
    event_func_4594();
    event_func_4595();
    event_func_4596();
    event_func_4597();
    event_func_4598();
    event_func_4599();
    event_func_4600();
    event_func_4601();
    event_func_4602();
    event_func_4603();
    event_func_4604();
    event_func_4605();
    event_func_4606();
    event_func_4607();
    event_func_4608();
    event_func_4609();
    event_func_4610();
    event_func_4611();
    event_func_4612();
    event_func_4613();
    event_func_4614();
    event_func_4615();
    event_func_4616();
    event_func_4617();
    event_func_4618();
    event_func_4619();
    event_func_4620();
    event_func_4621();
    event_func_4622();
    event_func_4623();
    event_func_4624();
    event_func_4625();
    event_func_4626();
    event_func_4627();
    event_func_4628();
    event_func_4629();
    event_func_4630();
    event_func_4631();
    event_func_4632();
    event_func_4633();
    event_func_4634();
    event_func_4635();
    event_func_4636();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3823();
    event_func_3824();
    event_func_3825();
    event_func_3826();
    event_func_3827();
    event_func_3828();
    event_func_3829();
    event_func_3830();
    event_func_3831();
    event_func_3832();
    event_func_3833();
    event_func_3834();
    event_func_3835();
    event_func_3836();
    event_func_3837();
    event_func_4051();
    event_func_4052();
    event_func_3838();
    event_func_3839();
    event_func_3840();
    event_func_3841();
    event_func_3842();
    event_func_3843();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_4808();
    event_func_4809();
    event_func_4810();
    event_func_4811();
    event_func_4812();
    event_func_4813();
    event_func_4814();
    event_func_4815();
    event_func_4816();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1) goto group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1_end;
    event_func_4817();
    event_func_4818();
    event_func_4819();
    event_func_4820();
    event_func_4821();
    event_func_4822();
    event_func_4823();
    event_func_4824();
    event_func_4825();
    event_func_4826();
    event_func_4827();
    event_func_4828();
    event_func_4829();
    event_func_4830();
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1) goto group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1_end;
    event_func_4831();
    event_func_4832();
    event_func_4833();
    event_func_4834();
    event_func_4835();
    event_func_4836();
    event_func_4837();
    event_func_4838();
    event_func_4839();
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1_end: ;
    event_func_4840();
    event_func_4841();
    event_func_4842();
    event_func_4843();
    event_func_4844();
    event_func_4845();
    event_func_4846();
    event_func_4847();
    event_func_4848();
    event_func_4849();
    event_func_4850();
    event_func_4851();
    event_func_4852();
    event_func_4853();
    event_func_4854();
    event_func_4855();
    event_func_4856();
    event_func_4857();
    event_func_4858();
    event_func_4859();
    event_func_4860();
    event_func_4861();
    event_func_4862();
    event_func_4863();
    event_func_4864();
    event_func_4865();
    event_func_4866();
    event_func_4867();
    event_func_4868();
    event_func_4869();
    event_func_4870();
    event_func_4871();
    event_func_4872();
    event_func_4873();
    event_func_4874();
    event_func_4875();
    event_func_4876();
    event_func_4877();
    event_func_4878();
    event_func_4879();
    event_func_4880();
    event_func_4881();
    event_func_4882();
    event_func_4685();
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
    if (!group_main_engine_interface_and_post_processing_methods_event_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_event_camera_system_1_end;
    event_func_4883();
    group_main_engine_interface_and_post_processing_methods_event_camera_system_1_end: ;
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
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_3942();
    event_func_3943();
    event_func_3944();
    event_func_3945();
    event_func_3946();
    event_func_3947();
    event_func_3948();
    event_func_3949();
    event_func_3950();
    event_func_3951();
    event_func_3952();
    event_func_4120();
    event_func_4121();
    event_func_4122();
    event_func_4123();
    event_func_3953();
    event_func_3954();
    event_func_4124();
    event_func_4125();
    event_func_4126();
    event_func_4127();
    event_func_4128();
    event_func_4129();
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
    event_func_3248();
    event_func_4693();
    event_func_4694();
    event_func_4695();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_4884();
    event_func_4885();
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
void Frames::handle_frame_23_pre_events()
{
}
void Frames::event_func_4886()
{
    // event 2_22
    {
        if (!(group_main_engine_1)) goto event_2_22_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2700);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 7);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 3);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_2_22_end: ;
}
void Frames::event_func_4887()
{
    // event 21_22
    {
        if (!(group_main_engine_1)) goto event_21_22_end;
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.35);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.43);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(4, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(4, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece11_966_instances))->alterables->values.set(3, 0.35);
        ((SystemBox*)get_instance(levelparallaxpiece11_966_instances))->alterables->values.set(4, 0.43);
        ((SystemBox*)get_instance(levelparallaxpiece12_1010_instances))->alterables->values.set(3, 0.15);
        ((SystemBox*)get_instance(levelparallaxpiece12_1010_instances))->alterables->values.set(4, 0.15);
        ((SystemBox*)get_instance(levelparallaxpiece13_1011_instances))->alterables->values.set(3, 0.15);
        ((SystemBox*)get_instance(levelparallaxpiece13_1011_instances))->alterables->values.set(4, 0.15);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece2_861_instances))->alterables->values.set(4, 0.5);
    }
    event_21_22_end: ;
}
void Frames::event_func_4888()
{
    // event 1501_22
    {
        if (!(group_main_engine_1)) goto event_1501_22_end;
        switchtrapdoor_1054_instances.clear_selection();
        spread_value(switchtrapdoor_1054_instances, 0, 0);
        switchwallplate_814_instances.clear_selection();
        spread_value(switchwallplate_814_instances, 0, 0);
    }
    event_1501_22_end: ;
}
void Frames::event_func_4889()
{
    // event 1526_22
    {
        if (!(group_main_engine_1)) goto event_1526_22_end;
        waterfalllog_1013_instances.clear_selection();
        for (ObjectIterator it(waterfalllog_1013_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 99);
        }
    }
    event_1526_22_end: ;
}
void Frames::event_func_4890()
{
    // event 1544_22
    {
        if (!(group_main_engine_1)) goto event_1544_22_end;
        treetrunk_1034_instances.clear_selection();
        pick_objects_in_zone(treetrunk_1034_instances, 5421, 2064, 5702, 2342);
        for (ObjectIterator it(treetrunk_1034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1544_22_end: ;
}
void Frames::event_func_4891()
{
    // event 1565_22
    {
        if (!(group_main_engine_1)) goto event_1565_22_end;
        gimmickbamboospike_1017_instances.clear_selection();
        spread_value(gimmickbamboospike_1017_instances, 1, 0);
        for (ObjectIterator it(gimmickbamboospike_1017_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)*10)%math_helper%50);
        }
    }
    event_1565_22_end: ;
}
void Frames::event_func_4892()
{
    // event 1792_22
    {
        if (!(group_main_engine_1)) goto event_1792_22_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        media.set_channel_volume(31-1, 10);
    }
    event_1792_22_end: ;
}
void Frames::event_func_4893()
{
    // event 1977_22
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1977_22_end;
        if (!((global_values->get(4)) <= (10))) goto event_1977_22_end;
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1977_22_end: ;
}
void Frames::on_frame_23_start_events()
{
    event_func_4133();
    event_func_4886();
    event_func_2657();
    event_func_2658();
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
    event_func_4887();
    event_func_3269();
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
    event_func_3274();
    event_func_3275();
    event_func_3986();
    event_func_3987();
    event_func_4700();
    event_func_4888();
    event_func_4889();
    event_func_4890();
    event_func_4891();
    event_func_2686();
    event_func_2687();
    event_func_4892();
    event_func_4703();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_2692();
    event_func_4145();
    event_func_4146();
    event_func_4893();
    event_func_4143();
    event_func_2694();
    event_func_4705();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_23_init()
{
    index = 22;
    width = 9320;
    height = 3200;
    virtual_width = 9320;
    virtual_height = 3200;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &levelvalleyplatform1_939_instances, &waterfalllog_1013_instances, &levelfloatingplatform_1032_instances, NULL};
    qualifier_8.set(14, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &gimmickbridgelog_412_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &levelvalleyplatform1_939_instances, &hazardspikesup_558_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &pushableblock2_1012_instances, &levelfloatingplatform_1032_instances, NULL};
    qualifier_9.set(37, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyturretus_938_instances, &enemydragonfly_944_instances, &enemycacteon_990_instances, &bosssnakebody_995_instances, &bosssnakehitbox_999_instances, &enemysporepod_1005_instances, &enemystarflounder_1006_instances, &minibosstredd_1044_instances, NULL};
    qualifier_20.set(8, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece2_861_instances, &levelparallaxpiece8_762_instances, &levelparallaxpiece9_763_instances, &levelparallaxpiece10_765_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece11_966_instances, &levelparallaxpiece12_1010_instances, &levelparallaxpiece13_1011_instances, NULL};
    qualifier_0.set(8, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesup_558_instances, &breakablerock_951_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &pushableblock2_1012_instances, &levelballtunnel1_1033_instances, &treetrunk_1034_instances, &switchdoor_735_instances, NULL};
    qualifier_7.set(31, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemyturretus_938_instances, &enemydragonfly_944_instances, &bossserpentinehead_948_instances, &bossfireball_967_instances, &enemycacteon_990_instances, &bosssnakebody_995_instances, &bosssnakehitbox_999_instances, &enemysporepod_1005_instances, &enemystarflounder_1006_instances, &gimmickbamboospike_1017_instances, &minibosstreddright2_1039_instances, &minibosstreddright4_1040_instances, &minibosstreddright6_1041_instances, &minibosstreddright5_1042_instances, &minibosstreddright3_1043_instances, &minibosstredd_1044_instances, &minibosstreddright1_1045_instances, &minibosstreddleft6_1046_instances, &minibosstreddleft4_1047_instances, &minibosstreddleft5_1048_instances, &minibosstreddleft2_1049_instances, &minibosstreddleft3_1050_instances, &minibosstreddleft1_1051_instances, &gimmickboulder_1052_instances, &gimmickbamboospike3_1056_instances, &gimmickbamboospike2_1057_instances, &gimmickbamboospike4_1058_instances, NULL};
    qualifier_4.set(61, &qualifier_4_instances[0]);
    static ObjectList* qualifier_27_instances[] = {&levelballtunnel1_1033_instances, NULL};
    qualifier_27.set(1, &qualifier_27_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, &pushableblock2_1012_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, &bossfireball_967_instances, NULL};
    qualifier_17.set(2, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelvalleyplatform1_939_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelvalleyplatform1_939_instances, &levelgeyserplate_998_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece8_962(0, 400), 0);
    add_background_object(create_levelparallaxpiece9_963(0, 608), 0);
    add_background_object(create_levelparallaxpiece2_861(0, 312), 0);
    add_background_object(create_levelparallaxpiece10_964(0, 936), 0);
    add_background_object(create_levelparallaxpiece7_965(0, 728), 0);
    add_background_object(create_levelparallaxpiece11_966(0, 1552), 0);
    add_background_object(create_levelparallaxpiece12_1010(0, 1648), 0);
    add_background_object(create_levelparallaxpiece13_1011(0, 1712), 0);
    add_object(create_levelparalaxwatersurface_968(48, 1247), 0);
    add_background_object(create_dvbackwall_866(8864, 1776), 1);
    add_background_object(create_dvbackwall_866(8864, 1968), 1);
    add_background_object(create_dvtree5_879(8952, 1936), 1);
    add_background_object(create_dvtree5_879(8760, 2032), 1);
    add_background_object(create_dvtree5_879(8544, 2080), 1);
    add_background_object(create_dvbackwall_866(3560, 1632), 1);
    add_background_object(create_dvbackwall_866(160, 2600), 1);
    add_background_object(create_dvbackwall_866(160, 2408), 1);
    add_background_object(create_dvbackwall_866(160, 2216), 1);
    add_background_object(create_dvbackwall_866(3040, 1776), 1);
    add_background_object(create_dvbackwall_866(3040, 1968), 1);
    add_background_object(create_dvbackwall_866(3280, 1776), 1);
    add_background_object(create_dvbackwall_866(3280, 1968), 1);
    add_background_object(create_dvbackwall_866(3560, 1824), 1);
    add_background_object(create_dvbackwall_866(3800, 1632), 1);
    add_background_object(create_dvbackwall_866(3800, 1824), 1);
    add_background_object(create_dvbackwall_866(3560, 2016), 1);
    add_background_object(create_dvbackwall_866(3800, 2016), 1);
    add_background_object(create_dvbackwall_866(3560, 2208), 1);
    add_background_object(create_dvbackwall_866(3800, 2208), 1);
    add_background_object(create_dvbackwall_866(3560, 2400), 1);
    add_background_object(create_dvbackwall_866(3800, 2400), 1);
    add_background_object(create_dvbackwall_866(3560, 2592), 1);
    add_background_object(create_dvbackwall_866(3800, 2592), 1);
    add_background_object(create_dvbackwall_866(4040, 2512), 1);
    add_background_object(create_dvbackwall_866(4280, 2512), 1);
    add_background_object(create_dvbackwall_866(4040, 2320), 1);
    add_background_object(create_dvbackwall_866(4280, 2320), 1);
    add_background_object(create_dvbackwall_866(4040, 2128), 1);
    add_background_object(create_dvbackwall_866(4280, 2128), 1);
    add_background_object(create_dvbackwall_866(8336, 1816), 1);
    add_background_object(create_dvbackwall_866(8336, 2008), 1);
    add_background_object(create_dvbackwall_866(8336, 2200), 1);
    add_background_object(create_dvbackwall_866(8336, 2392), 1);
    add_background_object(create_dvbackrock1_882(8488, 2016), 1);
    add_background_object(create_dvbackwall_866(9152, 1768), 1);
    add_background_object(create_dvtree5_879(8832, 2008), 1);
    add_background_object(create_dvtree4_874(8608, 2000), 1);
    add_background_object(create_dvtree4_874(8960, 1864), 1);
    add_background_object(create_dvtree6_871(8568, 1904), 1);
    add_background_object(create_dvtree6_871(8632, 1864), 1);
    add_background_object(create_dvtree6_871(8720, 1840), 1);
    add_background_object(create_dvtree6_871(8768, 1800), 1);
    add_background_object(create_dvtree6_871(8792, 1768), 1);
    add_background_object(create_dvtree6_871(8648, 1824), 1);
    add_background_object(create_dvtree6_871(8560, 1864), 1);
    add_background_object(create_dvtree6_871(8560, 1824), 1);
    add_background_object(create_dvtree6_871(8584, 1784), 1);
    add_background_object(create_dvtree6_871(8656, 1784), 1);
    add_background_object(create_dvtree6_871(8376, 1952), 1);
    add_background_object(create_dvtree5_879(9152, 1872), 1);
    add_background_object(create_dvtree6_871(8936, 1776), 1);
    add_background_object(create_dvtree6_871(9064, 1768), 1);
    add_background_object(create_dvtree6_871(9128, 1784), 1);
    add_object(create_waterfallback_1016(192, 2208), 1);
    add_object(create_waterfallback_1016(192, 2304), 1);
    add_object(create_waterfallback_1016(256, 2208), 1);
    add_object(create_waterfallback_1016(256, 2304), 1);
    add_object(create_waterfallback_1016(192, 2400), 1);
    add_object(create_waterfallback_1016(192, 2496), 1);
    add_object(create_waterfallback_1016(256, 2400), 1);
    add_object(create_waterfallback_1016(256, 2496), 1);
    add_object(create_waterfallback_1016(320, 2208), 1);
    add_object(create_waterfallback_1016(320, 2304), 1);
    add_object(create_waterfallback_1016(320, 2400), 1);
    add_object(create_waterfallback_1016(320, 2496), 1);
    add_object(create_waterfallback_1016(320, 2592), 1);
    add_object(create_waterfallback_1016(256, 2592), 1);
    add_object(create_waterfallback_1016(192, 2592), 1);
    add_object(create_waterfallback_1016(3168, 1760), 1);
    add_object(create_waterfallback_1016(3232, 1760), 1);
    add_object(create_waterfallback_1016(3296, 1760), 1);
    add_object(create_waterfallback_1016(3360, 1760), 1);
    add_object(create_waterfallback_1016(3168, 1856), 1);
    add_object(create_waterfallback_1016(3232, 1856), 1);
    add_object(create_waterfallback_1016(3296, 1856), 1);
    add_object(create_waterfallback_1016(3360, 1856), 1);
    add_object(create_waterfallback_1016(3168, 1952), 1);
    add_object(create_waterfallback_1016(3232, 1952), 1);
    add_object(create_waterfallback_1016(3296, 1952), 1);
    add_object(create_waterfallback_1016(3360, 1952), 1);
    add_object(create_waterfallback_1016(3168, 2048), 1);
    add_object(create_waterfallback_1016(3232, 2048), 1);
    add_object(create_waterfallback_1016(3296, 2048), 1);
    add_object(create_waterfallback_1016(3360, 2048), 1);
    add_object(create_waterfallback_1016(3680, 1632), 1);
    add_object(create_waterfallback_1016(3744, 1632), 1);
    add_object(create_waterfallback_1016(3808, 1632), 1);
    add_object(create_waterfallback_1016(3872, 1632), 1);
    add_object(create_waterfallback_1016(3680, 1824), 1);
    add_object(create_waterfallback_1016(3744, 1824), 1);
    add_object(create_waterfallback_1016(3808, 1824), 1);
    add_object(create_waterfallback_1016(3872, 1824), 1);
    add_object(create_waterfallback_1016(3680, 1920), 1);
    add_object(create_waterfallback_1016(3744, 1920), 1);
    add_object(create_waterfallback_1016(3808, 1920), 1);
    add_object(create_waterfallback_1016(3872, 1920), 1);
    add_object(create_waterfallback_1016(3680, 2016), 1);
    add_object(create_waterfallback_1016(3744, 2016), 1);
    add_object(create_waterfallback_1016(3808, 2016), 1);
    add_object(create_waterfallback_1016(3872, 2016), 1);
    add_object(create_waterfallback_1016(3680, 2112), 1);
    add_object(create_waterfallback_1016(3744, 2112), 1);
    add_object(create_waterfallback_1016(3808, 2112), 1);
    add_object(create_waterfallback_1016(3872, 2112), 1);
    add_object(create_waterfallback_1016(3680, 2208), 1);
    add_object(create_waterfallback_1016(3744, 2208), 1);
    add_object(create_waterfallback_1016(3808, 2208), 1);
    add_object(create_waterfallback_1016(3872, 2208), 1);
    add_object(create_waterfallback_1016(3680, 2304), 1);
    add_object(create_waterfallback_1016(3744, 2304), 1);
    add_object(create_waterfallback_1016(3808, 2304), 1);
    add_object(create_waterfallback_1016(3872, 2304), 1);
    add_object(create_waterfallback_1016(3680, 2400), 1);
    add_object(create_waterfallback_1016(3744, 2400), 1);
    add_object(create_waterfallback_1016(3808, 2400), 1);
    add_object(create_waterfallback_1016(3872, 2400), 1);
    add_object(create_waterfallback_1016(3680, 2496), 1);
    add_object(create_waterfallback_1016(3744, 2496), 1);
    add_object(create_waterfallback_1016(3808, 2496), 1);
    add_object(create_waterfallback_1016(3872, 2496), 1);
    add_object(create_waterfallback_1016(3680, 2592), 1);
    add_object(create_waterfallback_1016(3744, 2592), 1);
    add_object(create_waterfallback_1016(3808, 2592), 1);
    add_object(create_waterfallback_1016(3872, 2592), 1);
    add_object(create_waterfallback_1016(3680, 1728), 1);
    add_object(create_waterfallback_1016(3744, 1728), 1);
    add_object(create_waterfallback_1016(3808, 1728), 1);
    add_object(create_waterfallback_1016(3872, 1728), 1);
    add_object(create_waterfallback_1016(3296, 2504), 1);
    add_object(create_waterfallback_1016(3360, 2504), 1);
    add_object(create_waterfallback_1016(3296, 2600), 1);
    add_object(create_waterfallback_1016(3360, 2600), 1);
    add_object(create_waterfallback_1016(3296, 2432), 1);
    add_object(create_waterfallback_1016(3360, 2432), 1);
    add_object(create_waterfallback_1016(4192, 2400), 1);
    add_object(create_waterfallback_1016(4256, 2400), 1);
    add_object(create_waterfallback_1016(4320, 2400), 1);
    add_object(create_waterfallback_1016(4384, 2400), 1);
    add_object(create_waterfallback_1016(4192, 2496), 1);
    add_object(create_waterfallback_1016(4256, 2496), 1);
    add_object(create_waterfallback_1016(4320, 2496), 1);
    add_object(create_waterfallback_1016(4384, 2496), 1);
    add_object(create_waterfallback_1016(4192, 2592), 1);
    add_object(create_waterfallback_1016(4256, 2592), 1);
    add_object(create_waterfallback_1016(4320, 2592), 1);
    add_object(create_waterfallback_1016(4384, 2592), 1);
    add_object(create_waterfallback_1016(4192, 2112), 1);
    add_object(create_waterfallback_1016(4256, 2112), 1);
    add_object(create_waterfallback_1016(4320, 2112), 1);
    add_object(create_waterfallback_1016(4384, 2112), 1);
    add_object(create_waterfallback_1016(4192, 2208), 1);
    add_object(create_waterfallback_1016(4256, 2208), 1);
    add_object(create_waterfallback_1016(4320, 2208), 1);
    add_object(create_waterfallback_1016(4384, 2208), 1);
    add_object(create_waterfallback_1016(4192, 2304), 1);
    add_object(create_waterfallback_1016(4256, 2304), 1);
    add_object(create_waterfallback_1016(4320, 2304), 1);
    add_object(create_waterfallback_1016(4384, 2304), 1);
    add_object(create_gimmickbamboospike_1017(8848, 2068), 1);
    add_object(create_gimmickbamboospike_1017(9040, 1988), 1);
    add_object(create_gimmickbamboospike_1017(8512, 2116), 1);
    add_object(create_waterfallback_1016(3168, 2504), 1);
    add_object(create_waterfallback_1016(3232, 2504), 1);
    add_object(create_waterfallback_1016(3168, 2600), 1);
    add_object(create_waterfallback_1016(3232, 2600), 1);
    add_background_object(create_signwarning2_1018(6376, 2264), 2);
    add_background_object(create_dvhandlebar_872(6920, 2136), 2);
    add_background_object(create_dvhandlebar_872(4240, 1952), 2);
    add_background_object(create_dvtree5_879(3152, 2648), 2);
    add_background_object(create_dvtree6_871(3128, 2688), 2);
    add_background_object(create_dvtree5_879(3184, 2672), 2);
    add_background_object(create_dvbackrock1_882(5856, 1176), 2);
    add_background_object(create_dvtree5_879(5800, 1248), 2);
    add_background_object(create_dvtree5_879(5640, 1256), 2);
    add_background_object(create_dvtree5_879(5512, 1208), 2);
    add_background_object(create_dvbackrock3_881(5544, 1248), 2);
    add_background_object(create_dvbackrock2_890(5464, 1216), 2);
    add_background_object(create_dvtree3_897(1520, 1704), 2);
    add_background_object(create_dvtree1_893(1464, 1752), 2);
    add_background_object(create_dvtree6_871(1432, 1872), 2);
    add_background_object(create_dvtree6_871(7016, 1808), 2);
    add_background_object(create_dvtree6_871(7280, 1808), 2);
    add_background_object(create_dvtree6_871(7096, 1808), 2);
    add_background_object(create_dvtree6_871(7000, 1848), 2);
    add_background_object(create_dvbackwall_866(6032, 2136), 2);
    add_background_object(create_dvtree5_879(6040, 2264), 2);
    add_background_object(create_dvtree5_879(6256, 2280), 2);
    add_background_object(create_dvtree5_879(6088, 2672), 2);
    add_background_object(create_dvbackwall_866(5784, 2072), 2);
    add_background_object(create_dvtree5_879(5712, 2224), 2);
    add_background_object(create_dvtree5_879(3440, 2600), 2);
    add_background_object(create_dvtree5_879(1408, 1848), 2);
    add_background_object(create_dvtree5_879(1720, 1848), 2);
    add_background_object(create_dvtree5_879(1840, 1856), 2);
    add_background_object(create_dvtree5_879(2528, 1776), 2);
    add_background_object(create_dvtree5_879(2656, 1712), 2);
    add_background_object(create_dvtree5_879(1312, 2048), 2);
    add_background_object(create_dvbackwall_866(2792, 1944), 2);
    add_background_object(create_dvtree5_879(2784, 2088), 2);
    add_background_object(create_dvtree5_879(1728, 2608), 2);
    add_background_object(create_dvbackwall_866(1152, 2640), 2);
    add_background_object(create_dvtree5_879(1192, 2648), 2);
    add_background_object(create_dvtree5_879(1368, 2664), 2);
    add_background_object(create_dvbackwall_866(688, 2448), 2);
    add_background_object(create_dvbackwall_866(688, 2640), 2);
    add_background_object(create_dvtree5_879(784, 2656), 2);
    add_background_object(create_dvtree5_879(632, 2632), 2);
    add_background_object(create_dvtree1_893(1184, 2160), 2);
    add_background_object(create_dvtree1_893(1112, 2200), 2);
    add_background_object(create_dvbackrock2_890(1120, 2256), 2);
    add_background_object(create_dvtree5_879(1176, 2288), 2);
    add_background_object(create_dvtree3_897(856, 2200), 2);
    add_background_object(create_dvbackwall_866(688, 2256), 2);
    add_background_object(create_dvtree5_879(848, 2296), 2);
    add_background_object(create_dvsapling_971(8144, 2520), 2);
    add_background_object(create_dvsapling_971(8088, 2496), 2);
    add_background_object(create_dvsapling_971(6344, 2264), 2);
    add_background_object(create_dvsapling_971(6296, 2248), 2);
    add_background_object(create_dvsapling_971(1416, 2640), 2);
    add_background_object(create_dvsapling_971(1720, 2584), 2);
    add_background_object(create_dvsapling_971(624, 1728), 2);
    add_background_object(create_levelbackdrop02_875(7344, 1928), 2);
    add_background_object(create_dvrockceiling_891(7344, 1976), 2);
    add_background_object(create_dvceilingoverlay_915(7344, 1976), 2);
    add_background_object(create_levelbackdrop02_875(7344, 1864), 2);
    add_background_object(create_levelbackdrop02_875(7344, 1800), 2);
    add_background_object(create_dvtree6_871(6704, 1800), 2);
    add_background_object(create_dvwall1_482(6816, 1816), 2);
    add_background_object(create_dvrockceiling_891(6944, 1992), 2);
    add_background_object(create_dvceilingoverlay_915(6944, 1992), 2);
    add_background_object(create_dvtree6_871(80, 1584), 2);
    add_background_object(create_dvtree6_871(3456, 1264), 2);
    add_background_object(create_dvtree6_871(3376, 1280), 2);
    add_background_object(create_dvtree6_871(3640, 1288), 2);
    add_background_object(create_dvtree6_871(3544, 1272), 2);
    add_background_object(create_dvtree6_871(2360, 1264), 2);
    add_background_object(create_dvtree6_871(2440, 1280), 2);
    add_background_object(create_dvtree6_871(2512, 1256), 2);
    add_background_object(create_dvtree6_871(1736, 1280), 2);
    add_background_object(create_dvtree6_871(1824, 1264), 2);
    add_background_object(create_dvtree6_871(2080, 1256), 2);
    add_background_object(create_dvtree6_871(2160, 1280), 2);
    add_background_object(create_dvtree6_871(1408, 1256), 2);
    add_background_object(create_dvtree6_871(1328, 1280), 2);
    add_background_object(create_dvtree6_871(176, 1320), 2);
    add_background_object(create_dvtree6_871(584, 1288), 2);
    add_background_object(create_dvtree6_871(504, 1264), 2);
    add_background_object(create_dvtree6_871(224, 1280), 2);
    add_background_object(create_quickbackdrop_1019(240, 1048), 2);
    add_background_object(create_dvwall1_482(0, 1016), 2);
    add_background_object(create_dvwall1_482(0, 1208), 2);
    add_background_object(create_dvwall1_482(0, 1400), 2);
    add_background_object(create_dvtree3_897(7768, 1768), 2);
    add_background_object(create_dvbackrock2_890(7720, 1824), 2);
    add_background_object(create_levelbackdrop02_875(7328, 1624), 2);
    add_background_object(create_dvtree6_871(5624, 1688), 2);
    add_background_object(create_dvtree6_871(5536, 1664), 2);
    add_background_object(create_dvwall1_482(5696, 1504), 2);
    add_background_object(create_dvwall1_482(5696, 1312), 2);
    add_background_object(create_dvbackrock3_881(1080, 1152), 2);
    add_background_object(create_dvbackrock3_881(992, 1168), 2);
    add_background_object(create_dvbackrock3_881(1216, 1216), 2);
    add_background_object(create_dvbackrock3_881(760, 1152), 2);
    add_background_object(create_dvtree6_871(3056, 1040), 2);
    add_background_object(create_dvtree6_871(2944, 1024), 2);
    add_background_object(create_dvtree6_871(2880, 1048), 2);
    add_background_object(create_dvtree6_871(3872, 1040), 2);
    add_background_object(create_dvtree6_871(3760, 1024), 2);
    add_background_object(create_dvtree6_871(3696, 1048), 2);
    add_background_object(create_dvtree6_871(3616, 1024), 2);
    add_background_object(create_dvtree6_871(3400, 1024), 2);
    add_background_object(create_dvverticalbridge_1020(8504, 2112), 2);
    add_background_object(create_dvverticalbridge_1020(9032, 1976), 2);
    add_background_object(create_dvverticalbridge_1020(8840, 2056), 2);
    add_background_object(create_dvwall2_886(8936, 2000), 2);
    add_background_object(create_levelbackdrop02_875(8872, 2080), 2);
    add_background_object(create_levelbackdrop02_875(8552, 1856), 2);
    add_background_object(create_levelbackdrop02_875(8552, 1792), 2);
    add_background_object(create_dvtree2_883(8280, 1376), 2);
    add_background_object(create_dvbackrock3_881(8304, 1544), 2);
    add_background_object(create_dvbackrock1_882(8464, 1416), 2);
    add_background_object(create_dvbackrock2_890(8400, 1504), 2);
    add_background_object(create_dvbackrock3_881(8464, 1536), 2);
    add_background_object(create_dvwall1_482(8552, 2144), 2);
    add_background_object(create_dvwall1_482(8552, 2312), 2);
    add_background_object(create_dvwall8_877(1184, 1216), 2);
    add_background_object(create_dvbackrock3_881(656, 1728), 2);
    add_background_object(create_dvtree5_879(8296, 2448), 2);
    add_background_object(create_dvbackrock3_881(8208, 2520), 2);
    add_background_object(create_dvwalledge2_978(8408, 2488), 2);
    add_background_object(create_dvbackwall_866(6080, 2888), 2);
    add_background_object(create_dvbackwall_866(6640, 2880), 2);
    add_background_object(create_dvbackwall_866(7184, 2824), 2);
    add_background_object(create_dvbackrock2_890(7976, 2968), 2);
    add_background_object(create_dvtree5_879(7720, 2520), 2);
    add_background_object(create_dvbackrock1_882(7584, 2432), 2);
    add_background_object(create_dvtree1_893(7680, 2400), 2);
    add_background_object(create_dvwall8_877(7664, 2312), 2);
    add_background_object(create_bridgeback_1021(7864, 2368), 2);
    add_background_object(create_bridgeback3_1022(7936, 2368), 2);
    add_background_object(create_bridgeback2_1023(7920, 2416), 2);
    add_background_object(create_levelbackdrop02_875(7664, 2640), 2);
    add_background_object(create_levelbackdrop02_875(7664, 2576), 2);
    add_background_object(create_dvwall1_482(8040, 2568), 2);
    add_background_object(create_levelbackdrop02_875(7848, 3048), 2);
    add_background_object(create_dvwalledge2_978(7896, 3040), 2);
    add_background_object(create_dvwall1_482(8040, 2888), 2);
    add_background_object(create_dvwall1_482(8008, 3080), 2);
    add_background_object(create_levelbackdrop09_899(7816, 3032), 2);
    add_background_object(create_dvbackrock1_882(7648, 2920), 2);
    add_background_object(create_dvbackrock1_882(7720, 2968), 2);
    add_background_object(create_levelbackdrop9_878(7752, 2952), 2);
    add_background_object(create_dvcoral5_972(6904, 2976), 2);
    add_background_object(create_dvwall2_886(7408, 2696), 2);
    add_background_object(create_dvcoral5_972(7616, 2976), 2);
    add_background_object(create_dvcoral6_973(7448, 2960), 2);
    add_background_object(create_dvcoral6_973(7496, 2984), 2);
    add_background_object(create_dvcoral5_972(7520, 3024), 2);
    add_background_object(create_dvcoral6_973(7552, 2976), 2);
    add_background_object(create_dvcoral5_972(7392, 2912), 2);
    add_background_object(create_dvcoral2_974(7152, 2952), 2);
    add_background_object(create_dvbackrock1_882(7056, 2952), 2);
    add_background_object(create_dvcoral2_974(7296, 2912), 2);
    add_background_object(create_dvcoral1_975(7248, 2888), 2);
    add_background_object(create_dvcoral1_975(7360, 2896), 2);
    add_background_object(create_dvcoral2_974(7392, 2960), 2);
    add_background_object(create_dvcoral5_972(6792, 2896), 2);
    add_background_object(create_dvcoral1_975(6944, 2960), 2);
    add_background_object(create_dvcoral4_977(6840, 3008), 2);
    add_background_object(create_dvcoral3_976(6984, 2976), 2);
    add_background_object(create_dvcoral4_977(7008, 3000), 2);
    add_background_object(create_dvcoral3_976(6952, 3000), 2);
    add_background_object(create_dvcoral4_977(6984, 3024), 2);
    add_background_object(create_dvcoral4_977(6936, 3032), 2);
    add_background_object(create_dvcoral3_976(7024, 3032), 2);
    add_background_object(create_dvbackrock3_881(6944, 3048), 2);
    add_background_object(create_dvbackrock2_890(6664, 2936), 2);
    add_background_object(create_dvbackrock3_881(6512, 3032), 2);
    add_background_object(create_dvcoral5_972(6632, 3008), 2);
    add_background_object(create_dvcoral5_972(6400, 2952), 2);
    add_background_object(create_dvcoral5_972(6440, 3032), 2);
    add_background_object(create_dvcoral5_972(6464, 2984), 2);
    add_background_object(create_dvcoral4_977(6216, 3040), 2);
    add_background_object(create_dvcoral2_974(6264, 3016), 2);
    add_background_object(create_dvcoral1_975(6304, 2984), 2);
    add_background_object(create_dvcoral1_975(6336, 2920), 2);
    add_background_object(create_dvbackrock1_882(6296, 2952), 2);
    add_background_object(create_dvbackrock3_881(4400, 1752), 2);
    add_background_object(create_levelbackdrop13_884(6792, 2952), 2);
    add_background_object(create_levelbackdrop13_884(6856, 3016), 2);
    add_background_object(create_levelbackdrop02_875(6792, 3016), 2);
    add_background_object(create_dvwall2_886(6088, 2888), 2);
    add_background_object(create_dvwall2_886(6088, 3080), 2);
    add_background_object(create_dvtree6_871(6272, 2056), 2);
    add_background_object(create_dvtree6_871(6408, 2056), 2);
    add_background_object(create_dvtree6_871(6344, 2048), 2);
    add_background_object(create_dvtree5_879(6488, 1896), 2);
    add_background_object(create_dvtree6_871(6616, 1808), 2);
    add_background_object(create_dvtree6_871(6528, 1784), 2);
    add_background_object(create_dvbackwall_866(6032, 1944), 2);
    add_background_object(create_dvbackwall_866(6032, 1752), 2);
    add_background_object(create_dvwall2_886(6208, 1432), 2);
    add_background_object(create_dvwall1_482(6560, 1432), 2);
    add_background_object(create_dvwall1_482(6304, 1432), 2);
    add_background_object(create_dvbackwall_866(6272, 1760), 2);
    add_background_object(create_dvwall2_886(6208, 1624), 2);
    add_background_object(create_levelbackdrop9_878(6528, 2024), 2);
    add_background_object(create_dvbackrock2_890(6616, 2240), 2);
    add_background_object(create_dvtree1_893(6712, 2168), 2);
    add_background_object(create_dvbackrock3_881(7144, 2248), 2);
    add_background_object(create_dvtree6_871(6848, 2072), 2);
    add_background_object(create_dvtree6_871(6888, 2088), 2);
    add_background_object(create_dvtree3_897(7032, 2608), 2);
    add_background_object(create_dvbackrock3_881(6992, 2640), 2);
    add_background_object(create_dvtree5_879(6976, 2640), 2);
    add_background_object(create_dvtree3_897(6704, 2568), 2);
    add_background_object(create_dvtree5_879(6768, 2632), 2);
    add_background_object(create_dvbackrock1_882(6592, 2560), 2);
    add_background_object(create_dvtree1_893(6912, 2528), 2);
    add_background_object(create_dvbackrock2_890(6840, 2608), 2);
    add_background_object(create_dvbackrock3_881(6144, 2672), 2);
    add_background_object(create_dvtree1_893(6136, 2560), 2);
    add_background_object(create_dvtree3_897(7128, 2520), 2);
    add_background_object(create_dvtree2_883(6224, 2472), 2);
    add_background_object(create_dvbackrock3_881(6248, 2640), 2);
    add_background_object(create_dvwall1_482(7152, 2696), 2);
    add_background_object(create_dvwall1_482(6896, 2696), 2);
    add_background_object(create_levelbackdrop02_875(5920, 2336), 2);
    add_background_object(create_dvbackwall_866(5696, 2600), 2);
    add_background_object(create_dvcoral5_972(6008, 2696), 2);
    add_background_object(create_dvcoral6_973(5880, 2688), 2);
    add_background_object(create_dvcoral3_976(5928, 2744), 2);
    add_background_object(create_dvbackwall_866(5696, 2408), 2);
    add_background_object(create_dvtree6_871(5712, 2448), 2);
    add_background_object(create_dvtree6_871(5872, 2432), 2);
    add_background_object(create_dvtree6_871(5640, 2432), 2);
    add_background_object(create_dvtree6_871(5504, 2336), 2);
    add_background_object(create_dvtree5_879(5528, 2528), 2);
    add_background_object(create_dvtree1_893(5600, 2544), 2);
    add_background_object(create_dvtree5_879(5512, 2488), 2);
    add_background_object(create_dvtree6_871(5536, 2456), 2);
    add_background_object(create_dvtree6_871(5648, 2400), 2);
    add_background_object(create_dvtree5_879(5592, 2376), 2);
    add_background_object(create_dvtree6_871(5544, 2416), 2);
    add_background_object(create_dvtree5_879(5576, 2280), 2);
    add_background_object(create_dvtree6_871(5632, 2320), 2);
    add_background_object(create_levelbackdrop7_917(6376, 2648), 2);
    add_background_object(create_levelbackdrop7_917(6584, 2648), 2);
    add_background_object(create_dvwall9_889(6592, 2696), 2);
    add_background_object(create_dvwall1_482(5856, 2784), 2);
    add_background_object(create_dvwall1_482(5600, 2784), 2);
    add_background_object(create_levelbackdrop02_875(5712, 2672), 2);
    add_background_object(create_levelbackdrop02_875(5776, 2672), 2);
    add_background_object(create_dvwall8_877(6264, 2696), 2);
    add_background_object(create_dvbackwall_866(2784, 2832), 2);
    add_background_object(create_dvbackwall_866(2784, 3024), 2);
    add_background_object(create_levelbackdrop13_884(2832, 3024), 2);
    add_background_object(create_levelbackdrop13_884(2896, 3088), 2);
    add_background_object(create_levelbackdrop02_875(5696, 1832), 2);
    add_background_object(create_levelbackdrop02_875(5760, 1832), 2);
    add_background_object(create_dvwall3_873(5824, 1888), 2);
    add_background_object(create_dvbackrock2_890(5816, 2176), 2);
    add_background_object(create_dvbackrock1_882(5888, 2080), 2);
    add_background_object(create_dvwall1_482(6088, 2696), 2);
    add_background_object(create_dvwall3_873(5600, 2664), 2);
    add_background_object(create_dvbackrock2_890(4832, 2432), 2);
    add_background_object(create_dvbackrock1_882(4904, 2464), 2);
    add_background_object(create_dvbackrock3_881(4976, 2560), 2);
    add_background_object(create_dvtree5_879(5288, 2392), 2);
    add_background_object(create_dvtree5_879(5456, 2344), 2);
    add_background_object(create_dvtree5_879(5360, 2360), 2);
    add_background_object(create_dvtree3_897(5152, 2392), 2);
    add_background_object(create_dvtree1_893(5104, 2440), 2);
    add_background_object(create_dvtree3_897(5184, 2336), 2);
    add_background_object(create_dvtree1_893(5312, 2264), 2);
    add_background_object(create_dvtree1_893(4768, 2168), 2);
    add_background_object(create_dvbackrock3_881(1912, 1848), 2);
    add_background_object(create_levelbackdrop02_875(1888, 1896), 2);
    add_background_object(create_dvwalledge2_978(1936, 1896), 2);
    add_background_object(create_levelbackdrop02_875(2016, 1864), 2);
    add_background_object(create_dvwalledge1_887(2016, 1864), 2);
    add_background_object(create_dvwalledge2_978(2064, 1864), 2);
    add_background_object(create_dvrockceiling_891(1952, 1904), 2);
    add_background_object(create_levelbackdrop02_875(5536, 2344), 2);
    add_background_object(create_dvwall1_482(5344, 2408), 2);
    add_background_object(create_dvwall6_982(5472, 2400), 2);
    add_background_object(create_dvfloorcurvesmallright_888(5472, 2336), 2);
    add_background_object(create_levelbackdrop10_898(5176, 2528), 2);
    add_background_object(create_dvwall1_482(5344, 2592), 2);
    add_background_object(create_dvwall7_892(5248, 2400), 2);
    add_background_object(create_levelbackdrop02_875(4840, 2496), 2);
    add_background_object(create_levelbackdrop02_875(4896, 2560), 2);
    add_background_object(create_levelbackdrop13_884(4904, 2496), 2);
    add_background_object(create_levelbackdrop13_884(4960, 2552), 2);
    add_background_object(create_dvwall1_482(4832, 2592), 2);
    add_background_object(create_dvtree1_893(464, 2136), 2);
    add_background_object(create_levelbackdrop13_884(448, 2160), 2);
    add_background_object(create_levelbackdrop02_875(4832, 2432), 2);
    add_background_object(create_levelbackdrop02_875(4768, 2408), 2);
    add_background_object(create_levelbackdrop02_875(4704, 2408), 2);
    add_background_object(create_dvbackwall_866(4512, 2120), 2);
    add_background_object(create_levelbackdrop02_875(4800, 2384), 2);
    add_background_object(create_levelbackdrop14_983(4864, 2368), 2);
    add_background_object(create_levelbackdrop12_880(4744, 2280), 2);
    add_background_object(create_levelbackdrop13_884(4792, 2296), 2);
    add_background_object(create_levelbackdrop14_983(4832, 2320), 2);
    add_background_object(create_dvtree6_871(4264, 1904), 2);
    add_background_object(create_dvtree6_871(4136, 1920), 2);
    add_background_object(create_dvtree6_871(4344, 1920), 2);
    add_background_object(create_dvbackrock3_881(4072, 2672), 2);
    add_background_object(create_dvbackrock3_881(4456, 2240), 2);
    add_background_object(create_dvbackrock3_881(3464, 2632), 2);
    add_background_object(create_dvtree6_871(3936, 2552), 2);
    add_background_object(create_dvtree6_871(4064, 2552), 2);
    add_background_object(create_dvtree6_871(4008, 2560), 2);
    add_background_object(create_dvcoral3_976(3816, 2744), 2);
    add_background_object(create_dvcoral5_972(3696, 2696), 2);
    add_background_object(create_dvcoral6_973(3728, 2720), 2);
    add_background_object(create_dvcoral5_972(3760, 2712), 2);
    add_background_object(create_dvcoral6_973(3784, 2696), 2);
    add_background_object(create_dvcoral6_973(3888, 2720), 2);
    add_background_object(create_dvcoral5_972(3856, 2688), 2);
    add_background_object(create_dvcoral6_973(1064, 2688), 2);
    add_background_object(create_dvcoral5_972(952, 2688), 2);
    add_background_object(create_dvcoral6_973(1000, 2720), 2);
    add_background_object(create_dvcoral5_972(1024, 2704), 2);
    add_background_object(create_dvcoral5_972(1112, 2720), 2);
    add_background_object(create_dvcoral6_973(560, 2824), 2);
    add_background_object(create_dvcoral5_972(592, 2848), 2);
    add_background_object(create_dvcoral2_974(432, 2848), 2);
    add_background_object(create_dvcoral3_976(408, 2896), 2);
    add_background_object(create_dvcoral6_973(3040, 3048), 2);
    add_background_object(create_dvcoral5_972(3120, 3056), 2);
    add_background_object(create_dvcoral6_973(3368, 2936), 2);
    add_background_object(create_dvcoral6_973(3208, 2992), 2);
    add_background_object(create_dvcoral5_972(3232, 2960), 2);
    add_background_object(create_dvcoral5_972(2672, 2992), 2);
    add_background_object(create_dvbackwall_866(1792, 2968), 2);
    add_background_object(create_dvcoral5_972(1864, 2992), 2);
    add_background_object(create_dvcoral6_973(1944, 2984), 2);
    add_background_object(create_dvcoral6_973(1960, 3024), 2);
    add_background_object(create_dvcoral5_972(2048, 2976), 2);
    add_background_object(create_dvcoral6_973(1696, 2904), 2);
    add_background_object(create_dvbackrock2_890(1376, 2792), 2);
    add_background_object(create_dvcoral5_972(1464, 2792), 2);
    add_background_object(create_dvcoral6_973(1512, 2808), 2);
    add_background_object(create_dvcoral5_972(1752, 2952), 2);
    add_background_object(create_dvcoral6_973(1624, 2840), 2);
    add_background_object(create_dvcoral3_976(2784, 2984), 2);
    add_background_object(create_dvcoral4_977(2832, 3016), 2);
    add_background_object(create_dvcoral3_976(2856, 3040), 2);
    add_background_object(create_dvbackrock1_882(2856, 3016), 2);
    add_background_object(create_dvcoral4_977(2968, 3096), 2);
    add_background_object(create_dvcoral3_976(2088, 2976), 2);
    add_background_object(create_dvcoral4_977(2072, 3008), 2);
    add_background_object(create_dvcoral3_976(2016, 3040), 2);
    add_background_object(create_dvbackrock3_881(2048, 3024), 2);
    add_background_object(create_dvcoral1_975(1816, 3016), 2);
    add_background_object(create_dvcoral5_972(1536, 2792), 2);
    add_background_object(create_dvcoral6_973(1560, 2816), 2);
    add_background_object(create_dvcoral3_976(1864, 3040), 2);
    add_background_object(create_dvcoral4_977(2048, 3048), 2);
    add_background_object(create_dvcoral2_974(3200, 3032), 2);
    add_background_object(create_dvcoral1_975(3176, 3056), 2);
    add_background_object(create_dvcoral1_975(3264, 2928), 2);
    add_background_object(create_dvcoral2_974(2552, 2984), 2);
    add_background_object(create_dvcoral1_975(2616, 3024), 2);
    add_background_object(create_dvcoral1_975(2688, 2936), 2);
    add_background_object(create_dvcoral2_974(2720, 2952), 2);
    add_background_object(create_dvbackrock3_881(3424, 2072), 2);
    add_background_object(create_dvbackwall_866(4000, 1432), 2);
    add_background_object(create_dvbackrock2_890(3936, 1528), 2);
    add_background_object(create_dvtree5_879(3840, 1232), 2);
    add_background_object(create_levelbackdrop8_894(3880, 1376), 2);
    add_background_object(create_dvtree2_883(3512, 1448), 2);
    add_background_object(create_dvtree5_879(3480, 1664), 2);
    add_background_object(create_dvwall9_889(3112, 2320), 2);
    add_background_object(create_dvbackwall_866(2792, 2328), 2);
    add_background_object(create_levelbackdrop02_875(2912, 2456), 2);
    add_background_object(create_levelbackdrop02_875(2976, 2456), 2);
    add_background_object(create_dvwall2_886(2912, 2712), 2);
    add_background_object(create_dvtree5_879(3264, 2672), 2);
    add_background_object(create_dvtree1_893(3320, 2528), 2);
    add_background_object(create_dvtree5_879(3320, 2656), 2);
    add_background_object(create_dvtree5_879(3264, 2648), 2);
    add_background_object(create_dvbackrock1_882(3216, 2968), 2);
    add_background_object(create_dvbackrock1_882(1608, 2912), 2);
    add_background_object(create_dvcoral2_974(3304, 2960), 2);
    add_background_object(create_dvbackwall_866(2304, 2944), 2);
    add_background_object(create_dvbackrock1_882(2480, 2968), 2);
    add_background_object(create_dvbackrock2_890(2192, 2984), 2);
    add_background_object(create_dvcoral3_976(2464, 3040), 2);
    add_background_object(create_dvwall7_892(3184, 3024), 2);
    add_background_object(create_dvwall3_873(3312, 3032), 2);
    add_background_object(create_levelbackdrop02_875(2832, 3088), 2);
    add_background_object(create_dvwall2_886(2712, 3088), 2);
    add_background_object(create_dvwall8_877(2536, 2856), 2);
    add_background_object(create_levelbackdrop02_875(3424, 2648), 2);
    add_background_object(create_levelbackdrop02_875(3488, 2648), 2);
    add_background_object(create_levelbackdrop12_880(3552, 2664), 2);
    add_background_object(create_levelbackdrop12_880(3616, 2696), 2);
    add_background_object(create_dvbackwall_866(1792, 2776), 2);
    add_background_object(create_levelbackdrop12_880(2192, 3040), 2);
    add_background_object(create_levelbackdrop02_875(1688, 3064), 2);
    add_background_object(create_dvwall8_877(1368, 2712), 2);
    add_background_object(create_dvwall1_482(3680, 2800), 2);
    add_background_object(create_levelbackdrop09_899(3424, 1736), 2);
    add_background_object(create_levelbackdrop09_899(3488, 1704), 2);
    add_background_object(create_dvwall1_482(3424, 1752), 2);
    add_background_object(create_dvwall4_485(3480, 1720), 2);
    add_background_object(create_dvwall2_886(3552, 1624), 2);
    add_background_object(create_dvtree5_879(1936, 2592), 2);
    add_background_object(create_dvtree5_879(1392, 2056), 2);
    add_background_object(create_dvtree5_879(1480, 2096), 2);
    add_background_object(create_dvtree5_879(2992, 1688), 2);
    add_background_object(create_dvbackrock1_882(2872, 1616), 2);
    add_background_object(create_dvtree3_897(2680, 1592), 2);
    add_background_object(create_dvtree3_897(2992, 1600), 2);
    add_background_object(create_dvtree1_893(2816, 1576), 2);
    add_background_object(create_dvbackrock3_881(2784, 1688), 2);
    add_background_object(create_dvbackrock3_881(2712, 1704), 2);
    add_background_object(create_dvbackrock3_881(2856, 1704), 2);
    add_background_object(create_dvwall1_482(3424, 2136), 2);
    add_background_object(create_dvwall1_482(3168, 2136), 2);
    add_background_object(create_dvrockceiling_891(1712, 2656), 2);
    add_background_object(create_bridgeback3_1022(288, 2008), 2);
    add_background_object(create_bridgeback_1021(200, 2008), 2);
    add_background_object(create_dvtree3_897(312, 2056), 2);
    add_background_object(create_levelbackdrop7_917(376, 2120), 2);
    add_background_object(create_levelbackdrop7_917(168, 2120), 2);
    add_background_object(create_dvtree3_897(2512, 1632), 2);
    add_background_object(create_dvbackrock3_881(2544, 1784), 2);
    add_background_object(create_dvbackwall_866(1048, 1568), 2);
    add_background_object(create_dvtree6_871(1200, 1560), 2);
    add_background_object(create_dvbackwall_866(1048, 1760), 2);
    add_background_object(create_dvbackwall_866(1048, 1952), 2);
    add_background_object(create_dvwall1_482(2048, 2472), 2);
    add_background_object(create_dvbackrock2_890(2256, 2064), 2);
    add_background_object(create_dvbackrock2_890(1576, 1808), 2);
    add_background_object(create_dvtree3_897(2480, 2032), 2);
    add_background_object(create_dvtree1_893(1664, 1728), 2);
    add_background_object(create_dvbackrock3_881(1616, 1864), 2);
    add_background_object(create_dvtree3_897(2192, 2256), 2);
    add_background_object(create_dvtree1_893(2120, 2304), 2);
    add_background_object(create_dvbackrock3_881(2160, 2408), 2);
    add_background_object(create_dvbackwall_866(2368, 2160), 2);
    add_background_object(create_dvtree1_893(2584, 2192), 2);
    add_background_object(create_dvbackwall_866(2792, 2136), 2);
    add_background_object(create_levelbackdrop8_894(2592, 1888), 2);
    add_background_object(create_dvwall1_482(2400, 2328), 2);
    add_background_object(create_dvwall1_482(2656, 2328), 2);
    add_background_object(create_dvfloorcurveright_907(2656, 2200), 2);
    add_background_object(create_dvtree2_883(1736, 2144), 2);
    add_background_object(create_dvhalfpipe3_869(1952, 2272), 2);
    add_background_object(create_dvtree4_874(1784, 2368), 2);
    add_background_object(create_dvhalfpipe1_867(1568, 2272), 2);
    add_background_object(create_dvtree4_874(1704, 2352), 2);
    add_background_object(create_dvhalfpipe3_869(1952, 1960), 2);
    add_background_object(create_dvtree2_883(1832, 2048), 2);
    add_background_object(create_levelbackdrop02_875(1320, 2080), 2);
    add_background_object(create_levelbackdrop02_875(1320, 2112), 2);
    add_background_object(create_dvtree3_897(1264, 2224), 2);
    add_background_object(create_dvtree1_893(512, 2128), 2);
    add_background_object(create_dvbackwall_866(688, 2064), 2);
    add_background_object(create_dvtree3_897(584, 2200), 2);
    add_background_object(create_dvtree3_897(528, 2536), 2);
    add_background_object(create_dvtree3_897(272, 2592), 2);
    add_background_object(create_dvtree1_893(112, 2608), 2);
    add_background_object(create_dvbackwall_866(1152, 2448), 2);
    add_background_object(create_levelbackdrop9_878(376, 2752), 2);
    add_background_object(create_levelbackdrop8_894(608, 2688), 2);
    add_background_object(create_levelbackdrop02_875(448, 2352), 2);
    add_background_object(create_levelbackdrop02_875(384, 2288), 2);
    add_background_object(create_levelbackdrop02_875(384, 2352), 2);
    add_background_object(create_dvwall1_482(512, 2352), 2);
    add_background_object(create_dvwall1_482(768, 2352), 2);
    add_background_object(create_dvwall1_482(1120, 2352), 2);
    add_background_object(create_levelbackdrop02_875(384, 2224), 2);
    add_background_object(create_levelbackdrop02_875(448, 2224), 2);
    add_background_object(create_levelbackdrop02_875(384, 2160), 2);
    add_background_object(create_dvwall6_885(488, 2224), 2);
    add_background_object(create_bridgeback_1021(152, 2056), 2);
    add_background_object(create_bridgeback3_1022(336, 2056), 2);
    add_background_object(create_dvbackwall_866(-168, 1992), 2);
    add_background_object(create_dvtree6_871(-64, 2016), 2);
    add_background_object(create_dvsmalltunnel_1024(768, 2296), 2);
    add_background_object(create_dvhalfpipe2_868(1824, 2272), 2);
    add_background_object(create_dvrockedge2_904(1696, 2456), 2);
    add_background_object(create_dvrockslope2_910(2080, 2456), 2);
    add_background_object(create_dvwall1_482(-104, 2936), 2);
    add_background_object(create_dvwall1_482(-192, 2552), 2);
    add_background_object(create_dvwall1_482(-64, 2168), 2);
    add_background_object(create_dvwall1_482(-104, 3128), 2);
    add_background_object(create_dvwall1_482(-104, 2744), 2);
    add_background_object(create_dvwall1_482(152, 2744), 2);
    add_background_object(create_dvwall1_482(152, 2936), 2);
    add_background_object(create_dvwall1_482(152, 3128), 2);
    add_background_object(create_dvwall1_482(408, 2936), 2);
    add_background_object(create_levelbackdrop02_875(0, 1976), 2);
    add_background_object(create_levelbackdrop02_875(64, 1976), 2);
    add_background_object(create_dvwall2_886(0, 1784), 2);
    add_background_object(create_dvwall4_485(0, 1880), 2);
    add_background_object(create_dvwall2_886(0, 1592), 2);
    add_background_object(create_dvwall2_886(0, 824), 2);
    add_background_object(create_dvwall2_886(0, 632), 2);
    add_background_object(create_dvwall2_886(0, 440), 2);
    add_background_object(create_dvwall2_886(0, 248), 2);
    add_background_object(create_dvwall2_886(0, 56), 2);
    add_background_object(create_dvwall2_886(0, -136), 2);
    add_background_object(create_dvrockslope1_896(-96, 2144), 2);
    add_background_object(create_dvwalledge2_978(112, 1968), 2);
    add_background_object(create_dvwalledge2_978(112, 1912), 2);
    add_background_object(create_dvrockceiling_891(0, 2016), 2);
    add_background_object(create_dvceilingoverlay_915(0, 2016), 2);
    add_background_object(create_dvwalledge2_978(112, 1848), 2);
    add_background_object(create_dvwalledge2_978(112, 1784), 2);
    add_background_object(create_dvwalledge2_978(112, 1720), 2);
    add_background_object(create_dvwalledge2_978(112, 1656), 2);
    add_background_object(create_dvwalledge2_978(112, 1592), 2);
    add_background_object(create_dvwall1_482(-64, 2360), 2);
    add_background_object(create_dvwalledge2_978(176, 2168), 2);
    add_background_object(create_dvwalledge2_978(176, 2232), 2);
    add_background_object(create_dvwalledge2_978(176, 2296), 2);
    add_background_object(create_dvwalledge2_978(176, 2352), 2);
    add_background_object(create_dvwalledge2_978(176, 2416), 2);
    add_background_object(create_dvwalledge2_978(176, 2480), 2);
    add_background_object(create_dvwall9_889(616, 2040), 2);
    add_background_object(create_dvwall1_482(744, 1976), 2);
    add_background_object(create_dvwall1_482(744, 1784), 2);
    add_background_object(create_dvwall3_873(616, 1784), 2);
    add_background_object(create_levelbackdrop02_875(616, 1976), 2);
    add_background_object(create_levelbackdrop02_875(680, 1976), 2);
    add_background_object(create_dvwall4_485(616, 1936), 2);
    add_background_object(create_levelbackdrop02_875(768, 2232), 2);
    add_background_object(create_levelbackdrop02_875(768, 2168), 2);
    add_background_object(create_dvwalledge1_887(768, 2168), 2);
    add_background_object(create_dvwalledge1_887(768, 2232), 2);
    add_background_object(create_dvwalledge2_978(816, 2232), 2);
    add_background_object(create_levelbackdrop9_878(832, 2168), 2);
    add_background_object(create_dvrockceiling_891(872, 2152), 2);
    add_background_object(create_dvwall4_485(768, 2072), 2);
    add_background_object(create_dvwall1_482(1000, 1976), 2);
    add_background_object(create_dvwall1_482(1000, 1784), 2);
    add_background_object(create_dvrockceiling_891(1128, 2152), 2);
    add_background_object(create_dvrockceiling_891(1000, 2152), 2);
    add_background_object(create_dvceilingoverlay_915(872, 2152), 2);
    add_background_object(create_dvceilingoverlay_915(1000, 2152), 2);
    add_background_object(create_dvceilingoverlay_915(1128, 2152), 2);
    add_background_object(create_dvwall9_889(384, 2416), 2);
    add_background_object(create_dvwall6_982(416, 2232), 2);
    add_background_object(create_dvrockslope5_912(416, 2152), 2);
    add_background_object(create_dvwalledge1_887(384, 2160), 2);
    add_background_object(create_dvrockedge1_905(384, 2152), 2);
    add_background_object(create_dvwalledge1_887(384, 2224), 2);
    add_background_object(create_dvrockedge2_904(736, 2344), 2);
    add_background_object(create_dvrockslope1_896(672, 2344), 2);
    add_background_object(create_dvrockceiling_891(768, 2520), 2);
    add_background_object(create_dvrockceiling_891(640, 2520), 2);
    add_background_object(create_dvrockceiling_891(512, 2520), 2);
    add_background_object(create_dvwalledge2_978(1008, 2352), 2);
    add_background_object(create_dvwalledge1_887(1120, 2352), 2);
    add_background_object(create_dvwalledge1_887(1120, 2416), 2);
    add_background_object(create_dvwalledge1_887(1120, 2480), 2);
    add_background_object(create_dvwalledge1_887(384, 2288), 2);
    add_background_object(create_dvwalledge1_887(384, 2352), 2);
    add_background_object(create_dvwall4_485(384, 2320), 2);
    add_background_object(create_dvwall4_485(504, 2320), 2);
    add_background_object(create_dvrockslope9_902(544, 2248), 2);
    add_background_object(create_dvwalledge2_978(1008, 2416), 2);
    add_background_object(create_dvwalledge2_978(1008, 2480), 2);
    add_background_object(create_dvrockceiling_891(896, 2520), 2);
    add_background_object(create_dvrockceiling_891(1120, 2520), 2);
    add_background_object(create_dvwall1_482(920, 2768), 2);
    add_background_object(create_dvwall1_482(664, 2704), 2);
    add_background_object(create_dvwall1_482(1176, 2704), 2);
    add_background_object(create_dvwalledge1_887(1176, 2704), 2);
    add_background_object(create_dvwalledge1_887(1176, 2768), 2);
    add_background_object(create_dvwalledge2_978(904, 2696), 2);
    add_background_object(create_dvwalledge2_978(904, 2760), 2);
    add_background_object(create_dvwall6_982(872, 2768), 2);
    add_background_object(create_dvwall6_982(1112, 2768), 2);
    add_background_object(create_dvrockedge1_905(920, 2768), 2);
    add_background_object(create_dvrockslope4_900(952, 2760), 2);
    add_background_object(create_dvrockslope1_896(1080, 2760), 2);
    add_background_object(create_dvrockedge2_904(1144, 2760), 2);
    add_background_object(create_dvwall1_482(664, 2896), 2);
    add_background_object(create_dvwall1_482(1176, 2896), 2);
    add_background_object(create_dvwall1_482(920, 2960), 2);
    add_background_object(create_dvwall1_482(920, 3152), 2);
    add_background_object(create_dvwall1_482(664, 3088), 2);
    add_background_object(create_dvwall1_482(1176, 3088), 2);
    add_background_object(create_dvceilingoverlay_915(1120, 2520), 2);
    add_background_object(create_dvceilingoverlay_915(896, 2520), 2);
    add_background_object(create_dvceilingoverlay_915(768, 2520), 2);
    add_background_object(create_dvceilingoverlay_915(640, 2520), 2);
    add_background_object(create_dvceilingoverlay_915(512, 2520), 2);
    add_background_object(create_dvwall4_485(-64, 2480), 2);
    add_background_object(create_dvwalledge2_978(48, 2544), 2);
    add_background_object(create_dvwalledge2_978(48, 2608), 2);
    add_background_object(create_dvwalledge2_978(48, 2672), 2);
    add_background_object(create_dvrockceiling_891(64, 2528), 2);
    add_background_object(create_dvceilingoverlay_915(64, 2528), 2);
    add_background_object(create_dvwalledge2_978(48, 2680), 2);
    add_background_object(create_dvwall6_982(-64, 2672), 2);
    add_background_object(create_dvrockslope4_901(88, 2728), 2);
    add_background_object(create_dvrockedge1_905(160, 2480), 2);
    add_background_object(create_dvrockedge2_904(192, 2480), 2);
    add_background_object(create_dvwall1_482(408, 3128), 2);
    add_background_object(create_geyserbase2_987(216, 2728), 2);
    add_background_object(create_dvrockslope4_901(280, 2736), 2);
    add_background_object(create_dvrockedge1_905(56, 2728), 2);
    add_background_object(create_dvrockedge2_904(408, 2744), 2);
    add_background_object(create_dvwalledge2_978(392, 2800), 2);
    add_background_object(create_dvwalledge2_978(392, 2864), 2);
    add_background_object(create_dvrockedge1_905(408, 2928), 2);
    add_background_object(create_dvrockslope4_900(440, 2920), 2);
    add_background_object(create_dvrockslope1_896(568, 2920), 2);
    add_background_object(create_dvwall6_982(624, 2928), 2);
    add_background_object(create_dvrockedge2_904(632, 2920), 2);
    add_background_object(create_dvwalledge1_887(664, 2744), 2);
    add_background_object(create_dvwalledge1_887(664, 2808), 2);
    add_background_object(create_dvwalledge1_887(664, 2872), 2);
    add_background_object(create_dvwalledge1_887(616, 1784), 2);
    add_background_object(create_dvwalledge1_887(616, 1848), 2);
    add_background_object(create_dvwalledge1_887(616, 1912), 2);
    add_background_object(create_dvwalledge1_887(616, 1976), 2);
    add_background_object(create_dvrockedge1_905(256, 2344), 2);
    add_background_object(create_dvrockedge2_904(288, 2344), 2);
    add_background_object(create_dvrockedge1_905(1288, 2328), 2);
    add_background_object(create_dvwall6_885(1376, 2352), 2);
    add_background_object(create_dvrockslope5_912(1376, 2328), 2);
    add_background_object(create_dvrockslope1_896(1312, 2328), 2);
    add_background_object(create_levelbackdrop12_880(1504, 2432), 2);
    add_background_object(create_dvrockceiling_891(1376, 2464), 2);
    add_background_object(create_dvceilingoverlay_915(1376, 2464), 2);
    add_background_object(create_dvrockceiling_891(1472, 2464), 2);
    add_background_object(create_dvceilingoverlay_915(1472, 2464), 2);
    add_background_object(create_dvrockslope9_902(1440, 2360), 2);
    add_background_object(create_dvwalledge2_978(1360, 2480), 2);
    add_background_object(create_dvrockceiling_891(1248, 2520), 2);
    add_background_object(create_dvceilingoverlay_915(1248, 2520), 2);
    add_background_object(create_dvrockslope2_910(1568, 2456), 2);
    add_background_object(create_dvwall3_873(1824, 2392), 2);
    add_background_object(create_dvwall3_873(1824, 2584), 2);
    add_background_object(create_dvhalfpipe1_867(1568, 1960), 2);
    add_background_object(create_dvhalfpipe2_868(1824, 1960), 2);
    add_background_object(create_dvrockedge1_905(2048, 2144), 2);
    add_background_object(create_dvrockslope2_910(2080, 2144), 2);
    add_background_object(create_levelbackdrop02_875(1824, 1896), 2);
    add_background_object(create_dvrockslope4_901(2528, 2320), 2);
    add_background_object(create_dvrockslope4_901(2208, 2144), 2);
    add_background_object(create_dvrockedge2_904(2592, 2152), 2);
    add_background_object(create_dvrockedge2_904(2656, 2328), 2);
    add_background_object(create_dvfloorcurveleft_1025(1256, 1952), 2);
    add_background_object(create_levelbackdrop02_875(1256, 2104), 2);
    add_background_object(create_levelbackdrop02_875(1256, 2080), 2);
    add_background_object(create_levelbackdrop02_875(1384, 2104), 2);
    add_background_object(create_levelbackdrop12_880(1448, 2104), 2);
    add_background_object(create_levelbackdrop12_880(1512, 2120), 2);
    add_background_object(create_levelbackdrop12_880(1448, 2120), 2);
    add_background_object(create_dvwall6_982(1136, 1976), 2);
    add_background_object(create_dvwall4_485(1168, 2040), 2);
    add_background_object(create_dvrockceiling_891(1256, 2152), 2);
    add_background_object(create_dvceilingoverlay_915(1256, 2152), 2);
    add_background_object(create_dvrockceiling_891(1344, 2152), 2);
    add_background_object(create_dvceilingoverlay_915(1344, 2152), 2);
    add_background_object(create_dvrockceiling_891(1472, 2152), 2);
    add_background_object(create_dvceilingoverlay_915(1472, 2152), 2);
    add_background_object(create_dvrockceiling_891(1600, 2152), 2);
    add_background_object(create_dvceilingoverlay_915(1600, 2152), 2);
    add_background_object(create_dvwall1_482(1000, 1592), 2);
    add_background_object(create_dvwalledge1_887(1824, 1896), 2);
    add_background_object(create_dvwall3_873(1824, 2080), 2);
    add_background_object(create_dvwalledge1_887(1824, 2456), 2);
    add_background_object(create_dvwalledge1_887(1824, 2392), 2);
    add_background_object(create_dvwalledge2_978(1936, 2456), 2);
    add_background_object(create_dvwalledge2_978(1936, 2392), 2);
    add_background_object(create_dvrockslope4_900(2336, 2144), 2);
    add_background_object(create_dvwall3_873(2784, 2136), 2);
    add_background_object(create_dvwall7_892(2272, 2344), 2);
    add_background_object(create_dvwall4_485(2360, 2344), 2);
    add_background_object(create_dvrockslope6_913(2272, 2328), 2);
    add_background_object(create_dvrockslope4_900(2400, 2320), 2);
    add_background_object(create_dvwalledge1_887(2784, 2136), 2);
    add_background_object(create_dvrockslope4_901(2464, 2144), 2);
    add_background_object(create_dvwall1_482(2912, 1752), 2);
    add_background_object(create_dvwall1_482(2656, 1752), 2);
    add_background_object(create_dvwall9_889(2528, 1816), 2);
    add_background_object(create_dvrockceiling_891(2784, 1928), 2);
    add_background_object(create_dvrockceiling_891(2656, 1928), 2);
    add_background_object(create_dvceilingoverlay_915(2656, 1928), 2);
    add_background_object(create_dvceilingoverlay_915(2784, 1928), 2);
    add_background_object(create_dvwall1_482(744, 1592), 2);
    add_background_object(create_dvwall1_482(1000, 1400), 2);
    add_background_object(create_dvwall1_482(744, 1400), 2);
    add_background_object(create_dvwall8_877(1256, 1464), 2);
    add_background_object(create_dvwall3_873(1256, 1272), 2);
    add_background_object(create_dvwall1_482(1000, 1208), 2);
    add_background_object(create_dvwall6_982(1160, 1464), 2);
    add_background_object(create_dvwalledge2_978(1240, 1592), 2);
    add_background_object(create_dvwalledge2_978(1240, 1656), 2);
    add_background_object(create_dvwalledge2_978(1240, 1720), 2);
    add_background_object(create_dvwalledge2_978(1240, 1784), 2);
    add_background_object(create_dvwalledge2_978(1240, 1848), 2);
    add_background_object(create_dvwalledge2_978(1240, 1912), 2);
    add_background_object(create_dvwall1_482(2304, 2472), 2);
    add_background_object(create_dvwall1_482(2304, 2664), 2);
    add_background_object(create_dvwall6_982(2240, 2440), 2);
    add_background_object(create_dvrockslope10_911(2208, 2360), 2);
    add_background_object(create_dvwall6_982(2344, 2456), 2);
    add_background_object(create_dvwalledge1_887(2048, 2600), 2);
    add_background_object(create_dvwalledge1_887(2048, 2536), 2);
    add_background_object(create_dvwalledge1_887(2048, 2472), 2);
    add_background_object(create_dvrockedge1_905(2048, 2456), 2);
    add_background_object(create_dvwalledge2_978(1936, 2520), 2);
    add_background_object(create_dvwall1_482(2304, 2792), 2);
    add_background_object(create_dvwall1_482(1792, 2664), 2);
    add_background_object(create_dvwall1_482(2048, 2664), 2);
    add_background_object(create_dvwall4_485(1824, 2600), 2);
    add_background_object(create_dvwalledge2_978(1936, 2584), 2);
    add_background_object(create_dvrockedge1_905(616, 1776), 2);
    add_background_object(create_dvrockslope1_896(648, 1776), 2);
    add_background_object(create_dvrockedge2_904(712, 1776), 2);
    add_background_object(create_dvwalledge1_887(2656, 1752), 2);
    add_background_object(create_bridgeback2_1023(288, 2056), 2);
    add_background_object(create_bridgeback2_1023(240, 2056), 2);
    add_background_object(create_dvwalledge2_978(3152, 1752), 2);
    add_background_object(create_dvwalledge2_978(3152, 1816), 2);
    add_background_object(create_dvwalledge2_978(3152, 1880), 2);
    add_background_object(create_dvwalledge1_887(3424, 1752), 2);
    add_background_object(create_dvwalledge1_887(3424, 1816), 2);
    add_background_object(create_dvwalledge1_887(3424, 1880), 2);
    add_background_object(create_dvrockedge1_905(3424, 1736), 2);
    add_background_object(create_dvwalledge1_887(1824, 2584), 2);
    add_background_object(create_dvwalledge1_887(1824, 2520), 2);
    add_background_object(create_dvwalledge1_887(1792, 2688), 2);
    add_background_object(create_dvwall1_482(1432, 2896), 2);
    add_background_object(create_dvwall1_482(1432, 3088), 2);
    add_background_object(create_dvwall1_482(3168, 2712), 2);
    add_background_object(create_dvwall1_482(2656, 2520), 2);
    add_background_object(create_dvwall1_482(2656, 2712), 2);
    add_background_object(create_dvwall3_873(2528, 2520), 2);
    add_background_object(create_dvwall3_873(2528, 2712), 2);
    add_background_object(create_dvrockslope4_901(3328, 2112), 2);
    add_background_object(create_dvrockslope4_900(3520, 2112), 2);
    add_background_object(create_dvrockslope4_900(3200, 2112), 2);
    add_background_object(create_dvrockceiling_891(3424, 1928), 2);
    add_background_object(create_dvceilingoverlay_915(3424, 1928), 2);
    add_background_object(create_dvwalledge2_978(3664, 1808), 2);
    add_background_object(create_dvwalledge2_978(3664, 1848), 2);
    add_background_object(create_dvwalledge2_978(3664, 1880), 2);
    add_background_object(create_dvrockceiling_891(3552, 1928), 2);
    add_background_object(create_dvceilingoverlay_915(3552, 1928), 2);
    add_background_object(create_dvrockslope1_896(3456, 2120), 2);
    add_background_object(create_dvwalledge2_978(3664, 2128), 2);
    add_background_object(create_dvwalledge2_978(3664, 2200), 2);
    add_background_object(create_dvwalledge1_887(744, 1736), 2);
    add_background_object(create_dvwalledge1_887(744, 1672), 2);
    add_background_object(create_dvwalledge1_887(744, 1608), 2);
    add_background_object(create_dvwalledge1_887(744, 1544), 2);
    add_background_object(create_dvwalledge1_887(744, 1480), 2);
    add_background_object(create_dvwalledge1_887(744, 1432), 2);
    add_background_object(create_dvwall1_482(744, 1208), 2);
    add_background_object(create_dvwalledge1_887(744, 1208), 2);
    add_background_object(create_dvwalledge2_978(240, 1528), 2);
    add_background_object(create_dvwalledge2_978(240, 1464), 2);
    add_background_object(create_dvwalledge2_978(240, 1400), 2);
    add_background_object(create_dvwalledge2_978(240, 1336), 2);
    add_background_object(create_dvwalledge2_978(3664, 1744), 2);
    add_background_object(create_dvwalledge2_978(3664, 1688), 2);
    add_background_object(create_dvwalledge1_887(3552, 1624), 2);
    add_background_object(create_dvwalledge2_978(3664, 1624), 2);
    add_background_object(create_dvrockedge1_905(3552, 1616), 2);
    add_background_object(create_dvrockedge2_904(3648, 1616), 2);
    add_background_object(create_dvrockslope1_896(3584, 1616), 2);
    add_background_object(create_dvwall1_482(3936, 1624), 2);
    add_background_object(create_dvrockedge2_904(3520, 1704), 2);
    add_background_object(create_dvwall6_982(3536, 1712), 2);
    add_background_object(create_dvwalledge1_887(3936, 1624), 2);
    add_background_object(create_dvwalledge1_887(3936, 1688), 2);
    add_background_object(create_dvwalledge1_887(3936, 1752), 2);
    add_background_object(create_dvwall1_482(3936, 1816), 2);
    add_background_object(create_dvwalledge1_887(3936, 1816), 2);
    add_background_object(create_dvwalledge1_887(3936, 1880), 2);
    add_background_object(create_dvwalledge1_887(3936, 1944), 2);
    add_background_object(create_dvwall1_482(3936, 2008), 2);
    add_background_object(create_dvwalledge1_887(3936, 2008), 2);
    add_background_object(create_dvwalledge1_887(3936, 2072), 2);
    add_background_object(create_dvwalledge1_887(3936, 2136), 2);
    add_background_object(create_dvwalledge2_978(3664, 2264), 2);
    add_background_object(create_dvwalledge2_978(3664, 2136), 2);
    add_background_object(create_dvrockedge2_904(3648, 2112), 2);
    add_background_object(create_dvwall1_482(3424, 2328), 2);
    add_background_object(create_dvwalledge2_978(3664, 2392), 2);
    add_background_object(create_dvwalledge2_978(3664, 2456), 2);
    add_background_object(create_dvwalledge2_978(3664, 2328), 2);
    add_background_object(create_dvwall1_482(3936, 2200), 2);
    add_background_object(create_dvwalledge1_887(3936, 2200), 2);
    add_background_object(create_dvwalledge1_887(3936, 2264), 2);
    add_background_object(create_dvwalledge1_887(3936, 2328), 2);
    add_background_object(create_dvwall1_482(3936, 2392), 2);
    add_background_object(create_dvwalledge1_887(3936, 2392), 2);
    add_background_object(create_dvwalledge1_887(3936, 2456), 2);
    add_background_object(create_dvwalledge1_887(3936, 2520), 2);
    add_background_object(create_dvwall1_482(3424, 2712), 2);
    add_background_object(create_dvwall1_482(3168, 2328), 2);
    add_background_object(create_dvwall1_482(3424, 2904), 2);
    add_background_object(create_dvwall1_482(3680, 2904), 2);
    add_background_object(create_dvwall1_482(3936, 2896), 2);
    add_background_object(create_dvwall1_482(3936, 2704), 2);
    add_background_object(create_dvwall1_482(4192, 2704), 2);
    add_background_object(create_dvwall1_482(4192, 2896), 2);
    add_background_object(create_dvwall4_485(3632, 2800), 2);
    add_background_object(create_dvwall4_485(3872, 2792), 2);
    add_background_object(create_dvwalledge2_978(3664, 2712), 2);
    add_background_object(create_dvrockedge1_905(3680, 2784), 2);
    add_background_object(create_dvwalledge2_978(3664, 2736), 2);
    add_background_object(create_dvrockedge2_904(3904, 2776), 2);
    add_background_object(create_dvrockslope4_900(3712, 2776), 2);
    add_background_object(create_dvrockslope1_896(3840, 2776), 2);
    add_background_object(create_dvwalledge1_887(3936, 2736), 2);
    add_background_object(create_dvwalledge1_887(3936, 2712), 2);
    add_background_object(create_dvrockceiling_891(3936, 2568), 2);
    add_background_object(create_dvceilingoverlay_915(3936, 2568), 2);
    add_background_object(create_dvwall4_485(1328, 2688), 2);
    add_background_object(create_dvwalledge2_978(1416, 2816), 2);
    add_background_object(create_dvwalledge2_978(1416, 2832), 2);
    add_background_object(create_dvrockedge1_905(1432, 2880), 2);
    add_background_object(create_dvrockslope4_901(1464, 2880), 2);
    add_background_object(create_levelbackdrop12_880(1688, 3016), 2);
    add_background_object(create_levelbackdrop12_880(1752, 3048), 2);
    add_background_object(create_dvwall9_889(1792, 2856), 2);
    add_background_object(create_dvrockslope1_896(1592, 2888), 2);
    add_background_object(create_dvwalledge2_978(1672, 2904), 2);
    add_background_object(create_dvrockedge2_904(1656, 2888), 2);
    add_background_object(create_dvwalledge2_978(1672, 2944), 2);
    add_background_object(create_dvwall1_482(1688, 3088), 2);
    add_background_object(create_dvwall1_482(1944, 3088), 2);
    add_background_object(create_dvwall1_482(2200, 3088), 2);
    add_background_object(create_dvwall4_485(1728, 3072), 2);
    add_background_object(create_dvwall6_982(1624, 3016), 2);
    add_background_object(create_dvrockslope11_906(1712, 3008), 2);
    add_background_object(create_dvrockedge1_905(1680, 3008), 2);
    add_background_object(create_dvrockslope4_901(1840, 3072), 2);
    add_background_object(create_dvrockslope4_900(1968, 3072), 2);
    add_background_object(create_dvwall6_982(1792, 2760), 2);
    add_background_object(create_dvwalledge1_887(1792, 2752), 2);
    add_background_object(create_dvwalledge1_887(1792, 2800), 2);
    add_background_object(create_dvwalledge2_978(1904, 2856), 2);
    add_background_object(create_dvwalledge2_978(1904, 2920), 2);
    add_background_object(create_dvrockedge1_905(1912, 2960), 2);
    add_background_object(create_dvrockslope1_896(1944, 2960), 2);
    add_background_object(create_dvrockedge2_904(2008, 2960), 2);
    add_background_object(create_dvrockceiling_891(1920, 2840), 2);
    add_background_object(create_dvceilingoverlay_915(1920, 2840), 2);
    add_background_object(create_dvrockceiling_891(2048, 2840), 2);
    add_background_object(create_dvceilingoverlay_915(2048, 2840), 2);
    add_background_object(create_dvwall4_485(2240, 2736), 2);
    add_background_object(create_levelbackdrop02_875(2128, 3024), 2);
    add_background_object(create_dvwall4_485(2160, 3064), 2);
    add_background_object(create_dvwalledge1_887(2128, 3024), 2);
    add_background_object(create_dvrockedge1_905(2128, 3008), 2);
    add_background_object(create_dvrockslope11_906(2160, 3008), 2);
    add_background_object(create_dvwall6_982(2120, 3064), 2);
    add_background_object(create_dvrockedge2_904(2096, 3072), 2);
    add_background_object(create_dvrockslope4_901(2288, 3072), 2);
    add_background_object(create_dvrockceiling_891(2304, 2968), 2);
    add_background_object(create_dvceilingoverlay_915(2304, 2968), 2);
    add_background_object(create_dvrockceiling_891(2432, 2968), 2);
    add_background_object(create_dvceilingoverlay_915(2432, 2968), 2);
    add_background_object(create_dvwall6_982(3512, 2688), 2);
    add_background_object(create_dvwall4_485(3424, 2664), 2);
    add_background_object(create_dvwalledge1_887(3424, 2648), 2);
    add_background_object(create_dvrockceiling_891(3424, 2504), 2);
    add_background_object(create_dvrockceiling_891(3552, 2504), 2);
    add_background_object(create_dvceilingoverlay_915(3552, 2504), 2);
    add_background_object(create_dvceilingoverlay_915(3424, 2504), 2);
    add_background_object(create_dvwall4_485(2432, 2792), 2);
    add_background_object(create_dvwall6_982(2424, 2680), 2);
    add_background_object(create_dvwall6_982(2304, 2696), 2);
    add_background_object(create_dvwall1_482(3424, 3096), 2);
    add_background_object(create_dvwall1_482(3680, 3096), 2);
    add_background_object(create_dvwall1_482(2456, 3088), 2);
    add_background_object(create_dvrockslope4_900(2416, 3072), 2);
    add_background_object(create_dvrockslope4_901(2544, 3072), 2);
    add_background_object(create_dvwall4_485(2456, 2848), 2);
    add_background_object(create_dvrockceiling_891(2632, 2888), 2);
    add_background_object(create_dvceilingoverlay_915(2632, 2888), 2);
    add_background_object(create_dvwall4_485(2520, 2792), 2);
    add_background_object(create_dvrockceiling_891(2760, 2888), 2);
    add_background_object(create_dvceilingoverlay_915(2760, 2888), 2);
    add_background_object(create_dvrockedge2_904(2672, 3080), 2);
    add_background_object(create_levelbackdrop02_875(2704, 3024), 2);
    add_background_object(create_levelbackdrop02_875(2768, 3024), 2);
    add_background_object(create_dvwall6_982(2704, 3024), 2);
    add_background_object(create_dvwalledge1_887(2704, 3024), 2);
    add_background_object(create_dvrockedge1_905(2704, 3008), 2);
    add_background_object(create_dvwalledge1_887(2704, 3040), 2);
    add_background_object(create_dvrockslope1_896(2736, 3008), 2);
    add_background_object(create_dvwall1_482(2840, 3152), 2);
    add_background_object(create_dvwall4_485(2776, 3072), 2);
    add_background_object(create_dvrockslope5_912(2800, 3008), 2);
    add_background_object(create_dvwall6_982(2856, 3136), 2);
    add_background_object(create_dvrockslope9_902(2864, 3040), 2);
    add_background_object(create_dvwall1_482(3096, 3152), 2);
    add_background_object(create_dvrockslope6_913(3200, 3008), 2);
    add_background_object(create_dvrockslope1_896(3328, 3008), 2);
    add_background_object(create_dvwall4_485(3272, 3096), 2);
    add_background_object(create_dvwalledge1_887(3424, 2904), 2);
    add_background_object(create_dvwalledge1_887(3424, 2968), 2);
    add_background_object(create_dvwall4_485(3408, 3016), 2);
    add_background_object(create_dvrockedge2_904(3392, 3008), 2);
    add_background_object(create_dvwall3_873(3040, 1944), 2);
    add_background_object(create_dvwall3_873(3040, 2136), 2);
    add_background_object(create_dvwalledge2_978(3152, 2072), 2);
    add_background_object(create_dvwalledge2_978(3152, 2008), 2);
    add_background_object(create_dvwalledge2_978(3152, 1944), 2);
    add_background_object(create_dvrockedge1_905(3168, 2120), 2);
    add_background_object(create_dvwalledge1_887(3040, 2072), 2);
    add_background_object(create_dvwalledge1_887(3040, 2008), 2);
    add_background_object(create_dvwalledge1_887(3040, 1944), 2);
    add_background_object(create_dvrockceiling_891(2912, 1928), 2);
    add_background_object(create_dvceilingoverlay_915(2912, 1928), 2);
    add_background_object(create_dvwalledge1_887(3040, 2200), 2);
    add_background_object(create_dvwalledge1_887(3040, 2136), 2);
    add_background_object(create_dvwalledge2_978(2896, 2136), 2);
    add_background_object(create_dvwalledge2_978(2896, 2200), 2);
    add_background_object(create_dvwalledge2_978(2896, 2264), 2);
    add_background_object(create_dvwalledge1_887(3040, 2264), 2);
    add_background_object(create_dvrockceiling_891(3296, 2504), 2);
    add_background_object(create_dvceilingoverlay_915(3296, 2504), 2);
    add_background_object(create_dvrockslope1_896(3328, 2704), 2);
    add_background_object(create_dvrockedge2_904(3392, 2704), 2);
    add_background_object(create_dvrockceiling_891(3040, 2312), 2);
    add_background_object(create_dvceilingoverlay_915(3040, 2312), 2);
    add_background_object(create_dvceilingoverlay_915(2912, 2888), 2);
    add_background_object(create_dvrockceiling_891(3296, 2888), 2);
    add_background_object(create_dvceilingoverlay_915(3296, 2888), 2);
    add_background_object(create_dvrockceiling_891(2816, 2888), 2);
    add_background_object(create_dvceilingoverlay_915(2816, 2888), 2);
    add_background_object(create_dvwall2_886(2912, 2520), 2);
    add_background_object(create_dvwall4_485(3160, 3136), 2);
    add_background_object(create_dvrockslope10_911(3136, 3040), 2);
    add_background_object(create_dvrockslope2_910(2992, 3136), 2);
    add_background_object(create_dvrockslope1_896(3072, 3136), 2);
    add_background_object(create_geyserbase2_987(3064, 3128), 2);
    add_background_object(create_dvwalledge2_978(2896, 2328), 2);
    add_background_object(create_dvwalledge2_978(2896, 2392), 2);
    add_background_object(create_dvwalledge2_978(3024, 2456), 2);
    add_background_object(create_dvwalledge2_978(3024, 2584), 2);
    add_background_object(create_dvwalledge2_978(3024, 2648), 2);
    add_background_object(create_dvwalledge2_978(3024, 2712), 2);
    add_background_object(create_dvwalledge2_978(3024, 2776), 2);
    add_background_object(create_dvwalledge2_978(3024, 2840), 2);
    add_background_object(create_dvrockceiling_891(2912, 2888), 2);
    add_background_object(create_dvceilingoverlay_915(2912, 2888), 2);
    add_background_object(create_dvladder_914(3040, 2448), 2);
    add_background_object(create_dvladder_914(3040, 2480), 2);
    add_background_object(create_dvladder_914(3040, 2512), 2);
    add_background_object(create_dvladder_914(3040, 2544), 2);
    add_background_object(create_dvwalledge2_978(3024, 2520), 2);
    add_background_object(create_dvwall4_485(2896, 2464), 2);
    add_background_object(create_geyserbase2_987(2944, 2440), 2);
    add_background_object(create_dvrockedge2_904(3008, 2448), 2);
    add_background_object(create_dvrockedge1_905(2912, 2448), 2);
    add_background_object(create_dvwall4_485(3152, 2280), 2);
    add_background_object(create_dvwalledge1_887(3168, 2712), 2);
    add_background_object(create_dvwalledge1_887(3168, 2776), 2);
    add_background_object(create_dvwalledge1_887(3168, 2840), 2);
    add_background_object(create_dvceilingoverlay_915(3168, 2888), 2);
    add_background_object(create_dvrockceiling_891(3168, 2888), 2);
    add_background_object(create_dvrockslope13_1026(3456, 1704), 2);
    add_background_object(create_dvwalledge1_887(3552, 1648), 2);
    add_background_object(create_dvwall3_873(4064, 1432), 2);
    add_background_object(create_dvrockedge1_905(3936, 1616), 2);
    add_background_object(create_dvrockslope1_896(3968, 1616), 2);
    add_background_object(create_dvrockedge2_904(4032, 1616), 2);
    add_background_object(create_dvwalledge1_887(4064, 1560), 2);
    add_background_object(create_dvwalledge1_887(4064, 1496), 2);
    add_background_object(create_dvwalledge1_887(4064, 1432), 2);
    add_background_object(create_dvwall1_482(3936, 1240), 2);
    add_background_object(create_dvwall9_889(3808, 1304), 2);
    add_background_object(create_dvwall1_482(3936, 1048), 2);
    add_background_object(create_dvwall1_482(3936, 856), 2);
    add_background_object(create_dvwalledge1_887(3936, 1240), 2);
    add_background_object(create_dvwalledge1_887(3936, 1176), 2);
    add_background_object(create_dvwalledge1_887(3936, 1112), 2);
    add_background_object(create_dvwalledge1_887(3936, 1048), 2);
    add_background_object(create_dvwall1_482(3936, 664), 2);
    add_background_object(create_dvwall1_482(3936, 472), 2);
    add_background_object(create_dvwalledge1_887(3936, 600), 2);
    add_background_object(create_dvwalledge1_887(3936, 536), 2);
    add_background_object(create_dvwalledge1_887(3936, 472), 2);
    add_background_object(create_dvwall1_482(3936, 280), 2);
    add_background_object(create_dvwall1_482(3936, 88), 2);
    add_background_object(create_dvwalledge1_887(3936, 408), 2);
    add_background_object(create_dvwalledge1_887(3936, 344), 2);
    add_background_object(create_dvwalledge1_887(3936, 280), 2);
    add_background_object(create_dvwalledge1_887(3936, 216), 2);
    add_background_object(create_dvwalledge1_887(3936, 152), 2);
    add_background_object(create_dvwalledge1_887(3936, 88), 2);
    add_background_object(create_dvwall1_482(3936, -104), 2);
    add_background_object(create_dvwalledge1_887(3936, 24), 2);
    add_background_object(create_dvwalledge1_887(3936, -40), 2);
    add_background_object(create_dvwalledge1_887(3936, -104), 2);
    add_background_object(create_dvrockedge1_905(3808, 1288), 2);
    add_background_object(create_dvrockslope1_896(3840, 1288), 2);
    add_background_object(create_dvrockedge2_904(3904, 1288), 2);
    add_background_object(create_dvrockceiling_891(3936, 1416), 2);
    add_background_object(create_dvceilingoverlay_915(3936, 1416), 2);
    add_background_object(create_dvwall1_482(4192, 1624), 2);
    add_background_object(create_dvwall1_482(4192, 1240), 2);
    add_background_object(create_dvwall1_482(4192, 1048), 2);
    add_background_object(create_dvwall1_482(4192, 856), 2);
    add_background_object(create_dvwall1_482(4192, 664), 2);
    add_background_object(create_dvwall1_482(4192, 472), 2);
    add_background_object(create_dvwall1_482(4192, 280), 2);
    add_background_object(create_dvwall1_482(4192, 88), 2);
    add_background_object(create_dvwall1_482(4192, -104), 2);
    add_background_object(create_dvwall1_482(4192, 1432), 2);
    add_background_object(create_dvcoral6_973(1656, 2792), 2);
    add_background_object(create_dvcoral5_972(416, 2832), 2);
    add_background_object(create_dvwall1_482(4448, 2664), 2);
    add_background_object(create_dvwall1_482(4448, 2856), 2);
    add_background_object(create_dvwall1_482(4448, 2280), 2);
    add_background_object(create_dvwall1_482(4448, 2472), 2);
    add_background_object(create_dvwall4_485(4408, 2688), 2);
    add_background_object(create_dvwall6_982(4400, 2800), 2);
    add_background_object(create_dvwalledge1_887(4448, 2640), 2);
    add_background_object(create_dvwalledge1_887(4448, 2280), 2);
    add_background_object(create_dvwalledge1_887(4448, 2344), 2);
    add_background_object(create_dvwalledge1_887(4448, 2408), 2);
    add_background_object(create_dvwalledge1_887(4448, 2472), 2);
    add_background_object(create_dvwalledge1_887(4448, 2536), 2);
    add_background_object(create_dvwalledge1_887(4448, 2600), 2);
    add_background_object(create_dvwall1_482(4192, 1752), 2);
    add_background_object(create_dvrockceiling_891(4192, 1928), 2);
    add_background_object(create_dvwall6_982(1168, 1352), 2);
    add_background_object(create_dvrockedge1_905(4448, 2272), 2);
    add_background_object(create_dvrockslope4_900(4480, 2264), 2);
    add_background_object(create_dvwall8_877(4448, 1816), 2);
    add_background_object(create_dvrockedge2_904(4544, 1800), 2);
    add_background_object(create_dvrockslope1_896(4480, 1800), 2);
    add_background_object(create_dvrockedge1_905(4448, 1800), 2);
    add_background_object(create_dvwall4_485(4344, 1816), 2);
    add_background_object(create_dvrockceiling_891(4320, 1928), 2);
    add_background_object(create_dvwalledge2_978(4176, 2520), 2);
    add_background_object(create_dvceilingoverlay_915(4064, 2568), 2);
    add_background_object(create_dvrockceiling_891(4064, 2568), 2);
    add_background_object(create_dvwalledge2_978(4176, 2456), 2);
    add_background_object(create_dvwalledge2_978(4176, 2392), 2);
    add_background_object(create_dvwalledge2_978(4176, 2328), 2);
    add_background_object(create_dvwalledge2_978(4176, 2264), 2);
    add_background_object(create_dvwalledge2_978(4176, 2200), 2);
    add_background_object(create_dvwalledge2_978(4176, 2136), 2);
    add_background_object(create_dvwalledge2_978(4176, 2072), 2);
    add_background_object(create_dvwalledge2_978(4176, 2008), 2);
    add_background_object(create_dvrockceiling_891(4448, 2112), 2);
    add_background_object(create_dvrockceiling_891(4536, 2104), 2);
    add_background_object(create_dvrockslope4_900(4480, 2096), 2);
    add_background_object(create_dvrockedge1_905(4448, 2104), 2);
    add_background_object(create_dvrockceiling_891(4640, 2112), 2);
    add_background_object(create_dvrockedge2_904(4736, 2104), 2);
    add_background_object(create_dvrockslope4_901(4608, 2096), 2);
    add_background_object(create_dvceilingoverlay_915(4448, 2112), 2);
    add_background_object(create_dvceilingoverlay_915(4640, 2112), 2);
    add_background_object(create_dvceilingoverlay2_916(4576, 2112), 2);
    add_background_object(create_dvwalledge2_978(4432, 1568), 2);
    add_background_object(create_dvwalledge2_978(4432, 1504), 2);
    add_background_object(create_dvwalledge2_978(4176, 1944), 2);
    add_background_object(create_dvwall6_982(4096, 1688), 2);
    add_background_object(create_dvwall4_485(4128, 1816), 2);
    add_background_object(create_dvwall6_982(4320, 1664), 2);
    add_background_object(create_dvwalledge2_978(4432, 1632), 2);
    add_background_object(create_dvwalledge2_978(4432, 1696), 2);
    add_background_object(create_dvwalledge2_978(4432, 1760), 2);
    add_background_object(create_dvwall4_485(4248, 1720), 2);
    add_background_object(create_dvwall6_885(4704, 2280), 2);
    add_background_object(create_dvrockslope4_901(4608, 2264), 2);
    add_background_object(create_dvwall4_485(4720, 2320), 2);
    add_background_object(create_dvrockslope7_985(4736, 2272), 2);
    add_background_object(create_dvwall2_886(4704, 2472), 2);
    add_background_object(create_dvwall4_485(4664, 2424), 2);
    add_background_object(create_levelbackdrop14_983(4896, 2432), 2);
    add_background_object(create_dvwalledge2_978(4432, 1440), 2);
    add_background_object(create_dvwalledge2_978(4432, 1432), 2);
    add_background_object(create_dvwall2_886(4704, 2664), 2);
    add_background_object(create_levelbackdrop02_875(4832, 2560), 2);
    add_background_object(create_dvwall6_982(4760, 2440), 2);
    add_background_object(create_dvwall4_485(4824, 2536), 2);
    add_background_object(create_dvwall6_982(4896, 2576), 2);
    add_background_object(create_dvrockslope9_902(4928, 2496), 2);
    add_background_object(create_dvrockedge1_905(4896, 2496), 2);
    add_background_object(create_dvwall6_982(4752, 2648), 2);
    add_background_object(create_dvwall1_482(5088, 2592), 2);
    add_background_object(create_dvrockslope1_896(5056, 2592), 2);
    add_background_object(create_dvwall4_485(5232, 2504), 2);
    add_background_object(create_dvrockslope10_911(5120, 2496), 2);
    add_background_object(create_dvwall6_982(5352, 2416), 2);
    add_background_object(create_dvrockslope2_910(5376, 2400), 2);
    add_background_object(create_dvrockslope6_913(5248, 2400), 2);
    add_background_object(create_dvwall1_482(5344, 2784), 2);
    add_background_object(create_dvwall1_482(4832, 2784), 2);
    add_background_object(create_dvwall1_482(5088, 2784), 2);
    add_background_object(create_dvwall1_482(5696, 2272), 2);
    add_background_object(create_dvwalledge1_887(5696, 2272), 2);
    add_background_object(create_dvwalledge1_887(5696, 2336), 2);
    add_background_object(create_dvwalledge1_887(5696, 2400), 2);
    add_background_object(create_dvwalledge2_978(5584, 2472), 2);
    add_background_object(create_dvwalledge2_978(5584, 2408), 2);
    add_background_object(create_dvrockedge2_904(5504, 2400), 2);
    add_background_object(create_levelbackdrop02_875(5536, 2280), 2);
    add_background_object(create_dvwalledge2_978(5584, 2344), 2);
    add_background_object(create_dvwalledge2_978(5584, 2280), 2);
    add_background_object(create_dvwalledge1_887(5536, 2296), 2);
    add_background_object(create_dvwalledge1_887(5536, 2272), 2);
    add_background_object(create_dvrockedge1_905(2016, 1856), 2);
    add_background_object(create_dvrockedge2_904(2048, 1856), 2);
    add_background_object(create_dvfloorcurveleft_1025(5600, 2536), 2);
    add_background_object(create_dvwalledge2_978(5584, 2536), 2);
    add_background_object(create_dvwall4_485(5512, 2656), 2);
    add_background_object(create_dvwall6_982(5480, 2560), 2);
    add_background_object(create_dvwall8_877(5960, 2336), 2);
    add_background_object(create_levelbackdrop02_875(5952, 2272), 2);
    add_background_object(create_levelbackdrop02_875(6016, 2272), 2);
    add_background_object(create_dvwall2_886(5952, 2080), 2);
    add_background_object(create_levelbackdrop02_875(5888, 2208), 2);
    add_background_object(create_dvwall4_485(5888, 2224), 2);
    add_background_object(create_dvwall6_982(5952, 2224), 2);
    add_background_object(create_dvwall4_485(5864, 2344), 2);
    add_background_object(create_dvwalledge1_887(5888, 2208), 2);
    add_background_object(create_dvrockedge1_905(5888, 2200), 2);
    add_background_object(create_dvrockedge2_904(5920, 2200), 2);
    add_background_object(create_dvwalledge1_887(5952, 2080), 2);
    add_background_object(create_dvwalledge1_887(5952, 2144), 2);
    add_background_object(create_dvwalledge2_978(6072, 2144), 2);
    add_background_object(create_dvwalledge2_978(6072, 2272), 2);
    add_background_object(create_dvwalledge2_978(6072, 2208), 2);
    add_background_object(create_dvrockceiling_891(5696, 2440), 2);
    add_background_object(create_dvrockceiling_891(5824, 2440), 2);
    add_background_object(create_dvwalledge2_978(6072, 2080), 2);
    add_background_object(create_dvceilingoverlay_915(5696, 2440), 2);
    add_background_object(create_dvceilingoverlay_915(5824, 2440), 2);
    add_background_object(create_dvwall9_889(5696, 1960), 2);
    add_background_object(create_dvwall1_482(5696, 1696), 2);
    add_background_object(create_levelbackdrop02_875(5696, 1896), 2);
    add_background_object(create_levelbackdrop02_875(5760, 1896), 2);
    add_background_object(create_dvwall4_485(5712, 1856), 2);
    add_background_object(create_dvwall4_485(5792, 1960), 2);
    add_background_object(create_dvrockceiling_891(5824, 2064), 2);
    add_background_object(create_dvceilingoverlay_915(5824, 2064), 2);
    add_background_object(create_dvwalledge1_887(5696, 1696), 2);
    add_background_object(create_dvwalledge1_887(5696, 1760), 2);
    add_background_object(create_dvwalledge1_887(5696, 1824), 2);
    add_background_object(create_dvwalledge1_887(5696, 1888), 2);
    add_background_object(create_dvwalledge1_887(5696, 1904), 2);
    add_background_object(create_dvwall4_485(6224, 2688), 2);
    add_background_object(create_dvwalledge2_978(6336, 2776), 2);
    add_background_object(create_dvwalledge2_978(6336, 2824), 2);
    add_background_object(create_levelbackdrop10_1027(7280, 2560), 2);
    add_background_object(create_dvwall1_482(5952, 1888), 2);
    add_background_object(create_dvwalledge2_978(6192, 1888), 2);
    add_background_object(create_dvwalledge2_978(6192, 1952), 2);
    add_background_object(create_dvwalledge2_978(6192, 2016), 2);
    add_background_object(create_dvrockceiling_891(6080, 2064), 2);
    add_background_object(create_dvceilingoverlay_915(6080, 2064), 2);
    add_background_object(create_dvfloorcurvesmallleft_918(5840, 2720), 2);
    add_background_object(create_levelbackdrop02_875(5776, 2736), 2);
    add_background_object(create_levelbackdrop02_875(5712, 2736), 2);
    add_background_object(create_dvwall4_485(5664, 2672), 2);
    add_background_object(create_dvwall4_485(5632, 2760), 2);
    add_background_object(create_dvwall6_982(5728, 2784), 2);
    add_background_object(create_dvrockedge1_905(5720, 2664), 2);
    add_background_object(create_dvrockslope1_896(5744, 2664), 2);
    add_background_object(create_dvwalledge2_978(5824, 2672), 2);
    add_background_object(create_dvrockedge2_904(5808, 2664), 2);
    add_background_object(create_dvwalledge2_978(5824, 2720), 2);
    add_background_object(create_dvrockedge1_905(5832, 2784), 2);
    add_background_object(create_dvrockslope4_900(5864, 2776), 2);
    add_background_object(create_dvrockslope1_896(5992, 2776), 2);
    add_background_object(create_dvwalledge1_887(6088, 2720), 2);
    add_background_object(create_dvwall6_982(6056, 2776), 2);
    add_background_object(create_dvrockedge2_904(6056, 2776), 2);
    add_background_object(create_dvwall1_482(6640, 2696), 2);
    add_background_object(create_dvwalledge1_887(6632, 2824), 2);
    add_background_object(create_dvwalledge1_887(6632, 2776), 2);
    add_background_object(create_dvwall4_485(6632, 2696), 2);
    add_background_object(create_dvrockedge1_905(6592, 2680), 2);
    add_background_object(create_dvrockedge2_904(7264, 2672), 2);
    add_background_object(create_levelbackdrop02_875(7280, 2632), 2);
    add_background_object(create_levelbackdrop02_875(7344, 2632), 2);
    add_background_object(create_dvwall4_485(7280, 2632), 2);
    add_background_object(create_dvwalledge1_887(7280, 2632), 2);
    add_background_object(create_dvrockedge1_905(7280, 2616), 2);
    add_background_object(create_dvrockedge2_904(7312, 2616), 2);
    add_background_object(create_levelbackdrop02_875(7344, 2568), 2);
    add_background_object(create_dvwalledge1_887(7344, 2568), 2);
    add_background_object(create_dvwall1_482(7408, 2504), 2);
    add_background_object(create_dvwalledge1_887(7408, 2504), 2);
    add_background_object(create_dvwall6_982(7392, 2560), 2);
    add_background_object(create_dvrockedge2_904(7376, 2552), 2);
    add_background_object(create_levelbackdrop7_917(7280, 2272), 2);
    add_background_object(create_levelbackdrop10_1027(7336, 2496), 2);
    add_background_object(create_levelbackdrop10_1027(7280, 2496), 2);
    add_background_object(create_levelbackdrop7_917(7336, 2272), 2);
    add_background_object(create_levelbackdrop10_1027(7336, 2368), 2);
    add_background_object(create_levelbackdrop10_1027(7280, 2368), 2);
    add_background_object(create_dvwall1_482(7408, 2312), 2);
    add_background_object(create_dvwalledge1_887(7408, 2312), 2);
    add_background_object(create_dvwalledge1_887(7408, 2376), 2);
    add_background_object(create_dvwalledge1_887(7408, 2440), 2);
    add_background_object(create_levelbackdrop10_1027(7280, 2304), 2);
    add_background_object(create_levelbackdrop10_1027(7336, 2304), 2);
    add_background_object(create_dvrockedge1_905(7344, 2296), 2);
    add_background_object(create_dvrockedge2_904(7272, 2296), 2);
    add_background_object(create_dvladder_914(7304, 2296), 2);
    add_background_object(create_dvrockedge1_905(7344, 2552), 2);
    add_background_object(create_dvrockedge2_904(7376, 2296), 2);
    add_background_object(create_dvladder_914(7304, 2328), 2);
    add_background_object(create_dvladder_914(7304, 2360), 2);
    add_background_object(create_levelbackdrop10_1027(7336, 2432), 2);
    add_background_object(create_levelbackdrop10_1027(7280, 2432), 2);
    add_background_object(create_dvladder_914(7304, 2392), 2);
    add_background_object(create_dvladder_914(7304, 2424), 2);
    add_background_object(create_dvrockceiling_891(6224, 2872), 2);
    add_background_object(create_levelbackdrop02_875(3352, 3224), 2);
    add_background_object(create_levelbackdrop02_875(3360, 3224), 2);
    add_background_object(create_dvrockslope4_901(7144, 2288), 2);
    add_background_object(create_dvrockslope4_900(7136, 2672), 2);
    add_background_object(create_dvrockslope2_910(6624, 2680), 2);
    add_background_object(create_dvrockslope2_910(6752, 2680), 2);
    add_background_object(create_dvrockslope2_910(6880, 2680), 2);
    add_background_object(create_dvrockslope2_910(7008, 2680), 2);
    add_background_object(create_dvwall1_482(7408, 2120), 2);
    add_background_object(create_dvwalledge1_887(7408, 2120), 2);
    add_background_object(create_dvwalledge1_887(7408, 2184), 2);
    add_background_object(create_dvwalledge1_887(7408, 2248), 2);
    add_background_object(create_dvwall1_482(7408, 1928), 2);
    add_background_object(create_dvwalledge1_887(7344, 1928), 2);
    add_background_object(create_dvwalledge1_887(7408, 1992), 2);
    add_background_object(create_dvwalledge1_887(7408, 2056), 2);
    add_background_object(create_levelbackdrop7_917(6376, 2296), 2);
    add_background_object(create_levelbackdrop7_917(6584, 2296), 2);
    add_background_object(create_dvwall9_889(6816, 2008), 2);
    add_background_object(create_signwarning_1028(7120, 2248), 2);
    add_background_object(create_signwarning_1028(6736, 2280), 2);
    add_background_object(create_signleft_1029(3000, 2048), 2);
    add_background_object(create_dvverticalbridge_1020(7104, 2288), 2);
    add_background_object(create_dvverticalbridge_1020(7104, 2320), 2);
    add_background_object(create_dvverticalbridge_1020(6776, 2320), 2);
    add_background_object(create_dvverticalbridge_1020(6776, 2352), 2);
    add_background_object(create_dvverticalbridge_1020(7104, 2352), 2);
    add_background_object(create_dvverticalbridge_1020(7104, 2384), 2);
    add_background_object(create_dvwall4_485(6816, 1904), 2);
    add_background_object(create_dvwalledge1_887(6816, 1816), 2);
    add_background_object(create_dvwalledge1_887(6816, 1880), 2);
    add_background_object(create_dvwalledge1_887(6816, 1944), 2);
    add_background_object(create_dvwalledge2_978(7056, 1816), 2);
    add_background_object(create_dvwalledge2_978(7056, 1880), 2);
    add_background_object(create_dvwalledge2_978(7056, 1944), 2);
    add_background_object(create_dvwall1_482(6816, 1432), 2);
    add_background_object(create_dvwalledge2_978(7056, 1432), 2);
    add_background_object(create_dvwalledge2_978(7056, 1496), 2);
    add_background_object(create_dvwalledge2_978(7056, 1560), 2);
    add_background_object(create_dvrockedge2_904(7040, 1416), 2);
    add_background_object(create_dvwall1_482(5952, 1696), 2);
    add_background_object(create_dvwalledge2_978(6192, 1696), 2);
    add_background_object(create_dvwalledge2_978(6192, 1760), 2);
    add_background_object(create_dvwalledge2_978(6192, 1824), 2);
    add_background_object(create_dvwall1_482(6272, 1888), 2);
    add_background_object(create_dvwall8_877(6528, 1952), 2);
    add_background_object(create_dvrockedge2_904(6624, 1936), 2);
    add_background_object(create_dvwalledge2_978(6512, 1920), 2);
    add_background_object(create_dvwalledge2_978(6512, 1888), 2);
    add_background_object(create_dvwall4_485(6440, 1952), 2);
    add_background_object(create_dvrockedge1_905(6528, 1936), 2);
    add_background_object(create_dvrockslope1_896(6560, 1936), 2);
    add_background_object(create_dvrockceiling_891(6400, 2064), 2);
    add_background_object(create_dvceilingoverlay_915(6400, 2064), 2);
    add_background_object(create_dvwalledge1_887(6272, 1888), 2);
    add_background_object(create_dvwalledge1_887(6272, 1952), 2);
    add_background_object(create_dvwalledge1_887(6272, 2016), 2);
    add_background_object(create_dvceilingoverlay_915(6272, 2064), 2);
    add_background_object(create_dvrockceiling_891(6272, 2064), 2);
    add_background_object(create_dvwall1_482(5440, 1504), 2);
    add_background_object(create_dvwalledge1_887(5440, 1504), 2);
    add_background_object(create_dvwalledge1_887(5440, 1568), 2);
    add_background_object(create_dvwalledge1_887(5440, 1632), 2);
    add_background_object(create_dvwall1_482(5952, 1504), 2);
    add_background_object(create_dvwalledge2_978(6192, 1632), 2);
    add_background_object(create_dvwall1_482(5440, 1312), 2);
    add_background_object(create_dvwalledge1_887(5440, 1312), 2);
    add_background_object(create_dvwalledge1_887(5440, 1376), 2);
    add_background_object(create_dvwalledge1_887(5440, 1440), 2);
    add_background_object(create_dvwall1_482(5952, 1312), 2);
    add_background_object(create_dvrockslope4_901(6368, 1872), 2);
    add_background_object(create_dvrockedge2_904(6496, 1880), 2);
    add_background_object(create_dvrockedge1_905(6272, 1872), 2);
    add_background_object(create_dvrockslope1_896(6304, 1872), 2);
    add_background_object(create_dvwall1_482(6816, 1624), 2);
    add_background_object(create_dvwall1_482(6560, 1624), 2);
    add_background_object(create_dvwall1_482(6304, 1624), 2);
    add_background_object(create_dvwall4_485(6192, 1624), 2);
    add_background_object(create_dvwall6_982(6192, 1696), 2);
    add_background_object(create_dvrockceiling_891(6328, 1800), 2);
    add_background_object(create_dvceilingoverlay_915(6328, 1800), 2);
    add_background_object(create_dvceilingoverlay_915(6200, 1800), 2);
    add_background_object(create_dvrockceiling_891(6200, 1800), 2);
    add_background_object(create_dvrockceiling_891(6584, 1800), 2);
    add_background_object(create_dvceilingoverlay_915(6584, 1800), 2);
    add_background_object(create_dvceilingoverlay_915(6456, 1800), 2);
    add_background_object(create_dvrockceiling_891(6456, 1800), 2);
    add_background_object(create_dvrockceiling_891(6688, 1800), 2);
    add_background_object(create_dvceilingoverlay_915(6688, 1800), 2);
    add_background_object(create_dvrockslope4_901(6912, 1408), 2);
    add_background_object(create_dvrockslope4_900(6784, 1408), 2);
    add_background_object(create_dvrockslope4_901(6656, 1408), 2);
    add_background_object(create_dvrockslope4_900(6528, 1408), 2);
    add_background_object(create_dvrockslope4_901(6400, 1408), 2);
    add_background_object(create_dvrockslope4_900(6272, 1408), 2);
    add_background_object(create_dvrockslope1_896(6208, 1416), 2);
    add_background_object(create_dvwall4_485(6192, 1448), 2);
    add_background_object(create_dvwall6_982(6192, 1520), 2);
    add_background_object(create_switchwallbase_1030(6088, 2264), 2);
    add_background_object(create_dvwall1_482(5856, 2976), 2);
    add_background_object(create_dvwall1_482(5600, 2976), 2);
    add_background_object(create_dvwall1_482(5856, 3168), 2);
    add_background_object(create_dvwall1_482(6216, 3080), 2);
    add_background_object(create_dvwall1_482(6472, 3080), 2);
    add_background_object(create_dvwall4_485(6096, 2824), 2);
    add_background_object(create_dvwall6_982(6048, 2944), 2);
    add_background_object(create_dvwall4_485(6040, 3064), 2);
    add_background_object(create_dvwall6_982(6152, 3080), 2);
    add_background_object(create_dvrockslope4_900(6248, 3064), 2);
    add_background_object(create_dvwalledge2_978(6208, 2888), 2);
    add_background_object(create_dvwalledge2_978(6208, 2952), 2);
    add_background_object(create_dvwalledge2_978(6208, 3016), 2);
    add_background_object(create_dvrockedge1_905(6216, 3072), 2);
    add_background_object(create_dvrockslope4_901(6376, 3064), 2);
    add_background_object(create_dvrockslope4_900(6504, 3064), 2);
    add_background_object(create_levelbackdrop02_875(6664, 3016), 2);
    add_background_object(create_dvrockedge2_904(6632, 3064), 2);
    add_background_object(create_levelbackdrop02_875(6728, 2952), 2);
    add_background_object(create_levelbackdrop02_875(6728, 3016), 2);
    add_background_object(create_dvrockedge2_904(6696, 3000), 2);
    add_background_object(create_dvwalledge1_887(6664, 3016), 2);
    add_background_object(create_dvwalledge1_887(6728, 2952), 2);
    add_background_object(create_dvrockedge1_905(6728, 2936), 2);
    add_background_object(create_dvrockedge1_905(6664, 3000), 2);
    add_background_object(create_dvwall1_482(6728, 3080), 2);
    add_background_object(create_dvwall1_482(6984, 3080), 2);
    add_background_object(create_dvwall1_482(7240, 3080), 2);
    add_background_object(create_dvwall1_482(7496, 3080), 2);
    add_background_object(create_dvwall1_482(7752, 3080), 2);
    add_background_object(create_dvrockslope5_912(6760, 2936), 2);
    add_background_object(create_dvwall4_485(6672, 3040), 2);
    add_background_object(create_dvwall6_982(6784, 3056), 2);
    add_background_object(create_dvrockslope9_902(6824, 2968), 2);
    add_background_object(create_dvrockslope4_901(6952, 3064), 2);
    add_background_object(create_dvrockslope1_896(7528, 3072), 2);
    add_background_object(create_dvwall7_892(7144, 2952), 2);
    add_background_object(create_dvwall6_885(7336, 2952), 2);
    add_background_object(create_levelbackdrop02_875(7272, 2952), 2);
    add_background_object(create_levelbackdrop02_875(7272, 3016), 2);
    add_background_object(create_dvwall4_485(7240, 2952), 2);
    add_background_object(create_dvwall4_485(7112, 3056), 2);
    add_background_object(create_dvwall6_982(7360, 3048), 2);
    add_background_object(create_dvrockslope1_896(7272, 2944), 2);
    add_background_object(create_dvrockslope9_902(7400, 2976), 2);
    add_background_object(create_dvrockslope5_912(7336, 2944), 2);
    add_background_object(create_dvrockslope6_913(7144, 2944), 2);
    add_background_object(create_dvrockslope10_911(7080, 2976), 2);
    add_background_object(create_dvwall1_482(7408, 1736), 2);
    add_background_object(create_dvwalledge1_887(7344, 1800), 2);
    add_background_object(create_dvwalledge1_887(7344, 1864), 2);
    add_background_object(create_dvwall1_482(7408, 1544), 2);
    add_background_object(create_dvwalledge1_887(7408, 1544), 2);
    add_background_object(create_dvwall1_482(7408, 1352), 2);
    add_background_object(create_dvwalledge1_887(7408, 1352), 2);
    add_background_object(create_dvwalledge1_887(7408, 1416), 2);
    add_background_object(create_dvwalledge1_887(7408, 1480), 2);
    add_background_object(create_dvcoral6_973(6496, 2976), 2);
    add_background_object(create_dvwall7_892(7656, 2952), 2);
    add_background_object(create_dvwall4_485(7632, 3048), 2);
    add_background_object(create_dvrockslope6_913(7656, 2944), 2);
    add_background_object(create_dvrockslope10_911(7592, 2976), 2);
    add_background_object(create_dvwall8_877(7536, 2760), 2);
    add_background_object(create_levelbackdrop02_875(7536, 2696), 2);
    add_background_object(create_levelbackdrop02_875(7600, 2696), 2);
    add_background_object(create_dvwall4_485(7480, 2736), 2);
    add_background_object(create_dvrockedge2_904(7784, 2944), 2);
    add_background_object(create_dvwalledge2_978(7776, 3000), 2);
    add_background_object(create_dvwalledge2_978(7776, 3016), 2);
    add_background_object(create_dvrockedge1_905(7784, 3064), 2);
    add_background_object(create_dvwall4_485(7936, 3056), 2);
    add_background_object(create_dvwall4_485(7840, 3056), 2);
    add_background_object(create_dvrockedge2_904(8008, 3056), 2);
    add_background_object(create_dvwall4_485(8040, 3056), 2);
    add_background_object(create_dvwall4_485(8152, 3056), 2);
    add_background_object(create_dvrockslope13_1026(7816, 3032), 2);
    add_background_object(create_dvrockedge2_904(7880, 3032), 2);
    add_background_object(create_dvrockedge1_905(7912, 3056), 2);
    add_background_object(create_dvwalledge1_887(8040, 3016), 2);
    add_background_object(create_dvwalledge1_887(8040, 2888), 2);
    add_background_object(create_dvwalledge1_887(8040, 2952), 2);
    add_background_object(create_dvwall1_482(8040, 2696), 2);
    add_background_object(create_dvwalledge1_887(8040, 2824), 2);
    add_background_object(create_dvwall4_485(8040, 2600), 2);
    add_background_object(create_dvwall1_482(8296, 2696), 2);
    add_background_object(create_dvwall1_482(8296, 2888), 2);
    add_background_object(create_dvwall1_482(8296, 3080), 2);
    add_background_object(create_dvwall4_485(8256, 3032), 2);
    add_background_object(create_dvwall4_485(8240, 3112), 2);
    add_background_object(create_dvwall1_482(7408, 1160), 2);
    add_background_object(create_dvwalledge1_887(7408, 1160), 2);
    add_background_object(create_dvwalledge1_887(7408, 1224), 2);
    add_background_object(create_dvwalledge1_887(7408, 1288), 2);
    add_background_object(create_dvwall1_482(7408, 968), 2);
    add_background_object(create_dvwalledge1_887(7408, 968), 2);
    add_background_object(create_dvwalledge1_887(7408, 1032), 2);
    add_background_object(create_dvwalledge1_887(7408, 1096), 2);
    add_background_object(create_dvwall1_482(7408, 776), 2);
    add_background_object(create_dvwalledge1_887(7408, 776), 2);
    add_background_object(create_dvwalledge1_887(7408, 840), 2);
    add_background_object(create_dvwalledge1_887(7408, 904), 2);
    add_background_object(create_dvwall1_482(7408, 584), 2);
    add_background_object(create_dvwalledge1_887(7408, 584), 2);
    add_background_object(create_dvwalledge1_887(7408, 648), 2);
    add_background_object(create_dvwalledge1_887(7408, 712), 2);
    add_background_object(create_dvwall8_877(7720, 2576), 2);
    add_background_object(create_dvwall4_485(7608, 2568), 2);
    add_background_object(create_geyserbase2_987(7944, 3048), 2);
    add_background_object(create_dvrockceiling_891(7624, 2680), 2);
    add_background_object(create_dvwall6_982(7536, 2648), 2);
    add_background_object(create_dvceilingoverlay_915(7624, 2680), 2);
    add_background_object(create_dvwalledge2_978(7648, 2440), 2);
    add_background_object(create_dvwalledge2_978(7648, 2504), 2);
    add_background_object(create_dvwalledge1_887(8040, 2568), 2);
    add_background_object(create_dvwalledge1_887(8040, 2632), 2);
    add_background_object(create_dvwalledge1_887(8040, 2760), 2);
    add_background_object(create_bridgeback3_1022(7968, 2416), 2);
    add_background_object(create_bridgeback_1021(7832, 2416), 2);
    add_background_object(create_levelbackdrop7_917(8032, 2528), 2);
    add_background_object(create_levelbackdrop7_917(7824, 2528), 2);
    add_background_object(create_levelbackdrop7_917(7912, 2440), 2);
    add_background_object(create_levelbackdrop7_917(7944, 2440), 2);
    add_background_object(create_bridgeback3_1022(7992, 2464), 2);
    add_background_object(create_bridgeback_1021(7808, 2464), 2);
    add_background_object(create_bridgeback2_1023(7944, 2464), 2);
    add_background_object(create_bridgeback2_1023(7896, 2464), 2);
    add_background_object(create_dvwall2_886(7664, 2120), 2);
    add_background_object(create_dvwall6_982(7664, 2208), 2);
    add_background_object(create_dvwall4_485(7584, 2296), 2);
    add_background_object(create_dvwalledge2_978(7776, 2120), 2);
    add_background_object(create_dvwalledge2_978(7776, 2184), 2);
    add_background_object(create_dvwalledge2_978(7776, 2248), 2);
    add_background_object(create_dvwall2_886(7664, 1928), 2);
    add_background_object(create_dvwall2_886(7664, 1736), 2);
    add_background_object(create_dvwalledge2_978(7776, 1736), 2);
    add_background_object(create_dvwalledge2_978(7776, 1800), 2);
    add_background_object(create_dvwalledge2_978(7776, 1864), 2);
    add_background_object(create_dvwall2_886(7664, 1544), 2);
    add_background_object(create_dvwalledge2_978(7776, 1544), 2);
    add_background_object(create_dvwalledge2_978(7776, 1608), 2);
    add_background_object(create_dvwalledge2_978(7776, 1672), 2);
    add_background_object(create_dvwall2_886(7664, 1352), 2);
    add_background_object(create_dvwalledge2_978(7776, 1416), 2);
    add_background_object(create_dvwalledge2_978(7776, 1480), 2);
    add_background_object(create_dvwall2_886(7664, 1160), 2);
    add_background_object(create_dvwalledge2_978(7776, 1352), 2);
    add_background_object(create_dvwall2_886(7664, 968), 2);
    add_background_object(create_dvwalledge2_978(7776, 1224), 2);
    add_background_object(create_dvwalledge2_978(7776, 1288), 2);
    add_background_object(create_dvwall2_886(7664, 776), 2);
    add_background_object(create_dvwalledge2_978(7776, 776), 2);
    add_background_object(create_dvwall2_886(7664, 584), 2);
    add_background_object(create_dvwalledge2_978(7776, 584), 2);
    add_background_object(create_dvwalledge2_978(7776, 648), 2);
    add_background_object(create_dvwalledge2_978(7776, 712), 2);
    add_background_object(create_dvwall1_482(8296, 2504), 2);
    add_background_object(create_dvwall6_982(8184, 2568), 2);
    add_background_object(create_dvwalledge1_887(8296, 2504), 2);
    add_background_object(create_dvwalledge1_887(8040, 2696), 2);
    add_background_object(create_dvverticalbridge_1020(6192, 2080), 2);
    add_background_object(create_dvverticalbridge_1020(6272, 2080), 2);
    add_background_object(create_dvverticalbridge_1020(6192, 2112), 2);
    add_background_object(create_dvverticalbridge_1020(6272, 2112), 2);
    add_background_object(create_dvverticalbridge_1020(6272, 2144), 2);
    add_background_object(create_dvverticalbridge_1020(6192, 2144), 2);
    add_background_object(create_dvwall3_873(8424, 2120), 2);
    add_background_object(create_dvwall3_873(8424, 2312), 2);
    add_background_object(create_dvwalledge1_887(8424, 2248), 2);
    add_background_object(create_dvwalledge1_887(8424, 2184), 2);
    add_background_object(create_dvwalledge1_887(8424, 2120), 2);
    add_background_object(create_dvladder_914(8384, 2112), 2);
    add_background_object(create_dvladder_914(8384, 2144), 2);
    add_background_object(create_dvladder_914(8384, 2176), 2);
    add_background_object(create_dvladder_914(8384, 2208), 2);
    add_background_object(create_dvrockedge1_905(8424, 2112), 2);
    add_background_object(create_switchbase_986(9224, 248), 2);
    add_background_object(create_dvwall3_873(8424, 1792), 2);
    add_background_object(create_dvwall1_482(8296, 1600), 2);
    add_background_object(create_dvwall9_889(8296, 1856), 2);
    add_background_object(create_levelbackdrop02_875(8296, 1792), 2);
    add_background_object(create_levelbackdrop02_875(8360, 1792), 2);
    add_background_object(create_dvwall6_982(8384, 1776), 2);
    add_background_object(create_dvwall4_485(8392, 1856), 2);
    add_background_object(create_dvwall6_982(8432, 2216), 2);
    add_background_object(create_dvwalledge1_887(8424, 2440), 2);
    add_background_object(create_dvwalledge1_887(8424, 2376), 2);
    add_background_object(create_dvwalledge1_887(8424, 2312), 2);
    add_background_object(create_dvladder_914(8384, 2240), 2);
    add_background_object(create_dvwall4_485(8296, 1752), 2);
    add_background_object(create_dvrockedge1_905(736, 1200), 2);
    add_background_object(create_dvrockslope4_900(768, 1192), 2);
    add_background_object(create_dvrockslope4_900(1024, 1192), 2);
    add_background_object(create_dvrockslope4_901(1152, 1192), 2);
    add_background_object(create_dvrockedge2_904(1280, 1200), 2);
    add_background_object(create_dvrockedge1_905(1256, 1264), 2);
    add_background_object(create_dvrockslope1_896(1288, 1264), 2);
    add_background_object(create_dvrockedge2_904(1352, 1264), 2);
    add_background_object(create_dvrockedge1_905(5440, 1304), 2);
    add_background_object(create_dvrockslope4_900(5472, 1296), 2);
    add_background_object(create_dvrockslope1_896(5600, 1296), 2);
    add_background_object(create_dvwalledge2_978(6192, 1368), 2);
    add_background_object(create_dvrockedge1_905(6176, 1416), 2);
    add_background_object(create_dvwalledge1_887(8296, 1600), 2);
    add_background_object(create_dvwalledge1_887(8296, 1664), 2);
    add_background_object(create_dvwalledge1_887(8296, 1728), 2);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 2);
    add_background_object(create_dvwall1_482(8552, 1600), 2);
    add_background_object(create_dvwall6_982(8528, 2136), 2);
    add_background_object(create_dvrockslope4_901(8456, 2112), 2);
    add_background_object(create_dvrockslope4_901(8584, 2120), 2);
    add_background_object(create_dvwall4_485(8568, 2272), 2);
    add_background_object(create_dvwall4_485(8680, 2240), 2);
    add_background_object(create_dvwall1_482(8552, 2504), 2);
    add_background_object(create_dvrockslope4_900(8392, 1576), 2);
    add_background_object(create_dvrockslope1_896(8328, 1584), 2);
    add_background_object(create_dvwall1_482(8552, 2696), 2);
    add_background_object(create_dvwall1_482(8552, 1408), 2);
    add_background_object(create_dvrockedge1_905(8296, 1584), 2);
    add_background_object(create_dvwalledge1_887(8544, 1536), 2);
    add_background_object(create_dvwalledge1_887(8544, 1480), 2);
    add_background_object(create_dvwalledge1_887(8544, 1416), 2);
    add_background_object(create_dvrockedge2_904(8520, 1576), 2);
    add_background_object(create_dvwalledge2_978(8792, 1408), 2);
    add_background_object(create_dvwalledge2_978(8792, 1472), 2);
    add_background_object(create_dvwalledge2_978(8792, 1536), 2);
    add_background_object(create_dvwall1_482(8552, 1024), 2);
    add_background_object(create_dvwall1_482(8296, 1024), 2);
    add_background_object(create_dvrockceiling_891(8296, 1200), 2);
    add_background_object(create_dvwalledge2_978(8792, 1088), 2);
    add_background_object(create_dvwalledge2_978(8792, 1152), 2);
    add_background_object(create_dvwalledge2_978(8792, 1024), 2);
    add_background_object(create_dvwall1_482(8040, 1024), 2);
    add_background_object(create_dvwall1_482(7784, 1024), 2);
    add_background_object(create_dvwall4_485(7720, 1088), 2);
    add_background_object(create_dvrockceiling_891(8168, 1200), 2);
    add_background_object(create_dvrockceiling_891(8040, 1200), 2);
    add_background_object(create_dvrockceiling_891(7912, 1200), 2);
    add_background_object(create_dvrockceiling_891(7784, 1200), 2);
    add_background_object(create_dvwall1_482(8552, 1216), 2);
    add_background_object(create_dvwalledge1_887(8544, 1352), 2);
    add_background_object(create_dvwalledge1_887(8544, 1296), 2);
    add_background_object(create_dvwalledge1_887(8544, 1232), 2);
    add_background_object(create_dvwalledge1_887(8544, 1216), 2);
    add_background_object(create_dvrockceiling_891(8424, 1200), 2);
    add_background_object(create_dvwalledge2_978(8792, 1280), 2);
    add_background_object(create_dvwalledge2_978(8792, 1344), 2);
    add_background_object(create_dvwalledge2_978(8792, 1216), 2);
    add_background_object(create_dvwall1_482(8552, 832), 2);
    add_background_object(create_dvwall1_482(8296, 832), 2);
    add_background_object(create_dvwall1_482(8040, 832), 2);
    add_background_object(create_dvwall1_482(7784, 832), 2);
    add_background_object(create_dvwalledge2_978(8792, 896), 2);
    add_background_object(create_dvwalledge2_978(8792, 960), 2);
    add_background_object(create_dvwalledge2_978(8792, 832), 2);
    add_background_object(create_levelbackdrop9_878(8552, 1920), 2);
    add_background_object(create_dvwall4_485(8464, 1848), 2);
    add_background_object(create_dvrockedge2_904(8712, 2128), 2);
    add_background_object(create_dvwall1_482(8808, 2144), 2);
    add_background_object(create_dvwall1_482(8808, 2336), 2);
    add_background_object(create_dvwall4_485(8736, 2344), 2);
    add_background_object(create_dvrockceiling_891(8608, 1776), 2);
    add_background_object(create_dvrockceiling_891(8680, 1776), 2);
    add_background_object(create_dvwall1_482(8808, 1600), 2);
    add_background_object(create_dvwall1_482(9064, 1600), 2);
    add_background_object(create_dvrockceiling_891(8808, 1776), 2);
    add_background_object(create_dvrockceiling_891(8936, 1776), 2);
    add_background_object(create_dvrockedge1_905(8808, 1584), 2);
    add_background_object(create_dvrockslope2_910(8840, 1584), 2);
    add_background_object(create_dvrockslope1_896(8968, 1584), 2);
    add_background_object(create_dvrockedge2_904(9288, 1584), 2);
    add_background_object(create_dvrockslope2_910(9032, 1584), 2);
    add_background_object(create_dvrockslope2_910(9160, 1584), 2);
    add_background_object(create_dvrockceiling_891(9064, 1776), 2);
    add_background_object(create_dvrockceiling_891(9192, 1776), 2);
    add_background_object(create_levelbackdrop02_875(8744, 2080), 2);
    add_background_object(create_dvwalledge1_887(8744, 2080), 2);
    add_background_object(create_levelbackdrop02_875(8808, 2080), 2);
    add_background_object(create_dvwall4_485(8744, 2112), 2);
    add_background_object(create_dvwalledge1_887(8936, 2000), 2);
    add_background_object(create_dvwalledge1_887(8936, 2064), 2);
    add_background_object(create_dvwall6_982(8832, 2112), 2);
    add_background_object(create_dvwall4_485(8928, 2080), 2);
    add_background_object(create_dvwall1_482(9128, 1928), 2);
    add_background_object(create_dvwall1_482(9064, 2144), 2);
    add_background_object(create_dvwall1_482(9064, 2336), 2);
    add_background_object(create_dvwall1_482(9064, 2000), 2);
    add_background_object(create_dvwall4_485(9008, 2000), 2);
    add_background_object(create_dvrockslope4_901(9288, 1920), 2);
    add_background_object(create_dvrockslope4_901(9160, 1912), 2);
    add_background_object(create_dvwall4_485(9000, 2104), 2);
    add_background_object(create_dvwall4_485(9128, 1952), 2);
    add_background_object(create_dvwall6_982(9224, 1968), 2);
    add_background_object(create_dvwalledge1_887(9128, 1928), 2);
    add_background_object(create_dvrockedge1_905(9128, 1912), 2);
    add_background_object(create_dvladder_914(8384, 2272), 2);
    add_background_object(create_dvwall1_482(3680, 856), 2);
    add_background_object(create_dvwall1_482(3680, 664), 2);
    add_background_object(create_dvwall1_482(3424, 856), 2);
    add_background_object(create_dvwall1_482(3424, 664), 2);
    add_background_object(create_dvwall1_482(3168, 856), 2);
    add_background_object(create_dvwall1_482(3168, 664), 2);
    add_background_object(create_dvwall1_482(2912, 856), 2);
    add_background_object(create_dvwall1_482(2912, 664), 2);
    add_background_object(create_dvwall1_482(2656, 856), 2);
    add_background_object(create_dvwall1_482(2656, 664), 2);
    add_background_object(create_dvwall1_482(2400, 856), 2);
    add_background_object(create_dvwall1_482(2400, 664), 2);
    add_background_object(create_dvwall1_482(2144, 856), 2);
    add_background_object(create_dvwall1_482(2144, 664), 2);
    add_background_object(create_dvwall1_482(1888, 856), 2);
    add_background_object(create_dvwall1_482(1888, 664), 2);
    add_background_object(create_dvwall1_482(1632, 856), 2);
    add_background_object(create_dvwall1_482(1632, 664), 2);
    add_background_object(create_dvwall1_482(1376, 856), 2);
    add_background_object(create_dvwall1_482(1376, 664), 2);
    add_background_object(create_dvwall1_482(1120, 856), 2);
    add_background_object(create_dvwall1_482(1120, 664), 2);
    add_background_object(create_dvwall1_482(864, 856), 2);
    add_background_object(create_dvwall1_482(864, 664), 2);
    add_background_object(create_dvwall1_482(608, 856), 2);
    add_background_object(create_dvwall1_482(608, 664), 2);
    add_background_object(create_dvwall1_482(352, 856), 2);
    add_background_object(create_dvwall1_482(352, 664), 2);
    add_background_object(create_dvwall1_482(96, 856), 2);
    add_background_object(create_dvwall1_482(96, 664), 2);
    add_background_object(create_dvwall4_485(0, 944), 2);
    add_background_object(create_dvwall4_485(32, 840), 2);
    add_background_object(create_dvwalledge2_978(240, 1272), 2);
    add_background_object(create_dvwalledge2_978(240, 1208), 2);
    add_background_object(create_dvrockceiling_891(256, 1032), 2);
    add_background_object(create_dvrockceiling_891(384, 1032), 2);
    add_background_object(create_dvrockceiling_891(512, 1032), 2);
    add_background_object(create_dvrockceiling_891(640, 1032), 2);
    add_background_object(create_dvrockceiling_891(768, 1032), 2);
    add_background_object(create_dvrockceiling_891(896, 1032), 2);
    add_background_object(create_dvrockceiling_891(1024, 1032), 2);
    add_background_object(create_dvrockceiling_891(1152, 1032), 2);
    add_background_object(create_dvrockceiling_891(1280, 1032), 2);
    add_background_object(create_dvrockceiling_891(1408, 1032), 2);
    add_background_object(create_dvrockceiling_891(1536, 1032), 2);
    add_background_object(create_dvrockceiling_891(1664, 1032), 2);
    add_background_object(create_dvrockceiling_891(1792, 1032), 2);
    add_background_object(create_dvrockceiling_891(1920, 1032), 2);
    add_background_object(create_dvrockceiling_891(2048, 1032), 2);
    add_background_object(create_dvrockceiling_891(2176, 1032), 2);
    add_background_object(create_dvrockceiling_891(2304, 1032), 2);
    add_background_object(create_dvrockceiling_891(2432, 1032), 2);
    add_background_object(create_dvrockceiling_891(2560, 1032), 2);
    add_background_object(create_dvrockceiling_891(2688, 1032), 2);
    add_background_object(create_dvrockceiling_891(2816, 1032), 2);
    add_background_object(create_dvrockceiling_891(2944, 1032), 2);
    add_background_object(create_dvrockceiling_891(3072, 1032), 2);
    add_background_object(create_dvrockceiling_891(3200, 1032), 2);
    add_background_object(create_dvrockceiling_891(3328, 1032), 2);
    add_background_object(create_dvrockceiling_891(3456, 1032), 2);
    add_background_object(create_dvrockceiling_891(3584, 1032), 2);
    add_background_object(create_dvrockceiling_891(3712, 1032), 2);
    add_background_object(create_dvrockceiling_891(3816, 1032), 2);
    add_background_object(create_dvrockceiling_891(5440, 1680), 2);
    add_background_object(create_dvceilingoverlay_915(5440, 1680), 2);
    add_background_object(create_dvrockceiling_891(5568, 1680), 2);
    add_background_object(create_dvceilingoverlay_915(5568, 1680), 2);
    add_background_object(create_dvwall1_482(7072, 1624), 2);
    add_background_object(create_levelbackdrop02_875(7328, 1752), 2);
    add_background_object(create_levelbackdrop02_875(7328, 1688), 2);
    add_background_object(create_levelbackdrop02_875(7344, 1624), 2);
    add_background_object(create_dvwall4_485(7272, 1624), 2);
    add_background_object(create_levelbackdrop02_875(7344, 1752), 2);
    add_background_object(create_dvwall6_982(7344, 1648), 2);
    add_background_object(create_dvwall4_485(7280, 1688), 2);
    add_background_object(create_dvrockceiling_891(7072, 1800), 2);
    add_background_object(create_dvceilingoverlay_915(7072, 1800), 2);
    add_background_object(create_dvrockceiling_891(7200, 1800), 2);
    add_background_object(create_dvceilingoverlay_915(7200, 1800), 2);
    add_background_object(create_dvrockceiling_891(7280, 1800), 2);
    add_background_object(create_dvceilingoverlay_915(7280, 1800), 2);
    add_background_object(create_dvrockedge1_905(7072, 1616), 2);
    add_background_object(create_dvrockslope4_900(7096, 1608), 2);
    add_background_object(create_dvrockslope4_901(7256, 1608), 2);
    add_background_object(create_dvrockedge2_904(7376, 1616), 2);
    add_background_object(create_dvrockslope1_896(7208, 1608), 2);
    add_background_object(create_dvwall8_877(7792, 1992), 2);
    add_background_object(create_levelbackdrop02_875(7792, 1928), 2);
    add_background_object(create_levelbackdrop02_875(7856, 1928), 2);
    add_background_object(create_dvwalledge2_978(7904, 1928), 2);
    add_background_object(create_dvrockedge2_904(7888, 1912), 2);
    add_background_object(create_dvwall6_982(7736, 1920), 2);
    add_background_object(create_dvrockedge1_905(7792, 1912), 2);
    add_background_object(create_dvrockslope1_896(7824, 1912), 2);
    add_background_object(create_dvwall4_485(7688, 1992), 2);
    add_background_object(create_dvwall4_485(112, 984), 2);
    add_background_object(create_dvwalledge2_978(240, 1048), 2);
    add_background_object(create_dvwalledge2_978(240, 1080), 2);
    add_background_object(create_dvwalledge2_978(240, 1144), 2);
    add_background_object(create_dvrockceiling_891(128, 1576), 2);
    add_background_object(create_dvceilingoverlay_915(128, 1576), 2);
    add_background_object(create_dvwall9_889(616, 1272), 2);
    add_background_object(create_dvwalledge1_887(744, 1400), 2);
    add_background_object(create_dvrockedge1_905(616, 1256), 2);
    add_background_object(create_levelbackdrop02_875(896, 1144), 2);
    add_background_object(create_levelbackdrop02_875(960, 1144), 2);
    add_background_object(create_levelbackdrop02_875(896, 1080), 2);
    add_background_object(create_levelbackdrop02_875(960, 1080), 2);
    add_background_object(create_levelbackdrop02_875(896, 1016), 2);
    add_background_object(create_levelbackdrop02_875(960, 1016), 2);
    add_background_object(create_dvwall4_485(896, 928), 2);
    add_background_object(create_dvwall4_485(896, 1104), 2);
    add_background_object(create_dvwall6_982(896, 1024), 2);
    add_background_object(create_dvwalledge1_887(896, 1040), 2);
    add_background_object(create_dvwalledge1_887(896, 1104), 2);
    add_background_object(create_dvwalledge1_887(896, 1152), 2);
    add_background_object(create_dvwalledge2_978(1008, 1048), 2);
    add_background_object(create_dvwalledge2_978(1008, 1112), 2);
    add_background_object(create_dvwalledge2_978(1008, 1160), 2);
    add_background_object(create_dvceilingoverlay2_916(7792, 2088), 2);
    add_background_object(create_dvceilingoverlay2_916(680, 1368), 2);
    add_background_object(create_dvrockedge1_905(352, 1776), 2);
    add_background_object(create_dvrockedge2_904(384, 1776), 2);
    add_background_object(create_dvrockedge1_905(4872, 1888), 2);
    add_background_object(create_dvrockedge2_904(4904, 1888), 2);
    add_background_object(create_dvrockedge1_905(5376, 1832), 2);
    add_background_object(create_dvrockedge2_904(5408, 1832), 2);
    add_background_object(create_dvrockedge1_905(5104, 2104), 2);
    add_background_object(create_dvrockedge2_904(5136, 2104), 2);
    add_background_object(create_levelbackdrop02_875(6944, 2008), 2);
    add_background_object(create_levelbackdrop9_878(6944, 2072), 2);
    add_background_object(create_dvwall4_485(6872, 1992), 2);
    add_background_object(create_dvwall4_485(7376, 1864), 2);
    add_background_object(create_dvwall4_485(7368, 1760), 2);
    add_background_object(create_dvsapling_971(672, 1696), 2);
    add_background_object(create_dvsapling_971(688, 1176), 2);
    add_background_object(create_dvsapling_971(1448, 2608), 2);
    add_background_object(create_dvsapling_971(8192, 2472), 2);
    add_background_object(create_dvladder_914(3040, 2576), 2);
    add_background_object(create_dvladder_914(3040, 2608), 2);
    add_background_object(create_dvladder_914(3040, 2640), 2);
    add_background_object(create_dvladder_914(3040, 2656), 2);
    add_background_object(create_dvceilingoverlay2_916(1792, 2864), 2);
    add_background_object(create_dvceilingoverlay2_916(1808, 2896), 2);
    add_background_object(create_dvceilingoverlay2_916(1824, 2928), 2);
    add_background_object(create_dvceilingoverlay2_916(1856, 2952), 2);
    add_background_object(create_dvceilingoverlay2_916(2504, 2968), 2);
    add_background_object(create_dvceilingoverlay2_916(2560, 2944), 2);
    add_background_object(create_dvceilingoverlay2_916(2576, 2912), 2);
    add_background_object(create_dvrockceiling_891(2176, 2840), 2);
    add_background_object(create_dvceilingoverlay_915(2176, 2840), 2);
    add_background_object(create_dvwalledge1_887(2304, 2848), 2);
    add_background_object(create_dvwalledge1_887(2304, 2912), 2);
    add_background_object(create_dvgrass3_505(-32, 2144), 2);
    add_background_object(create_dvgrass6_1031(96, 2152), 2);
    add_background_object(create_dvgrass2_508(160, 2152), 2);
    add_background_object(create_dvgrass1_507(832, 2344), 2);
    add_background_object(create_dvgrass4_506(864, 2344), 2);
    add_background_object(create_dvgrass2_508(992, 2344), 2);
    add_background_object(create_dvgrass4_506(1144, 2344), 2);
    add_background_object(create_dvgrass2_508(1272, 2344), 2);
    add_background_object(create_dvgrass1_507(1120, 2344), 2);
    add_background_object(create_dvgrass1_507(600, 2688), 2);
    add_background_object(create_dvgrass2_508(888, 2688), 2);
    add_background_object(create_dvgrass3_505(760, 2680), 2);
    add_background_object(create_dvgrass5_509(632, 2680), 2);
    add_background_object(create_dvgrass1_507(1176, 2688), 2);
    add_background_object(create_dvgrass5_509(1208, 2680), 2);
    add_background_object(create_dvgrass3_505(1336, 2680), 2);
    add_background_object(create_dvgrass2_508(1464, 2688), 2);
    add_background_object(create_dvgrass1_507(1704, 2648), 2);
    add_background_object(create_dvgrass6_1031(1736, 2648), 2);
    add_background_object(create_dvgrass2_508(1800, 2648), 2);
    add_background_object(create_dvceilingoverlay_915(1704, 2656), 2);
    add_background_object(create_dvgrass1_507(1936, 2648), 2);
    add_background_object(create_dvgrass6_1031(1968, 2648), 2);
    add_background_object(create_dvgrass2_508(2032, 2648), 2);
    add_background_object(create_dvgrass6_1031(2816, 2120), 2);
    add_background_object(create_dvgrass1_507(2784, 2120), 2);
    add_background_object(create_dvgrass2_508(2880, 2120), 2);
    add_background_object(create_dvgrass2_508(1696, 2144), 2);
    add_background_object(create_dvgrass4_506(1568, 2144), 2);
    add_background_object(create_dvgrass7_922(1440, 2080), 2);
    add_background_object(create_dvgrass6_1031(1376, 2080), 2);
    add_background_object(create_dvgrass1_507(1344, 2080), 2);
    add_background_object(create_dvgrass1_507(1520, 1888), 2);
    add_background_object(create_dvgrass3_505(1552, 1888), 2);
    add_background_object(create_dvgrass5_509(1680, 1888), 2);
    add_background_object(create_dvgrass4_506(1808, 1888), 2);
    add_background_object(create_dvgrass6_1031(1928, 1888), 2);
    add_background_object(create_dvgrass2_508(1984, 1888), 2);
    add_background_object(create_dvgrass1_507(2656, 1744), 2);
    add_background_object(create_dvgrass5_509(2688, 1736), 2);
    add_background_object(create_dvgrass3_505(2816, 1736), 2);
    add_background_object(create_dvgrass5_509(2944, 1736), 2);
    add_background_object(create_dvgrass6_1031(3072, 1736), 2);
    add_background_object(create_dvgrass2_508(3136, 1736), 2);
    add_background_object(create_dvgrass1_507(2528, 1800), 2);
    add_background_object(create_dvgrass6_1031(2560, 1800), 2);
    add_background_object(create_dvgrass2_508(2624, 1800), 2);
    add_background_object(create_dvgrass2_508(3648, 2696), 2);
    add_background_object(create_dvgrass7_922(3520, 2632), 2);
    add_background_object(create_dvgrass6_1031(3456, 2632), 2);
    add_background_object(create_dvgrass1_507(3424, 2632), 2);
    add_background_object(create_dvgrass1_507(3936, 2696), 2);
    add_background_object(create_dvgrass5_509(3968, 2688), 2);
    add_background_object(create_dvgrass5_509(4096, 2680), 2);
    add_background_object(create_dvgrass4_506(4224, 2680), 2);
    add_background_object(create_dvgrass6_1031(4352, 2680), 2);
    add_background_object(create_dvgrass2_508(4416, 2680), 2);
    add_background_object(create_dvgrass1_507(5536, 2264), 2);
    add_background_object(create_dvgrass2_508(5568, 2264), 2);
    add_background_object(create_dvgrass1_507(5696, 2264), 2);
    add_background_object(create_dvgrass4_506(5728, 2264), 2);
    add_background_object(create_dvgrass2_508(5856, 2264), 2);
    add_background_object(create_dvgrass1_507(6080, 2696), 2);
    add_background_object(create_dvgrass5_509(6112, 2688), 2);
    add_background_object(create_dvgrass5_509(6240, 2680), 2);
    add_background_object(create_dvgrass2_508(6368, 2680), 2);
    add_background_object(create_dvgrass2_508(6368, 2328), 2);
    add_background_object(create_dvgrass3_505(6240, 2320), 2);
    add_background_object(create_dvgrass3_505(6112, 2312), 2);
    add_background_object(create_dvgrass1_507(6080, 2312), 2);
    add_background_object(create_dvgrass1_507(6592, 2328), 2);
    add_background_object(create_dvgrass5_509(6624, 2320), 2);
    add_background_object(create_dvgrass2_508(6752, 2320), 2);
    add_background_object(create_dvgrass2_508(7816, 2560), 2);
    add_background_object(create_dvgrass3_505(7688, 2552), 2);
    add_background_object(create_dvgrass1_507(7656, 2552), 2);
    add_background_object(create_dvgrass1_507(8040, 2560), 2);
    add_background_object(create_dvgrass5_509(8072, 2552), 2);
    add_background_object(create_dvgrass6_1031(8200, 2552), 2);
    add_background_object(create_dvgrass2_508(8264, 2552), 2);
    add_background_object(create_dvgrass1_507(8296, 2488), 2);
    add_background_object(create_dvgrass6_1031(8328, 2488), 2);
    add_background_object(create_dvgrass2_508(8392, 2488), 2);
    add_background_object(create_dvgrass1_507(8744, 2072), 2);
    add_background_object(create_dvgrass5_509(8776, 2064), 2);
    add_background_object(create_dvgrass2_508(8904, 2064), 2);
    add_background_object(create_dvgrass2_508(9096, 1992), 2);
    add_background_object(create_dvgrass3_505(8968, 1984), 2);
    add_background_object(create_dvgrass1_507(8936, 1984), 2);
    add_background_object(create_dvladder_914(1384, 1264), 2);
    add_background_object(create_dvladder_914(1384, 1296), 2);
    add_background_object(create_dvladder_914(1384, 1328), 2);
    add_background_object(create_dvladder_914(1384, 1360), 2);
    add_background_object(create_dvladder_914(1384, 1392), 2);
    add_background_object(create_dvladder_914(1384, 1424), 2);
    add_background_object(create_dvwall4_485(704, 1272), 2);
    add_background_object(create_dvrockedge2_904(712, 1256), 2);
    add_background_object(create_dvrockslope1_896(648, 1256), 2);
    add_background_object(create_dvwall6_982(712, 2040), 2);
    add_background_object(create_dvwall4_485(2616, 1824), 2);
    add_background_object(create_dvgrass5_509(1424, 1864), 2);
    add_background_object(create_dvgrass1_507(1392, 1872), 2);
    add_background_object(create_dvgrass2_508(1552, 1864), 2);
    add_background_object(create_dvrockedge1_905(7112, 2288), 2);
    add_background_object(create_dvceilingoverlay_915(3168, 2504), 2);
    add_background_object(create_dvwalledge2_978(6192, 1304), 2);
    add_background_object(create_dvwall1_482(5952, 1120), 2);
    add_background_object(create_dvwalledge2_978(5944, 1120), 2);
    add_background_object(create_dvwalledge2_978(5944, 1184), 2);
    add_background_object(create_dvwalledge2_978(5944, 1248), 2);
    add_background_object(create_dvrockedge2_904(5920, 1296), 2);
    add_background_object(create_dvwall1_482(5952, 928), 2);
    add_background_object(create_dvwall1_482(5696, 928), 2);
    add_background_object(create_dvwall1_482(5952, 736), 2);
    add_background_object(create_dvwall1_482(5696, 736), 2);
    add_background_object(create_dvwall1_482(5952, 544), 2);
    add_background_object(create_dvwall1_482(5696, 544), 2);
    add_background_object(create_dvwall1_482(5952, 352), 2);
    add_background_object(create_dvwall1_482(5696, 352), 2);
    add_background_object(create_dvwall1_482(5952, 160), 2);
    add_background_object(create_dvwall1_482(5696, 160), 2);
    add_background_object(create_dvwall1_482(5952, -32), 2);
    add_background_object(create_dvwall1_482(5696, -32), 2);
    add_background_object(create_dvrockceiling_891(5824, 1104), 2);
    add_background_object(create_dvrockceiling_891(5696, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(5696, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(5824, 1104), 2);
    add_background_object(create_dvwall1_482(5440, 928), 2);
    add_background_object(create_dvwall1_482(5440, 736), 2);
    add_background_object(create_dvwall1_482(5440, 544), 2);
    add_background_object(create_dvwall1_482(5440, 352), 2);
    add_background_object(create_dvwall1_482(5440, 160), 2);
    add_background_object(create_dvwall1_482(5440, -32), 2);
    add_background_object(create_dvrockceiling_891(5568, 1104), 2);
    add_background_object(create_dvrockceiling_891(5440, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(5440, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(5568, 1104), 2);
    add_background_object(create_dvwall1_482(5184, 928), 2);
    add_background_object(create_dvwall1_482(5184, 736), 2);
    add_background_object(create_dvwall1_482(5184, 544), 2);
    add_background_object(create_dvwall1_482(5184, 352), 2);
    add_background_object(create_dvwall1_482(5184, 160), 2);
    add_background_object(create_dvwall1_482(5184, -32), 2);
    add_background_object(create_dvrockceiling_891(5312, 1104), 2);
    add_background_object(create_dvrockceiling_891(5184, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(5184, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(5312, 1104), 2);
    add_background_object(create_dvwall1_482(4928, 928), 2);
    add_background_object(create_dvwall1_482(4928, 736), 2);
    add_background_object(create_dvwall1_482(4928, 544), 2);
    add_background_object(create_dvwall1_482(4928, 352), 2);
    add_background_object(create_dvwall1_482(4928, 160), 2);
    add_background_object(create_dvwall1_482(4928, -32), 2);
    add_background_object(create_dvrockceiling_891(5056, 1104), 2);
    add_background_object(create_dvrockceiling_891(4928, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(4928, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(5056, 1104), 2);
    add_background_object(create_dvwall1_482(4672, 928), 2);
    add_background_object(create_dvwall1_482(4672, 736), 2);
    add_background_object(create_dvwall1_482(4672, 544), 2);
    add_background_object(create_dvwall1_482(4672, 352), 2);
    add_background_object(create_dvwall1_482(4672, 160), 2);
    add_background_object(create_dvwall1_482(4672, -32), 2);
    add_background_object(create_dvrockceiling_891(4800, 1104), 2);
    add_background_object(create_dvrockceiling_891(4672, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(4672, 1104), 2);
    add_background_object(create_dvceilingoverlay_915(4800, 1104), 2);
    add_background_object(create_dvrockslope2_910(5664, 1296), 2);
    add_background_object(create_dvrockslope2_910(5792, 1296), 2);
    add_background_object(create_dvwall1_482(4448, 1240), 2);
    add_background_object(create_dvwall1_482(4448, 1048), 2);
    add_background_object(create_dvwall1_482(4448, 856), 2);
    add_background_object(create_dvwall1_482(4448, 664), 2);
    add_background_object(create_dvwall1_482(4448, 472), 2);
    add_background_object(create_dvwall1_482(4448, 280), 2);
    add_background_object(create_dvwall1_482(4448, 88), 2);
    add_background_object(create_dvrockceiling_891(4576, 1416), 2);
    add_background_object(create_dvrockceiling_891(4448, 1416), 2);
    add_background_object(create_dvceilingoverlay_915(4448, 1416), 2);
    add_background_object(create_dvceilingoverlay_915(4576, 1416), 2);
    add_background_object(create_dvceilingoverlay_915(3168, 2504), 2);
    add_background_object(create_dvwalledge1_887(3168, 2448), 2);
    add_background_object(create_dvrockceiling_891(3168, 2504), 2);
    add_background_object(create_dvrockedge1_905(3168, 2704), 2);
    add_background_object(create_dvrockslope2_910(3200, 2704), 2);
    add_background_object(create_dvwall2_886(4704, 2856), 2);
    add_background_object(create_dvrockslope2_910(-240, -176), 2);
    add_background_object(create_dvrockslope2_910(-112, -176), 2);
    add_object(create_objectpetal_302(6761, 2657), 2);
    add_object(create_objectpetal_302(6865, 2657), 2);
    add_object(create_objectpetal_302(6897, 2657), 2);
    add_object(create_objectpetal_302(6985, 2657), 2);
    add_object(create_objectpetal_302(7017, 2657), 2);
    add_object(create_objectpetal_302(7073, 2657), 2);
    add_object(create_objectjumppad_530(5664, 1712), 2);
    add_object(create_objectjumppad_530(5408, 1864), 2);
    add_object(create_objectjumppad_530(5136, 2104), 2);
    add_object(create_objectjumppad_530(4904, 1920), 2);
    add_object(create_objectjumppad_530(4736, 2104), 2);
    add_object(create_objectjumppad_530(384, 1776), 2);
    add_object(create_objectjumppad_530(128, 1704), 2);
    add_object(create_objectjumppad_530(776, 1064), 2);
    add_object(create_objectjumppad_530(520, 1064), 2);
    add_object(create_objectjumppad_530(256, 1328), 2);
    add_object(create_objectjumppad_530(744, 1528), 2);
    add_object(create_objectjumppad_530(680, 1776), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(9616, 373), 2);
    add_object(create_playerstartingpoint_358(21, 2125), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_levelfloatingplatform_1032(1008, -152), 2);
    add_object(create_bosssnakebody_995(3748, -180), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_halfcorkscrewleft_941(1624, 2455), 2);
    add_object(create_halfcorkscrewright_942(2152, 2455), 2);
    add_object(create_layerchangeswitch_404(1728, 2368), 2);
    add_object(create_layerchangeswitch_404(2032, 2368), 2);
    add_object(create_levelballtunnel1_1033(768, 2296), 2);
    add_object(create_levelgeyserplate_998(248, 2727), 2);
    add_object(create_bossserpentinehead_948(3780, -184), 2);
    add_object(create_bosssnakehitbox_999(3836, -136), 2);
    add_object(create_cameratriggerboss_424(9064, 168), 2);
    add_object(create_gimmickbridge12logs_353(192, 2096), 2);
    add_object(create_treetrunk_1034(991, 2343), 2);
    add_object(create_yellowspringup_434(192, 2464), 2);
    add_object(create_yellowspringupleft_432(632, 2888), 2);
    add_object(create_enemylimiter_350(541, 2802), 2);
    add_object(create_enemysporepod_1005(527, 2854), 2);
    add_object(create_yellowspringup_434(272, 2328), 2);
    add_object(create_halfcorkscrewleft_941(1624, 2143), 2);
    add_object(create_halfcorkscrewright_942(2152, 2143), 2);
    add_object(create_layerchangeswitch_404(1728, 2056), 2);
    add_object(create_layerchangeswitch_404(2032, 2056), 2);
    add_object(create_enemydragonfly_944(2391, 2044), 2);
    add_object(create_enemyturretus_938(1359, 2304), 2);
    add_object(create_yellowspringupleft_432(2880, 2088), 2);
    add_object(create_enemydragonfly_944(2623, 2020), 2);
    add_object(create_levelvalleyplatform1_939(2144, 1832), 2);
    add_object(create_objectcrystal_279(1069, 2386), 2);
    add_object(create_objectcrystal_279(1069, 2434), 2);
    add_object(create_objectcrystal_279(1069, 2482), 2);
    add_object(create_objectcrystal_279(2733, 2018), 2);
    add_object(create_objectcrystal_279(2701, 2018), 2);
    add_object(create_objectcrystal_279(2669, 2018), 2);
    add_object(create_enemycacteon_990(760, 2673), 2);
    add_object(create_enemycacteon_990(2776, 1729), 2);
    add_object(create_enemycacteon_990(2864, 1729), 2);
    add_object(create_objectpetal_302(1785, 1801), 2);
    add_object(create_objectpetal_302(1697, 1769), 2);
    add_object(create_objectpetal_302(1553, 1777), 2);
    add_object(create_objectpetal_302(1497, 1785), 2);
    add_object(create_yellowspringup_434(1952, 2632), 2);
    add_object(create_yellowspringup_434(1984, 2632), 2);
    add_object(create_yellowspringup_434(2016, 2632), 2);
    add_object(create_objectpetal_302(1969, 2601), 2);
    add_object(create_objectpetal_302(2001, 2601), 2);
    add_object(create_objectpetal_302(2033, 2601), 2);
    add_object(create_objectpetal_302(1033, 2297), 2);
    add_object(create_objectpetal_302(1113, 2297), 2);
    add_object(create_objectpetal_302(1073, 2297), 2);
    add_object(create_levelfloatingplatform_1032(168, 2056), 2);
    add_object(create_levelfloatingplatform_1032(264, 2056), 2);
    add_object(create_levelfloatingplatform_1032(216, 2008), 2);
    add_object(create_waterfallfront2_1035(3200, 1800), 2);
    add_object(create_waterfallfront2_1035(3264, 1800), 2);
    add_object(create_waterfallfront2_1035(3328, 1800), 2);
    add_object(create_waterfallfront2_1035(3392, 1800), 2);
    add_object(create_waterfallfront2_1035(224, 2248), 2);
    add_object(create_waterfallfront2_1035(288, 2248), 2);
    add_object(create_waterfallfront2_1035(352, 2248), 2);
    add_object(create_bubblepatch_806(1607, 2887), 2);
    add_object(create_waterfallfront3_1036(3200, 2159), 2);
    add_object(create_waterfallfront3_1036(3264, 2159), 2);
    add_object(create_waterfallfront3_1036(3328, 2159), 2);
    add_object(create_waterfallfront3_1036(3392, 2159), 2);
    add_object(create_yellowspringup_434(1792, 2632), 2);
    add_object(create_yellowspringup_434(1760, 2632), 2);
    add_object(create_waterfalllog_1013(3296, 1800), 2);
    add_object(create_waterfallfront2_1035(3712, 1672), 2);
    add_object(create_waterfallfront2_1035(3776, 1672), 2);
    add_object(create_waterfallfront2_1035(3840, 1672), 2);
    add_object(create_waterfallfront2_1035(3904, 1672), 2);
    add_object(create_objectcodec_354(1977, 2916), 2);
    add_object(create_objectcrystal_279(1941, 2890), 2);
    add_object(create_objectcrystal_279(1941, 2938), 2);
    add_object(create_objectcrystal_279(2013, 2938), 2);
    add_object(create_objectcrystal_279(2013, 2890), 2);
    add_object(create_bubblepatch_806(2671, 3079), 2);
    add_object(create_levelgeyserplate_998(3096, 3127), 2);
    add_object(create_levelvalleyplatform1_939(2912, 2136), 2);
    add_object(create_breakablerock_951(2416, 3040), 2);
    add_object(create_breakablerock_951(2384, 3040), 2);
    add_object(create_laddertop_357(3060, 2471), 2);
    add_object(create_levelgeyserplate_998(2976, 2439), 2);
    add_object(create_waterfallloggenerator_1037(3296, 1779), 2);
    add_object(create_waterfallloggenerator_1037(3808, 1651), 2);
    add_object(create_waterfalllog_1013(3360, 1928), 2);
    add_object(create_waterfalllog_1013(3232, 2056), 2);
    add_object(create_waterfalllog_1013(3808, 1672), 2);
    add_object(create_waterfalllog_1013(3872, 1800), 2);
    add_object(create_waterfalllog_1013(3744, 1928), 2);
    add_object(create_waterfalllog_1013(3808, 2056), 2);
    add_object(create_waterfalllog_1013(3872, 2184), 2);
    add_object(create_waterfalllog_1013(3744, 2312), 2);
    add_object(create_waterfallfront3_1036(3712, 2799), 2);
    add_object(create_waterfallfront3_1036(3776, 2799), 2);
    add_object(create_waterfallfront3_1036(3840, 2799), 2);
    add_object(create_waterfallfront3_1036(3904, 2799), 2);
    add_object(create_monitorrings_407(3328, 2576), 2);
    add_object(create_treefront_1038(3320, 2528), 2);
    add_object(create_objectcrystal_279(3573, 1594), 2);
    add_object(create_objectcrystal_279(3613, 1594), 2);
    add_object(create_objectcrystal_279(3653, 1594), 2);
    add_object(create_waterfallfront2_1035(4224, 2152), 2);
    add_object(create_waterfallfront2_1035(4288, 2152), 2);
    add_object(create_waterfallfront2_1035(4352, 2152), 2);
    add_object(create_waterfallfront2_1035(4416, 2152), 2);
    add_object(create_waterfallloggenerator_1037(4320, 2131), 2);
    add_object(create_waterfalllog_1013(4320, 2152), 2);
    add_object(create_waterfalllog_1013(4384, 2280), 2);
    add_object(create_waterfalllog_1013(4256, 2408), 2);
    add_object(create_gimmickhangingidlesensor_740(4265, 1976), 2);
    add_object(create_treetrunk_1034(5623, -33), 2);
    add_object(create_treetrunk_1034(1855, 1887), 2);
    add_object(create_levelvalleyplatform1_939(2344, 1808), 2);
    add_object(create_objectcodec_354(5921, 2172), 2);
    add_object(create_enemystarflounder_1006(1499, 2836), 2);
    add_object(create_enemystarflounder_1006(1955, 3020), 2);
    add_object(create_enemystarflounder_1006(2059, 2916), 2);
    add_object(create_enemystarflounder_1006(2667, 3028), 2);
    add_object(create_enemystarflounder_1006(1995, 3044), 2);
    add_object(create_enemystarflounder_1006(2651, 3044), 2);
    add_object(create_enemystarflounder_1006(2075, 3036), 2);
    add_object(create_enemystarflounder_1006(3403, 2956), 2);
    add_object(create_enemystarflounder_1006(3787, 2748), 2);
    add_object(create_gimmickbridge12logs_353(6400, 2624), 2);
    add_object(create_enemystarflounder_1006(5931, 2740), 2);
    add_object(create_objectcrystal_279(5893, 2570), 2);
    add_object(create_objectcrystal_279(5933, 2554), 2);
    add_object(create_objectcrystal_279(5981, 2554), 2);
    add_object(create_objectcrystal_279(6021, 2570), 2);
    add_object(create_yellowspringupleft_432(6056, 2744), 2);
    add_object(create_objectcrystal_279(4469, 2082), 2);
    add_object(create_objectcrystal_279(4749, 2082), 2);
    add_object(create_objectcrystal_279(4693, 2082), 2);
    add_object(create_objectcrystal_279(4525, 2082), 2);
    add_object(create_objectcrystal_279(4581, 2074), 2);
    add_object(create_objectcrystal_279(4637, 2074), 2);
    add_object(create_laddertop_357(7324, 2319), 2);
    add_object(create_enemycacteon_990(7376, 2537), 2);
    add_object(create_enemycacteon_990(7312, 2601), 2);
    add_object(create_minibosstreddright2_1039(6816, 2616), 2);
    add_object(create_minibosstreddright4_1040(6784, 2584), 2);
    add_object(create_minibosstreddright6_1041(6785, 2567), 2);
    add_object(create_minibosstreddright5_1042(6801, 2575), 2);
    add_object(create_minibosstreddright3_1043(6816, 2640), 2);
    add_object(create_minibosstredd_1044(6768, 2576), 2);
    add_object(create_minibosstreddright1_1045(6816, 2577), 2);
    add_object(create_minibosstreddleft6_1046(6753, 2567), 2);
    add_object(create_minibosstreddleft4_1047(6752, 2584), 2);
    add_object(create_minibosstreddleft5_1048(6737, 2575), 2);
    add_object(create_minibosstreddleft2_1049(6720, 2616), 2);
    add_object(create_minibosstreddleft3_1050(6720, 2640), 2);
    add_object(create_minibosstreddleft1_1051(6720, 2577), 2);
    add_object(create_objectpetal_302(4041, 1561), 2);
    add_object(create_objectpetal_302(4009, 1529), 2);
    add_object(create_objectpetal_302(3977, 1561), 2);
    add_object(create_breakablerock_951(6744, 2640), 2);
    add_object(create_breakablerock_951(6848, 2640), 2);
    add_object(create_breakablerock_951(6880, 2640), 2);
    add_object(create_breakablerock_951(7000, 2640), 2);
    add_object(create_breakablerock_951(7056, 2640), 2);
    add_object(create_breakablerock_951(6968, 2640), 2);
    add_object(create_enemydragonfly_944(6359, 2588), 2);
    add_object(create_gimmickbridge12logs_353(6400, 2272), 2);
    add_object(create_gimmickhangingidlesensor_740(6945, 2160), 2);
    add_object(create_objectcrystal_279(7053, 2210), 2);
    add_object(create_objectcrystal_279(7005, 2194), 2);
    add_object(create_objectcrystal_279(6845, 2170), 2);
    add_object(create_objectcrystal_279(6805, 2178), 2);
    add_object(create_gimmickboulder_1052(6240, 2136), 2);
    add_object(create_enemyturretus_938(6231, 2296), 2);
    add_object(create_breakablerock_951(6280, 1832), 2);
    add_object(create_objectcrystal_279(6229, 1930), 2);
    add_object(create_objectcrystal_279(6253, 1930), 2);
    add_object(create_objectcrystal_279(6229, 1954), 2);
    add_object(create_objectcrystal_279(6253, 1954), 2);
    add_object(create_objectcrystal_279(6229, 1978), 2);
    add_object(create_objectcrystal_279(6253, 1978), 2);
    add_object(create_objectcrystal_279(6229, 1906), 2);
    add_object(create_objectcrystal_279(6253, 1906), 2);
    add_object(create_objectcrystal_279(6229, 1882), 2);
    add_object(create_objectcrystal_279(6253, 1882), 2);
    add_object(create_monitor1up_410(6576, 1904), 2);
    add_object(create_objectpetal_302(7385, 2433), 2);
    add_object(create_objectpetal_302(7385, 2393), 2);
    add_object(create_objectpetal_302(7385, 2353), 2);
    add_object(create_breakablerock_951(6312, 1832), 2);
    add_object(create_switchwallplate_1053(6088, 2264), 2);
    add_object(create_switchtrapdoor_1054(6200, 2168), 2);
    add_object(create_bubblepatch_806(6255, 3071), 2);
    add_object(create_enemystarflounder_1006(6667, 2956), 2);
    add_object(create_enemystarflounder_1006(6635, 3012), 2);
    add_object(create_enemystarflounder_1006(7627, 2948), 2);
    add_object(create_enemystarflounder_1006(7539, 2972), 2);
    add_object(create_enemystarflounder_1006(7587, 3004), 2);
    add_object(create_objectcrystal_279(6845, 2962), 2);
    add_object(create_objectcrystal_279(6877, 2994), 2);
    add_object(create_objectcrystal_279(6909, 3026), 2);
    add_object(create_objectcrystal_279(7109, 3042), 2);
    add_object(create_objectcrystal_279(7141, 3018), 2);
    add_object(create_objectcrystal_279(7173, 2986), 2);
    add_object(create_objectcrystal_279(7413, 2962), 2);
    add_object(create_objectcrystal_279(7445, 2994), 2);
    add_object(create_objectcrystal_279(7477, 3026), 2);
    add_object(create_levelgeyserplate_998(7976, 3047), 2);
    add_object(create_gimmickbridge12logs_353(7848, 2504), 2);
    add_object(create_levelfloatingplatform_1032(7824, 2464), 2);
    add_object(create_levelfloatingplatform_1032(7920, 2464), 2);
    add_object(create_levelfloatingplatform_1032(7848, 2416), 2);
    add_object(create_levelfloatingplatform_1032(7896, 2416), 2);
    add_object(create_levelfloatingplatform_1032(7872, 2368), 2);
    add_object(create_laddertop_357(8404, 2135), 2);
    add_object(create_switchpressureplate_752(9224, 248), 2);
    add_object(create_switchdoor_1055(9288, 136), 2);
    add_object(create_monitorrings_407(7928, 2341), 2);
    add_object(create_objectcodec_354(3497, 2052), 2);
    add_object(create_playerinput_19(-440, 176), 2);
    add_object(create_masterinput_20(-464, 176), 2);
    add_object(create_inputsp1_21(-416, 176), 2);
    add_object(create_globalinputdata_22(-392, 176), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 328), 2);
    add_object(create_shieldwood_313(-140, 340), 2);
    add_object(create_shieldmagnetic_317(-124, 348), 2);
    add_object(create_shieldwater_318(-76, 348), 2);
    add_object(create_shieldflamefront_316(-68, 340), 2);
    add_object(create_monitorfireshield_328(8376, 1552), 2);
    add_object(create_objectpetal_302(8521, 1561), 2);
    add_object(create_objectpetal_302(8489, 1561), 2);
    add_object(create_objectpetal_302(8457, 1561), 2);
    add_object(create_objectcrystal_279(221, 2130), 2);
    add_object(create_objectcrystal_279(357, 2130), 2);
    add_object(create_objectcrystal_279(325, 2130), 2);
    add_object(create_objectcrystal_279(253, 2130), 2);
    add_object(create_gimmickbamboospike3_1056(8848, 2012), 2);
    add_object(create_gimmickbamboospike2_1057(8848, 2016), 2);
    add_object(create_gimmickbamboospike4_1058(8848, 1960), 2);
    add_object(create_gimmickbamboospike3_1056(9040, 1932), 2);
    add_object(create_gimmickbamboospike2_1057(9040, 1936), 2);
    add_object(create_gimmickbamboospike4_1058(9040, 1880), 2);
    add_object(create_gimmickbamboospike3_1056(8512, 2060), 2);
    add_object(create_gimmickbamboospike2_1057(8512, 2064), 2);
    add_object(create_gimmickbamboospike4_1058(8512, 2008), 2);
    add_object(create_yellowspringup_434(8392, 2472), 2);
    add_object(create_objectcrystal_279(8725, 2082), 2);
    add_object(create_objectcrystal_279(8701, 2082), 2);
    add_object(create_objectcrystal_279(8701, 2114), 2);
    add_object(create_objectcrystal_279(8725, 2114), 2);
    add_object(create_monitorearthshield_326(712, 1224), 2);
    add_object(create_objectpetal_302(5673, 1737), 2);
    add_object(create_objectpetal_302(5649, 1737), 2);
    add_object(create_objectpetal_302(5673, 1761), 2);
    add_object(create_objectpetal_302(5649, 1761), 2);
    add_object(create_objectjumppad_530(7344, 1952), 2);
    add_object(create_objectjumppad_530(7072, 1952), 2);
    add_object(create_objectpetal_302(5673, 1785), 2);
    add_object(create_objectpetal_302(5649, 1785), 2);
    add_object(create_objectcrystal_279(7213, 1954), 2);
    add_object(create_objectcrystal_279(7189, 1930), 2);
    add_object(create_objectcrystal_279(7237, 1930), 2);
    add_object(create_objectcrystal_279(7165, 1954), 2);
    add_object(create_objectcrystal_279(7261, 1954), 2);
    add_object(create_objectcrystal_279(7189, 1978), 2);
    add_object(create_objectcrystal_279(7237, 1978), 2);
    add_object(create_objectjumppad_530(7408, 2200), 2);
    add_object(create_monitorcrystals_324(7792, 1880), 2);
    add_object(create_monitorkeystone_562(3904, 1256), 2);
    add_object(create_monitorearthshield_326(1024, 1168), 2);
    add_object(create_objectcrystal_279(621, 1170), 2);
    add_object(create_objectcrystal_279(597, 1234), 2);
    add_object(create_objectcrystal_279(605, 1202), 2);
    add_object(create_objectcrystal_279(597, 1274), 2);
    add_object(create_objectcrystal_279(605, 1306), 2);
    add_object(create_objectcrystal_279(621, 1338), 2);
    add_object(create_objectcrystal_279(1045, 1082), 2);
    add_object(create_objectcrystal_279(1085, 1082), 2);
    add_object(create_objectcrystal_279(1125, 1082), 2);
    add_object(create_objectcrystal_279(373, 1642), 2);
    add_object(create_objectcrystal_279(397, 1642), 2);
    add_object(create_objectcodec_354(529, 2892), 2);
    add_object(create_laddertop_357(1404, 1287), 2);
    add_object(create_objectcrystal_279(7901, 2450), 2);
    add_object(create_objectcrystal_279(7989, 2450), 2);
    add_object(create_objectcrystal_279(7877, 2450), 2);
    add_object(create_objectcrystal_279(8013, 2450), 2);
    add_object(create_objectpetal_302(4265, 2001), 2);
    add_object(create_objectpetal_302(1585, 1825), 2);
    add_object(create_objectpetal_302(1649, 1785), 2);
    add_object(create_objectpetal_302(1681, 1809), 2);
    add_object(create_objectcrystal_279(2421, 2306), 2);
    add_object(create_objectcrystal_279(2469, 2298), 2);
    add_object(create_objectcrystal_279(2517, 2298), 2);
    add_object(create_objectcrystal_279(2565, 2298), 2);
    add_object(create_objectcrystal_279(5621, 2290), 2);
    add_object(create_objectcrystal_279(5621, 2322), 2);
    add_object(create_objectcrystal_279(141, 1938), 2);
    add_object(create_objectcrystal_279(141, 1970), 2);
    add_object(create_objectcrystal_279(7965, 3034), 2);
    add_object(create_objectcrystal_279(7989, 3034), 2);
    add_object(create_monitorwatershield_327(64, 2696), 2);
    add_object(create_monitorkeystone_562(4448, 1768), 2);
    add_object(create_monitorearthshield_326(5624, 1264), 2);
    add_object(create_monitorwoodshield_325(5704, 1264), 2);
    add_object(create_monitorwatershield_327(5784, 1264), 2);
    add_object(create_monitorfireshield_328(5864, 1264), 2);
    add_object(create_pushableblock2_1012(-208, -177), 2);
    add_object(create_objectfuel_528(884, 1180), 2);
    add_object(create_monitorkeystone_562(272, 1981), 2);
    add_object(create_enemytreddpushleft2_1059(6696, 2584), 2);
    add_object(create_enemytreddpushleft_1060(7136, 2584), 2);
    add_object(create_objecttaostone_532(3379, 2962), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_mapdata_30(-432, 232), 2);
    add_object(create_mapdata2_32(-432, 240), 2);
    add_background_object(create_dvwall3_873(1824, 2200), 3);
    add_background_object(create_dvwall3_873(1824, 2008), 3);
    add_background_object(create_levelbackdrop02_875(1824, 1960), 3);
    add_background_object(create_levelbackdrop02_875(1888, 1960), 3);
    add_background_object(create_dvwall6_982(1824, 1944), 3);
    add_background_object(create_dvwalledge1_887(1824, 2328), 3);
    add_background_object(create_dvwalledge1_887(1824, 2264), 3);
    add_background_object(create_dvwalledge1_887(1824, 2200), 3);
    add_background_object(create_dvwalledge1_887(1824, 2136), 3);
    add_background_object(create_dvwalledge1_887(1824, 2072), 3);
    add_background_object(create_dvwalledge1_887(1824, 2008), 3);
    add_background_object(create_dvwalledge2_978(1936, 2328), 3);
    add_background_object(create_dvwalledge2_978(1936, 2264), 3);
    add_background_object(create_dvwalledge2_978(1936, 2200), 3);
    add_background_object(create_dvwalledge2_978(1936, 2136), 3);
    add_background_object(create_dvwalledge2_978(1936, 2072), 3);
    add_background_object(create_dvwalledge2_978(1936, 2008), 3);
    add_background_object(create_dvwalledge1_887(1824, 1944), 3);
    add_background_object(create_dvwalledge2_978(1936, 1944), 3);
    add_background_object(create_dvwall1_482(3168, 2136), 3);
    add_background_object(create_dvrockslope4_900(3192, 2112), 3);
    add_background_object(create_dvrockedge1_905(3160, 2120), 3);
    add_background_object(create_dvrockslope4_901(3320, 2112), 3);
    add_background_object(create_dvwall1_482(3680, 2800), 3);
    add_background_object(create_dvwall1_482(3680, 2904), 3);
    add_background_object(create_dvwall4_485(3872, 2792), 3);
    add_background_object(create_dvwall4_485(3632, 2800), 3);
    add_background_object(create_dvrockslope1_896(3840, 2776), 3);
    add_background_object(create_dvrockslope4_900(3712, 2776), 3);
    add_background_object(create_dvrockedge2_904(3904, 2776), 3);
    add_background_object(create_dvrockedge1_905(3680, 2784), 3);
    add_background_object(create_dvwall1_482(4192, 2704), 3);
    add_background_object(create_dvwall1_482(4192, 2896), 3);
    add_background_object(create_dvwall4_485(4408, 2688), 3);
    add_background_object(create_dvwall6_982(4400, 2800), 3);
    add_background_object(create_dvwalledge1_887(4448, 2640), 3);
    add_background_object(create_dvrockceiling_891(6632, 2864), 3);
    add_background_object(create_dvrockceiling_891(6760, 2864), 3);
    add_background_object(create_dvrockceiling_891(6888, 2864), 3);
    add_background_object(create_dvrockceiling_891(7016, 2864), 3);
    add_background_object(create_dvrockceiling_891(7144, 2864), 3);
    add_background_object(create_dvrockceiling_891(7272, 2864), 3);
    add_background_object(create_dvrockceiling_891(7400, 2864), 3);
    add_background_object(create_dvrockslope4_900(6248, 3064), 3);
    add_background_object(create_dvrockedge1_905(6216, 3072), 3);
    add_background_object(create_dvrockslope4_901(6376, 3064), 3);
    add_background_object(create_dvrockslope4_900(6504, 3064), 3);
    add_background_object(create_dvrockedge2_904(6632, 3064), 3);
    add_background_object(create_dvrockceiling_891(8424, 1960), 3);
    add_background_object(create_dvrockedge1_905(8680, 2192), 3);
    add_background_object(create_dvrockslope4_901(9224, 1984), 3);
    add_background_object(create_dvrockedge1_905(8472, 2248), 3);
    add_background_object(create_dvrockedge2_904(8632, 2240), 3);
    add_background_object(create_dvtree4_874(8384, 2080), 3);
    add_background_object(create_dvrockslope4_900(8504, 2240), 3);
    add_background_object(create_dvtree2_883(9184, 1816), 3);
    add_background_object(create_dvbackrock2_890(8824, 2096), 3);
    add_background_object(create_dvtree2_883(8888, 2008), 3);
    add_background_object(create_dvwall4_485(9048, 2112), 3);
    add_background_object(create_dvwall4_485(9016, 2144), 3);
    add_background_object(create_dvrockslope10_911(8968, 2080), 3);
    add_background_object(create_dvrockslope6_913(9096, 1984), 3);
    add_background_object(create_dvtree5_879(8760, 2136), 3);
    add_background_object(create_dvrockslope4_900(8840, 2176), 3);
    add_background_object(create_dvrockslope4_900(8712, 2184), 3);
    add_background_object(create_dvrockceiling_891(6632, 2856), 3);
    add_background_object(create_dvrockceiling_891(6696, 2856), 3);
    add_background_object(create_dvrockceiling_891(6824, 2856), 3);
    add_background_object(create_dvrockceiling_891(6952, 2856), 3);
    add_background_object(create_dvrockceiling_891(7080, 2856), 3);
    add_background_object(create_dvrockceiling_891(7208, 2856), 3);
    add_background_object(create_dvrockceiling_891(7464, 2856), 3);
    add_background_object(create_dvgrass5_509(4096, 2680), 3);
    add_background_object(create_dvgrass4_506(4224, 2680), 3);
    add_background_object(create_dvgrass6_1031(4352, 2680), 3);
    add_background_object(create_dvgrass2_508(4416, 2680), 3);
    add_background_object(create_dvrockceiling_891(7336, 2856), 3);
    add_background_object(create_dvwall3_873(1824, 2392), 3);
    add_background_object(create_dvwalledge1_887(1824, 2456), 3);
    add_background_object(create_dvwalledge1_887(1824, 2392), 3);
    add_background_object(create_dvwalledge2_978(1936, 2456), 3);
    add_background_object(create_dvwalledge2_978(1936, 2392), 3);
    add_background_object(create_dvwalledge2_978(1936, 2520), 3);
    add_background_object(create_dvwalledge1_887(1824, 2520), 3);
    add_object(create_waterfallfront_1061(224, 2264), 3);
    add_object(create_waterfallfront_1061(288, 2264), 3);
    add_object(create_waterfallfront_1061(352, 2264), 3);
    add_object(create_waterfallfront_1061(224, 2360), 3);
    add_object(create_waterfallfront_1061(288, 2360), 3);
    add_object(create_waterfallfront_1061(352, 2360), 3);
    add_object(create_waterfallfront_1061(224, 2456), 3);
    add_object(create_waterfallfront_1061(288, 2456), 3);
    add_object(create_waterfallfront_1061(352, 2456), 3);
    add_object(create_waterfallfront_1061(224, 2552), 3);
    add_object(create_waterfallfront_1061(288, 2552), 3);
    add_object(create_waterfallfront_1061(352, 2552), 3);
    add_object(create_waterfallfront_1061(224, 2648), 3);
    add_object(create_waterfallfront_1061(288, 2648), 3);
    add_object(create_waterfallfront_1061(352, 2648), 3);
    add_object(create_waterfallfront_1061(3200, 1816), 3);
    add_object(create_waterfallfront_1061(3264, 1816), 3);
    add_object(create_waterfallfront_1061(3328, 1816), 3);
    add_object(create_waterfallfront_1061(3392, 1816), 3);
    add_object(create_waterfallfront_1061(3200, 1912), 3);
    add_object(create_waterfallfront_1061(3264, 1912), 3);
    add_object(create_waterfallfront_1061(3328, 1912), 3);
    add_object(create_waterfallfront_1061(3392, 1912), 3);
    add_object(create_waterfallfront_1061(3200, 2008), 3);
    add_object(create_waterfallfront_1061(3264, 2008), 3);
    add_object(create_waterfallfront_1061(3328, 2008), 3);
    add_object(create_waterfallfront_1061(3392, 2008), 3);
    add_object(create_waterfallfront_1061(3200, 2104), 3);
    add_object(create_waterfallfront_1061(3264, 2104), 3);
    add_object(create_waterfallfront_1061(3328, 2104), 3);
    add_object(create_waterfallfront_1061(3392, 2104), 3);
    add_object(create_waterfallfront_1061(3200, 2200), 3);
    add_object(create_waterfallfront_1061(3264, 2200), 3);
    add_object(create_waterfallfront_1061(3328, 2200), 3);
    add_object(create_waterfallfront_1061(3392, 2200), 3);
    add_object(create_waterfallfront_1061(3200, 2272), 3);
    add_object(create_waterfallfront_1061(3264, 2272), 3);
    add_object(create_waterfallfront_1061(3328, 2272), 3);
    add_object(create_waterfallfront_1061(3392, 2272), 3);
    add_object(create_waterfallfront_1061(3712, 1784), 3);
    add_object(create_waterfallfront_1061(3776, 1784), 3);
    add_object(create_waterfallfront_1061(3840, 1784), 3);
    add_object(create_waterfallfront_1061(3904, 1784), 3);
    add_object(create_waterfallfront_1061(3712, 1880), 3);
    add_object(create_waterfallfront_1061(3776, 1880), 3);
    add_object(create_waterfallfront_1061(3840, 1880), 3);
    add_object(create_waterfallfront_1061(3904, 1880), 3);
    add_object(create_waterfallfront_1061(3712, 1976), 3);
    add_object(create_waterfallfront_1061(3776, 1976), 3);
    add_object(create_waterfallfront_1061(3840, 1976), 3);
    add_object(create_waterfallfront_1061(3904, 1976), 3);
    add_object(create_waterfallfront_1061(3712, 2072), 3);
    add_object(create_waterfallfront_1061(3776, 2072), 3);
    add_object(create_waterfallfront_1061(3840, 2072), 3);
    add_object(create_waterfallfront_1061(3904, 2072), 3);
    add_object(create_waterfallfront_1061(3712, 2168), 3);
    add_object(create_waterfallfront_1061(3776, 2168), 3);
    add_object(create_waterfallfront_1061(3840, 2168), 3);
    add_object(create_waterfallfront_1061(3904, 2168), 3);
    add_object(create_waterfallfront_1061(3712, 2264), 3);
    add_object(create_waterfallfront_1061(3776, 2264), 3);
    add_object(create_waterfallfront_1061(3840, 2264), 3);
    add_object(create_waterfallfront_1061(3904, 2264), 3);
    add_object(create_waterfallfront_1061(3712, 1688), 3);
    add_object(create_waterfallfront_1061(3776, 1688), 3);
    add_object(create_waterfallfront_1061(3840, 1688), 3);
    add_object(create_waterfallfront_1061(3904, 1688), 3);
    add_object(create_waterfallfront_1061(3712, 2360), 3);
    add_object(create_waterfallfront_1061(3776, 2360), 3);
    add_object(create_waterfallfront_1061(3840, 2360), 3);
    add_object(create_waterfallfront_1061(3904, 2360), 3);
    add_object(create_waterfallfront_1061(3712, 2456), 3);
    add_object(create_waterfallfront_1061(3776, 2456), 3);
    add_object(create_waterfallfront_1061(3840, 2456), 3);
    add_object(create_waterfallfront_1061(3904, 2456), 3);
    add_object(create_waterfallfront_1061(3712, 2552), 3);
    add_object(create_waterfallfront_1061(3776, 2552), 3);
    add_object(create_waterfallfront_1061(3840, 2552), 3);
    add_object(create_waterfallfront_1061(3904, 2552), 3);
    add_object(create_waterfallfront_1061(3712, 2648), 3);
    add_object(create_waterfallfront_1061(3776, 2648), 3);
    add_object(create_waterfallfront_1061(3840, 2648), 3);
    add_object(create_waterfallfront_1061(3904, 2648), 3);
    add_object(create_waterfallfront_1061(3200, 2368), 3);
    add_object(create_waterfallfront_1061(3264, 2368), 3);
    add_object(create_waterfallfront_1061(3328, 2368), 3);
    add_object(create_waterfallfront_1061(3392, 2368), 3);
    add_object(create_waterfallfront_1061(3200, 2464), 3);
    add_object(create_waterfallfront_1061(3264, 2464), 3);
    add_object(create_waterfallfront_1061(3328, 2464), 3);
    add_object(create_waterfallfront_1061(3392, 2464), 3);
    add_object(create_waterfallfront_1061(3200, 2560), 3);
    add_object(create_waterfallfront_1061(3264, 2560), 3);
    add_object(create_waterfallfront_1061(3328, 2560), 3);
    add_object(create_waterfallfront_1061(3392, 2560), 3);
    add_object(create_waterfallfront_1061(3200, 2656), 3);
    add_object(create_waterfallfront_1061(3264, 2656), 3);
    add_object(create_waterfallfront_1061(3328, 2656), 3);
    add_object(create_waterfallfront_1061(3392, 2656), 3);
    add_object(create_waterfallfront_1061(4224, 2552), 3);
    add_object(create_waterfallfront_1061(4288, 2552), 3);
    add_object(create_waterfallfront_1061(4352, 2552), 3);
    add_object(create_waterfallfront_1061(4416, 2552), 3);
    add_object(create_waterfallfront_1061(4224, 2648), 3);
    add_object(create_waterfallfront_1061(4288, 2648), 3);
    add_object(create_waterfallfront_1061(4352, 2648), 3);
    add_object(create_waterfallfront_1061(4416, 2648), 3);
    add_object(create_waterfallfront_1061(4224, 2360), 3);
    add_object(create_waterfallfront_1061(4288, 2360), 3);
    add_object(create_waterfallfront_1061(4352, 2360), 3);
    add_object(create_waterfallfront_1061(4416, 2360), 3);
    add_object(create_waterfallfront_1061(4224, 2456), 3);
    add_object(create_waterfallfront_1061(4288, 2456), 3);
    add_object(create_waterfallfront_1061(4352, 2456), 3);
    add_object(create_waterfallfront_1061(4416, 2456), 3);
    add_object(create_waterfallfront_1061(4224, 2168), 3);
    add_object(create_waterfallfront_1061(4288, 2168), 3);
    add_object(create_waterfallfront_1061(4352, 2168), 3);
    add_object(create_waterfallfront_1061(4416, 2168), 3);
    add_object(create_waterfallfront_1061(4224, 2264), 3);
    add_object(create_waterfallfront_1061(4288, 2264), 3);
    add_object(create_waterfallfront_1061(4352, 2264), 3);
    add_object(create_waterfallfront_1061(4416, 2264), 3);
    add_object(create_waterfallfront4_1062(4160, 2680), 3);
    add_object(create_waterfallfront4_1062(4368, 2680), 3);
    add_object(create_waterfallfront4_1062(4224, 2680), 3);
    add_object(create_waterfallfront4_1062(4296, 2680), 3);
    add_object(create_waterfallfront4_1062(3648, 2680), 3);
    add_object(create_waterfallfront4_1062(3856, 2680), 3);
    add_object(create_waterfallfront4_1062(3712, 2680), 3);
    add_object(create_waterfallfront4_1062(3784, 2680), 3);
    add_object(create_waterfallfront4_1062(3136, 2680), 3);
    add_object(create_waterfallfront4_1062(3344, 2680), 3);
    add_object(create_waterfallfront4_1062(3200, 2680), 3);
    add_object(create_waterfallfront4_1062(3272, 2680), 3);
    add_object(create_waterfallfront4_1062(168, 2680), 3);
    add_object(create_waterfallfront4_1062(304, 2680), 3);
    add_object(create_waterfallfront4_1062(240, 2680), 3);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_background_object(create_dvwall1_482(4448, -104), 5);
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
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_950(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_gimmickbridgelog_412(-40, -168), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-584, 384), 5);
    add_object(create_generalwaterhorizon_415(-584, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(9056, 383), 5);
    add_object(create_cameralimitbossleft_421(9016, 256), 5);
    add_object(create_cameralimitbossright_422(9127, 256), 5);
    add_object(create_cameralimitbosstop_423(9072, 128), 5);
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
    add_object(create_bubblepatch_806(-544, 95), 5);
    add_object(create_mediumbubble_769(-518, 82), 5);
    add_object(create_bigbubble_428(-496, 80), 5);
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
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 216), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_1008(-152, -88), 5);
    add_object(create_queuemusic_1009(-112, -88), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiair_759(-16, 96), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(256, -48), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(308, 19), 6);
    add_object(create_guitimermilli2_361(298, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(240, -48), 6);
    add_object(create_guikeystone_455(224, -48), 6);
    add_object(create_guikeystone_455(208, -48), 6);
    add_object(create_guikeystone_455(192, -48), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_background_object(create_dvwall1_482(7840, 192), 7);
    add_background_object(create_dvwall3_873(8096, 256), 7);
    add_background_object(create_dvwall3_873(8096, 64), 7);
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
    loop_cacteon_floor_running = false;
    loop_cacteon_floor_index = 0;
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
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
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
    loop_waterfall_snake_running = false;
    loop_waterfall_snake_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_waterfalllog_running = false;
    loop_waterfalllog_index = 0;
    loop_gimmik_bridge12_rightside_running = false;
    loop_gimmik_bridge12_rightside_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
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
    loop_trunk_running = false;
    loop_trunk_index = 0;
    loop_cacteon_running = false;
    loop_cacteon_index = 0;
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
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
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
    loop_sporepod_running = false;
    loop_sporepod_index = 0;
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
    loop_gimmik_bridge12_leftside_running = false;
    loop_gimmik_bridge12_leftside_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_22, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_22, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_22, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_22, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_22, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_22, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_22, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_22, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_22, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_22, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_22, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_22, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_22, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_22, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_22, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_22, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_22, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_22, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_22, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_22, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_22, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_22, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_22, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_22, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_22, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_22, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_22, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_22, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_22, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_22, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_22, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_22, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_22, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_22, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_22, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_22, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_22, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_22, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_22, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_22, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_22, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_22, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_22, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_22, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_22, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_22, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_22, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_22, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_22, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_22, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_22, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_22, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_22, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_22, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1 = false;
    not_always_44_13 = loop_count;
    not_always_1506_22 = loop_count;
    not_always_1809_22 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1432_20 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    group_main_engine_interface_and_post_processing_methods_event_camera_system_1 = false;
    not_always_1411_21 = loop_count;
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
    not_always_1434_20 = loop_count;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    once_condition_1503_22 = false;
    not_always_100_0 = loop_count;
    not_always_1425_22 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_1424_22 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1433_20 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_1414_22 = loop_count;
    not_always_1502_16 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1513_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_1735_22 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1416_22 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1412_22 = loop_count;
    not_always_172_8 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1436_20 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_1505_16 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1423_22 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1504_16 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    not_always_45_13 = loop_count;
    not_always_168_0 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
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
    not_always_1643_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    not_always_1417_22 = loop_count;
    not_always_1420_22 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    not_always_1413_22 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_1422_22 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    not_always_1421_22 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1506_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    once_condition_1495_22 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    not_always_121_0 = loop_count;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1516_16 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1515_16 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    not_always_1455_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1503_16 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_96_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1412_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1435_20 = loop_count;
    not_always_102_0 = loop_count;
    not_always_1514_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    not_always_1415_22 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_4894()
{
    // event 1627_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1)) goto event_1627_23_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1627_23_end;
        FrameObject * single_instance_1627_23_0; single_instance_1627_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 16, parent->y + 10), parent->layer);
                if (single_instance_1627_23_0 == NULL)
                    single_instance_1627_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1627_23_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1627_23_0))->set_direction(5+loop_spawn_rings_index);
        ((Active*)((Active*)single_instance_1627_23_0))->alterables->values.set(0, 2);
    }
    event_1627_23_end: ;
}
void Frames::loop_spawn_rings_23()
{
    event_func_1157();
    event_func_1158();
    event_func_4894();
}
void Frames::event_func_4895()
{
    // event 1743_23
    {
        if (!(group_main_engine_1)) goto event_1743_23_end;
        next_frame = 22 + 0;    
    
    }
    event_1743_23_end: ;
}
void Frames::loop_death_23()
{
    event_func_4895();
}
void Frames::event_func_4896()
{
    // event 1689_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1689_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (loop_movesnake_index))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1689_23_end;
#ifdef CHOWDREN_WAIT
        clickteam_movement_controller_74(((Active*)get_single(bosssnakebody_995_instances)));
        clickteam_movement_controller_56(20*clickteam_movement_controller_56(((Active*)get_single(bosssnakebody_995_instances, default_active_instance))->get_x(), ((Active*)get_single(bosssnakebody_995_instances, default_active_instance))->get_y(), ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(21), ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(22)));
        clickteam_movement_controller_51(((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(21), ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(22));
#endif
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, ((Active*)get_single(bosssnakebody_995_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(22, ((Active*)get_single(bosssnakebody_995_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1689_23_end: ;
}
void Frames::event_func_4897()
{
    // event 1712_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1712_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (loop_movesnake_index))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1712_23_end;
        bosssnakehitbox_999_instances.clear_selection();
        for (ObjectIterator it(bosssnakehitbox_999_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) < (-8))) { it.deselect(); continue; }
        }
        if (!bosssnakehitbox_999_instances.has_selection()) goto event_1712_23_end;
#ifdef CHOWDREN_WAIT
        clickteam_movement_controller_74(((Active*)get_single(bosssnakebody_995_instances)));
        clickteam_movement_controller_56(40*clickteam_movement_controller_56(((Active*)get_single(bosssnakebody_995_instances, default_active_instance))->get_x(), ((Active*)get_single(bosssnakebody_995_instances, default_active_instance))->get_y(), ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(21), ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(22)));
        clickteam_movement_controller_51(((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(21), ((Active*)get_instance(bossserpentinehead_948_instances, default_active_instance))->alterables->values.get(22));
#endif
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(21, ((Active*)get_single(bosssnakebody_995_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(22, ((Active*)get_single(bosssnakebody_995_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1712_23_end: ;
}
void Frames::loop_movesnake_23()
{
    event_func_4896();
    event_func_4897();
}
void Frames::event_func_4898()
{
    // event 1980_23
    {
        if (!(group_pause_1)) goto event_1980_23_end;
        next_frame = 22 + 0;    
    
    }
    event_1980_23_end: ;
}
void Frames::loop_restart_23()
{
    event_func_4898();
    event_func_86();
    event_func_1171();
}
void Frames::event_func_4899()
{
    // event 1611_23
    {
        if (!(group_main_engine_1)) goto event_1611_23_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1611_23_end: ;
}
void Frames::loop_trigger_deactivate_boss_23()
{
    event_func_4899();
}
void Frames::event_func_4900()
{
    // event 1723_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1723_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (loop_boss_explode_index))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1723_23_end;
        FrameObject * single_instance_1723_23_0; single_instance_1723_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssnakebody_995_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1723_23_0 == NULL)
                    single_instance_1723_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1723_23_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1723_23_0))->force_frame(33);
        ((Active*)((Active*)single_instance_1723_23_0))->alterables->values.set(0, -999);
        ((Active*)((Active*)single_instance_1723_23_0))->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
    }
    event_1723_23_end: ;
}
void Frames::event_func_4901()
{
    // event 1724_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1724_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (loop_boss_explode_index))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1724_23_end;
        FrameObject * single_instance_1724_23_0; single_instance_1724_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssnakebody_995_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1724_23_0 == NULL)
                    single_instance_1724_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1724_23_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1724_23_0))->force_frame(30);
        ((Active*)((Active*)single_instance_1724_23_0))->alterables->values.set(0, -999);
        ((Active*)((Active*)single_instance_1724_23_0))->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
    }
    event_1724_23_end: ;
}
void Frames::event_func_4902()
{
    // event 1725_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1725_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (loop_boss_explode_index))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1725_23_end;
        FrameObject * single_instance_1725_23_0; single_instance_1725_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssnakebody_995_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1725_23_0 == NULL)
                    single_instance_1725_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1725_23_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1725_23_0))->force_frame(31);
        ((Active*)((Active*)single_instance_1725_23_0))->alterables->values.set(0, -999);
        ((Active*)((Active*)single_instance_1725_23_0))->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
    }
    event_1725_23_end: ;
}
void Frames::event_func_4903()
{
    // event 1726_23
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_snake_boss_1 && group_main_engine_level_specific_methods_bosses_snake_boss_snake_flee_1)) goto event_1726_23_end;
        bosssnakebody_995_instances.clear_selection();
        for (ObjectIterator it(bosssnakebody_995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (loop_boss_explode_index))) { it.deselect(); continue; }
        }
        if (!bosssnakebody_995_instances.has_selection()) goto event_1726_23_end;
        FrameObject * single_instance_1726_23_0; single_instance_1726_23_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssnakebody_995_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1726_23_0 == NULL)
                    single_instance_1726_23_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1726_23_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1726_23_0))->force_frame(32);
        FrameObject * single_instance_1726_23_1; single_instance_1726_23_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssnakebody_995_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1726_23_1 == NULL)
                    single_instance_1726_23_1 = new_obj;
            }
        }
        bossserpentinehead_948_instances.clear_selection();
        for (ObjectIterator it(bossserpentinehead_948_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        ((Active*)((Active*)single_instance_1726_23_0))->alterables->values.set(0, -999);
        ((Active*)((Active*)single_instance_1726_23_0))->set_direction(pick_random(15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15));
    }
    event_1726_23_end: ;
}
void Frames::loop_boss_explode_23()
{
    event_func_4900();
    event_func_4901();
    event_func_4902();
    event_func_4903();
}
void Frames::event_func_4904()
{
    // event 1922_23
    {
        if (!(group_main_engine_1)) goto event_1922_23_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_boss_ogg_133, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1922_23_end: ;
}
void Frames::loop_play_music_4_23()
{
    event_func_4904();
}
void Frames::event_func_4905()
{
    // event 1926_23
    {
        if (!(group_main_engine_1)) goto event_1926_23_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_M_GAMEOVER_22, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1926_23_end: ;
}
void Frames::loop_play_music_8_23()
{
    event_func_4905();
}
void Frames::loop_wrapper_sound_hurt1_23(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_23(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_23(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_23(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_23(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_23(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_23(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_23(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_23(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_23(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_23(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_23(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_23(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_23(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_23(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_23(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_23(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_23(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_23(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_23(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_23(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_23(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_23(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_23(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_sound_attack1_23(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_23(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_23(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
