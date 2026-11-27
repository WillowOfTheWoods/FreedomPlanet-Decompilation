#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2856()
{
    // event 970_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_970_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (10))) goto event_970_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
        }
    }
    event_970_14_end: ;
}
void Frames::event_func_2857()
{
    // event 971_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_971_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (11))) goto event_971_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
        }
    }
    event_971_14_end: ;
}
void Frames::event_func_2858()
{
    // event 972_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_972_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (12))) goto event_972_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
    }
    event_972_14_end: ;
}
void Frames::event_func_2859()
{
    // event 973_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_973_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(20))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_973_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (12))) goto event_973_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_973_14_end: ;
}
void Frames::event_func_2860()
{
    // event 974_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_974_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (13))) goto event_974_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(12);
        }
    }
    event_974_14_end: ;
}
void Frames::event_func_2861()
{
    // event 975_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_975_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (14))) goto event_975_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(18);
        }
    }
    event_975_14_end: ;
}
void Frames::event_func_2862()
{
    // event 976_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_976_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (15))) goto event_976_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_976_14_end: ;
}
void Frames::event_func_2863()
{
    // event 977_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_977_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (16))) goto event_977_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
    }
    event_977_14_end: ;
}
void Frames::event_func_2864()
{
    // event 978_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_978_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (19))) goto event_978_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
    }
    event_978_14_end: ;
}
void Frames::event_func_2865()
{
    // event 979_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_979_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (20))) goto event_979_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(25);
        }
    }
    event_979_14_end: ;
}
void Frames::event_func_2866()
{
    // event 980_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_980_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (21))) goto event_980_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
        }
    }
    event_980_14_end: ;
}
void Frames::event_func_2867()
{
    // event 981_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_981_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (22))) goto event_981_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(29);
        }
    }
    event_981_14_end: ;
}
void Frames::event_func_2868()
{
    // event 982_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_982_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (23))) goto event_982_14_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(30);
        }
    }
    event_982_14_end: ;
}
void Frames::event_func_2869()
{
    // event 983_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_983_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (24))) goto event_983_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(28);
        }
    }
    event_983_14_end: ;
}
void Frames::event_func_2870()
{
    // event 984_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_984_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (25))) goto event_984_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(27);
        }
    }
    event_984_14_end: ;
}
void Frames::event_func_2871()
{
    // event 985_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_985_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (26))) goto event_985_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(39);
        }
    }
    event_985_14_end: ;
}
void Frames::event_func_2872()
{
    // event 986_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_986_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (27))) goto event_986_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(9);
        }
    }
    event_986_14_end: ;
}
void Frames::event_func_2873()
{
    // event 987_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_987_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (28))) goto event_987_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(36);
        }
    }
    event_987_14_end: ;
}
void Frames::event_func_2874()
{
    // event 988_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_988_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (29))) goto event_988_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(35);
        }
    }
    event_988_14_end: ;
}
void Frames::event_func_2875()
{
    // event 989_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_989_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_989_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) < (0.0))) goto event_989_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(14);
        }
    }
    event_989_14_end: ;
}
void Frames::event_func_2876()
{
    // event 990_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_990_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_990_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0.0))) goto event_990_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(24)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_990_14_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(24);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->restore_frame();
        }
    }
    event_990_14_end: ;
}
void Frames::event_func_2877()
{
    // event 991_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_991_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (41))) goto event_991_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(15);
        }
    }
    event_991_14_end: ;
}
void Frames::event_func_2878()
{
    // event 992_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_992_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (42))) goto event_992_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(23, 0);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(17);
        }
    }
    event_992_14_end: ;
}
void Frames::event_func_2879()
{
    // event 993_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_993_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (43))) goto event_993_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(19);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(20);
        }
    }
    event_993_14_end: ;
}
void Frames::event_func_2880()
{
    // event 994_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_994_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (44))) goto event_994_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(21);
        }
    }
    event_994_14_end: ;
}
void Frames::event_func_2881()
{
    // event 995_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_995_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (45))) goto event_995_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(32);
        }
    }
    event_995_14_end: ;
}
void Frames::event_func_2882()
{
    // event 996_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_996_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (46))) goto event_996_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(31);
        }
    }
    event_996_14_end: ;
}
void Frames::event_func_2883()
{
    // event 997_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_997_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (47))) goto event_997_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(33);
        }
    }
    event_997_14_end: ;
}
void Frames::event_func_2884()
{
    // event 998_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_998_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (48))) goto event_998_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(37);
        }
    }
    event_998_14_end: ;
}
void Frames::event_func_2885()
{
    // event 999_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_999_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (50))) goto event_999_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_999_14_end: ;
}
void Frames::event_func_2886()
{
    // event 1000_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1000_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (51))) goto event_1000_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
        }
    }
    event_1000_14_end: ;
}
void Frames::event_func_2887()
{
    // event 1020_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1020_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1020_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (2))) goto event_1020_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (8))) goto event_1020_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (15))) goto event_1020_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (26))) goto event_1020_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (40))) goto event_1020_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1020_14_end: ;
}
void Frames::event_func_2888()
{
    // event 1021_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1021_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1021_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (1))) goto event_1021_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(14+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
    }
    event_1021_14_end: ;
}
void Frames::event_func_2889()
{
    // event 1022_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1022_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1022_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (2))) goto event_1022_14_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*4);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(20+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(27+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*4);
            ((Active*)*it)->start_animation();
        }
    }
    event_1022_14_end: ;
}
void Frames::event_func_2890()
{
    // event 1023_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1023_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (6))) goto event_1023_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (8))) goto event_1023_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(25+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*5);
            ((Active*)*it)->start_animation();
        }
    }
    event_1023_14_end: ;
}
void Frames::event_func_2891()
{
    // event 1024_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1024_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (14))) goto event_1024_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100-((Active*)get_single(playerskinsash_418_instances, it.current_index, default_active_instance))->alterables->values.get(8));
            ((Active*)*it)->start_animation();
        }
    }
    event_1024_14_end: ;
}
void Frames::event_func_2892()
{
    // event 1025_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1025_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (20))) goto event_1025_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1025_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
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
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*3);
            ((Active*)*it)->start_animation();
        }
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
    event_1025_14_end: ;
}
void Frames::event_func_2893()
{
    // event 1026_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1026_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (26))) goto event_1026_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
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
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_max(get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)))*7);
            ((Active*)*it)->start_animation();
        }
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
    event_1026_14_end: ;
}
void Frames::event_func_2894()
{
    // event 1028_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1028_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (40))) goto event_1028_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(7+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6))*4);
            ((Active*)*it)->start_animation();
        }
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
    event_1028_14_end: ;
}
void Frames::event_func_2895()
{
    // event 1029_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1029_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) >= (45))) goto event_1029_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) <= (46))) goto event_1029_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
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
    event_1029_14_end: ;
}
void Frames::event_func_2896()
{
    // event 1030_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1030_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (47))) goto event_1030_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(17+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*2);
            ((Active*)*it)->start_animation();
        }
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
    event_1030_14_end: ;
}
void Frames::event_func_2897()
{
    // event 1039_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1039_14_end;
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
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
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
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
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
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
    }
    event_1039_14_end: ;
}
void Frames::event_func_2898()
{
    // event 1040_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1040_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_1040_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1040_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1040_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1040_14_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25)+180, 0);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25)+180, 0);
        }
    }
    event_1040_14_end: ;
}
void Frames::event_func_2899()
{
    // event 1041_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1041_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_1041_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (0))) goto event_1041_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_1041_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1041_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
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
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(0-atan2_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)), 0);
        }
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
    event_1041_14_end: ;
}
void Frames::event_func_2900()
{
    // event 1042_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1042_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (7))) goto event_1042_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (2))) goto event_1042_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (3))) goto event_1042_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
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
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(25), 0);
        }
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
    event_1042_14_end: ;
}
void Frames::event_func_2901()
{
    // event 1044_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1044_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(17)) == (1))) goto event_1044_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.sub(17, 1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_blend_color(make_color_int(255, 255, 255));
        }
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
    event_1044_14_end: ;
}
void Frames::event_func_2902()
{
    // event 1045_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1045_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(17)) > (1))) goto event_1045_14_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1045_14_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->blend_color.get_int()) == (make_color_int(255, 160, 128)))) goto event_1045_14_end;
        FrameObject * single_instance_1045_14_0; single_instance_1045_14_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1045_14_0 == NULL)
                    single_instance_1045_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1045_14_0))->set_direction(pick_random(5, 6, 7, 8, 9, 10));
        ((Active*)((Active*)single_instance_1045_14_0))->set_x(((Active*)single_instance_1045_14_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1045_14_0))->set_y(((Active*)single_instance_1045_14_0)->get_y()-10+randrange(21));
    }
    event_1045_14_end: ;
}
void Frames::event_func_2903()
{
    // event 1046_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1046_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) <= (0))) goto event_1046_14_end;
        if (not_always_1046_14 > loop_count) {
            not_always_1046_14 = loop_count + 2;
            goto event_1046_14_end;
        }
        not_always_1046_14 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
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
    event_1046_14_end: ;
}
void Frames::event_func_2904()
{
    // event 1047_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1047_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (1))) goto event_1047_14_end;
        if (not_always_1047_14 > loop_count) {
            not_always_1047_14 = loop_count + 2;
            goto event_1047_14_end;
        }
        not_always_1047_14 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
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
    event_1047_14_end: ;
}
void Frames::event_func_2905()
{
    // event 1048_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1048_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1048_14_end;
        if (not_always_1048_14 > loop_count) {
            not_always_1048_14 = loop_count + 2;
            goto event_1048_14_end;
        }
        not_always_1048_14 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
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
    event_1048_14_end: ;
}
void Frames::event_func_2906()
{
    // event 1049_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1049_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1049_14_end;
        if (not_always_1049_14 > loop_count) {
            not_always_1049_14 = loop_count + 2;
            goto event_1049_14_end;
        }
        not_always_1049_14 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
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
    event_1049_14_end: ;
}
void Frames::event_func_2907()
{
    // event 1050_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1050_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1050_14_end;
        if (not_always_1050_14 > loop_count) {
            not_always_1050_14 = loop_count + 2;
            goto event_1050_14_end;
        }
        not_always_1050_14 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
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
    event_1050_14_end: ;
}
void Frames::event_func_2908()
{
    // event 1051_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_1051_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) >= (5))) goto event_1051_14_end;
        if (not_always_1051_14 > loop_count) {
            not_always_1051_14 = loop_count + 2;
            goto event_1051_14_end;
        }
        not_always_1051_14 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
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
    event_1051_14_end: ;
}
void Frames::event_func_2909()
{
    // event 1061_14
    {
        if (!(group_main_engine_1)) goto event_1061_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1061_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1061_14_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1061_14_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_14();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1061_14_end: ;
}
void Frames::event_func_2910()
{
    // event 1083_14
    {
        if (!(group_main_engine_1)) goto event_1083_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1083_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1083_14_end;
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-40))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
        }
        if (!objectcrystal_279_instances.has_selection()) goto event_1083_14_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_14();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1083_14_end: ;
}
void Frames::event_func_2911()
{
    // event 1102_14
    {
        if (!(group_main_engine_1)) goto event_1102_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1102_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1102_14_end;
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!objectkeystone_311_instances.has_selection()) goto event_1102_14_end;
        {
            loop_collect_item_running = true;
            loop_collect_item_index = 0;
            while (true) {
                loop_collect_item_14();
                if (!loop_collect_item_running) break;
                loop_collect_item_index++;
            }
        }
    }
    event_1102_14_end: ;
}
void Frames::event_func_2912()
{
    // event 1141_14
    {
        if (!(group_main_engine_1)) goto event_1141_14_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1141_14_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_EXTRALIFE_36, -1, 1);
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1141_14_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1141_14_0_end: ;
    }
    event_1141_14_end: ;
}
void Frames::event_func_2913()
{
    // event 1143_14
    {
        if (!(group_main_engine_1)) goto event_1143_14_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (120))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1143_14_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(player_389_instances))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(4)*(((Active*)*it)->alterables->values.get(4)*0.1))*25);
            ((Active*)*it)->set_y(((Active*)get_instance(player_389_instances))->get_y()-((Active*)*it)->alterables->values.get(4)*0.5);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
        FrameObject * single_instance_1143_14_0; single_instance_1143_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectextralife_304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1143_14_0 == NULL)
                    single_instance_1143_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1143_14_0))->set_x(((Active*)get_single(objectextralife_304_instances, default_active_instance))->get_x()+randrange(16)-randrange(16));
        ((Active*)((Active*)single_instance_1143_14_0))->set_y(((Active*)get_single(objectextralife_304_instances, default_active_instance))->get_y()+randrange(16)-randrange(16));
        ((Active*)single_instance_1143_14_0)->move_back(((Active*)get_single(objectextralife_304_instances)));
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1143_14_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1143_14_1_end: ;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
    }
    event_1143_14_end: ;
}
void Frames::event_func_2914()
{
    // event 1144_14
    {
        if (!(group_main_engine_1)) goto event_1144_14_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (120))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1144_14_end;
        if (!((sin_deg(((Active*)get_single(objectextralife_304_instances, default_active_instance))->alterables->values.get(4)*(((Active*)get_single(objectextralife_304_instances, default_active_instance))->alterables->values.get(4)*0.1))) > (0))) goto event_1144_14_end;
        {
            playerskinsashhair_417_instances.clear_selection();
            ObjectIterator other_it(playerskinsashhair_417_instances);
            for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1144_14_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1144_14_0_end: ;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
    }
    event_1144_14_end: ;
}
void Frames::event_func_2915()
{
    // event 1148_14
    {
        if (!(group_main_engine_1)) goto event_1148_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (2))) goto event_1148_14_end;
        if (not_always_1148_14 > loop_count) {
            not_always_1148_14 = loop_count + 2;
            goto event_1148_14_end;
        }
        not_always_1148_14 = loop_count + 2;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_1148_14_end: ;
}
void Frames::event_func_2916()
{
    // event 1149_14
    bool or_result_1149_14 = false;
    bool or_temp_result_1149_14_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1149_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1149_14_0_end;
        if (not_always_1149_14 > loop_count) {
            not_always_1149_14 = loop_count + 2;
            goto or_event_1149_14_0_end;
        }
        not_always_1149_14 = loop_count + 2;
        or_result_1149_14 = true;
        or_temp_result_1149_14_0 = true;
    }
    or_event_1149_14_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1149_14_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 1149_14
    bool or_temp_result_1149_14_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1149_14_1_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto or_event_1149_14_1_end;
        if (not_always_1149_14 > loop_count) {
            not_always_1149_14 = loop_count + 2;
            goto or_event_1149_14_1_end;
        }
        not_always_1149_14 = loop_count + 2;
        or_result_1149_14 = true;
        or_temp_result_1149_14_1 = true;
        or_event_1149_14_1_end: ;
        objectfuel_528_instances.clear_saved_selection();
        if (or_temp_result_1149_14_1) {
            objectfuel_528_instances.save_selection();
        }
        if (!or_result_1149_14) goto or_final_or_event_1149_14_1_end;
        playermovementvalues_245_instances.empty_selection();
        objectfuel_528_instances.empty_selection();
        if (or_temp_result_1149_14_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1149_14_1) {
            objectfuel_528_instances.restore_selection();
        }
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->restore_speed();
        }
    }
    or_final_or_event_1149_14_1_end: ;
}
void Frames::event_func_2917()
{
    // event 1150_14
    {
        if (!(group_main_engine_1)) goto event_1150_14_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto event_1150_14_end;
        player_389_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectfuel_528_instances)) goto event_1150_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1150_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1150_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1150_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        media.play_id(SOUND_CAROL_BIKESTART_126, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 3);
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
            ((Active*)*it)->alterables->flags.enable(8);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 30));
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        FrameObject * single_instance_1150_14_0; single_instance_1150_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1150_14_0 == NULL)
                    single_instance_1150_14_0 = new_obj;
            }
        }
        global_values->set(1, 3);
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
    }
    event_1150_14_end: ;
}
void Frames::event_func_2918()
{
    // event 1151_14
    {
        if (!(group_main_engine_1)) goto event_1151_14_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto event_1151_14_end;
        player_389_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectfuel_528_instances)) goto event_1151_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_1151_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1151_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1151_14_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 3);
        }
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 30));
    }
    event_1151_14_end: ;
}
void Frames::event_func_2919()
{
    // event 1152_14
    {
        if (!(group_main_engine_1)) goto event_1152_14_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (1))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto event_1152_14_end;
        FrameObject * single_instance_1152_14_0; single_instance_1152_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectfuel_528_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1152_14_0 == NULL)
                    single_instance_1152_14_0 = new_obj;
            }
        }
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1152_14_end: ;
}
void Frames::event_func_2920()
{
    // event 1153_14
    {
        if (!(group_main_engine_1)) goto event_1153_14_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (1))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto event_1153_14_end;
        if (!((global_values->get(3)%math_helper%7) == (2))) goto event_1153_14_end;
        FrameObject * single_instance_1153_14_0; single_instance_1153_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectfuel_528_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1153_14_0 == NULL)
                    single_instance_1153_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1153_14_0))->set_x(((Active*)get_single(objectfuel_528_instances, default_active_instance))->get_x()+randrange(16)-randrange(33));
        ((Active*)((Active*)single_instance_1153_14_0))->set_y(((Active*)get_single(objectfuel_528_instances, default_active_instance))->get_y()+randrange(16)-randrange(33));
        ((Active*)((Active*)single_instance_1153_14_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1153_14_0))->restore_frame();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1153_14_end: ;
}
void Frames::event_func_2921()
{
    // event 1154_14
    {
        if (!(group_main_engine_1)) goto event_1154_14_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (3))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto event_1154_14_end;
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1154_14_end: ;
}
void Frames::event_func_2922()
{
    // event 1155_14
    {
        if (!(group_main_engine_1)) goto event_1155_14_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto event_1155_14_end;
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
        }
    }
    event_1155_14_end: ;
}
void Frames::event_func_2923()
{
    // event 1156_14
    bool or_result_1156_14 = false;
    bool or_temp_result_1156_14_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1156_14_0_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto or_event_1156_14_0_end;
        or_result_1156_14 = true;
        or_temp_result_1156_14_0 = true;
    }
    or_event_1156_14_0_end: ;
    objectfuel_528_instances.clear_saved_selection();
    if (or_temp_result_1156_14_0) {
        objectfuel_528_instances.save_selection();
    }
    // event 1156_14
    bool or_temp_result_1156_14_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1156_14_1_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto or_event_1156_14_1_end;
        qualifier_7.clear_selection();
        if (!check_overlap(objectfuel_528_instances, qualifier_7)) goto or_event_1156_14_1_end;
        or_result_1156_14 = true;
        or_temp_result_1156_14_1 = true;
    }
    or_event_1156_14_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1156_14_1) {
        objectfuel_528_instances.save_selection();
        qualifier_7.save_selection();
    }
    // event 1156_14
    bool or_temp_result_1156_14_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1156_14_2_end;
        objectfuel_528_instances.clear_selection();
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!objectfuel_528_instances.has_selection()) goto or_event_1156_14_2_end;
        qualifier_8.clear_selection();
        if (!check_overlap(objectfuel_528_instances, qualifier_8)) goto or_event_1156_14_2_end;
        or_result_1156_14 = true;
        or_temp_result_1156_14_2 = true;
        or_event_1156_14_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1156_14_2) {
            objectfuel_528_instances.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1156_14) goto or_final_or_event_1156_14_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        objectfuel_528_instances.empty_selection();
        if (or_temp_result_1156_14_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1156_14_0 || or_temp_result_1156_14_1 || or_temp_result_1156_14_2) {
            objectfuel_528_instances.restore_selection();
        }
        if (or_temp_result_1156_14_2) {
            qualifier_8.restore_selection();
        }
        for (ObjectIterator it(objectfuel_528_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1156_14_0; single_instance_1156_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectfuel_528_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + -16, parent->y + -16), parent->layer);
                if (single_instance_1156_14_0 == NULL)
                    single_instance_1156_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1156_14_0))->force_frame(9);
    }
    or_final_or_event_1156_14_2_end: ;
}
void Frames::event_func_2924()
{
    // event 1157_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_collectables_tao_stone_1)) goto event_1157_14_end;
        if (!((objecttaostone_532_instances.size()) == (0))) goto event_1157_14_end;
            group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = false;
    
    }
    event_1157_14_end: ;
}
void Frames::event_func_2925()
{
    // event 1159_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_collectables_tao_stone_1)) goto event_1159_14_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1159_14_end;
        objecttaostone_532_instances.clear_selection();
        for (ObjectIterator it(objecttaostone_532_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%10);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
        }
    }
    event_1159_14_end: ;
}
void Frames::event_func_2926()
{
    // event 1160_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_collectables_tao_stone_1)) goto event_1160_14_end;
        if (!((global_values->get(3)%math_helper%25) == (0))) goto event_1160_14_end;
        objecttaostone_532_instances.clear_selection();
        for (ObjectIterator it(objecttaostone_532_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
        }
        if (!objecttaostone_532_instances.has_selection()) goto event_1160_14_end;
        FrameObject * single_instance_1160_14_0; single_instance_1160_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objecttaostone_532_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1160_14_0 == NULL)
                    single_instance_1160_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1160_14_0))->set_x(((Active*)single_instance_1160_14_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1160_14_0))->set_y(((Active*)single_instance_1160_14_0)->get_y()-10+randrange(21));
        ((Active*)((Active*)single_instance_1160_14_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1160_14_0))->restore_frame();
    }
    event_1160_14_end: ;
}
void Frames::event_func_2927()
{
    // event 1161_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_collectables_tao_stone_1)) goto event_1161_14_end;
        if (!((global_values->get(3)%math_helper%16) == (0))) goto event_1161_14_end;
        objecttaostone_532_instances.clear_selection();
        for (ObjectIterator it(objecttaostone_532_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
        }
        if (!objecttaostone_532_instances.has_selection()) goto event_1161_14_end;
        FrameObject * single_instance_1161_14_0; single_instance_1161_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objecttaostone_532_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1161_14_0 == NULL)
                    single_instance_1161_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1161_14_0))->set_x(((Active*)single_instance_1161_14_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1161_14_0))->set_y(((Active*)single_instance_1161_14_0)->get_y()-10+randrange(21));
        ((Active*)((Active*)single_instance_1161_14_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1161_14_0))->restore_frame();
    }
    event_1161_14_end: ;
}
void Frames::event_func_2928()
{
    // event 1162_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_collectables_tao_stone_1)) goto event_1162_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1162_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1162_14_end;
        objecttaostone_532_instances.clear_selection();
        for (ObjectIterator it(objecttaostone_532_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+20))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-32))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+20))) { it.deselect(); continue; }
        }
        if (!objecttaostone_532_instances.has_selection()) goto event_1162_14_end;
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(objectcodec_354_instances, it.current_index, default_active_instance))->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)get_instance(objectcodec_354_instances, it.current_index, default_active_instance))->get_y()+randrange(16)-randrange(16));
        }
        media.play_id(SOUND_ITEM_TAOSTONE_431, -1, 1);
        for (ObjectIterator it(objecttaostone_532_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((Active*)get_instance(masterlevel_37_instances))->alterables->flags.enable(9);
    }
    event_1162_14_end: ;
}
void Frames::event_func_2929()
{
    // event 1163_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_collectables_tao_stone_1)) goto event_1163_14_end;
        objecttaostone_532_instances.clear_selection();
        for (ObjectIterator it(objecttaostone_532_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!objecttaostone_532_instances.has_selection()) goto event_1163_14_end;
        for (ObjectIterator it(objecttaostone_532_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%10);
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-40-((Active*)*it)->alterables->values.get(1)*0.5);
        }
    }
    event_1163_14_end: ;
}
void Frames::event_func_2930()
{
    // event 1164_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_collectables_tao_stone_1)) goto event_1164_14_end;
        objecttaostone_532_instances.clear_selection();
        for (ObjectIterator it(objecttaostone_532_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (60))) { it.deselect(); continue; }
        }
        if (!objecttaostone_532_instances.has_selection()) goto event_1164_14_end;
        for (ObjectIterator it(objecttaostone_532_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1164_14_0; single_instance_1164_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objecttaostone_532_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1164_14_0 == NULL)
                    single_instance_1164_14_0 = new_obj;
            }
        }
        {
            ((Active*)single_instance_1164_14_0)->set_shader(Render::ADDITIVE);
        }
        ((Active*)((Active*)single_instance_1164_14_0))->set_scale(0.5);
        ((Active*)((Active*)single_instance_1164_14_0))->force_speed(100);
        ((Active*)((Active*)single_instance_1164_14_0))->alterables->flags.enable(4);
        media.play_id(SOUND_ITEM_KEYSTONE2_48, -1, 1);
    }
    event_1164_14_end: ;
}
void Frames::event_func_2931()
{
    // event 1169_14
    {
        if (!(group_main_engine_1)) goto event_1169_14_end;
        monitorcrystals_324_instances.clear_selection();
        for (ObjectIterator it(monitorcrystals_324_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/120)%math_helper%5);
        }
        monitorkeystone_562_instances.clear_selection();
        for (ObjectIterator it(monitorkeystone_562_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/60)%math_helper%30);
        }
        monitorcrate_409_instances.clear_selection();
        for (ObjectIterator it(monitorcrate_409_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/50)%math_helper%30);
        }
        monitor1up_410_instances.clear_selection();
        for (ObjectIterator it(monitor1up_410_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/50)%math_helper%30);
        }
        for (ObjectIterator it(monitorkeystone_562_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((global_values->get(3)/math_helper/30)%math_helper%5);
        }
    }
    event_1169_14_end: ;
}
void Frames::event_func_2932()
{
    // event 1254_14
    bool or_result_1254_14 = false;
    bool or_temp_result_1254_14_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1254_14_0_end;
        playersensorleftbig_391_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, monitorbomb_563_instances)) goto or_event_1254_14_0_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto or_event_1254_14_0_end;
        or_result_1254_14 = true;
        or_temp_result_1254_14_0 = true;
    }
    or_event_1254_14_0_end: ;
    monitorbomb_563_instances.clear_saved_selection();
    playersensorleftbig_391_instances.clear_saved_selection();
    if (or_temp_result_1254_14_0) {
        monitorbomb_563_instances.save_selection();
        playersensorleftbig_391_instances.save_selection();
    }
    // event 1254_14
    bool or_temp_result_1254_14_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1254_14_1_end;
        playersensorrightbig_393_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, monitorbomb_563_instances)) goto or_event_1254_14_1_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto or_event_1254_14_1_end;
        or_result_1254_14 = true;
        or_temp_result_1254_14_1 = true;
    }
    or_event_1254_14_1_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    if (or_temp_result_1254_14_1) {
        playersensorrightbig_393_instances.save_selection();
        monitorbomb_563_instances.save_selection();
    }
    // event 1254_14
    bool or_temp_result_1254_14_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1254_14_2_end;
        playersensortopbig_395_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, monitorbomb_563_instances)) goto or_event_1254_14_2_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto or_event_1254_14_2_end;
        or_result_1254_14 = true;
        or_temp_result_1254_14_2 = true;
    }
    or_event_1254_14_2_end: ;
    playersensortopbig_395_instances.clear_saved_selection();
    if (or_temp_result_1254_14_2) {
        playersensortopbig_395_instances.save_selection();
        monitorbomb_563_instances.save_selection();
    }
    // event 1254_14
    bool or_temp_result_1254_14_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1254_14_3_end;
        playersensorbottombig_397_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, monitorbomb_563_instances)) goto or_event_1254_14_3_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(8))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto or_event_1254_14_3_end;
        or_result_1254_14 = true;
        or_temp_result_1254_14_3 = true;
        or_event_1254_14_3_end: ;
        playersensorbottombig_397_instances.clear_saved_selection();
        if (or_temp_result_1254_14_3) {
            monitorbomb_563_instances.save_selection();
            playersensorbottombig_397_instances.save_selection();
        }
        if (!or_result_1254_14) goto or_final_or_event_1254_14_3_end;
        playersensortopbig_395_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        monitorbomb_563_instances.empty_selection();
        if (or_temp_result_1254_14_1) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_1254_14_0 || or_temp_result_1254_14_1 || or_temp_result_1254_14_2 || or_temp_result_1254_14_3) {
            monitorbomb_563_instances.restore_selection();
        }
        if (or_temp_result_1254_14_3) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_1254_14_2) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_1254_14_0) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(8);
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_COMMON_BOMBACTIVATE_172, -1, 1);
    }
    or_final_or_event_1254_14_3_end: ;
}
void Frames::event_func_2933()
{
    // event 1255_14
    {
        if (!(group_main_engine_1)) goto event_1255_14_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(7))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1255_14_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(7);
        }
        media.play_id(SOUND_COMMON_BOMBTICK_173, -1, 1);
    }
    event_1255_14_end: ;
}
void Frames::event_func_2934()
{
    // event 1256_14
    {
        if (!(group_main_engine_1)) goto event_1256_14_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) > (1))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1256_14_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(7);
        }
    }
    event_1256_14_end: ;
}
void Frames::event_func_2935()
{
    // event 1257_14
    {
        if (!(group_main_engine_1)) goto event_1257_14_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1257_14_end;
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 1);
            ((Active*)*it)->force_speed(10+((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1257_14_end: ;
}
void Frames::event_func_2936()
{
    // event 1258_14
    {
        if (!(group_main_engine_1)) goto event_1258_14_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1258_14_end;
        FrameObject * single_instance_1258_14_0; single_instance_1258_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorbomb_563_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1258_14_0 == NULL)
                    single_instance_1258_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1258_14_0))->set_direction(((Active*)get_single(monitorbomb_563_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1258_14_0))->move_back();
    }
    event_1258_14_end: ;
}
void Frames::event_func_2937()
{
    // event 1259_14
    {
        if (!(group_main_engine_1)) goto event_1259_14_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (120))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1259_14_end;
        FrameObject * single_instance_1259_14_0; single_instance_1259_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorbomb_563_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1259_14_0 == NULL)
                    single_instance_1259_14_0 = new_obj;
            }
        }
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1259_14_0))->force_frame(((Active*)get_single(monitorbomb_563_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1259_14_0))->set_direction(((Active*)get_single(monitorbomb_563_instances, default_active_instance))->get_direction());
        FrameObject * single_instance_1259_14_1; single_instance_1259_14_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorbomb_563_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1259_14_1 == NULL)
                    single_instance_1259_14_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1259_14_1))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1259_14_1))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1259_14_1))->set_direction(8);
        ((Active*)((Active*)single_instance_1259_14_1))->get_movement()->set_speed(70);
    }
    event_1259_14_end: ;
}
void Frames::event_func_2938()
{
    // event 1260_14
    {
        if (!(group_main_engine_1)) goto event_1260_14_end;
        monitorbomb_563_instances.clear_selection();
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(9))) { it.deselect(); continue; }
        }
        if (!monitorbomb_563_instances.has_selection()) goto event_1260_14_end;
        FrameObject * single_instance_1260_14_0; single_instance_1260_14_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorbomb_563_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectcrystal_279(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1260_14_0 == NULL)
                    single_instance_1260_14_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1260_14_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1260_14_0))->alterables->flags.enable(0);
        ((Active*)((Active*)single_instance_1260_14_0))->set_direction(8);
        ((Active*)((Active*)single_instance_1260_14_0))->get_movement()->set_speed(70);
        for (ObjectIterator it(monitorbomb_563_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(9);
        }
    }
    event_1260_14_end: ;
}
void Frames::event_func_2939()
{
    // event 1273_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1273_14_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1273_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1273_14_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1273_14_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1273_14_0_end: ;
    }
    event_1273_14_end: ;
}
void Frames::event_func_2940()
{
    // event 1282_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_flame_shield_1)) goto event_1282_14_end;
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflameback_315_instances.has_selection()) goto event_1282_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1282_14_end;
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1282_14_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1282_14_0_end: ;
    }
    event_1282_14_end: ;
}
void Frames::event_func_2941()
{
    // event 1283_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_flame_shield_1)) goto event_1283_14_end;
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflamefront_316_instances.has_selection()) goto event_1283_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1283_14_end;
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1283_14_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1283_14_0_end: ;
    }
    event_1283_14_end: ;
}
void Frames::event_func_2942()
{
    // event 1286_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1)) goto event_1286_14_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1286_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1286_14_end;
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1286_14_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1286_14_0_end: ;
    }
    event_1286_14_end: ;
}
void Frames::event_func_2943()
{
    // event 1288_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_4_water_shield_1)) goto event_1288_14_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1288_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1288_14_end;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1288_14_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1288_14_0_end: ;
    }
    event_1288_14_end: ;
}
void Frames::event_func_2944()
{
    // event 1293_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_4_water_shield_1)) goto event_1293_14_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_y()-10-sin_deg(((Active*)*it)->alterables->values.get(2))*24))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1293_14_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1293_14_end: ;
}
void Frames::event_func_2945()
{
    // event 1295_14
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_5_earth_shield_1)) goto event_1295_14_end;
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldearth_314_instances.has_selection()) goto event_1295_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1295_14_end;
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1295_14_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1295_14_0_end: ;
    }
    event_1295_14_end: ;
}
void Frames::event_func_2946()
{
    // event 1299_14
    {
        if (!(group_main_engine_1)) goto event_1299_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1299_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1299_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1299_14_end;
        playersensorbottombig_397_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, hazardspikesup_558_instances)) goto event_1299_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2));
    }
    event_1299_14_end: ;
}
void Frames::event_func_2947()
{
    // event 1300_14
    {
        if (!(group_main_engine_1)) goto event_1300_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) <= (0))) goto event_1300_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1300_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1300_14_end;
        playersensortopbig_395_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, hazardspikesdown_559_instances)) goto event_1300_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)/math_helper/2));
    }
    event_1300_14_end: ;
}
void Frames::event_func_2948()
{
    // event 1301_14
    {
        if (!(group_main_engine_1)) goto event_1301_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_1301_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1301_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1301_14_end;
        playersensorrightbig_393_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        if (!check_overlap(playersensorrightbig_393_instances, hazardspikesleft_560_instances)) goto event_1301_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/2));
    }
    event_1301_14_end: ;
}
void Frames::event_func_2949()
{
    // event 1302_14
    {
        if (!(group_main_engine_1)) goto event_1302_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_1302_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_1302_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1302_14_end;
        playersensorleftbig_391_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        if (!check_overlap(playersensorleftbig_391_instances, hazardspikesright_561_instances)) goto event_1302_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)/math_helper/2));
    }
    event_1302_14_end: ;
}
void Frames::event_func_2950()
{
    // event 1321_14
    {
        if (!(group_main_engine_1)) goto event_1321_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_1321_14_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_1321_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1321_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1321_14_end;
        playersensorbottombig_397_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, laddertop_357_instances)) goto event_1321_14_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) < (4))) goto event_1321_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (46))) goto event_1321_14_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) < (4))) goto event_1321_14_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 28);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 25);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(laddertop_357_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(laddertop_357_instances))->get_y()+8);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 4);
        media.stop_sample(SOUND_COMMON_ROLLING_2_7);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 0);
        }
    }
    event_1321_14_end: ;
}
void Frames::event_func_2951()
{
    // event 1332_14
    {
        if (!(group_main_engine_1)) goto event_1332_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (11))) goto event_1332_14_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(5);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_1332_14_end: ;
}
void Frames::event_func_2952()
{
    // event 1333_14
    {
        if (!(group_main_engine_1)) goto event_1333_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (11))) goto event_1333_14_end;
        if (not_always_1333_14 > loop_count) {
            not_always_1333_14 = loop_count + 2;
            goto event_1333_14_end;
        }
        not_always_1333_14 = loop_count + 2;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        {
            loop_sound_stoppush_running = true;
            int times = int(1);
            loop_sound_stoppush_index = 0;
            while (loop_sound_stoppush_index < times) {
                loop_sound_stoppush_0();
                if (!loop_sound_stoppush_running) break;
                loop_sound_stoppush_index++;
            }
        }
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1333_14_end: ;
}
void Frames::event_func_2953()
{
    // event 1335_14
    {
        if (!(group_main_engine_1)) goto event_1335_14_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1335_14_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
            ((Active*)*it)->alterables->values.set(1, 4);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_14();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(18, 4);
    }
    event_1335_14_end: ;
}
void Frames::event_func_2954()
{
    // event 1337_14
    {
        if (!(group_main_engine_1)) goto event_1337_14_end;
        qualifier_14.clear_selection();
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!qualifier_14.has_selection()) goto event_1337_14_end;
        for (QualifierIterator it(qualifier_14); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-1);
            ((Active*)*it)->alterables->values.set(1, 4);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)-1);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_14();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        {
            loop_reposition_skin_running = true;
            int times = int(1);
            loop_reposition_skin_index = 0;
            while (loop_reposition_skin_index < times) {
                loop_reposition_skin_14();
                if (!loop_reposition_skin_running) break;
                loop_reposition_skin_index++;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(18, 4);
    }
    event_1337_14_end: ;
}
void Frames::event_func_2955()
{
    // event 1338_14
    {
        if (!(group_main_engine_1)) goto event_1338_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1338_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
        {
            loop_sound_cantmoveit_running = true;
            int times = int(1);
            loop_sound_cantmoveit_index = 0;
            while (loop_sound_cantmoveit_index < times) {
                loop_sound_cantmoveit_8();
                if (!loop_sound_cantmoveit_running) break;
                loop_sound_cantmoveit_index++;
            }
        }
    }
    event_1338_14_end: ;
}
