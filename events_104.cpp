#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_8468()
{
    // event 1716_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1716_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (-1))) goto event_1716_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1716_35_end;
        if (!(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.is_off(3))) goto event_1716_35_end;
        media.play_id(SOUND_WINDBLAST_269, -1, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->flags.enable(3);
    }
    event_1716_35_end: ;
}
void Frames::event_func_8469()
{
    // event 1717_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1717_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (-1))) goto event_1717_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (-2))) goto event_1717_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1717_35_end;
        FrameObject * single_instance_1717_35_0; single_instance_1717_35_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsgust_2055(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1717_35_0 == NULL)
                    single_instance_1717_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1717_35_0))->alterables->values.set(0, randrange(1+get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)*0.5, 29)));
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(12, 1);
    }
    event_1717_35_end: ;
}
void Frames::event_func_8470()
{
    // event 1718_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1718_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (-1))) goto event_1718_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (-2))) goto event_1718_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1718_35_end;
        FrameObject * single_instance_1718_35_0; single_instance_1718_35_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsgust_2055(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1718_35_0 == NULL)
                    single_instance_1718_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1718_35_0))->alterables->values.set(0, randrange(1+get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)*0.5, 29)));
    }
    event_1718_35_end: ;
}
void Frames::event_func_8471()
{
    // event 1719_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1719_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (-1))) goto event_1719_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (-2))) goto event_1719_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1719_35_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1719_35_end;
        FrameObject * single_instance_1719_35_0; single_instance_1719_35_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosstornado_2114_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1719_35_0 == NULL)
                    single_instance_1719_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1719_35_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1719_35_0))->get_movement()->set_speed(20+randrange(get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12), 50)));
        ((Active*)((Active*)single_instance_1719_35_0))->set_x(((Active*)single_instance_1719_35_0)->get_x()-10+randrange(21));
        FrameObject * single_instance_1719_35_1; single_instance_1719_35_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosstornado_2114_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsgust2_2056(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1719_35_1 == NULL)
                    single_instance_1719_35_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1719_35_1))->alterables->values.set(0, 15+randrange(8));
        ((Active*)((Active*)single_instance_1719_35_1))->alterables->values.set(1, 0.8-get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)*0.025, 0.8));
        ((Active*)((Active*)single_instance_1719_35_1))->set_y(((Active*)single_instance_1719_35_1)->get_y()-randrange(get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)*1.4, 120)));
        ((Active*)((Active*)single_instance_1719_35_1))->set_x(((Active*)single_instance_1719_35_1)->get_x()-300-randrange(50));
    }
    event_1719_35_end: ;
}
void Frames::event_func_8472()
{
    // event 1720_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1720_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (-1))) goto event_1720_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (-2))) goto event_1720_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1720_35_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1720_35_end;
        FrameObject * single_instance_1720_35_0; single_instance_1720_35_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosstornado_2114_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1720_35_0 == NULL)
                    single_instance_1720_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1720_35_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1720_35_0))->get_movement()->set_speed(20+randrange(get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12), 50)));
        ((Active*)((Active*)single_instance_1720_35_0))->set_x(((Active*)single_instance_1720_35_0)->get_x()-10+randrange(21));
        FrameObject * single_instance_1720_35_1; single_instance_1720_35_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosstornado_2114_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsgust2_2056(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1720_35_1 == NULL)
                    single_instance_1720_35_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1720_35_1))->alterables->values.set(0, -15-randrange(8));
        ((Active*)((Active*)single_instance_1720_35_1))->alterables->values.set(1, 0.8-get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)*0.025, 0.8));
        ((Active*)((Active*)single_instance_1720_35_1))->set_y(((Active*)single_instance_1720_35_1)->get_y()-randrange(get_min(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)*1.4, 120)));
        ((Active*)((Active*)single_instance_1720_35_1))->set_x(((Active*)single_instance_1720_35_1)->get_x()+300+randrange(50));
    }
    event_1720_35_end: ;
}
void Frames::event_func_8473()
{
    // event 1721_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1721_35_end;
        effectsgust_2055_instances.clear_selection();
        for (ObjectIterator it(effectsgust_2055_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(bosstornado_2114_instances))->get_y()-((Active*)*it)->alterables->values.get(0)*4);
            ((Active*)*it)->set_x(((Active*)get_instance(bosstornado_2114_instances))->get_x()+sin_deg(global_values->get(3)*12+((Active*)*it)->alterables->values.get(0)*-10)*(((Active*)*it)->alterables->values.get(0)*0.5+20));
            ((Active*)*it)->set_scale(get_min((((Active*)*it)->alterables->values.get(0)+5)*0.05, 1.5));
        }
    }
    event_1721_35_end: ;
}
void Frames::event_func_8474()
{
    // event 1722_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1722_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (-1))) goto event_1722_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(12)) > (250))) goto event_1722_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, -2);
    }
    event_1722_35_end: ;
}
void Frames::event_func_8475()
{
    // event 1723_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1723_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (-1))) goto event_1723_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (-2))) goto event_1723_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1723_35_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_instance(bosstornado_2114_instances))->alterables->values.get(0));
    }
    event_1723_35_end: ;
}
void Frames::event_func_8476()
{
    // event 1724_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1724_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (-1))) goto event_1724_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (-2))) goto event_1724_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1724_35_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(bosstornado_2114_instances))->get_x()))) goto event_1724_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (24))) goto event_1724_35_end;
        ((Active*)get_instance(bosstornado_2114_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bosstornado_2114_instances))->alterables->values.get(0)-0.2, -6));
    }
    event_1724_35_end: ;
}
void Frames::event_func_8477()
{
    // event 1725_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1725_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (-1))) goto event_1725_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (-2))) goto event_1725_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1725_35_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) >= (((Active*)get_instance(bosstornado_2114_instances))->get_x()))) goto event_1725_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (24))) goto event_1725_35_end;
        ((Active*)get_instance(bosstornado_2114_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bosstornado_2114_instances))->alterables->values.get(0)+0.2, 6));
    }
    event_1725_35_end: ;
}
void Frames::event_func_8478()
{
    // event 1726_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1726_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (-1))) goto event_1726_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (-2))) goto event_1726_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1726_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1726_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (24))) goto event_1726_35_end;
        if (!((((Active*)get_instance(bosstornado_2114_instances))->alterables->values.get(0)) > (0))) goto event_1726_35_end;
        ((Active*)get_instance(bosstornado_2114_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bosstornado_2114_instances))->alterables->values.get(0)-0.1, 0));
    }
    event_1726_35_end: ;
}
void Frames::event_func_8479()
{
    // event 1727_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1727_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (-1))) goto event_1727_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (-2))) goto event_1727_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) >= (12))) goto event_1727_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1727_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (24))) goto event_1727_35_end;
        if (!((((Active*)get_instance(bosstornado_2114_instances))->alterables->values.get(0)) < (0))) goto event_1727_35_end;
        ((Active*)get_instance(bosstornado_2114_instances))->alterables->values.set(0, get_min(((Active*)get_instance(bosstornado_2114_instances))->alterables->values.get(0)+0.1, 0));
    }
    event_1727_35_end: ;
}
void Frames::event_func_8480()
{
    // event 1728_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1728_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (-2))) goto event_1728_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(9, get_max(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)-0.1, 5));
    }
    event_1728_35_end: ;
}
void Frames::event_func_8481()
{
    // event 1729_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1729_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (-2))) goto event_1729_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)) > (60))) goto event_1729_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(2, 1);
    }
    event_1729_35_end: ;
}
void Frames::event_func_8482()
{
    // event 1730_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1730_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (-2))) goto event_1730_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)) <= (5))) goto event_1730_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)) <= (60))) goto event_1730_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 0);
    }
    event_1730_35_end: ;
}
void Frames::event_func_8483()
{
    // event 1731_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1731_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1731_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1731_35_end: ;
}
void Frames::event_func_8484()
{
    // event 1732_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1732_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1732_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->move_back();
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->move_back();
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->move_back();
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->move_back();
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1732_35_end: ;
}
void Frames::event_func_8485()
{
    // event 1733_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1733_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (0))) goto event_1733_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(1, (((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9))%math_helper%360);
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)-((Active*)*it)->alterables->values.get(0)*10)*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2));
            ((Active*)*it)->set_angle(sin_deg((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)-30-((Active*)*it)->alterables->values.get(0)*10))*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)-((Active*)*it)->alterables->values.get(0)*10)*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2));
            ((Active*)*it)->set_angle(0-sin_deg((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)-30-((Active*)*it)->alterables->values.get(0)*10))*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        }
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->get_x()+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*sin_deg(((Active*)*it)->alterables->values.get(0)*35)*-50);
            ((Active*)*it)->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->get_y()+cos_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*(((Active*)*it)->alterables->values.get(0)*-2)+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)*(-0.1+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)*0.01));
        }
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->get_action_x()+cos_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*-24);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->get_action_y()+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*24);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_angle(-10+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3)+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1))*10, 0);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->get_action_x()+cos_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*24);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->get_action_y()+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*-24);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_angle(10+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3)-sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1))*10, 0);
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosskujackerbase_2107_instances));
            if (parent == NULL) goto pos_end_1733_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1733_35_0: ;
        }
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->alterables->values.get(1)*(1+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)-60)*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)*0.004))+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        }
    }
    event_1733_35_end: ;
}
void Frames::event_func_8486()
{
    // event 1734_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1734_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) >= (1))) goto event_1734_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) <= (3))) goto event_1734_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(1, (((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)+4)%math_helper%360);
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)+180)*(((Active*)*it)->alterables->values.get(0)+1)*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)*0.5);
            ((Active*)*it)->set_angle(sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)+180)*(((Active*)*it)->alterables->values.get(0)+1)*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)+180)*(((Active*)*it)->alterables->values.get(0)+1)*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)*0.5);
            ((Active*)*it)->set_angle(0-sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)+180)*(((Active*)*it)->alterables->values.get(0)+1)*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        }
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->get_x()+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*sin_deg(((Active*)*it)->alterables->values.get(0)*35)*-50);
            ((Active*)*it)->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->get_y()+cos_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*(((Active*)*it)->alterables->values.get(0)*-2)+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)*-0.1);
        }
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->get_action_x()+cos_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*-24);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->get_action_y()+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*24);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_angle(-10+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3)+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)+180)*10, 0);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->get_action_x()+cos_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*24);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->get_action_y()+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3))*-24);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_angle(10+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3)-sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1)+180)*10, 0);
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosskujackerbase_2107_instances));
            if (parent == NULL) goto pos_end_1734_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1734_35_0: ;
        }
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->alterables->values.get(1)*(1+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1))*((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(2)*0.005))+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        }
    }
    event_1734_35_end: ;
}
void Frames::event_func_8487()
{
    // event 1735_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1735_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1735_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(10)) == (-1))) goto event_1735_35_end;
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosskujackerbase_2107_instances));
            if (parent == NULL) goto pos_end_1735_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1735_35_0: ;
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->force_animation(7);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->force_animation(7);
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_direction(16);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->force_animation(7);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_direction(16);
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->force_animation(7);
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->set_direction(16);
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1735_35_end: ;
}
void Frames::event_func_8488()
{
    // event 1736_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1736_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1736_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(10)) == (1))) goto event_1736_35_end;
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosskujackerbase_2107_instances));
            if (parent == NULL) goto pos_end_1736_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1736_35_0: ;
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->force_animation(7);
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->force_animation(7);
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->set_direction(0);
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->force_animation(7);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_direction(0);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->force_animation(7);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_direction(0);
    }
    event_1736_35_end: ;
}
void Frames::event_func_8489()
{
    // event 1737_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1737_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) != (4))) goto event_1737_35_end;
        {
            bosskujackerwing1_2110_instances.clear_selection();
            SavedSelection extra_bosskujackerwing1_2110_instances(bosskujackerwing1_2110_instances);
            for (SavedIterator selected(extra_bosskujackerwing1_2110_instances); !selected.end(); ++selected) {
                foreach_instance_wings1 = ((Active*)*selected);
                foreach_wings1_35();
            }
        }
        {
            bosskujackerwing2_2111_instances.clear_selection();
            SavedSelection extra_bosskujackerwing2_2111_instances(bosskujackerwing2_2111_instances);
            for (SavedIterator selected(extra_bosskujackerwing2_2111_instances); !selected.end(); ++selected) {
                foreach_instance_wings2 = ((Active*)*selected);
                foreach_wings2_35();
            }
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4));
        ((Active*)get_instance(bosskujackerbase_2107_instances))->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(5)+sin_deg(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(1))*(-12.5+((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(9)*0.5));
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->set_angle(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        {
            FrameObject * parent = ((Active*)get_instance(bosskujackerbase_2107_instances));
            if (parent == NULL) goto pos_end_1737_35_0;
            ((Active*)get_instance(bosskujackerpilot_2112_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1737_35_0: ;
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->set_angle(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->move_back(((Active*)get_instance(bosskujackerbase_2107_instances)));
    }
    event_1737_35_end: ;
}
void Frames::event_func_8490()
{
    // event 1740_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1740_35_end;
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (bosskujackerhead2_2108_instances.size()))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead2_2108_instances.has_selection()) goto event_1740_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) != (4))) goto event_1740_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosskujackerhead2_2108_instances, it.current_index));
            if (parent == NULL) goto pos_end_1740_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1740_35_0: ;
        }
    }
    event_1740_35_end: ;
}
void Frames::event_func_8491()
{
    // event 1741_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1741_35_end;
        bosstailtracker_2057_instances.clear_selection();
        spread_value(bosstailtracker_2057_instances, 0, 0);
    }
    event_1741_35_end: ;
}
void Frames::event_func_8492()
{
    // event 1742_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1742_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (15))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1742_35_end;
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1742_35_end: ;
}
void Frames::event_func_8493()
{
    // event 1743_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1743_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1743_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(5));
            ((Active*)*it)->set_angle(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3), 0);
        }
        FrameObject * single_instance_1743_35_0; single_instance_1743_35_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosskujackerhead_2113_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosstailtracker_2057(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1743_35_0 == NULL)
                    single_instance_1743_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1743_35_0))->alterables->values.set(1, ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(3));
    }
    event_1743_35_end: ;
}
void Frames::event_func_8494()
{
    // event 1744_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1744_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1744_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1744_35_end;
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead2_2108_instances.has_selection()) goto event_1744_35_end;
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1744_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1744_35_0: ;
        }
    }
    event_1744_35_end: ;
}
void Frames::event_func_8495()
{
    // event 1745_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1745_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1745_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1745_35_end;
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead2_2108_instances.has_selection()) goto event_1745_35_end;
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1745_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1745_35_0: ;
        }
    }
    event_1745_35_end: ;
}
void Frames::event_func_8496()
{
    // event 1746_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1746_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1746_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1746_35_end;
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead2_2108_instances.has_selection()) goto event_1746_35_end;
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1746_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1746_35_0: ;
        }
    }
    event_1746_35_end: ;
}
void Frames::event_func_8497()
{
    // event 1747_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1747_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1747_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1747_35_end;
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead2_2108_instances.has_selection()) goto event_1747_35_end;
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1747_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1747_35_0: ;
        }
    }
    event_1747_35_end: ;
}
void Frames::event_func_8498()
{
    // event 1748_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1748_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1748_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1748_35_end;
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead2_2108_instances.has_selection()) goto event_1748_35_end;
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1748_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1748_35_0: ;
        }
    }
    event_1748_35_end: ;
}
void Frames::event_func_8499()
{
    // event 1749_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1749_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1749_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1749_35_end;
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead2_2108_instances.has_selection()) goto event_1749_35_end;
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1749_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1749_35_0: ;
        }
    }
    event_1749_35_end: ;
}
void Frames::event_func_8500()
{
    // event 1750_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1750_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1750_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(10)) == (-1))) goto event_1750_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1750_35_end;
        {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances));
            if (parent == NULL) goto pos_end_1750_35_0;
            ((Active*)get_instance(bosskujackerbase_2107_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1750_35_0: ;
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->set_angle(((Active*)get_single(bosstailtracker_2057_instances, default_active_instance))->alterables->values.get(1), 0);
        {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances));
            if (parent == NULL) goto pos_end_1750_35_1;
            ((Active*)get_instance(bosskujackerpilot_2112_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1750_35_1: ;
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->set_angle(((Active*)get_single(bosstailtracker_2057_instances, default_active_instance))->alterables->values.get(1), 0);
        {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances));
            if (parent == NULL) goto pos_end_1750_35_2;
            ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1750_35_2: ;
        }
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_angle(((Active*)get_single(bosstailtracker_2057_instances, default_active_instance))->alterables->values.get(1), 0);
        {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances));
            if (parent == NULL) goto pos_end_1750_35_3;
            ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1750_35_3: ;
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_angle(((Active*)get_single(bosstailtracker_2057_instances, default_active_instance))->alterables->values.get(1), 0);
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->alterables->values.get(1)*0.25)+((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-80, 0);
        }
    }
    event_1750_35_end: ;
}
void Frames::event_func_8501()
{
    // event 1751_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1751_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1751_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(10)) == (1))) goto event_1751_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1751_35_end;
        {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances));
            if (parent == NULL) goto pos_end_1751_35_0;
            ((Active*)get_instance(bosskujackerbase_2107_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1751_35_0: ;
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->set_angle(((Active*)get_single(bosstailtracker_2057_instances, default_active_instance))->alterables->values.get(1), 0);
        {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances));
            if (parent == NULL) goto pos_end_1751_35_1;
            ((Active*)get_instance(bosskujackerpilot_2112_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1751_35_1: ;
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->set_angle(((Active*)get_single(bosstailtracker_2057_instances, default_active_instance))->alterables->values.get(1), 0);
        {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances));
            if (parent == NULL) goto pos_end_1751_35_2;
            ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1751_35_2: ;
        }
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_angle(((Active*)get_single(bosstailtracker_2057_instances, default_active_instance))->alterables->values.get(1), 0);
        {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances));
            if (parent == NULL) goto pos_end_1751_35_3;
            ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1751_35_3: ;
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_angle(((Active*)get_single(bosstailtracker_2057_instances, default_active_instance))->alterables->values.get(1), 0);
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((((Active*)*it)->alterables->values.get(1)*-0.25)+((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1)-120-180, 0);
        }
    }
    event_1751_35_end: ;
}
void Frames::event_func_8502()
{
    // event 1752_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1752_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1752_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1752_35_end;
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosskujackerwing2_2111_instances.has_selection()) goto event_1752_35_end;
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1752_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1752_35_0: ;
        }
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1), 0);
        }
    }
    event_1752_35_end: ;
}
void Frames::event_func_8503()
{
    // event 1753_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1753_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1753_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1753_35_end;
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bosskujackerwing1_2110_instances.has_selection()) goto event_1753_35_end;
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1753_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1753_35_0: ;
        }
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1), 0);
        }
    }
    event_1753_35_end: ;
}
void Frames::event_func_8504()
{
    // event 1754_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1754_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1754_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1754_35_end;
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosskujackerwing2_2111_instances.has_selection()) goto event_1754_35_end;
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1754_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1754_35_0: ;
        }
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1), 0);
        }
    }
    event_1754_35_end: ;
}
void Frames::event_func_8505()
{
    // event 1755_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1755_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1755_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (9))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1755_35_end;
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bosskujackerwing1_2110_instances.has_selection()) goto event_1755_35_end;
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1755_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1755_35_0: ;
        }
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1), 0);
        }
    }
    event_1755_35_end: ;
}
void Frames::event_func_8506()
{
    // event 1756_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1756_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1756_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1756_35_end;
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bosskujackerwing2_2111_instances.has_selection()) goto event_1756_35_end;
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1756_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1756_35_0: ;
        }
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1), 0);
        }
    }
    event_1756_35_end: ;
}
void Frames::event_func_8507()
{
    // event 1757_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1757_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1757_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (11))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1757_35_end;
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bosskujackerwing1_2110_instances.has_selection()) goto event_1757_35_end;
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1757_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1757_35_0: ;
        }
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1), 0);
        }
    }
    event_1757_35_end: ;
}
void Frames::event_func_8508()
{
    // event 1758_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1758_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1758_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (13))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1758_35_end;
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!bosskujackerwing2_2111_instances.has_selection()) goto event_1758_35_end;
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1758_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1758_35_0: ;
        }
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1), 0);
        }
    }
    event_1758_35_end: ;
}
void Frames::event_func_8509()
{
    // event 1759_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1759_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (4))) goto event_1759_35_end;
        bosstailtracker_2057_instances.clear_selection();
        for (ObjectIterator it(bosstailtracker_2057_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (13))) { it.deselect(); continue; }
        }
        if (!bosstailtracker_2057_instances.has_selection()) goto event_1759_35_end;
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!bosskujackerwing1_2110_instances.has_selection()) goto event_1759_35_end;
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosstailtracker_2057_instances, it.current_index));
            if (parent == NULL) goto pos_end_1759_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1759_35_0: ;
        }
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosstailtracker_2057_instances, it.current_index, default_active_instance))->alterables->values.get(1), 0);
        }
    }
    event_1759_35_end: ;
}
void Frames::event_func_8510()
{
    // event 1760_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1760_35_end;
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosskujackertail_2104_instances, it.current_index));
            if (parent == NULL) goto pos_end_1760_35_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1760_35_0: ;
        }
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bosskujackertail_2104_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(bosskujackertailtarget_2109_instances, it.current_index, default_active_instance))->get_direction());
        }
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1760_35_end: ;
}
void Frames::event_func_8511()
{
    // event 1761_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1761_35_end;
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bosskujackertailtarget_2109_instances.has_selection()) goto event_1761_35_end;
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1761_35_end: ;
}
void Frames::event_func_8512()
{
    // event 1762_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1762_35_end;
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(2147483648)) { it.deselect(); continue; }
        }
        if (!bosskujackertailtarget_2109_instances.has_selection()) goto event_1762_35_end;
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        FrameObject * single_instance_1762_35_0; single_instance_1762_35_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosskujackertailtarget_2109_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1762_35_0 == NULL)
                    single_instance_1762_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1762_35_0))->alterables->values.set(0, ((Active*)get_single(bosskujackertailtarget_2109_instances, default_active_instance))->alterables->values.get(3));
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_1762_35_end: ;
}
void Frames::event_func_8513()
{
    // event 1763_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1763_35_end;
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)get_instance(effectsexplosion02_411_instances, default_active_instance))->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!bosskujackertailtarget_2109_instances.has_selection()) goto event_1763_35_end;
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosskujackertailtarget_2109_instances, it.current_index));
            if (parent == NULL) goto pos_end_1763_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1763_35_0: ;
        }
    }
    event_1763_35_end: ;
}
void Frames::event_func_8514()
{
    // event 1764_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1764_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(18)) == (4))) goto event_1764_35_end;
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(2))) { it.deselect(); continue; }
        }
        if (!bosskujackertailtarget_2109_instances.has_selection()) goto event_1764_35_end;
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(4);
        }
    }
    event_1764_35_end: ;
}
void Frames::event_func_8515()
{
    // event 1765_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1765_35_end;
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosskujackertailtarget_2109_instances.has_selection()) goto event_1765_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1765_35_end: ;
}
void Frames::event_func_8516()
{
    // event 1766_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1766_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead_2113_instances.has_selection()) goto event_1766_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 3);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->set_direction(1);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_direction(1);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_direction(1);
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(2, 60);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(9, 5);
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(18, 1);
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(31);
        }
    }
    event_1766_35_end: ;
}
void Frames::event_func_8517()
{
    // event 1767_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1767_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(7))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead_2113_instances.has_selection()) goto event_1767_35_end;
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1767_35_end: ;
}
void Frames::event_func_8518()
{
    // event 1768_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1768_35_end;
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bosskujackerhead_2113_instances.has_selection()) goto event_1768_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(18)) >= (5))) goto event_1768_35_end;
        if (once_condition_1768_35) goto event_1768_35_end;
        once_condition_1768_35 = true;
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
            group_main_engine_level_specific_methods_play_bgm_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 6);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(16, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(12, -9999);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(8, 0);
            group_pause_1 = false;
    
    }
    event_1768_35_end: ;
}
void Frames::event_func_8519()
{
    // event 1769_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1769_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) > (0))) goto event_1769_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) < (150))) goto event_1769_35_end;
        effectsexplosion06_312_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(0, 0), 3);
            effectsexplosion06_312_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
            ((Active*)*it)->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->get_y()-40+randrange(81));
            ((Active*)*it)->alterables->flags.enable(0);
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->force_frame(global_values->get(3)%math_helper%2);
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->force_frame(global_values->get(3)%math_helper%2);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->force_frame(global_values->get(3)%math_helper%2);
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%2);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%2);
        }
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%2);
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(2, 1);
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(global_values->get(3)%math_helper%2);
        }
        bosskujackertailtarget_2109_instances.clear_selection();
        for (ObjectIterator it(bosskujackertailtarget_2109_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(31);
        }
    }
    event_1769_35_end: ;
}
void Frames::event_func_8520()
{
    // event 1770_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1770_35_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1770_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) > (0))) goto event_1770_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) < (150))) goto event_1770_35_end;
        effectsexplosion06_312_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion06_312(0, 0), 3);
            effectsexplosion06_312_instances.add_back();
        }
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(40+randrange(30));
            ((Active*)*it)->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->get_x()-40+randrange(81));
            ((Active*)*it)->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->get_y()-40+randrange(81));
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1770_35_end: ;
}
void Frames::event_func_8521()
{
    // event 1771_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1771_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) > (0))) goto event_1771_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) < (0))) goto event_1771_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.add(6, 0.2);
    }
    event_1771_35_end: ;
}
void Frames::event_func_8522()
{
    // event 1772_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1772_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) > (0))) goto event_1772_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(6)) > (0))) goto event_1772_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(6, 0.2);
    }
    event_1772_35_end: ;
}
void Frames::event_func_8523()
{
    // event 1773_35
    bool or_result_1773_35 = false;
    bool or_temp_result_1773_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1773_35_0_end;
        bosskujackerpilot_2112_instances.clear_selection();
        for (ObjectIterator it(bosskujackerpilot_2112_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (60))) { it.deselect(); continue; }
        }
        if (!bosskujackerpilot_2112_instances.has_selection()) goto or_event_1773_35_0_end;
        or_result_1773_35 = true;
        or_temp_result_1773_35_0 = true;
    }
    or_event_1773_35_0_end: ;
    bosskujackerpilot_2112_instances.clear_saved_selection();
    if (or_temp_result_1773_35_0) {
        bosskujackerpilot_2112_instances.save_selection();
    }
    // event 1773_35
    bool or_temp_result_1773_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1773_35_1_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto or_event_1773_35_1_end;
        bosskujackerpilot_2112_instances.clear_selection();
        for (ObjectIterator it(bosskujackerpilot_2112_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (150))) { it.deselect(); continue; }
        }
        if (!bosskujackerpilot_2112_instances.has_selection()) goto or_event_1773_35_1_end;
        or_result_1773_35 = true;
        or_temp_result_1773_35_1 = true;
        or_event_1773_35_1_end: ;
        if (or_temp_result_1773_35_1) {
            bosskujackerpilot_2112_instances.save_selection();
        }
        if (!or_result_1773_35) goto or_final_or_event_1773_35_1_end;
        bosskujackerpilot_2112_instances.empty_selection();
        if (or_temp_result_1773_35_0 || or_temp_result_1773_35_1) {
            bosskujackerpilot_2112_instances.restore_selection();
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1773_35_0_end;
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
        dynamic_1773_35_0_end: ;
    }
    or_final_or_event_1773_35_1_end: ;
}
void Frames::event_func_8524()
{
    // event 1774_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1774_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) >= (60))) goto event_1774_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) < (150))) goto event_1774_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(9, 15);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(2, 0);
    }
    event_1774_35_end: ;
}
void Frames::event_func_8525()
{
    // event 1775_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1775_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (150))) goto event_1775_35_end;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+10, 10));
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(2, 1);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1775_35_end: ;
}
void Frames::event_func_8526()
{
    // event 1776_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1776_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (151))) goto event_1776_35_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(3, 1);
    }
    event_1776_35_end: ;
}
void Frames::event_func_8527()
{
    // event 1777_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1777_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (151))) goto event_1777_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(3)) >= (16))) goto event_1777_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1777_35_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        global_values->set(1, 2);
    }
    event_1777_35_end: ;
}
void Frames::event_func_8528()
{
    // event 1778_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1778_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (151))) goto event_1778_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(3)) >= (16))) goto event_1778_35_end;
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(28);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 1460);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1192);
        leveldarksky_2069_instances.clear_selection();
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(4, 1556);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(5, 1046);
        bosskujackerhead_2113_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        levelsbplatform1_2096_instances.clear_selection();
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(9, 5);
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
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->force_animation(0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->force_animation(0);
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->set_direction(0);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->force_animation(0);
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->set_direction(0);
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->set_direction(0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.set(7, 0);
    }
    event_1778_35_end: ;
}
void Frames::event_func_8529()
{
    // event 1779_35
    bool or_result_1779_35 = false;
    bool or_temp_result_1779_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1779_35_0_end;
        bosskujackerpilot_2112_instances.clear_selection();
        for (ObjectIterator it(bosskujackerpilot_2112_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (152))) { it.deselect(); continue; }
        }
        if (!bosskujackerpilot_2112_instances.has_selection()) goto or_event_1779_35_0_end;
        or_result_1779_35 = true;
        or_temp_result_1779_35_0 = true;
    }
    or_event_1779_35_0_end: ;
    bosskujackerpilot_2112_instances.clear_saved_selection();
    if (or_temp_result_1779_35_0) {
        bosskujackerpilot_2112_instances.save_selection();
    }
    // event 1779_35
    bool or_temp_result_1779_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto or_event_1779_35_1_end;
        bosskujackerpilot_2112_instances.clear_selection();
        for (ObjectIterator it(bosskujackerpilot_2112_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (154))) { it.deselect(); continue; }
        }
        if (!bosskujackerpilot_2112_instances.has_selection()) goto or_event_1779_35_1_end;
        or_result_1779_35 = true;
        or_temp_result_1779_35_1 = true;
        or_event_1779_35_1_end: ;
        if (or_temp_result_1779_35_1) {
            bosskujackerpilot_2112_instances.save_selection();
        }
        if (!or_result_1779_35) goto or_final_or_event_1779_35_1_end;
        bosskujackerpilot_2112_instances.empty_selection();
        if (or_temp_result_1779_35_0 || or_temp_result_1779_35_1) {
            bosskujackerpilot_2112_instances.restore_selection();
        }
        for (ObjectIterator it(bosskujackerpilot_2112_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -60);
        }
    }
    or_final_or_event_1779_35_1_end: ;
}
void Frames::event_func_8530()
{
    // event 1780_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1780_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (152))) goto event_1780_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(3)) > (100))) goto event_1780_35_end;
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.set(3, 0);
    }
    event_1780_35_end: ;
}
void Frames::event_func_8531()
{
    // event 1781_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1781_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (153))) goto event_1781_35_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, -60);
    }
    event_1781_35_end: ;
}
void Frames::event_func_8532()
{
    // event 1782_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1782_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (153))) goto event_1782_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(3)) >= (64))) goto event_1782_35_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.add(2, 1);
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.set(3, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_da_da_04_04_ogg_172, 25-1);
    }
    event_1782_35_end: ;
}
void Frames::event_func_8533()
{
    // event 1783_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1783_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (154))) goto event_1783_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(3)) > (120))) goto event_1783_35_end;
        ((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.sub(7, 0.5);
    }
    event_1783_35_end: ;
}
void Frames::event_func_8534()
{
    // event 1784_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1784_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (154))) goto event_1784_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(3)) > (120))) goto event_1784_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->get_y()) < (300))) goto event_1784_35_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1784_35_end: ;
}
void Frames::event_func_8535()
{
    // event 1785_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_boss_prince_dail_1)) goto event_1785_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (154))) goto event_1785_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(3)) > (120))) goto event_1785_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->get_y()) < (400))) goto event_1785_35_end;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
            group_main_engine_level_specific_methods_bosses_boss_prince_dail_1 = false;
    
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_1785_35_end: ;
}
void Frames::event_func_8536()
{
    // event 1786_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1786_35_end;
        effectsgust2_2056_instances.clear_selection();
        for (ObjectIterator it(effectsgust2_2056_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_x_scale(1-((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, 0.05);
        }
    }
    event_1786_35_end: ;
}
void Frames::event_func_8537()
{
    // event 1787_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1787_35_end;
        effectsgust2_2056_instances.clear_selection();
        for (ObjectIterator it(effectsgust2_2056_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (1))) { it.deselect(); continue; }
        }
        if (!effectsgust2_2056_instances.has_selection()) goto event_1787_35_end;
        for (ObjectIterator it(effectsgust2_2056_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1787_35_end: ;
}
void Frames::event_func_8538()
{
    // event 1788_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1788_35_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(4)+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(5)-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
            ((Active*)*it)->alterables->values.add(1, 62);
        }
    }
    event_1788_35_end: ;
}
void Frames::event_func_8539()
{
    // event 1789_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1789_35_end;
        bosslightning2_2058_instances.clear_selection();
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (2400))) { it.deselect(); continue; }
        }
        if (!bosslightning2_2058_instances.has_selection()) goto event_1789_35_end;
        for (ObjectIterator it(bosslightning2_2058_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1789_35_end: ;
}
void Frames::event_func_8540()
{
    // event 1790_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1790_35_end;
        if (!((((Active*)get_instance(bosskujackerbase_2107_instances))->alterables->values.get(8)) == (0))) goto event_1790_35_end;
        leveldarksky_2069_instances.clear_selection();
        for (ObjectIterator it(leveldarksky_2069_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1790_35_end: ;
}
void Frames::event_func_8541()
{
    // event 1791_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1791_35_end;
        bossbolt_2054_instances.clear_selection();
        for (ObjectIterator it(bossbolt_2054_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (100))) { it.deselect(); continue; }
        }
        if (!bossbolt_2054_instances.has_selection()) goto event_1791_35_end;
        for (ObjectIterator it(bossbolt_2054_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+2, 100));
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(0)*0.01);
        }
    }
    event_1791_35_end: ;
}
void Frames::event_func_8542()
{
    // event 1792_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1792_35_end;
        bossbolt_2054_instances.clear_selection();
        for (ObjectIterator it(bossbolt_2054_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (100))) { it.deselect(); continue; }
        }
        if (!bossbolt_2054_instances.has_selection()) goto event_1792_35_end;
        for (ObjectIterator it(bossbolt_2054_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(50);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(player_389_instances))->x + 0, ((Active*)get_instance(player_389_instances))->y + 0));
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1792_35_end: ;
}
void Frames::event_func_8543()
{
    // event 1793_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1793_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) <= (0))) goto event_1793_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1793_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1793_35_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1793_35_end;
        bossbolt_2054_instances.clear_selection();
        for (ObjectIterator it(bossbolt_2054_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (100))) { it.deselect(); continue; }
        }
        if (!bossbolt_2054_instances.has_selection()) goto event_1793_35_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossbolt_2054_instances, playercharactersensor_383_instances)) goto event_1793_35_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_DAMAGE_ELECTRIC_2_373, -1, 1);
    }
    event_1793_35_end: ;
}
void Frames::event_func_8544()
{
    // event 1795_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1795_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) >= (153))) goto event_1795_35_end;
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
    }
    event_1795_35_end: ;
}
void Frames::event_func_8545()
{
    // event 1796_35
    {
        if (!(group_main_engine_1)) goto event_1796_35_end;
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(levelsbplatform1_2096_instances, it.current_index));
            if (parent == NULL) goto pos_end_1796_35_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 16);
            pos_end_1796_35_0: ;
        }
    }
    event_1796_35_end: ;
}
void Frames::event_func_8546()
{
    // event 1798_35
    {
        if (!(group_main_engine_1)) goto event_1798_35_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1798_35_end;
        if (once_condition_1798_35) goto event_1798_35_end;
        once_condition_1798_35 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 47)) == (0))) goto event_1798_35_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(25)) <= (420000))) goto event_1798_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 47);
    }
    event_1798_35_end: ;
}
void Frames::event_func_8547()
{
    // event 1799_35
    {
        if (!(group_main_engine_1)) goto event_1799_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 40)) == (0))) goto event_1799_35_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->flags.get(4)+((Active*)get_instance(masterlevel_37_instances))->alterables->flags.get(5)+((Active*)get_instance(masterlevel_37_instances))->alterables->flags.get(6)) >= (3))) goto event_1799_35_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(8))) goto event_1799_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 40);
    }
    event_1799_35_end: ;
}
void Frames::event_func_8548()
{
    // event 1800_35
    {
        if (!(group_main_engine_1)) goto event_1800_35_end;
        if (!((((Active*)get_instance(scorevalues_425_instances))->alterables->values.get(3)) == (149))) goto event_1800_35_end;
        if (once_condition_1800_35) goto event_1800_35_end;
        once_condition_1800_35 = true;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 27)) == (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 41)) > (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 42)) > (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 43)) > (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 44)) > (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 45)) > (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 46)) > (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 47)) > (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 48)) > (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 49)) > (0))) goto event_1800_35_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, 50)) > (0))) goto event_1800_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 27);
    }
    event_1800_35_end: ;
}
void Frames::event_func_8549()
{
    // event 1801_35
    {
        if (!(group_main_engine_1)) goto event_1801_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (2))) goto event_1801_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1801_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 15)), 2, 15);
    }
    event_1801_35_end: ;
}
void Frames::event_func_8550()
{
    // event 1802_35
    {
        if (!(group_main_engine_1)) goto event_1802_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (2))) goto event_1802_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_1802_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 12)), 2, 12);
    }
    event_1802_35_end: ;
}
void Frames::event_func_8551()
{
    // event 1803_35
    {
        if (!(group_main_engine_1)) goto event_1803_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (2))) goto event_1803_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1803_35_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1073741824))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1803_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1803_35_end: ;
}
void Frames::event_func_8552()
{
    // event 1804_35
    {
        if (!(group_main_engine_1)) goto event_1804_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (2))) goto event_1804_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (20))) goto event_1804_35_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(16384))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1804_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 13)), 2, 13);
    }
    event_1804_35_end: ;
}
void Frames::event_func_8553()
{
    // event 1805_35
    {
        if (!(group_main_engine_1)) goto event_1805_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (2))) goto event_1805_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1805_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (21))) goto event_1805_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 10)), 2, 10);
    }
    event_1805_35_end: ;
}
void Frames::event_func_8554()
{
    // event 1806_35
    {
        if (!(group_main_engine_1)) goto event_1806_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (2))) goto event_1806_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1806_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (26))) goto event_1806_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 11)), 2, 11);
    }
    event_1806_35_end: ;
}
void Frames::event_func_8555()
{
    // event 1807_35
    {
        if (!(group_main_engine_1)) goto event_1807_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (2))) goto event_1807_35_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (44))) goto event_1807_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 14)), 2, 14);
    }
    event_1807_35_end: ;
}
void Frames::event_func_8556()
{
    // event 1808_35
    {
        if (!(group_main_engine_1)) goto event_1808_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (2))) goto event_1808_35_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1808_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 16)), 2, 16);
    }
    event_1808_35_end: ;
}
void Frames::event_func_8557()
{
    // event 1809_35
    {
        if (!(group_main_engine_1)) goto event_1809_35_end;
        if (!((((Active*)get_instance(bosskujackerpilot_2112_instances))->alterables->values.get(2)) == (2))) goto event_1809_35_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1809_35_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->test_animation(5))) goto event_1809_35_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(get_max(1, ((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 17)), 2, 17);
    }
    event_1809_35_end: ;
}
void Frames::event_func_8558()
{
    // event 2011_35
    {
        if (!(group_main_engine_1)) goto event_2011_35_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(9, (frame_left()*((SystemBox*)*it)->alterables->values.get(3))+((SystemBox*)*it)->alterables->values.get(5));
            ((SystemBox*)*it)->alterables->values.set(10, ((frame_top()+sin_deg(global_values->get(3))*20-20)*((SystemBox*)*it)->alterables->values.get(4))+((SystemBox*)*it)->alterables->values.get(2));
        }
    }
    event_2011_35_end: ;
}
void Frames::event_func_8559()
{
    // event 2013_35
    {
        if (!(group_pause_1)) goto event_2013_35_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2013_35_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2013_35_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2013_35_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2013_35_end;
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
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->stop_animation();
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->stop_animation();
        ((Active*)get_instance(bosskujackerbase_2107_instances))->stop_animation();
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->stop_animation();
        bossbolt_2054_instances.clear_selection();
        for (ObjectIterator it(bossbolt_2054_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectsgust_2055_instances.clear_selection();
        for (ObjectIterator it(effectsgust_2055_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelzaoflag_2068_instances.clear_selection();
        for (ObjectIterator it(levelzaoflag_2068_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
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
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2013_35_end: ;
}
void Frames::event_func_8560()
{
    // event 2014_35
    bool or_result_2014_35 = false;
    bool or_temp_result_2014_35_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2014_35_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2014_35_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2014_35_0_end;
        or_result_2014_35 = true;
        or_temp_result_2014_35_0 = true;
    }
    or_event_2014_35_0_end: ;
    // event 2014_35
    bool or_temp_result_2014_35_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2014_35_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2014_35_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2014_35_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2014_35_1_end;
        or_result_2014_35 = true;
        or_temp_result_2014_35_1 = true;
        or_event_2014_35_1_end: ;
        if (!or_result_2014_35) goto or_final_or_event_2014_35_1_end;
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
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->start_animation();
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->start_animation();
        ((Active*)get_instance(bosskujackerbase_2107_instances))->start_animation();
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->start_animation();
        bossbolt_2054_instances.clear_selection();
        for (ObjectIterator it(bossbolt_2054_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        effectsgust_2055_instances.clear_selection();
        for (ObjectIterator it(effectsgust_2055_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelzaoflag_2068_instances.clear_selection();
        for (ObjectIterator it(levelzaoflag_2068_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
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
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelairship1_2059_instances.clear_selection();
        for (ObjectIterator it(levelairship1_2059_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2014_35_1_end: ;
}
void Frames::event_func_8561()
{
    // event 2025_35
    {
        if (!(group_pause_1)) goto event_2025_35_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2025_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2025_35_end;
        if (!((global_values->get(4)) < (99))) goto event_2025_35_end;
        {
            loop_restart_running = true;
            int times = int(1);
            loop_restart_index = 0;
            while (loop_restart_index < times) {
                loop_restart_16();
                if (!loop_restart_running) break;
                loop_restart_index++;
            }
        }
    }
    event_2025_35_end: ;
}
void Frames::event_func_8562()
{
    // event 2027_35
    {
        if (!(group_pause_1)) goto event_2027_35_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2027_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2027_35_end;
        if (!((global_values->get(4)) < (99))) goto event_2027_35_end;
        {
            loop_return_running = true;
            int times = int(1);
            loop_return_index = 0;
            while (loop_return_index < times) {
                loop_return_0();
                if (!loop_return_running) break;
                loop_return_index++;
            }
        }
    }
    event_2027_35_end: ;
}
void Frames::event_func_8563()
{
    // event 2028_35
    {
        if (!(group_pause_1)) goto event_2028_35_end;
        if (!((global_values->get(4)) >= (99))) goto event_2028_35_end;
        if (once_condition_2028_35) goto event_2028_35_end;
        once_condition_2028_35 = true;
        ((Active*)get_instance(guipause_453_instances))->force_frame(2);
    }
    event_2028_35_end: ;
}
void Frames::event_func_8564()
{
    // event 2029_35
    {
        if (!(group_pause_1)) goto event_2029_35_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (3))) goto event_2029_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2029_35_end;
        if (!((global_values->get(4)) >= (99))) goto event_2029_35_end;
        global_values->set(4, 7);
        next_frame = 83 + 0;    
    
    }
    event_2029_35_end: ;
}
void Frames::event_func_8565()
{
    // event 2030_35
    {
        if (!(group_pause_1)) goto event_2030_35_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (4))) goto event_2030_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (50))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_2030_35_end;
        if (!((global_values->get(4)) >= (99))) goto event_2030_35_end;
        next_frame = (index+1-0)-1 + 0;    
    
        global_values->set(4, 0);
    }
    event_2030_35_end: ;
}
void Frames::event_func_8566()
{
    // event 2032_35
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2032_35_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2032_35_end;
        if (not_always_2032_35 > loop_count) {
            not_always_2032_35 = loop_count + 2;
            goto event_2032_35_end;
        }
        not_always_2032_35 = loop_count + 2;
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
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
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
            group_main_engine_1 = false;
    
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
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
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
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
        bossbolt_2054_instances.clear_selection();
        for (ObjectIterator it(bossbolt_2054_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectsgust_2055_instances.clear_selection();
        for (ObjectIterator it(effectsgust_2055_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->stop_animation();
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bosskujackerbase_2107_instances))->stop_animation();
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->stop_animation();
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->stop_animation();
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelzaoflag_2068_instances.clear_selection();
        for (ObjectIterator it(levelzaoflag_2068_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2032_35_end: ;
}
void Frames::event_func_8567()
{
    // event 2033_35
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2033_35_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2033_35_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2033_35_end;
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
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
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
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
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
        guipowercard_457_instances.clear_selection();
        for (ObjectIterator it(guipowercard_457_instances); !it.end(); ++it) {
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
        bosskujackertail_2104_instances.clear_selection();
        for (ObjectIterator it(bosskujackertail_2104_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bosskujackerleg2_2105_instances))->start_animation();
        ((Active*)get_instance(bosskujackerleg1_2106_instances))->start_animation();
        ((Active*)get_instance(bosskujackerbase_2107_instances))->start_animation();
        bosskujackerhead2_2108_instances.clear_selection();
        for (ObjectIterator it(bosskujackerhead2_2108_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosskujackerwing1_2110_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing1_2110_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosskujackerwing2_2111_instances.clear_selection();
        for (ObjectIterator it(bosskujackerwing2_2111_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bosskujackerpilot_2112_instances))->start_animation();
        for (ObjectIterator it(bosskujackerhead_2113_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsgust_2055_instances.clear_selection();
        for (ObjectIterator it(effectsgust_2055_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossbolt_2054_instances.clear_selection();
        for (ObjectIterator it(bossbolt_2054_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelzaoflag_2068_instances.clear_selection();
        for (ObjectIterator it(levelzaoflag_2068_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_2033_35_end: ;
}
