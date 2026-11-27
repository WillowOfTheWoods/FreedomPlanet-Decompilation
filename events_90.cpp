#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7435()
{
    // event 2023_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2023_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2023_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-4, 40));
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+4, 56));
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 6);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+10, 40));
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_2023_31_end: ;
}
void Frames::event_func_7436()
{
    // event 2024_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2024_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2024_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 6);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-4, 40));
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0)-4, -56));
            ((Active*)*it)->alterables->flags.disable(1);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+10, 40));
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_2024_31_end: ;
}
void Frames::event_func_7437()
{
    // event 2025_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1)) goto event_2025_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (110))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2025_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = true;
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(2);
        }
    }
    event_2025_31_end: ;
}
void Frames::event_func_7438()
{
    // event 2026_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2026_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+8)%math_helper%360);
        }
    }
    event_2026_31_end: ;
}
void Frames::event_func_7439()
{
    // event 2027_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2027_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2027_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10), 135));
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10), -135));
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 2);
        }
    }
    event_2027_31_end: ;
}
void Frames::event_func_7440()
{
    // event 2028_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2028_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2028_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (135))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_2028_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_2028_31_end: ;
}
void Frames::event_func_7441()
{
    // event 2029_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2029_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2029_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_2029_31_end: ;
}
void Frames::event_func_7442()
{
    // event 2030_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2030_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2030_31_end;
        FrameObject * single_instance_2030_31_0; single_instance_2030_31_0 = NULL;
        // select single: true false false
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator p_it(minibosssamulefthand_1874_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2030_31_0 == NULL)
                    single_instance_2030_31_0 = new_obj;
            }
        }
        FrameObject * single_instance_2030_31_1; single_instance_2030_31_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosssamulefthand_1874_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2030_31_1 == NULL)
                    single_instance_2030_31_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2030_31_1))->set_angle(((Active*)get_single(minibosssamulefthand_1874_instances, default_active_instance))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_2030_31_0))->alterables->values.set(1, ((Active*)get_single(minibosssamulefthand_1874_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_2030_31_0))->alterables->values.set(0, 5);
        ((Active*)((Active*)single_instance_2030_31_0))->set_direction(8);
    }
    event_2030_31_end: ;
}
void Frames::event_func_7443()
{
    // event 2031_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2031_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2031_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_2031_31_0; single_instance_2031_31_0 = NULL;
        // select single: true false false
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator p_it(minibosssamurighthand_1875_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2031_31_0 == NULL)
                    single_instance_2031_31_0 = new_obj;
            }
        }
        FrameObject * single_instance_2031_31_1; single_instance_2031_31_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosssamurighthand_1875_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2031_31_1 == NULL)
                    single_instance_2031_31_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2031_31_1))->set_angle(((Active*)get_single(minibosssamurighthand_1875_instances, default_active_instance))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_2031_31_0))->alterables->values.set(1, ((Active*)get_single(minibosssamurighthand_1875_instances, default_active_instance))->alterables->values.get(2)+180);
        ((Active*)((Active*)single_instance_2031_31_0))->alterables->values.set(0, 5);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
        ((Active*)((Active*)single_instance_2031_31_0))->set_direction(24);
    }
    event_2031_31_end: ;
}
void Frames::event_func_7444()
{
    // event 2032_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2032_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (11))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2032_31_end;
        FrameObject * single_instance_2032_31_0; single_instance_2032_31_0 = NULL;
        // select single: true false false
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator p_it(minibosssamulefthand_1874_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2032_31_0 == NULL)
                    single_instance_2032_31_0 = new_obj;
            }
        }
        FrameObject * single_instance_2032_31_1; single_instance_2032_31_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosssamulefthand_1874_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2032_31_1 == NULL)
                    single_instance_2032_31_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2032_31_1))->set_angle(((Active*)get_single(minibosssamulefthand_1874_instances, default_active_instance))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_2032_31_0))->alterables->values.set(1, ((Active*)get_single(minibosssamulefthand_1874_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_2032_31_0))->alterables->values.set(0, 5);
        ((Active*)((Active*)single_instance_2032_31_0))->set_direction(8);
    }
    event_2032_31_end: ;
}
void Frames::event_func_7445()
{
    // event 2033_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2033_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (11))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2033_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_2033_31_0; single_instance_2033_31_0 = NULL;
        // select single: true false false
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator p_it(minibosssamurighthand_1875_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2033_31_0 == NULL)
                    single_instance_2033_31_0 = new_obj;
            }
        }
        FrameObject * single_instance_2033_31_1; single_instance_2033_31_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosssamurighthand_1875_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2033_31_1 == NULL)
                    single_instance_2033_31_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2033_31_1))->set_angle(((Active*)get_single(minibosssamurighthand_1875_instances, default_active_instance))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_2033_31_0))->alterables->values.set(1, ((Active*)get_single(minibosssamurighthand_1875_instances, default_active_instance))->alterables->values.get(2)+180);
        ((Active*)((Active*)single_instance_2033_31_0))->alterables->values.set(0, 5);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
        ((Active*)((Active*)single_instance_2033_31_0))->set_direction(24);
    }
    event_2033_31_end: ;
}
void Frames::event_func_7446()
{
    // event 2034_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2034_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (21))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2034_31_end;
        FrameObject * single_instance_2034_31_0; single_instance_2034_31_0 = NULL;
        // select single: true false false
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator p_it(minibosssamulefthand_1874_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2034_31_0 == NULL)
                    single_instance_2034_31_0 = new_obj;
            }
        }
        FrameObject * single_instance_2034_31_1; single_instance_2034_31_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosssamulefthand_1874_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2034_31_1 == NULL)
                    single_instance_2034_31_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2034_31_1))->set_angle(((Active*)get_single(minibosssamulefthand_1874_instances, default_active_instance))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_2034_31_0))->alterables->values.set(1, ((Active*)get_single(minibosssamulefthand_1874_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_2034_31_0))->alterables->values.set(0, 5);
        ((Active*)((Active*)single_instance_2034_31_0))->set_direction(8);
    }
    event_2034_31_end: ;
}
void Frames::event_func_7447()
{
    // event 2035_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2035_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) == (21))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2035_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        FrameObject * single_instance_2035_31_0; single_instance_2035_31_0 = NULL;
        // select single: true false false
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator p_it(minibosssamurighthand_1875_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemylaser_1626(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2035_31_0 == NULL)
                    single_instance_2035_31_0 = new_obj;
            }
        }
        FrameObject * single_instance_2035_31_1; single_instance_2035_31_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosssamurighthand_1875_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectgunspark_1836(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_2035_31_1 == NULL)
                    single_instance_2035_31_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2035_31_1))->set_angle(((Active*)get_single(minibosssamurighthand_1875_instances, default_active_instance))->alterables->values.get(2)+90, 0);
        ((Active*)((Active*)single_instance_2035_31_0))->alterables->values.set(1, ((Active*)get_single(minibosssamurighthand_1875_instances, default_active_instance))->alterables->values.get(2)+180);
        ((Active*)((Active*)single_instance_2035_31_0))->alterables->values.set(0, 5);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
        ((Active*)((Active*)single_instance_2035_31_0))->set_direction(24);
    }
    event_2035_31_end: ;
}
void Frames::event_func_7448()
{
    // event 2036_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2036_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2036_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(10, 10);
        }
    }
    event_2036_31_end: ;
}
void Frames::event_func_7449()
{
    // event 2037_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2037_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2037_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0));
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0));
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_2037_31_end: ;
}
void Frames::event_func_7450()
{
    // event 2038_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1)) goto event_2038_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2038_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto event_2038_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = true;
        }
    }
    event_2038_31_end: ;
}
void Frames::event_func_7451()
{
    // event 2039_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2039_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2039_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, -1);
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_2039_31_end: ;
}
void Frames::event_func_7452()
{
    // event 2040_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2040_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2040_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_2040_31_end: ;
}
void Frames::event_func_7453()
{
    // event 2041_31
    bool or_result_2041_31 = false;
    bool or_temp_result_2041_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto or_event_2041_31_0_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_2041_31_0_end;
        or_result_2041_31 = true;
        or_temp_result_2041_31_0 = true;
    }
    or_event_2041_31_0_end: ;
    minibosssamu_1876_instances.clear_saved_selection();
    if (or_temp_result_2041_31_0) {
        minibosssamu_1876_instances.save_selection();
    }
    // event 2041_31
    bool or_temp_result_2041_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto or_event_2041_31_1_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (4))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_2041_31_1_end;
        or_result_2041_31 = true;
        or_temp_result_2041_31_1 = true;
        or_event_2041_31_1_end: ;
        if (or_temp_result_2041_31_1) {
            minibosssamu_1876_instances.save_selection();
        }
        if (!or_result_2041_31) goto or_final_or_event_2041_31_1_end;
        minibosssamu_1876_instances.empty_selection();
        if (or_temp_result_2041_31_0 || or_temp_result_2041_31_1) {
            minibosssamu_1876_instances.restore_selection();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+8)%math_helper%360);
        }
    }
    or_final_or_event_2041_31_1_end: ;
}
void Frames::event_func_7454()
{
    // event 2042_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2042_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2042_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10), -90));
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10)*0.25);
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
    }
    event_2042_31_end: ;
}
void Frames::event_func_7455()
{
    // event 2043_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2043_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2043_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10), 90));
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10)*0.25);
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
    }
    event_2043_31_end: ;
}
void Frames::event_func_7456()
{
    // event 2044_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2044_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (((Active*)get_instance(player_389_instances))->get_y()-8))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2044_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 3);
        }
    }
    event_2044_31_end: ;
}
void Frames::event_func_7457()
{
    // event 2045_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2045_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (((Active*)get_instance(player_389_instances))->get_y()+8))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2045_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 3);
        }
    }
    event_2045_31_end: ;
}
void Frames::event_func_7458()
{
    // event 2046_31
    bool or_result_2046_31 = false;
    bool or_temp_result_2046_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto or_event_2046_31_0_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_2046_31_0_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (-90))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto or_event_2046_31_0_end;
        or_result_2046_31 = true;
        or_temp_result_2046_31_0 = true;
    }
    or_event_2046_31_0_end: ;
    minibosssamu_1876_instances.clear_saved_selection();
    minibosssamurighthand_1875_instances.clear_saved_selection();
    if (or_temp_result_2046_31_0) {
        minibosssamu_1876_instances.save_selection();
        minibosssamurighthand_1875_instances.save_selection();
    }
    // event 2046_31
    bool or_temp_result_2046_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto or_event_2046_31_1_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_2046_31_1_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (90))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto or_event_2046_31_1_end;
        or_result_2046_31 = true;
        or_temp_result_2046_31_1 = true;
        or_event_2046_31_1_end: ;
        minibosssamulefthand_1874_instances.clear_saved_selection();
        if (or_temp_result_2046_31_1) {
            minibosssamu_1876_instances.save_selection();
            minibosssamulefthand_1874_instances.save_selection();
        }
        if (!or_result_2046_31) goto or_final_or_event_2046_31_1_end;
        minibosssamu_1876_instances.empty_selection();
        minibosssamurighthand_1875_instances.empty_selection();
        minibosssamulefthand_1874_instances.empty_selection();
        if (or_temp_result_2046_31_0 || or_temp_result_2046_31_1) {
            minibosssamu_1876_instances.restore_selection();
        }
        if (or_temp_result_2046_31_0) {
            minibosssamurighthand_1875_instances.restore_selection();
        }
        if (or_temp_result_2046_31_1) {
            minibosssamulefthand_1874_instances.restore_selection();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        minibosssamuwheel_1873_instances.clear_selection();
        for (ObjectIterator it(minibosssamuwheel_1873_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    or_final_or_event_2046_31_1_end: ;
}
void Frames::event_func_7459()
{
    // event 2047_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2047_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2047_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+2)%math_helper%360);
            ((Active*)*it)->alterables->values.add(10, 1);
        }
        minibosssamuwheel_1873_instances.clear_selection();
        for (ObjectIterator it(minibosssamuwheel_1873_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 4);
        }
    }
    event_2047_31_end: ;
}
void Frames::event_func_7460()
{
    // event 2048_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2048_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (50))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2048_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(14)*15);
        }
    }
    event_2048_31_end: ;
}
void Frames::event_func_7461()
{
    // event 2049_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2049_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (50))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2049_31_end;
        breakablefloor2_1761_instances.clear_selection();
        if (!check_overlap(minibosssamu_1876_instances, breakablefloor2_1761_instances)) goto event_2049_31_end;
        for (ObjectIterator it(breakablefloor2_1761_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
    }
    event_2049_31_end: ;
}
void Frames::event_func_7462()
{
    // event 2050_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2050_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (50))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2050_31_end;
        breakablefloor1_1760_instances.clear_selection();
        if (!check_overlap(minibosssamu_1876_instances, breakablefloor1_1760_instances)) goto event_2050_31_end;
        for (ObjectIterator it(breakablefloor1_1760_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(24, -6);
        }
    }
    event_2050_31_end: ;
}
void Frames::event_func_7463()
{
    // event 2051_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2051_31_end;
        minibosssamu_1876_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibosssamu_1876_instances, playercharactersensor_383_instances)) goto event_2051_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) != (0))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2051_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2051_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2051_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
    }
    event_2051_31_end: ;
}
void Frames::event_func_7464()
{
    // event 2052_31
    bool or_result_2052_31 = false;
    bool or_temp_result_2052_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto or_event_2052_31_0_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (50))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_2052_31_0_end;
        or_result_2052_31 = true;
        or_temp_result_2052_31_0 = true;
    }
    or_event_2052_31_0_end: ;
    minibosssamu_1876_instances.clear_saved_selection();
    if (or_temp_result_2052_31_0) {
        minibosssamu_1876_instances.save_selection();
    }
    // event 2052_31
    bool or_temp_result_2052_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto or_event_2052_31_1_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (50))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_2052_31_1_end;
        bossgate_1878_instances.clear_selection();
        if (!check_overlap(minibosssamu_1876_instances, bossgate_1878_instances)) goto or_event_2052_31_1_end;
        or_result_2052_31 = true;
        or_temp_result_2052_31_1 = true;
        or_event_2052_31_1_end: ;
        bossgate_1878_instances.clear_saved_selection();
        if (or_temp_result_2052_31_1) {
            minibosssamu_1876_instances.save_selection();
            bossgate_1878_instances.save_selection();
        }
        if (!or_result_2052_31) goto or_final_or_event_2052_31_1_end;
        minibosssamu_1876_instances.empty_selection();
        bossgate_1878_instances.empty_selection();
        if (or_temp_result_2052_31_0 || or_temp_result_2052_31_1) {
            minibosssamu_1876_instances.restore_selection();
        }
        if (or_temp_result_2052_31_1) {
            bossgate_1878_instances.restore_selection();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        minibosssamuwheel_1873_instances.clear_selection();
        for (ObjectIterator it(minibosssamuwheel_1873_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        media.play_id(SOUND_COMMON_EXPLODE_8_17, -1, 1);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, 8);
        }
    }
    or_final_or_event_2052_31_1_end: ;
}
void Frames::event_func_7465()
{
    // event 2053_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2053_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (3))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2053_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_2053_31_end: ;
}
void Frames::event_func_7466()
{
    // event 2054_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2054_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (50))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2054_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(14)*-3);
        }
    }
    event_2054_31_end: ;
}
void Frames::event_func_7467()
{
    // event 2055_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2055_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2055_31_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0));
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10)*0.25, 0));
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
    }
    event_2055_31_end: ;
}
void Frames::event_func_7468()
{
    // event 2056_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto event_2056_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2056_31_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0));
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.5, 2));
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*-56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-((Active*)get_single(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(10)*0.25, 0));
            ((Active*)*it)->alterables->values.set(0, cos_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+sin_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
            ((Active*)*it)->alterables->values.set(1, sin_deg(0-((Active*)*it)->alterables->values.get(2)*0.75)*56+cos_deg(((Active*)*it)->alterables->values.get(2)*0.75)*40);
        }
    }
    event_2056_31_end: ;
}
void Frames::event_func_7469()
{
    // event 2057_31
    bool or_result_2057_31 = false;
    bool or_temp_result_2057_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto or_event_2057_31_0_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_2057_31_0_end;
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (0))) { it.deselect(); continue; }
        }
        if (!minibosssamulefthand_1874_instances.has_selection()) goto or_event_2057_31_0_end;
        or_result_2057_31 = true;
        or_temp_result_2057_31_0 = true;
    }
    or_event_2057_31_0_end: ;
    minibosssamu_1876_instances.clear_saved_selection();
    minibosssamulefthand_1874_instances.clear_saved_selection();
    if (or_temp_result_2057_31_0) {
        minibosssamu_1876_instances.save_selection();
        minibosssamulefthand_1874_instances.save_selection();
    }
    // event 2057_31
    bool or_temp_result_2057_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1)) goto or_event_2057_31_1_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (-1))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto or_event_2057_31_1_end;
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!minibosssamurighthand_1875_instances.has_selection()) goto or_event_2057_31_1_end;
        or_result_2057_31 = true;
        or_temp_result_2057_31_1 = true;
        or_event_2057_31_1_end: ;
        minibosssamurighthand_1875_instances.clear_saved_selection();
        if (or_temp_result_2057_31_1) {
            minibosssamu_1876_instances.save_selection();
            minibosssamurighthand_1875_instances.save_selection();
        }
        if (!or_result_2057_31) goto or_final_or_event_2057_31_1_end;
        minibosssamu_1876_instances.empty_selection();
        minibosssamurighthand_1875_instances.empty_selection();
        minibosssamulefthand_1874_instances.empty_selection();
        if (or_temp_result_2057_31_0 || or_temp_result_2057_31_1) {
            minibosssamu_1876_instances.restore_selection();
        }
        if (or_temp_result_2057_31_1) {
            minibosssamurighthand_1875_instances.restore_selection();
        }
        if (or_temp_result_2057_31_0) {
            minibosssamulefthand_1874_instances.restore_selection();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = true;
        }
    }
    or_final_or_event_2057_31_1_end: ;
}
void Frames::event_func_7470()
{
    // event 2058_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_2058_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2058_31_end;
        if (not_always_2058_31 > loop_count) {
            not_always_2058_31 = loop_count + 2;
            goto event_2058_31_end;
        }
        not_always_2058_31 = loop_count + 2;
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1) {
            group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1 = true;
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->force_animation(8);
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -56);
            ((Active*)*it)->alterables->values.set(1, -20);
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 56);
            ((Active*)*it)->alterables->values.set(1, -20);
        }
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -45);
        }
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 45);
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_2058_31_end: ;
}
void Frames::event_func_7471()
{
    // event 2059_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2059_31_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_2059_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) < (25))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2059_31_end;
        FrameObject * single_instance_2059_31_0; single_instance_2059_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibosssamu_1876_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2059_31_0 == NULL)
                    single_instance_2059_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2059_31_0))->set_x(((Active*)single_instance_2059_31_0)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_2059_31_0))->set_y(((Active*)single_instance_2059_31_0)->get_y()-30+randrange(61));
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_2059_31_1_end;
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
        dynamic_2059_31_1_end: ;
    }
    event_2059_31_end: ;
}
void Frames::event_func_7472()
{
    // event 2060_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2060_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (25))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2060_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
            ((Active*)*it)->force_animation(9);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        {
            loop_samu_running = true;
            int times = int(5);
            loop_samu_index = 0;
            while (loop_samu_index < times) {
                loop_samu_31();
                if (!loop_samu_running) break;
                loop_samu_index++;
            }
        }
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 3);
        }
    }
    event_2060_31_end: ;
}
void Frames::event_func_7473()
{
    // event 2062_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2062_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (26))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2062_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.2, -12));
        }
    }
    event_2062_31_end: ;
}
void Frames::event_func_7474()
{
    // event 2063_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2063_31_end;
        minibosssamudebris_1837_instances.clear_selection();
        for (ObjectIterator it(minibosssamudebris_1837_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+80))) { it.deselect(); continue; }
        }
        if (!minibosssamudebris_1837_instances.has_selection()) goto event_2063_31_end;
        for (ObjectIterator it(minibosssamudebris_1837_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2063_31_end: ;
}
void Frames::event_func_7475()
{
    // event 2064_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2064_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (26))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (512))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2064_31_end;
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        media.play_id(SOUND_DRAG2_62, -1, 0);
    }
    event_2064_31_end: ;
}
void Frames::event_func_7476()
{
    // event 2065_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2065_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2065_31_end;
        bossgate_1878_instances.clear_selection();
        for (ObjectIterator it(bossgate_1878_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
    }
    event_2065_31_end: ;
}
void Frames::event_func_7477()
{
    // event 2066_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2066_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2066_31_end;
        bossgate_1878_instances.clear_selection();
        for (ObjectIterator it(bossgate_1878_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (24))) { it.deselect(); continue; }
        }
        if (!bossgate_1878_instances.has_selection()) goto event_2066_31_end;
        if (once_condition_2066_31) goto event_2066_31_end;
        once_condition_2066_31 = true;
        enemysuperturretus_1828_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemysuperturretus_1828(11550, 949), 3);
            enemysuperturretus_1828_instances.add_back();
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
        }
    }
    event_2066_31_end: ;
}
void Frames::event_func_7478()
{
    // event 2067_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2067_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) == (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2067_31_end;
        bossgate_1878_instances.clear_selection();
        for (ObjectIterator it(bossgate_1878_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (48))) { it.deselect(); continue; }
        }
        if (!bossgate_1878_instances.has_selection()) goto event_2067_31_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        enemysuperturretus_1828_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemysuperturretus_1828(11552, 852), 3);
            enemysuperturretus_1828_instances.add_back();
        }
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 1);
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, -1);
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        media.play_id(SOUND_COMMON_SLAM1_51, -1, 1);
        media.stop_sample(SOUND_DRAG2_62);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
    }
    event_2067_31_end: ;
}
void Frames::event_func_7479()
{
    // event 2068_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2068_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) > (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2068_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (208))) goto event_2068_31_end;
        if (not_always_2068_31 > loop_count) {
            not_always_2068_31 = loop_count + 2;
            goto event_2068_31_end;
        }
        not_always_2068_31 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, frame_bottom());
    }
    event_2068_31_end: ;
}
void Frames::event_func_7480()
{
    // event 2069_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1 && group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1)) goto event_2069_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) > (27))) { it.deselect(); continue; }
        }
        if (!minibosssamu_1876_instances.has_selection()) goto event_2069_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (208))) goto event_2069_31_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(5)-2, 240));
    }
    event_2069_31_end: ;
}
void Frames::event_func_7481()
{
    // event 2070_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_2070_31_end;
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, ((Active*)get_instance(minibosssamufloorcheck_1877_instances, it.current_index, default_active_instance))->get_y()-140);
        }
    }
    event_2070_31_end: ;
}
void Frames::event_func_7482()
{
    // event 2071_31
    bool or_result_2071_31 = false;
    bool or_temp_result_2071_31_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto or_event_2071_31_0_end;
        minibosssamufloorcheck_1877_instances.clear_selection();
        qualifier_7.clear_selection();
        if (!check_overlap(minibosssamufloorcheck_1877_instances, qualifier_7)) goto or_event_2071_31_0_end;
        or_result_2071_31 = true;
        or_temp_result_2071_31_0 = true;
    }
    or_event_2071_31_0_end: ;
    qualifier_7.clear_saved_selection();
    minibosssamufloorcheck_1877_instances.clear_saved_selection();
    if (or_temp_result_2071_31_0) {
        qualifier_7.save_selection();
        minibosssamufloorcheck_1877_instances.save_selection();
    }
    // event 2071_31
    bool or_temp_result_2071_31_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto or_event_2071_31_1_end;
        minibosssamufloorcheck_1877_instances.clear_selection();
        for (ObjectIterator it(minibosssamufloorcheck_1877_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!minibosssamufloorcheck_1877_instances.has_selection()) goto or_event_2071_31_1_end;
        or_result_2071_31 = true;
        or_temp_result_2071_31_1 = true;
        or_event_2071_31_1_end: ;
        if (or_temp_result_2071_31_1) {
            minibosssamufloorcheck_1877_instances.save_selection();
        }
        if (!or_result_2071_31) goto or_final_or_event_2071_31_1_end;
        minibosssamufloorcheck_1877_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_2071_31_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_2071_31_0 || or_temp_result_2071_31_1) {
            minibosssamufloorcheck_1877_instances.restore_selection();
        }
        for (ObjectIterator it(minibosssamufloorcheck_1877_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
        }
    }
    or_final_or_event_2071_31_1_end: ;
}
void Frames::event_func_7483()
{
    // event 2072_31
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_samu_1)) goto event_2072_31_end;
        minibosssamufloorcheck_1877_instances.clear_selection();
        if (!check_not_overlap(minibosssamufloorcheck_1877_instances, qualifier_7)) goto event_2072_31_end;
        for (ObjectIterator it(minibosssamufloorcheck_1877_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!minibosssamufloorcheck_1877_instances.has_selection()) goto event_2072_31_end;
        for (ObjectIterator it(minibosssamufloorcheck_1877_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+2);
        }
    }
    event_2072_31_end: ;
}
void Frames::event_func_7484()
{
    // event 2075_31
    {
        if (!(group_main_engine_1)) goto event_2075_31_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2075_31_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-16);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2075_31_end: ;
}
void Frames::event_func_7485()
{
    // event 2076_31
    {
        if (!(group_main_engine_1)) goto event_2076_31_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2076_31_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2)*16*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_direction(24);
        }
        FrameObject * single_instance_2076_31_0; single_instance_2076_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrapidbullet_1834_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectwarning_1513(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2076_31_0 == NULL)
                    single_instance_2076_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2076_31_0))->set_y(((Active*)get_instance(npcserpentine_947_instances))->alterables->values.get(9)+50);
        ((Active*)((Active*)single_instance_2076_31_0))->set_visible(true);
    }
    event_2076_31_end: ;
}
void Frames::event_func_7486()
{
    // event 2077_31
    {
        if (!(group_main_engine_1)) goto event_2077_31_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_2077_31_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-32);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_2077_31_end: ;
}
void Frames::event_func_7487()
{
    // event 2078_31
    {
        if (!(group_main_engine_1)) goto event_2078_31_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_2078_31_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+32);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_2078_31_end: ;
}
void Frames::event_func_7488()
{
    // event 2079_31
    {
        if (!(group_main_engine_1)) goto event_2079_31_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2079_31_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16);
        }
    }
    event_2079_31_end: ;
}
void Frames::event_func_7489()
{
    // event 2080_31
    {
        if (!(group_main_engine_1)) goto event_2080_31_end;
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossrapidbullet_1834_instances.has_selection()) goto event_2080_31_end;
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_2080_31_0; single_instance_2080_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossrapidbullet_1834_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2080_31_0 == NULL)
                    single_instance_2080_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2080_31_0))->set_angle(randrange(4)*90, 0);
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_2080_31_end: ;
}
void Frames::event_func_7490()
{
    // event 2082_31
    {
        if (!(group_main_engine_1)) goto event_2082_31_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_2082_31_end: ;
}
void Frames::event_func_7491()
{
    // event 2083_31
    {
        if (!(group_main_engine_1)) goto event_2083_31_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_2083_31_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2083_31_end: ;
}
void Frames::event_func_7492()
{
    // event 2086_31
    {
        if (!(group_main_engine_1)) goto event_2086_31_end;
        shieldserpentine_1868_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(shieldserpentine_1868_instances, playercharactersensor_383_instances)) goto event_2086_31_end;
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!shieldserpentine_1868_instances.has_selection()) goto event_2086_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2086_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2086_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
    }
    event_2086_31_end: ;
}
void Frames::event_func_7493()
{
    // event 2087_31
    {
        if (!(group_main_engine_1)) goto event_2087_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2087_31_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.5, 12));
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_2087_31_end: ;
}
void Frames::event_func_7494()
{
    // event 2088_31
    {
        if (!(group_main_engine_1)) goto event_2088_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2088_31_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.5, -12));
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_2088_31_end: ;
}
void Frames::event_func_7495()
{
    // event 2089_31
    {
        if (!(group_main_engine_1)) goto event_2089_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()+4))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2089_31_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
        }
    }
    event_2089_31_end: ;
}
void Frames::event_func_7496()
{
    // event 2090_31
    {
        if (!(group_main_engine_1)) goto event_2090_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()-4))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2090_31_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_2090_31_end: ;
}
void Frames::event_func_7497()
{
    // event 2091_31
    {
        if (!(group_main_engine_1)) goto event_2091_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2091_31_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_2091_31_end: ;
}
void Frames::event_func_7498()
{
    // event 2094_31
    {
        if (!(group_main_engine_1)) goto event_2094_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (45))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2094_31_end;
        FrameObject * single_instance_2094_31_0; single_instance_2094_31_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossmissile_1835_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2094_31_0 == NULL)
                    single_instance_2094_31_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2094_31_0))->set_x(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->get_x()+sin_deg(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->alterables->values.get(4)*132)*(8+sin_deg(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->alterables->values.get(4)*2)*40));
        ((Active*)((Active*)single_instance_2094_31_0))->set_y(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->get_y()-sin_deg(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->alterables->values.get(4)*5)*80);
        ((Active*)((Active*)single_instance_2094_31_0))->force_speed(30+cos_deg(((Active*)get_single(bossmissile_1835_instances, default_active_instance))->alterables->values.get(4)*143)*10);
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->force_animation(8);
        }
    }
    event_2094_31_end: ;
}
void Frames::event_func_7499()
{
    // event 2095_31
    {
        if (!(group_main_engine_1)) goto event_2095_31_end;
        bossmissile_1835_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossmissile_1835_instances, playercharactersensor_383_instances)) goto event_2095_31_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (30))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2095_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2095_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_2095_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2095_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
    }
    event_2095_31_end: ;
}
void Frames::event_func_7500()
{
    // event 2096_31
    {
        if (!(group_main_engine_1)) goto event_2096_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (45))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2096_31_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2096_31_end: ;
}
void Frames::event_func_7501()
{
    // event 2097_31
    {
        if (!(group_main_engine_1)) goto event_2097_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()-32))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2097_31_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2097_31_end: ;
}
void Frames::event_func_7502()
{
    // event 2098_31
    {
        if (!(group_main_engine_1)) goto event_2098_31_end;
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()+32))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2098_31_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2098_31_end: ;
}
void Frames::event_func_7503()
{
    // event 2100_31
    {
        if (!(group_main_engine_1)) goto event_2100_31_end;
        minibossflame_1199_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossflame_1199_instances, playercharactersensor_383_instances)) goto event_2100_31_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_2100_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2100_31_end;
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) < (8))) { it.deselect(); continue; }
        }
        if (!minibossflame_1199_instances.has_selection()) goto event_2100_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_2100_31_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2100_31_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_2100_31_end: ;
}
void Frames::event_func_7504()
{
    // event 2308_31
    {
        if (!(group_pause_1)) goto event_2308_31_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2308_31_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2308_31_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2308_31_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2308_31_end;
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
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
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
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        strobelight_1840_instances.clear_selection();
        for (ObjectIterator it(strobelight_1840_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->stop_animation();
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcserpentine_947_instances))->stop_animation();
        fireworkparticle_1622_instances.clear_selection();
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->advance_movement(+1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
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
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        ((Active*)get_instance(effectwarning2_1864_instances))->stop_animation();
        gachaponfront_1859_instances.clear_selection();
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        largesign3_1794_instances.clear_selection();
        for (ObjectIterator it(largesign3_1794_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bgstar_4_instances.clear_selection();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        largesign2_1636_instances.clear_selection();
        for (ObjectIterator it(largesign2_1636_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        flag_1739_instances.clear_selection();
        for (ObjectIterator it(flag_1739_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(signyield_1738_instances))->stop_animation();
        ((Active*)get_instance(signstop_1716_instances))->stop_animation();
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2308_31_end: ;
}
void Frames::event_func_7505()
{
    // event 2309_31
    bool or_result_2309_31 = false;
    bool or_temp_result_2309_31_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2309_31_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2309_31_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2309_31_0_end;
        or_result_2309_31 = true;
        or_temp_result_2309_31_0 = true;
    }
    or_event_2309_31_0_end: ;
    // event 2309_31
    bool or_temp_result_2309_31_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2309_31_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2309_31_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2309_31_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2309_31_1_end;
        or_result_2309_31 = true;
        or_temp_result_2309_31_1 = true;
        or_event_2309_31_1_end: ;
        if (!or_result_2309_31) goto or_final_or_event_2309_31_1_end;
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
        pigeon_1724_instances.clear_selection();
        for (ObjectIterator it(pigeon_1724_instances); !it.end(); ++it) {
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
        floatinglantern_1829_instances.clear_selection();
        for (ObjectIterator it(floatinglantern_1829_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        strobelight_1840_instances.clear_selection();
        for (ObjectIterator it(strobelight_1840_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->start_animation();
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcserpentine_947_instances))->start_animation();
        fireworkparticle_1622_instances.clear_selection();
        for (ObjectIterator it(fireworkparticle_1622_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->advance_movement(-1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
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
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        ((Active*)get_instance(effectwarning2_1864_instances))->start_animation();
        gachaponfront_1859_instances.clear_selection();
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        largesign3_1794_instances.clear_selection();
        for (ObjectIterator it(largesign3_1794_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bgstar_4_instances.clear_selection();
        for (ObjectIterator it(bgstar_4_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        largesign2_1636_instances.clear_selection();
        for (ObjectIterator it(largesign2_1636_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        flag_1739_instances.clear_selection();
        for (ObjectIterator it(flag_1739_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossufo2_1764_instances.clear_selection();
        for (ObjectIterator it(minibossufo2_1764_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemylaser_1626_instances.clear_selection();
        for (ObjectIterator it(enemylaser_1626_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(signyield_1738_instances))->start_animation();
        ((Active*)get_instance(signstop_1716_instances))->start_animation();
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2309_31_1_end: ;
}
void Frames::event_func_7506()
{
    // event 2324_31
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2324_31_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2324_31_end;
        if (not_always_2324_31 > loop_count) {
            not_always_2324_31 = loop_count + 2;
            goto event_2324_31_end;
        }
        not_always_2324_31 = loop_count + 2;
            group_main_engine_1 = false;
    
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
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        strobelight_1840_instances.clear_selection();
        for (ObjectIterator it(strobelight_1840_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->stop_animation();
        ((Active*)get_instance(npcserpentine_947_instances))->stop_animation();
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(effectwarning2_1864_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
    }
    event_2324_31_end: ;
}
void Frames::event_func_7507()
{
    // event 2325_31
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2325_31_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2325_31_end;
        if (not_always_2325_31 > loop_count) {
            not_always_2325_31 = loop_count + 2;
            goto event_2325_31_end;
        }
        not_always_2325_31 = loop_count + 2;
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
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
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
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        strobelight_1840_instances.clear_selection();
        for (ObjectIterator it(strobelight_1840_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(minibossufobeam_1721_instances))->start_animation();
        ((Active*)get_instance(npcserpentine_947_instances))->start_animation();
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemytrafficle_1717_instances.clear_selection();
        for (ObjectIterator it(enemytrafficle_1717_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossmissile_1835_instances.clear_selection();
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(effectwarning2_1864_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
    }
    event_2325_31_end: ;
}
void Frames::handle_frame_32_events()
{
    test_collisions_31();
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
    event_func_6749();
    event_func_6752();
    event_func_6835();
    event_func_7306();
    event_func_7309();
    event_func_7311();
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
    event_func_2771();
    event_func_2772();
    event_func_2773();
    event_func_2774();
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
    event_func_6054();
    event_func_6055();
    event_func_2780();
    event_func_6056();
    event_func_3727();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_2782();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_6958();
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
    event_func_6959();
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
    event_func_6960();
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
    event_func_3730();
    event_func_6057();
    event_func_2425();
    event_func_3732();
    event_func_3733();
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
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4541();
    event_func_4542();
    event_func_7080();
    event_func_4545();
    event_func_7081();
    event_func_7082();
    event_func_7083();
    event_func_7084();
    event_func_7085();
    event_func_4922();
    event_func_7086();
    event_func_7087();
    event_func_7088();
    event_func_7089();
    event_func_7090();
    event_func_7091();
    event_func_7092();
    event_func_7093();
    event_func_7094();
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
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_6067();
    event_func_6068();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_5399();
    event_func_7095();
    event_func_5401();
    event_func_7096();
    event_func_6666();
    event_func_6680();
    event_func_6681();
    event_func_7097();
    event_func_7098();
    event_func_6683();
    event_func_6684();
    event_func_6685();
    event_func_6686();
    event_func_6687();
    event_func_6688();
    event_func_6689();
    event_func_6690();
    event_func_6691();
    event_func_6692();
    event_func_6693();
    event_func_7099();
    event_func_7100();
    event_func_6696();
    event_func_6697();
    event_func_6698();
    event_func_6699();
    event_func_6700();
    event_func_6701();
    event_func_7101();
    event_func_7102();
    event_func_7103();
    event_func_7104();
    event_func_7105();
    event_func_7106();
    event_func_7107();
    event_func_7108();
    event_func_7109();
    event_func_7110();
    event_func_7111();
    event_func_6735();
    event_func_6736();
    event_func_6737();
    event_func_6738();
    event_func_6992();
    event_func_6993();
    event_func_6994();
    event_func_6995();
    event_func_6996();
    event_func_6997();
    event_func_7112();
    event_func_7113();
    event_func_7114();
    event_func_7115();
    event_func_7116();
    event_func_7117();
    event_func_7118();
    event_func_7119();
    event_func_7120();
    event_func_7121();
    event_func_7122();
    event_func_7123();
    event_func_7124();
    event_func_7125();
    event_func_7126();
    event_func_7127();
    event_func_7128();
    event_func_7129();
    event_func_7130();
    event_func_7131();
    event_func_7132();
    event_func_7133();
    event_func_7134();
    event_func_7135();
    event_func_6986();
    event_func_7136();
    event_func_6988();
    event_func_6989();
    event_func_6990();
    event_func_6991();
    event_func_7137();
    event_func_7138();
    event_func_7139();
    event_func_6671();
    event_func_7140();
    event_func_6739();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_6740();
    event_func_6741();
    event_func_6742();
    event_func_6743();
    event_func_6744();
    event_func_6745();
    event_func_6746();
    event_func_6747();
    event_func_6748();
    event_func_6750();
    event_func_6751();
    event_func_6753();
    event_func_6754();
    event_func_6755();
    event_func_6756();
    event_func_6757();
    event_func_6758();
    event_func_6759();
    event_func_6760();
    event_func_6761();
    event_func_6762();
    event_func_6763();
    event_func_6764();
    event_func_6765();
    event_func_6766();
    event_func_6767();
    event_func_6998();
    event_func_6769();
    event_func_6770();
    event_func_6771();
    event_func_6772();
    event_func_6773();
    event_func_6774();
    event_func_6775();
    event_func_6776();
    event_func_6777();
    event_func_6778();
    event_func_6779();
    event_func_6780();
    event_func_6781();
    event_func_6782();
    event_func_6783();
    event_func_6784();
    event_func_6785();
    event_func_6786();
    event_func_6787();
    event_func_6788();
    event_func_6789();
    event_func_6790();
    event_func_6791();
    event_func_6792();
    event_func_6793();
    event_func_6794();
    event_func_6795();
    event_func_6796();
    event_func_6797();
    event_func_6798();
    event_func_6799();
    event_func_6800();
    event_func_6801();
    event_func_6802();
    event_func_6803();
    event_func_6804();
    event_func_6805();
    event_func_6806();
    event_func_6807();
    event_func_6808();
    event_func_6809();
    event_func_6810();
    event_func_6811();
    event_func_6812();
    event_func_6999();
    event_func_7000();
    event_func_7001();
    event_func_7002();
    event_func_7003();
    event_func_7004();
    event_func_7005();
    event_func_7006();
    event_func_7007();
    event_func_7008();
    event_func_7009();
    event_func_7010();
    event_func_7011();
    event_func_7012();
    event_func_7013();
    event_func_7014();
    event_func_7015();
    event_func_7016();
    event_func_7017();
    event_func_7018();
    event_func_7019();
    event_func_7020();
    event_func_7021();
    event_func_7022();
    event_func_7023();
    event_func_7024();
    event_func_7025();
    event_func_7026();
    event_func_7027();
    event_func_7028();
    event_func_7029();
    event_func_7030();
    event_func_7031();
    event_func_7032();
    event_func_7033();
    event_func_7034();
    event_func_7035();
    event_func_7036();
    event_func_2996();
    event_func_5708();
    event_func_7141();
    if (!group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1) goto group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1_end;
    event_func_7142();
    event_func_7143();
    event_func_7144();
    event_func_7145();
    event_func_7146();
    event_func_7147();
    event_func_7148();
    event_func_7149();
    event_func_7150();
    event_func_7151();
    event_func_7152();
    event_func_7153();
    event_func_7154();
    event_func_7155();
    event_func_7156();
    group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1_end: ;
    event_func_7157();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_7158();
    if (!group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1) goto group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1_end;
    event_func_7159();
    event_func_7160();
    event_func_7161();
    event_func_7162();
    event_func_7163();
    event_func_7164();
    event_func_7165();
    event_func_7166();
    event_func_7167();
    event_func_7168();
    event_func_7169();
    event_func_7170();
    event_func_7171();
    event_func_7172();
    event_func_7173();
    event_func_7174();
    event_func_7175();
    event_func_7176();
    event_func_7177();
    event_func_7178();
    event_func_7179();
    event_func_7180();
    event_func_7181();
    event_func_7182();
    event_func_7183();
    event_func_7184();
    event_func_7185();
    if (!group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1) goto group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1_end;
    event_func_7186();
    event_func_7187();
    event_func_7188();
    event_func_7189();
    event_func_7190();
    event_func_7191();
    event_func_7192();
    event_func_7193();
    event_func_7194();
    event_func_7195();
    event_func_7196();
    event_func_7197();
    event_func_7198();
    event_func_7199();
    event_func_7200();
    event_func_7201();
    event_func_7202();
    group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1_end: ;
    event_func_7203();
    if (!group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1) goto group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1_end;
    event_func_7204();
    event_func_7205();
    event_func_7206();
    event_func_7207();
    event_func_7208();
    event_func_7209();
    event_func_7210();
    event_func_7211();
    event_func_7212();
    event_func_7213();
    event_func_7214();
    event_func_7215();
    event_func_7216();
    event_func_7217();
    event_func_7218();
    event_func_7219();
    event_func_7220();
    group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1_end: ;
    event_func_7221();
    group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1_end: ;
    event_func_6819();
    event_func_6820();
    event_func_6821();
    event_func_6822();
    event_func_6823();
    event_func_6824();
    event_func_6825();
    event_func_6826();
    event_func_6827();
    event_func_6828();
    event_func_6829();
    event_func_6830();
    event_func_6831();
    event_func_6832();
    event_func_6833();
    event_func_6834();
    event_func_7222();
    if (!group_main_engine_level_specific_methods_floating_lanterns_1) goto group_main_engine_level_specific_methods_floating_lanterns_1_end;
    event_func_7223();
    event_func_7039();
    event_func_7040();
    event_func_7041();
    event_func_7042();
    event_func_7043();
    event_func_7044();
    event_func_7045();
    event_func_7046();
    event_func_7047();
    event_func_7048();
    event_func_7049();
    event_func_7050();
    event_func_7051();
    event_func_7052();
    event_func_7053();
    group_main_engine_level_specific_methods_floating_lanterns_1_end: ;
    event_func_6837();
    event_func_7224();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_ufo_1) goto group_main_engine_level_specific_methods_bosses_miniboss_ufo_1_end;
    event_func_6840();
    event_func_6841();
    event_func_6842();
    event_func_6843();
    event_func_6844();
    event_func_6845();
    event_func_6846();
    event_func_7225();
    event_func_7226();
    event_func_7227();
    event_func_7228();
    event_func_6859();
    event_func_6860();
    event_func_6861();
    event_func_7229();
    event_func_7230();
    event_func_7231();
    event_func_7232();
    event_func_7233();
    event_func_7234();
    event_func_7235();
    event_func_7236();
    event_func_7237();
    event_func_7238();
    event_func_7239();
    event_func_7240();
    group_main_engine_level_specific_methods_bosses_miniboss_ufo_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1) goto group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1_end;
    event_func_7241();
    event_func_7242();
    event_func_7243();
    group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1) goto group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1_end;
    event_func_7244();
    event_func_7245();
    event_func_7246();
    event_func_7247();
    group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1_end: ;
    event_func_7248();
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_1_end;
    event_func_7249();
    event_func_7250();
    event_func_7251();
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1_end;
    event_func_7252();
    event_func_7253();
    event_func_7254();
    event_func_7255();
    event_func_7256();
    event_func_7257();
    event_func_7258();
    event_func_7259();
    event_func_7260();
    event_func_7261();
    event_func_7262();
    event_func_7263();
    event_func_7264();
    event_func_7265();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1_end;
    event_func_7266();
    event_func_7267();
    event_func_7268();
    event_func_7269();
    event_func_7270();
    event_func_7271();
    event_func_7272();
    event_func_7273();
    event_func_7274();
    event_func_7275();
    event_func_7276();
    event_func_7277();
    event_func_7278();
    event_func_7279();
    event_func_7280();
    event_func_7281();
    event_func_7282();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1_end;
    event_func_7283();
    event_func_7284();
    event_func_7285();
    event_func_7286();
    event_func_7287();
    event_func_7288();
    event_func_7289();
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1_end;
    event_func_7290();
    event_func_7291();
    event_func_7292();
    event_func_7293();
    event_func_7294();
    event_func_7295();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1_end: ;
    event_func_7296();
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1_end;
    event_func_7297();
    event_func_7298();
    event_func_7299();
    event_func_7300();
    event_func_7301();
    event_func_7302();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1_end: ;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1_end;
    event_func_7303();
    event_func_7304();
    event_func_7305();
    event_func_7307();
    event_func_7308();
    event_func_7310();
    event_func_7312();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1_end;
    event_func_7313();
    event_func_7314();
    event_func_7315();
    event_func_7316();
    event_func_7317();
    event_func_7318();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1_end: ;
    event_func_7319();
    event_func_7320();
    event_func_7321();
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1_end;
    event_func_7322();
    event_func_7323();
    event_func_7324();
    event_func_7325();
    event_func_7326();
    event_func_7327();
    event_func_7328();
    event_func_7329();
    event_func_7330();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_floor_check_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_floor_check_1_end;
    event_func_7331();
    event_func_7332();
    event_func_7331();
    event_func_7332();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_floor_check_1_end: ;
    event_func_7333();
    event_func_7334();
    event_func_7335();
    event_func_7336();
    event_func_7337();
    event_func_7338();
    event_func_7339();
    event_func_7340();
    event_func_7341();
    event_func_7342();
    event_func_7343();
    event_func_7344();
    event_func_7345();
    event_func_7346();
    event_func_7347();
    event_func_7348();
    event_func_7349();
    event_func_7350();
    event_func_7351();
    event_func_7352();
    event_func_7353();
    event_func_7354();
    event_func_7355();
    event_func_7356();
    event_func_7357();
    event_func_7358();
    event_func_7359();
    if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1) goto group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1_end;
    event_func_7360();
    event_func_7361();
    event_func_7362();
    event_func_7363();
    event_func_7364();
    event_func_7365();
    event_func_7366();
    event_func_7367();
    event_func_7368();
    event_func_7369();
    event_func_7370();
    event_func_7371();
    event_func_7372();
    event_func_7373();
    event_func_7374();
    event_func_7375();
    event_func_7376();
    event_func_7377();
    event_func_7378();
    event_func_7379();
    event_func_7380();
    event_func_7381();
    event_func_7382();
    event_func_7383();
    event_func_7384();
    event_func_7385();
    event_func_7386();
    event_func_7387();
    event_func_7388();
    event_func_7389();
    event_func_7390();
    group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1_end: ;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_1_end: ;
    event_func_7391();
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_1_end;
    event_func_7392();
    event_func_7393();
    event_func_7394();
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1_end;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1_end;
    event_func_7395();
    event_func_7396();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1_end;
    event_func_7397();
    event_func_7398();
    event_func_7399();
    event_func_7400();
    event_func_7401();
    event_func_7402();
    event_func_7403();
    event_func_7404();
    event_func_7405();
    event_func_7406();
    event_func_7407();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1_end;
    event_func_7408();
    event_func_7409();
    event_func_7410();
    event_func_7411();
    event_func_7412();
    event_func_7413();
    event_func_7414();
    event_func_7415();
    event_func_7416();
    event_func_7417();
    event_func_7418();
    event_func_7419();
    event_func_7420();
    event_func_7421();
    event_func_7422();
    event_func_7423();
    event_func_7424();
    event_func_7425();
    event_func_7426();
    event_func_7427();
    event_func_7428();
    event_func_7429();
    event_func_7430();
    event_func_7431();
    event_func_7432();
    event_func_7433();
    event_func_7434();
    event_func_7435();
    event_func_7436();
    event_func_7437();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1_end;
    event_func_7438();
    event_func_7439();
    event_func_7440();
    event_func_7441();
    event_func_7442();
    event_func_7443();
    event_func_7444();
    event_func_7445();
    event_func_7446();
    event_func_7447();
    event_func_7448();
    event_func_7449();
    event_func_7450();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1_end;
    event_func_7451();
    event_func_7452();
    event_func_7453();
    event_func_7454();
    event_func_7455();
    event_func_7456();
    event_func_7457();
    event_func_7458();
    event_func_7459();
    event_func_7460();
    event_func_7461();
    event_func_7462();
    event_func_7463();
    event_func_7464();
    event_func_7465();
    event_func_7466();
    event_func_7467();
    event_func_7468();
    event_func_7469();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1_end: ;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1_end: ;
    event_func_7470();
    if (!group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1) goto group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1_end;
    event_func_7471();
    event_func_7472();
    event_func_7473();
    event_func_7474();
    event_func_7475();
    event_func_7476();
    event_func_7477();
    event_func_7478();
    event_func_7479();
    event_func_7480();
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1_end: ;
    event_func_7481();
    event_func_7482();
    event_func_7483();
    event_func_7482();
    event_func_7483();
    group_main_engine_level_specific_methods_bosses_boss_samu_1_end: ;
    event_func_7484();
    event_func_7485();
    event_func_7486();
    event_func_7487();
    event_func_7488();
    event_func_7489();
    event_func_7490();
    event_func_7491();
    event_func_7492();
    event_func_7493();
    event_func_7494();
    event_func_7495();
    event_func_7496();
    event_func_7497();
    event_func_7498();
    event_func_7499();
    event_func_7500();
    event_func_7501();
    event_func_7502();
    event_func_5505();
    event_func_7503();
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
    event_func_3965();
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
    event_func_6935();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_7504();
    event_func_7505();
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
    event_func_4314();
    event_func_7506();
    event_func_7507();
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
void Frames::handle_frame_32_pre_events()
{
}
void Frames::event_func_7508()
{
    // event 3_31
    {
        if (!(group_main_engine_1)) goto event_3_31_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 36);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 14);
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_3_31_end: ;
}
void Frames::event_func_7509()
{
    // event 1470_31
    {
        if (!(group_main_engine_1)) goto event_1470_31_end;
        strobelight_1840_instances.clear_selection();
        spread_value(strobelight_1840_instances, 0, 0);
        for (ObjectIterator it(strobelight_1840_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*130);
            ((Active*)*it)->set_scale(32);
        }
    }
    event_1470_31_end: ;
}
void Frames::event_func_7510()
{
    // event 1523_31
    {
        if (!(group_main_engine_1)) goto event_1523_31_end;
        gimmickdragontunnel1_1845_instances.clear_selection();
        spread_value(gimmickdragontunnel1_1845_instances, 4, 0);
        for (ObjectIterator it(gimmickdragontunnel1_1845_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*35);
            ((Active*)*it)->alterables->values.set(16, ((Active*)*it)->alterables->values.get(4));
        }
        gimmickdragontunnelhead_1638_instances.clear_selection();
        spread_value(gimmickdragontunnelhead_1638_instances, 0, 1);
        spread_value(gimmickdragontunnel1_1845_instances, 17, 0);
        for (ObjectIterator it(gimmickdragontunnelhead_1638_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*13-1);
        }
        spread_value(gimmickdragontunnelhead_1638_instances, 1, 0);
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        spread_value(gimmickdragontunnelmask1_1780_instances, 0, 0);
        for (ObjectIterator it(gimmickdragontunnelmask1_1780_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)%math_helper%9);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1523_31_end: ;
}
void Frames::event_func_7511()
{
    // event 1821_31
    {
        if (!(group_main_engine_1)) goto event_1821_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1821_31_end;
        if (!group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1) {
            group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1 = true;
        }
        minibosssamulefthand_1874_instances.clear_selection();
        for (ObjectIterator it(minibosssamulefthand_1874_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosssamurighthand_1875_instances.clear_selection();
        for (ObjectIterator it(minibosssamurighthand_1875_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosssamu_1876_instances.clear_selection();
        for (ObjectIterator it(minibosssamu_1876_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosssamufloorcheck_1877_instances.clear_selection();
        for (ObjectIterator it(minibosssamufloorcheck_1877_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibosssamuwheel_1873_instances.clear_selection();
        for (ObjectIterator it(minibosssamuwheel_1873_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(1.5);
        }
    }
    event_1821_31_end: ;
}
void Frames::event_func_7512()
{
    // event 1826_31
    {
        if (!(group_main_engine_1)) goto event_1826_31_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (0))) goto event_1826_31_end;
        if (!group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1) {
            group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1 = true;
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossserpfloorcheck_1866_instances.clear_selection();
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        enemysuperturretus_1828_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(bossserphitbox_1867_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysuperturretus_1828(parent->x + 0, parent->y + 0), parent->layer);
                enemysuperturretus_1828_instances.add_back();
            }
        }
        // select single: false true true
        for (ObjectIterator p_it(bossserpfloorcheck_1866_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemysuperturretus_1828(parent->x + 0, parent->y + 0), parent->layer);
                enemysuperturretus_1828_instances.add_back();
            }
        }
        cameralimitbossbottom_420_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1424);
        }
        cameralimitbossleft_421_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossleft_421_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosssamu_1876_instances, it.current_index, default_active_instance))->get_x()-(((Active*)get_instance(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(17)+240));
        }
        cameralimitbossright_422_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossright_422_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(minibosssamu_1876_instances, it.current_index, default_active_instance))->get_x()+(((Active*)get_instance(minibosssamu_1876_instances, it.current_index, default_active_instance))->alterables->values.get(17)+240));
        }
        for (ObjectIterator it(enemysuperturretus_1828_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
        }
    }
    event_1826_31_end: ;
}
void Frames::on_frame_32_start_events()
{
    event_func_4133();
    event_func_3265();
    event_func_7508();
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
    event_func_6939();
    event_func_6940();
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
    event_func_3272();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_5881();
    event_func_6941();
    event_func_6943();
    event_func_7509();
    event_func_7510();
    event_func_6945();
    event_func_7061();
    event_func_7062();
    event_func_2686();
    event_func_2687();
    event_func_7511();
    event_func_7512();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_7063();
    event_func_4145();
    event_func_4146();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_32_init()
{
    index = 31;
    width = 15104;
    height = 1864;
    virtual_width = 15104;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &goldplatform1_1735_instances, &goldplatform2_1736_instances, &goldplatform3_1737_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &gimmickdragontunnelmask1_1780_instances, &gimmickdragontunnel1_1845_instances, NULL};
    qualifier_8.set(18, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &goldplatform1_1735_instances, &goldplatform2_1736_instances, &goldplatform3_1737_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &hazardspikesup_558_instances, &gimmickdragontunnelmask1_1780_instances, &gimmickdragontunnel1_1845_instances, NULL};
    qualifier_9.set(41, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemytrafficle1_1757_instances, &enemytrafficle2_1758_instances, &enemytrafficle3_1759_instances, &minibossufo_1763_instances, &lamppostfront_1778_instances, &enemycoilhead_1782_instances, &enemyflarecannon_1820_instances, &enemysuperturretus_1828_instances, &bossserphitbox_1867_instances, &minibosssamu_1876_instances, NULL};
    qualifier_20.set(10, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0a_1612_instances, &levelparallaxboat1_1613_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece5_510_instances, &levelparallaxcar_1619_instances, &levelparallaxpiece2_861_instances, NULL};
    qualifier_0.set(9, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmickrollingarchbase_1725_instances, &layer0loop2_1743_instances, &layer1loop2_1744_instances, &breakablewall_1748_instances, &breakablefloor1_1760_instances, &breakablefloor2_1761_instances, &hazardspikesup_558_instances, &gimmickverticalhalfpipe1_1821_instances, &gimmickverticalhalfpipe4_1822_instances, &gimmickverticalhalfpipe3_1823_instances, &gimmickverticalhalfpipe6_1824_instances, &gimmickverticalhalfpipe2_1825_instances, &gimmickverticalhalfpipe5_1826_instances, &gimmickteetertotter_1827_instances, &ramp2_1856_instances, &layer0loop3_1857_instances, &largecolumn_1861_instances, &largecolumn2_1862_instances, &ramp1_1869_instances, &layer0block_1872_instances, &bossgate_1878_instances, NULL};
    qualifier_7.set(47, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemysuperturretus_1828_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidleswitch_1257_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&objectchair_522_instances, NULL};
    qualifier_22.set(1, &qualifier_22_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &layer0loop2_1743_instances, &layer0loop3_1857_instances, &layer0block_1872_instances, NULL};
    qualifier_10.set(6, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &layer1loop2_1744_instances, NULL};
    qualifier_11.set(4, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &gimmickdragontunnel1_1845_instances, NULL};
    qualifier_13.set(6, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0a_1612(0, 0), 0);
    add_background_object(create_levelparallaxboat1_1613(0, 120), 0);
    add_background_object(create_levelparallaxpiece1_1614(0, 96), 0);
    add_background_object(create_levelparallaxpiece3_1615(0, 152), 0);
    add_background_object(create_levelparallaxpiece2_1616(0, 208), 0);
    add_background_object(create_levelparallaxpiece4_1617(0, 264), 0);
    add_background_object(create_levelparallaxpiece5_1618(0, 352), 0);
    add_background_object(create_levelparallaxcar_1619(0, 656), 0);
    add_background_object(create_levelparallaxpiece2_1620(0, 664), 0);
    add_object(create_bgstar_4(177, 41), 0);
    add_object(create_bgstar_4(129, 33), 0);
    add_object(create_bgstar_4(201, 17), 0);
    add_object(create_bgstar_4(97, 49), 0);
    add_object(create_bgstar_4(25, 57), 0);
    add_object(create_bgstar_4(281, 41), 0);
    add_object(create_bgstar_4(225, 49), 0);
    add_object(create_bgstar_4(449, 33), 0);
    add_object(create_bgstar_4(433, 65), 0);
    add_object(create_bgstar_4(345, 57), 0);
    add_object(create_bgstar_4(385, 25), 0);
    add_object(create_bgstar_4(417, 49), 0);
    add_object(create_bgstar_4(65, 25), 0);
    add_object(create_bgstar_4(297, 25), 0);
    add_object(create_bgstar_4(161, 49), 0);
    add_object(create_bgstar_4(361, 49), 0);
    add_background_object(create_fnwall11_1627(2160, 584), 1);
    add_background_object(create_fnwall11_1627(2096, 584), 1);
    add_background_object(create_fnwall11_1627(2096, 712), 1);
    add_background_object(create_fnwall11_1627(2512, 776), 1);
    add_background_object(create_fnwall11_1627(2512, 584), 1);
    add_background_object(create_fnwall11_1627(2432, 840), 1);
    add_background_object(create_fnwall11_1627(2592, 840), 1);
    add_background_object(create_fnwall11_1627(2432, 648), 1);
    add_background_object(create_fnwall11_1627(2592, 648), 1);
    add_background_object(create_fnwall11_1627(2432, 584), 1);
    add_background_object(create_fnwall11_1627(2592, 584), 1);
    add_background_object(create_fnwall11_1627(2032, 776), 1);
    add_background_object(create_fnwall11_1627(2032, 584), 1);
    add_background_object(create_fnwall11_1627(1952, 840), 1);
    add_background_object(create_fnwall11_1627(2240, 840), 1);
    add_background_object(create_fnwall11_1627(1952, 648), 1);
    add_background_object(create_fnwall11_1627(2240, 648), 1);
    add_background_object(create_fnwall11_1627(1952, 584), 1);
    add_background_object(create_fnwall11_1627(2240, 584), 1);
    add_background_object(create_fnwall11_1627(2160, 776), 1);
    add_background_object(create_fnwall11_1627(2096, 840), 1);
    add_background_object(create_fnwall10_1628(2432, 776), 1);
    add_background_object(create_fnwall10_1628(2592, 776), 1);
    add_background_object(create_fnwall10_1628(2512, 840), 1);
    add_background_object(create_fnwall10_1628(2512, 712), 1);
    add_background_object(create_fnwall10_1628(2512, 904), 1);
    add_background_object(create_fnwall10_1628(1952, 776), 1);
    add_background_object(create_fnwall10_1628(2240, 776), 1);
    add_background_object(create_fnwall10_1628(2032, 840), 1);
    add_background_object(create_fnwall10_1628(2032, 712), 1);
    add_background_object(create_fnwall10_1628(2032, 904), 1);
    add_background_object(create_fnwall10_1628(2160, 712), 1);
    add_background_object(create_fnwall10_1628(2160, 904), 1);
    add_background_object(create_fnwall10_1628(2096, 776), 1);
    add_background_object(create_fnwall10_1628(2096, 648), 1);
    add_background_object(create_fnwall12_1629(2416, 840), 1);
    add_background_object(create_fnwall12_1629(2576, 840), 1);
    add_background_object(create_fnwall12_1629(2416, 712), 1);
    add_background_object(create_fnwall12_1629(2576, 712), 1);
    add_background_object(create_fnwall12_1629(2416, 584), 1);
    add_background_object(create_fnwall12_1629(2576, 584), 1);
    add_background_object(create_fnwall12_1629(1936, 840), 1);
    add_background_object(create_fnwall12_1629(2224, 840), 1);
    add_background_object(create_fnwall12_1629(1936, 712), 1);
    add_background_object(create_fnwall12_1629(2224, 712), 1);
    add_background_object(create_fnwall12_1629(1936, 584), 1);
    add_background_object(create_fnwall12_1629(2224, 584), 1);
    add_background_object(create_fnwall13_1630(2480, 840), 1);
    add_background_object(create_fnwall13_1630(2640, 840), 1);
    add_background_object(create_fnwall13_1630(2480, 712), 1);
    add_background_object(create_fnwall13_1630(2640, 712), 1);
    add_background_object(create_fnwall13_1630(2480, 584), 1);
    add_background_object(create_fnwall13_1630(2640, 584), 1);
    add_background_object(create_fnwall13_1630(2000, 840), 1);
    add_background_object(create_fnwall13_1630(2288, 840), 1);
    add_background_object(create_fnwall13_1630(2000, 712), 1);
    add_background_object(create_fnwall13_1630(2288, 712), 1);
    add_background_object(create_fnwall13_1630(2000, 584), 1);
    add_background_object(create_fnwall13_1630(2288, 584), 1);
    add_background_object(create_fnwall15_1631(2432, 584), 1);
    add_background_object(create_fnwall15_1631(2512, 584), 1);
    add_background_object(create_fnwall15_1631(2592, 584), 1);
    add_background_object(create_fnwall15_1631(1952, 584), 1);
    add_background_object(create_fnwall15_1631(2032, 584), 1);
    add_background_object(create_fnwall15_1631(2240, 584), 1);
    add_background_object(create_fnwall15_1631(2096, 584), 1);
    add_background_object(create_fnwall15_1631(2160, 584), 1);
    add_background_object(create_fngreenroof_1632(2608, 520), 1);
    add_background_object(create_fngreenroof_1632(2544, 520), 1);
    add_background_object(create_fngreenroof_1632(2480, 520), 1);
    add_background_object(create_fngreenroof_1632(2416, 520), 1);
    add_background_object(create_fngreenroof_1632(2256, 520), 1);
    add_background_object(create_fngreenroof_1632(2000, 520), 1);
    add_background_object(create_fngreenroof_1632(1936, 520), 1);
    add_background_object(create_fngreenroof_1632(2192, 520), 1);
    add_background_object(create_fngreenroof_1632(2128, 520), 1);
    add_background_object(create_fngreenroof_1632(2064, 520), 1);
    add_background_object(create_fnwall11_1627(2864, 776), 1);
    add_background_object(create_fnwall11_1627(2864, 584), 1);
    add_background_object(create_fnwall11_1627(2784, 840), 1);
    add_background_object(create_fnwall11_1627(2944, 840), 1);
    add_background_object(create_fnwall11_1627(2784, 648), 1);
    add_background_object(create_fnwall11_1627(2944, 648), 1);
    add_background_object(create_fnwall11_1627(2784, 584), 1);
    add_background_object(create_fnwall11_1627(2944, 584), 1);
    add_background_object(create_fnwall10_1628(2784, 776), 1);
    add_background_object(create_fnwall10_1628(2944, 776), 1);
    add_background_object(create_fnwall10_1628(2864, 840), 1);
    add_background_object(create_fnwall10_1628(2864, 712), 1);
    add_background_object(create_fnwall10_1628(2864, 904), 1);
    add_background_object(create_fnwall12_1629(2768, 840), 1);
    add_background_object(create_fnwall12_1629(2928, 840), 1);
    add_background_object(create_fnwall12_1629(2768, 712), 1);
    add_background_object(create_fnwall12_1629(2928, 712), 1);
    add_background_object(create_fnwall12_1629(2768, 584), 1);
    add_background_object(create_fnwall12_1629(2928, 584), 1);
    add_background_object(create_fnwall13_1630(2832, 840), 1);
    add_background_object(create_fnwall13_1630(2992, 840), 1);
    add_background_object(create_fnwall13_1630(2832, 712), 1);
    add_background_object(create_fnwall13_1630(2992, 712), 1);
    add_background_object(create_fnwall13_1630(2832, 584), 1);
    add_background_object(create_fnwall13_1630(2992, 584), 1);
    add_background_object(create_fnwall15_1631(2784, 584), 1);
    add_background_object(create_fnwall15_1631(2864, 584), 1);
    add_background_object(create_fnwall15_1631(2944, 584), 1);
    add_background_object(create_fngreenroof_1632(2960, 520), 1);
    add_background_object(create_fngreenroof_1632(2896, 520), 1);
    add_background_object(create_fngreenroof_1632(2832, 520), 1);
    add_background_object(create_fngreenroof_1632(2768, 520), 1);
    add_background_object(create_fnwall11_1627(2432, 968), 1);
    add_background_object(create_fnwall11_1627(2592, 968), 1);
    add_background_object(create_fnwall11_1627(1952, 968), 1);
    add_background_object(create_fnwall11_1627(2240, 968), 1);
    add_background_object(create_fnwall11_1627(2096, 968), 1);
    add_background_object(create_fnwall12_1629(2416, 968), 1);
    add_background_object(create_fnwall12_1629(2576, 968), 1);
    add_background_object(create_fnwall12_1629(1936, 968), 1);
    add_background_object(create_fnwall12_1629(2224, 968), 1);
    add_background_object(create_fnwall13_1630(2480, 968), 1);
    add_background_object(create_fnwall13_1630(2640, 968), 1);
    add_background_object(create_fnwall13_1630(2000, 968), 1);
    add_background_object(create_fnwall13_1630(2288, 968), 1);
    add_background_object(create_fnwall11_1627(2784, 968), 1);
    add_background_object(create_fnwall11_1627(2944, 968), 1);
    add_background_object(create_fnwall12_1629(2768, 968), 1);
    add_background_object(create_fnwall12_1629(2928, 968), 1);
    add_background_object(create_fnwall13_1630(2832, 968), 1);
    add_background_object(create_fnwall13_1630(2992, 968), 1);
    add_background_object(create_fnwall11_1627(2032, 968), 1);
    add_background_object(create_fnwall11_1627(2160, 968), 1);
    add_background_object(create_fnwall11_1627(2512, 968), 1);
    add_background_object(create_fnwall11_1627(2864, 968), 1);
    add_background_object(create_birchtree2_1838(4576, 960), 1);
    add_background_object(create_birchtree2_1838(4688, 960), 1);
    add_background_object(create_birchtree2_1838(4480, 960), 1);
    add_background_object(create_birchtree2_1838(4768, 960), 1);
    add_background_object(create_birchtree2_1838(4888, 960), 1);
    add_background_object(create_birchtree2_1838(5016, 960), 1);
    add_background_object(create_birchtree2_1838(5112, 960), 1);
    add_background_object(create_birchtree2_1838(4344, 960), 1);
    add_background_object(create_floor21_1839(4216, 1056), 1);
    add_background_object(create_floor21_1839(4312, 1056), 1);
    add_background_object(create_floor21_1839(4408, 1056), 1);
    add_background_object(create_floor21_1839(4504, 1056), 1);
    add_background_object(create_floor21_1839(4600, 1056), 1);
    add_background_object(create_floor21_1839(4696, 1056), 1);
    add_background_object(create_floor21_1839(4792, 1056), 1);
    add_background_object(create_floor21_1839(4888, 1056), 1);
    add_background_object(create_floor21_1839(4984, 1056), 1);
    add_background_object(create_floor21_1839(5080, 1056), 1);
    add_background_object(create_floor21_1839(5176, 1056), 1);
    add_background_object(create_floor21_1839(5272, 1056), 1);
    add_background_object(create_floor21_1839(5368, 1056), 1);
    add_background_object(create_floor21_1839(5464, 1056), 1);
    add_background_object(create_floor21_1839(5560, 1056), 1);
    add_background_object(create_floor21_1839(5656, 1056), 1);
    add_background_object(create_birchtree2_1838(5272, 960), 1);
    add_background_object(create_birchtree2_1838(5344, 960), 1);
    add_background_object(create_birchtree2_1838(5480, 960), 1);
    add_background_object(create_birchtree2_1838(5568, 960), 1);
    add_object(create_strobelight_1840(6257, 983), 1);
    add_object(create_strobelight_1840(6601, 975), 1);
    add_object(create_strobelight_1840(7065, 847), 1);
    add_object(create_strobelight_1840(7433, 655), 1);
    add_object(create_strobelight_1840(7825, 775), 1);
    add_object(create_strobelight_1840(8153, 623), 1);
    add_object(create_strobelight_1840(8497, 759), 1);
    add_object(create_fireworklauncher_1633(5064, 585), 1);
    add_object(create_fireworklauncher_1633(5184, 521), 1);
    add_object(create_fireworklauncher_1633(5328, 625), 1);
    add_object(create_fireworklauncher_1633(5560, 569), 1);
    add_object(create_fireworklauncher_1633(5408, 473), 1);
    add_object(create_fireworklauncher_1633(5640, 601), 1);
    add_object(create_strobelight_1840(9097, 1103), 1);
    add_object(create_strobelight_1840(9617, 903), 1);
    add_object(create_strobelight_1840(11433, 823), 1);
    add_object(create_strobelight_1840(11833, 903), 1);
    add_background_object(create_mallentrance4_1841(10960, 1336), 2);
    add_background_object(create_mallentrance4_1841(10960, 1216), 2);
    add_background_object(create_mallentrance4_1841(10960, 1096), 2);
    add_background_object(create_mallentrance4_1841(10960, 976), 2);
    add_background_object(create_fnapartmentwall1_1655(768, 1136), 2);
    add_background_object(create_fnapartmentwall1_1655(640, 1136), 2);
    add_background_object(create_fnapartmentwall2_1677(640, 1232), 2);
    add_background_object(create_fnwall21_1665(640, 1184), 2);
    add_background_object(create_fnapartmentwall1_1655(960, 1136), 2);
    add_background_object(create_fnapartmentwall2_1677(896, 1232), 2);
    add_background_object(create_fnwall21_1665(1008, 1184), 2);
    add_background_object(create_fnapartmentwall1_1655(832, 1136), 2);
    add_background_object(create_fnapartmentwindow_1656(704, 1136), 2);
    add_background_object(create_fnapartmentwindow_1656(896, 1136), 2);
    add_background_object(create_fnapartmentwall2_1677(768, 1232), 2);
    add_background_object(create_fnbackwall6_1648(768, 1184), 2);
    add_background_object(create_backwall2_1642(640, 1184), 2);
    add_background_object(create_fnbackwall4_1647(896, 1184), 2);
    add_background_object(create_fnbackwall1_1645(3968, 752), 2);
    add_background_object(create_fnbackwall1_1645(4096, 752), 2);
    add_background_object(create_fnbackwall4_1647(3968, 656), 2);
    add_background_object(create_mallentrance4_1841(10960, 848), 2);
    add_background_object(create_mallentrance4_1841(10960, 728), 2);
    add_background_object(create_mallentrance4_1841(10960, 608), 2);
    add_background_object(create_mallentrance4_1841(11232, 1336), 2);
    add_background_object(create_mallentrance4_1841(11232, 1216), 2);
    add_background_object(create_mallentrance4_1841(11232, 1096), 2);
    add_background_object(create_mallentrance4_1841(11232, 976), 2);
    add_background_object(create_mallentrance4_1841(11232, 848), 2);
    add_background_object(create_mallentrance4_1841(11232, 728), 2);
    add_background_object(create_mallentrance4_1841(11232, 608), 2);
    add_background_object(create_backwall2_1642(11264, 1184), 2);
    add_background_object(create_fnbackwall4_1647(10880, 1184), 2);
    add_background_object(create_fnbackwall1_1645(11008, 1280), 2);
    add_background_object(create_fnbackwall6_1648(10880, 1280), 2);
    add_background_object(create_fnbackwall6_1648(11136, 1280), 2);
    add_background_object(create_fnbackwall6_1648(11264, 1280), 2);
    add_background_object(create_fnbackwall4_1647(4864, 480), 2);
    add_background_object(create_fnbackwall3_1663(4736, 576), 2);
    add_background_object(create_fnbackwall5_1643(4864, 576), 2);
    add_background_object(create_fnbackwall3_1663(4992, 576), 2);
    add_background_object(create_backwall2_1642(4992, 480), 2);
    add_background_object(create_fnbackwall5_1643(5120, 576), 2);
    add_background_object(create_fnbackwall3_1663(5248, 576), 2);
    add_background_object(create_fnbackwall4_1647(5376, 480), 2);
    add_background_object(create_fnbackwall5_1643(5376, 576), 2);
    add_background_object(create_backwall2_1642(5120, 384), 2);
    add_background_object(create_fnbackwall1_1645(5120, 480), 2);
    add_background_object(create_fnbackwall4_1647(5248, 384), 2);
    add_background_object(create_fnbackwall1_1645(5248, 480), 2);
    add_object(create_minibossufohatch1_1722(1793, 424), 2);
    add_object(create_minibossufohatch2_1723(1792, 424), 2);
    add_object(create_paperlantern_527(1232, 880), 2);
    add_object(create_paperlantern_527(1120, 944), 2);
    add_object(create_gimmickhangingswitch_1842(911, 1168), 2);
    add_object(create_gimmickhangingswitch_1842(815, 872), 2);
    add_object(create_gimmickhangingswitch_1842(4247, 272), 2);
    add_object(create_gachaponwheel_1843(832, 1247), 2);
    add_object(create_gachaponwheel_1843(736, 951), 2);
    add_object(create_gachaponwheel_1843(4168, 351), 2);
    add_object(create_paperlantern_527(1056, 880), 2);
    add_object(create_paperlantern_527(1120, 888), 2);
    add_object(create_minibossufo2_1764(1892, 424), 2);
    add_object(create_minibossufo2_1764(1916, 424), 2);
    add_object(create_minibossufo2_1764(1940, 424), 2);
    add_object(create_minibossufo2_1764(1964, 424), 2);
    add_object(create_minibossufo_1763(1792, 424), 2);
    add_object(create_paperlantern_527(5768, 1200), 2);
    add_object(create_paperlantern_527(5464, 1104), 2);
    add_object(create_paperlantern_527(4456, 1104), 2);
    add_object(create_largesign3_1844(5656, 744), 2);
    add_object(create_largesign3_1844(5720, 544), 2);
    add_object(create_largesign3_1844(5784, 744), 2);
    add_object(create_largesign3_1844(4312, 560), 2);
    add_object(create_largesign3_1844(4464, 480), 2);
    add_object(create_largesign3_1844(3928, 600), 2);
    add_object(create_largesign3_1844(11768, 184), 2);
    add_object(create_largesign3_1844(12024, 184), 2);
    add_object(create_largesign3_1844(6104, 248), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnel1_1845(4808, 536), 2);
    add_object(create_gimmickdragontunnelhead_1638(4808, 540), 2);
    add_object(create_largesign3_1844(13456, 184), 2);
    add_object(create_largesign3_1844(13336, 184), 2);
    add_background_object(create_fnredcolumnback_1646(13280, 600), 3);
    add_background_object(create_ferriswheelbase2_1644(13264, 704), 3);
    add_background_object(create_ferriswheelbase2_1644(9040, 552), 3);
    add_background_object(create_ferriswheelbase2_1644(8976, 552), 3);
    add_background_object(create_fnbackwall6_1648(9472, 752), 3);
    add_background_object(create_fnbackwall4_1647(9472, 656), 3);
    add_background_object(create_fnfloor8_1649(8832, 176), 3);
    add_background_object(create_fnbackwall4_1647(9344, 128), 3);
    add_background_object(create_fnbackwall6_1648(9216, 224), 3);
    add_background_object(create_fnbackwall4_1647(9600, 320), 3);
    add_background_object(create_fnbackwall6_1648(9472, 320), 3);
    add_background_object(create_fnbackwall6_1648(9344, 224), 3);
    add_background_object(create_fnbackwall5_1643(9088, 224), 3);
    add_background_object(create_fnbackwall6_1648(10496, 512), 3);
    add_background_object(create_fnbackwall6_1648(10368, 512), 3);
    add_background_object(create_fnbackwall6_1648(10624, 704), 3);
    add_background_object(create_fnbackwall6_1648(9728, 416), 3);
    add_background_object(create_fnbackwall6_1648(9856, 416), 3);
    add_background_object(create_fnbackwall1_1645(9856, 608), 3);
    add_background_object(create_fnbackwall6_1648(9856, 512), 3);
    add_background_object(create_fnbackwall6_1648(10496, 608), 3);
    add_background_object(create_fnbackwall6_1648(10624, 608), 3);
    add_background_object(create_fnbackwall1_1645(10368, 608), 3);
    add_background_object(create_fnbackwall6_1648(9856, 704), 3);
    add_background_object(create_fnbackwall6_1648(9984, 704), 3);
    add_background_object(create_fnbackwall6_1648(10112, 704), 3);
    add_background_object(create_fnbackwall6_1648(10240, 704), 3);
    add_background_object(create_fnbackwall6_1648(10368, 704), 3);
    add_background_object(create_fnbackwall6_1648(10496, 704), 3);
    add_background_object(create_backwall2_1642(9088, 512), 3);
    add_background_object(create_fnbackwall1_1645(9216, 704), 3);
    add_background_object(create_fnbackwall6_1648(9216, 608), 3);
    add_background_object(create_fnbackwall1_1645(9216, 512), 3);
    add_background_object(create_fnsignholder_1634(9392, 168), 3);
    add_background_object(create_fnsignholder_1634(9392, 8), 3);
    add_background_object(create_ferriswheelbase2_1644(3936, 992), 3);
    add_background_object(create_ferriswheelbase2_1644(3840, 992), 3);
    add_background_object(create_ferriswheelbase2_1644(13744, 480), 3);
    add_background_object(create_ferriswheelbase2_1644(13616, 480), 3);
    add_background_object(create_fnredcolumnback_1646(13280, 408), 3);
    add_background_object(create_fnbackwall4_1647(13184, 416), 3);
    add_background_object(create_fnbackwall3_1663(13184, 416), 3);
    add_background_object(create_fnbackwall5_1643(13312, 416), 3);
    add_background_object(create_birchtree_1846(12688, 664), 3);
    add_background_object(create_birchtree_1846(12456, 728), 3);
    add_background_object(create_birchtree_1846(12576, 696), 3);
    add_background_object(create_birchtree_1846(12800, 688), 3);
    add_background_object(create_birchtree_1846(12920, 728), 3);
    add_background_object(create_fnredcolumnback_1646(12328, 688), 3);
    add_background_object(create_fnredcolumnback_1646(11920, 784), 3);
    add_background_object(create_fnredcolumnback_1646(12120, 784), 3);
    add_background_object(create_fnredcolumnback_1646(11752, 744), 3);
    add_background_object(create_fnredcolumnback_1646(11752, 880), 3);
    add_background_object(create_fnbackwall5_1643(11648, 800), 3);
    add_background_object(create_fnbackwall6_1648(11776, 704), 3);
    add_background_object(create_fnbackwall6_1648(11904, 704), 3);
    add_background_object(create_fnbackwall6_1648(12032, 608), 3);
    add_background_object(create_fnbackwall6_1648(12160, 608), 3);
    add_background_object(create_fnbackwall6_1648(12288, 608), 3);
    add_background_object(create_fnbackwall3_1663(12416, 608), 3);
    add_background_object(create_fnredcolumnback_1646(13152, 688), 3);
    add_background_object(create_fnredcolumnback_1646(13408, 504), 3);
    add_background_object(create_fnbackwall4_1647(13440, 320), 3);
    add_background_object(create_fnbackwall3_1663(13440, 320), 3);
    add_background_object(create_fnbackwall3_1663(13440, 416), 3);
    add_background_object(create_fnbackwall6_1648(13312, 320), 3);
    add_background_object(create_fnbackwall6_1648(13184, 512), 3);
    add_background_object(create_fnbackwall3_1663(13312, 512), 3);
    add_background_object(create_fnredcolumnback_1646(13056, 688), 3);
    add_background_object(create_fnbackwall5_1643(12928, 608), 3);
    add_background_object(create_fnbackwall6_1648(13056, 608), 3);
    add_background_object(create_fnbackwall3_1663(13184, 608), 3);
    add_background_object(create_fnfloor8_1649(12160, 512), 3);
    add_background_object(create_fnfloor8_1649(12288, 512), 3);
    add_background_object(create_fnfloor17_1661(12224, 600), 3);
    add_background_object(create_rooftop4_1652(12960, 900), 3);
    add_background_object(create_rooftop5_1651(12432, 900), 3);
    add_background_object(create_fnwall5_1672(12592, 916), 3);
    add_background_object(create_fnwall6_1670(12528, 916), 3);
    add_background_object(create_fnwall7_1671(12656, 916), 3);
    add_background_object(create_fnwall5_1672(12816, 916), 3);
    add_background_object(create_fnwall6_1670(12752, 916), 3);
    add_background_object(create_fnwall7_1671(12880, 916), 3);
    add_background_object(create_fnredcolumn_1673(12712, 916), 3);
    add_background_object(create_fnredcolumn_1673(12488, 916), 3);
    add_background_object(create_fnredcolumn_1673(12936, 916), 3);
    add_background_object(create_fnrooftop3_1658(12400, 788), 3);
    add_background_object(create_fnfloor8_1649(13440, 608), 3);
    add_background_object(create_fnbackwall5_1643(11264, 992), 3);
    add_background_object(create_fnbackwall5_1643(11264, 608), 3);
    add_background_object(create_fnbackwall3_1663(10880, 992), 3);
    add_background_object(create_fnbackwall3_1663(10880, 608), 3);
    add_background_object(create_fnredcolumnback_1646(7872, 696), 3);
    add_background_object(create_fnbackwall6_1648(7664, 872), 3);
    add_background_object(create_fnbackwall6_1648(7792, 872), 3);
    add_background_object(create_fnbackwall6_1648(7680, 896), 3);
    add_background_object(create_fnbackwall6_1648(7808, 896), 3);
    add_background_object(create_fnredcolumnback_1646(7656, 696), 3);
    add_background_object(create_fnbackwall4_1647(7632, 776), 3);
    add_background_object(create_fnredcolumnback_1646(7928, 976), 3);
    add_background_object(create_backwall2_1642(7856, 1000), 3);
    add_background_object(create_fnwall18_1695(8384, 888), 3);
    add_background_object(create_fnbackhedge_1666(8320, 1024), 3);
    add_background_object(create_rooftop4_1652(8280, 960), 3);
    add_background_object(create_fnbackhedge_1666(8192, 1024), 3);
    add_background_object(create_fnredcolumnback_1646(8248, 976), 3);
    add_background_object(create_fnbackwall4_1647(8240, 1000), 3);
    add_background_object(create_fnwall18_1695(8768, 696), 3);
    add_background_object(create_fnwall18_1695(8768, 840), 3);
    add_background_object(create_fnwall18_1695(8768, 984), 3);
    add_background_object(create_fnwall18_1695(8768, 552), 3);
    add_background_object(create_fnwall18_1695(8384, 744), 3);
    add_background_object(create_fnapartmentwall1_1655(8704, 800), 3);
    add_background_object(create_fnwall21_1665(8752, 848), 3);
    add_background_object(create_fnapartmentwall1_1655(8512, 896), 3);
    add_background_object(create_fnapartmentwall1_1655(8512, 992), 3);
    add_background_object(create_fnapartmentwall1_1655(8512, 704), 3);
    add_background_object(create_fnapartmentwall1_1655(8704, 704), 3);
    add_background_object(create_fnapartmentwindow_1656(8576, 704), 3);
    add_background_object(create_fnapartmentwindow_1656(8640, 704), 3);
    add_background_object(create_fnapartmentwall1_1655(8512, 800), 3);
    add_background_object(create_fnapartmentwindow_1656(8576, 800), 3);
    add_background_object(create_fnapartmentwindow_1656(8640, 800), 3);
    add_background_object(create_fnsoil_1678(9344, 992), 3);
    add_background_object(create_fnsoil_1678(9472, 992), 3);
    add_background_object(create_fnsoil_1678(9600, 992), 3);
    add_background_object(create_fnsoil_1678(9216, 992), 3);
    add_background_object(create_fnredcolumnback_1646(8032, 696), 3);
    add_background_object(create_fnredcolumnback_1646(7504, 696), 3);
    add_background_object(create_fnbackwall6_1648(7920, 776), 3);
    add_background_object(create_fnbackwall4_1647(8048, 776), 3);
    add_background_object(create_fnbackwall6_1648(7504, 776), 3);
    add_background_object(create_backwall2_1642(7376, 776), 3);
    add_background_object(create_backwall2_1642(7792, 776), 3);
    add_background_object(create_fnwall6_1670(8016, 976), 3);
    add_background_object(create_fnwall7_1671(8144, 976), 3);
    add_background_object(create_fnredcolumn_1673(8200, 976), 3);
    add_background_object(create_fnredcolumn_1673(7976, 976), 3);
    add_background_object(create_fnwall5_1672(8080, 976), 3);
    add_background_object(create_fnfloor24_1703(6296, 704), 3);
    add_background_object(create_fnfloor24_1703(6328, 704), 3);
    add_background_object(create_fnfloor17_1661(4568, 856), 3);
    add_background_object(create_fnbackhedge_1666(4504, 416), 3);
    add_background_object(create_fnbackhedge_1666(4632, 416), 3);
    add_background_object(create_fnbackhedge_1666(4760, 416), 3);
    add_background_object(create_fnfloor17_1661(4760, 568), 3);
    add_background_object(create_fnbackwall6_1648(3968, 128), 3);
    add_background_object(create_fnbackwall3_1663(3968, 320), 3);
    add_background_object(create_fnbackwall3_1663(4096, 224), 3);
    add_background_object(create_fnbackwall3_1663(4224, 128), 3);
    add_background_object(create_fnbackwall1_1645(3968, 224), 3);
    add_background_object(create_fnbackwall1_1645(4096, 128), 3);
    add_background_object(create_fnbackwall6_1648(3968, 848), 3);
    add_background_object(create_fnbackwall3_1663(4096, 848), 3);
    add_background_object(create_fnbackhedge_1666(6848, 768), 3);
    add_background_object(create_fnfloor17_1661(6784, 872), 3);
    add_background_object(create_fnfloor17_1661(6912, 872), 3);
    add_background_object(create_birchtree_1846(5912, 416), 3);
    add_background_object(create_fnbackhedge_1666(5760, 416), 3);
    add_background_object(create_mallentrance5_1847(14744, 8), 3);
    add_background_object(create_mallentrance7_1848(14712, 160), 3);
    add_background_object(create_mallentrance7_1848(14712, 104), 3);
    add_background_object(create_mallentrance6_1849(14856, 128), 3);
    add_background_object(create_mallentrance6_1849(14856, 56), 3);
    add_background_object(create_mallentrance4_1841(14760, 152), 3);
    add_background_object(create_fnredcolumnback_1646(14160, 128), 3);
    add_background_object(create_fnredcolumnback_1646(13952, 128), 3);
    add_background_object(create_backwall2_1642(13952, 128), 3);
    add_background_object(create_fnbackwall4_1647(14080, 128), 3);
    add_background_object(create_fnbackwall5_1643(13952, 128), 3);
    add_background_object(create_fnbackwall3_1663(14080, 128), 3);
    add_background_object(create_fnwall18_1695(11504, 176), 3);
    add_background_object(create_fnwall18_1695(10768, 176), 3);
    add_background_object(create_fnfloor35_1710(11392, 320), 3);
    add_background_object(create_fnfloor36_1711(11392, 320), 3);
    add_background_object(create_fnfloor15_1693(10880, 320), 3);
    add_background_object(create_fnfloor16_1694(10880, 320), 3);
    add_background_object(create_fnbigsign1_1814(8560, 456), 3);
    add_background_object(create_fnwall18_1695(824, 176), 3);
    add_background_object(create_fnwall18_1695(1904, 248), 3);
    add_background_object(create_fnfloor20_1667(9728, 272), 3);
    add_background_object(create_fnfloor20_1667(9600, 368), 3);
    add_background_object(create_fnsoil_1678(8448, 1248), 3);
    add_background_object(create_fnsoil_1678(8576, 1248), 3);
    add_background_object(create_fnsoil_1678(8704, 1248), 3);
    add_background_object(create_fnsoil_1678(8832, 1248), 3);
    add_background_object(create_fnsoil_1678(8960, 1248), 3);
    add_background_object(create_fnsoil_1678(9088, 1248), 3);
    add_background_object(create_birchtree_1846(5952, 1160), 3);
    add_background_object(create_fnredcolumnback_1646(5968, 664), 3);
    add_background_object(create_fnredcolumnback_1646(5888, 664), 3);
    add_background_object(create_fnredcolumnback_1646(5584, 664), 3);
    add_background_object(create_fnredcolumnback_1646(5504, 664), 3);
    add_background_object(create_fnfloor20_1667(5632, 528), 3);
    add_background_object(create_floor34_1657(6136, 576), 3);
    add_background_object(create_fnfloor8_1649(5888, 576), 3);
    add_background_object(create_floor34_1657(7696, 288), 3);
    add_background_object(create_floor34_1657(7728, 288), 3);
    add_background_object(create_floor34_1657(7760, 288), 3);
    add_background_object(create_floor22_1698(7560, 254), 3);
    add_background_object(create_fnbackwall6_1648(7040, 1088), 3);
    add_background_object(create_fnredcolumnback_1646(7576, 976), 3);
    add_background_object(create_fnredcolumnback_1646(7432, 976), 3);
    add_background_object(create_rooftop5_1651(7224, 960), 3);
    add_background_object(create_fnredcolumnback_1646(7288, 976), 3);
    add_background_object(create_fnsoil_1678(7168, 1248), 3);
    add_background_object(create_birchtree_1846(6672, 1112), 3);
    add_background_object(create_fnfloor8_1649(6656, 1280), 3);
    add_background_object(create_floor7_1680(6432, 1256), 3);
    add_background_object(create_floor5_1679(6400, 1256), 3);
    add_background_object(create_floor7_1680(6112, 1256), 3);
    add_background_object(create_floor5_1679(6080, 1256), 3);
    add_background_object(create_birchtree_1846(5408, 1056), 3);
    add_background_object(create_fnbackwall4_1647(5248, 1088), 3);
    add_background_object(create_floor22_1698(5264, 1152), 3);
    add_background_object(create_dragonslope1_1702(5232, 1120), 3);
    add_background_object(create_backwall2_1642(4864, 896), 3);
    add_background_object(create_fnbackwall4_1647(4992, 896), 3);
    add_background_object(create_fnbackwall6_1648(4864, 992), 3);
    add_background_object(create_fnbackwall1_1645(4736, 1088), 3);
    add_background_object(create_fnbackwall1_1645(4992, 992), 3);
    add_background_object(create_fnbackwall4_1647(5120, 992), 3);
    add_background_object(create_fnbackwall6_1648(4864, 1088), 3);
    add_background_object(create_backwall2_1642(4608, 1088), 3);
    add_background_object(create_backwall2_1642(4736, 992), 3);
    add_background_object(create_fnfloor8_1649(4760, 480), 3);
    add_background_object(create_floor19_1697(5152, 1048), 3);
    add_background_object(create_fnsoil_1678(1792, 1280), 3);
    add_background_object(create_fnsoil_1678(1920, 1280), 3);
    add_background_object(create_fnsoil_1678(1664, 1344), 3);
    add_background_object(create_fnsoil_1678(1792, 1408), 3);
    add_background_object(create_fnsoil_1678(1920, 1408), 3);
    add_background_object(create_fnsoil_1678(384, 1472), 3);
    add_background_object(create_fnsoil_1678(512, 1472), 3);
    add_background_object(create_fnsoil_1678(640, 1472), 3);
    add_background_object(create_fnsoil_1678(0, 1472), 3);
    add_background_object(create_fnsoil_1678(128, 1472), 3);
    add_background_object(create_fnsoil_1678(256, 1472), 3);
    add_background_object(create_fnsoil_1678(0, 1600), 3);
    add_background_object(create_fnsoil_1678(128, 1600), 3);
    add_background_object(create_fnsoil_1678(256, 1600), 3);
    add_background_object(create_fnsoil_1678(0, 1728), 3);
    add_background_object(create_fnsoil_1678(128, 1728), 3);
    add_background_object(create_fnsoil_1678(256, 1728), 3);
    add_background_object(create_floor37_1813(4664, 1150), 3);
    add_background_object(create_fnbackwall3_1663(8240, 872), 3);
    add_background_object(create_fnbackwall5_1643(7184, 872), 3);
    add_background_object(create_rooftop4_1652(8216, 680), 3);
    add_background_object(create_fnredcolumnback_1646(8192, 696), 3);
    add_background_object(create_fnbackwall4_1647(8176, 776), 3);
    add_background_object(create_backwall2_1642(8048, 776), 3);
    add_background_object(create_fnbackwall6_1648(8176, 872), 3);
    add_background_object(create_rooftop5_1651(7288, 680), 3);
    add_background_object(create_fnredcolumnback_1646(7344, 696), 3);
    add_background_object(create_backwall2_1642(7248, 776), 3);
    add_background_object(create_fnbackwall4_1647(7376, 776), 3);
    add_background_object(create_fnbackwall6_1648(7312, 872), 3);
    add_background_object(create_rooftop4_1652(7960, 400), 3);
    add_background_object(create_rooftop5_1651(7544, 400), 3);
    add_background_object(create_fnredcolumnback_1646(7768, 416), 3);
    add_background_object(create_fnredcolumnback_1646(7944, 416), 3);
    add_background_object(create_fnredcolumnback_1646(7592, 416), 3);
    add_background_object(create_floor5_1679(7568, 544), 3);
    add_background_object(create_floor7_1680(7984, 544), 3);
    add_background_object(create_fnfloor6_1650(7728, 544), 3);
    add_background_object(create_fnfloor6_1650(7600, 544), 3);
    add_background_object(create_fnfloor6_1650(7856, 544), 3);
    add_background_object(create_floor33_1674(7344, 182), 3);
    add_background_object(create_floor19_1697(7480, 182), 3);
    add_background_object(create_dragonslope1_1702(7088, 456), 3);
    add_background_object(create_dragonslope1_1702(7136, 504), 3);
    add_background_object(create_dragonslope1_1702(7184, 552), 3);
    add_background_object(create_fnbackwall5_1643(4096, 576), 3);
    add_background_object(create_fnfloor8_1649(4600, 800), 3);
    add_background_object(create_fnfloor8_1649(4600, 896), 3);
    add_background_object(create_fnfloor10_1692(4712, 800), 3);
    add_background_object(create_fnfloor10_1692(4712, 896), 3);
    add_background_object(create_fnbackwall6_1648(2048, 704), 3);
    add_background_object(create_fnbackwall6_1648(2048, 800), 3);
    add_background_object(create_ferriswheelbase2_1644(3936, 1056), 3);
    add_background_object(create_ferriswheelbase2_1644(3936, 1120), 3);
    add_background_object(create_ferriswheelbase2_1644(3840, 1056), 3);
    add_background_object(create_ferriswheelbase2_1644(3840, 1120), 3);
    add_background_object(create_ferriswheelbase2_1644(3712, 992), 3);
    add_background_object(create_ferriswheelbase2_1644(3712, 1056), 3);
    add_background_object(create_ferriswheelbase2_1644(3712, 1120), 3);
    add_background_object(create_fnbackwall6_1648(2048, 896), 3);
    add_background_object(create_fnbackwall6_1648(2560, 1096), 3);
    add_background_object(create_fnbackwall6_1648(2048, 992), 3);
    add_background_object(create_fnbackwall6_1648(3328, 520), 3);
    add_background_object(create_fnbackwall6_1648(3328, 616), 3);
    add_background_object(create_fnbackwall6_1648(3328, 712), 3);
    add_background_object(create_fnbackwall6_1648(3328, 808), 3);
    add_background_object(create_fnbackwall6_1648(3328, 904), 3);
    add_background_object(create_fnbackwall6_1648(3328, 1000), 3);
    add_background_object(create_fnbackwall6_1648(2560, 712), 3);
    add_background_object(create_fnbackwall6_1648(2560, 808), 3);
    add_background_object(create_fnbackwall6_1648(2560, 904), 3);
    add_background_object(create_fnbackwall6_1648(2560, 1000), 3);
    add_background_object(create_fnbackwall6_1648(2176, 520), 3);
    add_background_object(create_fnbackwall6_1648(2176, 616), 3);
    add_background_object(create_fnbackwall6_1648(2176, 712), 3);
    add_background_object(create_fnbackwall6_1648(2176, 808), 3);
    add_background_object(create_fnbackwall6_1648(2176, 904), 3);
    add_background_object(create_fnbackwall6_1648(2176, 1000), 3);
    add_background_object(create_fnbackwall6_1648(2560, 520), 3);
    add_background_object(create_fnbackwall6_1648(2560, 616), 3);
    add_background_object(create_fnfloor8_1649(3840, 608), 3);
    add_background_object(create_fnfloor8_1649(3840, 512), 3);
    add_background_object(create_fnfloor8_1649(3840, 416), 3);
    add_background_object(create_fnfloor8_1649(3840, 704), 3);
    add_background_object(create_fnbackwall6_1648(1664, 1088), 3);
    add_background_object(create_fnbackwall6_1648(1792, 1088), 3);
    add_background_object(create_fnbackwall1_1645(1536, 1088), 3);
    add_background_object(create_fnbackwall6_1648(1536, 992), 3);
    add_background_object(create_fnbackwall6_1648(1536, 1184), 3);
    add_background_object(create_fnbackwall5_1643(640, 320), 3);
    add_background_object(create_fnbackwall5_1643(896, 416), 3);
    add_background_object(create_fnredcolumnback_1646(1168, 176), 3);
    add_background_object(create_fnredcolumnback_1646(1584, 176), 3);
    add_background_object(create_fnredcolumnback_1646(1304, 176), 3);
    add_background_object(create_fnredcolumnback_1646(1448, 176), 3);
    add_background_object(create_rooftop4_1652(1760, 160), 3);
    add_background_object(create_fnredcolumnback_1646(1728, 176), 3);
    add_background_object(create_rooftop5_1651(960, 160), 3);
    add_background_object(create_fnredcolumnback_1646(1024, 176), 3);
    add_background_object(create_fnapartmentwall1_1655(768, 1040), 3);
    add_background_object(create_fnapartmentwall1_1655(832, 1040), 3);
    add_background_object(create_fnapartmentwall1_1655(640, 1040), 3);
    add_background_object(create_fnapartmentwall1_1655(960, 1040), 3);
    add_background_object(create_fnapartmentwall3_1676(640, 992), 3);
    add_background_object(create_fnapartmentwall3_1676(768, 992), 3);
    add_background_object(create_fnapartmentwall3_1676(896, 992), 3);
    add_background_object(create_fnapartmentwindow_1656(704, 1040), 3);
    add_background_object(create_fnapartmentwindow_1656(896, 1040), 3);
    add_background_object(create_fnwall21_1665(1008, 1088), 3);
    add_background_object(create_fnwall21_1665(640, 1088), 3);
    add_background_object(create_fnwall21_1665(1008, 992), 3);
    add_background_object(create_fnwall21_1665(640, 992), 3);
    add_background_object(create_backwall2_1642(1664, 704), 3);
    add_background_object(create_fnbackwall6_1648(1792, 704), 3);
    add_background_object(create_fnbackwall6_1648(1664, 800), 3);
    add_background_object(create_fnbackwall6_1648(1792, 800), 3);
    add_background_object(create_fnbackwall5_1643(1792, 896), 3);
    add_background_object(create_fnbackwall4_1647(1664, 992), 3);
    add_background_object(create_fnbackhedge_1666(1152, 1312), 3);
    add_background_object(create_rooftop4_1652(456, 1152), 3);
    add_background_object(create_fnredcolumnback_1646(40, 1168), 3);
    add_background_object(create_fnredcolumnback_1646(168, 1168), 3);
    add_background_object(create_fnredcolumnback_1646(296, 1168), 3);
    add_background_object(create_fnredcolumnback_1646(424, 1168), 3);
    add_background_object(create_gimmickrollingarchback_1689(8672, 864), 3);
    add_background_object(create_fnfloor8_1649(0, 1328), 3);
    add_background_object(create_fnfloor8_1649(128, 1328), 3);
    add_background_object(create_fnfloor8_1649(256, 1328), 3);
    add_background_object(create_gachaponbase_1850(768, 1120), 3);
    add_background_object(create_gachaponbase_1850(672, 824), 3);
    add_background_object(create_gachaponbase_1850(4104, 224), 3);
    add_background_object(create_fnfloor12_1659(256, 1328), 3);
    add_background_object(create_fnfloor12_1659(128, 1328), 3);
    add_background_object(create_fnfloor12_1659(0, 1328), 3);
    add_background_object(create_fnrooftop2_1687(288, 1040), 3);
    add_background_object(create_fnrooftop1_1686(-32, 1040), 3);
    add_background_object(create_fnrooftop1_1686(32, 1040), 3);
    add_background_object(create_fnrooftop1_1686(96, 1040), 3);
    add_background_object(create_fnrooftop1_1686(160, 1040), 3);
    add_background_object(create_fnrooftop1_1686(224, 1040), 3);
    add_background_object(create_fnfloor8_1649(384, 1328), 3);
    add_background_object(create_fnfloor12_1659(384, 1328), 3);
    add_background_object(create_fnfloor8_1649(512, 1280), 3);
    add_background_object(create_fnfloor12_1659(512, 1280), 3);
    add_background_object(create_fnfloor8_1649(0, 1424), 3);
    add_background_object(create_fnfloor8_1649(128, 1424), 3);
    add_background_object(create_fnfloor8_1649(256, 1424), 3);
    add_background_object(create_fnfloor8_1649(384, 1424), 3);
    add_background_object(create_fnfloor8_1649(512, 1424), 3);
    add_background_object(create_fnfloor13_1691(512, 1280), 3);
    add_background_object(create_fnfloor20_1667(512, 1376), 3);
    add_background_object(create_fnfloor8_1649(640, 1280), 3);
    add_background_object(create_fnfloor12_1659(640, 1280), 3);
    add_background_object(create_fnfloor8_1649(640, 1424), 3);
    add_background_object(create_fnfloor20_1667(640, 1376), 3);
    add_background_object(create_fnbackhedge_1666(0, 1264), 3);
    add_background_object(create_fnbackhedge_1666(128, 1264), 3);
    add_background_object(create_fnbackhedge_1666(256, 1264), 3);
    add_background_object(create_fnbackhedge_1666(384, 1264), 3);
    add_background_object(create_fnfloor8_1649(768, 1280), 3);
    add_background_object(create_fnfloor12_1659(768, 1280), 3);
    add_background_object(create_fnfloor8_1649(896, 1280), 3);
    add_background_object(create_fnfloor12_1659(896, 1280), 3);
    add_background_object(create_fnfloor8_1649(1024, 1376), 3);
    add_background_object(create_fnfloor12_1659(1024, 1376), 3);
    add_background_object(create_ferriswheelbase2_1644(1184, 1152), 3);
    add_background_object(create_ferriswheelbase2_1644(1184, 1216), 3);
    add_background_object(create_ferriswheelbase_1664(1168, 1096), 3);
    add_background_object(create_ferriswheelbase2_1644(1184, 1280), 3);
    add_background_object(create_ferriswheelbase2_1644(1184, 1344), 3);
    add_background_object(create_fnfloor8_1649(768, 1376), 3);
    add_background_object(create_fnfloor8_1649(896, 1376), 3);
    add_background_object(create_fnfloor10_1692(1008, 1280), 3);
    add_background_object(create_fnfloor14_1660(1008, 1280), 3);
    add_background_object(create_fnbackhedge_1666(1024, 1312), 3);
    add_background_object(create_fnfloor8_1649(1152, 1376), 3);
    add_background_object(create_fnfloor12_1659(1152, 1376), 3);
    add_background_object(create_fnbackhedge_1666(1280, 1312), 3);
    add_background_object(create_fnfloor8_1649(1280, 1376), 3);
    add_background_object(create_fnfloor12_1659(1280, 1376), 3);
    add_background_object(create_verticalhalfpipe1_1796(-536, 2040), 3);
    add_background_object(create_verticalhalfpipe2_1798(-536, 1944), 3);
    add_background_object(create_verticalhalfpipe3_1797(-536, 1848), 3);
    add_background_object(create_verticalhalfpipe4_1809(-304, 2040), 3);
    add_background_object(create_verticalhalfpipe5_1810(-224, 1944), 3);
    add_background_object(create_verticalhalfpipe6_1811(-304, 1848), 3);
    add_background_object(create_fnbackhedge_1666(1408, 1312), 3);
    add_background_object(create_fnfloor8_1649(1408, 1376), 3);
    add_background_object(create_fnfloor12_1659(1408, 1376), 3);
    add_background_object(create_fnfloor8_1649(1536, 1280), 3);
    add_background_object(create_fnfloor8_1649(1536, 1376), 3);
    add_background_object(create_fnfloor11_1690(1456, 1280), 3);
    add_background_object(create_verticalhalfpipe4_1809(1376, 1280), 3);
    add_background_object(create_verticalhalfpipe5_1810(1456, 1184), 3);
    add_background_object(create_verticalhalfpipe5_1810(1456, 1088), 3);
    add_background_object(create_fnfloor8_1649(1536, 896), 3);
    add_background_object(create_verticalhalfpipe5_1810(1456, 992), 3);
    add_background_object(create_fnfloor28_1685(1456, 896), 3);
    add_background_object(create_fnfloor8_1649(1536, 800), 3);
    add_background_object(create_fnfloor8_1649(1408, 800), 3);
    add_background_object(create_fnfloor8_1649(1280, 800), 3);
    add_background_object(create_fnfloor17_1661(1280, 880), 3);
    add_background_object(create_verticalhalfpipe6_1811(1376, 896), 3);
    add_background_object(create_fnfloor8_1649(1152, 800), 3);
    add_background_object(create_fnfloor17_1661(1152, 880), 3);
    add_background_object(create_fnfloor8_1649(1024, 800), 3);
    add_background_object(create_fnfloor8_1649(1664, 1184), 3);
    add_background_object(create_fnfloor12_1659(1664, 1184), 3);
    add_background_object(create_fnfloor8_1649(1792, 1184), 3);
    add_background_object(create_fnfloor12_1659(1792, 1184), 3);
    add_background_object(create_fnfloor10_1692(1648, 800), 3);
    add_background_object(create_fnfloor10_1692(1648, 896), 3);
    add_background_object(create_fnfloor12_1659(1536, 800), 3);
    add_background_object(create_fnfloor14_1660(1648, 800), 3);
    add_background_object(create_fnfloor12_1659(1408, 800), 3);
    add_background_object(create_fnfloor12_1659(1280, 800), 3);
    add_background_object(create_fnfloor12_1659(1152, 800), 3);
    add_background_object(create_fnfloor12_1659(1024, 800), 3);
    add_background_object(create_fnfloor8_1649(1664, 1280), 3);
    add_background_object(create_fnfloor8_1649(1920, 1184), 3);
    add_background_object(create_fnfloor8_1649(1920, 800), 3);
    add_background_object(create_fnfloor8_1649(1920, 896), 3);
    add_background_object(create_fnfloor8_1649(1920, 992), 3);
    add_background_object(create_fnfloor8_1649(1920, 1088), 3);
    add_background_object(create_fnfloor8_1649(2048, 1184), 3);
    add_background_object(create_fnfloor8_1649(2032, 800), 3);
    add_background_object(create_fnfloor8_1649(2032, 896), 3);
    add_background_object(create_fnfloor8_1649(2048, 1088), 3);
    add_background_object(create_fnfloor8_1649(1920, 416), 3);
    add_background_object(create_fnfloor8_1649(1920, 608), 3);
    add_background_object(create_fnfloor8_1649(1920, 704), 3);
    add_background_object(create_fnfloor8_1649(2048, 608), 3);
    add_background_object(create_fnfloor8_1649(2032, 704), 3);
    add_background_object(create_fnfloor8_1649(1664, 608), 3);
    add_background_object(create_fnfloor8_1649(1664, 512), 3);
    add_background_object(create_fnbackwall3_1663(1664, 896), 3);
    add_background_object(create_fnbackwall3_1663(1536, 704), 3);
    add_background_object(create_backwall2_1642(1024, 704), 3);
    add_background_object(create_fnfloor9_1688(1664, 512), 3);
    add_background_object(create_fnfloor9_1688(1664, 608), 3);
    add_background_object(create_fnfloor17_1661(1664, 688), 3);
    add_background_object(create_fnfloor9_1688(1024, 800), 3);
    add_background_object(create_fnfloor17_1661(1024, 880), 3);
    add_background_object(create_fnfloor13_1691(1024, 800), 3);
    add_background_object(create_fnwall16_1669(456, 1936), 3);
    add_background_object(create_fnwall14_1668(392, 1936), 3);
    add_background_object(create_fnrailing_1784(-280, 848), 3);
    add_background_object(create_fnrailing_1784(-88, 784), 3);
    add_background_object(create_fnrailingslope_1785(-216, 816), 3);
    add_background_object(create_fnrailingslope_1785(-152, 784), 3);
    add_background_object(create_fnbackwall6_1648(1152, 704), 3);
    add_background_object(create_fnbackwall1_1645(1280, 704), 3);
    add_background_object(create_fnbackwall6_1648(1408, 704), 3);
    add_background_object(create_fnbackwall6_1648(1152, 608), 3);
    add_background_object(create_fnbackwall5_1643(1024, 608), 3);
    add_background_object(create_fnbackwall6_1648(1280, 608), 3);
    add_background_object(create_fnbackwall6_1648(1408, 608), 3);
    add_background_object(create_fnfloor8_1649(1024, 512), 3);
    add_background_object(create_fnfloor9_1688(1024, 512), 3);
    add_background_object(create_fnfloor10_1692(1136, 512), 3);
    add_background_object(create_fnfloor17_1661(1024, 592), 3);
    add_background_object(create_fnbackwall6_1648(1152, 512), 3);
    add_background_object(create_fnbackwall6_1648(1280, 512), 3);
    add_background_object(create_fnbackwall6_1648(1408, 512), 3);
    add_background_object(create_fnfloor8_1649(1024, 416), 3);
    add_background_object(create_fnfloor9_1688(1024, 416), 3);
    add_background_object(create_fnfloor10_1692(1136, 416), 3);
    add_background_object(create_fnbackwall6_1648(1152, 416), 3);
    add_background_object(create_fnbackwall6_1648(1280, 416), 3);
    add_background_object(create_fnfloor8_1649(1664, 320), 3);
    add_background_object(create_fnfloor9_1688(1664, 320), 3);
    add_background_object(create_fnfloor8_1649(768, 320), 3);
    add_background_object(create_fnfloor8_1649(1024, 320), 3);
    add_background_object(create_fnfloor9_1688(768, 320), 3);
    add_background_object(create_fnfloor10_1692(1136, 320), 3);
    add_background_object(create_fnbackwall6_1648(1152, 320), 3);
    add_background_object(create_fnbackwall6_1648(1280, 320), 3);
    add_background_object(create_fnbackwall6_1648(1408, 320), 3);
    add_background_object(create_fnbackwall6_1648(1536, 608), 3);
    add_background_object(create_fnbackwall6_1648(1536, 512), 3);
    add_background_object(create_fnbackwall6_1648(1536, 416), 3);
    add_background_object(create_fnbackwall6_1648(1536, 320), 3);
    add_background_object(create_fnbackwall1_1645(1408, 416), 3);
    add_background_object(create_fnfloor8_1649(1792, 320), 3);
    add_background_object(create_fnfloor12_1659(1024, 320), 3);
    add_background_object(create_fnfloor12_1659(1664, 320), 3);
    add_background_object(create_fnfloor13_1691(1664, 320), 3);
    add_background_object(create_fnfloor14_1660(1136, 320), 3);
    add_background_object(create_fnrooftop3_1658(928, 48), 3);
    add_background_object(create_fnrooftop1_1686(1208, 48), 3);
    add_background_object(create_fnrooftop1_1686(1272, 48), 3);
    add_background_object(create_fnrooftop1_1686(1336, 48), 3);
    add_background_object(create_fnrooftop1_1686(1400, 48), 3);
    add_background_object(create_fnrooftop1_1686(1464, 48), 3);
    add_background_object(create_fnrooftop1_1686(1528, 48), 3);
    add_background_object(create_fnrooftop2_1687(1592, 48), 3);
    add_background_object(create_backwall2_1642(1024, 224), 3);
    add_background_object(create_fnbackwall4_1647(1152, 224), 3);
    add_background_object(create_backwall2_1642(1280, 224), 3);
    add_background_object(create_fnbackwall4_1647(1408, 224), 3);
    add_background_object(create_backwall2_1642(1536, 224), 3);
    add_background_object(create_fnbackwall4_1647(1664, 224), 3);
    add_background_object(create_fnfloor17_1661(768, 408), 3);
    add_background_object(create_fnfloor12_1659(1792, 320), 3);
    add_background_object(create_fnbigsign1_1814(808, 888), 3);
    add_background_object(create_fnladder_1662(984, 864), 3);
    add_background_object(create_fnladder_1662(984, 832), 3);
    add_background_object(create_fnladder_1662(984, 800), 3);
    add_background_object(create_fnfloor9_1688(1920, 704), 3);
    add_background_object(create_fnfloor9_1688(1920, 800), 3);
    add_background_object(create_fnfloor9_1688(1920, 896), 3);
    add_background_object(create_fnfloor9_1688(1920, 992), 3);
    add_background_object(create_fnfloor9_1688(1920, 1088), 3);
    add_background_object(create_backwall2_1642(1792, 992), 3);
    add_background_object(create_fnfloor15_1693(1920, 320), 3);
    add_background_object(create_fnfloor16_1694(1920, 320), 3);
    add_background_object(create_fnfloor8_1649(1920, 512), 3);
    add_background_object(create_fnfloor8_1649(2048, 512), 3);
    add_background_object(create_fnfloor15_1693(2048, 416), 3);
    add_background_object(create_fnfloor16_1694(2048, 416), 3);
    add_background_object(create_fnfloor8_1649(896, 320), 3);
    add_background_object(create_fnfloor12_1659(896, 320), 3);
    add_background_object(create_fnfloor17_1661(896, 408), 3);
    add_background_object(create_fnfloor8_1649(640, 224), 3);
    add_background_object(create_fnfloor8_1649(640, 128), 3);
    add_background_object(create_fnfloor8_1649(640, 32), 3);
    add_background_object(create_fnfloor8_1649(640, -64), 3);
    add_background_object(create_fnfloor9_1688(640, 224), 3);
    add_background_object(create_fnfloor10_1692(752, 176), 3);
    add_background_object(create_fnfloor9_1688(640, 128), 3);
    add_background_object(create_fnfloor10_1692(752, 128), 3);
    add_background_object(create_fnfloor9_1688(640, 32), 3);
    add_background_object(create_fnfloor10_1692(752, 32), 3);
    add_background_object(create_fnfloor9_1688(640, -64), 3);
    add_background_object(create_fnfloor10_1692(752, -64), 3);
    add_background_object(create_fnfloor17_1661(640, 312), 3);
    add_background_object(create_fnfloor20_1667(768, 272), 3);
    add_background_object(create_fnfloor12_1659(768, 272), 3);
    add_background_object(create_fnfloor14_1660(880, 272), 3);
    add_background_object(create_lamppostback_1709(560, 1200), 3);
    add_background_object(create_fnfloor20_1667(1536, 1232), 3);
    add_background_object(create_fnfloor12_1659(1536, 1232), 3);
    add_background_object(create_fnfloor17_1661(1536, 984), 3);
    add_background_object(create_fnfloor13_1691(1664, 1184), 3);
    add_background_object(create_fnbustedwall_1705(2560, 560), 3);
    add_background_object(create_fnbustedwall_1705(2624, 560), 3);
    add_background_object(create_fnbustedwall_1705(2560, 608), 3);
    add_background_object(create_fnbustedwall_1705(2624, 608), 3);
    add_background_object(create_fnbustedwall_1705(2560, 656), 3);
    add_background_object(create_fnbustedwall_1705(2624, 656), 3);
    add_background_object(create_fnbustedwall_1705(2560, 704), 3);
    add_background_object(create_fnbustedwall_1705(2624, 704), 3);
    add_background_object(create_fnbustedwall_1705(2176, 560), 3);
    add_background_object(create_fnbustedwall_1705(2240, 560), 3);
    add_background_object(create_fnbustedwall_1705(2176, 608), 3);
    add_background_object(create_fnbustedwall_1705(2240, 608), 3);
    add_background_object(create_fnbustedwall_1705(2176, 656), 3);
    add_background_object(create_fnbustedwall_1705(2240, 656), 3);
    add_background_object(create_fnbustedwall_1705(2176, 704), 3);
    add_background_object(create_fnbustedwall_1705(2240, 704), 3);
    add_background_object(create_fnbustedwall_1705(3328, 560), 3);
    add_background_object(create_fnbustedwall_1705(3392, 560), 3);
    add_background_object(create_fnbustedwall_1705(3328, 608), 3);
    add_background_object(create_fnbustedwall_1705(3392, 608), 3);
    add_background_object(create_fnbustedwall_1705(3328, 656), 3);
    add_background_object(create_fnbustedwall_1705(3392, 656), 3);
    add_background_object(create_fnbustedwall_1705(3328, 704), 3);
    add_background_object(create_fnbustedwall_1705(3392, 704), 3);
    add_background_object(create_fnbustedwall_1705(3328, 512), 3);
    add_background_object(create_fnbustedwall_1705(3392, 512), 3);
    add_background_object(create_fnfloor8_1649(3728, 584), 3);
    add_background_object(create_fnfloor8_1649(3728, 488), 3);
    add_background_object(create_fnfloor9_1688(3728, 488), 3);
    add_background_object(create_fnfloor8_1649(3712, 224), 3);
    add_background_object(create_fnfloor8_1649(3584, 224), 3);
    add_background_object(create_fnfloor9_1688(3584, 224), 3);
    add_background_object(create_fnfloor17_1661(3584, 304), 3);
    add_background_object(create_fnfloor8_1649(3584, 128), 3);
    add_background_object(create_fnfloor8_1649(3456, 128), 3);
    add_background_object(create_fnfloor9_1688(3456, 128), 3);
    add_background_object(create_fnfloor17_1661(3456, 208), 3);
    add_background_object(create_fnfloor8_1649(3728, 392), 3);
    add_background_object(create_fnfloor9_1688(3728, 392), 3);
    add_background_object(create_fnfloor8_1649(3712, 128), 3);
    add_background_object(create_fnfloor8_1649(3584, 32), 3);
    add_background_object(create_fnfloor8_1649(3456, 32), 3);
    add_background_object(create_fnfloor9_1688(3456, 32), 3);
    add_background_object(create_fnfloor8_1649(3712, 32), 3);
    add_background_object(create_fnfloor8_1649(3584, -64), 3);
    add_background_object(create_fnfloor8_1649(3456, -64), 3);
    add_background_object(create_fnfloor9_1688(3456, -64), 3);
    add_background_object(create_fnfloor8_1649(3712, -64), 3);
    add_background_object(create_fnfloor8_1649(3840, 320), 3);
    add_background_object(create_fnfloor8_1649(3840, 224), 3);
    add_background_object(create_fnfloor8_1649(3840, 128), 3);
    add_background_object(create_fnfloor8_1649(3840, 32), 3);
    add_background_object(create_fnfloor8_1649(3840, -64), 3);
    add_background_object(create_fnfloor8_1649(3728, 680), 3);
    add_background_object(create_fnfloor8_1649(3728, 776), 3);
    add_background_object(create_fnfloor9_1688(3728, 680), 3);
    add_background_object(create_fnbustedwall_1705(2560, 752), 3);
    add_background_object(create_fnbustedwall_1705(2624, 752), 3);
    add_background_object(create_fnbustedwall_1705(2176, 752), 3);
    add_background_object(create_fnbustedwall_1705(2240, 752), 3);
    add_background_object(create_fnbustedwall_1705(3328, 752), 3);
    add_background_object(create_fnbustedwall_1705(3392, 752), 3);
    add_background_object(create_fnfloor8_1649(3840, 800), 3);
    add_background_object(create_fnfloor8_1649(3712, 800), 3);
    add_background_object(create_fnbustedwall_1705(3328, 848), 3);
    add_background_object(create_fnbustedwall_1705(3392, 848), 3);
    add_background_object(create_fnbustedwall_1705(3328, 896), 3);
    add_background_object(create_fnbustedwall_1705(3392, 896), 3);
    add_background_object(create_fnbustedwall_1705(3328, 944), 3);
    add_background_object(create_fnbustedwall_1705(3392, 944), 3);
    add_background_object(create_fnbustedwall_1705(3328, 992), 3);
    add_background_object(create_fnbustedwall_1705(3392, 992), 3);
    add_background_object(create_fnbustedwall_1705(3328, 800), 3);
    add_background_object(create_fnbustedwall_1705(3392, 800), 3);
    add_background_object(create_fnbustedwall_1705(3328, 1040), 3);
    add_background_object(create_fnbustedwall_1705(3392, 1040), 3);
    add_background_object(create_fnbustedwall_1705(2560, 848), 3);
    add_background_object(create_fnbustedwall_1705(2624, 848), 3);
    add_background_object(create_fnbustedwall_1705(2560, 896), 3);
    add_background_object(create_fnbustedwall_1705(2624, 896), 3);
    add_background_object(create_fnbustedwall_1705(2560, 944), 3);
    add_background_object(create_fnbustedwall_1705(2624, 944), 3);
    add_background_object(create_fnbustedwall_1705(2560, 992), 3);
    add_background_object(create_fnbustedwall_1705(2624, 992), 3);
    add_background_object(create_fnbustedwall_1705(2560, 800), 3);
    add_background_object(create_fnbustedwall_1705(2624, 800), 3);
    add_background_object(create_fnbustedwall_1705(2176, 848), 3);
    add_background_object(create_fnbustedwall_1705(2240, 848), 3);
    add_background_object(create_fnbustedwall_1705(2176, 896), 3);
    add_background_object(create_fnbustedwall_1705(2240, 896), 3);
    add_background_object(create_fnbustedwall_1705(2176, 944), 3);
    add_background_object(create_fnbustedwall_1705(2240, 944), 3);
    add_background_object(create_fnbustedwall_1705(2176, 992), 3);
    add_background_object(create_fnbustedwall_1705(2240, 992), 3);
    add_background_object(create_fnbustedwall_1705(2176, 800), 3);
    add_background_object(create_fnbustedwall_1705(2240, 800), 3);
    add_background_object(create_fnbustedwall_1705(2560, 1040), 3);
    add_background_object(create_fnbustedwall_1705(2624, 1040), 3);
    add_background_object(create_fnbustedwall_1705(2176, 1040), 3);
    add_background_object(create_fnbustedwall_1705(2240, 1040), 3);
    add_background_object(create_fnfloor20_1667(3456, 800), 3);
    add_background_object(create_fnfloor12_1659(3456, 800), 3);
    add_background_object(create_fnfloor27_1684(3456, 848), 3);
    add_background_object(create_fnfloor20_1667(3584, 800), 3);
    add_background_object(create_fnfloor12_1659(3584, 800), 3);
    add_background_object(create_fnfloor28_1685(3632, 848), 3);
    add_background_object(create_fnfloor8_1649(3840, 896), 3);
    add_background_object(create_fnfloor8_1649(3712, 896), 3);
    add_background_object(create_fnbustedwall_1705(2816, 800), 3);
    add_background_object(create_fnbustedwall_1705(2880, 800), 3);
    add_background_object(create_fnbustedwall_1705(2688, 800), 3);
    add_background_object(create_fnbustedwall_1705(2752, 800), 3);
    add_background_object(create_fnfloor8_1649(3840, 944), 3);
    add_background_object(create_fnfloor8_1649(2032, 992), 3);
    add_background_object(create_fnfloor10_1692(2144, 992), 3);
    add_background_object(create_fnfloor8_1649(2176, 1088), 3);
    add_background_object(create_fnfloor12_1659(2176, 1088), 3);
    add_background_object(create_fnfloor20_1667(2432, 1136), 3);
    add_background_object(create_fnbustedwall_1705(2432, 1088), 3);
    add_background_object(create_fnbustedwall_1705(2496, 1088), 3);
    add_background_object(create_fnfloor20_1667(2304, 1136), 3);
    add_background_object(create_fnbustedwall_1705(2304, 1088), 3);
    add_background_object(create_fnbustedwall_1705(2368, 1088), 3);
    add_background_object(create_fnfloor20_1667(2560, 1136), 3);
    add_background_object(create_fnbustedwall_1705(2560, 1088), 3);
    add_background_object(create_fnbustedwall_1705(2624, 1088), 3);
    add_background_object(create_fnfloor8_1649(2176, 1184), 3);
    add_background_object(create_fnfloor8_1649(2304, 1184), 3);
    add_background_object(create_fnfloor8_1649(2432, 1184), 3);
    add_background_object(create_fnfloor8_1649(2560, 1184), 3);
    add_background_object(create_fnbackwall6_1648(3328, 1096), 3);
    add_background_object(create_fnfloor20_1667(2816, 1136), 3);
    add_background_object(create_fnbustedwall_1705(2816, 1088), 3);
    add_background_object(create_fnbustedwall_1705(2880, 1088), 3);
    add_background_object(create_fnfloor20_1667(2688, 1136), 3);
    add_background_object(create_fnbustedwall_1705(2688, 1088), 3);
    add_background_object(create_fnbustedwall_1705(2752, 1088), 3);
    add_background_object(create_fnfloor20_1667(3328, 1136), 3);
    add_background_object(create_fnbustedwall_1705(3328, 1088), 3);
    add_background_object(create_fnbustedwall_1705(3392, 1088), 3);
    add_background_object(create_fnfloor8_1649(2688, 1184), 3);
    add_background_object(create_fnfloor8_1649(2816, 1184), 3);
    add_background_object(create_fnfloor8_1649(3328, 1184), 3);
    add_background_object(create_fnfloor8_1649(3456, 1088), 3);
    add_background_object(create_fnfloor12_1659(3456, 1088), 3);
    add_background_object(create_fnfloor8_1649(3584, 1184), 3);
    add_background_object(create_fnfloor12_1659(3584, 1184), 3);
    add_background_object(create_fnfloor8_1649(3712, 1184), 3);
    add_background_object(create_fnfloor12_1659(3712, 1184), 3);
    add_background_object(create_fnfloor8_1649(3840, 1184), 3);
    add_background_object(create_fnfloor12_1659(3840, 1184), 3);
    add_background_object(create_fnfloor8_1649(3456, 1184), 3);
    add_background_object(create_fnfloor20_1667(3328, 1136), 3);
    add_background_object(create_fnfloor10_1692(3568, 1088), 3);
    add_background_object(create_fnfloor14_1660(3568, 1088), 3);
    add_background_object(create_fnfloor9_1688(3712, 896), 3);
    add_background_object(create_fnfloor10_1692(3952, 944), 3);
    add_background_object(create_fnfloor10_1692(3952, 896), 3);
    add_background_object(create_fnfloor8_1649(3968, 1184), 3);
    add_background_object(create_fnfloor12_1659(3968, 1184), 3);
    add_background_object(create_fnfloor8_1649(4096, 1184), 3);
    add_background_object(create_fnfloor12_1659(4096, 1184), 3);
    add_background_object(create_fnfloor8_1649(4224, 1184), 3);
    add_background_object(create_fnfloor8_1649(4352, 1184), 3);
    add_background_object(create_fnfloor8_1649(4224, 800), 3);
    add_background_object(create_fnfloor8_1649(4224, 896), 3);
    add_background_object(create_fnfloor8_1649(4224, 992), 3);
    add_background_object(create_fnfloor8_1649(4224, 1088), 3);
    add_background_object(create_fnfloor11_1690(4144, 1088), 3);
    add_background_object(create_fnfloor9_1688(4224, 1088), 3);
    add_background_object(create_fnfloor9_1688(4224, 992), 3);
    add_background_object(create_fnfloor9_1688(3728, 584), 3);
    add_background_object(create_fnfloor8_1649(3728, 296), 3);
    add_background_object(create_fnfloor9_1688(3728, 296), 3);
    add_background_object(create_fnfloor9_1688(4224, 896), 3);
    add_background_object(create_fnfloor9_1688(4224, 800), 3);
    add_background_object(create_fnfloor10_1692(2144, 896), 3);
    add_background_object(create_fnfloor17_1661(3840, 1024), 3);
    add_background_object(create_fnfloor17_1661(3712, 984), 3);
    add_background_object(create_fnfloor10_1692(2144, 800), 3);
    add_background_object(create_fnfloor10_1692(2144, 704), 3);
    add_background_object(create_fnfloor10_1692(3952, 704), 3);
    add_background_object(create_fnfloor10_1692(3952, 608), 3);
    add_background_object(create_fnfloor20_1667(2176, 512), 3);
    add_background_object(create_fnfloor12_1659(2176, 512), 3);
    add_background_object(create_fnfloor20_1667(2304, 512), 3);
    add_background_object(create_fnfloor12_1659(2304, 512), 3);
    add_background_object(create_fnfloor20_1667(2432, 512), 3);
    add_background_object(create_fnfloor12_1659(2432, 512), 3);
    add_background_object(create_fnfloor20_1667(2560, 512), 3);
    add_background_object(create_fnfloor12_1659(2560, 512), 3);
    add_background_object(create_fnfloor20_1667(2688, 512), 3);
    add_background_object(create_fnfloor12_1659(2688, 512), 3);
    add_background_object(create_fnfloor27_1684(2304, 560), 3);
    add_background_object(create_fnfloor28_1685(2480, 560), 3);
    add_background_object(create_fnfloor20_1667(2816, 512), 3);
    add_background_object(create_fnfloor12_1659(2816, 512), 3);
    add_background_object(create_fnfloor27_1684(2688, 560), 3);
    add_background_object(create_fnfloor28_1685(2864, 560), 3);
    add_background_object(create_fnbackwall6_1648(2944, 1096), 3);
    add_background_object(create_fnbackwall6_1648(2944, 712), 3);
    add_background_object(create_fnbackwall6_1648(2944, 808), 3);
    add_background_object(create_fnbackwall6_1648(2944, 904), 3);
    add_background_object(create_fnbackwall6_1648(2944, 1000), 3);
    add_background_object(create_fnbackwall6_1648(2944, 520), 3);
    add_background_object(create_fnbackwall6_1648(2944, 616), 3);
    add_background_object(create_fnbustedwall_1705(2944, 560), 3);
    add_background_object(create_fnbustedwall_1705(3008, 560), 3);
    add_background_object(create_fnbustedwall_1705(2944, 608), 3);
    add_background_object(create_fnbustedwall_1705(3008, 608), 3);
    add_background_object(create_fnbustedwall_1705(2944, 656), 3);
    add_background_object(create_fnbustedwall_1705(3008, 656), 3);
    add_background_object(create_fnbustedwall_1705(2944, 704), 3);
    add_background_object(create_fnbustedwall_1705(3008, 704), 3);
    add_background_object(create_fnbustedwall_1705(2944, 752), 3);
    add_background_object(create_fnbustedwall_1705(3008, 752), 3);
    add_background_object(create_fnbustedwall_1705(2944, 848), 3);
    add_background_object(create_fnbustedwall_1705(3008, 848), 3);
    add_background_object(create_fnbustedwall_1705(2944, 896), 3);
    add_background_object(create_fnbustedwall_1705(3008, 896), 3);
    add_background_object(create_fnbustedwall_1705(2944, 944), 3);
    add_background_object(create_fnbustedwall_1705(3008, 944), 3);
    add_background_object(create_fnbustedwall_1705(2944, 992), 3);
    add_background_object(create_fnbustedwall_1705(3008, 992), 3);
    add_background_object(create_fnbustedwall_1705(2944, 800), 3);
    add_background_object(create_fnbustedwall_1705(3008, 800), 3);
    add_background_object(create_fnbustedwall_1705(2944, 1040), 3);
    add_background_object(create_fnbustedwall_1705(3008, 1040), 3);
    add_background_object(create_fnbustedwall_1705(3200, 800), 3);
    add_background_object(create_fnbustedwall_1705(3264, 800), 3);
    add_background_object(create_fnbustedwall_1705(3072, 800), 3);
    add_background_object(create_fnbustedwall_1705(3136, 800), 3);
    add_background_object(create_fnfloor20_1667(2944, 1136), 3);
    add_background_object(create_fnbustedwall_1705(2944, 1088), 3);
    add_background_object(create_fnbustedwall_1705(3008, 1088), 3);
    add_background_object(create_fnfloor8_1649(2944, 1184), 3);
    add_background_object(create_fnfloor20_1667(3200, 1136), 3);
    add_background_object(create_fnbustedwall_1705(3200, 1088), 3);
    add_background_object(create_fnbustedwall_1705(3264, 1088), 3);
    add_background_object(create_fnfloor20_1667(3072, 1136), 3);
    add_background_object(create_fnbustedwall_1705(3072, 1088), 3);
    add_background_object(create_fnbustedwall_1705(3136, 1088), 3);
    add_background_object(create_fnfloor8_1649(3072, 1184), 3);
    add_background_object(create_fnfloor8_1649(3200, 1184), 3);
    add_background_object(create_fnfloor20_1667(2944, 512), 3);
    add_background_object(create_fnfloor12_1659(2944, 512), 3);
    add_background_object(create_fnfloor20_1667(3072, 512), 3);
    add_background_object(create_fnfloor12_1659(3072, 512), 3);
    add_background_object(create_fnfloor20_1667(3200, 512), 3);
    add_background_object(create_fnfloor12_1659(3200, 512), 3);
    add_background_object(create_fnfloor27_1684(3072, 560), 3);
    add_background_object(create_fnfloor28_1685(3248, 560), 3);
    add_background_object(create_fnbigsign2_1815(2352, 992), 3);
    add_background_object(create_lamppostback_1709(2736, 720), 3);
    add_background_object(create_lamppostback_1709(2864, 720), 3);
    add_background_object(create_lamppostback_1709(3120, 720), 3);
    add_background_object(create_lamppostback_1709(3248, 720), 3);
    add_background_object(create_lamppostback_1709(2736, 1008), 3);
    add_background_object(create_lamppostback_1709(2864, 1008), 3);
    add_background_object(create_lamppostback_1709(3120, 1008), 3);
    add_background_object(create_lamppostback_1709(3248, 1008), 3);
    add_background_object(create_lamppostback_1709(3120, 432), 3);
    add_background_object(create_lamppostback_1709(3248, 432), 3);
    add_background_object(create_lamppostback_1709(2736, 432), 3);
    add_background_object(create_lamppostback_1709(2864, 432), 3);
    add_background_object(create_lamppostback_1709(2352, 432), 3);
    add_background_object(create_lamppostback_1709(2480, 432), 3);
    add_background_object(create_fnfloor12_1659(4224, 800), 3);
    add_background_object(create_fnfloor10_1692(4336, 800), 3);
    add_background_object(create_fnfloor14_1660(4336, 800), 3);
    add_background_object(create_fnfloor10_1692(4336, 896), 3);
    add_background_object(create_fnfloor10_1692(4336, 992), 3);
    add_background_object(create_fnfloor10_1692(4336, 1088), 3);
    add_background_object(create_fnfloor12_1659(4352, 1184), 3);
    add_background_object(create_fnfloor8_1649(4480, 1184), 3);
    add_background_object(create_fnfloor12_1659(4480, 1184), 3);
    add_background_object(create_fnfloor29_1706(4352, 1088), 3);
    add_background_object(create_fnfloor12_1659(4600, 800), 3);
    add_background_object(create_fnfloor14_1660(4336, 800), 3);
    add_background_object(create_fnfloor14_1660(4712, 800), 3);
    add_background_object(create_fnfloor8_1649(4504, 576), 3);
    add_background_object(create_fnfloor8_1649(4632, 576), 3);
    add_background_object(create_fnfloor8_1649(4504, 480), 3);
    add_background_object(create_fnfloor8_1649(4632, 480), 3);
    add_background_object(create_fnfloor8_1649(4224, 384), 3);
    add_background_object(create_fnfloor8_1649(4224, 480), 3);
    add_background_object(create_fnfloor8_1649(4224, 576), 3);
    add_background_object(create_fnfloor9_1688(4504, 576), 3);
    add_background_object(create_fnfloor9_1688(4600, 800), 3);
    add_background_object(create_fnfloor9_1688(4600, 896), 3);
    add_background_object(create_fnfloor9_1688(4504, 480), 3);
    add_background_object(create_fnfloor9_1688(4224, 576), 3);
    add_background_object(create_fnfloor9_1688(4224, 480), 3);
    add_background_object(create_fnfloor17_1661(4504, 656), 3);
    add_background_object(create_fnfloor17_1661(4600, 984), 3);
    add_background_object(create_fnfloor10_1692(4336, 480), 3);
    add_background_object(create_fnfloor10_1692(4336, 576), 3);
    add_background_object(create_fnredcolumnback_1646(4232, 672), 3);
    add_background_object(create_fnfloor13_1691(4600, 800), 3);
    add_background_object(create_fnfloor8_1649(6080, 288), 3);
    add_background_object(create_fnfloor10_1692(3952, 512), 3);
    add_background_object(create_fnfloor10_1692(3952, 416), 3);
    add_background_object(create_fnfloor10_1692(3952, 320), 3);
    add_background_object(create_fnfloor10_1692(3952, 224), 3);
    add_background_object(create_fnfloor10_1692(3952, 128), 3);
    add_background_object(create_fnfloor17_1661(4224, 656), 3);
    add_background_object(create_fnfloor12_1659(4224, 384), 3);
    add_background_object(create_fnfloor12_1659(6080, 288), 3);
    add_background_object(create_backwall2_1642(4096, 480), 3);
    add_background_object(create_fnfloor8_1649(4608, 1184), 3);
    add_background_object(create_fnfloor12_1659(4608, 1184), 3);
    add_background_object(create_fnfloor8_1649(4736, 1184), 3);
    add_background_object(create_fnfloor12_1659(4736, 1184), 3);
    add_background_object(create_fnfloor10_1692(6192, 288), 3);
    add_background_object(create_fnfloor14_1660(6192, 288), 3);
    add_background_object(create_fnfloor10_1692(4872, 480), 3);
    add_background_object(create_fnfloor10_1692(4744, 576), 3);
    add_background_object(create_fnfloor17_1661(4632, 656), 3);
    add_background_object(create_floor19_1697(6208, 288), 3);
    add_background_object(create_dragonslope1_1702(6384, 456), 3);
    add_background_object(create_floor22_1698(6432, 504), 3);
    add_background_object(create_floor19_1697(6560, 288), 3);
    add_background_object(create_floor23_1699(6560, 504), 3);
    add_background_object(create_floor22_1698(6784, 504), 3);
    add_background_object(create_floor19_1697(6912, 288), 3);
    add_background_object(create_floor23_1699(6912, 504), 3);
    add_background_object(create_floor22_1698(7232, 600), 3);
    add_background_object(create_fnrooftop3_1658(7256, 568), 3);
    add_background_object(create_dragonslope1_1702(6736, 456), 3);
    add_background_object(create_floor37_1813(7264, 254), 3);
    add_background_object(create_fnrooftop3_1658(7512, 288), 3);
    add_background_object(create_fnrooftop1_1686(7536, 568), 3);
    add_background_object(create_fnrooftop1_1686(7600, 568), 3);
    add_background_object(create_fnrooftop1_1686(7664, 568), 3);
    add_background_object(create_fnrooftop1_1686(7728, 568), 3);
    add_background_object(create_fnrooftop2_1687(7792, 288), 3);
    add_background_object(create_fnrooftop1_1686(7792, 568), 3);
    add_background_object(create_fnrooftop1_1686(7856, 568), 3);
    add_background_object(create_fnrooftop1_1686(7920, 568), 3);
    add_background_object(create_fnrooftop1_1686(7984, 568), 3);
    add_background_object(create_fnrooftop2_1687(8048, 568), 3);
    add_background_object(create_fnrooftop3_1658(7192, 848), 3);
    add_background_object(create_fnrooftop2_1687(8112, 848), 3);
    add_background_object(create_floor19_1697(4728, 800), 3);
    add_background_object(create_floor22_1698(4952, 1014), 3);
    add_background_object(create_dragonslope3_1851(4840, 1008), 3);
    add_background_object(create_dragonslope2_1795(4792, 1054), 3);
    add_background_object(create_dragonslope2_1795(4744, 1102), 3);
    add_background_object(create_fnfloor8_1649(4864, 1184), 3);
    add_background_object(create_fnsoil_1678(384, 1600), 3);
    add_background_object(create_fnsoil_1678(512, 1600), 3);
    add_background_object(create_fnsoil_1678(640, 1600), 3);
    add_background_object(create_fnsoil_1678(384, 1728), 3);
    add_background_object(create_fnsoil_1678(512, 1728), 3);
    add_background_object(create_fnsoil_1678(640, 1728), 3);
    add_background_object(create_fnsoil_1678(768, 1472), 3);
    add_background_object(create_fnsoil_1678(896, 1472), 3);
    add_background_object(create_fnsoil_1678(1024, 1472), 3);
    add_background_object(create_fnsoil_1678(768, 1600), 3);
    add_background_object(create_fnsoil_1678(896, 1600), 3);
    add_background_object(create_fnsoil_1678(1024, 1600), 3);
    add_background_object(create_fnsoil_1678(768, 1728), 3);
    add_background_object(create_fnsoil_1678(896, 1728), 3);
    add_background_object(create_fnsoil_1678(1024, 1728), 3);
    add_background_object(create_fnsoil_1678(1152, 1472), 3);
    add_background_object(create_fnsoil_1678(1280, 1472), 3);
    add_background_object(create_fnsoil_1678(1408, 1472), 3);
    add_background_object(create_fnsoil_1678(1152, 1600), 3);
    add_background_object(create_fnsoil_1678(1280, 1600), 3);
    add_background_object(create_fnsoil_1678(1408, 1600), 3);
    add_background_object(create_fnsoil_1678(1152, 1728), 3);
    add_background_object(create_fnsoil_1678(1280, 1728), 3);
    add_background_object(create_fnsoil_1678(1408, 1728), 3);
    add_background_object(create_fnsoil_1678(1536, 1472), 3);
    add_background_object(create_fnsoil_1678(1536, 1600), 3);
    add_background_object(create_fnsoil_1678(1536, 1728), 3);
    add_background_object(create_fnsoil_1678(1664, 1472), 3);
    add_background_object(create_fnsoil_1678(1792, 1536), 3);
    add_background_object(create_fnsoil_1678(1920, 1536), 3);
    add_background_object(create_fnsoil_1678(1664, 1600), 3);
    add_background_object(create_fnsoil_1678(1792, 1664), 3);
    add_background_object(create_fnsoil_1678(1920, 1664), 3);
    add_background_object(create_fnsoil_1678(1664, 1728), 3);
    add_background_object(create_fnsoil_1678(1792, 1792), 3);
    add_background_object(create_fnsoil_1678(1920, 1792), 3);
    add_background_object(create_fnfloor10_1692(1648, 1376), 3);
    add_background_object(create_fnfloor10_1692(1776, 1280), 3);
    add_background_object(create_fnsoil_1678(2048, 1280), 3);
    add_background_object(create_fnsoil_1678(2176, 1280), 3);
    add_background_object(create_fnsoil_1678(2048, 1408), 3);
    add_background_object(create_fnsoil_1678(2176, 1408), 3);
    add_background_object(create_fnsoil_1678(2048, 1536), 3);
    add_background_object(create_fnsoil_1678(2176, 1536), 3);
    add_background_object(create_fnsoil_1678(2048, 1664), 3);
    add_background_object(create_fnsoil_1678(2176, 1664), 3);
    add_background_object(create_fnsoil_1678(2048, 1792), 3);
    add_background_object(create_fnsoil_1678(2176, 1792), 3);
    add_background_object(create_fnsoil_1678(2304, 1280), 3);
    add_background_object(create_fnsoil_1678(2432, 1280), 3);
    add_background_object(create_fnsoil_1678(2304, 1408), 3);
    add_background_object(create_fnsoil_1678(2432, 1408), 3);
    add_background_object(create_fnsoil_1678(2304, 1536), 3);
    add_background_object(create_fnsoil_1678(2432, 1536), 3);
    add_background_object(create_fnsoil_1678(2304, 1664), 3);
    add_background_object(create_fnsoil_1678(2432, 1664), 3);
    add_background_object(create_fnsoil_1678(2304, 1792), 3);
    add_background_object(create_fnsoil_1678(2432, 1792), 3);
    add_background_object(create_fnsoil_1678(2560, 1280), 3);
    add_background_object(create_fnsoil_1678(2688, 1280), 3);
    add_background_object(create_fnsoil_1678(2560, 1408), 3);
    add_background_object(create_fnsoil_1678(2688, 1408), 3);
    add_background_object(create_fnsoil_1678(2560, 1536), 3);
    add_background_object(create_fnsoil_1678(2688, 1536), 3);
    add_background_object(create_fnsoil_1678(2560, 1664), 3);
    add_background_object(create_fnsoil_1678(2688, 1664), 3);
    add_background_object(create_fnsoil_1678(2560, 1792), 3);
    add_background_object(create_fnsoil_1678(2688, 1792), 3);
    add_background_object(create_fnsoil_1678(2816, 1280), 3);
    add_background_object(create_fnsoil_1678(2944, 1280), 3);
    add_background_object(create_fnsoil_1678(2816, 1408), 3);
    add_background_object(create_fnsoil_1678(2944, 1408), 3);
    add_background_object(create_fnsoil_1678(2816, 1536), 3);
    add_background_object(create_fnsoil_1678(2944, 1536), 3);
    add_background_object(create_fnsoil_1678(2816, 1664), 3);
    add_background_object(create_fnsoil_1678(2944, 1664), 3);
    add_background_object(create_fnsoil_1678(2816, 1792), 3);
    add_background_object(create_fnsoil_1678(2944, 1792), 3);
    add_background_object(create_fnsoil_1678(3072, 1280), 3);
    add_background_object(create_fnsoil_1678(3200, 1280), 3);
    add_background_object(create_fnsoil_1678(3072, 1408), 3);
    add_background_object(create_fnsoil_1678(3200, 1408), 3);
    add_background_object(create_fnsoil_1678(3072, 1536), 3);
    add_background_object(create_fnsoil_1678(3200, 1536), 3);
    add_background_object(create_fnsoil_1678(3072, 1664), 3);
    add_background_object(create_fnsoil_1678(3200, 1664), 3);
    add_background_object(create_fnsoil_1678(3072, 1792), 3);
    add_background_object(create_fnsoil_1678(3200, 1792), 3);
    add_background_object(create_fnsoil_1678(3328, 1280), 3);
    add_background_object(create_fnsoil_1678(3456, 1280), 3);
    add_background_object(create_fnsoil_1678(3328, 1408), 3);
    add_background_object(create_fnsoil_1678(3456, 1408), 3);
    add_background_object(create_fnsoil_1678(3328, 1536), 3);
    add_background_object(create_fnsoil_1678(3456, 1536), 3);
    add_background_object(create_fnsoil_1678(3328, 1664), 3);
    add_background_object(create_fnsoil_1678(3456, 1664), 3);
    add_background_object(create_fnsoil_1678(3328, 1792), 3);
    add_background_object(create_fnsoil_1678(3456, 1792), 3);
    add_background_object(create_fnsoil_1678(3584, 1280), 3);
    add_background_object(create_fnsoil_1678(3712, 1280), 3);
    add_background_object(create_fnsoil_1678(3584, 1408), 3);
    add_background_object(create_fnsoil_1678(3712, 1408), 3);
    add_background_object(create_fnsoil_1678(3584, 1536), 3);
    add_background_object(create_fnsoil_1678(3712, 1536), 3);
    add_background_object(create_fnsoil_1678(3584, 1664), 3);
    add_background_object(create_fnsoil_1678(3712, 1664), 3);
    add_background_object(create_fnsoil_1678(3584, 1792), 3);
    add_background_object(create_fnsoil_1678(3712, 1792), 3);
    add_background_object(create_fnsoil_1678(3840, 1280), 3);
    add_background_object(create_fnsoil_1678(3968, 1280), 3);
    add_background_object(create_fnsoil_1678(3840, 1408), 3);
    add_background_object(create_fnsoil_1678(3968, 1408), 3);
    add_background_object(create_fnsoil_1678(3840, 1536), 3);
    add_background_object(create_fnsoil_1678(3968, 1536), 3);
    add_background_object(create_fnsoil_1678(3840, 1664), 3);
    add_background_object(create_fnsoil_1678(3968, 1664), 3);
    add_background_object(create_fnsoil_1678(3840, 1792), 3);
    add_background_object(create_fnsoil_1678(3968, 1792), 3);
    add_background_object(create_fnsoil_1678(4096, 1280), 3);
    add_background_object(create_fnsoil_1678(4224, 1280), 3);
    add_background_object(create_fnsoil_1678(4096, 1408), 3);
    add_background_object(create_fnsoil_1678(4224, 1408), 3);
    add_background_object(create_fnsoil_1678(4096, 1536), 3);
    add_background_object(create_fnsoil_1678(4224, 1536), 3);
    add_background_object(create_fnsoil_1678(4096, 1664), 3);
    add_background_object(create_fnsoil_1678(4224, 1664), 3);
    add_background_object(create_fnsoil_1678(4096, 1792), 3);
    add_background_object(create_fnsoil_1678(4224, 1792), 3);
    add_background_object(create_fnsoil_1678(4352, 1280), 3);
    add_background_object(create_fnsoil_1678(4480, 1280), 3);
    add_background_object(create_fnsoil_1678(4352, 1408), 3);
    add_background_object(create_fnsoil_1678(4480, 1408), 3);
    add_background_object(create_fnsoil_1678(4352, 1536), 3);
    add_background_object(create_fnsoil_1678(4480, 1536), 3);
    add_background_object(create_fnsoil_1678(4352, 1664), 3);
    add_background_object(create_fnsoil_1678(4480, 1664), 3);
    add_background_object(create_fnsoil_1678(4352, 1792), 3);
    add_background_object(create_fnsoil_1678(4480, 1792), 3);
    add_background_object(create_fnsoil_1678(4608, 1280), 3);
    add_background_object(create_fnsoil_1678(4736, 1280), 3);
    add_background_object(create_fnsoil_1678(4608, 1408), 3);
    add_background_object(create_fnsoil_1678(4736, 1408), 3);
    add_background_object(create_fnsoil_1678(4608, 1536), 3);
    add_background_object(create_fnsoil_1678(4736, 1536), 3);
    add_background_object(create_fnsoil_1678(4608, 1664), 3);
    add_background_object(create_fnsoil_1678(4736, 1664), 3);
    add_background_object(create_fnsoil_1678(4608, 1792), 3);
    add_background_object(create_fnsoil_1678(4736, 1792), 3);
    add_background_object(create_fnsoil_1678(4864, 1280), 3);
    add_background_object(create_fnsoil_1678(4864, 1408), 3);
    add_background_object(create_fnsoil_1678(4864, 1536), 3);
    add_background_object(create_fnsoil_1678(4864, 1664), 3);
    add_background_object(create_fnsoil_1678(4864, 1792), 3);
    add_background_object(create_fnfloor8_1649(4992, 1088), 3);
    add_background_object(create_fnfloor12_1659(4992, 1088), 3);
    add_background_object(create_fnfloor8_1649(5120, 1088), 3);
    add_background_object(create_fnfloor12_1659(5120, 1088), 3);
    add_background_object(create_fnfloor8_1649(4992, 1184), 3);
    add_background_object(create_fnfloor35_1710(4864, 1088), 3);
    add_background_object(create_fnfloor36_1711(4864, 1088), 3);
    add_background_object(create_fnfloor8_1649(5248, 1184), 3);
    add_background_object(create_fnfloor12_1659(5248, 1184), 3);
    add_background_object(create_fnsoil_1678(4992, 1280), 3);
    add_background_object(create_fnsoil_1678(4992, 1408), 3);
    add_background_object(create_fnsoil_1678(4992, 1536), 3);
    add_background_object(create_fnsoil_1678(4992, 1664), 3);
    add_background_object(create_fnsoil_1678(4992, 1792), 3);
    add_background_object(create_fnsoil_1678(5120, 1280), 3);
    add_background_object(create_fnsoil_1678(5120, 1408), 3);
    add_background_object(create_fnsoil_1678(5120, 1536), 3);
    add_background_object(create_fnsoil_1678(5120, 1664), 3);
    add_background_object(create_fnsoil_1678(5120, 1792), 3);
    add_background_object(create_fnsoil_1678(5248, 1280), 3);
    add_background_object(create_fnsoil_1678(5248, 1408), 3);
    add_background_object(create_fnsoil_1678(5248, 1536), 3);
    add_background_object(create_fnsoil_1678(5248, 1664), 3);
    add_background_object(create_fnsoil_1678(5248, 1792), 3);
    add_background_object(create_fnfloor8_1649(5248, 784), 3);
    add_background_object(create_fnfloor12_1659(5248, 784), 3);
    add_background_object(create_floor34_1657(5120, 840), 3);
    add_background_object(create_floor34_1657(5152, 840), 3);
    add_background_object(create_floor34_1657(5184, 840), 3);
    add_background_object(create_floor34_1657(5216, 840), 3);
    add_background_object(create_fnfloor9_1688(5248, 784), 3);
    add_background_object(create_fnfloor13_1691(5248, 784), 3);
    add_background_object(create_fnfloor17_1661(5248, 872), 3);
    add_background_object(create_fnfloor12_1659(4760, 480), 3);
    add_background_object(create_fnfloor10_1692(4872, 480), 3);
    add_background_object(create_fnfloor14_1660(4872, 480), 3);
    add_background_object(create_fnfloor8_1649(5504, 480), 3);
    add_background_object(create_fnfloor12_1659(5504, 480), 3);
    add_background_object(create_fnfloor9_1688(5504, 480), 3);
    add_background_object(create_fnfloor13_1691(5504, 480), 3);
    add_background_object(create_fnfloor12_1659(5632, 528), 3);
    add_background_object(create_fnfloor8_1649(5376, 784), 3);
    add_background_object(create_fnfloor12_1659(5376, 784), 3);
    add_background_object(create_fnfloor17_1661(5376, 872), 3);
    add_background_object(create_fnfloor8_1649(5120, 1184), 3);
    add_background_object(create_fnfloor10_1692(5232, 1088), 3);
    add_background_object(create_fnfloor14_1660(5232, 1088), 3);
    add_background_object(create_floor34_1657(5088, 1048), 3);
    add_background_object(create_floor34_1657(5120, 1048), 3);
    add_background_object(create_fnfloor8_1649(5376, 1184), 3);
    add_background_object(create_fnfloor12_1659(5376, 1184), 3);
    add_background_object(create_fnsoil_1678(5376, 1280), 3);
    add_background_object(create_fnsoil_1678(5504, 1280), 3);
    add_background_object(create_fnsoil_1678(5632, 1280), 3);
    add_background_object(create_fnsoil_1678(5760, 1280), 3);
    add_background_object(create_fnsoil_1678(5888, 1280), 3);
    add_background_object(create_fnsoil_1678(6016, 1280), 3);
    add_background_object(create_fnsoil_1678(5504, 1408), 3);
    add_background_object(create_fnsoil_1678(5632, 1408), 3);
    add_background_object(create_fnsoil_1678(5760, 1408), 3);
    add_background_object(create_fnsoil_1678(5888, 1408), 3);
    add_background_object(create_fnsoil_1678(6016, 1408), 3);
    add_background_object(create_fnsoil_1678(5504, 1536), 3);
    add_background_object(create_fnsoil_1678(5632, 1536), 3);
    add_background_object(create_fnsoil_1678(5760, 1536), 3);
    add_background_object(create_fnsoil_1678(5888, 1536), 3);
    add_background_object(create_fnsoil_1678(6016, 1536), 3);
    add_background_object(create_fnsoil_1678(5504, 1664), 3);
    add_background_object(create_fnsoil_1678(5632, 1664), 3);
    add_background_object(create_fnsoil_1678(5760, 1664), 3);
    add_background_object(create_fnsoil_1678(5888, 1664), 3);
    add_background_object(create_fnsoil_1678(6016, 1664), 3);
    add_background_object(create_fnsoil_1678(5504, 1792), 3);
    add_background_object(create_fnsoil_1678(5632, 1792), 3);
    add_background_object(create_fnsoil_1678(5760, 1792), 3);
    add_background_object(create_fnsoil_1678(5888, 1792), 3);
    add_background_object(create_fnsoil_1678(6016, 1792), 3);
    add_background_object(create_fnsoil_1678(5376, 1408), 3);
    add_background_object(create_fnsoil_1678(5376, 1536), 3);
    add_background_object(create_fnsoil_1678(5376, 1664), 3);
    add_background_object(create_fnsoil_1678(5376, 1792), 3);
    add_background_object(create_fnfloor8_1649(5504, 576), 3);
    add_background_object(create_fnfloor9_1688(5504, 576), 3);
    add_background_object(create_fnfloor10_1692(5616, 576), 3);
    add_background_object(create_fnfloor17_1661(5504, 664), 3);
    add_background_object(create_fnfloor17_1661(5632, 568), 3);
    add_background_object(create_fnfloor8_1649(5504, 784), 3);
    add_background_object(create_fnfloor12_1659(5504, 784), 3);
    add_background_object(create_fnfloor17_1661(5504, 872), 3);
    add_background_object(create_fnfloor10_1692(5488, 1184), 3);
    add_background_object(create_fnfloor14_1660(5488, 1184), 3);
    add_background_object(create_fnfloor12_1659(5504, 1280), 3);
    add_background_object(create_fnfloor12_1659(5632, 1280), 3);
    add_background_object(create_fnfloor12_1659(5376, 1280), 3);
    add_background_object(create_fnfloor12_1659(5248, 1280), 3);
    add_background_object(create_fnfloor12_1659(5120, 1280), 3);
    add_background_object(create_fnfloor8_1649(4992, 1280), 3);
    add_background_object(create_fnfloor10_1692(5104, 1280), 3);
    add_background_object(create_fnfloor9_1688(4992, 1280), 3);
    add_background_object(create_fnfloor12_1659(5760, 1280), 3);
    add_background_object(create_fnbackhedge_1666(5504, 1216), 3);
    add_background_object(create_birchtree_1846(5632, 1152), 3);
    add_background_object(create_fnfloor12_1659(5888, 1280), 3);
    add_background_object(create_fnfloor12_1659(6016, 1280), 3);
    add_background_object(create_birchtree_1846(5760, 1152), 3);
    add_background_object(create_birchtree_1846(6064, 1128), 3);
    add_background_object(create_birchtree_1846(4448, 1056), 3);
    add_background_object(create_birchtree_1846(6384, 1128), 3);
    add_background_object(create_fnfloor10_1692(6128, 1280), 3);
    add_background_object(create_fnfloor14_1660(6128, 1280), 3);
    add_background_object(create_fnfloor12_1659(6144, 1352), 3);
    add_background_object(create_fnsoil_1678(6144, 1376), 3);
    add_background_object(create_fnsoil_1678(6144, 1504), 3);
    add_background_object(create_fnsoil_1678(6144, 1632), 3);
    add_background_object(create_fnsoil_1678(6144, 1760), 3);
    add_background_object(create_fnfloor12_1659(6272, 1352), 3);
    add_background_object(create_fnsoil_1678(6272, 1376), 3);
    add_background_object(create_fnsoil_1678(6272, 1504), 3);
    add_background_object(create_fnsoil_1678(6272, 1632), 3);
    add_background_object(create_fnsoil_1678(6272, 1760), 3);
    add_background_object(create_fnsoil_1678(6400, 1280), 3);
    add_background_object(create_fnsoil_1678(6400, 1376), 3);
    add_background_object(create_fnsoil_1678(6400, 1504), 3);
    add_background_object(create_fnsoil_1678(6400, 1632), 3);
    add_background_object(create_fnsoil_1678(6400, 1760), 3);
    add_background_object(create_fnsoil_1678(6528, 1280), 3);
    add_background_object(create_fnsoil_1678(6528, 1376), 3);
    add_background_object(create_fnsoil_1678(6528, 1504), 3);
    add_background_object(create_fnsoil_1678(6528, 1632), 3);
    add_background_object(create_fnsoil_1678(6528, 1760), 3);
    add_background_object(create_fnfloor9_1688(6400, 1280), 3);
    add_background_object(create_fnfloor12_1659(6400, 1280), 3);
    add_background_object(create_fnfloor13_1691(6400, 1280), 3);
    add_background_object(create_fnfloor12_1659(6528, 1280), 3);
    add_background_object(create_fnbackhedge_1666(6144, 1288), 3);
    add_background_object(create_fnbackhedge_1666(6272, 1288), 3);
    add_background_object(create_edgeoverlay_1805(6216, 1328), 3);
    add_background_object(create_edgeoverlay_1805(6288, 1328), 3);
    add_background_object(create_fnfloor35_1710(6656, 1184), 3);
    add_background_object(create_fnfloor36_1711(6656, 1184), 3);
    add_background_object(create_fnsoil_1678(6656, 1504), 3);
    add_background_object(create_fnsoil_1678(6656, 1632), 3);
    add_background_object(create_fnsoil_1678(6656, 1760), 3);
    add_background_object(create_fnsoil_1678(6656, 1376), 3);
    add_background_object(create_fnfloor8_1649(6784, 1280), 3);
    add_background_object(create_fnfloor8_1649(6784, 1184), 3);
    add_background_object(create_fnfloor12_1659(6784, 1184), 3);
    add_background_object(create_fnsoil_1678(6784, 1504), 3);
    add_background_object(create_fnsoil_1678(6784, 1632), 3);
    add_background_object(create_fnsoil_1678(6784, 1760), 3);
    add_background_object(create_fnsoil_1678(6784, 1376), 3);
    add_background_object(create_fnfloor8_1649(6912, 1280), 3);
    add_background_object(create_fnfloor8_1649(6912, 1184), 3);
    add_background_object(create_fnfloor12_1659(6912, 1184), 3);
    add_background_object(create_fnsoil_1678(6912, 1504), 3);
    add_background_object(create_fnsoil_1678(6912, 1632), 3);
    add_background_object(create_fnsoil_1678(6912, 1760), 3);
    add_background_object(create_fnsoil_1678(6912, 1376), 3);
    add_background_object(create_birchtree_1846(6544, 1152), 3);
    add_background_object(create_lamppostback_1709(6496, 1200), 3);
    add_background_object(create_birchtree_1846(6784, 1056), 3);
    add_background_object(create_fnfloor20_1667(7040, 1136), 3);
    add_background_object(create_fnfloor8_1649(7040, 1280), 3);
    add_background_object(create_fnfloor8_1649(7040, 1184), 3);
    add_background_object(create_fnfloor8_1649(7168, 1184), 3);
    add_background_object(create_fnfloor8_1649(7168, 1088), 3);
    add_background_object(create_fnfloor12_1659(7040, 1136), 3);
    add_background_object(create_fnfloor12_1659(7168, 1088), 3);
    add_background_object(create_fnfloor13_1691(7040, 1136), 3);
    add_background_object(create_fnfloor13_1691(7168, 1088), 3);
    add_background_object(create_fnsoil_1678(7040, 1504), 3);
    add_background_object(create_fnsoil_1678(7040, 1632), 3);
    add_background_object(create_fnsoil_1678(7040, 1760), 3);
    add_background_object(create_fnsoil_1678(7040, 1376), 3);
    add_background_object(create_fnsoil_1678(7168, 1504), 3);
    add_background_object(create_fnsoil_1678(7168, 1632), 3);
    add_background_object(create_fnsoil_1678(7168, 1760), 3);
    add_background_object(create_fnsoil_1678(7168, 1376), 3);
    add_background_object(create_fnfloor10_1692(7152, 1280), 3);
    add_background_object(create_fnsoil_1678(7296, 1248), 3);
    add_background_object(create_fnfloor8_1649(7296, 1184), 3);
    add_background_object(create_fnfloor8_1649(7296, 1088), 3);
    add_background_object(create_fnfloor12_1659(7296, 1088), 3);
    add_background_object(create_fnsoil_1678(7296, 1504), 3);
    add_background_object(create_fnsoil_1678(7296, 1632), 3);
    add_background_object(create_fnsoil_1678(7296, 1760), 3);
    add_background_object(create_fnsoil_1678(7296, 1376), 3);
    add_background_object(create_fnsoil_1678(7424, 1248), 3);
    add_background_object(create_fnfloor8_1649(7424, 1184), 3);
    add_background_object(create_fnfloor8_1649(7424, 1088), 3);
    add_background_object(create_fnfloor12_1659(7424, 1088), 3);
    add_background_object(create_fnsoil_1678(7424, 1504), 3);
    add_background_object(create_fnsoil_1678(7424, 1632), 3);
    add_background_object(create_fnsoil_1678(7424, 1760), 3);
    add_background_object(create_fnsoil_1678(7424, 1376), 3);
    add_background_object(create_fnsoil_1678(7552, 1248), 3);
    add_background_object(create_fnfloor8_1649(7552, 1184), 3);
    add_background_object(create_fnfloor8_1649(7552, 1088), 3);
    add_background_object(create_fnfloor12_1659(7552, 1088), 3);
    add_background_object(create_fnsoil_1678(7552, 1504), 3);
    add_background_object(create_fnsoil_1678(7552, 1632), 3);
    add_background_object(create_fnsoil_1678(7552, 1760), 3);
    add_background_object(create_fnsoil_1678(7552, 1376), 3);
    add_background_object(create_fnsoil_1678(7680, 1248), 3);
    add_background_object(create_fnfloor8_1649(7680, 1184), 3);
    add_background_object(create_fnfloor8_1649(7680, 1088), 3);
    add_background_object(create_fnfloor12_1659(7680, 1088), 3);
    add_background_object(create_fnsoil_1678(7680, 1504), 3);
    add_background_object(create_fnsoil_1678(7680, 1632), 3);
    add_background_object(create_fnsoil_1678(7680, 1760), 3);
    add_background_object(create_fnsoil_1678(7680, 1376), 3);
    add_background_object(create_fnsoil_1678(7808, 1248), 3);
    add_background_object(create_fnfloor8_1649(7808, 1184), 3);
    add_background_object(create_fnfloor8_1649(7808, 1088), 3);
    add_background_object(create_fnfloor12_1659(7808, 1088), 3);
    add_background_object(create_fnsoil_1678(7808, 1504), 3);
    add_background_object(create_fnsoil_1678(7808, 1632), 3);
    add_background_object(create_fnsoil_1678(7808, 1760), 3);
    add_background_object(create_fnsoil_1678(7808, 1376), 3);
    add_background_object(create_fnsoil_1678(7936, 1248), 3);
    add_background_object(create_fnfloor8_1649(7936, 1184), 3);
    add_background_object(create_fnfloor8_1649(7936, 1088), 3);
    add_background_object(create_fnfloor12_1659(7936, 1088), 3);
    add_background_object(create_fnsoil_1678(7936, 1504), 3);
    add_background_object(create_fnsoil_1678(7936, 1632), 3);
    add_background_object(create_fnsoil_1678(7936, 1760), 3);
    add_background_object(create_fnsoil_1678(7936, 1376), 3);
    add_background_object(create_fnsoil_1678(8064, 1248), 3);
    add_background_object(create_fnfloor8_1649(8064, 1184), 3);
    add_background_object(create_fnfloor8_1649(8064, 1088), 3);
    add_background_object(create_fnfloor12_1659(8064, 1088), 3);
    add_background_object(create_fnsoil_1678(8064, 1504), 3);
    add_background_object(create_fnsoil_1678(8064, 1632), 3);
    add_background_object(create_fnsoil_1678(8064, 1760), 3);
    add_background_object(create_fnsoil_1678(8064, 1376), 3);
    add_background_object(create_fnsoil_1678(8192, 1248), 3);
    add_background_object(create_fnfloor8_1649(8192, 1184), 3);
    add_background_object(create_fnfloor8_1649(8192, 1088), 3);
    add_background_object(create_fnfloor12_1659(8192, 1088), 3);
    add_background_object(create_fnsoil_1678(8192, 1504), 3);
    add_background_object(create_fnsoil_1678(8192, 1632), 3);
    add_background_object(create_fnsoil_1678(8192, 1760), 3);
    add_background_object(create_fnsoil_1678(8192, 1376), 3);
    add_background_object(create_fnsoil_1678(8320, 1248), 3);
    add_background_object(create_fnfloor8_1649(8320, 1184), 3);
    add_background_object(create_fnfloor8_1649(8320, 1088), 3);
    add_background_object(create_fnfloor12_1659(8320, 1088), 3);
    add_background_object(create_fnsoil_1678(8320, 1504), 3);
    add_background_object(create_fnsoil_1678(8320, 1632), 3);
    add_background_object(create_fnsoil_1678(8320, 1760), 3);
    add_background_object(create_fnsoil_1678(8320, 1376), 3);
    add_background_object(create_backwall2_1642(6912, 1088), 3);
    add_background_object(create_backwall2_1642(7040, 992), 3);
    add_background_object(create_fnbackwall4_1647(7168, 992), 3);
    add_background_object(create_backwall2_1642(7296, 992), 3);
    add_background_object(create_fnbackwall4_1647(7424, 992), 3);
    add_background_object(create_backwall2_1642(7552, 992), 3);
    add_background_object(create_fnbackwall4_1647(7680, 992), 3);
    add_background_object(create_fnfloor8_1649(8576, 1184), 3);
    add_background_object(create_fnfloor8_1649(8576, 1088), 3);
    add_background_object(create_fnfloor8_1649(8576, 992), 3);
    add_background_object(create_fnfloor8_1649(8576, 896), 3);
    add_background_object(create_fnfloor8_1649(8448, 1184), 3);
    add_background_object(create_fnfloor8_1649(8448, 1088), 3);
    add_background_object(create_fnfloor12_1659(8448, 1088), 3);
    add_background_object(create_fnfloor8_1649(8704, 1184), 3);
    add_background_object(create_fnfloor8_1649(8704, 1088), 3);
    add_background_object(create_fnfloor8_1649(8704, 992), 3);
    add_background_object(create_fnfloor8_1649(8704, 896), 3);
    add_background_object(create_fnfloor8_1649(8832, 1184), 3);
    add_background_object(create_fnfloor8_1649(8832, 1088), 3);
    add_background_object(create_fnfloor8_1649(8960, 1184), 3);
    add_background_object(create_fnfloor8_1649(8960, 1088), 3);
    add_background_object(create_fnfloor8_1649(8960, 992), 3);
    add_background_object(create_fnfloor8_1649(8960, 896), 3);
    add_background_object(create_fnfloor8_1649(9088, 1184), 3);
    add_background_object(create_fnfloor8_1649(9088, 1088), 3);
    add_background_object(create_fnfloor8_1649(9088, 992), 3);
    add_background_object(create_fnfloor8_1649(9088, 896), 3);
    add_background_object(create_fnfloor8_1649(8960, 800), 3);
    add_background_object(create_fnfloor8_1649(8960, 704), 3);
    add_background_object(create_fnfloor8_1649(9088, 800), 3);
    add_background_object(create_fnfloor8_1649(9088, 704), 3);
    add_background_object(create_fnfloor8_1649(5632, 784), 3);
    add_background_object(create_fnfloor12_1659(5632, 784), 3);
    add_background_object(create_fnfloor17_1661(5632, 872), 3);
    add_background_object(create_fnfloor15_1693(5888, 480), 3);
    add_background_object(create_fnfloor16_1694(5888, 480), 3);
    add_background_object(create_fnfloor8_1649(5760, 480), 3);
    add_background_object(create_fnfloor12_1659(5760, 480), 3);
    add_background_object(create_fnfloor17_1661(5760, 568), 3);
    add_background_object(create_dragonslope3_1851(6280, 456), 3);
    add_background_object(create_dragonslope2_1795(6232, 502), 3);
    add_background_object(create_floor37_1813(6160, 542), 3);
    add_background_object(create_fnfloor8_1649(6016, 576), 3);
    add_background_object(create_fnfloor12_1659(6016, 576), 3);
    add_background_object(create_fnfloor9_1688(5888, 576), 3);
    add_background_object(create_fnfloor17_1661(5888, 664), 3);
    add_background_object(create_fnfloor10_1692(6128, 576), 3);
    add_background_object(create_fnfloor17_1661(6016, 664), 3);
    add_background_object(create_fnfloor14_1660(6128, 576), 3);
    add_background_object(create_fnfloor14_1660(5616, 480), 3);
    add_background_object(create_fnfloor13_1691(5760, 480), 3);
    add_background_object(create_fnfloor9_1688(6080, 288), 3);
    add_background_object(create_fnfloor13_1691(6080, 288), 3);
    add_background_object(create_fnfloor17_1661(6080, 376), 3);
    add_background_object(create_fnladder_1662(6040, 288), 3);
    add_background_object(create_fnladder_1662(6040, 320), 3);
    add_background_object(create_fnladder_1662(6040, 352), 3);
    add_background_object(create_fnladder_1662(6040, 384), 3);
    add_background_object(create_fnladder_1662(6040, 416), 3);
    add_background_object(create_fnladder_1662(6040, 448), 3);
    add_background_object(create_fnfloor9_1688(8576, 992), 3);
    add_background_object(create_fnfloor10_1692(8816, 992), 3);
    add_background_object(create_fnfloor12_1659(8832, 1088), 3);
    add_background_object(create_fnfloor9_1688(8960, 992), 3);
    add_background_object(create_fnfloor9_1688(8960, 896), 3);
    add_background_object(create_fnfloor9_1688(8960, 800), 3);
    add_background_object(create_fnfloor9_1688(8960, 704), 3);
    add_background_object(create_gimmickrollingarchback_1689(9056, 576), 3);
    add_background_object(create_fnfloor8_1649(8960, 608), 3);
    add_background_object(create_fnfloor8_1649(9088, 608), 3);
    add_background_object(create_fnfloor10_1692(9200, 704), 3);
    add_background_object(create_fnfloor8_1649(9216, 800), 3);
    add_background_object(create_fnfloor8_1649(9216, 896), 3);
    add_background_object(create_fnfloor8_1649(9344, 800), 3);
    add_background_object(create_fnfloor8_1649(9344, 896), 3);
    add_background_object(create_fnfloor12_1659(9216, 800), 3);
    add_background_object(create_fnfloor29_1706(9216, 704), 3);
    add_background_object(create_fnfloor8_1649(9472, 896), 3);
    add_background_object(create_fnfloor8_1649(9728, 320), 3);
    add_background_object(create_fnfloor8_1649(9600, 512), 3);
    add_background_object(create_fnfloor20_1667(9856, 176), 3);
    add_background_object(create_fnfloor12_1659(9856, 176), 3);
    add_background_object(create_fnfloor8_1649(9856, 320), 3);
    add_background_object(create_fnfloor8_1649(10752, 512), 3);
    add_background_object(create_fnfloor8_1649(9856, 224), 3);
    add_background_object(create_fnfloor8_1649(9984, 224), 3);
    add_background_object(create_fnfloor8_1649(9984, 320), 3);
    add_background_object(create_fnfloor8_1649(10880, 512), 3);
    add_background_object(create_fnfloor8_1649(9600, 896), 3);
    add_background_object(create_fnfloor8_1649(10624, 896), 3);
    add_background_object(create_fnfloor8_1649(10624, 800), 3);
    add_background_object(create_fnfloor8_1649(9216, 992), 3);
    add_background_object(create_fnfloor8_1649(9344, 992), 3);
    add_background_object(create_fnfloor8_1649(9472, 992), 3);
    add_background_object(create_fnfloor8_1649(9600, 992), 3);
    add_background_object(create_fnfloor8_1649(10624, 992), 3);
    add_background_object(create_fnfloor8_1649(9984, 416), 3);
    add_background_object(create_fnfloor20_1667(9984, 176), 3);
    add_background_object(create_fnfloor12_1659(9984, 176), 3);
    add_background_object(create_fnstatue_1714(5928, 1168), 3);
    add_background_object(create_fnsoil_1678(8448, 1504), 3);
    add_background_object(create_fnsoil_1678(8448, 1632), 3);
    add_background_object(create_fnsoil_1678(8448, 1760), 3);
    add_background_object(create_fnsoil_1678(8448, 1376), 3);
    add_background_object(create_fnsoil_1678(8576, 1504), 3);
    add_background_object(create_fnsoil_1678(8576, 1632), 3);
    add_background_object(create_fnsoil_1678(8576, 1760), 3);
    add_background_object(create_fnsoil_1678(8576, 1376), 3);
    add_background_object(create_fnsoil_1678(8704, 1504), 3);
    add_background_object(create_fnsoil_1678(8704, 1632), 3);
    add_background_object(create_fnsoil_1678(8704, 1760), 3);
    add_background_object(create_fnsoil_1678(8704, 1376), 3);
    add_background_object(create_fnsoil_1678(8832, 1504), 3);
    add_background_object(create_fnsoil_1678(8832, 1632), 3);
    add_background_object(create_fnsoil_1678(8832, 1760), 3);
    add_background_object(create_fnsoil_1678(8832, 1376), 3);
    add_background_object(create_fnsoil_1678(8960, 1504), 3);
    add_background_object(create_fnsoil_1678(8960, 1632), 3);
    add_background_object(create_fnsoil_1678(8960, 1760), 3);
    add_background_object(create_fnsoil_1678(8960, 1376), 3);
    add_background_object(create_fnsoil_1678(9088, 1504), 3);
    add_background_object(create_fnsoil_1678(9088, 1632), 3);
    add_background_object(create_fnsoil_1678(9088, 1760), 3);
    add_background_object(create_fnsoil_1678(9088, 1376), 3);
    add_background_object(create_fnfloor35_1710(9600, 272), 3);
    add_background_object(create_fnfloor36_1711(9600, 272), 3);
    add_background_object(create_fnfloor35_1710(9728, 176), 3);
    add_background_object(create_fnfloor36_1711(9728, 176), 3);
    add_background_object(create_fnwall18_1695(824, 32), 3);
    add_background_object(create_fnwall19_1696(840, -112), 3);
    add_background_object(create_fnwall18_1695(1904, 104), 3);
    add_background_object(create_fnwall19_1696(1920, -40), 3);
    add_background_object(create_lamppostback_1709(928, 240), 3);
    add_background_object(create_fnfloor8_1649(5760, 784), 3);
    add_background_object(create_fnfloor12_1659(5760, 784), 3);
    add_background_object(create_fnfloor17_1661(5760, 872), 3);
    add_background_object(create_fnfloor8_1649(5888, 784), 3);
    add_background_object(create_fnfloor12_1659(5888, 784), 3);
    add_background_object(create_fnfloor17_1661(5888, 872), 3);
    add_background_object(create_fnfloor12_1659(9536, 752), 3);
    add_background_object(create_fnfloor8_1649(8832, 272), 3);
    add_background_object(create_fnfloor9_1688(8832, 176), 3);
    add_background_object(create_fnfloor8_1649(9280, 128), 3);
    add_background_object(create_fnfloor8_1649(8832, 80), 3);
    add_background_object(create_fnfloor10_1692(9392, 128), 3);
    add_background_object(create_fnfloor9_1688(8832, 80), 3);
    add_background_object(create_fnfloor8_1649(9280, 32), 3);
    add_background_object(create_fnfloor8_1649(8832, -16), 3);
    add_background_object(create_fnfloor10_1692(9392, 32), 3);
    add_background_object(create_fnfloor9_1688(8832, -16), 3);
    add_background_object(create_fnfloor8_1649(10624, 512), 3);
    add_background_object(create_fnbackwall6_1648(9344, 704), 3);
    add_background_object(create_fnbackwall1_1645(9344, 608), 3);
    add_background_object(create_fnbackwall3_1663(9472, 608), 3);
    add_background_object(create_backwall2_1642(9472, 512), 3);
    add_background_object(create_fnbackwall4_1647(9344, 512), 3);
    add_background_object(create_fnbackwall5_1643(9472, 416), 3);
    add_background_object(create_fnfloor9_1688(9600, 512), 3);
    add_background_object(create_fnfloor8_1649(10112, 224), 3);
    add_background_object(create_fnfloor8_1649(10112, 320), 3);
    add_background_object(create_fnfloor8_1649(10112, 416), 3);
    add_background_object(create_fnfloor12_1659(10112, 224), 3);
    add_background_object(create_fnfloor14_1660(10096, 176), 3);
    add_background_object(create_fnfloor8_1649(10240, 224), 3);
    add_background_object(create_fnfloor8_1649(10240, 320), 3);
    add_background_object(create_fnfloor8_1649(10240, 416), 3);
    add_background_object(create_fnfloor12_1659(10240, 224), 3);
    add_background_object(create_fnfloor8_1649(10368, 224), 3);
    add_background_object(create_fnfloor8_1649(10368, 320), 3);
    add_background_object(create_fnfloor8_1649(10368, 416), 3);
    add_background_object(create_fnfloor12_1659(10368, 224), 3);
    add_background_object(create_fnfloor8_1649(10496, 224), 3);
    add_background_object(create_fnfloor8_1649(10496, 320), 3);
    add_background_object(create_fnfloor8_1649(10496, 416), 3);
    add_background_object(create_fnfloor12_1659(10496, 224), 3);
    add_background_object(create_fnfloor8_1649(10624, 224), 3);
    add_background_object(create_fnfloor8_1649(10624, 320), 3);
    add_background_object(create_fnfloor8_1649(10624, 416), 3);
    add_background_object(create_fnfloor8_1649(10752, 320), 3);
    add_background_object(create_fnfloor8_1649(10752, 416), 3);
    add_background_object(create_fnfloor8_1649(10880, 368), 3);
    add_background_object(create_lamppostback_1709(10048, 96), 3);
    add_background_object(create_fnfloor8_1649(11392, 368), 3);
    add_background_object(create_fnfloor8_1649(11520, 320), 3);
    add_background_object(create_fnfloor8_1649(11648, 320), 3);
    add_background_object(create_fnfloor8_1649(11648, 416), 3);
    add_background_object(create_fnfloor8_1649(11776, 224), 3);
    add_background_object(create_fnfloor8_1649(11776, 320), 3);
    add_background_object(create_fnfloor8_1649(11776, 416), 3);
    add_background_object(create_fnfloor12_1659(11776, 224), 3);
    add_background_object(create_fnfloor8_1649(11904, 224), 3);
    add_background_object(create_fnfloor8_1649(11904, 320), 3);
    add_background_object(create_fnfloor8_1649(11904, 416), 3);
    add_background_object(create_fnfloor12_1659(11904, 224), 3);
    add_background_object(create_fnfloor8_1649(12032, 224), 3);
    add_background_object(create_fnfloor8_1649(12032, 320), 3);
    add_background_object(create_fnfloor8_1649(12032, 416), 3);
    add_background_object(create_fnfloor12_1659(12032, 224), 3);
    add_background_object(create_fnfloor8_1649(12160, 224), 3);
    add_background_object(create_fnfloor8_1649(12160, 320), 3);
    add_background_object(create_fnfloor8_1649(12160, 416), 3);
    add_background_object(create_fnfloor12_1659(12160, 224), 3);
    add_background_object(create_fnfloor8_1649(11392, 512), 3);
    add_background_object(create_fnfloor8_1649(11520, 512), 3);
    add_background_object(create_fnfloor8_1649(11520, 416), 3);
    add_background_object(create_fnfloor8_1649(11648, 512), 3);
    add_background_object(create_fnfloor8_1649(11776, 512), 3);
    add_background_object(create_fnfloor8_1649(11904, 512), 3);
    add_background_object(create_fnfloor8_1649(12032, 512), 3);
    add_background_object(create_fnfloor8_1649(10752, 896), 3);
    add_background_object(create_fnfloor8_1649(10752, 800), 3);
    add_background_object(create_fnfloor8_1649(10752, 992), 3);
    add_background_object(create_fnfloor8_1649(10752, 704), 3);
    add_background_object(create_fnfloor8_1649(10752, 1088), 3);
    add_background_object(create_fnfloor12_1659(10624, 224), 3);
    add_background_object(create_fnfloor8_1649(11648, 224), 3);
    add_background_object(create_fnfloor12_1659(11392, 368), 3);
    add_background_object(create_fnfloor12_1659(11648, 224), 3);
    add_background_object(create_fnfloor15_1693(10752, 224), 3);
    add_background_object(create_fnfloor16_1694(10752, 224), 3);
    add_background_object(create_fnfloor35_1710(11520, 224), 3);
    add_background_object(create_fnfloor36_1711(11520, 224), 3);
    add_background_object(create_fnfloor8_1649(12288, 224), 3);
    add_background_object(create_fnfloor8_1649(12288, 320), 3);
    add_background_object(create_fnfloor8_1649(12288, 416), 3);
    add_background_object(create_fnfloor12_1659(12288, 224), 3);
    add_background_object(create_fnfloor8_1649(12416, 224), 3);
    add_background_object(create_fnfloor8_1649(12416, 320), 3);
    add_background_object(create_fnfloor8_1649(12416, 416), 3);
    add_background_object(create_fnfloor12_1659(12416, 224), 3);
    add_background_object(create_fnfloor8_1649(12544, 224), 3);
    add_background_object(create_fnfloor8_1649(12544, 320), 3);
    add_background_object(create_fnfloor8_1649(12544, 416), 3);
    add_background_object(create_fnfloor12_1659(12544, 224), 3);
    add_background_object(create_fnfloor8_1649(12672, 224), 3);
    add_background_object(create_fnfloor8_1649(12672, 320), 3);
    add_background_object(create_fnfloor8_1649(12672, 416), 3);
    add_background_object(create_fnfloor12_1659(12672, 224), 3);
    add_background_object(create_fnfloor8_1649(12416, 512), 3);
    add_background_object(create_fnfloor8_1649(12544, 512), 3);
    add_background_object(create_fnfloor8_1649(12672, 512), 3);
    add_background_object(create_fnfloor8_1649(12800, 224), 3);
    add_background_object(create_fnfloor8_1649(12800, 320), 3);
    add_background_object(create_fnfloor8_1649(12800, 416), 3);
    add_background_object(create_fnfloor12_1659(12800, 224), 3);
    add_background_object(create_fnfloor8_1649(12928, 224), 3);
    add_background_object(create_fnfloor8_1649(12928, 320), 3);
    add_background_object(create_fnfloor8_1649(12928, 416), 3);
    add_background_object(create_fnfloor12_1659(12928, 224), 3);
    add_background_object(create_fnfloor8_1649(13056, 224), 3);
    add_background_object(create_fnfloor8_1649(13056, 320), 3);
    add_background_object(create_fnfloor12_1659(13056, 224), 3);
    add_background_object(create_fnfloor8_1649(12800, 512), 3);
    add_background_object(create_fnfloor8_1649(12928, 512), 3);
    add_background_object(create_fnfloor8_1649(13184, 224), 3);
    add_background_object(create_fnfloor8_1649(13184, 320), 3);
    add_background_object(create_fnfloor8_1649(13056, 416), 3);
    add_background_object(create_fnfloor12_1659(13184, 224), 3);
    add_background_object(create_fnfloor8_1649(13312, 224), 3);
    add_background_object(create_fnfloor12_1659(13312, 224), 3);
    add_background_object(create_fnfloor8_1649(13440, 224), 3);
    add_background_object(create_fnfloor12_1659(13440, 224), 3);
    add_background_object(create_fnfloor8_1649(13056, 512), 3);
    add_background_object(create_fnfloor8_1649(13952, 32), 3);
    add_background_object(create_fnfloor8_1649(13952, -64), 3);
    add_background_object(create_fnfloor9_1688(13952, -64), 3);
    add_background_object(create_fnfloor9_1688(13952, 32), 3);
    add_background_object(create_fnfloor17_1661(13952, 120), 3);
    add_background_object(create_lamppostback_1709(10264, 144), 3);
    add_background_object(create_lamppostback_1709(10568, 144), 3);
    add_background_object(create_lamppostback_1709(10992, 288), 3);
    add_background_object(create_lamppostback_1709(11376, 288), 3);
    add_background_object(create_lamppostback_1709(11184, 288), 3);
    add_background_object(create_lamppostback_1709(11680, 144), 3);
    add_background_object(create_fnwall16_1669(10368, 128), 3);
    add_background_object(create_fnwall14_1668(10304, 128), 3);
    add_background_object(create_fnwall14_1668(10496, 128), 3);
    add_background_object(create_fnapartmentwall2_1677(10304, 80), 3);
    add_background_object(create_fnapartmentwall2_1677(10432, 80), 3);
    add_background_object(create_fnapartmentwall1_1655(10304, -16), 3);
    add_background_object(create_fnapartmentwindow_1656(10368, -16), 3);
    add_background_object(create_fnapartmentwindow_1656(10432, -16), 3);
    add_background_object(create_fnapartmentwall1_1655(10496, -16), 3);
    add_background_object(create_fnwall21_1665(10304, 32), 3);
    add_background_object(create_fnwall21_1665(10304, -64), 3);
    add_background_object(create_fnwall21_1665(10544, 32), 3);
    add_background_object(create_fnwall21_1665(10544, -64), 3);
    add_background_object(create_fnwall19_1696(11520, 32), 3);
    add_background_object(create_fnwall19_1696(10784, 32), 3);
    add_background_object(create_ferriswheelbase2_1644(12320, 160), 3);
    add_background_object(create_ferriswheelbase2_1644(12320, 96), 3);
    add_background_object(create_ferriswheelbase2_1644(12320, 32), 3);
    add_background_object(create_ferriswheelbase2_1644(12320, -32), 3);
    add_background_object(create_ferriswheelbase2_1644(12480, 160), 3);
    add_background_object(create_ferriswheelbase2_1644(12480, 96), 3);
    add_background_object(create_ferriswheelbase2_1644(12480, 32), 3);
    add_background_object(create_ferriswheelbase2_1644(12480, -32), 3);
    add_background_object(create_ferriswheelbase2_1644(13088, 160), 3);
    add_background_object(create_ferriswheelbase2_1644(13088, 96), 3);
    add_background_object(create_ferriswheelbase2_1644(13088, 32), 3);
    add_background_object(create_ferriswheelbase2_1644(13088, -32), 3);
    add_background_object(create_ferriswheelbase2_1644(13248, 160), 3);
    add_background_object(create_ferriswheelbase2_1644(13248, 96), 3);
    add_background_object(create_ferriswheelbase2_1644(13248, 32), 3);
    add_background_object(create_ferriswheelbase2_1644(13248, -32), 3);
    add_background_object(create_fnfloor8_1649(13824, 224), 3);
    add_background_object(create_fnfloor8_1649(13824, 320), 3);
    add_background_object(create_fnfloor8_1649(13824, 416), 3);
    add_background_object(create_fnfloor12_1659(13824, 224), 3);
    add_background_object(create_fnfloor8_1649(13568, 512), 3);
    add_background_object(create_fnfloor8_1649(13952, 224), 3);
    add_background_object(create_fnfloor8_1649(13952, 320), 3);
    add_background_object(create_fnfloor8_1649(13952, 416), 3);
    add_background_object(create_fnfloor12_1659(13952, 224), 3);
    add_background_object(create_fnfloor8_1649(13952, 512), 3);
    add_background_object(create_fnfloor8_1649(14080, 224), 3);
    add_background_object(create_fnfloor8_1649(14080, 320), 3);
    add_background_object(create_fnfloor8_1649(14080, 416), 3);
    add_background_object(create_fnfloor12_1659(14080, 224), 3);
    add_background_object(create_fnfloor8_1649(14080, 512), 3);
    add_background_object(create_fnfloor8_1649(14208, 224), 3);
    add_background_object(create_fnfloor8_1649(14208, 320), 3);
    add_background_object(create_fnfloor8_1649(14208, 416), 3);
    add_background_object(create_fnfloor12_1659(14208, 224), 3);
    add_background_object(create_fnfloor8_1649(14208, 512), 3);
    add_background_object(create_fnfloor8_1649(14336, 224), 3);
    add_background_object(create_fnfloor8_1649(14336, 320), 3);
    add_background_object(create_fnfloor8_1649(14336, 416), 3);
    add_background_object(create_fnfloor12_1659(14336, 224), 3);
    add_background_object(create_fnfloor8_1649(14336, 512), 3);
    add_background_object(create_fnfloor8_1649(14080, 32), 3);
    add_background_object(create_fnfloor8_1649(14080, -64), 3);
    add_background_object(create_fnfloor10_1692(14192, -64), 3);
    add_background_object(create_fnfloor10_1692(14192, 32), 3);
    add_background_object(create_fnfloor17_1661(14080, 120), 3);
    add_background_object(create_fnfloor8_1649(14464, 224), 3);
    add_background_object(create_fnfloor8_1649(14464, 320), 3);
    add_background_object(create_fnfloor8_1649(14464, 416), 3);
    add_background_object(create_fnfloor12_1659(14464, 224), 3);
    add_background_object(create_fnfloor8_1649(14464, 512), 3);
    add_background_object(create_fnfloor8_1649(14592, 224), 3);
    add_background_object(create_fnfloor8_1649(14592, 320), 3);
    add_background_object(create_fnfloor8_1649(14592, 416), 3);
    add_background_object(create_fnfloor12_1659(14592, 224), 3);
    add_background_object(create_fnfloor8_1649(14592, 512), 3);
    add_background_object(create_fnfloor8_1649(14720, 224), 3);
    add_background_object(create_fnfloor8_1649(14720, 320), 3);
    add_background_object(create_fnfloor8_1649(14720, 416), 3);
    add_background_object(create_fnfloor12_1659(14720, 224), 3);
    add_background_object(create_fnfloor8_1649(14720, 512), 3);
    add_background_object(create_ufowreckage_1852(14488, 176), 3);
    add_background_object(create_mallentrance2_1853(14904, 96), 3);
    add_background_object(create_fnfloor8_1649(14848, 224), 3);
    add_background_object(create_fnfloor8_1649(14848, 320), 3);
    add_background_object(create_fnfloor8_1649(14848, 416), 3);
    add_background_object(create_fnfloor12_1659(14848, 224), 3);
    add_background_object(create_fnfloor8_1649(14848, 512), 3);
    add_background_object(create_fnfloor8_1649(14976, 224), 3);
    add_background_object(create_fnfloor8_1649(14976, 320), 3);
    add_background_object(create_fnfloor8_1649(14976, 416), 3);
    add_background_object(create_fnfloor12_1659(14976, 224), 3);
    add_background_object(create_fnfloor8_1649(14976, 512), 3);
    add_background_object(create_fnsignholder_1634(14208, -104), 3);
    add_background_object(create_fnsignholder_1634(14208, 56), 3);
    add_background_object(create_mallentrance1_1854(14904, 24), 3);
    add_background_object(create_fnstatue_1714(14760, 40), 3);
    add_background_object(create_edgeoverlay_1805(14952, 128), 3);
    add_background_object(create_edgeoverlay_1805(14992, 128), 3);
    add_background_object(create_edgeoverlay_1805(15032, 128), 3);
    add_background_object(create_edgeoverlay_1805(15072, 128), 3);
    add_background_object(create_edgeoverlay_1805(14952, 104), 3);
    add_background_object(create_edgeoverlay_1805(14952, 80), 3);
    add_background_object(create_edgeoverlay_1805(14952, 56), 3);
    add_background_object(create_edgeoverlay_1805(14952, 32), 3);
    add_background_object(create_edgeoverlay_1805(14952, 8), 3);
    add_background_object(create_edgeoverlay_1805(14952, -16), 3);
    add_background_object(create_fnfloor10_1692(13552, 224), 3);
    add_background_object(create_fnfloor9_1688(13824, 224), 3);
    add_background_object(create_fnfloor13_1691(13824, 224), 3);
    add_background_object(create_fnfloor14_1660(13552, 224), 3);
    add_background_object(create_fnfloor9_1688(13824, 320), 3);
    add_background_object(create_fnfloor9_1688(13824, 416), 3);
    add_background_object(create_fnfloor17_1661(13440, 312), 3);
    add_background_object(create_fnfloor17_1661(13312, 312), 3);
    add_background_object(create_fnfloor8_1649(13824, 512), 3);
    add_background_object(create_fnfloor8_1649(13696, 512), 3);
    add_background_object(create_fnfloor12_1659(13568, 512), 3);
    add_background_object(create_fnfloor12_1659(13696, 512), 3);
    add_background_object(create_fnfloor35_1710(13440, 512), 3);
    add_background_object(create_fnfloor36_1711(13440, 512), 3);
    add_background_object(create_fnfloor10_1692(13168, 512), 3);
    add_background_object(create_fnfloor10_1692(13168, 416), 3);
    add_background_object(create_fnfloor10_1692(13296, 320), 3);
    add_background_object(create_fnfloor17_1661(13184, 408), 3);
    add_background_object(create_fnfloor8_1649(1664, 416), 3);
    add_background_object(create_fnfloor9_1688(1664, 416), 3);
    add_background_object(create_fnfloor8_1649(1792, 416), 3);
    add_background_object(create_fnfloor8_1649(1792, 512), 3);
    add_background_object(create_fnfloor8_1649(1792, 608), 3);
    add_background_object(create_fnfloor17_1661(1792, 688), 3);
    add_background_object(create_fnfloor8_1649(3968, 32), 3);
    add_background_object(create_fnfloor8_1649(3968, -64), 3);
    add_background_object(create_fnfloor27_1684(3968, 128), 3);
    add_background_object(create_fnfloor17_1661(3968, 112), 3);
    add_background_object(create_fnfloor8_1649(4096, 32), 3);
    add_background_object(create_fnfloor8_1649(4096, -64), 3);
    add_background_object(create_fnfloor17_1661(4096, 112), 3);
    add_background_object(create_fnfloor8_1649(4224, 32), 3);
    add_background_object(create_fnfloor8_1649(4224, -64), 3);
    add_background_object(create_fnfloor17_1661(4224, 112), 3);
    add_background_object(create_fnfloor8_1649(4608, 32), 3);
    add_background_object(create_fnfloor8_1649(4608, -64), 3);
    add_background_object(create_fnfloor8_1649(4608, 128), 3);
    add_background_object(create_fnfloor8_1649(4480, 32), 3);
    add_background_object(create_fnfloor8_1649(4480, -64), 3);
    add_background_object(create_fnfloor17_1661(4480, 112), 3);
    add_background_object(create_fnfloor9_1688(4608, 128), 3);
    add_background_object(create_fnfloor10_1692(4720, -64), 3);
    add_background_object(create_fnfloor10_1692(4720, 32), 3);
    add_background_object(create_fnfloor10_1692(4720, 128), 3);
    add_background_object(create_fnfloor17_1661(4608, 216), 3);
    add_background_object(create_fnfloor28_1685(4528, 128), 3);
    add_background_object(create_ferriswheelbase2_1644(6256, 1128), 3);
    add_background_object(create_ferriswheelbase2_1644(6256, 1224), 3);
    add_background_object(create_ferriswheelbase_1664(6240, 1072), 3);
    add_background_object(create_ferriswheelbase2_1644(6256, 1288), 3);
    add_background_object(create_lamppostback_1709(5808, 400), 3);
    add_background_object(create_fnbackhedge_1666(6016, 512), 3);
    add_background_object(create_fnfloor8_1649(6016, 784), 3);
    add_background_object(create_fnfloor17_1661(6016, 872), 3);
    add_background_object(create_fnfloor10_1692(6128, 784), 3);
    add_background_object(create_fnfloor12_1659(6016, 784), 3);
    add_background_object(create_fnfloor10_1692(6128, 784), 3);
    add_background_object(create_fnfloor14_1660(6128, 784), 3);
    add_background_object(create_fnfloor8_1649(6784, 784), 3);
    add_background_object(create_ferriswheelbase2_1644(6256, 1192), 3);
    add_background_object(create_fnfloor12_1659(6784, 784), 3);
    add_background_object(create_fnfloor9_1688(6784, 784), 3);
    add_background_object(create_fnfloor13_1691(6784, 784), 3);
    add_background_object(create_fnfloor14_1660(6896, 784), 3);
    add_background_object(create_fnfloor20_1667(6912, 832), 3);
    add_background_object(create_fnfloor12_1659(6912, 832), 3);
    add_background_object(create_fnfloor14_1660(7024, 832), 3);
    add_background_object(create_lamppostback_1709(6992, 752), 3);
    add_background_object(create_edgeoverlay_1805(6920, 808), 3);
    add_background_object(create_floor37_1813(6144, 752), 3);
    add_background_object(create_floor33_1674(6224, 680), 3);
    add_background_object(create_fnfloor8_1649(4096, 384), 3);
    add_background_object(create_fnfloor8_1649(3968, 384), 3);
    add_background_object(create_fnfloor28_1685(4144, 480), 3);
    add_background_object(create_fnfloor27_1684(3968, 480), 3);
    add_background_object(create_fnfloor29_1706(3968, 704), 3);
    add_background_object(create_verticalhalfpipe4_1809(4064, 1088), 3);
    add_background_object(create_verticalhalfpipe5_1810(4144, 992), 3);
    add_background_object(create_verticalhalfpipe5_1810(4144, 896), 3);
    add_background_object(create_verticalhalfpipe5_1810(4144, 800), 3);
    add_background_object(create_verticalhalfpipe5_1810(4144, 704), 3);
    add_background_object(create_verticalhalfpipe5_1810(4144, 576), 3);
    add_background_object(create_verticalhalfpipe5_1810(4144, 608), 3);
    add_background_object(create_verticalhalfpipe6_1811(4064, 480), 3);
    add_background_object(create_fnfloor8_1649(3968, 800), 3);
    add_background_object(create_fnfloor10_1692(4080, 800), 3);
    add_background_object(create_fnfloor12_1659(3968, 800), 3);
    add_background_object(create_fnfloor17_1661(3968, 888), 3);
    add_background_object(create_fnbackwall3_1663(3968, 944), 3);
    add_background_object(create_fnfloor12_1659(4096, 384), 3);
    add_background_object(create_fnfloor12_1659(3968, 384), 3);
    add_background_object(create_fnfloor12_1659(4632, 456), 3);
    add_background_object(create_fnfloor12_1659(4504, 480), 3);
    add_background_object(create_fnfloor13_1691(4504, 480), 3);
    add_background_object(create_fnfloor10_1692(4336, 384), 3);
    add_background_object(create_fnfloor14_1660(4336, 384), 3);
    add_background_object(create_fnredcolumnback_1646(4296, 672), 3);
    add_background_object(create_fnfloor8_1649(4352, 32), 3);
    add_background_object(create_fnfloor8_1649(4352, -64), 3);
    add_background_object(create_fnfloor17_1661(4352, 112), 3);
    add_background_object(create_fnfloor14_1660(4744, 456), 3);
    add_background_object(create_fnfloor13_1691(4632, 456), 3);
    add_background_object(create_fnredcolumnback_1646(4608, 672), 3);
    add_background_object(create_fnredcolumnback_1646(4672, 672), 3);
    add_background_object(create_fnfloor24_1703(6360, 704), 3);
    add_background_object(create_fnfloor24_1703(6360, 680), 3);
    add_background_object(create_backdrop2_1855(10880, 992), 3);
    add_background_object(create_backdrop2_1855(10944, 992), 3);
    add_background_object(create_backdrop2_1855(11008, 992), 3);
    add_background_object(create_backdrop2_1855(11072, 992), 3);
    add_background_object(create_backdrop2_1855(11264, 992), 3);
    add_background_object(create_backdrop2_1855(11328, 992), 3);
    add_background_object(create_backdrop2_1855(10880, 1040), 3);
    add_background_object(create_backdrop2_1855(10944, 1040), 3);
    add_background_object(create_backdrop2_1855(11008, 1040), 3);
    add_background_object(create_backdrop2_1855(11072, 1040), 3);
    add_background_object(create_backdrop2_1855(11264, 1040), 3);
    add_background_object(create_backdrop2_1855(11328, 1040), 3);
    add_background_object(create_backdrop2_1855(10880, 1184), 3);
    add_background_object(create_backdrop2_1855(10944, 1184), 3);
    add_background_object(create_backdrop2_1855(11008, 1184), 3);
    add_background_object(create_backdrop2_1855(11072, 1184), 3);
    add_background_object(create_backdrop2_1855(11264, 1184), 3);
    add_background_object(create_backdrop2_1855(11328, 1184), 3);
    add_background_object(create_backdrop2_1855(10880, 1328), 3);
    add_background_object(create_backdrop2_1855(10944, 1328), 3);
    add_background_object(create_backdrop2_1855(11008, 1328), 3);
    add_background_object(create_backdrop2_1855(11072, 1328), 3);
    add_background_object(create_backdrop2_1855(11264, 1328), 3);
    add_background_object(create_backdrop2_1855(11328, 1328), 3);
    add_background_object(create_fnfloor8_1649(10752, 1376), 3);
    add_background_object(create_fnfloor8_1649(10752, 1280), 3);
    add_background_object(create_fnfloor8_1649(10752, 1184), 3);
    add_background_object(create_fnfloor8_1649(11392, 1280), 3);
    add_background_object(create_fnfloor8_1649(11392, 1184), 3);
    add_background_object(create_fnfloor8_1649(11392, 1376), 3);
    add_background_object(create_fnfloor8_1649(11264, 1376), 3);
    add_background_object(create_fnfloor8_1649(11008, 1376), 3);
    add_background_object(create_fnfloor8_1649(10880, 1376), 3);
    add_background_object(create_fnfloor8_1649(10624, 1088), 3);
    add_background_object(create_fnfloor8_1649(10624, 1376), 3);
    add_background_object(create_fnfloor8_1649(10624, 1280), 3);
    add_background_object(create_fnfloor8_1649(10624, 1184), 3);
    add_background_object(create_fnfloor8_1649(11520, 1280), 3);
    add_background_object(create_fnfloor8_1649(11520, 992), 3);
    add_background_object(create_fnfloor8_1649(11520, 1376), 3);
    add_background_object(create_fnfloor8_1649(11648, 1280), 3);
    add_background_object(create_fnfloor8_1649(11648, 992), 3);
    add_background_object(create_fnfloor8_1649(11648, 1376), 3);
    add_background_object(create_fnfloor8_1649(11392, 704), 3);
    add_background_object(create_fnfloor8_1649(11520, 704), 3);
    add_background_object(create_fnfloor8_1649(11648, 704), 3);
    add_background_object(create_fnfloor8_1649(11392, 608), 3);
    add_background_object(create_fnfloor8_1649(11520, 608), 3);
    add_background_object(create_fnfloor8_1649(11648, 608), 3);
    add_background_object(create_fnfloor9_1688(11392, 608), 3);
    add_background_object(create_fnfloor10_1692(10864, 704), 3);
    add_background_object(create_fnfloor9_1688(11392, 704), 3);
    add_background_object(create_fnfloor10_1692(10864, 800), 3);
    add_background_object(create_fnfloor10_1692(10864, 896), 3);
    add_background_object(create_backdrop2_1855(10880, 1232), 3);
    add_background_object(create_backdrop2_1855(10944, 1232), 3);
    add_background_object(create_backdrop2_1855(11008, 1232), 3);
    add_background_object(create_backdrop2_1855(11072, 1232), 3);
    add_background_object(create_backdrop2_1855(11264, 1232), 3);
    add_background_object(create_backdrop2_1855(11328, 1232), 3);
    add_background_object(create_backdrop2_1855(10880, 1280), 3);
    add_background_object(create_backdrop2_1855(10944, 1280), 3);
    add_background_object(create_backdrop2_1855(11008, 1280), 3);
    add_background_object(create_backdrop2_1855(11072, 1280), 3);
    add_background_object(create_backdrop2_1855(11264, 1280), 3);
    add_background_object(create_backdrop2_1855(11328, 1280), 3);
    add_background_object(create_backdrop2_1855(10880, 1088), 3);
    add_background_object(create_backdrop2_1855(10944, 1088), 3);
    add_background_object(create_backdrop2_1855(11008, 1088), 3);
    add_background_object(create_backdrop2_1855(11072, 1088), 3);
    add_background_object(create_backdrop2_1855(11264, 1088), 3);
    add_background_object(create_backdrop2_1855(11328, 1088), 3);
    add_background_object(create_backdrop2_1855(10880, 1136), 3);
    add_background_object(create_backdrop2_1855(10944, 1136), 3);
    add_background_object(create_backdrop2_1855(11008, 1136), 3);
    add_background_object(create_backdrop2_1855(11072, 1136), 3);
    add_background_object(create_backdrop2_1855(11264, 1136), 3);
    add_background_object(create_backdrop2_1855(11328, 1136), 3);
    add_background_object(create_fnfloor8_1649(9600, 1568), 3);
    add_background_object(create_fnsoil_1678(9216, 1248), 3);
    add_background_object(create_fnsoil_1678(9216, 1504), 3);
    add_background_object(create_fnsoil_1678(9216, 1632), 3);
    add_background_object(create_fnsoil_1678(9216, 1760), 3);
    add_background_object(create_fnsoil_1678(9216, 1376), 3);
    add_background_object(create_fnsoil_1678(9216, 1120), 3);
    add_background_object(create_fnsoil_1678(9344, 1248), 3);
    add_background_object(create_fnsoil_1678(9344, 1504), 3);
    add_background_object(create_fnsoil_1678(9344, 1632), 3);
    add_background_object(create_fnsoil_1678(9344, 1760), 3);
    add_background_object(create_fnsoil_1678(9344, 1376), 3);
    add_background_object(create_fnsoil_1678(9344, 1120), 3);
    add_background_object(create_fnsoil_1678(9472, 1248), 3);
    add_background_object(create_fnsoil_1678(9472, 1504), 3);
    add_background_object(create_fnsoil_1678(9472, 1632), 3);
    add_background_object(create_fnsoil_1678(9472, 1760), 3);
    add_background_object(create_fnsoil_1678(9472, 1376), 3);
    add_background_object(create_fnsoil_1678(9472, 1120), 3);
    add_background_object(create_fnsoil_1678(9600, 1248), 3);
    add_background_object(create_fnsoil_1678(9600, 1504), 3);
    add_background_object(create_fnsoil_1678(9600, 1632), 3);
    add_background_object(create_fnsoil_1678(9600, 1760), 3);
    add_background_object(create_fnsoil_1678(9600, 1376), 3);
    add_background_object(create_fnsoil_1678(9600, 1120), 3);
    add_background_object(create_fnsoil_1678(10624, 1472), 3);
    add_background_object(create_fnsoil_1678(10624, 1600), 3);
    add_background_object(create_fnsoil_1678(10624, 1728), 3);
    add_background_object(create_fnsoil_1678(10752, 1472), 3);
    add_background_object(create_fnsoil_1678(10752, 1600), 3);
    add_background_object(create_fnsoil_1678(10752, 1728), 3);
    add_background_object(create_fnsoil_1678(10880, 1472), 3);
    add_background_object(create_fnsoil_1678(10880, 1600), 3);
    add_background_object(create_fnsoil_1678(10880, 1728), 3);
    add_background_object(create_fnsoil_1678(11008, 1472), 3);
    add_background_object(create_fnsoil_1678(11008, 1600), 3);
    add_background_object(create_fnsoil_1678(11008, 1728), 3);
    add_background_object(create_fnsoil_1678(11264, 1472), 3);
    add_background_object(create_fnsoil_1678(11264, 1600), 3);
    add_background_object(create_fnsoil_1678(11264, 1728), 3);
    add_background_object(create_fnsoil_1678(11392, 1472), 3);
    add_background_object(create_fnsoil_1678(11392, 1600), 3);
    add_background_object(create_fnsoil_1678(11392, 1728), 3);
    add_background_object(create_fnsoil_1678(11520, 1472), 3);
    add_background_object(create_fnsoil_1678(11520, 1600), 3);
    add_background_object(create_fnsoil_1678(11520, 1728), 3);
    add_background_object(create_fnsoil_1678(11648, 1472), 3);
    add_background_object(create_fnsoil_1678(11648, 1600), 3);
    add_background_object(create_fnsoil_1678(11648, 1728), 3);
    add_background_object(create_fnfloor17_1661(10880, 600), 3);
    add_background_object(create_backdrop2_1855(11136, 992), 3);
    add_background_object(create_backdrop2_1855(11200, 992), 3);
    add_background_object(create_backdrop2_1855(11136, 1040), 3);
    add_background_object(create_backdrop2_1855(11200, 1040), 3);
    add_background_object(create_backdrop2_1855(11136, 1184), 3);
    add_background_object(create_backdrop2_1855(11200, 1184), 3);
    add_background_object(create_backdrop2_1855(11136, 1328), 3);
    add_background_object(create_backdrop2_1855(11200, 1328), 3);
    add_background_object(create_fnfloor8_1649(11136, 1376), 3);
    add_background_object(create_backdrop2_1855(11136, 1232), 3);
    add_background_object(create_backdrop2_1855(11200, 1232), 3);
    add_background_object(create_backdrop2_1855(11136, 1280), 3);
    add_background_object(create_backdrop2_1855(11200, 1280), 3);
    add_background_object(create_backdrop2_1855(11136, 1088), 3);
    add_background_object(create_backdrop2_1855(11200, 1088), 3);
    add_background_object(create_backdrop2_1855(11136, 1136), 3);
    add_background_object(create_backdrop2_1855(11200, 1136), 3);
    add_background_object(create_fnsoil_1678(11136, 1472), 3);
    add_background_object(create_fnsoil_1678(11136, 1600), 3);
    add_background_object(create_fnsoil_1678(11136, 1728), 3);
    add_background_object(create_fnfloor8_1649(9600, 704), 3);
    add_background_object(create_fnfloor8_1649(9600, 608), 3);
    add_background_object(create_fnfloor9_1688(9600, 560), 3);
    add_background_object(create_fnfloor9_1688(9600, 656), 3);
    add_background_object(create_fnfloor20_1667(9280, -16), 3);
    add_background_object(create_fnfloor10_1692(9392, -64), 3);
    add_background_object(create_fnapartmentwall1_1655(8512, 608), 3);
    add_background_object(create_fnapartmentwall1_1655(8704, 608), 3);
    add_background_object(create_fnapartmentwall3_1676(8512, 560), 3);
    add_background_object(create_fnapartmentwall3_1676(8640, 560), 3);
    add_background_object(create_fnapartmentwindow_1656(8576, 608), 3);
    add_background_object(create_fnapartmentwindow_1656(8640, 608), 3);
    add_background_object(create_fnwall21_1665(8752, 560), 3);
    add_background_object(create_fnwall21_1665(8512, 560), 3);
    add_background_object(create_fnwall21_1665(8752, 656), 3);
    add_background_object(create_fnwall21_1665(8512, 656), 3);
    add_background_object(create_fnwall21_1665(8752, 752), 3);
    add_background_object(create_fnwall21_1665(8512, 752), 3);
    add_background_object(create_fnwall21_1665(8512, 848), 3);
    add_background_object(create_fnwall21_1665(8512, 944), 3);
    add_background_object(create_fnbackhedge_1666(8448, 1024), 3);
    add_background_object(create_fnwall19_1696(8400, 456), 3);
    add_background_object(create_fnwall18_1695(8384, 600), 3);
    add_background_object(create_fnwall19_1696(8784, 408), 3);
    add_background_object(create_fnbackwall3_1663(7680, 992), 3);
    add_background_object(create_fnrooftop1_1686(7472, 848), 3);
    add_background_object(create_fnrooftop1_1686(7536, 848), 3);
    add_background_object(create_fnrooftop1_1686(7600, 848), 3);
    add_background_object(create_fnrooftop1_1686(7920, 848), 3);
    add_background_object(create_fnrooftop1_1686(7984, 848), 3);
    add_background_object(create_fnrooftop1_1686(8048, 848), 3);
    add_background_object(create_fnfloor10_1692(7680, 872), 3);
    add_background_object(create_fnfloor9_1688(7664, 872), 3);
    add_background_object(create_fnfloor14_1660(7680, 848), 3);
    add_background_object(create_fnfloor13_1691(7664, 848), 3);
    add_background_object(create_fnfloor24_1703(7664, 968), 3);
    add_background_object(create_fnfloor10_1692(7904, 872), 3);
    add_background_object(create_fnfloor9_1688(7888, 872), 3);
    add_background_object(create_fnfloor14_1660(7904, 848), 3);
    add_background_object(create_fnfloor13_1691(7888, 848), 3);
    add_background_object(create_fnfloor24_1703(7888, 968), 3);
    add_background_object(create_fnfloor24_1703(7696, 968), 3);
    add_background_object(create_fnfloor24_1703(7856, 968), 3);
    add_background_object(create_fnfloor20_1667(10880, 464), 3);
    add_background_object(create_fnfloor20_1667(11392, 464), 3);
    add_background_object(create_fnsoil_1678(9728, 992), 3);
    add_background_object(create_fnfloor8_1649(9728, 512), 3);
    add_background_object(create_fnfloor8_1649(9728, 896), 3);
    add_background_object(create_fnfloor8_1649(9728, 800), 3);
    add_background_object(create_fnfloor8_1649(9728, 992), 3);
    add_background_object(create_fnsoil_1678(9728, 1248), 3);
    add_background_object(create_fnsoil_1678(9728, 1504), 3);
    add_background_object(create_fnsoil_1678(9728, 1632), 3);
    add_background_object(create_fnsoil_1678(9728, 1760), 3);
    add_background_object(create_fnsoil_1678(9728, 1376), 3);
    add_background_object(create_fnsoil_1678(9728, 1120), 3);
    add_background_object(create_fnfloor8_1649(9728, 704), 3);
    add_background_object(create_fnfloor8_1649(9728, 608), 3);
    add_background_object(create_fnsoil_1678(9856, 992), 3);
    add_background_object(create_fnfloor8_1649(9856, 896), 3);
    add_background_object(create_fnfloor8_1649(9856, 800), 3);
    add_background_object(create_fnfloor8_1649(9856, 992), 3);
    add_background_object(create_fnsoil_1678(9856, 1248), 3);
    add_background_object(create_fnsoil_1678(9856, 1504), 3);
    add_background_object(create_fnsoil_1678(9856, 1632), 3);
    add_background_object(create_fnsoil_1678(9856, 1760), 3);
    add_background_object(create_fnsoil_1678(9856, 1376), 3);
    add_background_object(create_fnsoil_1678(9856, 1120), 3);
    add_background_object(create_fnsoil_1678(9984, 992), 3);
    add_background_object(create_fnfloor8_1649(9984, 512), 3);
    add_background_object(create_fnfloor8_1649(9984, 896), 3);
    add_background_object(create_fnfloor8_1649(9984, 800), 3);
    add_background_object(create_fnfloor8_1649(9984, 992), 3);
    add_background_object(create_fnsoil_1678(9984, 1248), 3);
    add_background_object(create_fnsoil_1678(9984, 1504), 3);
    add_background_object(create_fnsoil_1678(9984, 1632), 3);
    add_background_object(create_fnsoil_1678(9984, 1760), 3);
    add_background_object(create_fnsoil_1678(9984, 1376), 3);
    add_background_object(create_fnsoil_1678(9984, 1120), 3);
    add_background_object(create_fnfloor8_1649(9984, 608), 3);
    add_background_object(create_fnsoil_1678(10112, 992), 3);
    add_background_object(create_fnfloor8_1649(10112, 512), 3);
    add_background_object(create_fnfloor8_1649(10112, 896), 3);
    add_background_object(create_fnfloor8_1649(10112, 800), 3);
    add_background_object(create_fnfloor8_1649(10112, 992), 3);
    add_background_object(create_fnsoil_1678(10112, 1248), 3);
    add_background_object(create_fnsoil_1678(10112, 1504), 3);
    add_background_object(create_fnsoil_1678(10112, 1632), 3);
    add_background_object(create_fnsoil_1678(10112, 1760), 3);
    add_background_object(create_fnsoil_1678(10112, 1376), 3);
    add_background_object(create_fnsoil_1678(10112, 1120), 3);
    add_background_object(create_fnfloor8_1649(10112, 608), 3);
    add_background_object(create_fnsoil_1678(10240, 992), 3);
    add_background_object(create_fnfloor8_1649(10240, 512), 3);
    add_background_object(create_fnfloor8_1649(10240, 896), 3);
    add_background_object(create_fnfloor8_1649(10240, 800), 3);
    add_background_object(create_fnfloor8_1649(10240, 992), 3);
    add_background_object(create_fnsoil_1678(10240, 1248), 3);
    add_background_object(create_fnsoil_1678(10240, 1504), 3);
    add_background_object(create_fnsoil_1678(10240, 1632), 3);
    add_background_object(create_fnsoil_1678(10240, 1760), 3);
    add_background_object(create_fnsoil_1678(10240, 1376), 3);
    add_background_object(create_fnsoil_1678(10240, 1120), 3);
    add_background_object(create_fnfloor8_1649(10240, 608), 3);
    add_background_object(create_fnsoil_1678(10368, 992), 3);
    add_background_object(create_fnfloor8_1649(10368, 896), 3);
    add_background_object(create_fnfloor8_1649(10368, 800), 3);
    add_background_object(create_fnfloor8_1649(10368, 992), 3);
    add_background_object(create_fnsoil_1678(10368, 1248), 3);
    add_background_object(create_fnsoil_1678(10368, 1504), 3);
    add_background_object(create_fnsoil_1678(10368, 1632), 3);
    add_background_object(create_fnsoil_1678(10368, 1760), 3);
    add_background_object(create_fnsoil_1678(10368, 1376), 3);
    add_background_object(create_fnsoil_1678(10368, 1120), 3);
    add_background_object(create_fnsoil_1678(10496, 992), 3);
    add_background_object(create_fnfloor8_1649(10496, 896), 3);
    add_background_object(create_fnfloor8_1649(10496, 800), 3);
    add_background_object(create_fnfloor8_1649(10496, 992), 3);
    add_background_object(create_fnsoil_1678(10496, 1248), 3);
    add_background_object(create_fnsoil_1678(10496, 1504), 3);
    add_background_object(create_fnsoil_1678(10496, 1632), 3);
    add_background_object(create_fnsoil_1678(10496, 1760), 3);
    add_background_object(create_fnsoil_1678(10496, 1376), 3);
    add_background_object(create_fnsoil_1678(10496, 1120), 3);
    add_background_object(create_fnbackwall4_1647(10880, 704), 3);
    add_background_object(create_fnbackwall3_1663(10880, 800), 3);
    add_background_object(create_fnbackwall4_1647(10880, 896), 3);
    add_background_object(create_backwall2_1642(11264, 704), 3);
    add_background_object(create_fnbackwall5_1643(11264, 800), 3);
    add_background_object(create_backwall2_1642(11264, 896), 3);
    add_background_object(create_fnbackwall5_1643(10880, 800), 3);
    add_background_object(create_fnbackwall4_1647(11008, 800), 3);
    add_background_object(create_fnbackwall3_1663(11008, 896), 3);
    add_background_object(create_backwall2_1642(10880, 896), 3);
    add_background_object(create_fnbackwall3_1663(11264, 800), 3);
    add_background_object(create_backwall2_1642(11136, 800), 3);
    add_background_object(create_fnbackwall5_1643(11136, 896), 3);
    add_background_object(create_fnbackwall4_1647(11264, 896), 3);
    add_background_object(create_fnbackwall3_1663(11392, 896), 3);
    add_background_object(create_fnbackwall3_1663(11520, 800), 3);
    add_background_object(create_fnbackwall6_1648(11392, 800), 3);
    add_background_object(create_fnfloor12_1659(11520, 992), 3);
    add_background_object(create_fnfloor12_1659(11648, 992), 3);
    add_background_object(create_fnfloor8_1649(11392, 992), 3);
    add_background_object(create_fnfloor8_1649(11392, 1088), 3);
    add_background_object(create_fnfloor8_1649(11520, 1088), 3);
    add_background_object(create_fnfloor8_1649(11520, 1184), 3);
    add_background_object(create_fnfloor8_1649(11648, 1088), 3);
    add_background_object(create_fnfloor8_1649(11648, 1184), 3);
    add_background_object(create_fnfloor17_1661(11648, 792), 3);
    add_background_object(create_fnfloor17_1661(11520, 792), 3);
    add_background_object(create_fnfloor35_1710(11776, 896), 3);
    add_background_object(create_fnfloor8_1649(11776, 992), 3);
    add_background_object(create_fnfloor35_1710(12160, 800), 3);
    add_background_object(create_fnfloor8_1649(12160, 896), 3);
    add_background_object(create_fnfloor8_1649(11904, 896), 3);
    add_background_object(create_fnfloor8_1649(12032, 896), 3);
    add_background_object(create_fnfloor8_1649(13312, 704), 3);
    add_background_object(create_fnfloor35_1710(13312, 608), 3);
    add_background_object(create_fnfloor8_1649(13184, 800), 3);
    add_background_object(create_fnfloor35_1710(13184, 704), 3);
    add_background_object(create_fnfloor8_1649(12288, 896), 3);
    add_background_object(create_fnfloor8_1649(12288, 800), 3);
    add_background_object(create_fnrooftop2_1687(12792, 788), 3);
    add_background_object(create_fnfloor8_1649(13056, 800), 3);
    add_background_object(create_fnrooftop1_1686(12680, 788), 3);
    add_background_object(create_fnrooftop1_1686(12728, 788), 3);
    add_background_object(create_fnfloor8_1649(11776, 608), 3);
    add_background_object(create_fnfloor8_1649(11904, 608), 3);
    add_background_object(create_fnfloor20_1667(11776, 704), 3);
    add_background_object(create_fnfloor20_1667(12032, 608), 3);
    add_background_object(create_fnfloor24_1703(11760, 752), 3);
    add_background_object(create_fnfloor24_1703(11888, 704), 3);
    add_background_object(create_fnfloor24_1703(11792, 752), 3);
    add_background_object(create_fnfloor24_1703(11920, 704), 3);
    add_background_object(create_fnfloor24_1703(12016, 656), 3);
    add_background_object(create_fnfloor24_1703(12048, 656), 3);
    add_background_object(create_fnfloor24_1703(12144, 608), 3);
    add_background_object(create_fnfloor24_1703(12176, 608), 3);
    add_background_object(create_fnfloor24_1703(11824, 752), 3);
    add_background_object(create_fnfloor24_1703(11952, 704), 3);
    add_background_object(create_fnfloor24_1703(12080, 656), 3);
    add_background_object(create_fnfloor24_1703(12208, 608), 3);
    add_background_object(create_fnfloor17_1661(12352, 600), 3);
    add_background_object(create_fnfloor17_1661(12480, 600), 3);
    add_background_object(create_fnfloor17_1661(12608, 600), 3);
    add_background_object(create_fnfloor17_1661(12736, 600), 3);
    add_background_object(create_fnfloor17_1661(12864, 600), 3);
    add_background_object(create_fnfloor17_1661(12992, 600), 3);
    add_background_object(create_fnfloor17_1661(13056, 600), 3);
    add_background_object(create_fnfloor36_1711(11776, 896), 3);
    add_background_object(create_fnfloor12_1659(11904, 896), 3);
    add_background_object(create_fnfloor8_1649(11776, 1088), 3);
    add_background_object(create_fnfloor8_1649(11904, 992), 3);
    add_background_object(create_fnfloor8_1649(11904, 1088), 3);
    add_background_object(create_fnfloor8_1649(11776, 1184), 3);
    add_background_object(create_fnfloor8_1649(12032, 992), 3);
    add_background_object(create_fnfloor8_1649(12032, 1088), 3);
    add_background_object(create_fnfloor8_1649(12160, 992), 3);
    add_background_object(create_fnfloor8_1649(12160, 1088), 3);
    add_background_object(create_fnfloor8_1649(12288, 992), 3);
    add_background_object(create_fnfloor8_1649(12288, 1088), 3);
    add_background_object(create_fnfloor8_1649(12416, 1088), 3);
    add_background_object(create_fnfloor20_1667(12416, 1040), 3);
    add_background_object(create_fnfloor8_1649(12544, 1088), 3);
    add_background_object(create_fnfloor20_1667(12544, 1040), 3);
    add_background_object(create_fnfloor8_1649(12672, 1088), 3);
    add_background_object(create_fnfloor20_1667(12672, 1040), 3);
    add_background_object(create_fnfloor8_1649(12800, 1088), 3);
    add_background_object(create_fnfloor20_1667(12800, 1040), 3);
    add_background_object(create_fnfloor8_1649(12928, 1088), 3);
    add_background_object(create_fnfloor20_1667(12928, 1040), 3);
    add_background_object(create_fnfloor8_1649(13056, 1088), 3);
    add_background_object(create_fnfloor8_1649(13056, 896), 3);
    add_background_object(create_fnfloor8_1649(13056, 992), 3);
    add_background_object(create_fnfloor8_1649(13184, 1088), 3);
    add_background_object(create_fnfloor8_1649(13184, 896), 3);
    add_background_object(create_fnfloor8_1649(13184, 992), 3);
    add_background_object(create_fnfloor8_1649(13312, 800), 3);
    add_background_object(create_fnfloor8_1649(13312, 896), 3);
    add_background_object(create_fnfloor8_1649(13440, 704), 3);
    add_background_object(create_fnfloor8_1649(13440, 800), 3);
    add_background_object(create_fnfloor8_1649(13440, 896), 3);
    add_background_object(create_fnfloor8_1649(13312, 992), 3);
    add_background_object(create_fnfloor8_1649(13568, 608), 3);
    add_background_object(create_fnfloor8_1649(13568, 704), 3);
    add_background_object(create_fnfloor8_1649(13568, 800), 3);
    add_background_object(create_fnfloor8_1649(13696, 608), 3);
    add_background_object(create_fnfloor8_1649(13696, 704), 3);
    add_background_object(create_fnfloor8_1649(13824, 608), 3);
    add_background_object(create_fnfloor8_1649(13824, 704), 3);
    add_background_object(create_fnfloor8_1649(13952, 608), 3);
    add_background_object(create_fnfloor8_1649(13952, 704), 3);
    add_background_object(create_fnfloor8_1649(14080, 608), 3);
    add_background_object(create_fnfloor8_1649(14080, 704), 3);
    add_background_object(create_fnfloor36_1711(13312, 608), 3);
    add_background_object(create_fnfloor36_1711(13184, 704), 3);
    add_background_object(create_fnfloor12_1659(13056, 800), 3);
    add_background_object(create_fnfloor9_1688(13056, 800), 3);
    add_background_object(create_fnfloor13_1691(13056, 800), 3);
    add_background_object(create_fnfloor9_1688(13056, 896), 3);
    add_background_object(create_fnfloor9_1688(13056, 944), 3);
    add_background_object(create_fnfloor12_1659(12288, 800), 3);
    add_background_object(create_fnfloor10_1692(12400, 800), 3);
    add_background_object(create_fnfloor14_1660(12400, 800), 3);
    add_background_object(create_fnfloor10_1692(12400, 896), 3);
    add_background_object(create_fnfloor10_1692(12400, 944), 3);
    add_background_object(create_fnfloor12_1659(12416, 1040), 3);
    add_background_object(create_fnfloor12_1659(12544, 1040), 3);
    add_background_object(create_fnfloor12_1659(12672, 1040), 3);
    add_background_object(create_fnfloor12_1659(12800, 1040), 3);
    add_background_object(create_fnfloor12_1659(12928, 1040), 3);
    add_background_object(create_fnfloor12_1659(12032, 896), 3);
    add_background_object(create_fnfloor36_1711(12160, 800), 3);
    add_background_object(create_fnbackwall3_1663(12160, 704), 3);
    add_background_object(create_fnbackwall6_1648(12032, 704), 3);
    add_background_object(create_fnbackwall3_1663(11776, 800), 3);
    add_background_object(create_backwall2_1642(13312, 416), 3);
    add_background_object(create_ferriswheelbase2_1644(13616, 224), 3);
    add_background_object(create_ferriswheelbase2_1644(13616, 288), 3);
    add_background_object(create_ferriswheelbase2_1644(13616, 352), 3);
    add_background_object(create_ferriswheelbase2_1644(13616, 416), 3);
    add_background_object(create_ferriswheelbase2_1644(13744, 224), 3);
    add_background_object(create_ferriswheelbase2_1644(13744, 288), 3);
    add_background_object(create_ferriswheelbase2_1644(13744, 352), 3);
    add_background_object(create_ferriswheelbase2_1644(13744, 416), 3);
    add_background_object(create_fnfloor24_1703(11504, 368), 3);
    add_background_object(create_fnfloor24_1703(11472, 368), 3);
    add_background_object(create_fnfloor12_1659(10880, 368), 3);
    add_background_object(create_fnfloor24_1703(10864, 368), 3);
    add_background_object(create_fnfloor24_1703(10896, 368), 3);
    add_background_object(create_fnbustedwall_1705(11008, 368), 3);
    add_background_object(create_fnbustedwall_1705(11072, 368), 3);
    add_background_object(create_fnbustedwall_1705(11136, 368), 3);
    add_background_object(create_fnbustedwall_1705(11200, 368), 3);
    add_background_object(create_fnfloor8_1649(11264, 368), 3);
    add_background_object(create_fnfloor12_1659(11264, 368), 3);
    add_background_object(create_fnfloor8_1649(11264, 512), 3);
    add_background_object(create_fnfloor20_1667(11264, 464), 3);
    add_background_object(create_fnfloor17_1661(11264, 600), 3);
    add_background_object(create_fnfloor8_1649(11904, 1184), 3);
    add_background_object(create_fnfloor8_1649(12032, 1184), 3);
    add_background_object(create_fnfloor8_1649(12160, 1184), 3);
    add_background_object(create_fnfloor8_1649(12288, 1184), 3);
    add_background_object(create_fnfloor8_1649(12416, 1184), 3);
    add_background_object(create_fnfloor8_1649(12544, 1184), 3);
    add_background_object(create_fnfloor8_1649(12672, 1184), 3);
    add_background_object(create_fnfloor8_1649(12800, 1184), 3);
    add_background_object(create_fnfloor8_1649(12928, 1184), 3);
    add_background_object(create_fnfloor8_1649(13056, 1184), 3);
    add_background_object(create_fnfloor8_1649(13184, 1184), 3);
    add_background_object(create_fnfloor8_1649(13312, 1088), 3);
    add_background_object(create_fnfloor8_1649(13312, 1184), 3);
    add_background_object(create_fnfloor17_1661(11392, 792), 3);
    add_background_object(create_fnfloor8_1649(15104, 224), 3);
    add_background_object(create_fnfloor12_1659(15104, 224), 3);
    add_background_object(create_fnfloor8_1649(9216, 128), 3);
    add_background_object(create_fnfloor8_1649(9216, 32), 3);
    add_background_object(create_fnfloor20_1667(9216, -16), 3);
    add_background_object(create_fnfloor8_1649(8960, 128), 3);
    add_background_object(create_fnfloor8_1649(8960, 32), 3);
    add_background_object(create_fnfloor20_1667(8960, -16), 3);
    add_background_object(create_fnfloor17_1661(9280, 216), 3);
    add_background_object(create_fnfloor20_1667(9472, 368), 3);
    add_background_object(create_fnfloor12_1659(9472, 368), 3);
    add_background_object(create_fnfloor13_1691(9472, 368), 3);
    add_background_object(create_fnfloor17_1661(8960, 216), 3);
    add_background_object(create_fnfloor17_1661(9152, 216), 3);
    add_background_object(create_fnfloor17_1661(9472, 408), 3);
    add_background_object(create_fnfloor17_1661(9728, 408), 3);
    add_background_object(create_fnfloor17_1661(9856, 408), 3);
    add_background_object(create_fnfloor9_1688(9984, 416), 3);
    add_background_object(create_fnfloor12_1659(9728, 512), 3);
    add_background_object(create_fnfloor9_1688(9984, 560), 3);
    add_background_object(create_fnfloor10_1692(9840, 704), 3);
    add_background_object(create_fnfloor10_1692(9840, 608), 3);
    add_background_object(create_fnfloor10_1692(9840, 560), 3);
    add_background_object(create_fnfloor12_1659(9856, 800), 3);
    add_background_object(create_fnfloor12_1659(9984, 800), 3);
    add_background_object(create_fnfloor9_1688(9984, 608), 3);
    add_background_object(create_fnfloor17_1661(9984, 696), 3);
    add_background_object(create_fnfloor12_1659(10112, 800), 3);
    add_background_object(create_fnfloor12_1659(10240, 800), 3);
    add_background_object(create_fnfloor17_1661(10112, 696), 3);
    add_background_object(create_fnfloor10_1692(10352, 608), 3);
    add_background_object(create_fnfloor17_1661(10368, 504), 3);
    add_background_object(create_fnfloor17_1661(10496, 504), 3);
    add_background_object(create_fnfloor12_1659(10368, 800), 3);
    add_background_object(create_fnfloor12_1659(10496, 800), 3);
    add_background_object(create_fnfloor9_1688(10752, 704), 3);
    add_background_object(create_fnfloor12_1659(10624, 800), 3);
    add_background_object(create_fnfloor9_1688(10624, 512), 3);
    add_background_object(create_fnfloor17_1661(10624, 600), 3);
    add_background_object(create_fnfloor10_1692(10352, 512), 3);
    add_background_object(create_fnfloor17_1661(10240, 696), 3);
    add_background_object(create_fnbackwall5_1643(9088, 416), 3);
    add_background_object(create_fnbackwall3_1663(9344, 416), 3);
    add_background_object(create_fnbackwall6_1648(9216, 416), 3);
    add_background_object(create_backwall2_1642(9088, 320), 3);
    add_background_object(create_fnbackwall1_1645(9344, 320), 3);
    add_background_object(create_fnbackwall6_1648(9216, 320), 3);
    add_background_object(create_fnbackwall4_1647(9472, 224), 3);
    add_background_object(create_fnfloor9_1688(8832, 272), 3);
    add_background_object(create_fnfloor10_1692(8944, 224), 3);
    add_background_object(create_fnfloor8_1649(9088, 128), 3);
    add_background_object(create_fnfloor8_1649(9088, 32), 3);
    add_background_object(create_fnfloor20_1667(9088, -16), 3);
    add_background_object(create_fnfloor17_1661(9088, 216), 3);
    add_background_object(create_fnfloor8_1649(9552, 776), 3);
    add_background_object(create_fnfloor9_1688(9536, 752), 3);
    add_background_object(create_fnfloor8_1649(9600, 800), 3);
    add_background_object(create_fnfloor8_1649(9472, 800), 3);
    add_background_object(create_fnfloor12_1659(9408, 800), 3);
    add_background_object(create_fnfloor12_1659(9344, 800), 3);
    add_background_object(create_fnfloor13_1691(9536, 752), 3);
    add_background_object(create_fnfloor10_1692(8944, 272), 3);
    add_background_object(create_fnfloor17_1661(8832, 360), 3);
    add_background_object(create_ferriswheelbase2_1644(9040, 360), 3);
    add_background_object(create_ferriswheelbase2_1644(8976, 360), 3);
    add_background_object(create_ferriswheelbase2_1644(9040, 424), 3);
    add_background_object(create_ferriswheelbase2_1644(8976, 424), 3);
    add_background_object(create_ferriswheelbase2_1644(9040, 488), 3);
    add_background_object(create_ferriswheelbase2_1644(8976, 488), 3);
    add_background_object(create_ferriswheelbase2_1644(13264, 576), 3);
    add_background_object(create_ferriswheelbase2_1644(13264, 640), 3);
    add_object(create_objectjumppad_1510(11360, 616), 3);
    add_object(create_objectjumppad_1510(10656, 616), 3);
    add_object(create_objectjumppad_1510(10656, 800), 3);
    add_object(create_objectjumppad_1510(11360, 616), 3);
    add_object(create_objectjumppad_1510(10720, 616), 3);
    add_object(create_objectjumppad_1510(10368, 656), 3);
    add_object(create_objectjumppad_1510(10496, 800), 3);
    add_object(create_objectjumppad_1510(10400, 520), 3);
    add_object(create_objectjumppad_1510(10752, 752), 3);
    add_object(create_objectjumppad_1510(10176, 712), 3);
    add_object(create_objectjumppad_1510(9856, 752), 3);
    add_object(create_objectjumppad_1510(9984, 464), 3);
    add_object(create_objectjumppad_1510(9568, 424), 3);
    add_object(create_objectjumppad_1510(9504, 800), 3);
    add_object(create_lamppostfront_1778(10280, 162), 3);
    add_object(create_ramp2_1856(11415, -105), 3);
    add_object(create_objectjumppad_1510(7792, 1088), 3);
    add_object(create_objectjumppad_1510(7312, 1088), 3);
    add_object(create_gimmickrollingarchbase_1725(8960, 480), 3);
    add_object(create_layer0loop2_1743(6328, 408), 3);
    add_object(create_layer0loop2_1743(6376, 360), 3);
    add_object(create_layer0loop3_1857(6424, 288), 3);
    add_object(create_goldplatform3_1737(960, 984), 3);
    add_object(create_goldplatform3_1737(896, 984), 3);
    add_object(create_goldplatform3_1737(832, 984), 3);
    add_object(create_goldplatform3_1737(768, 984), 3);
    add_object(create_goldplatform3_1737(704, 984), 3);
    add_object(create_goldplatform3_1737(640, 984), 3);
    add_object(create_enemytrafficle_1717(7796, 480), 3);
    add_object(create_enemylimiter_350(-491, 114), 3);
    add_object(create_sign_351(14920, -115), 3);
    add_object(create_playerstartingpoint_358(61, 1309), 3);
    add_object(create_link_352(88, -96), 3);
    add_object(create_objectcrystal_279(-275, 82), 3);
    add_object(create_objectcodec_354(-295, 108), 3);
    add_object(create_breakablewall_1748(-160, 560), 3);
    add_object(create_shieldearth_314(-140, 348), 3);
    add_object(create_shieldflameback_315(-96, 344), 3);
    add_object(create_shieldwood_313(-148, 340), 3);
    add_object(create_shieldmagnetic_317(-132, 348), 3);
    add_object(create_shieldwater_318(-84, 348), 3);
    add_object(create_shieldflamefront_316(-100, 348), 3);
    add_object(create_monitorkeystone_562(-216, 168), 3);
    add_object(create_objectjumppad_1510(-296, 168), 3);
    add_object(create_gimmickrollingarchbase_1725(8576, 768), 3);
    add_object(create_gimmickrollingarch_1715(8704, 896), 3);
    add_object(create_breakablefloor1_1760(7560, -104), 3);
    add_object(create_breakablefloor2_1761(7560, -152), 3);
    add_object(create_enemytrafficle1_1757(7796, 459), 3);
    add_object(create_enemytrafficle2_1758(7796, 483), 3);
    add_object(create_enemytrafficle3_1759(7796, 507), 3);
    add_object(create_cameratriggerboss_424(10432, -56), 3);
    add_object(create_objectfuel_528(-196, 1172), 3);
    add_object(create_effectflareburst_1788(-216, 1136), 3);
    add_object(create_pigeon_1724(284, 1040), 3);
    add_object(create_enemycoilpiece1_1751(5360, 784), 3);
    add_object(create_enemycoilpiece3_1752(5359, 784), 3);
    add_object(create_enemycoilpiece2_1753(5360, 784), 3);
    add_object(create_enemycoilpiece4_1754(5359, 784), 3);
    add_object(create_enemycoil_1755(5360, 784), 3);
    add_object(create_enemycoilhead_1782(5360, 744), 3);
    add_object(create_gimmickteetertotter_1827(1336, 704), 3);
    add_object(create_gimmickteetertotter_1827(1448, 520), 3);
    add_object(create_floatinglantern_1829(4808, 316), 3);
    add_object(create_floatinglantern_1829(5232, 428), 3);
    add_object(create_floatinglantern_1829(4992, 452), 3);
    add_object(create_floatinglantern_1829(5280, 548), 3);
    add_object(create_floatinglantern_1829(5088, 396), 3);
    add_object(create_floatinglantern_1829(4944, 276), 3);
    add_object(create_floatinglantern_1829(5192, 308), 3);
    add_object(create_floatinglantern_1829(4896, 420), 3);
    add_object(create_floatinglantern_1829(5120, 500), 3);
    add_object(create_floatinglantern_1829(5032, 244), 3);
    add_object(create_gimmickhangingidleswitch_1257(913, 1168), 3);
    add_object(create_gimmickhangingidleswitch_1257(817, 872), 3);
    add_object(create_gimmickhangingidleswitch_1257(4249, 272), 3);
    add_object(create_gachapondoor_1858(832, 1248), 3);
    add_object(create_gachapondoor_1858(736, 952), 3);
    add_object(create_gachaponfront_1859(871, 1208), 3);
    add_object(create_gachaponfront_1859(775, 912), 3);
    add_object(create_gachaponfront_1859(4207, 312), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheelpiece_1720(1200, 1128), 3);
    add_object(create_levelferriswheel1_1765(1200, 1128), 3);
    add_object(create_levelferriswheel2_1766(1200, 1128), 3);
    add_object(create_levelferriswheel3_1767(1200, 1128), 3);
    add_object(create_levelferriswheel4_1768(1200, 1128), 3);
    add_object(create_gimmickverticalhalfpipe1_1821(-376, 1672), 3);
    add_object(create_gimmickverticalhalfpipe2_1825(-280, 1672), 3);
    add_object(create_gimmickverticalhalfpipe3_1823(-256, 1672), 3);
    add_object(create_gimmickverticalhalfpipe4_1822(-376, 1768), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(-272, 1768), 3);
    add_object(create_gimmickverticalhalfpipe6_1824(-256, 1768), 3);
    add_object(create_redspringright_441(1024, 1344), 3);
    add_object(create_goldplatform1_1735(-280, 872), 3);
    add_object(create_goldplatform1_1735(-88, 808), 3);
    add_object(create_goldplatform2_1736(-216, 840), 3);
    add_object(create_goldplatform2_1736(-152, 808), 3);
    add_object(create_gimmickverticalhalfpipe4_1822(1440, 1280), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(1520, 1184), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(1520, 1088), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(1520, 992), 3);
    add_object(create_gimmickverticalhalfpipe6_1824(1440, 896), 3);
    add_object(create_monitorcrystals_324(800, 240), 3);
    add_object(create_monitorcrystals_324(768, 240), 3);
    add_object(create_objectpetal_302(1401, 233), 3);
    add_object(create_objectpetal_302(1265, 233), 3);
    add_object(create_objectpetal_302(1537, 233), 3);
    add_object(create_laddertop_357(1004, 823), 3);
    add_object(create_redspringup_440(1664, 1168), 3);
    add_object(create_redspringup_440(1696, 1168), 3);
    add_object(create_redspringup_440(1728, 1168), 3);
    add_object(create_redspringup_440(1760, 1168), 3);
    add_object(create_redspringup_440(1792, 1168), 3);
    add_object(create_redspringup_440(1824, 1168), 3);
    add_object(create_redspringup_440(1856, 1168), 3);
    add_object(create_redspringup_440(1888, 1168), 3);
    add_object(create_redspringdown_443(1728, 704), 3);
    add_object(create_redspringdown_443(1760, 704), 3);
    add_object(create_redspringdown_443(1792, 704), 3);
    add_object(create_redspringdown_443(1824, 704), 3);
    add_object(create_redspringdown_443(1856, 704), 3);
    add_object(create_redspringdown_443(1888, 704), 3);
    add_object(create_objectcrystal_279(1677, 954), 3);
    add_object(create_objectcrystal_279(1709, 954), 3);
    add_object(create_objectcrystal_279(1741, 954), 3);
    add_object(create_objectcrystal_279(1773, 954), 3);
    add_object(create_objectcrystal_279(1805, 954), 3);
    add_object(create_objectcrystal_279(1837, 954), 3);
    add_object(create_objectcrystal_279(1869, 954), 3);
    add_object(create_objectcrystal_279(1901, 954), 3);
    add_object(create_objectcrystal_279(1677, 922), 3);
    add_object(create_objectcrystal_279(1709, 922), 3);
    add_object(create_objectcrystal_279(1741, 922), 3);
    add_object(create_objectcrystal_279(1773, 922), 3);
    add_object(create_objectcrystal_279(1805, 922), 3);
    add_object(create_objectcrystal_279(1837, 922), 3);
    add_object(create_objectcrystal_279(1869, 922), 3);
    add_object(create_objectcrystal_279(1901, 922), 3);
    add_object(create_objectcrystal_279(1677, 986), 3);
    add_object(create_objectcrystal_279(1709, 986), 3);
    add_object(create_objectcrystal_279(1741, 986), 3);
    add_object(create_objectcrystal_279(1773, 986), 3);
    add_object(create_objectcrystal_279(1805, 986), 3);
    add_object(create_objectcrystal_279(1837, 986), 3);
    add_object(create_objectcrystal_279(1869, 986), 3);
    add_object(create_objectcrystal_279(1901, 986), 3);
    add_object(create_objectcrystal_279(1677, 890), 3);
    add_object(create_objectcrystal_279(1709, 890), 3);
    add_object(create_objectcrystal_279(1741, 890), 3);
    add_object(create_objectcrystal_279(1773, 890), 3);
    add_object(create_objectcrystal_279(1805, 890), 3);
    add_object(create_objectcrystal_279(1837, 890), 3);
    add_object(create_objectcrystal_279(1869, 890), 3);
    add_object(create_objectcrystal_279(1901, 890), 3);
    add_object(create_objectcrystal_279(1453, 658), 3);
    add_object(create_objectcrystal_279(1453, 698), 3);
    add_object(create_objectcrystal_279(1437, 738), 3);
    add_object(create_objectcrystal_279(1565, 474), 3);
    add_object(create_objectcrystal_279(1565, 514), 3);
    add_object(create_objectcrystal_279(1549, 554), 3);
    add_object(create_objectchair_1779(261, 1305), 3);
    add_object(create_objectchair_1779(389, 1305), 3);
    add_object(create_objectchair_1779(133, 1305), 3);
    add_object(create_lamppostfront_1778(576, 1218), 3);
    add_object(create_monitorrings_407(112, 1008), 3);
    add_object(create_objectcrystal_279(85, 1010), 3);
    add_object(create_objectcrystal_279(173, 1010), 3);
    add_object(create_objectcrystal_279(109, 986), 3);
    add_object(create_objectcrystal_279(149, 986), 3);
    add_object(create_paperlantern_527(1552, 992), 3);
    add_object(create_pigeon_1724(236, 1040), 3);
    add_object(create_signyield_1738(1296, 1376), 3);
    add_object(create_minibossufobeam_1721(1792, 464), 3);
    add_object(create_breakablefloor2_1761(3328, 512), 3);
    add_object(create_breakablefloor2_1761(3392, 512), 3);
    add_object(create_redspringleft_442(3712, 768), 3);
    add_object(create_redspringleft_442(3712, 736), 3);
    add_object(create_redspringleft_442(3712, 704), 3);
    add_object(create_redspringleft_442(3712, 672), 3);
    add_object(create_redspringleft_442(3712, 640), 3);
    add_object(create_redspringleft_442(3712, 608), 3);
    add_object(create_redspringleft_442(3712, 576), 3);
    add_object(create_redspringleft_442(3712, 544), 3);
    add_object(create_redspringleft_442(3712, 512), 3);
    add_object(create_redspringleft_442(3712, 480), 3);
    add_object(create_redspringleft_442(3712, 448), 3);
    add_object(create_redspringleft_442(3712, 416), 3);
    add_object(create_breakablefloor2_1761(3328, 800), 3);
    add_object(create_breakablefloor2_1761(3392, 800), 3);
    add_object(create_breakablefloor2_1761(2560, 800), 3);
    add_object(create_breakablefloor2_1761(2624, 800), 3);
    add_object(create_breakablefloor2_1761(2816, 800), 3);
    add_object(create_breakablefloor2_1761(2880, 800), 3);
    add_object(create_breakablefloor2_1761(2688, 800), 3);
    add_object(create_breakablefloor2_1761(2752, 800), 3);
    add_object(create_redspringright_441(2160, 1056), 3);
    add_object(create_redspringright_441(2160, 1024), 3);
    add_object(create_redspringright_441(2160, 992), 3);
    add_object(create_breakablefloor2_1761(2304, 1088), 3);
    add_object(create_breakablefloor2_1761(2368, 1088), 3);
    add_object(create_breakablefloor2_1761(2432, 1088), 3);
    add_object(create_breakablefloor2_1761(2496, 1088), 3);
    add_object(create_breakablefloor2_1761(2560, 1088), 3);
    add_object(create_breakablefloor2_1761(2624, 1088), 3);
    add_object(create_breakablefloor2_1761(2688, 1088), 3);
    add_object(create_breakablefloor2_1761(2752, 1088), 3);
    add_object(create_breakablefloor2_1761(2816, 1088), 3);
    add_object(create_breakablefloor2_1761(2880, 1088), 3);
    add_object(create_breakablefloor2_1761(3328, 1088), 3);
    add_object(create_breakablefloor2_1761(3392, 1088), 3);
    add_object(create_redspringright_441(2160, 960), 3);
    add_object(create_redspringright_441(2160, 928), 3);
    add_object(create_redspringright_441(2160, 896), 3);
    add_object(create_redspringleft_442(3712, 384), 3);
    add_object(create_redspringleft_442(3712, 352), 3);
    add_object(create_redspringleft_442(3712, 320), 3);
    add_object(create_redspringright_441(2160, 864), 3);
    add_object(create_redspringright_441(2160, 832), 3);
    add_object(create_redspringright_441(2160, 800), 3);
    add_object(create_redspringright_441(2160, 768), 3);
    add_object(create_redspringright_441(2160, 736), 3);
    add_object(create_redspringright_441(2160, 704), 3);
    add_object(create_redspringleft_442(3824, 1008), 3);
    add_object(create_breakablefloor2_1761(2944, 800), 3);
    add_object(create_breakablefloor2_1761(3008, 800), 3);
    add_object(create_breakablefloor2_1761(3200, 800), 3);
    add_object(create_breakablefloor2_1761(3264, 800), 3);
    add_object(create_breakablefloor2_1761(3072, 800), 3);
    add_object(create_breakablefloor2_1761(3136, 800), 3);
    add_object(create_breakablefloor2_1761(2944, 1088), 3);
    add_object(create_breakablefloor2_1761(3008, 1088), 3);
    add_object(create_breakablefloor2_1761(3072, 1088), 3);
    add_object(create_breakablefloor2_1761(3136, 1088), 3);
    add_object(create_breakablefloor2_1761(3200, 1088), 3);
    add_object(create_breakablefloor2_1761(3264, 1088), 3);
    add_object(create_lamppostfront_1778(2752, 738), 3);
    add_object(create_lamppostfront_1778(2880, 738), 3);
    add_object(create_lamppostfront_1778(3136, 738), 3);
    add_object(create_lamppostfront_1778(3264, 738), 3);
    add_object(create_lamppostfront_1778(2752, 1026), 3);
    add_object(create_lamppostfront_1778(2880, 1026), 3);
    add_object(create_lamppostfront_1778(3136, 1026), 3);
    add_object(create_lamppostfront_1778(3264, 1026), 3);
    add_object(create_lamppostfront_1778(3136, 450), 3);
    add_object(create_lamppostfront_1778(3264, 450), 3);
    add_object(create_lamppostfront_1778(2752, 450), 3);
    add_object(create_lamppostfront_1778(2880, 450), 3);
    add_object(create_lamppostfront_1778(2368, 450), 3);
    add_object(create_lamppostfront_1778(2496, 450), 3);
    add_object(create_layerchangeto0_405(4280, 680), 3);
    add_object(create_layerchangeto0_405(4280, 744), 3);
    add_object(create_gachapondoor_1858(4168, 352), 3);
    add_object(create_layer1loop2_1744(6288, 360), 3);
    add_object(create_layer1loop2_1744(6336, 408), 3);
    add_object(create_layer0loop2_1743(6680, 408), 3);
    add_object(create_layer0loop2_1743(6728, 360), 3);
    add_object(create_layer0loop3_1857(6776, 288), 3);
    add_object(create_layer0loop2_1743(6632, 456), 3);
    add_object(create_layer1loop2_1744(6640, 360), 3);
    add_object(create_layer1loop2_1744(6688, 408), 3);
    add_object(create_layer0loop2_1743(7032, 408), 3);
    add_object(create_layer0loop2_1743(7080, 360), 3);
    add_object(create_layer0loop3_1857(7128, 288), 3);
    add_object(create_layer0loop2_1743(6984, 456), 3);
    add_object(create_layer1loop2_1744(6992, 360), 3);
    add_object(create_layer1loop2_1744(7040, 408), 3);
    add_object(create_layerchangeswitch2_1239(6552, 480), 3);
    add_object(create_layerchangeswitch_404(6200, 232), 3);
    add_object(create_layerchangeswitch2_1239(6200, 480), 3);
    add_object(create_layerchangeswitch2_1239(6552, 416), 3);
    add_object(create_layerchangeswitch2_1239(6200, 416), 3);
    add_object(create_layerchangeswitch2_1239(6552, 352), 3);
    add_object(create_layerchangeswitch2_1239(7256, 472), 3);
    add_object(create_layerchangeswitch2_1239(6904, 480), 3);
    add_object(create_layerchangeswitch2_1239(7256, 408), 3);
    add_object(create_layerchangeswitch2_1239(6904, 416), 3);
    add_object(create_layerchangeswitch2_1239(7256, 344), 3);
    add_object(create_layerchangeswitch2_1239(6904, 352), 3);
    add_object(create_layerchangeswitch_404(6200, 168), 3);
    add_object(create_layerchangeswitch_404(6200, 104), 3);
    add_object(create_layerchangeswitch_404(6552, 232), 3);
    add_object(create_layerchangeswitch_404(6552, 168), 3);
    add_object(create_layerchangeswitch_404(6552, 104), 3);
    add_object(create_layerchangeswitch_404(6904, 232), 3);
    add_object(create_layerchangeswitch_404(6904, 168), 3);
    add_object(create_layerchangeswitch_404(6904, 104), 3);
    add_object(create_layer0loop2_1743(4936, 912), 3);
    add_object(create_layer0loop3_1857(4984, 840), 3);
    add_object(create_layer0loop2_1743(4888, 960), 3);
    add_object(create_layer1loop2_1744(4808, 872), 3);
    add_object(create_layer1loop2_1744(4856, 920), 3);
    add_object(create_layerchangeswitch_404(4720, 744), 3);
    add_object(create_layerchangeswitch2_1239(4608, 1120), 3);
    add_object(create_layerchangeswitch2_1239(4608, 1064), 3);
    add_object(create_layerchangeswitch2_1239(4608, 1008), 3);
    add_object(create_layerchangeswitch_404(4720, 680), 3);
    add_object(create_layer1loop2_1744(4904, 968), 3);
    add_object(create_dragontunnelhide1_1777(5504, 480), 3);
    add_object(create_floatinglantern_1829(5272, 244), 3);
    add_object(create_floatinglantern_1829(5328, 364), 3);
    add_object(create_floatinglantern_1829(5368, 476), 3);
    add_object(create_floatinglantern_1829(5408, 276), 3);
    add_object(create_floatinglantern_1829(5472, 404), 3);
    add_object(create_floatinglantern_1829(5512, 500), 3);
    add_object(create_floatinglantern_1829(5536, 252), 3);
    add_object(create_floatinglantern_1829(5600, 396), 3);
    add_object(create_floatinglantern_1829(4848, 516), 3);
    add_object(create_enemylimiter_350(5269, 770), 3);
    add_object(create_enemylimiter_350(5301, 770), 3);
    add_object(create_enemylimiter_350(5605, 770), 3);
    add_object(create_enemylimiter_350(5637, 770), 3);
    add_object(create_objectcrystal_279(2405, 490), 3);
    add_object(create_objectcrystal_279(2453, 490), 3);
    add_object(create_objectcrystal_279(2789, 490), 3);
    add_object(create_objectcrystal_279(2837, 490), 3);
    add_object(create_objectcrystal_279(3181, 490), 3);
    add_object(create_objectcrystal_279(3229, 490), 3);
    add_object(create_objectcrystal_279(3173, 778), 3);
    add_object(create_objectcrystal_279(3221, 778), 3);
    add_object(create_objectcrystal_279(2789, 778), 3);
    add_object(create_gimmickrollingarch_1715(9088, 608), 3);
    add_object(create_objectcrystal_279(2837, 778), 3);
    add_object(create_objectcrystal_279(2789, 1066), 3);
    add_object(create_objectcrystal_279(2837, 1066), 3);
    add_object(create_objectcrystal_279(3173, 1066), 3);
    add_object(create_objectcrystal_279(3221, 1066), 3);
    add_object(create_objectcrystal_279(4365, 874), 3);
    add_object(create_objectcrystal_279(4365, 914), 3);
    add_object(create_objectcrystal_279(4365, 954), 3);
    add_object(create_objectcrystal_279(4365, 994), 3);
    add_object(create_objectcrystal_279(4365, 1034), 3);
    add_object(create_objectcrystal_279(4365, 1074), 3);
    add_object(create_objectchair_1779(5717, 1257), 3);
    add_object(create_pigeon_1724(5828, 1200), 3);
    add_object(create_pigeon_1724(5796, 1168), 3);
    add_object(create_enemyflarecannon_1820(6236, 1328), 3);
    add_object(create_enemyflarecannon_1820(6308, 1328), 3);
    add_object(create_lamppostfront_1778(6512, 1218), 3);
    add_object(create_objectchair_1779(6869, 1161), 3);
    add_object(create_laddertop_357(6060, 311), 3);
    add_object(create_redspringup_440(8832, 1072), 3);
    add_object(create_redspringup_440(8864, 1072), 3);
    add_object(create_redspringup_440(8896, 1072), 3);
    add_object(create_redspringup_440(8928, 1072), 3);
    add_object(create_yellowspringupright_433(5632, 496), 3);
    add_object(create_objectjumppad_1510(5632, 640), 3);
    add_object(create_objectjumppad_1510(5888, 640), 3);
    add_object(create_objectjumppad_1510(5568, 784), 3);
    add_object(create_objectcrystal_279(5757, 642), 3);
    add_object(create_objectcrystal_279(5725, 642), 3);
    add_object(create_objectcrystal_279(5693, 642), 3);
    add_object(create_objectcrystal_279(5789, 642), 3);
    add_object(create_objectcrystal_279(5661, 642), 3);
    add_object(create_enemysuperturretus_1828(7315, 1032), 3);
    add_object(create_enemysuperturretus_1828(5587, 1136), 3);
    add_object(create_objectfuel_528(1404, 36), 3);
    add_object(create_objectcrystal_279(1341, 26), 3);
    add_object(create_objectcrystal_279(1309, 26), 3);
    add_object(create_objectcrystal_279(1469, 26), 3);
    add_object(create_objectcrystal_279(1501, 26), 3);
    add_object(create_flag_1739(944, 48), 3);
    add_object(create_flag_1739(856, 48), 3);
    add_object(create_flag_1739(2024, 120), 3);
    add_object(create_flag_1739(1936, 120), 3);
    add_object(create_lamppostfront_1778(944, 258), 3);
    add_object(create_layerchangeswitch_404(5128, 1000), 3);
    add_object(create_layerchangeswitch_404(5128, 944), 3);
    add_object(create_layerchangeswitch_404(5128, 888), 3);
    add_object(create_layerchangeswitch_404(5120, 784), 3);
    add_object(create_layerchangeswitch_404(5120, 720), 3);
    add_object(create_objectpetal_302(9993, 153), 3);
    add_object(create_objectpetal_302(10041, 153), 3);
    add_object(create_objectpetal_302(10089, 153), 3);
    add_object(create_enemytrafficle_1717(9540, 224), 3);
    add_object(create_enemytrafficle1_1757(9540, 203), 3);
    add_object(create_enemytrafficle2_1758(9540, 227), 3);
    add_object(create_enemytrafficle3_1759(9540, 251), 3);
    add_object(create_gimmickrollingarch2_1726(8800, 896), 3);
    add_object(create_objectcrystal_279(6453, 434), 3);
    add_object(create_objectcrystal_279(6509, 490), 3);
    add_object(create_objectcrystal_279(6613, 490), 3);
    add_object(create_objectcrystal_279(6669, 434), 3);
    add_object(create_objectcrystal_279(6805, 434), 3);
    add_object(create_objectcrystal_279(6861, 490), 3);
    add_object(create_objectcrystal_279(6965, 490), 3);
    add_object(create_objectcrystal_279(7021, 434), 3);
    add_object(create_objectcrystal_279(6445, 314), 3);
    add_object(create_objectcrystal_279(6677, 314), 3);
    add_object(create_objectcrystal_279(6509, 274), 3);
    add_object(create_objectcrystal_279(6613, 274), 3);
    add_object(create_objectcrystal_279(6797, 314), 3);
    add_object(create_objectcrystal_279(7029, 314), 3);
    add_object(create_objectcrystal_279(6861, 274), 3);
    add_object(create_objectcrystal_279(6965, 274), 3);
    add_object(create_lamppostfront_1778(10064, 114), 3);
    add_object(create_largecolumn_1861(12223, 223), 3);
    add_object(create_largecolumn_1861(12287, 223), 3);
    add_object(create_largecolumn2_1862(12287, 159), 3);
    add_object(create_npcserpentine_947(10164, 196), 3);
    add_object(create_bossserpentinearm_1863(10244, -67), 3);
    add_object(create_effectwarning_1513(10212, -112), 3);
    add_object(create_effectwarning2_1864(10148, -112), 3);
    add_object(create_bosschargeglow_1865(10336, -96), 3);
    add_object(create_bossserpfloorcheck_1866(10200, 196), 3);
    add_object(create_bossserphitbox_1867(10038, -52), 3);
    add_object(create_shieldserpentine_1868(10408, -96), 3);
    add_object(create_ramp1_1869(11351, -105), 3);
    add_object(create_lamppostfront_1778(10584, 162), 3);
    add_object(create_lamppostfront_1778(11008, 306), 3);
    add_object(create_lamppostfront_1778(11392, 306), 3);
    add_object(create_lamppostfront_1778(11200, 306), 3);
    add_object(create_lamppostfront_1778(11696, 162), 3);
    add_object(create_flag_1739(11536, 192), 3);
    add_object(create_flag_1739(11624, 192), 3);
    add_object(create_flag_1739(10800, 192), 3);
    add_object(create_flag_1739(10888, 192), 3);
    add_object(create_minibossbarrier_924(12400, 128), 3);
    add_object(create_minibossbarrier_924(12400, 80), 3);
    add_object(create_minibossbarrier_924(12400, 32), 3);
    add_object(create_minibossbarrier_924(12400, -16), 3);
    add_object(create_minibossufodebris_1870(13416, -88), 3);
    add_object(create_minibossbarrier_924(12400, 176), 3);
    add_object(create_objectcrystal_279(14477, 210), 3);
    add_object(create_objectcrystal_279(14501, 210), 3);
    add_object(create_objectcrystal_279(14517, 210), 3);
    add_object(create_objectcrystal_279(14509, 210), 3);
    add_object(create_objectcrystal_279(14485, 210), 3);
    add_object(create_objectcrystal_279(14549, 210), 3);
    add_object(create_objectcrystal_279(14565, 210), 3);
    add_object(create_objectcrystal_279(14381, 210), 3);
    add_object(create_objectcrystal_279(14317, 210), 3);
    add_object(create_objectcrystal_279(14405, 210), 3);
    add_object(create_objectcrystal_279(14581, 210), 3);
    add_object(create_objectcrystal_279(14589, 210), 3);
    add_object(create_objectcrystal_279(14605, 210), 3);
    add_object(create_objectcrystal_279(14613, 210), 3);
    add_object(create_objectcrystal_279(14629, 210), 3);
    add_object(create_objectcrystal_279(14645, 210), 3);
    add_object(create_objectcrystal_279(14525, 202), 3);
    add_object(create_objectcrystal_279(14541, 202), 3);
    add_object(create_objectcrystal_279(14557, 202), 3);
    add_object(create_objectcrystal_279(14573, 202), 3);
    add_object(create_objectcrystal_279(14597, 202), 3);
    add_object(create_objectcrystal_279(14621, 202), 3);
    add_object(create_objectcrystal_279(14493, 202), 3);
    add_object(create_objectcrystal_279(14453, 210), 3);
    add_object(create_objectpetal_302(14529, 209), 3);
    add_object(create_objectpetal_302(14601, 209), 3);
    add_object(create_objectpetal_302(14561, 209), 3);
    add_object(create_objectpetal_302(14577, 209), 3);
    add_object(create_objectpetal_302(14521, 209), 3);
    add_object(create_objectpetal_302(14465, 209), 3);
    add_object(create_largesign2_1636(14232, -128), 3);
    add_object(create_goldplatform1_1735(13568, 224), 3);
    add_object(create_goldplatform1_1735(13632, 224), 3);
    add_object(create_goldplatform1_1735(13696, 224), 3);
    add_object(create_goldplatform1_1735(13760, 224), 3);
    add_object(create_largecolumn_1861(13183, 223), 3);
    add_object(create_largecolumn_1861(13247, 223), 3);
    add_object(create_largecolumn2_1862(13247, 159), 3);
    add_object(create_gimmickrollingarch2_1726(9184, 608), 3);
    add_object(create_monitorcrystals_324(7944, 1056), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheelpiece_1720(6272, 1104), 3);
    add_object(create_levelferriswheel1_1765(6272, 1104), 3);
    add_object(create_levelferriswheel2_1766(6272, 1104), 3);
    add_object(create_levelferriswheel3_1767(6272, 1104), 3);
    add_object(create_levelferriswheel4_1768(6272, 1104), 3);
    add_object(create_lamppostfront_1778(5824, 418), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnel1_1845(6064, 840), 3);
    add_object(create_gimmickdragontunnelhead_1638(6064, 844), 3);
    add_object(create_lamppostfront_1778(7008, 770), 3);
    add_object(create_enemyflarecannon_1820(6940, 808), 3);
    add_object(create_objectcrystal_279(7581, 1074), 3);
    add_object(create_objectcrystal_279(7517, 1074), 3);
    add_object(create_objectcrystal_279(7645, 1074), 3);
    add_object(create_objectcrystal_279(7453, 1074), 3);
    add_object(create_dragontunnelhide1_1777(6784, 784), 3);
    add_object(create_dragontunnelhide2_1871(6032, 784), 3);
    add_object(create_layerchangeswitch2_1239(4088, 480), 3);
    add_object(create_layerchangeswitch_404(3896, 1088), 3);
    add_object(create_layerchangeswitch_404(3896, 1136), 3);
    add_object(create_layer0block_1872(4096, 800), 3);
    add_object(create_gimmickverticalhalfpipe4_1822(4128, 1088), 3);
    add_object(create_gimmickverticalhalfpipe6_1824(4128, 480), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(4208, 992), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(4208, 896), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(4208, 800), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(4208, 704), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(4208, 608), 3);
    add_object(create_gimmickverticalhalfpipe5_1826(4208, 512), 3);
    add_object(create_redspringup_440(3968, 368), 3);
    add_object(create_redspringupleft_439(4568, 832), 3);
    add_object(create_objectpetal_302(4369, 465), 3);
    add_object(create_objectpetal_302(4369, 497), 3);
    add_object(create_objectcrystal_279(7085, 754), 3);
    add_object(create_objectcrystal_279(7117, 754), 3);
    add_object(create_objectcrystal_279(7149, 762), 3);
    add_object(create_objectcrystal_279(4037, 498), 3);
    add_object(create_objectcrystal_279(4005, 522), 3);
    add_object(create_objectcrystal_279(3981, 562), 3);
    add_object(create_objectcrystal_279(3981, 714), 3);
    add_object(create_objectcrystal_279(4005, 754), 3);
    add_object(create_objectcrystal_279(4037, 778), 3);
    add_object(create_monitorkeystone_562(4680, 424), 3);
    add_object(create_paperlantern_527(4080, 120), 3);
    add_object(create_paperlantern_527(4464, 120), 3);
    add_object(create_paperlantern_527(4208, 120), 3);
    add_object(create_paperlantern_527(4336, 120), 3);
    add_object(create_pigeon_1724(8380, 864), 3);
    add_object(create_pigeon_1724(8324, 896), 3);
    add_object(create_monitorrings_407(7136, 1104), 3);
    add_object(create_monitorrings_407(8248, 1056), 3);
    add_object(create_breakablefloor1_1760(10880, 1040), 3);
    add_object(create_breakablefloor1_1760(10944, 1040), 3);
    add_object(create_breakablefloor1_1760(11008, 1040), 3);
    add_object(create_breakablefloor1_1760(11072, 1040), 3);
    add_object(create_breakablefloor1_1760(11264, 1040), 3);
    add_object(create_breakablefloor1_1760(11328, 1040), 3);
    add_object(create_breakablefloor1_1760(10880, 1184), 3);
    add_object(create_breakablefloor1_1760(10944, 1232), 3);
    add_object(create_breakablefloor1_1760(11008, 1184), 3);
    add_object(create_breakablefloor1_1760(11072, 1184), 3);
    add_object(create_breakablefloor1_1760(11264, 1184), 3);
    add_object(create_breakablefloor1_1760(11328, 1184), 3);
    add_object(create_breakablefloor2_1761(10944, 992), 3);
    add_object(create_breakablefloor2_1761(10880, 992), 3);
    add_object(create_breakablefloor2_1761(11072, 992), 3);
    add_object(create_breakablefloor2_1761(11008, 992), 3);
    add_object(create_breakablefloor2_1761(11328, 992), 3);
    add_object(create_breakablefloor2_1761(11264, 992), 3);
    add_object(create_breakablefloor1_1760(10880, 1232), 3);
    add_object(create_breakablefloor1_1760(10944, 1184), 3);
    add_object(create_breakablefloor1_1760(11008, 1232), 3);
    add_object(create_breakablefloor1_1760(11072, 1232), 3);
    add_object(create_breakablefloor1_1760(11264, 1232), 3);
    add_object(create_breakablefloor1_1760(11328, 1232), 3);
    add_object(create_breakablefloor1_1760(10880, 1280), 3);
    add_object(create_breakablefloor1_1760(10944, 1280), 3);
    add_object(create_breakablefloor1_1760(11008, 1280), 3);
    add_object(create_breakablefloor1_1760(11072, 1280), 3);
    add_object(create_breakablefloor1_1760(11264, 1280), 3);
    add_object(create_breakablefloor1_1760(11328, 1280), 3);
    add_object(create_breakablefloor1_1760(10880, 1088), 3);
    add_object(create_breakablefloor1_1760(10944, 1088), 3);
    add_object(create_breakablefloor1_1760(11008, 1088), 3);
    add_object(create_breakablefloor1_1760(11072, 1088), 3);
    add_object(create_breakablefloor1_1760(11264, 1088), 3);
    add_object(create_breakablefloor1_1760(11328, 1088), 3);
    add_object(create_breakablefloor1_1760(10880, 1136), 3);
    add_object(create_breakablefloor1_1760(10944, 1136), 3);
    add_object(create_breakablefloor1_1760(11008, 1136), 3);
    add_object(create_breakablefloor1_1760(11072, 1136), 3);
    add_object(create_breakablefloor1_1760(11264, 1136), 3);
    add_object(create_breakablefloor1_1760(11328, 1136), 3);
    add_object(create_breakablefloor1_1760(11136, 1040), 3);
    add_object(create_breakablefloor1_1760(11200, 1040), 3);
    add_object(create_breakablefloor1_1760(11136, 1184), 3);
    add_object(create_breakablefloor1_1760(11200, 1184), 3);
    add_object(create_breakablefloor2_1761(11200, 992), 3);
    add_object(create_breakablefloor2_1761(11136, 992), 3);
    add_object(create_breakablefloor1_1760(11136, 1232), 3);
    add_object(create_breakablefloor1_1760(11200, 1232), 3);
    add_object(create_breakablefloor1_1760(11136, 1280), 3);
    add_object(create_breakablefloor1_1760(11200, 1280), 3);
    add_object(create_breakablefloor1_1760(11136, 1088), 3);
    add_object(create_breakablefloor1_1760(11200, 1088), 3);
    add_object(create_breakablefloor1_1760(11136, 1136), 3);
    add_object(create_breakablefloor1_1760(11200, 1136), 3);
    add_object(create_minibosssamuwheel_1873(11136, 488), 3);
    add_object(create_minibosssamulefthand_1874(11080, 536), 3);
    add_object(create_minibosssamurighthand_1875(11183, 536), 3);
    add_object(create_minibosssamu_1876(11136, 496), 3);
    add_object(create_minibosssamufloorcheck_1877(11140, 608), 3);
    add_object(create_yellowspringup_434(8544, 1072), 3);
    add_object(create_goldplatform3_1737(8704, 552), 3);
    add_object(create_goldplatform3_1737(8640, 552), 3);
    add_object(create_goldplatform3_1737(8576, 552), 3);
    add_object(create_goldplatform3_1737(8512, 552), 3);
    add_object(create_objectpetal_302(8617, 537), 3);
    add_object(create_objectpetal_302(8665, 537), 3);
    add_object(create_flag_1739(8416, 616), 3);
    add_object(create_flag_1739(8504, 616), 3);
    add_object(create_flag_1739(8800, 568), 3);
    add_object(create_flag_1739(8888, 568), 3);
    add_object(create_signstop_1716(9440, 800), 3);
    add_object(create_yellowspringupright_433(7696, 936), 3);
    add_object(create_yellowspringupleft_432(7856, 936), 3);
    add_object(create_enemycoilpiece1_1751(7592, 704), 3);
    add_object(create_enemycoilpiece3_1752(7591, 704), 3);
    add_object(create_enemycoilpiece2_1753(7592, 704), 3);
    add_object(create_enemycoilpiece4_1754(7591, 704), 3);
    add_object(create_enemycoil_1755(7592, 700), 3);
    add_object(create_enemycoilhead_1782(7592, 664), 3);
    add_object(create_enemycoilflip_1756(7592, 704), 3);
    add_object(create_enemylimiter_350(7421, 714), 3);
    add_object(create_enemylimiter_350(7453, 714), 3);
    add_object(create_enemylimiter_350(7485, 714), 3);
    add_object(create_objectcrystal_279(7957, 826), 3);
    add_object(create_objectcrystal_279(7981, 794), 3);
    add_object(create_objectcrystal_279(8005, 826), 3);
    add_object(create_objectcrystal_279(8029, 794), 3);
    add_object(create_objectcrystal_279(8053, 826), 3);
    add_object(create_objectcrystal_279(8077, 794), 3);
    add_object(create_objectcrystal_279(8101, 826), 3);
    add_object(create_objectcrystal_279(8005, 762), 3);
    add_object(create_objectcrystal_279(8053, 762), 3);
    add_object(create_objectcrystal_279(8029, 730), 3);
    add_object(create_enemylimiter_350(7741, 714), 3);
    add_object(create_enemylimiter_350(7773, 714), 3);
    add_object(create_enemylimiter_350(7805, 714), 3);
    add_object(create_objectcrystal_279(13797, 394), 3);
    add_object(create_objectcrystal_279(13797, 354), 3);
    add_object(create_objectcrystal_279(13797, 314), 3);
    add_object(create_breakablefloor2_1761(11008, 368), 3);
    add_object(create_breakablefloor2_1761(11072, 368), 3);
    add_object(create_breakablefloor2_1761(11136, 368), 3);
    add_object(create_breakablefloor2_1761(11200, 368), 3);
    add_object(create_monitorbomb_563(11008, 336), 3);
    add_object(create_monitorbomb_563(11040, 336), 3);
    add_object(create_monitorbomb_563(11072, 336), 3);
    add_object(create_monitorbomb_563(11104, 336), 3);
    add_object(create_monitorbomb_563(11136, 336), 3);
    add_object(create_monitorbomb_563(11168, 336), 3);
    add_object(create_monitorbomb_563(11200, 336), 3);
    add_object(create_monitorbomb_563(11232, 336), 3);
    add_object(create_hazardspikesup_1769(10880, 1344), 3);
    add_object(create_hazardspikesup_1769(10912, 1344), 3);
    add_object(create_hazardspikesup_1769(10944, 1344), 3);
    add_object(create_hazardspikesup_1769(10976, 1344), 3);
    add_object(create_hazardspikesup_1769(11008, 1344), 3);
    add_object(create_hazardspikesup_1769(11040, 1344), 3);
    add_object(create_hazardspikesup_1769(11072, 1344), 3);
    add_object(create_hazardspikesup_1769(11104, 1344), 3);
    add_object(create_hazardspikesup_1769(11136, 1344), 3);
    add_object(create_hazardspikesup_1769(11168, 1344), 3);
    add_object(create_hazardspikesup_1769(11200, 1344), 3);
    add_object(create_hazardspikesup_1769(11232, 1344), 3);
    add_object(create_hazardspikesup_1769(11264, 1344), 3);
    add_object(create_hazardspikesup_1769(11296, 1344), 3);
    add_object(create_hazardspikesup_1769(11328, 1344), 3);
    add_object(create_hazardspikesup_1769(11360, 1344), 3);
    add_object(create_enemysuperturretus_1828(12227, 688), 3);
    add_object(create_enemysuperturretus_1828(12363, 720), 3);
    add_object(create_enemysuperturretus_1828(12123, 760), 3);
    add_object(create_enemysuperturretus_1828(12507, 704), 3);
    add_object(create_bossgate_1878(11392, 800), 3);
    add_object(create_bossgate_1878(11392, 896), 3);
    add_object(create_objectfuel_528(11596, 980), 3);
    add_object(create_objectcrystal_279(7717, 266), 3);
    add_object(create_objectcrystal_279(7749, 266), 3);
    add_object(create_objectcrystal_279(7781, 266), 3);
    add_object(create_largesign2_1636(9440, -24), 3);
    add_object(create_breakablefloor1_1760(9600, 464), 3);
    add_object(create_breakablefloor1_1760(9600, 416), 3);
    add_object(create_objectcrystal_279(10405, 562), 3);
    add_object(create_objectcrystal_279(10413, 578), 3);
    add_object(create_objectcrystal_279(10421, 594), 3);
    add_object(create_objectcrystal_279(10637, 642), 3);
    add_object(create_objectcrystal_279(10685, 642), 3);
    add_object(create_objectcrystal_279(10661, 642), 3);
    add_object(create_objectcrystal_279(10653, 714), 3);
    add_object(create_objectcrystal_279(10669, 722), 3);
    add_object(create_objectcrystal_279(10685, 730), 3);
    add_object(create_objectcrystal_279(10069, 738), 3);
    add_object(create_objectcrystal_279(9989, 738), 3);
    add_object(create_objectcrystal_279(10029, 738), 3);
    add_object(create_objectcrystal_279(10701, 738), 3);
    add_object(create_objectcrystal_279(10429, 610), 3);
    add_object(create_breakablefloor1_1760(10816, 656), 3);
    add_object(create_breakablefloor1_1760(10816, 608), 3);
    add_object(create_breakablefloor1_1760(10752, 608), 3);
    add_object(create_breakablefloor1_1760(10752, 656), 3);
    add_object(create_breakablefloor1_1760(9664, 416), 3);
    add_object(create_breakablefloor1_1760(9664, 464), 3);
    add_object(create_enemysuperturretus_1828(10019, 776), 3);
    add_object(create_objectcrystal_279(9261, 426), 3);
    add_object(create_objectcrystal_279(9293, 402), 3);
    add_object(create_objectcrystal_279(9325, 378), 3);
    add_object(create_objectcrystal_279(9357, 354), 3);
    add_object(create_objectcrystal_279(9389, 330), 3);
    add_object(create_redspringupleft_439(9568, 720), 3);
    add_object(create_objectcrystal_279(8981, 298), 3);
    add_object(create_objectcrystal_279(8981, 274), 3);
    add_object(create_objectcrystal_279(8981, 250), 3);
    add_object(create_objectcrystal_279(9005, 298), 3);
    add_object(create_objectcrystal_279(9005, 274), 3);
    add_object(create_objectcrystal_279(9005, 250), 3);
    add_object(create_objectcrystal_279(9029, 298), 3);
    add_object(create_objectcrystal_279(9029, 274), 3);
    add_object(create_objectcrystal_279(9029, 250), 3);
    add_object(create_goldplatform1_1735(8960, 360), 3);
    add_object(create_goldplatform1_1735(9024, 360), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5516, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5476, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5436, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5396, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5356, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5316, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5276, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5236, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5196, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5156, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5116, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5076, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(5036, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(4996, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(4956, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(4916, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(4876, 534), 3);
    add_object(create_gimmickdragontunnelmask1_1780(4836, 534), 3);
    add_object(create_goldplatform1_1735(13184, 568), 3);
    add_object(create_goldplatform1_1735(13248, 568), 3);
    add_object(create_objectcodec_354(6274, 933), 3);
    add_object(create_savedata_28(-104, 16), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_teetertotteraxle_824(1320, 688), 4);
    add_background_object(create_teetertotteraxle_824(1432, 504), 4);
    add_background_object(create_dragonslope1_1702(4808, 872), 4);
    add_background_object(create_dragonslope1_1702(4856, 920), 4);
    add_background_object(create_dragonslope1_1702(4904, 968), 4);
    add_background_object(create_dragonslope1_1702(6384, 456), 4);
    add_background_object(create_dragonslope1_1702(6336, 408), 4);
    add_background_object(create_dragonslope1_1702(6288, 360), 4);
    add_background_object(create_dragonslope1_1702(6736, 456), 4);
    add_background_object(create_dragonslope1_1702(6688, 408), 4);
    add_background_object(create_dragonslope1_1702(6640, 360), 4);
    add_background_object(create_dragonslope1_1702(7088, 456), 4);
    add_background_object(create_dragonslope1_1702(7040, 408), 4);
    add_background_object(create_dragonslope1_1702(6992, 360), 4);
    add_background_object(create_fnfloor8_1649(8576, 896), 4);
    add_background_object(create_fnfloor8_1649(8704, 896), 4);
    add_background_object(create_fnfloor12_1659(8576, 896), 4);
    add_background_object(create_fnfloor12_1659(8704, 896), 4);
    add_background_object(create_fnfloor10_1692(8816, 896), 4);
    add_background_object(create_fnfloor9_1688(8576, 896), 4);
    add_background_object(create_fnfloor13_1691(8576, 896), 4);
    add_background_object(create_fnfloor14_1660(8816, 896), 4);
    add_background_object(create_fnfloor8_1649(8960, 608), 4);
    add_background_object(create_fnfloor8_1649(9088, 608), 4);
    add_background_object(create_fnfloor12_1659(8960, 608), 4);
    add_background_object(create_fnfloor12_1659(9088, 608), 4);
    add_background_object(create_fnfloor10_1692(9200, 608), 4);
    add_background_object(create_fnfloor9_1688(8960, 608), 4);
    add_background_object(create_fnfloor13_1691(8960, 608), 4);
    add_background_object(create_fnfloor14_1660(9200, 608), 4);
    add_background_object(create_mallentrance3_1879(15008, 128), 4);
    add_background_object(create_mallentrance4_1841(15064, 96), 4);
    add_background_object(create_mallentrance4_1841(15064, 0), 4);
    add_background_object(create_fnrailing_1784(13568, 200), 4);
    add_background_object(create_fnrailing_1784(13632, 200), 4);
    add_background_object(create_fnrailing_1784(13696, 200), 4);
    add_background_object(create_fnrailing_1784(13760, 200), 4);
    add_background_object(create_fnfloor8_1649(14976, 224), 4);
    add_background_object(create_fnfloor12_1659(14976, 224), 4);
    add_background_object(create_fnfloor8_1649(10944, 416), 4);
    add_background_object(create_fnfloor8_1649(11072, 416), 4);
    add_background_object(create_fnfloor8_1649(10944, 512), 4);
    add_background_object(create_fnfloor8_1649(11072, 512), 4);
    add_background_object(create_fnfloor8_1649(11200, 416), 4);
    add_background_object(create_fnfloor8_1649(11200, 512), 4);
    add_background_object(create_fnfloor17_1661(10944, 600), 4);
    add_background_object(create_fnfloor17_1661(11072, 600), 4);
    add_background_object(create_fnfloor17_1661(11200, 600), 4);
    add_background_object(create_fnfloor8_1649(9600, 416), 4);
    add_background_object(create_fnfloor9_1688(9600, 416), 4);
    add_background_object(create_fnfloor10_1692(9712, 416), 4);
    add_background_object(create_fnfloor20_1667(9856, 512), 4);
    add_background_object(create_fnfloor12_1659(9856, 512), 4);
    add_background_object(create_fnfloor8_1649(10752, 608), 4);
    add_background_object(create_fnfloor10_1692(10864, 608), 4);
    add_background_object(create_fnfloor9_1688(10752, 608), 4);
    add_background_object(create_fnfloor17_1661(9856, 552), 4);
    add_background_object(create_fnfloor8_1649(9600, 512), 4);
    add_background_object(create_fnfloor9_1688(9600, 512), 4);
    add_background_object(create_fnfloor8_1649(9728, 512), 4);
    add_background_object(create_fnfloor12_1659(9728, 512), 4);
    add_background_object(create_fnfloor8_1649(9728, 560), 4);
    add_background_object(create_fnfloor10_1692(9840, 560), 4);
    add_background_object(create_fnfloor8_1649(9600, 608), 4);
    add_background_object(create_fnfloor9_1688(9600, 608), 4);
    add_background_object(create_fnfloor8_1649(9600, 704), 4);
    add_background_object(create_fnfloor9_1688(9600, 656), 4);
    add_background_object(create_fnrailing_1784(8960, 336), 4);
    add_background_object(create_fnrailing_1784(9024, 336), 4);
    add_background_object(create_fnrailing_1784(13184, 544), 4);
    add_background_object(create_fnrailing_1784(13248, 544), 4);
    add_object(create_strobelight_1840(14577, 815), 4);
    add_object(create_layer0block_1872(4096, 800), 4);
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
    add_object(create_hazardspikesup_1769(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(10504, 391), 5);
    add_object(create_cameralimitbossleft_421(9872, 160), 5);
    add_object(create_cameralimitbossright_422(12271, 160), 5);
    add_object(create_cameralimitbosstop_423(10504, 0), 5);
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
    add_object(create_layerchangeswitch2_1239(-328, -8), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-64, 232), 5);
    add_object(create_playerdig_448(-56, 242), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(272, -72), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guikeystone_455(256, -72), 6);
    add_object(create_guikeystone_455(240, -72), 6);
    add_object(create_guikeystone_455(224, -72), 6);
    add_object(create_guikeystone_455(208, -72), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_stringparser_427(-72, -88), 6);
    add_object(create_dialogdata_1880(-136, 470), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
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
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_lamp_running = false;
    loop_lamp_index = 0;
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
    loop_dt_running = false;
    loop_dt_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_trigger_deactivate_boss_running = false;
    loop_trigger_deactivate_boss_index = 0;
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
    loop_samu_running = false;
    loop_samu_index = 0;
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
    loop_boss_action_running = false;
    loop_boss_action_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_31, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_31, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_31, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_31, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_31, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_31, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_31, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_31, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_31, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_31, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_31, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_31, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_31, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_31, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_31, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_31, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_31, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_31, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_31, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_31, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_31, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_31, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_31, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_31, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_31, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_31, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_31, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_31, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_31, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_31, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_31, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_31, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_31, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_31, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_31, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_31, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_31, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_31, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_31, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_31, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_31, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_31, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_31, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_31, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_31, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_31, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_31, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_31, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_31, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_31, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_31, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_31, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_31, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_31, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    not_always_1410_31 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1892_31 = loop_count;
    not_always_1822_31 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1412_31 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_special_transitions_1 = false;
    group_main_engine_level_specific_methods_bosses_bossinitiate_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_311_14 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_1 = true;
    not_always_449_13 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_1415_31 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1 = false;
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_wall_ram_1 = false;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1401_31 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1409_21 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_floor_check_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = false;
    not_always_1408_23 = loop_count;
    not_always_97_0 = loop_count;
    once_condition_1692_31 = false;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1411_31 = loop_count;
    not_always_1407_31 = loop_count;
    not_always_1413_31 = loop_count;
    not_always_1696_31 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1405_31 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1680_31 = loop_count;
    not_always_1404_31 = loop_count;
    not_always_1406_21 = loop_count;
    not_always_1714_31 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1391_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_float_down_1 = true;
    not_always_2324_31 = loop_count;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    not_always_1667_31 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_blips_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_jet_boost_normal_transitions_1 = true;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1711_31 = loop_count;
    not_always_1406_31 = loop_count;
    once_condition_1834_31 = false;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_240_14 = loop_count;
    not_always_1739_31 = loop_count;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    once_condition_1980_31 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    not_always_1409_31 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_follow_player_1 = false;
    not_always_101_0 = loop_count;
    not_always_100_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1455_13 = loop_count;
    not_always_171_8 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_ufo_chase_1 = false;
    once_condition_64_13 = false;
    group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_elbow_gun_1 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1458_13 = loop_count;
    once_condition_1828_16 = false;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_1893_31 = loop_count;
    once_condition_1777_31 = false;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1425_13 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_frame_transition_serpentine_1 = false;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_1 = false;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1849_31 = loop_count;
    not_always_2058_31 = loop_count;
    not_always_1828_31 = loop_count;
    group_mac_controls_1 = false;
    not_always_172_8 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_defeated_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_234_13 = loop_count;
    not_always_1417_31 = loop_count;
    once_condition_63_0 = false;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_ufo_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_52_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_samu_boss_samu_main_boss_samu_fist_smash_1 = false;
    not_always_1421_13 = loop_count;
    group_main_engine_level_specific_methods_floating_lanterns_1 = false;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1851_31 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    not_always_1456_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    once_condition_66_13 = false;
    not_always_1414_31 = loop_count;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    not_always_1405_21 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    once_condition_2066_31 = false;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_1715_31 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    not_always_2325_31 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    once_condition_47_13 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_encounter_with_serpentine_1 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1718_31 = loop_count;
    once_condition_1827_31 = false;
    not_always_103_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    not_always_2068_31 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_samu_1 = false;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    once_condition_1833_31 = false;
    not_always_1416_31 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    once_condition_1889_31 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    not_always_1422_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_bossinitiate_carol_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1403_31 = loop_count;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_7513()
{
    // event 1570_32
    {
        if (!(group_main_engine_1)) goto event_1570_32_end;
        media.play_id(SOUND_COMMON_FNKEYBOARD4_226, -1, 1);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(2, 4);
    }
    event_1570_32_end: ;
}
void Frames::loop_p3_32()
{
    event_func_7513();
}
void Frames::event_func_7514()
{
    // event 1493_32
    {
        if (!(group_main_engine_1)) goto event_1493_32_end;
        levelmovingplatform1_1965_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1.5);
            ((Active*)*it)->alterables->values.add(21, 1);
        }
    }
    event_1493_32_end: ;
}
void Frames::loop_rise_32()
{
    event_func_7514();
}
void Frames::event_func_7515()
{
    // event 1567_32
    {
        if (!(group_main_engine_1)) goto event_1567_32_end;
        media.play_id(SOUND_COMMON_FNKEYBOARD1_223, -1, 1);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(2, 1);
    }
    event_1567_32_end: ;
}
void Frames::loop_p0_32()
{
    event_func_7515();
}
void Frames::event_func_7516()
{
    // event 1573_32
    {
        if (!(group_main_engine_1)) goto event_1573_32_end;
        media.play_id(SOUND_COMMON_FNKEYBOARD7_229, -1, 1);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(2, 7);
    }
    event_1573_32_end: ;
}
void Frames::loop_p6_32()
{
    event_func_7516();
}
void Frames::event_func_7517()
{
    // event 1574_32
    {
        if (!(group_main_engine_1)) goto event_1574_32_end;
        media.play_id(SOUND_COMMON_FNKEYBOARD8_230, -1, 1);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(2, 8);
    }
    event_1574_32_end: ;
}
void Frames::loop_p7_32()
{
    event_func_7517();
}
void Frames::event_func_7518()
{
    // event 1571_32
    {
        if (!(group_main_engine_1)) goto event_1571_32_end;
        media.play_id(SOUND_COMMON_FNKEYBOARD5_227, -1, 1);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(2, 5);
    }
    event_1571_32_end: ;
}
void Frames::loop_p4_32()
{
    event_func_7518();
}
void Frames::event_func_7519()
{
    // event 1572_32
    {
        if (!(group_main_engine_1)) goto event_1572_32_end;
        media.play_id(SOUND_COMMON_FNKEYBOARD6_228, -1, 1);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(2, 6);
    }
    event_1572_32_end: ;
}
void Frames::loop_p5_32()
{
    event_func_7519();
}
void Frames::event_func_7520()
{
    // event 1724_32
    {
        if (!(group_main_engine_1)) goto event_1724_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyghettoshell_1971_instances.has_selection()) goto event_1724_32_end;
        FrameObject * single_instance_1724_32_0; single_instance_1724_32_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyghettoshell_1971_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1724_32_0 == NULL)
                    single_instance_1724_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1724_32_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1724_32_0))->force_frame(55+((Active*)get_single(enemyghettoshell_1971_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1724_32_end: ;
}
void Frames::loop_spawndebris_32()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_6637();
    event_func_6949();
    event_func_6950();
    event_func_7520();
}
void Frames::event_func_7521()
{
    // event 1496_32
    {
        if (!(group_main_engine_1)) goto event_1496_32_end;
        levelmovingplatform1_1965_instances.clear_selection();
        for (ObjectIterator it(levelmovingplatform1_1965_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0.5);
            ((Active*)*it)->alterables->values.add(21, 1);
        }
    }
    event_1496_32_end: ;
}
void Frames::loop_sink_32()
{
    event_func_7521();
}
