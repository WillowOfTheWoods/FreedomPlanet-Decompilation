#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_10390()
{
    // event 1960_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1960_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (-2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1960_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.5, -2));
        }
    }
    event_1960_43_end: ;
}
void Frames::event_func_10391()
{
    // event 1961_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1961_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1961_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.5, 2));
        }
    }
    event_1961_43_end: ;
}
void Frames::event_func_10392()
{
    // event 1962_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1962_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1962_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1962_43_end: ;
}
void Frames::event_func_10393()
{
    // event 1963_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1963_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1963_43_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1963_43_end;
        FrameObject * single_instance_1963_43_0; single_instance_1963_43_0 = NULL;
        // select single: true false false
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator p_it(bossserpentinearm_1863_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_minibossflame_1199(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1963_43_0 == NULL)
                    single_instance_1963_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1963_43_0))->alterables->values.set(0, ((Active*)single_instance_1963_43_0)->get_x());
        ((Active*)((Active*)single_instance_1963_43_0))->alterables->values.set(1, ((Active*)single_instance_1963_43_0)->get_y());
        ((Active*)((Active*)single_instance_1963_43_0))->alterables->values.set(2, cos_deg(((Active*)get_single(bossserpentinearm_1863_instances, default_active_instance))->alterables->values.get(0)+sin_deg(((Active*)get_single(bossserpentinearm_1863_instances, default_active_instance))->alterables->values.get(1))*10)*6);
        ((Active*)((Active*)single_instance_1963_43_0))->alterables->values.set(3, sin_deg(((Active*)get_single(bossserpentinearm_1863_instances, default_active_instance))->alterables->values.get(0)+sin_deg(((Active*)get_single(bossserpentinearm_1863_instances, default_active_instance))->alterables->values.get(1))*10)*-6);
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+30)%math_helper%360);
        }
    }
    event_1963_43_end: ;
}
void Frames::event_func_10394()
{
    // event 1964_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1964_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1964_43_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 5);
        }
    }
    event_1964_43_end: ;
}
void Frames::event_func_10395()
{
    // event 1965_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1965_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1965_43_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -5);
        }
    }
    event_1965_43_end: ;
}
void Frames::event_func_10396()
{
    // event 1966_43
    bool or_result_1966_43 = false;
    bool or_temp_result_1966_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto or_event_1966_43_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1966_43_0_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (50))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1966_43_0_end;
        or_result_1966_43 = true;
        or_temp_result_1966_43_0 = true;
    }
    or_event_1966_43_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    bossserpentinearm_1863_instances.clear_saved_selection();
    if (or_temp_result_1966_43_0) {
        npcserpentine_947_instances.save_selection();
        bossserpentinearm_1863_instances.save_selection();
    }
    // event 1966_43
    bool or_temp_result_1966_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto or_event_1966_43_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1966_43_1_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-50))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1966_43_1_end;
        or_result_1966_43 = true;
        or_temp_result_1966_43_1 = true;
    }
    or_event_1966_43_1_end: ;
    if (or_temp_result_1966_43_1) {
        npcserpentine_947_instances.save_selection();
        bossserpentinearm_1863_instances.save_selection();
    }
    // event 1966_43
    bool or_temp_result_1966_43_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto or_event_1966_43_2_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1966_43_2_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (-130))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1966_43_2_end;
        or_result_1966_43 = true;
        or_temp_result_1966_43_2 = true;
    }
    or_event_1966_43_2_end: ;
    if (or_temp_result_1966_43_2) {
        npcserpentine_947_instances.save_selection();
        bossserpentinearm_1863_instances.save_selection();
    }
    // event 1966_43
    bool or_temp_result_1966_43_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto or_event_1966_43_3_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1966_43_3_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (-230))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto or_event_1966_43_3_end;
        or_result_1966_43 = true;
        or_temp_result_1966_43_3 = true;
        or_event_1966_43_3_end: ;
        if (or_temp_result_1966_43_3) {
            npcserpentine_947_instances.save_selection();
            bossserpentinearm_1863_instances.save_selection();
        }
        if (!or_result_1966_43) goto or_final_or_event_1966_43_3_end;
        bossserpentinearm_1863_instances.empty_selection();
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1966_43_0 || or_temp_result_1966_43_1 || or_temp_result_1966_43_2 || or_temp_result_1966_43_3) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1966_43_0 || or_temp_result_1966_43_1 || or_temp_result_1966_43_2 || or_temp_result_1966_43_3) {
            bossserpentinearm_1863_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(3);
        }
    }
    or_final_or_event_1966_43_3_end: ;
}
void Frames::event_func_10397()
{
    // event 1967_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1967_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(9)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1967_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(1, 3);
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_1967_43_end: ;
}
void Frames::event_func_10398()
{
    // event 1968_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1968_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1968_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1968_43_end: ;
}
void Frames::event_func_10399()
{
    // event 1969_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1969_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (20))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1969_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1969_43_end: ;
}
void Frames::event_func_10400()
{
    // event 1970_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1)) goto event_1970_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(9)))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1970_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(1, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1 = false;
    
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
    }
    event_1970_43_end: ;
}
void Frames::event_func_10401()
{
    // event 1971_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1971_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1971_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1971_43_end: ;
}
void Frames::event_func_10402()
{
    // event 1972_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1972_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1972_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_1972_43_end: ;
}
void Frames::event_func_10403()
{
    // event 1973_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1973_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1973_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_1973_43_end: ;
}
void Frames::event_func_10404()
{
    // event 1975_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1975_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1975_43_end;
        media.play_id(SOUND_JETBOOST_2_61, -1, 1);
        FrameObject * single_instance_1975_43_0; single_instance_1975_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcserpentine_947_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1975_43_0 == NULL)
                    single_instance_1975_43_0 = new_obj;
            }
        }
        ((Active*)single_instance_1975_43_0)->move_back(((Active*)get_single(npcserpentine_947_instances)));
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 10*((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1975_43_end: ;
}
void Frames::event_func_10405()
{
    // event 1976_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1976_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1976_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
        }
    }
    event_1976_43_end: ;
}
void Frames::event_func_10406()
{
    // event 1977_43
    bool or_result_1977_43 = false;
    bool or_temp_result_1977_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto or_event_1977_43_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()+80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1977_43_0_end;
        or_result_1977_43 = true;
        or_temp_result_1977_43_0 = true;
    }
    or_event_1977_43_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1977_43_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1977_43
    bool or_temp_result_1977_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto or_event_1977_43_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()-80))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1977_43_1_end;
        or_result_1977_43 = true;
        or_temp_result_1977_43_1 = true;
        or_event_1977_43_1_end: ;
        if (or_temp_result_1977_43_1) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1977_43) goto or_final_or_event_1977_43_1_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1977_43_0 || or_temp_result_1977_43_1) {
            npcserpentine_947_instances.restore_selection();
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->force_frame(9);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(3, 2);
        }
    }
    or_final_or_event_1977_43_1_end: ;
}
void Frames::event_func_10407()
{
    // event 1978_43
    bool or_result_1978_43 = false;
    bool or_temp_result_1978_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto or_event_1978_43_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1978_43_0_end;
        or_result_1978_43 = true;
        or_temp_result_1978_43_0 = true;
    }
    or_event_1978_43_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1978_43_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1978_43
    bool or_temp_result_1978_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto or_event_1978_43_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (15))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1978_43_1_end;
        or_result_1978_43 = true;
        or_temp_result_1978_43_1 = true;
    }
    or_event_1978_43_1_end: ;
    if (or_temp_result_1978_43_1) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1978_43
    bool or_temp_result_1978_43_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto or_event_1978_43_2_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (width-140))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1978_43_2_end;
        or_result_1978_43 = true;
        or_temp_result_1978_43_2 = true;
        or_event_1978_43_2_end: ;
        if (or_temp_result_1978_43_2) {
            npcserpentine_947_instances.save_selection();
        }
        if (!or_result_1978_43) goto or_final_or_event_1978_43_2_end;
        npcserpentine_947_instances.empty_selection();
        if (or_temp_result_1978_43_0 || or_temp_result_1978_43_1 || or_temp_result_1978_43_2) {
            npcserpentine_947_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        media.play_id(SOUND_COMMON_SKID_6, -1, 1);
    }
    or_final_or_event_1978_43_2_end: ;
}
void Frames::event_func_10408()
{
    // event 1979_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1979_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1979_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.5, 0));
        }
    }
    event_1979_43_end: ;
}
void Frames::event_func_10409()
{
    // event 1980_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1980_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1980_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-0.5, 0));
        }
    }
    event_1980_43_end: ;
}
void Frames::event_func_10410()
{
    // event 1981_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1981_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (2))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1981_43_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)*-1);
            ((Active*)*it)->alterables->values.add(8, 1+randrange(2));
            ((Active*)*it)->alterables->values.set(6, randrange(2));
        }
    }
    event_1981_43_end: ;
}
void Frames::event_func_10411()
{
    // event 1982_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1982_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) >= (5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1982_43_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1 = true;
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)*-1);
            ((Active*)*it)->alterables->values.set(8, randrange(5));
        }
    }
    event_1982_43_end: ;
}
void Frames::event_func_10412()
{
    // event 1983_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1)) goto event_1983_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1983_43_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_blaster_1 = true;
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(5)*-1);
        }
    }
    event_1983_43_end: ;
}
void Frames::event_func_10413()
{
    // event 1984_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1984_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
        }
    }
    event_1984_43_end: ;
}
void Frames::event_func_10414()
{
    // event 1985_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1985_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1985_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
        media.play_id(SOUND_SERP_MADLAUGH_193, -1, 1);
    }
    event_1985_43_end: ;
}
void Frames::event_func_10415()
{
    // event 1986_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1986_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1986_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(npcserpentine_947_instances, it.current_index));
            if (parent == NULL) goto pos_end_1986_43_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1986_43_0: ;
        }
    }
    event_1986_43_end: ;
}
void Frames::event_func_10416()
{
    // event 1987_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1987_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(12))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1987_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(13);
        }
    }
    event_1987_43_end: ;
}
void Frames::event_func_10417()
{
    // event 1988_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1988_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(13))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1988_43_end;
        if (not_always_1988_43 > loop_count) {
            not_always_1988_43 = loop_count + 2;
            goto event_1988_43_end;
        }
        not_always_1988_43 = loop_count + 2;
        FrameObject * single_instance_1988_43_0; single_instance_1988_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcserpentine_947_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossrapidbullet_1834(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1988_43_0 == NULL)
                    single_instance_1988_43_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_BLASTER2_194, -1, 1);
        ((Active*)((Active*)single_instance_1988_43_0))->alterables->values.set(2, ((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(4)+2);
        ((Active*)((Active*)single_instance_1988_43_0))->alterables->values.set(3, (((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(4)%math_helper%2)*2-1);
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1988_43_end: ;
}
void Frames::event_func_10418()
{
    // event 1989_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1989_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(13))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (8))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1989_43_end;
        if (not_always_1989_43 > loop_count) {
            not_always_1989_43 = loop_count + 2;
            goto event_1989_43_end;
        }
        not_always_1989_43 = loop_count + 2;
        FrameObject * single_instance_1989_43_0; single_instance_1989_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcserpentine_947_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossrapidbullet_1834(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1989_43_0 == NULL)
                    single_instance_1989_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1989_43_0))->alterables->values.set(2, ((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(4)+2);
        ((Active*)((Active*)single_instance_1989_43_0))->alterables->values.set(3, (((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(4)%math_helper%2)*2-1);
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        media.play_id(SOUND_COMMON_BLASTER2_194, -1, 1);
    }
    event_1989_43_end: ;
}
void Frames::event_func_10419()
{
    // event 1990_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_dual_crash_1)) goto event_1990_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(13))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1990_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1990_43_end: ;
}
void Frames::event_func_10420()
{
    // event 1994_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1994_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(9));
        }
    }
    event_1994_43_end: ;
}
void Frames::event_func_10421()
{
    // event 1995_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1995_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1995_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(7, 2);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -90);
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
    }
    event_1995_43_end: ;
}
void Frames::event_func_10422()
{
    // event 1996_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1996_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1996_43_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (0))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto event_1996_43_end;
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 5);
        }
    }
    event_1996_43_end: ;
}
void Frames::event_func_10423()
{
    // event 1997_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1997_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1997_43_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (-180))) { it.deselect(); continue; }
        }
        if (!bossserpentinearm_1863_instances.has_selection()) goto event_1997_43_end;
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, -5);
        }
    }
    event_1997_43_end: ;
}
void Frames::event_func_10424()
{
    // event 1999_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1)) goto event_1999_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(14)) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_1999_43_end;
            group_main_engine_level_specific_methods_bosses_boss_serpentine_missile_1 = false;
    
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1999_43_end: ;
}
void Frames::event_func_10425()
{
    // event 2003_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_2003_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2003_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_2003_43_end: ;
}
void Frames::event_func_10426()
{
    // event 2004_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_2004_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2004_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_2004_43_end: ;
}
void Frames::event_func_10427()
{
    // event 2005_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_2005_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2005_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, -4);
            ((Active*)*it)->alterables->values.set(2, 4*((Active*)*it)->alterables->values.get(5)*-1);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2005_43_end: ;
}
void Frames::event_func_10428()
{
    // event 2006_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_2006_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2006_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(3, 0.25);
        }
    }
    event_2006_43_end: ;
}
void Frames::event_func_10429()
{
    // event 2007_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_2007_43_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2007_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2007_43_end;
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    event_2007_43_end: ;
}
void Frames::event_func_10430()
{
    // event 2008_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_2008_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2008_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_2008_43_end;
        npcserpentine_947_instances.clear_selection();
        playerskinsash_418_instances.clear_selection();
        if (!check_overlap(npcserpentine_947_instances, playerskinsash_418_instances)) goto event_2008_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x(), ((Active*)get_instance(player_389_instances))->get_x()));
            ((Active*)*it)->alterables->values.set(5, -1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-2);
        }
    }
    event_2008_43_end: ;
}
void Frames::event_func_10431()
{
    // event 2009_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_2009_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2009_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) < (0))) goto event_2009_43_end;
        npcserpentine_947_instances.clear_selection();
        playerskinsash_418_instances.clear_selection();
        if (!check_overlap(npcserpentine_947_instances, playerskinsash_418_instances)) goto event_2009_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(((Active*)*it)->get_x(), ((Active*)get_instance(player_389_instances))->get_x()));
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+2);
        }
    }
    event_2009_43_end: ;
}
void Frames::event_func_10432()
{
    // event 2010_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1)) goto event_2010_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(9)))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2010_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->flags.disable(11);
        }
    }
    event_2010_43_end: ;
}
void Frames::event_func_10433()
{
    // event 2011_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2011_43_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!bossserpfloorcheck_1866_instances.has_selection()) goto event_2011_43_end;
        if (!check_not_overlap(bossserpfloorcheck_1866_instances, leveljccollapsingplatform_2444_instances)) goto event_2011_43_end;
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+4);
        }
    }
    event_2011_43_end: ;
}
void Frames::event_func_10434()
{
    // event 2012_43
    bool or_result_2012_43 = false;
    bool or_temp_result_2012_43_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto or_event_2012_43_0_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossserpfloorcheck_1866_instances.has_selection()) goto or_event_2012_43_0_end;
        or_result_2012_43 = true;
        or_temp_result_2012_43_0 = true;
    }
    or_event_2012_43_0_end: ;
    bossserpfloorcheck_1866_instances.clear_saved_selection();
    if (or_temp_result_2012_43_0) {
        bossserpfloorcheck_1866_instances.save_selection();
    }
    // event 2012_43
    bool or_temp_result_2012_43_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto or_event_2012_43_1_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        if (!check_overlap(bossserpfloorcheck_1866_instances, leveljccollapsingplatform_2444_instances)) goto or_event_2012_43_1_end;
        or_result_2012_43 = true;
        or_temp_result_2012_43_1 = true;
        or_event_2012_43_1_end: ;
        leveljccollapsingplatform_2444_instances.clear_saved_selection();
        if (or_temp_result_2012_43_1) {
            leveljccollapsingplatform_2444_instances.save_selection();
            bossserpfloorcheck_1866_instances.save_selection();
        }
        if (!or_result_2012_43) goto or_final_or_event_2012_43_1_end;
        leveljccollapsingplatform_2444_instances.empty_selection();
        bossserpfloorcheck_1866_instances.empty_selection();
        if (or_temp_result_2012_43_1) {
            leveljccollapsingplatform_2444_instances.restore_selection();
        }
        if (or_temp_result_2012_43_0 || or_temp_result_2012_43_1) {
            bossserpfloorcheck_1866_instances.restore_selection();
        }
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
    }
    or_final_or_event_2012_43_1_end: ;
}
void Frames::event_func_10435()
{
    // event 2015_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2015_43_end;
        bossserpfloorcheck_1866_instances.clear_selection();
        for (ObjectIterator it(bossserpfloorcheck_1866_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(npcserpentine_947_instances, it.current_index, default_active_instance))->get_x());
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, ((Active*)get_single(bossserpfloorcheck_1866_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_2015_43_end: ;
}
void Frames::event_func_10436()
{
    // event 2016_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2016_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(9)) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2016_43_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0), -90));
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(7));
        }
    }
    event_2016_43_end: ;
}
void Frames::event_func_10437()
{
    // event 2017_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2017_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(9))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2017_43_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_max(((Active*)*it)->alterables->values.get(0), -150));
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(7));
        }
    }
    event_2017_43_end: ;
}
void Frames::event_func_10438()
{
    // event 2018_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2018_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(9)) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2018_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(7)+16);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0), -90));
        }
    }
    event_2018_43_end: ;
}
void Frames::event_func_10439()
{
    // event 2019_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2019_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(9))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2019_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(7)+16);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0), -30));
        }
    }
    event_2019_43_end: ;
}
void Frames::event_func_10440()
{
    // event 2020_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2020_43_end;
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances, it.current_index));
            if (parent == NULL) goto pos_end_2020_43_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2020_43_0: ;
        }
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle((int(((Active*)*it)->alterables->values.get(0))/math_helper/10)*10, 0);
            ((Active*)*it)->set_direction(((Active*)get_instance(npcserpentine_947_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_visible(true);
        }
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(npcserpentine_947_instances, it.current_index));
            if (parent == NULL) goto pos_end_2020_43_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2020_43_1: ;
        }
    }
    event_2020_43_end: ;
}
void Frames::event_func_10441()
{
    // event 2022_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2022_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()-400))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2022_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) goto event_2022_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1) goto event_2022_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, 1);
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_43();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
    }
    event_2022_43_end: ;
}
void Frames::event_func_10442()
{
    // event 2023_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2023_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()+400))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2023_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) goto event_2023_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_jump_2_1) goto event_2023_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(5, -1);
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_43();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_jet_boost_1 = true;
        }
    }
    event_2023_43_end: ;
}
void Frames::event_func_10443()
{
    // event 2024_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2024_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2024_43_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2024_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        media.play_id(SOUND_SERP_BUGEYED_2_197, -1, 1);
    }
    event_2024_43_end: ;
}
void Frames::event_func_10444()
{
    // event 2025_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2025_43_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_2025_43_end: ;
}
void Frames::event_func_10445()
{
    // event 2027_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2027_43_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2027_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_2027_43_end: ;
}
void Frames::event_func_10446()
{
    // event 2028_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2028_43_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto event_2028_43_end;
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!shieldserpentine_1868_instances.has_selection()) goto event_2028_43_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2028_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) goto event_2028_43_end;
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_43();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = true;
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 10);
        }
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.stop_sample(SOUND_SERP_HIT1_196);
        media.play_id(SOUND_SERP_HIT1_196, -1, 1);
    }
    event_2028_43_end: ;
}
void Frames::event_func_10447()
{
    // event 2029_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2029_43_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2029_43_end;
        bossmissile_1835_instances.clear_selection();
        if (!check_overlap(bossserphitbox_1867_instances, bossmissile_1835_instances)) goto event_2029_43_end;
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!shieldserpentine_1868_instances.has_selection()) goto event_2029_43_end;
        for (ObjectIterator it(bossmissile_1835_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!bossmissile_1835_instances.has_selection()) goto event_2029_43_end;
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2029_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) goto event_2029_43_end;
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_43();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = true;
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.stop_sample(SOUND_SERP_HIT1_196);
        media.play_id(SOUND_SERP_HIT1_196, -1, 1);
    }
    event_2029_43_end: ;
}
void Frames::event_func_10448()
{
    // event 2030_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2030_43_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2030_43_end;
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(bossserphitbox_1867_instances, playerreflect_447_instances)) goto event_2030_43_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_2030_43_end;
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!shieldserpentine_1868_instances.has_selection()) goto event_2030_43_end;
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2030_43_end;
        if (group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) goto event_2030_43_end;
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_43();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = true;
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.stop_sample(SOUND_SERP_HIT1_196);
        media.play_id(SOUND_SERP_HIT1_196, -1, 1);
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 15);
        }
    }
    event_2030_43_end: ;
}
void Frames::event_func_10449()
{
    // event 2031_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2031_43_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(3)*30))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2031_43_end;
        {
            loop_boss_action_running = true;
            int times = int(1);
            loop_boss_action_index = 0;
            while (loop_boss_action_index < times) {
                loop_boss_action_43();
                if (!loop_boss_action_running) break;
                loop_boss_action_index++;
            }
        }
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_getting_hit_1 = true;
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.stop_sample(SOUND_SERP_HIT1_196);
        media.play_id(SOUND_SERP_HIT1_196, -1, 1);
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_2031_43_end: ;
}
void Frames::event_func_10450()
{
    // event 2033_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_1)) goto event_2033_43_end;
        bossserphitbox_1867_instances.clear_selection();
        for (ObjectIterator it(bossserphitbox_1867_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossserphitbox_1867_instances.has_selection()) goto event_2033_43_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossrapidbullet_1834_instances.clear_selection();
        for (ObjectIterator it(bossrapidbullet_1834_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        qualifier_6.clear_selection();
        for (QualifierIterator it(qualifier_6); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_level_specific_methods_bosses_boss_serpentine_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1) {
            group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1 = true;
        }
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        bosschargeglow_1865_instances.clear_selection();
        for (ObjectIterator it(bosschargeglow_1865_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        shieldserpentine_1868_instances.clear_selection();
        for (ObjectIterator it(shieldserpentine_1868_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(false);
    }
    event_2033_43_end: ;
}
void Frames::event_func_10451()
{
    // event 2034_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1)) goto event_2034_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(17)) < (3))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2034_43_end;
        FrameObject * single_instance_2034_43_0; single_instance_2034_43_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(npcserpentine_947_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2034_43_0 == NULL)
                    single_instance_2034_43_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2034_43_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_2034_43_0))->set_direction(6+((Active*)get_single(npcserpentine_947_instances, default_active_instance))->alterables->values.get(17)*2);
        ((Active*)((Active*)single_instance_2034_43_0))->alterables->values.set(0, 2);
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(17, 1);
        }
    }
    event_2034_43_end: ;
}
void Frames::event_func_10452()
{
    // event 2035_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1)) goto event_2035_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2035_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_2035_43_end: ;
}
void Frames::event_func_10453()
{
    // event 2036_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1)) goto event_2036_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2036_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
    }
    event_2036_43_end: ;
}
void Frames::event_func_10454()
{
    // event 2037_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1)) goto event_2037_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2037_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->alterables->values.set(3, -4);
            ((Active*)*it)->alterables->values.set(2, 4*((Active*)*it)->alterables->values.get(5)*-1);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)*it)->alterables->values.get(5)+2)*8+16);
        }
    }
    event_2037_43_end: ;
}
void Frames::event_func_10455()
{
    // event 2038_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1)) goto event_2038_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2038_43_end;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(3, 0.25);
        }
        media.set_channel_volume(32-1, get_max(media.get_channel_volume(-1 +32)-3, 0));
    }
    event_2038_43_end: ;
}
void Frames::event_func_10456()
{
    // event 2039_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1)) goto event_2039_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2039_43_end;
        if (not_always_2039_43 > loop_count) {
            not_always_2039_43 = loop_count + 2;
            goto event_2039_43_end;
        }
        not_always_2039_43 = loop_count + 2;
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
    }
    event_2039_43_end: ;
}
void Frames::event_func_10457()
{
    // event 2040_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1)) goto event_2040_43_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(bossgunship_2527_instances))->get_y()+800))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto event_2040_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(3, ((Active*)get_instance(player_389_instances))->get_x());
        if (!group_main_engine_level_specific_methods_bosses_boss_gunship_1) {
            group_main_engine_level_specific_methods_bosses_boss_gunship_1 = true;
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossserpentinearm_1863_instances.clear_selection();
        for (ObjectIterator it(bossserpentinearm_1863_instances); !it.end(); ++it) {
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
            group_main_engine_level_specific_methods_bosses_boss_serpentine_to_gunship_1 = false;
    
            group_main_engine_level_specific_methods_bosses_serpentine_projectiles_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_gunship_projectiles_1) {
            group_main_engine_level_specific_methods_bosses_gunship_projectiles_1 = true;
        }
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(11, 4);
        cameralimitbossbottom_420_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(frame_bottom(), ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(15)-70));
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_se_serp_kungfu_ogg_195, 25-1);
        media.play_id(SOUND_GUNSHIP_3_429, -1, 1);
    }
    event_2040_43_end: ;
}
void Frames::event_func_10458()
{
    // event 2042_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2042_43_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y());
    }
    event_2042_43_end: ;
}
void Frames::event_func_10459()
{
    // event 2043_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2043_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(3)) > (width-200))) goto event_2043_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(3, width-200);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(9, get_min(0, ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(9)));
    }
    event_2043_43_end: ;
}
void Frames::event_func_10460()
{
    // event 2044_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2044_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(3, ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(9));
        ((Active*)get_instance(bossgunshipbladeleft_2525_instances))->set_x_scale(1+sin_deg(global_values->get(3)*70)*0.8);
        ((Active*)get_instance(bossgunshipbladeleft_2525_instances))->move_back(((Active*)get_instance(bossgunshipturbineleft_2528_instances)));
        ((Active*)get_instance(bossgunshipbladeright_2526_instances))->set_x_scale(1+sin_deg(global_values->get(3)*70)*0.8);
        ((Active*)get_instance(bossgunshipbladeright_2526_instances))->move_back(((Active*)get_instance(bossgunshipturbineright_2529_instances)));
        ((Active*)get_instance(bossgunship_2527_instances))->set_x(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(3)+sin_deg(global_values->get(3))*((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(6));
        ((Active*)get_instance(bossgunship_2527_instances))->set_y(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(4)+(global_values->get(3)/math_helper/2)%math_helper%2+sin_deg(global_values->get(3)*2)*((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(7));
        ((Active*)get_instance(bossgunship_2527_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        ((Active*)get_instance(bossgunshipturbineleft_2528_instances))->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_action_x()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*-148);
        ((Active*)get_instance(bossgunshipturbineleft_2528_instances))->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_action_y()+sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*148);
        ((Active*)get_instance(bossgunshipturbineleft_2528_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        ((Active*)get_instance(bossgunshipcannonleft_2533_instances))->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_x()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipcannonleft_2533_instances))->alterables->values.get(3)+sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipcannonleft_2533_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossgunshipcannonleft_2533_instances))->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_y()-sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipcannonleft_2533_instances))->alterables->values.get(3)+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipcannonleft_2533_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossgunshipcannonleft_2533_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        ((Active*)get_instance(bossgunshipcannonright_2534_instances))->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_x()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipcannonright_2534_instances))->alterables->values.get(3)+sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipcannonright_2534_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossgunshipcannonright_2534_instances))->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_y()-sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipcannonright_2534_instances))->alterables->values.get(3)+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipcannonright_2534_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossgunshipcannonright_2534_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        ((Active*)get_instance(bossgunshipturbineright_2529_instances))->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_action_x()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*148);
        ((Active*)get_instance(bossgunshipturbineright_2529_instances))->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_action_y()-sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*148);
        ((Active*)get_instance(bossgunshipturbineright_2529_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        {
            FrameObject * parent = ((Active*)get_instance(bossgunshipturbineleft_2528_instances));
            if (parent == NULL) goto pos_end_2044_43_0;
            ((Active*)get_instance(bossgunshipbladeleft_2525_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2044_43_0: ;
        }
        {
            FrameObject * parent = ((Active*)get_instance(bossgunshipturbineright_2529_instances));
            if (parent == NULL) goto pos_end_2044_43_1;
            ((Active*)get_instance(bossgunshipbladeright_2526_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2044_43_1: ;
        }
        ((Active*)get_instance(bossgunshipbladeright_2526_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        ((Active*)get_instance(bossgunshipbladeleft_2525_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        {
            FrameObject * parent = ((Active*)get_instance(bossgunship_2527_instances));
            if (parent == NULL) goto pos_end_2044_43_2;
            ((Active*)get_instance(bossgunshippilot_2535_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2044_43_2: ;
        }
        ((Active*)get_instance(bossgunshippilot_2535_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->get_angle(), 0);
        bossgunshiplightleft_2531_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_x()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(3)+sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_y()-sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(3)+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        }
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_x()+sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(0));
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_y()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipplatform_2521_instances))->alterables->values.get(0));
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        bossgunshiplightright_2532_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_x()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(3)+sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_y()-sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(3)+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        }
        bossgunshiplight_2530_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplight_2530_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_x()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(3)+sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_y()-sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(3)+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        }
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_x()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(3)*-1);
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_y()+sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(3));
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->set_x(((Active*)get_instance(bossgunship_2527_instances))->get_x()+cos_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(3));
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->set_y(((Active*)get_instance(bossgunship_2527_instances))->get_y()-sin_deg(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5))*((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(3));
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->set_angle(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5), 0);
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->force_frame(((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(4));
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->force_frame(((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.get(4));
        bossgunshiptrooper_2522_instances.clear_selection();
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossgunshipplatform_2521_instances))->get_action_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(bossgunshipplatform_2521_instances))->get_action_y());
        }
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(12, 1);
        for (ObjectIterator it(bossgunshiptrooper_2522_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->move_back();
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->move_back();
        ((Active*)get_instance(bossgunshipplatform_2521_instances))->move_back();
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossgunship_2527_instances));
            if (parent == NULL) goto pos_end_2044_43_3;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2044_43_3: ;
        }
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(bossgunship_2527_instances))->get_angle(), 0);
        }
        ((Active*)get_instance(bossgunshippilot_2535_instances))->move_front();
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        cameralimitbossbottom_420_instances.clear_selection();
        for (ObjectIterator it(cameralimitbossbottom_420_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()-2, ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(15)-70));
        }
    }
    event_2044_43_end: ;
}
void Frames::event_func_10461()
{
    // event 2045_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2045_43_end;
        if (!((global_values->get(3)%math_helper%4) >= (2))) goto event_2045_43_end;
        ((Active*)get_instance(bossgunshipbladeleft_2525_instances))->move_front(((Active*)get_instance(bossgunshipturbineleft_2528_instances)));
        ((Active*)get_instance(bossgunshipbladeright_2526_instances))->move_front(((Active*)get_instance(bossgunshipturbineright_2529_instances)));
    }
    event_2045_43_end: ;
}
void Frames::event_func_10462()
{
    // event 2046_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2046_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5)) > (0))) goto event_2046_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(5, -0.25);
    }
    event_2046_43_end: ;
}
void Frames::event_func_10463()
{
    // event 2047_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2047_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5)) < (0))) goto event_2047_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(5, 0.25);
    }
    event_2047_43_end: ;
}
void Frames::event_func_10464()
{
    // event 2048_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_rising_1)) goto event_2048_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.sub(4, 6);
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_2048_43_end: ;
}
void Frames::event_func_10465()
{
    // event 2049_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_rising_1)) goto event_2049_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(4)) < (((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(15)-260))) goto event_2049_43_end;
            group_main_engine_level_specific_methods_bosses_boss_gunship_rising_1 = false;
    
        if (!group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1) {
            group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1 = true;
        }
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
            ((Active*)*it)->move_back();
        }
    }
    event_2049_43_end: ;
}
void Frames::event_func_10466()
{
    // event 2050_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2050_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(10, 0);
    }
    event_2050_43_end: ;
}
void Frames::event_func_10467()
{
    // event 2051_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2051_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(3)) > (((Active*)get_instance(player_389_instances))->get_x()+50))) goto event_2051_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(10, -1);
    }
    event_2051_43_end: ;
}
void Frames::event_func_10468()
{
    // event 2052_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2052_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(3)) < (((Active*)get_instance(player_389_instances))->get_x()-50))) goto event_2052_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(10, 1);
    }
    event_2052_43_end: ;
}
void Frames::event_func_10469()
{
    // event 2053_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2053_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(10)) == (-1))) goto event_2053_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(9, get_max(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(9)-0.1, -12));
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(5, get_min(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5)+0.4, 10));
    }
    event_2053_43_end: ;
}
void Frames::event_func_10470()
{
    // event 2054_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2054_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(10)) == (1))) goto event_2054_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(9, get_min(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(9)+0.1, 12));
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(5, get_max(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(5)-0.4, -10));
    }
    event_2054_43_end: ;
}
void Frames::event_func_10471()
{
    // event 2055_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2055_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(10)) >= (0))) goto event_2055_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(9)) < (0))) goto event_2055_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(9, get_min(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(9)+0.2, 0));
    }
    event_2055_43_end: ;
}
void Frames::event_func_10472()
{
    // event 2056_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2056_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(10)) <= (0))) goto event_2056_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(9)) > (0))) goto event_2056_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(9, get_max(((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(9)-0.2, 0));
    }
    event_2056_43_end: ;
}
void Frames::event_func_10473()
{
    // event 2057_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2057_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (0))) goto event_2057_43_end;
        bossgunshiphitbox_2536_instances.clear_selection();
        for (ObjectIterator it(bossgunshiphitbox_2536_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bossgunshiphitbox_2536_instances.has_selection()) goto event_2057_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(14, (((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(14)+1)%math_helper%4);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(11, 1+((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(14));
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(13, 0);
    }
    event_2057_43_end: ;
}
void Frames::event_func_10474()
{
    // event 2058_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2058_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (4))) goto event_2058_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(4)) > (((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(15)-360))) goto event_2058_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.sub(4, 2);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(12, 0);
    }
    event_2058_43_end: ;
}
void Frames::event_func_10475()
{
    // event 2059_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_moving_1)) goto event_2059_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) != (4))) goto event_2059_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(4)) < (((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(15)-260))) goto event_2059_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(4, 2);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(12, 0);
    }
    event_2059_43_end: ;
}
void Frames::event_func_10476()
{
    // event 2060_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2060_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (1))) goto event_2060_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(12)) == (1))) goto event_2060_43_end;
        ((Active*)get_instance(bossgunshipturbineleft_2528_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(12, 1);
    }
    event_2060_43_end: ;
}
void Frames::event_func_10477()
{
    // event 2061_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2061_43_end;
        if (!((((Active*)get_instance(bossgunshipturbineleft_2528_instances))->alterables->values.get(3)) > (0))) goto event_2061_43_end;
        ((Active*)get_instance(bossgunshipturbineleft_2528_instances))->alterables->values.add(3, 1);
    }
    event_2061_43_end: ;
}
void Frames::event_func_10478()
{
    // event 2062_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2062_43_end;
        if (!((((Active*)get_instance(bossgunshipturbineleft_2528_instances))->alterables->values.get(3)) > (0))) goto event_2062_43_end;
        bossgunshiplightleft_2531_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(bossgunshipturbineleft_2528_instances))->alterables->values.get(3)/math_helper/10))) { it.deselect(); continue; }
        }
        if (!bossgunshiplightleft_2531_instances.has_selection()) goto event_2062_43_end;
        for (ObjectIterator it(bossgunshiplightleft_2531_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_2062_43_end: ;
}
void Frames::event_func_10479()
{
    // event 2063_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2063_43_end;
        if (!((((Active*)get_instance(bossgunshipturbineleft_2528_instances))->alterables->values.get(3)) > (40))) goto event_2063_43_end;
        FrameObject * single_instance_2063_43_0; single_instance_2063_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossgunshipturbineleft_2528_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossgunshipflare_2509(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 142), parent->layer);
                if (single_instance_2063_43_0 == NULL)
                    single_instance_2063_43_0 = new_obj;
            }
        }
        ((Active*)get_instance(bossgunshipturbineleft_2528_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.sub(5, 6);
        media.play_id(SOUND_SHOCKWAVE_67, -1, 1);
        ((Active*)((Active*)single_instance_2063_43_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_2063_43_end: ;
}
void Frames::event_func_10480()
{
    // event 2064_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2064_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (1))) goto event_2064_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(12)) == (100))) goto event_2064_43_end;
        ((Active*)get_instance(bossgunshipturbineright_2529_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(12, 1);
    }
    event_2064_43_end: ;
}
void Frames::event_func_10481()
{
    // event 2065_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2065_43_end;
        if (!((((Active*)get_instance(bossgunshipturbineright_2529_instances))->alterables->values.get(3)) > (0))) goto event_2065_43_end;
        ((Active*)get_instance(bossgunshipturbineright_2529_instances))->alterables->values.add(3, 1);
    }
    event_2065_43_end: ;
}
void Frames::event_func_10482()
{
    // event 2066_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2066_43_end;
        if (!((((Active*)get_instance(bossgunshipturbineright_2529_instances))->alterables->values.get(3)) > (0))) goto event_2066_43_end;
        bossgunshiplightright_2532_instances.clear_selection();
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (((Active*)get_instance(bossgunshipturbineright_2529_instances))->alterables->values.get(3)/math_helper/10))) { it.deselect(); continue; }
        }
        if (!bossgunshiplightright_2532_instances.has_selection()) goto event_2066_43_end;
        for (ObjectIterator it(bossgunshiplightright_2532_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_2066_43_end: ;
}
void Frames::event_func_10483()
{
    // event 2067_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2067_43_end;
        if (!((((Active*)get_instance(bossgunshipturbineright_2529_instances))->alterables->values.get(3)) > (40))) goto event_2067_43_end;
        FrameObject * single_instance_2067_43_0; single_instance_2067_43_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossgunshipturbineright_2529_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossgunshipflare_2509(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 142), parent->layer);
                if (single_instance_2067_43_0 == NULL)
                    single_instance_2067_43_0 = new_obj;
            }
        }
        ((Active*)get_instance(bossgunshipturbineright_2529_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(5, 6);
        media.play_id(SOUND_SHOCKWAVE_67, -1, 1);
        ((Active*)((Active*)single_instance_2067_43_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_2067_43_end: ;
}
void Frames::event_func_10484()
{
    // event 2068_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2068_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (1))) goto event_2068_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(12)) >= (200))) goto event_2068_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(13)) < (2))) goto event_2068_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.add(13, 1);
    }
    event_2068_43_end: ;
}
void Frames::event_func_10485()
{
    // event 2069_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2069_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (1))) goto event_2069_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(13)) >= (2))) goto event_2069_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(12)) > (320))) goto event_2069_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(11, 0);
    }
    event_2069_43_end: ;
}
void Frames::event_func_10486()
{
    // event 2070_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2070_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (2))) goto event_2070_43_end;
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(11, 0);
    }
    event_2070_43_end: ;
}
void Frames::event_func_10487()
{
    // event 2071_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2071_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(11)) == (3))) goto event_2071_43_end;
        if (!((((Active*)get_instance(bossgunship_2527_instances))->alterables->values.get(13)) == (0))) goto event_2071_43_end;
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.set(4, 5);
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.set(4, 5);
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(bossgunshipmissilerackright_2524_instances))->alterables->values.set(5, 1);
        ((Active*)get_instance(bossgunship_2527_instances))->alterables->values.set(13, 1);
    }
    event_2071_43_end: ;
}
void Frames::event_func_10488()
{
    // event 2072_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2072_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(5)) > (0))) goto event_2072_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(5)) <= (300))) goto event_2072_43_end;
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.set(3, get_min(((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(3)+4, 65));
        ((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.add(5, 1);
    }
    event_2072_43_end: ;
}
void Frames::event_func_10489()
{
    // event 2073_43
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_gunship_1)) goto event_2073_43_end;
        if (!((((Active*)get_instance(bossgunshipmissilerackleft_2523_instances))->alterables->values.get(5)) == (2))) goto event_2073_43_end;
        media.play_id(SOUND_SCROLLINGPLATFORM_285, -1, 1);
    }
    event_2073_43_end: ;
}
