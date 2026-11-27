#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_6429()
{
    // event 1900_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1900_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1900_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) <= (360))) goto event_1900_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(6, cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*40);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, 0-sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)-90)*10-10);
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_direction(get_min(get_max(0, ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)/math_helper/10), 8));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(10, cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*40);
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_direction(get_min(get_max(0, ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)/math_helper/10), 8));
    }
    event_1900_28_end: ;
}
void Frames::event_func_6430()
{
    // event 1901_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1901_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1901_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (180))) goto event_1901_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (330))) goto event_1901_28_end;
        if (!((((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.get(3)) <= (0))) goto event_1901_28_end;
        if (!((((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.get(3)) <= (0))) goto event_1901_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(6, 8);
    }
    event_1901_28_end: ;
}
void Frames::event_func_6431()
{
    // event 1902_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1902_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1902_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (180))) goto event_1902_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) <= (360))) goto event_1902_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(8, 10+cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*50);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, 30-sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)-90)*50);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(12, 10+cos_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6))*50);
    }
    event_1902_28_end: ;
}
void Frames::event_func_6432()
{
    // event 1903_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1903_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1903_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (360))) goto event_1903_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(22, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(22)-3, 0));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)-6, 0));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(5, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(5)-4, -16));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(7, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(7)-4, -24));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(6, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(6)-4, 40));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(8, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(8)-6, -40));
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_direction(get_max(((Active*)get_instance(bossmantalitharm3_1600_instances))->get_direction()-1, 0));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(23, get_min(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(22)+3, 0));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(9, get_min(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(9)+4, 16));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(11, get_min(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(11)+4, 24));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(10, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(10)-4, 40));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(12, get_max(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(12)-6, -40));
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_direction(get_max(((Active*)get_instance(bossmantalitharm6_1599_instances))->get_direction()-1, 0));
    }
    event_1903_28_end: ;
}
void Frames::event_func_6433()
{
    // event 1904_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1904_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1904_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (350))) goto event_1904_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1904_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(2))) goto event_1904_28_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto event_1904_28_end;
        FrameObject * single_instance_1904_28_0; single_instance_1904_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm6_1599_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossslash_1527(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1904_28_0 == NULL)
                    single_instance_1904_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1904_28_0))->set_angle(90, 0);
        ((Active*)((Active*)single_instance_1904_28_0))->set_direction(24);
    }
    event_1904_28_end: ;
}
void Frames::event_func_6434()
{
    // event 1905_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1905_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1905_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (350))) goto event_1905_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1905_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(2))) goto event_1905_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_1905_28_end;
        FrameObject * single_instance_1905_28_0; single_instance_1905_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm3_1600_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossslash_1527(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1905_28_0 == NULL)
                    single_instance_1905_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1905_28_0))->set_angle(90, 0);
        ((Active*)((Active*)single_instance_1905_28_0))->set_direction(24);
    }
    event_1905_28_end: ;
}
void Frames::event_func_6435()
{
    // event 1906_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1906_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1906_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (350))) goto event_1906_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1906_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(2))) goto event_1906_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.enable(2);
    }
    event_1906_28_end: ;
}
void Frames::event_func_6436()
{
    // event 1907_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1907_28_end;
        if (!(((Active*)get_instance(bossmantalitharm3_1600_instances))->overlaps_background())) goto event_1907_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_1907_28_end;
        if (!((((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.get(3)) == (0))) goto event_1907_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1907_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (240))) goto event_1907_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (340))) goto event_1907_28_end;
        FrameObject * single_instance_1907_28_0; single_instance_1907_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm3_1600_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1277(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 60), parent->layer);
                if (single_instance_1907_28_0 == NULL)
                    single_instance_1907_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1907_28_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1907_28_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1907_28_0))->get_movement()->set_speed(((Active*)single_instance_1907_28_0)->get_movement()->get_speed()+10+randrange(20));
        ((Active*)((Active*)single_instance_1907_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+(((Active*)get_instance(bossmantalitharm3_1600_instances))->get_y()+40-((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)));
        ((Active*)((Active*)single_instance_1907_28_0))->set_direction(9);
        ((Active*)single_instance_1907_28_0)->move_back(((Active*)get_instance(bossmantalitharm3_1600_instances)));
    }
    event_1907_28_end: ;
}
void Frames::event_func_6437()
{
    // event 1908_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1908_28_end;
        if (!(((Active*)get_instance(bossmantalitharm3_1600_instances))->overlaps_background())) goto event_1908_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_1908_28_end;
        if (!((((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.get(3)) == (0))) goto event_1908_28_end;
        if (!((((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.get(4)) < (8))) goto event_1908_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1908_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (240))) goto event_1908_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (340))) goto event_1908_28_end;
        FrameObject * single_instance_1908_28_0; single_instance_1908_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm3_1600_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1277(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 60), parent->layer);
                if (single_instance_1908_28_0 == NULL)
                    single_instance_1908_28_0 = new_obj;
            }
        }
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.set(3, 5);
        ((Active*)((Active*)single_instance_1908_28_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1908_28_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1908_28_0))->get_movement()->set_speed(((Active*)single_instance_1908_28_0)->get_movement()->get_speed()+10+randrange(20));
        ((Active*)((Active*)single_instance_1908_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+(((Active*)get_instance(bossmantalitharm3_1600_instances))->get_y()+40-((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)));
        ((Active*)((Active*)single_instance_1908_28_0))->set_direction(7);
        ((Active*)single_instance_1908_28_0)->move_back(((Active*)get_instance(bossmantalitharm3_1600_instances)));
        ((Active*)get_instance(bossgroundcut1_1594_instances))->set_x(((Active*)get_instance(bossmantalitharm3_1600_instances))->get_x());
        ((Active*)get_instance(bossgroundcut1_1594_instances))->alterables->values.set(0, -60);
        ((Active*)get_instance(bossgroundcut1_1594_instances))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+80);
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.add(4, 1);
    }
    event_1908_28_end: ;
}
void Frames::event_func_6438()
{
    // event 1909_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1909_28_end;
        if (!(((Active*)get_instance(bossmantalitharm6_1599_instances))->overlaps_background())) goto event_1909_28_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto event_1909_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (340))) goto event_1909_28_end;
        if (!((((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.get(3)) == (0))) goto event_1909_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1909_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (240))) goto event_1909_28_end;
        FrameObject * single_instance_1909_28_0; single_instance_1909_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm6_1599_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1277(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 60), parent->layer);
                if (single_instance_1909_28_0 == NULL)
                    single_instance_1909_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1909_28_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1909_28_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1909_28_0))->get_movement()->set_speed(((Active*)single_instance_1909_28_0)->get_movement()->get_speed()+10+randrange(20));
        ((Active*)((Active*)single_instance_1909_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+(((Active*)get_instance(bossmantalitharm6_1599_instances))->get_y()+40-((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)));
        ((Active*)((Active*)single_instance_1909_28_0))->set_direction(9);
        ((Active*)single_instance_1909_28_0)->move_back(((Active*)get_instance(bossmantalitharm6_1599_instances)));
    }
    event_1909_28_end: ;
}
void Frames::event_func_6439()
{
    // event 1910_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1910_28_end;
        if (!(((Active*)get_instance(bossmantalitharm6_1599_instances))->overlaps_background())) goto event_1910_28_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto event_1910_28_end;
        if (!((((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.get(3)) == (0))) goto event_1910_28_end;
        if (!((((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.get(4)) < (8))) goto event_1910_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1910_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (240))) goto event_1910_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (340))) goto event_1910_28_end;
        FrameObject * single_instance_1910_28_0; single_instance_1910_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm6_1599_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1277(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 60), parent->layer);
                if (single_instance_1910_28_0 == NULL)
                    single_instance_1910_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1910_28_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1910_28_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1910_28_0))->get_movement()->set_speed(((Active*)single_instance_1910_28_0)->get_movement()->get_speed()+10+randrange(20));
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.set(3, 5);
        ((Active*)((Active*)single_instance_1910_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+(((Active*)get_instance(bossmantalitharm6_1599_instances))->get_y()+40-((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)));
        ((Active*)((Active*)single_instance_1910_28_0))->set_direction(7);
        ((Active*)single_instance_1910_28_0)->move_back(((Active*)get_instance(bossmantalitharm6_1599_instances)));
        ((Active*)get_instance(bossgroundcut2_1595_instances))->set_x(((Active*)get_instance(bossmantalitharm6_1599_instances))->get_x());
        ((Active*)get_instance(bossgroundcut2_1595_instances))->alterables->values.set(0, -60);
        ((Active*)get_instance(bossgroundcut2_1595_instances))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+80);
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.add(4, 1);
    }
    event_1910_28_end: ;
}
void Frames::event_func_6440()
{
    // event 1911_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1911_28_end;
        bossmantalitharm3_1600_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(bossmantalitharm3_1600_instances, qualifier_7)) goto event_1911_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_1911_28_end;
        if (!((((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.get(3)) == (0))) goto event_1911_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1911_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (240))) goto event_1911_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (340))) goto event_1911_28_end;
        FrameObject * single_instance_1911_28_0; single_instance_1911_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm3_1600_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1277(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 60), parent->layer);
                if (single_instance_1911_28_0 == NULL)
                    single_instance_1911_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1911_28_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1911_28_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1911_28_0))->get_movement()->set_speed(((Active*)single_instance_1911_28_0)->get_movement()->get_speed()+10+randrange(20));
        ((Active*)((Active*)single_instance_1911_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+(((Active*)get_instance(bossmantalitharm3_1600_instances))->get_y()+40-((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)));
        ((Active*)((Active*)single_instance_1911_28_0))->set_direction(9);
        ((Active*)single_instance_1911_28_0)->move_back(((Active*)get_instance(bossmantalitharm3_1600_instances)));
    }
    event_1911_28_end: ;
}
void Frames::event_func_6441()
{
    // event 1912_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1912_28_end;
        bossmantalitharm3_1600_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(bossmantalitharm3_1600_instances, qualifier_7)) goto event_1912_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_1912_28_end;
        if (!((((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.get(3)) == (0))) goto event_1912_28_end;
        if (!((((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.get(4)) < (8))) goto event_1912_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1912_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (240))) goto event_1912_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (340))) goto event_1912_28_end;
        FrameObject * single_instance_1912_28_0; single_instance_1912_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm3_1600_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1277(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 60), parent->layer);
                if (single_instance_1912_28_0 == NULL)
                    single_instance_1912_28_0 = new_obj;
            }
        }
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.set(3, 5);
        ((Active*)((Active*)single_instance_1912_28_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1912_28_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1912_28_0))->get_movement()->set_speed(((Active*)single_instance_1912_28_0)->get_movement()->get_speed()+10+randrange(20));
        ((Active*)((Active*)single_instance_1912_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+(((Active*)get_instance(bossmantalitharm3_1600_instances))->get_y()+40-((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)));
        ((Active*)((Active*)single_instance_1912_28_0))->set_direction(7);
        ((Active*)single_instance_1912_28_0)->move_back(((Active*)get_instance(bossmantalitharm3_1600_instances)));
        ((Active*)get_instance(bossgroundcut1_1594_instances))->set_x(((Active*)get_instance(bossmantalitharm3_1600_instances))->get_x());
        ((Active*)get_instance(bossgroundcut1_1594_instances))->alterables->values.set(0, -60);
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.add(4, 1);
    }
    event_1912_28_end: ;
}
void Frames::event_func_6442()
{
    // event 1913_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1913_28_end;
        bossmantalitharm6_1599_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(bossmantalitharm6_1599_instances, qualifier_7)) goto event_1913_28_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto event_1913_28_end;
        if (!((((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.get(3)) == (0))) goto event_1913_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1913_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (240))) goto event_1913_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (340))) goto event_1913_28_end;
        FrameObject * single_instance_1913_28_0; single_instance_1913_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm6_1599_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1277(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 60), parent->layer);
                if (single_instance_1913_28_0 == NULL)
                    single_instance_1913_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1913_28_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1913_28_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1913_28_0))->get_movement()->set_speed(((Active*)single_instance_1913_28_0)->get_movement()->get_speed()+10+randrange(20));
        ((Active*)((Active*)single_instance_1913_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+(((Active*)get_instance(bossmantalitharm6_1599_instances))->get_y()+40-((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)));
        ((Active*)((Active*)single_instance_1913_28_0))->set_direction(9);
        ((Active*)single_instance_1913_28_0)->move_back(((Active*)get_instance(bossmantalitharm6_1599_instances)));
    }
    event_1913_28_end: ;
}
void Frames::event_func_6443()
{
    // event 1914_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1914_28_end;
        bossmantalitharm6_1599_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(bossmantalitharm6_1599_instances, qualifier_7)) goto event_1914_28_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto event_1914_28_end;
        if (!((((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.get(3)) == (0))) goto event_1914_28_end;
        if (!((((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.get(4)) < (8))) goto event_1914_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (2))) goto event_1914_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) >= (240))) goto event_1914_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) < (340))) goto event_1914_28_end;
        FrameObject * single_instance_1914_28_0; single_instance_1914_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalitharm6_1599_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyrock_1277(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 60), parent->layer);
                if (single_instance_1914_28_0 == NULL)
                    single_instance_1914_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1914_28_0))->set_scale(1.0-(randrange(10)*0.05));
        ((Active*)((Active*)single_instance_1914_28_0))->set_angle(randrange(360), 0);
        ((Active*)((Active*)single_instance_1914_28_0))->get_movement()->set_speed(((Active*)single_instance_1914_28_0)->get_movement()->get_speed()+10+randrange(20));
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.set(3, 5);
        ((Active*)((Active*)single_instance_1914_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+(((Active*)get_instance(bossmantalitharm6_1599_instances))->get_y()+40-((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)));
        ((Active*)((Active*)single_instance_1914_28_0))->set_direction(7);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.sub(6, 4);
        ((Active*)single_instance_1914_28_0)->move_back(((Active*)get_instance(bossmantalitharm6_1599_instances)));
        ((Active*)get_instance(bossgroundcut2_1595_instances))->set_x(((Active*)get_instance(bossmantalitharm6_1599_instances))->get_x());
        ((Active*)get_instance(bossgroundcut2_1595_instances))->alterables->values.set(0, -60);
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.add(4, 1);
    }
    event_1914_28_end: ;
}
void Frames::event_func_6444()
{
    // event 1915_28
    bool or_result_1915_28 = false;
    bool or_temp_result_1915_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1915_28_0_end;
        bossmantalitharm3_1600_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm3_1600_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!bossmantalitharm3_1600_instances.has_selection()) goto or_event_1915_28_0_end;
        if (not_always_1915_28 > loop_count) {
            not_always_1915_28 = loop_count + 2;
            goto or_event_1915_28_0_end;
        }
        not_always_1915_28 = loop_count + 2;
        or_result_1915_28 = true;
        or_temp_result_1915_28_0 = true;
    }
    or_event_1915_28_0_end: ;
    bossmantalitharm3_1600_instances.clear_saved_selection();
    if (or_temp_result_1915_28_0) {
        bossmantalitharm3_1600_instances.save_selection();
    }
    // event 1915_28
    bool or_temp_result_1915_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1915_28_1_end;
        bossmantalitharm6_1599_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm6_1599_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!bossmantalitharm6_1599_instances.has_selection()) goto or_event_1915_28_1_end;
        if (not_always_1915_28 > loop_count) {
            not_always_1915_28 = loop_count + 2;
            goto or_event_1915_28_1_end;
        }
        not_always_1915_28 = loop_count + 2;
        or_result_1915_28 = true;
        or_temp_result_1915_28_1 = true;
        or_event_1915_28_1_end: ;
        bossmantalitharm6_1599_instances.clear_saved_selection();
        if (or_temp_result_1915_28_1) {
            bossmantalitharm6_1599_instances.save_selection();
        }
        if (!or_result_1915_28) goto or_final_or_event_1915_28_1_end;
        bossmantalitharm6_1599_instances.empty_selection();
        bossmantalitharm3_1600_instances.empty_selection();
        if (or_temp_result_1915_28_0) {
            bossmantalitharm3_1600_instances.restore_selection();
        }
        if (or_temp_result_1915_28_1) {
            bossmantalitharm6_1599_instances.restore_selection();
        }
        media.stop_sample(SOUND_TUNNELING_2_149);
        media.play_id(SOUND_TUNNELING_2_149, -1, 1);
    }
    or_final_or_event_1915_28_1_end: ;
}
void Frames::event_func_6445()
{
    // event 1916_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1916_28_end;
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.set(3, get_max(((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->values.get(3)-1, 0));
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.set(3, get_max(((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->values.get(3)-1, 0));
        {
            ((Active*)get_instance(bossgroundcut1_1594_instances))->blend_color.set_semi_transparency(get_max(((Active*)get_instance(bossgroundcut1_1594_instances))->alterables->values.get(0), 0));
        }
        {
            ((Active*)get_instance(bossgroundcut2_1595_instances))->blend_color.set_semi_transparency(get_max(((Active*)get_instance(bossgroundcut2_1595_instances))->alterables->values.get(0), 0));
        }
        ((Active*)get_instance(bossgroundcut1_1594_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bossgroundcut1_1594_instances))->alterables->values.get(0)+1, 128));
        ((Active*)get_instance(bossgroundcut2_1595_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bossgroundcut2_1595_instances))->alterables->values.get(0)+1, 128));
    }
    event_1916_28_end: ;
}
void Frames::event_func_6446()
{
    // event 1917_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1917_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) > (480))) goto event_1917_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(8);
    }
    event_1917_28_end: ;
}
void Frames::event_func_6447()
{
    // event 1922_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1922_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1922_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (485))) goto event_1922_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) != (200))) goto event_1922_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(8, 5);
    }
    event_1922_28_end: ;
}
void Frames::event_func_6448()
{
    // event 1923_28
    bool or_result_1923_28 = false;
    bool or_temp_result_1923_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1923_28_0_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1923_28_0_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto or_event_1923_28_0_end;
        or_result_1923_28 = true;
        or_temp_result_1923_28_0 = true;
    }
    or_event_1923_28_0_end: ;
    bossmantalithhitbox1_1603_instances.clear_saved_selection();
    bossmantalithhead_1598_instances.clear_saved_selection();
    if (or_temp_result_1923_28_0) {
        bossmantalithhitbox1_1603_instances.save_selection();
        bossmantalithhead_1598_instances.save_selection();
    }
    // event 1923_28
    bool or_temp_result_1923_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1923_28_1_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1923_28_1_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto or_event_1923_28_1_end;
        or_result_1923_28 = true;
        or_temp_result_1923_28_1 = true;
        or_event_1923_28_1_end: ;
        bossmantalithhitbox2_1604_instances.clear_saved_selection();
        if (or_temp_result_1923_28_1) {
            bossmantalithhitbox2_1604_instances.save_selection();
            bossmantalithhead_1598_instances.save_selection();
        }
        if (!or_result_1923_28) goto or_final_or_event_1923_28_1_end;
        bossmantalithhitbox2_1604_instances.empty_selection();
        bossmantalithhead_1598_instances.empty_selection();
        bossmantalithhitbox1_1603_instances.empty_selection();
        if (or_temp_result_1923_28_1) {
            bossmantalithhitbox2_1604_instances.restore_selection();
        }
        if (or_temp_result_1923_28_0) {
            bossmantalithhitbox1_1603_instances.restore_selection();
        }
        if (or_temp_result_1923_28_0 || or_temp_result_1923_28_1) {
            bossmantalithhead_1598_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 103);
        }
    }
    or_final_or_event_1923_28_1_end: ;
}
void Frames::event_func_6449()
{
    // event 1924_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1924_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1924_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (0))) goto event_1924_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(6)) == (0))) goto event_1924_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(8, 5);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(9, 100);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(3, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*-8);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(5, -16+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*5);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(9, 16+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*8);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(7, -24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*10);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(11, 24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*16);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(1, get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*-10));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(2, 0-get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*-10));
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(5);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(13, 5+sin_deg(((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->alterables->values.get(7)*90)*3+get_abs((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)-((Active*)get_instance(player_389_instances))->get_x())*0.013));
    }
    event_1924_28_end: ;
}
void Frames::event_func_6450()
{
    // event 1925_28
    bool or_result_1925_28 = false;
    bool or_temp_result_1925_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1925_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+500))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1925_28_0_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1925_28_0_end;
        or_result_1925_28 = true;
        or_temp_result_1925_28_0 = true;
    }
    or_event_1925_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    bossmantalithhead_1598_instances.clear_saved_selection();
    if (or_temp_result_1925_28_0) {
        bossmantalithbody_1529_instances.save_selection();
        bossmantalithhead_1598_instances.save_selection();
    }
    // event 1925_28
    bool or_temp_result_1925_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1925_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-500))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1925_28_1_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto or_event_1925_28_1_end;
        or_result_1925_28 = true;
        or_temp_result_1925_28_1 = true;
        or_event_1925_28_1_end: ;
        if (or_temp_result_1925_28_1) {
            bossmantalithbody_1529_instances.save_selection();
            bossmantalithhead_1598_instances.save_selection();
        }
        if (!or_result_1925_28) goto or_final_or_event_1925_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        bossmantalithhead_1598_instances.empty_selection();
        if (or_temp_result_1925_28_0 || or_temp_result_1925_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        if (or_temp_result_1925_28_0 || or_temp_result_1925_28_1) {
            bossmantalithhead_1598_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 5);
            ((Active*)*it)->alterables->values.set(9, 100);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        bossanimationdata_1593_instances.clear_selection();
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*-8);
            ((Active*)*it)->alterables->values.set(5, -16+sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*5);
            ((Active*)*it)->alterables->values.set(9, 16+sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*8);
            ((Active*)*it)->alterables->values.set(7, -24+sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*10);
            ((Active*)*it)->alterables->values.set(11, 24+sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*16);
            ((Active*)*it)->alterables->values.set(1, get_abs(sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-10));
            ((Active*)*it)->alterables->values.set(2, 0-get_abs(sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-10));
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
            ((Active*)*it)->alterables->values.set(13, 7+get_abs((((Active*)*it)->alterables->values.get(2)-((Active*)get_instance(player_389_instances, it.current_index, default_active_instance))->get_x())*0.01));
        }
    }
    or_final_or_event_1925_28_1_end: ;
}
void Frames::event_func_6451()
{
    // event 1926_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1926_28_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1926_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (100))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1926_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 1);
        }
    }
    event_1926_28_end: ;
}
void Frames::event_func_6452()
{
    // event 1927_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1927_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (100))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1927_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1927_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (450))) goto event_1927_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()))) goto event_1927_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+100))) goto event_1927_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(12)) == (0))) goto event_1927_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(12, 1);
    }
    event_1927_28_end: ;
}
void Frames::event_func_6453()
{
    // event 1928_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1928_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (100))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1928_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1928_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (450))) goto event_1928_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()))) goto event_1928_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-100))) goto event_1928_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(12)) == (0))) goto event_1928_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(12, -1);
    }
    event_1928_28_end: ;
}
void Frames::event_func_6454()
{
    // event 1929_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1929_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (100))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1929_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1929_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (450))) goto event_1929_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) <= (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-100))) goto event_1929_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(12)) == (0))) goto event_1929_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(12, 2);
    }
    event_1929_28_end: ;
}
void Frames::event_func_6455()
{
    // event 1930_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1930_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (100))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1930_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1930_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (450))) goto event_1930_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+100))) goto event_1930_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(12)) == (0))) goto event_1930_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(12, 2);
    }
    event_1930_28_end: ;
}
void Frames::event_func_6456()
{
    // event 1931_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1931_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) > (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-80))) goto event_1931_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) < (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+80))) goto event_1931_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1931_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (0))) goto event_1931_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1931_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(12, 2);
    }
    event_1931_28_end: ;
}
void Frames::event_func_6457()
{
    // event 1932_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1932_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) > (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-80))) goto event_1932_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) < (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+80))) goto event_1932_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1932_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (0))) goto event_1932_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1932_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+160))) goto event_1932_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(12, -1);
    }
    event_1932_28_end: ;
}
void Frames::event_func_6458()
{
    // event 1933_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1933_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) > (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-80))) goto event_1933_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) < (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+80))) goto event_1933_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1933_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (0))) goto event_1933_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1933_28_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-160))) goto event_1933_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(12, 1);
    }
    event_1933_28_end: ;
}
void Frames::event_func_6459()
{
    // event 1934_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1934_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) > (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-80))) goto event_1934_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) < (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+80))) goto event_1934_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1934_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (0))) goto event_1934_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(8, 5);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(9, 100);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(3, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*-8);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(5, -16+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*5);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(9, 16+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*8);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(7, -24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*10);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(11, 24+sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0)*0.5)*16);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(1, get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*-10));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(2, 0-get_abs(sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(0))*-10));
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(5);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(13, 4);
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1934_28_end: ;
}
void Frames::event_func_6460()
{
    // event 1935_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1935_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1935_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) <= (450))) goto event_1935_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(5, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)+45)*((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)-(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)*0.7));
    }
    event_1935_28_end: ;
}
void Frames::event_func_6461()
{
    // event 1936_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1936_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1936_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) != (200))) goto event_1936_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(1))) goto event_1936_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1936_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5-90)*20+20);
    }
    event_1936_28_end: ;
}
void Frames::event_func_6462()
{
    // event 1937_28
    bool or_result_1937_28 = false;
    bool or_temp_result_1937_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1937_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (45))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1937_28_0_end;
        or_result_1937_28 = true;
        or_temp_result_1937_28_0 = true;
    }
    or_event_1937_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    if (or_temp_result_1937_28_0) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1937_28
    bool or_temp_result_1937_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1937_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (405))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (450))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1937_28_1_end;
        or_result_1937_28 = true;
        or_temp_result_1937_28_1 = true;
        or_event_1937_28_1_end: ;
        if (or_temp_result_1937_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1937_28) goto or_final_or_event_1937_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        if (or_temp_result_1937_28_0 || or_temp_result_1937_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        bossanimationdata_1593_instances.clear_selection();
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(15, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(8)+45)*-60+65);
            ((Active*)*it)->alterables->values.set(14, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(8)+45)*-60+4);
            ((Active*)*it)->alterables->values.set(19, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(8)+45)*-60+65);
            ((Active*)*it)->alterables->values.set(18, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(8)+45)*60-4);
            ((Active*)*it)->alterables->values.set(1, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(8)*1.5)*20);
            ((Active*)*it)->alterables->values.set(2, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(8)*1.5)*-20);
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    or_final_or_event_1937_28_1_end: ;
}
void Frames::event_func_6463()
{
    // event 1938_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1938_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (45))) goto event_1938_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (200))) goto event_1938_28_end;
        if (not_always_1938_28 > loop_count) {
            not_always_1938_28 = loop_count + 2;
            goto event_1938_28_end;
        }
        not_always_1938_28 = loop_count + 2;
        media.play_id(SOUND_MANTALITH_JUMP_147, -1, 1);
    }
    event_1938_28_end: ;
}
void Frames::event_func_6464()
{
    // event 1939_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1939_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (370))) goto event_1939_28_end;
        if (not_always_1939_28 > loop_count) {
            not_always_1939_28 = loop_count + 2;
            goto event_1939_28_end;
        }
        not_always_1939_28 = loop_count + 2;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    event_1939_28_end: ;
}
void Frames::event_func_6465()
{
    // event 1940_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1940_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (370))) goto event_1940_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) > (150))) goto event_1940_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1940_28_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+8, 8));
    }
    event_1940_28_end: ;
}
void Frames::event_func_6466()
{
    // event 1941_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1941_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (370))) goto event_1941_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1941_28_end;
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+5, 5));
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1941_28_end: ;
}
void Frames::event_func_6467()
{
    // event 1942_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1942_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (45))) goto event_1942_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) > (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-80))) goto event_1942_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) < (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+80))) goto event_1942_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->alterables->values.get(0)) == (((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)*-1))) goto event_1942_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)) > (900))) goto event_1942_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(5))) goto event_1942_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(11)) == (0))) goto event_1942_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.enable(5);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(11, -96);
    }
    event_1942_28_end: ;
}
void Frames::event_func_6468()
{
    // event 1943_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1943_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (45))) goto event_1943_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) > (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()-80))) goto event_1943_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->get_x()) < (((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+80))) goto event_1943_28_end;
        if (!((((Active*)get_instance(bossjumppoint_1605_instances))->alterables->values.get(0)) == (((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)))) goto event_1943_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)) <= (900))) goto event_1943_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(5))) goto event_1943_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(11)) == (0))) goto event_1943_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.enable(5);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(11, 96);
    }
    event_1943_28_end: ;
}
void Frames::event_func_6469()
{
    // event 1944_28
    bool or_result_1944_28 = false;
    bool or_temp_result_1944_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1944_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (260))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (50))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1944_28_0_end;
        or_result_1944_28 = true;
        or_temp_result_1944_28_0 = true;
    }
    or_event_1944_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    if (or_temp_result_1944_28_0) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1944_28
    bool or_temp_result_1944_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1944_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (260))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (200))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (-50))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1944_28_1_end;
        or_result_1944_28 = true;
        or_temp_result_1944_28_1 = true;
        or_event_1944_28_1_end: ;
        if (or_temp_result_1944_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1944_28) goto or_final_or_event_1944_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        if (or_temp_result_1944_28_0 || or_temp_result_1944_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(15);
        }
    }
    or_final_or_event_1944_28_1_end: ;
}
void Frames::event_func_6470()
{
    // event 1945_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1945_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_on(15))) goto event_1945_28_end;
        if (((Active*)get_instance(bossmantalithbody_1529_instances))->flags & VISIBLE) goto event_1945_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(3, ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(11));
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(5);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(15);
    }
    event_1945_28_end: ;
}
void Frames::event_func_6471()
{
    // event 1946_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1946_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->flags & VISIBLE)) goto event_1946_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (0))) goto event_1946_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(15);
    }
    event_1946_28_end: ;
}
void Frames::event_func_6472()
{
    // event 1947_28
    bool or_result_1947_28 = false;
    bool or_temp_result_1947_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1947_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(15))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1947_28_0_end;
        or_result_1947_28 = true;
        or_temp_result_1947_28_0 = true;
    }
    or_event_1947_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    if (or_temp_result_1947_28_0) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1947_28
    bool or_temp_result_1947_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1947_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(15))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1947_28_1_end;
        or_result_1947_28 = true;
        or_temp_result_1947_28_1 = true;
        or_event_1947_28_1_end: ;
        if (or_temp_result_1947_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1947_28) goto or_final_or_event_1947_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        if (or_temp_result_1947_28_0 || or_temp_result_1947_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(11, 2);
            ((Active*)*it)->alterables->values.add(3, 2);
        }
    }
    or_final_or_event_1947_28_1_end: ;
}
void Frames::event_func_6473()
{
    // event 1948_28
    bool or_result_1948_28 = false;
    bool or_temp_result_1948_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1948_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(15))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1948_28_0_end;
        or_result_1948_28 = true;
        or_temp_result_1948_28_0 = true;
    }
    or_event_1948_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    if (or_temp_result_1948_28_0) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1948_28
    bool or_temp_result_1948_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1948_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(15))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1948_28_1_end;
        or_result_1948_28 = true;
        or_temp_result_1948_28_1 = true;
        or_event_1948_28_1_end: ;
        if (or_temp_result_1948_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1948_28) goto or_final_or_event_1948_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        if (or_temp_result_1948_28_0 || or_temp_result_1948_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 2);
            ((Active*)*it)->alterables->values.sub(3, 2);
        }
    }
    or_final_or_event_1948_28_1_end: ;
}
void Frames::event_func_6474()
{
    // event 1949_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1949_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (45))) goto event_1949_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (405))) goto event_1949_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(15, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*-30+34);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(14, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*-25-30);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(16, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*-20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(17, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*-20+20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(19, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*-30+34);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(18, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*25+30);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(20, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(21, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*20-20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(1, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5)*20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(2, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5)*-20);
    }
    event_1949_28_end: ;
}
void Frames::event_func_6475()
{
    // event 1950_28
    bool or_result_1950_28 = false;
    bool or_temp_result_1950_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1950_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (45))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1950_28_0_end;
        or_result_1950_28 = true;
        or_temp_result_1950_28_0 = true;
    }
    or_event_1950_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    if (or_temp_result_1950_28_0) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1950_28
    bool or_temp_result_1950_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1950_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (405))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (450))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1950_28_1_end;
        or_result_1950_28 = true;
        or_temp_result_1950_28_1 = true;
        or_event_1950_28_1_end: ;
        if (or_temp_result_1950_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1950_28) goto or_final_or_event_1950_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        if (or_temp_result_1950_28_0 || or_temp_result_1950_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        bossanimationdata_1593_instances.clear_selection();
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(8)+45)*-80+100);
            ((Active*)*it)->alterables->values.set(10, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(8)+45)*-80+100);
        }
    }
    or_final_or_event_1950_28_1_end: ;
}
void Frames::event_func_6476()
{
    // event 1951_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1951_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (45))) goto event_1951_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (405))) goto event_1951_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(7)) == (0))) goto event_1951_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(6, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*-20+40);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(8, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*-20-20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(10, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*-20+40);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(12, sin_deg(get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5, 450))*-20-20);
    }
    event_1951_28_end: ;
}
void Frames::event_func_6477()
{
    // event 1952_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1952_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (450))) goto event_1952_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(1, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5)*20);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(2, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5)*-20);
    }
    event_1952_28_end: ;
}
void Frames::event_func_6478()
{
    // event 1953_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1953_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (485))) goto event_1953_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(11)) >= (-1))) goto event_1953_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(11)) <= (1))) goto event_1953_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(1);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(12, 0);
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-1, 0));
        }
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(11, 0);
    }
    event_1953_28_end: ;
}
void Frames::event_func_6479()
{
    // event 1954_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1954_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)) <= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1954_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (75))) goto event_1954_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (370))) goto event_1954_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) == (0))) goto event_1954_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(1, 1);
    }
    event_1954_28_end: ;
}
void Frames::event_func_6480()
{
    // event 1955_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1955_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1955_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (75))) goto event_1955_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (370))) goto event_1955_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) == (0))) goto event_1955_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(1, -1);
    }
    event_1955_28_end: ;
}
void Frames::event_func_6481()
{
    // event 1956_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1956_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1)) != (0))) goto event_1956_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (75))) goto event_1956_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (370))) goto event_1956_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(2, ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)+((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(13)*((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(1));
    }
    event_1956_28_end: ;
}
void Frames::event_func_6482()
{
    // event 1957_28
    bool or_result_1957_28 = false;
    bool or_temp_result_1957_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1957_28_0_end;
        if (test_obstacle(((Active*)get_instance(bossmantalithbody_1529_instances, default_active_instance))->get_x()-40, ((Active*)get_instance(bossmantalithbody_1529_instances, default_active_instance))->alterables->values.get(3)+80)) goto or_event_1957_28_0_end;
        if (test_obstacle(((Active*)get_instance(bossmantalithbody_1529_instances, default_active_instance))->get_x()+40, ((Active*)get_instance(bossmantalithbody_1529_instances, default_active_instance))->alterables->values.get(3)+80)) goto or_event_1957_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (370))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1957_28_0_end;
        or_result_1957_28 = true;
        or_temp_result_1957_28_0 = true;
    }
    or_event_1957_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    if (or_temp_result_1957_28_0) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1957_28
    bool or_temp_result_1957_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1957_28_1_end;
        if (test_obstacle(((Active*)get_instance(bossmantalithbody_1529_instances, default_active_instance))->get_x()-40, ((Active*)get_instance(bossmantalithbody_1529_instances, default_active_instance))->alterables->values.get(3)+80)) goto or_event_1957_28_1_end;
        if (test_obstacle(((Active*)get_instance(bossmantalithbody_1529_instances, default_active_instance))->get_x()+40, ((Active*)get_instance(bossmantalithbody_1529_instances, default_active_instance))->alterables->values.get(3)+80)) goto or_event_1957_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1957_28_1_end;
        or_result_1957_28 = true;
        or_temp_result_1957_28_1 = true;
        or_event_1957_28_1_end: ;
        if (or_temp_result_1957_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1957_28) goto or_final_or_event_1957_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        if (or_temp_result_1957_28_0 || or_temp_result_1957_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 96);
        }
    }
    or_final_or_event_1957_28_1_end: ;
}
void Frames::event_func_6483()
{
    // event 1958_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1958_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (5))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1958_28_end;
        bossanimationdata_1593_instances.clear_selection();
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (2))) { it.deselect(); continue; }
        }
        if (!bossanimationdata_1593_instances.has_selection()) goto event_1958_28_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) < (4))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto event_1958_28_end;
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 200);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->flags.disable(5);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        for (ObjectIterator it(bossanimationdata_1593_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*-8);
            ((Active*)*it)->alterables->values.set(5, -16+sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*5);
            ((Active*)*it)->alterables->values.set(9, 16+sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*8);
            ((Active*)*it)->alterables->values.set(7, -24+sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*10);
            ((Active*)*it)->alterables->values.set(11, 24+sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0)*0.5)*16);
            ((Active*)*it)->alterables->values.set(1, get_abs(sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-10));
            ((Active*)*it)->alterables->values.set(2, 0-get_abs(sin_deg(((Active*)get_single(bossmantalithbody_1529_instances, it.current_index, default_active_instance))->alterables->values.get(0))*-10));
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(0);
        }
        bossmantalithhead3_1596_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead3_1596_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bossmantalithhead2_1597_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead2_1597_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 4);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    event_1958_28_end: ;
}
void Frames::event_func_6484()
{
    // event 1959_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1959_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1959_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1959_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (260))) goto event_1959_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(8, get_min(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)+4, 260));
    }
    event_1959_28_end: ;
}
void Frames::event_func_6485()
{
    // event 1960_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1960_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1960_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1960_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (260))) goto event_1960_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(10, 1);
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossmantalithleg2_1535_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithleg3_1534_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithrightknee_1533_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithleftknee_1532_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithneck4_1530_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithneck2_1536_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithneck1_1537_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithneck3_1531_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithhead2_1597_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithhead3_1596_instances))->set_visible(false);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->set_visible(false);
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 25+((Active*)get_instance(bossmantalithhead_1598_instances, it.current_index, default_active_instance))->alterables->values.get(6)*7);
        }
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 25+((Active*)get_instance(bossmantalithhead_1598_instances, it.current_index, default_active_instance))->alterables->values.get(6)*7);
        }
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
        }
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1960_28_end: ;
}
void Frames::event_func_6486()
{
    // event 1961_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1961_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.disable(4);
    }
    event_1961_28_end: ;
}
void Frames::event_func_6487()
{
    // event 1962_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1962_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()) > (((Active*)get_instance(bossjumppoint_1605_instances))->get_x()-128))) goto event_1962_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()) < (((Active*)get_instance(bossjumppoint_1605_instances))->get_x()+128))) goto event_1962_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.enable(4);
    }
    event_1962_28_end: ;
}
void Frames::event_func_6488()
{
    // event 1963_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1963_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1963_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (260))) goto event_1963_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(4))) goto event_1963_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances))->get_x()+get_max(-300, get_min(300, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*10))))) goto event_1963_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(13, 15);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(1, -1);
    }
    event_1963_28_end: ;
}
void Frames::event_func_6489()
{
    // event 1964_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1964_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1964_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) == (260))) goto event_1964_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(4))) goto event_1964_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances))->get_x()+get_max(-300, get_min(300, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)*10))))) goto event_1964_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(13, 15);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(1, 1);
    }
    event_1964_28_end: ;
}
void Frames::event_func_6490()
{
    // event 1965_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1965_28_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1965_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(10)) > (0))) goto event_1965_28_end;
        bossmantalithdebris_1602_instances.clear_selection();
        for (ObjectIterator it(bossmantalithdebris_1602_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (2))) { it.deselect(); continue; }
        }
        if (!bossmantalithdebris_1602_instances.has_selection()) goto event_1965_28_end;
        FrameObject * single_instance_1965_28_0; single_instance_1965_28_0 = pick_random(bossmantalithdebris_1602_instances);
        if (single_instance_1965_28_0 == NULL) goto event_1965_28_end;
        ((Active*)((Active*)single_instance_1965_28_0))->alterables->values.set(4, 2);
        ((Active*)((Active*)single_instance_1965_28_0))->alterables->values.set(3, -15);
    }
    event_1965_28_end: ;
}
void Frames::event_func_6491()
{
    // event 1966_28
    bool or_result_1966_28 = false;
    bool or_temp_result_1966_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1966_28_0_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (80))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-50+get_max(-300, get_min(300, ((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1)*10))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+50+get_max(-300, get_min(300, ((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1)*10))))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1966_28_0_end;
        or_result_1966_28 = true;
        or_temp_result_1966_28_0 = true;
    }
    or_event_1966_28_0_end: ;
    bossmantalithbody_1529_instances.clear_saved_selection();
    if (or_temp_result_1966_28_0) {
        bossmantalithbody_1529_instances.save_selection();
    }
    // event 1966_28
    bool or_temp_result_1966_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto or_event_1966_28_1_end;
        bossmantalithbody_1529_instances.clear_selection();
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (80))) { it.deselect(); continue; }
        }
        if (!bossmantalithbody_1529_instances.has_selection()) goto or_event_1966_28_1_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_shrine_mantalith_appears_1)) goto or_event_1966_28_1_end;
        or_result_1966_28 = true;
        or_temp_result_1966_28_1 = true;
        or_event_1966_28_1_end: ;
        if (or_temp_result_1966_28_1) {
            bossmantalithbody_1529_instances.save_selection();
        }
        if (!or_result_1966_28) goto or_final_or_event_1966_28_1_end;
        bossmantalithbody_1529_instances.empty_selection();
        if (or_temp_result_1966_28_0 || or_temp_result_1966_28_1) {
            bossmantalithbody_1529_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithleg2_1535_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg2_1535_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithleg3_1534_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg3_1534_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalitharm6_1599_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm6_1599_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalitharm3_1600_instances.clear_selection();
        for (ObjectIterator it(bossmantalitharm3_1600_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithrightknee_1533_instances.clear_selection();
        for (ObjectIterator it(bossmantalithrightknee_1533_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithleftknee_1532_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleftknee_1532_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithneck4_1530_instances.clear_selection();
        for (ObjectIterator it(bossmantalithneck4_1530_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithneck3_1531_instances.clear_selection();
        for (ObjectIterator it(bossmantalithneck3_1531_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithneck2_1536_instances.clear_selection();
        for (ObjectIterator it(bossmantalithneck2_1536_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithneck1_1537_instances.clear_selection();
        for (ObjectIterator it(bossmantalithneck1_1537_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithhead2_1597_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead2_1597_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        bossmantalithhead3_1596_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead3_1596_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
        }
        bossmantalithdebris_1602_instances.clear_selection();
        for (ObjectIterator it(bossmantalithdebris_1602_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 10);
            ((Active*)*it)->alterables->flags.disable(7);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(bossmantalithbody_1529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 200);
            ((Active*)*it)->alterables->values.set(8, 261);
        }
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->force_animation(0);
        }
    }
    or_final_or_event_1966_28_1_end: ;
}
void Frames::event_func_6492()
{
    // event 1967_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1967_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1967_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (260))) goto event_1967_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (370))) goto event_1967_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(8, 4);
    }
    event_1967_28_end: ;
}
void Frames::event_func_6493()
{
    // event 1968_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1968_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1968_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1968_28_end;
        if (!(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->flags.is_off(1))) goto event_1968_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1968_28_end;
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, sin_deg(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)*1.5-90)*40+40);
    }
    event_1968_28_end: ;
}
void Frames::event_func_6494()
{
    // event 1969_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1969_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1969_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (370))) goto event_1969_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (400))) goto event_1969_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(8, 1);
    }
    event_1969_28_end: ;
}
void Frames::event_func_6495()
{
    // event 1970_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1970_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1970_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (400))) goto event_1970_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (485))) goto event_1970_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.add(8, 2);
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_max(0, (((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)-420)/math_helper/15));
        }
    }
    event_1970_28_end: ;
}
void Frames::event_func_6496()
{
    // event 1971_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1971_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(2)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1971_28_end;
        if (!((((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)) < (120))) goto event_1971_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(12))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1971_28_end;
        media.play_id(SOUND_MANTALITH_ROAR_148, -1, 1);
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 120);
        }
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.set(7, 0);
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_direction(0);
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_direction(0);
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(12);
        }
    }
    event_1971_28_end: ;
}
void Frames::event_func_6497()
{
    // event 1972_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1972_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1972_28_end;
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
            ((Active*)*it)->set_direction(get_max(0, get_min(2, ((Active*)*it)->alterables->values.get(3)/math_helper/10)));
        }
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(1, sin_deg(((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->alterables->values.get(3)*141)*(((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->alterables->values.get(3)*0.025));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(2, sin_deg(((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->alterables->values.get(3)*141)*(((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->alterables->values.get(3)*-0.025));
        ((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.set(4, sin_deg(((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->alterables->values.get(3)*141)*(((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->alterables->values.get(3)*0.025)+(((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->alterables->values.get(3)*0.025));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1972_28_end: ;
}
void Frames::event_func_6498()
{
    // event 1973_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1973_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1973_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1973_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (370))) goto event_1973_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (400))) goto event_1973_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1973_28_end;
        FrameObject * single_instance_1973_28_0; single_instance_1973_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalithbody_1529_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1973_28_0 == NULL)
                    single_instance_1973_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1973_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+80);
        ((Active*)((Active*)single_instance_1973_28_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1973_28_0))->get_movement()->set_speed(20);
        ((Active*)((Active*)single_instance_1973_28_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1973_28_0))->set_layer(3-1);
        ((Active*)((Active*)single_instance_1973_28_0))->alterables->values.set(0, 10);
    }
    event_1973_28_end: ;
}
void Frames::event_func_6499()
{
    // event 1974_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1974_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1974_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1974_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (370))) goto event_1974_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (400))) goto event_1974_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1974_28_end;
        FrameObject * single_instance_1974_28_0; single_instance_1974_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalithbody_1529_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1974_28_0 == NULL)
                    single_instance_1974_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1974_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+80);
        ((Active*)((Active*)single_instance_1974_28_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1974_28_0))->get_movement()->set_speed(20);
        ((Active*)((Active*)single_instance_1974_28_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1974_28_0))->set_layer(3-1);
        ((Active*)((Active*)single_instance_1974_28_0))->alterables->values.set(0, 10);
    }
    event_1974_28_end: ;
}
void Frames::event_func_6500()
{
    // event 1975_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1975_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1975_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1975_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (370))) goto event_1975_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (400))) goto event_1975_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1975_28_end;
        FrameObject * single_instance_1975_28_0; single_instance_1975_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalithbody_1529_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1975_28_0 == NULL)
                    single_instance_1975_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1975_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+80);
        ((Active*)((Active*)single_instance_1975_28_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1975_28_0))->set_y_scale(1.25);
        ((Active*)((Active*)single_instance_1975_28_0))->get_movement()->set_speed(40);
        ((Active*)((Active*)single_instance_1975_28_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1975_28_0))->set_layer(3-1);
        ((Active*)((Active*)single_instance_1975_28_0))->alterables->values.set(0, 10);
    }
    event_1975_28_end: ;
}
void Frames::event_func_6501()
{
    // event 1976_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1976_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1976_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1976_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (370))) goto event_1976_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (400))) goto event_1976_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1976_28_end;
        FrameObject * single_instance_1976_28_0; single_instance_1976_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalithbody_1529_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1976_28_0 == NULL)
                    single_instance_1976_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1976_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+80);
        ((Active*)((Active*)single_instance_1976_28_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1976_28_0))->set_y_scale(1.25);
        ((Active*)((Active*)single_instance_1976_28_0))->get_movement()->set_speed(40);
        ((Active*)((Active*)single_instance_1976_28_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1976_28_0))->set_layer(3-1);
        ((Active*)((Active*)single_instance_1976_28_0))->alterables->values.set(0, 10);
    }
    event_1976_28_end: ;
}
void Frames::event_func_6502()
{
    // event 1977_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1977_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1977_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1977_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (370))) goto event_1977_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (400))) goto event_1977_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1977_28_end;
        FrameObject * single_instance_1977_28_0; single_instance_1977_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalithbody_1529_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1977_28_0 == NULL)
                    single_instance_1977_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1977_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+80);
        ((Active*)((Active*)single_instance_1977_28_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1977_28_0))->set_y_scale(1.5);
        ((Active*)((Active*)single_instance_1977_28_0))->get_movement()->set_speed(60);
        ((Active*)((Active*)single_instance_1977_28_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1977_28_0))->set_layer(3-1);
        ((Active*)((Active*)single_instance_1977_28_0))->alterables->values.set(0, 10);
    }
    event_1977_28_end: ;
}
void Frames::event_func_6503()
{
    // event 1978_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1978_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1978_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1978_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (370))) goto event_1978_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) < (400))) goto event_1978_28_end;
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bossmantalithhead_1598_instances.has_selection()) goto event_1978_28_end;
        FrameObject * single_instance_1978_28_0; single_instance_1978_28_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalithbody_1529_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1978_28_0 == NULL)
                    single_instance_1978_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1978_28_0))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+80);
        ((Active*)((Active*)single_instance_1978_28_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1978_28_0))->set_y_scale(1.5);
        ((Active*)((Active*)single_instance_1978_28_0))->get_movement()->set_speed(60);
        ((Active*)((Active*)single_instance_1978_28_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1978_28_0))->set_layer(3-1);
        ((Active*)((Active*)single_instance_1978_28_0))->alterables->values.set(0, 10);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 3);
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->flags.enable(12);
        }
    }
    event_1978_28_end: ;
}
void Frames::event_func_6504()
{
    // event 1979_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_boss_mantalith_core_actions_1)) goto event_1979_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) > (0))) goto event_1979_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(9)) == (200))) goto event_1979_28_end;
        if (!((((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(8)) >= (400))) goto event_1979_28_end;
        if (not_always_1979_28 > loop_count) {
            not_always_1979_28 = loop_count + 2;
            goto event_1979_28_end;
        }
        not_always_1979_28 = loop_count + 2;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(2, 0);
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1979_28_end: ;
}
void Frames::event_func_6505()
{
    // event 1980_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1980_28_end;
        bossslash_1527_instances.clear_selection();
        for (ObjectIterator it(bossslash_1527_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(268435456))) { it.deselect(); continue; }
        }
        if (!bossslash_1527_instances.has_selection()) goto event_1980_28_end;
        for (ObjectIterator it(bossslash_1527_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
        }
    }
    event_1980_28_end: ;
}
void Frames::event_func_6506()
{
    // event 1981_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1981_28_end;
        bossslash_1527_instances.clear_selection();
        for (ObjectIterator it(bossslash_1527_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16777216))) { it.deselect(); continue; }
        }
        if (!bossslash_1527_instances.has_selection()) goto event_1981_28_end;
        for (ObjectIterator it(bossslash_1527_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
        }
    }
    event_1981_28_end: ;
}
void Frames::event_func_6507()
{
    // event 1982_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1982_28_end;
        bossslash_1527_instances.clear_selection();
        for (ObjectIterator it(bossslash_1527_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1048576))) { it.deselect(); continue; }
        }
        if (!bossslash_1527_instances.has_selection()) goto event_1982_28_end;
        for (ObjectIterator it(bossslash_1527_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
        }
    }
    event_1982_28_end: ;
}
void Frames::event_func_6508()
{
    // event 1983_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1983_28_end;
        bossslash_1527_instances.clear_selection();
        for (ObjectIterator it(bossslash_1527_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
        }
        if (!bossslash_1527_instances.has_selection()) goto event_1983_28_end;
        for (ObjectIterator it(bossslash_1527_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1983_28_end: ;
}
void Frames::event_func_6509()
{
    // event 1986_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1986_28_end;
        ((Active*)get_instance(bossmantalithbody_1529_instances))->set_x(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(2)+((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossmantalithbody_1529_instances))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(3)+((Active*)get_instance(bossmantalithbody_1529_instances))->alterables->values.get(5));
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalithleftknee_1532_instances));
            if (parent == NULL) goto pos_end_1986_28_0;
            ((Active*)get_instance(bossmantalithleg2_1535_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1986_28_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bossmantalithrightknee_1533_instances));
            if (parent == NULL) goto pos_end_1986_28_1;
            ((Active*)get_instance(bossmantalithleg3_1534_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1986_28_1: ;
        }
        bossmantalithhead_1598_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(0), 0);
        }
        ((Active*)get_instance(bossmantalithneck4_1530_instances))->set_angle(((Active*)get_instance(bossmantalithneck1_1537_instances))->get_angle(), 0);
        ((Active*)get_instance(bossmantalithleftknee_1532_instances))->set_x(((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_x()-20+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(14));
        ((Active*)get_instance(bossmantalithleftknee_1532_instances))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_y()+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(15));
        ((Active*)get_instance(bossmantalithleftknee_1532_instances))->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(16), 0);
        ((Active*)get_instance(bossmantalithrightknee_1533_instances))->set_x(((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_x()+20+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(18));
        ((Active*)get_instance(bossmantalithrightknee_1533_instances))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_y()+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(19));
        ((Active*)get_instance(bossmantalithrightknee_1533_instances))->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(20), 0);
        ((Active*)get_instance(bossmantalithneck4_1530_instances))->set_x(((Active*)get_instance(bossmantalithbody_1529_instances))->get_x());
        ((Active*)get_instance(bossmantalithneck4_1530_instances))->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->get_y());
        ((Active*)get_instance(bossmantalithneck3_1531_instances))->set_angle(((Active*)get_instance(bossmantalithneck1_1537_instances))->get_angle(), 0);
        ((Active*)get_instance(bossmantalithneck3_1531_instances))->set_x((((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()*3+((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->get_x())*0.25);
        ((Active*)get_instance(bossmantalithneck3_1531_instances))->set_y((((Active*)get_instance(bossmantalithbody_1529_instances))->get_y()*3+((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->get_y())*0.25);
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()+sin_deg(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(3))*(-84+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)));
            ((Active*)*it)->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->get_y()+cos_deg(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(3))*(-84+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(4)));
        }
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_x(((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()-30+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(5)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(7));
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_y(((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y()+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(6)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(8));
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(22), 0);
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_x(((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()+30+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(9)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(11));
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_y(((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y()+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(10)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(12));
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(23), 0);
        ((Active*)get_instance(bossmantalithneck2_1536_instances))->set_angle(((Active*)get_instance(bossmantalithneck1_1537_instances))->get_angle(), 0);
        ((Active*)get_instance(bossmantalithneck2_1536_instances))->set_x((((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()*2+((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->get_x()*2)*0.25);
        ((Active*)get_instance(bossmantalithneck2_1536_instances))->set_y((((Active*)get_instance(bossmantalithbody_1529_instances))->get_y()*2+((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->get_y()*2)*0.25);
        ((Active*)get_instance(bossmantalithneck1_1537_instances))->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(3), 0);
        ((Active*)get_instance(bossmantalithneck1_1537_instances))->set_x((((Active*)get_instance(bossmantalithbody_1529_instances))->get_x()*1+((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->get_x()*3)*0.25);
        ((Active*)get_instance(bossmantalithneck1_1537_instances))->set_y((((Active*)get_instance(bossmantalithbody_1529_instances))->get_y()*1+((Active*)get_single(bossmantalithhead_1598_instances, default_active_instance))->get_y()*3)*0.25);
        {
            FrameObject * parent = ((Active*)get_single(bossmantalithhead_1598_instances));
            if (parent == NULL) goto pos_end_1986_28_2;
            ((Active*)get_instance(bossmantalithhead3_1596_instances))->set_global_position(parent->get_x() + -16, parent->get_y() + -24);
            pos_end_1986_28_2: ;
        }
        ((Active*)get_instance(bossmantalithhead3_1596_instances))->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(1), 0);
        {
            FrameObject * parent = ((Active*)get_single(bossmantalithhead_1598_instances));
            if (parent == NULL) goto pos_end_1986_28_3;
            ((Active*)get_instance(bossmantalithhead2_1597_instances))->set_global_position(parent->get_x() + 16, parent->get_y() + -24);
            pos_end_1986_28_3: ;
        }
        ((Active*)get_instance(bossmantalithhead2_1597_instances))->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(2), 0);
        ((Active*)get_instance(bossmantalithleg2_1535_instances))->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(17), 0);
        ((Active*)get_instance(bossmantalithleg3_1534_instances))->set_angle(((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(21), 0);
        ((Active*)get_instance(bossmantalitharm3_1600_instances))->alterables->flags.enable(5);
        ((Active*)get_instance(bossmantalitharm6_1599_instances))->alterables->flags.enable(5);
        for (ObjectIterator it(bossmantalithhead_1598_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1986_28_end: ;
}
void Frames::event_func_6510()
{
    // event 1987_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1987_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (15))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1987_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(3);
            ((Active*)*it)->set_x(((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_x()-20);
            ((Active*)*it)->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_y());
        }
    }
    event_1987_28_end: ;
}
void Frames::event_func_6511()
{
    // event 1988_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1988_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (14))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1988_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(3);
            ((Active*)*it)->set_x(((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_x()+20);
            ((Active*)*it)->set_y(((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_y());
        }
    }
    event_1988_28_end: ;
}
void Frames::event_func_6512()
{
    // event 1989_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1989_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (13))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1989_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_x()-20);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(14));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(15));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)*2+((Active*)*it)->alterables->values.get(3))*0.3333);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)*2+((Active*)*it)->alterables->values.get(4))*0.3333);
        }
    }
    event_1989_28_end: ;
}
void Frames::event_func_6513()
{
    // event 1990_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1990_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (12))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1990_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_x()+20);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(18));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(19));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)*3+((Active*)*it)->alterables->values.get(3))*0.25);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)*3+((Active*)*it)->alterables->values.get(4))*0.25);
        }
    }
    event_1990_28_end: ;
}
void Frames::event_func_6514()
{
    // event 1991_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1991_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1991_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_x()-20);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(14));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(15));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(3)*3)*0.25);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)+((Active*)*it)->alterables->values.get(4)*3)*0.25);
        }
    }
    event_1991_28_end: ;
}
void Frames::event_func_6515()
{
    // event 1992_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1992_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (10))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1992_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_x()+20);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithbody_1529_instances))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(18));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(19));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(3)*3)*0.25);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)+((Active*)*it)->alterables->values.get(4)*3)*0.25);
        }
    }
    event_1992_28_end: ;
}
void Frames::event_func_6516()
{
    // event 1993_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1993_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1993_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(3);
            ((Active*)*it)->set_x(((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()-30);
            ((Active*)*it)->set_y(((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y());
        }
    }
    event_1993_28_end: ;
}
void Frames::event_func_6517()
{
    // event 1994_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1994_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (8))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1994_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(3);
            ((Active*)*it)->set_x(((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()+30);
            ((Active*)*it)->set_y(((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y());
        }
    }
    event_1994_28_end: ;
}
void Frames::event_func_6518()
{
    // event 1995_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1995_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1995_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()-30);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(6));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(3))*0.5);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)+((Active*)*it)->alterables->values.get(4))*0.5);
        }
    }
    event_1995_28_end: ;
}
void Frames::event_func_6519()
{
    // event 1996_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1996_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1996_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()+30);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(10));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(3))*0.5);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)+((Active*)*it)->alterables->values.get(4))*0.5);
        }
    }
    event_1996_28_end: ;
}
void Frames::event_func_6520()
{
    // event 1997_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1997_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1997_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()-30);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(6));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1997_28_end: ;
}
void Frames::event_func_6521()
{
    // event 1998_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1998_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1998_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()+30);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(10));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1998_28_end: ;
}
void Frames::event_func_6522()
{
    // event 1999_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_1999_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_1999_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(31);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()-30+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y()+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(6));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(8));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)*2+((Active*)*it)->alterables->values.get(3))*0.3333);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)*2+((Active*)*it)->alterables->values.get(4))*0.3333);
        }
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bossmantalithleg1_1528_instances, it.current_index));
            if (parent == NULL) goto pos_end_1999_28_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1999_28_0: ;
        }
    }
    event_1999_28_end: ;
}
void Frames::event_func_6523()
{
    // event 2000_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_2000_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_2000_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(31);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()+30+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y()+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(10));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(11));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(12));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)*2+((Active*)*it)->alterables->values.get(3))*0.3333);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)*2+((Active*)*it)->alterables->values.get(4))*0.3333);
        }
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bossmantalithleg1_1528_instances, it.current_index));
            if (parent == NULL) goto pos_end_2000_28_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2000_28_0: ;
        }
    }
    event_2000_28_end: ;
}
void Frames::event_func_6524()
{
    // event 2001_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_2001_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_2001_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(31);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()-30+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y()+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(6));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(8));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(3)*2)*0.3333);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)+((Active*)*it)->alterables->values.get(4)*2)*0.3333);
        }
    }
    event_2001_28_end: ;
}
void Frames::event_func_6525()
{
    // event 2002_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_2002_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_2002_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(31);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_x()+30+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossmantalithneck3_1531_instances))->get_action_y()+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(10));
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(1)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(11));
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(2)+((Active*)get_instance(bossanimationdata_1593_instances))->alterables->values.get(12));
            ((Active*)*it)->set_x((((Active*)*it)->alterables->values.get(1)+((Active*)*it)->alterables->values.get(3)*2)*0.3333);
            ((Active*)*it)->set_y((((Active*)*it)->alterables->values.get(2)+((Active*)*it)->alterables->values.get(4)*2)*0.3333);
        }
    }
    event_2002_28_end: ;
}
void Frames::event_func_6526()
{
    // event 2003_28
    bool or_result_2003_28 = false;
    bool or_temp_result_2003_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto or_event_2003_28_0_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto or_event_2003_28_0_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (2))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto or_event_2003_28_0_end;
        or_result_2003_28 = true;
        or_temp_result_2003_28_0 = true;
    }
    or_event_2003_28_0_end: ;
    bossmantalithhitbox1_1603_instances.clear_saved_selection();
    bossmantalithleg1_1528_instances.clear_saved_selection();
    if (or_temp_result_2003_28_0) {
        bossmantalithhitbox1_1603_instances.save_selection();
        bossmantalithleg1_1528_instances.save_selection();
    }
    // event 2003_28
    bool or_temp_result_2003_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto or_event_2003_28_1_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto or_event_2003_28_1_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (3))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto or_event_2003_28_1_end;
        or_result_2003_28 = true;
        or_temp_result_2003_28_1 = true;
        or_event_2003_28_1_end: ;
        bossmantalithhitbox2_1604_instances.clear_saved_selection();
        if (or_temp_result_2003_28_1) {
            bossmantalithhitbox2_1604_instances.save_selection();
            bossmantalithleg1_1528_instances.save_selection();
        }
        if (!or_result_2003_28) goto or_final_or_event_2003_28_1_end;
        bossmantalithhitbox2_1604_instances.empty_selection();
        bossmantalithleg1_1528_instances.empty_selection();
        bossmantalithhitbox1_1603_instances.empty_selection();
        if (or_temp_result_2003_28_1) {
            bossmantalithhitbox2_1604_instances.restore_selection();
        }
        if (or_temp_result_2003_28_0) {
            bossmantalithhitbox1_1603_instances.restore_selection();
        }
        if (or_temp_result_2003_28_0 || or_temp_result_2003_28_1) {
            bossmantalithleg1_1528_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    or_final_or_event_2003_28_1_end: ;
}
void Frames::event_func_6527()
{
    // event 2004_28
    bool or_result_2004_28 = false;
    bool or_temp_result_2004_28_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto or_event_2004_28_0_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto or_event_2004_28_0_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (2))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto or_event_2004_28_0_end;
        or_result_2004_28 = true;
        or_temp_result_2004_28_0 = true;
    }
    or_event_2004_28_0_end: ;
    bossmantalithhitbox1_1603_instances.clear_saved_selection();
    bossmantalithleg1_1528_instances.clear_saved_selection();
    if (or_temp_result_2004_28_0) {
        bossmantalithhitbox1_1603_instances.save_selection();
        bossmantalithleg1_1528_instances.save_selection();
    }
    // event 2004_28
    bool or_temp_result_2004_28_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto or_event_2004_28_1_end;
        bossmantalithhitbox2_1604_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox2_1604_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox2_1604_instances.has_selection()) goto or_event_2004_28_1_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (3))) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto or_event_2004_28_1_end;
        or_result_2004_28 = true;
        or_temp_result_2004_28_1 = true;
        or_event_2004_28_1_end: ;
        bossmantalithhitbox2_1604_instances.clear_saved_selection();
        if (or_temp_result_2004_28_1) {
            bossmantalithhitbox2_1604_instances.save_selection();
            bossmantalithleg1_1528_instances.save_selection();
        }
        if (!or_result_2004_28) goto or_final_or_event_2004_28_1_end;
        bossmantalithhitbox2_1604_instances.empty_selection();
        bossmantalithleg1_1528_instances.empty_selection();
        bossmantalithhitbox1_1603_instances.empty_selection();
        if (or_temp_result_2004_28_1) {
            bossmantalithhitbox2_1604_instances.restore_selection();
        }
        if (or_temp_result_2004_28_0) {
            bossmantalithhitbox1_1603_instances.restore_selection();
        }
        if (or_temp_result_2004_28_0 || or_temp_result_2004_28_1) {
            bossmantalithleg1_1528_instances.restore_selection();
        }
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    or_final_or_event_2004_28_1_end: ;
}
void Frames::event_func_6528()
{
    // event 2005_28
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_mantalith_1)) goto event_2005_28_end;
        bossmantalithhitbox1_1603_instances.clear_selection();
        for (ObjectIterator it(bossmantalithhitbox1_1603_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmantalithhitbox1_1603_instances.has_selection()) goto event_2005_28_end;
        bossmantalithleg1_1528_instances.clear_selection();
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!bossmantalithleg1_1528_instances.has_selection()) goto event_2005_28_end;
        for (ObjectIterator it(bossmantalithleg1_1528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_2005_28_0; single_instance_2005_28_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossmantalithleg1_1528_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmantalithdebris_1602(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2005_28_0 == NULL)
                    single_instance_2005_28_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2005_28_0))->set_direction(((Active*)get_single(bossmantalithleg1_1528_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_2005_28_0))->alterables->values.set(2, ((Active*)get_single(bossmantalithhitbox1_1603_instances, default_active_instance))->alterables->values.get(23)*0.5);
        ((Active*)((Active*)single_instance_2005_28_0))->alterables->values.set(24, ((Active*)get_single(bossmantalithhitbox1_1603_instances, default_active_instance))->alterables->values.get(24)*0.5);
    }
    event_2005_28_end: ;
}
