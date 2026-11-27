#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2218()
{
    // event 1011_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1011_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (14))) goto event_1011_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_instance(playerskinsash_418_instances))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
    }
    event_1011_13_end: ;
}
void Frames::event_func_2219()
{
    // event 1012_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1012_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (20))) goto event_1012_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1012_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
    }
    event_1012_13_end: ;
}
void Frames::event_func_2220()
{
    // event 1013_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1013_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (26))) goto event_1013_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
    }
    event_1013_13_end: ;
}
void Frames::event_func_2221()
{
    // event 1014_13
    bool or_result_1014_13 = false;
    bool or_temp_result_1014_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1014_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (27))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1014_13_0_end;
        or_result_1014_13 = true;
        or_temp_result_1014_13_0 = true;
    }
    or_event_1014_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_1014_13_0) {
        playerothers_123_instances.save_selection();
    }
    // event 1014_13
    bool or_temp_result_1014_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1014_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (29))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1014_13_1_end;
        or_result_1014_13 = true;
        or_temp_result_1014_13_1 = true;
        or_event_1014_13_1_end: ;
        if (or_temp_result_1014_13_1) {
            playerothers_123_instances.save_selection();
        }
        if (!or_result_1014_13) goto or_final_or_event_1014_13_1_end;
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1014_13_0 || or_temp_result_1014_13_1) {
            playerothers_123_instances.restore_selection();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*10);
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*10);
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*10);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(get_abs(((Active*)get_instance(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(6))*12);
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1014_13_1_end: ;
}
void Frames::event_func_2222()
{
    // event 1015_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1015_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_1015_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
    }
    event_1015_13_end: ;
}
void Frames::event_func_2223()
{
    // event 1016_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1016_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) >= (45))) goto event_1016_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) <= (46))) goto event_1016_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
    }
    event_1016_13_end: ;
}
void Frames::event_func_2224()
{
    // event 1017_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1017_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (47))) goto event_1017_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
    }
    event_1017_13_end: ;
}
void Frames::event_func_2225()
{
    // event 1018_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1018_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1018_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1018_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, global_values->get(2));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, global_values->get(2));
    }
    event_1018_13_end: ;
}
void Frames::event_func_2226()
{
    // event 1019_13
    bool or_result_1019_13 = false;
    bool or_temp_result_1019_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1019_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1019_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) > (8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) < (20))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1019_13_0_end;
        or_result_1019_13 = true;
        or_temp_result_1019_13_0 = true;
    }
    or_event_1019_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1019_13_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1019_13
    bool or_temp_result_1019_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1019_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1019_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (3))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1019_13_1_end;
        or_result_1019_13 = true;
        or_temp_result_1019_13_1 = true;
    }
    or_event_1019_13_1_end: ;
    if (or_temp_result_1019_13_1) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1019_13
    bool or_temp_result_1019_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1019_13_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1019_13_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (27))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) <= (29))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1019_13_2_end;
        or_result_1019_13 = true;
        or_temp_result_1019_13_2 = true;
        or_event_1019_13_2_end: ;
        if (or_temp_result_1019_13_2) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1019_13) goto or_final_or_event_1019_13_2_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1019_13_0 || or_temp_result_1019_13_1 || or_temp_result_1019_13_2) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1019_13_0 || or_temp_result_1019_13_1 || or_temp_result_1019_13_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, global_values->get(2));
            ((Active*)*it)->alterables->values.set(25, global_values->get(2));
        }
    }
    or_final_or_event_1019_13_2_end: ;
}
void Frames::event_func_2227()
{
    // event 1020_13
    bool or_result_1020_13 = false;
    bool or_temp_result_1020_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1020_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1020_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) <= (7))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1020_13_0_end;
        or_result_1020_13 = true;
        or_temp_result_1020_13_0 = true;
    }
    or_event_1020_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1020_13_0) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1020_13
    bool or_temp_result_1020_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1020_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1020_13_1_end;
        or_result_1020_13 = true;
        or_temp_result_1020_13_1 = true;
    }
    or_event_1020_13_1_end: ;
    if (or_temp_result_1020_13_1) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1020_13
    bool or_temp_result_1020_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1020_13_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1020_13_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) <= (24))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1020_13_2_end;
        or_result_1020_13 = true;
        or_temp_result_1020_13_2 = true;
    }
    or_event_1020_13_2_end: ;
    if (or_temp_result_1020_13_2) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1020_13
    bool or_temp_result_1020_13_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1020_13_3_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1020_13_3_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) <= (22))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (20))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1020_13_3_end;
        or_result_1020_13 = true;
        or_temp_result_1020_13_3 = true;
    }
    or_event_1020_13_3_end: ;
    if (or_temp_result_1020_13_3) {
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1020_13
    bool or_temp_result_1020_13_4 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto or_event_1020_13_4_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1020_13_4_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(24)) <= (15))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1020_13_4_end;
        or_result_1020_13 = true;
        or_temp_result_1020_13_4 = true;
        or_event_1020_13_4_end: ;
        if (or_temp_result_1020_13_4) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1020_13) goto or_final_or_event_1020_13_4_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1020_13_0 || or_temp_result_1020_13_2 || or_temp_result_1020_13_3 || or_temp_result_1020_13_4) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1020_13_0 || or_temp_result_1020_13_1 || or_temp_result_1020_13_2 || or_temp_result_1020_13_3 || or_temp_result_1020_13_4) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(14));
            ((Active*)*it)->alterables->values.set(25, ((Active*)get_single(playermovementvalues_245_instances, it.current_index, default_active_instance))->alterables->values.get(14));
        }
    }
    or_final_or_event_1020_13_4_end: ;
}
void Frames::event_func_2228()
{
    // event 1021_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1021_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (38))) goto event_1021_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14));
    }
    event_1021_13_end: ;
}
void Frames::event_func_2229()
{
    // event 1022_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1022_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1022_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_1022_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14));
    }
    event_1022_13_end: ;
}
void Frames::event_func_2230()
{
    // event 1023_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1023_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) < (90))) goto event_1023_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1023_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25)) < (180.0))) goto event_1023_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25)-4, 0));
    }
    event_1023_13_end: ;
}
void Frames::event_func_2231()
{
    // event 1024_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1024_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) < (90))) goto event_1024_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1024_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25)) >= (180.0))) goto event_1024_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25)+4, 360)%math_helper%360);
    }
    event_1024_13_end: ;
}
void Frames::event_func_2232()
{
    // event 1025_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1025_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1025_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_1025_13_end;
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(0, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(21)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.set(1, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(22)-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
        {
            loop_toolsanglecalculator_running = true;
            int times = int(1);
            loop_toolsanglecalculator_index = 0;
            while (loop_toolsanglecalculator_index < times) {
                loop_toolsanglecalculator_13();
                if (!loop_toolsanglecalculator_running) break;
                loop_toolsanglecalculator_index++;
            }
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, ((Active*)get_instance(mastergroupsa_384_instances))->alterables->values.get(2));
    }
    event_1025_13_end: ;
}
void Frames::event_func_2233()
{
    // event 1026_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1026_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
    }
    event_1026_13_end: ;
}
void Frames::event_func_2234()
{
    // event 1027_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1027_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_1027_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1027_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1027_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1027_13_end;
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25)+180, 0);
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25)+180, 0);
    }
    event_1027_13_end: ;
}
void Frames::event_func_2235()
{
    // event 1028_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1028_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_1028_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1028_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_1028_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1028_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
    }
    event_1028_13_end: ;
}
void Frames::event_func_2236()
{
    // event 1029_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1029_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_1029_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1029_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1029_13_end;
        ((Active*)get_instance(playerskinsash_418_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
    }
    event_1029_13_end: ;
}
void Frames::event_func_2237()
{
    // event 1030_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1030_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(17)) > (1))) goto event_1030_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1030_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.sub(17, 1);
    }
    event_1030_13_end: ;
}
void Frames::event_func_2238()
{
    // event 1031_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1031_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(17)) == (1))) goto event_1031_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.sub(17, 1);
        ((Active*)get_instance(playerskinsash_418_instances))->set_blend_color(make_color_int(255, 255, 255));
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_blend_color(make_color_int(255, 255, 255));
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
    }
    event_1031_13_end: ;
}
void Frames::event_func_2239()
{
    // event 1032_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1032_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(17)) > (1))) goto event_1032_13_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1032_13_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->blend_color.get_int()) == (make_color_int(255, 160, 128)))) goto event_1032_13_end;
        FrameObject * single_instance_1032_13_0; single_instance_1032_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1032_13_0 == NULL)
                    single_instance_1032_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1032_13_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
        ((Active*)((Active*)single_instance_1032_13_0))->set_x(((Active*)single_instance_1032_13_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1032_13_0))->set_y(((Active*)single_instance_1032_13_0)->get_y()-10+randrange(21));
    }
    event_1032_13_end: ;
}
void Frames::event_func_2240()
{
    // event 1033_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1033_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (0))) goto event_1033_13_end;
        if (not_always_1033_13 > loop_count) {
            not_always_1033_13 = loop_count + 2;
            goto event_1033_13_end;
        }
        not_always_1033_13 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(true);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1033_13_end: ;
}
void Frames::event_func_2241()
{
    // event 1034_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1034_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_1034_13_end;
        if (not_always_1034_13 > loop_count) {
            not_always_1034_13 = loop_count + 2;
            goto event_1034_13_end;
        }
        not_always_1034_13 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1034_13_end: ;
}
void Frames::event_func_2242()
{
    // event 1035_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1035_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1035_13_end;
        if (not_always_1035_13 > loop_count) {
            not_always_1035_13 = loop_count + 2;
            goto event_1035_13_end;
        }
        not_always_1035_13 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1035_13_end: ;
}
void Frames::event_func_2243()
{
    // event 1036_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1036_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1036_13_end;
        if (not_always_1036_13 > loop_count) {
            not_always_1036_13 = loop_count + 2;
            goto event_1036_13_end;
        }
        not_always_1036_13 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1036_13_end: ;
}
void Frames::event_func_2244()
{
    // event 1037_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1037_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1037_13_end;
        if (not_always_1037_13 > loop_count) {
            not_always_1037_13 = loop_count + 2;
            goto event_1037_13_end;
        }
        not_always_1037_13 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1037_13_end: ;
}
void Frames::event_func_2245()
{
    // event 1038_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1038_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (5))) goto event_1038_13_end;
        if (not_always_1038_13 > loop_count) {
            not_always_1038_13 = loop_count + 2;
            goto event_1038_13_end;
        }
        not_always_1038_13 = loop_count + 2;
        ((Active*)get_instance(playerskinsash_418_instances))->set_visible(false);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1038_13_end: ;
}
void Frames::event_func_2246()
{
    // event 1039_13
    {
        if (!(group_main_engine_1)) goto event_1039_13_end;
        if (not_always_1039_13 > loop_count) {
            not_always_1039_13 = loop_count + 2;
            goto event_1039_13_end;
        }
        not_always_1039_13 = loop_count + 2;
        link_352_instances.clear_selection();
        for (ObjectIterator it(link_352_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1039_13_end: ;
}
void Frames::event_func_2247()
{
    // event 1046_13
    {
        if (!(group_main_engine_1)) goto event_1046_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/80)%math_helper%12);
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/100)%math_helper%4);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/100)%math_helper%6);
        }
    }
    event_1046_13_end: ;
}
void Frames::event_func_2248()
{
    // event 1047_13
    {
        if (!(group_main_engine_1)) goto event_1047_13_end;
        if (!((global_values->get(12)) >= (2))) goto event_1047_13_end;
        if (!((global_values->get(3)%math_helper%200) == (0))) goto event_1047_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1047_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1047_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) > (0))) goto event_1047_13_end;
        if (!((((Counter*)get_instance(guirings_122_instances))->value) < (14))) goto event_1047_13_end;
        ((Counter*)get_instance(guirings_122_instances))->add(1);
        effectsheart_307_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsheart_307(-32, -32), 6);
            effectsheart_307_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsheart_307(-32, -32), 6);
            effectsheart_307_instances.add_back();
        }
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Counter*)get_instance(guirings_122_instances))->get_x()+16-randrange(16));
            ((Active*)*it)->set_y(((Counter*)get_instance(guirings_122_instances))->get_y()+16-randrange(16));
            ((Active*)*it)->alterables->values.set(1, randrange(36));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x()-frame_left());
        }
    }
    event_1047_13_end: ;
}
void Frames::event_func_2249()
{
    // event 1048_13
    {
        if (!(group_main_engine_1)) goto event_1048_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1048_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1048_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1048_13_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_13();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1048_13_end: ;
}
void Frames::event_func_2250()
{
    // event 1050_13
    {
        if (!(group_main_engine_1)) goto event_1050_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1050_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_max(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(8), ((Counter*)get_instance(guirings_122_instances))->get_x()));
            ((Active*)*it)->set_y(get_max(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(9), ((Counter*)get_instance(guirings_122_instances))->get_y()));
        }
    }
    event_1050_13_end: ;
}
void Frames::event_func_2251()
{
    // event 1051_13
    bool or_result_1051_13 = false;
    bool or_temp_result_1051_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1051_13_0_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto or_event_1051_13_0_end;
        guirings_122_instances.clear_selection();
        if (!check_overlap(objectpetal_302_instances, guirings_122_instances)) goto or_event_1051_13_0_end;
        FrameObject * single_instance_1051_13_0; single_instance_1051_13_0 = pick_random(objectpetal_302_instances);
        if (single_instance_1051_13_0 == NULL) goto or_event_1051_13_0_end;
        for (ObjectIterator it(guirings_122_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) >= (14))) { it.deselect(); continue; }
        }
        if (!guirings_122_instances.has_selection()) goto or_event_1051_13_0_end;
        or_result_1051_13 = true;
        or_temp_result_1051_13_0 = true;
    }
    or_event_1051_13_0_end: ;
    guirings_122_instances.clear_saved_selection();
    objectpetal_302_instances.clear_saved_selection();
    if (or_temp_result_1051_13_0) {
        guirings_122_instances.save_selection();
        objectpetal_302_instances.save_selection();
    }
    // event 1051_13
    bool or_temp_result_1051_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1051_13_1_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto or_event_1051_13_1_end;
        guirings_122_instances.clear_selection();
        if (!check_overlap(objectpetal_302_instances, guirings_122_instances)) goto or_event_1051_13_1_end;
        FrameObject * single_instance_1051_13_0; single_instance_1051_13_0 = pick_random(objectpetal_302_instances);
        if (single_instance_1051_13_0 == NULL) goto or_event_1051_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1051_13_1_end;
        for (ObjectIterator it(guirings_122_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->value) >= (8))) { it.deselect(); continue; }
        }
        if (!guirings_122_instances.has_selection()) goto or_event_1051_13_1_end;
        or_result_1051_13 = true;
        or_temp_result_1051_13_1 = true;
        or_event_1051_13_1_end: ;
        playermovementvalues_245_instances.clear_saved_selection();
        if (or_temp_result_1051_13_1) {
            guirings_122_instances.save_selection();
            objectpetal_302_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1051_13) goto or_final_or_event_1051_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        guirings_122_instances.empty_selection();
        objectpetal_302_instances.empty_selection();
        if (or_temp_result_1051_13_0 || or_temp_result_1051_13_1) {
            guirings_122_instances.restore_selection();
        }
        if (or_temp_result_1051_13_0 || or_temp_result_1051_13_1) {
            objectpetal_302_instances.restore_selection();
        }
        if (or_temp_result_1051_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        FrameObject * single_instance_1051_13_1; single_instance_1051_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(guirings_122_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Counter*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_guilinkbonus_280(parent->x + -4, parent->y + 34), parent->layer);
                if (single_instance_1051_13_1 == NULL)
                    single_instance_1051_13_1 = new_obj;
            }
        }
        masterlevel_37_instances.clear_selection();
        for (ObjectIterator it(masterlevel_37_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
        ((Active*)((Active*)single_instance_1051_13_1))->force_animation(7);
        ((Active*)((Active*)single_instance_1051_13_1))->set_y(((Active*)single_instance_1051_13_1)->get_y()+(((Active*)get_instance(guiscoretimerings_451_instances, default_active_instance))->alterables->values.get(7)%math_helper%14)*12);
        guiscoretimerings_451_instances.clear_selection();
        for (ObjectIterator it(guiscoretimerings_451_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
        guicrystal_121_instances.clear_selection();
        for (ObjectIterator it(guicrystal_121_instances); !it.end(); ++it) {
            ((Counter*)*it)->subtract(1);
        }
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+5, 100));
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_1051_13_1_end: ;
}
void Frames::event_func_2252()
{
    // event 1052_13
    {
        if (!(group_main_engine_1)) goto event_1052_13_end;
        if (!((guilinkbonus_280_instances.size()) == (0))) goto event_1052_13_end;
        if (not_always_1052_13 > loop_count) {
            not_always_1052_13 = loop_count + 2;
            goto event_1052_13_end;
        }
        not_always_1052_13 = loop_count + 2;
        ((Active*)get_instance(guiscoretimerings_451_instances))->alterables->values.set(7, 0);
    }
    event_1052_13_end: ;
}
void Frames::event_func_2253()
{
    // event 1053_13
    {
        if (!(group_main_engine_1)) goto event_1053_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1053_13_end;
        guirings_122_instances.clear_selection();
        if (!check_overlap(objectpetal_302_instances, guirings_122_instances)) goto event_1053_13_end;
        FrameObject * single_instance_1053_13_0; single_instance_1053_13_0 = pick_random(objectpetal_302_instances);
        if (single_instance_1053_13_0 == NULL) goto event_1053_13_end;
        media.play_id(SOUND_ITEM_PETALGET2_4, -1, 1);
        ((Counter*)get_instance(guirings_122_instances))->add(get_min(get_max(1, global_values->get(12)), 2));
        ((Active*)((Active*)single_instance_1053_13_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1053_13_0))->destroy();
        effectsheart_307_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsheart_307(-32, -32), 6);
            effectsheart_307_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsheart_307(-32, -32), 6);
            effectsheart_307_instances.add_back();
        }
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)single_instance_1053_13_0)->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)single_instance_1053_13_0)->get_y()+randrange(16)-randrange(16));
            ((Active*)*it)->alterables->values.set(1, randrange(36));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x()-frame_left());
        }
    }
    event_1053_13_end: ;
}
void Frames::event_func_2254()
{
    // event 1054_13
    {
        if (!(group_main_engine_1)) goto event_1054_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1054_13_end;
        if (!(test_obstacle(((Active*)get_single(objectpetal_302_instances, default_active_instance))->get_x(), ((Active*)get_single(objectpetal_302_instances, default_active_instance))->get_y()))) goto event_1054_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1054_13_end: ;
}
void Frames::event_func_2255()
{
    // event 1055_13
    {
        if (!(group_main_engine_1)) goto event_1055_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(14))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (2))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1055_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(14);
        }
    }
    event_1055_13_end: ;
}
void Frames::event_func_2256()
{
    // event 1056_13
    {
        if (!(group_main_engine_1)) goto event_1056_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1056_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(8, 1);
        }
    }
    event_1056_13_end: ;
}
void Frames::event_func_2257()
{
    // event 1057_13
    {
        if (!(group_main_engine_1)) goto event_1057_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1057_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(7, 0.5);
            ((Active*)*it)->alterables->values.set(6, 5);
        }
    }
    event_1057_13_end: ;
}
void Frames::event_func_2258()
{
    // event 1058_13
    {
        if (!(group_main_engine_1)) goto event_1058_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (5))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1058_13_end;
        qualifier_7.clear_selection();
        if (!check_overlap(objectpetal_302_instances, qualifier_7)) goto event_1058_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(7, 0.5);
            ((Active*)*it)->alterables->values.set(6, 5);
        }
    }
    event_1058_13_end: ;
}
void Frames::event_func_2259()
{
    // event 1059_13
    {
        if (!(group_main_engine_1)) goto event_1059_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (5))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1059_13_end;
        qualifier_8.clear_selection();
        if (!check_overlap(objectpetal_302_instances, qualifier_8)) goto event_1059_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->advance_movement(-1);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(7, 0.5);
            ((Active*)*it)->alterables->values.set(6, 5);
        }
    }
    event_1059_13_end: ;
}
void Frames::event_func_2260()
{
    // event 1060_13
    {
        if (!(group_main_engine_1)) goto event_1060_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (frame_bottom()+30))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1060_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1060_13_end: ;
}
void Frames::event_func_2261()
{
    // event 1061_13
    {
        if (!(group_main_engine_1)) goto event_1061_13_end;
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (40))) { it.deselect(); continue; }
        }
        if (!effectsheart_307_instances.has_selection()) goto event_1061_13_end;
        if (!((((Active*)get_single(effectsheart_307_instances, default_active_instance))->layer->index+1) != (7))) goto event_1061_13_end;
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(1)*10)*5);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1061_13_end: ;
}
void Frames::event_func_2262()
{
    // event 1062_13
    {
        if (!(group_main_engine_1)) goto event_1062_13_end;
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (40))) { it.deselect(); continue; }
        }
        if (!effectsheart_307_instances.has_selection()) goto event_1062_13_end;
        if (!((((Active*)get_single(effectsheart_307_instances, default_active_instance))->layer->index+1) == (7))) goto event_1062_13_end;
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+((Active*)*it)->alterables->values.get(0)+sin_deg(((Active*)*it)->alterables->values.get(1)*10)*5);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1062_13_end: ;
}
void Frames::event_func_2263()
{
    // event 1063_13
    {
        if (!(group_main_engine_1)) goto event_1063_13_end;
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (40))) { it.deselect(); continue; }
        }
        if (!effectsheart_307_instances.has_selection()) goto event_1063_13_end;
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1063_13_end: ;
}
void Frames::event_func_2264()
{
    // event 1064_13
    {
        if (!(group_main_engine_1)) goto event_1064_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) != (3))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1064_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(100-((Active*)*it)->alterables->values.get(3))+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)*((Active*)*it)->alterables->values.get(3))*0.01);
            ((Active*)*it)->set_y((((Active*)*it)->get_y()*(100-((Active*)*it)->alterables->values.get(3))+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)*((Active*)*it)->alterables->values.get(3))*0.01);
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+1, 100));
        }
    }
    event_1064_13_end: ;
}
void Frames::event_func_2265()
{
    // event 1070_13
    {
        if (!(group_main_engine_1)) goto event_1070_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1070_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1070_13_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1070_13_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_13();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1070_13_end: ;
}
void Frames::event_func_2266()
{
    // event 1074_13
    {
        if (!(group_main_engine_1)) goto event_1074_13_end;
        if (!(frame_time >= 0.2)) goto event_1074_13_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(14))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1074_13_end;
        if (!(test_obstacle(((Active*)get_single(objectcrystal_279_instances, default_active_instance))->get_x(), ((Active*)get_single(objectcrystal_279_instances, default_active_instance))->get_y()))) goto event_1074_13_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1074_13_end: ;
}
void Frames::event_func_2267()
{
    // event 1075_13
    {
        if (!(group_main_engine_1)) goto event_1075_13_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(14))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1075_13_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(14);
        }
    }
    event_1075_13_end: ;
}
void Frames::event_func_2268()
{
    // event 1079_13
    {
        if (!(group_main_engine_1)) goto event_1079_13_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1079_13_end;
        FrameObject * single_instance_1079_13_0; single_instance_1079_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectcrystal_279_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectscrystalbit_323(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1079_13_0 == NULL)
                    single_instance_1079_13_0 = new_obj;
            }
        }
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1079_13_1; single_instance_1079_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectcrystal_279_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1079_13_1 == NULL)
                    single_instance_1079_13_1 = new_obj;
            }
        }
        media.play_id(SOUND_ITEM_CRYSTAL_27, -1, 1);
    }
    event_1079_13_end: ;
}
void Frames::event_func_2269()
{
    // event 1080_13
    {
        if (!(group_main_engine_1)) goto event_1080_13_end;
        if (!((effectscrystalbit_323_instances.size()) > (0))) goto event_1080_13_end;
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)*it)->get_direction()+3);
        }
    }
    event_1080_13_end: ;
}
void Frames::event_func_2270()
{
    // event 1081_13
    {
        if (!(group_main_engine_1)) goto event_1081_13_end;
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(4))) { it.deselect(); continue; }
        }
        if (!effectscrystalbit_323_instances.has_selection()) goto event_1081_13_end;
        FrameObject * single_instance_1081_13_0; single_instance_1081_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(effectscrystalbit_323_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1081_13_0 == NULL)
                    single_instance_1081_13_0 = new_obj;
            }
        }
    }
    event_1081_13_end: ;
}
void Frames::event_func_2271()
{
    // event 1082_13
    {
        if (!(group_main_engine_1)) goto event_1082_13_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1082_13_end;
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(100-((Active*)*it)->alterables->values.get(3))+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)*((Active*)*it)->alterables->values.get(3))*0.01);
            ((Active*)*it)->set_y((((Active*)*it)->get_y()*(100-((Active*)*it)->alterables->values.get(3))+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)*((Active*)*it)->alterables->values.get(3))*0.01);
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+1, 100));
        }
    }
    event_1082_13_end: ;
}
void Frames::event_func_2272()
{
    // event 1083_13
    {
        if (!(group_main_engine_1)) goto event_1083_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1083_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 1);
        }
    }
    event_1083_13_end: ;
}
void Frames::event_func_2273()
{
    // event 1084_13
    {
        if (!(group_main_engine_1)) goto event_1084_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1084_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 1);
        }
    }
    event_1084_13_end: ;
}
void Frames::event_func_2274()
{
    // event 1085_13
    {
        if (!(group_main_engine_1)) goto event_1085_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1085_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(2, 0.5);
            ((Active*)*it)->alterables->values.set(3, 8);
        }
    }
    event_1085_13_end: ;
}
void Frames::event_func_2275()
{
    // event 1086_13
    {
        if (!(group_main_engine_1)) goto event_1086_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1086_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)+sin_deg(global_values->get(3)*1.5)*4);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(7));
        }
    }
    event_1086_13_end: ;
}
void Frames::event_func_2276()
{
    // event 1087_13
    {
        if (!(group_main_engine_1)) goto event_1087_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1087_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.1, 0));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(8));
        }
    }
    event_1087_13_end: ;
}
void Frames::event_func_2277()
{
    // event 1088_13
    {
        if (!(group_main_engine_1)) goto event_1088_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1088_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_max(((Active*)*it)->alterables->values.get(1)-0.1, 0));
            ((Active*)*it)->alterables->values.add(7, ((Active*)*it)->alterables->values.get(8));
        }
    }
    event_1088_13_end: ;
}
void Frames::event_func_2278()
{
    // event 1089_13
    {
        if (!(group_main_engine_1)) goto event_1089_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-120))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1089_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 1);
        }
    }
    event_1089_13_end: ;
}
void Frames::event_func_2279()
{
    // event 1090_13
    {
        if (!(group_main_engine_1)) goto event_1090_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1090_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x((((Active*)*it)->get_x()*(100-((Active*)*it)->alterables->values.get(0))+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)*((Active*)*it)->alterables->values.get(0))*0.01);
            ((Active*)*it)->set_y((((Active*)*it)->get_y()*(100-((Active*)*it)->alterables->values.get(0))+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)*((Active*)*it)->alterables->values.get(0))*0.01);
            ((Active*)*it)->alterables->values.set(0, get_min(((Active*)*it)->alterables->values.get(0)+1, 100));
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1090_13_end: ;
}
void Frames::event_func_2280()
{
    // event 1091_13
    {
        if (!(group_main_engine_1)) goto event_1091_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1091_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1091_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1091_13_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_13();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1091_13_end: ;
}
void Frames::event_func_2281()
{
    // event 1093_13
    {
        if (!(group_main_engine_1)) goto event_1093_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1093_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.add(0, 10);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.add(14, 1);
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->force_animation(7);
        }
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 15+((Active*)get_single(objectkeystone_311_instances, default_active_instance))->get_direction())+1, 1, 15+((Active*)get_single(objectkeystone_311_instances, default_active_instance))->get_direction());
        ((Active*)get_instance(guiscoretimerings_451_instances))->alterables->values.set(10, ((Active*)get_single(objectkeystone_311_instances))->get_fixed());
        ((Active*)get_instance(guienergy_124_instances))->alterables->flags.enable(1);
        ((ArrayObject*)get_instance(savedata_28_instances))->set_value(((Active*)get_single(objectkeystone_311_instances, default_active_instance))->get_direction()+1, 1, 11);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, 1);
        }
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
        ((Counter*)get_instance(guicrystal_121_instances))->subtract(1);
        media.stop_sample(SOUND_ITEM_KEYSTONE1_39);
        media.play_id(SOUND_ITEM_KEYSTONE1_39, -1, 1);
    }
    event_1093_13_end: ;
}
void Frames::event_func_2282()
{
    // event 1095_13
    {
        if (!(group_main_engine_1)) goto event_1095_13_end;
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*8);
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)-cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*8);
            ((Active*)*it)->alterables->values.add(0, get_max(get_abs(((Active*)*it)->alterables->values.get(2))*2, 3)+get_max(((Active*)*it)->alterables->values.get(2)*3, 0));
            ((Active*)*it)->alterables->values.add(1, get_min(((Active*)*it)->alterables->values.get(2)*-1, 4.0));
            ((Active*)*it)->alterables->values.set(2, get_min(((Active*)*it)->alterables->values.get(2)+0.1, 4));
        }
    }
    event_1095_13_end: ;
}
void Frames::event_func_2283()
{
    // event 1096_13
    {
        if (!(group_main_engine_1)) goto event_1096_13_end;
        effectscolordot_308_instances.clear_selection();
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (20))) { it.deselect(); continue; }
        }
        if (!effectscolordot_308_instances.has_selection()) goto event_1096_13_end;
        for (ObjectIterator it(effectscolordot_308_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 20);
        }
    }
    event_1096_13_end: ;
}
void Frames::event_func_2284()
{
    // event 1097_13
    {
        if (!(group_main_engine_1)) goto event_1097_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1097_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(4)*-2, 0);
            ((Active*)*it)->alterables->values.add(4, 15);
        }
    }
    event_1097_13_end: ;
}
void Frames::event_func_2285()
{
    // event 1098_13
    {
        if (!(group_main_engine_1)) goto event_1098_13_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (360))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1098_13_end;
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ringsparkle_139_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectkeystone_311_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
        }
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(objectkeystone_311_instances, it.current_index, default_active_instance))->get_x()+randrange(12)-randrange(25));
            ((Active*)*it)->set_y(((Active*)get_single(objectkeystone_311_instances, it.current_index, default_active_instance))->get_y()+randrange(12)-randrange(25));
        }
        media.play_id(SOUND_ITEM_KEYSTONE2_48, -1, 1);
    }
    event_1098_13_end: ;
}
void Frames::event_func_2286()
{
    // event 1099_13
    {
        if (!(group_main_engine_1)) goto event_1099_13_end;
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (10))) { it.deselect(); continue; }
        }
        if (!objectcodec_354_instances.has_selection()) goto event_1099_13_end;
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0-randrange(60));
        }
        FrameObject * single_instance_1099_13_0; single_instance_1099_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectcodec_354_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1099_13_0 == NULL)
                    single_instance_1099_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1099_13_0))->set_x(((Active*)get_single(objectcodec_354_instances, default_active_instance))->get_x()+randrange(16)-randrange(16));
        ((Active*)((Active*)single_instance_1099_13_0))->set_y(((Active*)get_single(objectcodec_354_instances, default_active_instance))->get_y()+randrange(16)-randrange(16));
    }
    event_1099_13_end: ;
}
void Frames::event_func_2287()
{
    // event 1100_13
    {
        if (!(group_main_engine_1)) goto event_1100_13_end;
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcodec_354_instances.has_selection()) goto event_1100_13_end;
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/80)%math_helper%10);
        }
    }
    event_1100_13_end: ;
}
void Frames::event_func_2288()
{
    // event 1101_13
    {
        if (!(group_main_engine_1)) goto event_1101_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1101_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1101_13_end;
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectcodec_354_instances.has_selection()) goto event_1101_13_end;
        ringsparkle_139_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectcodec_354_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
        }
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(objectcodec_354_instances, it.current_index, default_active_instance))->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)get_single(objectcodec_354_instances, it.current_index, default_active_instance))->get_y()+randrange(16)-randrange(16));
        }
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        media.play_id(SOUND_ITEM_STARCARD_32, -1, 1);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->flags.enable(0);
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 20, ((Active*)get_single(objectcodec_354_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1101_13_end: ;
}
void Frames::event_func_2289()
{
    // event 1102_13
    {
        if (!(group_main_engine_1)) goto event_1102_13_end;
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!objectcodec_354_instances.has_selection()) goto event_1102_13_end;
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(4)%math_helper%10);
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->alterables->values.add(5, 10);
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-40-((Active*)*it)->alterables->values.get(4)*0.5);
        }
    }
    event_1102_13_end: ;
}
void Frames::event_func_2290()
{
    // event 1103_13
    {
        if (!(group_main_engine_1)) goto event_1103_13_end;
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!objectcodec_354_instances.has_selection()) goto event_1103_13_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(20, ((Active*)get_single(objectcodec_354_instances, default_active_instance))->alterables->values.get(0))) > (0))) goto event_1103_13_end;
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(64);
        }
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1103_13_end: ;
}
void Frames::event_func_2291()
{
    // event 1104_13
    {
        if (!(group_main_engine_1)) goto event_1104_13_end;
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!objectcodec_354_instances.has_selection()) goto event_1104_13_end;
        if (not_always_1104_13 > loop_count) {
            not_always_1104_13 = loop_count + 2;
            goto event_1104_13_end;
        }
        not_always_1104_13 = loop_count + 2;
        FrameObject * single_instance_1104_13_0; single_instance_1104_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectcodec_354_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcodecid_303(parent->x + -3, parent->y + 0), parent->layer);
                if (single_instance_1104_13_0 == NULL)
                    single_instance_1104_13_0 = new_obj;
            }
        }
        ((Counter*)((Counter*)single_instance_1104_13_0))->set(((Active*)get_single(objectcodec_354_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1104_13_end: ;
}
void Frames::event_func_2292()
{
    // event 1105_13
    {
        if (!(group_main_engine_1)) goto event_1105_13_end;
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+10);
            ((Counter*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-40);
        }
    }
    event_1105_13_end: ;
}
void Frames::event_func_2293()
{
    // event 1106_13
    {
        if (!(group_main_engine_1)) goto event_1106_13_end;
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->get_movement()->get_speed()) < (5))) { it.deselect(); continue; }
        }
        if (!objectcodecid_303_instances.has_selection()) goto event_1106_13_end;
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->set_deceleration(7);
        }
    }
    event_1106_13_end: ;
}
void Frames::event_func_2294()
{
    // event 1107_13
    {
        if (!(group_main_engine_1)) goto event_1107_13_end;
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            if (!((((Counter*)(*it))->get_movement()->get_speed()) == (0))) { it.deselect(); continue; }
        }
        if (!objectcodecid_303_instances.has_selection()) goto event_1107_13_end;
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->destroy();
        }
    }
    event_1107_13_end: ;
}
void Frames::event_func_2295()
{
    // event 1108_13
    {
        if (!(group_main_engine_1)) goto event_1108_13_end;
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (80))) { it.deselect(); continue; }
        }
        if (!objectcodec_354_instances.has_selection()) goto event_1108_13_end;
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ringsparkle_139_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectcodec_354_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
        }
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(objectcodec_354_instances, it.current_index, default_active_instance))->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)get_single(objectcodec_354_instances, it.current_index, default_active_instance))->get_y()+randrange(16)-randrange(16));
        }
    }
    event_1108_13_end: ;
}
void Frames::event_func_2296()
{
    // event 1110_13
    {
        if (!(group_main_engine_1)) goto event_1110_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-40)) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1110_13_end;
        if (!((global_values->get(3)%math_helper%15) == (5))) goto event_1110_13_end;
        FrameObject * single_instance_1110_13_0; single_instance_1110_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectextralife_304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1110_13_0 == NULL)
                    single_instance_1110_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1110_13_0))->set_x(((Active*)get_single(objectextralife_304_instances, default_active_instance))->get_x()+randrange(16)-randrange(16));
        ((Active*)((Active*)single_instance_1110_13_0))->set_y(((Active*)get_single(objectextralife_304_instances, default_active_instance))->get_y()+randrange(16)-randrange(16));
    }
    event_1110_13_end: ;
}
void Frames::event_func_2297()
{
    // event 1111_13
    {
        if (!(group_main_engine_1)) goto event_1111_13_end;
        if (!((((Counter*)get_instance(guicrystal_121_instances))->value) <= (0))) goto event_1111_13_end;
        ((Counter*)get_instance(guicrystal_121_instances))->set(global_values->get(18));
        FrameObject * single_instance_1111_13_0; single_instance_1111_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectextralife_304(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1111_13_0 == NULL)
                    single_instance_1111_13_0 = new_obj;
            }
        }
    }
    event_1111_13_end: ;
}
void Frames::event_func_2298()
{
    // event 1112_13
    {
        if (!(group_main_engine_1)) goto event_1112_13_end;
        if (!((objectextralife_304_instances.size()) > (0))) goto event_1112_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(7);
        }
    }
    event_1112_13_end: ;
}
void Frames::event_func_2299()
{
    // event 1113_13
    {
        if (!(group_main_engine_1)) goto event_1113_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) > (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1113_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(((Active*)*it)->alterables->values.get(3)*((Active*)*it)->alterables->values.get(2)));
        }
    }
    event_1113_13_end: ;
}
void Frames::event_func_2300()
{
    // event 1114_13
    {
        if (!(group_main_engine_1)) goto event_1114_13_end;
        if (!((objectextralife_304_instances.size()) > (0))) goto event_1114_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(9);
        }
    }
    event_1114_13_end: ;
}
void Frames::event_func_2301()
{
    // event 1115_13
    {
        if (!(group_main_engine_1)) goto event_1115_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) > (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1115_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+(((Active*)*it)->alterables->values.get(3)*((Active*)*it)->alterables->values.get(2)));
        }
    }
    event_1115_13_end: ;
}
void Frames::event_func_2302()
{
    // event 1116_13
    {
        if (!(group_main_engine_1)) goto event_1116_13_end;
        if (!((objectextralife_304_instances.size()) > (0))) goto event_1116_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(8);
        }
    }
    event_1116_13_end: ;
}
void Frames::event_func_2303()
{
    // event 1117_13
    {
        if (!(group_main_engine_1)) goto event_1117_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1117_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.25, 12));
        }
    }
    event_1117_13_end: ;
}
void Frames::event_func_2304()
{
    // event 1118_13
    {
        if (!(group_main_engine_1)) goto event_1118_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1118_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.25, 12));
        }
    }
    event_1118_13_end: ;
}
void Frames::event_func_2305()
{
    // event 1119_13
    {
        if (!(group_main_engine_1)) goto event_1119_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
    }
    event_1119_13_end: ;
}
void Frames::event_func_2306()
{
    // event 1120_13
    {
        if (!(group_main_engine_1)) goto event_1120_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (((Active*)(*it))->overlaps_background()) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(8)) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1120_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(8);
        }
    }
    event_1120_13_end: ;
}
void Frames::event_func_2307()
{
    // event 1121_13
    {
        if (!(group_main_engine_1)) goto event_1121_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1121_13_end: ;
}
void Frames::event_func_2308()
{
    // event 1122_13
    {
        if (!(group_main_engine_1)) goto event_1122_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1122_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->force_animation(0);
        }
        {
            loop_extralife_floor_running = true;
            int times = int(12);
            loop_extralife_floor_index = 0;
            while (loop_extralife_floor_index < times) {
                loop_extralife_floor_13();
                if (!loop_extralife_floor_running) break;
                loop_extralife_floor_index++;
            }
        }
    }
    event_1122_13_end: ;
}
void Frames::event_func_2309()
{
    // event 1125_13
    {
        if (!(group_main_engine_1)) goto event_1125_13_end;
        if (!((objectextralife_304_instances.size()) > (0))) goto event_1125_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1125_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, -1);
            ((Active*)*it)->set_direction(16+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
    }
    event_1125_13_end: ;
}
void Frames::event_func_2310()
{
    // event 1127_13
    {
        if (!(group_main_engine_1)) goto event_1127_13_end;
        if (!((objectextralife_304_instances.size()) > (0))) goto event_1127_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1127_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 1);
            ((Active*)*it)->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
    }
    event_1127_13_end: ;
}
void Frames::event_func_2311()
{
    // event 1128_13
    {
        if (!(group_main_engine_1)) goto event_1128_13_end;
        if (!((objectextralife_304_instances.size()) > (0))) goto event_1128_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->force_direction(((Active*)*it)->get_direction());
        }
    }
    event_1128_13_end: ;
}
void Frames::event_func_2312()
{
    // event 1129_13
    {
        if (!(group_main_engine_1)) goto event_1129_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1129_13_end;
        if (!((((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(24)) == (0))) goto event_1129_13_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(2)+str_1_2_79);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1129_13_end: ;
}
void Frames::event_func_2313()
{
    // event 1130_13
    {
        if (!(group_main_engine_1)) goto event_1130_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1130_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_EXTRALIFE_36, -1, 1);
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        ((Active*)get_single(objectextralife_304_instances, default_active_instance))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
    }
    event_1130_13_end: ;
}
void Frames::event_func_2314()
{
    // event 1131_13
    {
        if (!(group_main_engine_1)) goto event_1131_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1131_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(get_min(frame_right(), get_max(frame_left(), ((Active*)*it)->get_x())));
            ((Active*)*it)->set_y(get_min(frame_bottom()+100, get_max(frame_top()-100, ((Active*)*it)->get_y())));
        }
    }
    event_1131_13_end: ;
}
void Frames::event_func_2315()
{
    // event 1132_13
    {
        if (!(group_main_engine_1)) goto event_1132_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (120))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1132_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(4)*(((Active*)*it)->alterables->values.get(4)*0.1))*25);
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()-((Active*)*it)->alterables->values.get(4)*0.5);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        FrameObject * single_instance_1132_13_0; single_instance_1132_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectextralife_304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1132_13_0 == NULL)
                    single_instance_1132_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1132_13_0))->set_x(((Active*)get_single(objectextralife_304_instances, default_active_instance))->get_x()+randrange(16)-randrange(16));
        ((Active*)((Active*)single_instance_1132_13_0))->set_y(((Active*)get_single(objectextralife_304_instances, default_active_instance))->get_y()+randrange(16)-randrange(16));
        ((Active*)single_instance_1132_13_0)->move_back(((Active*)get_single(objectextralife_304_instances)));
        ((Active*)get_single(objectextralife_304_instances, default_active_instance))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
    }
    event_1132_13_end: ;
}
void Frames::event_func_2316()
{
    // event 1133_13
    {
        if (!(group_main_engine_1)) goto event_1133_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (120))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1133_13_end;
        if (!((sin_deg(((Active*)get_single(objectextralife_304_instances, default_active_instance))->alterables->values.get(4)*(((Active*)get_single(objectextralife_304_instances, default_active_instance))->alterables->values.get(4)*0.1))) > (0))) goto event_1133_13_end;
        ((Active*)get_single(objectextralife_304_instances, default_active_instance))->move_back(((Active*)get_instance(playerskinsashhair_417_instances)));
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
    }
    event_1133_13_end: ;
}
void Frames::event_func_2317()
{
    // event 1134_13
    {
        if (!(group_main_engine_1)) goto event_1134_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (120))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1134_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(7-1);
            ((Active*)*it)->get_movement()->set_speed(80);
        }
        media.play_id(SOUND_ITEM_PETALGET_2_37, -1, 1);
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1134_13_end: ;
}
