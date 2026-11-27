#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_15732()
{
    // event 1935_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1935_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1935_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+2, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(5)-80));
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0);
        }
    }
    event_1935_72_end: ;
}
void Frames::event_func_15733()
{
    // event 1936_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1936_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (20))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1936_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5)-80))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1936_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1936_72_end: ;
}
void Frames::event_func_15734()
{
    // event 1937_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1937_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (20))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1937_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (randrange(2)*2-1)*10);
        }
    }
    event_1937_72_end: ;
}
void Frames::event_func_15735()
{
    // event 1938_72
    bool or_result_1938_72 = false;
    bool or_temp_result_1938_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1938_72_0_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1938_72_0_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(brevonsuitwallright_3779_instances))->get_x()-64))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1938_72_0_end;
        or_result_1938_72 = true;
        or_temp_result_1938_72_0 = true;
    }
    or_event_1938_72_0_end: ;
    brevonsuitpelvis_3771_instances.clear_saved_selection();
    brevonsuithead_3770_instances.clear_saved_selection();
    if (or_temp_result_1938_72_0) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1938_72
    bool or_temp_result_1938_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1938_72_1_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1938_72_1_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(brevonsuitwallleft_3778_instances))->get_x()+64))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1938_72_1_end;
        or_result_1938_72 = true;
        or_temp_result_1938_72_1 = true;
    }
    or_event_1938_72_1_end: ;
    if (or_temp_result_1938_72_1) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1938_72
    bool or_temp_result_1938_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1938_72_2_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1938_72_2_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(player_389_instances))->get_x()+160))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1938_72_2_end;
        or_result_1938_72 = true;
        or_temp_result_1938_72_2 = true;
    }
    or_event_1938_72_2_end: ;
    if (or_temp_result_1938_72_2) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1938_72
    bool or_temp_result_1938_72_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1938_72_3_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1938_72_3_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(player_389_instances))->get_x()-160))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1938_72_3_end;
        or_result_1938_72 = true;
        or_temp_result_1938_72_3 = true;
        or_event_1938_72_3_end: ;
        if (or_temp_result_1938_72_3) {
            brevonsuitpelvis_3771_instances.save_selection();
            brevonsuithead_3770_instances.save_selection();
        }
        if (!or_result_1938_72) goto or_final_or_event_1938_72_3_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        brevonsuithead_3770_instances.clear_selection();
        if (or_temp_result_1938_72_0 || or_temp_result_1938_72_1 || or_temp_result_1938_72_2 || or_temp_result_1938_72_3) {
            brevonsuitpelvis_3771_instances.restore_selection();
        }
        if (or_temp_result_1938_72_0 || or_temp_result_1938_72_1 || or_temp_result_1938_72_2 || or_temp_result_1938_72_3) {
            brevonsuithead_3770_instances.restore_selection();
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0-((Active*)*it)->alterables->values.get(8));
        }
    }
    or_final_or_event_1938_72_3_end: ;
}
void Frames::event_func_15736()
{
    // event 1939_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1939_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1939_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(player_389_instances))->get_x()+10))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1939_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1939_72_end: ;
}
void Frames::event_func_15737()
{
    // event 1940_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1940_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1940_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(player_389_instances))->get_x()+10))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1940_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1940_72_end: ;
}
void Frames::event_func_15738()
{
    // event 1941_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1941_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1941_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_min(((Active*)*it)->alterables->values.get(4)+0.2, 0.75));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.2, 0));
        }
    }
    event_1941_72_end: ;
}
void Frames::event_func_15739()
{
    // event 1942_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1942_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (90))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1942_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.2, 0));
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.2, 0.75));
        }
    }
    event_1942_72_end: ;
}
void Frames::event_func_15740()
{
    // event 1943_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1943_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1943_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.1, 0));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.1, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.1, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.1, 0));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, 0));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.1, 0));
            ((Active*)*it)->alterables->values.set(9, get_min(((Active*)*it)->alterables->values.get(9)+0.1, 1));
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
    event_1943_72_end: ;
}
void Frames::event_func_15741()
{
    // event 1944_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1944_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1944_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1944_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1944_72_end: ;
}
void Frames::event_func_15742()
{
    // event 1945_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1945_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1945_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(player_389_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1945_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1945_72_end: ;
}
void Frames::event_func_15743()
{
    // event 1946_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1946_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1946_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(brevonsuitwallright_3779_instances))->get_x()-128))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1946_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -1);
        }
    }
    event_1946_72_end: ;
}
void Frames::event_func_15744()
{
    // event 1947_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1947_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1947_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(brevonsuitwallleft_3778_instances))->get_x()+128))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1947_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1947_72_end: ;
}
void Frames::event_func_15745()
{
    // event 1948_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1948_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1948_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1948_72_end;
        if (((Active*)get_instance(bossenergypunch_3587_instances))->flags & VISIBLE) goto event_1948_72_end;
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_visible(true);
        media.play_id(SOUND_SERP_MEGAPUNCH_377, -1, 1);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_angle(0, 0);
    }
    event_1948_72_end: ;
}
void Frames::event_func_15746()
{
    // event 1949_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1949_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1949_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1949_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(4)*15);
        }
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_x_scale(1-(global_values->get(3)%math_helper%5)*0.1);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_y_scale(0.5+(global_values->get(3)%math_helper%5)*0.1);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_y(((Active*)get_instance(brevonsuittorso_3775_instances, default_active_instance))->get_y()-20);
        ((Active*)get_instance(bossenergypunch_3587_instances))->set_x(((Active*)get_instance(brevonsuittorso_3775_instances, default_active_instance))->get_x()-((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(4)*10);
        ((Active*)get_instance(bossenergypunch_3587_instances))->move_back();
    }
    event_1949_72_end: ;
}
void Frames::event_func_15747()
{
    // event 1950_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1950_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1950_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1950_72_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(12)%math_helper%3) == (0))) goto event_1950_72_end;
        FrameObject * single_instance_1950_72_0; single_instance_1950_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitpelvis_3771_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitflametrail_3742(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1950_72_0 == NULL)
                    single_instance_1950_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1950_72_0))->set_y(((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5));
    }
    event_1950_72_end: ;
}
void Frames::event_func_15748()
{
    // event 1951_72
    bool or_result_1951_72 = false;
    bool or_temp_result_1951_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1951_72_0_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1951_72_0_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(brevonsuitwallright_3779_instances))->get_x()-64))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1951_72_0_end;
        or_result_1951_72 = true;
        or_temp_result_1951_72_0 = true;
    }
    or_event_1951_72_0_end: ;
    brevonsuitpelvis_3771_instances.clear_saved_selection();
    brevonsuithead_3770_instances.clear_saved_selection();
    if (or_temp_result_1951_72_0) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1951_72
    bool or_temp_result_1951_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1951_72_1_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1951_72_1_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(brevonsuitwallleft_3778_instances))->get_x()+64))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1951_72_1_end;
        or_result_1951_72 = true;
        or_temp_result_1951_72_1 = true;
    }
    or_event_1951_72_1_end: ;
    if (or_temp_result_1951_72_1) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1951_72
    bool or_temp_result_1951_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1951_72_2_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1951_72_2_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(player_389_instances))->get_x()+160))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1951_72_2_end;
        or_result_1951_72 = true;
        or_temp_result_1951_72_2 = true;
    }
    or_event_1951_72_2_end: ;
    if (or_temp_result_1951_72_2) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1951_72
    bool or_temp_result_1951_72_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1951_72_3_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (-1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1951_72_3_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(player_389_instances))->get_x()-160))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1951_72_3_end;
        or_result_1951_72 = true;
        or_temp_result_1951_72_3 = true;
        or_event_1951_72_3_end: ;
        if (or_temp_result_1951_72_3) {
            brevonsuitpelvis_3771_instances.save_selection();
            brevonsuithead_3770_instances.save_selection();
        }
        if (!or_result_1951_72) goto or_final_or_event_1951_72_3_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        brevonsuithead_3770_instances.clear_selection();
        if (or_temp_result_1951_72_0 || or_temp_result_1951_72_1 || or_temp_result_1951_72_2 || or_temp_result_1951_72_3) {
            brevonsuitpelvis_3771_instances.restore_selection();
        }
        if (or_temp_result_1951_72_0 || or_temp_result_1951_72_1 || or_temp_result_1951_72_2 || or_temp_result_1951_72_3) {
            brevonsuithead_3770_instances.restore_selection();
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 4);
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(13, 0);
        }
    }
    or_final_or_event_1951_72_3_end: ;
}
void Frames::event_func_15749()
{
    // event 1952_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1952_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1952_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.1, 0));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.1, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.1, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.1, 0));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.1, 0));
            ((Active*)*it)->alterables->values.set(8, get_min(((Active*)*it)->alterables->values.get(8)+0.05, 1));
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
    event_1952_72_end: ;
}
void Frames::event_func_15750()
{
    // event 1953_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1953_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1953_72_end;
        media.play_id(SOUND_BREVON_HYPERSPIN_397, -1, 1);
    }
    event_1953_72_end: ;
}
void Frames::event_func_15751()
{
    // event 1954_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1954_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1954_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(4)*12);
        }
    }
    event_1954_72_end: ;
}
void Frames::event_func_15752()
{
    // event 1955_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1955_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) == (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1955_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -12);
        }
    }
    event_1955_72_end: ;
}
void Frames::event_func_15753()
{
    // event 1956_72
    bool or_result_1956_72 = false;
    bool or_temp_result_1956_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1956_72_0_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1956_72_0_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1956_72_0_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1956_72_0_end;
        or_result_1956_72 = true;
        or_temp_result_1956_72_0 = true;
    }
    or_event_1956_72_0_end: ;
    brevonsuitpelvis_3771_instances.clear_saved_selection();
    brevonsuithead_3770_instances.clear_saved_selection();
    if (or_temp_result_1956_72_0) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1956_72
    bool or_temp_result_1956_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1956_72_1_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1956_72_1_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1956_72_1_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1956_72_1_end;
        or_result_1956_72 = true;
        or_temp_result_1956_72_1 = true;
        or_event_1956_72_1_end: ;
        if (or_temp_result_1956_72_1) {
            brevonsuitpelvis_3771_instances.save_selection();
            brevonsuithead_3770_instances.save_selection();
        }
        if (!or_result_1956_72) goto or_final_or_event_1956_72_1_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        brevonsuithead_3770_instances.clear_selection();
        if (or_temp_result_1956_72_0 || or_temp_result_1956_72_1) {
            brevonsuitpelvis_3771_instances.restore_selection();
        }
        if (or_temp_result_1956_72_0 || or_temp_result_1956_72_1) {
            brevonsuithead_3770_instances.restore_selection();
        }
        FrameObject * single_instance_1956_72_0; single_instance_1956_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevonsuitspin_3763_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitspeedline_3743(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1956_72_0 == NULL)
                    single_instance_1956_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1956_72_0))->alterables->values.set(1, randrange(100));
        ((Active*)((Active*)single_instance_1956_72_0))->set_x(((Active*)single_instance_1956_72_0)->get_x()-50+((Active*)single_instance_1956_72_0)->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1956_72_0))->set_y(((Active*)single_instance_1956_72_0)->get_y()-50+((Active*)single_instance_1956_72_0)->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1956_72_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1956_72_0))->move_back();
    }
    or_final_or_event_1956_72_1_end: ;
}
void Frames::event_func_15754()
{
    // event 1957_72
    bool or_result_1957_72 = false;
    bool or_temp_result_1957_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1957_72_0_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1957_72_0_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1957_72_0_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1957_72_0_end;
        or_result_1957_72 = true;
        or_temp_result_1957_72_0 = true;
    }
    or_event_1957_72_0_end: ;
    brevonsuitpelvis_3771_instances.clear_saved_selection();
    brevonsuithead_3770_instances.clear_saved_selection();
    if (or_temp_result_1957_72_0) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1957_72
    bool or_temp_result_1957_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1957_72_1_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1957_72_1_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1957_72_1_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(10)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1957_72_1_end;
        or_result_1957_72 = true;
        or_temp_result_1957_72_1 = true;
        or_event_1957_72_1_end: ;
        if (or_temp_result_1957_72_1) {
            brevonsuitpelvis_3771_instances.save_selection();
            brevonsuithead_3770_instances.save_selection();
        }
        if (!or_result_1957_72) goto or_final_or_event_1957_72_1_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        brevonsuithead_3770_instances.clear_selection();
        if (or_temp_result_1957_72_0 || or_temp_result_1957_72_1) {
            brevonsuitpelvis_3771_instances.restore_selection();
        }
        if (or_temp_result_1957_72_0 || or_temp_result_1957_72_1) {
            brevonsuithead_3770_instances.restore_selection();
        }
        FrameObject * single_instance_1957_72_0; single_instance_1957_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevonsuitspin_3763_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitspeedline_3743(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1957_72_0 == NULL)
                    single_instance_1957_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1957_72_0))->alterables->values.set(1, randrange(100));
        ((Active*)((Active*)single_instance_1957_72_0))->set_x(((Active*)single_instance_1957_72_0)->get_x()-50+((Active*)single_instance_1957_72_0)->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1957_72_0))->set_y(((Active*)single_instance_1957_72_0)->get_y()+50-((Active*)single_instance_1957_72_0)->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1957_72_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1957_72_0))->move_back();
    }
    or_final_or_event_1957_72_1_end: ;
}
void Frames::event_func_15755()
{
    // event 1958_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1958_72_end;
        brevonsuitspeedline_3743_instances.clear_selection();
        for (ObjectIterator it(brevonsuitspeedline_3743_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->blend_color.set_alpha_coefficient(get_max(0, (((Active*)*it)->alterables->values.get(0)-10)*25));
        }
    }
    event_1958_72_end: ;
}
void Frames::event_func_15756()
{
    // event 1959_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1959_72_end;
        brevonsuitspeedline_3743_instances.clear_selection();
        for (ObjectIterator it(brevonsuitspeedline_3743_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (20))) { it.deselect(); continue; }
        }
        if (!brevonsuitspeedline_3743_instances.has_selection()) goto event_1959_72_end;
        for (ObjectIterator it(brevonsuitspeedline_3743_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1959_72_end: ;
}
void Frames::event_func_15757()
{
    // event 1960_72
    bool or_result_1960_72 = false;
    bool or_temp_result_1960_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1960_72_0_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1960_72_0_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1960_72_0_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1960_72_0_end;
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (((Active*)get_instance(brevonsuitwallleft_3778_instances, default_active_instance))->get_x()+64))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1960_72_0_end;
        or_result_1960_72 = true;
        or_temp_result_1960_72_0 = true;
    }
    or_event_1960_72_0_end: ;
    brevonsuitpelvis_3771_instances.clear_saved_selection();
    brevonsuithead_3770_instances.clear_saved_selection();
    if (or_temp_result_1960_72_0) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1960_72
    bool or_temp_result_1960_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1960_72_1_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1960_72_1_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1960_72_1_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1960_72_1_end;
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (((Active*)get_instance(brevonsuitwallright_3779_instances, default_active_instance))->get_x()-64))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1960_72_1_end;
        or_result_1960_72 = true;
        or_temp_result_1960_72_1 = true;
        or_event_1960_72_1_end: ;
        if (or_temp_result_1960_72_1) {
            brevonsuitpelvis_3771_instances.save_selection();
            brevonsuithead_3770_instances.save_selection();
        }
        if (!or_result_1960_72) goto or_final_or_event_1960_72_1_end;
        brevonsuitpelvis_3771_instances.empty_selection();
        brevonsuithead_3770_instances.empty_selection();
        if (or_temp_result_1960_72_0 || or_temp_result_1960_72_1) {
            brevonsuitpelvis_3771_instances.restore_selection();
        }
        if (or_temp_result_1960_72_0 || or_temp_result_1960_72_1) {
            brevonsuithead_3770_instances.restore_selection();
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 0-((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->alterables->values.set(10, 8);
        }
        media.play_id(SOUND_COMMON_CRUSHER_323, -1, 1);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25), 4));
        }
    }
    or_final_or_event_1960_72_1_end: ;
}
void Frames::event_func_15758()
{
    // event 1961_72
    bool or_result_1961_72 = false;
    bool or_temp_result_1961_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1961_72_0_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1961_72_0_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1961_72_0_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1961_72_0_end;
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (64))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1961_72_0_end;
        or_result_1961_72 = true;
        or_temp_result_1961_72_0 = true;
    }
    or_event_1961_72_0_end: ;
    brevonsuitpelvis_3771_instances.clear_saved_selection();
    brevonsuithead_3770_instances.clear_saved_selection();
    if (or_temp_result_1961_72_0) {
        brevonsuitpelvis_3771_instances.save_selection();
        brevonsuithead_3770_instances.save_selection();
    }
    // event 1961_72
    bool or_temp_result_1961_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_1961_72_1_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1961_72_1_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1961_72_1_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto or_event_1961_72_1_end;
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5)-64))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto or_event_1961_72_1_end;
        or_result_1961_72 = true;
        or_temp_result_1961_72_1 = true;
        or_event_1961_72_1_end: ;
        if (or_temp_result_1961_72_1) {
            brevonsuitpelvis_3771_instances.save_selection();
            brevonsuithead_3770_instances.save_selection();
        }
        if (!or_result_1961_72) goto or_final_or_event_1961_72_1_end;
        brevonsuitpelvis_3771_instances.empty_selection();
        brevonsuithead_3770_instances.empty_selection();
        if (or_temp_result_1961_72_0 || or_temp_result_1961_72_1) {
            brevonsuitpelvis_3771_instances.restore_selection();
        }
        if (or_temp_result_1961_72_0 || or_temp_result_1961_72_1) {
            brevonsuithead_3770_instances.restore_selection();
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 0-((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(10, 8);
        }
        media.play_id(SOUND_COMMON_CRUSHER_323, -1, 1);
        mastercamera_430_instances.clear_selection();
        for (ObjectIterator it(mastercamera_430_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, get_max(((Active*)*it)->alterables->values.get(25), 4));
        }
    }
    or_final_or_event_1961_72_1_end: ;
}
void Frames::event_func_15759()
{
    // event 1962_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1962_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1962_72_end;
        if (!((effectbrevonsuitwarning_3745_instances.size()) == (0))) goto event_1962_72_end;
        effectbrevonsuitwarning_3745_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectbrevonsuitwarning_3745(0, 0), 4);
            effectbrevonsuitwarning_3745_instances.add_back();
        }
    }
    event_1962_72_end: ;
}
void Frames::event_func_15760()
{
    // event 1963_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1963_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1963_72_end;
        effectbrevonsuitwarning_3745_instances.clear_selection();
        for (ObjectIterator it(effectbrevonsuitwarning_3745_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1963_72_end: ;
}
void Frames::event_func_15761()
{
    // event 1964_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1964_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1964_72_end;
        if (!((((Active*)get_instance(brevonsuitspin_3763_instances))->get_x()) < (frame_left()-50))) goto event_1964_72_end;
        effectbrevonsuitwarning_3745_instances.clear_selection();
        for (ObjectIterator it(effectbrevonsuitwarning_3745_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+20);
            ((Active*)*it)->set_y(((Active*)get_instance(brevonsuitspin_3763_instances))->get_y());
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1964_72_end: ;
}
void Frames::event_func_15762()
{
    // event 1965_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1965_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1965_72_end;
        if (!((((Active*)get_instance(brevonsuitspin_3763_instances))->get_x()) > (frame_left()+global_values->get(16)+50))) goto event_1965_72_end;
        effectbrevonsuitwarning_3745_instances.clear_selection();
        for (ObjectIterator it(effectbrevonsuitwarning_3745_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+global_values->get(16)-20);
            ((Active*)*it)->set_y(((Active*)get_instance(brevonsuitspin_3763_instances))->get_y());
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1965_72_end: ;
}
void Frames::event_func_15763()
{
    // event 1966_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1966_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (180))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1966_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5)-80))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1966_72_end;
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(5)-80);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 4);
            ((Active*)*it)->alterables->values.set(12, 0);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
            ((Active*)*it)->alterables->values.set(13, 6);
        }
    }
    event_1966_72_end: ;
}
void Frames::event_func_15764()
{
    // event 1967_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1967_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (8))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1967_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.05, 0));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.05, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.05, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.05, 0));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.05, 0));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.05, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.05, 0));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.05, 0));
            ((Active*)*it)->alterables->values.set(11, get_min(((Active*)*it)->alterables->values.get(11)+0.05, 1));
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12)-0.05, 0));
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        FrameObject * single_instance_1967_72_0; single_instance_1967_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuitpelvis_3771_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitspeedline2_3744(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1967_72_0 == NULL)
                    single_instance_1967_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1967_72_0))->alterables->values.set(0, (((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(12)*28)%math_helper%180);
    }
    event_1967_72_end: ;
}
void Frames::event_func_15765()
{
    // event 1968_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1968_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1968_72_end;
        media.play_id(SOUND_SHADEBEAST_VORTEX_2_350, -1, 1);
    }
    event_1968_72_end: ;
}
void Frames::event_func_15766()
{
    // event 1969_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1969_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (8))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1969_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1969_72_end;
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0.85);
        }
    }
    event_1969_72_end: ;
}
void Frames::event_func_15767()
{
    // event 1970_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1970_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (20))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1970_72_end;
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(0, 10);
    }
    event_1970_72_end: ;
}
void Frames::event_func_15768()
{
    // event 1971_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1971_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1971_72_end;
        ((Active*)get_instance(brevonsuitaura_3785_instances))->set_visible(true);
        ((Active*)get_instance(brevonsuitaura_3785_instances))->set_x(((Active*)get_instance(brevonsuitpelvis_3771_instances, default_active_instance))->alterables->values.get(1));
        ((Active*)get_instance(brevonsuitaura_3785_instances))->set_y(((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5));
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(0, get_min(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)+5, 100));
    }
    event_1971_72_end: ;
}
void Frames::event_func_15769()
{
    // event 1972_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1972_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1972_72_end;
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(0, get_min(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)+2, 100));
    }
    event_1972_72_end: ;
}
void Frames::event_func_15770()
{
    // event 1973_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1973_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (8))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1973_72_end;
        if (!((((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)) >= (100))) goto event_1973_72_end;
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(0, 90);
    }
    event_1973_72_end: ;
}
void Frames::event_func_15771()
{
    // event 1974_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1974_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (100))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1974_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 9);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(1, 0);
    }
    event_1974_72_end: ;
}
void Frames::event_func_15772()
{
    // event 1975_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1975_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (10))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1975_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.05, 0));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.05, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.05, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.05, 0));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.05, 0));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.05, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.05, 0));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.05, 0));
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.1, 0));
            ((Active*)*it)->alterables->values.set(12, get_min(((Active*)*it)->alterables->values.get(12)+0.1, 1));
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(0, get_min(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)+10, 200));
    }
    event_1975_72_end: ;
}
void Frames::event_func_15773()
{
    // event 1976_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1976_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (10))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1976_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.05, 0));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.05, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.05, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.05, 0));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.05, 0));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.05, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.05, 0));
            ((Active*)*it)->alterables->values.set(10, get_max(((Active*)*it)->alterables->values.get(10)-0.05, 0));
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.1, 0));
            ((Active*)*it)->alterables->values.set(12, get_min(((Active*)*it)->alterables->values.get(12)+0.02, 1));
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(0, get_min(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)+3, 200));
    }
    event_1976_72_end: ;
}
void Frames::event_func_15774()
{
    // event 1977_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1977_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (15))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1977_72_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(12)%math_helper%5) == (0))) goto event_1977_72_end;
        media.play_id(SOUND_BREVONMECH_LASER_343, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
    }
    event_1977_72_end: ;
}
void Frames::event_func_15775()
{
    // event 1978_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1978_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (9))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1978_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (1))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1978_72_end;
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0.92);
        }
    }
    event_1978_72_end: ;
}
void Frames::event_func_15776()
{
    // event 1979_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1979_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (9))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1979_72_end;
        if (!((((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)) >= (200))) goto event_1979_72_end;
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(0, 190);
    }
    event_1979_72_end: ;
}
void Frames::event_func_15777()
{
    // event 1980_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1980_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (9))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1980_72_end;
        if (!((((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)) >= (190))) goto event_1980_72_end;
        FrameObject * single_instance_1980_72_0; single_instance_1980_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevonsuitaura_3785_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitlaser_3741(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1980_72_0 == NULL)
                    single_instance_1980_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1980_72_0))->force_animation(7);
        ((Active*)((Active*)single_instance_1980_72_0))->set_x(((Active*)single_instance_1980_72_0)->get_x()+cos_deg(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)+11.25+((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2))*96);
        ((Active*)((Active*)single_instance_1980_72_0))->set_y(((Active*)single_instance_1980_72_0)->get_y()-sin_deg(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)+11.25+((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2))*96);
        ((Active*)((Active*)single_instance_1980_72_0))->alterables->values.set(2, ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)+11.25+((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1980_72_0))->alterables->values.set(0, ((Active*)single_instance_1980_72_0)->get_x());
        ((Active*)((Active*)single_instance_1980_72_0))->alterables->values.set(1, ((Active*)single_instance_1980_72_0)->get_y());
        ((Active*)single_instance_1980_72_0)->move_back(((Active*)get_instance(brevonsuitaura_3785_instances)));
        ((Active*)((Active*)single_instance_1980_72_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_1980_72_end: ;
}
void Frames::event_func_15778()
{
    // event 1981_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1981_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (9))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1981_72_end;
        if (!((((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)) >= (190))) goto event_1981_72_end;
        FrameObject * single_instance_1981_72_0; single_instance_1981_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevonsuitaura_3785_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitlaser_3741(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1981_72_0 == NULL)
                    single_instance_1981_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1981_72_0))->force_animation(7);
        ((Active*)((Active*)single_instance_1981_72_0))->set_x(((Active*)single_instance_1981_72_0)->get_x()+cos_deg(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)-11.25+((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2))*96);
        ((Active*)((Active*)single_instance_1981_72_0))->set_y(((Active*)single_instance_1981_72_0)->get_y()-sin_deg(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)-11.25+((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2))*96);
        ((Active*)((Active*)single_instance_1981_72_0))->alterables->values.set(2, ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)-11.25+((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1981_72_0))->alterables->values.set(0, ((Active*)single_instance_1981_72_0)->get_x());
        ((Active*)((Active*)single_instance_1981_72_0))->alterables->values.set(1, ((Active*)single_instance_1981_72_0)->get_y());
        ((Active*)single_instance_1981_72_0)->move_back(((Active*)get_instance(brevonsuitaura_3785_instances)));
        ((Active*)((Active*)single_instance_1981_72_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_1981_72_end: ;
}
void Frames::event_func_15779()
{
    // event 1982_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1982_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (9))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1982_72_end;
        if (!((((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(0)) >= (190))) goto event_1982_72_end;
        FrameObject * single_instance_1982_72_0; single_instance_1982_72_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(brevonsuitaura_3785_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonsuitlaser_3741(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1982_72_0 == NULL)
                    single_instance_1982_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1982_72_0))->force_animation(7);
        ((Active*)((Active*)single_instance_1982_72_0))->set_x(((Active*)single_instance_1982_72_0)->get_x()+cos_deg(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)+((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2))*64);
        ((Active*)((Active*)single_instance_1982_72_0))->set_y(((Active*)single_instance_1982_72_0)->get_y()-sin_deg(((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)+((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2))*64);
        ((Active*)((Active*)single_instance_1982_72_0))->alterables->values.set(2, ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)+((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1982_72_0))->alterables->values.set(0, ((Active*)single_instance_1982_72_0)->get_x());
        ((Active*)((Active*)single_instance_1982_72_0))->alterables->values.set(1, ((Active*)single_instance_1982_72_0)->get_y());
        ((Active*)single_instance_1982_72_0)->move_back(((Active*)get_instance(brevonsuitaura_3785_instances)));
        ((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.set(1, (((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(1)+22.7)%math_helper%(180-((Active*)get_instance(brevonsuitaura_3785_instances))->alterables->values.get(2)*2));
        ((Active*)((Active*)single_instance_1982_72_0))->set_layer(((Active*)get_instance(player_389_instances))->layer->index+1-1);
    }
    event_1982_72_end: ;
}
void Frames::event_func_15780()
{
    // event 1984_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1984_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (100))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1984_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1984_72_end: ;
}
void Frames::event_func_15781()
{
    // event 1985_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1985_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1985_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_max(((Active*)*it)->alterables->values.get(3)-0.2, 0));
            ((Active*)*it)->alterables->values.set(4, get_max(((Active*)*it)->alterables->values.get(4)-0.2, 0));
            ((Active*)*it)->alterables->values.set(5, get_max(((Active*)*it)->alterables->values.get(5)-0.2, 0));
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.2, 0));
            ((Active*)*it)->alterables->values.set(7, get_max(((Active*)*it)->alterables->values.get(7)-0.2, 0));
            ((Active*)*it)->alterables->values.set(8, get_max(((Active*)*it)->alterables->values.get(8)-0.2, 0));
            ((Active*)*it)->alterables->values.set(9, get_max(((Active*)*it)->alterables->values.get(9)-0.2, 0));
            ((Active*)*it)->alterables->values.set(10, get_min(((Active*)*it)->alterables->values.get(10)+0.2, 1));
            ((Active*)*it)->alterables->values.set(11, get_max(((Active*)*it)->alterables->values.get(11)-0.2, 0));
            ((Active*)*it)->alterables->values.set(12, get_max(((Active*)*it)->alterables->values.get(12)-0.2, 0));
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
            ((Active*)*it)->alterables->values.set(8, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1985_72_end: ;
}
void Frames::event_func_15782()
{
    // event 1986_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1986_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1986_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1986_72_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
    }
    event_1986_72_end: ;
}
void Frames::event_func_15783()
{
    // event 1987_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1987_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1987_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5)-80))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_1987_72_end;
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1987_72_end: ;
}
void Frames::event_func_15784()
{
    // event 1988_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1988_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (20))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1988_72_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(12)%math_helper%2) == (0))) goto event_1988_72_end;
        FrameObject * single_instance_1988_72_0; single_instance_1988_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuithead_3770_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1988_72_0 == NULL)
                    single_instance_1988_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1988_72_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1988_72_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_1988_72_0))->set_direction(pick_random(9, 4, 5, 6, 7, 8, 9, 10, 11, 12));
        ((Active*)((Active*)single_instance_1988_72_0))->alterables->flags.enable(2);
    }
    event_1988_72_end: ;
}
void Frames::event_func_15785()
{
    // event 1989_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1989_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1989_72_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(12)%math_helper%2) == (0))) goto event_1989_72_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_1989_72_0_end;
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
        dynamic_1989_72_0_end: ;
        FrameObject * single_instance_1989_72_1; single_instance_1989_72_1 = NULL;
        // select single: true false false
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator p_it(brevonsuithead_3770_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1989_72_1 == NULL)
                    single_instance_1989_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1989_72_1))->set_x(((Active*)single_instance_1989_72_1)->get_x()-50+randrange(101));
        ((Active*)((Active*)single_instance_1989_72_1))->set_y(((Active*)single_instance_1989_72_1)->get_y()-50+randrange(101));
        ((Active*)((Active*)single_instance_1989_72_1))->force_speed(100);
    }
    event_1989_72_end: ;
}
void Frames::event_func_15786()
{
    // event 1990_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1990_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1990_72_end;
        FrameObject * single_instance_1990_72_0; single_instance_1990_72_0 = NULL;
        // select single: true false false
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator p_it(brevonsuitpelvis_3771_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1990_72_0 == NULL)
                    single_instance_1990_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1990_72_0))->set_x(((Active*)single_instance_1990_72_0)->get_x()-50+randrange(101));
        ((Active*)((Active*)single_instance_1990_72_0))->set_y(((Active*)single_instance_1990_72_0)->get_y()-50+randrange(101));
        ((Active*)((Active*)single_instance_1990_72_0))->force_speed(100);
    }
    event_1990_72_end: ;
}
void Frames::event_func_15787()
{
    // event 1991_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1991_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1991_72_end;
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(1, 0);
    }
    event_1991_72_end: ;
}
void Frames::event_func_15788()
{
    // event 1992_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1992_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (240))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1992_72_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(12)%math_helper%10) == (0))) goto event_1992_72_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        FrameObject * single_instance_1992_72_0; single_instance_1992_72_0 = NULL;
        // select single: true false false
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator p_it(brevonsuitpelvis_3771_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1992_72_0 == NULL)
                    single_instance_1992_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1992_72_0))->set_x(((Active*)single_instance_1992_72_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_1992_72_0))->set_y(((Active*)single_instance_1992_72_0)->get_y()-60+randrange(81));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 8);
    }
    event_1992_72_end: ;
}
void Frames::event_func_15789()
{
    // event 1993_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1993_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1993_72_end;
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (8))) { it.deselect(); continue; }
        }
        if (!effectswhiteburst_5_instances.has_selection()) goto event_1993_72_end;
        FrameObject * single_instance_1993_72_0; single_instance_1993_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(effectswhiteburst_5_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstinyexplosion_3746(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1993_72_0 == NULL)
                    single_instance_1993_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1993_72_0))->set_direction(((Active*)get_single(effectswhiteburst_5_instances, default_active_instance))->alterables->values.get(0)*4);
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1993_72_end: ;
}
void Frames::event_func_15790()
{
    // event 1995_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1995_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (240))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1995_72_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(12)%math_helper%6) == (0))) goto event_1995_72_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        FrameObject * single_instance_1995_72_0; single_instance_1995_72_0 = NULL;
        // select single: true false false
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator p_it(brevonsuitpelvis_3771_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1995_72_0 == NULL)
                    single_instance_1995_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1995_72_0))->set_x(((Active*)single_instance_1995_72_0)->get_x()-40+randrange(81));
        ((Active*)((Active*)single_instance_1995_72_0))->set_y(((Active*)single_instance_1995_72_0)->get_y()-60+randrange(81));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 8);
    }
    event_1995_72_end: ;
}
void Frames::event_func_15791()
{
    // event 1996_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1996_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (240))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1996_72_end;
        if (!((((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(12)%math_helper%6) == (0))) goto event_1996_72_end;
        FrameObject * single_instance_1996_72_0; single_instance_1996_72_0 = NULL;
        // select single: true false false
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator p_it(brevonsuitpelvis_3771_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1996_72_0 == NULL)
                    single_instance_1996_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1996_72_0))->set_x(((Active*)single_instance_1996_72_0)->get_x()-50+randrange(101));
        ((Active*)((Active*)single_instance_1996_72_0))->set_y(((Active*)single_instance_1996_72_0)->get_y()-50+randrange(101));
        ((Active*)((Active*)single_instance_1996_72_0))->force_speed(50);
    }
    event_1996_72_end: ;
}
void Frames::event_func_15792()
{
    // event 1997_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1997_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (360))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1997_72_end;
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
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
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_1997_72_end: ;
}
void Frames::event_func_15793()
{
    // event 1998_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1998_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (120))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1998_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_1998_72_end: ;
}
void Frames::event_func_15794()
{
    // event 1999_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_1999_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) < (120))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_1999_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-8, 0));
        }
    }
    event_1999_72_end: ;
}
void Frames::event_func_15795()
{
    // event 2000_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2000_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (120))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2000_72_end;
        if (!((global_values->get(1)) != (4))) goto event_2000_72_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(kingdomstone_1587_instances))->get_x()+64);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5)-16);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(66);
            ((Active*)*it)->set_direction(16);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(27);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(20);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(5)-80);
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(kingdomstone_1587_instances))->get_x()-104);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
            ((Active*)*it)->alterables->values.set(2, 7);
        }
        ((SystemBox*)get_instance(parallaxspaceback_3755_instances))->set_visible(false);
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
            ((Active*)*it)->alterables->values.set(13, 1);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 1);
        }
        ((SystemBox*)get_instance(parallaxspaceback2_3756_instances))->set_visible(false);
        ((SystemBox*)get_instance(parallaxspaceback3_3757_instances))->set_visible(false);
        if (!group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1) {
            group_main_engine_level_specific_methods_cutscenes_red_siren_effect_1 = true;
        }
        ((Active*)get_instance(redflash_3737_instances))->set_x_scale(43);
        ((Active*)get_instance(redflash_3737_instances))->set_y_scale(24);
        ((Active*)get_instance(redflash_3737_instances))->set_layer(1-1);
        {
            ((Active*)get_instance(redflash_3737_instances))->set_shader(Render::ADDITIVE);
        }
        ((Active*)get_instance(redflash_3737_instances))->set_direction(1);
        ((Active*)get_instance(redflash_3737_instances))->alterables->flags.enable(1);
    }
    event_2000_72_end: ;
}
void Frames::event_func_15796()
{
    // event 2001_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2001_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (120))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2001_72_end;
        if (!((global_values->get(1)) == (4))) goto event_2001_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 12);
            ((Active*)*it)->alterables->values.set(12, 0);
        }
    }
    event_2001_72_end: ;
}
void Frames::event_func_15797()
{
    // event 2002_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2002_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (120))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2002_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_directions(256))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_2002_72_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_min(((Active*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_2002_72_end: ;
}
void Frames::event_func_15798()
{
    // event 2003_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2003_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (120))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2003_72_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(kingdomstone_1587_instances))->get_x());
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
    }
    event_2003_72_end: ;
}
void Frames::event_func_15799()
{
    // event 2004_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2004_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (120))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2004_72_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto event_2004_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_2004_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_2004_72_end: ;
}
void Frames::event_func_15800()
{
    // event 2005_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2005_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (120))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2005_72_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_2005_72_end;
        FrameObject * single_instance_2005_72_0; single_instance_2005_72_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuithead_3770_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2005_72_0 == NULL)
                    single_instance_2005_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2005_72_0))->set_direction(pick_random(5, 8, 9, 10, 11, 12));
    }
    event_2005_72_end: ;
}
void Frames::event_func_15801()
{
    // event 2006_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2006_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (150))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2006_72_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(3))) goto event_2006_72_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto event_2006_72_end;
        if (!((global_values->get(1)) == (0))) goto event_2006_72_end;
        if (group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1) goto event_2006_72_end;
        if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_1) {
            group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = true;
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 4);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2006_72_end: ;
}
void Frames::event_func_15802()
{
    // event 2007_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2007_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (150))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2007_72_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_off(3))) goto event_2007_72_end;
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonmechbackground_2513_instances.has_selection()) goto event_2007_72_end;
        if (!((global_values->get(1)) == (2))) goto event_2007_72_end;
        if (group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1) goto event_2007_72_end;
        if (!group_main_engine_level_specific_methods_cutscenes_dialog_system_1) {
            group_main_engine_level_specific_methods_cutscenes_dialog_system_1 = true;
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 9);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(8, 0);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
    }
    event_2007_72_end: ;
}
void Frames::event_func_15803()
{
    // event 2008_72
    bool or_result_2008_72 = false;
    bool or_temp_result_2008_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_2008_72_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2008_72_0_end;
        or_result_2008_72 = true;
        or_temp_result_2008_72_0 = true;
    }
    or_event_2008_72_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_2008_72_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 2008_72
    bool or_temp_result_2008_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_2008_72_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2008_72_1_end;
        or_result_2008_72 = true;
        or_temp_result_2008_72_1 = true;
    }
    or_event_2008_72_1_end: ;
    if (or_temp_result_2008_72_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 2008_72
    bool or_temp_result_2008_72_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_2008_72_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_2008_72_2_end;
        or_result_2008_72 = true;
        or_temp_result_2008_72_2 = true;
        or_event_2008_72_2_end: ;
        if (or_temp_result_2008_72_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_2008_72) goto or_final_or_event_2008_72_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_2008_72_0 || or_temp_result_2008_72_1 || or_temp_result_2008_72_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_2008_72_2_end: ;
}
void Frames::event_func_15804()
{
    // event 2009_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2009_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_2009_72_end;
        if (once_condition_2009_72) goto event_2009_72_end;
        once_condition_2009_72 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_li_li_46_02_ogg_255, 20-1);
    }
    event_2009_72_end: ;
}
void Frames::event_func_15805()
{
    // event 2010_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2010_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_2010_72_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 1);
    }
    event_2010_72_end: ;
}
void Frames::event_func_15806()
{
    // event 2011_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2011_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2011_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (4))) goto event_2011_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2011_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2011_72_end: ;
}
void Frames::event_func_15807()
{
    // event 2012_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2012_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2012_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (5))) goto event_2012_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2012_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
    }
    event_2012_72_end: ;
}
void Frames::event_func_15808()
{
    // event 2013_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2013_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (9))) goto event_2013_72_end;
        if (once_condition_2013_72) goto event_2013_72_end;
        once_condition_2013_72 = true;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_40_03_ogg_256, 20-1);
    }
    event_2013_72_end: ;
}
void Frames::event_func_15809()
{
    // event 2014_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2014_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2014_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (9))) goto event_2014_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2014_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 10);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_2014_72_end: ;
}
void Frames::event_func_15810()
{
    // event 2015_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2015_72_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_2015_72_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (10))) goto event_2015_72_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_2015_72_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
    }
    event_2015_72_end: ;
}
void Frames::event_func_15811()
{
    // event 2016_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2016_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (170))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2016_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, ((Active*)*it)->alterables->values.get(1));
        }
    }
    event_2016_72_end: ;
}
void Frames::event_func_15812()
{
    // event 2017_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2017_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (180))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2017_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(25)-(((Active*)*it)->alterables->values.get(23)*0.05)+randrange(((Active*)*it)->alterables->values.get(23))*0.1);
            ((Active*)*it)->alterables->values.set(23, get_max(((Active*)*it)->alterables->values.get(23)-3, 0));
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_2017_72_end: ;
}
void Frames::event_func_15813()
{
    // event 2018_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2018_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (180))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2018_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 50);
        }
        FrameObject * single_instance_2018_72_0; single_instance_2018_72_0 = NULL;
        // select single: true false false
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator p_it(brevonsuittorso_3775_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonslash1_3747(parent->x + -10, parent->y + 0), parent->layer);
                if (single_instance_2018_72_0 == NULL)
                    single_instance_2018_72_0 = new_obj;
            }
        }
        FrameObject * single_instance_2018_72_1; single_instance_2018_72_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuittorso_3775_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 4, parent->y + -15), parent->layer);
                if (single_instance_2018_72_1 == NULL)
                    single_instance_2018_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2018_72_1))->get_movement()->set_speed(80+randrange(30));
        media.play_id(SOUND_BREVON_BLADE_349, -1, 1);
        media.play_id(SOUND_UNSHEATHE_367, -1, 1);
    }
    event_2018_72_end: ;
}
void Frames::event_func_15814()
{
    // event 2019_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2019_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (200))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2019_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 50);
        }
        FrameObject * single_instance_2019_72_0; single_instance_2019_72_0 = NULL;
        // select single: true false false
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator p_it(brevonsuittorso_3775_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonslash1_3747(parent->x + -10, parent->y + 0), parent->layer);
                if (single_instance_2019_72_0 == NULL)
                    single_instance_2019_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2019_72_0))->set_direction(16);
        FrameObject * single_instance_2019_72_1; single_instance_2019_72_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuittorso_3775_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + -29, parent->y + 9), parent->layer);
                if (single_instance_2019_72_1 == NULL)
                    single_instance_2019_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2019_72_1))->get_movement()->set_speed(80+randrange(30));
        media.play_id(SOUND_BREVON_BLADE_349, -1, 1);
        media.play_id(SOUND_UNSHEATHE_367, -1, 1);
    }
    event_2019_72_end: ;
}
void Frames::event_func_15815()
{
    // event 2020_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2020_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (220))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2020_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 50);
        }
        FrameObject * single_instance_2020_72_0; single_instance_2020_72_0 = NULL;
        // select single: true false false
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator p_it(brevonsuittorso_3775_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevonslash1_3747(parent->x + -10, parent->y + 0), parent->layer);
                if (single_instance_2020_72_0 == NULL)
                    single_instance_2020_72_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2020_72_0))->set_angle(270, 0);
        FrameObject * single_instance_2020_72_1; single_instance_2020_72_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(brevonsuittorso_3775_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 1, parent->y + 21), parent->layer);
                if (single_instance_2020_72_1 == NULL)
                    single_instance_2020_72_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2020_72_1))->get_movement()->set_speed(80+randrange(30));
        media.play_id(SOUND_BREVON_BLADE_349, -1, 1);
        media.play_id(SOUND_UNSHEATHE_367, -1, 1);
    }
    event_2020_72_end: ;
}
void Frames::event_func_15816()
{
    // event 2021_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2021_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (280))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2021_72_end;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(48);
        ((Active*)get_instance(brevon_3683_instances))->set_y(((Active*)get_single(brevonsuithead_3770_instances, default_active_instance))->alterables->values.get(5));
        ((Active*)get_instance(brevon_3683_instances))->set_x(((Active*)get_instance(brevonsuitpelvis_3771_instances, default_active_instance))->get_x()+20);
        ((Active*)get_instance(brevon_3683_instances))->set_visible(true);
        ((Active*)get_instance(brevon_3683_instances))->move_back();
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -12);
            ((Active*)*it)->alterables->values.set(24, 2);
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -4);
            ((Active*)*it)->alterables->values.set(24, -8);
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -8);
            ((Active*)*it)->alterables->values.set(24, -5);
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -6);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 8);
            ((Active*)*it)->alterables->values.set(24, -10);
            ((Active*)*it)->alterables->flags.disable(16);
            ((Active*)*it)->alterables->flags.enable(6);
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(brevonsuittorso_3775_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 1, parent->y + 21), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + -29, parent->y + 9), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 4, parent->y + -15), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 1, parent->y + 21), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + -29, parent->y + 9), parent->layer);
                effectsdebris_319_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 4, parent->y + -15), parent->layer);
                effectsdebris_319_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(80+randrange(30));
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 8);
            ((Active*)*it)->alterables->values.set(24, -5);
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 12);
            ((Active*)*it)->alterables->values.set(24, -3);
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 12);
            ((Active*)*it)->alterables->values.set(24, 0);
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 7);
            ((Active*)*it)->alterables->values.set(24, 3);
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, 8);
            ((Active*)*it)->alterables->values.set(24, -8);
        }
            group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1) {
            group_main_engine_level_specific_methods_cutscenes_power_suit_defeated_1 = true;
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, -14);
            ((Active*)*it)->alterables->values.set(24, 3);
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(8, 0);
    }
    event_2021_72_end: ;
}
void Frames::event_func_15817()
{
    // event 2022_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2022_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (12))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2022_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(12, 1);
        }
    }
    event_2022_72_end: ;
}
void Frames::event_func_15818()
{
    // event 2023_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2023_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2023_72_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2023_72_end: ;
}
void Frames::event_func_15819()
{
    // event 2024_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2024_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (40))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2024_72_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-2, 0));
        }
    }
    event_2024_72_end: ;
}
void Frames::event_func_15820()
{
    // event 2025_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2025_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (12))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) > (120))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2025_72_end;
        ((Active*)get_instance(sign_351_instances))->alterables->flags.enable(0);
        ((Active*)get_instance(sign_351_instances))->alterables->values.set(1, 179);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        ((Active*)get_instance(brevon_3683_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
            group_main_engine_level_specific_methods_play_bgm_1 = false;
    
    }
    event_2025_72_end: ;
}
void Frames::event_func_15821()
{
    // event 2026_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2026_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2026_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->alterables->values.set(0, 10);
            ((Active*)*it)->alterables->values.set(2, 60);
            ((Active*)*it)->alterables->values.sub(15, 1);
        }
        media.play_id(SOUND_COMMON_BOSSHIT_47, -1, 1);
    }
    event_2026_72_end: ;
}
void Frames::event_func_15822()
{
    // event 2027_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2027_72_end;
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0.5))) { it.deselect(); continue; }
        }
        if (!brevonsuitpelvis_3771_instances.has_selection()) goto event_2027_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2), 4));
        }
    }
    event_2027_72_end: ;
}
void Frames::event_func_15823()
{
    // event 2028_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2028_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (5))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2028_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)*it)->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitfrontleg_3772_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontleg_3772_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitfrontknee_3773_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontknee_3773_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitfrontfoot_3774_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontfoot_3774_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuittorso_3775_instances.clear_selection();
        for (ObjectIterator it(brevonsuittorso_3775_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitfrontgun_3777_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontgun_3777_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitbackfoot_3769_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackfoot_3769_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitbackknee_3768_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackknee_3768_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitpelvis_3771_instances.clear_selection();
        for (ObjectIterator it(brevonsuitpelvis_3771_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitbackarm_3766_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackarm_3766_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitbackgun_3765_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackgun_3765_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        brevonsuitbackleg_3767_instances.clear_selection();
        for (ObjectIterator it(brevonsuitbackleg_3767_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+(((Active*)get_single(brevonsuithead_3770_instances, it.current_index, default_active_instance))->alterables->values.get(2)/math_helper/2)%math_helper%2);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->set_shader(NULL);
        }
    }
    event_2028_72_end: ;
}
void Frames::event_func_15824()
{
    // event 2029_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2029_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) < (5))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2029_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
    }
    event_2029_72_end: ;
}
void Frames::event_func_15825()
{
    // event 2030_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2030_72_end;
        brevonsuithead_3770_instances.clear_selection();
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (10))) { it.deselect(); continue; }
        }
        if (!brevonsuithead_3770_instances.has_selection()) goto event_2030_72_end;
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 10);
        }
            group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 999999);
        }
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
        for (ObjectIterator it(brevonsuithead_3770_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        global_values->set(4, 3);
        global_values->set(5, 2496);
        global_values->set(6, 304);
        media.play(str_data_voices_88+global_strings->get(11)+str_br_brevon_no_ogg_257, 27-1);
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
    event_2030_72_end: ;
}
void Frames::event_func_15826()
{
    // event 2031_72
    bool or_result_2031_72 = false;
    bool or_temp_result_2031_72_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_2031_72_0_end;
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto or_event_2031_72_0_end;
        or_result_2031_72 = true;
        or_temp_result_2031_72_0 = true;
    }
    or_event_2031_72_0_end: ;
    brevonsuitlaser_3741_instances.clear_saved_selection();
    if (or_temp_result_2031_72_0) {
        brevonsuitlaser_3741_instances.save_selection();
    }
    // event 2031_72
    bool or_temp_result_2031_72_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto or_event_2031_72_1_end;
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (6))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto or_event_2031_72_1_end;
        or_result_2031_72 = true;
        or_temp_result_2031_72_1 = true;
        or_event_2031_72_1_end: ;
        if (or_temp_result_2031_72_1) {
            brevonsuitlaser_3741_instances.save_selection();
        }
        if (!or_result_2031_72) goto or_final_or_event_2031_72_1_end;
        brevonsuitlaser_3741_instances.clear_selection();
        if (or_temp_result_2031_72_0 || or_temp_result_2031_72_1) {
            brevonsuitlaser_3741_instances.restore_selection();
        }
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(2))*((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(1, sin_deg(((Active*)*it)->alterables->values.get(2))*((Active*)*it)->alterables->values.get(3)*-1);
        }
    }
    or_final_or_event_2031_72_1_end: ;
}
void Frames::event_func_15827()
{
    // event 2032_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2032_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2032_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2032_72_end: ;
}
void Frames::event_func_15828()
{
    // event 2033_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2033_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2033_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2033_72_end: ;
}
void Frames::event_func_15829()
{
    // event 2036_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2036_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(7))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2036_72_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonsuitlaser_3741_instances, playercharactersensor_383_instances)) goto event_2036_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()+16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2036_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2036_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2036_72_end;
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 3);
        }
    }
    event_2036_72_end: ;
}
void Frames::event_func_15830()
{
    // event 2037_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2037_72_end;
        brevonsuitlaser_3741_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(brevonsuitlaser_3741_instances, playercharactersensor_383_instances)) goto event_2037_72_end;
        for (ObjectIterator it(brevonsuitlaser_3741_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_x()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_x()+16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(playercharactersensor_383_instances))->get_y()-16))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(playercharactersensor_383_instances))->get_y()+16))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!brevonsuitlaser_3741_instances.has_selection()) goto event_2037_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_2037_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_2037_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_2037_72_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_2037_72_end: ;
}
void Frames::event_func_15831()
{
    // event 2038_72
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_power_suit_1)) goto event_2038_72_end;
        brevonsuitfrontarm_3776_instances.clear_selection();
        for (ObjectIterator it(brevonsuitfrontarm_3776_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!brevonsuitfrontarm_3776_instances.has_selection()) goto event_2038_72_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_2038_72_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_2038_72_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
    }
    event_2038_72_end: ;
}
