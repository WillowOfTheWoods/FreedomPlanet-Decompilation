#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_13280()
{
    // event 1835_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1835_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1835_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1835_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)) > (0))) goto event_1835_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 5*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1835_62_end: ;
}
void Frames::event_func_13281()
{
    // event 1836_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1836_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1836_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1836_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)) <= (0))) goto event_1836_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 30*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1836_62_end: ;
}
void Frames::event_func_13282()
{
    // event 1837_62
    bool or_result_1837_62 = false;
    bool or_temp_result_1837_62_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1837_62_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1837_62_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1837_62_0_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (frame_right()+1000))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1837_62_0_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1837_62_0_end;
        or_result_1837_62 = true;
        or_temp_result_1837_62_0 = true;
    }
    or_event_1837_62_0_end: ;
    brevonmechweakspot_3316_instances.clear_saved_selection();
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1837_62_0) {
        brevonmechweakspot_3316_instances.save_selection();
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1837_62
    bool or_temp_result_1837_62_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1837_62_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1837_62_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1837_62_1_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (frame_left()-1000))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1837_62_1_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1837_62_1_end;
        or_result_1837_62 = true;
        or_temp_result_1837_62_1 = true;
        or_event_1837_62_1_end: ;
        if (or_temp_result_1837_62_1) {
            brevonmechweakspot_3316_instances.save_selection();
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1837_62) goto or_final_or_event_1837_62_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        brevonmechweakspot_3316_instances.empty_selection();
        if (or_temp_result_1837_62_0 || or_temp_result_1837_62_1) {
            brevonmechweakspot_3316_instances.restore_selection();
        }
        if (or_temp_result_1837_62_0 || or_temp_result_1837_62_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1837_62_0 || or_temp_result_1837_62_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(4)+50);
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->values.set(2, -800);
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(brevonmechtorso_2543_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction((((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)+1)*8);
        }
        brevonmechturret_3333_instances.clear_selection();
        for (ObjectIterator it(brevonmechturret_3333_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_x(-90);
        }
    }
    or_final_or_event_1837_62_1_end: ;
}
void Frames::event_func_13283()
{
    // event 1838_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1838_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1838_62_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)*-20);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
        }
    }
    event_1838_62_end: ;
}
void Frames::event_func_13284()
{
    // event 1839_62
    bool or_result_1839_62 = false;
    bool or_temp_result_1839_62_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1839_62_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1839_62_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1839_62_0_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (frame_left()-1000))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto or_event_1839_62_0_end;
        or_result_1839_62 = true;
        or_temp_result_1839_62_0 = true;
    }
    or_event_1839_62_0_end: ;
    brevonmechbackground_2513_instances.clear_saved_selection();
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1839_62_0) {
        brevonmechbackground_2513_instances.save_selection();
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1839_62
    bool or_temp_result_1839_62_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1839_62_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1839_62_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1839_62_1_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (frame_right()+1000))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto or_event_1839_62_1_end;
        or_result_1839_62 = true;
        or_temp_result_1839_62_1 = true;
        or_event_1839_62_1_end: ;
        if (or_temp_result_1839_62_1) {
            brevonmechbackground_2513_instances.save_selection();
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1839_62) goto or_final_or_event_1839_62_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        brevonmechbackground_2513_instances.empty_selection();
        if (or_temp_result_1839_62_0 || or_temp_result_1839_62_1) {
            brevonmechbackground_2513_instances.restore_selection();
        }
        if (or_temp_result_1839_62_0 || or_temp_result_1839_62_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1839_62_0 || or_temp_result_1839_62_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(brevonmechbackground_2513_instances, it.current_index, default_active_instance))->get_x());
        }
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    or_final_or_event_1839_62_1_end: ;
}
void Frames::event_func_13285()
{
    // event 1840_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1840_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1840_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1840_62_end;
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+20);
        }
    }
    event_1840_62_end: ;
}
void Frames::event_func_13286()
{
    // event 1841_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1841_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1841_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1841_62_end;
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)-20);
        }
    }
    event_1841_62_end: ;
}
void Frames::event_func_13287()
{
    // event 1842_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1842_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1842_62_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()-100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()+global_values->get(16)+100))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1842_62_end;
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1842_62_end: ;
}
void Frames::event_func_13288()
{
    // event 1843_62
    bool or_result_1843_62 = false;
    bool or_temp_result_1843_62_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1843_62_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1843_62_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1843_62_0_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (frame_right()+1200))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1843_62_0_end;
        or_result_1843_62 = true;
        or_temp_result_1843_62_0 = true;
    }
    or_event_1843_62_0_end: ;
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1843_62_0) {
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1843_62
    bool or_temp_result_1843_62_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1843_62_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1843_62_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1843_62_1_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (frame_left()-1200))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1843_62_1_end;
        or_result_1843_62 = true;
        or_temp_result_1843_62_1 = true;
        or_event_1843_62_1_end: ;
        if (or_temp_result_1843_62_1) {
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1843_62) goto or_final_or_event_1843_62_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        if (or_temp_result_1843_62_0 || or_temp_result_1843_62_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1843_62_0 || or_temp_result_1843_62_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0-((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(4)+50);
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    or_final_or_event_1843_62_1_end: ;
}
void Frames::event_func_13289()
{
    // event 1844_62
    bool or_result_1844_62 = false;
    bool or_temp_result_1844_62_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1844_62_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+400))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1844_62_0_end;
        or_result_1844_62 = true;
        or_temp_result_1844_62_0 = true;
    }
    or_event_1844_62_0_end: ;
    brevonmechtorso_2543_instances.clear_saved_selection();
    if (or_temp_result_1844_62_0) {
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1844_62
    bool or_temp_result_1844_62_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1844_62_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1844_62_1_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+400))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto or_event_1844_62_1_end;
        or_result_1844_62 = true;
        or_temp_result_1844_62_1 = true;
    }
    or_event_1844_62_1_end: ;
    brevonmechbackground_2513_instances.clear_saved_selection();
    if (or_temp_result_1844_62_1) {
        brevonmechbackground_2513_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1844_62
    bool or_temp_result_1844_62_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1844_62_2_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1844_62_2_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-400))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+400))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto or_event_1844_62_2_end;
        or_result_1844_62 = true;
        or_temp_result_1844_62_2 = true;
        or_event_1844_62_2_end: ;
        if (or_temp_result_1844_62_2) {
            brevonmechbackground_2513_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1844_62) goto or_final_or_event_1844_62_2_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechbackground_2513_instances.empty_selection();
        if (or_temp_result_1844_62_1 || or_temp_result_1844_62_2) {
            brevonmechbackground_2513_instances.restore_selection();
        }
        if (or_temp_result_1844_62_0 || or_temp_result_1844_62_1 || or_temp_result_1844_62_2) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        media.stop_sample(SOUND_ABSOLUTION_LIFTOFF_297);
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(4);
        }
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25), 5));
        }
    }
    or_final_or_event_1844_62_2_end: ;
}
void Frames::event_func_13290()
{
    // event 1845_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1845_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1845_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1845_62_end: ;
}
void Frames::event_func_13291()
{
    // event 1846_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1846_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (((Active*)get_instance(player_389_instances))->get_x()-300))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_instance(player_389_instances))->get_x()+300))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1846_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        media.play_id(SOUND_ABSOLUTION_LIFTOFF_297, -1, 1);
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(4);
        }
    }
    event_1846_62_end: ;
}
void Frames::event_func_13292()
{
    // event 1847_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1847_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1847_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.04, 1));
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.04, 0));
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2)*8);
            ((Active*)*it)->alterables->values.add(2, 10*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1847_62_end: ;
}
void Frames::event_func_13293()
{
    // event 1848_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1848_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1848_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1848_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(0, 90+((Active*)*it)->alterables->values.get(1)*-90);
        }
        media.stop_sample(SOUND_ABSOLUTION_LIFTOFF_297);
        media.play_id(SOUND_ABSOLUTION_LAND1_408, -1, 1);
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 20);
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        {
            loop_shockwave_running = true;
            int times = int(6);
            loop_shockwave_index = 0;
            while (loop_shockwave_index < times) {
                loop_shockwave_62();
                if (!loop_shockwave_running) break;
                loop_shockwave_index++;
            }
        }
    }
    event_1848_62_end: ;
}
void Frames::event_func_13294()
{
    // event 1849_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1849_62_end;
        brevonmechhead_2544_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonmechhead_2544_instances, playercharactersensor_383_instances)) goto event_1849_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1849_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)) <= (0))) goto event_1849_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1849_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1849_62_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1849_62_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
    }
    event_1849_62_end: ;
}
void Frames::event_func_13295()
{
    // event 1850_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1850_62_end;
        brevonmechhead_2544_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonmechhead_2544_instances, playercharactersensor_383_instances)) goto event_1850_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) != (1))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1850_62_end;
        if (!((((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.get(1)) <= (0))) goto event_1850_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1850_62_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1850_62_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) > (0))) goto event_1850_62_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_single(brevonmechanimations_2551_instances, default_active_instance))->alterables->values.get(1)*15);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(23, ((Active*)get_single(brevonmechanimations_2551_instances, default_active_instance))->alterables->values.get(1)*15);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, get_max(((Active*)get_single(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(11), get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23), ((Active*)get_single(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(12))));
    }
    event_1850_62_end: ;
}
void Frames::event_func_13296()
{
    // event 1851_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1851_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1851_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1851_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1851_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)get_instance(player_389_instances))->get_x()+((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)*-250-((Active*)*it)->alterables->values.get(2))*0.02+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(8, get_max(-7, get_min(((Active*)*it)->alterables->values.get(8), 7)));
        }
    }
    event_1851_62_end: ;
}
void Frames::event_func_13297()
{
    // event 1852_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1852_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1852_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1852_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, ((Active*)*it)->alterables->values.get(8));
        }
    }
    event_1852_62_end: ;
}
void Frames::event_func_13298()
{
    // event 1853_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1853_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1853_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(9), get_min(((Active*)*it)->alterables->values.get(2), ((Active*)*it)->alterables->values.get(10))));
        }
    }
    event_1853_62_end: ;
}
void Frames::event_func_13299()
{
    // event 1854_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1854_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1854_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1854_62_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
    }
    event_1854_62_end: ;
}
void Frames::event_func_13300()
{
    // event 1855_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1855_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1855_62_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (10))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1855_62_end;
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -10);
        }
        FrameObject * single_instance_1855_62_0; single_instance_1855_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonmechlaser_3254(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1855_62_0 == NULL)
                    single_instance_1855_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1855_62_0))->alterables->values.set(4, 90+((Active*)get_instance(brevonmechanimations_2551_instances, default_active_instance))->alterables->values.get(1)*-120);
        media.play_id(SOUND_ABSOLUTION_LASER_410, -1, 1);
        FrameObject * single_instance_1855_62_1; single_instance_1855_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbrevonmechwarning_3255(parent->x + 0, parent->y + -800), parent->layer);
                if (single_instance_1855_62_1 == NULL)
                    single_instance_1855_62_1 = new_obj;
            }
        }
    }
    event_1855_62_end: ;
}
void Frames::event_func_13301()
{
    // event 1856_62
    bool or_result_1856_62 = false;
    bool or_temp_result_1856_62_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1856_62_0_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1856_62_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1856_62_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (120))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1856_62_0_end;
        or_result_1856_62 = true;
        or_temp_result_1856_62_0 = true;
    }
    or_event_1856_62_0_end: ;
    brevonmechweakspot_3316_instances.clear_saved_selection();
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1856_62_0) {
        brevonmechweakspot_3316_instances.save_selection();
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1856_62
    bool or_temp_result_1856_62_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1856_62_1_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1856_62_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1856_62_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1856_62_1_end;
        or_result_1856_62 = true;
        or_temp_result_1856_62_1 = true;
        or_event_1856_62_1_end: ;
        if (or_temp_result_1856_62_1) {
            brevonmechweakspot_3316_instances.save_selection();
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1856_62) goto or_final_or_event_1856_62_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        brevonmechweakspot_3316_instances.empty_selection();
        if (or_temp_result_1856_62_0 || or_temp_result_1856_62_1) {
            brevonmechweakspot_3316_instances.restore_selection();
        }
        if (or_temp_result_1856_62_0 || or_temp_result_1856_62_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1856_62_0 || or_temp_result_1856_62_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        FrameObject * single_instance_1856_62_0; single_instance_1856_62_0 = NULL;
        // select single: true false false
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonmechlaser_3254(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1856_62_0 == NULL)
                    single_instance_1856_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1856_62_0))->alterables->values.set(4, 90+((Active*)get_single(brevonmechanimations_2551_instances, default_active_instance))->alterables->values.get(1)*-120);
        FrameObject * single_instance_1856_62_1; single_instance_1856_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectbrevonmechwarning_3255(parent->x + 0, parent->y + -800), parent->layer);
                if (single_instance_1856_62_1 == NULL)
                    single_instance_1856_62_1 = new_obj;
            }
        }
        media.play_id(SOUND_ABSOLUTION_LASER_410, -1, 1);
    }
    or_final_or_event_1856_62_1_end: ;
}
void Frames::event_func_13302()
{
    // event 1857_62
    bool or_result_1857_62 = false;
    bool or_temp_result_1857_62_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1857_62_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1857_62_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (150))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (120))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1857_62_0_end;
        or_result_1857_62 = true;
        or_temp_result_1857_62_0 = true;
    }
    or_event_1857_62_0_end: ;
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1857_62_0) {
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1857_62
    bool or_temp_result_1857_62_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1857_62_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (50))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1857_62_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1857_62_1_end;
        or_result_1857_62 = true;
        or_temp_result_1857_62_1 = true;
        or_event_1857_62_1_end: ;
        if (or_temp_result_1857_62_1) {
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1857_62) goto or_final_or_event_1857_62_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        if (or_temp_result_1857_62_0 || or_temp_result_1857_62_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1857_62_0 || or_temp_result_1857_62_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
        media.play_id(SOUND_ABSOLUTION_LAND2_409, -1, 1);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25), 5));
        }
    }
    or_final_or_event_1857_62_1_end: ;
}
void Frames::event_func_13303()
{
    // event 1858_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1858_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)*it)->alterables->values.get(4)))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1858_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1858_62_end: ;
}
void Frames::event_func_13304()
{
    // event 1859_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1859_62_end;
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1859_62_0: ;
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackshoulder_2514_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1859_62_1: ;
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1859_62_2: ;
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonmechfrontarm_2548_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_3;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1859_62_3: ;
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontknee_2542_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_4;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1859_62_4: ;
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontleg2_2541_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_5;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1859_62_5: ;
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontleg_2539_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_6;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1859_62_6: ;
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackarm_2516_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_7;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1859_62_7: ;
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechbackshoulder_2514_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_8;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1859_62_8: ;
        }
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index, default_active_instance))->alterables->values.get(3)+56);
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechabdomen_2540_instances, it.current_index));
            if (parent == NULL) goto pos_end_1859_62_9;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1859_62_9: ;
        }
    }
    event_1859_62_end: ;
}
void Frames::event_func_13305()
{
    // event 1860_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1860_62_end;
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(1)*-15);
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(1)*-15);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1860_62_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1860_62_0: ;
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechfrontshoulder_2547_instances, it.current_index));
            if (parent == NULL) goto pos_end_1860_62_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1860_62_1: ;
        }
    }
    event_1860_62_end: ;
}
void Frames::event_func_13306()
{
    // event 1861_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1861_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1861_62_end;
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1861_62_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -20, parent->get_y() + 17);
            pos_end_1861_62_0: ;
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1861_62_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 86, parent->get_y() + 17);
            pos_end_1861_62_1: ;
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1861_62_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 74, parent->get_y() + -10);
            pos_end_1861_62_2: ;
        }
        // icache destruction
        bossmorphertube2_3465_instances.clear_selection();
        brevonmechbackarm_2516_instances.clear_selection();
        bossmorpherbody_3470_instances.clear_selection();
        brevonmechfrontfoot_2545_instances.clear_selection();
        bossmorpherwheel3_3461_instances.clear_selection();
        brevonmechfrontwing_2546_instances.clear_selection();
        bossmorphergrill1_3467_instances.clear_selection();
        brevonmechfrontleg_2539_instances.clear_selection();
        bossmorpherorb1_3457_instances.clear_selection();
        brevonmechbackwing_2538_instances.clear_selection();
        bossmorphernode2_3468_instances.clear_selection();
        brevonmechfrontleg2_2541_instances.clear_selection();
        brevonmechhead_2544_instances.clear_selection();
        bossmorphernode1_3469_instances.clear_selection();
        bossmorpherorb2_3456_instances.clear_selection();
        bossmorphergrill2_3466_instances.clear_selection();
        bossmorpherwheel4_3460_instances.clear_selection();
        brevonmechfrontarm_2548_instances.clear_selection();
        brevonmechtorso_2543_instances.clear_selection();
        brevonmechfrontclaw_2549_instances.clear_selection();
        bossmorpherwheel2_3462_instances.clear_selection();
        bossmorpherwheel1_3463_instances.clear_selection();
        bossmorphertube1_3464_instances.clear_selection();
        brevonmechfrontknee_2542_instances.clear_selection();
        bossmorpherpelvis_3459_instances.clear_selection();
        brevonmechbackclaw_2515_instances.clear_selection();
        brevonmechaxle_2550_instances.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+(((Active*)get_instance(brevonmechweakspot_3316_instances, it.current_index, default_active_instance))->alterables->values.get(3)/math_helper/2)%math_helper%2);
        }
    }
    event_1861_62_end: ;
}
void Frames::event_func_13307()
{
    // event 1862_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1862_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1862_62_end;
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1862_62_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 20, parent->get_y() + 17);
            pos_end_1862_62_0: ;
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1862_62_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -86, parent->get_y() + 17);
            pos_end_1862_62_1: ;
        }
        // icache destruction
        bossmorphertube2_3465_instances.clear_selection();
        brevonmechbackarm_2516_instances.clear_selection();
        bossmorpherbody_3470_instances.clear_selection();
        brevonmechfrontfoot_2545_instances.clear_selection();
        bossmorpherwheel3_3461_instances.clear_selection();
        brevonmechfrontwing_2546_instances.clear_selection();
        bossmorphergrill1_3467_instances.clear_selection();
        brevonmechfrontleg_2539_instances.clear_selection();
        bossmorpherorb1_3457_instances.clear_selection();
        brevonmechbackwing_2538_instances.clear_selection();
        bossmorphernode2_3468_instances.clear_selection();
        brevonmechfrontleg2_2541_instances.clear_selection();
        brevonmechhead_2544_instances.clear_selection();
        bossmorphernode1_3469_instances.clear_selection();
        bossmorpherorb2_3456_instances.clear_selection();
        bossmorphergrill2_3466_instances.clear_selection();
        bossmorpherwheel4_3460_instances.clear_selection();
        brevonmechfrontarm_2548_instances.clear_selection();
        brevonmechtorso_2543_instances.clear_selection();
        brevonmechfrontclaw_2549_instances.clear_selection();
        bossmorpherwheel2_3462_instances.clear_selection();
        bossmorpherwheel1_3463_instances.clear_selection();
        bossmorphertube1_3464_instances.clear_selection();
        brevonmechfrontknee_2542_instances.clear_selection();
        brevonmechabdomen_2540_instances.clear_selection();
        bossmorpherpelvis_3459_instances.clear_selection();
        brevonmechbackclaw_2515_instances.clear_selection();
        brevonmechaxle_2550_instances.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(brevonmechweakspot_3316_instances, it.current_index, default_active_instance))->alterables->values.get(3)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(brevonmechtorso_2543_instances, it.current_index));
            if (parent == NULL) goto pos_end_1862_62_2;
            ((Active*)*it)->set_global_position(parent->get_x() + -74, parent->get_y() + -10);
            pos_end_1862_62_2: ;
        }
    }
    event_1862_62_end: ;
}
void Frames::event_func_13308()
{
    // event 1863_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1863_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1863_62_end: ;
}
void Frames::event_func_13309()
{
    // event 1864_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1864_62_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)-60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+120*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (323+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*8)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (230+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*-12)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (56+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*8)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 300*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0))*8*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
    }
    event_1864_62_end: ;
}
void Frames::event_func_13310()
{
    // event 1865_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1865_62_end;
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 353*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15-((Active*)*it)->alterables->values.get(1)*15)*15)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (15+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)*15-((Active*)*it)->alterables->values.get(1)*15)*15)*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 335*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 75*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 135*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 135*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 194*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 90*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 15*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0))*8*((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(3));
        }
    }
    event_1865_62_end: ;
}
void Frames::event_func_13311()
{
    // event 1866_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1866_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1866_62_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)-60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+120*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (323+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*8)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (230+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*-12)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (56+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*8)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-15+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 300*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0))*50*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
    }
    event_1866_62_end: ;
}
void Frames::event_func_13312()
{
    // event 1867_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1867_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (180))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1867_62_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)-60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+120*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (323+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*40)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (230+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*-60)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (56+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*40)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, (-15+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+60*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4)*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1)*15*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1))*4*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 300*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+sin_deg(((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(0))*128*((Active*)get_single(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(4));
        }
    }
    event_1867_62_end: ;
}
void Frames::event_func_13313()
{
    // event 1868_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1868_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1868_62_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0-((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1868_62_end: ;
}
void Frames::event_func_13314()
{
    // event 1869_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1869_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1869_62_end;
        if (not_always_1869_62 > loop_count) {
            not_always_1869_62 = loop_count + 2;
            goto event_1869_62_end;
        }
        not_always_1869_62 = loop_count + 2;
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            brevonmechfrontarm_2548_instances.clear_selection();
            ObjectIterator other_it(brevonmechfrontarm_2548_instances);
            brevonmechfrontshoulder_2547_instances.clear_selection();
            for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1869_62_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1869_62_0_end: ;
    }
    event_1869_62_end: ;
}
void Frames::event_func_13315()
{
    // event 1870_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1870_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1870_62_end;
        if (not_always_1870_62 > loop_count) {
            not_always_1870_62 = loop_count + 2;
            goto event_1870_62_end;
        }
        not_always_1870_62 = loop_count + 2;
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        {
            brevonmechfrontarm_2548_instances.clear_selection();
            ObjectIterator other_it(brevonmechfrontarm_2548_instances);
            brevonmechfrontshoulder_2547_instances.clear_selection();
            for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1870_62_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1870_62_0_end: ;
    }
    event_1870_62_end: ;
}
void Frames::event_func_13316()
{
    // event 1871_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1871_62_end;
        qualifier_30.clear_selection();
        for (QualifierIterator it(qualifier_30); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(brevonmechanimations_2551_instances, it.current_index, default_active_instance))->alterables->values.get(1)-1)*8+((Active*)get_single(brevonmechhead_2544_instances, it.current_index, default_active_instance))->get_frame());
            ((Active*)*it)->set_x(((Active*)get_single(brevonmechhead_2544_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(brevonmechhead_2544_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1871_62_end: ;
}
void Frames::event_func_13317()
{
    // event 1872_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1872_62_end;
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) != (0))) { it.deselect(); continue; }
        }
        if (!brevonmechfrontclaw_2549_instances.has_selection()) goto event_1872_62_end;
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)*it)->alterables->values.get(2)));
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)get_single(brevonmechfrontclaw_2549_instances, it.current_index, default_active_instance))->alterables->values.get(2)));
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y(), ((Active*)get_single(brevonmechfrontclaw_2549_instances, it.current_index, default_active_instance))->alterables->values.get(2)-8));
        }
    }
    event_1872_62_end: ;
}
void Frames::event_func_13318()
{
    // event 1873_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1873_62_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1873_62_end: ;
}
void Frames::event_func_13319()
{
    // event 1874_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1874_62_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (30))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1874_62_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(-50);
            ((Active*)*it)->destroy();
        }
    }
    event_1874_62_end: ;
}
void Frames::event_func_13320()
{
    // event 1875_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1875_62_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1875_62_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1875_62_end: ;
}
void Frames::event_func_13321()
{
    // event 1876_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1876_62_end;
        hazardshockwave_1524_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardshockwave_1524_instances, playercharactersensor_383_instances)) goto event_1876_62_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1876_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1876_62_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1876_62_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, ((Active*)get_single(hazardshockwave_1524_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1876_62_end: ;
}
void Frames::event_func_13322()
{
    // event 1880_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1880_62_end;
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
        }
        if (!brevonmechfrontclaw_2549_instances.has_selection()) goto event_1880_62_end;
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
    }
    event_1880_62_end: ;
}
void Frames::event_func_13323()
{
    // event 1881_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1881_62_end;
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechfrontclaw_2549_instances.has_selection()) goto event_1881_62_end;
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(2, 0);
    }
    event_1881_62_end: ;
}
void Frames::event_func_13324()
{
    // event 1882_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1882_62_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (3))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1882_62_end;
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 0.5);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1882_62_end: ;
}
void Frames::event_func_13325()
{
    // event 1883_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1883_62_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1883_62_end;
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, -0.5);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1883_62_end: ;
}
void Frames::event_func_13326()
{
    // event 1884_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1884_62_end;
        ((Active*)get_instance(brevonmechcharge_3325_instances))->set_visible(false);
    }
    event_1884_62_end: ;
}
void Frames::event_func_13327()
{
    // event 1885_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1885_62_end;
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (3))) { it.deselect(); continue; }
        }
        if (!brevonmechhead_2544_instances.has_selection()) goto event_1885_62_end;
        {
            FrameObject * parent = ((Active*)get_single(brevonmechhead_2544_instances));
            if (parent == NULL) goto pos_end_1885_62_0;
            ((Active*)get_instance(brevonmechcharge_3325_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1885_62_0: ;
        }
        ((Active*)get_instance(brevonmechcharge_3325_instances))->set_visible(true);
    }
    event_1885_62_end: ;
}
void Frames::event_func_13328()
{
    // event 1886_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1886_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1886_62_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 50);
        }
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 50);
            ((Active*)*it)->alterables->values.sub(4, 1);
        }
    }
    event_1886_62_end: ;
}
void Frames::event_func_13329()
{
    // event 1887_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1887_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1887_62_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
            ((Active*)*it)->alterables->values.set(2, 3);
        }
    }
    event_1887_62_end: ;
}
void Frames::event_func_13330()
{
    // event 1888_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1888_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1888_62_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, 1);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_1888_62_end: ;
}
void Frames::event_func_13331()
{
    // event 1889_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1889_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1889_62_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
            ((Active*)*it)->alterables->values.set(3, 99999);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
        }
    }
    event_1889_62_end: ;
}
void Frames::event_func_13332()
{
    // event 1890_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1890_62_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1890_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (20))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1890_62_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1890_62_0_end;
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
        dynamic_1890_62_0_end: ;
        FrameObject * single_instance_1890_62_1; single_instance_1890_62_1 = NULL;
        // select single: true false false
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator p_it(brevonmechhead_2544_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1890_62_1 == NULL)
                    single_instance_1890_62_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1890_62_1))->set_x(((Active*)single_instance_1890_62_1)->get_x()-50+randrange(101));
        ((Active*)((Active*)single_instance_1890_62_1))->set_y(((Active*)single_instance_1890_62_1)->get_y()-50+randrange(101));
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
        }
    }
    event_1890_62_end: ;
}
void Frames::event_func_13333()
{
    // event 1891_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1891_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1891_62_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto event_1891_62_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
        }
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        FrameObject * single_instance_1891_62_0; single_instance_1891_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechweakspot_3316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1891_62_0 == NULL)
                    single_instance_1891_62_0 = new_obj;
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
        ((Active*)get_instance(brevonmechturret_3333_instances))->alterables->values.set(1, 0);
    }
    event_1891_62_end: ;
}
void Frames::event_func_13334()
{
    // event 1892_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1892_62_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1892_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1892_62_end;
        FrameObject * single_instance_1892_62_0; single_instance_1892_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonmechweakspot_3316_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1892_62_0 == NULL)
                    single_instance_1892_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1892_62_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
    }
    event_1892_62_end: ;
}
void Frames::event_func_13335()
{
    // event 1893_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1893_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1893_62_end;
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1893_62_end: ;
}
void Frames::event_func_13336()
{
    // event 1894_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1894_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (45))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto event_1894_62_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto event_1894_62_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
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
    event_1894_62_end: ;
}
void Frames::event_func_13337()
{
    // event 1895_62
    bool or_result_1895_62 = false;
    bool or_temp_result_1895_62_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1895_62_0_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1895_62_0_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1895_62_0_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (frame_right()+1000))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1895_62_0_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (30))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1895_62_0_end;
        or_result_1895_62 = true;
        or_temp_result_1895_62_0 = true;
    }
    or_event_1895_62_0_end: ;
    brevonmechweakspot_3316_instances.clear_saved_selection();
    brevonmechtorso_2543_instances.clear_saved_selection();
    brevonmechanimations_2551_instances.clear_saved_selection();
    if (or_temp_result_1895_62_0) {
        brevonmechweakspot_3316_instances.save_selection();
        brevonmechanimations_2551_instances.save_selection();
        brevonmechtorso_2543_instances.save_selection();
    }
    // event 1895_62
    bool or_temp_result_1895_62_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto or_event_1895_62_1_end;
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1895_62_1_end;
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonmechanimations_2551_instances.has_selection()) goto or_event_1895_62_1_end;
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (frame_left()-1000))) { it.deselect(); continue; }
        }
        if (!brevonmechtorso_2543_instances.has_selection()) goto or_event_1895_62_1_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (30))) { it.deselect(); continue; }
        }
        if (!brevonmechweakspot_3316_instances.has_selection()) goto or_event_1895_62_1_end;
        or_result_1895_62 = true;
        or_temp_result_1895_62_1 = true;
        or_event_1895_62_1_end: ;
        if (or_temp_result_1895_62_1) {
            brevonmechweakspot_3316_instances.save_selection();
            brevonmechanimations_2551_instances.save_selection();
            brevonmechtorso_2543_instances.save_selection();
        }
        if (!or_result_1895_62) goto or_final_or_event_1895_62_1_end;
        brevonmechtorso_2543_instances.empty_selection();
        brevonmechanimations_2551_instances.empty_selection();
        brevonmechweakspot_3316_instances.empty_selection();
        if (or_temp_result_1895_62_0 || or_temp_result_1895_62_1) {
            brevonmechweakspot_3316_instances.restore_selection();
        }
        if (or_temp_result_1895_62_0 || or_temp_result_1895_62_1) {
            brevonmechanimations_2551_instances.restore_selection();
        }
        if (or_temp_result_1895_62_0 || or_temp_result_1895_62_1) {
            brevonmechtorso_2543_instances.restore_selection();
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
            group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1 = false;
    
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        global_values->set(4, 5);
        global_values->set(5, 444);
        global_values->set(6, 1800);
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
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
    or_final_or_event_1895_62_1_end: ;
}
void Frames::event_func_13338()
{
    // event 1896_62
    {
        if (!(group_main_engine_1)) goto event_1896_62_end;
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
    event_1896_62_end: ;
}
void Frames::event_func_13339()
{
    // event 1898_62
    {
        if (!(group_main_engine_1)) goto event_1898_62_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (270))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (frame_left()+global_values->get(16)))) { it.deselect(); continue; }
        }
        if (!effectbrevonmechwarning_3255_instances.has_selection()) goto event_1898_62_end;
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1898_62_end: ;
}
void Frames::event_func_13340()
{
    // event 1899_62
    {
        if (!(group_main_engine_1)) goto event_1899_62_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (270))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (frame_left()))) { it.deselect(); continue; }
        }
        if (!effectbrevonmechwarning_3255_instances.has_selection()) goto event_1899_62_end;
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1899_62_end: ;
}
void Frames::event_func_13341()
{
    // event 1900_62
    {
        if (!(group_main_engine_1)) goto event_1900_62_end;
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (90))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (frame_left()))) { it.deselect(); continue; }
        }
        if (!effectbrevonmechwarning_3255_instances.has_selection()) goto event_1900_62_end;
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1900_62_end: ;
}
void Frames::event_func_13342()
{
    // event 1904_62
    {
        if (!(group_main_engine_1)) goto event_1904_62_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(4)+80))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1904_62_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_1904_62_end: ;
}
void Frames::event_func_13343()
{
    // event 1905_62
    {
        if (!(group_main_engine_1)) goto event_1905_62_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(4)+80))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1905_62_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 2);
        }
    }
    event_1905_62_end: ;
}
void Frames::event_func_13344()
{
    // event 1906_62
    {
        if (!(group_main_engine_1)) goto event_1906_62_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-300))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1906_62_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1906_62_end: ;
}
void Frames::event_func_13345()
{
    // event 1907_62
    {
        if (!(group_main_engine_1)) goto event_1907_62_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (frame_left()+global_values->get(16)+300))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1907_62_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1907_62_end: ;
}
void Frames::event_func_13346()
{
    // event 1910_62
    {
        if (!(group_main_engine_1)) goto event_1910_62_end;
        if (!((brevonmechbackground_2513_instances.size()) == (0))) goto event_1910_62_end;
        bosshatchdoor_3317_instances.clear_selection();
        for (ObjectIterator it(bosshatchdoor_3317_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) < (height))) { it.deselect(); continue; }
        }
        if (!bosshatchdoor_3317_instances.has_selection()) goto event_1910_62_end;
        for (ObjectIterator it(bosshatchdoor_3317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+8);
        }
    }
    event_1910_62_end: ;
}
void Frames::event_func_13347()
{
    // event 1911_62
    {
        if (!(group_main_engine_1)) goto event_1911_62_end;
        if (!((global_values->get(3)%math_helper%20) == (0))) goto event_1911_62_end;
        if (!((brevonmechbackground_2513_instances.size()) == (0))) goto event_1911_62_end;
        enemymeteorroller_2421_instances.clear_selection();
        for (ObjectIterator it(enemymeteorroller_2421_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (2000))) { it.deselect(); continue; }
        }
        if (!enemymeteorroller_2421_instances.has_selection()) goto event_1911_62_end;
        FrameObject * single_instance_1911_62_0; single_instance_1911_62_0 = pick_random(enemymeteorroller_2421_instances);
        if (single_instance_1911_62_0 == NULL) goto event_1911_62_end;
        ((Active*)((Active*)single_instance_1911_62_0))->alterables->values.set(5, 1868);
        ((Active*)((Active*)single_instance_1911_62_0))->set_y(((Active*)single_instance_1911_62_0)->alterables->values.get(5)-200);
    }
    event_1911_62_end: ;
}
void Frames::event_func_13348()
{
    // event 1913_62
    {
        if (!(group_main_engine_1)) goto event_1913_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()))) goto event_1913_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-50))) goto event_1913_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()))) goto event_1913_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()))) goto event_1913_62_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(12)) == (0))) goto event_1913_62_end;
        if (not_always_1913_62 > loop_count) {
            not_always_1913_62 = loop_count + 2;
            goto event_1913_62_end;
        }
        not_always_1913_62 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 1);
    }
    event_1913_62_end: ;
}
void Frames::event_func_13349()
{
    // event 1914_62
    {
        if (!(group_main_engine_1)) goto event_1914_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()-30))) goto event_1914_62_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()+60))) goto event_1914_62_end;
        if (not_always_1914_62 > loop_count) {
            not_always_1914_62 = loop_count + 2;
            goto event_1914_62_end;
        }
        not_always_1914_62 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(20, 0);
    }
    event_1914_62_end: ;
}
void Frames::event_func_13350()
{
    // event 1915_62
    {
        if (!(group_main_engine_1)) goto event_1915_62_end;
        cameratriggerboss_424_instances.clear_selection();
        for (ObjectIterator it(cameratriggerboss_424_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!cameratriggerboss_424_instances.has_selection()) goto event_1915_62_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(playercharactersensor_383_instances, cameratriggerboss_424_instances)) goto event_1915_62_end;
        if (!((bosssparky_3327_instances.size()) > (0))) goto event_1915_62_end;
        {
            loop_trigger_deactivate_boss_running = true;
            int times = int(1);
            loop_trigger_deactivate_boss_index = 0;
            while (loop_trigger_deactivate_boss_index < times) {
                loop_trigger_deactivate_boss_23();
                if (!loop_trigger_deactivate_boss_running) break;
                loop_trigger_deactivate_boss_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1) {
            group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1 = true;
        }
    }
    event_1915_62_end: ;
}
void Frames::event_func_13351()
{
    // event 1919_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1919_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1919_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1919_62_end: ;
}
void Frames::event_func_13352()
{
    // event 1920_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1920_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1920_62_end;
        if (!((((Active*)get_single(bosssparky_3327_instances, default_active_instance))->alterables->values.get(10)%math_helper%16) == (0))) goto event_1920_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1920_62_end;
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -20);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        FrameObject * single_instance_1920_62_0; single_instance_1920_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyleftarm_3328_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssparkyplasmashot_3288(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1920_62_0 == NULL)
                    single_instance_1920_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1920_62_0))->set_direction(24);
        media.play_id(SOUND_COMMON_BLASTER5_438, -1, 1);
    }
    event_1920_62_end: ;
}
void Frames::event_func_13353()
{
    // event 1921_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1921_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1921_62_end;
        if (!((((Active*)get_single(bosssparky_3327_instances, default_active_instance))->alterables->values.get(10)%math_helper%16) == (8))) goto event_1921_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1921_62_end;
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 20);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        FrameObject * single_instance_1921_62_0; single_instance_1921_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyrightarm_3329_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssparkyplasmashot_3288(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1921_62_0 == NULL)
                    single_instance_1921_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1921_62_0))->set_direction(24);
        media.play_id(SOUND_COMMON_BLASTER5_438, -1, 1);
    }
    event_1921_62_end: ;
}
void Frames::event_func_13354()
{
    // event 1922_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1922_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1922_62_end;
        if (!((((Active*)get_single(bosssparky_3327_instances, default_active_instance))->alterables->values.get(10)%math_helper%16) == (0))) goto event_1922_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1922_62_end;
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -20);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        FrameObject * single_instance_1922_62_0; single_instance_1922_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyleftarm_3328_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1922_62_0 == NULL)
                    single_instance_1922_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1922_62_0))->set_direction(8);
        ((Active*)((Active*)single_instance_1922_62_0))->get_movement()->set_gravity(0);
        ((Active*)((Active*)single_instance_1922_62_0))->get_movement()->set_speed(80);
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
    }
    event_1922_62_end: ;
}
void Frames::event_func_13355()
{
    // event 1923_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1923_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1923_62_end;
        if (!((((Active*)get_single(bosssparky_3327_instances, default_active_instance))->alterables->values.get(10)%math_helper%16) == (8))) goto event_1923_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1923_62_end;
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 20);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        FrameObject * single_instance_1923_62_0; single_instance_1923_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyrightarm_3329_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypellet_863(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1923_62_0 == NULL)
                    single_instance_1923_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1923_62_0))->set_direction(8);
        ((Active*)((Active*)single_instance_1923_62_0))->get_movement()->set_gravity(0);
        ((Active*)((Active*)single_instance_1923_62_0))->get_movement()->set_speed(80);
        media.play_id(SOUND_COMMON_BLASTER1_28, -1, 1);
    }
    event_1923_62_end: ;
}
void Frames::event_func_13356()
{
    // event 1924_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1924_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (((Active*)*it)->alterables->values.get(8)-180))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1924_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 5);
        }
    }
    event_1924_62_end: ;
}
void Frames::event_func_13357()
{
    // event 1925_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1925_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (((Active*)*it)->alterables->values.get(8)+180))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1925_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -5);
        }
    }
    event_1925_62_end: ;
}
void Frames::event_func_13358()
{
    // event 1926_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1926_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (6))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1926_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.add(11, 1);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1926_62_end: ;
}
void Frames::event_func_13359()
{
    // event 1927_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1927_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1927_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.add(10, 1);
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(8)-180, get_min(((Active*)*it)->alterables->values.get(3), ((Active*)*it)->alterables->values.get(8)+180)));
        }
    }
    event_1927_62_end: ;
}
void Frames::event_func_13360()
{
    // event 1928_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1928_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (36))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1928_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1928_62_end: ;
}
void Frames::event_func_13361()
{
    // event 1929_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1929_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (4))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1929_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(1);
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1929_62_end: ;
}
void Frames::event_func_13362()
{
    // event 1930_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1930_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (6))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1930_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(7, 2);
        }
    }
    event_1930_62_end: ;
}
void Frames::event_func_13363()
{
    // event 1931_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1931_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1931_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.add(10, 1);
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+4)%math_helper%360);
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+356)%math_helper%360);
        }
    }
    event_1931_62_end: ;
}
void Frames::event_func_13364()
{
    // event 1932_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1932_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) <= (((Active*)*it)->alterables->values.get(8)-180))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1932_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 5);
        }
    }
    event_1932_62_end: ;
}
void Frames::event_func_13365()
{
    // event 1933_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1933_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (((Active*)*it)->alterables->values.get(8)+180))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1933_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -5);
        }
    }
    event_1933_62_end: ;
}
void Frames::event_func_13366()
{
    // event 1934_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1934_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1934_62_end;
        if (!((((Active*)get_single(bosssparky_3327_instances, default_active_instance))->alterables->values.get(10)%math_helper%8) == (0))) goto event_1934_62_end;
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -10);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        FrameObject * single_instance_1934_62_0; single_instance_1934_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyleftarm_3328_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssparkyplasmashot_3288(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1934_62_0 == NULL)
                    single_instance_1934_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1934_62_0))->set_direction(24);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
    }
    event_1934_62_end: ;
}
void Frames::event_func_13367()
{
    // event 1935_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1935_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (60))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1935_62_end;
        if (!((((Active*)get_single(bosssparky_3327_instances, default_active_instance))->alterables->values.get(10)%math_helper%8) == (4))) goto event_1935_62_end;
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 10);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        FrameObject * single_instance_1935_62_0; single_instance_1935_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyrightarm_3329_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosssparkyplasmashot_3288(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1935_62_0 == NULL)
                    single_instance_1935_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1935_62_0))->set_direction(24);
        media.play_id(SOUND_COMMON_BLASTER9_192, -1, 1);
    }
    event_1935_62_end: ;
}
void Frames::event_func_13368()
{
    // event 1936_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1936_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) >= (220))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1936_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->force_animation(0);
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1936_62_end: ;
}
void Frames::event_func_13369()
{
    // event 1937_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1937_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (6))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1937_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 6);
        }
    }
    event_1937_62_end: ;
}
void Frames::event_func_13370()
{
    // event 1938_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1938_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (6))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1938_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+4)%math_helper%360);
            ((Active*)*it)->force_animation(8);
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+356)%math_helper%360);
        }
    }
    event_1938_62_end: ;
}
void Frames::event_func_13371()
{
    // event 1939_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1939_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (6))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1939_62_end;
        if (!((global_values->get(3)%math_helper%7) == (0))) goto event_1939_62_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1939_62_0_end;
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
        dynamic_1939_62_0_end: ;
        FrameObject * single_instance_1939_62_1; single_instance_1939_62_1 = NULL;
        // select single: true false false
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator p_it(bosssparky_3327_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1939_62_1 == NULL)
                    single_instance_1939_62_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1939_62_1))->set_x(((Active*)single_instance_1939_62_1)->get_x()-30+randrange(61));
        ((Active*)((Active*)single_instance_1939_62_1))->set_y(((Active*)single_instance_1939_62_1)->get_y()-30+randrange(61));
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1939_62_end: ;
}
void Frames::event_func_13372()
{
    // event 1940_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1940_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (15))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1940_62_end;
        {
            loop_sparky_running = true;
            int times = int(5);
            loop_sparky_index = 0;
            while (loop_sparky_index < times) {
                loop_sparky_62();
                if (!loop_sparky_running) break;
                loop_sparky_index++;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        FrameObject * single_instance_1940_62_0; single_instance_1940_62_0 = NULL;
        // select single: true false false
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator p_it(bosssparky_3327_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1940_62_0 == NULL)
                    single_instance_1940_62_0 = new_obj;
            }
        }
        FrameObject * single_instance_1940_62_1; single_instance_1940_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparky_3327_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1940_62_1 == NULL)
                    single_instance_1940_62_1 = new_obj;
            }
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 7);
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_1940_62_end: ;
}
void Frames::event_func_13373()
{
    // event 1943_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1943_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (7))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1943_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(10, 1);
        }
    }
    event_1943_62_end: ;
}
void Frames::event_func_13374()
{
    // event 1944_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1944_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) > (30))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1944_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        media.play_id(SOUND_COMMON_REWARD_2_40, -1, 1);
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
            group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1 = false;
    
    }
    event_1944_62_end: ;
}
void Frames::event_func_13375()
{
    // event 1945_62
    {
        if (!(group_main_engine_1)) goto event_1945_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (-30))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1945_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-2, -30));
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_1945_62_end: ;
}
void Frames::event_func_13376()
{
    // event 1946_62
    {
        if (!(group_main_engine_1)) goto event_1946_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (30))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1946_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_min(((Active*)*it)->alterables->values.get(6)+2, 30));
            ((Active*)*it)->alterables->values.sub(4, 2);
        }
    }
    event_1946_62_end: ;
}
void Frames::event_func_13377()
{
    // event 1947_62
    {
        if (!(group_main_engine_1)) goto event_1947_62_end;
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bosssparkyleftarm_3328_instances.has_selection()) goto event_1947_62_end;
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 2);
        }
    }
    event_1947_62_end: ;
}
void Frames::event_func_13378()
{
    // event 1948_62
    {
        if (!(group_main_engine_1)) goto event_1948_62_end;
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssparkyleftarm_3328_instances.has_selection()) goto event_1948_62_end;
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 2);
        }
    }
    event_1948_62_end: ;
}
void Frames::event_func_13379()
{
    // event 1949_62
    {
        if (!(group_main_engine_1)) goto event_1949_62_end;
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bosssparkyrightarm_3329_instances.has_selection()) goto event_1949_62_end;
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 2);
        }
    }
    event_1949_62_end: ;
}
