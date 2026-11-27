#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_4066()
{
    // event 1570_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1570_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 99);
            ((Active*)*it)->move_back();
        }
    }
    event_1570_17_end: ;
}
void Frames::event_func_4067()
{
    // event 1571_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1571_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(11)) == (-1))) goto event_1571_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(9, get_max(((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(9)-0.1, -4));
    }
    event_1571_17_end: ;
}
void Frames::event_func_4068()
{
    // event 1572_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1572_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(11)) == (1))) goto event_1572_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(9, get_min(((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(9)+0.1, 4));
    }
    event_1572_17_end: ;
}
void Frames::event_func_4069()
{
    // event 1573_17
    bool or_result_1573_17 = false;
    bool or_temp_result_1573_17_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto or_event_1573_17_0_end;
        minibosschomper_802_instances.clear_selection();
        for (ObjectIterator it(minibosschomper_802_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)*it)->alterables->values.get(10)-((Active*)*it)->alterables->values.get(12)))) { it.deselect(); continue; }
        }
        if (!minibosschomper_802_instances.has_selection()) goto or_event_1573_17_0_end;
        or_result_1573_17 = true;
        or_temp_result_1573_17_0 = true;
    }
    or_event_1573_17_0_end: ;
    minibosschomper_802_instances.clear_saved_selection();
    if (or_temp_result_1573_17_0) {
        minibosschomper_802_instances.save_selection();
    }
    // event 1573_17
    bool or_temp_result_1573_17_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto or_event_1573_17_1_end;
        minibosschomper_802_instances.clear_selection();
        for (ObjectIterator it(minibosschomper_802_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)*it)->alterables->values.get(10)+((Active*)*it)->alterables->values.get(12)))) { it.deselect(); continue; }
        }
        if (!minibosschomper_802_instances.has_selection()) goto or_event_1573_17_1_end;
        or_result_1573_17 = true;
        or_temp_result_1573_17_1 = true;
        or_event_1573_17_1_end: ;
        if (or_temp_result_1573_17_1) {
            minibosschomper_802_instances.save_selection();
        }
        if (!or_result_1573_17) goto or_final_or_event_1573_17_1_end;
        minibosschomper_802_instances.empty_selection();
        if (or_temp_result_1573_17_0 || or_temp_result_1573_17_1) {
            minibosschomper_802_instances.restore_selection();
        }
        for (ObjectIterator it(minibosschomper_802_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0-((Active*)*it)->alterables->values.get(11));
        }
    }
    or_final_or_event_1573_17_1_end: ;
}
void Frames::event_func_4070()
{
    // event 1574_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1574_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (0))) goto event_1574_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.add(8, 1);
    }
    event_1574_17_end: ;
}
void Frames::event_func_4071()
{
    // event 1575_17
    bool or_result_1575_17 = false;
    bool or_temp_result_1575_17_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto or_event_1575_17_0_end;
        minibosschomper_802_instances.clear_selection();
        for (ObjectIterator it(minibosschomper_802_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (120))) { it.deselect(); continue; }
        }
        if (!minibosschomper_802_instances.has_selection()) goto or_event_1575_17_0_end;
        or_result_1575_17 = true;
        or_temp_result_1575_17_0 = true;
    }
    or_event_1575_17_0_end: ;
    minibosschomper_802_instances.clear_saved_selection();
    if (or_temp_result_1575_17_0) {
        minibosschomper_802_instances.save_selection();
    }
    // event 1575_17
    bool or_temp_result_1575_17_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto or_event_1575_17_1_end;
        minibosschomper_802_instances.clear_selection();
        for (ObjectIterator it(minibosschomper_802_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (180))) { it.deselect(); continue; }
        }
        if (!minibosschomper_802_instances.has_selection()) goto or_event_1575_17_1_end;
        or_result_1575_17 = true;
        or_temp_result_1575_17_1 = true;
        or_event_1575_17_1_end: ;
        if (or_temp_result_1575_17_1) {
            minibosschomper_802_instances.save_selection();
        }
        if (!or_result_1575_17) goto or_final_or_event_1575_17_1_end;
        minibosschomper_802_instances.empty_selection();
        if (or_temp_result_1575_17_0 || or_temp_result_1575_17_1) {
            minibosschomper_802_instances.restore_selection();
        }
        for (ObjectIterator it(minibosschomper_802_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+1)%math_helper%2);
        }
    }
    or_final_or_event_1575_17_1_end: ;
}
void Frames::event_func_4072()
{
    // event 1576_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1576_17_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1576_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (0))) goto event_1576_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(0)) < (30))) goto event_1576_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(6)) == (1))) goto event_1576_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(8)) > (30))) goto event_1576_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(8)) < (90))) goto event_1576_17_end;
        FrameObject * single_instance_1576_17_0; single_instance_1576_17_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(minibosschomper_802_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossacid_658(parent->x + -42, parent->y + 3), parent->layer);
                if (single_instance_1576_17_0 == NULL)
                    single_instance_1576_17_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1576_17_0))->set_x(((Active*)single_instance_1576_17_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_1576_17_0))->set_y(((Active*)single_instance_1576_17_0)->get_y()-8+randrange(17));
        ((Active*)((Active*)single_instance_1576_17_0))->alterables->values.set(0, (-30-randrange(30))*0.1+((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(9));
        ((Active*)((Active*)single_instance_1576_17_0))->alterables->values.set(1, -2);
    }
    event_1576_17_end: ;
}
void Frames::event_func_4073()
{
    // event 1577_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1577_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (-0.6))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1577_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.2+get_abs(((Active*)*it)->alterables->values.get(6))*0.01, 8));
        }
    }
    event_1577_17_end: ;
}
void Frames::event_func_4074()
{
    // event 1578_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1578_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0.6))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1578_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.2-get_abs(((Active*)*it)->alterables->values.get(6))*0.01, -8));
        }
    }
    event_1578_17_end: ;
}
void Frames::event_func_4075()
{
    // event 1579_17
    bool or_result_1579_17 = false;
    bool or_temp_result_1579_17_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto or_event_1579_17_0_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto or_event_1579_17_0_end;
        or_result_1579_17 = true;
        or_temp_result_1579_17_0 = true;
    }
    or_event_1579_17_0_end: ;
    minibosschomperball_811_instances.clear_saved_selection();
    if (or_temp_result_1579_17_0) {
        minibosschomperball_811_instances.save_selection();
    }
    // event 1579_17
    bool or_temp_result_1579_17_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto or_event_1579_17_1_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto or_event_1579_17_1_end;
        or_result_1579_17 = true;
        or_temp_result_1579_17_1 = true;
        or_event_1579_17_1_end: ;
        if (or_temp_result_1579_17_1) {
            minibosschomperball_811_instances.save_selection();
        }
        if (!or_result_1579_17) goto or_final_or_event_1579_17_1_end;
        minibosschomperball_811_instances.empty_selection();
        if (or_temp_result_1579_17_0 || or_temp_result_1579_17_1) {
            minibosschomperball_811_instances.restore_selection();
        }
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(7)*0.9);
        }
    }
    or_final_or_event_1579_17_1_end: ;
}
void Frames::event_func_4076()
{
    // event 1580_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1580_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) < (-0.6))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1580_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+0.2+get_abs(((Active*)*it)->alterables->values.get(8))*0.01, 12));
        }
    }
    event_1580_17_end: ;
}
void Frames::event_func_4077()
{
    // event 1581_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1581_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.6))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1581_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.2-get_abs(((Active*)*it)->alterables->values.get(8))*0.01, -12));
        }
    }
    event_1581_17_end: ;
}
void Frames::event_func_4078()
{
    // event 1582_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1582_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (0))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1582_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->alterables->values.get(9)*0.9);
        }
    }
    event_1582_17_end: ;
}
void Frames::event_func_4079()
{
    // event 1583_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1583_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (-0.1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0.1))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1583_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1583_17_end: ;
}
void Frames::event_func_4080()
{
    // event 1584_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1584_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (-0.1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (0.1))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1584_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1584_17_end: ;
}
void Frames::event_func_4081()
{
    // event 1585_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1585_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(8, ((Active*)*it)->alterables->values.get(9));
        }
    }
    event_1585_17_end: ;
}
void Frames::event_func_4082()
{
    // event 1586_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1586_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) != (0))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1586_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, ((Active*)*it)->alterables->values.get(23)*4);
            ((Active*)*it)->alterables->values.set(23, 0);
        }
    }
    event_1586_17_end: ;
}
void Frames::event_func_4083()
{
    // event 1587_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1)) goto event_1587_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) != (0))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1587_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, ((Active*)*it)->alterables->values.get(24)*2);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
    }
    event_1587_17_end: ;
}
void Frames::event_func_4084()
{
    // event 1588_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1588_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->set_x(((Active*)get_instance(minibosschomper_802_instances))->get_x()+((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(9));
        ((Active*)get_instance(minibosschomper_802_instances))->set_y(((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(4)+sin_deg(((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(5))*8);
        minibosschompertail_810_instances.clear_selection();
        for (ObjectIterator it(minibosschompertail_810_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosschomperball_811_instances, it.current_index, default_active_instance))->alterables->values.get(4)+cos_deg(((Active*)*it)->alterables->values.get(0)*12-((Active*)get_instance(minibosschomperball_811_instances, it.current_index, default_active_instance))->alterables->values.get(6)*0.5)*((Active*)get_instance(minibosschomperball_811_instances, it.current_index, default_active_instance))->alterables->values.get(3)*0.5);
            ((Active*)*it)->set_y(((Active*)get_instance(minibosschomperball_811_instances, it.current_index, default_active_instance))->get_y()-16-((Active*)get_instance(minibosschomperball_811_instances, it.current_index, default_active_instance))->alterables->values.get(6)*0.5-sin_deg(((Active*)*it)->alterables->values.get(0)*12-((Active*)get_instance(minibosschomperball_811_instances, it.current_index, default_active_instance))->alterables->values.get(6)*0.5)*70);
        }
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(5, (((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(5)+3)%math_helper%360);
        ((Active*)get_instance(minibosschomper_802_instances))->set_angle(cos_deg(((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(5))*5, 0);
        {
            FrameObject * parent = ((Active*)get_instance(minibosschomper_802_instances));
            if (parent == NULL) goto pos_end_1588_17_0;
            ((Active*)get_instance(minibosschompermouth_812_instances))->set_global_position(parent->get_x() + -6, parent->get_y() + 25);
            pos_end_1588_17_0: ;
        }
        ((Active*)get_instance(minibosschompermouth_812_instances))->set_angle(((Active*)get_instance(minibosschomper_802_instances))->get_angle(), 0);
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x()-((Active*)get_instance(minibosschomper_802_instances))->get_action_x());
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->get_x()+((Active*)get_instance(minibosschomper_802_instances))->get_action_x())*0.5);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->get_y()+((Active*)get_instance(minibosschomper_802_instances))->get_action_y())*0.5);
            ((Active*)*it)->set_y(((Active*)get_instance(minibosschomper_802_instances))->get_y()+((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->set_x(((Active*)get_instance(minibosschomper_802_instances))->get_x()-150+((Active*)*it)->alterables->values.get(8));
        }
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(2000);
        }
    }
    event_1588_17_end: ;
}
void Frames::event_func_4085()
{
    // event 1589_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1589_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_1589_17_end;
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(minibosschomper_802_instances));
            if (parent == NULL) goto pos_end_1589_17_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 18, parent->get_y() + -7);
            pos_end_1589_17_0: ;
        }
    }
    event_1589_17_end: ;
}
void Frames::event_func_4086()
{
    // event 1590_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1590_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1590_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 24);
            ((Active*)*it)->alterables->values.sub(12, 1);
        }
    }
    event_1590_17_end: ;
}
void Frames::event_func_4087()
{
    // event 1591_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1591_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(6)) == (0))) goto event_1591_17_end;
        if (not_always_1591_17 > loop_count) {
            not_always_1591_17 = loop_count + 2;
            goto event_1591_17_end;
        }
        not_always_1591_17 = loop_count + 2;
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_animation(0);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->flags.disable(1);
    }
    event_1591_17_end: ;
}
void Frames::event_func_4088()
{
    // event 1592_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1592_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(6)) == (1))) goto event_1592_17_end;
        if (not_always_1592_17 > loop_count) {
            not_always_1592_17 = loop_count + 2;
            goto event_1592_17_end;
        }
        not_always_1592_17 = loop_count + 2;
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_animation(10);
        if (!group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1) {
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1 = true;
        }
    }
    event_1592_17_end: ;
}
void Frames::event_func_4089()
{
    // event 1593_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_eating_1)) goto event_1593_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) < (2))) goto event_1593_17_end;
        player_389_instances.clear_selection();
        minibosschomper_802_instances.clear_selection();
        if (!check_overlap(player_389_instances, minibosschomper_802_instances)) goto event_1593_17_end;
        minibosschompermouth_812_instances.clear_selection();
        if (!check_overlap(player_389_instances, minibosschompermouth_812_instances)) goto event_1593_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(6)) == (1))) goto event_1593_17_end;
        if (!(((Active*)get_instance(minibosschomper_802_instances))->alterables->flags.is_off(1))) goto event_1593_17_end;
        if (!((((Active*)get_instance(minibosschompermouth_812_instances))->get_frame()) > (1))) goto event_1593_17_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(minibosschomper_802_instances))->get_x()))) goto event_1593_17_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1593_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1593_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(7, 50);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_animation(0);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_frame(9);
        ((Active*)get_instance(minibosschompermouth_812_instances))->restore_frame();
    }
    event_1593_17_end: ;
}
void Frames::event_func_4090()
{
    // event 1594_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_eating_1)) goto event_1594_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (2))) goto event_1594_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.sub(7, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 43);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(minibosschomper_802_instances))->get_x()-44);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(minibosschomper_802_instances))->get_y());
        ((Active*)get_instance(minibosschompermouth_812_instances))->move_front();
    }
    event_1594_17_end: ;
}
void Frames::event_func_4091()
{
    // event 1595_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_eating_1)) goto event_1595_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (2))) goto event_1595_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(7)) == (1))) goto event_1595_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.sub(7, 1);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(6, 1);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(8, 150);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_animation(10);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_frame(9);
        ((Active*)get_instance(minibosschompermouth_812_instances))->restore_frame();
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 100);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(128, 255, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(128, 255, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -2);
        ((Active*)get_instance(minibosschompermouth_812_instances))->move_back(((Active*)get_instance(player_389_instances)));
    }
    event_1595_17_end: ;
}
void Frames::event_func_4092()
{
    // event 1596_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_eating_1)) goto event_1596_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (43))) goto event_1596_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) != (2))) goto event_1596_17_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
    }
    event_1596_17_end: ;
}
void Frames::event_func_4093()
{
    // event 1597_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1597_17_end;
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!minibosschomperhitbox_818_instances.has_selection()) goto event_1597_17_end;
        if (not_always_1597_17 > loop_count) {
            not_always_1597_17 = loop_count + 2;
            goto event_1597_17_end;
        }
        not_always_1597_17 = loop_count + 2;
        {
            ((Active*)get_instance(minibosschomper_802_instances))->set_shader(Render::INVERT);
        }
        {
            ((Active*)get_instance(minibosschompermouth_812_instances))->set_shader(Render::INVERT);
        }
        minibosschompertail_810_instances.clear_selection();
        for (ObjectIterator it(minibosschompertail_810_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_1597_17_end: ;
}
void Frames::event_func_4094()
{
    // event 1598_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1598_17_end;
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (1))) { it.deselect(); continue; }
        }
        if (!minibosschomperhitbox_818_instances.has_selection()) goto event_1598_17_end;
        if (not_always_1598_17 > loop_count) {
            not_always_1598_17 = loop_count + 2;
            goto event_1598_17_end;
        }
        not_always_1598_17 = loop_count + 2;
        {
            ((Active*)get_instance(minibosschomper_802_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(minibosschompermouth_812_instances))->set_shader(NULL);
        }
        minibosschompertail_810_instances.clear_selection();
        for (ObjectIterator it(minibosschompertail_810_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1598_17_end: ;
}
void Frames::event_func_4095()
{
    // event 1599_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1599_17_end;
        minibosschomperball_811_instances.clear_selection();
        minibosschomper_802_instances.clear_selection();
        if (!check_overlap(minibosschomperball_811_instances, minibosschomper_802_instances)) goto event_1599_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(minibosschomper_802_instances))->get_box_index(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1599_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) != (2))) goto event_1599_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) != (3))) goto event_1599_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(6)) == (1))) goto event_1599_17_end;
        if (!((((Active*)get_instance(minibosschompermouth_812_instances))->get_frame()) > (1))) goto event_1599_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_animation(0);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_frame(9);
        ((Active*)get_instance(minibosschompermouth_812_instances))->restore_frame();
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1 = false;
    
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 100);
        }
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(7, 50);
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(3, 3);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.sub(0, 10);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -12);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1599_17_end: ;
}
void Frames::event_func_4096()
{
    // event 1600_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1600_17_end;
        minibosschomperball_811_instances.clear_selection();
        minibosschomper_802_instances.clear_selection();
        if (!check_overlap(minibosschomperball_811_instances, minibosschomper_802_instances)) goto event_1600_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(minibosschomper_802_instances))->get_box_index(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1600_17_end;
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -12);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1600_17_end: ;
}
void Frames::event_func_4097()
{
    // event 1601_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1601_17_end;
        playerreflect_447_instances.clear_selection();
        minibosschomper_802_instances.clear_selection();
        if (!check_overlap(playerreflect_447_instances, minibosschomper_802_instances)) goto event_1601_17_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->get_x()) > (((Active*)get_instance(minibosschomper_802_instances))->get_box_index(0)))) goto event_1601_17_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->get_x()) < (((Active*)get_instance(minibosschomper_802_instances))->get_box_index(0)+40))) goto event_1601_17_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (2))) goto event_1601_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) != (2))) goto event_1601_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) != (3))) goto event_1601_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(6)) == (1))) goto event_1601_17_end;
        if (!((((Active*)get_instance(minibosschompermouth_812_instances))->get_frame()) > (2))) goto event_1601_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_animation(0);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_frame(9);
        ((Active*)get_instance(minibosschompermouth_812_instances))->restore_frame();
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1 = false;
    
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(7, 50);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(3, 3);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.sub(0, 10);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
    }
    event_1601_17_end: ;
}
void Frames::event_func_4098()
{
    // event 1602_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1602_17_end;
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibosschomperhitbox_818_instances.has_selection()) goto event_1602_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(7)) <= (0))) goto event_1602_17_end;
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1 = false;
    
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(7, 50);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(3, 3);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.sub(0, 10);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        {
            ((Active*)get_instance(minibosschomper_802_instances))->set_shader(NULL);
        }
        minibosschompertail_810_instances.clear_selection();
        for (ObjectIterator it(minibosschompertail_810_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        {
            ((Active*)get_instance(minibosschompermouth_812_instances))->set_shader(NULL);
        }
    }
    event_1602_17_end: ;
}
void Frames::event_func_4099()
{
    // event 1603_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1603_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (3))) goto event_1603_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.sub(7, 1);
        ((Active*)get_instance(minibosschomper_802_instances))->force_animation(7);
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1603_17_end: ;
}
void Frames::event_func_4100()
{
    // event 1604_17
    bool or_result_1604_17 = false;
    bool or_temp_result_1604_17_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto or_event_1604_17_0_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto or_event_1604_17_0_end;
        minibosschomper_802_instances.clear_selection();
        for (ObjectIterator it(minibosschomper_802_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!minibosschomper_802_instances.has_selection()) goto or_event_1604_17_0_end;
        or_result_1604_17 = true;
        or_temp_result_1604_17_0 = true;
    }
    or_event_1604_17_0_end: ;
    minibosschomper_802_instances.clear_saved_selection();
    if (or_temp_result_1604_17_0) {
        minibosschomper_802_instances.save_selection();
    }
    // event 1604_17
    bool or_temp_result_1604_17_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto or_event_1604_17_1_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto or_event_1604_17_1_end;
        minibosschomper_802_instances.clear_selection();
        for (ObjectIterator it(minibosschomper_802_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!minibosschomper_802_instances.has_selection()) goto or_event_1604_17_1_end;
        or_result_1604_17 = true;
        or_temp_result_1604_17_1 = true;
        or_event_1604_17_1_end: ;
        if (or_temp_result_1604_17_1) {
            minibosschomper_802_instances.save_selection();
        }
        if (!or_result_1604_17) goto or_final_or_event_1604_17_1_end;
        minibosschomper_802_instances.empty_selection();
        if (or_temp_result_1604_17_0 || or_temp_result_1604_17_1) {
            minibosschomper_802_instances.restore_selection();
        }
        for (ObjectIterator it(minibosschomper_802_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->get_direction()+1)%math_helper%2);
        }
        minibosschompermouth_812_instances.clear_selection();
        for (ObjectIterator it(minibosschompermouth_812_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(minibosschomper_802_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    or_final_or_event_1604_17_1_end: ;
}
void Frames::event_func_4101()
{
    // event 1605_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1)) goto event_1605_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (3))) goto event_1605_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(7)) == (1))) goto event_1605_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.sub(7, 1);
        ((Active*)get_instance(minibosschomper_802_instances))->force_animation(0);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(6, 1);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_animation(10);
        ((Active*)get_instance(minibosschompermouth_812_instances))->force_frame(9);
        ((Active*)get_instance(minibosschompermouth_812_instances))->restore_frame();
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(8, 150);
        ((Active*)get_instance(minibosschompermouth_812_instances))->set_direction(0);
        ((Active*)get_instance(minibosschomper_802_instances))->set_direction(0);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->flags.enable(1);
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 30);
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_1605_17_end: ;
}
void Frames::event_func_4102()
{
    // event 1606_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1)) goto event_1606_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (3))) goto event_1606_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(0)) <= (0))) goto event_1606_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(7, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1606_17_end: ;
}
void Frames::event_func_4103()
{
    // event 1607_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1)) goto event_1607_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (4))) goto event_1607_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.add(7, 1);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(9, 0);
    }
    event_1607_17_end: ;
}
void Frames::event_func_4104()
{
    // event 1608_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1)) goto event_1608_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (4))) goto event_1608_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(7)) > (120))) goto event_1608_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(9, 4);
        ((Active*)get_instance(minibosschompermouth_812_instances))->alterables->values.set(0, -4);
        minibosschompertail_810_instances.clear_selection();
        for (ObjectIterator it(minibosschompertail_810_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (minibosschompertail_810_instances.size()-((Active*)*it)->alterables->values.get(0))*-0.5+2);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(0)*-0.5);
        }
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 8);
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_eating_1 = false;
    
    }
    event_1608_17_end: ;
}
void Frames::event_func_4105()
{
    // event 1609_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1)) goto event_1609_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (5))) goto event_1609_17_end;
        ((Active*)get_instance(minibosschompermouth_812_instances))->set_angle(((Active*)get_instance(minibosschompermouth_812_instances))->get_angle()+6, 0);
        ((Active*)get_instance(minibosschomper_802_instances))->set_angle(((Active*)get_instance(minibosschomper_802_instances))->get_angle()-3, 0);
        ((Active*)get_instance(minibosschomper_802_instances))->set_x(((Active*)get_instance(minibosschomper_802_instances))->get_x()+((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(9));
        ((Active*)get_instance(minibosschompermouth_812_instances))->set_x(((Active*)get_instance(minibosschompermouth_812_instances))->get_x()+((Active*)get_instance(minibosschompermouth_812_instances))->alterables->values.get(0));
        ((Active*)get_instance(minibosschompermouth_812_instances))->set_y(((Active*)get_instance(minibosschompermouth_812_instances))->get_y()+((Active*)get_instance(minibosschompermouth_812_instances))->alterables->values.get(1));
        ((Active*)get_instance(minibosschomper_802_instances))->set_y(((Active*)get_instance(minibosschomper_802_instances))->get_y()+((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(13));
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.add(13, 0.1);
        ((Active*)get_instance(minibosschompermouth_812_instances))->alterables->values.add(1, 0.1);
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(14, 1);
        }
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 = false;
    
    }
    event_1609_17_end: ;
}
void Frames::event_func_4106()
{
    // event 1610_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1)) goto event_1610_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (5))) goto event_1610_17_end;
        minibosschomperball_811_instances.clear_selection();
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (50))) { it.deselect(); continue; }
        }
        if (!minibosschomperball_811_instances.has_selection()) goto event_1610_17_end;
        ((Active*)get_instance(minibosschomper_802_instances))->set_visible(false);
        ((Active*)get_instance(minibosschompermouth_812_instances))->set_visible(false);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.add(3, 1);
        FrameObject * single_instance_1610_17_0; single_instance_1610_17_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosschomperball_811_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1610_17_0 == NULL)
                    single_instance_1610_17_0 = new_obj;
            }
        }
        FrameObject * single_instance_1610_17_1; single_instance_1610_17_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosschomperball_811_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1610_17_1 == NULL)
                    single_instance_1610_17_1 = new_obj;
            }
        }
        for (ObjectIterator it(minibosschomperball_811_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_ENEMY_SHADEKILL_2_50, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1610_17_end: ;
}
void Frames::event_func_4107()
{
    // event 1611_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1)) goto event_1611_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) == (6))) goto event_1611_17_end;
        breakableaquabrick2_813_instances.clear_selection();
        for (ObjectIterator it(breakableaquabrick2_813_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1611_17_0; single_instance_1611_17_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(breakableaquabrick2_813_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_breakableaquabrick_743(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1611_17_0 == NULL)
                    single_instance_1611_17_0 = new_obj;
            }
        }
        {
            loop_next_act_running = true;
            int times = int(1);
            loop_next_act_index = 0;
            while (loop_next_act_index < times) {
                loop_next_act_17();
                if (!loop_next_act_running) break;
                loop_next_act_index++;
            }
        }
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_water_1) {
            group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_water_1 = true;
        }
    }
    event_1611_17_end: ;
}
void Frames::event_func_4108()
{
    // event 1612_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_water_1)) goto event_1612_17_end;
        waterjetmaker_773_instances.clear_selection();
        for (ObjectIterator it(waterjetmaker_773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+16);
        }
    }
    event_1612_17_end: ;
}
void Frames::event_func_4109()
{
    // event 1613_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_water_1)) goto event_1613_17_end;
        waterjetmaker_773_instances.clear_selection();
        for (ObjectIterator it(waterjetmaker_773_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (128))) { it.deselect(); continue; }
        }
        if (!waterjetmaker_773_instances.has_selection()) goto event_1613_17_end;
        waterjetright_673_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(waterjetmaker_773_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_waterjetright_673(parent->x + 0, parent->y + 0), parent->layer);
                waterjetright_673_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_waterjetright_673(parent->x + 0, parent->y + 32), parent->layer);
                waterjetright_673_instances.add_back();
            }
        }
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_single(waterjetmaker_773_instances, it.current_index, default_active_instance))->get_x());
        }
        for (ObjectIterator it(waterjetmaker_773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 128);
        }
    }
    event_1613_17_end: ;
}
void Frames::event_func_4110()
{
    // event 1614_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_water_1)) goto event_1614_17_end;
        waterjetmaker_773_instances.clear_selection();
        for (ObjectIterator it(waterjetmaker_773_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (7300))) { it.deselect(); continue; }
        }
        if (!waterjetmaker_773_instances.has_selection()) goto event_1614_17_end;
        for (ObjectIterator it(waterjetmaker_773_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1614_17_end: ;
}
void Frames::event_func_4111()
{
    // event 1615_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1615_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) >= (5))) goto event_1615_17_end;
        minibosschompertail_810_instances.clear_selection();
        for (ObjectIterator it(minibosschompertail_810_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(2, 0.2);
        }
    }
    event_1615_17_end: ;
}
void Frames::event_func_4112()
{
    // event 1616_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1616_17_end;
        if (!((((Active*)get_instance(minibosschomper_802_instances))->alterables->values.get(3)) >= (5))) goto event_1616_17_end;
        minibosschompertail_810_instances.clear_selection();
        for (ObjectIterator it(minibosschompertail_810_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+100))) { it.deselect(); continue; }
        }
        if (!minibosschompertail_810_instances.has_selection()) goto event_1616_17_end;
        for (ObjectIterator it(minibosschompertail_810_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1616_17_end: ;
}
void Frames::event_func_4113()
{
    // event 1617_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1617_17_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1617_17_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.2, 12));
        }
    }
    event_1617_17_end: ;
}
void Frames::event_func_4114()
{
    // event 1620_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1620_17_end;
        minibossacid_658_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossacid_658_instances, playercharactersensor_383_instances)) goto event_1620_17_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1620_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1620_17_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1620_17_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 100);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(128, 255, 128));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(128, 255, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
    }
    event_1620_17_end: ;
}
void Frames::event_func_4115()
{
    // event 1621_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1621_17_end;
        minibossacid_658_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossacid_658_instances, playercharactersensor_383_instances)) goto event_1621_17_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1621_17_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 100);
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x()-((Active*)get_instance(playercharactersensor_383_instances))->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y()-((Active*)get_instance(playercharactersensor_383_instances))->get_y());
        }
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
    }
    event_1621_17_end: ;
}
void Frames::event_func_4116()
{
    // event 1622_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1622_17_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1622_17_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playercharactersensor_383_instances))->get_x()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)get_instance(playercharactersensor_383_instances))->get_y()+((Active*)*it)->alterables->values.get(5));
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*0.9);
    }
    event_1622_17_end: ;
}
void Frames::event_func_4117()
{
    // event 1623_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1623_17_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(10))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1623_17_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1623_17_end: ;
}
void Frames::event_func_4118()
{
    // event 1625_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1625_17_end;
        if (!((global_values->get(4)) == (10))) goto event_1625_17_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (7800))) goto event_1625_17_end;
        global_values->set(4, 11);
        global_values->set(13, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25));
        global_values->set(14, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(9));
        global_values->set(15, ((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(11));
        global_values->set(5, 7648);
        global_values->set(6, 1124);
    }
    event_1625_17_end: ;
}
void Frames::event_func_4119()
{
    // event 1717_17
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1717_17_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1717_17_end;
        if (!((global_values->get(4)) < (10))) goto event_1717_17_end;
        if (not_always_1717_17 > loop_count) {
            not_always_1717_17 = loop_count + 2;
            goto event_1717_17_end;
        }
        not_always_1717_17 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1717_17_end: ;
}
void Frames::event_func_4120()
{
    // event 1789_17
    {
        if (!(group_main_engine_1)) goto event_1789_17_end;
        bubblepatch_806_instances.clear_selection();
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1789_17_end: ;
}
void Frames::event_func_4121()
{
    // event 1790_17
    {
        if (!(group_main_engine_1)) goto event_1790_17_end;
        bubblepatch_806_instances.clear_selection();
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (15))) { it.deselect(); continue; }
        }
        if (!bubblepatch_806_instances.has_selection()) goto event_1790_17_end;
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1790_17_0; single_instance_1790_17_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bubblepatch_806_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_mediumbubble_769(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1790_17_0 == NULL)
                    single_instance_1790_17_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1790_17_0))->set_x(((Active*)single_instance_1790_17_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_1790_17_0))->alterables->values.set(3, (-10-randrange(11))*0.1);
    }
    event_1790_17_end: ;
}
void Frames::event_func_4122()
{
    // event 1791_17
    {
        if (!(group_main_engine_1)) goto event_1791_17_end;
        bubblepatch_806_instances.clear_selection();
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!bubblepatch_806_instances.has_selection()) goto event_1791_17_end;
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        FrameObject * single_instance_1791_17_0; single_instance_1791_17_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bubblepatch_806_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_mediumbubble_769(parent->x + 0, parent->y + -8), parent->layer);
                if (single_instance_1791_17_0 == NULL)
                    single_instance_1791_17_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1791_17_0))->set_x(((Active*)single_instance_1791_17_0)->get_x()-8+randrange(17));
        ((Active*)((Active*)single_instance_1791_17_0))->alterables->values.set(3, (-10-randrange(11))*0.1);
        ((Active*)((Active*)single_instance_1791_17_0))->alterables->values.set(4, 1+randrange(3));
    }
    event_1791_17_end: ;
}
void Frames::event_func_4123()
{
    // event 1793_17
    {
        if (!(group_main_engine_1)) goto event_1793_17_end;
        bubblepatch_806_instances.clear_selection();
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!bubblepatch_806_instances.has_selection()) goto event_1793_17_end;
        if (!check_not_overlap(bubblepatch_806_instances, playercharactersensor_383_instances)) goto event_1793_17_end;
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1793_17_end: ;
}
void Frames::event_func_4124()
{
    // event 1797_17
    bool or_result_1797_17 = false;
    bool or_temp_result_1797_17_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1797_17_0_end;
        player_389_instances.clear_selection();
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(masterlevel_37_instances, default_active_instance))->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1797_17_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (10))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1797_17_0_end;
        or_result_1797_17 = true;
        or_temp_result_1797_17_0 = true;
    }
    or_event_1797_17_0_end: ;
    player_389_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1797_17_0) {
        playermovementvalues_245_instances.save_selection();
        player_389_instances.save_selection();
    }
    // event 1797_17
    bool or_temp_result_1797_17_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1797_17_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (10))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1797_17_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1797_17_1_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto or_event_1797_17_1_end;
        or_result_1797_17 = true;
        or_temp_result_1797_17_1 = true;
        or_event_1797_17_1_end: ;
        playerskinsash_418_instances.clear_saved_selection();
        if (or_temp_result_1797_17_1) {
            playermovementvalues_245_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1797_17) goto or_final_or_event_1797_17_1_end;
        player_389_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1797_17_0 || or_temp_result_1797_17_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1797_17_0) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1797_17_1) {
            playerskinsash_418_instances.restore_selection();
        }
        FrameObject * single_instance_1797_17_0; single_instance_1797_17_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskinsash_418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_mediumbubble_769(parent->x + 0, parent->y + -15), parent->layer);
                if (single_instance_1797_17_0 == NULL)
                    single_instance_1797_17_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1797_17_0))->set_x(((Active*)single_instance_1797_17_0)->get_x()-2+(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(16)*4)+randrange(5));
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    or_final_or_event_1797_17_1_end: ;
}
void Frames::event_func_4125()
{
    // event 1798_17
    {
        if (!(group_main_engine_1)) goto event_1798_17_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1798_17_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1798_17_end: ;
}
void Frames::event_func_4126()
{
    // event 1799_17
    {
        if (!(group_main_engine_1)) goto event_1799_17_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1799_17_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1799_17_end: ;
}
void Frames::event_func_4127()
{
    // event 1800_17
    {
        if (!(group_main_engine_1)) goto event_1800_17_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1800_17_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.001);
        }
    }
    event_1800_17_end: ;
}
void Frames::event_func_4128()
{
    // event 1801_17
    {
        if (!(group_main_engine_1)) goto event_1801_17_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1801_17_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(2, 0.001);
        }
    }
    event_1801_17_end: ;
}
void Frames::event_func_4129()
{
    // event 1802_17
    {
        if (!(group_main_engine_1)) goto event_1802_17_end;
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1)))) { it.deselect(); continue; }
        }
        if (!mediumbubble_769_instances.has_selection()) goto event_1802_17_end;
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1802_17_end: ;
}
void Frames::event_func_4130()
{
    // event 1814_17
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1814_17_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1814_17_end;
        if (!((global_values->get(4)) != (0))) goto event_1814_17_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_visible(true);
        ((Active*)get_instance(guiicon_452_instances))->set_visible(true);
        manager.ignore_controls = false;
        if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) {
            group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
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
    }
    event_1814_17_end: ;
}
void Frames::event_func_4131()
{
    // event 1858_17
    {
        if (!(group_pause_1)) goto event_1858_17_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1858_17_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1858_17_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1858_17_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1858_17_end;
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
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
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
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bubblepatch_806_instances.clear_selection();
        for (ObjectIterator it(bubblepatch_806_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        waterjet_748_instances.clear_selection();
        for (ObjectIterator it(waterjet_748_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        waterjetback_749_instances.clear_selection();
        for (ObjectIterator it(waterjetback_749_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        waterjetmaker_773_instances.clear_selection();
        for (ObjectIterator it(waterjetmaker_773_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        waterjetright_673_instances.clear_selection();
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1858_17_end: ;
}
void Frames::event_func_4132()
{
    // event 1859_17
    bool or_result_1859_17 = false;
    bool or_temp_result_1859_17_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1859_17_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1859_17_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1859_17_0_end;
        or_result_1859_17 = true;
        or_temp_result_1859_17_0 = true;
    }
    or_event_1859_17_0_end: ;
    // event 1859_17
    bool or_temp_result_1859_17_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1859_17_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1859_17_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1859_17_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1859_17_1_end;
        or_result_1859_17 = true;
        or_temp_result_1859_17_1 = true;
        or_event_1859_17_1_end: ;
        if (!or_result_1859_17) goto or_final_or_event_1859_17_1_end;
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
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwhisp_656_instances.clear_selection();
        for (ObjectIterator it(effectwhisp_656_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
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
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        bubblenumbers_429_instances.clear_selection();
        for (ObjectIterator it(bubblenumbers_429_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwaterhorizon_415_instances.clear_selection();
        for (ObjectIterator it(generalwaterhorizon_415_instances); !it.end(); ++it) {
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
        waterjet_748_instances.clear_selection();
        for (ObjectIterator it(waterjet_748_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        waterjetright_673_instances.clear_selection();
        for (ObjectIterator it(waterjetright_673_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        waterjetback_749_instances.clear_selection();
        for (ObjectIterator it(waterjetback_749_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        waterjetmaker_773_instances.clear_selection();
        for (ObjectIterator it(waterjetmaker_773_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1859_17_1_end: ;
}
void Frames::handle_frame_18_events()
{
    test_collisions_17();
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
    event_func_3807();
    event_func_4036();
    event_func_4117();
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
    event_func_2783();
    event_func_1776();
    event_func_1777();
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
    event_func_1909();
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
    event_func_3736();
    event_func_4012();
    event_func_4013();
    event_func_4014();
    event_func_4015();
    event_func_3740();
    event_func_3741();
    event_func_3742();
    event_func_3743();
    event_func_3744();
    event_func_3745();
    event_func_3746();
    event_func_3747();
    event_func_3748();
    event_func_3749();
    event_func_3750();
    event_func_3751();
    event_func_3752();
    event_func_3753();
    event_func_3754();
    event_func_3755();
    event_func_3756();
    event_func_4016();
    event_func_4017();
    event_func_4018();
    event_func_4019();
    event_func_4020();
    event_func_4021();
    event_func_4022();
    event_func_4023();
    event_func_4024();
    event_func_4025();
    event_func_4026();
    event_func_4027();
    event_func_4028();
    event_func_4029();
    event_func_4030();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_3774();
    event_func_3775();
    event_func_3776();
    event_func_3777();
    event_func_3778();
    event_func_3779();
    event_func_3780();
    event_func_3781();
    event_func_3782();
    event_func_3783();
    event_func_3784();
    event_func_3785();
    event_func_3786();
    event_func_3787();
    event_func_3788();
    event_func_3789();
    event_func_3790();
    event_func_3791();
    event_func_3792();
    event_func_3793();
    event_func_3794();
    event_func_3795();
    event_func_3796();
    event_func_3797();
    event_func_3798();
    event_func_3799();
    event_func_3800();
    event_func_3801();
    event_func_3802();
    event_func_3803();
    event_func_3804();
    event_func_3805();
    event_func_3806();
    event_func_4031();
    event_func_4032();
    event_func_4033();
    event_func_4034();
    event_func_4035();
    event_func_4037();
    event_func_4038();
    event_func_4039();
    event_func_4040();
    event_func_4041();
    event_func_4042();
    event_func_4043();
    event_func_4044();
    event_func_4045();
    event_func_4046();
    event_func_4047();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    if (!group_main_engine_level_specific_methods_starting_tunnel_1) goto group_main_engine_level_specific_methods_starting_tunnel_1_end;
    event_func_4048();
    event_func_4049();
    event_func_4050();
    group_main_engine_level_specific_methods_starting_tunnel_1_end: ;
    event_func_3809();
    event_func_3810();
    event_func_3811();
    event_func_3812();
    event_func_3813();
    event_func_3814();
    event_func_3815();
    event_func_3816();
    event_func_3817();
    event_func_3818();
    event_func_3819();
    event_func_3820();
    event_func_3821();
    event_func_3822();
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
    event_func_4053();
    event_func_4054();
    event_func_3000();
    event_func_4055();
    event_func_4056();
    event_func_4057();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4058();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_1) goto group_main_engine_level_specific_methods_bosses_1_end;
    event_func_4060();
    event_func_4061();
    event_func_4062();
    event_func_4063();
    event_func_4064();
    event_func_4065();
    event_func_4066();
    if (!group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1) goto group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1_end;
    event_func_4067();
    event_func_4068();
    event_func_4069();
    event_func_4070();
    event_func_4071();
    event_func_4072();
    if (!group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1) goto group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1_end;
    event_func_4073();
    event_func_4074();
    event_func_4075();
    event_func_4076();
    event_func_4077();
    event_func_4078();
    event_func_4079();
    event_func_4080();
    event_func_4081();
    event_func_4082();
    event_func_4083();
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1_end: ;
    event_func_4084();
    event_func_4085();
    event_func_4086();
    event_func_4087();
    event_func_4088();
    if (!group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_eating_1) goto group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_eating_1_end;
    event_func_4089();
    event_func_4090();
    event_func_4091();
    event_func_4092();
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_eating_1_end: ;
    event_func_4093();
    event_func_4094();
    event_func_4095();
    event_func_4096();
    event_func_4097();
    event_func_4098();
    event_func_4099();
    event_func_4100();
    event_func_4101();
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1) goto group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1_end;
    event_func_4102();
    event_func_4103();
    event_func_4104();
    event_func_4105();
    event_func_4106();
    event_func_4107();
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_water_1) goto group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_water_1_end;
    event_func_4108();
    event_func_4109();
    event_func_4110();
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_water_1_end: ;
    event_func_4111();
    event_func_4112();
    event_func_4113();
    event_func_4114();
    event_func_4115();
    event_func_4116();
    event_func_4118();
    group_main_engine_level_specific_methods_bosses_1_end: ;
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
    event_func_4119();
    event_func_2577();
    event_func_3243();
    event_func_3244();
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
    event_func_3245();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
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
    event_func_4130();
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
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_4131();
    event_func_4132();
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
void Frames::handle_frame_18_pre_events()
{
}
void Frames::event_func_4133()
{
    // event 2_17
    {
        if (!(group_main_engine_1)) goto event_2_17_end;
        ((Active*)get_instance(guipause_453_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_x()+global_values->get(16)*0.5-(105-global_values->get(19)*53));
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(crystal_456_instances))->set_x(((Active*)get_instance(guipause_453_instances))->get_action_x());
        ((Active*)get_instance(levelcardgameover_462_instances))->set_x(((Active*)get_instance(levelcardgameover_462_instances))->get_x()+global_values->get(16)*0.5);
        ((Active*)get_instance(guitimer_564_instances))->set_x(((Active*)get_instance(guitimer_564_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimermilli_360_instances))->set_x(((Counter*)get_instance(guitimermilli_360_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimermilli2_361_instances))->set_x(((Counter*)get_instance(guitimermilli2_361_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimers_362_instances))->set_x(((Counter*)get_instance(guitimers_362_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimers2_363_instances))->set_x(((Counter*)get_instance(guitimers2_363_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimerm_364_instances))->set_x(((Counter*)get_instance(guitimerm_364_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        ((Counter*)get_instance(guitimerm2_365_instances))->set_x(((Counter*)get_instance(guitimerm2_365_instances))->get_x()+(global_values->get(16)*0.5-160)*2);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+global_values->get(16)*0.5);
        }
    }
    event_2_17_end: ;
}
void Frames::event_func_4134()
{
    // event 3_17
    {
        if (!(group_main_engine_1)) goto event_3_17_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 1200);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 24);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 9);
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_3_17_end: ;
}
void Frames::event_func_4135()
{
    // event 20_17
    {
        if (!(group_main_engine_1)) goto event_20_17_end;
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.75);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.75);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.4);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(3, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece10_765_instances))->alterables->values.set(4, 0.3);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece9_763_instances))->alterables->values.set(4, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.55);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.55);
    }
    event_20_17_end: ;
}
void Frames::event_func_4136()
{
    // event 1398_17
    {
        if (!(group_main_engine_1)) goto event_1398_17_end;
        qualifier_26.clear_selection();
        spread_value(qualifier_26, 25, 0);
    }
    event_1398_17_end: ;
}
void Frames::event_func_4137()
{
    // event 1399_17
    {
        if (!(group_main_engine_1)) goto event_1399_17_end;
        {
            loop_spawn_swing_running = true;
            int times = int(qualifier_26.size());
            loop_spawn_swing_index = 0;
            while (loop_spawn_swing_index < times) {
                loop_spawn_swing_17();
                if (!loop_spawn_swing_running) break;
                loop_spawn_swing_index++;
            }
        }
        {
            loop_order_swing_running = true;
            int times = int(1);
            loop_order_swing_index = 0;
            while (loop_order_swing_index < times) {
                loop_order_swing_17();
                if (!loop_order_swing_running) break;
                loop_order_swing_index++;
            }
        }
    }
    event_1399_17_end: ;
}
void Frames::event_func_4138()
{
    // event 1405_17
    {
        if (!(group_main_engine_1)) goto event_1405_17_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1405_17_end: ;
}
void Frames::event_func_4139()
{
    // event 1428_17
    {
        if (!(group_main_engine_1)) goto event_1428_17_end;
        switchdoor_735_instances.clear_selection();
        for (ObjectIterator it(switchdoor_735_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->layer->index+1);
        }
        switchmillablock_803_instances.clear_selection();
        spread_value(switchmillablock_803_instances, 0, 0);
    }
    event_1428_17_end: ;
}
void Frames::event_func_4140()
{
    // event 1559_17
    {
        if (!(group_main_engine_1)) goto event_1559_17_end;
        if (!((global_values->get(1)) == (1))) goto event_1559_17_end;
        jellyspring_739_instances.clear_selection();
        pick_objects_in_zone(jellyspring_739_instances, 5260, 379, 5468, 815);
        objectcrystal_279_instances.clear_selection();
        pick_objects_in_zone(objectcrystal_279_instances, 5260, 379, 5468, 815);
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(jellyspring_739_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1559_17_end: ;
}
void Frames::event_func_4141()
{
    // event 1560_17
    {
        if (!(group_main_engine_1)) goto event_1560_17_end;
        if (!((global_values->get(1)) != (1))) goto event_1560_17_end;
        objectpetal_302_instances.clear_selection();
        pick_objects_in_zone(objectpetal_302_instances, 5260, 379, 5468, 815);
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1560_17_end: ;
}
void Frames::event_func_4142()
{
    // event 1568_17
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1568_17_end;
        minibosschompertail_810_instances.clear_selection();
        spread_value(minibosschompertail_810_instances, 0, 0);
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(4, ((Active*)get_instance(minibosschomper_802_instances))->get_y());
        ((Active*)get_instance(minibosschomper_802_instances))->alterables->values.set(10, ((Active*)get_instance(minibosschomper_802_instances))->get_x());
        ((Active*)get_instance(minibosschomper_802_instances))->set_x(((Active*)get_instance(minibosschomper_802_instances))->get_x()+500);
        minibosschomperhitbox_818_instances.clear_selection();
        for (ObjectIterator it(minibosschomperhitbox_818_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1568_17_end: ;
}
void Frames::event_func_4143()
{
    // event 1794_17
    {
        if (!(group_main_engine_1)) goto event_1794_17_end;
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_box_index(1));
        }
        bubblepatch_806_instances.clear_selection();
        spread_value(bubblepatch_806_instances, 0, 0);
        spread_value(bubblepatch_806_instances, 1, 0);
    }
    event_1794_17_end: ;
}
void Frames::event_func_4144()
{
    // event 1804_17
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1804_17_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1804_17_end: ;
}
void Frames::event_func_4145()
{
    // event 1805_17
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1805_17_end;
        if (!((global_values->get(4)) > (0))) goto event_1805_17_end;
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
    }
    event_1805_17_end: ;
}
void Frames::event_func_4146()
{
    // event 1806_17
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1806_17_end;
        if (!((global_values->get(4)) <= (0))) goto event_1806_17_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) {
            group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = true;
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
    }
    event_1806_17_end: ;
}
void Frames::event_func_4147()
{
    // event 1807_17
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1807_17_end;
        if (!((global_values->get(4)) >= (10))) goto event_1807_17_end;
            group_main_engine_level_specific_methods_bosses_1 = false;
    
        ((Active*)get_instance(sign_351_instances))->set_visible(false);
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_1807_17_end: ;
}
void Frames::on_frame_18_start_events()
{
    event_func_3979();
    event_func_4133();
    event_func_4134();
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
    event_func_4135();
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
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_4136();
    event_func_4137();
    event_func_4138();
    event_func_4139();
    event_func_3989();
    event_func_2686();
    event_func_2687();
    event_func_4140();
    event_func_4141();
    event_func_4142();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_4143();
    event_func_4144();
    event_func_4145();
    event_func_4146();
    event_func_4147();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_18_init()
{
    index = 17;
    width = 11584;
    height = 1864;
    virtual_width = 11584;
    virtual_height = 1864;
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
    static ObjectList* qualifier_26_instances[] = {&gimmickswingspawner1_817_instances, NULL};
    qualifier_26.set(1, &qualifier_26_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &gimmickswingplatform_768_instances, &aquabrickplatform_744_instances, NULL};
    qualifier_8.set(12, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &gimmickcollapsingplatformleftbrick02_667_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickswingplatform_768_instances, &aquabrickplatform_744_instances, NULL};
    qualifier_9.set(35, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyslime_741_instances, &enemyfirefly_742_instances, &minibosschomperball_811_instances, &enemygansekijr_816_instances, &minibosschomperhitbox_818_instances, NULL};
    qualifier_20.set(5, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece6_511_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece8_762_instances, &levelparallaxpiece9_763_instances, &levelparallaxpiece7_764_instances, &levelparallaxpiece10_765_instances, NULL};
    qualifier_0.set(7, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &switchdoor_735_instances, &jellyspring_739_instances, &breakableaquabrick_743_instances, &collapsingplatform_745_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &levelcrusher1_772_instances, &gimmickrotatingpipe_801_instances, &gimmickrotatingpipebase_804_instances, &objectspinningbeam_807_instances, &levellayer1loop03_808_instances, &breakableaquabrick2_813_instances, NULL};
    qualifier_7.set(36, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemygansekijr_816_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
    static ObjectList* qualifier_25_instances[] = {&gimmickswingplatform_768_instances, NULL};
    qualifier_25.set(1, &qualifier_25_instances[0]);
    static ObjectList* qualifier_24_instances[] = {&gimmickswingchain_767_instances, &gimmickswingplatform_768_instances, NULL};
    qualifier_24.set(2, &qualifier_24_instances[0]);
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
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &levellayer1loop03_808_instances, NULL};
    qualifier_11.set(4, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelcrusher1_772_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelcrusher1_772_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece6_648(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_649(88, 0), 0);
    add_background_object(create_levelparallaxpiece5_650(352, 0), 0);
    add_background_object(create_levelparallaxpiece8_762(192, 0), 0);
    add_background_object(create_levelparallaxpiece9_763(264, 0), 0);
    add_background_object(create_levelparallaxpiece7_764(312, 0), 0);
    add_background_object(create_levelparallaxpiece10_765(360, 0), 0);
    add_background_object(create_aquabrickback1_661(0, 768), 1);
    add_background_object(create_aquabrickback9_665(0, 896), 1);
    add_background_object(create_aquabrickback1_661(128, 768), 1);
    add_background_object(create_aquabrickback1_661(128, 640), 1);
    add_background_object(create_aquabrickback1_661(0, 640), 1);
    add_background_object(create_aquabrickback1_661(128, 896), 1);
    add_background_object(create_aquabrickback1_661(128, 1024), 1);
    add_background_object(create_aquabrickback1_661(0, 1024), 1);
    add_background_object(create_aquabrickback1_661(128, 1152), 1);
    add_background_object(create_aquabrickback1_661(0, 1152), 1);
    add_background_object(create_aquabrickback1_661(128, 1280), 1);
    add_background_object(create_aquabrickback1_661(0, 1280), 1);
    add_background_object(create_aquabrickback1_661(128, 1408), 1);
    add_background_object(create_aquabrickback1_661(0, 1408), 1);
    add_background_object(create_aquabrickback1_661(256, 768), 1);
    add_background_object(create_aquabrickback1_661(256, 640), 1);
    add_background_object(create_aquabrickback1_661(256, 896), 1);
    add_background_object(create_aquabrickback1_661(256, 1024), 1);
    add_background_object(create_aquabrickback1_661(256, 1152), 1);
    add_background_object(create_aquabrickback1_661(256, 1280), 1);
    add_background_object(create_aquabrickback1_661(256, 1408), 1);
    add_background_object(create_aquabrickback1_661(384, 768), 1);
    add_background_object(create_aquabrickback1_661(384, 640), 1);
    add_background_object(create_aquabrickback1_661(384, 896), 1);
    add_background_object(create_aquabrickback1_661(384, 1024), 1);
    add_background_object(create_aquabrickback1_661(384, 1152), 1);
    add_background_object(create_aquabrickback1_661(384, 1280), 1);
    add_background_object(create_aquabrickback1_661(384, 1408), 1);
    add_background_object(create_aquabrickback1_661(512, 768), 1);
    add_background_object(create_aquabrickback1_661(512, 640), 1);
    add_background_object(create_aquabrickback1_661(512, 896), 1);
    add_background_object(create_aquabrickback1_661(512, 1024), 1);
    add_background_object(create_aquabrickback1_661(512, 1152), 1);
    add_background_object(create_aquabrickback1_661(512, 1280), 1);
    add_background_object(create_aquabrickback1_661(512, 1408), 1);
    add_background_object(create_aquabrickback1_661(640, 768), 1);
    add_background_object(create_aquabrickback1_661(640, 640), 1);
    add_background_object(create_aquabrickback1_661(640, 896), 1);
    add_background_object(create_aquabrickback1_661(640, 1024), 1);
    add_background_object(create_aquabrickback1_661(640, 1152), 1);
    add_background_object(create_aquabrickback1_661(640, 1280), 1);
    add_background_object(create_aquabrickback1_661(640, 1408), 1);
    add_background_object(create_aquabrickback1_661(768, 768), 1);
    add_background_object(create_aquabrickback1_661(768, 640), 1);
    add_background_object(create_aquabrickback1_661(768, 896), 1);
    add_background_object(create_aquabrickback1_661(768, 1024), 1);
    add_background_object(create_aquabrickback1_661(768, 1152), 1);
    add_background_object(create_aquabrickback1_661(768, 1280), 1);
    add_background_object(create_aquabrickback1_661(768, 1408), 1);
    add_background_object(create_aquabrickback1_661(896, 768), 1);
    add_background_object(create_aquabrickback1_661(896, 640), 1);
    add_background_object(create_aquabrickback1_661(896, 896), 1);
    add_background_object(create_aquabrickback1_661(896, 1024), 1);
    add_background_object(create_aquabrickback1_661(896, 1152), 1);
    add_background_object(create_aquabrickback1_661(896, 1280), 1);
    add_background_object(create_aquabrickback1_661(896, 1408), 1);
    add_background_object(create_aquabrickback1_661(1024, 768), 1);
    add_background_object(create_aquabrickback1_661(1024, 640), 1);
    add_background_object(create_aquabrickback1_661(1024, 896), 1);
    add_background_object(create_aquabrickback1_661(1024, 1024), 1);
    add_background_object(create_aquabrickback1_661(1024, 1152), 1);
    add_background_object(create_aquabrickback1_661(1024, 1280), 1);
    add_background_object(create_aquabrickback1_661(1024, 1408), 1);
    add_background_object(create_aquabrickback1_661(1152, 896), 1);
    add_background_object(create_aquabrickback1_661(1152, 640), 1);
    add_background_object(create_aquabrickback1_661(1152, 1024), 1);
    add_background_object(create_aquabrickback1_661(1152, 1152), 1);
    add_background_object(create_aquabrickback1_661(1152, 1280), 1);
    add_background_object(create_aquabrickback1_661(1152, 1408), 1);
    add_background_object(create_aquabrickback1_661(1280, 640), 1);
    add_background_object(create_aquabrickback1_661(1280, 896), 1);
    add_background_object(create_aquabrickback1_661(1280, 1024), 1);
    add_background_object(create_aquabrickback1_661(1280, 1152), 1);
    add_background_object(create_aquabrickback1_661(1280, 1280), 1);
    add_background_object(create_aquabrickback1_661(1280, 1408), 1);
    add_background_object(create_aquabrickback1_661(1408, 896), 1);
    add_background_object(create_aquabrickback1_661(1408, 1024), 1);
    add_background_object(create_aquabrickback1_661(1408, 1152), 1);
    add_background_object(create_aquabrickback1_661(1408, 1280), 1);
    add_background_object(create_aquabrickback1_661(1408, 1408), 1);
    add_background_object(create_aquabrickback1_661(1536, 768), 1);
    add_background_object(create_aquabrickback1_661(1536, 640), 1);
    add_background_object(create_aquabrickback1_661(1536, 896), 1);
    add_background_object(create_aquabrickback1_661(1536, 1024), 1);
    add_background_object(create_aquabrickback1_661(1536, 1152), 1);
    add_background_object(create_aquabrickback1_661(1536, 1280), 1);
    add_background_object(create_aquabrickback1_661(1536, 1408), 1);
    add_background_object(create_aquabrickback1_661(1664, 896), 1);
    add_background_object(create_aquabrickback1_661(1664, 1024), 1);
    add_background_object(create_aquabrickback1_661(1664, 1152), 1);
    add_background_object(create_aquabrickback1_661(1664, 1280), 1);
    add_background_object(create_aquabrickback1_661(1664, 1408), 1);
    add_background_object(create_aquabrickback1_661(1792, 640), 1);
    add_background_object(create_aquabrickback1_661(1792, 896), 1);
    add_background_object(create_aquabrickback1_661(1792, 1024), 1);
    add_background_object(create_aquabrickback1_661(1792, 1152), 1);
    add_background_object(create_aquabrickback1_661(1792, 1280), 1);
    add_background_object(create_aquabrickback1_661(1792, 1408), 1);
    add_background_object(create_aquabrickback1_661(1920, 768), 1);
    add_background_object(create_aquabrickback1_661(1920, 640), 1);
    add_background_object(create_aquabrickback1_661(1920, 896), 1);
    add_background_object(create_aquabrickback1_661(1920, 1024), 1);
    add_background_object(create_aquabrickback1_661(1920, 1152), 1);
    add_background_object(create_aquabrickback1_661(1920, 1280), 1);
    add_background_object(create_aquabrickback1_661(1920, 1408), 1);
    add_background_object(create_aquabrickback1_661(128, 512), 1);
    add_background_object(create_aquabrickback1_661(0, 512), 1);
    add_background_object(create_aquabrickback1_661(256, 512), 1);
    add_background_object(create_aquabrickback1_661(384, 512), 1);
    add_background_object(create_aquabrickback1_661(512, 512), 1);
    add_background_object(create_aquabrickback1_661(640, 512), 1);
    add_background_object(create_aquabrickback1_661(768, 512), 1);
    add_background_object(create_aquabrickback1_661(896, 512), 1);
    add_background_object(create_aquabrickback1_661(1024, 512), 1);
    add_background_object(create_aquabrickback1_661(1152, 512), 1);
    add_background_object(create_aquabrickback1_661(1280, 512), 1);
    add_background_object(create_aquabrickback1_661(1408, 512), 1);
    add_background_object(create_aquabrickback1_661(1536, 512), 1);
    add_background_object(create_aquabrickback1_661(1664, 512), 1);
    add_background_object(create_aquabrickback1_661(1792, 512), 1);
    add_background_object(create_aquabrickback1_661(1920, 512), 1);
    add_background_object(create_aquabrickback10_664(1152, 768), 1);
    add_background_object(create_aquabrickback6_660(1408, 768), 1);
    add_background_object(create_aquabrickback7_662(1376, 768), 1);
    add_background_object(create_aquabrickback7_662(1184, 768), 1);
    add_background_object(create_aquabrickback8_663(1216, 880), 1);
    add_background_object(create_aquabrickback9_665(1408, 640), 1);
    add_background_object(create_aquabrickback9_665(1664, 640), 1);
    add_background_object(create_aquabrickback1_661(128, 384), 1);
    add_background_object(create_aquabrickback1_661(0, 384), 1);
    add_background_object(create_aquabrickback1_661(256, 384), 1);
    add_background_object(create_aquabrickback1_661(384, 384), 1);
    add_background_object(create_aquabrickback1_661(512, 384), 1);
    add_background_object(create_aquabrickback1_661(640, 384), 1);
    add_background_object(create_aquabrickback1_661(768, 384), 1);
    add_background_object(create_aquabrickback1_661(896, 384), 1);
    add_background_object(create_aquabrickback1_661(1024, 384), 1);
    add_background_object(create_aquabrickback1_661(1152, 384), 1);
    add_background_object(create_aquabrickback1_661(1280, 384), 1);
    add_background_object(create_aquabrickback1_661(1408, 384), 1);
    add_background_object(create_aquabrickback1_661(1536, 384), 1);
    add_background_object(create_aquabrickback1_661(1664, 384), 1);
    add_background_object(create_aquabrickback1_661(1792, 384), 1);
    add_background_object(create_aquabrickback1_661(1920, 384), 1);
    add_background_object(create_lightray1_659(1312, 768), 1);
    add_background_object(create_lightray1_659(1296, 800), 1);
    add_background_object(create_lightray2_666(1280, 832), 1);
    add_background_object(create_aquabrickback10_664(1664, 768), 1);
    add_background_object(create_aquabrickback6_660(1792, 768), 1);
    add_background_object(create_aquabrickback7_662(1696, 768), 1);
    add_background_object(create_aquabrickback8_663(1792, 880), 1);
    add_background_object(create_aquabrickback1_661(2048, 768), 1);
    add_background_object(create_aquabrickback1_661(2048, 640), 1);
    add_background_object(create_aquabrickback1_661(2048, 896), 1);
    add_background_object(create_aquabrickback1_661(2048, 1024), 1);
    add_background_object(create_aquabrickback1_661(2048, 1152), 1);
    add_background_object(create_aquabrickback1_661(2048, 1280), 1);
    add_background_object(create_aquabrickback1_661(2048, 1408), 1);
    add_background_object(create_aquabrickback1_661(2048, 512), 1);
    add_background_object(create_aquabrickback1_661(2048, 384), 1);
    add_background_object(create_aquabrickback1_661(2176, 768), 1);
    add_background_object(create_aquabrickback1_661(2176, 640), 1);
    add_background_object(create_aquabrickback1_661(2176, 896), 1);
    add_background_object(create_aquabrickback1_661(2176, 1024), 1);
    add_background_object(create_aquabrickback1_661(2176, 1152), 1);
    add_background_object(create_aquabrickback1_661(2176, 1280), 1);
    add_background_object(create_aquabrickback1_661(2176, 1408), 1);
    add_background_object(create_aquabrickback1_661(2176, 512), 1);
    add_background_object(create_aquabrickback1_661(2176, 384), 1);
    add_background_object(create_aquabrickback1_661(2304, 768), 1);
    add_background_object(create_aquabrickback1_661(2304, 640), 1);
    add_background_object(create_aquabrickback1_661(2304, 896), 1);
    add_background_object(create_aquabrickback1_661(2304, 1024), 1);
    add_background_object(create_aquabrickback1_661(2304, 1152), 1);
    add_background_object(create_aquabrickback1_661(2304, 1280), 1);
    add_background_object(create_aquabrickback1_661(2304, 1408), 1);
    add_background_object(create_aquabrickback1_661(2304, 512), 1);
    add_background_object(create_aquabrickback1_661(2304, 384), 1);
    add_background_object(create_aquabrickback1_661(2432, 768), 1);
    add_background_object(create_aquabrickback1_661(2432, 640), 1);
    add_background_object(create_aquabrickback1_661(2432, 896), 1);
    add_background_object(create_aquabrickback1_661(2432, 1024), 1);
    add_background_object(create_aquabrickback1_661(2432, 1152), 1);
    add_background_object(create_aquabrickback1_661(2432, 1280), 1);
    add_background_object(create_aquabrickback1_661(2432, 1408), 1);
    add_background_object(create_aquabrickback1_661(2432, 512), 1);
    add_background_object(create_aquabrickback1_661(2432, 384), 1);
    add_background_object(create_aquabrickback1_661(2560, 768), 1);
    add_background_object(create_aquabrickback1_661(2560, 640), 1);
    add_background_object(create_aquabrickback1_661(2560, 1024), 1);
    add_background_object(create_aquabrickback1_661(2560, 1152), 1);
    add_background_object(create_aquabrickback1_661(2560, 1280), 1);
    add_background_object(create_aquabrickback1_661(2560, 1408), 1);
    add_background_object(create_aquabrickback1_661(2560, 512), 1);
    add_background_object(create_aquabrickback1_661(2560, 384), 1);
    add_background_object(create_aquabrickback1_661(2688, 512), 1);
    add_background_object(create_aquabrickback1_661(2688, 384), 1);
    add_background_object(create_aquabrickback1_661(2816, 512), 1);
    add_background_object(create_aquabrickback1_661(2816, 384), 1);
    add_background_object(create_aquabrickback1_661(2944, 768), 1);
    add_background_object(create_aquabrickback1_661(2944, 640), 1);
    add_background_object(create_aquabrickback1_661(2944, 896), 1);
    add_background_object(create_aquabrickback1_661(2944, 1024), 1);
    add_background_object(create_aquabrickback1_661(2944, 1152), 1);
    add_background_object(create_aquabrickback1_661(2944, 1280), 1);
    add_background_object(create_aquabrickback1_661(2944, 1408), 1);
    add_background_object(create_aquabrickback1_661(2944, 512), 1);
    add_background_object(create_aquabrickback1_661(2944, 384), 1);
    add_background_object(create_aquabrickback1_661(3328, 768), 1);
    add_background_object(create_aquabrickback1_661(3328, 640), 1);
    add_background_object(create_aquabrickback1_661(3328, 1024), 1);
    add_background_object(create_aquabrickback1_661(3328, 1152), 1);
    add_background_object(create_aquabrickback1_661(3328, 1280), 1);
    add_background_object(create_aquabrickback1_661(3328, 1408), 1);
    add_background_object(create_aquabrickback1_661(3328, 512), 1);
    add_background_object(create_aquabrickback1_661(3328, 384), 1);
    add_background_object(create_aquabrickback1_661(3456, 640), 1);
    add_background_object(create_aquabrickback1_661(3456, 896), 1);
    add_background_object(create_aquabrickback1_661(3456, 1024), 1);
    add_background_object(create_aquabrickback1_661(3456, 1152), 1);
    add_background_object(create_aquabrickback1_661(3456, 1280), 1);
    add_background_object(create_aquabrickback1_661(3456, 1408), 1);
    add_background_object(create_aquabrickback1_661(3456, 512), 1);
    add_background_object(create_aquabrickback1_661(2688, 1280), 1);
    add_background_object(create_aquabrickback1_661(2688, 1408), 1);
    add_background_object(create_aquabrickback1_661(2816, 1280), 1);
    add_background_object(create_aquabrickback1_661(2816, 1408), 1);
    add_background_object(create_aquabrickback10_664(2688, 1152), 1);
    add_background_object(create_aquabrickback10_664(2688, 1024), 1);
    add_background_object(create_aquabrickback10_664(2560, 896), 1);
    add_background_object(create_aquabrickback10_664(2688, 768), 1);
    add_background_object(create_aquabrickback10_664(2688, 640), 1);
    add_background_object(create_aquabrickback6_660(2816, 640), 1);
    add_background_object(create_aquabrickback6_660(2816, 768), 1);
    add_background_object(create_aquabrickback6_660(2816, 896), 1);
    add_background_object(create_aquabrickback6_660(2816, 1024), 1);
    add_background_object(create_aquabrickback6_660(2816, 1152), 1);
    add_background_object(create_aquabrickback7_662(2720, 640), 1);
    add_background_object(create_aquabrickback7_662(2592, 896), 1);
    add_background_object(create_aquabrickback1_661(3584, 896), 1);
    add_background_object(create_aquabrickback1_661(3584, 1024), 1);
    add_background_object(create_aquabrickback1_661(3584, 1152), 1);
    add_background_object(create_aquabrickback1_661(3584, 1280), 1);
    add_background_object(create_aquabrickback1_661(3584, 1408), 1);
    add_background_object(create_aquabrickback1_661(3712, 896), 1);
    add_background_object(create_aquabrickback1_661(3712, 1024), 1);
    add_background_object(create_aquabrickback1_661(3712, 1152), 1);
    add_background_object(create_aquabrickback1_661(3712, 1280), 1);
    add_background_object(create_aquabrickback1_661(3712, 1408), 1);
    add_background_object(create_aquabrickback1_661(3584, 768), 1);
    add_background_object(create_aquabrickback1_661(3712, 768), 1);
    add_background_object(create_aquabrickback1_661(3072, 640), 1);
    add_background_object(create_aquabrickback1_661(3072, 896), 1);
    add_background_object(create_aquabrickback1_661(3072, 1024), 1);
    add_background_object(create_aquabrickback1_661(3072, 1152), 1);
    add_background_object(create_aquabrickback1_661(3072, 1280), 1);
    add_background_object(create_aquabrickback1_661(3072, 1408), 1);
    add_background_object(create_aquabrickback1_661(3072, 512), 1);
    add_background_object(create_aquabrickback1_661(3072, 384), 1);
    add_background_object(create_aquabrickback1_661(3200, 768), 1);
    add_background_object(create_aquabrickback1_661(3200, 640), 1);
    add_background_object(create_aquabrickback1_661(3200, 1024), 1);
    add_background_object(create_aquabrickback1_661(3200, 1152), 1);
    add_background_object(create_aquabrickback1_661(3200, 1280), 1);
    add_background_object(create_aquabrickback1_661(3200, 1408), 1);
    add_background_object(create_aquabrickback1_661(3200, 512), 1);
    add_background_object(create_aquabrickback1_661(3200, 384), 1);
    add_background_object(create_aquabrickback10_664(3712, 640), 1);
    add_background_object(create_aquabrickback10_664(3584, 512), 1);
    add_background_object(create_aquabrickback10_664(3456, 384), 1);
    add_background_object(create_aquabrickback1_661(3584, 640), 1);
    add_background_object(create_aquabrickback9_665(3072, 768), 1);
    add_background_object(create_aquabrickback9_665(3456, 768), 1);
    add_background_object(create_aquabrickback10_664(3200, 896), 1);
    add_background_object(create_aquabrickback6_660(3328, 896), 1);
    add_background_object(create_aquabrickback7_662(3232, 896), 1);
    add_background_object(create_aquabrickback6_660(3264, 960), 1);
    add_background_object(create_aquabrickback1_661(3392, 960), 1);
    add_background_object(create_lightray1_659(3344, 896), 1);
    add_background_object(create_lightray1_659(3328, 928), 1);
    add_background_object(create_lightray2_666(3312, 960), 1);
    add_background_object(create_aquabrickback1_661(3840, 1024), 1);
    add_background_object(create_aquabrickback1_661(3840, 1152), 1);
    add_background_object(create_aquabrickback1_661(3840, 1280), 1);
    add_background_object(create_aquabrickback1_661(3840, 1408), 1);
    add_background_object(create_aquabrickback1_661(3968, 1024), 1);
    add_background_object(create_aquabrickback1_661(3968, 1152), 1);
    add_background_object(create_aquabrickback1_661(3968, 1280), 1);
    add_background_object(create_aquabrickback1_661(3968, 1408), 1);
    add_background_object(create_aquabrickback1_661(4096, 1024), 1);
    add_background_object(create_aquabrickback1_661(4096, 1152), 1);
    add_background_object(create_aquabrickback1_661(4096, 1280), 1);
    add_background_object(create_aquabrickback1_661(4096, 1408), 1);
    add_background_object(create_aquabrickback1_661(4224, 1024), 1);
    add_background_object(create_aquabrickback1_661(4224, 1152), 1);
    add_background_object(create_aquabrickback1_661(4224, 1280), 1);
    add_background_object(create_aquabrickback1_661(4224, 1408), 1);
    add_background_object(create_aquabrickback1_661(4352, 1024), 1);
    add_background_object(create_aquabrickback1_661(4352, 1152), 1);
    add_background_object(create_aquabrickback1_661(4352, 1280), 1);
    add_background_object(create_aquabrickback1_661(4352, 1408), 1);
    add_background_object(create_aquabrickback1_661(4480, 1024), 1);
    add_background_object(create_aquabrickback1_661(4480, 1152), 1);
    add_background_object(create_aquabrickback1_661(4480, 1280), 1);
    add_background_object(create_aquabrickback1_661(4480, 1408), 1);
    add_background_object(create_aquabrickback1_661(4608, 1024), 1);
    add_background_object(create_aquabrickback1_661(4608, 1152), 1);
    add_background_object(create_aquabrickback1_661(4608, 1280), 1);
    add_background_object(create_aquabrickback1_661(4608, 1408), 1);
    add_background_object(create_aquabrickback1_661(4736, 1024), 1);
    add_background_object(create_aquabrickback1_661(4736, 1152), 1);
    add_background_object(create_aquabrickback1_661(4736, 1280), 1);
    add_background_object(create_aquabrickback1_661(4736, 1408), 1);
    add_background_object(create_aquabrickback1_661(4864, 1024), 1);
    add_background_object(create_aquabrickback1_661(4864, 1152), 1);
    add_background_object(create_aquabrickback1_661(4864, 1280), 1);
    add_background_object(create_aquabrickback1_661(4864, 1408), 1);
    add_background_object(create_aquabrickback1_661(4992, 1024), 1);
    add_background_object(create_aquabrickback1_661(4992, 1152), 1);
    add_background_object(create_aquabrickback1_661(4992, 1280), 1);
    add_background_object(create_aquabrickback1_661(4992, 1408), 1);
    add_background_object(create_aquabrickback1_661(5120, 1024), 1);
    add_background_object(create_aquabrickback1_661(5120, 1152), 1);
    add_background_object(create_aquabrickback1_661(5120, 1280), 1);
    add_background_object(create_aquabrickback1_661(5120, 1408), 1);
    add_background_object(create_aquabrickback1_661(5248, 1024), 1);
    add_background_object(create_aquabrickback1_661(5248, 1152), 1);
    add_background_object(create_aquabrickback1_661(5248, 1280), 1);
    add_background_object(create_aquabrickback1_661(5248, 1408), 1);
    add_background_object(create_aquabrickback1_661(5376, 1024), 1);
    add_background_object(create_aquabrickback1_661(5376, 1152), 1);
    add_background_object(create_aquabrickback1_661(5376, 1280), 1);
    add_background_object(create_aquabrickback1_661(5376, 1408), 1);
    add_background_object(create_aquabrickback1_661(4480, 896), 1);
    add_background_object(create_aquabrickback1_661(4608, 896), 1);
    add_background_object(create_aquabrickback1_661(4736, 896), 1);
    add_background_object(create_aquabrickback1_661(4864, 960), 1);
    add_background_object(create_aquabrickback1_661(4992, 960), 1);
    add_background_object(create_aquabrickback1_661(5120, 960), 1);
    add_background_object(create_aquabrickback1_661(5248, 960), 1);
    add_background_object(create_aquabrickback1_661(5376, 960), 1);
    add_background_object(create_aquabrickback1_661(4480, 768), 1);
    add_background_object(create_aquabrickback1_661(4608, 768), 1);
    add_background_object(create_aquabrickback1_661(4736, 768), 1);
    add_background_object(create_aquabrickback1_661(4992, 768), 1);
    add_background_object(create_aquabrickback1_661(4480, 640), 1);
    add_background_object(create_aquabrickback1_661(4608, 640), 1);
    add_background_object(create_aquabrickback1_661(4736, 640), 1);
    add_background_object(create_aquabrickback1_661(4864, 704), 1);
    add_background_object(create_aquabrickback1_661(4992, 704), 1);
    add_background_object(create_aquabrickback1_661(5120, 704), 1);
    add_background_object(create_aquabrickback1_661(5248, 704), 1);
    add_background_object(create_aquabrickback1_661(5376, 704), 1);
    add_background_object(create_aquabrickback1_661(5504, 960), 1);
    add_background_object(create_aquabrickback1_661(5632, 960), 1);
    add_background_object(create_aquabrickback1_661(5504, 832), 1);
    add_background_object(create_aquabrickback1_661(5632, 832), 1);
    add_background_object(create_aquabrickback1_661(5504, 704), 1);
    add_background_object(create_aquabrickback1_661(5632, 704), 1);
    add_background_object(create_aquabrickback1_661(5504, 1024), 1);
    add_background_object(create_aquabrickback1_661(5504, 1152), 1);
    add_background_object(create_aquabrickback1_661(5632, 1024), 1);
    add_background_object(create_aquabrickback1_661(5632, 1152), 1);
    add_background_object(create_aquabrickback1_661(5504, 1280), 1);
    add_background_object(create_aquabrickback1_661(5504, 1408), 1);
    add_background_object(create_aquabrickback1_661(5632, 1280), 1);
    add_background_object(create_aquabrickback1_661(5632, 1408), 1);
    add_background_object(create_aquabrickback10_664(5120, 768), 1);
    add_background_object(create_aquabrickback6_660(5248, 832), 1);
    add_background_object(create_aquabrickback7_662(5088, 832), 1);
    add_background_object(create_lightray1_659(5256, 832), 1);
    add_background_object(create_lightray1_659(5240, 864), 1);
    add_background_object(create_lightray2_666(5224, 896), 1);
    add_background_object(create_aquabrickback10_664(4992, 896), 1);
    add_background_object(create_aquabrickback7_662(5024, 896), 1);
    add_background_object(create_aquabrickback9_665(5376, 832), 1);
    add_background_object(create_aquabrickback9_665(4864, 832), 1);
    add_background_object(create_aquabrickback1_661(4864, 448), 1);
    add_background_object(create_aquabrickback1_661(4992, 448), 1);
    add_background_object(create_aquabrickback1_661(5120, 448), 1);
    add_background_object(create_aquabrickback1_661(4736, 512), 1);
    add_background_object(create_aquabrickback1_661(4608, 512), 1);
    add_background_object(create_aquabrickback8_663(4672, 496), 1);
    add_background_object(create_aquabrickback8_663(4928, 432), 1);
    add_background_object(create_aquabrickback1_661(4864, 576), 1);
    add_background_object(create_aquabrickback1_661(4992, 576), 1);
    add_background_object(create_aquabrickback1_661(5120, 576), 1);
    add_background_object(create_aquabrickback6_660(4736, 448), 1);
    add_background_object(create_aquabrickback1_661(4480, 512), 1);
    add_background_object(create_aquabrickback1_661(5248, 576), 1);
    add_background_object(create_aquabrickback1_661(5376, 576), 1);
    add_background_object(create_aquabrickback1_661(5504, 576), 1);
    add_background_object(create_aquabrickback1_661(5632, 576), 1);
    add_background_object(create_aquabrickback1_661(5248, 448), 1);
    add_background_object(create_aquabrickback1_661(5376, 448), 1);
    add_background_object(create_aquabrickback1_661(5504, 448), 1);
    add_background_object(create_aquabrickback1_661(5632, 448), 1);
    add_background_object(create_aquabrickback2_770(7568, 1008), 2);
    add_background_object(create_aquabrickback2_770(7696, 1008), 2);
    add_background_object(create_aquabrickback2_770(7824, 1008), 2);
    add_background_object(create_aquabrickback2_770(7952, 1008), 2);
    add_background_object(create_aquabrickback2_770(7568, 880), 2);
    add_background_object(create_aquabrickback2_770(7696, 880), 2);
    add_background_object(create_aquabrickback2_770(7824, 880), 2);
    add_background_object(create_aquabrickback2_770(7952, 880), 2);
    add_background_object(create_atsewerpipe6_672(8080, 1040), 2);
    add_background_object(create_atsewerpipe6_672(8080, 1072), 2);
    add_background_object(create_atsewerpipe6_672(8080, 1104), 2);
    add_background_object(create_atsewerpipe6_672(8080, 1008), 2);
    add_background_object(create_atsewerpipe6_672(8080, 976), 2);
    add_background_object(create_atsewerpipe6_672(8080, 944), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_771(6144, 1117), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_objectfuel_528(-284, 132), 2);
    add_object(create_objectjumppad_530(-384, 288), 2);
    add_object(create_waterjetright_673(0, 1136), 2);
    add_object(create_waterjetright_673(0, 1168), 2);
    add_object(create_waterjetright_673(128, 1136), 2);
    add_object(create_waterjetright_673(128, 1168), 2);
    add_object(create_waterjetright_673(-128, 1136), 2);
    add_object(create_waterjetright_673(-128, 1168), 2);
    add_object(create_waterjetright_673(1024, 464), 2);
    add_object(create_waterjetright_673(1024, 496), 2);
    add_object(create_waterjetright_673(1152, 464), 2);
    add_object(create_waterjetright_673(1152, 496), 2);
    add_object(create_waterjet_748(1424, 784), 2);
    add_object(create_waterjet_748(1456, 784), 2);
    add_object(create_waterjet_748(1424, 848), 2);
    add_object(create_waterjet_748(1456, 848), 2);
    add_object(create_waterjet_748(1424, 912), 2);
    add_object(create_waterjet_748(1456, 912), 2);
    add_object(create_waterjet_748(1424, 976), 2);
    add_object(create_waterjet_748(1456, 976), 2);
    add_object(create_waterjet_748(1424, 1040), 2);
    add_object(create_waterjet_748(1456, 1040), 2);
    add_object(create_waterjet_748(1424, 1104), 2);
    add_object(create_waterjet_748(1456, 1104), 2);
    add_object(create_waterjetright_673(896, 464), 2);
    add_object(create_waterjetright_673(896, 496), 2);
    add_object(create_levelcrusher1_772(2960, 1568), 2);
    add_object(create_levelcrusher1_772(3152, 1248), 2);
    add_object(create_levelcrusher1_772(3344, 1616), 2);
    add_object(create_levelcrusher1_772(3696, 1424), 2);
    add_object(create_waterjetmaker_773(5936, 1152), 2);
    add_object(create_waterjetright_673(7456, 656), 2);
    add_object(create_waterjetright_673(7456, 624), 2);
    add_object(create_waterjetright_673(7328, 656), 2);
    add_object(create_waterjetright_673(7328, 624), 2);
    add_object(create_waterjetright_673(7584, 656), 2);
    add_object(create_waterjetright_673(7584, 624), 2);
    add_object(create_waterjetright_673(7168, 1096), 2);
    add_object(create_waterjetright_673(7192, 1000), 2);
    add_object(create_waterjetright_673(7200, 888), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_atsewerpipe9_668(9584, 1296), 3);
    add_background_object(create_atsewerpipe10_701(9424, 1296), 3);
    add_background_object(create_atsewerpipe9_668(9712, 1296), 3);
    add_background_object(create_aquasign1_774(9608, 1056), 3);
    add_background_object(create_aquasign2_775(9200, 1360), 3);
    add_background_object(create_aquatree1_702(3824, 256), 3);
    add_background_object(create_aquadirt2_692(3888, 392), 3);
    add_background_object(create_aquadirt2_692(3976, 392), 3);
    add_background_object(create_atwaterfaucet3_681(10288, 784), 3);
    add_background_object(create_atwaterfaucet3_681(10288, 848), 3);
    add_background_object(create_atwaterfaucet3_681(10288, 912), 3);
    add_background_object(create_aquabrick11_688(10496, 736), 3);
    add_background_object(create_aquabrick11_688(10496, 832), 3);
    add_background_object(create_aquabrick11_688(10496, 928), 3);
    add_background_object(create_aquabrick1_676(10560, 928), 3);
    add_background_object(create_aquabrick1_676(10496, 960), 3);
    add_background_object(create_aquabrick1_676(10496, 896), 3);
    add_background_object(create_aquabrick1_676(10496, 864), 3);
    add_background_object(create_aquabrick1_676(10496, 800), 3);
    add_background_object(create_aquabrick1_676(10496, 768), 3);
    add_background_object(create_aqualargepipe4_776(9416, 720), 3);
    add_background_object(create_aqualargepipe15_777(9560, 560), 3);
    add_background_object(create_aqualargepipe14_778(9704, 512), 3);
    add_background_object(create_aquaplant1_670(8240, 808), 3);
    add_background_object(create_aquadirt2_692(8272, 840), 3);
    add_background_object(create_aquadirt2_692(8136, 824), 3);
    add_background_object(create_aquadirt6_678(8064, 848), 3);
    add_background_object(create_aquadirt_689(8128, 832), 3);
    add_background_object(create_aquadirt5_695(8192, 832), 3);
    add_background_object(create_aquabrickarch2_690(10384, 576), 3);
    add_background_object(create_aquabrickarch1_669(10384, 704), 3);
    add_background_object(create_aquabrickarch1_669(10384, 768), 3);
    add_background_object(create_aquabrickarch1_669(10384, 832), 3);
    add_background_object(create_aquabrickarch1_669(10384, 896), 3);
    add_background_object(create_aquabrickarch1_669(10384, 960), 3);
    add_background_object(create_aquabrickarch3_705(10048, 576), 3);
    add_background_object(create_aquabrickarch1_669(10176, 704), 3);
    add_background_object(create_aquabrickarch1_669(10176, 768), 3);
    add_background_object(create_aquabrickarch1_669(10176, 832), 3);
    add_background_object(create_aquabrickarch1_669(10176, 896), 3);
    add_background_object(create_aquabrickarch1_669(10176, 960), 3);
    add_background_object(create_aquabrick21_683(9216, 1472), 3);
    add_background_object(create_atsewerpipe1_671(8576, 1456), 3);
    add_background_object(create_atsewerpipe1_671(8448, 1456), 3);
    add_background_object(create_aqualargepipe4_776(9696, 1136), 3);
    add_background_object(create_aqualargepipe4_776(9760, 1136), 3);
    add_background_object(create_atsewerpipe8_680(8880, 1360), 3);
    add_background_object(create_atsewerpipe8_680(8880, 1232), 3);
    add_background_object(create_atsewerpipe8_680(8880, 1104), 3);
    add_background_object(create_atsewerpipe8_680(8880, 976), 3);
    add_background_object(create_atsewerpipe8_680(8880, 848), 3);
    add_background_object(create_atsewerpipe1_671(8160, 944), 3);
    add_background_object(create_atsewerpipe1_671(8336, 560), 3);
    add_background_object(create_atsewerpipe1_671(8464, 560), 3);
    add_background_object(create_aqualargepipe4_776(9152, 1104), 3);
    add_background_object(create_aqualargepipe4_776(8896, 1104), 3);
    add_background_object(create_aqualargepipe4_776(8960, 1104), 3);
    add_background_object(create_aquabrick1_676(8832, 800), 3);
    add_background_object(create_aquabrick1_676(8832, 832), 3);
    add_background_object(create_aquabrick5_682(8192, 1120), 3);
    add_background_object(create_aquabrick21_683(8128, 1120), 3);
    add_background_object(create_aqualargepipe2_779(7280, 1024), 3);
    add_background_object(create_aqualargepipe2_779(7280, 960), 3);
    add_background_object(create_aqualargepipe2_779(7280, 896), 3);
    add_background_object(create_aqualargepipe2_779(7280, 832), 3);
    add_background_object(create_aqualargepipe2_779(7280, 784), 3);
    add_background_object(create_aqualargepipe2_779(7632, 896), 3);
    add_background_object(create_aqualargepipe2_779(7632, 784), 3);
    add_background_object(create_aqualargepipe2_779(7632, 848), 3);
    add_background_object(create_aqualargepipe4_776(7408, 656), 3);
    add_background_object(create_aqualargepipe4_776(7472, 656), 3);
    add_background_object(create_aquabrick23_727(7568, 656), 3);
    add_background_object(create_aqualargepipe4_776(7504, 656), 3);
    add_background_object(create_aquabrick22_726(7280, 656), 3);
    add_background_object(create_aquabrick5_682(7104, 880), 3);
    add_background_object(create_aquabrick21_683(7168, 1200), 3);
    add_background_object(create_aquabrick1_676(7008, 1104), 3);
    add_background_object(create_aquabrick1_676(6832, 1104), 3);
    add_background_object(create_aquabrick1_676(6000, 1120), 3);
    add_background_object(create_aquabrick1_676(6848, 1088), 3);
    add_background_object(create_atsewerpipe1_671(6352, 592), 3);
    add_background_object(create_atsewerpipe1_671(6480, 592), 3);
    add_background_object(create_atsewerpipe1_671(6608, 592), 3);
    add_background_object(create_aquabrick1_676(6080, 960), 3);
    add_background_object(create_aquabrick1_676(6336, 320), 3);
    add_background_object(create_atsewerpipe1_671(6000, 528), 3);
    add_background_object(create_atsewerpipe1_671(5872, 528), 3);
    add_background_object(create_atsewerpipe1_671(5488, 464), 3);
    add_background_object(create_atsewerpipe1_671(5616, 496), 3);
    add_background_object(create_atsewerpipe1_671(5744, 528), 3);
    add_background_object(create_atwaterfaucet_722(5456, 312), 3);
    add_background_object(create_aquabrick21_683(5376, 832), 3);
    add_background_object(create_aquabrick1_676(5376, 832), 3);
    add_background_object(create_aquabrick21_683(5504, 320), 3);
    add_background_object(create_aquabrick1_676(5504, 608), 3);
    add_background_object(create_aquabrick1_676(5760, 480), 3);
    add_background_object(create_atsewerpipe6_672(5592, 1064), 3);
    add_background_object(create_atsewerpipe6_672(5432, 1072), 3);
    add_background_object(create_atsewerpipe3_718(5608, 1360), 3);
    add_background_object(create_atsewerpipe3_718(5608, 1224), 3);
    add_background_object(create_atsewerpipe8_680(4064, 1440), 3);
    add_background_object(create_atsewerpipe8_680(4352, 1440), 3);
    add_background_object(create_atsewerpipe8_680(4064, 1568), 3);
    add_background_object(create_atsewerpipe8_680(4352, 1568), 3);
    add_background_object(create_atsewerpipe8_680(4064, 1696), 3);
    add_background_object(create_atsewerpipe8_680(4352, 1696), 3);
    add_background_object(create_atsewerpipe10_701(4064, 1280), 3);
    add_background_object(create_atsewerpipe11_679(4352, 1280), 3);
    add_background_object(create_atsewerpipe9_668(4224, 1280), 3);
    add_background_object(create_aquatree1_702(5560, 136), 3);
    add_background_object(create_aquadirt2_692(5824, 280), 3);
    add_background_object(create_aquadirt2_692(5656, 280), 3);
    add_background_object(create_aquadirt2_692(5720, 280), 3);
    add_background_object(create_aquabrick14_693(5488, 288), 3);
    add_background_object(create_aquadirt6_678(5760, 288), 3);
    add_background_object(create_aquadirt6_678(5632, 288), 3);
    add_background_object(create_aquadirt6_678(5504, 288), 3);
    add_background_object(create_aquadirt_689(5504, 272), 3);
    add_background_object(create_aquabrickarch1_669(5264, 1104), 3);
    add_background_object(create_aquabrickarch1_669(5264, 1168), 3);
    add_background_object(create_aquabrick21_683(5376, 1472), 3);
    add_background_object(create_aquabrick4_707(4984, 1184), 3);
    add_background_object(create_aquabrick4_707(4984, 1120), 3);
    add_background_object(create_aquabrick27_780(4992, 1056), 3);
    add_background_object(create_aquabrick3_691(4992, 1504), 3);
    add_background_object(create_aquabrick3_691(4736, 1504), 3);
    add_background_object(create_aquabrick3_691(4608, 1536), 3);
    add_background_object(create_aquabrickslope3_710(4672, 1264), 3);
    add_background_object(create_aquabrickslope4_711(4800, 1232), 3);
    add_background_object(create_aquabrick21_683(3136, 1696), 3);
    add_background_object(create_aquabrick5_682(2816, 1696), 3);
    add_background_object(create_aquabrick5_682(3200, 1664), 3);
    add_background_object(create_aquabrick21_683(3520, 1664), 3);
    add_background_object(create_aquabrick5_682(2432, 1600), 3);
    add_background_object(create_atsewerpipe6_672(1656, 1360), 3);
    add_background_object(create_aquabrick21_683(3200, 1216), 3);
    add_background_object(create_atsewerpipe3_718(2752, 1056), 3);
    add_background_object(create_atsewerpipe3_718(2720, 1056), 3);
    add_background_object(create_atsewerpipe6_672(2736, 1048), 3);
    add_background_object(create_atsewerpipe6_672(2736, 1080), 3);
    add_background_object(create_atsewerpipe6_672(2736, 1016), 3);
    add_background_object(create_atsewerpipe6_672(2672, 1104), 3);
    add_background_object(create_atsewerpipe3_718(2768, 1008), 3);
    add_background_object(create_atsewerpipe6_672(3840, 1184), 3);
    add_background_object(create_aquabrickarch1_669(3896, 1208), 3);
    add_background_object(create_aquabrickarch1_669(3896, 1144), 3);
    add_background_object(create_aquabrickarch1_669(4072, 1208), 3);
    add_background_object(create_aquabrickarch1_669(4072, 1144), 3);
    add_background_object(create_aquabrickarch1_669(4232, 1176), 3);
    add_background_object(create_aquabrickarch1_669(4344, 1176), 3);
    add_background_object(create_aquabrickarch1_669(4464, 1216), 3);
    add_background_object(create_aquabrickarch2_690(4464, 832), 3);
    add_background_object(create_atwaterfaucet3_681(4688, 880), 3);
    add_background_object(create_atwaterfaucet3_681(4688, 944), 3);
    add_background_object(create_atwaterfaucet3_681(4688, 1008), 3);
    add_background_object(create_atwaterfaucet3_681(4688, 1072), 3);
    add_background_object(create_atwaterfaucet3_681(4688, 1136), 3);
    add_background_object(create_aquabrickarch2_690(5264, 784), 3);
    add_background_object(create_aquabrick1_676(5376, 800), 3);
    add_background_object(create_aquadirt_689(5184, 752), 3);
    add_background_object(create_aquabrick5_682(5120, 768), 3);
    add_background_object(create_aquadirt2_692(5160, 744), 3);
    add_background_object(create_aquatree1_702(4672, 600), 3);
    add_background_object(create_aquadirt2_692(4792, 744), 3);
    add_background_object(create_aquabrick21_683(2112, 480), 3);
    add_background_object(create_aquabrick14_693(4720, 960), 3);
    add_background_object(create_aquabrick14_693(4720, 896), 3);
    add_background_object(create_aquabrick21_683(4736, 896), 3);
    add_background_object(create_aquabrick3_691(3072, 896), 3);
    add_background_object(create_aquabrick3_691(2944, 864), 3);
    add_background_object(create_aquadirt_689(1856, 720), 3);
    add_background_object(create_aquadirt_689(1792, 720), 3);
    add_background_object(create_aquabrick2_706(1952, 912), 3);
    add_background_object(create_aquabrick10_677(1696, 1664), 3);
    add_background_object(create_aquabrick3_691(1792, 1632), 3);
    add_background_object(create_aqualargepipe10_781(1024, 960), 3);
    add_background_object(create_aqualargepipe11_782(1024, 768), 3);
    add_background_object(create_aqualargepipe2_779(1360, 624), 3);
    add_background_object(create_aqualargepipe2_779(1360, 688), 3);
    add_background_object(create_aqualargepipe2_779(1360, 704), 3);
    add_background_object(create_aqualargepipe4_776(1008, 496), 3);
    add_background_object(create_aqualargepipe4_776(1072, 496), 3);
    add_background_object(create_aqualargepipe4_776(1136, 496), 3);
    add_background_object(create_aqualargepipe4_776(1200, 496), 3);
    add_background_object(create_aquabrick23_727(1296, 496), 3);
    add_background_object(create_aqualargepipe4_776(1232, 496), 3);
    add_background_object(create_aqualargepipe7_783(880, 624), 3);
    add_background_object(create_aquabrick22_726(880, 496), 3);
    add_background_object(create_aqualargepipe4_776(1008, 720), 3);
    add_background_object(create_aquabrick30_784(880, 656), 3);
    add_background_object(create_aqualargepipe2_779(1200, 944), 3);
    add_background_object(create_aqualargepipe2_779(1200, 912), 3);
    add_background_object(create_aqualargepipe4_776(1008, 1136), 3);
    add_background_object(create_aqualargepipe2_779(880, 1264), 3);
    add_background_object(create_aquabrick22_726(880, 1136), 3);
    add_background_object(create_aqualargepipe2_779(880, 1424), 3);
    add_background_object(create_aqualargepipe2_779(880, 1360), 3);
    add_background_object(create_aqualargepipe2_779(880, 1296), 3);
    add_background_object(create_aqualargepipe4_776(656, 1616), 3);
    add_background_object(create_aqualargepipe4_776(528, 1616), 3);
    add_background_object(create_aqualargepipe4_776(592, 1616), 3);
    add_background_object(create_aqualargepipe4_776(688, 1616), 3);
    add_background_object(create_aqualargepipe2_779(336, 1296), 3);
    add_background_object(create_aqualargepipe2_779(336, 1360), 3);
    add_background_object(create_aqualargepipe9_785(384, 1440), 3);
    add_background_object(create_aqualargepipe10_781(704, 1440), 3);
    add_background_object(create_aqualargepipe2_779(336, 1424), 3);
    add_background_object(create_aqualargepipe4_776(-48, 1168), 3);
    add_background_object(create_aqualargepipe4_776(208, 1168), 3);
    add_background_object(create_aqualargepipe4_776(16, 1168), 3);
    add_background_object(create_aqualargepipe4_776(80, 1168), 3);
    add_background_object(create_aqualargepipe4_776(144, 1168), 3);
    add_background_object(create_aquabrick23_727(272, 1168), 3);
    add_background_object(create_aquabrick3_691(1024, 672), 3);
    add_background_object(create_aquabrick26_786(256, 1120), 3);
    add_background_object(create_aquabrick27_780(832, 1088), 3);
    add_background_object(create_aquabrick28_787(384, 1440), 3);
    add_background_object(create_aquabrick29_788(704, 1440), 3);
    add_background_object(create_aquabrick3_691(128, 1024), 3);
    add_background_object(create_aquabrick3_691(0, 1024), 3);
    add_background_object(create_aquabrick3_691(0, 1216), 3);
    add_background_object(create_aquabrick3_691(0, 1280), 3);
    add_background_object(create_aquabrick3_691(0, 1344), 3);
    add_background_object(create_aquabrick3_691(128, 1216), 3);
    add_background_object(create_aquabrick3_691(128, 1280), 3);
    add_background_object(create_aquabrick3_691(128, 1344), 3);
    add_background_object(create_aquabrick1_676(0, 1088), 3);
    add_background_object(create_aquabrick1_676(64, 1088), 3);
    add_background_object(create_aquabrick1_676(128, 1088), 3);
    add_background_object(create_aquabrick1_676(192, 1088), 3);
    add_background_object(create_aquabrick1_676(0, 1184), 3);
    add_background_object(create_aquabrick1_676(64, 1184), 3);
    add_background_object(create_aquabrick1_676(128, 1184), 3);
    add_background_object(create_aquabrick1_676(192, 1184), 3);
    add_background_object(create_aquabrick3_691(128, 960), 3);
    add_background_object(create_aquabrick3_691(0, 960), 3);
    add_background_object(create_aquabrick3_691(128, 896), 3);
    add_background_object(create_aquabrick3_691(0, 896), 3);
    add_background_object(create_aquabrick23_727(256, 1184), 3);
    add_background_object(create_aquabrick30_784(448, 1440), 3);
    add_background_object(create_aquabrick31_789(704, 1440), 3);
    add_background_object(create_aquabrick3_691(128, 1408), 3);
    add_background_object(create_aquabrick3_691(128, 1472), 3);
    add_background_object(create_aquabrick3_691(128, 1536), 3);
    add_background_object(create_aquabrick3_691(128, 1600), 3);
    add_background_object(create_aquabrick3_691(256, 1696), 3);
    add_background_object(create_aquabrick3_691(256, 1760), 3);
    add_background_object(create_aquabrick3_691(128, 1664), 3);
    add_background_object(create_aquabrick3_691(128, 1728), 3);
    add_background_object(create_aquabrick3_691(256, 1824), 3);
    add_background_object(create_aquabrick3_691(128, 1792), 3);
    add_background_object(create_aquabrick3_691(384, 1632), 3);
    add_background_object(create_aquabrick3_691(384, 1696), 3);
    add_background_object(create_aquabrick3_691(384, 1760), 3);
    add_background_object(create_aquabrick3_691(384, 1824), 3);
    add_background_object(create_aquabrick3_691(512, 1632), 3);
    add_background_object(create_aquabrick3_691(512, 1696), 3);
    add_background_object(create_aquabrick3_691(512, 1760), 3);
    add_background_object(create_aquabrick3_691(512, 1824), 3);
    add_background_object(create_aquabrick3_691(128, 1824), 3);
    add_background_object(create_aquabrick3_691(640, 1632), 3);
    add_background_object(create_aquabrick3_691(640, 1696), 3);
    add_background_object(create_aquabrick3_691(640, 1760), 3);
    add_background_object(create_aquabrick3_691(640, 1824), 3);
    add_background_object(create_aquabrick3_691(768, 1632), 3);
    add_background_object(create_aquabrick3_691(768, 1696), 3);
    add_background_object(create_aquabrick3_691(768, 1760), 3);
    add_background_object(create_aquabrick3_691(768, 1824), 3);
    add_background_object(create_aquabrick1_676(256, 1088), 3);
    add_background_object(create_aquabrick3_691(384, 1024), 3);
    add_background_object(create_aquabrick3_691(256, 1024), 3);
    add_background_object(create_aquabrick3_691(384, 960), 3);
    add_background_object(create_aquabrick3_691(256, 960), 3);
    add_background_object(create_aquabrick3_691(384, 896), 3);
    add_background_object(create_aquabrick3_691(256, 896), 3);
    add_background_object(create_aquabrick1_676(320, 1088), 3);
    add_background_object(create_aquabrick1_676(384, 1088), 3);
    add_background_object(create_aquabrick3_691(512, 1024), 3);
    add_background_object(create_aquabrick3_691(512, 960), 3);
    add_background_object(create_aquabrick3_691(512, 896), 3);
    add_background_object(create_aquabrick3_691(576, 1216), 3);
    add_background_object(create_aquabrick3_691(576, 1152), 3);
    add_background_object(create_aquabrick3_691(576, 1088), 3);
    add_background_object(create_aquabrick3_691(576, 1344), 3);
    add_background_object(create_aquabrick3_691(576, 1280), 3);
    add_background_object(create_aquabrick3_691(640, 1024), 3);
    add_background_object(create_aquabrick3_691(640, 960), 3);
    add_background_object(create_aquabrick3_691(640, 896), 3);
    add_background_object(create_aquabrick3_691(768, 1024), 3);
    add_background_object(create_aquabrick3_691(768, 960), 3);
    add_background_object(create_aquabrick3_691(768, 896), 3);
    add_background_object(create_aquabrick3_691(896, 1024), 3);
    add_background_object(create_aquabrick3_691(896, 960), 3);
    add_background_object(create_aquabrick3_691(896, 896), 3);
    add_background_object(create_aquabrick3_691(576, 1376), 3);
    add_background_object(create_aquabrick3_691(576, 1440), 3);
    add_background_object(create_aquabrick3_691(576, 1504), 3);
    add_background_object(create_aquabrick3_691(896, 1664), 3);
    add_background_object(create_aquabrick3_691(896, 1728), 3);
    add_background_object(create_aquabrick3_691(896, 1792), 3);
    add_background_object(create_aquabrick22_726(896, 1152), 3);
    add_background_object(create_aquabrick29_788(1024, 960), 3);
    add_background_object(create_aquabrick31_789(1024, 960), 3);
    add_background_object(create_aquabrick23_727(1024, 832), 3);
    add_background_object(create_aquabrick21_683(448, 1312), 3);
    add_background_object(create_aquabrick21_683(448, 1184), 3);
    add_background_object(create_aquabrick21_683(448, 1088), 3);
    add_background_object(create_aquabrick5_682(256, 1312), 3);
    add_background_object(create_aquabrick5_682(256, 1440), 3);
    add_background_object(create_aquabrick5_682(256, 1536), 3);
    add_background_object(create_aquabrick3_691(256, 1664), 3);
    add_background_object(create_aquabrick5_682(704, 1056), 3);
    add_background_object(create_aquabrick5_682(704, 1184), 3);
    add_background_object(create_aquabrick5_682(704, 1312), 3);
    add_background_object(create_aquabrick1_676(384, 1632), 3);
    add_background_object(create_aquabrick1_676(448, 1632), 3);
    add_background_object(create_aquabrick1_676(512, 1632), 3);
    add_background_object(create_aquabrick1_676(576, 1632), 3);
    add_background_object(create_aquabrick1_676(640, 1632), 3);
    add_background_object(create_aquabrick1_676(704, 1632), 3);
    add_background_object(create_aquabrick1_676(768, 1632), 3);
    add_background_object(create_aquabrick1_676(832, 1632), 3);
    add_background_object(create_aquabrick21_683(896, 1408), 3);
    add_background_object(create_aquabrick21_683(896, 1280), 3);
    add_background_object(create_aquabrick21_683(896, 1536), 3);
    add_background_object(create_aquabrick3_691(896, 1824), 3);
    add_background_object(create_aquabrick1_676(576, 1536), 3);
    add_background_object(create_aquabrick1_676(640, 1536), 3);
    add_background_object(create_aquabrick1_676(960, 1056), 3);
    add_background_object(create_aquabrick1_676(896, 1056), 3);
    add_background_object(create_aquabrick1_676(832, 1056), 3);
    add_background_object(create_aquabrick26_786(1024, 768), 3);
    add_background_object(create_aquabrick28_787(832, 640), 3);
    add_background_object(create_aquabrick30_784(896, 640), 3);
    add_background_object(create_aquabrick22_726(896, 512), 3);
    add_background_object(create_aquabrick23_727(1280, 512), 3);
    add_background_object(create_aquabrick3_691(896, 832), 3);
    add_background_object(create_aquabrick3_691(768, 832), 3);
    add_background_object(create_aquabrick3_691(1024, 544), 3);
    add_background_object(create_aquabrick27_780(832, 448), 3);
    add_background_object(create_aquabrick26_786(1280, 448), 3);
    add_background_object(create_aquabrick3_691(1024, 384), 3);
    add_background_object(create_aquabrick3_691(1024, 320), 3);
    add_background_object(create_aquabrick3_691(896, 384), 3);
    add_background_object(create_aquabrick3_691(896, 320), 3);
    add_background_object(create_aquabrick3_691(768, 384), 3);
    add_background_object(create_aquabrick3_691(768, 320), 3);
    add_background_object(create_aquabrick3_691(1408, 384), 3);
    add_background_object(create_aquabrick3_691(1408, 320), 3);
    add_background_object(create_aquabrick3_691(1280, 384), 3);
    add_background_object(create_aquabrick3_691(1280, 320), 3);
    add_background_object(create_aquabrick5_682(704, 704), 3);
    add_background_object(create_aquabrick5_682(704, 576), 3);
    add_background_object(create_aquabrick5_682(704, 448), 3);
    add_background_object(create_aquabrick5_682(704, 416), 3);
    add_background_object(create_aquabrick1_676(832, 416), 3);
    add_background_object(create_aquabrick1_676(896, 416), 3);
    add_background_object(create_aquabrick1_676(960, 416), 3);
    add_background_object(create_aquabrick1_676(1024, 416), 3);
    add_background_object(create_aquabrick1_676(1088, 416), 3);
    add_background_object(create_aquabrick1_676(1280, 416), 3);
    add_background_object(create_aquabrick1_676(1344, 416), 3);
    add_background_object(create_aquabrick1_676(1408, 416), 3);
    add_background_object(create_aquabrick21_683(1472, 544), 3);
    add_background_object(create_aquabrick21_683(1472, 416), 3);
    add_background_object(create_aquabrick5_682(1280, 640), 3);
    add_background_object(create_aquabrick1_676(1344, 736), 3);
    add_background_object(create_aquabrick1_676(1280, 736), 3);
    add_background_object(create_aquabrick1_676(1088, 736), 3);
    add_background_object(create_aquabrick1_676(1024, 736), 3);
    add_background_object(create_aquabrick3_691(1024, 608), 3);
    add_background_object(create_aquabrick21_683(1472, 608), 3);
    add_background_object(create_aquabrick1_676(1472, 736), 3);
    add_background_object(create_aquabrick1_676(1536, 736), 3);
    add_background_object(create_aquabrick3_691(1152, 672), 3);
    add_background_object(create_aquabrick3_691(1152, 544), 3);
    add_background_object(create_aquabrick1_676(1216, 736), 3);
    add_background_object(create_aquabrick1_676(1152, 736), 3);
    add_background_object(create_aquabrick3_691(1152, 608), 3);
    add_background_object(create_aquabrick3_691(1152, 384), 3);
    add_background_object(create_aquabrick3_691(1152, 320), 3);
    add_background_object(create_aquabrick1_676(1152, 416), 3);
    add_background_object(create_aquabrick1_676(1216, 416), 3);
    add_background_object(create_aquabrick1_676(1088, 512), 3);
    add_background_object(create_aquabrick1_676(1024, 512), 3);
    add_background_object(create_aquabrick1_676(1216, 512), 3);
    add_background_object(create_aquabrick1_676(1152, 512), 3);
    add_background_object(create_aquabrick1_676(1216, 768), 3);
    add_background_object(create_aquabrick1_676(1216, 800), 3);
    add_background_object(create_aquabrick1_676(1216, 832), 3);
    add_background_object(create_aquabrick1_676(1216, 864), 3);
    add_background_object(create_aquabrick1_676(1216, 896), 3);
    add_background_object(create_aquabrick1_676(1216, 928), 3);
    add_background_object(create_aquabrick1_676(1216, 960), 3);
    add_background_object(create_aquabrick1_676(1216, 992), 3);
    add_background_object(create_aquabrick1_676(1216, 1024), 3);
    add_background_object(create_aquabrick1_676(1216, 1056), 3);
    add_background_object(create_aquabrick1_676(1216, 1088), 3);
    add_background_object(create_aquabrick1_676(1216, 1120), 3);
    add_background_object(create_aquabrick1_676(1216, 1152), 3);
    add_background_object(create_aquabrick1_676(1152, 1152), 3);
    add_background_object(create_aquabrick1_676(1088, 1152), 3);
    add_background_object(create_aquabrick1_676(1024, 1152), 3);
    add_background_object(create_aquabrick4_707(1272, 768), 3);
    add_background_object(create_aquabrick4_707(1272, 832), 3);
    add_background_object(create_aquabrick4_707(1272, 896), 3);
    add_background_object(create_aquabrick4_707(1272, 960), 3);
    add_background_object(create_aquabrick4_707(1272, 1024), 3);
    add_background_object(create_aquabrick4_707(1272, 1088), 3);
    add_background_object(create_aquabrick1_676(1280, 1152), 3);
    add_background_object(create_aquabrick1_676(1344, 1152), 3);
    add_background_object(create_aquabrick3_691(1024, 1184), 3);
    add_background_object(create_aquabrick3_691(1024, 1248), 3);
    add_background_object(create_aquabrick3_691(1152, 1184), 3);
    add_background_object(create_aquabrick2_706(1344, 1136), 3);
    add_background_object(create_aquabrick2_706(1280, 1136), 3);
    add_background_object(create_aquabrick5_682(1280, 1184), 3);
    add_background_object(create_aquabrick21_683(1472, 1184), 3);
    add_background_object(create_aquabrick1_676(1472, 1152), 3);
    add_background_object(create_aquabrick1_676(1536, 1152), 3);
    add_background_object(create_aquabrick2_706(1536, 1136), 3);
    add_background_object(create_aquabrick2_706(1472, 1136), 3);
    add_background_object(create_aquabrick3_691(1152, 1248), 3);
    add_background_object(create_aquabrick3_691(1024, 1312), 3);
    add_background_object(create_aquabrick3_691(1024, 1376), 3);
    add_background_object(create_aquabrick3_691(1024, 1440), 3);
    add_background_object(create_aquabrick3_691(1024, 1504), 3);
    add_background_object(create_aquabrick3_691(1024, 1568), 3);
    add_background_object(create_aquabrick3_691(1024, 1632), 3);
    add_background_object(create_aquabrick3_691(1024, 1696), 3);
    add_background_object(create_aquabrick3_691(1152, 1696), 3);
    add_background_object(create_aquabrick3_691(1152, 1760), 3);
    add_background_object(create_aquabrick3_691(1024, 1760), 3);
    add_background_object(create_aquabrick3_691(1024, 1824), 3);
    add_background_object(create_aquabrick3_691(1152, 1824), 3);
    add_background_object(create_aquabrick13_712(1472, 1136), 3);
    add_background_object(create_aquabrick15_685(1472, 1152), 3);
    add_background_object(create_aquabrick16_684(1384, 1152), 3);
    add_background_object(create_aquabrick6_709(1392, 1136), 3);
    add_background_object(create_aquabrick3_691(640, 832), 3);
    add_background_object(create_aquabrick3_691(640, 320), 3);
    add_background_object(create_aquabrick3_691(640, 384), 3);
    add_background_object(create_aquabrick1_676(1280, 1312), 3);
    add_background_object(create_aquabrick5_682(1152, 1312), 3);
    add_background_object(create_aquabrick5_682(1152, 1440), 3);
    add_background_object(create_aquabrick1_676(1344, 1312), 3);
    add_background_object(create_aquabrick1_676(1472, 1312), 3);
    add_background_object(create_aquabrick1_676(1536, 1312), 3);
    add_background_object(create_aquabrick3_691(1280, 1696), 3);
    add_background_object(create_aquabrick3_691(1280, 1760), 3);
    add_background_object(create_aquabrick3_691(1280, 1824), 3);
    add_background_object(create_aquabrick3_691(1408, 1696), 3);
    add_background_object(create_aquabrick3_691(1408, 1760), 3);
    add_background_object(create_aquabrick3_691(1408, 1824), 3);
    add_background_object(create_aquabrick3_691(1536, 1696), 3);
    add_background_object(create_aquabrick3_691(1536, 1760), 3);
    add_background_object(create_aquabrick3_691(1536, 1824), 3);
    add_background_object(create_aquabrick5_682(1152, 1568), 3);
    add_background_object(create_aquabrick1_676(1280, 1664), 3);
    add_background_object(create_aquabrick1_676(1344, 1664), 3);
    add_background_object(create_aquabrick1_676(1408, 1664), 3);
    add_background_object(create_aquabrick1_676(1472, 1664), 3);
    add_background_object(create_aquabrick1_676(1536, 1664), 3);
    add_background_object(create_aquabrick1_676(1600, 1664), 3);
    add_background_object(create_aquabrick2_706(1344, 1648), 3);
    add_background_object(create_aquabrick2_706(1408, 1648), 3);
    add_background_object(create_aquabrick2_706(1472, 1648), 3);
    add_background_object(create_aquabrick2_706(1536, 1648), 3);
    add_background_object(create_aquabrick2_706(1600, 1648), 3);
    add_background_object(create_aquabrick4_707(1272, 1344), 3);
    add_background_object(create_aquabrick4_707(1272, 1408), 3);
    add_background_object(create_aquabrick4_707(1272, 1536), 3);
    add_background_object(create_aquabrick4_707(1272, 1600), 3);
    add_background_object(create_aquabrick2_706(1280, 1648), 3);
    add_background_object(create_aquabrick1_676(1600, 1152), 3);
    add_background_object(create_aquabrick2_706(1600, 1136), 3);
    add_background_object(create_aquabrick1_676(1664, 1152), 3);
    add_background_object(create_aquabrick2_706(1664, 1136), 3);
    add_background_object(create_aquabrick1_676(1600, 1312), 3);
    add_background_object(create_aquabrick1_676(1664, 1312), 3);
    add_background_object(create_aquabrick1_676(1600, 960), 3);
    add_background_object(create_aquabrick2_706(1600, 944), 3);
    add_background_object(create_aquabrick13_712(1584, 944), 3);
    add_background_object(create_aquabrick15_685(1584, 960), 3);
    add_background_object(create_atladder_708(1544, 944), 3);
    add_background_object(create_atladder_708(1544, 976), 3);
    add_background_object(create_atladder_708(1544, 1008), 3);
    add_background_object(create_atladder_708(1544, 1040), 3);
    add_background_object(create_aquabrick4_707(1272, 1472), 3);
    add_background_object(create_aquabrick1_676(1600, 736), 3);
    add_background_object(create_aquabrick1_676(1664, 736), 3);
    add_background_object(create_aquabrick3_691(1600, 416), 3);
    add_background_object(create_aquabrick3_691(1600, 352), 3);
    add_background_object(create_aquabrick3_691(1472, 352), 3);
    add_background_object(create_lightray1_659(1592, 768), 3);
    add_background_object(create_lightray1_659(1576, 800), 3);
    add_background_object(create_lightray2_666(1560, 832), 3);
    add_background_object(create_aquabrick3_691(128, 832), 3);
    add_background_object(create_aquabrick3_691(0, 832), 3);
    add_background_object(create_aquabrick3_691(192, 768), 3);
    add_background_object(create_aquabrick3_691(64, 768), 3);
    add_background_object(create_aquabrick3_691(384, 832), 3);
    add_background_object(create_aquabrick3_691(256, 832), 3);
    add_background_object(create_aquabrick3_691(448, 768), 3);
    add_background_object(create_aquabrick3_691(320, 768), 3);
    add_background_object(create_aquabrick3_691(512, 832), 3);
    add_background_object(create_aquabrick3_691(576, 768), 3);
    add_background_object(create_aquabrick3_691(192, 704), 3);
    add_background_object(create_aquabrick3_691(64, 704), 3);
    add_background_object(create_aquabrick3_691(448, 704), 3);
    add_background_object(create_aquabrick3_691(320, 704), 3);
    add_background_object(create_aquabrick3_691(576, 704), 3);
    add_background_object(create_aquabrick3_691(192, 640), 3);
    add_background_object(create_aquabrick3_691(64, 640), 3);
    add_background_object(create_aquabrick3_691(448, 640), 3);
    add_background_object(create_aquabrick3_691(320, 640), 3);
    add_background_object(create_aquabrick3_691(576, 640), 3);
    add_background_object(create_aquabrick3_691(192, 576), 3);
    add_background_object(create_aquabrick3_691(64, 576), 3);
    add_background_object(create_aquabrick3_691(448, 576), 3);
    add_background_object(create_aquabrick3_691(320, 576), 3);
    add_background_object(create_aquabrick3_691(576, 576), 3);
    add_background_object(create_aquabrick3_691(192, 512), 3);
    add_background_object(create_aquabrick3_691(64, 512), 3);
    add_background_object(create_aquabrick3_691(448, 512), 3);
    add_background_object(create_aquabrick3_691(320, 512), 3);
    add_background_object(create_aquabrick3_691(576, 512), 3);
    add_background_object(create_aquabrick3_691(192, 448), 3);
    add_background_object(create_aquabrick3_691(64, 448), 3);
    add_background_object(create_aquabrick3_691(448, 448), 3);
    add_background_object(create_aquabrick3_691(320, 448), 3);
    add_background_object(create_aquabrick3_691(576, 448), 3);
    add_background_object(create_aquabrick3_691(512, 320), 3);
    add_background_object(create_aquabrick3_691(512, 384), 3);
    add_background_object(create_aquabrick3_691(384, 320), 3);
    add_background_object(create_aquabrick3_691(384, 384), 3);
    add_background_object(create_aquabrick3_691(1024, 256), 3);
    add_background_object(create_aquabrick3_691(896, 256), 3);
    add_background_object(create_aquabrick3_691(768, 256), 3);
    add_background_object(create_aquabrick3_691(1408, 256), 3);
    add_background_object(create_aquabrick3_691(1280, 256), 3);
    add_background_object(create_aquabrick3_691(1152, 256), 3);
    add_background_object(create_aquabrick3_691(640, 256), 3);
    add_background_object(create_aquabrick3_691(1600, 288), 3);
    add_background_object(create_aquabrick3_691(1472, 288), 3);
    add_background_object(create_aquabrick3_691(512, 256), 3);
    add_background_object(create_aquabrick3_691(384, 256), 3);
    add_background_object(create_aquabrick3_691(1024, 192), 3);
    add_background_object(create_aquabrick3_691(896, 192), 3);
    add_background_object(create_aquabrick3_691(768, 192), 3);
    add_background_object(create_aquabrick3_691(1408, 192), 3);
    add_background_object(create_aquabrick3_691(1280, 192), 3);
    add_background_object(create_aquabrick3_691(1152, 192), 3);
    add_background_object(create_aquabrick3_691(640, 192), 3);
    add_background_object(create_aquabrick3_691(1600, 224), 3);
    add_background_object(create_aquabrick3_691(1472, 224), 3);
    add_background_object(create_aquabrick3_691(512, 192), 3);
    add_background_object(create_aquabrick3_691(256, 384), 3);
    add_background_object(create_atsewerpipe9_668(1296, 1488), 3);
    add_background_object(create_atsewerpipe9_668(1424, 1488), 3);
    add_background_object(create_atsewerpipe11_679(1552, 1488), 3);
    add_background_object(create_aquabrickslope3_710(1664, 1616), 3);
    add_background_object(create_aquabrickslope4_711(1792, 1584), 3);
    add_background_object(create_aquabrick3_691(1664, 1696), 3);
    add_background_object(create_aquabrick3_691(1664, 1760), 3);
    add_background_object(create_aquabrick3_691(1664, 1824), 3);
    add_background_object(create_aquabrick3_691(1792, 1696), 3);
    add_background_object(create_aquabrick3_691(1792, 1760), 3);
    add_background_object(create_aquabrick3_691(1792, 1824), 3);
    add_background_object(create_aquabrickslope3_710(1664, 912), 3);
    add_background_object(create_aquabrickslope4_711(1792, 880), 3);
    add_background_object(create_aquabrick1_676(1920, 896), 3);
    add_background_object(create_aquabrick2_706(1920, 880), 3);
    add_background_object(create_aquabrick6_709(1984, 880), 3);
    add_background_object(create_aquabrick16_684(1976, 896), 3);
    add_background_object(create_aquabrick5_682(1600, 608), 3);
    add_background_object(create_aquabrick1_676(1728, 736), 3);
    add_background_object(create_aquabrick1_676(1792, 736), 3);
    add_background_object(create_aquabrick5_682(1600, 480), 3);
    add_background_object(create_aquabrick4_707(1720, 640), 3);
    add_background_object(create_aquabrick4_707(1720, 576), 3);
    add_background_object(create_aquabrick4_707(1720, 512), 3);
    add_background_object(create_aquabrick1_676(1728, 480), 3);
    add_background_object(create_aquabrick1_676(1792, 480), 3);
    add_background_object(create_aquabrick3_691(1728, 416), 3);
    add_background_object(create_aquabrick16_684(1720, 704), 3);
    add_background_object(create_aquabrick2_706(1728, 720), 3);
    add_background_object(create_aquabrick3_691(1728, 352), 3);
    add_background_object(create_aquabrick3_691(1728, 288), 3);
    add_background_object(create_aquabrick1_676(1856, 480), 3);
    add_background_object(create_aquabrick1_676(1920, 480), 3);
    add_background_object(create_aquabrick3_691(1856, 416), 3);
    add_background_object(create_aquabrick3_691(1856, 352), 3);
    add_background_object(create_aquabrick3_691(1856, 288), 3);
    add_background_object(create_aquabrick3_691(1728, 224), 3);
    add_background_object(create_aquabrick3_691(1856, 224), 3);
    add_background_object(create_aquabrick1_676(1856, 736), 3);
    add_background_object(create_aquabrick6_709(1920, 720), 3);
    add_background_object(create_aquabrick16_684(1912, 736), 3);
    add_background_object(create_aquabrick5_682(1600, 1184), 3);
    add_background_object(create_aquabrick6_709(1728, 1136), 3);
    add_background_object(create_aquabrick4_707(1720, 1152), 3);
    add_background_object(create_aquabrick4_707(1720, 1216), 3);
    add_background_object(create_aquabrick1_676(1728, 1344), 3);
    add_background_object(create_aquabrick4_707(1720, 1280), 3);
    add_background_object(create_aquabrick16_684(1784, 1344), 3);
    add_background_object(create_aquabrick1_676(1600, 1344), 3);
    add_background_object(create_aquabrick15_685(1584, 1344), 3);
    add_background_object(create_aquabrick32_732(1296, 1584), 3);
    add_background_object(create_aquabrick1_676(1664, 1344), 3);
    add_background_object(create_aquabrick2_706(1728, 1328), 3);
    add_background_object(create_aquabrick6_709(1792, 1328), 3);
    add_background_object(create_aquabrick19_714(2624, 952), 3);
    add_background_object(create_aquabrick2_706(2496, 1136), 3);
    add_background_object(create_aquabrick13_712(2480, 1136), 3);
    add_background_object(create_aquabrick7_728(2800, 816), 3);
    add_background_object(create_aquabrickslope1_697(2944, 816), 3);
    add_background_object(create_aquabrickslope2_698(3072, 848), 3);
    add_background_object(create_aquabrick6_709(2016, 912), 3);
    add_background_object(create_aquabrick2_706(2560, 1136), 3);
    add_background_object(create_aquabrick2_706(2240, 1136), 3);
    add_background_object(create_aquabrick2_706(2048, 1136), 3);
    add_background_object(create_aquabrick13_712(2032, 1136), 3);
    add_background_object(create_aquabrick6_709(2304, 1136), 3);
    add_background_object(create_aquabrick2_706(2176, 1136), 3);
    add_background_object(create_aquabrick2_706(2112, 1136), 3);
    add_background_object(create_aquabrick17_713(3328, 1016), 3);
    add_background_object(create_aquabrickslope3_710(3520, 1168), 3);
    add_background_object(create_aquabrick2_706(3912, 1096), 3);
    add_background_object(create_aquabrick13_712(3896, 1096), 3);
    add_background_object(create_aquabrick2_706(3976, 1096), 3);
    add_background_object(create_aquabrick2_706(4040, 1096), 3);
    add_background_object(create_aquabrickslope1_697(3776, 1232), 3);
    add_background_object(create_aquabrickslope2_698(3904, 1264), 3);
    add_background_object(create_aquabrickslope3_710(4032, 1264), 3);
    add_background_object(create_aquabrickslope4_711(4160, 1232), 3);
    add_background_object(create_aquabrickslope1_697(4288, 1232), 3);
    add_background_object(create_aquabrickslope2_698(4416, 1264), 3);
    add_background_object(create_aquabrick19_714(4544, 1080), 3);
    add_background_object(create_aquabrick1_676(2176, 1152), 3);
    add_background_object(create_aquabrick1_676(2048, 1152), 3);
    add_background_object(create_aquabrick1_676(2112, 1184), 3);
    add_background_object(create_aquabrick11_688(2048, 1184), 3);
    add_background_object(create_aquabrick11_688(2112, 1152), 3);
    add_background_object(create_aquabrick11_688(2240, 1152), 3);
    add_background_object(create_aquabrick11_688(2176, 1184), 3);
    add_background_object(create_aquabrick1_676(2240, 1184), 3);
    add_background_object(create_aquabrick4_707(2296, 1152), 3);
    add_background_object(create_aquabrick14_693(2032, 1152), 3);
    add_background_object(create_aquabrick21_683(2496, 1152), 3);
    add_background_object(create_aquabrick6_709(1792, 720), 3);
    add_background_object(create_aquabrick13_712(1904, 720), 3);
    add_background_object(create_aquadirt2_692(1824, 712), 3);
    add_background_object(create_lightray1_659(1912, 512), 3);
    add_background_object(create_lightray1_659(1896, 544), 3);
    add_background_object(create_lightray1_659(1880, 576), 3);
    add_background_object(create_lightray2_666(1864, 608), 3);
    add_background_object(create_aquaplant1_670(1824, 688), 3);
    add_background_object(create_aquabrick2_706(3648, 1200), 3);
    add_background_object(create_aquabrick2_706(3712, 1200), 3);
    add_background_object(create_aquabrick14_693(2480, 1216), 3);
    add_background_object(create_aquabrick20_716(2624, 952), 3);
    add_background_object(create_aquabrick3_691(2624, 1152), 3);
    add_background_object(create_aquabrick3_691(2624, 1216), 3);
    add_background_object(create_aquabrick3_691(2752, 1152), 3);
    add_background_object(create_aquabrick3_691(2752, 1216), 3);
    add_background_object(create_aquabrick22_726(2816, 832), 3);
    add_background_object(create_aquabrick3_691(2944, 992), 3);
    add_background_object(create_aquabrick3_691(2944, 1056), 3);
    add_background_object(create_aquabrick3_691(2944, 928), 3);
    add_background_object(create_aquabrick3_691(3072, 1024), 3);
    add_background_object(create_aquabrick3_691(3072, 1088), 3);
    add_background_object(create_aquabrick3_691(3072, 960), 3);
    add_background_object(create_aquabrick23_727(3200, 896), 3);
    add_background_object(create_aquabrick8_729(3200, 880), 3);
    add_background_object(create_aquabrick18_715(3328, 1016), 3);
    add_background_object(create_aquabrick3_691(3072, 1152), 3);
    add_background_object(create_aquabrick3_691(2944, 1120), 3);
    add_background_object(create_aquabrick3_691(2944, 1184), 3);
    add_background_object(create_aquabrick3_691(2816, 1152), 3);
    add_background_object(create_aquabrick3_691(2816, 1216), 3);
    add_background_object(create_aquabrick3_691(3072, 1216), 3);
    add_background_object(create_aquabrick3_691(3200, 1216), 3);
    add_background_object(create_aquabrick5_682(3392, 1216), 3);
    add_background_object(create_aquabrick1_676(3456, 1216), 3);
    add_background_object(create_aquabrick1_676(3520, 1248), 3);
    add_background_object(create_aquabrick1_676(3520, 1216), 3);
    add_background_object(create_aquabrick1_676(3584, 1216), 3);
    add_background_object(create_aquabrick1_676(3584, 1248), 3);
    add_background_object(create_aquabrick1_676(3648, 1216), 3);
    add_background_object(create_aquabrick1_676(3648, 1248), 3);
    add_background_object(create_aquabrick1_676(3712, 1216), 3);
    add_background_object(create_aquabrick1_676(3712, 1248), 3);
    add_background_object(create_aquabrickslope1_697(3776, 1200), 3);
    add_background_object(create_aquabrickslope2_698(3904, 1232), 3);
    add_background_object(create_aquabrickslope3_710(4032, 1232), 3);
    add_background_object(create_aquabrickslope4_711(4160, 1200), 3);
    add_background_object(create_aquabrickslope1_697(4288, 1200), 3);
    add_background_object(create_aquabrickslope2_698(4416, 1232), 3);
    add_background_object(create_aquabrick1_676(4544, 1280), 3);
    add_background_object(create_aquabrick1_676(4544, 1312), 3);
    add_background_object(create_aquabrick1_676(4608, 1280), 3);
    add_background_object(create_aquabrick1_676(4608, 1312), 3);
    add_background_object(create_aquabrick1_676(4672, 1280), 3);
    add_background_object(create_aquabrick20_716(4544, 1080), 3);
    add_background_object(create_aquabrick21_683(4736, 1152), 3);
    add_background_object(create_aquabrick21_683(4736, 1024), 3);
    add_background_object(create_aquabrick26_786(4544, 832), 3);
    add_background_object(create_aquabrick14_693(4720, 1024), 3);
    add_background_object(create_aquabrick1_676(4672, 768), 3);
    add_background_object(create_aquabrick1_676(4672, 800), 3);
    add_background_object(create_aquabrick1_676(4480, 768), 3);
    add_background_object(create_aquabrick1_676(4480, 800), 3);
    add_background_object(create_aquabrick1_676(4544, 768), 3);
    add_background_object(create_aquabrick1_676(4544, 800), 3);
    add_background_object(create_aquabrick1_676(4608, 768), 3);
    add_background_object(create_aquabrick1_676(4608, 800), 3);
    add_background_object(create_aquabrick6_709(4104, 1096), 3);
    add_background_object(create_aquabrick1_676(3912, 1112), 3);
    add_background_object(create_aquabrick1_676(3976, 1112), 3);
    add_background_object(create_aquabrick1_676(4040, 1112), 3);
    add_background_object(create_aquabrick15_685(3896, 1112), 3);
    add_background_object(create_aquabrick16_684(4096, 1112), 3);
    add_background_object(create_aquabrick2_706(4480, 752), 3);
    add_background_object(create_aquabrick13_712(4464, 752), 3);
    add_background_object(create_aquabrick14_693(4464, 768), 3);
    add_background_object(create_aquabrick1_676(4312, 952), 3);
    add_background_object(create_aquabrick1_676(4248, 952), 3);
    add_background_object(create_aquabrick1_676(4248, 920), 3);
    add_background_object(create_aquabrick1_676(4248, 888), 3);
    add_background_object(create_aquabrick14_693(4232, 888), 3);
    add_background_object(create_aquabrick4_707(4304, 888), 3);
    add_background_object(create_aquabrick2_706(4312, 936), 3);
    add_background_object(create_aquabrick15_685(4232, 952), 3);
    add_background_object(create_aquabrick13_712(4232, 872), 3);
    add_background_object(create_aquabrick6_709(4312, 872), 3);
    add_background_object(create_aquabrick2_706(4248, 872), 3);
    add_background_object(create_aquabrick6_709(4376, 936), 3);
    add_background_object(create_aquabrick16_684(4368, 952), 3);
    add_background_object(create_aquabrick3_691(1920, 1632), 3);
    add_background_object(create_aquabrick3_691(1920, 1696), 3);
    add_background_object(create_aquabrick3_691(1920, 1760), 3);
    add_background_object(create_aquabrick3_691(1920, 1824), 3);
    add_background_object(create_aquabrick2_706(1984, 1552), 3);
    add_background_object(create_aquabrick1_676(1920, 1600), 3);
    add_background_object(create_aquabrick11_688(1984, 1600), 3);
    add_background_object(create_atladder_708(4192, 872), 3);
    add_background_object(create_atladder_708(4192, 904), 3);
    add_background_object(create_atladder_708(4192, 936), 3);
    add_background_object(create_atladder_708(4192, 968), 3);
    add_background_object(create_atladder_708(4192, 1000), 3);
    add_background_object(create_atladder_708(4192, 1032), 3);
    add_background_object(create_atladder_708(4192, 1064), 3);
    add_background_object(create_atladder_708(4192, 1096), 3);
    add_background_object(create_aquabrick1_676(1984, 480), 3);
    add_background_object(create_aquabrick1_676(2048, 480), 3);
    add_background_object(create_aquabrick3_691(1984, 416), 3);
    add_background_object(create_aquabrick3_691(1984, 352), 3);
    add_background_object(create_aquabrick3_691(1984, 288), 3);
    add_background_object(create_aquabrick3_691(1984, 224), 3);
    add_background_object(create_aquabrick1_676(2112, 608), 3);
    add_background_object(create_aquabrick1_676(2176, 608), 3);
    add_background_object(create_aquabrick3_691(2112, 416), 3);
    add_background_object(create_aquabrick3_691(2112, 352), 3);
    add_background_object(create_aquabrick3_691(2112, 288), 3);
    add_background_object(create_aquabrick3_691(2112, 224), 3);
    add_background_object(create_aquabrick14_693(2096, 576), 3);
    add_background_object(create_aquabrick3_691(2240, 352), 3);
    add_background_object(create_aquabrick3_691(2240, 288), 3);
    add_background_object(create_aquabrick3_691(2240, 224), 3);
    add_background_object(create_aquabrick3_691(2240, 480), 3);
    add_background_object(create_aquabrick3_691(2240, 544), 3);
    add_background_object(create_aquabrick1_676(2240, 608), 3);
    add_background_object(create_aquabrick1_676(2304, 608), 3);
    add_background_object(create_aquabrick3_691(2368, 352), 3);
    add_background_object(create_aquabrick3_691(2368, 288), 3);
    add_background_object(create_aquabrick3_691(2368, 224), 3);
    add_background_object(create_aquabrick3_691(2368, 480), 3);
    add_background_object(create_aquabrick3_691(2368, 544), 3);
    add_background_object(create_aquabrick1_676(2368, 608), 3);
    add_background_object(create_aquabrick1_676(2432, 608), 3);
    add_background_object(create_aquabrick3_691(2496, 352), 3);
    add_background_object(create_aquabrick3_691(2496, 288), 3);
    add_background_object(create_aquabrick3_691(2496, 224), 3);
    add_background_object(create_aquabrick3_691(2496, 480), 3);
    add_background_object(create_aquabrick3_691(2496, 544), 3);
    add_background_object(create_aquabrick1_676(2496, 608), 3);
    add_background_object(create_aquabrick1_676(2560, 608), 3);
    add_background_object(create_aquabrick3_691(2624, 352), 3);
    add_background_object(create_aquabrick3_691(2624, 288), 3);
    add_background_object(create_aquabrick3_691(2624, 224), 3);
    add_background_object(create_aquabrick3_691(2624, 480), 3);
    add_background_object(create_aquabrick3_691(2624, 544), 3);
    add_background_object(create_aquabrick1_676(2624, 608), 3);
    add_background_object(create_aquabrick1_676(2688, 608), 3);
    add_background_object(create_aquabrick3_691(2240, 416), 3);
    add_background_object(create_aquabrick3_691(2368, 416), 3);
    add_background_object(create_aquabrick3_691(2496, 416), 3);
    add_background_object(create_aquabrick3_691(2624, 416), 3);
    add_background_object(create_aquabrick14_693(2096, 512), 3);
    add_background_object(create_aquabrick6_709(4544, 752), 3);
    add_background_object(create_aquadirt4_699(4560, 736), 3);
    add_background_object(create_aquadirt5_695(4688, 736), 3);
    add_background_object(create_aquadirt_689(4816, 752), 3);
    add_background_object(create_aquadirt_689(4864, 752), 3);
    add_background_object(create_aquadirt_689(4928, 752), 3);
    add_background_object(create_aquadirt_689(4992, 752), 3);
    add_background_object(create_aquadirt2_692(4880, 744), 3);
    add_background_object(create_aquadirt2_692(4968, 744), 3);
    add_background_object(create_aquabrick21_683(4736, 768), 3);
    add_background_object(create_aquabrick3_691(4864, 768), 3);
    add_background_object(create_aquabrick3_691(4864, 832), 3);
    add_background_object(create_aquabrick3_691(4992, 768), 3);
    add_background_object(create_aquabrick3_691(4992, 832), 3);
    add_background_object(create_aquadirt_689(5056, 752), 3);
    add_background_object(create_aquadirt2_692(5032, 744), 3);
    add_background_object(create_aquabrick3_691(4864, 896), 3);
    add_background_object(create_aquabrick3_691(4864, 960), 3);
    add_background_object(create_aquabrick3_691(4992, 896), 3);
    add_background_object(create_aquabrick3_691(4992, 960), 3);
    add_background_object(create_aquabrick13_712(5232, 752), 3);
    add_background_object(create_aquabrick4_707(5240, 768), 3);
    add_background_object(create_aquabrick6_709(5248, 752), 3);
    add_background_object(create_aquabrick5_682(5120, 896), 3);
    add_background_object(create_aquabrick4_707(5240, 832), 3);
    add_background_object(create_aquadirt_689(5120, 752), 3);
    add_background_object(create_aquaplant2_694(5128, 688), 3);
    add_background_object(create_aquaplant1_670(5040, 720), 3);
    add_background_object(create_aquaplant2_694(5088, 688), 3);
    add_background_object(create_aquaplant2_694(4992, 688), 3);
    add_background_object(create_aquaplant1_670(4936, 720), 3);
    add_background_object(create_aquabrick4_707(5240, 896), 3);
    add_background_object(create_aquabrick4_707(5240, 960), 3);
    add_background_object(create_aquabrick21_683(5376, 960), 3);
    add_background_object(create_aquabrick2_706(5376, 784), 3);
    add_background_object(create_aquabrick13_712(5360, 784), 3);
    add_background_object(create_aquabrick14_693(5360, 800), 3);
    add_background_object(create_aquabrick14_693(5360, 864), 3);
    add_background_object(create_aquabrick14_693(5360, 928), 3);
    add_background_object(create_aquabrick14_693(5360, 992), 3);
    add_background_object(create_aquabrick21_683(5504, 736), 3);
    add_background_object(create_aquabrick21_683(5504, 640), 3);
    add_background_object(create_aquabrick1_676(5440, 832), 3);
    add_background_object(create_aquabrick14_693(5488, 608), 3);
    add_background_object(create_aquabrick14_693(5488, 672), 3);
    add_background_object(create_aquabrick14_693(5488, 736), 3);
    add_background_object(create_aquabrick3_691(5504, 864), 3);
    add_background_object(create_aquabrick3_691(5504, 928), 3);
    add_background_object(create_aquabrick3_691(5504, 992), 3);
    add_background_object(create_aquabrickarch1_669(5264, 912), 3);
    add_background_object(create_aquabrickarch1_669(5264, 976), 3);
    add_background_object(create_watervent_725(4672, 848), 3);
    add_background_object(create_aquabrick14_693(4720, 784), 3);
    add_background_object(create_aquabrick4_707(4664, 784), 3);
    add_background_object(create_aquabrickarch1_669(4464, 960), 3);
    add_background_object(create_aquabrickarch1_669(4464, 1024), 3);
    add_background_object(create_aquabrickarch1_669(4464, 1088), 3);
    add_background_object(create_aquabrickarch1_669(4464, 1152), 3);
    add_background_object(create_aquabrickarch1_669(4344, 1112), 3);
    add_background_object(create_aquabrickarch1_669(4344, 1048), 3);
    add_background_object(create_aquabrickarch1_669(4344, 984), 3);
    add_background_object(create_aquabrickarch1_669(4232, 1112), 3);
    add_background_object(create_aquabrickarch1_669(4232, 1048), 3);
    add_background_object(create_aquabrickarch1_669(4232, 984), 3);
    add_background_object(create_aquabrick21_683(2816, 960), 3);
    add_background_object(create_aquabrick21_683(2816, 1056), 3);
    add_background_object(create_aquabrick1_676(2752, 1152), 3);
    add_background_object(create_aquabrick1_676(2688, 1152), 3);
    add_background_object(create_aquabrick1_676(2624, 1152), 3);
    add_background_object(create_aquabrick1_676(2560, 1152), 3);
    add_background_object(create_aquabrick1_676(2496, 1152), 3);
    add_background_object(create_aquabrick14_693(2480, 1152), 3);
    add_background_object(create_aquabrick5_682(3200, 1024), 3);
    add_background_object(create_aquabrick5_682(3200, 1120), 3);
    add_background_object(create_aquabrick3_691(2944, 1248), 3);
    add_background_object(create_aquabrick1_676(3392, 1216), 3);
    add_background_object(create_aquabrick1_676(3328, 1216), 3);
    add_background_object(create_atsewerpipe6_672(3648, 1168), 3);
    add_background_object(create_atsewerpipe6_672(3648, 1136), 3);
    add_background_object(create_atsewerpipe5_720(3648, 1104), 3);
    add_background_object(create_atsewerpipe3_718(3680, 1104), 3);
    add_background_object(create_atsewerpipe7_719(3712, 1104), 3);
    add_background_object(create_atsewerpipe2_717(3728, 1136), 3);
    add_background_object(create_atsewerpipe3_718(3792, 1152), 3);
    add_background_object(create_atsewerpipe7_719(3824, 1152), 3);
    add_background_object(create_atsewerpipe3_718(3760, 1152), 3);
    add_background_object(create_atsewerpipe6_672(3768, 1168), 3);
    add_background_object(create_atsewerpipe5_720(3768, 1120), 3);
    add_background_object(create_atsewerpipe3_718(3832, 1120), 3);
    add_background_object(create_atsewerpipe3_718(3800, 1120), 3);
    add_background_object(create_atsewerpipe3_718(3864, 1120), 3);
    add_background_object(create_atsewerpipe8_680(2096, 1216), 3);
    add_background_object(create_atsewerpipe8_680(2096, 1344), 3);
    add_background_object(create_atsewerpipe8_680(2096, 1472), 3);
    add_background_object(create_aquabrick3_691(2048, 1632), 3);
    add_background_object(create_aquabrick3_691(2048, 1696), 3);
    add_background_object(create_aquabrick3_691(2048, 1760), 3);
    add_background_object(create_aquabrick3_691(2048, 1824), 3);
    add_background_object(create_aquabrick2_706(2112, 1584), 3);
    add_background_object(create_aquabrick1_676(2048, 1600), 3);
    add_background_object(create_aquabrick11_688(2112, 1600), 3);
    add_background_object(create_aquabrick3_691(2176, 1632), 3);
    add_background_object(create_aquabrick3_691(2176, 1696), 3);
    add_background_object(create_aquabrick3_691(2176, 1760), 3);
    add_background_object(create_aquabrick3_691(2176, 1824), 3);
    add_background_object(create_aquabrick2_706(2176, 1584), 3);
    add_background_object(create_aquabrick1_676(2176, 1600), 3);
    add_background_object(create_aquabrick11_688(2240, 1600), 3);
    add_background_object(create_atsewerpipe5_720(2544, 1104), 3);
    add_background_object(create_atsewerpipe3_718(2576, 1104), 3);
    add_background_object(create_atsewerpipe4_700(2608, 1088), 3);
    add_background_object(create_atsewerpipe5_720(2624, 1056), 3);
    add_background_object(create_atsewerpipe3_718(2688, 1056), 3);
    add_background_object(create_atsewerpipe3_718(2736, 1008), 3);
    add_background_object(create_atsewerpipe3_718(2704, 1008), 3);
    add_background_object(create_atsewerpipe5_720(2672, 1008), 3);
    add_background_object(create_atsewerpipe6_672(2672, 1040), 3);
    add_background_object(create_atsewerpipe6_672(2672, 1072), 3);
    add_background_object(create_atsewerpipe3_718(2656, 1056), 3);
    add_background_object(create_atsewerpipe6_672(2736, 976), 3);
    add_background_object(create_atsewerpipe5_720(2736, 944), 3);
    add_background_object(create_atsewerpipe3_718(2768, 944), 3);
    add_background_object(create_atsewerpipe2_717(2304, 640), 3);
    add_background_object(create_atsewerpipe3_718(2336, 656), 3);
    add_background_object(create_atsewerpipe7_719(2368, 656), 3);
    add_background_object(create_atsewerpipe6_672(2384, 688), 3);
    add_background_object(create_atsewerpipe2_717(2384, 720), 3);
    add_background_object(create_atsewerpipe3_718(2416, 736), 3);
    add_background_object(create_atsewerpipe3_718(2448, 736), 3);
    add_background_object(create_atsewerpipe4_700(2440, 672), 3);
    add_background_object(create_atsewerpipe2_717(2408, 672), 3);
    add_background_object(create_atsewerpipe6_672(2408, 640), 3);
    add_background_object(create_atsewerpipe6_672(2456, 640), 3);
    add_background_object(create_aquabrick3_691(2752, 352), 3);
    add_background_object(create_aquabrick3_691(2752, 288), 3);
    add_background_object(create_aquabrick3_691(2752, 224), 3);
    add_background_object(create_aquabrick3_691(2752, 480), 3);
    add_background_object(create_aquabrick3_691(2752, 544), 3);
    add_background_object(create_aquabrick1_676(2752, 608), 3);
    add_background_object(create_aquabrick1_676(2816, 608), 3);
    add_background_object(create_aquabrick3_691(2880, 352), 3);
    add_background_object(create_aquabrick3_691(2880, 288), 3);
    add_background_object(create_aquabrick3_691(2880, 224), 3);
    add_background_object(create_aquabrick3_691(2880, 480), 3);
    add_background_object(create_aquabrick3_691(2880, 544), 3);
    add_background_object(create_aquabrick1_676(2880, 608), 3);
    add_background_object(create_aquabrick1_676(2944, 608), 3);
    add_background_object(create_aquabrick3_691(3008, 352), 3);
    add_background_object(create_aquabrick3_691(3008, 288), 3);
    add_background_object(create_aquabrick3_691(3008, 224), 3);
    add_background_object(create_aquabrick3_691(3008, 480), 3);
    add_background_object(create_aquabrick3_691(3008, 544), 3);
    add_background_object(create_aquabrick1_676(3008, 608), 3);
    add_background_object(create_aquabrick1_676(3072, 608), 3);
    add_background_object(create_aquabrick3_691(2752, 416), 3);
    add_background_object(create_aquabrick3_691(2880, 416), 3);
    add_background_object(create_aquabrick3_691(3008, 416), 3);
    add_background_object(create_aquabrick3_691(3136, 352), 3);
    add_background_object(create_aquabrick3_691(3136, 288), 3);
    add_background_object(create_aquabrick3_691(3136, 224), 3);
    add_background_object(create_aquabrick3_691(3136, 480), 3);
    add_background_object(create_aquabrick3_691(3136, 544), 3);
    add_background_object(create_aquabrick1_676(3136, 608), 3);
    add_background_object(create_aquabrick1_676(3200, 608), 3);
    add_background_object(create_aquabrick3_691(3264, 352), 3);
    add_background_object(create_aquabrick3_691(3264, 288), 3);
    add_background_object(create_aquabrick3_691(3264, 224), 3);
    add_background_object(create_aquabrick3_691(3264, 480), 3);
    add_background_object(create_aquabrick3_691(3264, 544), 3);
    add_background_object(create_aquabrick1_676(3264, 608), 3);
    add_background_object(create_aquabrick1_676(3328, 608), 3);
    add_background_object(create_aquabrick3_691(3136, 416), 3);
    add_background_object(create_aquabrick3_691(3264, 416), 3);
    add_background_object(create_aquabrick3_691(3392, 352), 3);
    add_background_object(create_aquabrick3_691(3392, 288), 3);
    add_background_object(create_aquabrick3_691(3392, 224), 3);
    add_background_object(create_aquabrick3_691(3392, 480), 3);
    add_background_object(create_aquabrick3_691(3392, 544), 3);
    add_background_object(create_aquabrick1_676(3392, 608), 3);
    add_background_object(create_aquabrick1_676(3456, 608), 3);
    add_background_object(create_aquabrick3_691(3392, 416), 3);
    add_background_object(create_aquabrick3_691(3520, 480), 3);
    add_background_object(create_aquabrick3_691(3520, 544), 3);
    add_background_object(create_aquabrick1_676(3520, 608), 3);
    add_background_object(create_aquabrick1_676(3584, 608), 3);
    add_background_object(create_aquabrick3_691(3520, 352), 3);
    add_background_object(create_aquabrick3_691(3520, 288), 3);
    add_background_object(create_aquabrick3_691(3520, 224), 3);
    add_background_object(create_aquabrick3_691(3648, 480), 3);
    add_background_object(create_aquabrick3_691(3648, 544), 3);
    add_background_object(create_aquabrick1_676(3648, 608), 3);
    add_background_object(create_aquabrick1_676(3712, 608), 3);
    add_background_object(create_aquabrick3_691(3520, 416), 3);
    add_background_object(create_aquabrick3_691(3648, 416), 3);
    add_background_object(create_aquabrick3_691(3776, 480), 3);
    add_background_object(create_aquabrick3_691(3776, 544), 3);
    add_background_object(create_aquabrick1_676(3776, 608), 3);
    add_background_object(create_aquabrick1_676(3840, 608), 3);
    add_background_object(create_aquabrick3_691(3776, 416), 3);
    add_background_object(create_aquabrick3_691(3904, 480), 3);
    add_background_object(create_aquabrick3_691(3904, 544), 3);
    add_background_object(create_aquabrick1_676(3904, 608), 3);
    add_background_object(create_aquabrick1_676(3968, 608), 3);
    add_background_object(create_aquabrick3_691(4032, 480), 3);
    add_background_object(create_aquabrick3_691(4032, 544), 3);
    add_background_object(create_aquabrick1_676(4032, 608), 3);
    add_background_object(create_aquabrick1_676(4096, 608), 3);
    add_background_object(create_aquabrick3_691(3904, 416), 3);
    add_background_object(create_aquabrick3_691(4032, 416), 3);
    add_background_object(create_aquabrick3_691(4160, 480), 3);
    add_background_object(create_aquabrick3_691(4160, 544), 3);
    add_background_object(create_aquabrick1_676(4160, 608), 3);
    add_background_object(create_aquabrick1_676(4224, 608), 3);
    add_background_object(create_aquabrick3_691(4160, 416), 3);
    add_background_object(create_aquabrick3_691(4288, 480), 3);
    add_background_object(create_aquabrick3_691(4288, 544), 3);
    add_background_object(create_aquabrick1_676(4288, 608), 3);
    add_background_object(create_aquabrick1_676(4352, 608), 3);
    add_background_object(create_aquabrick3_691(4288, 416), 3);
    add_background_object(create_aquabrick1_676(4416, 608), 3);
    add_background_object(create_aquabrick1_676(4480, 608), 3);
    add_background_object(create_aquabrick5_682(4416, 480), 3);
    add_background_object(create_aquabrick5_682(4416, 352), 3);
    add_background_object(create_aquabrick5_682(4416, 224), 3);
    add_background_object(create_aquabrick4_707(4536, 224), 3);
    add_background_object(create_aquabrick4_707(4536, 288), 3);
    add_background_object(create_aquabrick4_707(4536, 352), 3);
    add_background_object(create_aquabrick4_707(4536, 416), 3);
    add_background_object(create_aquabrick4_707(4536, 480), 3);
    add_background_object(create_aquabrick4_707(4536, 544), 3);
    add_background_object(create_aquabrick16_684(4536, 608), 3);
    add_background_object(create_aquabrick1_676(5184, 1024), 3);
    add_background_object(create_aquabrick1_676(5120, 1024), 3);
    add_background_object(create_aquabrick16_684(5240, 1024), 3);
    add_background_object(create_aquabrick1_676(5056, 1024), 3);
    add_background_object(create_aquabrick1_676(4992, 1024), 3);
    add_background_object(create_aquabrick5_682(4864, 1024), 3);
    add_background_object(create_aquabrick5_682(4864, 1152), 3);
    add_background_object(create_aquabrick16_684(4984, 1248), 3);
    add_background_object(create_aquabrick1_676(5376, 1056), 3);
    add_background_object(create_aquabrick1_676(5440, 1056), 3);
    add_background_object(create_aquabrick1_676(5504, 1056), 3);
    add_background_object(create_aquabrick1_676(5568, 1056), 3);
    add_background_object(create_aquabrick15_685(5360, 1056), 3);
    add_background_object(create_aquabrick1_676(2752, 1280), 3);
    add_background_object(create_aquabrick1_676(2688, 1280), 3);
    add_background_object(create_aquabrick1_676(2624, 1280), 3);
    add_background_object(create_aquabrick1_676(2560, 1280), 3);
    add_background_object(create_aquabrick1_676(2496, 1280), 3);
    add_background_object(create_aquabrick1_676(3008, 1280), 3);
    add_background_object(create_aquabrick1_676(2944, 1280), 3);
    add_background_object(create_aquabrick1_676(2880, 1280), 3);
    add_background_object(create_aquabrick1_676(2816, 1280), 3);
    add_background_object(create_aquabrick1_676(3136, 1312), 3);
    add_background_object(create_aquabrick1_676(3136, 1344), 3);
    add_background_object(create_aquabrick1_676(3328, 1344), 3);
    add_background_object(create_aquabrick1_676(3264, 1344), 3);
    add_background_object(create_aquabrick1_676(3200, 1344), 3);
    add_background_object(create_aquabrick1_676(3456, 1344), 3);
    add_background_object(create_aquabrick1_676(3392, 1344), 3);
    add_background_object(create_aquabrick15_685(2480, 1280), 3);
    add_background_object(create_aquabrick14_693(3120, 1280), 3);
    add_background_object(create_aquabrick1_676(3072, 1280), 3);
    add_background_object(create_aquabrick1_676(3136, 1280), 3);
    add_background_object(create_aquabrick15_685(3120, 1344), 3);
    add_background_object(create_aquabrick1_676(1984, 1568), 3);
    add_background_object(create_aquabrick13_712(1968, 1552), 3);
    add_background_object(create_aquabrick6_709(2048, 1552), 3);
    add_background_object(create_aquabrick15_685(1968, 1568), 3);
    add_background_object(create_aquabrick16_684(2040, 1568), 3);
    add_background_object(create_aquabrick2_706(2048, 1584), 3);
    add_background_object(create_aquabrick2_706(1920, 1584), 3);
    add_background_object(create_aquabrick3_691(2304, 1632), 3);
    add_background_object(create_aquabrick3_691(2304, 1696), 3);
    add_background_object(create_aquabrick3_691(2304, 1760), 3);
    add_background_object(create_aquabrick3_691(2304, 1824), 3);
    add_background_object(create_aquabrick2_706(2304, 1552), 3);
    add_background_object(create_aquabrick1_676(2304, 1600), 3);
    add_background_object(create_aquabrick11_688(2368, 1600), 3);
    add_background_object(create_aquabrick11_688(2304, 1568), 3);
    add_background_object(create_aquabrick13_712(2288, 1552), 3);
    add_background_object(create_aquabrick6_709(2368, 1552), 3);
    add_background_object(create_aquabrick15_685(2288, 1568), 3);
    add_background_object(create_aquabrick16_684(2360, 1568), 3);
    add_background_object(create_aquabrick2_706(2368, 1584), 3);
    add_background_object(create_aquabrick2_706(2240, 1584), 3);
    add_background_object(create_aquabrick3_691(2432, 1696), 3);
    add_background_object(create_aquabrick3_691(2432, 1760), 3);
    add_background_object(create_aquabrick3_691(2432, 1824), 3);
    add_background_object(create_aquabrick1_676(2432, 1600), 3);
    add_background_object(create_aquabrick1_676(2496, 1600), 3);
    add_background_object(create_aquabrick2_706(2432, 1584), 3);
    add_background_object(create_aquabrick2_706(2496, 1584), 3);
    add_background_object(create_atsewerpipe2_717(1512, 1392), 3);
    add_background_object(create_atsewerpipe3_718(1608, 1408), 3);
    add_background_object(create_atsewerpipe4_700(1640, 1392), 3);
    add_background_object(create_atsewerpipe6_672(1568, 1344), 3);
    add_background_object(create_atsewerpipe6_672(1568, 1376), 3);
    add_background_object(create_atsewerpipe2_717(1568, 1424), 3);
    add_background_object(create_atsewerpipe3_718(1600, 1440), 3);
    add_background_object(create_atsewerpipe3_718(1632, 1440), 3);
    add_background_object(create_atsewerpipe3_718(1664, 1440), 3);
    add_background_object(create_atsewerpipe4_700(1696, 1424), 3);
    add_background_object(create_atsewerpipe6_672(1712, 1392), 3);
    add_background_object(create_atsewerpipe3_718(1576, 1408), 3);
    add_background_object(create_atsewerpipe3_718(1544, 1408), 3);
    add_background_object(create_atsewerpipe4_700(1376, 1344), 3);
    add_background_object(create_atsewerpipe5_720(1344, 1360), 3);
    add_background_object(create_atsewerpipe6_672(1344, 1392), 3);
    add_background_object(create_atsewerpipe4_700(1328, 1424), 3);
    add_background_object(create_atsewerpipe3_718(1296, 1440), 3);
    add_background_object(create_atsewerpipe7_719(1496, 1360), 3);
    add_background_object(create_atsewerpipe2_717(1464, 1344), 3);
    add_background_object(create_atsewerpipe6_672(1712, 1376), 3);
    add_background_object(create_atsewerpipe7_719(2000, 1520), 3);
    add_background_object(create_atsewerpipe3_718(1968, 1520), 3);
    add_background_object(create_atsewerpipe5_720(1936, 1520), 3);
    add_background_object(create_atsewerpipe6_672(1936, 1552), 3);
    add_background_object(create_aquabrick3_691(2560, 1696), 3);
    add_background_object(create_aquabrick3_691(2560, 1760), 3);
    add_background_object(create_aquabrick3_691(2560, 1824), 3);
    add_background_object(create_aquabrick1_676(2560, 1664), 3);
    add_background_object(create_aquabrick11_688(2624, 1664), 3);
    add_background_object(create_aquabrick2_706(2624, 1648), 3);
    add_background_object(create_aquabrick6_709(2560, 1584), 3);
    add_background_object(create_aquabrick4_707(2552, 1600), 3);
    add_background_object(create_aquabrick2_706(2560, 1648), 3);
    add_background_object(create_aquabrick3_691(2688, 1696), 3);
    add_background_object(create_aquabrick3_691(2688, 1760), 3);
    add_background_object(create_aquabrick3_691(2688, 1824), 3);
    add_background_object(create_aquabrick1_676(2688, 1664), 3);
    add_background_object(create_aquabrick11_688(2752, 1664), 3);
    add_background_object(create_aquabrick2_706(2752, 1648), 3);
    add_background_object(create_aquabrick2_706(2688, 1648), 3);
    add_background_object(create_aquabrick3_691(2816, 1760), 3);
    add_background_object(create_aquabrick3_691(2816, 1824), 3);
    add_background_object(create_aquabrick1_676(2816, 1664), 3);
    add_background_object(create_aquabrick1_676(2880, 1664), 3);
    add_background_object(create_aquabrick2_706(2880, 1648), 3);
    add_background_object(create_aquabrick2_706(2816, 1648), 3);
    add_background_object(create_aquabrick3_691(2944, 1760), 3);
    add_background_object(create_aquabrick3_691(2944, 1824), 3);
    add_background_object(create_aquabrick1_676(2944, 1728), 3);
    add_background_object(create_aquabrick11_688(3008, 1728), 3);
    add_background_object(create_aquabrick2_706(3008, 1712), 3);
    add_background_object(create_aquabrick3_691(3072, 1760), 3);
    add_background_object(create_aquabrick3_691(3072, 1824), 3);
    add_background_object(create_aquabrick1_676(3072, 1728), 3);
    add_background_object(create_aquabrick2_706(3136, 1648), 3);
    add_background_object(create_aquabrick3_691(3200, 1792), 3);
    add_background_object(create_aquabrick3_691(3200, 1824), 3);
    add_background_object(create_aquabrick1_676(3136, 1664), 3);
    add_background_object(create_aquabrick1_676(3200, 1664), 3);
    add_background_object(create_aquabrick1_676(3264, 1664), 3);
    add_background_object(create_aquabrick2_706(3264, 1648), 3);
    add_background_object(create_aquabrick2_706(3200, 1648), 3);
    add_background_object(create_aquabrick3_691(3328, 1792), 3);
    add_background_object(create_aquabrick3_691(3328, 1824), 3);
    add_background_object(create_aquabrick3_691(3456, 1792), 3);
    add_background_object(create_aquabrick3_691(3456, 1824), 3);
    add_background_object(create_aquabrick3_691(3584, 1696), 3);
    add_background_object(create_aquabrick3_691(3584, 1760), 3);
    add_background_object(create_aquabrick3_691(3584, 1824), 3);
    add_background_object(create_aquabrick1_676(3584, 1664), 3);
    add_background_object(create_aquabrick11_688(3648, 1664), 3);
    add_background_object(create_aquabrick2_706(3584, 1648), 3);
    add_background_object(create_aquabrick3_691(3712, 1760), 3);
    add_background_object(create_aquabrick3_691(3712, 1824), 3);
    add_background_object(create_aquabrick3_691(3712, 1696), 3);
    add_background_object(create_aquabrick1_676(3712, 1536), 3);
    add_background_object(create_aquabrick11_688(3776, 1536), 3);
    add_background_object(create_aquabrick2_706(3776, 1520), 3);
    add_background_object(create_aquabrick2_706(3712, 1520), 3);
    add_background_object(create_aquabrick21_683(3712, 1568), 3);
    add_background_object(create_aquabrick13_712(3696, 1520), 3);
    add_background_object(create_aquabrick14_693(3696, 1536), 3);
    add_background_object(create_aquabrick14_693(3696, 1600), 3);
    add_background_object(create_aquabrick2_706(3648, 1648), 3);
    add_background_object(create_aquabrick3_691(3840, 1760), 3);
    add_background_object(create_aquabrick3_691(3840, 1824), 3);
    add_background_object(create_aquabrick3_691(3840, 1696), 3);
    add_background_object(create_aquabrick1_676(3840, 1536), 3);
    add_background_object(create_aquabrick11_688(3904, 1536), 3);
    add_background_object(create_aquabrick2_706(3904, 1520), 3);
    add_background_object(create_aquabrick2_706(3840, 1520), 3);
    add_background_object(create_aquabrick27_780(3520, 1280), 3);
    add_background_object(create_aquabrick3_691(3328, 1248), 3);
    add_background_object(create_aquabrick3_691(3328, 1280), 3);
    add_background_object(create_aquabrick1_676(3456, 1376), 3);
    add_background_object(create_aquabrick1_676(3456, 1408), 3);
    add_background_object(create_aquabrick1_676(3456, 1440), 3);
    add_background_object(create_aquabrick15_685(3440, 1440), 3);
    add_background_object(create_aquabrick14_693(3440, 1376), 3);
    add_background_object(create_aquabrick1_676(3520, 1664), 3);
    add_background_object(create_aquabrick2_706(3520, 1648), 3);
    add_background_object(create_aquabrick6_709(3328, 1648), 3);
    add_background_object(create_aquabrick1_676(3456, 1760), 3);
    add_background_object(create_aquabrick1_676(3392, 1760), 3);
    add_background_object(create_aquabrick1_676(3328, 1760), 3);
    add_background_object(create_aquabrick4_707(3320, 1664), 3);
    add_background_object(create_aquabrick2_706(3392, 1744), 3);
    add_background_object(create_aquabrick16_684(3320, 1728), 3);
    add_background_object(create_aquabrick2_706(3328, 1744), 3);
    add_background_object(create_aquabrick13_712(3504, 1648), 3);
    add_background_object(create_aquabrick14_693(3504, 1664), 3);
    add_background_object(create_aquabrick15_685(3504, 1728), 3);
    add_background_object(create_aquabrick2_706(3456, 1744), 3);
    add_background_object(create_aquabrick6_709(2944, 1648), 3);
    add_background_object(create_aquabrick4_707(2936, 1664), 3);
    add_background_object(create_aquabrick2_706(2944, 1712), 3);
    add_background_object(create_aquabrick13_712(3120, 1648), 3);
    add_background_object(create_aquabrick14_693(3120, 1664), 3);
    add_background_object(create_aquabrick2_706(3072, 1712), 3);
    add_background_object(create_aquabrick5_682(3968, 1664), 3);
    add_background_object(create_aquabrick8_729(3968, 1520), 3);
    add_background_object(create_aquabrick23_727(3968, 1536), 3);
    add_background_object(create_aquabrick3_691(3840, 1632), 3);
    add_background_object(create_aquabrick3_691(3840, 1568), 3);
    add_background_object(create_aquabrick32_732(4112, 1680), 3);
    add_background_object(create_aquabrick34_790(4400, 1680), 3);
    add_background_object(create_aquabrick3_691(3968, 1792), 3);
    add_background_object(create_aquabrick3_691(3968, 1856), 3);
    add_background_object(create_aquabrick3_691(4096, 1792), 3);
    add_background_object(create_aquabrick3_691(4096, 1856), 3);
    add_background_object(create_aquabrick1_676(4096, 1760), 3);
    add_background_object(create_aquabrick1_676(4160, 1760), 3);
    add_background_object(create_aquabrick4_707(4088, 1664), 3);
    add_background_object(create_aquabrick16_684(4088, 1728), 3);
    add_background_object(create_aquabrick2_706(4096, 1744), 3);
    add_background_object(create_aquabrick2_706(4160, 1744), 3);
    add_background_object(create_aquabrick3_691(4224, 1792), 3);
    add_background_object(create_aquabrick3_691(4224, 1856), 3);
    add_background_object(create_aquabrick1_676(4224, 1760), 3);
    add_background_object(create_aquabrick1_676(4288, 1760), 3);
    add_background_object(create_aquabrick2_706(4224, 1744), 3);
    add_background_object(create_aquabrick2_706(4288, 1744), 3);
    add_background_object(create_aquabrick30_784(4160, 1504), 3);
    add_background_object(create_aquabrick22_726(4160, 1376), 3);
    add_background_object(create_aquabrick23_727(4288, 1376), 3);
    add_background_object(create_aquabrick31_789(4288, 1504), 3);
    add_background_object(create_aquabrick7_728(4144, 1360), 3);
    add_background_object(create_aquabrick12_791(4144, 1504), 3);
    add_background_object(create_aquabrick33_792(4288, 1504), 3);
    add_background_object(create_aquabrick8_729(4288, 1360), 3);
    add_background_object(create_aquabrick3_691(4352, 1792), 3);
    add_background_object(create_aquabrick3_691(4352, 1856), 3);
    add_background_object(create_aquabrick1_676(4352, 1760), 3);
    add_background_object(create_aquabrick1_676(4416, 1760), 3);
    add_background_object(create_aquabrick2_706(4352, 1744), 3);
    add_background_object(create_aquabrick3_691(4480, 1856), 3);
    add_background_object(create_aquabrick3_691(4480, 1792), 3);
    add_background_object(create_aquabrick21_683(4480, 1664), 3);
    add_background_object(create_aquabrick22_726(4480, 1536), 3);
    add_background_object(create_aquabrick14_693(4464, 1664), 3);
    add_background_object(create_aquabrick15_685(4464, 1728), 3);
    add_background_object(create_aquabrick2_706(4416, 1744), 3);
    add_background_object(create_aquabrick7_728(4464, 1520), 3);
    add_background_object(create_aquabrickslope3_710(4608, 1488), 3);
    add_background_object(create_aquabrickslope4_711(4736, 1456), 3);
    add_background_object(create_aquabrick1_676(4736, 1280), 3);
    add_background_object(create_aquabrick2_706(5344, 1168), 3);
    add_background_object(create_aquabrick2_706(5152, 1168), 3);
    add_background_object(create_aquabrick13_712(5136, 1168), 3);
    add_background_object(create_aquabrick6_709(5408, 1168), 3);
    add_background_object(create_aquabrick2_706(5216, 1168), 3);
    add_background_object(create_aquabrick1_676(5152, 1184), 3);
    add_background_object(create_aquabrick1_676(5216, 1216), 3);
    add_background_object(create_aquabrick11_688(5152, 1216), 3);
    add_background_object(create_aquabrick11_688(5216, 1184), 3);
    add_background_object(create_aquabrick11_688(5344, 1184), 3);
    add_background_object(create_aquabrick1_676(5344, 1216), 3);
    add_background_object(create_aquabrick4_707(5400, 1184), 3);
    add_background_object(create_aquabrick14_693(5136, 1184), 3);
    add_background_object(create_aquabrickarch1_669(5264, 1040), 3);
    add_background_object(create_aquabrick6_709(5280, 1168), 3);
    add_background_object(create_aquabrick13_712(5328, 1168), 3);
    add_background_object(create_aquabrick1_676(5152, 1248), 3);
    add_background_object(create_aquabrick1_676(5216, 1248), 3);
    add_background_object(create_aquabrick1_676(5280, 1248), 3);
    add_background_object(create_aquabrick1_676(5344, 1248), 3);
    add_background_object(create_aquabrick15_685(5136, 1248), 3);
    add_background_object(create_aquabrick16_684(5400, 1248), 3);
    add_background_object(create_aquabrick14_693(5328, 1184), 3);
    add_background_object(create_aquabrick4_707(5272, 1184), 3);
    add_background_object(create_aquabrick2_706(5280, 1232), 3);
    add_background_object(create_aquabrick3_691(4608, 1856), 3);
    add_background_object(create_aquabrick3_691(4608, 1792), 3);
    add_background_object(create_aquabrick3_691(4608, 1728), 3);
    add_background_object(create_aquabrick3_691(4608, 1664), 3);
    add_background_object(create_aquabrick3_691(4608, 1600), 3);
    add_background_object(create_aquabrick3_691(4736, 1760), 3);
    add_background_object(create_aquabrick3_691(4736, 1696), 3);
    add_background_object(create_aquabrick3_691(4736, 1632), 3);
    add_background_object(create_aquabrick3_691(4736, 1568), 3);
    add_background_object(create_aquabrick3_691(4736, 1824), 3);
    add_background_object(create_aquabrick3_691(4992, 1760), 3);
    add_background_object(create_aquabrick3_691(4992, 1696), 3);
    add_background_object(create_aquabrick3_691(4992, 1632), 3);
    add_background_object(create_aquabrick3_691(4992, 1568), 3);
    add_background_object(create_aquabrick3_691(4992, 1824), 3);
    add_background_object(create_aquabrick3_691(5120, 1760), 3);
    add_background_object(create_aquabrick3_691(5120, 1696), 3);
    add_background_object(create_aquabrick3_691(5120, 1632), 3);
    add_background_object(create_aquabrick3_691(5120, 1568), 3);
    add_background_object(create_aquabrick3_691(5120, 1824), 3);
    add_background_object(create_aquabrick3_691(5120, 1504), 3);
    add_background_object(create_aquabrick3_691(5248, 1760), 3);
    add_background_object(create_aquabrick3_691(5248, 1696), 3);
    add_background_object(create_aquabrick3_691(5248, 1632), 3);
    add_background_object(create_aquabrick3_691(5248, 1568), 3);
    add_background_object(create_aquabrick3_691(5248, 1824), 3);
    add_background_object(create_aquabrick3_691(5248, 1504), 3);
    add_background_object(create_aquabrick2_706(4992, 1456), 3);
    add_background_object(create_aquabrick1_676(4992, 1472), 3);
    add_background_object(create_aquabrick2_706(5056, 1456), 3);
    add_background_object(create_aquabrick11_688(5056, 1472), 3);
    add_background_object(create_aquabrick2_706(5120, 1456), 3);
    add_background_object(create_aquabrick1_676(5120, 1472), 3);
    add_background_object(create_aquabrick2_706(5184, 1456), 3);
    add_background_object(create_aquabrick11_688(5184, 1472), 3);
    add_background_object(create_aquabrick2_706(5248, 1456), 3);
    add_background_object(create_aquabrick1_676(5248, 1472), 3);
    add_background_object(create_aquabrick3_691(5376, 1760), 3);
    add_background_object(create_aquabrick3_691(5376, 1696), 3);
    add_background_object(create_aquabrick3_691(5376, 1632), 3);
    add_background_object(create_aquabrick3_691(5376, 1568), 3);
    add_background_object(create_aquabrick3_691(5376, 1824), 3);
    add_background_object(create_aquabrick3_691(5376, 1504), 3);
    add_background_object(create_aquabrick2_706(5376, 1424), 3);
    add_background_object(create_aquabrick1_676(5376, 1440), 3);
    add_background_object(create_aquabrick2_706(5440, 1424), 3);
    add_background_object(create_aquabrick1_676(5440, 1440), 3);
    add_background_object(create_aquabrick13_712(5360, 1424), 3);
    add_background_object(create_aquabrick15_685(5360, 1440), 3);
    add_background_object(create_aquabrick2_706(5312, 1456), 3);
    add_background_object(create_aquabrick3_691(4864, 1504), 3);
    add_background_object(create_aquabrick3_691(4864, 1760), 3);
    add_background_object(create_aquabrick3_691(4864, 1696), 3);
    add_background_object(create_aquabrick3_691(4864, 1632), 3);
    add_background_object(create_aquabrick3_691(4864, 1568), 3);
    add_background_object(create_aquabrick3_691(4864, 1824), 3);
    add_background_object(create_aquabrick2_706(4864, 1456), 3);
    add_background_object(create_aquabrick1_676(4864, 1472), 3);
    add_background_object(create_aquabrick2_706(4928, 1456), 3);
    add_background_object(create_aquabrick11_688(4928, 1472), 3);
    add_background_object(create_aquabrick11_688(5312, 1472), 3);
    add_background_object(create_aquabrick3_691(5504, 1728), 3);
    add_background_object(create_aquabrick3_691(5504, 1664), 3);
    add_background_object(create_aquabrick3_691(5504, 1600), 3);
    add_background_object(create_aquabrick3_691(5504, 1536), 3);
    add_background_object(create_aquabrick3_691(5504, 1792), 3);
    add_background_object(create_aquabrick3_691(5504, 1472), 3);
    add_background_object(create_aquabrick2_706(5504, 1424), 3);
    add_background_object(create_aquabrick1_676(5504, 1440), 3);
    add_background_object(create_aquabrick1_676(5568, 1440), 3);
    add_background_object(create_aquabrick3_691(5504, 1856), 3);
    add_background_object(create_aquabrick14_693(5488, 352), 3);
    add_background_object(create_aquabrick13_712(5160, 488), 3);
    add_background_object(create_aquabrick6_709(5240, 488), 3);
    add_background_object(create_aquabrick3_691(5632, 1664), 3);
    add_background_object(create_aquabrick3_691(5632, 1600), 3);
    add_background_object(create_aquabrick3_691(5632, 1536), 3);
    add_background_object(create_aquabrick3_691(5632, 1472), 3);
    add_background_object(create_aquabrick3_691(5632, 1728), 3);
    add_background_object(create_aquabrick3_691(5632, 1792), 3);
    add_background_object(create_aquabrick3_691(5632, 1856), 3);
    add_background_object(create_aquabrick21_683(5632, 1344), 3);
    add_background_object(create_aquabrick21_683(5632, 1216), 3);
    add_background_object(create_aquabrick21_683(5632, 1088), 3);
    add_background_object(create_aquabrick21_683(5632, 1056), 3);
    add_background_object(create_aquabrick14_693(5616, 1088), 3);
    add_background_object(create_aquabrick14_693(5616, 1152), 3);
    add_background_object(create_aquabrick14_693(5616, 1216), 3);
    add_background_object(create_aquabrick14_693(5616, 1280), 3);
    add_background_object(create_aquabrick14_693(5616, 1344), 3);
    add_background_object(create_aquabrick15_685(5616, 1408), 3);
    add_background_object(create_aquabrick2_706(5568, 1424), 3);
    add_background_object(create_aquabrick3_691(5632, 832), 3);
    add_background_object(create_aquabrick3_691(5632, 896), 3);
    add_background_object(create_aquabrick3_691(5632, 960), 3);
    add_background_object(create_aquabrick3_691(5632, 992), 3);
    add_background_object(create_aquabrick3_691(5632, 640), 3);
    add_background_object(create_aquabrick3_691(5632, 704), 3);
    add_background_object(create_aquabrick3_691(5632, 768), 3);
    add_background_object(create_aquabrick3_691(5632, 320), 3);
    add_background_object(create_aquabrick3_691(5632, 384), 3);
    add_background_object(create_aquabrick3_691(5760, 1536), 3);
    add_background_object(create_aquabrick3_691(5760, 1344), 3);
    add_background_object(create_aquabrick3_691(5760, 1600), 3);
    add_background_object(create_aquabrick3_691(5760, 1664), 3);
    add_background_object(create_aquabrick3_691(5760, 1728), 3);
    add_background_object(create_aquabrick3_691(5760, 1216), 3);
    add_background_object(create_aquabrick3_691(5760, 1152), 3);
    add_background_object(create_aquabrick3_691(5760, 1088), 3);
    add_background_object(create_aquabrick3_691(5760, 1024), 3);
    add_background_object(create_aquabrick3_691(5760, 1280), 3);
    add_background_object(create_aquabrick3_691(5760, 1408), 3);
    add_background_object(create_aquabrick3_691(5760, 1472), 3);
    add_background_object(create_aquabrick3_691(5760, 768), 3);
    add_background_object(create_aquabrick3_691(5760, 704), 3);
    add_background_object(create_aquabrick3_691(5888, 448), 3);
    add_background_object(create_aquabrick3_691(5760, 832), 3);
    add_background_object(create_aquabrick3_691(5760, 896), 3);
    add_background_object(create_aquabrick3_691(5760, 960), 3);
    add_background_object(create_aquabrick3_691(5760, 384), 3);
    add_background_object(create_aquabrick3_691(5760, 320), 3);
    add_background_object(create_aquabrick13_712(4760, 488), 3);
    add_background_object(create_aquabrick6_709(4840, 488), 3);
    add_background_object(create_aquabrick5_682(4416, 160), 3);
    add_background_object(create_aquabrick3_691(4032, 32), 3);
    add_background_object(create_aquabrick3_691(4032, -32), 3);
    add_background_object(create_aquabrick3_691(4160, 32), 3);
    add_background_object(create_aquabrick3_691(4160, -32), 3);
    add_background_object(create_aquabrick5_682(4416, -32), 3);
    add_background_object(create_aquabrick4_707(4536, -32), 3);
    add_background_object(create_aquabrick13_712(5488, 272), 3);
    add_background_object(create_aquabrick6_709(5504, 272), 3);
    add_background_object(create_aquadirt5_695(5568, 272), 3);
    add_background_object(create_aquadirt3_703(5760, 280), 3);
    add_background_object(create_aquadirt_689(5696, 288), 3);
    add_background_object(create_aquadirt2_692(5512, 264), 3);
    add_background_object(create_atsewerpipe6_672(5544, 1312), 3);
    add_background_object(create_atsewerpipe6_672(5544, 1280), 3);
    add_background_object(create_atsewerpipe6_672(5544, 1248), 3);
    add_background_object(create_atsewerpipe6_672(5544, 1216), 3);
    add_background_object(create_atsewerpipe6_672(5432, 1136), 3);
    add_background_object(create_atsewerpipe6_672(5432, 1104), 3);
    add_background_object(create_atsewerpipe6_672(5480, 1176), 3);
    add_background_object(create_atsewerpipe6_672(5592, 1096), 3);
    add_background_object(create_atsewerpipe3_718(5576, 1360), 3);
    add_background_object(create_atsewerpipe3_718(5496, 1184), 3);
    add_background_object(create_atsewerpipe3_718(5576, 1224), 3);
    add_background_object(create_atsewerpipe3_718(5544, 1224), 3);
    add_background_object(create_atsewerpipe3_718(5512, 1224), 3);
    add_background_object(create_atsewerpipe3_718(5464, 1184), 3);
    add_background_object(create_atsewerpipe3_718(5512, 1144), 3);
    add_background_object(create_atsewerpipe3_718(5544, 1144), 3);
    add_background_object(create_atsewerpipe2_717(5544, 1344), 3);
    add_background_object(create_atsewerpipe2_717(5432, 1168), 3);
    add_background_object(create_atsewerpipe2_717(5480, 1208), 3);
    add_background_object(create_atsewerpipe7_719(5528, 1184), 3);
    add_background_object(create_atsewerpipe5_720(5480, 1144), 3);
    add_background_object(create_atsewerpipe4_700(5576, 1128), 3);
    add_background_object(create_lightray1_659(5496, 1088), 3);
    add_background_object(create_lightray1_659(5480, 1120), 3);
    add_background_object(create_lightray2_666(5464, 1152), 3);
    add_background_object(create_atsewerpipe7_719(2640, 1616), 3);
    add_background_object(create_atsewerpipe3_718(2576, 1616), 3);
    add_background_object(create_atsewerpipe3_718(2608, 1616), 3);
    add_background_object(create_atsewerpipe2_717(2960, 1344), 3);
    add_background_object(create_atsewerpipe6_672(2960, 1312), 3);
    add_background_object(create_atsewerpipe3_718(2992, 1360), 3);
    add_background_object(create_atsewerpipe3_718(3024, 1360), 3);
    add_background_object(create_atsewerpipe3_718(3056, 1360), 3);
    add_background_object(create_atsewerpipe3_718(3088, 1360), 3);
    add_background_object(create_atsewerpipe6_672(3128, 1376), 3);
    add_background_object(create_atsewerpipe4_700(3112, 1408), 3);
    add_background_object(create_atsewerpipe2_717(3080, 1408), 3);
    add_background_object(create_atsewerpipe6_672(3080, 1376), 3);
    add_background_object(create_atsewerpipe6_672(3080, 1344), 3);
    add_background_object(create_atsewerpipe6_672(3080, 1312), 3);
    add_background_object(create_watervent_725(4960, 1120), 3);
    add_background_object(create_aquabrick14_693(5008, 1056), 3);
    add_background_object(create_aquabrick4_707(4952, 1056), 3);
    add_background_object(create_aquabrick14_693(5488, 928), 3);
    add_background_object(create_aquabrick4_707(5432, 928), 3);
    add_background_object(create_aquabrick14_693(5488, 992), 3);
    add_background_object(create_aquabrick4_707(5432, 992), 3);
    add_background_object(create_watervent_725(5440, 1056), 3);
    add_background_object(create_atsewerpipe4_700(2480, 720), 3);
    add_background_object(create_atsewerpipe6_672(2496, 688), 3);
    add_background_object(create_atsewerpipe6_672(2496, 656), 3);
    add_background_object(create_atsewerpipe6_672(2496, 640), 3);
    add_background_object(create_aquabrick1_676(5824, 480), 3);
    add_background_object(create_aquabrick15_685(5488, 800), 3);
    add_background_object(create_aquabrick15_685(5744, 480), 3);
    add_background_object(create_aquabrick1_676(5568, 608), 3);
    add_background_object(create_aquabrick6_709(5440, 784), 3);
    add_background_object(create_aquabrick16_684(5432, 800), 3);
    add_background_object(create_aquabrick2_706(5440, 816), 3);
    add_background_object(create_watervent_725(5440, 816), 3);
    add_background_object(create_aquabrick13_712(5488, 592), 3);
    add_background_object(create_aquadirt5_695(5888, 288), 3);
    add_background_object(create_aquabrick1_676(5632, 640), 3);
    add_background_object(create_aquabrick1_676(5696, 640), 3);
    add_background_object(create_aquabrick1_676(5760, 672), 3);
    add_background_object(create_aquabrick1_676(5824, 672), 3);
    add_background_object(create_aquabrick1_676(5632, 448), 3);
    add_background_object(create_aquabrick1_676(5696, 448), 3);
    add_background_object(create_aquabrick15_685(5616, 448), 3);
    add_background_object(create_aquabrick3_691(5760, 416), 3);
    add_background_object(create_aquabrick1_676(5504, 416), 3);
    add_background_object(create_aquabrick15_685(5488, 416), 3);
    add_background_object(create_aquabrick1_676(5568, 416), 3);
    add_background_object(create_aquabrick1_676(5888, 512), 3);
    add_background_object(create_aquabrick1_676(5952, 512), 3);
    add_background_object(create_aquabrick15_685(5872, 512), 3);
    add_background_object(create_aquabrick6_709(5632, 592), 3);
    add_background_object(create_aquabrick6_709(5760, 624), 3);
    add_background_object(create_aquabrick16_684(5624, 608), 3);
    add_background_object(create_aquabrick16_684(5752, 640), 3);
    add_background_object(create_aquabrick2_706(5504, 592), 3);
    add_background_object(create_aquabrick2_706(5568, 592), 3);
    add_background_object(create_aquabrick2_706(5632, 624), 3);
    add_background_object(create_aquabrick2_706(5696, 624), 3);
    add_background_object(create_aquabrick2_706(5760, 656), 3);
    add_background_object(create_aquabrick2_706(5824, 656), 3);
    add_background_object(create_atsewerpipe6_672(4776, 328), 3);
    add_background_object(create_atsewerpipe7_719(4808, 296), 3);
    add_background_object(create_atsewerpipe5_720(4776, 296), 3);
    add_background_object(create_atsewerpipe6_672(4824, 328), 3);
    add_background_object(create_atsewerpipe6_672(4824, 424), 3);
    add_background_object(create_atsewerpipe6_672(4776, 424), 3);
    add_background_object(create_atsewerpipe6_672(4824, 456), 3);
    add_background_object(create_atsewerpipe6_672(4776, 456), 3);
    add_background_object(create_atsewerpipe6_672(5176, 328), 3);
    add_background_object(create_atsewerpipe7_719(5208, 296), 3);
    add_background_object(create_atsewerpipe5_720(5176, 296), 3);
    add_background_object(create_atsewerpipe6_672(5224, 328), 3);
    add_background_object(create_atsewerpipe6_672(5224, 424), 3);
    add_background_object(create_atsewerpipe6_672(5176, 424), 3);
    add_background_object(create_atsewerpipe6_672(5224, 456), 3);
    add_background_object(create_atsewerpipe6_672(5176, 456), 3);
    add_background_object(create_atsewerpipe6_672(4824, 392), 3);
    add_background_object(create_atsewerpipe6_672(4776, 392), 3);
    add_background_object(create_atsewerpipe6_672(5224, 392), 3);
    add_background_object(create_atsewerpipe6_672(5176, 392), 3);
    add_background_object(create_atsewerpipe6_672(4824, 360), 3);
    add_background_object(create_atsewerpipe6_672(4776, 360), 3);
    add_background_object(create_atsewerpipe6_672(5224, 360), 3);
    add_background_object(create_atsewerpipe6_672(5176, 360), 3);
    add_background_object(create_atsewerpipe3_718(5488, 448), 3);
    add_background_object(create_atsewerpipe3_718(5520, 448), 3);
    add_background_object(create_atsewerpipe3_718(5552, 448), 3);
    add_background_object(create_atsewerpipe3_718(5584, 448), 3);
    add_background_object(create_atsewerpipe3_718(5712, 480), 3);
    add_background_object(create_atsewerpipe3_718(5680, 480), 3);
    add_background_object(create_atsewerpipe3_718(5648, 480), 3);
    add_background_object(create_atsewerpipe3_718(5616, 480), 3);
    add_background_object(create_atsewerpipe2_717(5584, 464), 3);
    add_background_object(create_atsewerpipe3_718(5840, 512), 3);
    add_background_object(create_atsewerpipe3_718(5808, 512), 3);
    add_background_object(create_atsewerpipe3_718(5776, 512), 3);
    add_background_object(create_atsewerpipe3_718(5744, 512), 3);
    add_background_object(create_atsewerpipe2_717(5712, 496), 3);
    add_background_object(create_aquabrick3_691(5888, 1344), 3);
    add_background_object(create_aquabrick3_691(5888, 1280), 3);
    add_background_object(create_aquabrick3_691(5888, 1408), 3);
    add_background_object(create_aquabrick3_691(5888, 1472), 3);
    add_background_object(create_aquabrick3_691(5888, 1216), 3);
    add_background_object(create_aquabrick3_691(5888, 768), 3);
    add_background_object(create_aquabrick3_691(5888, 704), 3);
    add_background_object(create_aquabrick3_691(5888, 832), 3);
    add_background_object(create_aquabrick3_691(5888, 896), 3);
    add_background_object(create_aquabrick1_676(5888, 672), 3);
    add_background_object(create_aquabrick1_676(5952, 672), 3);
    add_background_object(create_aquabrick2_706(5888, 656), 3);
    add_background_object(create_aquabrick2_706(5952, 656), 3);
    add_background_object(create_aquabrick5_682(5888, 320), 3);
    add_background_object(create_aquabrick5_682(6016, 384), 3);
    add_background_object(create_aquabrick1_676(6016, 512), 3);
    add_background_object(create_aquabrick1_676(6080, 512), 3);
    add_background_object(create_aquabrick1_676(6016, 672), 3);
    add_background_object(create_aquabrick1_676(6080, 672), 3);
    add_background_object(create_aquabrick2_706(6016, 656), 3);
    add_background_object(create_aquabrick2_706(6080, 656), 3);
    add_background_object(create_aquabrick13_712(6000, 304), 3);
    add_background_object(create_aquabrick2_706(6016, 304), 3);
    add_background_object(create_aquabrick3_691(5888, 384), 3);
    add_background_object(create_aquabrick1_676(6016, 320), 3);
    add_background_object(create_aquabrick1_676(6080, 320), 3);
    add_background_object(create_aquabrick1_676(6080, 352), 3);
    add_background_object(create_aquabrick11_688(6016, 352), 3);
    add_background_object(create_aquabrick2_706(6080, 304), 3);
    add_background_object(create_aquabrick6_709(6144, 304), 3);
    add_background_object(create_aquabrick4_707(6136, 320), 3);
    add_background_object(create_aquabrick4_707(6136, 384), 3);
    add_background_object(create_aquabrick4_707(6136, 448), 3);
    add_background_object(create_aquabrick16_684(6136, 512), 3);
    add_background_object(create_aquabrick6_709(6144, 656), 3);
    add_background_object(create_aquabrick5_682(6016, 704), 3);
    add_background_object(create_aquabrick4_707(6136, 672), 3);
    add_background_object(create_aquabrick4_707(6136, 736), 3);
    add_background_object(create_aquabrick5_682(6016, 832), 3);
    add_background_object(create_aquabrick4_707(6136, 800), 3);
    add_background_object(create_aquabrick4_707(6136, 864), 3);
    add_background_object(create_aquabrick21_683(6336, 352), 3);
    add_background_object(create_aquabrick13_712(6320, 304), 3);
    add_background_object(create_aquabrick2_706(6336, 304), 3);
    add_background_object(create_aquabrick2_706(6400, 304), 3);
    add_background_object(create_aquabrick14_693(6320, 320), 3);
    add_background_object(create_aquabrick14_693(6320, 384), 3);
    add_background_object(create_atsewerpipe6_672(6128, 544), 3);
    add_background_object(create_atsewerpipe6_672(6128, 576), 3);
    add_background_object(create_atsewerpipe6_672(6128, 600), 3);
    add_background_object(create_atsewerpipe6_672(6128, 624), 3);
    add_background_object(create_aquabrick21_683(6336, 480), 3);
    add_background_object(create_aquabrick14_693(6320, 448), 3);
    add_background_object(create_aquabrick14_693(6320, 512), 3);
    add_background_object(create_aquabrick21_683(6336, 736), 3);
    add_background_object(create_aquabrick14_693(6320, 736), 3);
    add_background_object(create_aquabrick1_676(6400, 320), 3);
    add_background_object(create_aquabrick1_676(6464, 320), 3);
    add_background_object(create_aquabrick2_706(6464, 304), 3);
    add_background_object(create_aquabrick1_676(6528, 320), 3);
    add_background_object(create_aquabrick3_691(6464, 352), 3);
    add_background_object(create_aquabrick3_691(6592, 352), 3);
    add_background_object(create_aquabrick21_683(6592, 224), 3);
    add_background_object(create_aquabrick21_683(6592, 96), 3);
    add_background_object(create_aquabrick21_683(6592, -32), 3);
    add_background_object(create_aquabrick14_693(6576, 256), 3);
    add_background_object(create_aquabrick14_693(6576, 192), 3);
    add_background_object(create_aquabrick14_693(6576, 128), 3);
    add_background_object(create_aquabrick14_693(6576, 64), 3);
    add_background_object(create_aquabrick14_693(6576, 0), 3);
    add_background_object(create_aquabrick2_706(6528, 304), 3);
    add_background_object(create_aquabrick14_693(6576, -64), 3);
    add_background_object(create_aquabrick3_691(6720, 352), 3);
    add_background_object(create_aquabrick3_691(6720, 288), 3);
    add_background_object(create_aquabrick3_691(6720, 224), 3);
    add_background_object(create_aquabrick3_691(6720, 160), 3);
    add_background_object(create_aquabrick3_691(6720, 96), 3);
    add_background_object(create_aquabrick3_691(6720, 32), 3);
    add_background_object(create_aquabrick3_691(6720, -32), 3);
    add_background_object(create_switchbase_793(6560, 248), 3);
    add_background_object(create_aquabrick3_691(6464, 416), 3);
    add_background_object(create_aquabrick3_691(6592, 416), 3);
    add_background_object(create_aquabrick3_691(6720, 416), 3);
    add_background_object(create_aquabrick3_691(6464, 480), 3);
    add_background_object(create_aquabrick3_691(6592, 480), 3);
    add_background_object(create_aquabrick3_691(6720, 480), 3);
    add_background_object(create_aquabrick3_691(6592, 544), 3);
    add_background_object(create_aquabrick3_691(6464, 768), 3);
    add_background_object(create_signmillablock_794(6376, 256), 3);
    add_background_object(create_aquabrick4_707(6136, 928), 3);
    add_background_object(create_aquabrick5_682(5888, 960), 3);
    add_background_object(create_aquabrick21_683(6336, 864), 3);
    add_background_object(create_aquabrick3_691(6464, 896), 3);
    add_background_object(create_aquabrick3_691(6464, 832), 3);
    add_background_object(create_aquabrick14_693(6320, 832), 3);
    add_background_object(create_aquabrick14_693(6320, 896), 3);
    add_background_object(create_aquabrick1_676(6336, 960), 3);
    add_background_object(create_aquabrick1_676(6400, 960), 3);
    add_background_object(create_aquabrick1_676(6464, 960), 3);
    add_background_object(create_aquabrick15_685(6320, 960), 3);
    add_background_object(create_aquabrick1_676(6528, 960), 3);
    add_background_object(create_aquabrick1_676(6016, 960), 3);
    add_background_object(create_aquabrick5_682(5888, 1088), 3);
    add_background_object(create_aquabrick5_682(5888, 1120), 3);
    add_background_object(create_atwaterfaucet4_723(6032, 1160), 3);
    add_background_object(create_aquabrick4_707(6008, 1120), 3);
    add_background_object(create_aquabrick16_684(6008, 1184), 3);
    add_background_object(create_atwaterfaucet4_723(6032, 1136), 3);
    add_background_object(create_aquabrick1_676(6000, 1088), 3);
    add_background_object(create_aquabrick1_676(6000, 1056), 3);
    add_background_object(create_aquabrick1_676(6000, 1024), 3);
    add_background_object(create_aquabrick1_676(6000, 992), 3);
    add_background_object(create_aquabrick4_707(6040, 1056), 3);
    add_background_object(create_aquabrick4_707(6040, 992), 3);
    add_background_object(create_aquabrick3_691(6720, 544), 3);
    add_background_object(create_aquabrick3_691(6592, 768), 3);
    add_background_object(create_aquabrick3_691(6592, 896), 3);
    add_background_object(create_aquabrick3_691(6592, 832), 3);
    add_background_object(create_aquabrick1_676(6592, 960), 3);
    add_background_object(create_aquabrick1_676(6656, 960), 3);
    add_background_object(create_aquabrick3_691(6720, 800), 3);
    add_background_object(create_aquabrick3_691(6720, 928), 3);
    add_background_object(create_aquabrick3_691(6720, 864), 3);
    add_background_object(create_aquabrick1_676(6720, 960), 3);
    add_background_object(create_aquabrick1_676(6784, 960), 3);
    add_background_object(create_aquabrick3_691(6848, 768), 3);
    add_background_object(create_aquabrick3_691(6720, 768), 3);
    add_background_object(create_aquabrick3_691(6848, 896), 3);
    add_background_object(create_aquabrick3_691(6848, 832), 3);
    add_background_object(create_aquabrick21_683(6848, 960), 3);
    add_background_object(create_aquabrick3_691(6912, 1312), 3);
    add_background_object(create_aquabrick3_691(6912, 1248), 3);
    add_background_object(create_aquabrick14_693(6832, 992), 3);
    add_background_object(create_aquabrick14_693(6832, 1056), 3);
    add_background_object(create_aquabrick1_676(6336, 736), 3);
    add_background_object(create_aquabrick1_676(6400, 736), 3);
    add_background_object(create_aquabrick1_676(6592, 736), 3);
    add_background_object(create_aquabrick1_676(6656, 736), 3);
    add_background_object(create_aquabrick21_683(6720, 640), 3);
    add_background_object(create_aquabrick21_683(6720, 576), 3);
    add_background_object(create_aquabrick1_676(6336, 576), 3);
    add_background_object(create_aquabrick1_676(6400, 576), 3);
    add_background_object(create_aquabrick1_676(6592, 576), 3);
    add_background_object(create_aquabrick1_676(6656, 576), 3);
    add_background_object(create_aquabrick15_685(6320, 576), 3);
    add_background_object(create_aquabrick2_706(6336, 720), 3);
    add_background_object(create_aquabrick2_706(6400, 720), 3);
    add_background_object(create_aquabrick2_706(6592, 720), 3);
    add_background_object(create_aquabrick14_693(6704, 608), 3);
    add_background_object(create_aquabrick14_693(6704, 672), 3);
    add_background_object(create_aquabrick2_706(6656, 720), 3);
    add_background_object(create_aquabrick13_712(6320, 720), 3);
    add_background_object(create_aquabrick14_693(6320, 800), 3);
    add_background_object(create_aquabrick3_691(6848, 384), 3);
    add_background_object(create_aquabrick3_691(6848, 448), 3);
    add_background_object(create_aquabrick3_691(6848, 512), 3);
    add_background_object(create_aquabrick3_691(6848, 576), 3);
    add_background_object(create_aquabrick3_691(6848, 640), 3);
    add_background_object(create_aquabrick3_691(6848, 704), 3);
    add_background_object(create_aquabrick3_691(6464, 544), 3);
    add_background_object(create_aquabrick1_676(6464, 576), 3);
    add_background_object(create_aquabrick1_676(6528, 576), 3);
    add_background_object(create_aquabrick1_676(6464, 736), 3);
    add_background_object(create_aquabrick1_676(6528, 736), 3);
    add_background_object(create_aquabrick2_706(6464, 720), 3);
    add_background_object(create_aquabrick2_706(6528, 720), 3);
    add_background_object(create_aquabrick3_691(6848, 128), 3);
    add_background_object(create_aquabrick3_691(6848, 192), 3);
    add_background_object(create_aquabrick3_691(6848, 256), 3);
    add_background_object(create_aquabrick3_691(6848, 320), 3);
    add_background_object(create_aquabrick3_691(6848, 0), 3);
    add_background_object(create_aquabrick3_691(6848, 64), 3);
    add_background_object(create_aquabrick3_691(6016, 1376), 3);
    add_background_object(create_aquabrick3_691(6016, 1440), 3);
    add_background_object(create_aquabrick3_691(6016, 1504), 3);
    add_background_object(create_aquabrick3_691(6144, 1376), 3);
    add_background_object(create_aquabrick3_691(6144, 1440), 3);
    add_background_object(create_aquabrick3_691(6144, 1504), 3);
    add_background_object(create_aquabrick3_691(6272, 1376), 3);
    add_background_object(create_aquabrick3_691(6272, 1440), 3);
    add_background_object(create_aquabrick3_691(6272, 1504), 3);
    add_background_object(create_aquabrick3_691(6400, 1376), 3);
    add_background_object(create_aquabrick3_691(6400, 1440), 3);
    add_background_object(create_aquabrick3_691(6400, 1504), 3);
    add_background_object(create_aquabrick3_691(6528, 1376), 3);
    add_background_object(create_aquabrick3_691(6528, 1440), 3);
    add_background_object(create_aquabrick3_691(6528, 1504), 3);
    add_background_object(create_aquabrick3_691(6656, 1376), 3);
    add_background_object(create_aquabrick3_691(6656, 1440), 3);
    add_background_object(create_aquabrick3_691(6656, 1504), 3);
    add_background_object(create_aquabrick3_691(6784, 1376), 3);
    add_background_object(create_aquabrick3_691(6784, 1440), 3);
    add_background_object(create_aquabrick3_691(6784, 1504), 3);
    add_background_object(create_aquabrick3_691(6912, 1376), 3);
    add_background_object(create_aquabrick3_691(6912, 1440), 3);
    add_background_object(create_aquabrick3_691(6912, 1504), 3);
    add_background_object(create_aquabrick3_691(5888, 1536), 3);
    add_background_object(create_aquabrick3_691(6016, 1568), 3);
    add_background_object(create_aquabrick3_691(6144, 1568), 3);
    add_background_object(create_aquabrick3_691(6272, 1568), 3);
    add_background_object(create_aquabrick3_691(6400, 1568), 3);
    add_background_object(create_aquabrick3_691(6528, 1568), 3);
    add_background_object(create_aquabrick3_691(6656, 1568), 3);
    add_background_object(create_aquabrick3_691(6784, 1568), 3);
    add_background_object(create_aquabrick3_691(6912, 1568), 3);
    add_background_object(create_atsewerpipe6_672(6336, 608), 3);
    add_background_object(create_atsewerpipe6_672(6336, 640), 3);
    add_background_object(create_atsewerpipe6_672(6336, 664), 3);
    add_background_object(create_atsewerpipe6_672(6336, 688), 3);
    add_background_object(create_aquabrick3_691(5888, 1600), 3);
    add_background_object(create_aquabrick3_691(6016, 1632), 3);
    add_background_object(create_aquabrick3_691(6144, 1632), 3);
    add_background_object(create_aquabrick3_691(6272, 1632), 3);
    add_background_object(create_aquabrick3_691(6400, 1632), 3);
    add_background_object(create_aquabrick3_691(6528, 1632), 3);
    add_background_object(create_aquabrick3_691(6656, 1632), 3);
    add_background_object(create_aquabrick3_691(6784, 1632), 3);
    add_background_object(create_aquabrick3_691(6912, 1632), 3);
    add_background_object(create_aquabrick3_691(5888, 1664), 3);
    add_background_object(create_aquabrick3_691(6016, 1696), 3);
    add_background_object(create_aquabrick3_691(6144, 1696), 3);
    add_background_object(create_aquabrick3_691(6272, 1696), 3);
    add_background_object(create_aquabrick3_691(6400, 1696), 3);
    add_background_object(create_aquabrick3_691(6528, 1696), 3);
    add_background_object(create_aquabrick3_691(6656, 1696), 3);
    add_background_object(create_aquabrick3_691(6784, 1696), 3);
    add_background_object(create_aquabrick3_691(6912, 1696), 3);
    add_background_object(create_aquabrick3_691(5888, 1728), 3);
    add_background_object(create_aquabrick3_691(6016, 1760), 3);
    add_background_object(create_aquabrick3_691(6144, 1760), 3);
    add_background_object(create_aquabrick3_691(6272, 1760), 3);
    add_background_object(create_aquabrick3_691(6400, 1760), 3);
    add_background_object(create_aquabrick3_691(6528, 1760), 3);
    add_background_object(create_aquabrick3_691(6656, 1760), 3);
    add_background_object(create_aquabrick3_691(6784, 1760), 3);
    add_background_object(create_aquabrick3_691(6912, 1760), 3);
    add_background_object(create_aquabrick1_676(6016, 1216), 3);
    add_background_object(create_aquabrick1_676(6208, 1216), 3);
    add_background_object(create_aquabrick2_706(6016, 1200), 3);
    add_background_object(create_aquabrick2_706(6208, 1200), 3);
    add_background_object(create_aquabrick1_676(6080, 1216), 3);
    add_background_object(create_aquabrick1_676(6144, 1216), 3);
    add_background_object(create_aquabrick2_706(6080, 1200), 3);
    add_background_object(create_aquabrick2_706(6144, 1200), 3);
    add_background_object(create_aquabrick1_676(6272, 1216), 3);
    add_background_object(create_aquabrick1_676(6464, 1216), 3);
    add_background_object(create_aquabrick2_706(6272, 1200), 3);
    add_background_object(create_aquabrick2_706(6464, 1200), 3);
    add_background_object(create_aquabrick1_676(6336, 1216), 3);
    add_background_object(create_aquabrick1_676(6400, 1216), 3);
    add_background_object(create_aquabrick2_706(6336, 1200), 3);
    add_background_object(create_aquabrick2_706(6400, 1200), 3);
    add_background_object(create_aquabrick1_676(6528, 1216), 3);
    add_background_object(create_aquabrick1_676(6720, 1216), 3);
    add_background_object(create_aquabrick2_706(6528, 1200), 3);
    add_background_object(create_aquabrick2_706(6720, 1200), 3);
    add_background_object(create_aquabrick1_676(6592, 1216), 3);
    add_background_object(create_aquabrick1_676(6656, 1216), 3);
    add_background_object(create_aquabrick2_706(6592, 1200), 3);
    add_background_object(create_aquabrick2_706(6656, 1200), 3);
    add_background_object(create_aquabrick1_676(6784, 1216), 3);
    add_background_object(create_aquabrick2_706(6784, 1200), 3);
    add_background_object(create_aquabrick3_691(6016, 1824), 3);
    add_background_object(create_aquabrick3_691(6144, 1824), 3);
    add_background_object(create_aquabrick3_691(6272, 1824), 3);
    add_background_object(create_aquabrick3_691(6400, 1824), 3);
    add_background_object(create_aquabrick3_691(6528, 1824), 3);
    add_background_object(create_aquabrick3_691(6656, 1824), 3);
    add_background_object(create_aquabrick3_691(6784, 1824), 3);
    add_background_object(create_aquabrick3_691(6912, 1824), 3);
    add_background_object(create_aquabrick3_691(5760, 1792), 3);
    add_background_object(create_aquabrick3_691(5760, 1856), 3);
    add_background_object(create_aquabrick3_691(5888, 1792), 3);
    add_background_object(create_aquabrick3_691(5888, 1856), 3);
    add_background_object(create_aquabrick2_706(6848, 1200), 3);
    add_background_object(create_aquabrick1_676(6848, 1216), 3);
    add_background_object(create_aquabrick2_706(6912, 1200), 3);
    add_background_object(create_aquabrick1_676(6912, 1216), 3);
    add_background_object(create_aquabrick1_676(6912, 1088), 3);
    add_background_object(create_aquabrick16_684(6040, 1104), 3);
    add_background_object(create_aquabrick15_685(6832, 1104), 3);
    add_background_object(create_aquabrick1_676(6944, 1104), 3);
    add_background_object(create_aquabrick1_676(6880, 1104), 3);
    add_background_object(create_aquabrick1_676(6976, 1216), 3);
    add_background_object(create_aquabrick2_706(6976, 1200), 3);
    add_background_object(create_aquabrick31_789(7104, 1008), 3);
    add_background_object(create_aquabrick3_691(6976, 896), 3);
    add_background_object(create_aquabrick3_691(6976, 960), 3);
    add_background_object(create_aquabrick3_691(6976, 832), 3);
    add_background_object(create_aquabrick3_691(6976, 768), 3);
    add_background_object(create_aquabrick27_780(7232, 608), 3);
    add_background_object(create_aquabrick1_676(7040, 1104), 3);
    add_background_object(create_aquabrick3_691(6976, 1024), 3);
    add_background_object(create_aquabrick1_676(6976, 1088), 3);
    add_background_object(create_aquabrick1_676(7040, 1088), 3);
    add_background_object(create_aquabrick3_691(7040, 1312), 3);
    add_background_object(create_aquabrick3_691(7040, 1248), 3);
    add_background_object(create_aquabrick3_691(7040, 1376), 3);
    add_background_object(create_aquabrick3_691(7040, 1440), 3);
    add_background_object(create_aquabrick3_691(7040, 1504), 3);
    add_background_object(create_aquabrick3_691(7040, 1568), 3);
    add_background_object(create_aquabrick3_691(7040, 1632), 3);
    add_background_object(create_aquabrick3_691(7040, 1696), 3);
    add_background_object(create_aquabrick3_691(7040, 1760), 3);
    add_background_object(create_aquabrick3_691(7040, 1824), 3);
    add_background_object(create_aquabrick2_706(7040, 1200), 3);
    add_background_object(create_aquabrick1_676(7040, 1216), 3);
    add_background_object(create_aquabrick1_676(7104, 1216), 3);
    add_background_object(create_aquabrick2_706(7104, 1200), 3);
    add_background_object(create_aquabrick29_788(7104, 1008), 3);
    add_background_object(create_aquabrick3_691(7168, 1312), 3);
    add_background_object(create_aquabrick3_691(7168, 1248), 3);
    add_background_object(create_aquabrick3_691(7168, 1376), 3);
    add_background_object(create_aquabrick3_691(7168, 1440), 3);
    add_background_object(create_aquabrick3_691(7168, 1504), 3);
    add_background_object(create_aquabrick3_691(7168, 1568), 3);
    add_background_object(create_aquabrick3_691(7168, 1632), 3);
    add_background_object(create_aquabrick3_691(7168, 1696), 3);
    add_background_object(create_aquabrick3_691(7168, 1760), 3);
    add_background_object(create_aquabrick3_691(7168, 1824), 3);
    add_background_object(create_aquabrick3_691(7296, 1312), 3);
    add_background_object(create_aquabrick3_691(7296, 1248), 3);
    add_background_object(create_aquabrick3_691(7296, 1376), 3);
    add_background_object(create_aquabrick3_691(7296, 1440), 3);
    add_background_object(create_aquabrick3_691(7296, 1504), 3);
    add_background_object(create_aquabrick3_691(7296, 1568), 3);
    add_background_object(create_aquabrick3_691(7296, 1632), 3);
    add_background_object(create_aquabrick3_691(7296, 1696), 3);
    add_background_object(create_aquabrick3_691(7296, 1760), 3);
    add_background_object(create_aquabrick3_691(7296, 1824), 3);
    add_background_object(create_aquabrick3_691(7296, 1184), 3);
    add_background_object(create_aquabrick21_683(7296, 1056), 3);
    add_background_object(create_aquabrick21_683(7296, 928), 3);
    add_background_object(create_aquabrick21_683(7296, 800), 3);
    add_background_object(create_aquabrick22_726(7296, 672), 3);
    add_background_object(create_aquabrick5_682(7104, 768), 3);
    add_background_object(create_aquabrick5_682(7104, 640), 3);
    add_background_object(create_aquabrick3_691(6976, 704), 3);
    add_background_object(create_aquabrick3_691(6976, 640), 3);
    add_background_object(create_aquabrick5_682(7104, 576), 3);
    add_background_object(create_aquabrick1_676(7232, 576), 3);
    add_background_object(create_aquabrick3_691(6976, 576), 3);
    add_background_object(create_aquabrick1_676(7296, 576), 3);
    add_background_object(create_aquabrick1_676(7360, 576), 3);
    add_background_object(create_aquabrick3_691(6976, 512), 3);
    add_background_object(create_aquabrick3_691(7104, 512), 3);
    add_background_object(create_aquabrick3_691(7232, 512), 3);
    add_background_object(create_aquabrick3_691(7360, 512), 3);
    add_background_object(create_aquabrick3_691(6976, 448), 3);
    add_background_object(create_aquabrick3_691(7104, 448), 3);
    add_background_object(create_aquabrick3_691(7232, 448), 3);
    add_background_object(create_aquabrick3_691(7360, 448), 3);
    add_background_object(create_aquabrick1_676(7424, 576), 3);
    add_background_object(create_aquabrick3_691(7424, 704), 3);
    add_background_object(create_aquabrick1_676(7424, 672), 3);
    add_background_object(create_aquabrick1_676(7488, 672), 3);
    add_background_object(create_aquabrick23_727(7552, 672), 3);
    add_background_object(create_aquabrick1_676(7488, 576), 3);
    add_background_object(create_aquabrick1_676(7552, 576), 3);
    add_background_object(create_aquabrick1_676(7616, 576), 3);
    add_background_object(create_aquabrick3_691(7488, 512), 3);
    add_background_object(create_aquabrick3_691(7616, 512), 3);
    add_background_object(create_aquabrick3_691(7488, 448), 3);
    add_background_object(create_aquabrick3_691(7616, 448), 3);
    add_background_object(create_aquabrick1_676(7680, 576), 3);
    add_background_object(create_aquabrick26_786(7552, 608), 3);
    add_background_object(create_aquabrick21_683(7744, 576), 3);
    add_background_object(create_aquabrick21_683(7744, 672), 3);
    add_background_object(create_aquabrick3_691(7744, 512), 3);
    add_background_object(create_aquabrick3_691(7744, 448), 3);
    add_background_object(create_aquabrick3_691(6976, 384), 3);
    add_background_object(create_aquabrick3_691(7104, 384), 3);
    add_background_object(create_aquabrick3_691(7232, 384), 3);
    add_background_object(create_aquabrick3_691(7360, 384), 3);
    add_background_object(create_aquabrick3_691(7488, 384), 3);
    add_background_object(create_aquabrick3_691(7616, 384), 3);
    add_background_object(create_aquabrick3_691(7744, 384), 3);
    add_background_object(create_aquabrick3_691(6976, 320), 3);
    add_background_object(create_aquabrick3_691(7104, 320), 3);
    add_background_object(create_aquabrick3_691(7232, 320), 3);
    add_background_object(create_aquabrick3_691(7360, 320), 3);
    add_background_object(create_aquabrick3_691(7488, 320), 3);
    add_background_object(create_aquabrick3_691(7616, 320), 3);
    add_background_object(create_aquabrick3_691(7744, 320), 3);
    add_background_object(create_aquabrick3_691(7424, 768), 3);
    add_background_object(create_aquabrick3_691(7424, 832), 3);
    add_background_object(create_aquabrick3_691(7424, 896), 3);
    add_background_object(create_aquabrick3_691(7424, 1152), 3);
    add_background_object(create_aquabrick3_691(7424, 1216), 3);
    add_background_object(create_aquabrick3_691(7424, 1280), 3);
    add_background_object(create_aquabrick3_691(7424, 1344), 3);
    add_background_object(create_aquabrick3_691(7424, 1408), 3);
    add_background_object(create_aquabrick3_691(7424, 1472), 3);
    add_background_object(create_aquabrick3_691(7424, 1536), 3);
    add_background_object(create_aquabrick3_691(7424, 1600), 3);
    add_background_object(create_aquabrick3_691(7424, 1664), 3);
    add_background_object(create_aquabrick3_691(7424, 1728), 3);
    add_background_object(create_aquabrick3_691(7424, 1792), 3);
    add_background_object(create_aquabrick3_691(7424, 1856), 3);
    add_background_object(create_aquabrick5_682(7552, 800), 3);
    add_background_object(create_aquabrick21_683(7744, 800), 3);
    add_background_object(create_aquabrick5_682(7424, 928), 3);
    add_background_object(create_aquabrick1_676(7552, 928), 3);
    add_background_object(create_aquabrick1_676(7616, 928), 3);
    add_background_object(create_aquabrick1_676(7744, 928), 3);
    add_background_object(create_aquabrick1_676(7808, 928), 3);
    add_background_object(create_watervent_725(6752, 704), 3);
    add_background_object(create_aquabrick14_693(6800, 640), 3);
    add_background_object(create_aquabrick4_707(6744, 640), 3);
    add_background_object(create_watervent_725(6368, 832), 3);
    add_background_object(create_aquabrick14_693(6416, 768), 3);
    add_background_object(create_aquabrick4_707(6360, 768), 3);
    add_background_object(create_watervent_725(6368, 960), 3);
    add_background_object(create_aquabrick14_693(6416, 896), 3);
    add_background_object(create_aquabrick4_707(6360, 896), 3);
    add_background_object(create_watervent_725(6048, 832), 3);
    add_background_object(create_aquabrick14_693(6096, 768), 3);
    add_background_object(create_aquabrick4_707(6040, 768), 3);
    add_background_object(create_watervent_725(6048, 960), 3);
    add_background_object(create_aquabrick14_693(6096, 896), 3);
    add_background_object(create_aquabrick4_707(6040, 896), 3);
    add_background_object(create_aquabrick5_682(7424, 1056), 3);
    add_background_object(create_aquabrick4_707(7544, 960), 3);
    add_background_object(create_aquabrick4_707(7544, 1024), 3);
    add_background_object(create_aquabrick4_707(7544, 1088), 3);
    add_background_object(create_aquabrick1_676(7552, 1152), 3);
    add_background_object(create_aquabrick1_676(7616, 1152), 3);
    add_background_object(create_aquabrick2_706(7552, 1136), 3);
    add_background_object(create_aquabrick1_676(7680, 1152), 3);
    add_background_object(create_aquabrick1_676(7744, 1152), 3);
    add_background_object(create_aquabrick1_676(7808, 1152), 3);
    add_background_object(create_aquabrick2_706(7616, 1136), 3);
    add_background_object(create_aquabrick2_706(7744, 1136), 3);
    add_background_object(create_aquabrick2_706(7808, 1136), 3);
    add_background_object(create_aquabrick2_706(7680, 1136), 3);
    add_background_object(create_watervent_725(7680, 1136), 3);
    add_background_object(create_aquabrick3_691(7552, 1184), 3);
    add_background_object(create_aquabrick3_691(7680, 1184), 3);
    add_background_object(create_aquabrick3_691(7552, 1248), 3);
    add_background_object(create_aquabrick3_691(7680, 1248), 3);
    add_background_object(create_aquabrick3_691(7552, 1312), 3);
    add_background_object(create_aquabrick3_691(7680, 1312), 3);
    add_background_object(create_aquabrick3_691(7552, 1376), 3);
    add_background_object(create_aquabrick3_691(7680, 1376), 3);
    add_background_object(create_atsewerpipe4_700(7648, 960), 3);
    add_background_object(create_atsewerpipe5_720(7616, 976), 3);
    add_background_object(create_atsewerpipe6_672(7616, 1008), 3);
    add_background_object(create_atsewerpipe4_700(7600, 1040), 3);
    add_background_object(create_atsewerpipe3_718(7568, 1056), 3);
    add_background_object(create_atsewerpipe2_717(7584, 992), 3);
    add_background_object(create_atsewerpipe6_672(7584, 960), 3);
    add_background_object(create_atsewerpipe3_718(7632, 1008), 3);
    add_background_object(create_atsewerpipe3_718(7664, 1008), 3);
    add_background_object(create_atsewerpipe3_718(7696, 1008), 3);
    add_background_object(create_atsewerpipe3_718(7728, 1008), 3);
    add_background_object(create_atsewerpipe4_700(7760, 992), 3);
    add_background_object(create_atsewerpipe6_672(7776, 960), 3);
    add_background_object(create_atsewerpipe2_717(7744, 960), 3);
    add_background_object(create_atsewerpipe3_718(7792, 976), 3);
    add_background_object(create_sewerpipe12_795(8144, 576), 3);
    add_background_object(create_sewerpipe13_796(8688, 576), 3);
    add_background_object(create_atsewerpipe4_700(7824, 960), 3);
    add_background_object(create_aquabrick1_676(7872, 1152), 3);
    add_background_object(create_aquabrick2_706(7872, 1136), 3);
    add_background_object(create_aquabrick3_691(7808, 1184), 3);
    add_background_object(create_aquabrick3_691(7808, 1248), 3);
    add_background_object(create_aquabrick3_691(7808, 1312), 3);
    add_background_object(create_aquabrick3_691(7808, 1376), 3);
    add_background_object(create_aquabrick1_676(7936, 1152), 3);
    add_background_object(create_aquabrick2_706(7936, 1136), 3);
    add_background_object(create_aquabrick1_676(8000, 1152), 3);
    add_background_object(create_aquabrick2_706(8000, 1136), 3);
    add_background_object(create_aquabrick3_691(7936, 1184), 3);
    add_background_object(create_aquabrick3_691(7936, 1248), 3);
    add_background_object(create_aquabrick3_691(7936, 1312), 3);
    add_background_object(create_aquabrick3_691(7936, 1376), 3);
    add_background_object(create_aquabrick1_676(8128, 1088), 3);
    add_background_object(create_aquabrick2_706(8128, 1072), 3);
    add_background_object(create_aquabrick3_691(8064, 1184), 3);
    add_background_object(create_aquabrick3_691(8064, 1248), 3);
    add_background_object(create_aquabrick3_691(8064, 1312), 3);
    add_background_object(create_aquabrick3_691(8064, 1376), 3);
    add_background_object(create_aquabrick1_676(8064, 1152), 3);
    add_background_object(create_aquabrick13_712(8112, 1072), 3);
    add_background_object(create_aquabrick14_693(8112, 1088), 3);
    add_background_object(create_aquabrick2_706(8064, 1136), 3);
    add_background_object(create_aquabrick3_691(8192, 1248), 3);
    add_background_object(create_aquabrick3_691(8192, 1312), 3);
    add_background_object(create_aquabrick3_691(8192, 1376), 3);
    add_background_object(create_aquabrick1_676(8256, 1088), 3);
    add_background_object(create_aquabrick2_706(8192, 1072), 3);
    add_background_object(create_aquabrick2_706(8256, 1072), 3);
    add_background_object(create_aquabrick1_676(7872, 928), 3);
    add_background_object(create_aquabrick1_676(7936, 928), 3);
    add_background_object(create_aquabrick3_691(7872, 864), 3);
    add_background_object(create_aquabrick3_691(7872, 800), 3);
    add_background_object(create_aquabrick3_691(7872, 736), 3);
    add_background_object(create_aquabrick3_691(7872, 672), 3);
    add_background_object(create_aquabrick3_691(7872, 608), 3);
    add_background_object(create_aquabrick3_691(7872, 544), 3);
    add_background_object(create_aquabrick3_691(7872, 480), 3);
    add_background_object(create_aquabrick3_691(7872, 416), 3);
    add_background_object(create_aquabrick3_691(7872, 352), 3);
    add_background_object(create_aquabrick3_691(7872, 288), 3);
    add_background_object(create_aquabrick3_691(6976, 256), 3);
    add_background_object(create_aquabrick3_691(7104, 256), 3);
    add_background_object(create_aquabrick3_691(7232, 256), 3);
    add_background_object(create_aquabrick3_691(7360, 256), 3);
    add_background_object(create_aquabrick3_691(7488, 256), 3);
    add_background_object(create_aquabrick3_691(7616, 256), 3);
    add_background_object(create_aquabrick3_691(7744, 256), 3);
    add_background_object(create_aqualargepipe17_797(8616, 1056), 3);
    add_background_object(create_aqualargepipe13_798(8424, 984), 3);
    add_background_object(create_aqualargepipe16_799(8456, 952), 3);
    add_background_object(create_aqualargepipe15_777(8608, 784), 3);
    add_background_object(create_aqualargepipe4_776(8752, 784), 3);
    add_background_object(create_aquabrick21_683(8832, 672), 3);
    add_background_object(create_aquabrick14_693(8816, 768), 3);
    add_background_object(create_aquabrick14_693(8816, 704), 3);
    add_background_object(create_aquabrick21_683(8832, 544), 3);
    add_background_object(create_aquabrick14_693(8816, 640), 3);
    add_background_object(create_aquabrick14_693(8816, 576), 3);
    add_background_object(create_switchbase_793(8800, 736), 3);
    add_background_object(create_aquabrick6_709(8320, 1072), 3);
    add_background_object(create_aquabrick4_707(8312, 1088), 3);
    add_background_object(create_aquabrick4_707(8312, 1152), 3);
    add_background_object(create_aquabrick1_676(8320, 1216), 3);
    add_background_object(create_aquabrick1_676(8384, 1216), 3);
    add_background_object(create_aquabrick2_706(8320, 1200), 3);
    add_background_object(create_aquabrick2_706(8384, 1200), 3);
    add_background_object(create_aquabrick2_706(8832, 1104), 3);
    add_background_object(create_aquabrick2_706(8768, 1104), 3);
    add_background_object(create_aquabrick13_712(8752, 1104), 3);
    add_background_object(create_aquabrick1_676(8768, 1120), 3);
    add_background_object(create_aquabrick1_676(8832, 1120), 3);
    add_background_object(create_aquabrick5_682(8320, 1248), 3);
    add_background_object(create_aquabrick1_676(8768, 1152), 3);
    add_background_object(create_aquabrick1_676(8832, 1152), 3);
    add_background_object(create_aquabrick14_693(8752, 1120), 3);
    add_background_object(create_aqualargepipe14_778(8336, 1024), 3);
    add_background_object(create_aquabrick6_709(8448, 1200), 3);
    add_background_object(create_aquabrick4_707(8440, 1216), 3);
    add_background_object(create_aquabrick4_707(8440, 1280), 3);
    add_background_object(create_aquabrick5_682(8320, 1376), 3);
    add_background_object(create_aquabrick4_707(8440, 1344), 3);
    add_background_object(create_aquabrick3_691(8192, 1440), 3);
    add_background_object(create_aquabrick4_707(8440, 1408), 3);
    add_background_object(create_aquabrick1_676(8448, 1472), 3);
    add_background_object(create_aquabrick1_676(8512, 1472), 3);
    add_background_object(create_aquabrick1_676(8576, 1472), 3);
    add_background_object(create_aquabrick2_706(8448, 1456), 3);
    add_background_object(create_aquabrick2_706(8512, 1456), 3);
    add_background_object(create_aquabrick2_706(8576, 1456), 3);
    add_background_object(create_aquabrick3_691(8192, 1504), 3);
    add_background_object(create_aquabrick1_676(8640, 1472), 3);
    add_background_object(create_aquabrick2_706(8640, 1456), 3);
    add_background_object(create_aquabrick3_691(8192, 1568), 3);
    add_background_object(create_aquabrick1_676(8832, 1504), 3);
    add_background_object(create_aquabrick2_706(8832, 1488), 3);
    add_background_object(create_aquabrick1_676(8896, 1504), 3);
    add_background_object(create_aquabrick2_706(8896, 1488), 3);
    add_background_object(create_aquabrick3_691(8704, 1600), 3);
    add_background_object(create_aquabrick1_676(8768, 1184), 3);
    add_background_object(create_aquabrick1_676(8832, 1184), 3);
    add_background_object(create_aquabrick15_685(8752, 1184), 3);
    add_background_object(create_aquabrick1_676(8896, 800), 3);
    add_background_object(create_aquabrick15_685(8816, 832), 3);
    add_background_object(create_aquabrick1_676(8704, 544), 3);
    add_background_object(create_aquabrick1_676(8768, 544), 3);
    add_background_object(create_aquabrick1_676(8896, 832), 3);
    add_background_object(create_aquabrick3_691(8832, 480), 3);
    add_background_object(create_aquabrick3_691(8704, 480), 3);
    add_background_object(create_aquabrick3_691(8832, 416), 3);
    add_background_object(create_aquabrick3_691(8704, 416), 3);
    add_background_object(create_aquabrick1_676(8576, 544), 3);
    add_background_object(create_aquabrick1_676(8640, 544), 3);
    add_background_object(create_aquabrick3_691(8576, 480), 3);
    add_background_object(create_aquabrick3_691(8576, 416), 3);
    add_background_object(create_aquabrick1_676(8448, 544), 3);
    add_background_object(create_aquabrick1_676(8512, 544), 3);
    add_background_object(create_aquabrick3_691(8448, 480), 3);
    add_background_object(create_aquabrick3_691(8448, 416), 3);
    add_background_object(create_aquabrick1_676(8320, 544), 3);
    add_background_object(create_aquabrick1_676(8384, 544), 3);
    add_background_object(create_aquabrick3_691(8320, 480), 3);
    add_background_object(create_aquabrick3_691(8320, 416), 3);
    add_background_object(create_aquabrick1_676(8192, 544), 3);
    add_background_object(create_aquabrick1_676(8256, 544), 3);
    add_background_object(create_aquabrick3_691(8192, 480), 3);
    add_background_object(create_aquabrick3_691(8192, 416), 3);
    add_background_object(create_aquabrick1_676(8000, 928), 3);
    add_background_object(create_aquabrick1_676(8064, 928), 3);
    add_background_object(create_aquabrick5_682(8000, 800), 3);
    add_background_object(create_aquabrick5_682(8000, 672), 3);
    add_background_object(create_aquabrick4_707(8120, 704), 3);
    add_background_object(create_aquabrick4_707(8120, 768), 3);
    add_background_object(create_aquabrick5_682(8000, 544), 3);
    add_background_object(create_aquabrick4_707(8120, 640), 3);
    add_background_object(create_aquabrick6_709(8896, 1104), 3);
    add_background_object(create_aquabrick4_707(8888, 1120), 3);
    add_background_object(create_aquabrick16_684(8888, 1184), 3);
    add_background_object(create_aquabrick2_706(9088, 1104), 3);
    add_background_object(create_aquabrick2_706(9024, 1104), 3);
    add_background_object(create_aquabrick13_712(9008, 1104), 3);
    add_background_object(create_aquabrick1_676(9024, 1120), 3);
    add_background_object(create_aquabrick1_676(9088, 1120), 3);
    add_background_object(create_aquabrick1_676(9024, 1152), 3);
    add_background_object(create_aquabrick1_676(9088, 1152), 3);
    add_background_object(create_aquabrick14_693(9008, 1120), 3);
    add_background_object(create_aquabrick1_676(9024, 1184), 3);
    add_background_object(create_aquabrick1_676(9088, 1184), 3);
    add_background_object(create_aquabrick15_685(9008, 1184), 3);
    add_background_object(create_aquabrick6_709(9152, 1104), 3);
    add_background_object(create_aquabrick4_707(9144, 1120), 3);
    add_background_object(create_aquabrick16_684(9144, 1184), 3);
    add_background_object(create_aquabrick1_676(8960, 800), 3);
    add_background_object(create_aquabrick1_676(8960, 832), 3);
    add_background_object(create_aquabrick1_676(9024, 800), 3);
    add_background_object(create_aquabrick1_676(9024, 832), 3);
    add_background_object(create_aquabrick3_691(8960, 480), 3);
    add_background_object(create_aquabrick3_691(8960, 416), 3);
    add_background_object(create_aquabrick3_691(8960, 608), 3);
    add_background_object(create_aquabrick3_691(8960, 544), 3);
    add_background_object(create_aquabrick3_691(8960, 736), 3);
    add_background_object(create_aquabrick3_691(8960, 672), 3);
    add_background_object(create_aquabrick5_682(9088, 544), 3);
    add_background_object(create_aquabrick5_682(9088, 672), 3);
    add_background_object(create_aquabrick1_676(9088, 800), 3);
    add_background_object(create_aquabrick1_676(9088, 832), 3);
    add_background_object(create_aquabrick1_676(9152, 800), 3);
    add_background_object(create_aquabrick1_676(9152, 832), 3);
    add_background_object(create_aquabrick1_676(9216, 544), 3);
    add_background_object(create_aquabrick1_676(9280, 544), 3);
    add_background_object(create_aquabrick3_691(9088, 480), 3);
    add_background_object(create_aquabrick3_691(9088, 416), 3);
    add_background_object(create_aquabrick3_691(9216, 480), 3);
    add_background_object(create_aquabrick3_691(9216, 416), 3);
    add_background_object(create_aquabrick16_684(9208, 832), 3);
    add_background_object(create_aquabrick4_707(9208, 768), 3);
    add_background_object(create_aquabrick4_707(9208, 704), 3);
    add_background_object(create_aquabrick4_707(9208, 640), 3);
    add_background_object(create_aquabrick4_707(9208, 576), 3);
    add_background_object(create_aqualargepipe4_776(9216, 1104), 3);
    add_background_object(create_aquabrick1_676(9344, 544), 3);
    add_background_object(create_aquabrick1_676(9408, 544), 3);
    add_background_object(create_aquabrick3_691(9344, 480), 3);
    add_background_object(create_aquabrick3_691(9344, 416), 3);
    add_background_object(create_aquabrick1_676(9472, 544), 3);
    add_background_object(create_aquabrick1_676(9536, 544), 3);
    add_background_object(create_aquabrick3_691(9472, 480), 3);
    add_background_object(create_aquabrick3_691(9472, 416), 3);
    add_background_object(create_aquabrick1_676(9600, 544), 3);
    add_background_object(create_aquabrick1_676(9664, 544), 3);
    add_background_object(create_aquabrick3_691(9600, 480), 3);
    add_background_object(create_aquabrick3_691(9600, 416), 3);
    add_background_object(create_aquabrick3_691(8064, 480), 3);
    add_background_object(create_aquabrick3_691(8064, 416), 3);
    add_background_object(create_aquabrick1_676(8128, 544), 3);
    add_background_object(create_aquabrick4_707(8120, 576), 3);
    add_background_object(create_aquabrick3_691(7936, 480), 3);
    add_background_object(create_aquabrick3_691(7936, 416), 3);
    add_background_object(create_lightray1_659(4408, 640), 3);
    add_background_object(create_lightray2_666(4392, 672), 3);
    add_background_object(create_lightray1_659(4280, 640), 3);
    add_background_object(create_lightray2_666(4248, 704), 3);
    add_background_object(create_lightray1_659(4264, 672), 3);
    add_background_object(create_aquabrick1_676(8128, 928), 3);
    add_background_object(create_aquabrick1_676(8192, 928), 3);
    add_background_object(create_aquabrick1_676(8192, 896), 3);
    add_background_object(create_aquabrick1_676(8256, 928), 3);
    add_background_object(create_aquabrick16_684(8312, 928), 3);
    add_background_object(create_aquabrick11_688(8128, 896), 3);
    add_background_object(create_aquabrick11_688(8256, 896), 3);
    add_background_object(create_aquabrick1_676(8128, 864), 3);
    add_background_object(create_aquabrick16_684(8120, 832), 3);
    add_background_object(create_aquabrick11_688(8192, 864), 3);
    add_background_object(create_aquabrick1_676(8256, 864), 3);
    add_background_object(create_aquabrick6_709(8320, 848), 3);
    add_background_object(create_aquabrick4_707(8312, 864), 3);
    add_background_object(create_aquabrick11_688(8800, 1136), 3);
    add_background_object(create_aquabrick11_688(9056, 1136), 3);
    add_background_object(create_aquabrick2_706(8528, 688), 3);
    add_background_object(create_aquabrick2_706(8336, 688), 3);
    add_background_object(create_aquabrick13_712(8320, 688), 3);
    add_background_object(create_aquabrick6_709(8592, 688), 3);
    add_background_object(create_aquabrick2_706(8400, 688), 3);
    add_background_object(create_aquabrick1_676(8336, 704), 3);
    add_background_object(create_aquabrick1_676(8400, 704), 3);
    add_background_object(create_aquabrick1_676(8528, 704), 3);
    add_background_object(create_aquabrick16_684(8584, 704), 3);
    add_background_object(create_aquabrick15_685(8320, 704), 3);
    add_background_object(create_aquabrick2_706(8464, 688), 3);
    add_background_object(create_aquabrick1_676(8464, 704), 3);
    add_background_object(create_atsewerpipe6_672(8144, 1040), 3);
    add_background_object(create_atsewerpipe6_672(8144, 1008), 3);
    add_background_object(create_atsewerpipe6_672(8144, 976), 3);
    add_background_object(create_atsewerpipe6_672(8144, 960), 3);
    add_background_object(create_atsewerpipe6_672(8288, 960), 3);
    add_background_object(create_atsewerpipe6_672(8288, 992), 3);
    add_background_object(create_atsewerpipe6_672(8288, 1024), 3);
    add_background_object(create_atsewerpipe6_672(8288, 1040), 3);
    add_background_object(create_atsewerpipe6_672(8320, 656), 3);
    add_background_object(create_atsewerpipe6_672(8320, 624), 3);
    add_background_object(create_atsewerpipe6_672(8320, 592), 3);
    add_background_object(create_atsewerpipe6_672(8320, 576), 3);
    add_background_object(create_atsewerpipe6_672(8592, 576), 3);
    add_background_object(create_atsewerpipe6_672(8592, 608), 3);
    add_background_object(create_atsewerpipe6_672(8592, 640), 3);
    add_background_object(create_atsewerpipe6_672(8592, 656), 3);
    add_background_object(create_aquabrick1_676(8960, 1504), 3);
    add_background_object(create_aquabrick2_706(8960, 1488), 3);
    add_background_object(create_aquabrick1_676(9024, 1504), 3);
    add_background_object(create_aquabrick2_706(9024, 1488), 3);
    add_background_object(create_aquabrick3_691(8960, 1536), 3);
    add_background_object(create_aquabrick3_691(8960, 1600), 3);
    add_background_object(create_aqualargepipe17_797(9560, 1088), 3);
    add_background_object(create_aqualargepipe13_798(9368, 1016), 3);
    add_background_object(create_aqualargepipe16_799(9400, 984), 3);
    add_background_object(create_aqualargepipe15_777(9552, 816), 3);
    add_background_object(create_aqualargepipe4_776(9696, 816), 3);
    add_background_object(create_aqualargepipe14_778(9280, 1056), 3);
    add_background_object(create_aquabrick2_706(9792, 1136), 3);
    add_background_object(create_aquabrick1_676(9792, 1152), 3);
    add_background_object(create_aquabrick1_676(9856, 1152), 3);
    add_background_object(create_aquabrick21_683(9792, 1184), 3);
    add_background_object(create_aquabrick13_712(9776, 1136), 3);
    add_background_object(create_aquabrick14_693(9776, 1152), 3);
    add_background_object(create_aquabrick14_693(9776, 1216), 3);
    add_background_object(create_aquabrick21_683(9920, 1056), 3);
    add_background_object(create_aquabrick21_683(9920, 928), 3);
    add_background_object(create_aquabrick21_683(9920, 800), 3);
    add_background_object(create_aquabrick21_683(9920, 736), 3);
    add_background_object(create_aquabrick3_691(9920, 1184), 3);
    add_background_object(create_aquabrick3_691(9920, 1248), 3);
    add_background_object(create_aquabrick15_685(9776, 1280), 3);
    add_background_object(create_aquabrick14_693(9904, 1088), 3);
    add_background_object(create_aquabrick2_706(9856, 1136), 3);
    add_background_object(create_aquabrick14_693(9904, 1024), 3);
    add_background_object(create_aquabrick14_693(9904, 960), 3);
    add_background_object(create_aquabrick14_693(9904, 896), 3);
    add_background_object(create_aquabrick14_693(9904, 832), 3);
    add_background_object(create_aquabrick14_693(9904, 768), 3);
    add_background_object(create_aquabrick1_676(9920, 704), 3);
    add_background_object(create_aquabrick1_676(9984, 704), 3);
    add_background_object(create_aquabrick14_693(9904, 704), 3);
    add_background_object(create_aquabrick2_706(9984, 688), 3);
    add_background_object(create_aquabrick2_706(9920, 688), 3);
    add_background_object(create_aquabrick13_712(9904, 688), 3);
    add_background_object(create_aquabrick3_691(8832, 352), 3);
    add_background_object(create_aquabrick3_691(8704, 352), 3);
    add_background_object(create_aquabrick3_691(8576, 352), 3);
    add_background_object(create_aquabrick3_691(8448, 352), 3);
    add_background_object(create_aquabrick3_691(8320, 352), 3);
    add_background_object(create_aquabrick3_691(8192, 352), 3);
    add_background_object(create_aquabrick3_691(8960, 352), 3);
    add_background_object(create_aquabrick3_691(9088, 352), 3);
    add_background_object(create_aquabrick3_691(9216, 352), 3);
    add_background_object(create_aquabrick3_691(9344, 352), 3);
    add_background_object(create_aquabrick3_691(9472, 352), 3);
    add_background_object(create_aquabrick3_691(9600, 352), 3);
    add_background_object(create_aquabrick3_691(8064, 352), 3);
    add_background_object(create_aquabrick3_691(7936, 352), 3);
    add_background_object(create_aquabrick3_691(8832, 288), 3);
    add_background_object(create_aquabrick3_691(8704, 288), 3);
    add_background_object(create_aquabrick3_691(8576, 288), 3);
    add_background_object(create_aquabrick3_691(8448, 288), 3);
    add_background_object(create_aquabrick3_691(8320, 288), 3);
    add_background_object(create_aquabrick3_691(8192, 288), 3);
    add_background_object(create_aquabrick3_691(8960, 288), 3);
    add_background_object(create_aquabrick3_691(9088, 288), 3);
    add_background_object(create_aquabrick3_691(9216, 288), 3);
    add_background_object(create_aquabrick3_691(9344, 288), 3);
    add_background_object(create_aquabrick3_691(9472, 288), 3);
    add_background_object(create_aquabrick3_691(9600, 288), 3);
    add_background_object(create_aquabrick3_691(8064, 288), 3);
    add_background_object(create_aquabrick3_691(7936, 288), 3);
    add_background_object(create_aquabrick1_676(9728, 544), 3);
    add_background_object(create_aquabrick1_676(9792, 544), 3);
    add_background_object(create_aquabrick3_691(9728, 480), 3);
    add_background_object(create_aquabrick3_691(9728, 416), 3);
    add_background_object(create_aquabrick1_676(9856, 544), 3);
    add_background_object(create_aquabrick1_676(9920, 544), 3);
    add_background_object(create_aquabrick3_691(9856, 480), 3);
    add_background_object(create_aquabrick3_691(9856, 416), 3);
    add_background_object(create_aquabrick3_691(9728, 352), 3);
    add_background_object(create_aquabrick3_691(9856, 352), 3);
    add_background_object(create_aquabrick3_691(9728, 288), 3);
    add_background_object(create_aquabrick3_691(9856, 288), 3);
    add_background_object(create_aquabrick1_676(9088, 1504), 3);
    add_background_object(create_aquabrick1_676(9152, 1504), 3);
    add_background_object(create_aquabrick1_676(9216, 1440), 3);
    add_background_object(create_aquabrick2_706(9088, 1488), 3);
    add_background_object(create_aquabrick2_706(9216, 1424), 3);
    add_background_object(create_aquabrick3_691(9088, 1536), 3);
    add_background_object(create_aquabrick1_676(9280, 1440), 3);
    add_background_object(create_aquabrick2_706(9280, 1424), 3);
    add_background_object(create_aquabrick3_691(9088, 1600), 3);
    add_background_object(create_aquabrick3_691(9216, 1536), 3);
    add_background_object(create_aquabrick1_676(9344, 1472), 3);
    add_background_object(create_aquabrick1_676(9408, 1472), 3);
    add_background_object(create_aquabrick2_706(9408, 1456), 3);
    add_background_object(create_aquabrick3_691(9344, 1504), 3);
    add_background_object(create_aquabrick3_691(9344, 1568), 3);
    add_background_object(create_aquabrick1_676(9792, 1312), 3);
    add_background_object(create_aquabrick15_685(9776, 1312), 3);
    add_background_object(create_aquabrick3_691(8064, 1440), 3);
    add_background_object(create_aquabrick3_691(8064, 1504), 3);
    add_background_object(create_aquabrick3_691(8064, 1568), 3);
    add_background_object(create_aquabrick3_691(8192, 1632), 3);
    add_background_object(create_aquabrick3_691(8320, 1632), 3);
    add_background_object(create_aquabrick3_691(8448, 1632), 3);
    add_background_object(create_aquabrick3_691(8576, 1632), 3);
    add_background_object(create_aquabrick3_691(8192, 1696), 3);
    add_background_object(create_aquabrick3_691(8320, 1696), 3);
    add_background_object(create_aquabrick3_691(8448, 1696), 3);
    add_background_object(create_aquabrick3_691(8576, 1696), 3);
    add_background_object(create_aquabrick3_691(8704, 1664), 3);
    add_background_object(create_aquabrick3_691(8704, 1728), 3);
    add_background_object(create_aquabrick3_691(8960, 1664), 3);
    add_background_object(create_aquabrick3_691(8960, 1728), 3);
    add_background_object(create_aquabrick3_691(9088, 1664), 3);
    add_background_object(create_aquabrick3_691(9216, 1600), 3);
    add_background_object(create_aquabrick3_691(9088, 1728), 3);
    add_background_object(create_aquabrick3_691(9216, 1664), 3);
    add_background_object(create_aquabrick3_691(9344, 1632), 3);
    add_background_object(create_aquabrick3_691(9344, 1696), 3);
    add_background_object(create_aquabrick3_691(8064, 1632), 3);
    add_background_object(create_aquabrick3_691(8064, 1696), 3);
    add_background_object(create_aquabrick1_676(9472, 1472), 3);
    add_background_object(create_aquabrick2_706(9472, 1456), 3);
    add_background_object(create_aquabrick1_676(9536, 1472), 3);
    add_background_object(create_aquabrick2_706(9536, 1456), 3);
    add_background_object(create_aquabrick3_691(9472, 1504), 3);
    add_background_object(create_aquabrick3_691(9472, 1568), 3);
    add_background_object(create_aquabrick1_676(9600, 1472), 3);
    add_background_object(create_aquabrick2_706(9600, 1456), 3);
    add_background_object(create_aquabrick1_676(9664, 1472), 3);
    add_background_object(create_aquabrick2_706(9664, 1456), 3);
    add_background_object(create_aquabrick3_691(9600, 1504), 3);
    add_background_object(create_aquabrick3_691(9600, 1568), 3);
    add_background_object(create_aquabrick3_691(9472, 1632), 3);
    add_background_object(create_aquabrick3_691(9472, 1696), 3);
    add_background_object(create_aquabrick3_691(9600, 1632), 3);
    add_background_object(create_aquabrick3_691(9600, 1696), 3);
    add_background_object(create_aquabrick1_676(9728, 1472), 3);
    add_background_object(create_aquabrick2_706(9728, 1456), 3);
    add_background_object(create_aquabrick1_676(9792, 1472), 3);
    add_background_object(create_aquabrick3_691(9728, 1504), 3);
    add_background_object(create_aquabrick3_691(9728, 1568), 3);
    add_background_object(create_aquabrick3_691(9856, 1504), 3);
    add_background_object(create_aquabrick3_691(9856, 1568), 3);
    add_background_object(create_aquabrick3_691(9728, 1632), 3);
    add_background_object(create_aquabrick3_691(9728, 1696), 3);
    add_background_object(create_aquabrick3_691(9856, 1632), 3);
    add_background_object(create_aquabrick3_691(9856, 1696), 3);
    add_background_object(create_switchbase_793(9888, 1088), 3);
    add_background_object(create_aqualargepipe4_776(9760, 816), 3);
    add_background_object(create_aqualargepipe4_776(9824, 816), 3);
    add_background_object(create_aqualargepipe4_776(9840, 816), 3);
    add_background_object(create_aquabrick3_691(8192, 1760), 3);
    add_background_object(create_aquabrick3_691(8320, 1760), 3);
    add_background_object(create_aquabrick3_691(8448, 1760), 3);
    add_background_object(create_aquabrick3_691(8576, 1760), 3);
    add_background_object(create_aquabrick3_691(8192, 1824), 3);
    add_background_object(create_aquabrick3_691(8320, 1824), 3);
    add_background_object(create_aquabrick3_691(8448, 1824), 3);
    add_background_object(create_aquabrick3_691(8576, 1824), 3);
    add_background_object(create_aquabrick3_691(8064, 1760), 3);
    add_background_object(create_aquabrick3_691(8064, 1824), 3);
    add_background_object(create_aquabrick3_691(8704, 1792), 3);
    add_background_object(create_aquabrick3_691(8704, 1856), 3);
    add_background_object(create_aquabrick3_691(8960, 1792), 3);
    add_background_object(create_aquabrick3_691(8960, 1856), 3);
    add_background_object(create_aquabrick3_691(9088, 1792), 3);
    add_background_object(create_aquabrick3_691(9088, 1856), 3);
    add_background_object(create_aquabrick1_676(8576, 1600), 3);
    add_background_object(create_aquabrick2_706(8576, 1584), 3);
    add_background_object(create_aquabrick1_676(8640, 1600), 3);
    add_background_object(create_aquabrick2_706(8640, 1584), 3);
    add_background_object(create_aquabrick1_676(8704, 1600), 3);
    add_background_object(create_aquabrick2_706(8704, 1584), 3);
    add_background_object(create_aquabrick1_676(8768, 1600), 3);
    add_background_object(create_aquabrick1_676(8448, 1600), 3);
    add_background_object(create_aquabrick1_676(8512, 1600), 3);
    add_background_object(create_aquabrick2_706(8512, 1584), 3);
    add_background_object(create_aquabrick5_682(8320, 1504), 3);
    add_background_object(create_aquabrick4_707(8440, 1504), 3);
    add_background_object(create_aquabrick16_684(8440, 1568), 3);
    add_background_object(create_aquabrick2_706(8448, 1584), 3);
    add_background_object(create_aquabrick6_709(8704, 1456), 3);
    add_background_object(create_aquabrick16_684(8696, 1472), 3);
    add_background_object(create_atsewerpipe6_672(8704, 1504), 3);
    add_background_object(create_atsewerpipe6_672(8704, 1552), 3);
    add_background_object(create_atsewerpipe6_672(8704, 1528), 3);
    add_background_object(create_aquabrick21_683(8832, 1536), 3);
    add_background_object(create_aquabrick3_691(8832, 1824), 3);
    add_background_object(create_aquabrick3_691(8832, 1760), 3);
    add_background_object(create_aquabrick3_691(8832, 1696), 3);
    add_background_object(create_aquabrick3_691(8832, 1632), 3);
    add_background_object(create_aquabrick13_712(8816, 1488), 3);
    add_background_object(create_aquabrick14_693(8816, 1504), 3);
    add_background_object(create_aquabrick15_685(8816, 1568), 3);
    add_background_object(create_aquabrick2_706(8768, 1584), 3);
    add_background_object(create_aquabrick3_691(9216, 1728), 3);
    add_background_object(create_aquabrick13_712(9200, 1424), 3);
    add_background_object(create_aquabrick1_676(9280, 1472), 3);
    add_background_object(create_aquabrick1_676(9216, 1472), 3);
    add_background_object(create_aquabrick14_693(9200, 1440), 3);
    add_background_object(create_aquabrick2_706(9152, 1488), 3);
    add_background_object(create_aquabrick6_709(9344, 1424), 3);
    add_background_object(create_aquabrick2_706(9344, 1456), 3);
    add_background_object(create_aquabrick3_691(10048, 1248), 3);
    add_background_object(create_aquabrick3_691(10176, 1248), 3);
    add_background_object(create_aquabrick3_691(10304, 1248), 3);
    add_background_object(create_aquabrick3_691(10048, 1184), 3);
    add_background_object(create_aquabrick3_691(10176, 1184), 3);
    add_background_object(create_aquabrick3_691(10304, 1184), 3);
    add_background_object(create_aquabrick5_682(9984, 736), 3);
    add_background_object(create_aquabrick5_682(9984, 864), 3);
    add_background_object(create_aquabrick1_676(10048, 704), 3);
    add_background_object(create_aquabrick2_706(10048, 688), 3);
    add_background_object(create_aquabrick3_691(10048, 1120), 3);
    add_background_object(create_aquabrick3_691(10176, 1120), 3);
    add_background_object(create_aquabrick3_691(10304, 1120), 3);
    add_background_object(create_aquabrick3_691(10048, 1056), 3);
    add_background_object(create_aquabrick3_691(10176, 1056), 3);
    add_background_object(create_aquabrick3_691(10304, 1056), 3);
    add_background_object(create_aquabrick3_691(10048, 992), 3);
    add_background_object(create_aquabrick6_709(10112, 688), 3);
    add_background_object(create_aquabrick4_707(10104, 704), 3);
    add_background_object(create_aquabrick4_707(10104, 768), 3);
    add_background_object(create_aquabrick4_707(10104, 832), 3);
    add_background_object(create_aquabrick4_707(10104, 896), 3);
    add_background_object(create_aquabrick3_691(10176, 992), 3);
    add_background_object(create_aquabrick3_691(10304, 992), 3);
    add_background_object(create_aquabrick3_691(10432, 992), 3);
    add_background_object(create_aquabrick3_691(10560, 992), 3);
    add_background_object(create_aquabrick1_676(10304, 960), 3);
    add_background_object(create_aquabrick2_706(10304, 944), 3);
    add_background_object(create_aquabrick6_709(10368, 944), 3);
    add_background_object(create_aquabrick16_684(10360, 960), 3);
    add_background_object(create_aquabrick2_706(10368, 976), 3);
    add_background_object(create_aquabrick1_676(9984, 544), 3);
    add_background_object(create_aquabrick1_676(10048, 544), 3);
    add_background_object(create_aquabrick3_691(9984, 480), 3);
    add_background_object(create_aquabrick3_691(9984, 416), 3);
    add_background_object(create_aquabrick3_691(9984, 352), 3);
    add_background_object(create_aquabrick3_691(9984, 288), 3);
    add_background_object(create_aquabrick1_676(10112, 544), 3);
    add_background_object(create_aquabrick1_676(10176, 544), 3);
    add_background_object(create_aquabrick3_691(10112, 480), 3);
    add_background_object(create_aquabrick3_691(10112, 416), 3);
    add_background_object(create_aquabrick3_691(10112, 352), 3);
    add_background_object(create_aquabrick3_691(10112, 288), 3);
    add_background_object(create_aquabrick1_676(10240, 544), 3);
    add_background_object(create_aquabrick1_676(10304, 544), 3);
    add_background_object(create_aquabrick3_691(10240, 480), 3);
    add_background_object(create_aquabrick3_691(10240, 416), 3);
    add_background_object(create_aquabrick3_691(10240, 352), 3);
    add_background_object(create_aquabrick3_691(10240, 288), 3);
    add_background_object(create_aquabrick1_676(10240, 608), 3);
    add_background_object(create_aquabrick1_676(10304, 640), 3);
    add_background_object(create_aquabrick11_688(10304, 608), 3);
    add_background_object(create_aquabrick11_688(10240, 640), 3);
    add_background_object(create_aquabrick1_676(10240, 672), 3);
    add_background_object(create_aquabrick11_688(10304, 672), 3);
    add_background_object(create_aquabrick1_676(10304, 704), 3);
    add_background_object(create_aquabrick11_688(10240, 704), 3);
    add_background_object(create_aquabrick1_676(10240, 736), 3);
    add_background_object(create_aquabrick1_676(10304, 768), 3);
    add_background_object(create_aquabrick1_676(10240, 768), 3);
    add_background_object(create_aquabrick11_688(10304, 736), 3);
    add_background_object(create_aquabrick3_691(10432, 1056), 3);
    add_background_object(create_aquabrick3_691(10432, 1120), 3);
    add_background_object(create_aquabrick3_691(10432, 1184), 3);
    add_background_object(create_aquabrick3_691(10432, 1248), 3);
    add_background_object(create_aquabrick1_676(10240, 960), 3);
    add_background_object(create_aquabrick2_706(10240, 944), 3);
    add_background_object(create_aquabrick16_684(10360, 768), 3);
    add_background_object(create_aquabrick15_685(10224, 768), 3);
    add_background_object(create_aquabrick14_693(10224, 704), 3);
    add_background_object(create_aquabrick14_693(10224, 640), 3);
    add_background_object(create_aquabrick1_676(10304, 576), 3);
    add_background_object(create_aquabrick11_688(10240, 576), 3);
    add_background_object(create_aquabrick14_693(10224, 576), 3);
    add_background_object(create_aquabrick1_676(10368, 544), 3);
    add_background_object(create_aquabrick1_676(10432, 544), 3);
    add_background_object(create_aquabrick3_691(10368, 480), 3);
    add_background_object(create_aquabrick3_691(10368, 416), 3);
    add_background_object(create_aquabrick3_691(10368, 352), 3);
    add_background_object(create_aquabrick3_691(10368, 288), 3);
    add_background_object(create_aquabrick1_676(10496, 544), 3);
    add_background_object(create_aquabrick1_676(10560, 544), 3);
    add_background_object(create_aquabrick3_691(10496, 480), 3);
    add_background_object(create_aquabrick3_691(10496, 416), 3);
    add_background_object(create_aquabrick3_691(10496, 352), 3);
    add_background_object(create_aquabrick3_691(10496, 288), 3);
    add_background_object(create_aquabrick4_707(10360, 704), 3);
    add_background_object(create_aquabrick4_707(10360, 640), 3);
    add_background_object(create_aquabrick4_707(10360, 576), 3);
    add_background_object(create_aquabrick14_693(10480, 768), 3);
    add_background_object(create_aquabrick14_693(10480, 832), 3);
    add_background_object(create_aquabrick14_693(10480, 896), 3);
    add_background_object(create_aquabrick1_676(10496, 704), 3);
    add_background_object(create_aquabrick1_676(10560, 704), 3);
    add_background_object(create_aquabrick14_693(10480, 704), 3);
    add_background_object(create_aquabrick2_706(10496, 688), 3);
    add_background_object(create_aquabrick2_706(10560, 688), 3);
    add_background_object(create_aquabrick13_712(10480, 688), 3);
    add_background_object(create_aquabrick3_691(10560, 1056), 3);
    add_background_object(create_aquabrick3_691(10560, 1120), 3);
    add_background_object(create_aquabrick3_691(10560, 1184), 3);
    add_background_object(create_aquabrick3_691(10560, 1248), 3);
    add_background_object(create_aquabrick15_685(10480, 960), 3);
    add_background_object(create_aquabrick2_706(10432, 976), 3);
    add_background_object(create_aquabrick16_684(10104, 960), 3);
    add_background_object(create_aquabrick2_706(10112, 976), 3);
    add_background_object(create_aquabrick13_712(10224, 944), 3);
    add_background_object(create_aquabrick15_685(10224, 960), 3);
    add_background_object(create_aquabrick2_706(10176, 976), 3);
    add_background_object(create_aquabrick1_676(10624, 544), 3);
    add_background_object(create_aquabrick1_676(10688, 544), 3);
    add_background_object(create_aquabrick3_691(10624, 480), 3);
    add_background_object(create_aquabrick3_691(10624, 416), 3);
    add_background_object(create_aquabrick3_691(10624, 352), 3);
    add_background_object(create_aquabrick3_691(10624, 288), 3);
    add_background_object(create_aquabrick3_691(10688, 1056), 3);
    add_background_object(create_aquabrick3_691(10688, 1120), 3);
    add_background_object(create_aquabrick3_691(10688, 1184), 3);
    add_background_object(create_aquabrick3_691(10688, 1248), 3);
    add_background_object(create_aquabrick3_691(10688, 1312), 3);
    add_background_object(create_aquabrick3_691(10688, 992), 3);
    add_background_object(create_sewerpipe12_795(9232, 576), 3);
    add_background_object(create_aquabrick3_691(10816, 992), 3);
    add_background_object(create_aquabrick3_691(10944, 992), 3);
    add_background_object(create_aquabrick1_676(11072, 960), 3);
    add_background_object(create_aquabrick11_688(11008, 960), 3);
    add_background_object(create_aquabrick2_706(11008, 944), 3);
    add_background_object(create_aquabrick2_706(11072, 944), 3);
    add_background_object(create_aquabrick11_688(11136, 960), 3);
    add_background_object(create_aquabrick2_706(11136, 944), 3);
    add_background_object(create_aquabrick3_691(10816, 1056), 3);
    add_background_object(create_aquabrick3_691(10944, 1056), 3);
    add_background_object(create_aquabrick3_691(10816, 1120), 3);
    add_background_object(create_aquabrick3_691(10944, 1120), 3);
    add_background_object(create_aquabrick3_691(10816, 1184), 3);
    add_background_object(create_aquabrick3_691(10944, 1184), 3);
    add_background_object(create_aquabrick3_691(10816, 1248), 3);
    add_background_object(create_aquabrick3_691(10944, 1248), 3);
    add_background_object(create_aquabrick3_691(10816, 1312), 3);
    add_background_object(create_aquabrick3_691(10944, 1312), 3);
    add_background_object(create_aquabrick1_676(11584, 960), 3);
    add_background_object(create_aquabrick2_706(11264, 944), 3);
    add_background_object(create_aquabrick11_688(11264, 960), 3);
    add_background_object(create_aquabrick2_706(11328, 944), 3);
    add_background_object(create_aquabrick1_676(11328, 960), 3);
    add_background_object(create_aquabrick2_706(11392, 944), 3);
    add_background_object(create_aquabrick11_688(11392, 960), 3);
    add_background_object(create_aquabrick2_706(11456, 944), 3);
    add_background_object(create_aquabrick3_691(11072, 1184), 3);
    add_background_object(create_aquabrick3_691(11328, 1248), 3);
    add_background_object(create_aquabrick3_691(11328, 1312), 3);
    add_background_object(create_aquabrick11_688(8192, 1088), 3);
    add_background_object(create_aquabrick2_706(9744, 1056), 3);
    add_background_object(create_aquabrick13_712(9728, 1056), 3);
    add_background_object(create_aquabrick6_709(9808, 1056), 3);
    add_background_object(create_atsewerpipe6_672(9728, 1072), 3);
    add_background_object(create_atsewerpipe6_672(9728, 1104), 3);
    add_background_object(create_atsewerpipe6_672(9808, 1072), 3);
    add_background_object(create_atsewerpipe6_672(9808, 1104), 3);
    add_background_object(create_aquabrick13_712(8304, 848), 3);
    add_background_object(create_aqualargepipe4_776(9352, 720), 3);
    add_background_object(create_aqualargepipe4_776(9288, 720), 3);
    add_background_object(create_aqualargepipe4_776(9232, 720), 3);
    add_background_object(create_aquabrick3_691(10944, 1376), 3);
    add_background_object(create_aquabrick3_691(10944, 1440), 3);
    add_background_object(create_aquabrick3_691(11072, 1376), 3);
    add_background_object(create_aquabrick3_691(11072, 1440), 3);
    add_background_object(create_aquabrick3_691(11072, 1248), 3);
    add_background_object(create_aquabrick3_691(11072, 1312), 3);
    add_background_object(create_aquabrick3_691(11200, 1248), 3);
    add_background_object(create_aquabrick3_691(11200, 1312), 3);
    add_background_object(create_aquabrick3_691(11200, 1376), 3);
    add_background_object(create_aquabrick3_691(11200, 1440), 3);
    add_background_object(create_aquabrick3_691(10816, 1376), 3);
    add_background_object(create_aquabrick3_691(10816, 1440), 3);
    add_background_object(create_aquabrick2_706(11200, 944), 3);
    add_background_object(create_aquabrick1_676(10752, 544), 3);
    add_background_object(create_aquabrick1_676(10816, 544), 3);
    add_background_object(create_aquabrick3_691(10752, 480), 3);
    add_background_object(create_aquabrick3_691(10752, 416), 3);
    add_background_object(create_aquabrick3_691(10752, 352), 3);
    add_background_object(create_aquabrick3_691(10752, 288), 3);
    add_background_object(create_aquabrick1_676(10880, 544), 3);
    add_background_object(create_aquabrick1_676(10944, 544), 3);
    add_background_object(create_aquabrick3_691(10880, 480), 3);
    add_background_object(create_aquabrick3_691(10880, 416), 3);
    add_background_object(create_aquabrick3_691(10880, 352), 3);
    add_background_object(create_aquabrick3_691(10880, 288), 3);
    add_background_object(create_aquabrick1_676(11008, 544), 3);
    add_background_object(create_aquabrick1_676(11072, 544), 3);
    add_background_object(create_aquabrick3_691(11008, 480), 3);
    add_background_object(create_aquabrick3_691(11008, 416), 3);
    add_background_object(create_aquabrick3_691(11008, 352), 3);
    add_background_object(create_aquabrick3_691(11008, 288), 3);
    add_background_object(create_aquabrick3_691(11136, 480), 3);
    add_background_object(create_aquabrick3_691(11136, 416), 3);
    add_background_object(create_aquabrick3_691(11136, 352), 3);
    add_background_object(create_aquabrick3_691(11136, 288), 3);
    add_background_object(create_aquabrick9_721(10624, 696), 3);
    add_background_object(create_aquabrick9_721(10648, 704), 3);
    add_background_object(create_aquabrick1_676(10944, 960), 3);
    add_background_object(create_aquabrick11_688(10880, 960), 3);
    add_background_object(create_aquabrick2_706(10880, 944), 3);
    add_background_object(create_aquabrick2_706(10944, 944), 3);
    add_background_object(create_aquabrick1_676(10816, 960), 3);
    add_background_object(create_aquabrick11_688(10752, 960), 3);
    add_background_object(create_aquabrick2_706(10752, 944), 3);
    add_background_object(create_aquabrick2_706(10816, 944), 3);
    add_background_object(create_aquabrick1_676(10688, 960), 3);
    add_background_object(create_aquabrick2_706(10688, 944), 3);
    add_background_object(create_aquabrick1_676(10560, 960), 3);
    add_background_object(create_aquabrick1_676(10560, 896), 3);
    add_background_object(create_aquabrick1_676(10560, 832), 3);
    add_background_object(create_aquabrick1_676(10560, 800), 3);
    add_background_object(create_aquabrick1_676(10560, 736), 3);
    add_background_object(create_aquabrick11_688(10560, 768), 3);
    add_background_object(create_aquabrick11_688(10560, 864), 3);
    add_background_object(create_aquabrick4_707(10616, 896), 3);
    add_background_object(create_aquabrick4_707(10616, 832), 3);
    add_background_object(create_aquabrick4_707(10616, 768), 3);
    add_background_object(create_aquabrick11_688(10624, 960), 3);
    add_background_object(create_aquabrick2_706(10624, 944), 3);
    add_background_object(create_aquabrick3_691(11328, 1376), 3);
    add_background_object(create_aquabrick3_691(11328, 1440), 3);
    add_background_object(create_aquabrick21_683(11136, 544), 3);
    add_background_object(create_aquabrick14_693(11120, 576), 3);
    add_background_object(create_aquabrick1_676(11200, 768), 3);
    add_background_object(create_aquabrick1_676(11136, 768), 3);
    add_background_object(create_aquabrick15_685(11056, 768), 3);
    add_background_object(create_aquabrick3_691(11264, 480), 3);
    add_background_object(create_aquabrick3_691(11264, 416), 3);
    add_background_object(create_aquabrick3_691(11264, 352), 3);
    add_background_object(create_aquabrick3_691(11264, 288), 3);
    add_background_object(create_aquabrick3_691(11264, 736), 3);
    add_background_object(create_aquabrick3_691(11264, 672), 3);
    add_background_object(create_aquabrick3_691(11264, 608), 3);
    add_background_object(create_aquabrick3_691(11264, 544), 3);
    add_background_object(create_aquabrick1_676(11328, 768), 3);
    add_background_object(create_aquabrick1_676(11264, 768), 3);
    add_background_object(create_aquabrick3_691(11392, 480), 3);
    add_background_object(create_aquabrick3_691(11392, 416), 3);
    add_background_object(create_aquabrick3_691(11392, 352), 3);
    add_background_object(create_aquabrick3_691(11392, 288), 3);
    add_background_object(create_aquabrick3_691(11392, 736), 3);
    add_background_object(create_aquabrick3_691(11392, 672), 3);
    add_background_object(create_aquabrick3_691(11392, 608), 3);
    add_background_object(create_aquabrick3_691(11392, 544), 3);
    add_background_object(create_aquabrick1_676(11456, 768), 3);
    add_background_object(create_aquabrick1_676(11392, 768), 3);
    add_background_object(create_aquabrick3_691(11456, 1248), 3);
    add_background_object(create_aquabrick3_691(11456, 1312), 3);
    add_background_object(create_aquabrick3_691(11456, 1376), 3);
    add_background_object(create_aquabrick3_691(11456, 1440), 3);
    add_background_object(create_aquabrick1_676(11456, 960), 3);
    add_background_object(create_aquabrick2_706(11520, 944), 3);
    add_background_object(create_aquabrick11_688(11520, 960), 3);
    add_background_object(create_aquabrick2_706(11584, 944), 3);
    add_background_object(create_aquabrick3_691(11200, 1184), 3);
    add_background_object(create_aquabrick3_691(11520, 480), 3);
    add_background_object(create_aquabrick3_691(11520, 416), 3);
    add_background_object(create_aquabrick3_691(11520, 352), 3);
    add_background_object(create_aquabrick3_691(11520, 288), 3);
    add_background_object(create_aquabrick3_691(11520, 736), 3);
    add_background_object(create_aquabrick3_691(11520, 672), 3);
    add_background_object(create_aquabrick3_691(11520, 608), 3);
    add_background_object(create_aquabrick3_691(11520, 544), 3);
    add_background_object(create_aquabrick1_676(11584, 768), 3);
    add_background_object(create_aquabrick1_676(11520, 768), 3);
    add_background_object(create_aquabrick21_683(9856, 1312), 3);
    add_background_object(create_aquabrick21_683(9856, 1376), 3);
    add_background_object(create_aquabrick14_693(9840, 1344), 3);
    add_background_object(create_aquabrick14_693(9840, 1408), 3);
    add_background_object(create_aquabrick2_706(9792, 1456), 3);
    add_background_object(create_aquabrick3_691(9984, 1440), 3);
    add_background_object(create_aquabrick3_691(9984, 1376), 3);
    add_background_object(create_aquabrick3_691(9984, 1312), 3);
    add_background_object(create_aquabrick3_691(9984, 1632), 3);
    add_background_object(create_aquabrick3_691(9984, 1568), 3);
    add_background_object(create_aquabrick3_691(9984, 1504), 3);
    add_background_object(create_aquabrick3_691(9984, 1696), 3);
    add_background_object(create_aquabrick3_691(10112, 1440), 3);
    add_background_object(create_aquabrick3_691(10112, 1376), 3);
    add_background_object(create_aquabrick3_691(10112, 1312), 3);
    add_background_object(create_aquabrick3_691(10112, 1632), 3);
    add_background_object(create_aquabrick3_691(10112, 1568), 3);
    add_background_object(create_aquabrick3_691(10112, 1504), 3);
    add_background_object(create_aquabrick3_691(10112, 1696), 3);
    add_background_object(create_aquabrick3_691(10240, 1440), 3);
    add_background_object(create_aquabrick3_691(10240, 1376), 3);
    add_background_object(create_aquabrick3_691(10240, 1312), 3);
    add_background_object(create_aquabrick3_691(10240, 1632), 3);
    add_background_object(create_aquabrick3_691(10240, 1568), 3);
    add_background_object(create_aquabrick3_691(10240, 1504), 3);
    add_background_object(create_aquabrick3_691(10240, 1696), 3);
    add_background_object(create_aquabrick3_691(9344, 1760), 3);
    add_background_object(create_aquabrick3_691(9472, 1760), 3);
    add_background_object(create_aquabrick3_691(9600, 1760), 3);
    add_background_object(create_aquabrick3_691(9728, 1760), 3);
    add_background_object(create_aquabrick3_691(9856, 1760), 3);
    add_background_object(create_aquabrick3_691(9984, 1760), 3);
    add_background_object(create_aquabrick3_691(10112, 1760), 3);
    add_background_object(create_aquabrick3_691(10240, 1760), 3);
    add_background_object(create_aquabrick3_691(9344, 1824), 3);
    add_background_object(create_aquabrick3_691(9472, 1824), 3);
    add_background_object(create_aquabrick3_691(9600, 1824), 3);
    add_background_object(create_aquabrick3_691(9728, 1824), 3);
    add_background_object(create_aquabrick3_691(9856, 1824), 3);
    add_background_object(create_aquabrick3_691(9984, 1824), 3);
    add_background_object(create_aquabrick3_691(10112, 1824), 3);
    add_background_object(create_aquabrick3_691(10240, 1824), 3);
    add_background_object(create_aquabrick3_691(9216, 1792), 3);
    add_background_object(create_aquabrick3_691(9216, 1856), 3);
    add_background_object(create_aquabrick3_691(7552, 1440), 3);
    add_background_object(create_aquabrick3_691(7680, 1440), 3);
    add_background_object(create_aquabrick3_691(7808, 1440), 3);
    add_background_object(create_aquabrick3_691(7936, 1440), 3);
    add_background_object(create_sewerpipe13_796(10992, 576), 3);
    add_background_object(create_sewerpipe13_796(11456, 800), 3);
    add_background_object(create_sewerpipe13_796(9776, 880), 3);
    add_background_object(create_atsewerpipe6_672(9840, 784), 3);
    add_background_object(create_atsewerpipe5_720(9840, 720), 3);
    add_background_object(create_atsewerpipe3_718(9872, 720), 3);
    add_background_object(create_atsewerpipe6_672(9840, 752), 3);
    add_background_object(create_atsewerpipe5_720(9776, 784), 3);
    add_background_object(create_atsewerpipe3_718(9808, 784), 3);
    add_background_object(create_atsewerpipe3_718(9856, 784), 3);
    add_background_object(create_atsewerpipe3_718(9872, 784), 3);
    add_background_object(create_aquabrick3_691(11072, 1120), 3);
    add_background_object(create_aquabrick3_691(11200, 1120), 3);
    add_background_object(create_aquabrick3_691(11072, 1056), 3);
    add_background_object(create_aquabrick3_691(11200, 1056), 3);
    add_background_object(create_aquabrick3_691(11072, 992), 3);
    add_background_object(create_aquabrick3_691(11200, 992), 3);
    add_background_object(create_aquabrick1_676(11200, 960), 3);
    add_background_object(create_aquabrick3_691(11328, 1120), 3);
    add_background_object(create_aquabrick3_691(11328, 1184), 3);
    add_background_object(create_aquabrick3_691(11456, 1120), 3);
    add_background_object(create_aquabrick3_691(11456, 1184), 3);
    add_background_object(create_aquabrick3_691(11328, 992), 3);
    add_background_object(create_aquabrick3_691(11328, 1056), 3);
    add_background_object(create_aquabrick3_691(11456, 992), 3);
    add_background_object(create_aquabrick3_691(11456, 1056), 3);
    add_background_object(create_watervent_725(8864, 800), 3);
    add_background_object(create_aquabrick14_693(8912, 736), 3);
    add_background_object(create_aquabrick4_707(8856, 736), 3);
    add_background_object(create_watervent_725(8864, 672), 3);
    add_background_object(create_aquabrick14_693(8912, 608), 3);
    add_background_object(create_aquabrick4_707(8856, 608), 3);
    add_background_object(create_watervent_725(8192, 944), 3);
    add_background_object(create_aquabrick14_693(8240, 880), 3);
    add_background_object(create_aquabrick4_707(8184, 880), 3);
    add_background_object(create_watervent_725(8192, 1168), 3);
    add_background_object(create_aquabrick14_693(8240, 1104), 3);
    add_background_object(create_aquabrick4_707(8184, 1104), 3);
    add_background_object(create_watervent_725(10272, 768), 3);
    add_background_object(create_aquabrick14_693(10320, 704), 3);
    add_background_object(create_aquabrick4_707(10264, 704), 3);
    add_background_object(create_aquabrick14_693(10320, 640), 3);
    add_background_object(create_aquabrick4_707(10264, 640), 3);
    add_background_object(create_aquabrick14_693(10320, 576), 3);
    add_background_object(create_aquabrick4_707(10264, 576), 3);
    add_background_object(create_lightray1_659(6456, 992), 3);
    add_background_object(create_lightray1_659(6440, 1024), 3);
    add_background_object(create_lightray1_659(6584, 992), 3);
    add_background_object(create_lightray2_666(6424, 1056), 3);
    add_background_object(create_lightray2_666(6568, 1024), 3);
    add_background_object(create_lightray1_659(6712, 992), 3);
    add_background_object(create_lightray1_659(6696, 1024), 3);
    add_background_object(create_lightray2_666(6680, 1056), 3);
    add_background_object(create_lightray2_666(6328, 992), 3);
    add_background_object(create_lightray2_666(5176, 1056), 3);
    add_background_object(create_lightray1_659(7928, 960), 3);
    add_background_object(create_lightray1_659(7912, 992), 3);
    add_background_object(create_lightray2_666(7896, 1024), 3);
    add_background_object(create_lightray1_659(8632, 576), 3);
    add_background_object(create_lightray2_666(8616, 608), 3);
    add_background_object(create_lightray1_659(9080, 864), 3);
    add_background_object(create_lightray1_659(9064, 896), 3);
    add_background_object(create_lightray2_666(9048, 928), 3);
    add_background_object(create_lightray1_659(9912, 576), 3);
    add_background_object(create_lightray2_666(9896, 608), 3);
    add_background_object(create_lightray1_659(10808, 576), 3);
    add_background_object(create_lightray2_666(10792, 608), 3);
    add_background_object(create_lightray1_659(11192, 800), 3);
    add_background_object(create_lightray2_666(11176, 832), 3);
    add_background_object(create_lightray1_659(11320, 800), 3);
    add_background_object(create_lightray2_666(11304, 832), 3);
    add_background_object(create_lightray1_659(11448, 800), 3);
    add_background_object(create_lightray2_666(11432, 832), 3);
    add_background_object(create_aquaplant1_670(8832, 1072), 3);
    add_background_object(create_aquaplant2_694(9064, 1040), 3);
    add_background_object(create_aquabrick3_691(6976, 128), 3);
    add_background_object(create_aquabrick3_691(6976, 192), 3);
    add_background_object(create_aquabrick3_691(6976, 0), 3);
    add_background_object(create_aquabrick3_691(6976, 64), 3);
    add_background_object(create_aquabrick34_790(9840, 752), 3);
    add_background_object(create_aquabrick1_676(11072, 768), 3);
    add_background_object(create_watervent_725(11056, 760), 3);
    add_background_object(create_atwaterfaucet_722(11072, 640), 3);
    add_background_object(create_aquabrick1_676(4544, 192), 3);
    add_background_object(create_aquabrick1_676(4608, 192), 3);
    add_background_object(create_aquabrick2_706(4608, 176), 3);
    add_background_object(create_aquabrick16_684(4664, 192), 3);
    add_background_object(create_aquabrick6_709(4672, 176), 3);
    add_background_object(create_aquaplant1_670(4640, 144), 3);
    add_background_object(create_aquabrick3_691(3776, 32), 3);
    add_background_object(create_aquabrick3_691(3776, -32), 3);
    add_background_object(create_aquabrick3_691(3648, 160), 3);
    add_background_object(create_aquabrick3_691(3648, 96), 3);
    add_background_object(create_aquabrick3_691(3648, 32), 3);
    add_background_object(create_aquabrick3_691(3648, -32), 3);
    add_background_object(create_aquabrick21_683(4160, 160), 3);
    add_background_object(create_aquabrick21_683(4160, 288), 3);
    add_background_object(create_aquabrick3_691(4288, 32), 3);
    add_background_object(create_aquabrick3_691(4288, -32), 3);
    add_background_object(create_aquabrick3_691(4288, 224), 3);
    add_background_object(create_aquabrick3_691(4288, 160), 3);
    add_background_object(create_aquabrick3_691(4288, 352), 3);
    add_background_object(create_aquabrick3_691(4288, 288), 3);
    add_background_object(create_aquabrick3_691(3520, 160), 3);
    add_background_object(create_aquabrick3_691(3520, 96), 3);
    add_background_object(create_aquabrick3_691(3520, 32), 3);
    add_background_object(create_aquabrick3_691(3520, -32), 3);
    add_background_object(create_aquabrick5_682(3648, 288), 3);
    add_background_object(create_aquabrick5_682(3648, 224), 3);
    add_background_object(create_aquabrick5_682(3904, 96), 3);
    add_background_object(create_aquabrick1_676(3776, 224), 3);
    add_background_object(create_aquabrick1_676(3840, 224), 3);
    add_background_object(create_aquadirt5_695(3792, 384), 3);
    add_background_object(create_aquadirt4_699(4016, 384), 3);
    add_background_object(create_aquabrick4_707(3768, 256), 3);
    add_background_object(create_aquabrick4_707(3768, 320), 3);
    add_background_object(create_aquabrick16_684(3768, 384), 3);
    add_background_object(create_aquabrick14_693(4144, 224), 3);
    add_background_object(create_aquabrick14_693(4144, 288), 3);
    add_background_object(create_aquabrick14_693(4144, 352), 3);
    add_background_object(create_aquabrick3_691(3904, 32), 3);
    add_background_object(create_aquabrick3_691(3904, -32), 3);
    add_background_object(create_aquabrick3_691(3776, 160), 3);
    add_background_object(create_aquabrick3_691(3776, 96), 3);
    add_background_object(create_aquabrick1_676(3904, 224), 3);
    add_background_object(create_aquabrick1_676(3968, 224), 3);
    add_background_object(create_aquadirt_689(3952, 400), 3);
    add_background_object(create_aquadirt_689(3920, 400), 3);
    add_background_object(create_aquabrick16_684(4024, 224), 3);
    add_background_object(create_aquabrick5_682(3904, 64), 3);
    add_background_object(create_aquabrick4_707(4024, 96), 3);
    add_background_object(create_aquabrick4_707(4024, 160), 3);
    add_background_object(create_aquabrick1_676(4032, 64), 3);
    add_background_object(create_aquabrick1_676(4096, 64), 3);
    add_background_object(create_aquabrick1_676(4160, 64), 3);
    add_background_object(create_aquabrick1_676(4224, 64), 3);
    add_background_object(create_aquabrick1_676(4288, 64), 3);
    add_background_object(create_aquabrick1_676(4352, 64), 3);
    add_background_object(create_aquabrick1_676(4416, 64), 3);
    add_background_object(create_aquabrick1_676(4480, 64), 3);
    add_background_object(create_aquabrick4_707(4536, 32), 3);
    add_background_object(create_aquabrick1_676(4160, 160), 3);
    add_background_object(create_aquabrick1_676(4224, 160), 3);
    add_background_object(create_aquabrick1_676(4288, 160), 3);
    add_background_object(create_aquabrick1_676(4352, 160), 3);
    add_background_object(create_aquabrick1_676(4416, 160), 3);
    add_background_object(create_aquabrick14_693(4144, 160), 3);
    add_background_object(create_aquabrick1_676(4480, 160), 3);
    add_background_object(create_aquabrick16_684(4536, 160), 3);
    add_background_object(create_aquabrick2_706(4544, 176), 3);
    add_background_object(create_aquabrick6_709(4544, 144), 3);
    add_background_object(create_aquabrick13_712(4144, 144), 3);
    add_background_object(create_aquabrick2_706(4224, 144), 3);
    add_background_object(create_aquabrick2_706(4160, 144), 3);
    add_background_object(create_aquabrick2_706(4480, 144), 3);
    add_background_object(create_aquabrick2_706(4416, 144), 3);
    add_background_object(create_aquabrick2_706(4352, 144), 3);
    add_background_object(create_aquabrick2_706(4288, 144), 3);
    add_background_object(create_atladder_708(4104, 144), 3);
    add_background_object(create_atladder_708(4104, 176), 3);
    add_background_object(create_atladder_708(4104, 208), 3);
    add_background_object(create_atladder_708(4104, 240), 3);
    add_background_object(create_atladder_708(4104, 272), 3);
    add_background_object(create_aquabrick2_706(3760, 768), 3);
    add_background_object(create_aquabrick13_712(3744, 768), 3);
    add_background_object(create_aquabrick2_706(3824, 768), 3);
    add_background_object(create_aquabrick2_706(3888, 768), 3);
    add_background_object(create_aquabrick6_709(3952, 768), 3);
    add_background_object(create_aquabrick1_676(3760, 784), 3);
    add_background_object(create_aquabrick1_676(3824, 784), 3);
    add_background_object(create_aquabrick1_676(3888, 784), 3);
    add_background_object(create_aquabrick15_685(3744, 784), 3);
    add_background_object(create_aquabrick16_684(3944, 784), 3);
    add_background_object(create_atwaterfaucet3_681(3752, 704), 3);
    add_background_object(create_atwaterfaucet3_681(3752, 640), 3);
    add_background_object(create_atwaterfaucet3_681(3928, 704), 3);
    add_background_object(create_atwaterfaucet3_681(3928, 640), 3);
    add_background_object(create_aquasign2_775(9736, 1392), 3);
    add_background_object(create_aquabrickslope1_697(9344, 1424), 3);
    add_background_object(create_atwaterfaucet3_681(3928, 816), 3);
    add_background_object(create_atwaterfaucet3_681(3928, 880), 3);
    add_background_object(create_atwaterfaucet3_681(3928, 944), 3);
    add_background_object(create_atwaterfaucet3_681(3928, 992), 3);
    add_background_object(create_atwaterfaucet3_681(3928, 1032), 3);
    add_background_object(create_aquabrick15_685(11120, 640), 3);
    add_background_object(create_watervent_725(11120, 760), 3);
    add_background_object(create_watervent_725(11184, 760), 3);
    add_background_object(create_watervent_725(11248, 760), 3);
    add_background_object(create_edgeoverlay_800(8656, 856), 3);
    add_background_object(create_edgeoverlay_800(9600, 888), 3);
    add_background_object(create_edgeoverlay_800(9608, 632), 3);
    add_object(create_gimmickrotatingpipe_801(9479, 752), 3);
    add_object(create_gimmickrotatingpipe_801(8527, 976), 3);
    add_object(create_gimmickrotatingpipe_801(9471, 1008), 3);
    add_object(create_minibosschomper_802(6520, 1175), 3);
    add_object(create_switchmillablock_803(6560, 248), 3);
    add_object(create_objectcrystal_279(3373, 1650), 3);
    add_object(create_objectcrystal_279(3469, 1650), 3);
    add_object(create_objectcrystal_279(3405, 1650), 3);
    add_object(create_objectcrystal_279(3437, 1650), 3);
    add_object(create_objectcrystal_279(3373, 1682), 3);
    add_object(create_objectcrystal_279(3469, 1682), 3);
    add_object(create_objectcrystal_279(3405, 1682), 3);
    add_object(create_objectcrystal_279(3437, 1682), 3);
    add_object(create_objectcrystal_279(3373, 1714), 3);
    add_object(create_objectcrystal_279(3469, 1714), 3);
    add_object(create_objectcrystal_279(3405, 1714), 3);
    add_object(create_objectcrystal_279(3437, 1714), 3);
    add_object(create_objectcrystal_279(2989, 1602), 3);
    add_object(create_objectcrystal_279(3085, 1602), 3);
    add_object(create_objectcrystal_279(3021, 1602), 3);
    add_object(create_objectcrystal_279(3053, 1602), 3);
    add_object(create_objectcrystal_279(2989, 1634), 3);
    add_object(create_objectcrystal_279(3085, 1634), 3);
    add_object(create_objectcrystal_279(3021, 1634), 3);
    add_object(create_objectcrystal_279(3053, 1634), 3);
    add_object(create_objectcrystal_279(2989, 1666), 3);
    add_object(create_objectcrystal_279(3085, 1666), 3);
    add_object(create_objectcrystal_279(3021, 1666), 3);
    add_object(create_objectcrystal_279(3053, 1666), 3);
    add_object(create_objectcrystal_279(3181, 1394), 3);
    add_object(create_objectcrystal_279(3277, 1394), 3);
    add_object(create_gimmickrotatingpipebase_804(9472, 1008), 3);
    add_object(create_objectcrystal_279(3213, 1394), 3);
    add_object(create_objectcrystal_279(3245, 1394), 3);
    add_object(create_gimmickrotatingpipebase_804(9480, 752), 3);
    add_object(create_objectcrystal_279(3181, 1426), 3);
    add_object(create_objectcrystal_279(3277, 1426), 3);
    add_object(create_objectcrystal_279(3213, 1426), 3);
    add_object(create_objectcrystal_279(3245, 1426), 3);
    add_object(create_gimmickrotatingpipebase_804(8528, 976), 3);
    add_object(create_objectcrystal_279(3181, 1458), 3);
    add_object(create_objectcrystal_279(3277, 1458), 3);
    add_object(create_objectcrystal_279(3213, 1458), 3);
    add_object(create_objectcrystal_279(3245, 1458), 3);
    add_object(create_objectpetal_302(2753, 1417), 3);
    add_object(create_objectpetal_302(2697, 1473), 3);
    add_object(create_objectpetal_302(2809, 1473), 3);
    add_object(create_objectpetal_302(2753, 1521), 3);
    add_object(create_playerstartingpoint_358(1533, 1149), 3);
    add_object(create_enemyfirefly_742(4279, 802), 3);
    add_object(create_objectwhispmaker_751(136, 2024), 3);
    add_object(create_cameratriggerboss_424(6376, 1000), 3);
    add_object(create_breakableaquabrick_743(1216, 448), 3);
    add_object(create_breakableaquabrick_743(1056, 448), 3);
    add_object(create_laddertop_357(1564, 967), 3);
    add_object(create_redspringupright_438(1744, 1296), 3);
    add_object(create_redspringright_441(1744, 688), 3);
    add_object(create_yellowspringup_434(4328, 920), 3);
    add_object(create_yellowspringup_434(4360, 920), 3);
    add_object(create_objectpetal_302(1577, 873), 3);
    add_object(create_objectpetal_302(1593, 841), 3);
    add_object(create_objectpetal_302(1609, 809), 3);
    add_object(create_laddertop_357(4212, 895), 3);
    add_object(create_objectcrystal_279(3965, 1074), 3);
    add_object(create_objectcrystal_279(3997, 1074), 3);
    add_object(create_objectcrystal_279(4029, 1074), 3);
    add_object(create_objectcrystal_279(4061, 1074), 3);
    add_object(create_objectcrystal_279(4549, 850), 3);
    add_object(create_objectcrystal_279(4589, 858), 3);
    add_object(create_objectcrystal_279(4629, 874), 3);
    add_object(create_objectcrystal_279(4661, 898), 3);
    add_object(create_objectcrystal_279(4685, 930), 3);
    add_object(create_objectcrystal_279(4701, 970), 3);
    add_object(create_redspringupright_438(2000, 880), 3);
    add_object(create_redspringdown_443(2176, 640), 3);
    add_object(create_redspringdown_443(2208, 640), 3);
    add_object(create_redspringdown_443(2272, 640), 3);
    add_object(create_redspringdown_443(2240, 640), 3);
    add_object(create_aquabrickplatform_805(5248, 784), 3);
    add_object(create_aquabrickplatform_805(5312, 784), 3);
    add_object(create_waterjetback_749(4704, 784), 3);
    add_object(create_enemyslime_741(2207, 1125), 3);
    add_object(create_enemylimiter_350(2053, 1122), 3);
    add_object(create_enemylimiter_350(2085, 1122), 3);
    add_object(create_enemylimiter_350(2293, 1122), 3);
    add_object(create_enemylimiter_350(2325, 1122), 3);
    add_object(create_enemyslime_741(4927, 741), 3);
    add_object(create_enemylimiter_350(4821, 738), 3);
    add_object(create_enemylimiter_350(4853, 738), 3);
    add_object(create_enemylimiter_350(5237, 738), 3);
    add_object(create_enemylimiter_350(5269, 738), 3);
    add_object(create_enemyslime_741(5183, 741), 3);
    add_object(create_hazardspikesup_755(2064, 1552), 3);
    add_object(create_hazardspikesup_755(2096, 1552), 3);
    add_object(create_hazardspikesup_755(2128, 1552), 3);
    add_object(create_hazardspikesup_755(2160, 1552), 3);
    add_object(create_hazardspikesup_755(2192, 1552), 3);
    add_object(create_hazardspikesup_755(2224, 1552), 3);
    add_object(create_hazardspikesup_755(2256, 1552), 3);
    add_object(create_bubblepatch_806(1648, 1647), 3);
    add_object(create_bubblepatch_806(2528, 1583), 3);
    add_object(create_bubblepatch_806(2016, 1551), 3);
    add_object(create_objectspinningbeam_807(2752, 1472), 3);
    add_object(create_levelcrusher1_772(2960, 1568), 3);
    add_object(create_levelcrusher1_772(3152, 1264), 3);
    add_object(create_levelcrusher1_772(3344, 1616), 3);
    add_object(create_levelcrusher1_772(3696, 1424), 3);
    add_object(create_bubblepatch_806(3632, 1647), 3);
    add_object(create_yellowspringup_434(3504, 1632), 3);
    add_object(create_yellowspringup_434(3536, 1632), 3);
    add_object(create_objectcodec_354(3410, 1413), 3);
    add_object(create_objectspinningbeam_807(4288, 1504), 3);
    add_object(create_redspringup_440(5296, 1216), 3);
    add_object(create_redspringleft_442(5344, 1424), 3);
    add_object(create_levellayer1loop03_808(4992, 1272), 3);
    add_object(create_jellyspring_739(5392, 783), 3);
    add_object(create_layerchangeto1_406(5168, 1288), 3);
    add_object(create_layerchangeto0_405(4952, 1288), 3);
    add_object(create_layerchangeto0_405(4952, 1344), 3);
    add_object(create_layerchangeto0_405(4952, 1400), 3);
    add_object(create_layerchangeto1_406(5168, 1344), 3);
    add_object(create_layerchangeto1_406(5168, 1400), 3);
    add_object(create_jellyspring_739(5200, 487), 3);
    add_object(create_aquabrickplatform_805(5176, 488), 3);
    add_object(create_monitorwoodshield_325(1864, 688), 3);
    add_object(create_jellyspring_739(4800, 487), 3);
    add_object(create_aquabrickplatform_805(4776, 488), 3);
    add_object(create_objectcrystal_279(4869, 170), 3);
    add_object(create_objectcrystal_279(4909, 170), 3);
    add_object(create_objectcrystal_279(4909, 218), 3);
    add_object(create_objectcrystal_279(4869, 218), 3);
    add_object(create_objectcrystal_279(4949, 170), 3);
    add_object(create_objectcrystal_279(4989, 170), 3);
    add_object(create_objectcrystal_279(4989, 218), 3);
    add_object(create_objectcrystal_279(4949, 218), 3);
    add_object(create_objectcrystal_279(5029, 170), 3);
    add_object(create_objectcrystal_279(5069, 170), 3);
    add_object(create_objectcrystal_279(5069, 218), 3);
    add_object(create_objectcrystal_279(5029, 218), 3);
    add_object(create_objectcrystal_279(5109, 170), 3);
    add_object(create_objectcrystal_279(5149, 170), 3);
    add_object(create_objectcrystal_279(5149, 218), 3);
    add_object(create_objectcrystal_279(5109, 218), 3);
    add_object(create_objectcrystal_279(4869, 122), 3);
    add_object(create_objectcrystal_279(4909, 122), 3);
    add_object(create_objectcrystal_279(4949, 122), 3);
    add_object(create_objectcrystal_279(4989, 122), 3);
    add_object(create_objectcrystal_279(5029, 122), 3);
    add_object(create_objectcrystal_279(5069, 122), 3);
    add_object(create_objectcrystal_279(5109, 122), 3);
    add_object(create_objectcrystal_279(5149, 122), 3);
    add_object(create_objectcrystal_279(4709, 642), 3);
    add_object(create_objectcrystal_279(4741, 658), 3);
    add_object(create_objectcrystal_279(4781, 634), 3);
    add_object(create_objectcrystal_279(4829, 650), 3);
    add_object(create_objectpetal_302(5609, 185), 3);
    add_object(create_objectpetal_302(5665, 169), 3);
    add_object(create_objectpetal_302(5713, 185), 3);
    add_object(create_bubblepatch_806(5520, 1423), 3);
    add_object(create_waterjetback_749(4992, 1056), 3);
    add_object(create_waterjet_748(5472, 928), 3);
    add_object(create_waterjet_748(5472, 992), 3);
    add_object(create_waterjet_748(5472, 368), 3);
    add_object(create_waterjet_748(5472, 432), 3);
    add_object(create_waterjet_748(5472, 560), 3);
    add_object(create_waterjet_748(5472, 624), 3);
    add_object(create_waterjet_748(5472, 688), 3);
    add_object(create_waterjet_748(5472, 752), 3);
    add_object(create_waterjet_748(5472, 496), 3);
    add_object(create_objectcrystal_279(5389, 586), 3);
    add_object(create_objectcrystal_279(5397, 634), 3);
    add_object(create_objectcrystal_279(5397, 682), 3);
    add_object(create_objectcrystal_279(5381, 538), 3);
    add_object(create_objectcrystal_279(5365, 490), 3);
    add_object(create_objectcrystal_279(5341, 450), 3);
    add_object(create_objectpetal_302(5385, 593), 3);
    add_object(create_objectpetal_302(5425, 569), 3);
    add_object(create_objectpetal_302(5345, 617), 3);
    add_object(create_objectwhispmaker_751(5000, 656), 3);
    add_object(create_switchdoor_735(6160, 304), 3);
    add_object(create_switchdoor_735(6192, 304), 3);
    add_object(create_fishstatuefront_809(6520, 208), 3);
    add_object(create_monitorcrystals_324(6560, 688), 3);
    add_object(create_minibosschompertail_810(6408, 1568), 3);
    add_object(create_minibosschompertail_810(6424, 1568), 3);
    add_object(create_minibosschompertail_810(6440, 1568), 3);
    add_object(create_minibosschompertail_810(6456, 1568), 3);
    add_object(create_minibosschompertail_810(6472, 1568), 3);
    add_object(create_minibosschompertail_810(6488, 1568), 3);
    add_object(create_minibosschompertail_810(6504, 1568), 3);
    add_object(create_minibosschompertail_810(6520, 1568), 3);
    add_object(create_minibosschompertail_810(6536, 1568), 3);
    add_object(create_minibosschompertail_810(6552, 1568), 3);
    add_object(create_minibosschompertail_810(6568, 1568), 3);
    add_object(create_minibosschompertail_810(6584, 1568), 3);
    add_object(create_minibosschompertail_810(6600, 1568), 3);
    add_object(create_minibosschomperball_811(6448, 1536), 3);
    add_object(create_minibosschompermouth_812(6552, 1552), 3);
    add_object(create_monitorrings_407(6528, 688), 3);
    add_object(create_monitorcrystals_324(6496, 688), 3);
    add_object(create_breakableaquabrick2_813(6832, 1136), 3);
    add_object(create_breakableaquabrick2_813(6864, 1136), 3);
    add_object(create_breakableaquabrick2_813(6896, 1136), 3);
    add_object(create_breakableaquabrick2_813(6928, 1136), 3);
    add_object(create_enemyfirefly_742(5879, 218), 3);
    add_object(create_enemyfirefly_742(5951, 602), 3);
    add_object(create_waterjetback_749(6784, 640), 3);
    add_object(create_waterjetback_749(6400, 768), 3);
    add_object(create_waterjetback_749(6400, 896), 3);
    add_object(create_waterjetback_749(6080, 768), 3);
    add_object(create_waterjetback_749(6080, 896), 3);
    add_object(create_switchwallplate_814(8800, 736), 3);
    add_object(create_objectcodec_354(8362, 1165), 3);
    add_object(create_objectspinningbeam_807(8960, 1344), 3);
    add_object(create_switchwallplate_814(9888, 1088), 3);
    add_object(create_gimmickrotatingpipebase2_815(8528, 976), 3);
    add_object(create_gimmickrotatingpipebase2_815(9472, 1008), 3);
    add_object(create_jellyspring_739(10424, 975), 3);
    add_object(create_jellyspring_739(10168, 975), 3);
    add_object(create_enemygansekijr_816(8151, 1060), 3);
    add_object(create_enemygansekijr_816(9775, 1044), 3);
    add_object(create_enemyfirefly_742(10303, 874), 3);
    add_object(create_enemyslime_741(8463, 677), 3);
    add_object(create_enemylimiter_350(8341, 674), 3);
    add_object(create_enemylimiter_350(8373, 674), 3);
    add_object(create_enemylimiter_350(8613, 674), 3);
    add_object(create_enemylimiter_350(8581, 674), 3);
    add_object(create_objectpetal_302(8465, 601), 3);
    add_object(create_objectpetal_302(8393, 601), 3);
    add_object(create_objectpetal_302(8537, 601), 3);
    add_object(create_objectcrystal_279(8509, 914), 3);
    add_object(create_objectcrystal_279(8541, 882), 3);
    add_object(create_objectcrystal_279(8573, 850), 3);
    add_object(create_objectcrystal_279(8477, 946), 3);
    add_object(create_objectcrystal_279(8445, 978), 3);
    add_object(create_objectcrystal_279(8677, 1042), 3);
    add_object(create_objectcrystal_279(8645, 1010), 3);
    add_object(create_objectcrystal_279(8613, 978), 3);
    add_object(create_objectcrystal_279(9805, 1034), 3);
    add_object(create_objectcrystal_279(9749, 1034), 3);
    add_object(create_objectcrystal_279(9725, 1034), 3);
    add_object(create_objectcrystal_279(9829, 1034), 3);
    add_object(create_objectcrystal_279(10157, 698), 3);
    add_object(create_objectcrystal_279(10197, 698), 3);
    add_object(create_objectcrystal_279(10157, 738), 3);
    add_object(create_objectcrystal_279(10197, 738), 3);
    add_object(create_objectcrystal_279(10157, 778), 3);
    add_object(create_objectcrystal_279(10197, 778), 3);
    add_object(create_objectcrystal_279(10413, 698), 3);
    add_object(create_objectcrystal_279(10453, 698), 3);
    add_object(create_objectcrystal_279(10413, 738), 3);
    add_object(create_objectcrystal_279(10453, 738), 3);
    add_object(create_objectcrystal_279(10413, 778), 3);
    add_object(create_objectcrystal_279(10453, 778), 3);
    add_object(create_monitorwoodshield_325(8144, 800), 3);
    add_object(create_gimmickrotatingpipebase2_815(9480, 752), 3);
    add_object(create_collapsingplatform_745(10624, 767), 3);
    add_object(create_gimmickswingspawner1_817(9024, 920), 3);
    add_object(create_monitorbomb_563(8576, 1552), 3);
    add_object(create_monitorbomb_563(8512, 1424), 3);
    add_object(create_monitorbomb_563(8640, 1424), 3);
    add_object(create_monitorbomb_563(9136, 1456), 3);
    add_object(create_monitorbomb_563(9168, 1456), 3);
    add_object(create_monitorrings_407(8544, 1552), 3);
    add_object(create_waterjetback_749(8896, 736), 3);
    add_object(create_waterjetback_749(8896, 608), 3);
    add_object(create_waterjetback_749(8224, 880), 3);
    add_object(create_waterjetback_749(8224, 1104), 3);
    add_object(create_waterjetback_749(10304, 704), 3);
    add_object(create_waterjetback_749(10304, 640), 3);
    add_object(create_waterjetback_749(10304, 576), 3);
    add_object(create_objectcrystal_279(11237, 890), 3);
    add_object(create_objectcrystal_279(11277, 866), 3);
    add_object(create_objectcrystal_279(11325, 850), 3);
    add_object(create_objectcrystal_279(11381, 850), 3);
    add_object(create_objectcrystal_279(11429, 866), 3);
    add_object(create_objectcrystal_279(11469, 890), 3);
    add_object(create_enemygansekijr_816(10031, 676), 3);
    add_object(create_waterjet_748(11088, 696), 3);
    add_object(create_monitorearthshield_326(3952, 368), 3);
    add_object(create_objectcrystal_279(4869, 74), 3);
    add_object(create_objectcrystal_279(4909, 74), 3);
    add_object(create_objectcrystal_279(4949, 74), 3);
    add_object(create_objectcrystal_279(4989, 74), 3);
    add_object(create_objectcrystal_279(5029, 74), 3);
    add_object(create_objectcrystal_279(5069, 74), 3);
    add_object(create_objectcrystal_279(5109, 74), 3);
    add_object(create_objectcrystal_279(5149, 74), 3);
    add_object(create_monitorkeystone_562(4576, 144), 3);
    add_object(create_laddertop_357(4124, 167), 3);
    add_object(create_objectwhispmaker_751(3968, 328), 3);
    add_object(create_objectcodec_354(3858, 741), 3);
    add_object(create_redspringleft_442(9824, 1344), 3);
    add_object(create_redspringleft_442(9824, 1384), 3);
    add_object(create_redspringleft_442(9824, 1424), 3);
    add_object(create_monitorbomb_563(9104, 1456), 3);
    add_object(create_monitorbomb_563(8544, 1424), 3);
    add_object(create_monitorbomb_563(8608, 1424), 3);
    add_object(create_monitorbomb_563(8576, 1424), 3);
    add_object(create_objectcrystal_279(8861, 882), 3);
    add_object(create_objectcrystal_279(8925, 882), 3);
    add_object(create_objectcrystal_279(8989, 882), 3);
    add_object(create_objectcrystal_279(9053, 882), 3);
    add_object(create_objectcrystal_279(9117, 882), 3);
    add_object(create_objectcrystal_279(9181, 882), 3);
    add_object(create_objectcrystal_279(8893, 882), 3);
    add_object(create_objectcrystal_279(9149, 882), 3);
    add_object(create_objectcrystal_279(8957, 882), 3);
    add_object(create_objectcrystal_279(9021, 882), 3);
    add_object(create_objectcrystal_279(9085, 882), 3);
    add_object(create_minibosschomperhitbox_818(6496, 1520), 3);
    add_object(create_objectcrystal_279(11245, 690), 3);
    add_object(create_objectcrystal_279(11245, 738), 3);
    add_object(create_objectcrystal_279(11229, 714), 3);
    add_object(create_objectcrystal_279(11213, 690), 3);
    add_object(create_objectcrystal_279(11213, 738), 3);
    add_object(create_objectcrystal_279(11197, 714), 3);
    add_object(create_objectcrystal_279(11181, 690), 3);
    add_object(create_objectcrystal_279(11181, 738), 3);
    add_object(create_breakableaquabrick_743(192, 1120), 3);
    add_object(create_monitorkeystone_562(2352, 1520), 3);
    add_object(create_monitorkeystone_562(2576, 1616), 3);
    add_object(create_monitorkeystone_562(5200, 1136), 3);
    add_background_object(create_aquabrick1_676(4480, 96), 4);
    add_background_object(create_aquabrick1_676(4480, 128), 4);
    add_background_object(create_aquabrick1_676(4480, 160), 4);
    add_background_object(create_aquabrick1_676(4480, 64), 4);
    add_background_object(create_aquabrick1_676(6832, 1104), 4);
    add_background_object(create_aquabrick1_676(6880, 1104), 4);
    add_background_object(create_aqualargepipe1_819(256, 1120), 4);
    add_background_object(create_aqualargepipe6_820(832, 1088), 4);
    add_background_object(create_aqualargepipe3_821(384, 1440), 4);
    add_background_object(create_aqualargepipe5_822(704, 1440), 4);
    add_background_object(create_aqualargepipe2_779(384, 1312), 4);
    add_background_object(create_aqualargepipe2_779(384, 1376), 4);
    add_background_object(create_aqualargepipe4_776(608, 1568), 4);
    add_background_object(create_aqualargepipe8_823(224, 1120), 4);
    add_background_object(create_aqualargepipe2_779(832, 1344), 4);
    add_background_object(create_aqualargepipe7_783(832, 1408), 4);
    add_background_object(create_aqualargepipe2_779(832, 1280), 4);
    add_background_object(create_aqualargepipe5_822(1024, 960), 4);
    add_background_object(create_aqualargepipe1_819(1024, 768), 4);
    add_background_object(create_aqualargepipe3_821(832, 640), 4);
    add_background_object(create_aqualargepipe6_820(832, 448), 4);
    add_background_object(create_aqualargepipe1_819(1280, 448), 4);
    add_background_object(create_aqualargepipe7_783(832, 1280), 4);
    add_background_object(create_aqualargepipe8_823(576, 1568), 4);
    add_background_object(create_aqualargepipe8_823(672, 1568), 4);
    add_background_object(create_aqualargepipe8_823(1024, 448), 4);
    add_background_object(create_aqualargepipe8_823(1248, 448), 4);
    add_background_object(create_aqualargepipe7_783(1408, 640), 4);
    add_background_object(create_aqualargepipe2_779(1408, 672), 4);
    add_background_object(create_aqualargepipe2_779(1408, 688), 4);
    add_background_object(create_aqualargepipe7_783(1408, 752), 4);
    add_background_object(create_aquabrick2_706(1408, 1168), 4);
    add_background_object(create_aquabrick1_676(1408, 1184), 4);
    add_background_object(create_aquabrick1_676(1408, 1216), 4);
    add_background_object(create_aquabrick1_676(1408, 1248), 4);
    add_background_object(create_aquabrick1_676(1408, 1280), 4);
    add_background_object(create_aquabrick1_676(1408, 1312), 4);
    add_background_object(create_watervent_725(1408, 1168), 4);
    add_background_object(create_teetertotteraxle_824(2736, 1456), 4);
    add_background_object(create_teetertotteraxle_824(4272, 1488), 4);
    add_background_object(create_aquabrick21_683(6592, 224), 4);
    add_background_object(create_aquabrick21_683(6592, 96), 4);
    add_background_object(create_aquabrick21_683(6592, -32), 4);
    add_background_object(create_aquabrick14_693(6576, 256), 4);
    add_background_object(create_aquabrick14_693(6576, 192), 4);
    add_background_object(create_aquabrick14_693(6576, 128), 4);
    add_background_object(create_aquabrick14_693(6576, 64), 4);
    add_background_object(create_aquabrick14_693(6576, 0), 4);
    add_background_object(create_aquabrick14_693(6576, -64), 4);
    add_background_object(create_aquabrick1_676(6144, 1216), 4);
    add_background_object(create_aquabrick1_676(6208, 1216), 4);
    add_background_object(create_aquabrick1_676(6272, 1216), 4);
    add_background_object(create_aquabrick1_676(6336, 1216), 4);
    add_background_object(create_aquabrick1_676(6400, 1216), 4);
    add_background_object(create_aquabrick1_676(6464, 1216), 4);
    add_background_object(create_aquabrick2_706(6208, 1200), 4);
    add_background_object(create_aquabrick2_706(6272, 1200), 4);
    add_background_object(create_aquabrick2_706(6336, 1200), 4);
    add_background_object(create_aquabrick2_706(6400, 1200), 4);
    add_background_object(create_aquabrick2_706(6464, 1200), 4);
    add_background_object(create_aquabrick1_676(6528, 1216), 4);
    add_background_object(create_aquabrick1_676(6592, 1216), 4);
    add_background_object(create_aquabrick2_706(6528, 1200), 4);
    add_background_object(create_aquabrick2_706(6592, 1200), 4);
    add_background_object(create_aquabrick2_706(6144, 1200), 4);
    add_background_object(create_aquabrick1_676(6016, 1216), 4);
    add_background_object(create_aquabrick1_676(6080, 1216), 4);
    add_background_object(create_aquabrick2_706(6080, 1200), 4);
    add_background_object(create_aquabrick2_706(6016, 1200), 4);
    add_background_object(create_aquabrick1_676(6656, 1216), 4);
    add_background_object(create_aquabrick1_676(6720, 1216), 4);
    add_background_object(create_aquabrick2_706(6656, 1200), 4);
    add_background_object(create_aquabrick2_706(6720, 1200), 4);
    add_background_object(create_aquabrick1_676(6784, 1216), 4);
    add_background_object(create_aquabrick3_691(6016, 1248), 4);
    add_background_object(create_aquabrick3_691(6144, 1312), 4);
    add_background_object(create_aquabrick3_691(6144, 1248), 4);
    add_background_object(create_aquabrick3_691(6272, 1312), 4);
    add_background_object(create_aquabrick3_691(6272, 1248), 4);
    add_background_object(create_aquabrick3_691(6400, 1312), 4);
    add_background_object(create_aquabrick3_691(6400, 1248), 4);
    add_background_object(create_aquabrick3_691(6528, 1312), 4);
    add_background_object(create_aquabrick3_691(6528, 1248), 4);
    add_background_object(create_aquabrick3_691(6656, 1312), 4);
    add_background_object(create_aquabrick3_691(6656, 1248), 4);
    add_background_object(create_aquabrick3_691(6016, 1312), 4);
    add_background_object(create_aquabrick3_691(6784, 1312), 4);
    add_background_object(create_aquabrick3_691(6784, 1248), 4);
    add_background_object(create_aquabrick2_706(6784, 1200), 4);
    add_background_object(create_aquabrick2_706(6848, 1200), 4);
    add_background_object(create_aquabrick1_676(6848, 1216), 4);
    add_background_object(create_aquabrick21_683(6848, 960), 4);
    add_background_object(create_aquabrick14_693(6832, 1056), 4);
    add_background_object(create_aquabrick14_693(6832, 992), 4);
    add_background_object(create_aquabrick1_676(6944, 1104), 4);
    add_background_object(create_aquabrick15_685(6832, 1104), 4);
    add_background_object(create_aqualargepipe5_822(7104, 1008), 4);
    add_background_object(create_aqualargepipe2_779(7232, 880), 4);
    add_background_object(create_aqualargepipe2_779(7232, 800), 4);
    add_background_object(create_aqualargepipe6_820(7232, 608), 4);
    add_background_object(create_aqualargepipe2_779(7232, 944), 4);
    add_background_object(create_aqualargepipe2_779(7232, 816), 4);
    add_background_object(create_aqualargepipe8_823(7072, 1136), 4);
    add_background_object(create_aqualargepipe8_823(7424, 608), 4);
    add_background_object(create_aqualargepipe1_819(7552, 608), 4);
    add_background_object(create_aqualargepipe8_823(7520, 608), 4);
    add_background_object(create_aqualargepipe2_779(7680, 800), 4);
    add_background_object(create_aqualargepipe2_779(7680, 864), 4);
    add_background_object(create_aqualargepipe7_783(7680, 928), 4);
    add_background_object(create_teetertotteraxle_824(8944, 1328), 4);
    add_background_object(create_aquabrick11_688(11008, 960), 4);
    add_background_object(create_aquabrick2_706(11008, 944), 4);
    add_background_object(create_aquabrick1_676(10944, 960), 4);
    add_background_object(create_aquabrick11_688(10880, 960), 4);
    add_background_object(create_aquabrick2_706(10880, 944), 4);
    add_background_object(create_aquabrick2_706(10944, 944), 4);
    add_background_object(create_aquabrick1_676(10816, 960), 4);
    add_background_object(create_aquabrick11_688(10752, 960), 4);
    add_background_object(create_aquabrick2_706(10752, 944), 4);
    add_background_object(create_aquabrick2_706(10816, 944), 4);
    add_background_object(create_aquabrick1_676(10688, 960), 4);
    add_background_object(create_aquabrick2_706(10688, 944), 4);
    add_background_object(create_aquabrick11_688(10624, 960), 4);
    add_background_object(create_aquabrick2_706(10624, 944), 4);
    add_background_object(create_aquabrick3_691(10688, 992), 4);
    add_background_object(create_aquabrick3_691(10816, 992), 4);
    add_background_object(create_aquabrick3_691(10944, 992), 4);
    add_background_object(create_aquabrick4_707(4536, 96), 4);
    add_background_object(create_aquabrick16_684(4536, 160), 4);
    add_background_object(create_aquabrick4_707(4536, 32), 4);
    add_background_object(create_aquabrick1_676(4160, 64), 4);
    add_background_object(create_aquabrick1_676(4224, 64), 4);
    add_background_object(create_aquabrick1_676(4288, 64), 4);
    add_background_object(create_aquabrick1_676(4352, 64), 4);
    add_background_object(create_aquabrick1_676(4416, 64), 4);
    add_background_object(create_aquabrick1_676(4288, 160), 4);
    add_background_object(create_aquabrick1_676(4352, 160), 4);
    add_background_object(create_aquabrick1_676(4416, 160), 4);
    add_background_object(create_aquabrick1_676(4032, 64), 4);
    add_background_object(create_aquabrick1_676(4096, 64), 4);
    add_background_object(create_aquabrick1_676(4416, 96), 4);
    add_background_object(create_aquabrick1_676(4416, 128), 4);
    add_background_object(create_aquabrick1_676(4352, 96), 4);
    add_background_object(create_aquabrick1_676(4352, 128), 4);
    add_background_object(create_aquabrick1_676(4288, 96), 4);
    add_background_object(create_aquabrick1_676(4288, 128), 4);
    add_background_object(create_aquabrick14_693(4272, 96), 4);
    add_background_object(create_aquabrick21_683(11136, 640), 4);
    add_background_object(create_aquabrick14_693(11120, 704), 4);
    add_background_object(create_aquabrick14_693(11120, 640), 4);
    add_background_object(create_aquabrick3_691(11264, 704), 4);
    add_background_object(create_aquabrick3_691(11264, 640), 4);
    add_background_object(create_aquabrick21_683(1472, 1184), 4);
    add_background_object(create_aquabrick5_682(1280, 1184), 4);
    add_background_object(create_aquabrick1_676(1344, 1312), 4);
    add_background_object(create_aquabrick1_676(1472, 1312), 4);
    add_background_object(create_aquabrick1_676(1536, 1312), 4);
    add_background_object(create_aquabrick1_676(1280, 1312), 4);
    add_object(create_mapdata2_32(-432, 240), 4);
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
    add_object(create_hazardspikesup_755(-208, 392), 5);
    add_object(create_hazardspikesdown_756(-168, 392), 5);
    add_object(create_hazardspikesleft_757(-128, 392), 5);
    add_object(create_hazardspikesright_758(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(6280, 1231), 5);
    add_object(create_cameralimitbossleft_421(6032, 1104), 5);
    add_object(create_cameralimitbossright_422(6863, 1096), 5);
    add_object(create_cameralimitbosstop_423(6288, 976), 5);
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
    add_object(create_monitorkeystone_562(-216, 80), 5);
    add_object(create_bubblepatch_806(-544, 77), 5);
    add_object(create_mediumbubble_769(-526, 74), 5);
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
    add_object(create_guiair_759(-16, 96), 6);
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
    loop_spawn_swing_base_running = false;
    loop_spawn_swing_base_index = 0;
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
    loop_spawn_swing_link_running = false;
    loop_spawn_swing_link_index = 0;
    loop_spawn_swing_platform_running = false;
    loop_spawn_swing_platform_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_order_swing_running = false;
    loop_order_swing_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_spawn_swing_running = false;
    loop_spawn_swing_index = 0;
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
    loop_next_act_running = false;
    loop_next_act_index = 0;
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
    loop_gansekijr_floor_running = false;
    loop_gansekijr_floor_index = 0;
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_17, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_17, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_17, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_17, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_17, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_17, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_17, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_17, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_17, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_17, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_17, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_17, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_17, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_17, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_17, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_17, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_17, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_17, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_17, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_17, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_17, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_17, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_17, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_17, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_17, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_17, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_17, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_17, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_17, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_17, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_17, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_17, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_17, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_17, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_17, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_17, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_17, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_17, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_17, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_17, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_17, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_17, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_17, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_17, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_17, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    not_always_1550_17 = loop_count;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1510_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_1598_17 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_101_0 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1503_16 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1717_17 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_water_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1549_17 = loop_count;
    not_always_100_0 = loop_count;
    not_always_1513_16 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1490_16 = loop_count;
    once_condition_1431_17 = false;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_173_8 = loop_count;
    not_always_1505_16 = loop_count;
    not_always_1502_16 = loop_count;
    not_always_600_13 = loop_count;
    once_condition_138_0 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    not_always_150_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_1418_16 = loop_count;
    not_always_1512_16 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1419_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    not_always_1592_17 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_172_8 = loop_count;
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
    not_always_1504_16 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_1556_17 = false;
    once_condition_64_13 = false;
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_eating_1 = true;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    group_main_engine_level_specific_methods_bosses_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1591_17 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1509_16 = loop_count;
    once_condition_1569_17 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1511_16 = loop_count;
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
    not_always_1740_14 = loop_count;
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
    not_always_1435_17 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
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
    group_main_engine_level_specific_methods_starting_tunnel_1 = true;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_main_chomper_buoyancy_1 = true;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    not_always_1741_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_chomper_chomper_destroy_1 = true;
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
    not_always_1597_17 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1514_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1507_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_4148()
{
    // event 1681_18
    {
        if (!(group_main_engine_1)) goto event_1681_18_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage0b_ogg_125, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1681_18_end: ;
}
void Frames::loop_play_music_5_18()
{
    event_func_4148();
}
void Frames::loop_wrapper_sound_kick1_18(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_18(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_18(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_18(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_18(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_idle7_18(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_play_music_8_18(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_dig2_18(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_18(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_18(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_18(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_process_call_unlock_music_18(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
