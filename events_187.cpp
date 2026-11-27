#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14596()
{
    // event 1936_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1936_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)) > (0.5))) goto event_1936_68_end;
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->force_animation(7);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->move_back();
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->force_animation(7);
    }
    event_1936_68_end: ;
}
void Frames::event_func_14597()
{
    // event 1937_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1937_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*18);
        }
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_x(((Active*)get_instance(bossmserpneck_3578_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*9);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_angle(((Active*)get_instance(bossmserpbackshoulder_3577_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_angle(((Active*)get_instance(bossmserptorso_3582_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*10, 0);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->set_y(((Active*)get_instance(bossmserpleftarm_3584_instances))->get_y()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*(30-((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)*6));
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_y(((Active*)get_instance(bossmserpleftclaw_3586_instances))->get_y()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*(30-((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)*6));
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_y(((Active*)get_instance(bossmserprightarm_3580_instances))->get_y()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*(30-((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)*6));
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_y(((Active*)get_instance(bossmserprightclaw_3581_instances))->get_y()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*(30-((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)*6));
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_x(((Active*)get_instance(bossmserprightarm_3580_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)*4);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_x(((Active*)get_instance(bossmserprightclaw_3581_instances))->get_x()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)*4);
    }
    event_1937_68_end: ;
}
void Frames::event_func_14598()
{
    // event 1938_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1938_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)) > (0.5))) goto event_1938_68_end;
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_direction(((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->get_direction()+16);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_direction(((Active*)get_instance(bossmserpbackshoulder_3577_instances))->get_direction()+16);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->force_animation(7);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->force_animation(7);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_angle(((Active*)get_instance(bossmserpleftclaw_3586_instances))->get_angle()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*90, 0);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_angle(((Active*)get_instance(bossmserprightclaw_3581_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*90, 0);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->force_frame(2);
        ((Active*)get_instance(bossmserprightarm_3580_instances))->force_frame(2);
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(3, (((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)+8)%math_helper%360);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_direction(24);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_direction(((Active*)get_instance(bossmserprightclaw_3581_instances))->get_direction()+16);
    }
    event_1938_68_end: ;
}
void Frames::event_func_14599()
{
    // event 1939_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1939_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_angle(((Active*)get_instance(bossmserptorso_3582_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(19)*30, 0);
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_angle(((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(19)*-20, 0);
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_angle(((Active*)get_instance(bossmserpneck_3578_instances))->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(19)*-50, 0);
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(19)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*-40, 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(19)*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*16);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(19)*10);
        }
    }
    event_1939_68_end: ;
}
void Frames::event_func_14600()
{
    // event 1940_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1940_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(19)) > (0.5))) goto event_1940_68_end;
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->force_animation(10);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->force_animation(10);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(3, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*-200);
    }
    event_1940_68_end: ;
}
void Frames::event_func_14601()
{
    // event 1941_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1)) goto event_1941_68_end;
        bossmserptail_3579_instances.clear_selection();
        for (ObjectIterator it(bossmserptail_3579_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossmserptorso_3582_instances));
            if (parent == NULL) goto pos_end_1941_68_0;
            ((Active*)*it)->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_1941_68_0: ;
        }
        for (ObjectIterator it(bossmserptail_3579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+sin_deg(sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0)))*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(4)+((Active*)get_instance(bossmserptorso_3582_instances))->get_angle())*(((Active*)*it)->alterables->values.get(0)*20));
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+cos_deg(sin_deg(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(3)-((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0)))*((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(4)+((Active*)get_instance(bossmserptorso_3582_instances))->get_angle())*(((Active*)*it)->alterables->values.get(0)*20), ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(6)-14));
        }
    }
    event_1941_68_end: ;
}
void Frames::event_func_14602()
{
    // event 1942_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1942_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1942_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(7)) > (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1942_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(5, -1);
    }
    event_1942_68_end: ;
}
void Frames::event_func_14603()
{
    // event 1943_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1943_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1943_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(7)) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1943_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(5, 1);
    }
    event_1943_68_end: ;
}
void Frames::event_func_14604()
{
    // event 1944_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1944_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1944_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1944_68_end: ;
}
void Frames::event_func_14605()
{
    // event 1945_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1945_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (35-((Active*)*it)->alterables->flags.get(4)*25))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1945_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)) >= (1))) goto event_1945_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1945_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
            ((Active*)*it)->alterables->values.sub(5, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1945_68_end: ;
}
void Frames::event_func_14606()
{
    // event 1946_68
    bool or_result_1946_68 = false;
    bool or_temp_result_1946_68_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto or_event_1946_68_0_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (35-((Active*)*it)->alterables->flags.get(4)*20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1946_68_0_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)) >= (1))) goto or_event_1946_68_0_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1946_68_0_end;
        or_result_1946_68 = true;
        or_temp_result_1946_68_0 = true;
    }
    or_event_1946_68_0_end: ;
    bossmserphead_3585_instances.clear_saved_selection();
    if (or_temp_result_1946_68_0) {
        bossmserphead_3585_instances.save_selection();
    }
    // event 1946_68
    bool or_temp_result_1946_68_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto or_event_1946_68_1_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (35-((Active*)*it)->alterables->flags.get(4)*20))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1946_68_1_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)) >= (1))) goto or_event_1946_68_1_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1946_68_1_end;
        or_result_1946_68 = true;
        or_temp_result_1946_68_1 = true;
        or_event_1946_68_1_end: ;
        if (or_temp_result_1946_68_1) {
            bossmserphead_3585_instances.save_selection();
        }
        if (!or_result_1946_68) goto or_final_or_event_1946_68_1_end;
        bossmserphead_3585_instances.clear_selection();
        if (or_temp_result_1946_68_0 || or_temp_result_1946_68_1) {
            bossmserphead_3585_instances.restore_selection();
        }
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 2-randrange(2));
            ((Active*)*it)->alterables->values.set(3, 6-((Active*)*it)->alterables->flags.get(1)*2);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->flags.toggle(1);
        }
    }
    or_final_or_event_1946_68_1_end: ;
}
void Frames::event_func_14607()
{
    // event 1947_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1947_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1947_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(10, get_min(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)+0.05));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(9, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)-0.05));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(11, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)-0.05));
    }
    event_1947_68_end: ;
}
void Frames::event_func_14608()
{
    // event 1948_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1948_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1948_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)) >= (1))) goto event_1948_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        media.play_id(SOUND_SERP_MEGAPUNCH_377, -1, 1);
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->move_front();
    }
    event_1948_68_end: ;
}
void Frames::event_func_14609()
{
    // event 1949_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1949_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1949_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(11, get_min(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)+0.1));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(9, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)-0.1));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(10, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)-0.1));
        {
            FrameObject * parent = ((Active*)get_instance(bossmserpleftclaw_3586_instances));
            if (parent == NULL) goto pos_end_1949_68_0;
            ((Active*)get_instance(bossenergypunch_3587_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1949_68_0: ;
        }
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_direction(((Active*)get_instance(bossmserpleftclaw_3586_instances))->get_direction());
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_visible(true);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_x(((Active*)get_instance(bossenergypunch_3587_instances))->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*40);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        ((Active*)get_instance(bossenergypunch_3587_instances))->move_front();
    }
    event_1949_68_end: ;
}
void Frames::event_func_14610()
{
    // event 1950_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1950_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1950_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)) >= (1))) goto event_1950_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.add(7, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*15);
    }
    event_1950_68_end: ;
}
void Frames::event_func_14611()
{
    // event 1951_68
    bool or_result_1951_68 = false;
    bool or_temp_result_1951_68_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto or_event_1951_68_0_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1951_68_0_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)) == (1))) goto or_event_1951_68_0_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(7)) > (((Active*)get_instance(player_389_instances))->get_x()))) goto or_event_1951_68_0_end;
        or_result_1951_68 = true;
        or_temp_result_1951_68_0 = true;
    }
    or_event_1951_68_0_end: ;
    bossmserphead_3585_instances.clear_saved_selection();
    if (or_temp_result_1951_68_0) {
        bossmserphead_3585_instances.save_selection();
    }
    // event 1951_68
    bool or_temp_result_1951_68_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto or_event_1951_68_1_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1951_68_1_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)) == (-1))) goto or_event_1951_68_1_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(7)) < (((Active*)get_instance(player_389_instances))->get_x()))) goto or_event_1951_68_1_end;
        or_result_1951_68 = true;
        or_temp_result_1951_68_1 = true;
        or_event_1951_68_1_end: ;
        if (or_temp_result_1951_68_1) {
            bossmserphead_3585_instances.save_selection();
        }
        if (!or_result_1951_68) goto or_final_or_event_1951_68_1_end;
        bossmserphead_3585_instances.clear_selection();
        if (or_temp_result_1951_68_0 || or_temp_result_1951_68_1) {
            bossmserphead_3585_instances.restore_selection();
        }
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    or_final_or_event_1951_68_1_end: ;
}
void Frames::event_func_14612()
{
    // event 1952_68
    bool or_result_1952_68 = false;
    bool or_temp_result_1952_68_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto or_event_1952_68_0_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1952_68_0_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)) == (-1))) goto or_event_1952_68_0_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(7)) <= (((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(20)))) goto or_event_1952_68_0_end;
        or_result_1952_68 = true;
        or_temp_result_1952_68_0 = true;
    }
    or_event_1952_68_0_end: ;
    bossmserphead_3585_instances.clear_saved_selection();
    if (or_temp_result_1952_68_0) {
        bossmserphead_3585_instances.save_selection();
    }
    // event 1952_68
    bool or_temp_result_1952_68_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto or_event_1952_68_1_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (30))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1952_68_1_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)) == (1))) goto or_event_1952_68_1_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(7)) >= (((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(21)))) goto or_event_1952_68_1_end;
        or_result_1952_68 = true;
        or_temp_result_1952_68_1 = true;
        or_event_1952_68_1_end: ;
        if (or_temp_result_1952_68_1) {
            bossmserphead_3585_instances.save_selection();
        }
        if (!or_result_1952_68) goto or_final_or_event_1952_68_1_end;
        bossmserphead_3585_instances.clear_selection();
        if (or_temp_result_1952_68_0 || or_temp_result_1952_68_1) {
            bossmserphead_3585_instances.restore_selection();
        }
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 3);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    or_final_or_event_1952_68_1_end: ;
}
void Frames::event_func_14613()
{
    // event 1953_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1953_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1953_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(9, get_min(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)+0.05));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(10, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(10)-0.05));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(11, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(11)-0.05));
    }
    event_1953_68_end: ;
}
void Frames::event_func_14614()
{
    // event 1954_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1954_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1954_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)) >= (1))) goto event_1954_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1954_68_end: ;
}
void Frames::event_func_14615()
{
    // event 1955_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1955_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1955_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(12, get_min(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)+0.05));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(9, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)-0.05));
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1955_68_end: ;
}
void Frames::event_func_14616()
{
    // event 1956_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1956_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1956_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)) < (1))) goto event_1956_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.sub(7, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*6);
    }
    event_1956_68_end: ;
}
void Frames::event_func_14617()
{
    // event 1957_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1957_68_end;
        bossmserplasersight_3563_instances.clear_selection();
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-3))) { it.deselect(); continue; }
        }
        if (!bossmserplasersight_3563_instances.has_selection()) goto event_1957_68_end;
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -4);
        }
    }
    event_1957_68_end: ;
}
void Frames::event_func_14618()
{
    // event 1958_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1958_68_end;
        bossmserplasersight_3563_instances.clear_selection();
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!bossmserplasersight_3563_instances.has_selection()) goto event_1958_68_end;
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 4);
        }
    }
    event_1958_68_end: ;
}
void Frames::event_func_14619()
{
    // event 1959_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1959_68_end;
        bossmserplasersight_3563_instances.clear_selection();
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->set_y(0);
        }
    }
    event_1959_68_end: ;
}
void Frames::event_func_14620()
{
    // event 1960_68
    bool or_result_1960_68 = false;
    bool or_temp_result_1960_68_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto or_event_1960_68_0_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1960_68_0_end;
        or_result_1960_68 = true;
        or_temp_result_1960_68_0 = true;
    }
    or_event_1960_68_0_end: ;
    bossmserphead_3585_instances.clear_saved_selection();
    if (or_temp_result_1960_68_0) {
        bossmserphead_3585_instances.save_selection();
    }
    // event 1960_68
    bool or_temp_result_1960_68_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto or_event_1960_68_1_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto or_event_1960_68_1_end;
        or_result_1960_68 = true;
        or_temp_result_1960_68_1 = true;
        or_event_1960_68_1_end: ;
        if (or_temp_result_1960_68_1) {
            bossmserphead_3585_instances.save_selection();
        }
        if (!or_result_1960_68) goto or_final_or_event_1960_68_1_end;
        bossmserphead_3585_instances.empty_selection();
        if (or_temp_result_1960_68_0 || or_temp_result_1960_68_1) {
            bossmserphead_3585_instances.restore_selection();
        }
        bossmserplasersight_3563_instances.clear_selection();
        for (ObjectIterator it(bossmserplasersight_3563_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bossmserprightclaw_3581_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_instance(bossmserprightclaw_3581_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_angle(((Active*)get_instance(bossmserptorso_3582_instances, it.current_index, default_active_instance))->alterables->values.get(5)*90-90+((Active*)*it)->alterables->values.get(0)*11.25, 0);
            ((Active*)*it)->set_visible(true);
        }
    }
    or_final_or_event_1960_68_1_end: ;
}
void Frames::event_func_14621()
{
    // event 1961_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1961_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1961_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 0.5);
        }
    }
    event_1961_68_end: ;
}
void Frames::event_func_14622()
{
    // event 1962_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1962_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1962_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)) > (0.5))) goto event_1962_68_end;
        if (!((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)%math_helper%6) == (0))) goto event_1962_68_end;
        FrameObject * single_instance_1962_68_0; single_instance_1962_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossburstshot_3557(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1962_68_0 == NULL)
                    single_instance_1962_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1962_68_0))->set_x(((Active*)single_instance_1962_68_0)->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*30);
        ((Active*)((Active*)single_instance_1962_68_0))->set_direction((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)+1)*8+1);
        ((Active*)((Active*)single_instance_1962_68_0))->set_y(((Active*)single_instance_1962_68_0)->get_y()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10);
    }
    event_1962_68_end: ;
}
void Frames::event_func_14623()
{
    // event 1963_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1963_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1963_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)) > (0.5))) goto event_1963_68_end;
        if (!((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)%math_helper%6) == (0))) goto event_1963_68_end;
        FrameObject * single_instance_1963_68_0; single_instance_1963_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossburstshot_3557(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1963_68_0 == NULL)
                    single_instance_1963_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1963_68_0))->set_x(((Active*)single_instance_1963_68_0)->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*30);
        ((Active*)((Active*)single_instance_1963_68_0))->set_direction((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)+1)*8-1);
        ((Active*)((Active*)single_instance_1963_68_0))->set_y(((Active*)single_instance_1963_68_0)->get_y()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10);
    }
    event_1963_68_end: ;
}
void Frames::event_func_14624()
{
    // event 1964_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1964_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1964_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)) > (0.5))) goto event_1964_68_end;
        if (!((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)%math_helper%6) == (0))) goto event_1964_68_end;
        FrameObject * single_instance_1964_68_0; single_instance_1964_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossburstshot_3557(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1964_68_0 == NULL)
                    single_instance_1964_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1964_68_0))->set_x(((Active*)single_instance_1964_68_0)->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*20);
        ((Active*)((Active*)single_instance_1964_68_0))->set_direction((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)+1)*8+4);
        ((Active*)((Active*)single_instance_1964_68_0))->set_y(((Active*)single_instance_1964_68_0)->get_y()-((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*30);
    }
    event_1964_68_end: ;
}
void Frames::event_func_14625()
{
    // event 1965_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1965_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1965_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)) > (0.5))) goto event_1965_68_end;
        if (!((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)%math_helper%6) == (0))) goto event_1965_68_end;
        FrameObject * single_instance_1965_68_0; single_instance_1965_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossburstshot_3557(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1965_68_0 == NULL)
                    single_instance_1965_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1965_68_0))->set_x(((Active*)single_instance_1965_68_0)->get_x()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*20);
        ((Active*)((Active*)single_instance_1965_68_0))->set_direction((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)+1)*8-4);
        ((Active*)((Active*)single_instance_1965_68_0))->set_y(((Active*)single_instance_1965_68_0)->get_y()+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*30);
    }
    event_1965_68_end: ;
}
void Frames::event_func_14626()
{
    // event 1966_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1966_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1966_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)) > (0.5))) goto event_1966_68_end;
        if (!((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)%math_helper%8) == (0))) goto event_1966_68_end;
        media.play_id(SOUND_SERP_MEGAFLAME_2_379, -1, 1);
    }
    event_1966_68_end: ;
}
void Frames::event_func_14627()
{
    // event 1967_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1967_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1967_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)) > (0.5))) goto event_1967_68_end;
        if (!((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)%math_helper%2) == (0))) goto event_1967_68_end;
        FrameObject * single_instance_1967_68_0; single_instance_1967_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectfireball_3558(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1967_68_0 == NULL)
                    single_instance_1967_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1967_68_0))->alterables->values.set(0, ((Active*)single_instance_1967_68_0)->get_y());
        ((Active*)((Active*)single_instance_1967_68_0))->alterables->values.set(2, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
    }
    event_1967_68_end: ;
}
void Frames::event_func_14628()
{
    // event 1968_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1968_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (80))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1968_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 5);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+1)%math_helper%2);
        }
    }
    event_1968_68_end: ;
}
void Frames::event_func_14629()
{
    // event 1969_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1969_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1969_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(12, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(12)-0.05));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(9, get_min(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)+0.05));
    }
    event_1969_68_end: ;
}
void Frames::event_func_14630()
{
    // event 1970_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1970_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (5))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1970_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)) >= (1))) goto event_1970_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1970_68_end: ;
}
void Frames::event_func_14631()
{
    // event 1971_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1971_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1971_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(13, get_min(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)+0.05));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(9, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)-0.05));
    }
    event_1971_68_end: ;
}
void Frames::event_func_14632()
{
    // event 1972_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1972_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1972_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)) >= (1))) goto event_1972_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 7);
        }
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(16, -18-((Active*)get_instance(bossmserprightclaw_3581_instances))->alterables->flags.get(2)*4);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(18, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*10);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->alterables->flags.disable(1);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        media.play_id(SOUND_MANTALITH_JUMP_147, -1, 1);
    }
    event_1972_68_end: ;
}
void Frames::event_func_14633()
{
    // event 1973_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1973_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1973_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(14, get_min(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)+0.1));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(9, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)-0.1));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(13, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(13)-0.1));
    }
    event_1973_68_end: ;
}
void Frames::event_func_14634()
{
    // event 1974_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1974_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1974_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)) >= (1))) goto event_1974_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(8, get_min(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(17), ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(8)+((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(16)));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.add(16, 1);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.add(7, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(18));
    }
    event_1974_68_end: ;
}
void Frames::event_func_14635()
{
    // event 1975_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1975_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1975_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(16)) > (-10))) goto event_1975_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+1, 10));
        }
    }
    event_1975_68_end: ;
}
void Frames::event_func_14636()
{
    // event 1976_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1976_68_end;
        if (!(((Active*)get_instance(bossmserprightclaw_3581_instances))->alterables->flags.is_on(2))) goto event_1976_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1976_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(16)) < (18))) goto event_1976_68_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1976_68_end;
        FrameObject * single_instance_1976_68_0; single_instance_1976_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossburstshot_3557(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1976_68_0 == NULL)
                    single_instance_1976_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1976_68_0))->set_direction(8);
    }
    event_1976_68_end: ;
}
void Frames::event_func_14637()
{
    // event 1977_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1977_68_end;
        if (!(((Active*)get_instance(bossmserprightclaw_3581_instances))->alterables->flags.is_on(2))) goto event_1977_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1977_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(16)) < (18))) goto event_1977_68_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1977_68_end;
        FrameObject * single_instance_1977_68_0; single_instance_1977_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossburstshot_3557(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1977_68_0 == NULL)
                    single_instance_1977_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1977_68_0))->set_direction(7);
    }
    event_1977_68_end: ;
}
void Frames::event_func_14638()
{
    // event 1978_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1978_68_end;
        if (!(((Active*)get_instance(bossmserprightclaw_3581_instances))->alterables->flags.is_on(2))) goto event_1978_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1978_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(16)) < (18))) goto event_1978_68_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1978_68_end;
        FrameObject * single_instance_1978_68_0; single_instance_1978_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossburstshot_3557(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1978_68_0 == NULL)
                    single_instance_1978_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1978_68_0))->set_direction(9);
    }
    event_1978_68_end: ;
}
void Frames::event_func_14639()
{
    // event 1979_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1979_68_end;
        if (!(((Active*)get_instance(bossmserprightclaw_3581_instances))->alterables->flags.is_on(2))) goto event_1979_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1979_68_end;
        bossburstshot_3557_instances.clear_selection();
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossburstshot_3557_instances.has_selection()) goto event_1979_68_end;
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            if (parent == NULL) goto pos_end_1979_68_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1979_68_0: ;
        }
    }
    event_1979_68_end: ;
}
void Frames::event_func_14640()
{
    // event 1980_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1980_68_end;
        if (!(((Active*)get_instance(bossmserprightclaw_3581_instances))->alterables->flags.is_off(2))) goto event_1980_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (10))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1980_68_end;
        if (!(((Active*)get_instance(bossmserprightclaw_3581_instances))->alterables->flags.is_off(1))) goto event_1980_68_end;
        media.play_id(SOUND_SHOCKWAVE_67, -1, 1);
        FrameObject * single_instance_1980_68_0; single_instance_1980_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserprightclaw_3581_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bossmserpflare_3556(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1980_68_0 == NULL)
                    single_instance_1980_68_0 = new_obj;
            }
        }
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->alterables->flags.enable(1);
    }
    event_1980_68_end: ;
}
void Frames::event_func_14641()
{
    // event 1981_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1981_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1981_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)) >= (1))) goto event_1981_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(16)) > (0))) goto event_1981_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(8)) >= (((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(17)))) goto event_1981_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 8);
        }
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(18, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(16, 0);
    }
    event_1981_68_end: ;
}
void Frames::event_func_14642()
{
    // event 1982_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1982_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (8))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1982_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(9, get_min(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)+0.05));
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(14, get_max(0, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(14)-0.05));
    }
    event_1982_68_end: ;
}
void Frames::event_func_14643()
{
    // event 1983_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1983_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (8))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1983_68_end;
        if (!((((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(9)) >= (1))) goto event_1983_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1983_68_end: ;
}
void Frames::event_func_14644()
{
    // event 1984_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1984_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1984_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 40);
        }
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 120);
            ((Active*)*it)->alterables->values.sub(7, 1);
        }
        media.play_id(SOUND_MUTANT_HIT_380, -1, 1);
    }
    event_1984_68_end: ;
}
void Frames::event_func_14645()
{
    // event 1985_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1985_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1985_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_1985_68_end: ;
}
void Frames::event_func_14646()
{
    // event 1986_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1986_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (8))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1986_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)*it)->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->force_frame((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmserptorso_3582_instances))->force_frame((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->force_frame((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        bossmserptail_3579_instances.clear_selection();
        for (ObjectIterator it(bossmserptail_3579_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)get_single(bossmserphead_3585_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
        ((Active*)get_instance(bossmserpneck_3578_instances))->force_frame((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
    }
    event_1986_68_end: ;
}
void Frames::event_func_14647()
{
    // event 1987_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1987_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (8))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1987_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)*it)->alterables->values.get(2)/math_helper/2)%math_helper%2+2);
        }
    }
    event_1987_68_end: ;
}
void Frames::event_func_14648()
{
    // event 1988_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1988_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (1))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1988_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_75+global_strings->get(4)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(4)+str_0_1_123);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_reset_music_124+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 20);
        }
    }
    event_1988_68_end: ;
}
void Frames::event_func_14649()
{
    // event 1989_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1989_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) < (60))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1989_68_end;
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(9, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(19, 1);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 60);
        }
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(10, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.set(14, 0);
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_stop_music_83);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_unqueue_music_70);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 4);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
        ((Active*)get_instance(npcserpentine_947_instances))->alterables->values.set(0, 8);
        media.play_id(SOUND_LAVAWALL_311, 29-1, 0);
        media.lock(29-1);
            group_pause_1 = false;
    
    }
    event_1989_68_end: ;
}
void Frames::event_func_14650()
{
    // event 1990_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1990_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1990_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        media.set_channel_volume(29-1, get_min(((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4), 100));
    }
    event_1990_68_end: ;
}
void Frames::event_func_14651()
{
    // event 1991_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1991_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (10))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1991_68_end;
        if (!((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)%math_helper%5) == (0))) goto event_1991_68_end;
        if (not_always_1991_68 > loop_count) {
            not_always_1991_68 = loop_count + 2;
            goto event_1991_68_end;
        }
        not_always_1991_68 = loop_count + 2;
        FrameObject * single_instance_1991_68_0; single_instance_1991_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserptorso_3582_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1991_68_0 == NULL)
                    single_instance_1991_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1991_68_0))->force_speed(100);
        ((Active*)((Active*)single_instance_1991_68_0))->set_x(((Active*)single_instance_1991_68_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_1991_68_0))->set_y(((Active*)single_instance_1991_68_0)->get_y()-40+randrange(81));
    }
    event_1991_68_end: ;
}
void Frames::event_func_14652()
{
    // event 1992_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1992_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (10))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1992_68_end;
        if (!((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)%math_helper%13) == (0))) goto event_1992_68_end;
        if (not_always_1992_68 > loop_count) {
            not_always_1992_68 = loop_count + 2;
            goto event_1992_68_end;
        }
        not_always_1992_68 = loop_count + 2;
        FrameObject * single_instance_1992_68_0; single_instance_1992_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserptorso_3582_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1992_68_0 == NULL)
                    single_instance_1992_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1992_68_0))->force_speed(100);
        ((Active*)((Active*)single_instance_1992_68_0))->set_x(((Active*)single_instance_1992_68_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_1992_68_0))->set_y(((Active*)single_instance_1992_68_0)->get_y()-40+randrange(81));
        media.play_id(SOUND_MUTANT_FORM_376, -1, 1);
    }
    event_1992_68_end: ;
}
void Frames::event_func_14653()
{
    // event 1993_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1993_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (100))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1993_68_end;
        if (!((((Active*)get_single(bossmserphead_3585_instances, default_active_instance))->alterables->values.get(4)%math_helper%7) == (0))) goto event_1993_68_end;
        if (not_always_1993_68 > loop_count) {
            not_always_1993_68 = loop_count + 2;
            goto event_1993_68_end;
        }
        not_always_1993_68 = loop_count + 2;
        FrameObject * single_instance_1993_68_0; single_instance_1993_68_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bossmserptorso_3582_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1993_68_0 == NULL)
                    single_instance_1993_68_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1993_68_0))->force_speed(100);
        ((Active*)((Active*)single_instance_1993_68_0))->set_x(((Active*)single_instance_1993_68_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_1993_68_0))->set_y(((Active*)single_instance_1993_68_0)->get_y()-40+randrange(81));
    }
    event_1993_68_end: ;
}
void Frames::event_func_14654()
{
    // event 1994_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1994_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1994_68_end;
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!effectsexplosion02_411_instances.has_selection()) goto event_1994_68_end;
        FrameObject * single_instance_1994_68_0; single_instance_1994_68_0 = pick_random(effectsexplosion02_411_instances);
        if (single_instance_1994_68_0 == NULL) goto event_1994_68_end;
        ((Active*)((Active*)single_instance_1994_68_0))->alterables->flags.enable(2);
        FrameObject * single_instance_1994_68_1; single_instance_1994_68_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_npctransformbubble_3555(((Active*)single_instance_1994_68_0)->x + 0, ((Active*)single_instance_1994_68_0)->y + 0), ((Active*)single_instance_1994_68_0)->layer);
            if (single_instance_1994_68_1 == NULL)
                single_instance_1994_68_1 = new_obj;
        }
        ((Active*)single_instance_1994_68_1)->move_back(((Active*)single_instance_1994_68_0));
    }
    event_1994_68_end: ;
}
void Frames::event_func_14655()
{
    // event 1995_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1995_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (60))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1995_68_end;
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(((Active*)*it)->alterables->values.get(2)*0.1);
            ((Active*)*it)->alterables->values.sub(2, 2);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-6);
        }
    }
    event_1995_68_end: ;
}
void Frames::event_func_14656()
{
    // event 1996_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1996_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1996_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1996_68_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
    }
    event_1996_68_end: ;
}
void Frames::event_func_14657()
{
    // event 1997_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1997_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (10))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1997_68_end;
        if (!((levelcardfade_461_instances.size()) == (0))) goto event_1997_68_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 3);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1997_68_end: ;
}
void Frames::event_func_14658()
{
    // event 1998_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1998_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (10))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1998_68_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(0)*4, 0));
        }
    }
    event_1998_68_end: ;
}
void Frames::event_func_14659()
{
    // event 1999_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_1999_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (70))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_1999_68_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 2);
    }
    event_1999_68_end: ;
}
void Frames::event_func_14660()
{
    // event 2000_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_2000_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (140))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2000_68_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
    }
    event_2000_68_end: ;
}
void Frames::event_func_14661()
{
    // event 2001_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_2001_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (60))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (230))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2001_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        media.stop_samples();
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        media.unlock(29-1);
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_2001_68_end: ;
}
void Frames::event_func_14662()
{
    // event 2002_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_2002_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (61))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2002_68_end;
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_2002_68_end: ;
}
void Frames::event_func_14663()
{
    // event 2003_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_2003_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (61))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (120))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2003_68_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_2003_68_end: ;
}
void Frames::event_func_14664()
{
    // event 2004_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_2004_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (61))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (50))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2004_68_end;
        if (!((((Active*)get_instance(levelcardfade_461_instances, default_active_instance))->layer->index+1) < (6))) goto event_2004_68_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2004_68_end: ;
}
void Frames::event_func_14665()
{
    // event 2005_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_2005_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (61))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (120))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2005_68_end;
        ((Active*)get_instance(bossmserpneck_3578_instances))->set_visible(false);
        npctransformbubble_3555_instances.clear_selection();
        for (ObjectIterator it(npctransformbubble_3555_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bossmserptail_3579_instances.clear_selection();
        for (ObjectIterator it(bossmserptail_3579_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossmserprightarm_3580_instances))->set_visible(false);
        ((Active*)get_instance(bossmserprightclaw_3581_instances))->set_visible(false);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->set_visible(false);
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(bossmserpleftclaw_3586_instances))->set_visible(false);
            group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_animations_and_directions_1 = false;
    
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(6));
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_y(((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(6)-20);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_direction(0);
        ((Active*)get_instance(bossmserpfrontshoulder_3583_instances))->set_angle(180, 0);
        ((Active*)get_instance(bossmserptorso_3582_instances))->set_angle(90, 0);
        ((Active*)get_instance(bossmserpbackshoulder_3577_instances))->set_visible(false);
    }
    event_2005_68_end: ;
}
void Frames::event_func_14666()
{
    // event 2006_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_2006_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (61))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (120))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2006_68_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_2006_68_end: ;
}
void Frames::event_func_14667()
{
    // event 2007_68
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_mutant_serpentine_1)) goto event_2007_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (61))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (220))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2007_68_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
            group_pause_1 = false;
    
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, 0);
        }
    }
    event_2007_68_end: ;
}
void Frames::event_func_14668()
{
    // event 2008_68
    {
        if (!(group_main_engine_1)) goto event_2008_68_end;
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_x_scale(1-(global_values->get(3)%math_helper%5)*0.1);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_y_scale(0.5+(global_values->get(3)%math_helper%5)*0.1);
        effectfireball_3558_instances.clear_selection();
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0)-sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+6)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+5, 100));
        }
    }
    event_2008_68_end: ;
}
void Frames::event_func_14669()
{
    // event 2009_68
    {
        if (!(group_main_engine_1)) goto event_2009_68_end;
        bossburstshot_3557_instances.clear_selection();
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossburstshot_3557_instances.has_selection()) goto event_2009_68_end;
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->get_movement()->set_speed(160);
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
        media.play_id(SOUND_SERP_MEGALASER_378, -1, 1);
    }
    event_2009_68_end: ;
}
void Frames::event_func_14670()
{
    // event 2010_68
    {
        if (!(group_main_engine_1)) goto event_2010_68_end;
        bossburstshot_3557_instances.clear_selection();
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!bossburstshot_3557_instances.has_selection()) goto event_2010_68_end;
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2010_68_end: ;
}
void Frames::event_func_14671()
{
    // event 2011_68
    {
        if (!(group_main_engine_1)) goto event_2011_68_end;
        effectfireball_3558_instances.clear_selection();
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!effectfireball_3558_instances.has_selection()) goto event_2011_68_end;
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2011_68_end: ;
}
void Frames::event_func_14672()
{
    // event 2012_68
    {
        if (!(group_main_engine_1)) goto event_2012_68_end;
        bossenergypunch_3587_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossenergypunch_3587_instances, playercharactersensor_383_instances)) goto event_2012_68_end;
        if (!((((Active*)get_instance(bossenergypunch_3587_instances))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()+30))) goto event_2012_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (2))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2012_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2012_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2012_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*8);
    }
    event_2012_68_end: ;
}
void Frames::event_func_14673()
{
    // event 2013_68
    {
        if (!(group_main_engine_1)) goto event_2013_68_end;
        bossburstshot_3557_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossburstshot_3557_instances, playercharactersensor_383_instances)) goto event_2013_68_end;
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()+16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossburstshot_3557_instances.has_selection()) goto event_2013_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (60))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2013_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2013_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2013_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->alterables->values.set(0, 3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(5)*5);
    }
    event_2013_68_end: ;
}
void Frames::event_func_14674()
{
    // event 2014_68
    {
        if (!(group_main_engine_1)) goto event_2014_68_end;
        if (!((((Active*)get_instance(bossmserpleftarm_3584_instances))->alterables->values.get(0)) > (0))) goto event_2014_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_2014_68_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 10));
    }
    event_2014_68_end: ;
}
void Frames::event_func_14675()
{
    // event 2015_68
    {
        if (!(group_main_engine_1)) goto event_2015_68_end;
        if (!((((Active*)get_instance(bossmserpleftarm_3584_instances))->alterables->values.get(0)) > (0))) goto event_2015_68_end;
        ((Active*)get_instance(bossmserpleftarm_3584_instances))->alterables->values.sub(0, 1);
    }
    event_2015_68_end: ;
}
void Frames::event_func_14676()
{
    // event 2016_68
    {
        if (!(group_main_engine_1)) goto event_2016_68_end;
        bossburstshot_3557_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossburstshot_3557_instances, playercharactersensor_383_instances)) goto event_2016_68_end;
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()+16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossburstshot_3557_instances.has_selection()) goto event_2016_68_end;
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_BLAST1_55, -1, 1);
        FrameObject * single_instance_2016_68_0; single_instance_2016_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossburstshot_3557_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2016_68_0 == NULL)
                    single_instance_2016_68_0 = new_obj;
            }
        }
    }
    event_2016_68_end: ;
}
void Frames::event_func_14677()
{
    // event 2017_68
    {
        if (!(group_main_engine_1)) goto event_2017_68_end;
        effectfireball_3558_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(effectfireball_3558_instances, playercharactersensor_383_instances)) goto event_2017_68_end;
        if (!check_not_overlap(effectfireball_3558_instances, playerreflect_447_instances)) goto event_2017_68_end;
        bossmserphead_3585_instances.clear_selection();
        for (ObjectIterator it(bossmserphead_3585_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (60))) { it.deselect(); continue; }
        }
        if (!bossmserphead_3585_instances.has_selection()) goto event_2017_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_2017_68_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2017_68_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2017_68_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(17, 30);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 160, 128));
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
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 160, 128));
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 160, 128));
        }
    }
    event_2017_68_end: ;
}
void Frames::event_func_14678()
{
    // event 2018_68
    {
        if (!(group_main_engine_1)) goto event_2018_68_end;
        effectfireball_3558_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(effectfireball_3558_instances, playerreflect_447_instances)) goto event_2018_68_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_2018_68_end;
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!effectfireball_3558_instances.has_selection()) goto event_2018_68_end;
        media.play_id(SOUND_MILLA_REFLECT_219, -1, 1);
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0-((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_2018_68_end: ;
}
void Frames::event_func_14679()
{
    // event 2019_68
    {
        if (!(group_main_engine_1)) goto event_2019_68_end;
        bossburstshot_3557_instances.clear_selection();
        playerreflect_447_instances.clear_selection();
        if (!check_overlap(bossburstshot_3557_instances, playerreflect_447_instances)) goto event_2019_68_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->flags & VISIBLE)) goto event_2019_68_end;
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossburstshot_3557_instances.has_selection()) goto event_2019_68_end;
        media.play_id(SOUND_MILLA_REFLECT_219, -1, 1);
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+16);
        }
    }
    event_2019_68_end: ;
}
void Frames::event_func_14680()
{
    // event 2020_68
    {
        if (!(group_main_engine_1)) goto event_2020_68_end;
        bossburstshot_3557_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(bossburstshot_3557_instances, qualifier_20)) goto event_2020_68_end;
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!bossburstshot_3557_instances.has_selection()) goto event_2020_68_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_2020_68_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 4);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        media.play_id(SOUND_BLAST1_55, -1, 1);
        FrameObject * single_instance_2020_68_0; single_instance_2020_68_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bossburstshot_3557_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2020_68_0 == NULL)
                    single_instance_2020_68_0 = new_obj;
            }
        }
        for (ObjectIterator it(bossburstshot_3557_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2020_68_end: ;
}
void Frames::event_func_14681()
{
    // event 2021_68
    {
        if (!(group_main_engine_1)) goto event_2021_68_end;
        effectfireball_3558_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(effectfireball_3558_instances, qualifier_20)) goto event_2021_68_end;
        for (ObjectIterator it(effectfireball_3558_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!effectfireball_3558_instances.has_selection()) goto event_2021_68_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_2021_68_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, -2+randrange(5));
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 4);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
    }
    event_2021_68_end: ;
}
void Frames::event_func_14682()
{
    // event 2022_68
    {
        if (!(group_main_engine_1)) goto event_2022_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2022_68_end;
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-16);
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_x_scale(1-(global_values->get(3)%math_helper%5)*0.1);
            ((Active*)*it)->set_y_scale(0.5+(global_values->get(3)%math_helper%5)*0.1);
            ((Active*)*it)->set_angle(180, 0);
        }
    }
    event_2022_68_end: ;
}
void Frames::event_func_14683()
{
    // event 2023_68
    {
        if (!(group_main_engine_1)) goto event_2023_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2023_68_end;
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-150);
        }
    }
    event_2023_68_end: ;
}
void Frames::event_func_14684()
{
    // event 2024_68
    {
        if (!(group_main_engine_1)) goto event_2024_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2024_68_end;
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+16);
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_x_scale(1-(global_values->get(3)%math_helper%5)*0.1);
            ((Active*)*it)->set_y_scale(0.5+(global_values->get(3)%math_helper%5)*0.1);
            ((Active*)*it)->set_angle(0, 0);
        }
    }
    event_2024_68_end: ;
}
void Frames::event_func_14685()
{
    // event 2025_68
    {
        if (!(group_main_engine_1)) goto event_2025_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(bossmserptorso_3582_instances))->alterables->values.get(6)))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2025_68_end;
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(10);
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->set_x_scale(1);
            ((Active*)*it)->set_y_scale(1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-32);
        }
    }
    event_2025_68_end: ;
}
void Frames::event_func_14686()
{
    // event 2026_68
    {
        if (!(group_main_engine_1)) goto event_2026_68_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(false);
    }
    event_2026_68_end: ;
}
void Frames::event_func_14687()
{
    // event 2027_68
    {
        if (!(group_main_engine_1)) goto event_2027_68_end;
        if (!((bossmserpflare_3556_instances.size()) > (0))) goto event_2027_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-20))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2027_68_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_x(get_min(get_max(frame_left()+20, ((Active*)get_single(bossmserpflare_3556_instances, default_active_instance))->get_x()), frame_left()+global_values->get(16)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_y(get_min(get_max(frame_top()+20, ((Active*)get_single(bossmserpflare_3556_instances, default_active_instance))->get_y()), frame_top()+global_values->get(17)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(true);
    }
    event_2027_68_end: ;
}
void Frames::event_func_14688()
{
    // event 2028_68
    {
        if (!(group_main_engine_1)) goto event_2028_68_end;
        if (!((bossmserpflare_3556_instances.size()) > (0))) goto event_2028_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()-20))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2028_68_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_x(get_min(get_max(frame_left()+20, ((Active*)get_single(bossmserpflare_3556_instances, default_active_instance))->get_x()), frame_left()+global_values->get(16)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_y(get_min(get_max(frame_top()+20, ((Active*)get_single(bossmserpflare_3556_instances, default_active_instance))->get_y()), frame_top()+global_values->get(17)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(true);
    }
    event_2028_68_end: ;
}
void Frames::event_func_14689()
{
    // event 2029_68
    {
        if (!(group_main_engine_1)) goto event_2029_68_end;
        if (!((bossmserpflare_3556_instances.size()) > (0))) goto event_2029_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_left()+global_values->get(16)+20))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2029_68_end;
        ((Active*)get_instance(effectwarning2_1864_instances))->set_x(get_min(get_max(frame_left()+20, ((Active*)get_single(bossmserpflare_3556_instances, default_active_instance))->get_x()), frame_left()+global_values->get(16)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_y(get_min(get_max(frame_top()+20, ((Active*)get_single(bossmserpflare_3556_instances, default_active_instance))->get_y()), frame_top()+global_values->get(17)-20));
        ((Active*)get_instance(effectwarning2_1864_instances))->set_visible(true);
    }
    event_2029_68_end: ;
}
void Frames::event_func_14690()
{
    // event 2030_68
    {
        if (!(group_main_engine_1)) goto event_2030_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2030_68_end;
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_2030_68_end: ;
}
void Frames::event_func_14691()
{
    // event 2031_68
    {
        if (!(group_main_engine_1)) goto event_2031_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2031_68_end;
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_2031_68_end: ;
}
void Frames::event_func_14692()
{
    // event 2032_68
    {
        if (!(group_main_engine_1)) goto event_2032_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2032_68_end;
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->alterables->values.set(0, 2);
            ((Active*)*it)->force_animation(11);
        }
    }
    event_2032_68_end: ;
}
void Frames::event_func_14693()
{
    // event 2033_68
    {
        if (!(group_main_engine_1)) goto event_2033_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2033_68_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+15);
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_x_scale(1-(global_values->get(3)%math_helper%5)*0.1);
            ((Active*)*it)->set_y_scale(0.5+(global_values->get(3)%math_helper%5)*0.1);
        }
    }
    event_2033_68_end: ;
}
void Frames::event_func_14694()
{
    // event 2034_68
    {
        if (!(group_main_engine_1)) goto event_2034_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2034_68_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-15);
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_x_scale(1-(global_values->get(3)%math_helper%5)*0.1);
            ((Active*)*it)->set_y_scale(0.5+(global_values->get(3)%math_helper%5)*0.1);
        }
    }
    event_2034_68_end: ;
}
void Frames::event_func_14695()
{
    // event 2035_68
    {
        if (!(group_main_engine_1)) goto event_2035_68_end;
        bossmserpflare_3556_instances.clear_selection();
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (180))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-400))) { it.deselect(); continue; }
        }
        if (!bossmserpflare_3556_instances.has_selection()) goto event_2035_68_end;
        for (ObjectIterator it(bossmserpflare_3556_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2035_68_end: ;
}
