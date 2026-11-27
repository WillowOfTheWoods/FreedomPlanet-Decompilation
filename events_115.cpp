#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_9341()
{
    // event 1640_38
    {
        if (!(group_main_engine_1)) goto event_1640_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (80))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto event_1640_38_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1640_38_end: ;
}
void Frames::event_func_9342()
{
    // event 1641_38
    {
        if (!(group_main_engine_1)) goto event_1641_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (100))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto event_1641_38_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1641_38_end: ;
}
void Frames::event_func_9343()
{
    // event 1642_38
    {
        if (!(group_main_engine_1)) goto event_1642_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto event_1642_38_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, 6);
        }
    }
    event_1642_38_end: ;
}
void Frames::event_func_9344()
{
    // event 1643_38
    bool or_result_1643_38 = false;
    bool or_temp_result_1643_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1643_38_0_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1643_38_0_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemypelletizer_2304_instances, qualifier_7)) goto or_event_1643_38_0_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1643_38_0_end;
        or_result_1643_38 = true;
        or_temp_result_1643_38_0 = true;
    }
    or_event_1643_38_0_end: ;
    qualifier_7.clear_saved_selection();
    enemypelletizer_2304_instances.clear_saved_selection();
    if (or_temp_result_1643_38_0) {
        qualifier_7.save_selection();
        enemypelletizer_2304_instances.save_selection();
    }
    // event 1643_38
    bool or_temp_result_1643_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1643_38_1_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1643_38_1_end;
        qualifier_8.clear_selection();
        if (!check_overlap(enemypelletizer_2304_instances, qualifier_8)) goto or_event_1643_38_1_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1643_38_1_end;
        or_result_1643_38 = true;
        or_temp_result_1643_38_1 = true;
    }
    or_event_1643_38_1_end: ;
    qualifier_8.clear_saved_selection();
    if (or_temp_result_1643_38_1) {
        qualifier_8.save_selection();
        enemypelletizer_2304_instances.save_selection();
    }
    // event 1643_38
    bool or_temp_result_1643_38_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1643_38_2_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto or_event_1643_38_2_end;
        or_result_1643_38 = true;
        or_temp_result_1643_38_2 = true;
        or_event_1643_38_2_end: ;
        if (or_temp_result_1643_38_2) {
            enemypelletizer_2304_instances.save_selection();
        }
        if (!or_result_1643_38) goto or_final_or_event_1643_38_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        enemypelletizer_2304_instances.empty_selection();
        if (or_temp_result_1643_38_0) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1643_38_0 || or_temp_result_1643_38_1 || or_temp_result_1643_38_2) {
            enemypelletizer_2304_instances.restore_selection();
        }
        if (or_temp_result_1643_38_1) {
            qualifier_8.restore_selection();
        }
        FrameObject * single_instance_1643_38_0; single_instance_1643_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1643_38_0 == NULL)
                    single_instance_1643_38_0 = new_obj;
            }
        }
        FrameObject * single_instance_1643_38_1; single_instance_1643_38_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1643_38_1 == NULL)
                    single_instance_1643_38_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_38();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1643_38_2_end: ;
}
void Frames::event_func_9345()
{
    // event 1645_38
    {
        if (!(group_main_engine_1)) goto event_1645_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto event_1645_38_end;
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1645_38_end: ;
}
void Frames::event_func_9346()
{
    // event 1662_38
    bool or_result_1662_38 = false;
    bool or_temp_result_1662_38_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1662_38_0_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1662_38_0_end;
        or_result_1662_38 = true;
        or_temp_result_1662_38_0 = true;
    }
    or_event_1662_38_0_end: ;
    enemyhoppermkii_2200_instances.clear_saved_selection();
    if (or_temp_result_1662_38_0) {
        enemyhoppermkii_2200_instances.save_selection();
    }
    // event 1662_38
    bool or_temp_result_1662_38_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1662_38_1_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1662_38_1_end;
        qualifier_7.clear_selection();
        if (!check_overlap(enemyhoppermkii_2200_instances, qualifier_7)) goto or_event_1662_38_1_end;
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1662_38_1_end;
        or_result_1662_38 = true;
        or_temp_result_1662_38_1 = true;
    }
    or_event_1662_38_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1662_38_1) {
        enemyhoppermkii_2200_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1662_38
    bool or_temp_result_1662_38_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1662_38_2_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) > (0))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto or_event_1662_38_2_end;
        or_result_1662_38 = true;
        or_temp_result_1662_38_2 = true;
        or_event_1662_38_2_end: ;
        if (or_temp_result_1662_38_2) {
            enemyhoppermkii_2200_instances.save_selection();
        }
        if (!or_result_1662_38) goto or_final_or_event_1662_38_2_end;
        enemyhoppermkii_2200_instances.empty_selection();
        qualifier_7.empty_selection();
        if (or_temp_result_1662_38_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1662_38_0 || or_temp_result_1662_38_1 || or_temp_result_1662_38_2) {
            enemyhoppermkii_2200_instances.restore_selection();
        }
        FrameObject * single_instance_1662_38_0; single_instance_1662_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyhoppermkii_2200_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1662_38_0 == NULL)
                    single_instance_1662_38_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->values.set(24, -4);
            ((Active*)*it)->alterables->values.add(21, 1);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(6, 6);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_38();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    or_final_or_event_1662_38_2_end: ;
}
void Frames::event_func_9347()
{
    // event 1699_38
    {
        if (!(group_main_engine_1)) goto event_1699_38_end;
        if (!((global_values->get(4)) < (2))) goto event_1699_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (5980))) goto event_1699_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (width-100))) goto event_1699_38_end;
        global_values->set(4, 2);
        global_values->set(5, 5980);
        global_values->set(6, 266);
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
    event_1699_38_end: ;
}
void Frames::event_func_9348()
{
    // event 1700_38
    {
        if (!(group_main_engine_1)) goto event_1700_38_end;
        if (!((global_values->get(4)) < (3))) goto event_1700_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (12090))) goto event_1700_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (830))) goto event_1700_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (width-100))) goto event_1700_38_end;
        global_values->set(4, 3);
        global_values->set(5, 12090);
        global_values->set(6, 1160);
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
    event_1700_38_end: ;
}
void Frames::event_func_9349()
{
    // event 1701_38
    {
        if (!(group_main_engine_1)) goto event_1701_38_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+80))) goto event_1701_38_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()))) goto event_1701_38_end;
        if (!((((Active*)get_instance(player_389_instances))->get_y()) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1701_38_end;
        if (!((minibossrailing_923_instances.size()) > (0))) goto event_1701_38_end;
        if (once_condition_1701_38) goto event_1701_38_end;
        once_condition_1701_38 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1701_38_end: ;
}
void Frames::event_func_9350()
{
    // event 1702_38
    {
        if (!(group_main_engine_1)) goto event_1702_38_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1702_38_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(2)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()-100))) goto event_1702_38_end;
        if (!((minibossrailing_923_instances.size()) > (0))) goto event_1702_38_end;
        if (not_always_1702_38 > loop_count) {
            not_always_1702_38 = loop_count + 2;
            goto event_1702_38_end;
        }
        not_always_1702_38 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1702_38_end: ;
}
void Frames::event_func_9351()
{
    // event 1703_38
    {
        if (!(group_main_engine_1)) goto event_1703_38_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (1))) goto event_1703_38_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1703_38_end;
        if (once_condition_1703_38) goto event_1703_38_end;
        once_condition_1703_38 = true;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 1);
        if (!group_main_engine_level_specific_methods_bosses_boss_grappler_1) {
            group_main_engine_level_specific_methods_bosses_boss_grappler_1 = true;
        }
    }
    event_1703_38_end: ;
}
void Frames::event_func_9352()
{
    // event 1705_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1705_38_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)) > (-50))) goto event_1705_38_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)-3, -50));
    }
    event_1705_38_end: ;
}
void Frames::event_func_9353()
{
    // event 1706_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_climbing_limits_1)) goto event_1706_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_1706_38_end: ;
}
void Frames::event_func_9354()
{
    // event 1707_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_climbing_limits_1)) goto event_1707_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (176*2-((Active*)*it)->alterables->values.get(4)*88))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1707_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 4);
        }
    }
    event_1707_38_end: ;
}
void Frames::event_func_9355()
{
    // event 1708_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_climbing_limits_1)) goto event_1708_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (176*2-((Active*)*it)->alterables->values.get(4)*88-88))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1708_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -4);
        }
    }
    event_1708_38_end: ;
}
void Frames::event_func_9356()
{
    // event 1709_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_climbing_limits_1)) goto event_1709_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (176*2-((Active*)*it)->alterables->values.get(4)*88))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1709_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -4);
        }
    }
    event_1709_38_end: ;
}
void Frames::event_func_9357()
{
    // event 1710_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto event_1710_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (5))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1710_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1710_38_end: ;
}
void Frames::event_func_9358()
{
    // event 1711_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto event_1711_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (20))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1711_38_end;
        FrameObject * single_instance_1711_38_0; single_instance_1711_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgrappler_2316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosshomingspark_2278(parent->x + -20, parent->y + -20), parent->layer);
                if (single_instance_1711_38_0 == NULL)
                    single_instance_1711_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1711_38_0))->alterables->values.set(0, ((Active*)single_instance_1711_38_0)->get_x());
        ((Active*)((Active*)single_instance_1711_38_0))->alterables->values.set(1, ((Active*)single_instance_1711_38_0)->get_y());
        ((Active*)((Active*)single_instance_1711_38_0))->alterables->values.set(2, -6);
        ((Active*)((Active*)single_instance_1711_38_0))->alterables->values.set(3, -6);
    }
    event_1711_38_end: ;
}
void Frames::event_func_9359()
{
    // event 1712_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto event_1712_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (20))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1712_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 10);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(9));
        }
        FrameObject * single_instance_1712_38_0; single_instance_1712_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgrappler_2316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosshomingspark_2278(parent->x + 20, parent->y + -20), parent->layer);
                if (single_instance_1712_38_0 == NULL)
                    single_instance_1712_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1712_38_0))->alterables->values.set(0, ((Active*)single_instance_1712_38_0)->get_x());
        ((Active*)((Active*)single_instance_1712_38_0))->alterables->values.set(1, ((Active*)single_instance_1712_38_0)->get_y());
        ((Active*)((Active*)single_instance_1712_38_0))->alterables->values.set(2, 6);
        ((Active*)((Active*)single_instance_1712_38_0))->alterables->values.set(3, -6);
        media.play_id(SOUND_BLASTER_MM_171, -1, 1);
    }
    event_1712_38_end: ;
}
void Frames::event_func_9360()
{
    // event 1713_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto event_1713_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1713_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(9, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1713_38_end: ;
}
void Frames::event_func_9361()
{
    // event 1714_38
    bool or_result_1714_38 = false;
    bool or_temp_result_1714_38_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto or_event_1714_38_0_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (80))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto or_event_1714_38_0_end;
        or_result_1714_38 = true;
        or_temp_result_1714_38_0 = true;
    }
    or_event_1714_38_0_end: ;
    bossgrappler_2316_instances.clear_saved_selection();
    if (or_temp_result_1714_38_0) {
        bossgrappler_2316_instances.save_selection();
    }
    // event 1714_38
    bool or_temp_result_1714_38_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto or_event_1714_38_1_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto or_event_1714_38_1_end;
        or_result_1714_38 = true;
        or_temp_result_1714_38_1 = true;
        or_event_1714_38_1_end: ;
        if (or_temp_result_1714_38_1) {
            bossgrappler_2316_instances.save_selection();
        }
        if (!or_result_1714_38) goto or_final_or_event_1714_38_1_end;
        bossgrappler_2316_instances.empty_selection();
        if (or_temp_result_1714_38_0 || or_temp_result_1714_38_1) {
            bossgrappler_2316_instances.restore_selection();
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0-((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    or_final_or_event_1714_38_1_end: ;
}
void Frames::event_func_9362()
{
    // event 1715_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto event_1715_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (10))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1715_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_1715_38_end: ;
}
void Frames::event_func_9363()
{
    // event 1716_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto event_1716_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (40))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1716_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(2);
        }
        ((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.set(0, 1);
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -10);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-10);
        }
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
    }
    event_1716_38_end: ;
}
void Frames::event_func_9364()
{
    // event 1717_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto event_1717_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (0))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1717_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1717_38_end: ;
}
void Frames::event_func_9365()
{
    // event 1718_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto event_1718_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (20))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1718_38_end;
        ((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.set(0, 3);
    }
    event_1718_38_end: ;
}
void Frames::event_func_9366()
{
    // event 1719_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1)) goto event_1719_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1719_38_end;
        if (!((((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.get(0)) == (0))) goto event_1719_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0-((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1719_38_end: ;
}
void Frames::event_func_9367()
{
    // event 1720_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1)) goto event_1720_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1720_38_end;
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_single(bossgrappler_2316_instances, it.current_index, default_active_instance))->alterables->values.get(5)*2);
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1720_38_end: ;
}
void Frames::event_func_9368()
{
    // event 1721_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1)) goto event_1721_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1721_38_end;
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_single(bossgrappler_2316_instances, it.current_index, default_active_instance))->alterables->values.get(5)*2);
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1721_38_end: ;
}
void Frames::event_func_9369()
{
    // event 1722_38
    bool or_result_1722_38 = false;
    bool or_temp_result_1722_38_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1)) goto or_event_1722_38_0_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto or_event_1722_38_0_end;
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(bossgrappler_2316_instances, default_active_instance))->get_y()+40))) { it.deselect(); continue; }
        }
        if (!bossgrapplerhandleft_2315_instances.has_selection()) goto or_event_1722_38_0_end;
        or_result_1722_38 = true;
        or_temp_result_1722_38_0 = true;
    }
    or_event_1722_38_0_end: ;
    bossgrappler_2316_instances.clear_saved_selection();
    bossgrapplerhandleft_2315_instances.clear_saved_selection();
    if (or_temp_result_1722_38_0) {
        bossgrappler_2316_instances.save_selection();
        bossgrapplerhandleft_2315_instances.save_selection();
    }
    // event 1722_38
    bool or_temp_result_1722_38_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1)) goto or_event_1722_38_1_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto or_event_1722_38_1_end;
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_single(bossgrappler_2316_instances, default_active_instance))->get_y()+40))) { it.deselect(); continue; }
        }
        if (!bossgrapplerhandright_2314_instances.has_selection()) goto or_event_1722_38_1_end;
        or_result_1722_38 = true;
        or_temp_result_1722_38_1 = true;
        or_event_1722_38_1_end: ;
        bossgrapplerhandright_2314_instances.clear_saved_selection();
        if (or_temp_result_1722_38_1) {
            bossgrappler_2316_instances.save_selection();
            bossgrapplerhandright_2314_instances.save_selection();
        }
        if (!or_result_1722_38) goto or_final_or_event_1722_38_1_end;
        bossgrapplerhandleft_2315_instances.empty_selection();
        bossgrappler_2316_instances.empty_selection();
        bossgrapplerhandright_2314_instances.empty_selection();
        if (or_temp_result_1722_38_0 || or_temp_result_1722_38_1) {
            bossgrappler_2316_instances.restore_selection();
        }
        if (or_temp_result_1722_38_0) {
            bossgrapplerhandleft_2315_instances.restore_selection();
        }
        if (or_temp_result_1722_38_1) {
            bossgrapplerhandright_2314_instances.restore_selection();
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
        media.play_id(SOUND_GRAPPLE_268, -1, 1);
    }
    or_final_or_event_1722_38_1_end: ;
}
void Frames::event_func_9370()
{
    // event 1723_38
    bool or_result_1723_38 = false;
    bool or_temp_result_1723_38_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1)) goto or_event_1723_38_0_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto or_event_1723_38_0_end;
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(bossgrappler_2316_instances, default_active_instance))->get_y()-40))) { it.deselect(); continue; }
        }
        if (!bossgrapplerhandleft_2315_instances.has_selection()) goto or_event_1723_38_0_end;
        or_result_1723_38 = true;
        or_temp_result_1723_38_0 = true;
    }
    or_event_1723_38_0_end: ;
    bossgrappler_2316_instances.clear_saved_selection();
    bossgrapplerhandleft_2315_instances.clear_saved_selection();
    if (or_temp_result_1723_38_0) {
        bossgrappler_2316_instances.save_selection();
        bossgrapplerhandleft_2315_instances.save_selection();
    }
    // event 1723_38
    bool or_temp_result_1723_38_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1)) goto or_event_1723_38_1_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) < (0))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto or_event_1723_38_1_end;
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_single(bossgrappler_2316_instances, default_active_instance))->get_y()-40))) { it.deselect(); continue; }
        }
        if (!bossgrapplerhandright_2314_instances.has_selection()) goto or_event_1723_38_1_end;
        or_result_1723_38 = true;
        or_temp_result_1723_38_1 = true;
        or_event_1723_38_1_end: ;
        bossgrapplerhandright_2314_instances.clear_saved_selection();
        if (or_temp_result_1723_38_1) {
            bossgrappler_2316_instances.save_selection();
            bossgrapplerhandright_2314_instances.save_selection();
        }
        if (!or_result_1723_38) goto or_final_or_event_1723_38_1_end;
        bossgrapplerhandleft_2315_instances.empty_selection();
        bossgrappler_2316_instances.empty_selection();
        bossgrapplerhandright_2314_instances.empty_selection();
        if (or_temp_result_1723_38_0 || or_temp_result_1723_38_1) {
            bossgrappler_2316_instances.restore_selection();
        }
        if (or_temp_result_1723_38_0) {
            bossgrapplerhandleft_2315_instances.restore_selection();
        }
        if (or_temp_result_1723_38_1) {
            bossgrapplerhandright_2314_instances.restore_selection();
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
        media.play_id(SOUND_GRAPPLE_268, -1, 1);
    }
    or_final_or_event_1723_38_1_end: ;
}
void Frames::event_func_9371()
{
    // event 1724_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1)) goto event_1724_38_end;
        bossgrapplerarmleft_2312_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)get_instance(bossgrapplerhandleft_2315_instances, it.current_index, default_active_instance))->get_x()*((Active*)*it)->alterables->values.get(0))+(((Active*)get_instance(bossgrappler_2316_instances, it.current_index, default_active_instance))->get_box_index(0)*(bossgrapplerarmleft_2312_instances.size()-((Active*)*it)->alterables->values.get(0))))/math_helper/bossgrapplerarmleft_2312_instances.size());
            ((Active*)*it)->set_y(((((Active*)get_instance(bossgrapplerhandleft_2315_instances, it.current_index, default_active_instance))->get_y()*((Active*)*it)->alterables->values.get(0))+(((Active*)get_instance(bossgrappler_2316_instances, it.current_index, default_active_instance))->get_y()*(bossgrapplerarmleft_2312_instances.size()-((Active*)*it)->alterables->values.get(0))))/math_helper/bossgrapplerarmleft_2312_instances.size());
        }
        bossgrapplerarmright_2313_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)get_instance(bossgrapplerhandright_2314_instances, it.current_index, default_active_instance))->get_x()*((Active*)get_single(bossgrapplerarmleft_2312_instances, it.current_index, default_active_instance))->alterables->values.get(0))+(((Active*)get_instance(bossgrappler_2316_instances, it.current_index, default_active_instance))->get_box_index(2)*(bossgrapplerarmright_2313_instances.size()-((Active*)*it)->alterables->values.get(0))))/math_helper/bossgrapplerarmright_2313_instances.size());
            ((Active*)*it)->set_y(((((Active*)get_instance(bossgrapplerhandright_2314_instances, it.current_index, default_active_instance))->get_y()*((Active*)*it)->alterables->values.get(0))+(((Active*)get_instance(bossgrappler_2316_instances, it.current_index, default_active_instance))->get_y()*(bossgrapplerarmright_2313_instances.size()-((Active*)*it)->alterables->values.get(0))))/math_helper/bossgrapplerarmright_2313_instances.size());
        }
        crystalplatform_2317_instances.clear_selection();
        for (ObjectIterator it(crystalplatform_2317_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bosscrystalspire_2293_instances));
            if (parent == NULL) goto pos_end_1724_38_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1724_38_0: ;
        }
    }
    event_1724_38_end: ;
}
void Frames::event_func_9372()
{
    // event 1725_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1725_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (4))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1725_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.set(2, 60);
            ((Active*)*it)->force_animation(7);
        }
        bossgrapplerarmleft_2312_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossgrapplerarmright_2313_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -1);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->flags.disable(6);
        }
        media.stop_sample(SOUND_COMMON_STRIKE_23);
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
    }
    event_1725_38_end: ;
}
void Frames::event_func_9373()
{
    // event 1726_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1726_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1726_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
        }
        bossgrapplerarmleft_2312_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
        }
        bossgrapplerarmright_2313_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
        }
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
        }
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_animation();
        }
    }
    event_1726_38_end: ;
}
void Frames::event_func_9374()
{
    // event 1727_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1727_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (4))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1727_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->force_animation(8);
        }
        bossgrapplerarmleft_2312_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossgrapplerarmright_2313_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, -1);
            ((Active*)*it)->alterables->values.set(0, 30);
        }
            group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_climbing_limits_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1 = false;
    
            group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_1500_126);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1727_38_end: ;
}
void Frames::event_func_9375()
{
    // event 1728_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1728_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1728_38_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1728_38_end;
        FrameObject * single_instance_1728_38_0; single_instance_1728_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgrappler_2316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1728_38_0 == NULL)
                    single_instance_1728_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1728_38_0))->set_x(((Active*)single_instance_1728_38_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_1728_38_0))->set_y(((Active*)single_instance_1728_38_0)->get_y()-40+randrange(81));
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1728_38_1_end;
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
        dynamic_1728_38_1_end: ;
    }
    event_1728_38_end: ;
}
void Frames::event_func_9376()
{
    // event 1729_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1729_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (7))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1729_38_end;
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 0.2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(10));
        }
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_single(bossgrappler_2316_instances, it.current_index, default_active_instance))->alterables->values.get(10)*0.7);
        }
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_single(bossgrappler_2316_instances, it.current_index, default_active_instance))->alterables->values.get(10)*1.3);
        }
        bossgrapplerarmleft_2312_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)get_single(bossgrapplerhandleft_2315_instances, it.current_index, default_active_instance))->get_x()*((Active*)*it)->alterables->values.get(0))+(((Active*)get_single(bossgrappler_2316_instances, it.current_index, default_active_instance))->get_box_index(0)*(bossgrapplerarmleft_2312_instances.size()-((Active*)*it)->alterables->values.get(0))))/math_helper/bossgrapplerarmleft_2312_instances.size());
            ((Active*)*it)->set_y(((((Active*)get_single(bossgrapplerhandleft_2315_instances, it.current_index, default_active_instance))->get_y()*((Active*)*it)->alterables->values.get(0))+(((Active*)get_single(bossgrappler_2316_instances, it.current_index, default_active_instance))->get_y()*(bossgrapplerarmleft_2312_instances.size()-((Active*)*it)->alterables->values.get(0))))/math_helper/bossgrapplerarmleft_2312_instances.size());
        }
        bossgrapplerarmright_2313_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((((Active*)get_single(bossgrapplerhandright_2314_instances, it.current_index, default_active_instance))->get_x()*((Active*)get_single(bossgrapplerarmleft_2312_instances, it.current_index, default_active_instance))->alterables->values.get(0))+(((Active*)get_single(bossgrappler_2316_instances, it.current_index, default_active_instance))->get_box_index(2)*(bossgrapplerarmright_2313_instances.size()-((Active*)*it)->alterables->values.get(0))))/math_helper/bossgrapplerarmright_2313_instances.size());
            ((Active*)*it)->set_y(((((Active*)get_single(bossgrapplerhandright_2314_instances, it.current_index, default_active_instance))->get_y()*((Active*)*it)->alterables->values.get(0))+(((Active*)get_single(bossgrappler_2316_instances, it.current_index, default_active_instance))->get_y()*(bossgrapplerarmright_2313_instances.size()-((Active*)*it)->alterables->values.get(0))))/math_helper/bossgrapplerarmright_2313_instances.size());
        }
    }
    event_1729_38_end: ;
}
void Frames::event_func_9377()
{
    // event 1730_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1730_38_end;
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!bossgrapplerhandleft_2315_instances.has_selection()) goto event_1730_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1730_38_end;
        FrameObject * single_instance_1730_38_0; single_instance_1730_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgrapplerhandleft_2315_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1730_38_0 == NULL)
                    single_instance_1730_38_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1730_38_end: ;
}
void Frames::event_func_9378()
{
    // event 1731_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1731_38_end;
        bossgrapplerarmleft_2312_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!bossgrapplerarmleft_2312_instances.has_selection()) goto event_1731_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1731_38_end;
        FrameObject * single_instance_1731_38_0; single_instance_1731_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgrapplerarmleft_2312_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1731_38_0 == NULL)
                    single_instance_1731_38_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1731_38_1_end;
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
        dynamic_1731_38_1_end: ;
    }
    event_1731_38_end: ;
}
void Frames::event_func_9379()
{
    // event 1732_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1732_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1732_38_end;
        FrameObject * single_instance_1732_38_0; single_instance_1732_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgrappler_2316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1732_38_0 == NULL)
                    single_instance_1732_38_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1732_38_1_end;
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
        dynamic_1732_38_1_end: ;
    }
    event_1732_38_end: ;
}
void Frames::event_func_9380()
{
    // event 1733_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1733_38_end;
        bossgrapplerarmright_2313_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!bossgrapplerarmright_2313_instances.has_selection()) goto event_1733_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1733_38_end;
        FrameObject * single_instance_1733_38_0; single_instance_1733_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgrapplerarmright_2313_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1733_38_0 == NULL)
                    single_instance_1733_38_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1733_38_1_end;
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
        dynamic_1733_38_1_end: ;
    }
    event_1733_38_end: ;
}
void Frames::event_func_9381()
{
    // event 1734_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1734_38_end;
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) > (980))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!bossgrapplerhandright_2314_instances.has_selection()) goto event_1734_38_end;
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (5))) { it.deselect(); continue; }
        }
        if (!bossgrappler_2316_instances.has_selection()) goto event_1734_38_end;
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        FrameObject * single_instance_1734_38_0; single_instance_1734_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossgrapplerhandright_2314_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1734_38_0 == NULL)
                    single_instance_1734_38_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1734_38_end: ;
}
void Frames::event_func_9382()
{
    // event 1735_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1735_38_end;
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!bossgrapplerhandleft_2315_instances.has_selection()) goto event_1735_38_end;
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossgrapplerarmleft_2312_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossgrapplerarmright_2313_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
    }
    event_1735_38_end: ;
}
void Frames::event_func_9383()
{
    // event 1736_38
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_grappler_1)) goto event_1736_38_end;
        if (!((bossgrapplerhandleft_2315_instances.size()) == (0))) goto event_1736_38_end;
        if (!((minibossbarrier_924_instances.size()) > (0))) goto event_1736_38_end;
        objectcrystal_279_instances.empty_selection();
        // select single: false true false
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator p_it(minibossrailing_923_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 12), parent->layer);
                objectcrystal_279_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 0, parent->y + 36), parent->layer);
                objectcrystal_279_instances.add_back();
            }
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(6);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        crystalplatform_2317_instances.clear_selection();
        for (ObjectIterator it(crystalplatform_2317_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(guicompass_1270_instances))->set_visible(true);
    }
    event_1736_38_end: ;
}
void Frames::event_func_9384()
{
    // event 1737_38
    {
        if (!(group_main_engine_1)) goto event_1737_38_end;
        if (!((minibossbarrier_924_instances.size()) == (0))) goto event_1737_38_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(7, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(7)+3, 0));
    }
    event_1737_38_end: ;
}
void Frames::event_func_9385()
{
    // event 1738_38
    {
        if (!(group_main_engine_1)) goto event_1738_38_end;
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1738_38_end: ;
}
void Frames::event_func_9386()
{
    // event 1739_38
    {
        if (!(group_main_engine_1)) goto event_1739_38_end;
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (-4))) { it.deselect(); continue; }
        }
        if (!bosshomingspark_2278_instances.has_selection()) goto event_1739_38_end;
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, -0.25);
        }
    }
    event_1739_38_end: ;
}
void Frames::event_func_9387()
{
    // event 1740_38
    {
        if (!(group_main_engine_1)) goto event_1740_38_end;
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (4))) { it.deselect(); continue; }
        }
        if (!bosshomingspark_2278_instances.has_selection()) goto event_1740_38_end;
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.25);
        }
    }
    event_1740_38_end: ;
}
void Frames::event_func_9388()
{
    // event 1742_38
    {
        if (!(group_main_engine_1)) goto event_1742_38_end;
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (150))) { it.deselect(); continue; }
        }
        if (!bosshomingspark_2278_instances.has_selection()) goto event_1742_38_end;
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1742_38_0; single_instance_1742_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosshomingspark_2278_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1742_38_0 == NULL)
                    single_instance_1742_38_0 = new_obj;
            }
        }
        media.stop_sample(SOUND_METALHIT_45);
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_1742_38_end: ;
}
void Frames::event_func_9389()
{
    // event 1745_38
    {
        if (!(group_main_engine_1)) goto event_1745_38_end;
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!bosshomingspark_2278_instances.has_selection()) goto event_1745_38_end;
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_1745_38_end: ;
}
void Frames::event_func_9390()
{
    // event 1746_38
    {
        if (!(group_main_engine_1)) goto event_1746_38_end;
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)get_instance(player_389_instances))->get_y()))) { it.deselect(); continue; }
        }
        if (!bosshomingspark_2278_instances.has_selection()) goto event_1746_38_end;
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_1746_38_end: ;
}
void Frames::event_func_9391()
{
    // event 1747_38
    {
        if (!(group_main_engine_1)) goto event_1747_38_end;
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!bosshomingspark_2278_instances.has_selection()) goto event_1747_38_end;
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.5, 6));
        }
    }
    event_1747_38_end: ;
}
void Frames::event_func_9392()
{
    // event 1748_38
    {
        if (!(group_main_engine_1)) goto event_1748_38_end;
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosshomingspark_2278_instances.has_selection()) goto event_1748_38_end;
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.5, -6));
        }
    }
    event_1748_38_end: ;
}
void Frames::event_func_9393()
{
    // event 1749_38
    {
        if (!(group_main_engine_1)) goto event_1749_38_end;
        if (!((((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.get(0)) == (0))) goto event_1749_38_end;
        ((Active*)get_instance(bosscrystalspire_2293_instances))->set_y(((Active*)get_instance(bossgrappler_2316_instances, default_active_instance))->get_y());
        crystalplatform_2317_instances.clear_selection();
        for (ObjectIterator it(crystalplatform_2317_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1749_38_end: ;
}
void Frames::event_func_9394()
{
    // event 1750_38
    {
        if (!(group_main_engine_1)) goto event_1750_38_end;
        if (!((((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.get(0)) == (1))) goto event_1750_38_end;
        ((Active*)get_instance(bosscrystalspire_2293_instances))->set_y(((Active*)get_instance(bosscrystalspire_2293_instances))->get_y()+10);
        ((Active*)get_instance(effectwarning_1065_instances))->set_visible(true);
    }
    event_1750_38_end: ;
}
void Frames::event_func_9395()
{
    // event 1751_38
    {
        if (!(group_main_engine_1)) goto event_1751_38_end;
        if (!((((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.get(0)) == (1))) goto event_1751_38_end;
        if (((Active*)get_instance(bosscrystalspire_2293_instances))->is_near_border(0)) goto event_1751_38_end;
        ((Active*)get_instance(effectwarning_1065_instances))->set_visible(false);
    }
    event_1751_38_end: ;
}
void Frames::event_func_9396()
{
    // event 1753_38
    {
        if (!(group_main_engine_1)) goto event_1753_38_end;
        if (!((((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.get(0)) == (3))) goto event_1753_38_end;
        ((Active*)get_instance(bosscrystalspire_2293_instances))->set_y(((Active*)get_instance(bosscrystalspire_2293_instances))->get_y()-10);
        crystalplatform_2317_instances.clear_selection();
        for (ObjectIterator it(crystalplatform_2317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(bosscrystalspire_2293_instances))->get_action_y()-10);
        }
    }
    event_1753_38_end: ;
}
void Frames::event_func_9397()
{
    // event 1754_38
    {
        if (!(group_main_engine_1)) goto event_1754_38_end;
        if (!((((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.get(0)) == (3))) goto event_1754_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1754_38_end;
        playersensorbottombig_397_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, crystalplatform_2317_instances)) goto event_1754_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 10);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1754_38_end: ;
}
void Frames::event_func_9398()
{
    // event 1755_38
    {
        if (!(group_main_engine_1)) goto event_1755_38_end;
        if (!((((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.get(0)) == (3))) goto event_1755_38_end;
        if (!((((Active*)get_instance(bosscrystalspire_2293_instances))->get_y()) <= (((Active*)get_instance(bossgrappler_2316_instances, default_active_instance))->get_y()))) goto event_1755_38_end;
        ((Active*)get_instance(bosscrystalspire_2293_instances))->alterables->values.set(0, 0);
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(9, -10);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-10);
        }
    }
    event_1755_38_end: ;
}
void Frames::event_func_9399()
{
    // event 1757_38
    {
        if (!(group_main_engine_1)) goto event_1757_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->flags.is_on(1))) goto event_1757_38_end;
        if (!((global_values->get(3)%math_helper%15) == (0))) goto event_1757_38_end;
        if (not_always_1757_38 > loop_count) {
            not_always_1757_38 = loop_count + 2;
            goto event_1757_38_end;
        }
        not_always_1757_38 = loop_count + 2;
        media.play_id(SOUND_SENTINEL_SHOT_77, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1757_38_end: ;
}
void Frames::event_func_9400()
{
    // event 1758_38
    {
        if (!(group_main_engine_1)) goto event_1758_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->flags.is_on(1))) goto event_1758_38_end;
        ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->values.add(2, 1);
    }
    event_1758_38_end: ;
}
void Frames::event_func_9401()
{
    // event 1759_38
    {
        if (!(group_main_engine_1)) goto event_1759_38_end;
        if (!((((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->values.get(2)) > (0))) goto event_1759_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->flags.is_off(2))) goto event_1759_38_end;
        ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->values.sub(2, 5);
        FrameObject * single_instance_1759_38_0; single_instance_1759_38_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosscrystalspikespawner1_2294_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscrystalspike_2279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1759_38_0 == NULL)
                    single_instance_1759_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1759_38_0))->set_angle(0-30+randrange(61), 0);
        ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->set_x(((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->get_x()-24);
        ((Active*)((Active*)single_instance_1759_38_0))->set_y(((Active*)single_instance_1759_38_0)->get_y()+randrange(10));
    }
    event_1759_38_end: ;
}
void Frames::event_func_9402()
{
    // event 1761_38
    {
        if (!(group_main_engine_1)) goto event_1761_38_end;
        if (!((((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->values.get(2)) > (0))) goto event_1761_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->flags.is_on(2))) goto event_1761_38_end;
        ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->values.sub(2, 5);
        FrameObject * single_instance_1761_38_0; single_instance_1761_38_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosscrystalspikespawner1_2294_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscrystalspike_2279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1761_38_0 == NULL)
                    single_instance_1761_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1761_38_0))->set_angle(270-30+randrange(61), 0);
        ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->set_y(((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->get_y()-24);
        ((Active*)((Active*)single_instance_1761_38_0))->set_x(((Active*)single_instance_1761_38_0)->get_x()-randrange(10));
    }
    event_1761_38_end: ;
}
void Frames::event_func_9403()
{
    // event 1762_38
    {
        if (!(group_main_engine_1)) goto event_1762_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->flags.is_on(2))) goto event_1762_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->flags.is_off(3))) goto event_1762_38_end;
        bosscrystalspikespawner1_2294_instances.clear_selection();
        if (!check_not_overlap(bosscrystalspikespawner1_2294_instances, enemylimiter_350_instances)) goto event_1762_38_end;
        ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->flags.enable(3);
    }
    event_1762_38_end: ;
}
void Frames::event_func_9404()
{
    // event 1764_38
    {
        if (!(group_main_engine_1)) goto event_1764_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->flags.is_on(1))) goto event_1764_38_end;
        ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->values.add(2, 1);
    }
    event_1764_38_end: ;
}
void Frames::event_func_9405()
{
    // event 1765_38
    {
        if (!(group_main_engine_1)) goto event_1765_38_end;
        if (!((((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->values.get(2)) > (0))) goto event_1765_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->flags.is_off(2))) goto event_1765_38_end;
        ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->values.sub(2, 5);
        FrameObject * single_instance_1765_38_0; single_instance_1765_38_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosscrystalspikespawner2_2295_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscrystalspike_2279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1765_38_0 == NULL)
                    single_instance_1765_38_0 = new_obj;
            }
        }
        ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->set_x(((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->get_x()+24);
        ((Active*)((Active*)single_instance_1765_38_0))->set_angle(0-30+randrange(61), 0);
        ((Active*)((Active*)single_instance_1765_38_0))->set_y(((Active*)single_instance_1765_38_0)->get_y()+randrange(10));
    }
    event_1765_38_end: ;
}
void Frames::event_func_9406()
{
    // event 1767_38
    {
        if (!(group_main_engine_1)) goto event_1767_38_end;
        if (!((((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->values.get(2)) > (0))) goto event_1767_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->flags.is_on(2))) goto event_1767_38_end;
        ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->values.sub(2, 5);
        FrameObject * single_instance_1767_38_0; single_instance_1767_38_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosscrystalspikespawner2_2295_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscrystalspike_2279(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1767_38_0 == NULL)
                    single_instance_1767_38_0 = new_obj;
            }
        }
        ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->set_y(((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->get_y()-24);
        ((Active*)((Active*)single_instance_1767_38_0))->set_angle(90-30+randrange(61), 0);
        ((Active*)((Active*)single_instance_1767_38_0))->set_x(((Active*)single_instance_1767_38_0)->get_x()+randrange(10));
    }
    event_1767_38_end: ;
}
void Frames::event_func_9407()
{
    // event 1768_38
    {
        if (!(group_main_engine_1)) goto event_1768_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->flags.is_on(2))) goto event_1768_38_end;
        if (!(((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->flags.is_off(3))) goto event_1768_38_end;
        bosscrystalspikespawner2_2295_instances.clear_selection();
        if (!check_not_overlap(bosscrystalspikespawner2_2295_instances, enemylimiter_350_instances)) goto event_1768_38_end;
        ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->flags.enable(3);
    }
    event_1768_38_end: ;
}
void Frames::event_func_9408()
{
    // event 1770_38
    {
        if (!(group_main_engine_1)) goto event_1770_38_end;
        bosscrystalspike_2279_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_2279_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)*it)->layer->index+1+1-1);
        }
    }
    event_1770_38_end: ;
}
void Frames::event_func_9409()
{
    // event 1771_38
    {
        if (!(group_main_engine_1)) goto event_1771_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1771_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1771_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (5))) goto event_1771_38_end;
        bosscrystalspike_2279_instances.clear_selection();
        player_389_instances.clear_selection();
        if (!check_overlap(bosscrystalspike_2279_instances, player_389_instances)) goto event_1771_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1771_38_end: ;
}
void Frames::event_func_9410()
{
    // event 1772_38
    {
        if (!(group_main_engine_1)) goto event_1772_38_end;
        bosscrystalspike_2279_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_2279_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)*it)->layer->index+1-1-1);
        }
    }
    event_1772_38_end: ;
}
void Frames::event_func_9411()
{
    // event 1773_38
    {
        if (!(group_main_engine_1)) goto event_1773_38_end;
        bosscrystalspike_2279_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_2279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(0))) { it.deselect(); continue; }
        }
        if (!bosscrystalspike_2279_instances.has_selection()) goto event_1773_38_end;
        for (ObjectIterator it(bosscrystalspike_2279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1773_38_0; single_instance_1773_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscrystalspike_2279_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1773_38_0 == NULL)
                    single_instance_1773_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1773_38_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1773_38_0))->force_frame(36+randrange(5));
        {
            ((Active*)single_instance_1773_38_0)->set_shader(Render::ADDITIVE);
        }
    }
    event_1773_38_end: ;
}
void Frames::event_func_9412()
{
    // event 2004_38
    {
        if (!(group_pause_1)) goto event_2004_38_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2004_38_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2004_38_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2004_38_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2004_38_end;
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
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        gimmickfandebris_2125_instances.clear_selection();
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerassistcopilot_2219_instances))->stop_animation();
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmicksbbar_2308_instances.clear_selection();
        for (ObjectIterator it(gimmicksbbar_2308_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerassist_2028_instances))->stop_animation();
        bosscrystalspike_2279_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_2279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(effectwarning_1065_instances))->stop_animation();
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        enemydronelaser_2127_instances.clear_selection();
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossgrapplerarmright_2313_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bossgrapplerarmleft_2312_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2004_38_end: ;
}
void Frames::event_func_9413()
{
    // event 2005_38
    bool or_result_2005_38 = false;
    bool or_temp_result_2005_38_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2005_38_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2005_38_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2005_38_0_end;
        or_result_2005_38 = true;
        or_temp_result_2005_38_0 = true;
    }
    or_event_2005_38_0_end: ;
    // event 2005_38
    bool or_temp_result_2005_38_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2005_38_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2005_38_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2005_38_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2005_38_1_end;
        or_result_2005_38 = true;
        or_temp_result_2005_38_1 = true;
        or_event_2005_38_1_end: ;
        if (!or_result_2005_38) goto or_final_or_event_2005_38_1_end;
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
        enemybullet_2098_instances.clear_selection();
        for (ObjectIterator it(enemybullet_2098_instances); !it.end(); ++it) {
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
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        gimmickfandebris_2125_instances.clear_selection();
        for (ObjectIterator it(gimmickfandebris_2125_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        gimmickfan_2220_instances.clear_selection();
        for (ObjectIterator it(gimmickfan_2220_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerassistcopilot_2219_instances))->start_animation();
        enemyslimeburst_652_instances.clear_selection();
        for (ObjectIterator it(enemyslimeburst_652_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibossflame_1199_instances.clear_selection();
        for (ObjectIterator it(minibossflame_1199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelsbplatformflame1_2097_instances.clear_selection();
        for (ObjectIterator it(levelsbplatformflame1_2097_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmicksbbar_2308_instances.clear_selection();
        for (ObjectIterator it(gimmicksbbar_2308_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerassist_2028_instances))->start_animation();
        bosscrystalspike_2279_instances.clear_selection();
        for (ObjectIterator it(bosscrystalspike_2279_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(effectwarning_1065_instances))->start_animation();
        bosshomingspark_2278_instances.clear_selection();
        for (ObjectIterator it(bosshomingspark_2278_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        enemydronelaser_2127_instances.clear_selection();
        for (ObjectIterator it(enemydronelaser_2127_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossgrapplerhandleft_2315_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandleft_2315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossgrapplerhandright_2314_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerhandright_2314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossgrapplerarmright_2313_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmright_2313_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bossgrapplerarmleft_2312_instances.clear_selection();
        for (ObjectIterator it(bossgrapplerarmleft_2312_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyfragbomb_2049_instances.clear_selection();
        for (ObjectIterator it(enemyfragbomb_2049_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2005_38_1_end: ;
}
void Frames::handle_frame_39_events()
{
    test_collisions_38();
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
    event_func_8682();
    event_func_3807();
    event_func_8732();
    event_func_8733();
    event_func_8741();
    event_func_9411();
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
    event_func_9256();
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
    event_func_9257();
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
    event_func_9258();
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
    event_func_9259();
    event_func_9260();
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
    event_func_4012();
    event_func_4013();
    event_func_4014();
    event_func_4015();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_9261();
    event_func_9262();
    event_func_9263();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_8626();
    event_func_8627();
    event_func_8628();
    event_func_8629();
    event_func_9107();
    event_func_9108();
    event_func_9109();
    event_func_8633();
    event_func_8634();
    event_func_8635();
    event_func_8636();
    event_func_9264();
    event_func_8638();
    event_func_8639();
    event_func_9115();
    event_func_9116();
    event_func_9117();
    event_func_8238();
    event_func_9118();
    event_func_9119();
    event_func_9120();
    event_func_9121();
    event_func_9265();
    event_func_9266();
    event_func_9122();
    event_func_9267();
    event_func_9268();
    event_func_9269();
    event_func_9270();
    event_func_9271();
    event_func_5873();
    event_func_9272();
    event_func_5875();
    event_func_9273();
    event_func_9274();
    event_func_9275();
    event_func_9276();
    event_func_9277();
    event_func_9278();
    event_func_9279();
    event_func_9280();
    event_func_9281();
    event_func_9282();
    event_func_9283();
    event_func_9284();
    event_func_9285();
    event_func_9286();
    event_func_9287();
    event_func_9288();
    event_func_9289();
    event_func_9290();
    event_func_9291();
    event_func_9292();
    event_func_8661();
    event_func_8662();
    event_func_8663();
    event_func_8664();
    event_func_8665();
    event_func_8666();
    event_func_8667();
    event_func_9293();
    event_func_9294();
    event_func_9295();
    event_func_9296();
    event_func_9297();
    event_func_8668();
    event_func_8669();
    event_func_6688();
    event_func_8670();
    event_func_8671();
    event_func_8672();
    event_func_8673();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_8674();
    event_func_8675();
    event_func_8676();
    event_func_8677();
    event_func_8678();
    event_func_8679();
    event_func_8680();
    event_func_8681();
    event_func_8683();
    event_func_8684();
    event_func_8685();
    event_func_8686();
    event_func_8687();
    event_func_8688();
    event_func_9298();
    event_func_8690();
    event_func_9299();
    event_func_9300();
    event_func_9301();
    event_func_9302();
    event_func_9303();
    event_func_9304();
    event_func_9305();
    event_func_9306();
    event_func_9307();
    event_func_9308();
    event_func_9309();
    event_func_9310();
    event_func_9311();
    event_func_9312();
    event_func_9313();
    event_func_9314();
    event_func_9315();
    event_func_9316();
    event_func_9317();
    event_func_9318();
    event_func_9319();
    event_func_9320();
    event_func_9321();
    event_func_9322();
    event_func_9323();
    event_func_9324();
    event_func_9325();
    event_func_9326();
    event_func_9327();
    event_func_9328();
    event_func_9329();
    event_func_9330();
    event_func_9331();
    event_func_9332();
    event_func_9333();
    event_func_9334();
    event_func_9335();
    event_func_9336();
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
    event_func_8705();
    event_func_8706();
    event_func_8707();
    event_func_8708();
    event_func_8709();
    event_func_8710();
    event_func_8711();
    event_func_8712();
    event_func_8713();
    event_func_8714();
    event_func_8715();
    event_func_8716();
    event_func_8717();
    event_func_8718();
    event_func_8719();
    event_func_8720();
    event_func_8721();
    event_func_8722();
    event_func_8723();
    event_func_9337();
    event_func_9338();
    event_func_9339();
    event_func_9340();
    event_func_9341();
    event_func_9342();
    event_func_9343();
    event_func_9344();
    event_func_9345();
    event_func_8724();
    event_func_8725();
    event_func_8726();
    event_func_8727();
    event_func_8728();
    event_func_8729();
    event_func_8730();
    event_func_8731();
    event_func_9346();
    event_func_8735();
    event_func_8736();
    event_func_8737();
    event_func_8738();
    event_func_8739();
    event_func_8740();
    event_func_9155();
    event_func_2996();
    event_func_8771();
    event_func_8772();
    event_func_8773();
    event_func_5710();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_fly_in_1) goto group_main_engine_level_specific_methods_cutscenes_fly_in_1_end;
    event_func_8775();
    event_func_8776();
    event_func_8777();
    event_func_9156();
    event_func_9157();
    event_func_9158();
    event_func_9159();
    event_func_9160();
    event_func_9161();
    event_func_9162();
    event_func_9163();
    group_main_engine_level_specific_methods_cutscenes_fly_in_1_end: ;
    event_func_8545();
    event_func_8863();
    event_func_8864();
    event_func_9347();
    event_func_9348();
    event_func_9349();
    event_func_9350();
    event_func_9351();
    if (!group_main_engine_level_specific_methods_bosses_boss_grappler_1) goto group_main_engine_level_specific_methods_bosses_boss_grappler_1_end;
    event_func_9352();
    if (!group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_climbing_limits_1) goto group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_climbing_limits_1_end;
    event_func_9353();
    event_func_9354();
    event_func_9355();
    event_func_9356();
    group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_climbing_limits_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1) goto group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1_end;
    event_func_9357();
    event_func_9358();
    event_func_9359();
    event_func_9360();
    event_func_9361();
    event_func_9362();
    event_func_9363();
    event_func_9364();
    event_func_9365();
    event_func_9366();
    group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1) goto group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1_end;
    event_func_9367();
    event_func_9368();
    event_func_9369();
    event_func_9370();
    event_func_9371();
    group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1_end: ;
    event_func_9372();
    event_func_9373();
    event_func_9374();
    event_func_9375();
    event_func_9376();
    event_func_9377();
    event_func_9378();
    event_func_9379();
    event_func_9380();
    event_func_9381();
    event_func_9382();
    event_func_9383();
    group_main_engine_level_specific_methods_bosses_boss_grappler_1_end: ;
    event_func_9384();
    event_func_9385();
    event_func_9386();
    event_func_9387();
    event_func_9388();
    event_func_9389();
    event_func_9390();
    event_func_9391();
    event_func_9392();
    event_func_9393();
    event_func_9394();
    event_func_9395();
    event_func_9396();
    event_func_9397();
    event_func_9398();
    event_func_9399();
    event_func_9400();
    event_func_9401();
    event_func_9402();
    event_func_9403();
    event_func_9404();
    event_func_9405();
    event_func_9406();
    event_func_9407();
    event_func_9408();
    event_func_9409();
    event_func_9410();
    event_func_9052();
    event_func_9053();
    event_func_9054();
    event_func_9055();
    event_func_9056();
    event_func_9057();
    event_func_9216();
    event_func_9059();
    event_func_9060();
    event_func_9061();
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
    event_func_8558();
    event_func_9217();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_9412();
    event_func_9413();
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
void Frames::handle_frame_39_pre_events()
{
}
void Frames::event_func_9414()
{
    // event 2_38
    {
        if (!(group_main_engine_1)) goto event_2_38_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 48);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 20);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_2_38_end: ;
}
void Frames::event_func_9415()
{
    // event 1416_38
    {
        if (!(group_main_engine_1)) goto event_1416_38_end;
        {
            loop_spawn_swing_running = true;
            int times = int(qualifier_26.size());
            loop_spawn_swing_index = 0;
            while (loop_spawn_swing_index < times) {
                loop_spawn_swing_38();
                if (!loop_spawn_swing_running) break;
                loop_spawn_swing_index++;
            }
        }
        {
            loop_order_swing_running = true;
            int times = int(1);
            loop_order_swing_index = 0;
            while (loop_order_swing_index < times) {
                loop_order_swing_38();
                if (!loop_order_swing_running) break;
                loop_order_swing_index++;
            }
        }
    }
    event_1416_38_end: ;
}
void Frames::event_func_9416()
{
    // event 1461_38
    {
        if (!(group_main_engine_1)) goto event_1461_38_end;
        levelsbplatform1_2096_instances.clear_selection();
        spread_value(levelsbplatform1_2096_instances, 4, 0);
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 90+((Active*)*it)->alterables->values.get(4)*180);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*180);
        }
        gimmickchainwallmaskup_2307_instances.clear_selection();
        for (ObjectIterator it(gimmickchainwallmaskup_2307_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        for (ObjectIterator it(gimmickchainwallmaskdown_2305_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        levelscrollingchainup_2288_instances.clear_selection();
        for (ObjectIterator it(levelscrollingchainup_2288_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        levelscrollingchaindown_2289_instances.clear_selection();
        for (ObjectIterator it(levelscrollingchaindown_2289_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
        spread_value(gimmickchainwallmaskup_2307_instances, 1, 0);
        spread_value(gimmickchainwallmaskdown_2305_instances, 1, 0);
        for (ObjectIterator it(gimmickchainwallmaskup_2307_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)%math_helper%2)*-300);
        }
        for (ObjectIterator it(gimmickchainwallmaskdown_2305_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)%math_helper%2)*-300);
        }
    }
    event_1461_38_end: ;
}
void Frames::event_func_9417()
{
    // event 1472_38
    {
        if (!(group_main_engine_1)) goto event_1472_38_end;
        gimmicksbbarmask_2309_instances.clear_selection();
        spread_value(gimmicksbbarmask_2309_instances, 4, 0);
        for (ObjectIterator it(gimmicksbbarmask_2309_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*36);
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->flags.enable(0);
        }
        gimmicksbbar_2308_instances.clear_selection();
        spread_value(gimmicksbbar_2308_instances, 4, 0);
        for (ObjectIterator it(gimmicksbbar_2308_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*36);
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    event_1472_38_end: ;
}
void Frames::event_func_9418()
{
    // event 1480_38
    {
        if (!(group_main_engine_1)) goto event_1480_38_end;
        gimmickcrusherplatform_2306_instances.clear_selection();
        for (ObjectIterator it(gimmickcrusherplatform_2306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_1480_38_end: ;
}
void Frames::event_func_9419()
{
    // event 1540_38
    {
        if (!(group_main_engine_1)) goto event_1540_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(9, ((Active*)*it)->get_y());
        }
        enemymagnetizerhand_2298_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerhand_2298_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(enemymagnetizer_2300_instances, it.current_index))->get_fixed());
        }
        enemymagnetizerline_2299_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizerline_2299_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_single(enemymagnetizer_2300_instances, it.current_index))->get_fixed());
        }
    }
    event_1540_38_end: ;
}
void Frames::event_func_9420()
{
    // event 1635_38
    {
        if (!(group_main_engine_1)) goto event_1635_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
        }
    }
    event_1635_38_end: ;
}
void Frames::event_func_9421()
{
    // event 1704_38
    {
        if (!(group_main_engine_1)) goto event_1704_38_end;
        bossgrapplerarmleft_2312_instances.clear_selection();
        spread_value(bossgrapplerarmleft_2312_instances, 0, 0);
        bossgrapplerarmright_2313_instances.clear_selection();
        spread_value(bossgrapplerarmright_2313_instances, 0, 0);
        bossgrappler_2316_instances.clear_selection();
        for (ObjectIterator it(bossgrappler_2316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1704_38_end: ;
}
void Frames::event_func_9422()
{
    // event 1756_38
    {
        if (!(group_main_engine_1)) goto event_1756_38_end;
        ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->values.set(0, ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->get_x());
        ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->values.set(1, ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->get_y());
        ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->values.set(0, ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->get_x());
        ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->values.set(1, ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->get_y());
    }
    event_1756_38_end: ;
}
void Frames::on_frame_39_start_events()
{
    event_func_4133();
    event_func_9414();
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
    event_func_9221();
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
    event_func_3272();
    event_func_3273();
    event_func_4136();
    event_func_9415();
    event_func_4138();
    event_func_3986();
    event_func_3987();
    event_func_9223();
    event_func_9416();
    event_func_9417();
    event_func_9418();
    event_func_9072();
    event_func_9073();
    event_func_9419();
    event_func_9420();
    event_func_9074();
    event_func_2686();
    event_func_2687();
    event_func_9421();
    event_func_9422();
    event_func_9079();
    event_func_9080();
    event_func_9081();
    event_func_9082();
    event_func_9083();
    event_func_9084();
    event_func_9085();
    event_func_9086();
    event_func_9087();
    event_func_9088();
    event_func_9089();
    event_func_9090();
    event_func_9091();
    event_func_9092();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_9228();
    event_func_4145();
    event_func_9094();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_39_init()
{
    index = 38;
    width = 15624;
    height = 2400;
    virtual_width = 15624;
    virtual_height = 2400;
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
    static ObjectList* qualifier_25_instances[] = {&gimmickswingplatform_768_instances, NULL};
    qualifier_25.set(1, &qualifier_25_instances[0]);
    static ObjectList* qualifier_24_instances[] = {&gimmickswingchain_767_instances, &gimmickswingplatform_768_instances, NULL};
    qualifier_24.set(2, &qualifier_24_instances[0]);
    static ObjectList* qualifier_26_instances[] = {&gimmickswingspawner1_817_instances, &gimmickswingspawner2_831_instances, NULL};
    qualifier_26.set(2, &qualifier_26_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyslime_741_instances, &enemyrotorbladedeath_2126_instances, &gimmickcannonbase_2198_instances, &enemyhoppermkii_2200_instances, &enemyrotorblade_2205_instances, &enemydrone_2222_instances, &enemymagnetizer_2300_instances, &enemypelletizer_2304_instances, &bossgrappler_2316_instances, NULL};
    qualifier_20.set(9, &qualifier_20_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, &gimmicksbbarmask_2309_instances, NULL};
    qualifier_23.set(2, &qualifier_23_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &shipplatform2_2094_instances, &levelsbplatform1_2096_instances, &gimmickswingplatform_768_instances, &crystalplatform_2317_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &shipplatform2_2094_instances, &levelsbplatform1_2096_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickswingplatform_768_instances, &enemymagnetizercrate_2301_instances, &crystalplatform_2317_instances, NULL};
    qualifier_9.set(37, &qualifier_9_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(8, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &switchdoor_735_instances, &switchplatform_2100_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickcannonbase_2198_instances, &sbloop2_2210_instances, &sbloop3_2211_instances, &sbloop5_2223_instances, &levelcrystalspike_2248_instances, &gimmickchainwallup_2291_instances, &gimmickchainwalldown_2292_instances, &bosscrystalspire_2293_instances, &enemymagnetizercrate_2301_instances, &breakablefloor1_1760_instances, &breakablefloor2_1761_instances, &gimmickchainwallmaskdown_2305_instances, &gimmickcrusherplatform_2306_instances, &gimmickchainwallmaskup_2307_instances, &levelsbmovingblock1_2310_instances, NULL};
    qualifier_7.set(44, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
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
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &sbloop2_2210_instances, &sbloop3_2211_instances, &sbloop5_2223_instances, NULL};
    qualifier_11.set(6, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelsbplatform1_2096_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelsbplatform1_2096_instances, &gimmicksbbar_2308_instances, &gimmicksbbarmask_2309_instances, NULL};
    qualifier_13.set(4, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2039(0, -8), 0);
    add_background_object(create_levelparallaxpiece1_2041(0, 160), 0);
    add_background_object(create_levelparallaxpiece3_2043(0, 80), 0);
    add_background_object(create_levelparallaxpiece4_2044(0, 224), 0);
    add_background_object(create_levelparallaxpiece2_2045(0, 264), 0);
    add_background_object(create_levelparallaxpiece5_2046(0, 192), 0);
    add_background_object(create_levelparallaxpiece6_2047(8, 208), 0);
    add_background_object(create_levelparallaxzaoship_2121(128, 112), 0);
    add_background_object(create_levelparallaxpiece7_2048(0, 0), 0);
    add_background_object(create_sbgreenshipbg_2280(2984, 48), 1);
    add_background_object(create_sbgreenshipbg2_2281(2952, 48), 1);
    add_background_object(create_sbgreenshipbg3_2282(2984, 48), 1);
    add_background_object(create_sbgreenshipbg_2280(4264, 48), 1);
    add_background_object(create_sbgreenshipbg_2280(4520, 48), 1);
    add_background_object(create_sbgreenshipbg2_2281(5832, 48), 1);
    add_background_object(create_sbgreenshipbg3_2282(5800, 48), 1);
    add_background_object(create_sbgreenshipbg_2280(7528, 48), 1);
    add_background_object(create_sbgreenshipbg2_2281(7496, 48), 1);
    add_background_object(create_sbgreenshipbg3_2282(7528, 48), 1);
    add_background_object(create_sbgreenshipbg_2280(8808, 48), 1);
    add_background_object(create_sbgreenshipbg2_2281(10120, 48), 1);
    add_background_object(create_sbgreenshipbg3_2282(10088, 48), 1);
    add_object(create_levelfanblade_2283(3336, 720), 1);
    add_object(create_levelfanblade_2283(3336, 720), 1);
    add_object(create_levelfanblade_2283(3336, 720), 1);
    add_object(create_levelfanblade_2283(3336, 720), 1);
    add_object(create_levelfanblade_2283(3336, 536), 1);
    add_object(create_levelfanblade_2283(3336, 536), 1);
    add_object(create_levelfanblade_2283(3336, 536), 1);
    add_object(create_levelfanblade_2283(3336, 536), 1);
    add_object(create_levelfanblade_2283(3336, 376), 1);
    add_object(create_levelfanblade_2283(3336, 376), 1);
    add_object(create_levelfanblade_2283(3336, 376), 1);
    add_object(create_levelfanblade_2283(3336, 376), 1);
    add_object(create_levelsbbgplatform_2134(375, 356), 1);
    add_object(create_levelsbbgplatform_2134(343, 356), 1);
    add_object(create_levelsbbgplatform_2134(311, 356), 1);
    add_object(create_levelsbbgplatform_2134(279, 356), 1);
    add_background_object(create_sbgreensupportbeam1_2284(12936, 368), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13016, 368), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13096, 368), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13176, 368), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13256, 368), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12856, 368), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12936, 696), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13016, 696), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13096, 696), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13176, 696), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13256, 696), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12856, 696), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12840, 760), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12824, 824), 2);
    add_background_object(create_blimpcable2_2135(13848, 568), 2);
    add_background_object(create_sbironwall2_2285(10400, 32), 2);
    add_background_object(create_sbironwall2_2285(10400, 160), 2);
    add_background_object(create_sbironwall2_2285(10400, 288), 2);
    add_background_object(create_sbironwall2_2285(10400, 416), 2);
    add_background_object(create_blimpcable2_2135(14088, 504), 2);
    add_background_object(create_blimpcable2_2135(13832, 504), 2);
    add_background_object(create_sbironwall_2138(13824, 592), 2);
    add_background_object(create_sbironwall_2138(13568, 592), 2);
    add_background_object(create_sbironwall_2138(13824, 752), 2);
    add_background_object(create_sbironwall_2138(13568, 752), 2);
    add_background_object(create_blimpcable2_2135(13816, 440), 2);
    add_background_object(create_blimpcable3_2143(13712, 376), 2);
    add_background_object(create_blimpcable3_2143(13712, 440), 2);
    add_background_object(create_blimpcable3_2143(13712, 504), 2);
    add_background_object(create_blimpcable2_2135(13800, 376), 2);
    add_background_object(create_blimpcable2_2135(14056, 376), 2);
    add_background_object(create_blimpcable3_2143(13968, 376), 2);
    add_background_object(create_blimpcable3_2143(13968, 440), 2);
    add_background_object(create_blimpcable3_2143(13968, 504), 2);
    add_background_object(create_blimpcable2_2135(14072, 440), 2);
    add_background_object(create_sbironwall_2138(13312, 752), 2);
    add_background_object(create_sbironwall_2138(3840, 112), 2);
    add_background_object(create_sbironwall_2138(4096, 112), 2);
    add_background_object(create_sbironwall_2138(3840, 272), 2);
    add_background_object(create_sbironwall_2138(4096, 272), 2);
    add_background_object(create_sbironwall_2138(4352, 112), 2);
    add_background_object(create_sbbrokenfloor_2150(4480, 272), 2);
    add_background_object(create_sbbrokenfloor_2150(4352, 272), 2);
    add_background_object(create_sbironwall_2138(4608, 112), 2);
    add_background_object(create_sbbrokenfloor_2150(4608, 272), 2);
    add_background_object(create_sbbrokenfloor_2150(4736, 272), 2);
    add_background_object(create_sbironwall_2138(4864, 112), 2);
    add_background_object(create_sbbrokenfloor_2150(4864, 272), 2);
    add_background_object(create_sbbrokenfloor_2150(4992, 272), 2);
    add_background_object(create_sbironwall_2138(6768, 648), 2);
    add_background_object(create_sbbrokenfloor_2150(3968, 432), 2);
    add_background_object(create_sbbrokenfloor_2150(3840, 432), 2);
    add_background_object(create_sbironwall_2138(5136, 184), 2);
    add_background_object(create_sbironwall_2138(5552, 704), 2);
    add_background_object(create_sbironwall_2138(5552, 864), 2);
    add_background_object(create_sbironwall_2138(5136, 24), 2);
    add_background_object(create_sbironwall_2138(5888, 304), 2);
    add_background_object(create_sbironwall_2138(5888, 464), 2);
    add_background_object(create_sbironwall_2138(5888, 624), 2);
    add_background_object(create_sbironwall_2138(6144, 464), 2);
    add_background_object(create_sbironwall_2138(3312, 1264), 2);
    add_background_object(create_sbironwall_2138(3312, 1424), 2);
    add_background_object(create_sbironwall_2138(5632, 400), 2);
    add_background_object(create_sbironwall_2138(5632, 560), 2);
    add_background_object(create_sbironwall_2138(7024, 648), 2);
    add_background_object(create_sbironwall_2138(6512, 800), 2);
    add_background_object(create_sbironwall_2138(6160, 752), 2);
    add_background_object(create_sbironwall_2138(6768, 800), 2);
    add_background_object(create_sbironwall_2138(7024, 800), 2);
    add_background_object(create_sbironwall_2138(6512, 960), 2);
    add_background_object(create_sbironwall_2138(6768, 960), 2);
    add_background_object(create_sbironwall_2138(7024, 960), 2);
    add_background_object(create_sbironwall_2138(9472, 696), 2);
    add_background_object(create_sbironwall_2138(9728, 696), 2);
    add_background_object(create_sbironwall_2138(9984, 696), 2);
    add_background_object(create_sbironwall_2138(9216, 696), 2);
    add_background_object(create_sbironwall_2138(8448, 912), 2);
    add_background_object(create_sbironwall_2138(8704, 912), 2);
    add_background_object(create_sbironwall_2138(9728, 536), 2);
    add_background_object(create_sbironwall_2138(9984, 536), 2);
    add_background_object(create_sbhangingwheel2_2286(10472, 120), 2);
    add_background_object(create_sbhangingwheel2_2286(10472, 440), 2);
    add_background_object(create_sbironwall2_2285(10048, 304), 2);
    add_background_object(create_sbironwall2_2285(9856, 304), 2);
    add_background_object(create_sbironwall2_2285(9664, 304), 2);
    add_background_object(create_sbironwall2_2285(9536, 304), 2);
    add_background_object(create_sbironwall2_2285(10592, 416), 2);
    add_background_object(create_sbironwall2_2285(10592, 288), 2);
    add_background_object(create_sbironwall2_2285(10592, 8), 2);
    add_background_object(create_sbironwall2_2285(10592, 136), 2);
    add_background_object(create_sbironwall2_2285(10784, 96), 2);
    add_background_object(create_sbironwall2_2285(10976, 120), 2);
    add_background_object(create_sbironwall2_2285(10976, 248), 2);
    add_background_object(create_sbironwall2_2285(10976, 376), 2);
    add_background_object(create_sbwallshadow_2142(9216, 696), 2);
    add_background_object(create_sbwallshadow_2142(9344, 696), 2);
    add_background_object(create_sbwallshadow_2142(9472, 696), 2);
    add_background_object(create_sbwallshadow_2142(9600, 696), 2);
    add_background_object(create_sbwallshadow_2142(9728, 568), 2);
    add_background_object(create_sbwallshadow_2142(9856, 568), 2);
    add_background_object(create_sbwallshadow_2142(9984, 568), 2);
    add_background_object(create_sbwallshadow_2142(10112, 568), 2);
    add_background_object(create_sbwallshadow_2142(6768, 648), 2);
    add_background_object(create_sbwallshadow_2142(6896, 656), 2);
    add_background_object(create_sbwallshadow_2142(7024, 656), 2);
    add_background_object(create_sbwallshadow_2142(7152, 656), 2);
    add_background_object(create_sbwallshadow_2142(7056, 928), 2);
    add_background_object(create_sbwallshadow_2142(6928, 928), 2);
    add_background_object(create_sbwallshadow_2142(6800, 928), 2);
    add_background_object(create_sbwallshadow_2142(6512, 800), 2);
    add_background_object(create_sbwallshadow_2142(6640, 800), 2);
    add_background_object(create_sbwallshadow_2142(6288, 752), 2);
    add_background_object(create_sbwallshadow_2142(5888, 304), 2);
    add_background_object(create_sbwallshadow_2142(6016, 304), 2);
    add_background_object(create_sbwallshadow_2142(6064, 496), 2);
    add_background_object(create_sbwallshadow_2142(5552, 704), 2);
    add_background_object(create_sbwallshadow_2142(5264, 144), 2);
    add_background_object(create_sbwallshadow_2142(4992, 112), 2);
    add_background_object(create_sbwallshadow_2142(4864, 112), 2);
    add_background_object(create_sbwallshadow_2142(4736, 112), 2);
    add_background_object(create_sbwallshadow_2142(4608, 112), 2);
    add_background_object(create_sbwallshadow_2142(4480, 112), 2);
    add_background_object(create_sbwallshadow_2142(4352, 112), 2);
    add_background_object(create_sbwallshadow_2142(4560, 224), 2);
    add_background_object(create_sbwallshadow_2142(4224, 112), 2);
    add_background_object(create_sbwallshadow_2142(4096, 112), 2);
    add_background_object(create_sbwallshadow_2142(3968, 112), 2);
    add_background_object(create_sbwallshadow_2142(3840, 112), 2);
    add_background_object(create_sbwallshadow_2142(4016, 368), 2);
    add_background_object(create_sbwallshadow_2142(3792, 368), 2);
    add_background_object(create_sbwallshadow_2142(3312, 1264), 2);
    add_background_object(create_sbwallshadow_2142(3440, 1264), 2);
    add_background_object(create_sbbrokenfloor_2150(12416, 872), 2);
    add_background_object(create_sbironwall_2138(12000, 1016), 2);
    add_background_object(create_sbbrokenfloor_2150(12352, 856), 2);
    add_background_object(create_sbbrokenfloor_2150(12416, 840), 2);
    add_background_object(create_sbbrokenfloor_2150(12480, 856), 2);
    add_background_object(create_sbbrokenfloor_2150(12352, 824), 2);
    add_background_object(create_sbbrokenfloor_2150(12480, 824), 2);
    add_background_object(create_sbbrokenfloor_2150(12416, 808), 2);
    add_background_object(create_sbironwall_2138(12256, 1016), 2);
    add_background_object(create_sbironwall_2138(12256, 856), 2);
    add_background_object(create_sbironwall_2138(12512, 888), 2);
    add_background_object(create_sbironwall_2138(12800, 240), 2);
    add_background_object(create_sbironwall_2138(13056, 240), 2);
    add_background_object(create_sbironwall_2138(13056, 80), 2);
    add_background_object(create_sbwallshadow_2142(12800, 248), 2);
    add_background_object(create_sbwallshadow_2142(12928, 248), 2);
    add_background_object(create_sbwallshadow_2142(13056, 248), 2);
    add_background_object(create_sbwallshadow_2142(13184, 248), 2);
    add_background_object(create_sbironwall_2138(12768, 888), 2);
    add_background_object(create_sbironwall_2138(13024, 888), 2);
    add_background_object(create_sbironwall_2138(13280, 888), 2);
    add_background_object(create_sbironwall_2138(12816, 560), 2);
    add_background_object(create_sbironwall_2138(13072, 560), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12920, 760), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12904, 824), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13000, 760), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12984, 824), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13080, 760), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13064, 824), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13160, 760), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13144, 824), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13240, 760), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13224, 824), 2);
    add_background_object(create_sbsignup_2186(12904, 928), 2);
    add_background_object(create_sbsignup_2186(13032, 928), 2);
    add_background_object(create_sbsignup_2186(13160, 928), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12840, 432), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12824, 496), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12920, 432), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12904, 496), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13000, 432), 2);
    add_background_object(create_sbgreensupportbeam1_2284(12984, 496), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13080, 432), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13064, 496), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13160, 432), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13144, 496), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13240, 432), 2);
    add_background_object(create_sbgreensupportbeam1_2284(13224, 496), 2);
    add_background_object(create_sbbrokenfloor_2150(12648, 1048), 2);
    add_background_object(create_sbbrokenfloor_2150(12648, 1064), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 856), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 920), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 792), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 856), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 920), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 792), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 600), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 664), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 536), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 600), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 664), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 536), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 472), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 472), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 408), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 344), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 280), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 408), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 344), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 280), 2);
    add_background_object(create_sbgrapplerrope_2287(12904, 216), 2);
    add_background_object(create_sbgrapplerrope_2287(13208, 216), 2);
    add_background_object(create_sbwall_2146(13008, 1000), 2);
    add_background_object(create_sbbrokenfloor_2150(12808, 776), 2);
    add_background_object(create_sbbrokenfloor_2150(12936, 776), 2);
    add_background_object(create_sbbrokenfloor_2150(13064, 776), 2);
    add_background_object(create_sbbrokenfloor_2150(13192, 776), 2);
    add_background_object(create_sbironwall_2138(10240, 696), 2);
    add_background_object(create_sbironwall_2138(10496, 696), 2);
    add_background_object(create_sbironwall_2138(10752, 696), 2);
    add_background_object(create_sbironwall_2138(11008, 696), 2);
    add_background_object(create_sbironwall_2138(10240, 536), 2);
    add_background_object(create_sbironwall_2138(10496, 536), 2);
    add_background_object(create_sbwallshadow_2142(10896, 752), 2);
    add_background_object(create_sbwallshadow_2142(10768, 752), 2);
    add_background_object(create_sbwallshadow_2142(11008, 720), 2);
    add_background_object(create_sbwallshadow_2142(11136, 720), 2);
    add_background_object(create_sbwallshadow_2142(10496, 688), 2);
    add_background_object(create_sbwallshadow_2142(10624, 688), 2);
    add_background_object(create_sbwallshadow_2142(10352, 624), 2);
    add_background_object(create_sbwallshadow_2142(12688, 888), 2);
    add_background_object(create_sbwallshadow_2142(12560, 888), 2);
    add_background_object(create_sbwallshadow_2142(12432, 888), 2);
    add_background_object(create_sbwallshadow_2142(12000, 1016), 2);
    add_background_object(create_sbwallshadow_2142(12128, 1016), 2);
    add_background_object(create_sbwallshadow_2142(13632, 752), 2);
    add_background_object(create_sbwallshadow_2142(13504, 752), 2);
    add_background_object(create_sbwallshadow_2142(13952, 688), 2);
    add_background_object(create_sbwallshadow_2142(13952, 816), 2);
    add_background_object(create_sbwallshadow_2142(13728, 592), 2);
    add_background_object(create_sbwallshadow_2142(13712, 624), 2);
    add_background_object(create_sbironwall_2138(3584, 1296), 2);
    add_background_object(create_sbironwall_2138(3840, 1296), 2);
    add_background_object(create_sbironwall_2138(3840, 1120), 2);
    add_background_object(create_sbironwall_2138(3584, 1120), 2);
    add_background_object(create_sbbrokenfloor_2150(3584, 1280), 2);
    add_background_object(create_sbbrokenfloor_2150(3712, 1280), 2);
    add_background_object(create_sbbrokenfloor_2150(3840, 1280), 2);
    add_background_object(create_sbbrokenfloor_2150(3968, 1280), 2);
    add_background_object(create_sbbrokenfloor_2150(3584, 1104), 2);
    add_object(create_levelscrollingchainup_2288(11448, 568), 2);
    add_object(create_levelscrollingchainup_2288(11448, 632), 2);
    add_object(create_levelscrollingchainup_2288(11448, 696), 2);
    add_object(create_levelscrollingchainup_2288(11448, 760), 2);
    add_object(create_levelscrollingchainup_2288(11448, 824), 2);
    add_object(create_levelscrollingchainup_2288(11448, 1080), 2);
    add_object(create_levelscrollingchainup_2288(11448, 1016), 2);
    add_object(create_levelscrollingchainup_2288(11448, 888), 2);
    add_object(create_levelscrollingchainup_2288(11448, 952), 2);
    add_object(create_levelscrollingchainup_2288(11832, 568), 2);
    add_object(create_levelscrollingchainup_2288(11832, 632), 2);
    add_object(create_levelscrollingchainup_2288(11832, 696), 2);
    add_object(create_levelscrollingchainup_2288(11832, 760), 2);
    add_object(create_levelscrollingchainup_2288(11832, 824), 2);
    add_object(create_levelscrollingchainup_2288(11832, 1080), 2);
    add_object(create_levelscrollingchainup_2288(11832, 1016), 2);
    add_object(create_levelscrollingchainup_2288(11832, 888), 2);
    add_object(create_levelscrollingchainup_2288(11832, 952), 2);
    add_object(create_levelscrollingchainup_2288(12328, 736), 2);
    add_object(create_levelscrollingchainup_2288(12328, 672), 2);
    add_object(create_levelscrollingchainup_2288(12328, 608), 2);
    add_object(create_levelscrollingchainup_2288(12328, 544), 2);
    add_object(create_levelscrollingchainup_2288(5400, 80), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(15624, -51), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_switchplatformmask_2067(12712, 1016), 2);
    add_object(create_levelcrystalspike_2248(-88, 1208), 2);
    add_object(create_levelscrollingchainup_2288(5112, 400), 2);
    add_object(create_levelscrollingchaindown_2289(5256, 400), 2);
    add_object(create_levelscrollingchaindown_2289(5256, 464), 2);
    add_object(create_levelscrollingchaindown_2289(5256, 528), 2);
    add_object(create_levelscrollingchaindown_2289(5256, 592), 2);
    add_object(create_levelscrollingchaindown_2289(5256, 656), 2);
    add_object(create_levelscrollingchainup_2288(5112, 464), 2);
    add_object(create_levelscrollingchainup_2288(5112, 656), 2);
    add_object(create_levelscrollingchainup_2288(5112, 784), 2);
    add_object(create_levelscrollingchainup_2288(5112, 848), 2);
    add_object(create_levelscrollingchainup_2288(5112, 528), 2);
    add_object(create_levelscrollingchainup_2288(5112, 592), 2);
    add_object(create_levelscrollingchainup_2288(5112, 720), 2);
    add_object(create_levelscrollingchaindown_2289(5256, 720), 2);
    add_object(create_levelscrollingchaindown_2289(5256, 784), 2);
    add_object(create_levelscrollingchaindown_2289(5256, 848), 2);
    add_object(create_levelscrollingchainup_2288(5400, 464), 2);
    add_object(create_levelscrollingchainup_2288(5400, 656), 2);
    add_object(create_levelscrollingchainup_2288(5400, 528), 2);
    add_object(create_gimmickcrusherchain_2290(5792, 255), 2);
    add_object(create_levelscrollingchainup_2288(5400, 592), 2);
    add_object(create_levelscrollingchainup_2288(5400, 720), 2);
    add_object(create_levelscrollingchainup_2288(5400, 784), 2);
    add_object(create_levelscrollingchainup_2288(5400, 848), 2);
    add_object(create_levelscrollingchainup_2288(5400, 336), 2);
    add_object(create_levelscrollingchainup_2288(5400, 400), 2);
    add_object(create_levelscrollingchainup_2288(5400, 208), 2);
    add_object(create_levelscrollingchainup_2288(5400, 272), 2);
    add_object(create_levelscrollingchainup_2288(5400, 144), 2);
    add_object(create_gimmickcrusherchain_2290(6720, 751), 2);
    add_object(create_gimmickcrusherchain_2290(5760, 655), 2);
    add_object(create_gimmickcrusherchain_2290(6208, 343), 2);
    add_object(create_gimmickchainwallup_2291(5408, 760), 2);
    add_object(create_gimmickchainwallup_2291(5120, 760), 2);
    add_object(create_gimmickchainwallup_2291(5120, 536), 2);
    add_object(create_gimmickchainwallup_2291(5408, 528), 2);
    add_object(create_levelscrollingchaindown_2289(4984, 400), 2);
    add_object(create_levelscrollingchaindown_2289(4984, 464), 2);
    add_object(create_levelscrollingchaindown_2289(4984, 528), 2);
    add_object(create_levelscrollingchaindown_2289(4984, 592), 2);
    add_object(create_levelscrollingchaindown_2289(4984, 656), 2);
    add_object(create_levelscrollingchaindown_2289(4984, 720), 2);
    add_object(create_levelscrollingchaindown_2289(4984, 784), 2);
    add_object(create_levelscrollingchaindown_2289(4984, 848), 2);
    add_object(create_gimmickchainwalldown_2292(4992, 631), 2);
    add_object(create_gimmickchainwalldown_2292(5264, 831), 2);
    add_object(create_gimmickchainwalldown_2292(5264, 631), 2);
    add_object(create_gimmickcrusherchain_2290(6464, 847), 2);
    add_object(create_gimmickcrusherchain_2290(6952, 751), 2);
    add_object(create_gimmickcrusherchain_2290(7048, 751), 2);
    add_object(create_gimmickcrusherchain_2290(7144, 751), 2);
    add_object(create_gimmickcrusherchain_2290(9648, 391), 2);
    add_object(create_gimmickcrusherchain_2290(9744, 391), 2);
    add_object(create_gimmickcrusherchain_2290(10000, 391), 2);
    add_object(create_gimmickcrusherchain_2290(10096, 391), 2);
    add_object(create_gimmickcrusherchain_2290(9664, 831), 2);
    add_object(create_gimmickcrusherchain_2290(9568, 767), 2);
    add_object(create_gimmickcrusherchain_2290(10192, 391), 2);
    add_object(create_objectcrystal_279(10701, 386), 2);
    add_object(create_objectcrystal_279(10669, 386), 2);
    add_object(create_objectcrystal_279(10637, 386), 2);
    add_object(create_objectcrystal_279(10605, 386), 2);
    add_object(create_objectcrystal_279(10701, 426), 2);
    add_object(create_objectcrystal_279(10669, 426), 2);
    add_object(create_objectcrystal_279(10637, 426), 2);
    add_object(create_objectcrystal_279(10605, 426), 2);
    add_object(create_objectcrystal_279(10701, 466), 2);
    add_object(create_objectcrystal_279(10669, 466), 2);
    add_object(create_objectcrystal_279(10637, 466), 2);
    add_object(create_objectcrystal_279(10605, 466), 2);
    add_object(create_gimmickchainwallup_2291(12336, 640), 2);
    add_object(create_gimmickchainwallup_2291(11840, 944), 2);
    add_object(create_gimmickchainwallup_2291(11456, 968), 2);
    add_object(create_gimmickchainwallup_2291(11840, 712), 2);
    add_object(create_gimmickchainwallup_2291(11456, 736), 2);
    add_object(create_bosscrystalspire_2293(13072, 979), 2);
    add_object(create_bosscrystalspikespawner1_2294(13044, 983), 2);
    add_object(create_bosscrystalspikespawner2_2295(13100, 983), 2);
    add_object(create_enemylimiter_350(12837, 970), 2);
    add_object(create_enemylimiter_350(13317, 970), 2);
    add_object(create_enemylimiter_350(12837, 242), 2);
    add_object(create_enemylimiter_350(13317, 242), 2);
    add_object(create_gimmickfan_2220(13000, 768), 2);
    add_object(create_gimmickfan_2220(13128, 768), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_sbwall_2146(11136, 880), 3);
    add_background_object(create_sbwall_2146(11136, 816), 3);
    add_background_object(create_sbbrokenfloor_2150(12800, 984), 3);
    add_background_object(create_sbbrokenfloor_2150(13184, 984), 3);
    add_background_object(create_sbsmallwall_2144(12736, 1008), 3);
    add_background_object(create_sbwall_2146(12544, 760), 3);
    add_background_object(create_blimpcable2_2135(14344, 440), 3);
    add_background_object(create_blimpcable3_2143(14240, 504), 3);
    add_background_object(create_sbwall_2146(12800, 1008), 3);
    add_background_object(create_sbwall_2146(12544, 184), 3);
    add_background_object(create_blimpcable1_2070(8680, 600), 3);
    add_background_object(create_blimpcable1_2070(8696, 536), 3);
    add_background_object(create_blimpcable1_2070(8616, 856), 3);
    add_background_object(create_blimpcable3_2143(8824, 792), 3);
    add_background_object(create_blimpcable2_2135(9200, 536), 3);
    add_background_object(create_blimpcable3_2143(9352, 472), 3);
    add_background_object(create_blimpcable2_2135(9440, 408), 3);
    add_background_object(create_sbwall_2146(12288, 1168), 3);
    add_background_object(create_sbwall_2146(12032, 952), 3);
    add_background_object(create_sbwall_2146(11904, 496), 3);
    add_background_object(create_sbmetaltube1_2190(11616, 1144), 3);
    add_background_object(create_sbmetaltube1_2190(11648, 1144), 3);
    add_background_object(create_sbmetaltube1_2190(11424, 1144), 3);
    add_background_object(create_sbmetaltube1_2190(11456, 1144), 3);
    add_background_object(create_sbmetaltube1_2190(11808, 1144), 3);
    add_background_object(create_sbmetaltube1_2190(11840, 1144), 3);
    add_background_object(create_sbbigwall2_2145(11008, 944), 3);
    add_background_object(create_sbwall_2146(12672, 504), 3);
    add_background_object(create_sbwall_2146(12544, 504), 3);
    add_background_object(create_sbwall_2146(12672, 688), 3);
    add_background_object(create_sbwall_2146(12544, 688), 3);
    add_background_object(create_sbbigwall_2147(12544, 376), 3);
    add_background_object(create_sbironwall_2138(6584, 240), 3);
    add_background_object(create_sbwallshadow_2142(6584, 240), 3);
    add_background_object(create_sbwallshadow_2142(6712, 240), 3);
    add_background_object(create_ship28_2075(7024, 1120), 3);
    add_background_object(create_sbbrokenfloor_2150(4216, 432), 3);
    add_background_object(create_sbwall_2146(4096, 432), 3);
    add_background_object(create_sbwall_2146(4096, 368), 3);
    add_background_object(create_sbwall_2146(9344, 536), 3);
    add_background_object(create_sbwall_2146(9472, 472), 3);
    add_background_object(create_sbwall_2146(9600, 440), 3);
    add_background_object(create_sbwall_2146(9472, 504), 3);
    add_background_object(create_sbwall_2146(9600, 504), 3);
    add_background_object(create_sbwall_2146(8960, 944), 3);
    add_background_object(create_blimpcable2_2135(8752, 840), 3);
    add_background_object(create_blimpcable3_2143(8600, 840), 3);
    add_background_object(create_blimpcable2_2135(8480, 840), 3);
    add_background_object(create_blimpcable3_2143(8328, 776), 3);
    add_background_object(create_blimpcable2_2135(8192, 712), 3);
    add_background_object(create_blimpcable2_2135(8176, 648), 3);
    add_background_object(create_blimpcable3_2143(8072, 648), 3);
    add_background_object(create_sbwallslope2_2182(8704, 848), 3);
    add_background_object(create_sbwall_2146(8832, 848), 3);
    add_background_object(create_sbdeck10_2183(8704, 824), 3);
    add_background_object(create_sbwall_2146(9216, 816), 3);
    add_background_object(create_sbgreensupportbeam1_2284(7312, 888), 3);
    add_background_object(create_sbgreensupportbeam1_2284(7376, 632), 3);
    add_background_object(create_sbmetaltube2_2191(7440, 976), 3);
    add_background_object(create_sbbrokenfloor_2150(7432, 560), 3);
    add_background_object(create_sbbrokenfloor_2150(7560, 560), 3);
    add_background_object(create_watervent_725(7424, 952), 3);
    add_background_object(create_sbwallright_2169(6272, 880), 3);
    add_background_object(create_sbwall_2146(6272, 912), 3);
    add_background_object(create_sbwallright_2169(6528, 944), 3);
    add_background_object(create_sbwall_2146(6400, 880), 3);
    add_background_object(create_sbgreensupportbeam2_2296(4080, 560), 3);
    add_background_object(create_sbwall_2146(6912, 592), 3);
    add_background_object(create_sbwall_2146(7040, 592), 3);
    add_background_object(create_sbwall_2146(7168, 592), 3);
    add_background_object(create_sbwall_2146(7296, 592), 3);
    add_background_object(create_sbwallleft_2172(6064, 368), 3);
    add_background_object(create_sbwallleft_2172(6064, 304), 3);
    add_background_object(create_sbgreensupportbeam2_2296(4048, 432), 3);
    add_background_object(create_sbgreensupportbeam2_2296(4064, 496), 3);
    add_background_object(create_sbgreensupportbeam2_2296(4032, 368), 3);
    add_background_object(create_sbgreensupportbeam1_2284(3824, 496), 3);
    add_background_object(create_sbgreensupportbeam1_2284(3808, 560), 3);
    add_background_object(create_sbdeck1walkthru_2170(3776, 344), 3);
    add_background_object(create_sbceiling2_2149(5888, 112), 3);
    add_background_object(create_sbbigwall2_2145(4352, -16), 3);
    add_background_object(create_blimpcable3_2143(2840, 760), 3);
    add_background_object(create_sbdeck1_2148(2784, 792), 3);
    add_background_object(create_sbbigwall2_2145(3328, 1136), 3);
    add_background_object(create_sbbigwall2_2145(2816, 1200), 3);
    add_background_object(create_sbbigwall_2147(2816, 1072), 3);
    add_background_object(create_blimpcable3_2143(2584, 504), 3);
    add_background_object(create_sbwallslope5_2166(2432, 496), 3);
    add_background_object(create_sbwallslope3_2164(2560, 528), 3);
    add_background_object(create_blimpcable2_2135(1944, 792), 3);
    add_background_object(create_blimpcable2_2135(1928, 728), 3);
    add_background_object(create_watervent_725(1920, 792), 3);
    add_background_object(create_watervent_725(2240, 792), 3);
    add_background_object(create_sbwall_2146(2432, 528), 3);
    add_background_object(create_blimpcable2_2135(3216, 440), 3);
    add_background_object(create_blimpcable3_2143(3112, 440), 3);
    add_background_object(create_blimpcable2_2135(2944, 440), 3);
    add_background_object(create_blimpcable3_2143(2840, 504), 3);
    add_background_object(create_blimpcable2_2135(2704, 504), 3);
    add_background_object(create_ship28_2075(2080, 1088), 3);
    add_background_object(create_ship28_2075(2000, 1120), 3);
    add_background_object(create_ship28_2075(2040, 1104), 3);
    add_background_object(create_sbbigwall_2147(1152, 688), 3);
    add_background_object(create_shipfront1_2254(14352, 464), 3);
    add_background_object(create_sbshipfront_2152(14096, 624), 3);
    add_background_object(create_ship32_2153(1184, 280), 3);
    add_background_object(create_ship34_2154(1824, 280), 3);
    add_background_object(create_ship35_2155(1280, 280), 3);
    add_background_object(create_ship36_2156(1280, 440), 3);
    add_background_object(create_ship33_2157(1184, 440), 3);
    add_background_object(create_ship37_2158(1824, 440), 3);
    add_background_object(create_blimpcable1_2070(1264, 280), 3);
    add_background_object(create_quickbackdrop7_2159(1296, 440), 3);
    add_background_object(create_quickbackdrop8_2160(1296, 280), 3);
    add_background_object(create_ship35_2155(1536, 280), 3);
    add_background_object(create_ship36_2156(1536, 440), 3);
    add_background_object(create_quickbackdrop7_2159(1552, 440), 3);
    add_background_object(create_quickbackdrop8_2160(1552, 280), 3);
    add_background_object(create_ship35_2155(1808, 280), 3);
    add_background_object(create_ship36_2156(1808, 440), 3);
    add_background_object(create_blimpcable1_2070(1248, 344), 3);
    add_background_object(create_blimpcable1_2070(1232, 408), 3);
    add_background_object(create_blimpcable1_2070(1216, 472), 3);
    add_background_object(create_blimpcable1_2070(1200, 536), 3);
    add_background_object(create_blimpcable2_2135(1816, 280), 3);
    add_background_object(create_blimpcable2_2135(1832, 344), 3);
    add_background_object(create_blimpcable2_2135(1848, 408), 3);
    add_background_object(create_blimpcable2_2135(1864, 472), 3);
    add_background_object(create_blimpcable2_2135(1880, 536), 3);
    add_background_object(create_blimpcable2_2135(1288, 280), 3);
    add_background_object(create_blimpcable2_2135(1304, 344), 3);
    add_background_object(create_blimpcable2_2135(1320, 408), 3);
    add_background_object(create_blimpcable2_2135(1336, 472), 3);
    add_background_object(create_blimpcable2_2135(1352, 536), 3);
    add_background_object(create_blimpcable2_2135(1544, 280), 3);
    add_background_object(create_blimpcable2_2135(1560, 344), 3);
    add_background_object(create_blimpcable2_2135(1576, 408), 3);
    add_background_object(create_blimpcable2_2135(1592, 472), 3);
    add_background_object(create_blimpcable2_2135(1608, 536), 3);
    add_background_object(create_sbdeck1_2148(1024, 664), 3);
    add_background_object(create_sbdeck1_2148(1152, 664), 3);
    add_background_object(create_sbwall_2146(1024, 688), 3);
    add_background_object(create_sbdeck1_2148(1280, 664), 3);
    add_background_object(create_sbdeck4_2188(14224, 504), 3);
    add_background_object(create_sbwallslope4_2187(14248, 528), 3);
    add_background_object(create_sbwall_2146(14224, 560), 3);
    add_background_object(create_sbwall_2146(1920, 976), 3);
    add_background_object(create_blimpcable1_2070(1184, 600), 3);
    add_background_object(create_blimpcable2_2135(1368, 600), 3);
    add_background_object(create_blimpcable3_2143(1280, 600), 3);
    add_background_object(create_blimpcable2_2135(1624, 600), 3);
    add_background_object(create_blimpcable2_2135(1896, 600), 3);
    add_background_object(create_sbwall_2146(13568, 560), 3);
    add_background_object(create_sbdeck1_2148(13568, 536), 3);
    add_background_object(create_sbwall_2146(13696, 560), 3);
    add_background_object(create_sbdeck1_2148(13696, 536), 3);
    add_background_object(create_sbwall_2146(14096, 560), 3);
    add_background_object(create_sbdeck1_2148(14096, 536), 3);
    add_background_object(create_blimpcable3_2143(1536, 600), 3);
    add_background_object(create_blimpcable3_2143(1808, 600), 3);
    add_background_object(create_sbwallleft_2172(1008, 688), 3);
    add_background_object(create_sbwall_2146(13968, 560), 3);
    add_background_object(create_sbdeck1_2148(13968, 536), 3);
    add_background_object(create_sbwallright_2169(1920, 752), 3);
    add_background_object(create_sbdeck8_2171(1920, 728), 3);
    add_background_object(create_sbwall_2146(1280, 816), 3);
    add_background_object(create_sbwall_2146(1152, 880), 3);
    add_background_object(create_sbwall_2146(1152, 816), 3);
    add_background_object(create_sbwall_2146(1408, 816), 3);
    add_background_object(create_sbwall_2146(1536, 752), 3);
    add_background_object(create_sbwallleft_2172(1136, 752), 3);
    add_background_object(create_sbwallleft_2172(1136, 816), 3);
    add_background_object(create_sbwallleft_2172(1136, 880), 3);
    add_background_object(create_ship23_2175(1040, 752), 3);
    add_background_object(create_sbwall_2146(1152, 1008), 3);
    add_background_object(create_sbwall_2146(1152, 944), 3);
    add_background_object(create_sbwall_2146(1280, 1008), 3);
    add_background_object(create_sbwall_2146(1408, 1008), 3);
    add_background_object(create_sbwallleft_2172(1136, 944), 3);
    add_background_object(create_sbwallleft_2172(1136, 1008), 3);
    add_background_object(create_sbwall_2146(1536, 816), 3);
    add_background_object(create_sbwall_2146(1536, 976), 3);
    add_background_object(create_sbwall_2146(1664, 976), 3);
    add_background_object(create_sbdeck1_2148(1664, 728), 3);
    add_background_object(create_sbwall_2146(1792, 976), 3);
    add_background_object(create_sbdeck1_2148(1792, 728), 3);
    add_background_object(create_blimpcable3_2143(1536, 664), 3);
    add_background_object(create_blimpcable2_2135(1640, 664), 3);
    add_background_object(create_blimpcable3_2143(1808, 664), 3);
    add_background_object(create_blimpcable2_2135(1912, 664), 3);
    add_background_object(create_ship32_2153(13616, 56), 3);
    add_background_object(create_ship34_2154(14256, 56), 3);
    add_background_object(create_ship35_2155(13712, 56), 3);
    add_background_object(create_ship36_2156(13712, 216), 3);
    add_background_object(create_ship33_2157(13616, 216), 3);
    add_background_object(create_ship37_2158(14256, 216), 3);
    add_background_object(create_quickbackdrop7_2159(13728, 216), 3);
    add_background_object(create_quickbackdrop8_2160(13728, 56), 3);
    add_background_object(create_ship35_2155(13968, 56), 3);
    add_background_object(create_ship36_2156(13968, 216), 3);
    add_background_object(create_quickbackdrop7_2159(13984, 216), 3);
    add_background_object(create_quickbackdrop8_2160(13984, 56), 3);
    add_background_object(create_ship35_2155(14240, 56), 3);
    add_background_object(create_ship36_2156(14240, 216), 3);
    add_background_object(create_blimpcable2_2135(13720, 56), 3);
    add_background_object(create_blimpcable2_2135(13736, 120), 3);
    add_background_object(create_blimpcable2_2135(13752, 184), 3);
    add_background_object(create_blimpcable2_2135(13768, 248), 3);
    add_background_object(create_blimpcable2_2135(13784, 312), 3);
    add_background_object(create_blimpcable2_2135(13976, 56), 3);
    add_background_object(create_blimpcable2_2135(13992, 120), 3);
    add_background_object(create_blimpcable2_2135(14008, 184), 3);
    add_background_object(create_blimpcable2_2135(14024, 248), 3);
    add_background_object(create_blimpcable2_2135(14040, 312), 3);
    add_background_object(create_blimpcable3_2143(14240, 376), 3);
    add_background_object(create_sbdeck7_2176(1384, 728), 3);
    add_background_object(create_sbdeck7_2176(1000, 664), 3);
    add_background_object(create_sbwall_2146(1920, 1040), 3);
    add_background_object(create_sbwall_2146(13696, 624), 3);
    add_background_object(create_sbwall_2146(13968, 624), 3);
    add_background_object(create_sbwall_2146(1536, 1040), 3);
    add_background_object(create_sbwall_2146(1664, 1040), 3);
    add_background_object(create_sbwall_2146(1792, 1040), 3);
    add_background_object(create_blimpcable3_2143(14240, 440), 3);
    add_background_object(create_sbdeck10_2183(14352, 440), 3);
    add_background_object(create_blimpcable2_2135(14248, 56), 3);
    add_background_object(create_blimpcable2_2135(14264, 120), 3);
    add_background_object(create_blimpcable2_2135(14280, 184), 3);
    add_background_object(create_blimpcable2_2135(14296, 248), 3);
    add_background_object(create_blimpcable2_2135(14312, 312), 3);
    add_background_object(create_blimpcable2_2135(14328, 376), 3);
    add_background_object(create_shipbottomsail_2074(1328, 1208), 3);
    add_background_object(create_shipbottomsail_2074(1624, 1168), 3);
    add_background_object(create_shipbottomsail_2074(1704, 1144), 3);
    add_background_object(create_shipbottomsail_2074(1392, 1184), 3);
    add_background_object(create_shipbottomsail_2074(1136, 1184), 3);
    add_background_object(create_shipbottomsail_2074(1448, 1144), 3);
    add_background_object(create_ship26_2082(1200, 1272), 3);
    add_background_object(create_ship26_2082(1264, 1264), 3);
    add_background_object(create_ship26_2082(1328, 1256), 3);
    add_background_object(create_ship26_2082(1392, 1248), 3);
    add_background_object(create_ship26_2082(1456, 1240), 3);
    add_background_object(create_ship26_2082(1520, 1232), 3);
    add_background_object(create_ship26_2082(1584, 1224), 3);
    add_background_object(create_ship28_2075(1880, 1168), 3);
    add_background_object(create_ship27_2083(1648, 1208), 3);
    add_background_object(create_ship28_2075(1920, 1152), 3);
    add_background_object(create_ship28_2075(1960, 1136), 3);
    add_background_object(create_ship26_2082(1136, 1280), 3);
    add_background_object(create_shipthrusterfront_2085(1392, 1216), 3);
    add_background_object(create_shipthrusterend_2086(1008, 1216), 3);
    add_background_object(create_shipthrustermid_2088(1104, 1216), 3);
    add_background_object(create_shipbottomsailshadow_2089(1336, 1104), 3);
    add_background_object(create_shipthrusterend_2086(1008, 1048), 3);
    add_background_object(create_sbwallleft_2172(1136, 1040), 3);
    add_background_object(create_sbwall_2146(1152, 1040), 3);
    add_background_object(create_sbwall_2146(1280, 1040), 3);
    add_background_object(create_sbwall_2146(1408, 1040), 3);
    add_background_object(create_shipthrustermid_2088(1104, 1048), 3);
    add_background_object(create_shipthrusterfront_2085(1392, 1048), 3);
    add_background_object(create_shipbottomsail_2074(1392, 1144), 3);
    add_background_object(create_shipbottomsail_2074(1136, 1144), 3);
    add_background_object(create_sbinnercurve1_2180(-384, 1384), 3);
    add_background_object(create_sbinnercurve3_2189(-512, 1256), 3);
    add_background_object(create_sbinnercurve4_2184(-256, 1384), 3);
    add_background_object(create_sbinnercurve2_2233(-256, 1256), 3);
    add_background_object(create_sbwall_2146(-384, 1320), 3);
    add_background_object(create_sbwall_2146(-384, 1256), 3);
    add_background_object(create_sbsigndown_2091(12688, 904), 3);
    add_background_object(create_sbdeck8_2171(13824, 536), 3);
    add_background_object(create_sbdeck7_2176(13944, 536), 3);
    add_background_object(create_sbwallright_2169(13824, 560), 3);
    add_background_object(create_sbwallright_2169(13808, 624), 3);
    add_background_object(create_sbwallleft_2172(13952, 560), 3);
    add_background_object(create_sbwallleft_2172(13952, 624), 3);
    add_background_object(create_sbwall_2146(13952, 752), 3);
    add_background_object(create_sbwallleft_2172(13952, 752), 3);
    add_background_object(create_sbwallright_2169(14080, 752), 3);
    add_background_object(create_sbwall_2146(13952, 880), 3);
    add_background_object(create_sbwall_2146(13824, 880), 3);
    add_background_object(create_sbwall_2146(13696, 880), 3);
    add_background_object(create_sbwallright_2169(14080, 880), 3);
    add_background_object(create_sbdeck8_2171(14016, 880), 3);
    add_background_object(create_sboutercurve4_2179(13760, 688), 3);
    add_background_object(create_sbsmallwall_2144(13696, 688), 3);
    add_background_object(create_sbwall_2146(13568, 880), 3);
    add_background_object(create_sbwall_2146(13696, 944), 3);
    add_background_object(create_sbwall_2146(13568, 944), 3);
    add_background_object(create_sbbigwall_2147(1920, 816), 3);
    add_background_object(create_sbbigwall_2147(1664, 752), 3);
    add_background_object(create_sbbigwall_2147(1280, 880), 3);
    add_background_object(create_sbwall_2146(13440, 560), 3);
    add_background_object(create_sbdeck1_2148(13440, 536), 3);
    add_background_object(create_sbdeck1_2148(13888, 880), 3);
    add_background_object(create_sbshipfront_2152(13824, 944), 3);
    add_background_object(create_sbwall_2146(13440, 880), 3);
    add_background_object(create_sbdeck1_2148(13504, 880), 3);
    add_background_object(create_sbdeck1_2148(13632, 880), 3);
    add_background_object(create_sbdeck1_2148(13760, 880), 3);
    add_background_object(create_ship29_2084(2104, 1104), 3);
    add_background_object(create_sbwall_2146(2304, 944), 3);
    add_background_object(create_sbwall_2146(2048, 1040), 3);
    add_background_object(create_sbwall_2146(1408, 752), 3);
    add_background_object(create_sbbigwall_2147(1536, 880), 3);
    add_background_object(create_sbbigwall_2147(2176, 816), 3);
    add_background_object(create_sbwall_2146(2304, 1008), 3);
    add_background_object(create_sbdeck1_2148(1536, 728), 3);
    add_background_object(create_sbwall_2146(1792, 880), 3);
    add_background_object(create_sbwall_2146(1792, 944), 3);
    add_background_object(create_sbwall_2146(1920, 944), 3);
    add_background_object(create_sbbigwall_2147(2048, 944), 3);
    add_background_object(create_sbdeck1_2148(2304, 472), 3);
    add_background_object(create_sbwall_2146(2176, 1040), 3);
    add_background_object(create_sbwall_2146(2304, 1040), 3);
    add_background_object(create_sbdeck8_2171(1408, 664), 3);
    add_background_object(create_sbwallright_2169(1408, 688), 3);
    add_background_object(create_sbdeck1_2148(1408, 728), 3);
    add_background_object(create_sbwall_2146(2560, 560), 3);
    add_background_object(create_sbdeck1_2148(2688, 536), 3);
    add_background_object(create_sbbigwall_2147(2944, 496), 3);
    add_background_object(create_sbwallleft_2172(2928, 496), 3);
    add_background_object(create_ship32_2153(2488, 56), 3);
    add_background_object(create_ship34_2154(3128, 56), 3);
    add_background_object(create_ship35_2155(2584, 56), 3);
    add_background_object(create_ship36_2156(2584, 216), 3);
    add_background_object(create_ship33_2157(2488, 216), 3);
    add_background_object(create_ship37_2158(3128, 216), 3);
    add_background_object(create_quickbackdrop7_2159(2600, 216), 3);
    add_background_object(create_quickbackdrop8_2160(2600, 56), 3);
    add_background_object(create_ship35_2155(2840, 56), 3);
    add_background_object(create_ship36_2156(2840, 216), 3);
    add_background_object(create_quickbackdrop7_2159(2856, 216), 3);
    add_background_object(create_quickbackdrop8_2160(2856, 56), 3);
    add_background_object(create_ship35_2155(3112, 56), 3);
    add_background_object(create_ship36_2156(3112, 216), 3);
    add_background_object(create_blimpcable2_2135(3120, 56), 3);
    add_background_object(create_blimpcable2_2135(3136, 120), 3);
    add_background_object(create_blimpcable2_2135(3152, 184), 3);
    add_background_object(create_blimpcable2_2135(3168, 248), 3);
    add_background_object(create_blimpcable2_2135(3184, 312), 3);
    add_background_object(create_blimpcable2_2135(2592, 56), 3);
    add_background_object(create_blimpcable2_2135(2608, 120), 3);
    add_background_object(create_blimpcable2_2135(2624, 184), 3);
    add_background_object(create_blimpcable2_2135(2640, 248), 3);
    add_background_object(create_blimpcable2_2135(2656, 312), 3);
    add_background_object(create_blimpcable2_2135(2848, 56), 3);
    add_background_object(create_blimpcable2_2135(2864, 120), 3);
    add_background_object(create_blimpcable2_2135(2880, 184), 3);
    add_background_object(create_blimpcable2_2135(2896, 248), 3);
    add_background_object(create_blimpcable2_2135(2912, 312), 3);
    add_background_object(create_blimpcable2_2135(2672, 376), 3);
    add_background_object(create_blimpcable3_2143(2584, 376), 3);
    add_background_object(create_blimpcable2_2135(2928, 376), 3);
    add_background_object(create_blimpcable2_2135(3200, 376), 3);
    add_background_object(create_blimpcable3_2143(2840, 376), 3);
    add_background_object(create_blimpcable3_2143(3112, 376), 3);
    add_background_object(create_blimpcable3_2143(2584, 440), 3);
    add_background_object(create_blimpcable2_2135(2688, 440), 3);
    add_background_object(create_blimpcable3_2143(2840, 440), 3);
    add_background_object(create_sbceiling1_2181(2432, 1040), 3);
    add_background_object(create_sbbigwall_2147(2432, 944), 3);
    add_background_object(create_sbwall_2146(13312, 368), 3);
    add_background_object(create_sbwall_2146(13312, 624), 3);
    add_background_object(create_sbwall_2146(13312, 688), 3);
    add_background_object(create_sbwallleft_2172(13312, 624), 3);
    add_background_object(create_sbwallleft_2172(13312, 688), 3);
    add_background_object(create_sbwall_2146(13312, 880), 3);
    add_background_object(create_sbwallleft_2172(13312, 880), 3);
    add_background_object(create_sbdeck7_2176(13480, 880), 3);
    add_background_object(create_sbceiling1_2181(13568, 1008), 3);
    add_background_object(create_sbceiling1_2181(13440, 1072), 3);
    add_background_object(create_sbwall_2146(13568, 944), 3);
    add_background_object(create_sbwall_2146(13312, 1072), 3);
    add_background_object(create_sbbigwall_2147(13440, 624), 3);
    add_background_object(create_sbbigwall_2147(13312, 944), 3);
    add_background_object(create_sbdeck7_2176(2280, 472), 3);
    add_background_object(create_sbwallleft_2172(2288, 560), 3);
    add_background_object(create_sbwallleft_2172(2288, 496), 3);
    add_background_object(create_watervent_725(2176, 792), 3);
    add_background_object(create_watervent_725(2112, 792), 3);
    add_background_object(create_watervent_725(2048, 792), 3);
    add_background_object(create_watervent_725(1984, 792), 3);
    add_background_object(create_sbbigwall_2147(2304, 560), 3);
    add_background_object(create_sbwallleft_2172(2288, 624), 3);
    add_background_object(create_sbdeck1_2148(2304, 792), 3);
    add_background_object(create_sbdeck7_2176(2280, 792), 3);
    add_background_object(create_sbdeck1_2148(2432, 792), 3);
    add_background_object(create_sbdeck3_2161(2560, 504), 3);
    add_background_object(create_sbdeck2_2163(2432, 472), 3);
    add_background_object(create_sbwallleft_2172(2928, 560), 3);
    add_background_object(create_blimpcable3_2143(2840, 696), 3);
    add_background_object(create_blimpcable3_2143(2840, 568), 3);
    add_background_object(create_blimpcable3_2143(2840, 632), 3);
    add_background_object(create_sbdeck8_2171(2816, 536), 3);
    add_background_object(create_sbwallright_2169(2816, 560), 3);
    add_background_object(create_sbwall_2146(3456, 688), 3);
    add_background_object(create_sbwall_2146(3456, 624), 3);
    add_background_object(create_sbwall_2146(3456, 560), 3);
    add_background_object(create_sboutercurve2_2256(3520, 496), 3);
    add_background_object(create_sbwallright_2169(3568, 560), 3);
    add_background_object(create_sbwallright_2169(3568, 624), 3);
    add_background_object(create_sbwallright_2169(3568, 688), 3);
    add_background_object(create_sbsmallwall_2144(3456, 496), 3);
    add_background_object(create_sbdeck1_2148(3072, 496), 3);
    add_background_object(create_sbdeck7_2176(2920, 496), 3);
    add_background_object(create_sbdeck1_2148(2944, 496), 3);
    add_background_object(create_sbwall_2146(3456, 816), 3);
    add_background_object(create_sbwall_2146(3456, 752), 3);
    add_background_object(create_sbwallright_2169(3568, 752), 3);
    add_background_object(create_sbwallright_2169(3568, 816), 3);
    add_background_object(create_sbdeck8_2171(3456, 496), 3);
    add_background_object(create_sbbigwall_2147(3200, 496), 3);
    add_background_object(create_sbdeck1_2148(3328, 496), 3);
    add_background_object(create_sbdeck1_2148(3200, 496), 3);
    add_background_object(create_sbbigwall_2147(3328, 240), 3);
    add_background_object(create_sbwallleft_2172(3312, 304), 3);
    add_background_object(create_sbwallleft_2172(3312, 240), 3);
    add_background_object(create_sbbigwall_2147(3328, 112), 3);
    add_background_object(create_sbwallleft_2172(3312, 176), 3);
    add_background_object(create_sbwallleft_2172(3312, 112), 3);
    add_background_object(create_sbbigwall_2147(3328, -16), 3);
    add_background_object(create_sbwallleft_2172(3312, 48), 3);
    add_background_object(create_sbwallleft_2172(3312, -16), 3);
    add_background_object(create_sbbigwall_2147(3584, 240), 3);
    add_background_object(create_sbbigwall_2147(3584, 112), 3);
    add_background_object(create_sbwall_2146(3712, 496), 3);
    add_background_object(create_sbwall_2146(3712, 432), 3);
    add_background_object(create_sbwall_2146(3712, 368), 3);
    add_background_object(create_sbwall_2146(3712, 688), 3);
    add_background_object(create_sbwall_2146(3712, 624), 3);
    add_background_object(create_sbwall_2146(3712, 560), 3);
    add_background_object(create_sbinnercurve3_2189(3584, 368), 3);
    add_background_object(create_sbwallleft_2172(3712, 688), 3);
    add_background_object(create_sbwallleft_2172(3712, 624), 3);
    add_background_object(create_sbwallleft_2172(3712, 560), 3);
    add_background_object(create_sbwallleft_2172(3712, 496), 3);
    add_background_object(create_sbwall_2146(3712, 816), 3);
    add_background_object(create_sbwall_2146(3712, 752), 3);
    add_background_object(create_sbwallleft_2172(3712, 816), 3);
    add_background_object(create_sbwallleft_2172(3712, 752), 3);
    add_background_object(create_sbwall_2146(3456, 944), 3);
    add_background_object(create_sbwall_2146(3456, 880), 3);
    add_background_object(create_sbwallright_2169(3568, 880), 3);
    add_background_object(create_sbwallright_2169(3568, 944), 3);
    add_background_object(create_sbwall_2146(3456, 1072), 3);
    add_background_object(create_sbwall_2146(3456, 1008), 3);
    add_background_object(create_sbwallright_2169(3568, 1008), 3);
    add_background_object(create_sbwallright_2169(3568, 1072), 3);
    add_background_object(create_sbwall_2146(3712, 944), 3);
    add_background_object(create_sbwall_2146(3712, 880), 3);
    add_background_object(create_sbwallleft_2172(3712, 944), 3);
    add_background_object(create_sbwallleft_2172(3712, 880), 3);
    add_background_object(create_sbwall_2146(3712, 1200), 3);
    add_background_object(create_sbwall_2146(3712, 1136), 3);
    add_background_object(create_sbwallleft_2172(3712, 1200), 3);
    add_background_object(create_sbwallleft_2172(3712, 1136), 3);
    add_background_object(create_sboutercurve3_2257(3712, 1264), 3);
    add_background_object(create_sboutercurve4_2179(3776, 1264), 3);
    add_background_object(create_sbwall_2146(3712, 1072), 3);
    add_background_object(create_sbwall_2146(3712, 1008), 3);
    add_background_object(create_sbwallleft_2172(3712, 1072), 3);
    add_background_object(create_sbwallleft_2172(3712, 1008), 3);
    add_background_object(create_sbwallright_2169(3568, 1136), 3);
    add_background_object(create_sbwallright_2169(3568, 1200), 3);
    add_background_object(create_sbwallright_2169(3056, 1264), 3);
    add_background_object(create_sbinnercurve2_2233(3072, 1328), 3);
    add_background_object(create_sbbigwall_2147(2944, 1456), 3);
    add_background_object(create_sbwall_2146(3712, 1456), 3);
    add_background_object(create_sbwall_2146(3712, 1520), 3);
    add_background_object(create_sbwall_2146(3840, 1520), 3);
    add_background_object(create_sbwallright_2169(3824, 1456), 3);
    add_background_object(create_watervent_725(3904, 1488), 3);
    add_background_object(create_watervent_725(3840, 1488), 3);
    add_background_object(create_sbwall_2146(3968, 1520), 3);
    add_background_object(create_watervent_725(4032, 1488), 3);
    add_background_object(create_watervent_725(3968, 1488), 3);
    add_background_object(create_sbwall_2146(4096, 1264), 3);
    add_background_object(create_sbwall_2146(4096, 1200), 3);
    add_background_object(create_sbwallleft_2172(4096, 1264), 3);
    add_background_object(create_sbwallleft_2172(4096, 1200), 3);
    add_background_object(create_sbwall_2146(4096, 1456), 3);
    add_background_object(create_sbwall_2146(4096, 1520), 3);
    add_background_object(create_sbwallleft_2172(4096, 1456), 3);
    add_background_object(create_sbwall_2146(4096, 880), 3);
    add_background_object(create_sbwallleft_2172(4096, 880), 3);
    add_background_object(create_sbwall_2146(4096, 1008), 3);
    add_background_object(create_sbwall_2146(4096, 944), 3);
    add_background_object(create_sbwallleft_2172(4096, 1008), 3);
    add_background_object(create_sbwallleft_2172(4096, 944), 3);
    add_background_object(create_sbwall_2146(4096, 624), 3);
    add_background_object(create_sbwallleft_2172(4096, 624), 3);
    add_background_object(create_sbwall_2146(4096, 816), 3);
    add_background_object(create_sbwallleft_2172(4096, 816), 3);
    add_background_object(create_sbwall_2146(4096, 752), 3);
    add_background_object(create_sbwall_2146(4096, 688), 3);
    add_background_object(create_sbwallleft_2172(4096, 752), 3);
    add_background_object(create_sbwallleft_2172(4096, 688), 3);
    add_background_object(create_sbwallleft_2172(4096, 432), 3);
    add_background_object(create_sbwall_2146(4096, 560), 3);
    add_background_object(create_sbwall_2146(4096, 496), 3);
    add_background_object(create_sbwallleft_2172(4096, 560), 3);
    add_background_object(create_sbwallleft_2172(4096, 496), 3);
    add_background_object(create_sbwallright_2169(3824, 1200), 3);
    add_background_object(create_sbwallright_2169(3824, 1136), 3);
    add_background_object(create_sbwallright_2169(3824, 1072), 3);
    add_background_object(create_sbwallright_2169(3824, 1008), 3);
    add_background_object(create_sbwallright_2169(3824, 944), 3);
    add_background_object(create_sbwallright_2169(3824, 880), 3);
    add_background_object(create_sbwallright_2169(3824, 816), 3);
    add_background_object(create_sbwallright_2169(3824, 752), 3);
    add_background_object(create_sbwallright_2169(3824, 688), 3);
    add_background_object(create_sbwallright_2169(3824, 624), 3);
    add_background_object(create_sbwallright_2169(3824, 560), 3);
    add_background_object(create_sbwallright_2169(3824, 496), 3);
    add_background_object(create_sbwallright_2169(3824, 432), 3);
    add_background_object(create_sbwallleft_2172(4096, 368), 3);
    add_background_object(create_sbwallright_2169(3824, 368), 3);
    add_background_object(create_sbwallright_2169(3824, 240), 3);
    add_background_object(create_sbwallright_2169(3824, 176), 3);
    add_background_object(create_sbwallright_2169(3824, 112), 3);
    add_background_object(create_sbbrokenfloor_2150(3840, 1104), 3);
    add_background_object(create_sbbrokenfloor_2150(3968, 1104), 3);
    add_background_object(create_sbbrokenfloor_2150(3840, 704), 3);
    add_background_object(create_sbbrokenfloor_2150(3968, 704), 3);
    add_background_object(create_sbbigwall2_2145(2432, 816), 3);
    add_background_object(create_sbdeck1_2148(2688, 792), 3);
    add_background_object(create_sbwall_2146(2944, 1008), 3);
    add_background_object(create_sbwall_2146(2944, 944), 3);
    add_background_object(create_sbwall_2146(2944, 880), 3);
    add_background_object(create_sbwallright_2169(3056, 880), 3);
    add_background_object(create_sbwallright_2169(3056, 944), 3);
    add_background_object(create_sbwallright_2169(3056, 1008), 3);
    add_background_object(create_sbbigwall2_2145(2688, 944), 3);
    add_background_object(create_sbbigwall2_2145(3200, 1456), 3);
    add_background_object(create_sbbigwall_2147(3456, 1456), 3);
    add_background_object(create_sbwallright_2169(3056, 1072), 3);
    add_background_object(create_sbwallright_2169(3056, 1136), 3);
    add_background_object(create_sbwallright_2169(3056, 1200), 3);
    add_background_object(create_sbbigwall2_2145(2816, 1328), 3);
    add_background_object(create_sbwallleft_2172(3312, 1136), 3);
    add_background_object(create_sbwallleft_2172(3312, 1200), 3);
    add_background_object(create_sbwallleft_2172(3440, 1008), 3);
    add_background_object(create_sbwallleft_2172(3440, 880), 3);
    add_background_object(create_sbwallleft_2172(3440, 944), 3);
    add_background_object(create_sbwallleft_2172(3440, 752), 3);
    add_background_object(create_sbwallleft_2172(3440, 816), 3);
    add_background_object(create_sbwallleft_2172(3440, 624), 3);
    add_background_object(create_sbwallleft_2172(3440, 688), 3);
    add_background_object(create_sbdeck7_2176(3304, 1112), 3);
    add_background_object(create_sbdeck1_2148(3328, 1112), 3);
    add_background_object(create_sbwallleft_2172(3440, 1072), 3);
    add_background_object(create_sbdeck7_2176(3176, 1456), 3);
    add_background_object(create_sbdeck1_2148(3200, 1456), 3);
    add_background_object(create_sbdeck1_2148(3328, 1456), 3);
    add_background_object(create_sbdeck1_2148(3456, 1456), 3);
    add_background_object(create_sbdeck1_2148(3584, 1456), 3);
    add_background_object(create_sbdeck1_2148(3712, 1456), 3);
    add_background_object(create_sbdeck2_2163(2912, 792), 3);
    add_background_object(create_sbsmallwall_2144(2944, 816), 3);
    add_background_object(create_sbbigwall_2147(2688, 816), 3);
    add_background_object(create_sboutercurve2_2256(3008, 816), 3);
    add_background_object(create_sbmetaltube1_2190(4320, 112), 3);
    add_background_object(create_sbmetaltube3_2192(4320, 176), 3);
    add_background_object(create_sbmetaltube4_2193(4560, 192), 3);
    add_background_object(create_sbmetaltube2_2191(4288, 176), 3);
    add_background_object(create_sbmetaltube1_2190(4320, 144), 3);
    add_background_object(create_sbmetaltube2_2191(4256, 176), 3);
    add_background_object(create_sbmetaltube2_2191(4224, 176), 3);
    add_background_object(create_sbmetaltube2_2191(4192, 176), 3);
    add_background_object(create_sbbigwall_2147(4352, 304), 3);
    add_background_object(create_sbdeck1_2148(4352, 280), 3);
    add_background_object(create_sbdeck1_2148(4480, 280), 3);
    add_background_object(create_sbdeck7_2176(4328, 280), 3);
    add_background_object(create_sbwallleft_2172(4336, 304), 3);
    add_background_object(create_sbwall_2146(4352, 432), 3);
    add_background_object(create_sbwall_2146(4480, 432), 3);
    add_background_object(create_sbbigwall_2147(4352, 496), 3);
    add_background_object(create_sbmetaltube1_2190(4560, 288), 3);
    add_background_object(create_sbmetaltube1_2190(4560, 256), 3);
    add_background_object(create_sbmetaltube1_2190(4560, 224), 3);
    add_background_object(create_sbmetaltube2_2191(4592, 192), 3);
    add_background_object(create_sbbigwall_2147(4608, 304), 3);
    add_background_object(create_sbdeck1_2148(4608, 280), 3);
    add_background_object(create_sbdeck1_2148(4736, 280), 3);
    add_background_object(create_sbbigwall_2147(4608, -16), 3);
    add_background_object(create_sbmetaltube2_2191(4624, 192), 3);
    add_background_object(create_sbmetaltube2_2191(4656, 192), 3);
    add_background_object(create_sbmetaltube3_2192(4416, 144), 3);
    add_background_object(create_sbmetaltube4_2193(4416, 80), 3);
    add_background_object(create_sbmetaltube2_2191(4448, 80), 3);
    add_background_object(create_sbmetaltube2_2191(4480, 80), 3);
    add_background_object(create_sbmetaltube3_2192(4576, 80), 3);
    add_background_object(create_sbmetaltube1_2190(4416, 112), 3);
    add_background_object(create_sbmetaltube2_2191(4512, 80), 3);
    add_background_object(create_sbmetaltube1_2190(4576, 48), 3);
    add_background_object(create_sbmetaltube1_2190(4576, 16), 3);
    add_background_object(create_sbmetaltube1_2190(4576, -16), 3);
    add_background_object(create_sbmetaltube2_2191(4544, 80), 3);
    add_background_object(create_sbwallleft_2172(4608, 48), 3);
    add_background_object(create_sbwallleft_2172(4608, -16), 3);
    add_background_object(create_sbwallright_2169(4560, -16), 3);
    add_background_object(create_sbwallright_2169(4560, 16), 3);
    add_background_object(create_sbsmallwall_2144(4352, 112), 3);
    add_background_object(create_sbmetaltube2_2191(4384, 144), 3);
    add_background_object(create_sbwallright_2169(4400, 80), 3);
    add_background_object(create_sbwallleft_2172(4352, 112), 3);
    add_background_object(create_sbmetaltube2_2191(4352, 144), 3);
    add_background_object(create_sbwall_2146(4864, 304), 3);
    add_background_object(create_sbdeck1_2148(4864, 280), 3);
    add_background_object(create_sbbigwall_2147(4864, -16), 3);
    add_background_object(create_sbbigwall2_2145(5120, -16), 3);
    add_background_object(create_sbwallleft_2172(5104, 112), 3);
    add_background_object(create_sbwallleft_2172(5104, 176), 3);
    add_background_object(create_sbwallleft_2172(5104, 240), 3);
    add_background_object(create_sbwallleft_2172(5104, 304), 3);
    add_background_object(create_sbdeck8_2171(4992, 280), 3);
    add_background_object(create_sbwallright_2169(4992, 304), 3);
    add_background_object(create_sbmetaltube1_2190(4976, 432), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 432), 3);
    add_background_object(create_sbbigwall_2147(4224, 944), 3);
    add_background_object(create_sbbigwall2_2145(4480, 944), 3);
    add_background_object(create_sbbigwall_2147(4736, 944), 3);
    add_background_object(create_sbbigwall2_2145(4992, 944), 3);
    add_background_object(create_sbwallright_2169(4208, 752), 3);
    add_background_object(create_sbwallright_2169(4208, 688), 3);
    add_background_object(create_sbwallright_2169(4208, 624), 3);
    add_background_object(create_sbwallright_2169(4608, 560), 3);
    add_background_object(create_sbwallright_2169(4608, 496), 3);
    add_background_object(create_sbwallright_2169(4608, 432), 3);
    add_background_object(create_sbdeck1_2148(4864, 920), 3);
    add_background_object(create_sbdeck1_2148(4992, 920), 3);
    add_background_object(create_sbdeck1_2148(5120, 920), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 912), 3);
    add_background_object(create_sbmetaltube1_2190(4976, 912), 3);
    add_background_object(create_sbwall_2146(4864, 368), 3);
    add_background_object(create_sbmetaltube1_2190(4976, 400), 3);
    add_background_object(create_sbmetaltube1_2190(4976, 368), 3);
    add_background_object(create_sbwallright_2169(4960, 368), 3);
    add_background_object(create_sbwall_2146(5248, 368), 3);
    add_background_object(create_sbwall_2146(5120, 368), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 400), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 368), 3);
    add_background_object(create_sbwallleft_2172(5136, 368), 3);
    add_background_object(create_sbmetaltube1_2190(5248, 432), 3);
    add_background_object(create_sbmetaltube1_2190(5248, 400), 3);
    add_background_object(create_sbmetaltube1_2190(5248, 368), 3);
    add_background_object(create_sbwallright_2169(5232, 368), 3);
    add_background_object(create_sbwallleft_2172(5280, 368), 3);
    add_background_object(create_sbdeck1_2148(5248, 920), 3);
    add_background_object(create_sbdeck1_2148(5376, 920), 3);
    add_background_object(create_sbmetaltube1_2190(5248, 912), 3);
    add_background_object(create_sbbigwall2_2145(5376, -16), 3);
    add_background_object(create_sbwallright_2169(5248, 112), 3);
    add_background_object(create_sbwallright_2169(5248, 176), 3);
    add_background_object(create_sbwallright_2169(5248, 240), 3);
    add_background_object(create_sbwallright_2169(5376, 368), 3);
    add_background_object(create_sbbigwall2_2145(5504, 944), 3);
    add_background_object(create_sbdeck1_2148(5504, 920), 3);
    add_background_object(create_sbbigwall_2147(5248, 944), 3);
    add_background_object(create_sbbigwall_2147(5632, 816), 3);
    add_background_object(create_sbbigwall_2147(5632, 688), 3);
    add_background_object(create_sbbigwall2_2145(5760, 944), 3);
    add_background_object(create_sbwallleft_2172(5616, 880), 3);
    add_background_object(create_sbwallleft_2172(5616, 816), 3);
    add_background_object(create_sbwallleft_2172(5616, 752), 3);
    add_background_object(create_sbwallleft_2172(5616, 688), 3);
    add_background_object(create_sbmetaltube1_2190(5392, 912), 3);
    add_background_object(create_sbbigwall_2147(5632, -16), 3);
    add_background_object(create_sbwallleft_2172(5424, 48), 3);
    add_background_object(create_sbwallleft_2172(5424, -16), 3);
    add_background_object(create_sbwallright_2169(5376, 48), 3);
    add_background_object(create_sbwallright_2169(5376, -16), 3);
    add_background_object(create_sbmetaltube1_2190(5392, -16), 3);
    add_background_object(create_sbmetaltube1_2190(5392, 16), 3);
    add_background_object(create_sbmetaltube1_2190(5392, 48), 3);
    add_background_object(create_sbmetaltube1_2190(5392, 80), 3);
    add_background_object(create_sbmetaltube1_2190(5392, 112), 3);
    add_background_object(create_sbdeck1_2148(5760, 680), 3);
    add_background_object(create_sbwallleft_2172(5552, 496), 3);
    add_background_object(create_sbwallleft_2172(5552, 432), 3);
    add_background_object(create_sbwallleft_2172(5552, 304), 3);
    add_background_object(create_sbdeck1_2148(5696, 280), 3);
    add_background_object(create_sbdeck1_2148(5568, 280), 3);
    add_background_object(create_sbdeck7_2176(5544, 280), 3);
    add_background_object(create_sbbigwall_2147(5888, -16), 3);
    add_background_object(create_sbbigwall_2147(5632, 304), 3);
    add_background_object(create_sbwallleft_2172(5552, 368), 3);
    add_background_object(create_sbmetaltube2_2191(5840, 112), 3);
    add_background_object(create_sbmetaltube3_2192(5904, 112), 3);
    add_background_object(create_sbmetaltube1_2190(5904, 80), 3);
    add_background_object(create_sbmetaltube2_2191(5584, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5712, 112), 3);
    add_background_object(create_sbwallright_2169(5888, 80), 3);
    add_background_object(create_sbmetaltube2_2191(5872, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5680, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5648, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5616, 112), 3);
    add_background_object(create_sbdeck8_2171(6144, 280), 3);
    add_background_object(create_sbbigwall_2147(6144, 368), 3);
    add_background_object(create_sbwallright_2169(6144, 304), 3);
    add_background_object(create_sbbigwall_2147(6144, -16), 3);
    add_background_object(create_sbwall_2146(6016, 112), 3);
    add_background_object(create_sbwallright_2169(6144, 112), 3);
    add_background_object(create_sbwallleft_2172(5936, 64), 3);
    add_background_object(create_sbdeck1_2148(6272, 368), 3);
    add_background_object(create_sbdeck1_2148(6144, 368), 3);
    add_background_object(create_sbwall_2146(6272, 112), 3);
    add_background_object(create_sbwallleft_2172(6256, 112), 3);
    add_background_object(create_sbceiling2_2149(6272, 176), 3);
    add_background_object(create_sbbigwall_2147(6400, -16), 3);
    add_background_object(create_sbbigwall_2147(6400, 112), 3);
    add_background_object(create_sbwall_2146(6400, 432), 3);
    add_background_object(create_sbsmallwall_2144(6400, 368), 3);
    add_background_object(create_sbdeck8_2171(6400, 368), 3);
    add_background_object(create_sboutercurve2_2256(6464, 368), 3);
    add_background_object(create_sbinnercurve2_2233(6528, 496), 3);
    add_background_object(create_sbbigwall_2147(6272, 496), 3);
    add_background_object(create_sbwall_2146(6528, 624), 3);
    add_background_object(create_sbwallleft_2172(6064, 432), 3);
    add_background_object(create_sbwallleft_2172(6128, 496), 3);
    add_background_object(create_sbwallright_2169(6656, 624), 3);
    add_background_object(create_sbbigwall_2147(6656, 112), 3);
    add_background_object(create_sbbigwall_2147(6592, 368), 3);
    add_background_object(create_sbwallleft_2172(6576, 304), 3);
    add_background_object(create_sbwallleft_2172(6576, 368), 3);
    add_background_object(create_sbwallleft_2172(6592, 432), 3);
    add_background_object(create_sbbigwall_2147(6848, 240), 3);
    add_background_object(create_sbbigwall_2147(6848, 368), 3);
    add_background_object(create_sbbigwall_2147(6912, 496), 3);
    add_background_object(create_sbdeck12_2260(6528, 472), 3);
    add_background_object(create_sbdeck8_2171(6656, 600), 3);
    add_background_object(create_sbwall_2146(6592, 304), 3);
    add_background_object(create_sbwall_2146(6720, 304), 3);
    add_background_object(create_sbwallleft_2172(6832, 240), 3);
    add_background_object(create_sbbigwall_2147(6656, -16), 3);
    add_background_object(create_sbbigwall_2147(6912, 112), 3);
    add_background_object(create_sbbigwall_2147(6912, -16), 3);
    add_background_object(create_sbwallleft_2172(6896, 496), 3);
    add_background_object(create_sbwallleft_2172(6896, 560), 3);
    add_background_object(create_sbwallright_2169(6512, 432), 3);
    add_background_object(create_sbdeck1_2148(6656, 776), 3);
    add_background_object(create_sbdeck7walkthru_2167(6760, 624), 3);
    add_background_object(create_sbdeck1walkthru_2170(6784, 624), 3);
    add_background_object(create_sbwallleft_2172(6896, 592), 3);
    add_background_object(create_sbdeck1_2148(6784, 776), 3);
    add_background_object(create_sbladder_2177(4152, 176), 3);
    add_background_object(create_sbladder_2177(4152, 208), 3);
    add_background_object(create_sbwall_2146(3840, 48), 3);
    add_background_object(create_sbwall_2146(3968, 48), 3);
    add_background_object(create_sbwall_2146(4096, 48), 3);
    add_background_object(create_sbwall_2146(4224, 48), 3);
    add_background_object(create_sbwall_2146(3584, 48), 3);
    add_background_object(create_sbwall_2146(3712, 48), 3);
    add_background_object(create_sbwallright_2169(3584, -16), 3);
    add_background_object(create_sbwallleft_2172(4336, -16), 3);
    add_background_object(create_sbwallright_2169(3824, 304), 3);
    add_background_object(create_sbdeck8walkthru_2168(3904, 344), 3);
    add_background_object(create_sbgreensupportbeam1_2284(3856, 368), 3);
    add_background_object(create_sbgreensupportbeam1_2284(3840, 432), 3);
    add_background_object(create_sbdeck1walkthru_2170(4016, 344), 3);
    add_background_object(create_sbdeck7walkthru_2167(4008, 344), 3);
    add_background_object(create_sbmetaltube2_2191(5552, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5456, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5520, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5488, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5424, 112), 3);
    add_background_object(create_sbwall_2146(5120, 176), 3);
    add_background_object(create_sbwall_2146(5120, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5328, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5360, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5296, 112), 3);
    add_background_object(create_sbmetaltube2_2191(5264, 112), 3);
    add_background_object(create_sbwall_2146(5120, 304), 3);
    add_background_object(create_sbwall_2146(5120, 240), 3);
    add_background_object(create_sbdeck7_2176(5224, 280), 3);
    add_background_object(create_sbwallslope1_2173(5248, 304), 3);
    add_background_object(create_sbdeck9_2174(5248, 280), 3);
    add_background_object(create_sbdeck8_2171(5376, 344), 3);
    add_background_object(create_sbsmallwall_2144(5568, 304), 3);
    add_background_object(create_sbsmallwall_2144(5568, 368), 3);
    add_background_object(create_sbdeck6_2151(5824, 280), 3);
    add_background_object(create_sbwallright_2169(5888, 304), 3);
    add_background_object(create_sbwallright_2169(5888, 368), 3);
    add_background_object(create_sbdeck1walkthru_2170(5888, 280), 3);
    add_background_object(create_sbbigwall_2147(5888, 688), 3);
    add_background_object(create_sbdeck1_2148(5888, 680), 3);
    add_background_object(create_sbwall_2146(5568, 432), 3);
    add_background_object(create_sbwall_2146(5568, 496), 3);
    add_background_object(create_sbwallright_2169(5696, 496), 3);
    add_background_object(create_sbwall_2146(5696, 432), 3);
    add_background_object(create_signwarning_1028(5712, 240), 3);
    add_background_object(create_signwarning_1028(5680, 640), 3);
    add_background_object(create_sbwallleft_2172(6128, 624), 3);
    add_background_object(create_sbbigwall_2147(6144, 624), 3);
    add_background_object(create_sbbigwall2_2145(5888, 816), 3);
    add_background_object(create_sbladder_2177(6016, 280), 3);
    add_background_object(create_sbladder_2177(6016, 312), 3);
    add_background_object(create_sbladder_2177(6016, 344), 3);
    add_background_object(create_sbladder_2177(6016, 376), 3);
    add_background_object(create_sbladder_2177(6016, 408), 3);
    add_background_object(create_sbladder_2177(6016, 440), 3);
    add_background_object(create_sbwallleft_2172(6512, 624), 3);
    add_background_object(create_sbwallright_2169(6400, 624), 3);
    add_background_object(create_sbwallright_2169(6400, 688), 3);
    add_background_object(create_sbwallright_2169(6272, 752), 3);
    add_background_object(create_sbceiling2_2149(6656, 864), 3);
    add_background_object(create_sbdeck1_2148(6912, 776), 3);
    add_background_object(create_sbwall_2146(7040, 864), 3);
    add_background_object(create_sbdeck1_2148(7040, 776), 3);
    add_background_object(create_sbbigwall_2147(7168, 496), 3);
    add_background_object(create_sbdeck7walkthru_2167(5544, 680), 3);
    add_background_object(create_sbdeck1walkthru_2170(5568, 680), 3);
    add_background_object(create_sbdeck1_2148(5632, 680), 3);
    add_background_object(create_sbladder_2177(6016, 472), 3);
    add_background_object(create_sbladder_2177(6016, 504), 3);
    add_background_object(create_sbladder_2177(6016, 536), 3);
    add_background_object(create_sbladder_2177(6016, 568), 3);
    add_background_object(create_sbsmallwall_2144(5824, 432), 3);
    add_background_object(create_sbwallright_2169(5888, 432), 3);
    add_background_object(create_sbwallright_2169(5952, 496), 3);
    add_background_object(create_sbwallleft_2172(5808, 496), 3);
    add_background_object(create_sbwall_2146(5824, 496), 3);
    add_background_object(create_sbdeck6_2151(5888, 472), 3);
    add_background_object(create_sbdeck8_2171(5952, 472), 3);
    add_background_object(create_sbwallleft_2172(6128, 560), 3);
    add_background_object(create_sbdeck1_2148(6016, 680), 3);
    add_background_object(create_sbwall_2146(6144, 752), 3);
    add_background_object(create_sbdeck8_2171(6144, 680), 3);
    add_background_object(create_sbwall_2146(6144, 560), 3);
    add_background_object(create_sbwall_2146(6144, 496), 3);
    add_background_object(create_sbsmallwall_2144(6080, 432), 3);
    add_background_object(create_sbsmallwall_2144(6080, 368), 3);
    add_background_object(create_sbdeck7_2176(5864, 472), 3);
    add_background_object(create_sbwall_2146(6016, 944), 3);
    add_background_object(create_sbwall_2146(6016, 1008), 3);
    add_background_object(create_sbbigwall_2147(6400, 1008), 3);
    add_background_object(create_sbwall_2146(6400, 944), 3);
    add_background_object(create_sbwall_2146(6144, 816), 3);
    add_background_object(create_sbwallright_2169(6272, 816), 3);
    add_background_object(create_sbdeck1_2148(6400, 872), 3);
    add_background_object(create_sbbigwall2_2145(6656, 1008), 3);
    add_background_object(create_sbdeck1_2148(6784, 1008), 3);
    add_background_object(create_sbbigwall_2147(6912, 1008), 3);
    add_background_object(create_sbdeck1_2148(6912, 1008), 3);
    add_background_object(create_sbdeck1_2148(7040, 1008), 3);
    add_background_object(create_sbdeck7walkthru_2167(6504, 776), 3);
    add_background_object(create_sbdeck1walkthru_2170(6528, 776), 3);
    add_background_object(create_sbsmallwall_2144(6080, 304), 3);
    add_background_object(create_sbdeck6_2151(6080, 280), 3);
    add_background_object(create_sbdeck7_2176(6056, 280), 3);
    add_background_object(create_sbwallright_2169(6144, 336), 3);
    add_background_object(create_sbrotorbladetunnel_2178(6592, 1048), 3);
    add_background_object(create_sbwallright_2169(6528, 976), 3);
    add_background_object(create_sbwallright_2169(6576, 1072), 3);
    add_background_object(create_sbwallright_2169(6576, 1008), 3);
    add_background_object(create_sbdeck8_2171(6560, 1008), 3);
    add_background_object(create_sbdeck7_2176(6536, 1008), 3);
    add_background_object(create_sbwallleft_2172(6656, 1072), 3);
    add_background_object(create_sbwallleft_2172(6656, 1008), 3);
    add_background_object(create_sbdeck1_2148(6656, 1008), 3);
    add_background_object(create_sbdeck8_2171(7168, 776), 3);
    add_background_object(create_sbwallright_2169(7168, 800), 3);
    add_background_object(create_sbbigwall_2147(7168, 1008), 3);
    add_background_object(create_sbdeck1_2148(7168, 1008), 3);
    add_background_object(create_sbdeck1_2148(7296, 920), 3);
    add_background_object(create_sbwall_2146(7296, 944), 3);
    add_background_object(create_sbwallleft_2172(7280, 944), 3);
    add_background_object(create_sbwallleft_2172(7280, 976), 3);
    add_background_object(create_sbdeck7_2176(7272, 920), 3);
    add_background_object(create_sbwallright_2169(6528, 880), 3);
    add_background_object(create_sbdeck8_2171(6528, 872), 3);
    add_background_object(create_sbbigwall_2147(6144, 944), 3);
    add_background_object(create_sbwallright_2169(7168, 864), 3);
    add_background_object(create_sbwall_2146(7040, 800), 3);
    add_background_object(create_sbwall_2146(6656, 800), 3);
    add_background_object(create_sbwallleft_2172(6656, 800), 3);
    add_background_object(create_sbceiling2_2149(6016, 1072), 3);
    add_background_object(create_sbbigwall_2147(7168, 240), 3);
    add_background_object(create_sbbigwall_2147(7168, -16), 3);
    add_background_object(create_sbsmallwall_2144(7104, 432), 3);
    add_background_object(create_sbsmallwall_2144(7104, 368), 3);
    add_background_object(create_sbsmallwall_2144(7104, 304), 3);
    add_background_object(create_sbsmallwall_2144(7104, 240), 3);
    add_background_object(create_sbwall_2146(6272, 1072), 3);
    add_background_object(create_sbwall_2146(6144, 1072), 3);
    add_background_object(create_sbwall_2146(6144, 880), 3);
    add_background_object(create_sbdeck7_2176(6248, 872), 3);
    add_background_object(create_sbdeck8_2171(7424, 920), 3);
    add_background_object(create_sbwallright_2169(7424, 944), 3);
    add_background_object(create_sbbigwall_2147(7424, 1008), 3);
    add_background_object(create_watervent_725(7488, 952), 3);
    add_background_object(create_watervent_725(7552, 952), 3);
    add_background_object(create_watervent_725(7616, 952), 3);
    add_background_object(create_sbbigwall_2147(7680, 1008), 3);
    add_background_object(create_sbwall_2146(7680, 944), 3);
    add_background_object(create_sbwall_2146(7808, 944), 3);
    add_background_object(create_sbbigwall_2147(7680, 816), 3);
    add_background_object(create_sbwallleft_2172(7680, 816), 3);
    add_background_object(create_sbwallleft_2172(7680, 880), 3);
    add_background_object(create_sbwallleft_2172(7680, 912), 3);
    add_background_object(create_sbbigwall_2147(7680, 688), 3);
    add_background_object(create_sbwallleft_2172(7680, 688), 3);
    add_background_object(create_sbwallleft_2172(7680, 752), 3);
    add_background_object(create_sbwallright_2169(7424, 592), 3);
    add_background_object(create_sbwallright_2169(7424, 528), 3);
    add_background_object(create_sbwallright_2169(7424, 464), 3);
    add_background_object(create_sbwallright_2169(7424, 400), 3);
    add_background_object(create_sbwallright_2169(7424, 336), 3);
    add_background_object(create_sbwallright_2169(7424, 272), 3);
    add_background_object(create_sbwallright_2169(7424, 208), 3);
    add_background_object(create_sbwallright_2169(7424, 144), 3);
    add_background_object(create_sbwallright_2169(7424, 80), 3);
    add_background_object(create_sbwallright_2169(7424, 16), 3);
    add_background_object(create_sbwallright_2169(7424, -16), 3);
    add_background_object(create_sbbigwall_2147(7680, 560), 3);
    add_background_object(create_sbwallleft_2172(7680, 560), 3);
    add_background_object(create_sbwallleft_2172(7680, 624), 3);
    add_background_object(create_sbbigwall_2147(7680, 432), 3);
    add_background_object(create_sbwallleft_2172(7680, 432), 3);
    add_background_object(create_sbwallleft_2172(7680, 496), 3);
    add_background_object(create_sbbigwall2_2145(6784, 800), 3);
    add_background_object(create_sbbigwall2_2145(7168, 368), 3);
    add_background_object(create_sbbigwall2_2145(7168, 112), 3);
    add_background_object(create_sbmetaltube2_2191(7712, 512), 3);
    add_background_object(create_sbmetaltube4_2193(7680, 512), 3);
    add_background_object(create_sbmetaltube2_2191(7744, 512), 3);
    add_background_object(create_sbmetaltube1_2190(7680, 544), 3);
    add_background_object(create_sbmetaltube1_2190(7680, 576), 3);
    add_background_object(create_sbwallleft_2172(7712, 544), 3);
    add_background_object(create_sbmetaltube4_2193(7680, 896), 3);
    add_background_object(create_sbmetaltube2_2191(7744, 896), 3);
    add_background_object(create_sbmetaltube2_2191(7712, 896), 3);
    add_background_object(create_sbmetaltube1_2190(7680, 928), 3);
    add_background_object(create_sbmetaltube1_2190(7680, 944), 3);
    add_background_object(create_sbmetaltube3_2192(7680, 976), 3);
    add_background_object(create_sbmetaltube2_2191(7648, 976), 3);
    add_background_object(create_sbmetaltube2_2191(7616, 976), 3);
    add_background_object(create_sbmetaltube2_2191(7584, 976), 3);
    add_background_object(create_sbmetaltube2_2191(7552, 976), 3);
    add_background_object(create_sbmetaltube2_2191(7520, 976), 3);
    add_background_object(create_sbmetaltube2_2191(7488, 976), 3);
    add_background_object(create_sbmetaltube2_2191(7456, 976), 3);
    add_background_object(create_sbmetaltube4_2193(7824, 480), 3);
    add_background_object(create_sbmetaltube3_2192(7824, 512), 3);
    add_background_object(create_sbwallleft_2172(7856, 480), 3);
    add_background_object(create_sbmetaltube2_2191(7856, 480), 3);
    add_background_object(create_sbwallright_2169(7808, 480), 3);
    add_background_object(create_sbmetaltube2_2191(7792, 512), 3);
    add_background_object(create_sbgreensupportbeam1_2284(7360, 696), 3);
    add_background_object(create_sbgreensupportbeam1_2284(7344, 760), 3);
    add_background_object(create_sbgreensupportbeam1_2284(7328, 824), 3);
    add_background_object(create_sbgreensupportbeam1_2284(6776, 560), 3);
    add_background_object(create_sbgreensupportbeam1_2284(6792, 496), 3);
    add_background_object(create_sbwall_2146(7680, 368), 3);
    add_background_object(create_sbwall_2146(7808, 368), 3);
    add_background_object(create_sbwallleft_2172(7680, 368), 3);
    add_background_object(create_sbbigwall_2147(9216, 880), 3);
    add_background_object(create_ship32_2153(7976, 264), 3);
    add_background_object(create_ship34_2154(8616, 264), 3);
    add_background_object(create_ship35_2155(8072, 264), 3);
    add_background_object(create_ship36_2156(8072, 424), 3);
    add_background_object(create_ship33_2157(7976, 424), 3);
    add_background_object(create_ship37_2158(8616, 424), 3);
    add_background_object(create_quickbackdrop7_2159(8088, 424), 3);
    add_background_object(create_quickbackdrop8_2160(8088, 264), 3);
    add_background_object(create_ship35_2155(8328, 264), 3);
    add_background_object(create_ship36_2156(8328, 424), 3);
    add_background_object(create_quickbackdrop7_2159(8344, 424), 3);
    add_background_object(create_quickbackdrop8_2160(8344, 264), 3);
    add_background_object(create_ship35_2155(8600, 264), 3);
    add_background_object(create_ship36_2156(8600, 424), 3);
    add_background_object(create_blimpcable2_2135(8608, 264), 3);
    add_background_object(create_blimpcable2_2135(8624, 328), 3);
    add_background_object(create_blimpcable2_2135(8640, 392), 3);
    add_background_object(create_blimpcable2_2135(8656, 456), 3);
    add_background_object(create_blimpcable2_2135(8672, 520), 3);
    add_background_object(create_blimpcable2_2135(8080, 264), 3);
    add_background_object(create_blimpcable2_2135(8096, 328), 3);
    add_background_object(create_blimpcable2_2135(8112, 392), 3);
    add_background_object(create_blimpcable2_2135(8128, 456), 3);
    add_background_object(create_blimpcable2_2135(8144, 520), 3);
    add_background_object(create_blimpcable2_2135(8336, 264), 3);
    add_background_object(create_blimpcable2_2135(8352, 328), 3);
    add_background_object(create_blimpcable2_2135(8368, 392), 3);
    add_background_object(create_blimpcable2_2135(8384, 456), 3);
    add_background_object(create_blimpcable2_2135(8400, 520), 3);
    add_background_object(create_blimpcable2_2135(8160, 584), 3);
    add_background_object(create_blimpcable3_2143(8072, 584), 3);
    add_background_object(create_blimpcable2_2135(8416, 584), 3);
    add_background_object(create_blimpcable2_2135(8688, 584), 3);
    add_background_object(create_blimpcable3_2143(8328, 584), 3);
    add_background_object(create_blimpcable3_2143(8600, 584), 3);
    add_background_object(create_sbwallright_2169(7920, 368), 3);
    add_background_object(create_sbwallright_2169(7920, 432), 3);
    add_background_object(create_sbwallright_2169(7920, 496), 3);
    add_background_object(create_sbwallright_2169(7920, 560), 3);
    add_background_object(create_sbmetaltube2_2191(8448, 976), 3);
    add_background_object(create_sbbigwall_2147(8448, 1008), 3);
    add_background_object(create_watervent_725(8512, 952), 3);
    add_background_object(create_watervent_725(8576, 952), 3);
    add_background_object(create_watervent_725(8640, 952), 3);
    add_background_object(create_sbbigwall_2147(8960, 1008), 3);
    add_background_object(create_sbbigwall_2147(8960, 816), 3);
    add_background_object(create_sbwallleft_2172(8960, 912), 3);
    add_background_object(create_sbbigwall_2147(9472, 568), 3);
    add_background_object(create_sbwallleft_2172(9472, 568), 3);
    add_background_object(create_sbwallleft_2172(9472, 632), 3);
    add_background_object(create_sbmetaltube2_2191(9536, 520), 3);
    add_background_object(create_sbwallleft_2172(9504, 536), 3);
    add_background_object(create_sbmetaltube4_2193(8960, 896), 3);
    add_background_object(create_sbmetaltube2_2191(9024, 896), 3);
    add_background_object(create_sbmetaltube2_2191(8992, 896), 3);
    add_background_object(create_sbmetaltube1_2190(8960, 928), 3);
    add_background_object(create_sbmetaltube1_2190(8960, 944), 3);
    add_background_object(create_sbmetaltube3_2192(8960, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8672, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8640, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8608, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8576, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8544, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8512, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8480, 976), 3);
    add_background_object(create_sbmetaltube4_2193(9600, 488), 3);
    add_background_object(create_sbmetaltube3_2192(9600, 520), 3);
    add_background_object(create_sbwallleft_2172(9632, 488), 3);
    add_background_object(create_sbmetaltube2_2191(9632, 488), 3);
    add_background_object(create_sbwallright_2169(9584, 488), 3);
    add_background_object(create_sbmetaltube2_2191(9568, 520), 3);
    add_background_object(create_watervent_725(8448, 952), 3);
    add_background_object(create_sbdeck1_2148(9088, 792), 3);
    add_background_object(create_sbdeck1_2148(8960, 792), 3);
    add_background_object(create_sbbigwall_2147(9472, 184), 3);
    add_background_object(create_sbwallleft_2172(9472, 184), 3);
    add_background_object(create_sbwallleft_2172(9472, 248), 3);
    add_background_object(create_sbbigwall_2147(9472, 56), 3);
    add_background_object(create_sbwallleft_2172(9472, 56), 3);
    add_background_object(create_sbwallleft_2172(9472, 120), 3);
    add_background_object(create_sbmetaltube2_2191(9504, 136), 3);
    add_background_object(create_sbmetaltube4_2193(9472, 136), 3);
    add_background_object(create_sbmetaltube2_2191(9536, 136), 3);
    add_background_object(create_sbmetaltube1_2190(9472, 168), 3);
    add_background_object(create_sbmetaltube1_2190(9472, 200), 3);
    add_background_object(create_sbwallleft_2172(9504, 168), 3);
    add_background_object(create_sbmetaltube4_2193(9616, 104), 3);
    add_background_object(create_sbmetaltube3_2192(9616, 136), 3);
    add_background_object(create_sbwallleft_2172(9648, 104), 3);
    add_background_object(create_sbmetaltube2_2191(9648, 104), 3);
    add_background_object(create_sbwallright_2169(9600, 104), 3);
    add_background_object(create_sbmetaltube2_2191(9584, 136), 3);
    add_background_object(create_sbwall_2146(9472, -8), 3);
    add_background_object(create_sbwall_2146(9600, -8), 3);
    add_background_object(create_sbwallleft_2172(9472, -8), 3);
    add_background_object(create_sbbigwall_2147(8192, 1008), 3);
    add_background_object(create_sbbigwall_2147(7936, 1008), 3);
    add_background_object(create_sbbigwall_2147(7936, 880), 3);
    add_background_object(create_sbbigwall_2147(8192, 880), 3);
    add_background_object(create_sbbigwall_2147(7936, 752), 3);
    add_background_object(create_sbwallslope1_2173(7936, 624), 3);
    add_background_object(create_sbdeck9_2174(7936, 600), 3);
    add_background_object(create_sbwallslope1_2173(8064, 688), 3);
    add_background_object(create_sbwall_2146(7936, 688), 3);
    add_background_object(create_sbdeck9_2174(8064, 664), 3);
    add_background_object(create_sbwallslope1_2173(8192, 752), 3);
    add_background_object(create_sbdeck9_2174(8192, 728), 3);
    add_background_object(create_sbwall_2146(8192, 816), 3);
    add_background_object(create_sbdeck3_2161(8448, 856), 3);
    add_background_object(create_sbwallslope3_2164(8448, 880), 3);
    add_background_object(create_sbwallslope1_2173(8320, 816), 3);
    add_background_object(create_sbdeck9_2174(8320, 792), 3);
    add_background_object(create_sbmetaltube2_2191(8704, 976), 3);
    add_background_object(create_sbbigwall_2147(8704, 1008), 3);
    add_background_object(create_watervent_725(8768, 952), 3);
    add_background_object(create_watervent_725(8832, 952), 3);
    add_background_object(create_watervent_725(8896, 952), 3);
    add_background_object(create_sbmetaltube2_2191(8928, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8896, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8864, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8832, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8800, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8768, 976), 3);
    add_background_object(create_sbmetaltube2_2191(8736, 976), 3);
    add_background_object(create_watervent_725(8704, 952), 3);
    add_background_object(create_sbwallslope4_2187(8664, 880), 3);
    add_background_object(create_sbdeck4_2188(8640, 856), 3);
    add_background_object(create_sbdeck5_2162(8832, 792), 3);
    add_background_object(create_sbwallslope6_2165(8832, 816), 3);
    add_background_object(create_sbdeck6_2151(8576, 888), 3);
    add_background_object(create_blimpcable3_2143(8328, 648), 3);
    add_background_object(create_blimpcable3_2143(8328, 712), 3);
    add_background_object(create_blimpcable2_2135(8432, 648), 3);
    add_background_object(create_blimpcable2_2135(8448, 712), 3);
    add_background_object(create_blimpcable2_2135(8464, 776), 3);
    add_background_object(create_blimpcable3_2143(8600, 648), 3);
    add_background_object(create_blimpcable3_2143(8600, 712), 3);
    add_background_object(create_blimpcable3_2143(8600, 776), 3);
    add_background_object(create_blimpcable2_2135(8704, 648), 3);
    add_background_object(create_blimpcable2_2135(8720, 712), 3);
    add_background_object(create_blimpcable2_2135(8736, 776), 3);
    add_background_object(create_sbwall_2146(9088, 944), 3);
    add_background_object(create_sbbigwall_2147(9472, 880), 3);
    add_background_object(create_sbwall_2146(9216, 1008), 3);
    add_background_object(create_sbceiling1_2181(9216, 1072), 3);
    add_background_object(create_sbceiling1_2181(9344, 1008), 3);
    add_background_object(create_sbdeck1_2148(9472, 792), 3);
    add_background_object(create_sbdeck1_2148(9600, 856), 3);
    add_background_object(create_sbmetaltube2_2191(9408, 568), 3);
    add_background_object(create_sbmetaltube2_2191(9344, 568), 3);
    add_background_object(create_sbmetaltube2_2191(9376, 568), 3);
    add_background_object(create_sbmetaltube2_2191(9280, 568), 3);
    add_background_object(create_sbmetaltube2_2191(9312, 568), 3);
    add_background_object(create_sbmetaltube2_2191(9216, 568), 3);
    add_background_object(create_sbmetaltube2_2191(9248, 568), 3);
    add_background_object(create_sbdeck1_2148(9600, 416), 3);
    add_background_object(create_sbmetaltube1_2190(9472, 552), 3);
    add_background_object(create_sbdeck4_2188(9216, 512), 3);
    add_background_object(create_sbdeck10_2183(9344, 448), 3);
    add_background_object(create_sbdeck5_2162(9472, 416), 3);
    add_background_object(create_sbwallslope6_2165(9472, 440), 3);
    add_background_object(create_sbwallslope2_2182(9344, 472), 3);
    add_background_object(create_sbwallslope4_2187(9240, 536), 3);
    add_background_object(create_sbwallright_2169(9456, 520), 3);
    add_background_object(create_sbmetaltube2_2191(9440, 568), 3);
    add_background_object(create_sbmetaltube3_2192(9472, 568), 3);
    add_background_object(create_sbmetaltube4_2193(9472, 520), 3);
    add_background_object(create_sbmetaltube2_2191(9504, 520), 3);
    add_background_object(create_sbbigwall_2147(9728, 880), 3);
    add_background_object(create_sbbigwall_2147(9984, 880), 3);
    add_background_object(create_sbdeck1_2148(10112, 856), 3);
    add_background_object(create_sbbigwall_2147(10240, 880), 3);
    add_background_object(create_sbdeck1_2148(10240, 856), 3);
    add_background_object(create_sbdeck1_2148(10368, 856), 3);
    add_background_object(create_sbladder_2177(9176, 544), 3);
    add_background_object(create_sbladder_2177(9176, 576), 3);
    add_background_object(create_sbladder_2177(9176, 608), 3);
    add_background_object(create_sbladder_2177(9176, 640), 3);
    add_background_object(create_sbladder_2177(9176, 672), 3);
    add_background_object(create_sbdeck1walkthru_2170(9344, 672), 3);
    add_background_object(create_sbdeck1walkthru_2170(9216, 672), 3);
    add_background_object(create_sbwallright_2169(10240, 568), 3);
    add_background_object(create_sbwallright_2169(10240, 632), 3);
    add_background_object(create_sbwallleft_2172(10352, 560), 3);
    add_background_object(create_sbwall_2146(10368, 560), 3);
    add_background_object(create_sbwallright_2169(9600, 816), 3);
    add_background_object(create_sbdeck1_2148(9856, 416), 3);
    add_background_object(create_sbdeck1_2148(9984, 416), 3);
    add_background_object(create_sbdeck1_2148(10112, 416), 3);
    add_background_object(create_sbdeck8_2171(10240, 416), 3);
    add_background_object(create_sbbigwall_2147(9728, 184), 3);
    add_background_object(create_sbbigwall_2147(9728, 56), 3);
    add_background_object(create_sbwall_2146(9728, -8), 3);
    add_background_object(create_sbwall_2146(9856, -8), 3);
    add_background_object(create_sbbigwall_2147(9984, 184), 3);
    add_background_object(create_sbbigwall_2147(9984, 56), 3);
    add_background_object(create_sbwall_2146(9984, -8), 3);
    add_background_object(create_sbwall_2146(10368, -8), 3);
    add_background_object(create_sbdeck6_2151(4144, 344), 3);
    add_background_object(create_sbdeck8_2171(4208, 344), 3);
    add_background_object(create_sbwallright_2169(4208, 496), 3);
    add_background_object(create_sbwallright_2169(4208, 432), 3);
    add_background_object(create_sbwallright_2169(4208, 368), 3);
    add_background_object(create_sbwallleft_2172(4336, 368), 3);
    add_background_object(create_sbwallleft_2172(4336, 432), 3);
    add_background_object(create_sbwallleft_2172(4336, 496), 3);
    add_background_object(create_sbwallleft_2172(4336, 560), 3);
    add_background_object(create_sbwallright_2169(4208, 560), 3);
    add_background_object(create_sbinnercurve2_2233(4224, 816), 3);
    add_background_object(create_sbinnercurve1_2180(4352, 816), 3);
    add_background_object(create_sboutercurve1_2255(4480, 752), 3);
    add_background_object(create_sbwall_2146(4480, 816), 3);
    add_background_object(create_sbwall_2146(4480, 880), 3);
    add_background_object(create_sboutercurve2_2256(4544, 752), 3);
    add_background_object(create_sbinnercurve2_2233(4608, 816), 3);
    add_background_object(create_sbinnercurve1_2180(4736, 816), 3);
    add_background_object(create_sbmetaltube1_2190(4864, 888), 3);
    add_background_object(create_sbmetaltube1_2190(4864, 856), 3);
    add_background_object(create_sbmetaltube1_2190(4864, 824), 3);
    add_background_object(create_sbmetaltube1_2190(4864, 792), 3);
    add_background_object(create_sbdeck7_2176(10344, 536), 3);
    add_background_object(create_sbmetaltube2_2191(10368, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10400, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10432, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10464, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10496, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10528, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10560, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10592, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10624, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10656, 528), 3);
    add_background_object(create_sbmetaltube2_2191(10688, 528), 3);
    add_background_object(create_sbmetaltube3_2192(10720, 528), 3);
    add_background_object(create_sbmetaltube1_2190(10720, 496), 3);
    add_background_object(create_sbmetaltube1_2190(10720, 464), 3);
    add_background_object(create_sbmetaltube1_2190(10720, 432), 3);
    add_background_object(create_sbmetaltube1_2190(10720, 400), 3);
    add_background_object(create_sbmetaltube1_2190(10720, 368), 3);
    add_background_object(create_sbmetaltube1_2190(10592, 336), 3);
    add_background_object(create_sbmetaltube1_2190(10592, 304), 3);
    add_background_object(create_sbmetaltube4_2193(10592, 208), 3);
    add_background_object(create_sbmetaltube2_2191(10624, 208), 3);
    add_background_object(create_sbmetaltube2_2191(10656, 208), 3);
    add_background_object(create_sbmetaltube2_2191(10752, 208), 3);
    add_background_object(create_sbdeck8_2171(2560, 792), 3);
    add_background_object(create_sbdeck7_2176(2664, 792), 3);
    add_background_object(create_sbwall_2146(2688, 560), 3);
    add_background_object(create_sbwallright_2169(2560, 624), 3);
    add_background_object(create_sbwall_2146(2304, 496), 3);
    add_background_object(create_sbmetaltube2_2191(10784, 208), 3);
    add_background_object(create_sbmetaltube2_2191(10816, 208), 3);
    add_background_object(create_sbmetaltube2_2191(10848, 208), 3);
    add_background_object(create_sbbigwall_2147(10752, 368), 3);
    add_background_object(create_sbbigwall_2147(10752, 496), 3);
    add_background_object(create_sbbigwall_2147(9984, 440), 3);
    add_background_object(create_sbwallright_2169(10240, 440), 3);
    add_background_object(create_sbwallright_2169(10240, 504), 3);
    add_background_object(create_sbwallright_2169(10240, 184), 3);
    add_background_object(create_sbwallright_2169(10240, 248), 3);
    add_background_object(create_sbwallright_2169(10240, 56), 3);
    add_background_object(create_sbwallright_2169(10240, 120), 3);
    add_background_object(create_sbwall_2146(9344, 816), 3);
    add_background_object(create_sbdeck1_2148(9216, 792), 3);
    add_background_object(create_sbdeck1_2148(9344, 792), 3);
    add_background_object(create_sbwall_2146(9472, 816), 3);
    add_background_object(create_sbceiling2_2149(2816, 1520), 3);
    add_background_object(create_sbwall_2146(2816, 1456), 3);
    add_background_object(create_shipthrusterend_2086(2704, 1264), 3);
    add_background_object(create_shipthrusterend_2086(2704, 1136), 3);
    add_background_object(create_shipthrusterend_2086(2704, 1392), 3);
    add_background_object(create_sbwallleft_2172(2800, 1072), 3);
    add_background_object(create_sbwallleft_2172(2800, 1136), 3);
    add_background_object(create_sbwallleft_2172(2800, 1200), 3);
    add_background_object(create_sbwallleft_2172(2800, 1264), 3);
    add_background_object(create_sbwallleft_2172(2800, 1328), 3);
    add_background_object(create_sbwallleft_2172(2800, 1392), 3);
    add_background_object(create_sbwallleft_2172(2800, 1456), 3);
    add_background_object(create_sbceiling2_2149(2688, 1072), 3);
    add_background_object(create_sbbigwall_2147(4096, 1328), 3);
    add_background_object(create_sbwallleft_2172(4096, 1328), 3);
    add_background_object(create_sbwallleft_2172(4096, 1392), 3);
    add_background_object(create_sbbigwall_2147(4096, 1072), 3);
    add_background_object(create_sbwallleft_2172(4096, 1072), 3);
    add_background_object(create_sbwallleft_2172(4096, 1136), 3);
    add_background_object(create_sbbigwall_2147(4352, 1072), 3);
    add_background_object(create_sbbigwall2_2145(4224, 1200), 3);
    add_background_object(create_sbwall_2146(4224, 1456), 3);
    add_background_object(create_sbwall_2146(4352, 1328), 3);
    add_background_object(create_sbwall_2146(4352, 1392), 3);
    add_background_object(create_sbwall_2146(4480, 1328), 3);
    add_background_object(create_sbbigwall_2147(4480, 1200), 3);
    add_background_object(create_sbbigwall_2147(4608, 1072), 3);
    add_background_object(create_sbwall_2146(4736, 1200), 3);
    add_background_object(create_sbwall_2146(4864, 1072), 3);
    add_background_object(create_sbwall_2146(4864, 1136), 3);
    add_background_object(create_sbwall_2146(4992, 1072), 3);
    add_background_object(create_sbceiling1_2181(4224, 1520), 3);
    add_background_object(create_sbceiling1_2181(4352, 1456), 3);
    add_background_object(create_sbceiling1_2181(4480, 1392), 3);
    add_background_object(create_sbceiling1_2181(4608, 1328), 3);
    add_background_object(create_sbceiling1_2181(4736, 1264), 3);
    add_background_object(create_sbceiling1_2181(4864, 1200), 3);
    add_background_object(create_sbceiling1_2181(4992, 1136), 3);
    add_background_object(create_sbceiling1_2181(5120, 1072), 3);
    add_background_object(create_ship28_2075(6944, 1152), 3);
    add_background_object(create_ship28_2075(6984, 1136), 3);
    add_background_object(create_shipbottomsail_2074(6272, 1240), 3);
    add_background_object(create_shipbottomsail_2074(6568, 1200), 3);
    add_background_object(create_shipbottomsail_2074(6648, 1176), 3);
    add_background_object(create_shipbottomsail_2074(6336, 1216), 3);
    add_background_object(create_shipbottomsail_2074(6080, 1216), 3);
    add_background_object(create_shipbottomsail_2074(6392, 1176), 3);
    add_background_object(create_ship26_2082(6144, 1304), 3);
    add_background_object(create_ship26_2082(6208, 1296), 3);
    add_background_object(create_ship26_2082(6272, 1288), 3);
    add_background_object(create_ship26_2082(6336, 1280), 3);
    add_background_object(create_ship26_2082(6400, 1272), 3);
    add_background_object(create_ship26_2082(6464, 1264), 3);
    add_background_object(create_ship26_2082(6528, 1256), 3);
    add_background_object(create_ship28_2075(6824, 1200), 3);
    add_background_object(create_ship27_2083(6592, 1240), 3);
    add_background_object(create_ship28_2075(6864, 1184), 3);
    add_background_object(create_ship28_2075(6904, 1168), 3);
    add_background_object(create_ship26_2082(6080, 1312), 3);
    add_background_object(create_shipthrusterfront_2085(6336, 1248), 3);
    add_background_object(create_shipthrusterend_2086(5952, 1248), 3);
    add_background_object(create_shipthrustermid_2088(6048, 1248), 3);
    add_background_object(create_shipbottomsailshadow_2089(6280, 1136), 3);
    add_background_object(create_shipthrusterend_2086(5952, 1080), 3);
    add_background_object(create_shipthrustermid_2088(6048, 1080), 3);
    add_background_object(create_shipthrusterfront_2085(6336, 1080), 3);
    add_background_object(create_shipbottomsail_2074(6336, 1176), 3);
    add_background_object(create_shipbottomsail_2074(6080, 1176), 3);
    add_background_object(create_ship29_2084(7048, 1136), 3);
    add_background_object(create_sbwall_2146(9856, 752), 3);
    add_background_object(create_sbwall_2146(9856, 816), 3);
    add_background_object(create_sbwall_2146(9856, 688), 3);
    add_background_object(create_sbwallright_2169(9728, 568), 3);
    add_background_object(create_sbwallright_2169(9728, 632), 3);
    add_background_object(create_sbwallleft_2172(10224, 568), 3);
    add_background_object(create_sbwallleft_2172(10224, 632), 3);
    add_background_object(create_sbwallleft_2172(9856, 688), 3);
    add_background_object(create_sbdeck8_2171(9600, 792), 3);
    add_background_object(create_sbsmallwall_2144(9728, 504), 3);
    add_background_object(create_sbwall_2146(9856, 504), 3);
    add_background_object(create_sbwall_2146(9856, 440), 3);
    add_background_object(create_sbsmallwall_2144(9728, 440), 3);
    add_background_object(create_sbwallleft_2172(9856, 752), 3);
    add_background_object(create_sbwallleft_2172(9856, 816), 3);
    add_background_object(create_sbdeck1walkthru_2170(9728, 416), 3);
    add_background_object(create_sbdeck6_2151(9728, 416), 3);
    add_background_object(create_sbdeck6_2151(9728, 856), 3);
    add_background_object(create_sbdeck8walkthru_2168(9792, 856), 3);
    add_background_object(create_sbdeck7walkthru_2167(9832, 856), 3);
    add_background_object(create_sbwall_2146(9984, 752), 3);
    add_background_object(create_sbwall_2146(9984, 816), 3);
    add_background_object(create_sbwall_2146(9984, 688), 3);
    add_background_object(create_sbwallright_2169(10096, 688), 3);
    add_background_object(create_sbwallright_2169(10096, 752), 3);
    add_background_object(create_sbwallright_2169(10096, 816), 3);
    add_background_object(create_sbmetaltube2_2191(10688, 208), 3);
    add_background_object(create_sbmetaltube2_2191(10720, 208), 3);
    add_background_object(create_sbhangingwheel1_2297(10472, 136), 3);
    add_background_object(create_sbwall_2146(10240, -8), 3);
    add_background_object(create_sbwall_2146(10112, -8), 3);
    add_background_object(create_sbwall_2146(10624, -8), 3);
    add_background_object(create_sbwall_2146(10496, -8), 3);
    add_background_object(create_sbbigwall_2147(10624, 240), 3);
    add_background_object(create_sbmetaltube1_2190(10592, 272), 3);
    add_background_object(create_sbmetaltube1_2190(10592, 240), 3);
    add_background_object(create_sbwallright_2169(10864, 240), 3);
    add_background_object(create_sbwallright_2169(10864, 304), 3);
    add_background_object(create_sbwallright_2169(10992, 368), 3);
    add_background_object(create_sbwallright_2169(10992, 432), 3);
    add_background_object(create_sbbigwall_2147(10752, 624), 3);
    add_background_object(create_blimpcable1_2070(8584, 264), 3);
    add_background_object(create_blimpcable1_2070(8568, 328), 3);
    add_background_object(create_blimpcable1_2070(8552, 392), 3);
    add_background_object(create_blimpcable1_2070(8536, 456), 3);
    add_background_object(create_blimpcable1_2070(8520, 520), 3);
    add_background_object(create_blimpcable1_2070(8312, 264), 3);
    add_background_object(create_blimpcable1_2070(8296, 328), 3);
    add_background_object(create_blimpcable1_2070(8280, 392), 3);
    add_background_object(create_blimpcable1_2070(8264, 456), 3);
    add_background_object(create_blimpcable1_2070(8248, 520), 3);
    add_background_object(create_sbrotorbladetunnel_2178(10880, 280), 3);
    add_background_object(create_sbmetaltube2_2191(10880, 208), 3);
    add_background_object(create_sbmetaltube2_2191(10912, 208), 3);
    add_background_object(create_sbmetaltube1_2190(11008, 208), 3);
    add_background_object(create_sbmetaltube1_2190(11008, 240), 3);
    add_background_object(create_sbmetaltube1_2190(11008, 272), 3);
    add_background_object(create_sbmetaltube1_2190(11008, 304), 3);
    add_background_object(create_sbmetaltube1_2190(11008, 336), 3);
    add_background_object(create_sbmetaltube2_2191(10944, 208), 3);
    add_background_object(create_sbmetaltube2_2191(10976, 208), 3);
    add_background_object(create_sbrotorbladetunnel_2178(10944, 280), 3);
    add_background_object(create_sbmetaltube1_2190(11008, 368), 3);
    add_background_object(create_sbbigwall_2147(11520, -8), 3);
    add_background_object(create_sbbigwall_2147(11008, 560), 3);
    add_background_object(create_sbwall_2146(11008, 496), 3);
    add_background_object(create_sbwall_2146(11136, 496), 3);
    add_background_object(create_sbdeck1_2148(11136, 496), 3);
    add_background_object(create_sbdeck1_2148(11008, 496), 3);
    add_background_object(create_sbdeck7_2176(10984, 496), 3);
    add_background_object(create_sbwall_2146(11264, 496), 3);
    add_background_object(create_sbwall_2146(11392, 496), 3);
    add_background_object(create_sbdeck1_2148(11392, 496), 3);
    add_background_object(create_sbdeck1_2148(11264, 496), 3);
    add_background_object(create_sbmetaltube2_2191(11008, 400), 3);
    add_background_object(create_sbmetaltube2_2191(11040, 400), 3);
    add_background_object(create_sbmetaltube2_2191(11072, 400), 3);
    add_background_object(create_sbmetaltube2_2191(11104, 400), 3);
    add_background_object(create_sbmetaltube2_2191(11136, 400), 3);
    add_background_object(create_sbmetaltube2_2191(11168, 400), 3);
    add_background_object(create_sbmetaltube2_2191(11200, 400), 3);
    add_background_object(create_sbmetaltube1_2190(11232, 304), 3);
    add_background_object(create_sbmetaltube1_2190(11232, 336), 3);
    add_background_object(create_sbmetaltube1_2190(11232, 368), 3);
    add_background_object(create_sbmetaltube1_2190(11232, 400), 3);
    add_background_object(create_sbmetaltube1_2190(11232, 432), 3);
    add_background_object(create_sbmetaltube1_2190(11232, 464), 3);
    add_background_object(create_sbbigwall_2147(11264, -8), 3);
    add_background_object(create_sbmetaltube4_2193(11232, 272), 3);
    add_background_object(create_sbmetaltube2_2191(11264, 272), 3);
    add_background_object(create_sbwall_2146(11520, 496), 3);
    add_background_object(create_sbwall_2146(11648, 496), 3);
    add_background_object(create_sbdeck1_2148(11648, 496), 3);
    add_background_object(create_sbdeck1_2148(11520, 496), 3);
    add_background_object(create_sbwallright_2169(10640, 240), 3);
    add_background_object(create_sbwallleft_2172(10752, 368), 3);
    add_background_object(create_sbwallleft_2172(10752, 432), 3);
    add_background_object(create_sbwallleft_2172(10752, 496), 3);
    add_background_object(create_sbwallleft_2172(10720, 240), 3);
    add_background_object(create_sbwall_2146(10496, 880), 3);
    add_background_object(create_sbceiling1_2181(10496, 944), 3);
    add_background_object(create_sbmetaltube4_2193(11200, 368), 3);
    add_background_object(create_sbmetaltube1_2190(11200, 432), 3);
    add_background_object(create_sbmetaltube1_2190(11200, 464), 3);
    add_background_object(create_sbceiling2_2149(10624, 56), 3);
    add_background_object(create_sbbigwall_2147(11008, -8), 3);
    add_background_object(create_sbbigwall_2147(10752, -8), 3);
    add_background_object(create_sbbigwall_2147(11776, 56), 3);
    add_background_object(create_sbbigwall_2147(11776, -72), 3);
    add_background_object(create_sbceiling2_2149(11520, 120), 3);
    add_background_object(create_sbwall_2146(11648, 120), 3);
    add_background_object(create_sbwall_2146(12032, 496), 3);
    add_background_object(create_sbdeck1_2148(12032, 496), 3);
    add_background_object(create_sbwall_2146(12288, 496), 3);
    add_background_object(create_sbwall_2146(12160, 496), 3);
    add_background_object(create_sbdeck1_2148(12160, 496), 3);
    add_background_object(create_sbwall_2146(12288, 432), 3);
    add_background_object(create_sbwallleft_2172(12272, 432), 3);
    add_background_object(create_sbdeck8_2171(12288, 496), 3);
    add_background_object(create_sbwallleft_2172(12272, 304), 3);
    add_background_object(create_sbwall_2146(12288, 368), 3);
    add_background_object(create_sbwallleft_2172(12272, 368), 3);
    add_background_object(create_sbmetaltube2_2191(12088, 272), 3);
    add_background_object(create_sbmetaltube2_2191(12120, 272), 3);
    add_background_object(create_sbmetaltube2_2191(12152, 272), 3);
    add_background_object(create_sbmetaltube2_2191(12184, 272), 3);
    add_background_object(create_sbmetaltube2_2191(12216, 272), 3);
    add_background_object(create_sbmetaltube2_2191(12248, 272), 3);
    add_background_object(create_sbmetaltube2_2191(12280, 272), 3);
    add_background_object(create_sbmetaltube2_2191(12312, 272), 3);
    add_background_object(create_sbmetaltube1_2190(12288, 304), 3);
    add_background_object(create_sbmetaltube1_2190(12288, 336), 3);
    add_background_object(create_sbmetaltube1_2190(12320, 304), 3);
    add_background_object(create_sbmetaltube1_2190(12320, 336), 3);
    add_background_object(create_sbmetaltube1_2190(12352, 304), 3);
    add_background_object(create_sbmetaltube1_2190(12352, 336), 3);
    add_background_object(create_sbmetaltube1_2190(12384, 336), 3);
    add_background_object(create_sbmetaltube1_2190(12384, 368), 3);
    add_background_object(create_sbmetaltube1_2190(12384, 400), 3);
    add_background_object(create_sbmetaltube1_2190(12384, 432), 3);
    add_background_object(create_sbmetaltube1_2190(12384, 464), 3);
    add_background_object(create_sbmetaltube1_2190(12384, 496), 3);
    add_background_object(create_sbmetaltube1_2190(12384, 528), 3);
    add_background_object(create_sbmetaltube3_2192(12384, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12224, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12256, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12288, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12352, 560), 3);
    add_background_object(create_sbwallright_2169(12368, 368), 3);
    add_background_object(create_sbwallright_2169(12368, 432), 3);
    add_background_object(create_sbwallright_2169(12368, 496), 3);
    add_background_object(create_sbbigwall_2147(12032, -8), 3);
    add_background_object(create_sbwallright_2169(12032, 120), 3);
    add_background_object(create_sbbigwall_2147(12288, -8), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 408), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 440), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 472), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 504), 3);
    add_background_object(create_sbbigwall_2147(12544, -8), 3);
    add_background_object(create_sbbigwall_2147(12928, 120), 3);
    add_background_object(create_sbbigwall_2147(12544, 248), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 376), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 344), 3);
    add_background_object(create_sbwallleft_2172(12576, 312), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 312), 3);
    add_background_object(create_sbwallleft_2172(12544, 248), 3);
    add_background_object(create_sbwallleft_2172(12544, 184), 3);
    add_background_object(create_sbceiling2_2149(12416, 120), 3);
    add_background_object(create_sbwallleft_2172(12576, 376), 3);
    add_background_object(create_sbwallleft_2172(12576, 440), 3);
    add_background_object(create_sbwallleft_2172(12576, 504), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 696), 3);
    add_background_object(create_sbwallleft_2172(12576, 688), 3);
    add_background_object(create_sbwallleft_2172(12544, 760), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 728), 3);
    add_background_object(create_sbwall_2146(12288, 824), 3);
    add_background_object(create_sbdeck1_2148(12288, 800), 3);
    add_background_object(create_sbbigwall_2147(12032, 824), 3);
    add_background_object(create_sbdeck1_2148(12160, 800), 3);
    add_background_object(create_sbdeck1_2148(12032, 800), 3);
    add_background_object(create_sbmetaltube2_2191(12064, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12096, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12128, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12160, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12192, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12032, 560), 3);
    add_background_object(create_sbmetaltube1_2190(12320, 560), 3);
    add_background_object(create_sbmetaltube1_2190(12320, 592), 3);
    add_background_object(create_sbmetaltube1_2190(12320, 800), 3);
    add_background_object(create_sbmetaltube1_2190(12320, 824), 3);
    add_background_object(create_sbmetaltube1_2190(12320, 856), 3);
    add_background_object(create_sbmetaltube2_2191(11968, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11808, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11840, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11872, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11904, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11936, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11776, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11744, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11680, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11712, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11520, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11552, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11584, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11616, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11648, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11488, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11328, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11360, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11392, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11424, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11456, 560), 3);
    add_background_object(create_sbmetaltube2_2191(11296, 560), 3);
    add_background_object(create_sbmetaltube4_2193(11264, 560), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 592), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 624), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 656), 3);
    add_background_object(create_sbwallright_2169(11248, 560), 3);
    add_background_object(create_sbwallright_2169(11248, 624), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 800), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 824), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 856), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 888), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 920), 3);
    add_background_object(create_sbwallleft_2172(12032, 888), 3);
    add_background_object(create_sbwallleft_2172(12032, 824), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 816), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 848), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 880), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 912), 3);
    add_background_object(create_sbwallright_2169(11248, 816), 3);
    add_background_object(create_sbwallright_2169(11248, 880), 3);
    add_background_object(create_sbwall_2146(10624, 880), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 952), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 984), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 1144), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 1176), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 944), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 976), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 1008), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 1040), 3);
    add_background_object(create_sbwallright_2169(11248, 944), 3);
    add_background_object(create_sbwallright_2169(11248, 1008), 3);
    add_background_object(create_sbbigwall_2147(11008, 1072), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 1072), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 1104), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 1136), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 1168), 3);
    add_background_object(create_sbwallright_2169(11248, 1072), 3);
    add_background_object(create_sbwallright_2169(11248, 1136), 3);
    add_background_object(create_sbdeck6_2151(11808, 1176), 3);
    add_background_object(create_sbdeck6_2151(11616, 1176), 3);
    add_background_object(create_sbdeck6_2151(11424, 1176), 3);
    add_background_object(create_sbbigwall_2147(11008, 1200), 3);
    add_background_object(create_sbbigwall_2147(11264, 1264), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 1200), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 1232), 3);
    add_background_object(create_sbwallright_2169(11248, 1200), 3);
    add_background_object(create_sbsmallwall_2144(11424, 1200), 3);
    add_background_object(create_sbsmallwall_2144(11616, 1200), 3);
    add_background_object(create_sbbigwall_2147(11520, 1264), 3);
    add_background_object(create_sbwall_2146(11136, 1328), 3);
    add_background_object(create_sbsmallwall_2144(11808, 1200), 3);
    add_background_object(create_sbbigwall_2147(11776, 1264), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 1200), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 1232), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 560), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 592), 3);
    add_background_object(create_sbdeck1_2148(11904, 496), 3);
    add_background_object(create_sbwall_2146(11776, 496), 3);
    add_background_object(create_sbdeck1_2148(11768, 496), 3);
    add_background_object(create_sbmetaltube1_2190(11824, 600), 3);
    add_background_object(create_sbmetaltube1_2190(11440, 600), 3);
    add_background_object(create_sbmetaltube1_2190(11440, 568), 3);
    add_background_object(create_sbmetaltube1_2190(11824, 568), 3);
    add_background_object(create_sbmetaltube1_2190(11824, 560), 3);
    add_background_object(create_sbmetaltube1_2190(11440, 560), 3);
    add_background_object(create_sbmetaltube1_2190(12000, 600), 3);
    add_background_object(create_sbwallleft_2172(12032, 952), 3);
    add_background_object(create_sbwall_2146(12160, 952), 3);
    add_background_object(create_sbwall_2146(12032, 1200), 3);
    add_background_object(create_sbwall_2146(12160, 1200), 3);
    add_background_object(create_sbdeck1_2148(12032, 1176), 3);
    add_background_object(create_sbwall_2146(12288, 888), 3);
    add_background_object(create_sbceiling1_2181(12288, 952), 3);
    add_background_object(create_sbceiling1_2181(12416, 888), 3);
    add_background_object(create_sbdeck4_2188(12160, 1144), 3);
    add_background_object(create_sbwallslope4_2187(12184, 1168), 3);
    add_background_object(create_sbwallslope2_2182(12288, 1104), 3);
    add_background_object(create_sbdeck10_2183(12288, 1080), 3);
    add_background_object(create_sbceiling1_2181(12160, 1328), 3);
    add_background_object(create_sbwallslope2_2182(12416, 1040), 3);
    add_background_object(create_sbdeck10_2183(12416, 1016), 3);
    add_background_object(create_sbwall_2146(12416, 1104), 3);
    add_background_object(create_sbwall_2146(12032, 1264), 3);
    add_background_object(create_sbwall_2146(12032, 1328), 3);
    add_background_object(create_sbceiling1_2181(12288, 1264), 3);
    add_background_object(create_sbwall_2146(12160, 1264), 3);
    add_background_object(create_sbwall_2146(12288, 1200), 3);
    add_background_object(create_sbceiling1_2181(12416, 1200), 3);
    add_background_object(create_sbwall_2146(12416, 1136), 3);
    add_background_object(create_sbwall_2146(12544, 1040), 3);
    add_background_object(create_sbwallslope6_2165(12544, 1008), 3);
    add_background_object(create_sbceiling1_2181(12544, 1136), 3);
    add_background_object(create_sbwall_2146(12544, 1072), 3);
    add_background_object(create_sbwall_2146(13056, 1008), 3);
    add_background_object(create_sbwall_2146(12928, 1008), 3);
    add_background_object(create_shipthrusterend_2086(10912, 1152), 3);
    add_background_object(create_shipthrusterend_2086(10912, 1024), 3);
    add_background_object(create_shipthrusterend_2086(10912, 1280), 3);
    add_background_object(create_sbwallleft_2172(11008, 944), 3);
    add_background_object(create_sbwallleft_2172(11008, 1008), 3);
    add_background_object(create_sbwallleft_2172(11008, 1072), 3);
    add_background_object(create_sbwallleft_2172(11008, 1136), 3);
    add_background_object(create_sbwallleft_2172(11008, 1200), 3);
    add_background_object(create_sbwallleft_2172(11008, 1264), 3);
    add_background_object(create_sbwall_2146(11008, 1328), 3);
    add_background_object(create_sbwallleft_2172(11008, 1328), 3);
    add_background_object(create_sbceiling2_2149(10896, 944), 3);
    add_background_object(create_sbdeck1_2148(12800, 984), 3);
    add_background_object(create_sbbigwall_2147(12544, 560), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 568), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 600), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 632), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 664), 3);
    add_background_object(create_ship32_2153(8728, 88), 3);
    add_background_object(create_ship34_2154(9368, 88), 3);
    add_background_object(create_ship35_2155(8824, 88), 3);
    add_background_object(create_ship36_2156(8824, 248), 3);
    add_background_object(create_ship33_2157(8728, 248), 3);
    add_background_object(create_ship37_2158(9368, 248), 3);
    add_background_object(create_quickbackdrop7_2159(8840, 248), 3);
    add_background_object(create_quickbackdrop8_2160(8840, 88), 3);
    add_background_object(create_ship35_2155(9080, 88), 3);
    add_background_object(create_ship36_2156(9080, 248), 3);
    add_background_object(create_quickbackdrop7_2159(9096, 248), 3);
    add_background_object(create_quickbackdrop8_2160(9096, 88), 3);
    add_background_object(create_ship35_2155(9352, 88), 3);
    add_background_object(create_ship36_2156(9352, 248), 3);
    add_background_object(create_blimpcable2_2135(9360, 88), 3);
    add_background_object(create_blimpcable2_2135(9376, 152), 3);
    add_background_object(create_blimpcable2_2135(9392, 216), 3);
    add_background_object(create_blimpcable2_2135(9408, 280), 3);
    add_background_object(create_blimpcable2_2135(9424, 344), 3);
    add_background_object(create_blimpcable2_2135(8832, 88), 3);
    add_background_object(create_blimpcable2_2135(8848, 152), 3);
    add_background_object(create_blimpcable2_2135(8864, 216), 3);
    add_background_object(create_blimpcable2_2135(8880, 280), 3);
    add_background_object(create_blimpcable2_2135(8896, 344), 3);
    add_background_object(create_blimpcable2_2135(9088, 88), 3);
    add_background_object(create_blimpcable2_2135(9104, 152), 3);
    add_background_object(create_blimpcable2_2135(9120, 216), 3);
    add_background_object(create_blimpcable2_2135(9136, 280), 3);
    add_background_object(create_blimpcable2_2135(9152, 344), 3);
    add_background_object(create_blimpcable2_2135(8912, 408), 3);
    add_background_object(create_blimpcable3_2143(8824, 408), 3);
    add_background_object(create_blimpcable2_2135(9168, 408), 3);
    add_background_object(create_blimpcable3_2143(9080, 408), 3);
    add_background_object(create_blimpcable3_2143(9352, 408), 3);
    add_background_object(create_blimpcable2_2135(8928, 472), 3);
    add_background_object(create_blimpcable2_2135(8944, 536), 3);
    add_background_object(create_blimpcable2_2135(8960, 600), 3);
    add_background_object(create_blimpcable2_2135(8976, 664), 3);
    add_background_object(create_blimpcable2_2135(8992, 728), 3);
    add_background_object(create_blimpcable2_2135(9000, 760), 3);
    add_background_object(create_sbdeck7_2176(9000, 824), 3);
    add_background_object(create_sbdeck8_2171(9024, 824), 3);
    add_background_object(create_blimpcable3_2143(9080, 472), 3);
    add_background_object(create_blimpcable3_2143(9080, 536), 3);
    add_background_object(create_blimpcable3_2143(9080, 600), 3);
    add_background_object(create_blimpcable3_2143(9080, 664), 3);
    add_background_object(create_blimpcable3_2143(9080, 728), 3);
    add_background_object(create_blimpcable2_2135(9184, 472), 3);
    add_background_object(create_blimpcable3_2143(8824, 472), 3);
    add_background_object(create_blimpcable3_2143(8824, 536), 3);
    add_background_object(create_blimpcable3_2143(8824, 600), 3);
    add_background_object(create_blimpcable3_2143(8824, 664), 3);
    add_background_object(create_blimpcable3_2143(8824, 728), 3);
    add_background_object(create_blimpcable1_2070(8808, 88), 3);
    add_background_object(create_blimpcable1_2070(8792, 152), 3);
    add_background_object(create_blimpcable1_2070(8776, 216), 3);
    add_background_object(create_blimpcable1_2070(8760, 280), 3);
    add_background_object(create_blimpcable1_2070(8744, 344), 3);
    add_background_object(create_blimpcable1_2070(8728, 408), 3);
    add_background_object(create_blimpcable1_2070(8712, 472), 3);
    add_background_object(create_blimpcable1_2070(8664, 664), 3);
    add_background_object(create_blimpcable1_2070(8648, 728), 3);
    add_background_object(create_blimpcable1_2070(8632, 792), 3);
    add_background_object(create_sbwall_2146(13312, 816), 3);
    add_background_object(create_sbwall_2146(13312, 752), 3);
    add_background_object(create_sbwallleft_2172(13312, 368), 3);
    add_background_object(create_sbwallleft_2172(13312, 752), 3);
    add_background_object(create_sbwallleft_2172(13312, 816), 3);
    add_background_object(create_sbwallleft_2172(13312, 944), 3);
    add_background_object(create_sbwall_2146(13184, 1008), 3);
    add_background_object(create_sbdeck1_2148(12928, 984), 3);
    add_background_object(create_sbdeck1_2148(13056, 984), 3);
    add_background_object(create_sbdeck1_2148(13184, 984), 3);
    add_background_object(create_sbwallright_2169(13504, 752), 3);
    add_background_object(create_sbwallright_2169(13504, 816), 3);
    add_background_object(create_sbwall_2146(13056, 1072), 3);
    add_background_object(create_sbwall_2146(12928, 1072), 3);
    add_background_object(create_sbwall_2146(13184, 1072), 3);
    add_background_object(create_sbwallright_2169(12800, 824), 3);
    add_background_object(create_sbwallright_2169(12800, 760), 3);
    add_background_object(create_sbwallright_2169(12800, 688), 3);
    add_background_object(create_sbwallright_2169(12800, 624), 3);
    add_background_object(create_sbwallright_2169(12800, 568), 3);
    add_background_object(create_sbwallright_2169(12800, 504), 3);
    add_background_object(create_sbwallright_2169(12800, 440), 3);
    add_background_object(create_sbwallright_2169(12800, 376), 3);
    add_background_object(create_sbwallright_2169(12800, 312), 3);
    add_background_object(create_sbbigwall2_2145(13056, -8), 3);
    add_background_object(create_sbwall_2146(12544, 120), 3);
    add_background_object(create_sbwall_2146(13184, 120), 3);
    add_background_object(create_sbwallright_2169(13312, 120), 3);
    add_background_object(create_sbwallright_2169(13312, 56), 3);
    add_background_object(create_sbwallright_2169(13312, -8), 3);
    add_background_object(create_sbmetaltube1_2190(12544, 536), 3);
    add_background_object(create_sbwallleft_2172(12576, 624), 3);
    add_background_object(create_sbwallleft_2172(12576, 560), 3);
    add_background_object(create_sbmetaltube2_2191(12576, 728), 3);
    add_background_object(create_sbmetaltube2_2191(12608, 728), 3);
    add_background_object(create_sbmetaltube2_2191(12640, 728), 3);
    add_background_object(create_sbmetaltube2_2191(12672, 728), 3);
    add_background_object(create_sbmetaltube2_2191(12704, 728), 3);
    add_background_object(create_sbmetaltube2_2191(12736, 728), 3);
    add_background_object(create_sbmetaltube2_2191(12768, 728), 3);
    add_background_object(create_sbmetaltube2_2191(12784, 728), 3);
    add_background_object(create_sbwall_2146(12672, 1072), 3);
    add_background_object(create_sbwall_2146(12800, 1072), 3);
    add_background_object(create_sbbigwall2_2145(12672, 120), 3);
    add_background_object(create_sbbigwall2_2145(12800, -8), 3);
    add_background_object(create_sbsmallwall_2144(13440, 752), 3);
    add_background_object(create_sbsmallwall_2144(13440, 816), 3);
    add_background_object(create_sbwallright_2169(12800, 248), 3);
    add_background_object(create_sbwall_2146(13184, 184), 3);
    add_background_object(create_sbwallslope1_2173(13312, 184), 3);
    add_background_object(create_sbdeck9_2174(13312, 160), 3);
    add_background_object(create_sbdeck8_2171(13440, 224), 3);
    add_background_object(create_sbwall_2146(13312, 560), 3);
    add_background_object(create_sbwallleft_2172(13312, 560), 3);
    add_background_object(create_sbwall_2146(13312, 496), 3);
    add_background_object(create_sbwallleft_2172(13312, 496), 3);
    add_background_object(create_sbwall_2146(13312, 432), 3);
    add_background_object(create_sbwallleft_2172(13312, 432), 3);
    add_background_object(create_sbdeck8_2171(13440, 344), 3);
    add_background_object(create_sbwallright_2169(13440, 432), 3);
    add_background_object(create_sbwallright_2169(13440, 368), 3);
    add_background_object(create_sbwallright_2169(13440, 496), 3);
    add_background_object(create_sbdeck7walkthru_2167(13296, 344), 3);
    add_background_object(create_sbdeck1_2148(13312, 344), 3);
    add_background_object(create_sbwall_2146(12544, 824), 3);
    add_background_object(create_sbwall_2146(12672, 824), 3);
    add_background_object(create_sbwall_2146(12672, 760), 3);
    add_background_object(create_sbdeck6_2151(12736, 984), 3);
    add_background_object(create_sbdeck6_2151(12672, 1072), 3);
    add_background_object(create_sbdeck8_2171(12664, 984), 3);
    add_background_object(create_sbwallright_2169(12672, 1008), 3);
    add_background_object(create_sbwallleft_2172(12736, 1008), 3);
    add_background_object(create_sbdeck5_2162(12544, 984), 3);
    add_background_object(create_sbwallright_2169(12672, 1040), 3);
    add_background_object(create_sbwallleft_2172(12736, 1040), 3);
    add_background_object(create_sbgrapplerrope_2287(12904, 728), 3);
    add_background_object(create_sbgrapplerrope_2287(13208, 728), 3);
    add_background_object(create_sbceiling2_2149(10368, 624), 3);
    add_background_object(create_sbbigwall_2147(10496, 560), 3);
    add_background_object(create_sbdeck1_2148(10496, 856), 3);
    add_background_object(create_sbdeck1_2148(10624, 856), 3);
    add_background_object(create_sbwall_2146(10752, 880), 3);
    add_background_object(create_sbdeck1_2148(10752, 856), 3);
    add_background_object(create_sbwall_2146(10880, 880), 3);
    add_background_object(create_sbdeck1_2148(10880, 856), 3);
    add_background_object(create_sbceiling2_2149(10624, 688), 3);
    add_background_object(create_sbdeck1_2148(11136, 792), 3);
    add_background_object(create_sbwallslope2_2182(11008, 816), 3);
    add_background_object(create_sbdeck10_2183(11008, 792), 3);
    add_background_object(create_sbwall_2146(11008, 880), 3);
    add_background_object(create_sbmetaltube1_2190(11264, 792), 3);
    add_background_object(create_sbmetaltube3_2192(11264, 688), 3);
    add_background_object(create_sbmetaltube2_2191(11232, 688), 3);
    add_background_object(create_sbmetaltube2_2191(11200, 688), 3);
    add_background_object(create_sbmetaltube2_2191(11168, 688), 3);
    add_background_object(create_sbmetaltube2_2191(11136, 688), 3);
    add_background_object(create_sbmetaltube2_2191(11104, 688), 3);
    add_background_object(create_sbmetaltube2_2191(11072, 688), 3);
    add_background_object(create_sbmetaltube2_2191(11040, 688), 3);
    add_background_object(create_sbmetaltube2_2191(11008, 688), 3);
    add_background_object(create_sbwallright_2169(11008, 688), 3);
    add_background_object(create_sbmetaltube1_2190(10592, 824), 3);
    add_background_object(create_sbmetaltube4_2193(10592, 792), 3);
    add_background_object(create_sbmetaltube2_2191(10624, 792), 3);
    add_background_object(create_sbrotorbladetunnel_2178(10432, 872), 3);
    add_background_object(create_sbwallright_2169(10416, 880), 3);
    add_background_object(create_sbwallleft_2172(10496, 880), 3);
    add_background_object(create_sbmetaltube2_2191(13664, 976), 3);
    add_background_object(create_sbmetaltube2_2191(13696, 976), 3);
    add_background_object(create_sbmetaltube2_2191(13728, 976), 3);
    add_background_object(create_sbmetaltube2_2191(13760, 976), 3);
    add_object(create_redspringright_441(9616, 800), 3);
    add_object(create_objectjumppad_530(10112, 784), 3);
    add_object(create_objectjumppad_530(10224, 600), 3);
    add_object(create_objectjumppad_530(9744, 600), 3);
    add_object(create_objectjumppad_530(9856, 784), 3);
    add_object(create_objectpetal_302(6329, 897), 3);
    add_object(create_objectpetal_302(6313, 881), 3);
    add_object(create_objectpetal_302(6297, 897), 3);
    add_object(create_playerstartingpoint_358(149, 469), 3);
    add_object(create_enemymagnetizerhand_2298(5976, -292), 3);
    add_object(create_enemymagnetizerline_2299(5976, -256), 3);
    add_object(create_enemymagnetizer_2300(5976, -293), 3);
    add_object(create_enemymagnetizercrate_2301(5976, -176), 3);
    add_object(create_levelsbplatform1_2096(80, 552), 3);
    add_object(create_levelsbplatformflame1_2097(79, 570), 3);
    add_object(create_switchdoor_2099(12784, 856), 3);
    add_object(create_switchplatform_2100(12712, 1016), 3);
    add_object(create_gimmickcannonbase_2198(14064, 848), 3);
    add_object(create_gimmickcannonbase2_2203(14056, 848), 3);
    add_object(create_gimmickcannon_2199(14064, 848), 3);
    add_object(create_enemyhoppermkii_2200(4491, 248), 3);
    add_object(create_enemylimiter_350(4357, 226), 3);
    add_object(create_breakablefloor1_2302(-416, 1064), 3);
    add_object(create_breakablefloor2_2303(-352, 1064), 3);
    add_object(create_playerassist_2028(14224, 904), 3);
    add_object(create_levelsbplatform1_2096(304, 584), 3);
    add_object(create_levelsbplatformflame1_2097(303, 602), 3);
    add_object(create_levelsbplatform1_2096(552, 616), 3);
    add_object(create_levelsbplatformflame1_2097(551, 634), 3);
    add_object(create_levelsbplatform1_2096(784, 664), 3);
    add_object(create_levelsbplatformflame1_2097(783, 682), 3);
    add_object(create_gimmickcannonbase_2198(14064, 720), 3);
    add_object(create_gimmickcannonbase2_2203(14056, 720), 3);
    add_object(create_gimmickcannon_2199(14064, 720), 3);
    add_object(create_playerassistcopilot_2219(14222, 904), 3);
    add_object(create_enemylimiter_350(1445, 714), 3);
    add_object(create_enemylimiter_350(1941, 714), 3);
    add_object(create_enemyrotorbladespikes_2204(6623, 1040), 3);
    add_object(create_enemyrotorblade_2205(6624, 1040), 3);
    add_object(create_enemyspawntube_2195(6624, 1052), 3);
    add_object(create_objectcrystal_279(1813, 658), 3);
    add_object(create_objectcrystal_279(1789, 658), 3);
    add_object(create_objectcrystal_279(1765, 658), 3);
    add_object(create_objectcrystal_279(1725, 658), 3);
    add_object(create_objectcrystal_279(1701, 658), 3);
    add_object(create_objectcrystal_279(1677, 658), 3);
    add_object(create_objectcrystal_279(1637, 658), 3);
    add_object(create_objectcrystal_279(1613, 658), 3);
    add_object(create_objectcrystal_279(1589, 658), 3);
    add_object(create_layerchangeswitch2_1239(7688, -152), 3);
    add_object(create_enemylimiter_350(4573, 226), 3);
    add_object(create_enemylimiter_350(1909, 714), 3);
    add_object(create_enemylimiter_350(1477, 714), 3);
    add_object(create_enemyslime_741(1711, 717), 3);
    add_object(create_enemyslime_741(1855, 717), 3);
    add_object(create_gimmickfan_2220(2224, 808), 3);
    add_object(create_gimmickfan_2220(2112, 808), 3);
    add_object(create_gimmickfan_2220(2000, 808), 3);
    add_object(create_gimmickfan_2220(3904, 1512), 3);
    add_object(create_gimmickfan_2220(4032, 1512), 3);
    add_object(create_yellowspringupright_433(3840, 1456), 3);
    add_object(create_gimmickfan_2220(3904, 1096), 3);
    add_object(create_gimmickfan_2220(4032, 1096), 3);
    add_object(create_gimmickfan_2220(3904, 696), 3);
    add_object(create_gimmickfan_2220(4032, 696), 3);
    add_object(create_enemydronelaser_2127(-168, 660), 3);
    add_object(create_sbloop2_2210(3584, 1328), 3);
    add_object(create_sbloop3_2211(3504, 1264), 3);
    add_object(create_sbloop5_2223(3520, 1264), 3);
    add_object(create_sbloop5_2223(3520, 1328), 3);
    add_object(create_sbloop5_2223(3520, 1392), 3);
    add_object(create_sbloop3_2211(3504, 1328), 3);
    add_object(create_sbloop3_2211(3504, 1392), 3);
    add_object(create_layerchangeto0_405(3408, 1280), 3);
    add_object(create_layerchangeto0_405(3408, 1336), 3);
    add_object(create_layerchangeto0_405(3408, 1392), 3);
    add_object(create_layerchangeswitch_404(3480, 376), 3);
    add_object(create_layerchangeswitch_404(3480, 440), 3);
    add_object(create_monitorrings_407(4288, 144), 3);
    add_object(create_enemylimiter_350(4693, 226), 3);
    add_object(create_enemyhoppermkii_2200(4891, 248), 3);
    add_object(create_objectcrystal_279(3813, 1434), 3);
    add_object(create_objectcrystal_279(3781, 1434), 3);
    add_object(create_objectcrystal_279(3749, 1434), 3);
    add_object(create_objectcrystal_279(3717, 1434), 3);
    add_object(create_objectcrystal_279(3845, 1434), 3);
    add_object(create_objectcrystal_279(3685, 1434), 3);
    add_object(create_objectcrystal_279(3453, 1434), 3);
    add_object(create_objectcrystal_279(3421, 1434), 3);
    add_object(create_objectcrystal_279(3389, 1434), 3);
    add_object(create_objectcrystal_279(3357, 1434), 3);
    add_object(create_objectcrystal_279(3485, 1434), 3);
    add_object(create_objectcrystal_279(3325, 1434), 3);
    add_object(create_objectcrystal_279(3293, 1434), 3);
    add_object(create_objectcrystal_279(3261, 1434), 3);
    add_object(create_objectcrystal_279(3229, 1434), 3);
    add_object(create_objectcrystal_279(3605, 1234), 3);
    add_object(create_objectcrystal_279(3605, 1170), 3);
    add_object(create_objectcrystal_279(3605, 1106), 3);
    add_object(create_objectcrystal_279(3605, 1042), 3);
    add_object(create_objectcrystal_279(3605, 978), 3);
    add_object(create_objectcrystal_279(3605, 914), 3);
    add_object(create_objectcrystal_279(3605, 850), 3);
    add_object(create_objectcrystal_279(3605, 786), 3);
    add_object(create_objectcrystal_279(3605, 722), 3);
    add_object(create_objectcrystal_279(3605, 658), 3);
    add_object(create_objectcrystal_279(3605, 594), 3);
    add_object(create_objectcrystal_279(3605, 1298), 3);
    add_object(create_enemylimiter_350(5005, 1058), 3);
    add_object(create_enemypelletizer_2304(1248, 563), 3);
    add_object(create_enemypelletizer_2304(4632, 147), 3);
    add_object(create_enemypelletizer_2304(2424, 371), 3);
    add_object(create_enemypelletizer_2304(2808, 459), 3);
    add_object(create_gimmickchainwallmaskdown_2305(4992, 463), 3);
    add_object(create_hazardspikesleft_2118(5520, 528), 3);
    add_object(create_hazardspikesleft_2118(5520, 496), 3);
    add_object(create_hazardspikesleft_2118(5520, 464), 3);
    add_object(create_hazardspikesleft_2118(5520, 368), 3);
    add_object(create_gimmickcrusherplatform_2306(5792, 256), 3);
    add_object(create_gimmickcrusherplatform_2306(6720, 752), 3);
    add_object(create_gimmickcrusherplatform_2306(5760, 656), 3);
    add_object(create_gimmickcrusherplatform_2306(6208, 344), 3);
    add_object(create_enemylimiter_350(5133, 322), 3);
    add_object(create_enemylimiter_350(5421, 2), 3);
    add_object(create_gimmickchainwallmaskup_2307(5120, 912), 3);
    add_object(create_gimmickchainwallmaskup_2307(5120, 912), 3);
    add_object(create_gimmickchainwallmaskup_2307(5408, 912), 3);
    add_object(create_gimmickchainwallmaskup_2307(5408, 912), 3);
    add_object(create_enemylimiter_350(5805, 138), 3);
    add_object(create_enemylimiter_350(6733, 522), 3);
    add_object(create_enemylimiter_350(5773, 522), 3);
    add_object(create_enemylimiter_350(6221, 138), 3);
    add_object(create_hazardspikesleft_2118(5520, 432), 3);
    add_object(create_hazardspikesleft_2118(5520, 400), 3);
    add_object(create_monitorcrystals_324(6768, 272), 3);
    add_object(create_monitorrings_407(6864, 592), 3);
    add_object(create_shipplatform2_2094(6768, 624), 3);
    add_object(create_laddertop_357(4172, 199), 3);
    add_object(create_shipplatform2_2094(3792, 344), 3);
    add_object(create_shipplatform2_2094(4016, 344), 3);
    add_object(create_yellowspringup_434(5504, 904), 3);
    add_object(create_gimmickchainwallmaskdown_2305(5264, 463), 3);
    add_object(create_gimmickchainwallmaskdown_2305(5264, 463), 3);
    add_object(create_enemylimiter_350(5277, 1058), 3);
    add_object(create_shipplatform2_2094(5888, 280), 3);
    add_object(create_laddertop_357(6036, 303), 3);
    add_object(create_gimmickcrusherplatform_2306(6464, 848), 3);
    add_object(create_enemylimiter_350(6477, 658), 3);
    add_object(create_gimmickcrusherplatform_2306(6952, 752), 3);
    add_object(create_gimmickcrusherplatform_2306(7048, 752), 3);
    add_object(create_gimmickcrusherplatform_2306(7144, 752), 3);
    add_object(create_enemylimiter_350(6965, 642), 3);
    add_object(create_enemylimiter_350(7061, 642), 3);
    add_object(create_enemylimiter_350(7157, 642), 3);
    add_object(create_shipplatform2_2094(5552, 680), 3);
    add_object(create_enemypelletizer_2304(5336, 779), 3);
    add_object(create_objectcodec_354(5330, 189), 3);
    add_object(create_objectcrystal_279(5277, 274), 3);
    add_object(create_objectcrystal_279(5309, 290), 3);
    add_object(create_objectcrystal_279(5341, 306), 3);
    add_object(create_objectcrystal_279(5373, 322), 3);
    add_object(create_enemyslime_741(5983, 669), 3);
    add_object(create_enemylimiter_350(6141, 666), 3);
    add_object(create_enemylimiter_350(6109, 666), 3);
    add_object(create_enemylimiter_350(5877, 666), 3);
    add_object(create_enemylimiter_350(5845, 666), 3);
    add_object(create_shipplatform2_2094(6528, 776), 3);
    add_object(create_shipplatform2_2094(6512, 776), 3);
    add_object(create_monitormetalshield_329(3408, 1080), 3);
    add_object(create_enemylimiter_350(7301, 986), 3);
    add_object(create_enemylimiter_350(6549, 986), 3);
    add_object(create_objectcrystal_279(6805, 986), 3);
    add_object(create_objectcrystal_279(6845, 986), 3);
    add_object(create_objectcrystal_279(6885, 986), 3);
    add_object(create_objectcrystal_279(6925, 986), 3);
    add_object(create_objectcrystal_279(6965, 986), 3);
    add_object(create_objectcrystal_279(7005, 986), 3);
    add_object(create_objectcrystal_279(7045, 986), 3);
    add_object(create_monitorbomb_563(6288, 840), 3);
    add_object(create_breakablefloor1_2302(6336, 872), 3);
    add_object(create_breakablefloor2_2303(6272, 872), 3);
    add_object(create_gimmickfan_2220(7616, 968), 3);
    add_object(create_gimmickfan_2220(7504, 968), 3);
    add_object(create_gimmickfan_2220(7504, 552), 3);
    add_object(create_gimmickfan_2220(7616, 552), 3);
    add_object(create_gimmickfan_2220(8640, 968), 3);
    add_object(create_gimmickfan_2220(8512, 968), 3);
    add_object(create_hazardspikesup_2116(7680, 336), 3);
    add_object(create_hazardspikesup_2116(7712, 336), 3);
    add_object(create_hazardspikesup_2116(7744, 336), 3);
    add_object(create_hazardspikesup_2116(7776, 336), 3);
    add_object(create_hazardspikesup_2116(7808, 336), 3);
    add_object(create_hazardspikesup_2116(7840, 336), 3);
    add_object(create_hazardspikesup_2116(7872, 336), 3);
    add_object(create_hazardspikesup_2116(7904, 336), 3);
    add_object(create_gimmickfan_2220(8896, 968), 3);
    add_object(create_gimmickfan_2220(8768, 968), 3);
    add_object(create_gimmickcrusherplatform_2306(9648, 392), 3);
    add_object(create_gimmickcrusherplatform_2306(9744, 392), 3);
    add_object(create_enemylimiter_350(10013, 298), 3);
    add_object(create_enemylimiter_350(10109, 298), 3);
    add_object(create_gimmickcrusherplatform_2306(10000, 392), 3);
    add_object(create_gimmickcrusherplatform_2306(10096, 392), 3);
    add_object(create_enemylimiter_350(9661, 298), 3);
    add_object(create_enemylimiter_350(9757, 298), 3);
    add_object(create_shipplatform2_2094(9216, 672), 3);
    add_object(create_shipplatform2_2094(9344, 672), 3);
    add_object(create_gimmickcrusherplatform_2306(9664, 832), 3);
    add_object(create_enemylimiter_350(9677, 682), 3);
    add_object(create_enemylimiter_350(9581, 682), 3);
    add_object(create_laddertop_357(9196, 567), 3);
    add_object(create_yellowspringleft_436(9456, 640), 3);
    add_object(create_objectpetal_302(9265, 649), 3);
    add_object(create_objectpetal_302(9329, 649), 3);
    add_object(create_objectpetal_302(9393, 649), 3);
    add_object(create_enemyhoppermkii_2200(2459, 760), 3);
    add_object(create_enemylimiter_350(2309, 738), 3);
    add_object(create_enemylimiter_350(2597, 738), 3);
    add_object(create_yellowspringupright_433(2576, 792), 3);
    add_object(create_yellowspringdown_437(2688, 624), 3);
    add_object(create_yellowspringdown_437(2720, 624), 3);
    add_object(create_yellowspringdown_437(2752, 624), 3);
    add_object(create_yellowspringdown_437(2656, 624), 3);
    add_object(create_breakablefloor1_2302(9600, 792), 3);
    add_object(create_enemylimiter_350(10205, 298), 3);
    add_object(create_gimmickcrusherplatform_2306(10192, 392), 3);
    add_object(create_redspringup_440(9824, 864), 3);
    add_object(create_redspringup_440(9792, 864), 3);
    add_object(create_shipplatform2_2094(9752, 416), 3);
    add_object(create_hazardspikesup_2116(9856, 656), 3);
    add_object(create_hazardspikesup_2116(9888, 656), 3);
    add_object(create_hazardspikesup_2116(9920, 656), 3);
    add_object(create_hazardspikesup_2116(9952, 656), 3);
    add_object(create_gimmickcrusherplatform_2306(9568, 768), 3);
    add_object(create_hazardspikesup_2116(9984, 656), 3);
    add_object(create_hazardspikesup_2116(10016, 656), 3);
    add_object(create_hazardspikesup_2116(10048, 656), 3);
    add_object(create_hazardspikesup_2116(10080, 656), 3);
    add_object(create_objectcrystal_279(8549, 866), 3);
    add_object(create_objectcrystal_279(8613, 866), 3);
    add_object(create_objectcrystal_279(8437, 826), 3);
    add_object(create_objectcrystal_279(8317, 770), 3);
    add_object(create_objectcrystal_279(8381, 802), 3);
    add_object(create_objectcrystal_279(8493, 858), 3);
    add_object(create_objectcrystal_279(8685, 866), 3);
    add_object(create_objectcrystal_279(8749, 850), 3);
    add_object(create_objectcrystal_279(8805, 818), 3);
    add_object(create_objectcrystal_279(8861, 786), 3);
    add_object(create_objectcrystal_279(8925, 770), 3);
    add_object(create_levelsbplatform1_2096(8824, 376), 3);
    add_object(create_levelsbplatformflame1_2097(8823, 394), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbar_2308(10472, 288), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_gimmicksbbarmask_2309(10497, 292), 3);
    add_object(create_monitorcrystals_324(7344, 888), 3);
    add_object(create_levelsbmovingblock1_2310(12416, 336), 3);
    add_object(create_levelsbplatform1_2096(8560, 328), 3);
    add_object(create_levelsbplatformflame1_2097(8559, 346), 3);
    add_object(create_levelsbplatform1_2096(8320, 288), 3);
    add_object(create_levelsbplatformflame1_2097(8319, 306), 3);
    add_object(create_enemyspawntube_2195(10912, 252), 3);
    add_object(create_enemydrone_2222(10912, 248), 3);
    add_object(create_hazardspikesup_2116(11008, 464), 3);
    add_object(create_hazardspikesup_2116(11040, 464), 3);
    add_object(create_hazardspikesup_2116(11072, 464), 3);
    add_object(create_hazardspikesup_2116(11104, 464), 3);
    add_object(create_hazardspikesup_2116(11136, 464), 3);
    add_object(create_hazardspikesup_2116(11168, 464), 3);
    add_object(create_hazardspikesup_2116(11264, 464), 3);
    add_object(create_hazardspikesup_2116(11296, 464), 3);
    add_object(create_hazardspikesup_2116(11328, 464), 3);
    add_object(create_hazardspikesup_2116(11360, 464), 3);
    add_object(create_hazardspikesup_2116(11392, 464), 3);
    add_object(create_hazardspikesup_2116(11424, 464), 3);
    add_object(create_hazardspikesup_2116(11456, 464), 3);
    add_object(create_hazardspikesup_2116(11488, 464), 3);
    add_object(create_hazardspikesup_2116(11520, 464), 3);
    add_object(create_gimmickswingspawner1_817(11496, 280), 3);
    add_object(create_gimmickswingspawner2_2311(11888, 280), 3);
    add_object(create_hazardspikesup_2116(11552, 464), 3);
    add_object(create_hazardspikesup_2116(11584, 464), 3);
    add_object(create_hazardspikesup_2116(11616, 464), 3);
    add_object(create_hazardspikesup_2116(11648, 464), 3);
    add_object(create_hazardspikesup_2116(11680, 464), 3);
    add_object(create_enemyspawntube_2195(10688, 252), 3);
    add_object(create_enemydrone_2222(10688, 272), 3);
    add_object(create_hazardspikesup_2116(11712, 464), 3);
    add_object(create_hazardspikesup_2116(11744, 464), 3);
    add_object(create_hazardspikesup_2116(11776, 464), 3);
    add_object(create_hazardspikesup_2116(11808, 464), 3);
    add_object(create_hazardspikesup_2116(11840, 464), 3);
    add_object(create_hazardspikesup_2116(11872, 464), 3);
    add_object(create_hazardspikesup_2116(11904, 464), 3);
    add_object(create_hazardspikesup_2116(11936, 464), 3);
    add_object(create_hazardspikesup_2116(12032, 464), 3);
    add_object(create_hazardspikesup_2116(12064, 464), 3);
    add_object(create_hazardspikesup_2116(11968, 464), 3);
    add_object(create_hazardspikesup_2116(12000, 464), 3);
    add_object(create_hazardspikesup_2116(12128, 464), 3);
    add_object(create_hazardspikesup_2116(12160, 464), 3);
    add_object(create_hazardspikesup_2116(12096, 464), 3);
    add_object(create_monitormetalshield_329(12192, 464), 3);
    add_object(create_breakablefloor1_2302(12416, 800), 3);
    add_object(create_breakablefloor2_2303(12480, 800), 3);
    add_object(create_gimmickchainwallmaskup_2307(12336, 800), 3);
    add_object(create_enemylimiter_350(12349, 482), 3);
    add_object(create_breakablefloor1_2302(12480, 848), 3);
    add_object(create_breakablefloor2_2303(12416, 848), 3);
    add_object(create_levelsbmovingblock1_2310(11872, 800), 3);
    add_object(create_levelsbmovingblock1_2310(11680, 808), 3);
    add_object(create_levelsbmovingblock1_2310(11488, 808), 3);
    add_object(create_levelsbmovingblock1_2310(11296, 792), 3);
    add_object(create_breakablefloor1_2302(11872, 1176), 3);
    add_object(create_breakablefloor2_2303(11936, 1176), 3);
    add_object(create_breakablefloor1_2302(11680, 1176), 3);
    add_object(create_breakablefloor2_2303(11744, 1176), 3);
    add_object(create_breakablefloor1_2302(11488, 1176), 3);
    add_object(create_breakablefloor2_2303(11552, 1176), 3);
    add_object(create_breakablefloor1_2302(11296, 1176), 3);
    add_object(create_breakablefloor2_2303(11360, 1176), 3);
    add_object(create_breakablefloor1_2302(11296, 1224), 3);
    add_object(create_breakablefloor2_2303(11360, 1224), 3);
    add_object(create_breakablefloor1_2302(11872, 1224), 3);
    add_object(create_breakablefloor2_2303(11936, 1224), 3);
    add_object(create_breakablefloor1_2302(11680, 1224), 3);
    add_object(create_breakablefloor2_2303(11744, 1224), 3);
    add_object(create_breakablefloor1_2302(11488, 1224), 3);
    add_object(create_breakablefloor2_2303(11552, 1224), 3);
    add_object(create_enemylimiter_350(11853, 482), 3);
    add_object(create_gimmickchainwallmaskup_2307(11456, 1144), 3);
    add_object(create_gimmickchainwallmaskup_2307(11456, 1144), 3);
    add_object(create_gimmickchainwallmaskup_2307(11840, 1144), 3);
    add_object(create_gimmickchainwallmaskup_2307(11840, 1144), 3);
    add_object(create_enemylimiter_350(11469, 482), 3);
    add_object(create_minibossrailing_923(13320, 296), 3);
    add_object(create_minibossrailing_923(13320, 248), 3);
    add_object(create_minibossbarrier_924(13312, 296), 3);
    add_object(create_minibossbarrier_924(13312, 248), 3);
    add_object(create_bossgrapplerarmleft_2312(13024, 448), 3);
    add_object(create_bossgrapplerarmleft_2312(13000, 448), 3);
    add_object(create_bossgrapplerarmleft_2312(12976, 448), 3);
    add_object(create_bossgrapplerarmleft_2312(12952, 448), 3);
    add_object(create_bossgrapplerarmright_2313(13120, 448), 3);
    add_object(create_bossgrapplerarmright_2313(13144, 448), 3);
    add_object(create_bossgrapplerarmright_2313(13168, 448), 3);
    add_object(create_bossgrapplerarmright_2313(13192, 448), 3);
    add_object(create_bossgrapplerhandright_2314(13215, 448), 3);
    add_object(create_bossgrapplerhandleft_2315(12928, 448), 3);
    add_object(create_bossgrappler_2316(13072, 448), 3);
    add_object(create_monitorrings_407(13664, 848), 3);
    add_object(create_monitorrings_407(13632, 848), 3);
    add_object(create_objectpetal_302(12481, 505), 3);
    add_object(create_objectpetal_302(12481, 569), 3);
    add_object(create_objectpetal_302(12481, 633), 3);
    add_object(create_enemyrotorbladespikes_2204(10463, 888), 3);
    add_object(create_enemyrotorblade_2205(10464, 888), 3);
    add_object(create_enemyspawntube_2195(10464, 900), 3);
    add_object(create_enemylimiter_350(10117, 834), 3);
    add_object(create_enemylimiter_350(10613, 834), 3);
    add_object(create_enemyslime_741(10847, 845), 3);
    add_object(create_enemylimiter_350(10677, 834), 3);
    add_object(create_enemylimiter_350(10709, 834), 3);
    add_object(create_enemylimiter_350(10981, 834), 3);
    add_object(create_enemylimiter_350(11013, 834), 3);
    add_object(create_monitorearthshield_326(10624, 824), 3);
    add_object(create_objectcrystal_279(11157, 762), 3);
    add_object(create_objectcrystal_279(11189, 762), 3);
    add_object(create_objectcrystal_279(11229, 762), 3);
    add_object(create_objectcrystal_279(11261, 762), 3);
    add_object(create_objectcrystal_279(12237, 1138), 3);
    add_object(create_objectcrystal_279(12285, 1114), 3);
    add_object(create_objectcrystal_279(12333, 1090), 3);
    add_object(create_objectcrystal_279(12381, 1066), 3);
    add_object(create_objectcrystal_279(12429, 1042), 3);
    add_object(create_objectcrystal_279(12477, 1018), 3);
    add_object(create_objectcrystal_279(12525, 994), 3);
    add_object(create_objectcrystal_279(12573, 970), 3);
    add_object(create_objectcrystal_279(9869, 346), 3);
    add_object(create_objectcrystal_279(9909, 346), 3);
    add_object(create_objectcrystal_279(9909, 386), 3);
    add_object(create_objectcrystal_279(9869, 386), 3);
    add_object(create_objectcrystal_279(11693, 250), 3);
    add_object(create_objectcrystal_279(11661, 250), 3);
    add_object(create_objectcrystal_279(11725, 250), 3);
    add_object(create_objectcrystal_279(12133, 210), 3);
    add_object(create_objectcrystal_279(12101, 234), 3);
    add_object(create_objectcrystal_279(12165, 194), 3);
    add_object(create_objectcrystal_279(12205, 186), 3);
    add_object(create_objectcrystal_279(12245, 194), 3);
    add_object(create_objectcrystal_279(12277, 210), 3);
    add_object(create_enemyspawntube_2195(10976, 324), 3);
    add_object(create_objectcrystal_279(12309, 234), 3);
    add_object(create_effectwarning_1513(13072, 992), 3);
    add_object(create_enemyspawntube_2195(10976, 252), 3);
    add_object(create_enemydrone_2222(10976, 288), 3);
    add_object(create_monitor1up_410(13600, 848), 3);
    add_object(create_crystalplatform_2317(13056, 904), 3);
    add_object(create_gimmickfanside_2221(13655, 992), 3);
    add_object(create_monitorcrate_409(6800, 272), 3);
    add_object(create_guicompass_2230(13904, 440), 3);
    add_object(create_enemylimiter_350(5021, 226), 3);
    add_object(create_objectcodec_354(8642, 285), 3);
    add_object(create_objectcodec_354(11650, 741), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_blimpcable1_2070(1424, 664), 4);
    add_background_object(create_blimpcable1_2070(1520, 280), 4);
    add_background_object(create_blimpcable1_2070(1504, 344), 4);
    add_background_object(create_blimpcable1_2070(1488, 408), 4);
    add_background_object(create_blimpcable1_2070(1472, 472), 4);
    add_background_object(create_blimpcable1_2070(1456, 536), 4);
    add_background_object(create_blimpcable1_2070(1440, 600), 4);
    add_background_object(create_blimpcable1_2070(1416, 696), 4);
    add_background_object(create_sbdeck8_2171(1416, 760), 4);
    add_background_object(create_blimpcable1_2070(1792, 280), 4);
    add_background_object(create_blimpcable1_2070(1776, 344), 4);
    add_background_object(create_blimpcable1_2070(1760, 408), 4);
    add_background_object(create_blimpcable1_2070(1744, 472), 4);
    add_background_object(create_blimpcable1_2070(1728, 536), 4);
    add_background_object(create_blimpcable1_2070(1712, 600), 4);
    add_background_object(create_blimpcable1_2070(1696, 664), 4);
    add_background_object(create_sbdeck8_2171(1688, 760), 4);
    add_background_object(create_blimpcable1_2070(13696, 56), 4);
    add_background_object(create_blimpcable1_2070(13680, 120), 4);
    add_background_object(create_blimpcable1_2070(13664, 184), 4);
    add_background_object(create_blimpcable1_2070(13648, 248), 4);
    add_background_object(create_blimpcable1_2070(13632, 312), 4);
    add_background_object(create_blimpcable1_2070(13616, 376), 4);
    add_background_object(create_blimpcable1_2070(13600, 440), 4);
    add_background_object(create_blimpcable1_2070(13584, 504), 4);
    add_background_object(create_sbdeck8_2171(13584, 568), 4);
    add_background_object(create_sbdeck7_2176(13560, 568), 4);
    add_background_object(create_sbdeck7_2176(1392, 760), 4);
    add_background_object(create_sbdeck7_2176(1664, 760), 4);
    add_background_object(create_blimpcable1_2070(13952, 56), 4);
    add_background_object(create_blimpcable1_2070(13936, 120), 4);
    add_background_object(create_blimpcable1_2070(13920, 184), 4);
    add_background_object(create_blimpcable1_2070(13904, 248), 4);
    add_background_object(create_blimpcable1_2070(13888, 312), 4);
    add_background_object(create_blimpcable1_2070(13872, 376), 4);
    add_background_object(create_blimpcable1_2070(13856, 440), 4);
    add_background_object(create_blimpcable1_2070(13840, 504), 4);
    add_background_object(create_sbdeck8_2171(13840, 568), 4);
    add_background_object(create_sbdeck7_2176(13816, 568), 4);
    add_background_object(create_blimpcable1_2070(14224, 56), 4);
    add_background_object(create_blimpcable1_2070(14208, 120), 4);
    add_background_object(create_blimpcable1_2070(14192, 184), 4);
    add_background_object(create_blimpcable1_2070(14176, 248), 4);
    add_background_object(create_blimpcable1_2070(14160, 312), 4);
    add_background_object(create_blimpcable1_2070(14144, 376), 4);
    add_background_object(create_blimpcable1_2070(14128, 440), 4);
    add_background_object(create_blimpcable1_2070(14112, 504), 4);
    add_background_object(create_sbdeck8_2171(14112, 568), 4);
    add_background_object(create_sbdeck7_2176(14088, 568), 4);
    add_background_object(create_blimpcable1_2070(1688, 696), 4);
    add_background_object(create_blimpcable1_2070(2568, 56), 4);
    add_background_object(create_blimpcable1_2070(2552, 120), 4);
    add_background_object(create_blimpcable1_2070(2536, 184), 4);
    add_background_object(create_blimpcable1_2070(2520, 248), 4);
    add_background_object(create_blimpcable1_2070(2504, 312), 4);
    add_background_object(create_blimpcable1_2070(2488, 376), 4);
    add_background_object(create_blimpcable1_2070(2824, 56), 4);
    add_background_object(create_blimpcable1_2070(2808, 120), 4);
    add_background_object(create_blimpcable1_2070(2792, 184), 4);
    add_background_object(create_blimpcable1_2070(2776, 248), 4);
    add_background_object(create_blimpcable1_2070(2760, 312), 4);
    add_background_object(create_blimpcable1_2070(2744, 376), 4);
    add_background_object(create_blimpcable1_2070(3096, 56), 4);
    add_background_object(create_blimpcable1_2070(3080, 120), 4);
    add_background_object(create_blimpcable1_2070(3064, 184), 4);
    add_background_object(create_blimpcable1_2070(3048, 248), 4);
    add_background_object(create_blimpcable1_2070(3032, 312), 4);
    add_background_object(create_blimpcable1_2070(3016, 376), 4);
    add_background_object(create_blimpcable1_2070(2472, 440), 4);
    add_background_object(create_blimpcable1_2070(2728, 440), 4);
    add_background_object(create_blimpcable1_2070(2712, 504), 4);
    add_background_object(create_blimpcable1_2070(3000, 440), 4);
    add_background_object(create_sbdeck7_2176(2448, 504), 4);
    add_background_object(create_sbdeck8_2171(2472, 504), 4);
    add_background_object(create_sbdeck7_2176(2688, 568), 4);
    add_background_object(create_sbdeck8_2171(2712, 568), 4);
    add_background_object(create_sbdeck7_2176(2968, 536), 4);
    add_background_object(create_sbdeck8_2171(2992, 536), 4);
    add_background_object(create_blimpcable1_2070(2992, 472), 4);
    add_background_object(create_sbwallleft_2172(6576, 240), 4);
    add_background_object(create_sbwallright_2169(6592, 240), 4);
    add_background_object(create_blimpcable1_2070(8056, 264), 4);
    add_background_object(create_blimpcable1_2070(8040, 328), 4);
    add_background_object(create_blimpcable1_2070(8024, 392), 4);
    add_background_object(create_blimpcable1_2070(8008, 456), 4);
    add_background_object(create_blimpcable1_2070(7976, 584), 4);
    add_background_object(create_blimpcable1_2070(8232, 584), 4);
    add_background_object(create_sbdeck7_2176(7952, 648), 4);
    add_background_object(create_sbdeck8_2171(7976, 648), 4);
    add_background_object(create_blimpcable1_2070(7992, 520), 4);
    add_background_object(create_blimpcable1_2070(8216, 648), 4);
    add_background_object(create_sbdeck7_2176(8176, 776), 4);
    add_background_object(create_sbdeck8_2171(8200, 776), 4);
    add_background_object(create_blimpcable1_2070(8456, 776), 4);
    add_background_object(create_blimpcable1_2070(8440, 840), 4);
    add_background_object(create_sbdeck7_2176(8416, 904), 4);
    add_background_object(create_sbdeck8_2171(8440, 904), 4);
    add_background_object(create_blimpcable1_2070(8200, 712), 4);
    add_background_object(create_blimpcable1_2070(8472, 712), 4);
    add_background_object(create_blimpcable1_2070(8488, 648), 4);
    add_background_object(create_blimpcable1_2070(8504, 584), 4);
    add_background_object(create_sbbigwall2_2145(9728, 440), 4);
    add_background_object(create_blimpcable1_2070(9336, 88), 4);
    add_background_object(create_blimpcable1_2070(9320, 152), 4);
    add_background_object(create_blimpcable1_2070(9304, 216), 4);
    add_background_object(create_blimpcable1_2070(9288, 280), 4);
    add_background_object(create_blimpcable1_2070(9272, 344), 4);
    add_background_object(create_blimpcable1_2070(9256, 408), 4);
    add_background_object(create_blimpcable1_2070(9240, 472), 4);
    add_background_object(create_blimpcable1_2070(9232, 504), 4);
    add_background_object(create_sbdeck7_2176(9208, 568), 4);
    add_background_object(create_sbdeck8_2171(9232, 568), 4);
    add_background_object(create_blimpcable1_2070(9064, 88), 4);
    add_background_object(create_blimpcable1_2070(9048, 152), 4);
    add_background_object(create_blimpcable1_2070(9032, 216), 4);
    add_background_object(create_blimpcable1_2070(9016, 280), 4);
    add_background_object(create_blimpcable1_2070(9000, 344), 4);
    add_background_object(create_blimpcable1_2070(8984, 408), 4);
    add_background_object(create_blimpcable1_2070(8968, 472), 4);
    add_background_object(create_blimpcable1_2070(8952, 536), 4);
    add_background_object(create_blimpcable1_2070(8936, 600), 4);
    add_background_object(create_blimpcable1_2070(8920, 664), 4);
    add_background_object(create_blimpcable1_2070(8904, 728), 4);
    add_background_object(create_blimpcable1_2070(8896, 760), 4);
    add_background_object(create_sbdeck7_2176(8872, 824), 4);
    add_background_object(create_sbdeck8_2171(8896, 824), 4);
    add_background_object(create_sbwall_2146(12672, 824), 4);
    add_background_object(create_sbwall_2146(12672, 760), 4);
    add_background_object(create_sbdeck1_2148(12672, 984), 4);
    add_background_object(create_sbwallright_2169(12800, 824), 4);
    add_background_object(create_sbwallright_2169(12800, 760), 4);
    add_object(create_sbloop3_2211(3504, 1264), 4);
    add_object(create_sbloop5_2223(3520, 1264), 4);
    add_object(create_sbloop5_2223(3520, 1328), 4);
    add_object(create_sbloop5_2223(3520, 1392), 4);
    add_object(create_sbloop3_2211(3504, 1328), 4);
    add_object(create_sbloop3_2211(3504, 1392), 4);
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
    add_object(create_hazardspikesup_2116(-208, 392), 5);
    add_object(create_hazardspikesdown_2117(-168, 392), 5);
    add_object(create_hazardspikesleft_2118(-128, 392), 5);
    add_object(create_hazardspikesright_2119(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(13064, 1007), 5);
    add_object(create_cameralimitbossleft_421(12792, 416), 5);
    add_object(create_cameralimitbossright_422(13335, 496), 5);
    add_object(create_cameralimitbosstop_423(13056, 8), 5);
    add_object(create_cameratriggerboss_424(13480, -384), 5);
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
    add_object(create_effectsgroundspark_2025(-400, 72), 5);
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_38, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_38, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_38, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_38, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_38, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_38, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_38, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_38, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_38, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_38, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_38, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_38, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_38, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_38, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_38, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_38, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_38, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_38, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_38, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_38, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_38, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_38, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_38, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_38, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_38, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_38, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_38, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_38, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_38, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_38, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_38, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_38, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_38, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_38, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_38, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_38, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_38, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_38, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_38, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_38, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_38, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_38, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_38, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_38, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_38, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_38, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_38, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_38, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_38, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_38, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_38, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_38, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_38, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_38, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_climbing_limits_1 = true;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
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
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    not_always_1594_37 = loop_count;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    once_condition_1703_38 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
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
    not_always_1412_22 = loop_count;
    not_always_1397_38 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1695_16 = loop_count;
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
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1398_38 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_attacks_1 = true;
    once_condition_1828_16 = false;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1757_38 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    not_always_1413_22 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    once_condition_1682_26 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_1619_36 = loop_count;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_grappler_boss_grappler_positions_1 = true;
    not_always_540_13 = loop_count;
    not_always_1702_38 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_172_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_cutscenes_fly_in_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_grappler_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    once_condition_1701_38 = false;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1696_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_9423()
{
    // event 1489_39
    {
        if (!(group_main_engine_1)) goto event_1489_39_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1489_39_end;
        FrameObject * single_instance_1489_39_0; single_instance_1489_39_0 = pick_random(enemymeteorroller_2421_instances);
        if (single_instance_1489_39_0 == NULL) goto event_1489_39_end;
        FrameObject * single_instance_1489_39_1; single_instance_1489_39_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)single_instance_1489_39_0)->x + 0, ((Active*)single_instance_1489_39_0)->y + 0), ((Active*)single_instance_1489_39_0)->layer);
            if (single_instance_1489_39_1 == NULL)
                single_instance_1489_39_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1489_39_1))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1489_39_1))->force_frame(100+((Active*)single_instance_1489_39_0)->alterables->values.get(0)*-1);
        ((Active*)((Active*)single_instance_1489_39_0))->alterables->values.add(0, 1);
    }
    event_1489_39_end: ;
}
void Frames::event_func_9424()
{
    // event 1522_39
    {
        if (!(group_main_engine_1)) goto event_1522_39_end;
        enemyplantturretus_2365_instances.clear_selection();
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemyplantturretus_2365_instances.has_selection()) goto event_1522_39_end;
        FrameObject * single_instance_1522_39_0; single_instance_1522_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyplantturretus_2365_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1522_39_0 == NULL)
                    single_instance_1522_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1522_39_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1522_39_0))->force_frame(((Active*)get_single(enemyplantturretus_2365_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemyplantturretus_2365_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1522_39_end: ;
}
void Frames::event_func_9425()
{
    // event 1543_39
    {
        if (!(group_main_engine_1)) goto event_1543_39_end;
        enemybullfrag_2417_instances.clear_selection();
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemybullfrag_2417_instances.has_selection()) goto event_1543_39_end;
        FrameObject * single_instance_1543_39_0; single_instance_1543_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybullfrag_2417_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1543_39_0 == NULL)
                    single_instance_1543_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1543_39_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1543_39_0))->force_frame(0);
        for (ObjectIterator it(enemybullfrag_2417_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1543_39_end: ;
}
void Frames::event_func_9426()
{
    // event 1567_39
    {
        if (!(group_main_engine_1)) goto event_1567_39_end;
        enemybuoybuoy_2418_instances.clear_selection();
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemybuoybuoy_2418_instances.has_selection()) goto event_1567_39_end;
        FrameObject * single_instance_1567_39_0; single_instance_1567_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemybuoybuoy_2418_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1567_39_0 == NULL)
                    single_instance_1567_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1567_39_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1567_39_0))->force_frame(95+((Active*)get_single(enemybuoybuoy_2418_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemybuoybuoy_2418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1567_39_end: ;
}
void Frames::event_func_9427()
{
    // event 1596_39
    {
        if (!(group_main_engine_1)) goto event_1596_39_end;
        enemysharktorpedo_2423_instances.clear_selection();
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemysharktorpedo_2423_instances.has_selection()) goto event_1596_39_end;
        FrameObject * single_instance_1596_39_0; single_instance_1596_39_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemysharktorpedo_2423_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1596_39_0 == NULL)
                    single_instance_1596_39_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1596_39_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1596_39_0))->force_frame(105+((Active*)get_single(enemysharktorpedo_2423_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemysharktorpedo_2423_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1596_39_end: ;
}
void Frames::loop_spawndebris_39()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_9423();
    event_func_9424();
    event_func_9425();
    event_func_9426();
    event_func_9427();
}
void Frames::event_func_9428()
{
    // event 1859_39
    {
        if (!(group_main_engine_1)) goto event_1859_39_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage5_ogg_188, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1859_39_end: ;
}
void Frames::loop_play_music_5_39()
{
    event_func_9428();
}
void Frames::loop_wrapper_sound_hurt1_39(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_39(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_39(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_39(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_39(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_39(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
