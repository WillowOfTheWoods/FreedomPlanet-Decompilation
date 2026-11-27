#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_14964()
{
    // event 1983_70
    bool or_result_1983_70 = false;
    bool or_temp_result_1983_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1983_70_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1983_70_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1983_70_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1983_70_0_end;
        or_result_1983_70 = true;
        or_temp_result_1983_70_0 = true;
    }
    or_event_1983_70_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1983_70_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1983_70
    bool or_temp_result_1983_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1983_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1983_70_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1983_70_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1983_70_1_end;
        or_result_1983_70 = true;
        or_temp_result_1983_70_1 = true;
        or_event_1983_70_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1983_70_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1983_70) goto or_final_or_event_1983_70_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1983_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1983_70_0 || or_temp_result_1983_70_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1983_70_1_end: ;
}
void Frames::event_func_14965()
{
    // event 1984_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto event_1984_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1984_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (12))) goto event_1984_70_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(5))) goto event_1984_70_end;
        if (!media.is_channel_playing(20-1)) goto event_1984_70_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1984_70_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(brevon_3683_instances))->get_frame()+1+randrange(2))%math_helper%4);
    }
    event_1984_70_end: ;
}
void Frames::event_func_14966()
{
    // event 1985_70
    bool or_result_1985_70 = false;
    bool or_temp_result_1985_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1985_70_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1985_70_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1985_70_0_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1985_70_0_end;
        or_result_1985_70 = true;
        or_temp_result_1985_70_0 = true;
    }
    or_event_1985_70_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    if (or_temp_result_1985_70_0) {
        brevon_3683_instances.save_selection();
    }
    // event 1985_70
    bool or_temp_result_1985_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1985_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (12))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1985_70_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_1985_70_1_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_1985_70_1_end;
        or_result_1985_70 = true;
        or_temp_result_1985_70_1 = true;
        or_event_1985_70_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1985_70_1) {
            brevon_3683_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1985_70) goto or_final_or_event_1985_70_1_end;
        brevon_3683_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1985_70_0 || or_temp_result_1985_70_1) {
            brevon_3683_instances.restore_selection();
        }
        if (or_temp_result_1985_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1985_70_1_end: ;
}
void Frames::event_func_14967()
{
    // event 1986_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_1986_70_end;
        if (!((global_values->get(27)) == (1))) goto event_1986_70_end;
        if (not_always_1986_70 > loop_count) {
            not_always_1986_70 = loop_count + 2;
            goto event_1986_70_end;
        }
        not_always_1986_70 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1986_70_end: ;
}
void Frames::event_func_14968()
{
    // event 1987_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_1987_70_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1987_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1987_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1987_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1987_70_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1987_70_end: ;
}
void Frames::event_func_14969()
{
    // event 1988_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_1988_70_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1988_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1988_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1988_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1988_70_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1988_70_end: ;
}
void Frames::event_func_14970()
{
    // event 1989_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_1989_70_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1989_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1989_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1989_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1989_70_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1989_70_end: ;
}
void Frames::event_func_14971()
{
    // event 1990_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_1990_70_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1990_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1990_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1990_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1990_70_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1990_70_end: ;
}
void Frames::event_func_14972()
{
    // event 1991_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_1991_70_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1991_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1991_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1991_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1991_70_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1991_70_end: ;
}
void Frames::event_func_14973()
{
    // event 1992_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_1992_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1992_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1992_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1992_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1992_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1992_70_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1992_70_end: ;
}
void Frames::event_func_14974()
{
    // event 1993_70
    bool or_result_1993_70 = false;
    bool or_temp_result_1993_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_1993_70_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1993_70_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1993_70_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1993_70_0_end;
        or_result_1993_70 = true;
        or_temp_result_1993_70_0 = true;
    }
    or_event_1993_70_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1993_70_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1993_70
    bool or_temp_result_1993_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_1993_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1993_70_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1993_70_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1993_70_1_end;
        or_result_1993_70 = true;
        or_temp_result_1993_70_1 = true;
        or_event_1993_70_1_end: ;
        if (or_temp_result_1993_70_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1993_70) goto or_final_or_event_1993_70_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1993_70_0 || or_temp_result_1993_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1993_70_0 || or_temp_result_1993_70_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1993_70_1_end: ;
}
void Frames::event_func_14975()
{
    // event 1994_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_1994_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1994_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1994_70_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1994_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1994_70_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1994_70_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1994_70_end: ;
}
void Frames::event_func_14976()
{
    // event 1995_70
    bool or_result_1995_70 = false;
    bool or_temp_result_1995_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_1995_70_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1995_70_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1995_70_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1995_70_0_end;
        or_result_1995_70 = true;
        or_temp_result_1995_70_0 = true;
    }
    or_event_1995_70_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1995_70_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1995_70
    bool or_temp_result_1995_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_1995_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1995_70_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1995_70_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1995_70_1_end;
        or_result_1995_70 = true;
        or_temp_result_1995_70_1 = true;
        or_event_1995_70_1_end: ;
        if (or_temp_result_1995_70_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1995_70) goto or_final_or_event_1995_70_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1995_70_0 || or_temp_result_1995_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1995_70_0 || or_temp_result_1995_70_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1995_70_1_end: ;
}
void Frames::event_func_14977()
{
    // event 1996_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_1996_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1996_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1996_70_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1996_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1996_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1996_70_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1996_70_end: ;
}
void Frames::event_func_14978()
{
    // event 1997_70
    bool or_result_1997_70 = false;
    bool or_temp_result_1997_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_1997_70_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1997_70_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1997_70_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1997_70_0_end;
        or_result_1997_70 = true;
        or_temp_result_1997_70_0 = true;
    }
    or_event_1997_70_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1997_70_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1997_70
    bool or_temp_result_1997_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_1997_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1997_70_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1997_70_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1997_70_1_end;
        or_result_1997_70 = true;
        or_temp_result_1997_70_1 = true;
        or_event_1997_70_1_end: ;
        if (or_temp_result_1997_70_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1997_70) goto or_final_or_event_1997_70_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1997_70_0 || or_temp_result_1997_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1997_70_0 || or_temp_result_1997_70_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1997_70_1_end: ;
}
void Frames::event_func_14979()
{
    // event 1998_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_1998_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1998_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1998_70_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1998_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1998_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1998_70_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1998_70_end: ;
}
void Frames::event_func_14980()
{
    // event 1999_70
    bool or_result_1999_70 = false;
    bool or_temp_result_1999_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_1999_70_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1999_70_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1999_70_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1999_70_0_end;
        or_result_1999_70 = true;
        or_temp_result_1999_70_0 = true;
    }
    or_event_1999_70_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1999_70_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1999_70
    bool or_temp_result_1999_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_1999_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1999_70_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1999_70_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1999_70_1_end;
        or_result_1999_70 = true;
        or_temp_result_1999_70_1 = true;
        or_event_1999_70_1_end: ;
        if (or_temp_result_1999_70_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1999_70) goto or_final_or_event_1999_70_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1999_70_0 || or_temp_result_1999_70_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1999_70_0 || or_temp_result_1999_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1999_70_1_end: ;
}
void Frames::event_func_14981()
{
    // event 2000_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_2000_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_2000_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_2000_70_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_2000_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_2000_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2000_70_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_2000_70_end: ;
}
void Frames::event_func_14982()
{
    // event 2001_70
    bool or_result_2001_70 = false;
    bool or_temp_result_2001_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_2001_70_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_2001_70_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_2001_70_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_2001_70_0_end;
        or_result_2001_70 = true;
        or_temp_result_2001_70_0 = true;
    }
    or_event_2001_70_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_2001_70_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 2001_70
    bool or_temp_result_2001_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_2001_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_2001_70_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_2001_70_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_2001_70_1_end;
        or_result_2001_70 = true;
        or_temp_result_2001_70_1 = true;
        or_event_2001_70_1_end: ;
        if (or_temp_result_2001_70_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_2001_70) goto or_final_or_event_2001_70_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_2001_70_0 || or_temp_result_2001_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_2001_70_0 || or_temp_result_2001_70_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_2001_70_1_end: ;
}
void Frames::event_func_14983()
{
    // event 2002_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto event_2002_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_2002_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (12))) goto event_2002_70_end;
        if (!(((Active*)get_instance(brevon_3683_instances))->test_animation(5))) goto event_2002_70_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_2002_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2002_70_end;
        ((Active*)get_instance(brevon_3683_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(brevon_3683_instances))->get_frame()+1+randrange(2))%math_helper%4);
    }
    event_2002_70_end: ;
}
void Frames::event_func_14984()
{
    // event 2003_70
    bool or_result_2003_70 = false;
    bool or_temp_result_2003_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_2003_70_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_2003_70_0_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2003_70_0_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_2003_70_0_end;
        or_result_2003_70 = true;
        or_temp_result_2003_70_0 = true;
    }
    or_event_2003_70_0_end: ;
    brevon_3683_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_2003_70_0) {
        brevon_3683_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 2003_70
    bool or_temp_result_2003_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_dialog_system_dialog_voices_blips_1)) goto or_event_2003_70_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (12))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_2003_70_1_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto or_event_2003_70_1_end;
        if (!((((Active*)get_single(brevon_3683_instances, default_active_instance))->get_frame()%math_helper%4) > (0))) goto or_event_2003_70_1_end;
        or_result_2003_70 = true;
        or_temp_result_2003_70_1 = true;
        or_event_2003_70_1_end: ;
        if (or_temp_result_2003_70_1) {
            brevon_3683_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_2003_70) goto or_final_or_event_2003_70_1_end;
        brevon_3683_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_2003_70_0 || or_temp_result_2003_70_1) {
            brevon_3683_instances.restore_selection();
        }
        if (or_temp_result_2003_70_0 || or_temp_result_2003_70_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_2003_70_1_end: ;
}
void Frames::event_func_14985()
{
    // event 2005_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2005_70_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_2005_70_end: ;
}
void Frames::event_func_14986()
{
    // event 2006_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2006_70_end;
        if (!(((Active*)get_instance(masterlevel_37_instances))->alterables->flags.is_on(2))) goto event_2006_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) < (8))) goto event_2006_70_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(3, 8);
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
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2006_70_end: ;
}
void Frames::event_func_14987()
{
    // event 2007_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2007_70_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) < (40))) goto event_2007_70_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(1);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_2007_70_end: ;
}
void Frames::event_func_14988()
{
    // event 2008_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2008_70_end;
        if (!((kingdomstonewave_3656_instances.size()) == (0))) goto event_2008_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) < (3))) goto event_2008_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (240))) goto event_2008_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.enable(1);
    }
    event_2008_70_end: ;
}
void Frames::event_func_14989()
{
    // event 2009_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2009_70_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(1))) goto event_2009_70_end;
        FrameObject * single_instance_2009_70_0; single_instance_2009_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_kingdomstonewave_3656(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2009_70_0 == NULL)
                    single_instance_2009_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2009_70_0))->alterables->values.set(0, -2);
    }
    event_2009_70_end: ;
}
void Frames::event_func_14990()
{
    // event 2010_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2010_70_end;
        if (!(((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.is_on(1))) goto event_2010_70_end;
        FrameObject * single_instance_2010_70_0; single_instance_2010_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(kingdomstone_1587_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_kingdomstonewave_3656(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2010_70_0 == NULL)
                    single_instance_2010_70_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2010_70_0))->alterables->values.set(0, 2);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->flags.disable(1);
    }
    event_2010_70_end: ;
}
void Frames::event_func_14991()
{
    // event 2011_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2011_70_end;
        if (!((kingdomstonewave_3656_instances.size()) > (0))) goto event_2011_70_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (22))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_2011_70_end;
        FrameObject * single_instance_2011_70_0; single_instance_2011_70_0 = pick_random(kingdomstonewave_3656_instances);
        if (single_instance_2011_70_0 == NULL) goto event_2011_70_end;
        FrameObject * single_instance_2011_70_1; single_instance_2011_70_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_ringsparkle_139(((Active*)single_instance_2011_70_0)->x + 0, ((Active*)single_instance_2011_70_0)->y + 0), ((Active*)single_instance_2011_70_0)->layer);
            if (single_instance_2011_70_1 == NULL)
                single_instance_2011_70_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_2011_70_1))->set_x(((Active*)single_instance_2011_70_1)->get_x()-30+randrange(62));
    }
    event_2011_70_end: ;
}
void Frames::event_func_14992()
{
    // event 2012_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2012_70_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(0));
        }
    }
    event_2012_70_end: ;
}
void Frames::event_func_14993()
{
    // event 2013_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2013_70_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (20))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_2013_70_end;
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*0.5);
        }
    }
    event_2013_70_end: ;
}
void Frames::event_func_14994()
{
    // event 2014_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2014_70_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (20))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_2014_70_end;
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_alpha_coefficient((((Active*)*it)->alterables->values.get(1)-10)*10);
        }
    }
    event_2014_70_end: ;
}
void Frames::event_func_14995()
{
    // event 2015_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2015_70_end;
        kingdomstonewave_3656_instances.clear_selection();
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!kingdomstonewave_3656_instances.has_selection()) goto event_2015_70_end;
        for (ObjectIterator it(kingdomstonewave_3656_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2015_70_end: ;
}
void Frames::event_func_14996()
{
    // event 2016_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2016_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_2016_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_2016_70_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_2016_70_end;
        global_values->set(1, 2);
        FrameObject * single_instance_2016_70_0; single_instance_2016_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectbike_322(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2016_70_0 == NULL)
                    single_instance_2016_70_0 = new_obj;
            }
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(0, 2);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 25);
        }
        ((Active*)((Active*)single_instance_2016_70_0))->alterables->values.set(0, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_2016_70_0))->set_direction(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_2016_70_0))->set_angle(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        ((Active*)((Active*)single_instance_2016_70_0))->alterables->flags.enable(1);
    }
    event_2016_70_end: ;
}
void Frames::event_func_14997()
{
    // event 2017_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2017_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_2017_70_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+2, ((Active*)get_instance(kingdomstone_1587_instances))->get_y()+40));
    }
    event_2017_70_end: ;
}
void Frames::event_func_14998()
{
    // event 2018_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2018_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (0))) goto event_2018_70_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) >= (((Active*)get_instance(kingdomstone_1587_instances))->get_x()))) goto event_2018_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        {
            loop_stop_player_running = true;
            int times = int(1);
            loop_stop_player_index = 0;
            while (loop_stop_player_index < times) {
                loop_stop_player_13();
                if (!loop_stop_player_running) break;
                loop_stop_player_index++;
            }
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_2018_70_end: ;
}
void Frames::event_func_14999()
{
    // event 2019_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2019_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_2019_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()+5);
    }
    event_2019_70_end: ;
}
void Frames::event_func_15000()
{
    // event 2020_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2020_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (1))) goto event_2020_70_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(kingdomstone_1587_instances))->get_x()-64))) goto event_2020_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_2020_70_end: ;
}
void Frames::event_func_15001()
{
    // event 2021_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2021_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2021_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_2021_70_end: ;
}
void Frames::event_func_15002()
{
    // event 2022_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2022_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2022_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (30))) goto event_2022_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_2022_70_end: ;
}
void Frames::event_func_15003()
{
    // event 2023_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2023_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2023_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (50))) goto event_2023_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(24);
        }
    }
    event_2023_70_end: ;
}
void Frames::event_func_15004()
{
    // event 2024_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2024_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2024_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (70))) goto event_2024_70_end;
        ((Active*)get_instance(device_3367_instances))->set_visible(true);
        FrameObject * single_instance_2024_70_0; single_instance_2024_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(device_3367_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2024_70_0 == NULL)
                    single_instance_2024_70_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_DOORUNLOCK_288, -1, 1);
    }
    event_2024_70_end: ;
}
void Frames::event_func_15005()
{
    // event 2025_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2025_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2025_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (90))) goto event_2025_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_direction(1);
        media.play_id(SOUND_COMPUTER_391, -1, 1);
    }
    event_2025_70_end: ;
}
void Frames::event_func_15006()
{
    // event 2026_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2026_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2026_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (90))) goto event_2026_70_end;
        ((Active*)get_instance(computerterminal3_3667_instances))->set_x_scale(((Active*)get_instance(computerterminal3_3667_instances))->alterables->values.get(0)*0.01);
        {
            FrameObject * parent = ((Active*)get_instance(computerterminal_3666_instances));
            if (parent == NULL) goto pos_end_2026_70_0;
            ((Active*)get_instance(computerterminal3_3667_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_2026_70_0: ;
        }
        ((Active*)get_instance(computerterminal3_3667_instances))->alterables->values.set(0, get_min(((Active*)get_instance(computerterminal3_3667_instances))->alterables->values.get(0)+1, 100));
    }
    event_2026_70_end: ;
}
void Frames::event_func_15007()
{
    // event 2027_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2027_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2027_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (120))) goto event_2027_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (150))) goto event_2027_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2027_70_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
    }
    event_2027_70_end: ;
}
void Frames::event_func_15008()
{
    // event 2028_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2028_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2028_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (120))) goto event_2028_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (150))) goto event_2028_70_end;
        if (!((global_values->get(3)%math_helper%4) == (2))) goto event_2028_70_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(true);
    }
    event_2028_70_end: ;
}
void Frames::event_func_15009()
{
    // event 2029_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2029_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2029_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (150))) goto event_2029_70_end;
        media.play_id(SOUND_COUNTDOWN_TICK_41, -1, 1);
    }
    event_2029_70_end: ;
}
void Frames::event_func_15010()
{
    // event 2030_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2030_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2030_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (150))) goto event_2030_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (180))) goto event_2030_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2030_70_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(false);
    }
    event_2030_70_end: ;
}
void Frames::event_func_15011()
{
    // event 2031_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2031_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2031_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (150))) goto event_2031_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (180))) goto event_2031_70_end;
        if (!((global_values->get(3)%math_helper%4) == (2))) goto event_2031_70_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(true);
    }
    event_2031_70_end: ;
}
void Frames::event_func_15012()
{
    // event 2032_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2032_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2032_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (180))) goto event_2032_70_end;
        media.play_id(SOUND_COUNTDOWN_TICK_41, -1, 1);
    }
    event_2032_70_end: ;
}
void Frames::event_func_15013()
{
    // event 2033_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2033_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2033_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (180))) goto event_2033_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (210))) goto event_2033_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2033_70_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(false);
    }
    event_2033_70_end: ;
}
void Frames::event_func_15014()
{
    // event 2034_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2034_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2034_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (180))) goto event_2034_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (210))) goto event_2034_70_end;
        if (!((global_values->get(3)%math_helper%4) == (2))) goto event_2034_70_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(true);
    }
    event_2034_70_end: ;
}
void Frames::event_func_15015()
{
    // event 2035_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2035_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2035_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (210))) goto event_2035_70_end;
        media.play_id(SOUND_COUNTDOWN_TICK_41, -1, 1);
    }
    event_2035_70_end: ;
}
void Frames::event_func_15016()
{
    // event 2036_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2036_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2036_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (210))) goto event_2036_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (240))) goto event_2036_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2036_70_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(false);
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(false);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(false);
        ((Active*)get_instance(computerterminal3_3667_instances))->set_visible(false);
    }
    event_2036_70_end: ;
}
void Frames::event_func_15017()
{
    // event 2037_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2037_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2037_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (210))) goto event_2037_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (240))) goto event_2037_70_end;
        if (!((global_values->get(3)%math_helper%4) == (2))) goto event_2037_70_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(false);
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal3_3667_instances))->set_visible(true);
    }
    event_2037_70_end: ;
}
void Frames::event_func_15018()
{
    // event 2038_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2038_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2038_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (240))) goto event_2038_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(false);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(false);
        ((Active*)get_instance(computerterminal3_3667_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(false);
        media.play_id(SOUND_SCENE_POWERDOWN_427, -1, 1);
    }
    event_2038_70_end: ;
}
void Frames::event_func_15019()
{
    // event 2039_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2039_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2039_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (280))) goto event_2039_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2039_70_end: ;
}
void Frames::event_func_15020()
{
    // event 2040_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2040_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2040_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (294))) goto event_2040_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(28);
        }
    }
    event_2040_70_end: ;
}
void Frames::event_func_15021()
{
    // event 2041_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2041_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2041_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (360))) goto event_2041_70_end;
        if (!((global_values->get(1)) == (0))) goto event_2041_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_li_lilac_gasp2_ogg_238, 19-1);
    }
    event_2041_70_end: ;
}
void Frames::event_func_15022()
{
    // event 2042_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2042_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2042_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (360))) goto event_2042_70_end;
        if (!((global_values->get(1)) == (2))) goto event_2042_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(0);
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_39_00_ogg_239, 19-1);
    }
    event_2042_70_end: ;
}
void Frames::event_func_15023()
{
    // event 2043_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2043_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (2))) goto event_2043_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (380))) goto event_2043_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(brevon_3683_instances))->set_visible(true);
        ((Active*)get_instance(brevon_3683_instances))->force_animation(5);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(36);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(12);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(16);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(27);
        }
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_2043_70_end: ;
}
void Frames::event_func_15024()
{
    // event 2044_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2044_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (3))) goto event_2044_70_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
    }
    event_2044_70_end: ;
}
void Frames::event_func_15025()
{
    // event 2045_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2045_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (3))) goto event_2045_70_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(brevon_3683_instances))->get_x()+160))) goto event_2045_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
    }
    event_2045_70_end: ;
}
void Frames::event_func_15026()
{
    // event 2046_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2046_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_2046_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_2046_70_end: ;
}
void Frames::event_func_15027()
{
    // event 2047_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2047_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_2047_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (20))) goto event_2047_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()-5);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_2047_70_end: ;
}
void Frames::event_func_15028()
{
    // event 2048_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2048_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_2048_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (20))) goto event_2048_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(11);
        }
    }
    event_2048_70_end: ;
}
void Frames::event_func_15029()
{
    // event 2049_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2049_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_2049_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (10))) goto event_2049_70_end;
        {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            if (parent == NULL) goto pos_end_2049_70_0;
            ((Active*)get_instance(brevonknifearm_3684_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2049_70_0: ;
        }
        ((Active*)get_instance(brevonknifearm_3684_instances))->set_visible(true);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(27);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            if (parent == NULL) goto pos_end_2049_70_1;
            ((Active*)*it)->set_global_position(parent->get_x() + -8, parent->get_y() + -28);
            pos_end_2049_70_1: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_animation(8);
        }
        ((Active*)get_instance(brevonknifearm_3684_instances))->move_front();
        media.play_id(SOUND_COMMON_PLAYERHIT_2_25, -1, 1);
        media.play_id(SOUND_MILLA_HURT_2_180, -1, 1);
    }
    event_2049_70_end: ;
}
void Frames::event_func_15030()
{
    // event 2050_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2050_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_2050_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (33))) goto event_2050_70_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(0);
        }
        ((Active*)get_instance(brevonknifearm_3684_instances))->set_visible(false);
        ((Active*)get_instance(brevonknifearm_3684_instances))->set_y(0);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(0);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(40);
    }
    event_2050_70_end: ;
}
void Frames::event_func_15031()
{
    // event 2051_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2051_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_2051_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (40))) goto event_2051_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(90);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(63);
        }
    }
    event_2051_70_end: ;
}
void Frames::event_func_15032()
{
    // event 2052_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2052_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_2052_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2052_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (80))) goto event_2052_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()+1);
    }
    event_2052_70_end: ;
}
void Frames::event_func_15033()
{
    // event 2053_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2053_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (4))) goto event_2053_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (150))) goto event_2053_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_2053_70_end: ;
}
void Frames::event_func_15034()
{
    // event 2054_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2054_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (5))) goto event_2054_70_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 5);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()+5);
    }
    event_2054_70_end: ;
}
void Frames::event_func_15035()
{
    // event 2055_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2055_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (5))) goto event_2055_70_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(device_3367_instances))->get_x()+32))) goto event_2055_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
            ((Active*)*it)->set_direction(16);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(26);
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(computerterminal_3666_instances))->set_direction(0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->restore_frame();
        }
    }
    event_2055_70_end: ;
}
void Frames::event_func_15036()
{
    // event 2056_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2056_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2056_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(4, 1);
    }
    event_2056_70_end: ;
}
void Frames::event_func_15037()
{
    // event 2057_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2057_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2057_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (210))) goto event_2057_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(26)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_2057_70_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(12);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(27);
        }
    }
    event_2057_70_end: ;
}
void Frames::event_func_15038()
{
    // event 2058_70
    bool or_result_2058_70 = false;
    bool or_temp_result_2058_70_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto or_event_2058_70_0_end;
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (210))) { it.deselect(); continue; }
        }
        if (!kingdomstone_1587_instances.has_selection()) goto or_event_2058_70_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(26)) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_2058_70_0_end;
        or_result_2058_70 = true;
        or_temp_result_2058_70_0 = true;
    }
    or_event_2058_70_0_end: ;
    kingdomstone_1587_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_2058_70_0) {
        kingdomstone_1587_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 2058_70
    bool or_temp_result_2058_70_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto or_event_2058_70_1_end;
        kingdomstone_1587_instances.clear_selection();
        for (ObjectIterator it(kingdomstone_1587_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (15))) { it.deselect(); continue; }
        }
        if (!kingdomstone_1587_instances.has_selection()) goto or_event_2058_70_1_end;
        or_result_2058_70 = true;
        or_temp_result_2058_70_1 = true;
        or_event_2058_70_1_end: ;
        if (or_temp_result_2058_70_1) {
            kingdomstone_1587_instances.save_selection();
        }
        if (!or_result_2058_70) goto or_final_or_event_2058_70_1_end;
        kingdomstone_1587_instances.empty_selection();
        playerskincarol_445_instances.empty_selection();
        if (or_temp_result_2058_70_0 || or_temp_result_2058_70_1) {
            kingdomstone_1587_instances.restore_selection();
        }
        if (or_temp_result_2058_70_0) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(27);
        }
    }
    or_final_or_event_2058_70_1_end: ;
}
void Frames::event_func_15039()
{
    // event 2059_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2059_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2059_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (5))) goto event_2059_70_end;
        ((Active*)get_instance(device_3367_instances))->alterables->values.set(0, -4);
        ((Active*)get_instance(device_3367_instances))->alterables->values.set(1, -1);
    }
    event_2059_70_end: ;
}
void Frames::event_func_15040()
{
    // event 2060_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2060_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2060_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) >= (5))) goto event_2060_70_end;
        ((Active*)get_instance(device_3367_instances))->set_x(((Active*)get_instance(device_3367_instances))->get_x()+((Active*)get_instance(device_3367_instances))->alterables->values.get(0));
        ((Active*)get_instance(device_3367_instances))->set_y(get_min(((Active*)get_instance(device_3367_instances))->get_y()+((Active*)get_instance(device_3367_instances))->alterables->values.get(1), ((Active*)get_instance(brevon_3683_instances))->get_y()-8));
        ((Active*)get_instance(device_3367_instances))->alterables->values.add(1, 0.2);
    }
    event_2060_70_end: ;
}
void Frames::event_func_15041()
{
    // event 2061_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2061_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2061_70_end;
        if (!((((Active*)get_instance(device_3367_instances))->get_y()) >= (((Active*)get_instance(brevon_3683_instances))->get_y()-8))) goto event_2061_70_end;
        ((Active*)get_instance(device_3367_instances))->alterables->values.set(1, 0);
    }
    event_2061_70_end: ;
}
void Frames::event_func_15042()
{
    // event 2062_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2062_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2062_70_end;
        if (!((((Active*)get_instance(device_3367_instances))->get_x()) < (((Active*)get_instance(brevon_3683_instances))->get_x()+34))) goto event_2062_70_end;
        if (!((((Active*)get_instance(device_3367_instances))->alterables->values.get(0)) != (0))) goto event_2062_70_end;
        ((Active*)get_instance(device_3367_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(brevon_3683_instances))->force_frame(36);
    }
    event_2062_70_end: ;
}
void Frames::event_func_15043()
{
    // event 2063_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2063_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2063_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (30))) goto event_2063_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (60))) goto event_2063_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2063_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(true);
    }
    event_2063_70_end: ;
}
void Frames::event_func_15044()
{
    // event 2064_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2064_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2064_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (30))) goto event_2064_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (60))) goto event_2064_70_end;
        if (!((global_values->get(3)%math_helper%4) == (2))) goto event_2064_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(false);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(false);
    }
    event_2064_70_end: ;
}
void Frames::event_func_15045()
{
    // event 2065_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2065_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2065_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (60))) goto event_2065_70_end;
        media.play_id(SOUND_COUNTDOWN_TICK_41, -1, 1);
    }
    event_2065_70_end: ;
}
void Frames::event_func_15046()
{
    // event 2066_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2066_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2066_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2066_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (90))) goto event_2066_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2066_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(true);
    }
    event_2066_70_end: ;
}
void Frames::event_func_15047()
{
    // event 2067_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2067_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2067_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (60))) goto event_2067_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (90))) goto event_2067_70_end;
        if (!((global_values->get(3)%math_helper%4) == (2))) goto event_2067_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(false);
    }
    event_2067_70_end: ;
}
void Frames::event_func_15048()
{
    // event 2068_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2068_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2068_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (90))) goto event_2068_70_end;
        media.play_id(SOUND_COUNTDOWN_TICK_41, -1, 1);
    }
    event_2068_70_end: ;
}
void Frames::event_func_15049()
{
    // event 2069_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2069_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2069_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (90))) goto event_2069_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (120))) goto event_2069_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2069_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(true);
    }
    event_2069_70_end: ;
}
void Frames::event_func_15050()
{
    // event 2070_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2070_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2070_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (90))) goto event_2070_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (120))) goto event_2070_70_end;
        if (!((global_values->get(3)%math_helper%4) == (2))) goto event_2070_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(false);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(false);
    }
    event_2070_70_end: ;
}
void Frames::event_func_15051()
{
    // event 2071_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2071_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2071_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (120))) goto event_2071_70_end;
        media.play_id(SOUND_COUNTDOWN_TICK_41, -1, 1);
    }
    event_2071_70_end: ;
}
void Frames::event_func_15052()
{
    // event 2072_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2072_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2072_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (120))) goto event_2072_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (150))) goto event_2072_70_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_2072_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(true);
    }
    event_2072_70_end: ;
}
void Frames::event_func_15053()
{
    // event 2073_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2073_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2073_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (120))) goto event_2073_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (150))) goto event_2073_70_end;
        if (!((global_values->get(3)%math_helper%4) == (2))) goto event_2073_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(false);
    }
    event_2073_70_end: ;
}
void Frames::event_func_15054()
{
    // event 2074_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2074_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2074_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (150))) goto event_2074_70_end;
        ((Active*)get_instance(computerterminal_3666_instances))->set_visible(true);
        ((Active*)get_instance(computerterminal2_3668_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece8_762_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->set_visible(true);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_visible(true);
    }
    event_2074_70_end: ;
}
void Frames::event_func_15055()
{
    // event 2075_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2075_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2075_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (150))) goto event_2075_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) < (180))) goto event_2075_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->set_y(((Active*)get_instance(kingdomstone_1587_instances))->get_y()+8);
    }
    event_2075_70_end: ;
}
void Frames::event_func_15056()
{
    // event 2076_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2076_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2076_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (180))) goto event_2076_70_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(11);
        ((Active*)get_instance(brevon_3683_instances))->set_direction(26);
        ((Active*)get_instance(brevon_3683_instances))->restore_frame();
        ((Active*)get_instance(brevon_3683_instances))->restore_speed();
    }
    event_2076_70_end: ;
}
void Frames::event_func_15057()
{
    // event 2077_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2077_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2077_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (180))) goto event_2077_70_end;
        if (!((((Active*)get_instance(brevon_3683_instances))->get_frame()) == (2))) goto event_2077_70_end;
        if (!(((Active*)get_instance(device_3367_instances))->flags & VISIBLE)) goto event_2077_70_end;
        ((Active*)get_instance(device_3367_instances))->set_visible(false);
        FrameObject * single_instance_2077_70_0; single_instance_2077_70_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(device_3367_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2077_70_0 == NULL)
                    single_instance_2077_70_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE5C_320, -1, 1);
    }
    event_2077_70_end: ;
}
void Frames::event_func_15058()
{
    // event 2078_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2078_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2078_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (210))) goto event_2078_70_end;
        ((Active*)get_instance(brevon_3683_instances))->set_direction(25);
        media.play(str_data_voices_88+global_strings->get(11)+str_br_brevon_chuckle_ogg_240, 19-1);
    }
    event_2078_70_end: ;
}
void Frames::event_func_15059()
{
    // event 2079_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2079_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2079_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (310))) goto event_2079_70_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(10);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(brevon_3683_instances));
            if (parent == NULL) goto pos_end_2079_70_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -12, parent->get_y() + -14);
            pos_end_2079_70_0: ;
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(31);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(100);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2079_70_end: ;
}
void Frames::event_func_15060()
{
    // event 2080_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2080_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2080_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) == (340))) goto event_2080_70_end;
        media.play_id(SOUND_BREVON_JUMP_392, -1, 1);
    }
    event_2080_70_end: ;
}
void Frames::event_func_15061()
{
    // event 2081_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2081_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2081_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (340))) goto event_2081_70_end;
        ((Active*)get_instance(brevon_3683_instances))->force_animation(7);
        ((Active*)get_instance(brevon_3683_instances))->set_y(((Active*)get_instance(brevon_3683_instances))->get_y()-12);
    }
    event_2081_70_end: ;
}
void Frames::event_func_15062()
{
    // event 2082_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2082_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2082_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (370))) goto event_2082_70_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        ((Active*)get_instance(player_389_instances))->set_x(((Active*)get_instance(player_389_instances))->get_x()-5);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 1);
    }
    event_2082_70_end: ;
}
void Frames::event_func_15063()
{
    // event 2083_70
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_brevon_appears_1)) goto event_2083_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(3)) == (6))) goto event_2083_70_end;
        if (!((((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.get(4)) > (370))) goto event_2083_70_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()+50))) goto event_2083_70_end;
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.add(3, 1);
        ((Active*)get_instance(kingdomstone_1587_instances))->alterables->values.set(4, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(85);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(66);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_2083_70_end: ;
}
