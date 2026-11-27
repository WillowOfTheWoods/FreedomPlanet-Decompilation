#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_18458()
{
    // event 1737_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1737_81_end;
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelitechargeglow_2507_instances.has_selection()) goto event_1737_81_end;
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_scale(get_max(1.0-((Active*)*it)->alterables->values.get(0)*0.04, 0.1));
        }
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(0)*5, 0));
        }
    }
    event_1737_81_end: ;
}
void Frames::event_func_18459()
{
    // event 1738_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1738_81_end;
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (25))) { it.deselect(); continue; }
        }
        if (!enemyelitechargeglow_2507_instances.has_selection()) goto event_1738_81_end;
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1738_81_end: ;
}
void Frames::event_func_18460()
{
    // event 1739_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1739_81_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1739_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
        }
    }
    event_1739_81_end: ;
}
void Frames::event_func_18461()
{
    // event 1740_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1740_81_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1740_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(2, cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(3, sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_angle(atan2_deg(sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0), 0-cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0))+180, 0);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1740_81_end: ;
}
void Frames::event_func_18462()
{
    // event 1741_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1741_81_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1741_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1741_81_0; single_instance_1741_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1741_81_0 == NULL)
                    single_instance_1741_81_0 = new_obj;
            }
        }
    }
    event_1741_81_end: ;
}
void Frames::event_func_18463()
{
    // event 1742_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1742_81_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (300))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1742_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1742_81_0; single_instance_1742_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1742_81_0 == NULL)
                    single_instance_1742_81_0 = new_obj;
            }
        }
    }
    event_1742_81_end: ;
}
void Frames::event_func_18464()
{
    // event 1744_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1744_81_end;
        enemytrooperlaser_2508_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, qualifier_20)) goto event_1744_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1744_81_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1744_81_end;
        FrameObject * single_instance_1744_81_0; single_instance_1744_81_0 = pick_random(qualifier_20);
        if (single_instance_1744_81_0 == NULL) goto event_1744_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1744_81_1; single_instance_1744_81_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1744_81_1 == NULL)
                    single_instance_1744_81_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1744_81_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1744_81_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1744_81_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1744_81_0))->alterables->values.sub(0, 10);
        {
            ((Active*)single_instance_1744_81_0)->set_shader(Render::INVERT);
        }
    }
    event_1744_81_end: ;
}
void Frames::event_func_18465()
{
    // event 1745_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1745_81_end;
        enemytrooperlaser_2508_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, playercharactersensor_383_instances)) goto event_1745_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1745_81_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1745_81_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1745_81_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1745_81_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1745_81_0; single_instance_1745_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1745_81_0 == NULL)
                    single_instance_1745_81_0 = new_obj;
            }
        }
    }
    event_1745_81_end: ;
}
void Frames::event_func_18466()
{
    // event 1746_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1)) goto event_1746_81_end;
        enemytrooperlaser_2508_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, playercharactersensor_383_instances)) goto event_1746_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1746_81_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1746_81_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) > (0))) goto event_1746_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1746_81_0; single_instance_1746_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1746_81_0 == NULL)
                    single_instance_1746_81_0 = new_obj;
            }
        }
    }
    event_1746_81_end: ;
}
void Frames::event_func_18467()
{
    // event 1747_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1747_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1747_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(themagister_2115_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->force_frame(3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height);
    }
    event_1747_81_end: ;
}
void Frames::event_func_18468()
{
    // event 1748_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1748_81_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1748_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1748_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(1522);
            ((Active*)*it)->set_x(-200);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(1522);
            ((Active*)*it)->set_x(-50);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(1522);
            ((Active*)*it)->set_x(-100);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 33);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1748_81_end: ;
}
void Frames::event_func_18469()
{
    // event 1749_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1749_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_1749_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_1749_81_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(1000, ((Active*)*it)->get_x()+5));
        }
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_y());
        ((Active*)get_instance(player_389_instances))->set_x(get_min(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_x(), 350));
    }
    event_1749_81_end: ;
}
void Frames::event_func_18470()
{
    // event 1750_81
    bool or_result_1750_81 = false;
    bool or_temp_result_1750_81_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto or_event_1750_81_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1750_81_0_end;
        or_result_1750_81 = true;
        or_temp_result_1750_81_0 = true;
    }
    or_event_1750_81_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1750_81_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1750_81
    bool or_temp_result_1750_81_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto or_event_1750_81_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1750_81_1_end;
        or_result_1750_81 = true;
        or_temp_result_1750_81_1 = true;
    }
    or_event_1750_81_1_end: ;
    if (or_temp_result_1750_81_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1750_81
    bool or_temp_result_1750_81_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto or_event_1750_81_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1750_81_2_end;
        or_result_1750_81 = true;
        or_temp_result_1750_81_2 = true;
        or_event_1750_81_2_end: ;
        if (or_temp_result_1750_81_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1750_81) goto or_final_or_event_1750_81_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1750_81_0 || or_temp_result_1750_81_1 || or_temp_result_1750_81_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1750_81_2_end: ;
}
void Frames::event_func_18471()
{
    // event 1751_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1751_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1751_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (33))) goto event_1751_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1751_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1751_81_end: ;
}
void Frames::event_func_18472()
{
    // event 1752_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1752_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1752_81_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(1000, ((Active*)*it)->get_x()+5));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(1000, ((Active*)*it)->get_x()+5));
        }
    }
    event_1752_81_end: ;
}
void Frames::event_func_18473()
{
    // event 1753_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1753_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1753_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1753_81_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
            group_pause_1 = false;
    
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1753_81_end: ;
}
void Frames::event_func_18474()
{
    // event 1754_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1754_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1754_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1754_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1754_81_end: ;
}
void Frames::event_func_18475()
{
    // event 1755_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1755_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1755_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1755_81_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1755_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1755_81_end: ;
}
void Frames::event_func_18476()
{
    // event 1756_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1756_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1756_81_end;
        if (!((global_values->get(1)) == (0))) goto event_1756_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 3);
    }
    event_1756_81_end: ;
}
void Frames::event_func_18477()
{
    // event 1757_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1757_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1757_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->set_direction(2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1568);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1450);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
    }
    event_1757_81_end: ;
}
void Frames::event_func_18478()
{
    // event 1758_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1758_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1758_81_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1758_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(1522);
            ((Active*)*it)->set_x(frame_left()-160);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(1522);
            ((Active*)*it)->set_x(frame_left()-50);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(1522);
            ((Active*)*it)->set_x(frame_left()-100);
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->set_direction(0);
        }
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1758_81_end: ;
}
void Frames::event_func_18479()
{
    // event 1759_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1759_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1759_81_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npclilactorture_3974_instances))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1759_81_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1759_81_end: ;
}
void Frames::event_func_18480()
{
    // event 1760_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1760_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1760_81_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npclilactorture_3974_instances))->get_x()-200))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1760_81_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1760_81_end: ;
}
void Frames::event_func_18481()
{
    // event 1761_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1761_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1761_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npclilactorture_3974_instances))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1761_81_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
    }
    event_1761_81_end: ;
}
void Frames::event_func_18482()
{
    // event 1762_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1762_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1762_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npclilactorture_3974_instances))->get_x()-100))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1762_81_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
    }
    event_1762_81_end: ;
}
void Frames::event_func_18483()
{
    // event 1763_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1763_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1763_81_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npclilactorture_3974_instances))->get_x()-150))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1763_81_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
    }
    event_1763_81_end: ;
}
void Frames::event_func_18484()
{
    // event 1764_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1764_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1764_81_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npclilactorture_3974_instances))->get_x()-150))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1764_81_end;
        if (once_condition_1764_81) goto event_1764_81_end;
        once_condition_1764_81 = true;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 34);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1764_81_end: ;
}
void Frames::event_func_18485()
{
    // event 1765_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1765_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1765_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (34))) goto event_1765_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1765_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1765_81_end: ;
}
void Frames::event_func_18486()
{
    // event 1766_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1766_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1766_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_1766_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (100))) goto event_1766_81_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(npclilactorture_3974_instances))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1766_81_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
    }
    event_1766_81_end: ;
}
void Frames::event_func_18487()
{
    // event 1767_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1767_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1767_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_1767_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (100))) goto event_1767_81_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(npclilactorture_3974_instances))->get_x()+40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1767_81_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1767_81_end: ;
}
void Frames::event_func_18488()
{
    // event 1768_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1768_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1768_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (72))) goto event_1768_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (100))) goto event_1768_81_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1768_81_end: ;
}
void Frames::event_func_18489()
{
    // event 1769_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1769_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1769_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_1769_81_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    event_1769_81_end: ;
}
void Frames::event_func_18490()
{
    // event 1770_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1770_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1770_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (20))) goto event_1770_81_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 4);
    }
    event_1770_81_end: ;
}
void Frames::event_func_18491()
{
    // event 1771_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1771_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1771_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_1771_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(23);
            ((Active*)*it)->restore_frame();
        }
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        FrameObject * single_instance_1771_81_0; single_instance_1771_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskintorque_450_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1771_81_0 == NULL)
                    single_instance_1771_81_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1771_81_0))->set_x_scale(0.5);
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1771_81_end: ;
}
void Frames::event_func_18492()
{
    // event 1772_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1772_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1772_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_1772_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(tbtortureterminalscreen_3970_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1772_81_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+10);
        }
    }
    event_1772_81_end: ;
}
void Frames::event_func_18493()
{
    // event 1773_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1773_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1773_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_1773_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(tbtortureterminalscreen_3970_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1773_81_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1773_81_end: ;
}
void Frames::event_func_18494()
{
    // event 1774_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1774_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1774_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1774_81_end;
        media.play_id(SOUND_COMMON_DOORUNLOCK_288, -1, 1);
        FrameObject * single_instance_1774_81_0; single_instance_1774_81_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(device_3367_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1774_81_0 == NULL)
                    single_instance_1774_81_0 = new_obj;
            }
        }
        ((Active*)get_instance(device_3367_instances))->set_visible(true);
        ((Active*)get_instance(tbtortureterminalscreen_3970_instances))->set_direction(1);
    }
    event_1774_81_end: ;
}
void Frames::event_func_18495()
{
    // event 1775_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1775_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1775_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_1775_81_end;
        ((Active*)get_instance(tbtortureterminalscreen_3970_instances))->force_frame(1);
        media.play_id(SOUND_ROTATEBIG_165, -1, 1);
    }
    event_1775_81_end: ;
}
void Frames::event_func_18496()
{
    // event 1776_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1776_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1776_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_1776_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (160))) goto event_1776_81_end;
        tbtorturechamberglass_3977_instances.clear_selection();
        for (ObjectIterator it(tbtorturechamberglass_3977_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-2);
        }
    }
    event_1776_81_end: ;
}
void Frames::event_func_18497()
{
    // event 1777_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1777_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1777_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1777_81_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(63);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1777_81_end: ;
}
void Frames::event_func_18498()
{
    // event 1778_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1778_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1778_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (160))) goto event_1778_81_end;
        media.play_id(SOUND_COMMON_DNDOORLOCK_372, -1, 1);
        FrameObject * single_instance_1778_81_0; single_instance_1778_81_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(npclilactorture_3974_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1778_81_0 == NULL)
                    single_instance_1778_81_0 = new_obj;
            }
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(6);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npclilactorture_3974_instances));
            if (parent == NULL) goto pos_end_1778_81_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1778_81_1: ;
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1778_81_end: ;
}
void Frames::event_func_18499()
{
    // event 1779_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1779_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1779_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1779_81_end;
        ((Active*)get_instance(npclilactorture_3974_instances))->set_visible(false);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+12, ((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->get_y()));
        }
    }
    event_1779_81_end: ;
}
void Frames::event_func_18500()
{
    // event 1780_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1780_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1780_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (170))) goto event_1780_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(33);
        }
    }
    event_1780_81_end: ;
}
void Frames::event_func_18501()
{
    // event 1781_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1781_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1781_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (190))) goto event_1781_81_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1781_81_end: ;
}
void Frames::event_func_18502()
{
    // event 1782_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1782_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (6))) goto event_1782_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (7))) goto event_1782_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+80))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1782_81_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->force_speed(35);
        }
    }
    event_1782_81_end: ;
}
void Frames::event_func_18503()
{
    // event 1783_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1783_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (6))) goto event_1783_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (7))) goto event_1783_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()+80))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1783_81_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(33);
        }
    }
    event_1783_81_end: ;
}
void Frames::event_func_18504()
{
    // event 1784_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1784_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1784_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (35))) goto event_1784_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1784_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        media.stop_channel(20-1);
    }
    event_1784_81_end: ;
}
void Frames::event_func_18505()
{
    // event 1785_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1785_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1785_81_end;
        if (!((media.get_channel_position(-1 +20)) > (1800))) goto event_1785_81_end;
        if (once_condition_1785_81) goto event_1785_81_end;
        once_condition_1785_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 105);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(105);
        }
    }
    event_1785_81_end: ;
}
void Frames::event_func_18506()
{
    // event 1786_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1786_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1786_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (36))) goto event_1786_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1786_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(105);
        }
        ((Active*)get_instance(player_389_instances))->set_x(1310);
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_y());
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        {
            loop_st_running = true;
            int times = int(6);
            loop_st_index = 0;
            while (loop_st_index < times) {
                loop_st_81();
                if (!loop_st_running) break;
                loop_st_index++;
            }
        }
    }
    event_1786_81_end: ;
}
void Frames::event_func_18507()
{
    // event 1788_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1788_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1788_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1788_81_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(20);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1788_81_end: ;
}
void Frames::event_func_18508()
{
    // event 1789_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1789_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1789_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (30))) goto event_1789_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->force_speed(35);
        }
    }
    event_1789_81_end: ;
}
void Frames::event_func_18509()
{
    // event 1790_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1790_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1790_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_1790_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (30))) goto event_1790_81_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1790_81_end: ;
}
void Frames::event_func_18510()
{
    // event 1791_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1791_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1791_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1791_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(15);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(20);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
    }
    event_1791_81_end: ;
}
void Frames::event_func_18511()
{
    // event 1792_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1792_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1792_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1792_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (90))) goto event_1792_81_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
    }
    event_1792_81_end: ;
}
void Frames::event_func_18512()
{
    // event 1793_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1793_81_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(1))) goto event_1793_81_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_frame()) == (2))) goto event_1793_81_end;
        if (not_always_1793_81 > loop_count) {
            not_always_1793_81 = loop_count + 2;
            goto event_1793_81_end;
        }
        not_always_1793_81 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_1793_81_end: ;
}
void Frames::event_func_18513()
{
    // event 1794_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1794_81_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(1))) goto event_1794_81_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_frame()) == (6))) goto event_1794_81_end;
        if (not_always_1794_81 > loop_count) {
            not_always_1794_81 = loop_count + 2;
            goto event_1794_81_end;
        }
        not_always_1794_81 = loop_count + 2;
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
    }
    event_1794_81_end: ;
}
void Frames::event_func_18514()
{
    // event 1795_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1795_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1795_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1795_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (180))) goto event_1795_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(1);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
        ((Active*)get_instance(brevon_3683_instances))->set_x(((Active*)get_instance(brevon_3683_instances))->get_x()+2);
        ((Active*)get_instance(brevon_3683_instances))->move_front();
    }
    event_1795_81_end: ;
}
void Frames::event_func_18515()
{
    // event 1796_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1796_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1796_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1796_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (200))) goto event_1796_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+2);
        }
    }
    event_1796_81_end: ;
}
void Frames::event_func_18516()
{
    // event 1797_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1797_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1797_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (180))) goto event_1797_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
    }
    event_1797_81_end: ;
}
void Frames::event_func_18517()
{
    // event 1798_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1798_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1798_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (200))) goto event_1798_81_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1798_81_end: ;
}
void Frames::event_func_18518()
{
    // event 1799_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1799_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1799_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (200))) goto event_1799_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1799_81_end: ;
}
void Frames::event_func_18519()
{
    // event 1800_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1800_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1800_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (37))) goto event_1800_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (45))) goto event_1800_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1800_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1800_81_end: ;
}
void Frames::event_func_18520()
{
    // event 1801_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1801_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (37))) goto event_1801_81_end;
        if (once_condition_1801_81) goto event_1801_81_end;
        once_condition_1801_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1801_81_end: ;
}
void Frames::event_func_18521()
{
    // event 1802_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1802_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (39))) goto event_1802_81_end;
        if (once_condition_1802_81) goto event_1802_81_end;
        once_condition_1802_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1802_81_end: ;
}
void Frames::event_func_18522()
{
    // event 1803_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1803_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (40))) goto event_1803_81_end;
        if (once_condition_1803_81) goto event_1803_81_end;
        once_condition_1803_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1803_81_end: ;
}
void Frames::event_func_18523()
{
    // event 1804_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1804_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (41))) goto event_1804_81_end;
        if (once_condition_1804_81) goto event_1804_81_end;
        once_condition_1804_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1804_81_end: ;
}
void Frames::event_func_18524()
{
    // event 1805_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1805_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (42))) goto event_1805_81_end;
        if (once_condition_1805_81) goto event_1805_81_end;
        once_condition_1805_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1805_81_end: ;
}
void Frames::event_func_18525()
{
    // event 1806_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1806_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (43))) goto event_1806_81_end;
        if (once_condition_1806_81) goto event_1806_81_end;
        once_condition_1806_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1806_81_end: ;
}
void Frames::event_func_18526()
{
    // event 1807_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1807_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (45))) goto event_1807_81_end;
        if (once_condition_1807_81) goto event_1807_81_end;
        once_condition_1807_81 = true;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(2);
    }
    event_1807_81_end: ;
}
void Frames::event_func_18527()
{
    // event 1808_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1808_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1808_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (45))) goto event_1808_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1808_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(105);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_x());
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_y());
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(brevon_3683_instances))->force_animation(11);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(1);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
        FrameObject * single_instance_1808_81_0; single_instance_1808_81_0 = NULL;
        // select single: true false false
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator p_it(enemyelite_2510_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitemask_2511(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1808_81_0 == NULL)
                    single_instance_1808_81_0 = new_obj;
            }
        }
        if (!group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1) {
            group_main_engine_level_specific_methods_cutscenes_lilac_rescued_shade_elite_1 = true;
        }
            group_main_engine_level_specific_methods_scenery_1 = false;
    
    }
    event_1808_81_end: ;
}
void Frames::event_func_18528()
{
    // event 1809_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1809_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1809_81_end;
        if (once_condition_1809_81) goto event_1809_81_end;
        once_condition_1809_81 = true;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(16, 1);
            ((Active*)*it)->alterables->values.set(13, 1);
        }
        spread_value(enemyelitemask_2511_instances, 19, 0);
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, ((Active*)*it)->alterables->values.get(19)*4-12);
        }
    }
    event_1809_81_end: ;
}
void Frames::event_func_18529()
{
    // event 1810_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1810_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1810_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) >= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(13))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1810_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(19, 5);
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1810_81_end: ;
}
void Frames::event_func_18530()
{
    // event 1811_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1811_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(19)) >= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(13))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1811_81_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, 0);
        }
    }
    event_1811_81_end: ;
}
void Frames::event_func_18531()
{
    // event 1812_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1812_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1812_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (10))) goto event_1812_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (30))) goto event_1812_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(6);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
            ((Active*)*it)->force_frame(33);
        }
    }
    event_1812_81_end: ;
}
void Frames::event_func_18532()
{
    // event 1813_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1813_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1813_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1813_81_end;
        media.play_id(SOUND_MILLA_BARRIER_2_422, -1, 1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(60);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(63);
        }
    }
    event_1813_81_end: ;
}
void Frames::event_func_18533()
{
    // event 1814_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1814_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1814_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1814_81_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(11);
        {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances));
            if (parent == NULL) goto pos_end_1814_81_0;
            ((Active*)get_instance(playerreflect_447_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + -8);
            pos_end_1814_81_0: ;
        }
        ((Active*)get_instance(playerreflect_447_instances))->set_direction(16);
    }
    event_1814_81_end: ;
}
void Frames::event_func_18534()
{
    // event 1815_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1815_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (10))) goto event_1815_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (11))) goto event_1815_81_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 10);
            ((Active*)*it)->alterables->values.set(7, -0.4);
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1815_81_end: ;
}
void Frames::event_func_18535()
{
    // event 1816_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1816_81_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1816_81_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1816_81_0; single_instance_1816_81_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1816_81_0 == NULL)
                    single_instance_1816_81_0 = new_obj;
            }
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1816_81_end: ;
}
void Frames::event_func_18536()
{
    // event 1817_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1817_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1817_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (35))) goto event_1817_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)%math_helper%9) == (0))) goto event_1817_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(17);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->restore_frame();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(playerskintorque_450_instances, it.current_index));
            if (parent == NULL) goto pos_end_1817_81_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1817_81_0: ;
        }
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(330, 0);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.set(0, -30);
        }
        media.play_id(SOUND_COMMON_BLASTER10_234, -1, 1);
        FrameObject * single_instance_1817_81_1; single_instance_1817_81_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskintorquearm_449_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->x + -40, parent->y + 0), parent->layer);
                if (single_instance_1817_81_1 == NULL)
                    single_instance_1817_81_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1817_81_1))->force_animation(10);
        ((Active*)((Active*)single_instance_1817_81_1))->force_frame(18);
        ((Active*)((Active*)single_instance_1817_81_1))->set_angle(180, 0);
        ((Active*)((Active*)single_instance_1817_81_1))->alterables->values.set(0, ((Active*)single_instance_1817_81_1)->get_x());
        ((Active*)((Active*)single_instance_1817_81_1))->alterables->values.set(1, ((Active*)single_instance_1817_81_1)->get_y());
        ((Active*)((Active*)single_instance_1817_81_1))->alterables->values.set(2, -15);
    }
    event_1817_81_end: ;
}
void Frames::event_func_18537()
{
    // event 1818_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1818_81_end;
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!playerskintorquearm_449_instances.has_selection()) goto event_1818_81_end;
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 3);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1818_81_end: ;
}
void Frames::event_func_18538()
{
    // event 1820_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1820_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1820_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (150))) goto event_1820_81_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        media.lock(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_1820_81_end: ;
}
void Frames::event_func_18539()
{
    // event 1821_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1821_81_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1821_81_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (46))) goto event_1821_81_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1821_81_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(105);
        }
        ((Active*)get_instance(player_389_instances))->set_x(1310);
        ((Active*)get_instance(player_389_instances))->set_y(((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_y());
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        media.play_id(SOUND_COMMON_TBALARM2_312, -1, 1);
        ((Active*)get_instance(alarmlight_3476_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(alarmlight_3476_instances))->set_x_scale(43);
        ((Active*)get_instance(alarmlight_3476_instances))->set_y_scale(24);
        ((Active*)get_instance(alarmlight_3476_instances))->set_visible(true);
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(13);
        }
    }
    event_1821_81_end: ;
}
void Frames::event_func_18540()
{
    // event 1822_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1822_81_end;
        if (!(((Active*)get_instance(alarmlight_3476_instances))->alterables->flags.is_on(1))) goto event_1822_81_end;
        ((Active*)get_instance(alarmlight_3476_instances))->blend_color.set_alpha_coefficient(get_max(cos_deg(((Active*)get_instance(alarmlight_3476_instances))->alterables->values.get(0))*200+180, 0));
        ((Active*)get_instance(alarmlight_3476_instances))->alterables->values.set(0, (((Active*)get_instance(alarmlight_3476_instances))->alterables->values.get(0)+5)%math_helper%360);
        ((Active*)get_instance(alarmlight_3476_instances))->alterables->values.add(1, 1);
    }
    event_1822_81_end: ;
}
void Frames::event_func_18541()
{
    // event 1823_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1823_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1823_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1823_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(16);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(8);
    }
    event_1823_81_end: ;
}
void Frames::event_func_18542()
{
    // event 1824_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1824_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1824_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_1824_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(28);
    }
    event_1824_81_end: ;
}
void Frames::event_func_18543()
{
    // event 1825_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1825_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1825_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1825_81_end;
        hazardlasertunnelglass3_3736_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1825_81_end: ;
}
void Frames::event_func_18544()
{
    // event 1826_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1826_81_end;
        hazardlasertunnelglass3_3736_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!hazardlasertunnelglass3_3736_instances.has_selection()) goto event_1826_81_end;
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+18);
        }
    }
    event_1826_81_end: ;
}
void Frames::event_func_18545()
{
    // event 1827_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1827_81_end;
        hazardlasertunnelglass3_3736_instances.clear_selection();
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (height))) { it.deselect(); continue; }
        }
        if (!hazardlasertunnelglass3_3736_instances.has_selection()) goto event_1827_81_end;
        for (ObjectIterator it(hazardlasertunnelglass3_3736_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-300);
        }
    }
    event_1827_81_end: ;
}
void Frames::event_func_18546()
{
    // event 1828_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1828_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1828_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (130))) goto event_1828_81_end;
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    event_1828_81_end: ;
}
void Frames::event_func_18547()
{
    // event 1829_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1829_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1829_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (130))) goto event_1829_81_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (height+50))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1829_81_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
        }
    }
    event_1829_81_end: ;
}
void Frames::event_func_18548()
{
    // event 1830_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1830_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1830_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (130))) goto event_1830_81_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1830_81_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
        }
    }
    event_1830_81_end: ;
}
void Frames::event_func_18549()
{
    // event 1831_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1831_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1831_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (130))) goto event_1831_81_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (height+50))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1831_81_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+12);
        }
    }
    event_1831_81_end: ;
}
void Frames::event_func_18550()
{
    // event 1832_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1832_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1832_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (140))) goto event_1832_81_end;
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
    }
    event_1832_81_end: ;
}
void Frames::event_func_18551()
{
    // event 1833_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1833_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1833_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (140))) goto event_1833_81_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1833_81_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
    }
    event_1833_81_end: ;
}
void Frames::event_func_18552()
{
    // event 1834_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1834_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1834_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (140))) goto event_1834_81_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (height+50))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1834_81_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+12);
        }
    }
    event_1834_81_end: ;
}
void Frames::event_func_18553()
{
    // event 1835_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1835_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1835_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (152))) goto event_1835_81_end;
        FrameObject * single_instance_1835_81_0; single_instance_1835_81_0 = NULL;
        // select single: true false false
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator p_it(playerskintorque_450_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1835_81_0 == NULL)
                    single_instance_1835_81_0 = new_obj;
            }
        }
        media.play_id(SOUND_MILLA_BARRIER_2_422, -1, 1);
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(0);
        }
    }
    event_1835_81_end: ;
}
void Frames::event_func_18554()
{
    // event 1836_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1836_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1836_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (152))) goto event_1836_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1836_81_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_speed(50);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+4);
        }
    }
    event_1836_81_end: ;
}
void Frames::event_func_18555()
{
    // event 1837_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1837_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1837_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (152))) goto event_1837_81_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (height+50))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1837_81_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+12);
        }
    }
    event_1837_81_end: ;
}
void Frames::event_func_18556()
{
    // event 1838_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1838_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1838_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (140))) goto event_1838_81_end;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
    }
    event_1838_81_end: ;
}
void Frames::event_func_18557()
{
    // event 1839_81
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_lilac_rescued_1)) goto event_1839_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1839_81_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1839_81_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_x()) < (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_x()-20))) goto event_1839_81_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(9);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(1);
        ((Active*)get_instance(brevon_3683_instances))->set_x(((Active*)get_instance(brevon_3683_instances))->get_x()+10);
    }
    event_1839_81_end: ;
}
