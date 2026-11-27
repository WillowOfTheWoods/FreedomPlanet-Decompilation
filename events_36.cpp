#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_3156()
{
    // event 1569_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1569_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1569_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1569_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1569_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1569_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1569_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1569_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1569_14_end: ;
}
void Frames::event_func_3157()
{
    // event 1570_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1570_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1570_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1570_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1570_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1570_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1570_14_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1570_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1570_14_end: ;
}
void Frames::event_func_3158()
{
    // event 1571_14
    bool or_result_1571_14 = false;
    bool or_temp_result_1571_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1571_14_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1571_14_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1571_14_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1571_14_0_end;
        or_result_1571_14 = true;
        or_temp_result_1571_14_0 = true;
    }
    or_event_1571_14_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1571_14_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1571_14
    bool or_temp_result_1571_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1571_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1571_14_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1571_14_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1571_14_1_end;
        or_result_1571_14 = true;
        or_temp_result_1571_14_1 = true;
        or_event_1571_14_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1571_14_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1571_14) goto or_final_or_event_1571_14_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1571_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1571_14_0 || or_temp_result_1571_14_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1571_14_1_end: ;
}
void Frames::event_func_3159()
{
    // event 1572_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1572_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1572_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1572_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1572_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1572_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1572_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1572_14_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1572_14_end: ;
}
void Frames::event_func_3160()
{
    // event 1573_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1573_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1573_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1573_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1573_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1573_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1573_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1573_14_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1573_14_end: ;
}
void Frames::event_func_3161()
{
    // event 1574_14
    bool or_result_1574_14 = false;
    bool or_temp_result_1574_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1574_14_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1574_14_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1574_14_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1574_14_0_end;
        or_result_1574_14 = true;
        or_temp_result_1574_14_0 = true;
    }
    or_event_1574_14_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1574_14_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1574_14
    bool or_temp_result_1574_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1574_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1574_14_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1574_14_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1574_14_1_end;
        or_result_1574_14 = true;
        or_temp_result_1574_14_1 = true;
        or_event_1574_14_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1574_14_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1574_14) goto or_final_or_event_1574_14_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1574_14_0 || or_temp_result_1574_14_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1574_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1574_14_1_end: ;
}
void Frames::event_func_3162()
{
    // event 1575_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1575_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1575_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1575_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1575_14_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1575_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1575_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1575_14_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1575_14_end: ;
}
void Frames::event_func_3163()
{
    // event 1576_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1576_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1576_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1576_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1576_14_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1576_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1576_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1576_14_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1576_14_end: ;
}
void Frames::event_func_3164()
{
    // event 1577_14
    bool or_result_1577_14 = false;
    bool or_temp_result_1577_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1577_14_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1577_14_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1577_14_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1577_14_0_end;
        or_result_1577_14 = true;
        or_temp_result_1577_14_0 = true;
    }
    or_event_1577_14_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1577_14_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1577_14
    bool or_temp_result_1577_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1577_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1577_14_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1577_14_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1577_14_1_end;
        or_result_1577_14 = true;
        or_temp_result_1577_14_1 = true;
        or_event_1577_14_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1577_14_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1577_14) goto or_final_or_event_1577_14_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1577_14_0 || or_temp_result_1577_14_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1577_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1577_14_1_end: ;
}
void Frames::event_func_3165()
{
    // event 1578_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1578_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1578_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1578_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1578_14_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1578_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1578_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1578_14_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1578_14_end: ;
}
void Frames::event_func_3166()
{
    // event 1579_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1579_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1579_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1579_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1579_14_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1579_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1579_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1579_14_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1579_14_end: ;
}
void Frames::event_func_3167()
{
    // event 1580_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1580_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1580_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1580_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1580_14_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1580_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1580_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1580_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcshellduck_533_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1580_14_end: ;
}
void Frames::event_func_3168()
{
    // event 1581_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1581_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1581_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1581_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1581_14_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1581_14_end;
        if (!media.is_channel_playing(20-1)) goto event_1581_14_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1581_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
    }
    event_1581_14_end: ;
}
void Frames::event_func_3169()
{
    // event 1582_14
    bool or_result_1582_14 = false;
    bool or_temp_result_1582_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1582_14_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1582_14_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1582_14_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1582_14_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1582_14_0_end;
        or_result_1582_14 = true;
        or_temp_result_1582_14_0 = true;
    }
    or_event_1582_14_0_end: ;
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1582_14_0) {
        npcshellduck_533_instances.save_selection();
    }
    // event 1582_14
    bool or_temp_result_1582_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1582_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1582_14_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1582_14_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1582_14_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1582_14_1_end;
        or_result_1582_14 = true;
        or_temp_result_1582_14_1 = true;
        or_event_1582_14_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1582_14_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1582_14) goto or_final_or_event_1582_14_1_end;
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1582_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1582_14_0 || or_temp_result_1582_14_1) {
            npcshellduck_533_instances.restore_selection();
        }
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1582_14_1_end: ;
}
void Frames::event_func_3170()
{
    // event 1583_14
    bool or_result_1583_14 = false;
    bool or_temp_result_1583_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1583_14_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1583_14_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1583_14_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1583_14_0_end;
        or_result_1583_14 = true;
        or_temp_result_1583_14_0 = true;
    }
    or_event_1583_14_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1583_14_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1583_14
    bool or_temp_result_1583_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1583_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1583_14_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1583_14_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1583_14_1_end;
        or_result_1583_14 = true;
        or_temp_result_1583_14_1 = true;
        or_event_1583_14_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1583_14_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1583_14) goto or_final_or_event_1583_14_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1583_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1583_14_0 || or_temp_result_1583_14_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1583_14_1_end: ;
}
void Frames::event_func_3171()
{
    // event 1584_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1584_14_end;
        if (!((global_values->get(27)) == (1))) goto event_1584_14_end;
        if (not_always_1584_14 > loop_count) {
            not_always_1584_14 = loop_count + 2;
            goto event_1584_14_end;
        }
        not_always_1584_14 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1584_14_end: ;
}
void Frames::event_func_3172()
{
    // event 1585_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1585_14_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1585_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1585_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1585_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1585_14_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1585_14_end: ;
}
void Frames::event_func_3173()
{
    // event 1586_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1586_14_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1586_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1586_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1586_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1586_14_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1586_14_end: ;
}
void Frames::event_func_3174()
{
    // event 1587_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1587_14_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1587_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1587_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1587_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1587_14_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1587_14_end: ;
}
void Frames::event_func_3175()
{
    // event 1588_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1588_14_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1588_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1588_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1588_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1588_14_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1588_14_end: ;
}
void Frames::event_func_3176()
{
    // event 1589_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1589_14_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1589_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1589_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1589_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1589_14_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1589_14_end: ;
}
void Frames::event_func_3177()
{
    // event 1590_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1590_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1590_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1590_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1590_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1590_14_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1590_14_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1590_14_end: ;
}
void Frames::event_func_3178()
{
    // event 1591_14
    bool or_result_1591_14 = false;
    bool or_temp_result_1591_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1591_14_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1591_14_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1591_14_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1591_14_0_end;
        or_result_1591_14 = true;
        or_temp_result_1591_14_0 = true;
    }
    or_event_1591_14_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1591_14_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1591_14
    bool or_temp_result_1591_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1591_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1591_14_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1591_14_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1591_14_1_end;
        or_result_1591_14 = true;
        or_temp_result_1591_14_1 = true;
        or_event_1591_14_1_end: ;
        if (or_temp_result_1591_14_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1591_14) goto or_final_or_event_1591_14_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1591_14_0 || or_temp_result_1591_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1591_14_0 || or_temp_result_1591_14_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1591_14_1_end: ;
}
void Frames::event_func_3179()
{
    // event 1592_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1592_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1592_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1592_14_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1592_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1592_14_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1592_14_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1592_14_end: ;
}
void Frames::event_func_3180()
{
    // event 1593_14
    bool or_result_1593_14 = false;
    bool or_temp_result_1593_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1593_14_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1593_14_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1593_14_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1593_14_0_end;
        or_result_1593_14 = true;
        or_temp_result_1593_14_0 = true;
    }
    or_event_1593_14_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1593_14_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1593_14
    bool or_temp_result_1593_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1593_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1593_14_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1593_14_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1593_14_1_end;
        or_result_1593_14 = true;
        or_temp_result_1593_14_1 = true;
        or_event_1593_14_1_end: ;
        if (or_temp_result_1593_14_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1593_14) goto or_final_or_event_1593_14_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1593_14_0 || or_temp_result_1593_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1593_14_0 || or_temp_result_1593_14_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1593_14_1_end: ;
}
void Frames::event_func_3181()
{
    // event 1594_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1594_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1594_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1594_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1594_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1594_14_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1594_14_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1594_14_end: ;
}
void Frames::event_func_3182()
{
    // event 1595_14
    bool or_result_1595_14 = false;
    bool or_temp_result_1595_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1595_14_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1595_14_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1595_14_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1595_14_0_end;
        or_result_1595_14 = true;
        or_temp_result_1595_14_0 = true;
    }
    or_event_1595_14_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1595_14_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1595_14
    bool or_temp_result_1595_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1595_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1595_14_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1595_14_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1595_14_1_end;
        or_result_1595_14 = true;
        or_temp_result_1595_14_1 = true;
        or_event_1595_14_1_end: ;
        if (or_temp_result_1595_14_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1595_14) goto or_final_or_event_1595_14_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1595_14_0 || or_temp_result_1595_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1595_14_0 || or_temp_result_1595_14_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1595_14_1_end: ;
}
void Frames::event_func_3183()
{
    // event 1596_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1596_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1596_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1596_14_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1596_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1596_14_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1596_14_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1596_14_end: ;
}
void Frames::event_func_3184()
{
    // event 1597_14
    bool or_result_1597_14 = false;
    bool or_temp_result_1597_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1597_14_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1597_14_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1597_14_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1597_14_0_end;
        or_result_1597_14 = true;
        or_temp_result_1597_14_0 = true;
    }
    or_event_1597_14_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1597_14_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1597_14
    bool or_temp_result_1597_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1597_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1597_14_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1597_14_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1597_14_1_end;
        or_result_1597_14 = true;
        or_temp_result_1597_14_1 = true;
        or_event_1597_14_1_end: ;
        if (or_temp_result_1597_14_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1597_14) goto or_final_or_event_1597_14_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1597_14_0 || or_temp_result_1597_14_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1597_14_0 || or_temp_result_1597_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1597_14_1_end: ;
}
void Frames::event_func_3185()
{
    // event 1598_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1598_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1598_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1598_14_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1598_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1598_14_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1598_14_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1598_14_end: ;
}
void Frames::event_func_3186()
{
    // event 1599_14
    bool or_result_1599_14 = false;
    bool or_temp_result_1599_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1599_14_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1599_14_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1599_14_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1599_14_0_end;
        or_result_1599_14 = true;
        or_temp_result_1599_14_0 = true;
    }
    or_event_1599_14_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1599_14_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1599_14
    bool or_temp_result_1599_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1599_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1599_14_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1599_14_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1599_14_1_end;
        or_result_1599_14 = true;
        or_temp_result_1599_14_1 = true;
        or_event_1599_14_1_end: ;
        if (or_temp_result_1599_14_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1599_14) goto or_final_or_event_1599_14_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1599_14_0 || or_temp_result_1599_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1599_14_0 || or_temp_result_1599_14_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1599_14_1_end: ;
}
void Frames::event_func_3187()
{
    // event 1600_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto event_1600_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1600_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1600_14_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1600_14_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1600_14_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1600_14_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcshellduck_533_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1600_14_end: ;
}
void Frames::event_func_3188()
{
    // event 1601_14
    bool or_result_1601_14 = false;
    bool or_temp_result_1601_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1601_14_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1601_14_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1601_14_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1601_14_0_end;
        or_result_1601_14 = true;
        or_temp_result_1601_14_0 = true;
    }
    or_event_1601_14_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1601_14_0) {
        dialogbox_566_instances.save_selection();
        npcshellduck_533_instances.save_selection();
    }
    // event 1601_14
    bool or_temp_result_1601_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_dialog_system_dialog_voices_blips_1)) goto or_event_1601_14_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1601_14_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1601_14_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1601_14_1_end;
        or_result_1601_14 = true;
        or_temp_result_1601_14_1 = true;
        or_event_1601_14_1_end: ;
        if (or_temp_result_1601_14_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1601_14) goto or_final_or_event_1601_14_1_end;
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1601_14_0 || or_temp_result_1601_14_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1601_14_0 || or_temp_result_1601_14_1) {
            npcshellduck_533_instances.restore_selection();
        }
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1601_14_1_end: ;
}
void Frames::event_func_3189()
{
    // event 1603_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_story_scenes_1)) goto event_1603_14_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1603_14_end: ;
}
void Frames::event_func_3190()
{
    // event 1604_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_after_story_scene_1)) goto event_1604_14_end;
        if (once_condition_1604_14) goto event_1604_14_end;
        once_condition_1604_14 = true;
        if (!group_main_engine_level_specific_methods_house_outdoor_to_indoor_1) {
            group_main_engine_level_specific_methods_house_outdoor_to_indoor_1 = true;
        }
        if (!group_main_engine_level_specific_methods_camera_boundaries_1) {
            group_main_engine_level_specific_methods_camera_boundaries_1 = true;
        }
    }
    event_1604_14_end: ;
}
void Frames::event_func_3191()
{
    // event 1605_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_after_story_scene_1)) goto event_1605_14_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) > (0))) goto event_1605_14_end;
        {
            loop_gui_shiftdown_running = true;
            int times = int(1);
            loop_gui_shiftdown_index = 0;
            while (loop_gui_shiftdown_index < times) {
                loop_gui_shiftdown_14();
                if (!loop_gui_shiftdown_running) break;
                loop_gui_shiftdown_index++;
            }
        }
    }
    event_1605_14_end: ;
}
void Frames::event_func_3192()
{
    // event 1606_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_after_story_scene_1)) goto event_1606_14_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1606_14_end;
            group_main_engine_level_specific_methods_cutscenes_after_story_scene_1 = false;
    
    }
    event_1606_14_end: ;
}
void Frames::event_func_3193()
{
    // event 1607_14
    {
        if (!(group_main_engine_1)) goto event_1607_14_end;
        ((Active*)get_instance(npclilac_529_instances))->set_visible(false);
        ((Active*)get_instance(npclilac_529_instances))->alterables->flags.disable(1);
    }
    event_1607_14_end: ;
}
void Frames::event_func_3194()
{
    // event 1608_14
    {
        if (!(group_main_engine_1)) goto event_1608_14_end;
        objectchair_522_instances.clear_selection();
        pick_objects_in_zone(objectchair_522_instances, 876, 972, 995, 1222);
        for (ObjectIterator it(objectchair_522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(941, 1025);
            pos_end_1608_14_0: ;
        }
    }
    event_1608_14_end: ;
}
void Frames::event_func_3195()
{
    // event 1609_14
    {
        if (!(group_main_engine_1)) goto event_1609_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) > (1))) goto event_1609_14_end;
        ((Active*)get_instance(npclilac_529_instances))->set_visible(true);
        objectchair_522_instances.clear_selection();
        for (ObjectIterator it(objectchair_522_instances); !it.end(); ++it) {
            ((Active*)*it)->set_global_position(938, 1186);
            pos_end_1609_14_0: ;
        }
    }
    event_1609_14_end: ;
}
void Frames::event_func_3196()
{
    // event 1610_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1610_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) > (1))) goto event_1610_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1610_14_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(npclilac_529_instances))->get_x()-100))) goto event_1610_14_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) <= (((Active*)get_instance(npclilac_529_instances))->get_x()))) goto event_1610_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1610_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (1))) goto event_1610_14_end;
        ((Active*)get_instance(npclilac_529_instances))->alterables->flags.enable(1);
    }
    event_1610_14_end: ;
}
void Frames::event_func_3197()
{
    // event 1611_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1611_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) > (1))) goto event_1611_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) != (3))) goto event_1611_14_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) > (((Active*)get_instance(npclilac_529_instances))->get_x()))) goto event_1611_14_end;
        if (!((((Active*)get_instance(player_389_instances))->get_x()) < (((Active*)get_instance(npclilac_529_instances))->get_x()+100))) goto event_1611_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1611_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)) == (-1))) goto event_1611_14_end;
        ((Active*)get_instance(npclilac_529_instances))->alterables->flags.enable(1);
    }
    event_1611_14_end: ;
}
void Frames::event_func_3198()
{
    // event 1612_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1612_14_end;
        if (!(((Active*)get_instance(npclilac_529_instances))->alterables->flags.is_off(1))) goto event_1612_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0))) goto event_1612_14_end;
        ((Active*)get_instance(npclilac_529_instances))->alterables->flags.disable(2);
    }
    event_1612_14_end: ;
}
void Frames::event_func_3199()
{
    // event 1613_14
    bool or_result_1613_14 = false;
    bool or_temp_result_1613_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1613_14_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1613_14_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1613_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1613_14_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) > (10))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1613_14_0_end;
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1613_14_0_end;
        or_result_1613_14 = true;
        or_temp_result_1613_14_0 = true;
    }
    or_event_1613_14_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1613_14_0) {
        npclilac_529_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1613_14
    bool or_temp_result_1613_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1613_14_1_end;
        player_389_instances.clear_selection();
        npclilac_529_instances.clear_selection();
        if (!check_overlap(player_389_instances, npclilac_529_instances)) goto or_event_1613_14_1_end;
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_single(npclilac_529_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1613_14_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1613_14_1_end;
        or_result_1613_14 = true;
        or_temp_result_1613_14_1 = true;
        or_event_1613_14_1_end: ;
        player_389_instances.clear_saved_selection();
        if (or_temp_result_1613_14_1) {
            npclilac_529_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            player_389_instances.save_selection();
        }
        if (!or_result_1613_14) goto or_final_or_event_1613_14_1_end;
        npclilac_529_instances.empty_selection();
        player_389_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1613_14_0 || or_temp_result_1613_14_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1613_14_1) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1613_14_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1613_14_0 || or_temp_result_1613_14_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1613_14_0) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 50);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, 1);
        }
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    or_final_or_event_1613_14_1_end: ;
}
void Frames::event_func_3200()
{
    // event 1614_14
    bool or_result_1614_14 = false;
    bool or_temp_result_1614_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1614_14_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1614_14_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1614_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1614_14_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(40)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) > (10))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1614_14_0_end;
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1614_14_0_end;
        or_result_1614_14 = true;
        or_temp_result_1614_14_0 = true;
    }
    or_event_1614_14_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1614_14_0) {
        npclilac_529_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1614_14
    bool or_temp_result_1614_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1614_14_1_end;
        player_389_instances.clear_selection();
        npclilac_529_instances.clear_selection();
        if (!check_overlap(player_389_instances, npclilac_529_instances)) goto or_event_1614_14_1_end;
        for (ObjectIterator it(player_389_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_single(npclilac_529_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!player_389_instances.has_selection()) goto or_event_1614_14_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1614_14_1_end;
        or_result_1614_14 = true;
        or_temp_result_1614_14_1 = true;
        or_event_1614_14_1_end: ;
        player_389_instances.clear_saved_selection();
        if (or_temp_result_1614_14_1) {
            npclilac_529_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            player_389_instances.save_selection();
        }
        if (!or_result_1614_14) goto or_final_or_event_1614_14_1_end;
        npclilac_529_instances.empty_selection();
        player_389_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_1614_14_0 || or_temp_result_1614_14_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1614_14_1) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1614_14_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1614_14_0 || or_temp_result_1614_14_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1614_14_0) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 50);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
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
            ((Active*)*it)->set_direction(16);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(16, -1);
        }
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    or_final_or_event_1614_14_1_end: ;
}
void Frames::event_func_3201()
{
    // event 1615_14
    bool or_result_1615_14 = false;
    bool or_temp_result_1615_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1615_14_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1615_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (50))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1615_14_0_end;
        or_result_1615_14 = true;
        or_temp_result_1615_14_0 = true;
    }
    or_event_1615_14_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1615_14_0) {
        npclilac_529_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1615_14
    bool or_temp_result_1615_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1615_14_1_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (30))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1615_14_1_end;
        or_result_1615_14 = true;
        or_temp_result_1615_14_1 = true;
        or_event_1615_14_1_end: ;
        if (or_temp_result_1615_14_1) {
            npclilac_529_instances.save_selection();
        }
        if (!or_result_1615_14) goto or_final_or_event_1615_14_1_end;
        npclilac_529_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1615_14_0 || or_temp_result_1615_14_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1615_14_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    or_final_or_event_1615_14_1_end: ;
}
void Frames::event_func_3202()
{
    // event 1616_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1616_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (1))) goto event_1616_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1616_14_end;
        if (!((global_values->get(26)) == (0))) goto event_1616_14_end;
        if (not_always_1616_14 > loop_count) {
            not_always_1616_14 = loop_count + 2;
            goto event_1616_14_end;
        }
        not_always_1616_14 = loop_count + 2;
        media.play(str_data_voices_eng_mi_milla_hililac_ogg_97, 1-1);
    }
    event_1616_14_end: ;
}
void Frames::event_func_3203()
{
    // event 1617_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1617_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) > (1))) goto event_1617_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) < (60))) goto event_1617_14_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1617_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8-1);
            ((Active*)*it)->force_frame(randrange(5));
        }
    }
    event_1617_14_end: ;
}
void Frames::event_func_3204()
{
    // event 1618_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1618_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (60))) goto event_1618_14_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)-1)*8-2);
        }
    }
    event_1618_14_end: ;
}
void Frames::event_func_3205()
{
    // event 1619_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1619_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (72))) goto event_1619_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1619_14_end;
        if (!((global_values->get(26)) == (0))) goto event_1619_14_end;
        if (not_always_1619_14 > loop_count) {
            not_always_1619_14 = loop_count + 2;
            goto event_1619_14_end;
        }
        not_always_1619_14 = loop_count + 2;
        media.play(str_data_voices_eng_li_lilac_hellomilla_ogg_98, 1-1);
    }
    event_1619_14_end: ;
}
void Frames::event_func_3206()
{
    // event 1620_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1620_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (72))) goto event_1620_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1620_14_end;
        if (!((global_values->get(26)) == (0))) goto event_1620_14_end;
        if (not_always_1620_14 > loop_count) {
            not_always_1620_14 = loop_count + 2;
            goto event_1620_14_end;
        }
        not_always_1620_14 = loop_count + 2;
        media.play(str_data_voices_eng_li_lilac_whatsupcarol_ogg_99, 1-1);
    }
    event_1620_14_end: ;
}
void Frames::event_func_3207()
{
    // event 1621_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1621_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) > (70))) goto event_1621_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) < (140))) goto event_1621_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->get_x()) >= (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1621_14_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1621_14_end;
        ((Active*)get_instance(npclilac_529_instances))->set_direction(1);
        ((Active*)get_instance(npclilac_529_instances))->force_frame(randrange(5));
    }
    event_1621_14_end: ;
}
void Frames::event_func_3208()
{
    // event 1622_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1622_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) > (70))) goto event_1622_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) < (140))) goto event_1622_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()))) goto event_1622_14_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1622_14_end;
        ((Active*)get_instance(npclilac_529_instances))->set_direction(2);
        ((Active*)get_instance(npclilac_529_instances))->force_frame(randrange(5));
    }
    event_1622_14_end: ;
}
void Frames::event_func_3209()
{
    // event 1623_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto event_1623_14_end;
        if (!((((Active*)get_instance(npclilac_529_instances))->alterables->values.get(0)) == (140))) goto event_1623_14_end;
        ((Active*)get_instance(npclilac_529_instances))->force_frame(0);
    }
    event_1623_14_end: ;
}
void Frames::event_func_3210()
{
    // event 1624_14
    bool or_result_1624_14 = false;
    bool or_temp_result_1624_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1624_14_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1624_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (50))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1624_14_0_end;
        or_result_1624_14 = true;
        or_temp_result_1624_14_0 = true;
    }
    or_event_1624_14_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1624_14_0) {
        npclilac_529_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1624_14
    bool or_temp_result_1624_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1624_14_1_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (160))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1624_14_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (50))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1624_14_1_end;
        or_result_1624_14 = true;
        or_temp_result_1624_14_1 = true;
        or_event_1624_14_1_end: ;
        if (or_temp_result_1624_14_1) {
            npclilac_529_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1624_14) goto or_final_or_event_1624_14_1_end;
        npclilac_529_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1624_14_0 || or_temp_result_1624_14_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1624_14_0 || or_temp_result_1624_14_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 0);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    or_final_or_event_1624_14_1_end: ;
}
void Frames::event_func_3211()
{
    // event 1625_14
    bool or_result_1625_14 = false;
    bool or_temp_result_1625_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1625_14_0_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1625_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) == (50))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1625_14_0_end;
        or_result_1625_14 = true;
        or_temp_result_1625_14_0 = true;
    }
    or_event_1625_14_0_end: ;
    npclilac_529_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_1625_14_0) {
        npclilac_529_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 1625_14
    bool or_temp_result_1625_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_npcs_lilac_bench_1)) goto or_event_1625_14_1_end;
        npclilac_529_instances.clear_selection();
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (160))) { it.deselect(); continue; }
        }
        if (!npclilac_529_instances.has_selection()) goto or_event_1625_14_1_end;
        or_result_1625_14 = true;
        or_temp_result_1625_14_1 = true;
        or_event_1625_14_1_end: ;
        if (or_temp_result_1625_14_1) {
            npclilac_529_instances.save_selection();
        }
        if (!or_result_1625_14) goto or_final_or_event_1625_14_1_end;
        npclilac_529_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_1625_14_0 || or_temp_result_1625_14_1) {
            npclilac_529_instances.restore_selection();
        }
        if (or_temp_result_1625_14_0) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(npclilac_529_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
        }
    }
    or_final_or_event_1625_14_1_end: ;
}
void Frames::event_func_3212()
{
    // event 1626_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_camera_boundaries_1)) goto event_1626_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (1120))) goto event_1626_14_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 1120);
    }
    event_1626_14_end: ;
}
void Frames::event_func_3213()
{
    // event 1627_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_camera_boundaries_1)) goto event_1627_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1627_14_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 1600-global_values->get(17));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, 1600);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 712);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1600-global_values->get(17)*0.5);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
    }
    event_1627_14_end: ;
}
void Frames::event_func_3214()
{
    // event 1628_14
    bool or_result_1628_14 = false;
    bool or_temp_result_1628_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_camera_boundaries_1)) goto or_event_1628_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) < (1120))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1628_14_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1628_14_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1628_14_0_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1628_14_0_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1628_14_0_end;
        or_result_1628_14 = true;
        or_temp_result_1628_14_0 = true;
    }
    or_event_1628_14_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    objectchair_522_instances.clear_saved_selection();
    if (or_temp_result_1628_14_0) {
        player_389_instances.save_selection();
        playerothers_123_instances.save_selection();
        objectchair_522_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1628_14
    bool or_temp_result_1628_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_camera_boundaries_1)) goto or_event_1628_14_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) < (1120))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1628_14_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1628_14_1_end;
        player_389_instances.clear_selection();
        objectchair_522_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectchair_522_instances)) goto or_event_1628_14_1_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1628_14_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1628_14_1_end;
        or_result_1628_14 = true;
        or_temp_result_1628_14_1 = true;
    }
    or_event_1628_14_1_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_1628_14_1) {
        player_389_instances.save_selection();
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        objectchair_522_instances.save_selection();
    }
    // event 1628_14
    bool or_temp_result_1628_14_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_camera_boundaries_1)) goto or_event_1628_14_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) < (1120))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1628_14_2_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1628_14_2_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto or_event_1628_14_2_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1628_14_2_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1628_14_2_end;
        or_result_1628_14 = true;
        or_temp_result_1628_14_2 = true;
        or_event_1628_14_2_end: ;
        treehouseentrancetrigger_526_instances.clear_saved_selection();
        if (or_temp_result_1628_14_2) {
            player_389_instances.save_selection();
            playerinput_19_instances.save_selection();
            treehouseentrancetrigger_526_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1628_14) goto or_final_or_event_1628_14_2_end;
        player_389_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        treehouseentrancetrigger_526_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        objectchair_522_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        if (or_temp_result_1628_14_0 || or_temp_result_1628_14_1 || or_temp_result_1628_14_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1628_14_1 || or_temp_result_1628_14_2) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1628_14_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1628_14_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1628_14_2) {
            treehouseentrancetrigger_526_instances.restore_selection();
        }
        if (or_temp_result_1628_14_0 || or_temp_result_1628_14_1 || or_temp_result_1628_14_2) {
            player_389_instances.restore_selection();
        }
        if (or_temp_result_1628_14_0 || or_temp_result_1628_14_1) {
            objectchair_522_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 39);
        }
    }
    or_final_or_event_1628_14_2_end: ;
}
void Frames::event_func_3215()
{
    // event 1629_14
    bool or_result_1629_14 = false;
    bool or_temp_result_1629_14_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_camera_boundaries_1)) goto or_event_1629_14_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (1600-global_values->get(17)))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1629_14_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_1629_14_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1629_14_0_end;
        player_389_instances.clear_selection();
        objectcouchspot_542_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectcouchspot_542_instances)) goto or_event_1629_14_0_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) < (2))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1629_14_0_end;
        or_result_1629_14 = true;
        or_temp_result_1629_14_0 = true;
    }
    or_event_1629_14_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    objectcouchspot_542_instances.clear_saved_selection();
    player_389_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1629_14_0) {
        player_389_instances.save_selection();
        playerothers_123_instances.save_selection();
        objectcouchspot_542_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1629_14
    bool or_temp_result_1629_14_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_camera_boundaries_1)) goto or_event_1629_14_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (1600-global_values->get(17)))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1629_14_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_1629_14_1_end;
        player_389_instances.clear_selection();
        objectcouchspot_542_instances.clear_selection();
        if (!check_overlap(player_389_instances, objectcouchspot_542_instances)) goto or_event_1629_14_1_end;
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_1629_14_1_end;
        if (!((get_abs(((Active*)get_single(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) < (2))) goto or_event_1629_14_1_end;
        or_result_1629_14 = true;
        or_temp_result_1629_14_1 = true;
        or_event_1629_14_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_1629_14_1) {
            player_389_instances.save_selection();
            playerinput_19_instances.save_selection();
            objectcouchspot_542_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_1629_14) goto or_final_or_event_1629_14_1_end;
        player_389_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        objectcouchspot_542_instances.empty_selection();
        playerskinsash_418_instances.empty_selection();
        if (or_temp_result_1629_14_0 || or_temp_result_1629_14_1) {
            objectcouchspot_542_instances.restore_selection();
        }
        if (or_temp_result_1629_14_0 || or_temp_result_1629_14_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_1629_14_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_1629_14_0) {
            playerskinsash_418_instances.restore_selection();
        }
        if (or_temp_result_1629_14_0) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_1629_14_0 || or_temp_result_1629_14_1) {
            player_389_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 39);
        }
    }
    or_final_or_event_1629_14_1_end: ;
}
void Frames::event_func_3216()
{
    // event 1630_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_camera_boundaries_1)) goto event_1630_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1630_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1630_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (50))) goto event_1630_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(objectcouchspot_542_instances, it.current_index, default_active_instance))->get_y());
        }
    }
    event_1630_14_end: ;
}
void Frames::event_func_3217()
{
    // event 1631_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1631_14_end;
        if (!((((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)) == (0))) goto event_1631_14_end;
        ((Active*)get_instance(treehousedoor_525_instances))->alterables->values.set(0, ((Active*)get_instance(treehousedoor_525_instances))->get_x());
        ((Active*)get_instance(treehousedoor2_524_instances))->alterables->values.set(0, ((Active*)get_instance(treehousedoor2_524_instances))->get_x());
    }
    event_1631_14_end: ;
}
void Frames::event_func_3218()
{
    // event 1632_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1632_14_end;
        ((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.disable(0);
    }
    event_1632_14_end: ;
}
void Frames::event_func_3219()
{
    // event 1633_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1633_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)-40))) goto event_1633_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)+40))) goto event_1633_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (((Active*)get_instance(treehousedoor_525_instances))->get_box_index(1)))) goto event_1633_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) < (((Active*)get_instance(treehousedoor_525_instances))->get_box_index(3)))) goto event_1633_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1633_14_end;
        ((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.enable(0);
    }
    event_1633_14_end: ;
}
void Frames::event_func_3220()
{
    // event 1634_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1634_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1634_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1634_14_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto event_1634_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 50);
        ((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.disable(0);
        ((Active*)get_instance(treehousedoor_525_instances))->move_front();
        ((Active*)get_instance(treehousedoor2_524_instances))->move_front();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(24);
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
    }
    event_1634_14_end: ;
}
void Frames::event_func_3221()
{
    // event 1635_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1635_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1635_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1635_14_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto event_1635_14_end;
        if (!((((Active*)get_instance(treehousedoor_525_instances))->get_x()) <= (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)))) goto event_1635_14_end;
        if (!((levelcardfade2_24_instances.size()) == (0))) goto event_1635_14_end;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1635_14_end: ;
}
void Frames::event_func_3222()
{
    // event 1636_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1636_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1636_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1636_14_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto event_1636_14_end;
        if (!((((Active*)get_instance(treehousedoor_525_instances))->get_x()) <= (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)))) goto event_1636_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1636_14_end: ;
}
void Frames::event_func_3223()
{
    // event 1637_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1637_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (39))) goto event_1637_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (1))) goto event_1637_14_end;
        player_389_instances.clear_selection();
        treehouseentrancetrigger_526_instances.clear_selection();
        if (!check_overlap(player_389_instances, treehouseentrancetrigger_526_instances)) goto event_1637_14_end;
        if (!((((Active*)get_instance(treehousedoor_525_instances))->get_x()) <= (((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)))) goto event_1637_14_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1637_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, 864);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, 1536);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1637_14_end: ;
}
void Frames::event_func_3224()
{
    // event 1638_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1638_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1638_14_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, -1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, -2);
    }
    event_1638_14_end: ;
}
void Frames::event_func_3225()
{
    // event 1639_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1639_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1639_14_end;
        if (!((((Active*)get_single(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1639_14_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
            group_main_engine_level_specific_methods_house_outdoor_to_indoor_1 = false;
    
        if (!group_main_engine_level_specific_methods_house_indoor_to_outdoor_1) {
            group_main_engine_level_specific_methods_house_indoor_to_outdoor_1 = true;
        }
    }
    event_1639_14_end: ;
}
void Frames::event_func_3226()
{
    // event 1640_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1640_14_end;
        if (!(((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.is_off(0))) goto event_1640_14_end;
        ((Active*)get_instance(treehousedoor_525_instances))->set_x(get_max(((Active*)get_instance(treehousedoor_525_instances))->get_x()-1, ((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)));
        ((Active*)get_instance(treehousedoor2_524_instances))->set_x(get_min(((Active*)get_instance(treehousedoor2_524_instances))->get_x()+1, ((Active*)get_instance(treehousedoor2_524_instances))->alterables->values.get(0)));
    }
    event_1640_14_end: ;
}
void Frames::event_func_3227()
{
    // event 1641_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_outdoor_to_indoor_1)) goto event_1641_14_end;
        if (!(((Active*)get_instance(treehousedoor_525_instances))->alterables->flags.is_on(0))) goto event_1641_14_end;
        ((Active*)get_instance(treehousedoor_525_instances))->set_x(get_min(((Active*)get_instance(treehousedoor_525_instances))->get_x()+1, ((Active*)get_instance(treehousedoor_525_instances))->alterables->values.get(0)+24));
        ((Active*)get_instance(treehousedoor2_524_instances))->set_x(get_max(((Active*)get_instance(treehousedoor2_524_instances))->get_x()-1, ((Active*)get_instance(treehousedoor2_524_instances))->alterables->values.get(0)-24));
        ((Active*)get_instance(treehousedoor_525_instances))->move_back();
        ((Active*)get_instance(treehousedoor2_524_instances))->move_back();
    }
    event_1641_14_end: ;
}
void Frames::event_func_3228()
{
    // event 1642_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_indoor_to_outdoor_1)) goto event_1642_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (850))) goto event_1642_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) > (0))) goto event_1642_14_end;
        if (!((levelcardfade2_24_instances.size()) == (0))) goto event_1642_14_end;
        if (not_always_1642_14 > loop_count) {
            not_always_1642_14 = loop_count + 2;
            goto event_1642_14_end;
        }
        not_always_1642_14 = loop_count + 2;
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
    }
    event_1642_14_end: ;
}
void Frames::event_func_3229()
{
    // event 1643_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_indoor_to_outdoor_1)) goto event_1643_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1643_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (850))) goto event_1643_14_end;
        if (!((levelcardfade2_24_instances.size()) > (0))) goto event_1643_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1643_14_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()-2);
        }
    }
    event_1643_14_end: ;
}
void Frames::event_func_3230()
{
    // event 1644_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_indoor_to_outdoor_1)) goto event_1644_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1644_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (850))) goto event_1644_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1644_14_end;
        if (!((levelcardfade2_24_instances.size()) > (0))) goto event_1644_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1644_14_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1), 2));
    }
    event_1644_14_end: ;
}
void Frames::event_func_3231()
{
    // event 1645_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_indoor_to_outdoor_1)) goto event_1645_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) >= (1600-global_values->get(17)))) goto event_1645_14_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (850))) goto event_1645_14_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) <= (0))) goto event_1645_14_end;
        if (!((levelcardfade2_24_instances.size()) > (0))) goto event_1645_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1645_14_end;
        global_values->set(4, -1);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(treehouseentrancetrigger_526_instances))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(treehouseentrancetrigger_526_instances))->get_y()+12);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(treehouseentrancetrigger_526_instances))->get_y());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 0);
    }
    event_1645_14_end: ;
}
void Frames::event_func_3232()
{
    // event 1646_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_indoor_to_outdoor_1)) goto event_1646_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1646_14_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    event_1646_14_end: ;
}
void Frames::event_func_3233()
{
    // event 1647_14
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_house_indoor_to_outdoor_1)) goto event_1647_14_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1647_14_end;
        if (!((((Active*)get_single(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1647_14_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 0);
            group_main_engine_level_specific_methods_house_indoor_to_outdoor_1 = false;
    
        if (!group_main_engine_level_specific_methods_house_outdoor_to_indoor_1) {
            group_main_engine_level_specific_methods_house_outdoor_to_indoor_1 = true;
        }
    }
    event_1647_14_end: ;
}
void Frames::event_func_3234()
{
    // event 1650_14
    {
        if (!(group_main_engine_1)) goto event_1650_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) > (0))) goto event_1650_14_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_y()-10+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1650_14_end: ;
}
void Frames::event_func_3235()
{
    // event 1658_14
    {
        if (!(group_main_engine_1)) goto event_1658_14_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskinsash_418_instances, it.current_index));
            if (parent == NULL) goto pos_end_1658_14_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1658_14_0: ;
        }
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_layer(((Active*)get_instance(playerskinsash_418_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskincarol_445_instances, it.current_index));
            if (parent == NULL) goto pos_end_1658_14_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1658_14_1: ;
        }
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_layer(((Active*)get_instance(playerskincarol_445_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(playerskinmilla_446_instances, it.current_index));
            if (parent == NULL) goto pos_end_1658_14_2;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1658_14_2: ;
        }
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->current_animation);
            ((Active*)*it)->set_direction(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_layer(((Active*)get_instance(playerskinmilla_446_instances, it.current_index, default_active_instance))->layer->index+1-1);
        }
    }
    event_1658_14_end: ;
}
void Frames::event_func_3236()
{
    // event 1659_14
    {
        if (!(group_main_engine_1)) goto event_1659_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) != (46))) goto event_1659_14_end;
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            playerskinsashhair_417_instances.clear_selection();
            for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1659_14_0_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1659_14_0_end: ;
        {
            playerskincarol_445_instances.clear_selection();
            ObjectIterator other_it(playerskincarol_445_instances);
            playerskincaroltail_444_instances.clear_selection();
            for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1659_14_1_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1659_14_1_end: ;
        {
            playerskinmilla_446_instances.clear_selection();
            ObjectIterator other_it(playerskinmilla_446_instances);
            playerskinmillatail_381_instances.clear_selection();
            for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1659_14_2_end;
                ((Active*)*it)->move_back(*other_it);
                ++other_it;
            }
        }
        action_1659_14_2_end: ;
    }
    event_1659_14_end: ;
}
void Frames::event_func_3237()
{
    // event 1660_14
    {
        if (!(group_main_engine_1)) goto event_1660_14_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (46))) goto event_1660_14_end;
        {
            playerskinsash_418_instances.clear_selection();
            ObjectIterator other_it(playerskinsash_418_instances);
            playerskinsashhair_417_instances.clear_selection();
            for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1660_14_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1660_14_0_end: ;
        {
            playerskincarol_445_instances.clear_selection();
            ObjectIterator other_it(playerskincarol_445_instances);
            playerskincaroltail_444_instances.clear_selection();
            for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1660_14_1_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1660_14_1_end: ;
        {
            playerskinmilla_446_instances.clear_selection();
            ObjectIterator other_it(playerskinmilla_446_instances);
            playerskinmillatail_381_instances.clear_selection();
            for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1660_14_2_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1660_14_2_end: ;
    }
    event_1660_14_end: ;
}
void Frames::event_func_3238()
{
    // event 1661_14
    {
        if (!(group_main_engine_1)) goto event_1661_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->flags & VISIBLE)) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1661_14_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1661_14_end: ;
}
void Frames::event_func_3239()
{
    // event 1662_14
    {
        if (!(group_main_engine_1)) goto event_1662_14_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (((Active*)(*it))->flags & VISIBLE) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1662_14_end;
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1662_14_end: ;
}
void Frames::event_func_3240()
{
    // event 1721_14
    {
        if (!(group_main_engine_1)) goto event_1721_14_end;
        if (!((((Counter*)get_instance(guitimerm_364_instances))->value) >= (10))) goto event_1721_14_end;
        if (!(((Counter*)get_instance(guitimerm_364_instances))->flags & VISIBLE)) goto event_1721_14_end;
        ((Counter*)get_instance(guitimerm2_365_instances))->set_visible(false);
        ((Active*)get_instance(guitimer_564_instances))->set_direction(0);
    }
    event_1721_14_end: ;
}
void Frames::event_func_3241()
{
    // event 1722_14
    {
        if (!(group_main_engine_1)) goto event_1722_14_end;
        if (!((((Counter*)get_instance(guitimerm_364_instances))->value) >= (100))) goto event_1722_14_end;
        if (!(((Counter*)get_instance(guitimerm_364_instances))->flags & VISIBLE)) goto event_1722_14_end;
        ((Active*)get_instance(guitimer_564_instances))->set_direction(1);
    }
    event_1722_14_end: ;
}
void Frames::event_func_3242()
{
    // event 1739_14
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1739_14_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (0))) goto event_1739_14_end;
        if (not_always_1739_14 > loop_count) {
            not_always_1739_14 = loop_count + 2;
            goto event_1739_14_end;
        }
        not_always_1739_14 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, width+50);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1739_14_end: ;
}
void Frames::event_func_3243()
{
    // event 1740_14
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1740_14_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (1))) goto event_1740_14_end;
        if (not_always_1740_14 > loop_count) {
            not_always_1740_14 = loop_count + 2;
            goto event_1740_14_end;
        }
        not_always_1740_14 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, get_min(frame_left(), ((Active*)get_instance(cameralimitbossleft_421_instances, default_active_instance))->get_x()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, get_min(frame_top(), ((Active*)get_instance(cameralimitbosstop_423_instances, default_active_instance))->get_y()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, get_max(frame_right(), ((Active*)get_instance(cameralimitbossright_422_instances, default_active_instance))->get_x()));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, get_max(frame_bottom(), ((Active*)get_instance(cameralimitbossbottom_420_instances, default_active_instance))->get_y()));
    }
    event_1740_14_end: ;
}
void Frames::event_func_3244()
{
    // event 1741_14
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1741_14_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(20)) == (2))) goto event_1741_14_end;
        if (not_always_1741_14 > loop_count) {
            not_always_1741_14 = loop_count + 2;
            goto event_1741_14_end;
        }
        not_always_1741_14 = loop_count + 2;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, ((Active*)get_instance(sign_351_instances))->get_x()-((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, ((Active*)get_instance(sign_351_instances))->get_y()-160);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, ((Active*)get_instance(sign_351_instances))->get_y()+80);
    }
    event_1741_14_end: ;
}
void Frames::event_func_3245()
{
    // event 1797_14
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1797_14_end;
        set_display_center(get_floor(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(18)), -1);
        set_display_center(-1, get_floor(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(19)));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)-0.1, 0));
    }
    event_1797_14_end: ;
}
void Frames::event_func_3246()
{
    // event 1839_14
    {
        if (!(group_main_engine_1)) goto event_1839_14_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(5, ((SystemBox*)*it)->alterables->values.get(5)+((SystemBox*)*it)->alterables->values.get(6));
        }
    }
    event_1839_14_end: ;
}
void Frames::event_func_3247()
{
    // event 1840_14
    {
        if (!(group_main_engine_1)) goto event_1840_14_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(9, (frame_left()*((SystemBox*)*it)->alterables->values.get(3))+((SystemBox*)*it)->alterables->values.get(5));
            ((SystemBox*)*it)->alterables->values.set(10, (frame_top()*((SystemBox*)*it)->alterables->values.get(4))+((SystemBox*)*it)->alterables->values.get(2));
        }
    }
    event_1840_14_end: ;
}
void Frames::event_func_3248()
{
    // event 1841_14
    {
        if (!(group_main_engine_1)) goto event_1841_14_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(frame_left()+(int(((SystemBox*)*it)->alterables->values.get(9)-frame_left())%math_helper%((SystemBox*)*it)->alterables->values.get(0)), ((SystemBox*)*it)->alterables->values.get(10));
        }
    }
    event_1841_14_end: ;
}
void Frames::event_func_3249()
{
    // event 1842_14
    {
        if (!(group_main_engine_1)) goto event_1842_14_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->set_fill(Color(make_color_int(78-30*cos_deg((frame_time * 1000.0)/math_helper/10), 0, 0)));
    }
    event_1842_14_end: ;
}
void Frames::event_func_3250()
{
    // event 1843_14
    {
        if (!(group_pause_1)) goto event_1843_14_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1843_14_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1843_14_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1843_14_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1843_14_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
            group_main_engine_1 = false;
    
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
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
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npccouchmilla_554_instances))->stop_animation();
        ((Active*)get_instance(furniturephone_541_instances))->stop_animation();
        ((Active*)get_instance(npccouchlilac_545_instances))->stop_animation();
        ((Active*)get_instance(npccouchcarol_555_instances))->stop_animation();
        ((Active*)get_instance(npcshellduck_533_instances))->stop_animation();
        paperlantern_527_instances.clear_selection();
        for (ObjectIterator it(paperlantern_527_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1843_14_end: ;
}
void Frames::event_func_3251()
{
    // event 1844_14
    bool or_result_1844_14 = false;
    bool or_temp_result_1844_14_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1844_14_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1844_14_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1844_14_0_end;
        or_result_1844_14 = true;
        or_temp_result_1844_14_0 = true;
    }
    or_event_1844_14_0_end: ;
    // event 1844_14
    bool or_temp_result_1844_14_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1844_14_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1844_14_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1844_14_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1844_14_1_end;
        or_result_1844_14 = true;
        or_temp_result_1844_14_1 = true;
        or_event_1844_14_1_end: ;
        if (!or_result_1844_14) goto or_final_or_event_1844_14_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
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
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->start();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npccouchmilla_554_instances))->start_animation();
        ((Active*)get_instance(furniturephone_541_instances))->start_animation();
        ((Active*)get_instance(npccouchlilac_545_instances))->start_animation();
        ((Active*)get_instance(npccouchcarol_555_instances))->start_animation();
        ((Active*)get_instance(npcshellduck_533_instances))->start_animation();
        paperlantern_527_instances.clear_selection();
        for (ObjectIterator it(paperlantern_527_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1844_14_1_end: ;
}
void Frames::event_func_3252()
{
    // event 1846_14
    {
        if (!(group_pause_1)) goto event_1846_14_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1846_14_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(9)) == (1))) goto event_1846_14_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) < (2))) goto event_1846_14_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystal_456_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y()+((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)*24);
    }
    event_1846_14_end: ;
}
void Frames::event_func_3253()
{
    // event 1847_14
    {
        if (!(group_pause_1)) goto event_1847_14_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1847_14_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(8)) == (1))) goto event_1847_14_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) <= (2))) goto event_1847_14_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) > (0))) goto event_1847_14_end;
        media.play_id(SOUND_UI_MOVE_64, -1, 1);
        ((Active*)get_instance(crystal_456_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(crystal_456_instances))->set_y(((Active*)get_instance(guipause_453_instances))->get_action_y()+((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)*24);
    }
    event_1847_14_end: ;
}
void Frames::event_func_3254()
{
    // event 1848_14
    {
        if (!(group_pause_1)) goto event_1848_14_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_1848_14_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1848_14_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (1))) goto event_1848_14_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 3);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1848_14_end: ;
}
void Frames::event_func_3255()
{
    // event 1849_14
    {
        if (!(group_pause_1)) goto event_1849_14_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto event_1849_14_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto event_1849_14_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (2))) goto event_1849_14_end;
        ((Active*)get_instance(crystal_456_instances))->alterables->values.set(0, 4);
        media.play_id(SOUND_UI_NEXT_56, -1, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-global_values->get(16)-120);
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1849_14_end: ;
}
