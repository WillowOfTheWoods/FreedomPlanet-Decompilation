#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_8036()
{
    // event 1596_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1596_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1596_34_end;
        if (not_always_1596_34 > loop_count) {
            not_always_1596_34 = loop_count + 2;
            goto event_1596_34_end;
        }
        not_always_1596_34 = loop_count + 2;
        {
            ((Active*)get_instance(bosspantherjaw_1993_instances))->set_shader(Render::INVERT);
        }
        {
            ((Active*)get_instance(bosspantherhead_1992_instances))->set_shader(Render::INVERT);
        }
        {
            ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_shader(Render::INVERT);
        }
    }
    event_1596_34_end: ;
}
void Frames::event_func_8037()
{
    // event 1597_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1597_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (1))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1597_34_end;
        if (not_always_1597_34 > loop_count) {
            not_always_1597_34 = loop_count + 2;
            goto event_1597_34_end;
        }
        not_always_1597_34 = loop_count + 2;
        {
            ((Active*)get_instance(bosspantherjaw_1993_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherhead_1992_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_shader(NULL);
        }
    }
    event_1597_34_end: ;
}
void Frames::event_func_8038()
{
    // event 1598_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1598_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1598_34_end;
        if (!((((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(0)) > (-60))) goto event_1598_34_end;
        {
            ((Active*)get_instance(bosspantherjaw_1993_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherhead_1992_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_shader(NULL);
        }
        ((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.set(0, get_max(((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(0)-4, -60));
    }
    event_1598_34_end: ;
}
void Frames::event_func_8039()
{
    // event 1599_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1599_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1599_34_end;
        if (!((((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(0)) <= (-60))) goto event_1599_34_end;
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(2, 30);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1599_34_end: ;
}
void Frames::event_func_8040()
{
    // event 1600_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1600_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (4))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1600_34_end;
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 60+((Active*)*it)->alterables->values.get(5)*10);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(2, 100);
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 50);
        }
        {
            ((Active*)get_instance(bosspantherhead_1992_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherjaw_1993_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_shader(NULL);
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.enable(3);
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1600_34_end: ;
}
void Frames::event_func_8041()
{
    // event 1601_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1601_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1601_34_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1601_34_end;
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
        ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        ((Active*)get_instance(bosspantherkneef_1996_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        ((Active*)get_instance(bosspantherhipf_1995_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, default_active_instance))->alterables->values.get(4)%math_helper%2));
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, it.current_index, default_active_instance))->alterables->values.get(4)%math_helper%2));
        }
        bosspanthertail_2002_instances.clear_selection();
        for (ObjectIterator it(bosspanthertail_2002_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_single(bosspantherhitbox_2034_instances, it.current_index, default_active_instance))->alterables->values.get(4)%math_helper%2));
        }
        {
            ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherjaw_1993_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherhead_1992_instances))->set_shader(NULL);
        }
    }
    event_1601_34_end: ;
}
void Frames::event_func_8042()
{
    // event 1602_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1602_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1602_34_end;
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
        bosspanthertail_2002_instances.clear_selection();
        for (ObjectIterator it(bosspanthertail_2002_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        bosspantherribs_1990_instances.clear_selection();
        for (ObjectIterator it(bosspantherribs_1990_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bosspantherfootfl_1991_instances))->set_direction(0);
        ((Active*)get_instance(bosspantherfootfr_2000_instances))->set_direction(0);
        ((Active*)get_instance(bosspantherhead_1992_instances))->set_direction(0);
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_direction(0);
        ((Active*)get_instance(bosspanthershoulderf_1998_instances))->set_direction(0);
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_direction(0);
        ((Active*)get_instance(bosspantherhipf_1995_instances))->set_direction(0);
        ((Active*)get_instance(bosspantherlegfr_2001_instances))->set_direction(0);
        ((Active*)get_instance(bosspantherkneef_1996_instances))->set_direction(0);
        ((Active*)get_instance(bosspantherlegfl_1997_instances))->set_direction(0);
        ((Active*)get_instance(bosspanthershoulderf2_1999_instances))->set_direction(0);
    }
    event_1602_34_end: ;
}
void Frames::event_func_8043()
{
    // event 1603_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1603_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (4))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1603_34_end;
        if (not_always_1603_34 > loop_count) {
            not_always_1603_34 = loop_count + 2;
            goto event_1603_34_end;
        }
        not_always_1603_34 = loop_count + 2;
        ((Active*)get_instance(bosspantherjaw_1993_instances))->force_animation(7);
    }
    event_1603_34_end: ;
}
void Frames::event_func_8044()
{
    // event 1604_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1604_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1604_34_end;
        if (!((((Active*)get_instance(bosspantherjaw_1993_instances))->alterables->values.get(0)) > (-60))) goto event_1604_34_end;
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (4))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1604_34_end;
        if (!(((Active*)get_instance(bosspantherjaw_1993_instances))->flags & VISIBLE)) goto event_1604_34_end;
        ((Active*)get_instance(bosspantherjaw_1993_instances))->set_visible(false);
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1604_34_0; single_instance_1604_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherjaw_1993_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1604_34_0 == NULL)
                    single_instance_1604_34_0 = new_obj;
            }
        }
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * parent = ((Active*)get_instance(bosspantherjaw_1993_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->get_movement()->set_speed(50);
        }
        media.play_id(SOUND_SERP_WHATTHE_259, -1, 1);
    }
    event_1604_34_end: ;
}
void Frames::event_func_8045()
{
    // event 1605_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1605_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (4))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1605_34_end;
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        {
            ((Active*)get_instance(bosspantherhead_1992_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherjaw_1993_instances))->set_shader(NULL);
        }
        {
            ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->set_shader(NULL);
        }
        ((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->flags.enable(3);
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(2, 100);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.set(4, 50);
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1605_34_end: ;
}
void Frames::event_func_8046()
{
    // event 1606_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1606_34_end;
        effectspeedback_2026_instances.clear_selection();
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!effectspeedback_2026_instances.has_selection()) goto event_1606_34_end;
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1)) goto event_1606_34_end;
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_x_scale(15);
            ((Active*)*it)->set_y_scale(8);
        }
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1606_34_end: ;
}
void Frames::event_func_8047()
{
    // event 1607_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1607_34_end;
        effectspeedback_2026_instances.clear_selection();
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (80))) { it.deselect(); continue; }
        }
        if (!effectspeedback_2026_instances.has_selection()) goto event_1607_34_end;
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 0.5);
        }
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1607_34_end: ;
}
void Frames::event_func_8048()
{
    // event 1608_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1608_34_end;
        effectspeedback_2026_instances.clear_selection();
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!effectspeedback_2026_instances.has_selection()) goto event_1608_34_end;
        effectspeedline_2024_instances.clear_selection();
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)get_single(effectspeedback_2026_instances, it.current_index, default_active_instance))->alterables->values.get(0)*1.5);
        }
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-32);
        }
    }
    event_1608_34_end: ;
}
void Frames::event_func_8049()
{
    // event 1609_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1609_34_end;
        effectspeedback_2026_instances.clear_selection();
        for (ObjectIterator it(effectspeedback_2026_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!effectspeedback_2026_instances.has_selection()) goto event_1609_34_end;
        effectspeedline_2024_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectspeedline_2024(660, 4), 0);
            effectspeedline_2024_instances.add_back();
        }
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+randrange(240));
            ((Active*)*it)->set_x_scale(8);
        }
    }
    event_1609_34_end: ;
}
void Frames::event_func_8050()
{
    // event 1610_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1610_34_end;
        effectspeedline_2024_instances.clear_selection();
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (-50))) { it.deselect(); continue; }
        }
        if (!effectspeedline_2024_instances.has_selection()) goto event_1610_34_end;
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1610_34_end: ;
}
void Frames::event_func_8051()
{
    // event 1611_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1)) goto event_1611_34_end;
        bosspantherhitbox_2034_instances.clear_selection();
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (7))) { it.deselect(); continue; }
        }
        if (!bosspantherhitbox_2034_instances.has_selection()) goto event_1611_34_end;
        if (once_condition_1611_34) goto event_1611_34_end;
        once_condition_1611_34 = true;
        ((Active*)get_instance(bosspantherlaser_2036_instances))->set_visible(false);
        ((Active*)get_instance(bosspantherlaser_2036_instances))->set_x_scale(1);
        {
            ((Active*)get_instance(bosspantherlaser_2036_instances))->set_global_position(329, 718);
            pos_end_1611_34_0: ;
        }
            group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_panther_mode_dual_crash_1 = false;
    
        ((Active*)get_instance(bosschargeglow_1865_instances))->set_visible(false);
        if (!group_main_engine_level_specific_methods_bosses_boss_defeated_1) {
            group_main_engine_level_specific_methods_bosses_boss_defeated_1 = true;
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 6);
        for (ObjectIterator it(bosspantherhitbox_2034_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 999);
        }
        ((Active*)get_instance(shieldserpentine_1868_instances))->set_visible(false);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
    }
    event_1611_34_end: ;
}
void Frames::event_func_8052()
{
    // event 1613_34
    {
        if (!(group_main_engine_1)) goto event_1613_34_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_1613_34_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2)*16*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_direction(24);
        }
        FrameObject * single_instance_1613_34_0; single_instance_1613_34_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrapidbullet_1834_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectwarning_1513(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1613_34_0 == NULL)
                    single_instance_1613_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1613_34_0))->set_y(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(11)+120);
        ((Active*)((Active*)single_instance_1613_34_0))->set_visible(true);
        ((Active*)((Active*)single_instance_1613_34_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_1613_34_end: ;
}
void Frames::event_func_8053()
{
    // event 1614_34
    {
        if (!(group_main_engine_1)) goto event_1614_34_end;
        effectwarning_1065_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(effectwarning_1065_instances, qualifier_7)) goto event_1614_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1614_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_1614_34_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-32);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1614_34_end: ;
}
void Frames::event_func_8054()
{
    // event 1615_34
    {
        if (!(group_main_engine_1)) goto event_1615_34_end;
        effectwarning_1065_instances.clear_selection();
        if (!check_not_overlap(effectwarning_1065_instances, qualifier_7)) goto event_1615_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1615_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_1615_34_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+32);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1615_34_end: ;
}
void Frames::event_func_8055()
{
    // event 1616_34
    {
        if (!(group_main_engine_1)) goto event_1616_34_end;
        effectwarning_1065_instances.clear_selection();
        if (!check_not_overlap(effectwarning_1065_instances, qualifier_7)) goto event_1616_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (4))) goto event_1616_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (5))) goto event_1616_34_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+20);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1616_34_end: ;
}
void Frames::event_func_8056()
{
    // event 1618_34
    {
        if (!(group_main_engine_1)) goto event_1618_34_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_1618_34_end;
        qualifier_7.clear_selection();
        if (!check_overlap(bossrapidbullet_1834_instances, qualifier_7)) goto event_1618_34_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1618_34_0; single_instance_1618_34_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrapidbullet_1834_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1618_34_0 == NULL)
                    single_instance_1618_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1618_34_0))->set_angle(randrange(4)*90, 0);
        media.play_id(SOUND_METALHIT_45, -1, 1);
        ((Active*)((Active*)single_instance_1618_34_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        ((Active*)((Active*)single_instance_1618_34_0))->force_speed(50);
    }
    event_1618_34_end: ;
}
void Frames::event_func_8057()
{
    // event 1621_34
    {
        if (!(group_main_engine_1)) goto event_1621_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (4))) goto event_1621_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (5))) goto event_1621_34_end;
        ((Active*)get_instance(bosspanthertarget_2035_instances))->set_x(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(10)+260);
        ((Active*)get_instance(bosspanthertarget_2035_instances))->set_y(((Active*)get_instance(bosspanthervalues_2003_instances))->alterables->values.get(11)+140);
    }
    event_1621_34_end: ;
}
void Frames::event_func_8058()
{
    // event 1622_34
    {
        if (!(group_main_engine_1)) goto event_1622_34_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        bossplasmashot_2022_instances.clear_selection();
        for (ObjectIterator it(bossplasmashot_2022_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-45, 0);
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(bosspanthertarget_2035_instances))->x + 0, ((Active*)get_instance(bosspanthertarget_2035_instances))->y + 0));
        }
    }
    event_1622_34_end: ;
}
void Frames::event_func_8059()
{
    // event 1629_34
    {
        if (!(group_main_engine_1)) goto event_1629_34_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1629_34_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_direction());
        }
    }
    event_1629_34_end: ;
}
void Frames::event_func_8060()
{
    // event 1630_34
    {
        if (!(group_main_engine_1)) goto event_1630_34_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1630_34_end;
        if (!check_not_overlap(bossmissile_2023_instances, bosspantherbackcannon_2031_instances)) goto event_1630_34_end;
        if (!check_not_overlap(bossmissile_2023_instances, bosspantherhead_1992_instances)) goto event_1630_34_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
    }
    event_1630_34_end: ;
}
void Frames::event_func_8061()
{
    // event 1631_34
    {
        if (!(group_main_engine_1)) goto event_1631_34_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_movement()->get_speed()) < (20))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1631_34_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1631_34_end: ;
}
void Frames::event_func_8062()
{
    // event 1632_34
    {
        if (!(group_main_engine_1)) goto event_1632_34_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1632_34_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(((Active*)*it)->get_movement()->get_speed()+2);
            ((Active*)*it)->get_movement()->set_deceleration(0);
        }
    }
    event_1632_34_end: ;
}
void Frames::event_func_8063()
{
    // event 1633_34
    {
        if (!(group_main_engine_1)) goto event_1633_34_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1633_34_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1633_34_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()-1);
        }
    }
    event_1633_34_end: ;
}
void Frames::event_func_8064()
{
    // event 1634_34
    {
        if (!(group_main_engine_1)) goto event_1634_34_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1634_34_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1634_34_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()-1);
        }
    }
    event_1634_34_end: ;
}
void Frames::event_func_8065()
{
    // event 1638_34
    {
        if (!(group_main_engine_1)) goto event_1638_34_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1638_34_end;
        {
            SavedSelection extra_bossmissile_2023_instances(bossmissile_2023_instances);
            for (SavedIterator selected(extra_bossmissile_2023_instances); !selected.end(); ++selected) {
                foreach_instance_m = ((Active*)*selected);
                foreach_m_34();
            }
        }
    }
    event_1638_34_end: ;
}
void Frames::event_func_8066()
{
    // event 1640_34
    {
        if (!(group_main_engine_1)) goto event_1640_34_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (30))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1640_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1640_34_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1640_34_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1640_34_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossmissile_2023_instances, playercharactersensor_383_instances)) goto event_1640_34_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
    }
    event_1640_34_end: ;
}
void Frames::event_func_8067()
{
    // event 1641_34
    {
        if (!(group_main_engine_1)) goto event_1641_34_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (45))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1641_34_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1641_34_end: ;
}
void Frames::event_func_8068()
{
    // event 1643_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1)) goto event_1643_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (2))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1643_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(8, 1);
        }
    }
    event_1643_34_end: ;
}
void Frames::event_func_8069()
{
    // event 1644_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1)) goto event_1644_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1644_34_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_1 && group_main_engine_level_specific_methods_bosses_boss_robopanther_boss_robopanther_unicycle_mode_1) goto event_1644_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) != (3))) goto event_1644_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) != (4))) goto event_1644_34_end;
        if (!((((Active*)get_instance(bosspantherfrontcannon_1994_instances))->alterables->values.get(3)) != (5))) goto event_1644_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 1);
        }
    }
    event_1644_34_end: ;
}
void Frames::event_func_8070()
{
    // event 1645_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1)) goto event_1645_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1645_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1645_34_end;
        if (once_condition_1645_34) goto event_1645_34_end;
        once_condition_1645_34 = true;
        media.play_id(SOUND_CAROL_BIKESTART_126, -1, 1);
    }
    event_1645_34_end: ;
}
void Frames::event_func_8071()
{
    // event 1646_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1)) goto event_1646_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1646_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (4))) goto event_1646_34_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (5))) goto event_1646_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1646_34_end;
        if (once_condition_1646_34) goto event_1646_34_end;
        once_condition_1646_34 = true;
        media.play_id(SOUND_CAROL_BIKESTART_126, -1, 1);
    }
    event_1646_34_end: ;
}
void Frames::event_func_8072()
{
    // event 1647_34
    bool or_result_1647_34 = false;
    bool or_temp_result_1647_34_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1)) goto or_event_1647_34_0_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1647_34_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1647_34_0_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1647_34_0_end;
        or_result_1647_34 = true;
        or_temp_result_1647_34_0 = true;
    }
    or_event_1647_34_0_end: ;
    playerassistoffense_2037_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1647_34_0) {
        playermovementvalues_245_instances.save_selection();
        playerassistoffense_2037_instances.save_selection();
    }
    // event 1647_34
    bool or_temp_result_1647_34_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1)) goto or_event_1647_34_1_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1647_34_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1647_34_1_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1647_34_1_end;
        or_result_1647_34 = true;
        or_temp_result_1647_34_1 = true;
        or_event_1647_34_1_end: ;
        if (or_temp_result_1647_34_1) {
            playermovementvalues_245_instances.save_selection();
            playerassistoffense_2037_instances.save_selection();
        }
        if (!or_result_1647_34) goto or_final_or_event_1647_34_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerassistoffense_2037_instances.empty_selection();
        if (or_temp_result_1647_34_0 || or_temp_result_1647_34_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1647_34_0 || or_temp_result_1647_34_1) {
            playerassistoffense_2037_instances.restore_selection();
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1) {
            group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1 = true;
        }
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->flags.toggle(5);
            ((Active*)*it)->set_direction(1);
        }
        playerassistprojectile_2030_instances.clear_selection();
        for (ObjectIterator it(playerassistprojectile_2030_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
            group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1 = false;
    
    }
    or_final_or_event_1647_34_1_end: ;
}
void Frames::event_func_8073()
{
    // event 1648_34
    bool or_result_1648_34 = false;
    bool or_temp_result_1648_34_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1)) goto or_event_1648_34_0_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1648_34_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1648_34_0_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1648_34_0_end;
        or_result_1648_34 = true;
        or_temp_result_1648_34_0 = true;
    }
    or_event_1648_34_0_end: ;
    playerassistoffense_2037_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1648_34_0) {
        playermovementvalues_245_instances.save_selection();
        playerassistoffense_2037_instances.save_selection();
    }
    // event 1648_34
    bool or_temp_result_1648_34_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1)) goto or_event_1648_34_1_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1648_34_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1648_34_1_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1648_34_1_end;
        or_result_1648_34 = true;
        or_temp_result_1648_34_1 = true;
        or_event_1648_34_1_end: ;
        if (or_temp_result_1648_34_1) {
            playermovementvalues_245_instances.save_selection();
            playerassistoffense_2037_instances.save_selection();
        }
        if (!or_result_1648_34) goto or_final_or_event_1648_34_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerassistoffense_2037_instances.empty_selection();
        if (or_temp_result_1648_34_0 || or_temp_result_1648_34_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1648_34_0 || or_temp_result_1648_34_1) {
            playerassistoffense_2037_instances.restore_selection();
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1) {
            group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1 = true;
        }
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->flags.toggle(5);
            ((Active*)*it)->set_direction(0);
        }
        playerassistprojectile_2030_instances.clear_selection();
        for (ObjectIterator it(playerassistprojectile_2030_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
            group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1 = false;
    
    }
    or_final_or_event_1648_34_1_end: ;
}
void Frames::event_func_8074()
{
    // event 1649_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1649_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->alterables->values.get(0), -50));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_1649_34_end: ;
}
void Frames::event_func_8075()
{
    // event 1650_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1650_34_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1650_34_end;
        FrameObject * single_instance_1650_34_0; single_instance_1650_34_0 = NULL;
        // select single: true false false
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator p_it(playerassistoffense_2037_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1650_34_0 == NULL)
                    single_instance_1650_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1650_34_0))->get_movement()->set_speed(8);
        ((Active*)((Active*)single_instance_1650_34_0))->set_direction(get_direction_int(((Active*)single_instance_1650_34_0)->x, ((Active*)single_instance_1650_34_0)->y, ((Active*)get_single(playerassistoffense_2037_instances))->x + 0, ((Active*)get_single(playerassistoffense_2037_instances))->y + 0));
        ((Active*)((Active*)single_instance_1650_34_0))->set_direction(((Active*)single_instance_1650_34_0)->get_direction()+16);
        ((Active*)((Active*)single_instance_1650_34_0))->set_scale(0.7);
    }
    event_1650_34_end: ;
}
void Frames::event_func_8076()
{
    // event 1651_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1651_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (frame_left()+100))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1651_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.1, 1));
        }
    }
    event_1651_34_end: ;
}
void Frames::event_func_8077()
{
    // event 1652_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1652_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1652_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-1, 0));
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->alterables->values.add(3, 0.2);
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1), ((Active*)*it)->alterables->values.get(6)));
        }
    }
    event_1652_34_end: ;
}
void Frames::event_func_8078()
{
    // event 1653_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1653_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosspantherhitbox_2034_instances, default_active_instance))->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosspantherhitbox_2034_instances, default_active_instance))->get_x()-10))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1653_34_end;
        if (!((((Active*)get_instance(bosspantherhead_1992_instances))->alterables->values.get(0)) <= (0))) goto event_1653_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.set(3, -8);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1653_34_end: ;
}
void Frames::event_func_8079()
{
    // event 1654_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1654_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1654_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 0.3);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1654_34_end: ;
}
void Frames::event_func_8080()
{
    // event 1655_34
    bool or_result_1655_34 = false;
    bool or_temp_result_1655_34_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto or_event_1655_34_0_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1655_34_0_end;
        or_result_1655_34 = true;
        or_temp_result_1655_34_0 = true;
    }
    or_event_1655_34_0_end: ;
    playerassistoffense_2037_instances.clear_saved_selection();
    if (or_temp_result_1655_34_0) {
        playerassistoffense_2037_instances.save_selection();
    }
    // event 1655_34
    bool or_temp_result_1655_34_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto or_event_1655_34_1_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1655_34_1_end;
        or_result_1655_34 = true;
        or_temp_result_1655_34_1 = true;
    }
    or_event_1655_34_1_end: ;
    if (or_temp_result_1655_34_1) {
        playerassistoffense_2037_instances.save_selection();
    }
    // event 1655_34
    bool or_temp_result_1655_34_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto or_event_1655_34_2_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1655_34_2_end;
        or_result_1655_34 = true;
        or_temp_result_1655_34_2 = true;
        or_event_1655_34_2_end: ;
        if (or_temp_result_1655_34_2) {
            playerassistoffense_2037_instances.save_selection();
        }
        if (!or_result_1655_34) goto or_final_or_event_1655_34_2_end;
        playerassistoffense_2037_instances.empty_selection();
        if (or_temp_result_1655_34_0 || or_temp_result_1655_34_1 || or_temp_result_1655_34_2) {
            playerassistoffense_2037_instances.restore_selection();
        }
        media.play_id(SOUND_ATTACK2_137, -1, 1);
        FrameObject * single_instance_1655_34_0; single_instance_1655_34_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerassistoffense_2037_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1655_34_0 == NULL)
                    single_instance_1655_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1655_34_0))->force_speed(100);
        ((Active*)single_instance_1655_34_0)->move_back(((Active*)get_single(playerassistoffense_2037_instances)));
        ((Active*)((Active*)single_instance_1655_34_0))->alterables->values.set(0, 1);
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->values.set(7, (((Active*)*it)->alterables->values.get(7)+1)%math_helper%3);
        }
        ((Active*)((Active*)single_instance_1655_34_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1655_34_0))->alterables->flags.enable(4);
    }
    or_final_or_event_1655_34_2_end: ;
}
void Frames::event_func_8081()
{
    // event 1656_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1656_34_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1656_34_end;
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerassistoffense_2037_instances, it.current_index));
            if (parent == NULL) goto pos_end_1656_34_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1656_34_0: ;
        }
    }
    event_1656_34_end: ;
}
void Frames::event_func_8082()
{
    // event 1657_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1657_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (7))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1657_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1657_34_end: ;
}
void Frames::event_func_8083()
{
    // event 1658_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1658_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1658_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 30);
            ((Active*)*it)->alterables->values.set(2, -3);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1658_34_end: ;
}
void Frames::event_func_8084()
{
    // event 1659_34
    bool or_result_1659_34 = false;
    bool or_temp_result_1659_34_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto or_event_1659_34_0_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1659_34_0_end;
        bossplasmashot_2022_instances.clear_selection();
        if (!check_overlap(playerassistoffense_2037_instances, bossplasmashot_2022_instances)) goto or_event_1659_34_0_end;
        or_result_1659_34 = true;
        or_temp_result_1659_34_0 = true;
    }
    or_event_1659_34_0_end: ;
    bossplasmashot_2022_instances.clear_saved_selection();
    playerassistoffense_2037_instances.clear_saved_selection();
    if (or_temp_result_1659_34_0) {
        bossplasmashot_2022_instances.save_selection();
        playerassistoffense_2037_instances.save_selection();
    }
    // event 1659_34
    bool or_temp_result_1659_34_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto or_event_1659_34_1_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1659_34_1_end;
        bosspantherlaser_2036_instances.clear_selection();
        if (!check_overlap(playerassistoffense_2037_instances, bosspantherlaser_2036_instances)) goto or_event_1659_34_1_end;
        or_result_1659_34 = true;
        or_temp_result_1659_34_1 = true;
    }
    or_event_1659_34_1_end: ;
    bosspantherlaser_2036_instances.clear_saved_selection();
    if (or_temp_result_1659_34_1) {
        bosspantherlaser_2036_instances.save_selection();
        playerassistoffense_2037_instances.save_selection();
    }
    // event 1659_34
    bool or_temp_result_1659_34_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto or_event_1659_34_2_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1659_34_2_end;
        bossmissile_2023_instances.clear_selection();
        if (!check_overlap(playerassistoffense_2037_instances, bossmissile_2023_instances)) goto or_event_1659_34_2_end;
        or_result_1659_34 = true;
        or_temp_result_1659_34_2 = true;
    }
    or_event_1659_34_2_end: ;
    bossmissile_2023_instances.clear_saved_selection();
    if (or_temp_result_1659_34_2) {
        playerassistoffense_2037_instances.save_selection();
        bossmissile_2023_instances.save_selection();
    }
    // event 1659_34
    bool or_temp_result_1659_34_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto or_event_1659_34_3_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1659_34_3_end;
        bossrapidbullet_1834_instances.clear_selection();
        if (!check_overlap(playerassistoffense_2037_instances, bossrapidbullet_1834_instances)) goto or_event_1659_34_3_end;
        or_result_1659_34 = true;
        or_temp_result_1659_34_3 = true;
        or_event_1659_34_3_end: ;
        bossrapidbullet_1834_instances.clear_saved_selection();
        if (or_temp_result_1659_34_3) {
            playerassistoffense_2037_instances.save_selection();
            bossrapidbullet_1834_instances.save_selection();
        }
        if (!or_result_1659_34) goto or_final_or_event_1659_34_3_end;
        bossmissile_2023_instances.empty_selection();
        bossplasmashot_2022_instances.empty_selection();
        bossrapidbullet_1834_instances.empty_selection();
        playerassistoffense_2037_instances.empty_selection();
        bosspantherlaser_2036_instances.empty_selection();
        if (or_temp_result_1659_34_1) {
            bosspantherlaser_2036_instances.restore_selection();
        }
        if (or_temp_result_1659_34_0) {
            bossplasmashot_2022_instances.restore_selection();
        }
        if (or_temp_result_1659_34_0 || or_temp_result_1659_34_1 || or_temp_result_1659_34_2 || or_temp_result_1659_34_3) {
            playerassistoffense_2037_instances.restore_selection();
        }
        if (or_temp_result_1659_34_2) {
            bossmissile_2023_instances.restore_selection();
        }
        if (or_temp_result_1659_34_3) {
            bossrapidbullet_1834_instances.restore_selection();
        }
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
        }
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -4);
            ((Active*)*it)->force_animation(8);
        }
        playerassistprojectile_2030_instances.clear_selection();
        for (ObjectIterator it(playerassistprojectile_2030_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerassistprojectile_2030_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -4);
        }
    }
    or_final_or_event_1659_34_3_end: ;
}
void Frames::event_func_8085()
{
    // event 1660_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1660_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1660_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 0.4);
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1), ((Active*)*it)->alterables->values.get(6)));
        }
    }
    event_1660_34_end: ;
}
void Frames::event_func_8086()
{
    // event 1661_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1661_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1661_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1661_34_end: ;
}
void Frames::event_func_8087()
{
    // event 1662_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_carol_assist_1)) goto event_1662_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1662_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 600);
        }
    }
    event_1662_34_end: ;
}
void Frames::event_func_8088()
{
    // event 1663_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1663_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
        {
            FrameObject * parent = ((Active*)get_single(playerassistoffense_2037_instances));
            if (parent == NULL) goto pos_end_1663_34_0;
            ((Active*)get_instance(playerassistprojectile_2030_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1663_34_0: ;
        }
    }
    event_1663_34_end: ;
}
void Frames::event_func_8089()
{
    // event 1664_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1664_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (frame_left()+100))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1664_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.1, 1));
        }
    }
    event_1664_34_end: ;
}
void Frames::event_func_8090()
{
    // event 1665_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1665_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1665_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-1, 0));
        }
        ((Active*)get_instance(playerassistprojectile_2030_instances))->force_animation(0);
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        ((Active*)get_instance(playerassistprojectile_2030_instances))->restore_speed();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 0.2);
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1), ((Active*)*it)->alterables->values.get(6)));
        }
    }
    event_1665_34_end: ;
}
void Frames::event_func_8091()
{
    // event 1666_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1666_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1666_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1666_34_end: ;
}
void Frames::event_func_8092()
{
    // event 1667_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1667_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(bosspantherhitbox_2034_instances, default_active_instance))->get_x()+40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(bosspantherhitbox_2034_instances, default_active_instance))->get_x()-10))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1667_34_end;
        if (!((((Active*)get_instance(bosspantherhead_1992_instances))->alterables->values.get(0)) <= (0))) goto event_1667_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.set(3, -5);
        }
        media.play_id(SOUND_LILAC_CYCLONE_2_290, -1, 1);
    }
    event_1667_34_end: ;
}
void Frames::event_func_8093()
{
    // event 1668_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1668_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1668_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 0.1);
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(playerassistprojectile_2030_instances))->force_animation(7);
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)*it)->alterables->values.get(3)*4)+30);
        }
        ((Active*)get_instance(playerassistprojectile_2030_instances))->force_speed(get_abs(((Active*)get_single(playerassistoffense_2037_instances, default_active_instance))->alterables->values.get(3)*4)+30);
    }
    event_1668_34_end: ;
}
void Frames::event_func_8094()
{
    // event 1669_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1669_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1669_34_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1669_34_end;
        FrameObject * single_instance_1669_34_0; single_instance_1669_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1669_34_0 == NULL)
                    single_instance_1669_34_0 = new_obj;
            }
        }
        FrameObject * single_instance_1669_34_1; single_instance_1669_34_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1669_34_1 == NULL)
                    single_instance_1669_34_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1669_34_0))->set_direction(8);
        ((Active*)((Active*)single_instance_1669_34_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_1669_34_0))->set_visible(false);
        ((Active*)((Active*)single_instance_1669_34_0))->alterables->flags.enable(4);
        ((Active*)((Active*)single_instance_1669_34_1))->set_x(((Active*)single_instance_1669_34_1)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1669_34_1))->set_y(((Active*)single_instance_1669_34_1)->get_y()-20+randrange(41));
    }
    event_1669_34_end: ;
}
void Frames::event_func_8095()
{
    // event 1670_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1670_34_end;
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!shieldinstashield_359_instances.has_selection()) goto event_1670_34_end;
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerassistoffense_2037_instances, it.current_index));
            if (parent == NULL) goto pos_end_1670_34_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1670_34_0: ;
        }
    }
    event_1670_34_end: ;
}
void Frames::event_func_8096()
{
    // event 1671_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1671_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (7))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1671_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1671_34_end: ;
}
void Frames::event_func_8097()
{
    // event 1672_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1672_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)*it)->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1672_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 30);
            ((Active*)*it)->alterables->values.set(2, -3);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1672_34_end: ;
}
void Frames::event_func_8098()
{
    // event 1673_34
    bool or_result_1673_34 = false;
    bool or_temp_result_1673_34_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto or_event_1673_34_0_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1673_34_0_end;
        bossplasmashot_2022_instances.clear_selection();
        if (!check_overlap(playerassistoffense_2037_instances, bossplasmashot_2022_instances)) goto or_event_1673_34_0_end;
        or_result_1673_34 = true;
        or_temp_result_1673_34_0 = true;
    }
    or_event_1673_34_0_end: ;
    bossplasmashot_2022_instances.clear_saved_selection();
    playerassistoffense_2037_instances.clear_saved_selection();
    if (or_temp_result_1673_34_0) {
        bossplasmashot_2022_instances.save_selection();
        playerassistoffense_2037_instances.save_selection();
    }
    // event 1673_34
    bool or_temp_result_1673_34_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto or_event_1673_34_1_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1673_34_1_end;
        bosspantherlaser_2036_instances.clear_selection();
        if (!check_overlap(playerassistoffense_2037_instances, bosspantherlaser_2036_instances)) goto or_event_1673_34_1_end;
        or_result_1673_34 = true;
        or_temp_result_1673_34_1 = true;
    }
    or_event_1673_34_1_end: ;
    bosspantherlaser_2036_instances.clear_saved_selection();
    if (or_temp_result_1673_34_1) {
        bosspantherlaser_2036_instances.save_selection();
        playerassistoffense_2037_instances.save_selection();
    }
    // event 1673_34
    bool or_temp_result_1673_34_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto or_event_1673_34_2_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1673_34_2_end;
        bossmissile_2023_instances.clear_selection();
        if (!check_overlap(playerassistoffense_2037_instances, bossmissile_2023_instances)) goto or_event_1673_34_2_end;
        or_result_1673_34 = true;
        or_temp_result_1673_34_2 = true;
    }
    or_event_1673_34_2_end: ;
    bossmissile_2023_instances.clear_saved_selection();
    if (or_temp_result_1673_34_2) {
        playerassistoffense_2037_instances.save_selection();
        bossmissile_2023_instances.save_selection();
    }
    // event 1673_34
    bool or_temp_result_1673_34_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto or_event_1673_34_3_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto or_event_1673_34_3_end;
        bossrapidbullet_1834_instances.clear_selection();
        if (!check_overlap(playerassistoffense_2037_instances, bossrapidbullet_1834_instances)) goto or_event_1673_34_3_end;
        or_result_1673_34 = true;
        or_temp_result_1673_34_3 = true;
        or_event_1673_34_3_end: ;
        bossrapidbullet_1834_instances.clear_saved_selection();
        if (or_temp_result_1673_34_3) {
            playerassistoffense_2037_instances.save_selection();
            bossrapidbullet_1834_instances.save_selection();
        }
        if (!or_result_1673_34) goto or_final_or_event_1673_34_3_end;
        bossmissile_2023_instances.empty_selection();
        bossplasmashot_2022_instances.empty_selection();
        bossrapidbullet_1834_instances.empty_selection();
        playerassistoffense_2037_instances.empty_selection();
        bosspantherlaser_2036_instances.empty_selection();
        if (or_temp_result_1673_34_1) {
            bosspantherlaser_2036_instances.restore_selection();
        }
        if (or_temp_result_1673_34_0) {
            bossplasmashot_2022_instances.restore_selection();
        }
        if (or_temp_result_1673_34_0 || or_temp_result_1673_34_1 || or_temp_result_1673_34_2 || or_temp_result_1673_34_3) {
            playerassistoffense_2037_instances.restore_selection();
        }
        if (or_temp_result_1673_34_2) {
            bossmissile_2023_instances.restore_selection();
        }
        if (or_temp_result_1673_34_3) {
            bossrapidbullet_1834_instances.restore_selection();
        }
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
        }
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -4);
            ((Active*)*it)->force_animation(8);
        }
        playerassistprojectile_2030_instances.clear_selection();
        for (ObjectIterator it(playerassistprojectile_2030_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerassistprojectile_2030_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -4);
        }
    }
    or_final_or_event_1673_34_3_end: ;
}
void Frames::event_func_8099()
{
    // event 1674_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1674_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1674_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 0.4);
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1), ((Active*)*it)->alterables->values.get(6)));
        }
    }
    event_1674_34_end: ;
}
void Frames::event_func_8100()
{
    // event 1675_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1675_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1675_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1675_34_end: ;
}
void Frames::event_func_8101()
{
    // event 1676_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_lilac_assist_1)) goto event_1676_34_end;
        playerassistoffense_2037_instances.clear_selection();
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistoffense_2037_instances.has_selection()) goto event_1676_34_end;
        for (ObjectIterator it(playerassistoffense_2037_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 600);
        }
    }
    event_1676_34_end: ;
}
void Frames::event_func_8102()
{
    // event 1678_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1678_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(2))*32);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+cos_deg(((Active*)*it)->alterables->values.get(2)*2+90)*8);
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)+0.7)%math_helper%360);
        }
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(playerassist_2028_instances, it.current_index));
            if (parent == NULL) goto pos_end_1678_34_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1678_34_0: ;
        }
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1678_34_end: ;
}
void Frames::event_func_8103()
{
    // event 1679_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1679_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto event_1679_34_end;
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(0, frame_left()-2000);
        }
    }
    event_1679_34_end: ;
}
void Frames::event_func_8104()
{
    // event 1680_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1680_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+240))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto event_1680_34_end;
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.05, 0));
        }
    }
    event_1680_34_end: ;
}
void Frames::event_func_8105()
{
    // event 1681_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1681_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (0))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto event_1681_34_end;
        FrameObject * single_instance_1681_34_0; single_instance_1681_34_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerassist_2028_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + -64, parent->y + 8), parent->layer);
                if (single_instance_1681_34_0 == NULL)
                    single_instance_1681_34_0 = new_obj;
            }
        }
        ((Active*)single_instance_1681_34_0)->move_back(((Active*)get_single(playerassist_2028_instances)));
        ((Active*)((Active*)single_instance_1681_34_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1681_34_0))->force_speed(50+randrange(50));
        ((Active*)((Active*)single_instance_1681_34_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1681_34_0))->get_movement()->set_speed(50);
    }
    event_1681_34_end: ;
}
void Frames::event_func_8106()
{
    // event 1682_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1682_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+240))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (width))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto event_1682_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1682_34_end;
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1682_34_end: ;
}
void Frames::event_func_8107()
{
    // event 1683_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1683_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto event_1683_34_end;
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.05, -3));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.03, -4));
        }
    }
    event_1683_34_end: ;
}
void Frames::event_func_8108()
{
    // event 1684_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1684_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (frame_top()-80))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto event_1684_34_end;
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, frame_left()-80);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(6, 2);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1684_34_end: ;
}
void Frames::event_func_8109()
{
    // event 1685_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1685_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto event_1685_34_end;
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+1, ((Active*)get_instance(cameralimitbossleft_421_instances, it.current_index, default_active_instance))->get_x()+240));
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1685_34_end: ;
}
void Frames::event_func_8110()
{
    // event 1686_34
    bool or_result_1686_34 = false;
    bool or_temp_result_1686_34_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto or_event_1686_34_0_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto or_event_1686_34_0_end;
        guirings_122_instances.clear_selection();
        for (ObjectIterator it(guirings_122_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) <= (6))) { it.deselect(); continue; }
        }
        if (!guirings_122_instances.has_selection()) goto or_event_1686_34_0_end;
        or_result_1686_34 = true;
        or_temp_result_1686_34_0 = true;
    }
    or_event_1686_34_0_end: ;
    guirings_122_instances.clear_saved_selection();
    playerassist_2028_instances.clear_saved_selection();
    if (or_temp_result_1686_34_0) {
        guirings_122_instances.save_selection();
        playerassist_2028_instances.save_selection();
    }
    // event 1686_34
    bool or_temp_result_1686_34_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto or_event_1686_34_1_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto or_event_1686_34_1_end;
        guirings_122_instances.clear_selection();
        for (ObjectIterator it(guirings_122_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) <= (12))) { it.deselect(); continue; }
        }
        if (!guirings_122_instances.has_selection()) goto or_event_1686_34_1_end;
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (600))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto or_event_1686_34_1_end;
        or_result_1686_34 = true;
        or_temp_result_1686_34_1 = true;
        or_event_1686_34_1_end: ;
        if (or_temp_result_1686_34_1) {
            guirings_122_instances.save_selection();
            playerassist_2028_instances.save_selection();
        }
        if (!or_result_1686_34) goto or_final_or_event_1686_34_1_end;
        guirings_122_instances.empty_selection();
        playerassist_2028_instances.empty_selection();
        if (or_temp_result_1686_34_0 || or_temp_result_1686_34_1) {
            guirings_122_instances.restore_selection();
        }
        if (or_temp_result_1686_34_0 || or_temp_result_1686_34_1) {
            playerassist_2028_instances.restore_selection();
        }
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 3);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    or_final_or_event_1686_34_1_end: ;
}
void Frames::event_func_8111()
{
    // event 1687_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1687_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto event_1687_34_end;
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 1);
        }
    }
    event_1687_34_end: ;
}
void Frames::event_func_8112()
{
    // event 1688_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_torque_s_plane_1)) goto event_1688_34_end;
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()-100))) { it.deselect(); continue; }
        }
        if (!playerassist_2028_instances.has_selection()) goto event_1688_34_end;
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(0, frame_left()-200);
            ((Active*)*it)->set_direction(0);
        }
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1688_34_end: ;
}
void Frames::event_func_8113()
{
    // event 1689_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_milla_s_items_1)) goto event_1689_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1689_34_end;
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.set(5, 2);
        }
    }
    event_1689_34_end: ;
}
void Frames::event_func_8114()
{
    // event 1690_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_milla_s_items_1)) goto event_1690_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (100))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1690_34_end;
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 2);
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(24, 8);
    }
    event_1690_34_end: ;
}
void Frames::event_func_8115()
{
    // event 1691_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_milla_s_items_1)) goto event_1691_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1691_34_end;
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_animation(10);
        }
    }
    event_1691_34_end: ;
}
void Frames::event_func_8116()
{
    // event 1692_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_milla_s_items_1)) goto event_1692_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (40))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1692_34_end;
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->force_animation(0);
        }
        playerassist_2028_instances.clear_selection();
        for (ObjectIterator it(playerassist_2028_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 1);
        }
    }
    event_1692_34_end: ;
}
void Frames::event_func_8117()
{
    // event 1693_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_milla_s_items_1)) goto event_1693_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1693_34_end;
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1693_34_end: ;
}
void Frames::event_func_8118()
{
    // event 1694_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_milla_s_items_1)) goto event_1694_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (60))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1694_34_end;
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 4);
        }
        FrameObject * single_instance_1694_34_0; single_instance_1694_34_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerassistdefense_2029_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorrings_407(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1694_34_0 == NULL)
                    single_instance_1694_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1694_34_0))->alterables->flags.enable(2);
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_BLOCK_SUMMON_241, -1, 1);
    }
    event_1694_34_end: ;
}
void Frames::event_func_8119()
{
    // event 1695_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_milla_s_items_1)) goto event_1695_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1695_34_end;
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1695_34_end: ;
}
void Frames::event_func_8120()
{
    // event 1696_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_milla_s_items_1)) goto event_1696_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1696_34_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1696_34_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(playerassistdefense_2029_instances, it.current_index));
            if (parent == NULL) goto pos_end_1696_34_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + -16, parent->get_action_y() + -32);
            pos_end_1696_34_0: ;
        }
    }
    event_1696_34_end: ;
}
void Frames::event_func_8121()
{
    // event 1697_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_milla_s_items_1)) goto event_1697_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (60))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1697_34_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1697_34_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->alterables->values.set(24, 4);
        }
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
        }
    }
    event_1697_34_end: ;
}
void Frames::event_func_8122()
{
    // event 1699_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1699_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_1699_34_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            if (parent == NULL) goto pos_end_1699_34_0;
            ((Active*)get_instance(playerreflect_447_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1699_34_0: ;
        }
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(24, 0);
    }
    event_1699_34_end: ;
}
void Frames::event_func_8123()
{
    // event 1700_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1700_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_1700_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1700_34_end;
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1700_34_end: ;
}
void Frames::event_func_8124()
{
    // event 1701_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1701_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_1701_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1701_34_end;
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(7);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
        ((Active*)get_instance(playerreflect_447_instances))->set_x(((Active*)get_single(playerassistdefense_2029_instances, default_active_instance))->get_action_x()+sin_deg(((Active*)get_single(playerassistdefense_2029_instances, default_active_instance))->get_angle())*-15);
        ((Active*)get_instance(playerreflect_447_instances))->set_y(((Active*)get_single(playerassistdefense_2029_instances, default_active_instance))->get_action_y()+cos_deg(((Active*)get_single(playerassistdefense_2029_instances, default_active_instance))->get_angle())*-15);
        ((Active*)get_instance(playerreflect_447_instances))->set_angle(((Active*)get_single(playerassistdefense_2029_instances, default_active_instance))->get_angle(), 0);
    }
    event_1701_34_end: ;
}
void Frames::event_func_8125()
{
    // event 1702_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1702_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (40))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1702_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_1702_34_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(0);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(10);
        media.play_id(SOUND_BLOCK_SUMMON_241, -1, 1);
    }
    event_1702_34_end: ;
}
void Frames::event_func_8126()
{
    // event 1703_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1703_34_end;
        playerassistdefense_2029_instances.clear_selection();
        for (ObjectIterator it(playerassistdefense_2029_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerassistdefense_2029_instances.has_selection()) goto event_1703_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (1))) goto event_1703_34_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 2);
    }
    event_1703_34_end: ;
}
void Frames::event_func_8127()
{
    // event 1704_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1704_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (1))) goto event_1704_34_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
        ((Active*)get_instance(playerreflect_447_instances))->set_x(((Active*)get_instance(playerassistdefense_2029_instances, default_active_instance))->get_action_x()+sin_deg(((Active*)get_instance(playerassistdefense_2029_instances, default_active_instance))->get_angle())*-15);
        ((Active*)get_instance(playerreflect_447_instances))->set_y(((Active*)get_instance(playerassistdefense_2029_instances, default_active_instance))->get_action_y()+cos_deg(((Active*)get_instance(playerassistdefense_2029_instances, default_active_instance))->get_angle())*-15);
        ((Active*)get_instance(playerreflect_447_instances))->set_angle(((Active*)get_instance(playerassistdefense_2029_instances, default_active_instance))->get_angle(), 0);
    }
    event_1704_34_end: ;
}
void Frames::event_func_8128()
{
    // event 1705_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1705_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (2))) goto event_1705_34_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_x(((Active*)get_instance(playerreflect_447_instances))->get_x()+((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(23));
        ((Active*)get_instance(playerreflect_447_instances))->set_y(((Active*)get_instance(playerreflect_447_instances))->get_y()+((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(24));
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(23, get_max(((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(23)-0.5, -10));
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(24, get_max(((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(24)-0.2, 0));
    }
    event_1705_34_end: ;
}
void Frames::event_func_8129()
{
    // event 1706_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1706_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (2))) goto event_1706_34_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->outside_playfield())) goto event_1706_34_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
    }
    event_1706_34_end: ;
}
void Frames::event_func_8130()
{
    // event 1708_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1708_34_end;
        playerreflect_447_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playerreflect_447_instances, qualifier_20)) goto event_1708_34_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_1708_34_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3);
        }
        FrameObject * single_instance_1708_34_0; single_instance_1708_34_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerreflect_447_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1708_34_0 == NULL)
                    single_instance_1708_34_0 = new_obj;
            }
        }
    }
    event_1708_34_end: ;
}
void Frames::event_func_8131()
{
    // event 1709_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1709_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1709_34_end;
        if (not_always_1709_34 > loop_count) {
            not_always_1709_34 = loop_count + 2;
            goto event_1709_34_end;
        }
        not_always_1709_34 = loop_count + 2;
        media.play_id(SOUND_XPLODE_2_240, -1, 1);
    }
    event_1709_34_end: ;
}
void Frames::event_func_8132()
{
    // event 1710_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1710_34_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1710_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1710_34_end;
        FrameObject * single_instance_1710_34_0; single_instance_1710_34_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerreflect_447_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1710_34_0 == NULL)
                    single_instance_1710_34_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1710_34_0))->set_scale(0.5);
        ((Active*)((Active*)single_instance_1710_34_0))->set_x(((Active*)single_instance_1710_34_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1710_34_0))->set_y(((Active*)single_instance_1710_34_0)->get_y()-10+randrange(21));
    }
    event_1710_34_end: ;
}
void Frames::event_func_8133()
{
    // event 1711_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1711_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1711_34_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.add(5, 1);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(9);
    }
    event_1711_34_end: ;
}
void Frames::event_func_8134()
{
    // event 1712_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_1 && group_main_engine_level_specific_methods_bosses_boss_assistance_block_physics_1)) goto event_1712_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_1712_34_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(5)) > (20))) goto event_1712_34_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(0);
    }
    event_1712_34_end: ;
}
void Frames::event_func_8135()
{
    // event 1725_34
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_defeated_1)) goto event_1725_34_end;
        if (not_always_1725_34 > loop_count) {
            not_always_1725_34 = loop_count + 2;
            goto event_1725_34_end;
        }
        not_always_1725_34 = loop_count + 2;
            group_pause_1 = false;
    
    }
    event_1725_34_end: ;
}
