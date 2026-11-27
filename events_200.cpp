#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_15632()
{
    // event 1820_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1820_72_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1820_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (20))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1820_72_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1820_72_0_end;
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
        dynamic_1820_72_0_end: ;
        FrameObject * single_instance_1820_72_1; single_instance_1820_72_1 = NULL;
        // select single: true false false
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1820_72_1 == NULL)
                    single_instance_1820_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1820_72_1))->set_x(((Active*)single_instance_1820_72_1)->get_x()-50+randrange(101));
        ((Active*)((Active*)single_instance_1820_72_1))->set_y(((Active*)single_instance_1820_72_1)->get_y()-50+randrange(101));
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
        FrameObject * single_instance_1820_72_2; single_instance_1820_72_2 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechweakspot_3316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1820_72_2 == NULL)
                    single_instance_1820_72_2 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1820_72_2))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1820_72_2))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_1820_72_2))->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
        ((Active*)((Active*)single_instance_1820_72_2))->alterables->flags.enable(2);
    }
    event_1820_72_end: ;
}
void Frames::event_func_15633()
{
    // event 1821_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1821_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1821_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1821_72_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        FrameObject * single_instance_1821_72_0; single_instance_1821_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechweakspot_3316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1821_72_0 == NULL)
                    single_instance_1821_72_0 = new_obj;
            }
        }
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(brevonmechweakspot_3316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(80+randrange(30));
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->set_visible(false);
        }
        media.play_id(SOUND_ABSOLUTION_POWERDOWN_345, -1, 1);
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1821_72_end: ;
}
void Frames::event_func_15634()
{
    // event 1822_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1822_72_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1822_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1822_72_end;
        FrameObject * single_instance_1822_72_0; single_instance_1822_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechweakspot_3316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1822_72_0 == NULL)
                    single_instance_1822_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1822_72_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
    }
    event_1822_72_end: ;
}
void Frames::event_func_15635()
{
    // event 1823_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1823_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1823_72_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) != (1))) goto event_1823_72_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1823_72_end: ;
}
void Frames::event_func_15636()
{
    // event 1824_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1824_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1824_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1824_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 50);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1824_72_end: ;
}
void Frames::event_func_15637()
{
    // event 1825_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1825_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1825_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1825_72_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1825_72_end;
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.02, 0));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.02, 1));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*-4);
        }
        if (!group_main_engine_level_specific_methods_cutscenes_mech_defeated_1) {
            group_main_engine_level_specific_methods_cutscenes_mech_defeated_1 = true;
        }
    }
    event_1825_72_end: ;
}
void Frames::event_func_15638()
{
    // event 1826_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1826_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1826_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1826_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1826_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-5, ((Active*)get_instance(kingdomstone_1587_instances))->get_x()));
        }
    }
    event_1826_72_end: ;
}
void Frames::event_func_15639()
{
    // event 1827_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1827_72_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1827_72_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1827_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1827_72_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+5, ((Active*)get_instance(kingdomstone_1587_instances))->get_x()));
        }
    }
    event_1827_72_end: ;
}
void Frames::event_func_15640()
{
    // event 1828_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1828_72_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(frame_left()+20, get_min(((Active*)get_instance(brevonmechlaser_3254_instances, it.current_index, default_active_instance))->get_x(), frame_left()+global_values->get(16)-20)));
            ((Active*)*it)->set_y(get_max(((Active*)get_instance(brevonmechlaser_3254_instances, it.current_index, default_active_instance))->get_y(), frame_top()+20));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(brevonmechlaser_3254_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(brevonmechlaser_3254_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(brevonmechlaser_3254_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
    }
    event_1828_72_end: ;
}
void Frames::event_func_15641()
{
    // event 1829_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1829_72_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_top()))) { it.deselect(); continue; }
        }
        if (!effectbrevonmechwarning_3255_instances.has_selection()) goto event_1829_72_end;
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1829_72_end: ;
}
void Frames::event_func_15642()
{
    // event 1830_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1830_72_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (270))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (frame_left()+global_values->get(16)))) { it.deselect(); continue; }
        }
        if (!effectbrevonmechwarning_3255_instances.has_selection()) goto event_1830_72_end;
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1830_72_end: ;
}
void Frames::event_func_15643()
{
    // event 1831_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1831_72_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (270))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (frame_left()))) { it.deselect(); continue; }
        }
        if (!effectbrevonmechwarning_3255_instances.has_selection()) goto event_1831_72_end;
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1831_72_end: ;
}
void Frames::event_func_15644()
{
    // event 1832_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1832_72_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (frame_left()))) { it.deselect(); continue; }
        }
        if (!effectbrevonmechwarning_3255_instances.has_selection()) goto event_1832_72_end;
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1832_72_end: ;
}
void Frames::event_func_15645()
{
    // event 1833_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1833_72_end;
        if (!((effectbrevonmechwarning_3255_instances.size()) > (brevonmechlaser_3254_instances.size()))) goto event_1833_72_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        FrameObject * single_instance_1833_72_0; single_instance_1833_72_0 = pick_random(effectbrevonmechwarning_3255_instances);
        if (single_instance_1833_72_0 == NULL) goto event_1833_72_end;
        ((Active*)((Active*)single_instance_1833_72_0))->destroy();
    }
    event_1833_72_end: ;
}
void Frames::event_func_15646()
{
    // event 1834_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1834_72_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1834_72_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
        }
    }
    event_1834_72_end: ;
}
void Frames::event_func_15647()
{
    // event 1835_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1835_72_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1835_72_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(2, cos_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(3, sin_deg(((Active*)*it)->alterables->values.get(4))*((Active*)*it)->alterables->values.get(1)*-1);
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(0)*0.01);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(4), 0);
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+3, 100));
        }
    }
    event_1835_72_end: ;
}
void Frames::event_func_15648()
{
    // event 1836_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1836_72_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(4)+80))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1836_72_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_1836_72_end: ;
}
void Frames::event_func_15649()
{
    // event 1837_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1837_72_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(4)+80))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1837_72_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 2);
        }
    }
    event_1837_72_end: ;
}
void Frames::event_func_15650()
{
    // event 1838_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1838_72_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-300))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1838_72_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1838_72_end: ;
}
void Frames::event_func_15651()
{
    // event 1839_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1839_72_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()+global_values->get(16)+300))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1839_72_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1839_72_end: ;
}
void Frames::event_func_15652()
{
    // event 1840_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1840_72_end;
        brevonmechlaser_3254_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonmechlaser_3254_instances, playercharactersensor_383_instances)) goto event_1840_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1840_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1840_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1840_72_end: ;
}
void Frames::event_func_15653()
{
    // event 1841_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1841_72_end;
        brevonmechlaser_3254_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonmechlaser_3254_instances, playercharactersensor_383_instances)) goto event_1841_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1841_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) > (0))) goto event_1841_72_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 7));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)*0.7);
    }
    event_1841_72_end: ;
}
void Frames::event_func_15654()
{
    // event 1842_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1842_72_end;
        bosssparkyplasmashot_3288_instances.clear_selection();
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-45, 0);
        }
    }
    event_1842_72_end: ;
}
void Frames::event_func_15655()
{
    // event 1846_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1846_72_end;
        bosssparkyplasmashot_3288_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(bosssparkyplasmashot_3288_instances, qualifier_20)) goto event_1846_72_end;
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!bosssparkyplasmashot_3288_instances.has_selection()) goto event_1846_72_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1846_72_end;
        FrameObject * single_instance_1846_72_0; single_instance_1846_72_0 = pick_random(qualifier_20);
        if (single_instance_1846_72_0 == NULL) goto event_1846_72_end;
        ((Active*)((Active*)single_instance_1846_72_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1846_72_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1846_72_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1846_72_0))->alterables->values.sub(0, 10);
        {
            ((Active*)single_instance_1846_72_0)->set_shader(Render::INVERT);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        FrameObject * single_instance_1846_72_1; single_instance_1846_72_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyplasmashot_3288_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1846_72_1 == NULL)
                    single_instance_1846_72_1 = new_obj;
            }
        }
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1846_72_end: ;
}
void Frames::event_func_15656()
{
    // event 1847_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1847_72_end;
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechbackclaw_2515_instances.has_selection()) goto event_1847_72_end;
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(13, 1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_1847_72_end: ;
}
void Frames::event_func_15657()
{
    // event 1849_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1849_72_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1849_72_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.2, 12));
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1849_72_end: ;
}
void Frames::event_func_15658()
{
    // event 1852_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1852_72_end;
        minibossacid_658_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossacid_658_instances, playercharactersensor_383_instances)) goto event_1852_72_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1852_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1852_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1852_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 100);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
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
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(128, 255, 128));
        }
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
    event_1852_72_end: ;
}
void Frames::event_func_15659()
{
    // event 1853_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1853_72_end;
        minibossacid_658_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossacid_658_instances, playercharactersensor_383_instances)) goto event_1853_72_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1853_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1853_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1853_72_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 100);
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x()-((Active*)get_instance(playercharactersensor_383_instances))->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y()-((Active*)get_instance(playercharactersensor_383_instances))->get_y());
        }
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
    }
    event_1853_72_end: ;
}
void Frames::event_func_15660()
{
    // event 1854_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1854_72_end;
        minibossacid_658_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(minibossacid_658_instances, playercharactersensor_383_instances)) goto event_1854_72_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (6))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1854_72_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 100);
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 2);
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x()-((Active*)get_instance(playercharactersensor_383_instances))->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y()-((Active*)get_instance(playercharactersensor_383_instances))->get_y());
        }
        media.play_id(SOUND_BUBBLEHIT_69, -1, 1);
    }
    event_1854_72_end: ;
}
void Frames::event_func_15661()
{
    // event 1855_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1855_72_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1855_72_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1855_72_end: ;
}
void Frames::event_func_15662()
{
    // event 1857_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1857_72_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (4))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1857_72_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        FrameObject * single_instance_1857_72_0; single_instance_1857_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(minibossacid_658_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossacidsplitpoint_3738(parent->x + 0, parent->y + -2), parent->layer);
                if (single_instance_1857_72_0 == NULL)
                    single_instance_1857_72_0 = new_obj;
            }
        }
    }
    event_1857_72_end: ;
}
void Frames::event_func_15663()
{
    // event 1858_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1858_72_end;
        minibossacidsplitpoint_3738_instances.clear_selection();
        for (ObjectIterator it(minibossacidsplitpoint_3738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!minibossacidsplitpoint_3738_instances.has_selection()) goto event_1858_72_end;
        FrameObject * single_instance_1858_72_0; single_instance_1858_72_0 = pick_random(minibossacidsplitpoint_3738_instances);
        if (single_instance_1858_72_0 == NULL) goto event_1858_72_end;
        ((Active*)((Active*)single_instance_1858_72_0))->alterables->values.add(0, 1);
        FrameObject * single_instance_1858_72_1; single_instance_1858_72_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_minibossacid_658(((Active*)single_instance_1858_72_0)->x + 0, ((Active*)single_instance_1858_72_0)->y + 0), ((Active*)single_instance_1858_72_0)->layer);
            if (single_instance_1858_72_1 == NULL)
                single_instance_1858_72_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1858_72_1))->alterables->values.set(0, -4+randrange(20)*0.1);
        ((Active*)((Active*)single_instance_1858_72_1))->alterables->values.set(1, -4+randrange(10)*0.1);
    }
    event_1858_72_end: ;
}
void Frames::event_func_15664()
{
    // event 1859_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1859_72_end;
        minibossacidsplitpoint_3738_instances.clear_selection();
        for (ObjectIterator it(minibossacidsplitpoint_3738_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!minibossacidsplitpoint_3738_instances.has_selection()) goto event_1859_72_end;
        FrameObject * single_instance_1859_72_0; single_instance_1859_72_0 = pick_random(minibossacidsplitpoint_3738_instances);
        if (single_instance_1859_72_0 == NULL) goto event_1859_72_end;
        FrameObject * single_instance_1859_72_1; single_instance_1859_72_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_minibossacid_658(((Active*)single_instance_1859_72_0)->x + 0, ((Active*)single_instance_1859_72_0)->y + 0), ((Active*)single_instance_1859_72_0)->layer);
            if (single_instance_1859_72_1 == NULL)
                single_instance_1859_72_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1859_72_0))->destroy();
        ((Active*)((Active*)single_instance_1859_72_1))->alterables->values.set(0, 4-randrange(20)*0.1);
        ((Active*)((Active*)single_instance_1859_72_1))->alterables->values.set(1, -4+randrange(10)*0.1);
    }
    event_1859_72_end: ;
}
void Frames::event_func_15665()
{
    // event 1860_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1860_72_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (2))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1860_72_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playercharactersensor_383_instances))->get_x()+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)get_instance(playercharactersensor_383_instances))->get_y()+((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1860_72_end: ;
}
void Frames::event_func_15666()
{
    // event 1861_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1861_72_end;
        minibossacid_658_instances.clear_selection();
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(10))) { it.deselect(); continue; }
        }
        if (!minibossacid_658_instances.has_selection()) goto event_1861_72_end;
        for (ObjectIterator it(minibossacid_658_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1861_72_end: ;
}
void Frames::event_func_15667()
{
    // event 1862_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1862_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1862_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(player_389_instances))->get_y());
        }
    }
    event_1862_72_end: ;
}
void Frames::event_func_15668()
{
    // event 1863_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1863_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1863_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(player_389_instances))->get_y());
        }
    }
    event_1863_72_end: ;
}
void Frames::event_func_15669()
{
    // event 1864_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1864_72_end;
        effectmissilewarning_3740_instances.clear_selection();
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(frame_left()+20, get_min(((Active*)get_instance(bossboostmissile_3739_instances, it.current_index, default_active_instance))->get_x(), frame_left()+global_values->get(16)-20)));
            ((Active*)*it)->set_y(get_max(((Active*)get_instance(bossboostmissile_3739_instances, it.current_index, default_active_instance))->get_y(), frame_top()+20));
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(bossboostmissile_3739_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(bossboostmissile_3739_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(bossboostmissile_3739_instances, it.current_index, default_active_instance))->alterables->values.get(0));
        }
    }
    event_1864_72_end: ;
}
void Frames::event_func_15670()
{
    // event 1865_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1865_72_end;
        effectmissilewarning_3740_instances.clear_selection();
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_top()))) { it.deselect(); continue; }
        }
        if (!effectmissilewarning_3740_instances.has_selection()) goto event_1865_72_end;
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1865_72_end: ;
}
void Frames::event_func_15671()
{
    // event 1866_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1866_72_end;
        effectmissilewarning_3740_instances.clear_selection();
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (frame_left()+global_values->get(16)))) { it.deselect(); continue; }
        }
        if (!effectmissilewarning_3740_instances.has_selection()) goto event_1866_72_end;
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1866_72_end: ;
}
void Frames::event_func_15672()
{
    // event 1867_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1867_72_end;
        effectmissilewarning_3740_instances.clear_selection();
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (frame_left()))) { it.deselect(); continue; }
        }
        if (!effectmissilewarning_3740_instances.has_selection()) goto event_1867_72_end;
        for (ObjectIterator it(effectmissilewarning_3740_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1867_72_end: ;
}
void Frames::event_func_15673()
{
    // event 1869_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1869_72_end;
        if (!((effectmissilewarning_3740_instances.size()) > (bossboostmissile_3739_instances.size()))) goto event_1869_72_end;
        effectmissilewarning_3740_instances.clear_selection();
        FrameObject * single_instance_1869_72_0; single_instance_1869_72_0 = pick_random(effectmissilewarning_3740_instances);
        if (single_instance_1869_72_0 == NULL) goto event_1869_72_end;
        ((Active*)((Active*)single_instance_1869_72_0))->destroy();
    }
    event_1869_72_end: ;
}
void Frames::event_func_15674()
{
    // event 1870_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1870_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1870_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y((((Active*)*it)->get_y()*9+((Active*)*it)->alterables->values.get(1))*0.1);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1870_72_end: ;
}
void Frames::event_func_15675()
{
    // event 1871_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1871_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1871_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    event_1871_72_end: ;
}
void Frames::event_func_15676()
{
    // event 1872_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1872_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1872_72_end;
        FrameObject * single_instance_1872_72_0; single_instance_1872_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossboostmissile_3739_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1872_72_0 == NULL)
                    single_instance_1872_72_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2)*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.15, 15));
        }
    }
    event_1872_72_end: ;
}
void Frames::event_func_15677()
{
    // event 1873_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1873_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()+24))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1873_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        FrameObject * single_instance_1873_72_0; single_instance_1873_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossboostmissile_3739_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1873_72_0 == NULL)
                    single_instance_1873_72_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1873_72_end: ;
}
void Frames::event_func_15678()
{
    // event 1874_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1874_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-24))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1874_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        FrameObject * single_instance_1874_72_0; single_instance_1874_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossboostmissile_3739_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1874_72_0 == NULL)
                    single_instance_1874_72_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
    }
    event_1874_72_end: ;
}
void Frames::event_func_15679()
{
    // event 1875_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1875_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1875_72_end;
        player_389_instances.clear_selection();
        if (!check_overlap(bossboostmissile_3739_instances, player_389_instances)) goto event_1875_72_end;
        if (!check_not_overlap(bossboostmissile_3739_instances, playerreflect_447_instances)) goto event_1875_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
    }
    event_1875_72_end: ;
}
void Frames::event_func_15680()
{
    // event 1876_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1876_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1876_72_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(bossboostmissile_3739_instances, playerreflect_447_instances)) goto event_1876_72_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_1876_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1876_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
            ((Active*)*it)->alterables->values.set(3, 0-((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1876_72_end: ;
}
void Frames::event_func_15681()
{
    // event 1877_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1877_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1877_72_end;
        {
            SavedSelection extra_bossboostmissile_3739_instances(bossboostmissile_3739_instances);
            for (SavedIterator it(extra_bossboostmissile_3739_instances); !it.end(); ++it) {
                foreach_instance_msl = ((Active*)*it);
                foreach_msl_72();
            }
        }
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1877_72_end: ;
}
void Frames::event_func_15682()
{
    // event 1883_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1883_72_end;
        bossboostmissile_3739_instances.clear_selection();
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (10))) { it.deselect(); continue; }
        }
        if (!bossboostmissile_3739_instances.has_selection()) goto event_1883_72_end;
        for (ObjectIterator it(bossboostmissile_3739_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1883_72_end: ;
}
void Frames::event_func_15683()
{
    // event 1885_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_1)) goto event_1885_72_end;
        ((Active*)get_instance(brevon_3683_instances))->move_back();
    }
    event_1885_72_end: ;
}
void Frames::event_func_15684()
{
    // event 1887_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1887_72_end;
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+3)%math_helper%360);
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(2));
        }
        ((Active*)get_instance(brevonsuitspin_3763_instances))->set_visible(false);
        ((Active*)get_instance(brevonsuitspin_3763_instances))->set_x(((Active*)get_single(brevonsuitpelvis_3771_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)get_instance(brevonsuitspin_3763_instances))->set_y(((Active*)get_single(brevonsuitpelvis_3771_instances, default_active_instance))->alterables->values.get(2));
    }
    event_1887_72_end: ;
}
void Frames::event_func_15685()
{
    // event 1888_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1888_72_end;
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(3)*-10);
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(3)*-10);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*6*((Active*)*it)->alterables->values.get(3));
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*5-10)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*-10+20)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4)*5*((Active*)*it)->alterables->values.get(3));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)-30)*10+10)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)+60)*-6+6)*((Active*)*it)->alterables->values.get(3));
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)-30)*-10+20)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)-30)*-6)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)-30)*10+10)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1888_72_end: ;
}
void Frames::event_func_15686()
{
    // event 1889_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1889_72_end;
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -20*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (135+((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(7)+(sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*3-3))*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(7)*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, (sin_deg(((Active*)*it)->alterables->values.get(6))*3-3)*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*-6+6)*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4)*4*((Active*)*it)->alterables->values.get(4));
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*-5+20)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(7)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
    }
    event_1889_72_end: ;
}
void Frames::event_func_15687()
{
    // event 1890_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1890_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (0.75))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1890_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+20)%math_helper%360);
        }
    }
    event_1890_72_end: ;
}
void Frames::event_func_15688()
{
    // event 1891_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1891_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (0.75))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1891_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (270))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1891_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+30)%math_helper%360);
        }
    }
    event_1891_72_end: ;
}
void Frames::event_func_15689()
{
    // event 1892_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1892_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, (sin_deg(((Active*)*it)->alterables->values.get(6))*3-3)*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*-6+6)*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4)*4*((Active*)*it)->alterables->values.get(5));
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*-5+20)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (135+((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(7)+(sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*3-3))*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -20*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(7)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(7)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
    }
    event_1892_72_end: ;
}
void Frames::event_func_15690()
{
    // event 1893_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1893_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0.75))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1893_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+20)%math_helper%360);
        }
    }
    event_1893_72_end: ;
}
void Frames::event_func_15691()
{
    // event 1894_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1894_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0.75))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1894_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (270))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1894_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+30)%math_helper%360);
        }
    }
    event_1894_72_end: ;
}
void Frames::event_func_15692()
{
    // event 1895_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1895_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+20*((Active*)*it)->alterables->values.get(6));
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -30*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -30*((Active*)*it)->alterables->values.get(6));
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -30*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -135*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -135*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
    }
    event_1895_72_end: ;
}
void Frames::event_func_15693()
{
    // event 1896_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1896_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+(sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*10*(1-get_max(((Active*)*it)->alterables->values.get(4), ((Active*)*it)->alterables->values.get(5)))-20)*((Active*)*it)->alterables->values.get(7));
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-90+sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*-10)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 120*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)-30)*-6+6)*((Active*)*it)->alterables->values.get(7));
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*10)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
    }
    event_1896_72_end: ;
}
void Frames::event_func_15694()
{
    // event 1897_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1897_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1897_72_end;
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-45*(1-get_max(((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4)*1.33333, ((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5)*1.33333)))*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((45+(sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*3-3)*((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4))*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4))*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((45+(sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*3-3)*((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4))*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5))*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-45*(1-get_max(((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(4)*1.33333, ((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(5)*1.33333)))*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
    }
    event_1897_72_end: ;
}
void Frames::event_func_15695()
{
    // event 1898_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1898_72_end;
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 45*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 90*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 135*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -135*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 90*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -135*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -135*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -135*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10)*40*((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4)*((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+cos_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10)*40*((Active*)*it)->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(8));
        }
    }
    event_1898_72_end: ;
}
void Frames::event_func_15696()
{
    // event 1899_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1899_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1899_72_end;
        ((Active*)get_instance(brevonsuitspin_3763_instances))->set_angle(((Active*)get_instance(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(6)*-10*((Active*)get_instance(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(4), 0);
        ((Active*)get_instance(brevonsuitspin_3763_instances))->set_visible(true);
    }
    event_1899_72_end: ;
}
void Frames::event_func_15697()
{
    // event 1900_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1900_72_end;
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)*it)->alterables->values.get(9));
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4)*60*((Active*)*it)->alterables->values.get(9));
        }
    }
    event_1900_72_end: ;
}
void Frames::event_func_15698()
{
    // event 1901_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1901_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+20*((Active*)*it)->alterables->values.get(11));
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -30*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -30*((Active*)*it)->alterables->values.get(11));
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -60*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, -60*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(11));
        }
    }
    event_1901_72_end: ;
}
void Frames::event_func_15699()
{
    // event 1902_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1902_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+20*((Active*)*it)->alterables->values.get(12));
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -30*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 60*((Active*)*it)->alterables->values.get(12));
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 60*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 60*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(12));
        }
    }
    event_1902_72_end: ;
}
void Frames::event_func_15700()
{
    // event 1903_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1903_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-20*((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->alterables->values.add(0, (30+sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*15)*6)*((Active*)*it)->alterables->values.get(10));
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*15)*6)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 120*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-90+sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*15)*-6)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (30+sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*15)*-4)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, (60+sin_deg(((Active*)*it)->alterables->values.get(6)*15)*4)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*15)*4)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6)*15)*4)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(10));
        }
    }
    event_1903_72_end: ;
}
void Frames::event_func_15701()
{
    // event 1904_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1904_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+40*((Active*)*it)->alterables->values.get(13));
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-40+sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*5)*((Active*)*it)->alterables->values.get(13));
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-40+sin_deg(((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*5)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, (-45-sin_deg(((Active*)*it)->alterables->values.get(6))*5)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 45*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -60*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-45+sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*5)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -90*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-45+sin_deg(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(6))*5)*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 180*((Active*)get_single(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(13));
        }
    }
    event_1904_72_end: ;
}
void Frames::event_func_15702()
{
    // event 1905_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1905_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1905_72_end;
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(brevonsuitspin_3763_instances))->set_direction(0);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_direction(0);
    }
    event_1905_72_end: ;
}
void Frames::event_func_15703()
{
    // event 1906_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1906_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1906_72_end;
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(brevonsuitspin_3763_instances))->set_direction(16);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_direction(16);
    }
    event_1906_72_end: ;
}
void Frames::event_func_15704()
{
    // event 1907_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1907_72_end;
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(3)*((Active*)*it)->alterables->values.get(4), 0);
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0)*((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4), 0);
        }
    }
    event_1907_72_end: ;
}
void Frames::event_func_15705()
{
    // event 1908_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1908_72_end;
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index));
            if (parent == NULL) goto pos_end_1908_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1908_72_0: ;
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index));
            if (parent == NULL) goto pos_end_1908_72_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1908_72_1: ;
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index));
            if (parent == NULL) goto pos_end_1908_72_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1908_72_2: ;
        }
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+8*((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8*((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
    }
    event_1908_72_end: ;
}
void Frames::event_func_15706()
{
    // event 1909_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1909_72_end;
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonsuitfrontleg_3772_instances, it.current_index));
            if (parent == NULL) goto pos_end_1909_72_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1909_72_0: ;
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonsuitbackleg_3767_instances, it.current_index));
            if (parent == NULL) goto pos_end_1909_72_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1909_72_1: ;
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonsuitbackknee_3768_instances, it.current_index));
            if (parent == NULL) goto pos_end_1909_72_2;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1909_72_2: ;
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonsuitfrontknee_3773_instances, it.current_index));
            if (parent == NULL) goto pos_end_1909_72_3;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1909_72_3: ;
        }
    }
    event_1909_72_end: ;
}
void Frames::event_func_15707()
{
    // event 1910_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1910_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1910_72_end;
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(5)-(((Active*)*it)->get_box_index(3)-((Active*)*it)->get_y())));
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(5)-(((Active*)*it)->get_box_index(3)-((Active*)*it)->get_y())));
        }
    }
    event_1910_72_end: ;
}
void Frames::event_func_15708()
{
    // event 1911_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1911_72_end;
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonsuittorso_3775_instances, it.current_index));
            if (parent == NULL) goto pos_end_1911_72_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1911_72_0: ;
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonsuitfrontarm_3776_instances, it.current_index));
            if (parent == NULL) goto pos_end_1911_72_1;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1911_72_1: ;
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonsuittorso_3775_instances, it.current_index));
            if (parent == NULL) goto pos_end_1911_72_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1911_72_2: ;
        }
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-((Active*)get_instance(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(4)*24);
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonsuitbackarm_3766_instances, it.current_index));
            if (parent == NULL) goto pos_end_1911_72_3;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1911_72_3: ;
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonsuittorso_3775_instances, it.current_index));
            if (parent == NULL) goto pos_end_1911_72_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1911_72_4: ;
        }
    }
    event_1911_72_end: ;
}
void Frames::event_func_15709()
{
    // event 1912_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1912_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1912_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->alterables->values.add(2, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(9));
        }
    }
    event_1912_72_end: ;
}
void Frames::event_func_15710()
{
    // event 1913_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1913_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1913_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(10, 1);
        }
    }
    event_1913_72_end: ;
}
void Frames::event_func_15711()
{
    // event 1914_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1914_72_end;
        ((Active*)get_instance(brevonsuitaura_3785_instances))->move_back();
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(brevon_3683_instances))->move_back();
    }
    event_1914_72_end: ;
}
void Frames::event_func_15712()
{
    // event 1915_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1915_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1915_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.05, 1));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.05, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.05, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.05, 0));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.05, 0));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.05, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.05, 0));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.05, 0));
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.05, 0));
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12)-0.05, 0));
        }
    }
    event_1915_72_end: ;
}
void Frames::event_func_15713()
{
    // event 1916_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1916_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1916_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1916_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1916_72_end: ;
}
void Frames::event_func_15714()
{
    // event 1917_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1917_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (30))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1917_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, ((Active*)*it)->alterables->values.get(14)+1+randrange(4));
        }
    }
    event_1917_72_end: ;
}
void Frames::event_func_15715()
{
    // event 1918_72
    bool or_result_1918_72 = false;
    bool or_temp_result_1918_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1918_72_0_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (5))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1918_72_0_end;
        or_result_1918_72 = true;
        or_temp_result_1918_72_0 = true;
    }
    or_event_1918_72_0_end: ;
    brevonsuithead_3770_instances.clear_saved_selection();
    if (or_temp_result_1918_72_0) {
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1918_72
    bool or_temp_result_1918_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1918_72_1_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (12))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1918_72_1_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(14)%math_helper%3) == (0))) goto or_event_1918_72_1_end;
        or_result_1918_72 = true;
        or_temp_result_1918_72_1 = true;
        or_event_1918_72_1_end: ;
        if (or_temp_result_1918_72_1) {
            brevonsuithead_3770_instances.save_selection();
        }
        if (!or_result_1918_72) goto or_final_or_event_1918_72_1_end;
        brevonsuithead_3770_instances.clear_selection();
        if (or_temp_result_1918_72_0 || or_temp_result_1918_72_1) {
            brevonsuithead_3770_instances.restore_selection();
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->alterables->values.set(11, 5);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    or_final_or_event_1918_72_1_end: ;
}
void Frames::event_func_15716()
{
    // event 1919_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1919_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (12))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1919_72_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(14)%math_helper%3) == (1))) goto event_1919_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->alterables->values.set(11, 4);
            ((Active*)*it)->alterables->values.set(13, 6);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_br_brevon_strike2_ogg_252, 27-1);
    }
    event_1919_72_end: ;
}
void Frames::event_func_15717()
{
    // event 1920_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1920_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) >= (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (12))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1920_72_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(14)%math_helper%3) == (2))) goto event_1920_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->alterables->values.set(11, 4);
            ((Active*)*it)->alterables->values.set(13, 7);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_br_brevon_strike1_ogg_253, 27-1);
    }
    event_1920_72_end: ;
}
void Frames::event_func_15718()
{
    // event 1921_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1921_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) >= (12))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1921_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->alterables->values.set(11, 8);
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_1921_72_end: ;
}
void Frames::event_func_15719()
{
    // event 1922_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1922_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1922_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(7)+get_max(get_min(((((get_angle_int(((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(1)-((Active*)get_instance(player_389_instances))->get_x()+30, ((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(2)-30-((Active*)get_instance(player_389_instances))->get_y())-180)-((Active*)*it)->alterables->values.get(7)+540)%math_helper%360)-180), 3), -1*3));
        }
    }
    event_1922_72_end: ;
}
void Frames::event_func_15720()
{
    // event 1923_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1923_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1923_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->alterables->values.get(7)+get_max(get_min(((((get_angle_int(((Active*)get_instance(player_389_instances))->get_x()-((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(1)+30, ((Active*)get_instance(brevonsuitpelvis_3771_instances, it.current_index, default_active_instance))->alterables->values.get(2)-30-((Active*)get_instance(player_389_instances))->get_y())-180)-((Active*)*it)->alterables->values.get(7)+540)%math_helper%360)-180), 3), -1*3));
        }
    }
    event_1923_72_end: ;
}
void Frames::event_func_15721()
{
    // event 1924_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1924_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (0.75))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1924_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (270))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1924_72_end;
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!brevonsuitfrontgun_3777_instances.has_selection()) goto event_1924_72_end;
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1924_72_0; single_instance_1924_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitfrontgun_3777_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitlaser_3741(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1924_72_0 == NULL)
                    single_instance_1924_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1924_72_0))->set_angle(((Active*)get_single(brevonsuitfrontgun_3777_instances, default_active_instance))->get_angle()+(((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(4)-1)*90, 0);
        ((Active*)((Active*)single_instance_1924_72_0))->alterables->values.set(2, ((Active*)get_single(brevonsuitfrontgun_3777_instances, default_active_instance))->get_angle()+(((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(4)-1)*90);
        ((Active*)((Active*)single_instance_1924_72_0))->alterables->values.set(0, ((Active*)single_instance_1924_72_0)->get_x());
        ((Active*)((Active*)single_instance_1924_72_0))->alterables->values.set(1, ((Active*)single_instance_1924_72_0)->get_y());
        ((Active*)single_instance_1924_72_0)->move_back(((Active*)get_single(brevonsuitfrontgun_3777_instances)));
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
        media.play_id(SOUND_BREVONMECH_LASER_343, -1, 1);
        ((Active*)((Active*)single_instance_1924_72_0))->alterables->values.set(3, 10);
    }
    event_1924_72_end: ;
}
void Frames::event_func_15722()
{
    // event 1925_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1925_72_end;
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!brevonsuitfrontgun_3777_instances.has_selection()) goto event_1925_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (270))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1925_72_end;
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1925_72_end: ;
}
void Frames::event_func_15723()
{
    // event 1926_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1926_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (0.75))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1926_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) >= (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (270))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1926_72_end;
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!brevonsuitbackgun_3765_instances.has_selection()) goto event_1926_72_end;
        FrameObject * single_instance_1926_72_0; single_instance_1926_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitbackgun_3765_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitlaser_3741(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1926_72_0 == NULL)
                    single_instance_1926_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1926_72_0))->set_angle(((Active*)get_single(brevonsuitbackgun_3765_instances, default_active_instance))->get_angle()+(((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(4)-1)*90, 0);
        ((Active*)((Active*)single_instance_1926_72_0))->alterables->values.set(2, ((Active*)get_single(brevonsuitbackgun_3765_instances, default_active_instance))->get_angle()+(((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(4)-1)*90);
        ((Active*)((Active*)single_instance_1926_72_0))->alterables->values.set(0, ((Active*)single_instance_1926_72_0)->get_x());
        ((Active*)((Active*)single_instance_1926_72_0))->alterables->values.set(1, ((Active*)single_instance_1926_72_0)->get_y());
        ((Active*)single_instance_1926_72_0)->move_back(((Active*)get_single(brevonsuitbackgun_3765_instances)));
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
        }
        media.play_id(SOUND_BREVONMECH_LASER_343, -1, 1);
        ((Active*)((Active*)single_instance_1926_72_0))->alterables->values.set(3, 10);
    }
    event_1926_72_end: ;
}
void Frames::event_func_15724()
{
    // event 1927_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1927_72_end;
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!brevonsuitbackgun_3765_instances.has_selection()) goto event_1927_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (270))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1927_72_end;
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_1927_72_end: ;
}
void Frames::event_func_15725()
{
    // event 1928_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1928_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (4))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1928_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.1, 0));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.1, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.1, 0));
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+0.05, 1));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, 0));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.1, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.1, 0));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.1, 0));
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.1, 0));
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12)-0.1, 0));
        }
    }
    event_1928_72_end: ;
}
void Frames::event_func_15726()
{
    // event 1929_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1929_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(13)) != (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1929_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0-((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1929_72_end: ;
}
void Frames::event_func_15727()
{
    // event 1930_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1930_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (20))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1930_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->alterables->values.get(13));
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1930_72_end: ;
}
void Frames::event_func_15728()
{
    // event 1931_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1931_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1931_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.1, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.1, 0));
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.1, 1));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.1, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.1, 0));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.1, 0));
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.1, 0));
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12)-0.1, 0));
        }
    }
    event_1931_72_end: ;
}
void Frames::event_func_15729()
{
    // event 1932_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1932_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1932_72_end;
        if (once_condition_1932_72) goto event_1932_72_end;
        once_condition_1932_72 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_br_brevon_takethis_ogg_254, 27-1);
    }
    event_1932_72_end: ;
}
void Frames::event_func_15730()
{
    // event 1933_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1933_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1933_72_end;
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_x_scale(1-(global_values->get(3)%math_helper%5)*0.1);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_y_scale(0.5+(global_values->get(3)%math_helper%5)*0.1);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_y(((Active*)get_instance(brevonsuittorso_3775_instances, default_active_instance))->get_y()-10);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_x(((Active*)get_instance(brevonsuittorso_3775_instances, default_active_instance))->get_x()-((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(4)*30);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_visible(true);
        ((Active*)get_instance(bossenergypunch_3587_instances))->move_back();
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_angle(((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(4)*45, 0);
    }
    event_1933_72_end: ;
}
void Frames::event_func_15731()
{
    // event 1934_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1934_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1934_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->alterables->values.get(2)-3.5);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 80);
        }
    }
    event_1934_72_end: ;
}
