#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_8268()
{
    // event 1502_35
    bool or_result_1502_35 = false;
    bool or_temp_result_1502_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto or_event_1502_35_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1502_35_0_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto or_event_1502_35_0_end;
        if (not_always_1502_35 > loop_count) {
            not_always_1502_35 = loop_count + 2;
            goto or_event_1502_35_0_end;
        }
        not_always_1502_35 = loop_count + 2;
        or_result_1502_35 = true;
        or_temp_result_1502_35_0 = true;
    }
    or_event_1502_35_0_end: ;
    // event 1502_35
    bool or_temp_result_1502_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto or_event_1502_35_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto or_event_1502_35_1_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (10))) goto or_event_1502_35_1_end;
        if (not_always_1502_35 > loop_count) {
            not_always_1502_35 = loop_count + 2;
            goto or_event_1502_35_1_end;
        }
        not_always_1502_35 = loop_count + 2;
        or_result_1502_35 = true;
        or_temp_result_1502_35_1 = true;
        or_event_1502_35_1_end: ;
        if (!or_result_1502_35) goto or_final_or_event_1502_35_1_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(true);
    }
    or_final_or_event_1502_35_1_end: ;
}
void Frames::event_func_8269()
{
    // event 1503_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1503_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (0))) goto event_1503_35_end;
        if (not_always_1503_35 > loop_count) {
            not_always_1503_35 = loop_count + 2;
            goto event_1503_35_end;
        }
        not_always_1503_35 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(12, global_values->get(25));
    }
    event_1503_35_end: ;
}
void Frames::event_func_8270()
{
    // event 1504_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1504_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1504_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1504_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1504_35_end: ;
}
void Frames::event_func_8271()
{
    // event 1505_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1505_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1505_35_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1505_35_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1505_35_end: ;
}
void Frames::event_func_8272()
{
    // event 1506_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1506_35_end;
        if (!((global_values->get(27)) == (0))) goto event_1506_35_end;
        if (not_always_1506_35 > loop_count) {
            not_always_1506_35 = loop_count + 2;
            goto event_1506_35_end;
        }
        not_always_1506_35 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1) {
            group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1 = true;
        }
    }
    event_1506_35_end: ;
}
void Frames::event_func_8273()
{
    // event 1510_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1510_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1510_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1510_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1510_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1510_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1510_35_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1510_35_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1510_35_end: ;
}
void Frames::event_func_8274()
{
    // event 1511_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1511_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1511_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1511_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1511_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1511_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1511_35_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1511_35_end: ;
}
void Frames::event_func_8275()
{
    // event 1512_35
    bool or_result_1512_35 = false;
    bool or_temp_result_1512_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1512_35_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1512_35_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1512_35_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1512_35_0_end;
        or_result_1512_35 = true;
        or_temp_result_1512_35_0 = true;
    }
    or_event_1512_35_0_end: ;
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1512_35_0) {
        playerskinsash_418_instances.save_selection();
    }
    // event 1512_35
    bool or_temp_result_1512_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1512_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1512_35_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1512_35_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1512_35_1_end;
        or_result_1512_35 = true;
        or_temp_result_1512_35_1 = true;
        or_event_1512_35_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1512_35_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1512_35) goto or_final_or_event_1512_35_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1512_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1512_35_0 || or_temp_result_1512_35_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1512_35_1_end: ;
}
void Frames::event_func_8276()
{
    // event 1513_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1513_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1513_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1513_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1513_35_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1513_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1513_35_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1513_35_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1513_35_end: ;
}
void Frames::event_func_8277()
{
    // event 1514_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1514_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1514_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1514_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1514_35_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1514_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1514_35_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1514_35_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1514_35_end: ;
}
void Frames::event_func_8278()
{
    // event 1515_35
    bool or_result_1515_35 = false;
    bool or_temp_result_1515_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1515_35_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1515_35_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1515_35_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1515_35_0_end;
        or_result_1515_35 = true;
        or_temp_result_1515_35_0 = true;
    }
    or_event_1515_35_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1515_35_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 1515_35
    bool or_temp_result_1515_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1515_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1515_35_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1515_35_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1515_35_1_end;
        or_result_1515_35 = true;
        or_temp_result_1515_35_1 = true;
        or_event_1515_35_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1515_35_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1515_35) goto or_final_or_event_1515_35_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1515_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1515_35_0 || or_temp_result_1515_35_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1515_35_1_end: ;
}
void Frames::event_func_8279()
{
    // event 1516_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1516_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1516_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1516_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1516_35_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1516_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1516_35_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1516_35_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1516_35_end: ;
}
void Frames::event_func_8280()
{
    // event 1517_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1517_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1517_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1517_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1517_35_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1517_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1517_35_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1517_35_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1517_35_end: ;
}
void Frames::event_func_8281()
{
    // event 1518_35
    bool or_result_1518_35 = false;
    bool or_temp_result_1518_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1518_35_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1518_35_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1518_35_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1518_35_0_end;
        or_result_1518_35 = true;
        or_temp_result_1518_35_0 = true;
    }
    or_event_1518_35_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1518_35_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1518_35
    bool or_temp_result_1518_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1518_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1518_35_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1518_35_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1518_35_1_end;
        or_result_1518_35 = true;
        or_temp_result_1518_35_1 = true;
        or_event_1518_35_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1518_35_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1518_35) goto or_final_or_event_1518_35_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1518_35_0 || or_temp_result_1518_35_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_1518_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1518_35_1_end: ;
}
void Frames::event_func_8282()
{
    // event 1519_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1519_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1519_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1519_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1519_35_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1519_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1519_35_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1519_35_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1519_35_end: ;
}
void Frames::event_func_8283()
{
    // event 1520_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1520_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1520_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1520_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1520_35_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1520_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1520_35_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1520_35_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1520_35_end: ;
}
void Frames::event_func_8284()
{
    // event 1521_35
    bool or_result_1521_35 = false;
    bool or_temp_result_1521_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1521_35_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1521_35_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1521_35_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1521_35_0_end;
        or_result_1521_35 = true;
        or_temp_result_1521_35_0 = true;
    }
    or_event_1521_35_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    if (or_temp_result_1521_35_0) {
        playerskinspade_419_instances.save_selection();
    }
    // event 1521_35
    bool or_temp_result_1521_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1521_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1521_35_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1521_35_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1521_35_1_end;
        or_result_1521_35 = true;
        or_temp_result_1521_35_1 = true;
        or_event_1521_35_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1521_35_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1521_35) goto or_final_or_event_1521_35_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1521_35_0 || or_temp_result_1521_35_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1521_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1521_35_1_end: ;
}
void Frames::event_func_8285()
{
    // event 1522_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1522_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1522_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1522_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1522_35_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1522_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1522_35_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1522_35_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1522_35_end: ;
}
void Frames::event_func_8286()
{
    // event 1523_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1523_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1523_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1523_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1523_35_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1523_35_end;
        if (!media.is_channel_playing(20-1)) goto event_1523_35_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1523_35_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
        }
    }
    event_1523_35_end: ;
}
void Frames::event_func_8287()
{
    // event 1524_35
    bool or_result_1524_35 = false;
    bool or_temp_result_1524_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1524_35_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1524_35_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1524_35_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1524_35_0_end;
        or_result_1524_35 = true;
        or_temp_result_1524_35_0 = true;
    }
    or_event_1524_35_0_end: ;
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1524_35_0) {
        playerskintorque_450_instances.save_selection();
    }
    // event 1524_35
    bool or_temp_result_1524_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1524_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1524_35_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1524_35_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1524_35_1_end;
        or_result_1524_35 = true;
        or_temp_result_1524_35_1 = true;
        or_event_1524_35_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1524_35_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1524_35) goto or_final_or_event_1524_35_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1524_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1524_35_0 || or_temp_result_1524_35_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1524_35_1_end: ;
}
void Frames::event_func_8288()
{
    // event 1525_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1)) goto event_1525_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1525_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (9))) goto event_1525_35_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->test_animation(5))) goto event_1525_35_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6));
    }
    event_1525_35_end: ;
}
void Frames::event_func_8289()
{
    // event 1526_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1526_35_end;
        if (!((global_values->get(27)) == (1))) goto event_1526_35_end;
        if (not_always_1526_35 > loop_count) {
            not_always_1526_35 = loop_count + 2;
            goto event_1526_35_end;
        }
        not_always_1526_35 = loop_count + 2;
            group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_voice_acting_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1) {
            group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1 = true;
        }
    }
    event_1526_35_end: ;
}
void Frames::event_func_8290()
{
    // event 1527_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1527_35_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1527_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1527_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1527_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1527_35_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1527_35_end: ;
}
void Frames::event_func_8291()
{
    // event 1528_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1528_35_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1528_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1528_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1528_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1528_35_end;
        media.play_id(SOUND_TALK_F_302, -1, 1);
    }
    event_1528_35_end: ;
}
void Frames::event_func_8292()
{
    // event 1529_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1529_35_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1529_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1529_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1529_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1529_35_end;
        media.play_id(SOUND_TALK_C_289, -1, 1);
    }
    event_1529_35_end: ;
}
void Frames::event_func_8293()
{
    // event 1530_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1530_35_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1530_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1530_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1530_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1530_35_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1530_35_end: ;
}
void Frames::event_func_8294()
{
    // event 1531_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1531_35_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1531_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) == (2))) goto event_1531_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1531_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1531_35_end;
        media.play_id(SOUND_TALK_M_303, -1, 1);
    }
    event_1531_35_end: ;
}
void Frames::event_func_8295()
{
    // event 1532_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1532_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1532_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (1))) goto event_1532_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1532_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1532_35_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1532_35_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1532_35_end: ;
}
void Frames::event_func_8296()
{
    // event 1533_35
    bool or_result_1533_35 = false;
    bool or_temp_result_1533_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1533_35_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1533_35_0_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1533_35_0_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1533_35_0_end;
        or_result_1533_35 = true;
        or_temp_result_1533_35_0 = true;
    }
    or_event_1533_35_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinsash_418_instances.clear_saved_selection();
    if (or_temp_result_1533_35_0) {
        dialogbox_566_instances.save_selection();
        playerskinsash_418_instances.save_selection();
    }
    // event 1533_35
    bool or_temp_result_1533_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1533_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (1))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1533_35_1_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto or_event_1533_35_1_end;
        if (!((((Active*)get_single(playerskinsash_418_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1533_35_1_end;
        or_result_1533_35 = true;
        or_temp_result_1533_35_1 = true;
        or_event_1533_35_1_end: ;
        if (or_temp_result_1533_35_1) {
            dialogbox_566_instances.save_selection();
            playerskinsash_418_instances.save_selection();
        }
        if (!or_result_1533_35) goto or_final_or_event_1533_35_1_end;
        playerskinsash_418_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1533_35_0 || or_temp_result_1533_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1533_35_0 || or_temp_result_1533_35_1) {
            playerskinsash_418_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1533_35_1_end: ;
}
void Frames::event_func_8297()
{
    // event 1534_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1534_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1534_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (2))) goto event_1534_35_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1534_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1534_35_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_1534_35_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1534_35_end: ;
}
void Frames::event_func_8298()
{
    // event 1535_35
    bool or_result_1535_35 = false;
    bool or_temp_result_1535_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1535_35_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1535_35_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1535_35_0_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1535_35_0_end;
        or_result_1535_35 = true;
        or_temp_result_1535_35_0 = true;
    }
    or_event_1535_35_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_1535_35_0) {
        dialogbox_566_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 1535_35
    bool or_temp_result_1535_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1535_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (2))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1535_35_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_1535_35_1_end;
        if (!((((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1535_35_1_end;
        or_result_1535_35 = true;
        or_temp_result_1535_35_1 = true;
        or_event_1535_35_1_end: ;
        if (or_temp_result_1535_35_1) {
            dialogbox_566_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_1535_35) goto or_final_or_event_1535_35_1_end;
        playerskincarol_445_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1535_35_0 || or_temp_result_1535_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1535_35_0 || or_temp_result_1535_35_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1535_35_1_end: ;
}
void Frames::event_func_8299()
{
    // event 1536_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1536_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1536_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (3))) goto event_1536_35_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1536_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1536_35_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1536_35_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1536_35_end: ;
}
void Frames::event_func_8300()
{
    // event 1537_35
    bool or_result_1537_35 = false;
    bool or_temp_result_1537_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1537_35_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1537_35_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1537_35_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1537_35_0_end;
        or_result_1537_35 = true;
        or_temp_result_1537_35_0 = true;
    }
    or_event_1537_35_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1537_35_0) {
        dialogbox_566_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 1537_35
    bool or_temp_result_1537_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1537_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1537_35_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1537_35_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1537_35_1_end;
        or_result_1537_35 = true;
        or_temp_result_1537_35_1 = true;
        or_event_1537_35_1_end: ;
        if (or_temp_result_1537_35_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1537_35) goto or_final_or_event_1537_35_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1537_35_0 || or_temp_result_1537_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1537_35_0 || or_temp_result_1537_35_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1537_35_1_end: ;
}
void Frames::event_func_8301()
{
    // event 1538_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1538_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1538_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (4))) goto event_1538_35_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto event_1538_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1538_35_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1538_35_end;
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1538_35_end: ;
}
void Frames::event_func_8302()
{
    // event 1539_35
    bool or_result_1539_35 = false;
    bool or_temp_result_1539_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1539_35_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1539_35_0_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1539_35_0_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1539_35_0_end;
        or_result_1539_35 = true;
        or_temp_result_1539_35_0 = true;
    }
    or_event_1539_35_0_end: ;
    playerskinspade_419_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1539_35_0) {
        playerskinspade_419_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1539_35
    bool or_temp_result_1539_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1539_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (4))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1539_35_1_end;
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinspade_419_instances.has_selection()) goto or_event_1539_35_1_end;
        if (!((((Active*)get_single(playerskinspade_419_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1539_35_1_end;
        or_result_1539_35 = true;
        or_temp_result_1539_35_1 = true;
        or_event_1539_35_1_end: ;
        if (or_temp_result_1539_35_1) {
            playerskinspade_419_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1539_35) goto or_final_or_event_1539_35_1_end;
        playerskinspade_419_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1539_35_0 || or_temp_result_1539_35_1) {
            playerskinspade_419_instances.restore_selection();
        }
        if (or_temp_result_1539_35_0 || or_temp_result_1539_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1539_35_1_end: ;
}
void Frames::event_func_8303()
{
    // event 1540_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto event_1540_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1540_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1540_35_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1540_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1540_35_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1540_35_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%3);
        }
    }
    event_1540_35_end: ;
}
void Frames::event_func_8304()
{
    // event 1541_35
    bool or_result_1541_35 = false;
    bool or_temp_result_1541_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1541_35_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1541_35_0_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1541_35_0_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1541_35_0_end;
        or_result_1541_35 = true;
        or_temp_result_1541_35_0 = true;
    }
    or_event_1541_35_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    playerskintorque_450_instances.clear_saved_selection();
    if (or_temp_result_1541_35_0) {
        dialogbox_566_instances.save_selection();
        playerskintorque_450_instances.save_selection();
    }
    // event 1541_35
    bool or_temp_result_1541_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_dialog_system_dialog_voices_blips_1)) goto or_event_1541_35_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1541_35_1_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto or_event_1541_35_1_end;
        if (!((((Active*)get_single(playerskintorque_450_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1541_35_1_end;
        or_result_1541_35 = true;
        or_temp_result_1541_35_1 = true;
        or_event_1541_35_1_end: ;
        if (or_temp_result_1541_35_1) {
            dialogbox_566_instances.save_selection();
            playerskintorque_450_instances.save_selection();
        }
        if (!or_result_1541_35) goto or_final_or_event_1541_35_1_end;
        dialogbox_566_instances.empty_selection();
        playerskintorque_450_instances.empty_selection();
        if (or_temp_result_1541_35_0 || or_temp_result_1541_35_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1541_35_0 || or_temp_result_1541_35_1) {
            playerskintorque_450_instances.restore_selection();
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1541_35_1_end: ;
}
void Frames::event_func_8305()
{
    // event 1543_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1543_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1543_35_end: ;
}
void Frames::event_func_8306()
{
    // event 1544_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1544_35_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1544_35_end: ;
}
void Frames::event_func_8307()
{
    // event 1545_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1545_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1545_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(1888);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y());
            ((Active*)*it)->set_x(1944);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2860);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1140);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(69);
            ((Active*)*it)->set_direction(0);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(18);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1545_35_end: ;
}
void Frames::event_func_8308()
{
    // event 1546_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1546_35_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1546_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1546_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
    }
    event_1546_35_end: ;
}
void Frames::event_func_8309()
{
    // event 1547_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1547_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_1547_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_1547_35_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)*99+1950)*0.01);
    }
    event_1547_35_end: ;
}
void Frames::event_func_8310()
{
    // event 1548_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1548_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) < (2))) goto event_1548_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1548_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 11);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 2);
    }
    event_1548_35_end: ;
}
void Frames::event_func_8311()
{
    // event 1549_35
    bool or_result_1549_35 = false;
    bool or_temp_result_1549_35_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto or_event_1549_35_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1549_35_0_end;
        or_result_1549_35 = true;
        or_temp_result_1549_35_0 = true;
    }
    or_event_1549_35_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1549_35_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1549_35
    bool or_temp_result_1549_35_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto or_event_1549_35_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1549_35_1_end;
        or_result_1549_35 = true;
        or_temp_result_1549_35_1 = true;
    }
    or_event_1549_35_1_end: ;
    if (or_temp_result_1549_35_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1549_35
    bool or_temp_result_1549_35_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto or_event_1549_35_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1549_35_2_end;
        or_result_1549_35 = true;
        or_temp_result_1549_35_2 = true;
        or_event_1549_35_2_end: ;
        if (or_temp_result_1549_35_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1549_35) goto or_final_or_event_1549_35_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1549_35_0 || or_temp_result_1549_35_1 || or_temp_result_1549_35_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1549_35_2_end: ;
}
void Frames::event_func_8312()
{
    // event 1550_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1550_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1550_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (11))) goto event_1550_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (14))) goto event_1550_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1550_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1550_35_end: ;
}
void Frames::event_func_8313()
{
    // event 1551_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1551_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (12))) goto event_1551_35_end;
        if (once_condition_1551_35) goto event_1551_35_end;
        once_condition_1551_35 = true;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(48);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-14);
        }
    }
    event_1551_35_end: ;
}
void Frames::event_func_8314()
{
    // event 1552_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1552_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1552_35_end;
        if (not_always_1552_35 > loop_count) {
            not_always_1552_35 = loop_count + 2;
            goto event_1552_35_end;
        }
        not_always_1552_35 = loop_count + 2;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1950);
    }
    event_1552_35_end: ;
}
void Frames::event_func_8315()
{
    // event 1553_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1553_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1553_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (14))) goto event_1553_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1553_35_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(72);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-4);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
            ((Active*)*it)->set_x(frame_left()-40);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1553_35_end: ;
}
void Frames::event_func_8316()
{
    // event 1554_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1554_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1554_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (50))) goto event_1554_35_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
    }
    event_1554_35_end: ;
}
void Frames::event_func_8317()
{
    // event 1555_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1555_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1555_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (70))) goto event_1555_35_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1555_35_end: ;
}
void Frames::event_func_8318()
{
    // event 1556_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1556_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1556_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (15))) goto event_1556_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (17))) goto event_1556_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1556_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1556_35_end: ;
}
void Frames::event_func_8319()
{
    // event 1557_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1557_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1557_35_end;
        if (not_always_1557_35 > loop_count) {
            not_always_1557_35 = loop_count + 2;
            goto event_1557_35_end;
        }
        not_always_1557_35 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()+20);
    }
    event_1557_35_end: ;
}
void Frames::event_func_8320()
{
    // event 1558_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1558_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1558_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (17))) goto event_1558_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1558_35_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1558_35_end: ;
}
void Frames::event_func_8321()
{
    // event 1559_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1559_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (18))) goto event_1559_35_end;
        if (not_always_1559_35 > loop_count) {
            not_always_1559_35 = loop_count + 2;
            goto event_1559_35_end;
        }
        not_always_1559_35 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(((Active*)get_instance(dialogbox2_567_instances))->get_y()-20);
    }
    event_1559_35_end: ;
}
void Frames::event_func_8322()
{
    // event 1560_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1560_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1560_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1560_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(63);
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
        }
    }
    event_1560_35_end: ;
}
void Frames::event_func_8323()
{
    // event 1561_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1561_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1561_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (90))) goto event_1561_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(60);
        }
    }
    event_1561_35_end: ;
}
void Frames::event_func_8324()
{
    // event 1562_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1562_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1562_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (105))) goto event_1562_35_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1562_35_end: ;
}
void Frames::event_func_8325()
{
    // event 1563_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1563_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1563_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (18))) goto event_1563_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (21))) goto event_1563_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1563_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1563_35_end: ;
}
void Frames::event_func_8326()
{
    // event 1564_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1564_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (19))) goto event_1564_35_end;
        if (not_always_1564_35 > loop_count) {
            not_always_1564_35 = loop_count + 2;
            goto event_1564_35_end;
        }
        not_always_1564_35 = loop_count + 2;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1564_35_end: ;
}
void Frames::event_func_8327()
{
    // event 1565_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1565_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (20))) goto event_1565_35_end;
        if (!((media.get_channel_position(-1 +20)) > (2500))) goto event_1565_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1565_35_end: ;
}
void Frames::event_func_8328()
{
    // event 1566_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1566_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1566_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (21))) goto event_1566_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1566_35_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1566_35_end: ;
}
void Frames::event_func_8329()
{
    // event 1567_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1567_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1567_35_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->force_speed(35);
        }
    }
    event_1567_35_end: ;
}
void Frames::event_func_8330()
{
    // event 1568_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1568_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1568_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1568_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
    }
    event_1568_35_end: ;
}
void Frames::event_func_8331()
{
    // event 1569_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1569_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1569_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_1569_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1569_35_end: ;
}
void Frames::event_func_8332()
{
    // event 1570_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1570_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1570_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_1570_35_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1570_35_end: ;
}
void Frames::event_func_8333()
{
    // event 1571_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1571_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1571_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (22))) goto event_1571_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1571_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1571_35_end: ;
}
void Frames::event_func_8334()
{
    // event 1572_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1572_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1572_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (23))) goto event_1572_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1572_35_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1572_35_end: ;
}
void Frames::event_func_8335()
{
    // event 1573_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1573_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1573_35_end;
        if (not_always_1573_35 > loop_count) {
            not_always_1573_35 = loop_count + 2;
            goto event_1573_35_end;
        }
        not_always_1573_35 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
            group_pause_1 = false;
    
    }
    event_1573_35_end: ;
}
void Frames::event_func_8336()
{
    // event 1574_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1574_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1574_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1574_35_end: ;
}
void Frames::event_func_8337()
{
    // event 1575_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1575_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1575_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1575_35_end;
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
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1575_35_end: ;
}
void Frames::event_func_8338()
{
    // event 1576_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1576_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1576_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1576_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1576_35_end: ;
}
void Frames::event_func_8339()
{
    // event 1577_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1577_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1577_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1577_35_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 1100);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1051);
            ((Active*)*it)->set_x(829);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(60);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
            ((Active*)*it)->set_x(1500);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)get_instance(shipplatform2_2094_instances, it.current_index, default_active_instance))->get_y()-14);
            ((Active*)*it)->set_x(1050);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->force_frame(4);
            ((Active*)*it)->restore_frame();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1577_35_end: ;
}
void Frames::event_func_8340()
{
    // event 1578_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1578_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1578_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
    }
    event_1578_35_end: ;
}
void Frames::event_func_8341()
{
    // event 1579_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1579_35_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1579_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1579_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1579_35_end: ;
}
void Frames::event_func_8342()
{
    // event 1580_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1580_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1580_35_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1580_35_end: ;
}
void Frames::event_func_8343()
{
    // event 1581_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1581_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1581_35_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()+100))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1581_35_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 26);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1581_35_end: ;
}
void Frames::event_func_8344()
{
    // event 1582_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1582_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1582_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (26))) goto event_1582_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (30))) goto event_1582_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1582_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1582_35_end: ;
}
void Frames::event_func_8345()
{
    // event 1583_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1583_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (27))) goto event_1583_35_end;
        if (not_always_1583_35 > loop_count) {
            not_always_1583_35 = loop_count + 2;
            goto event_1583_35_end;
        }
        not_always_1583_35 = loop_count + 2;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1583_35_end: ;
}
void Frames::event_func_8346()
{
    // event 1584_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1584_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1584_35_end;
        if (not_always_1584_35 > loop_count) {
            not_always_1584_35 = loop_count + 2;
            goto event_1584_35_end;
        }
        not_always_1584_35 = loop_count + 2;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1584_35_end: ;
}
void Frames::event_func_8347()
{
    // event 1585_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1585_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1585_35_end;
        if (!((media.get_channel_position(-1 +20)) > (0))) goto event_1585_35_end;
        if (!((media.get_channel_position(-1 +20)) < (1900))) goto event_1585_35_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(24);
        }
    }
    event_1585_35_end: ;
}
void Frames::event_func_8348()
{
    // event 1586_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1586_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (29))) goto event_1586_35_end;
        if (!((media.get_channel_position(-1 +20)) > (1900))) goto event_1586_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(6, 18);
    }
    event_1586_35_end: ;
}
void Frames::event_func_8349()
{
    // event 1587_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1587_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1587_35_end;
        if (not_always_1587_35 > loop_count) {
            not_always_1587_35 = loop_count + 2;
            goto event_1587_35_end;
        }
        not_always_1587_35 = loop_count + 2;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(18);
        }
    }
    event_1587_35_end: ;
}
void Frames::event_func_8350()
{
    // event 1588_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1588_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1588_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (30))) goto event_1588_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1588_35_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1588_35_end: ;
}
void Frames::event_func_8351()
{
    // event 1589_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1589_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1589_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (40))) goto event_1589_35_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(42);
        }
    }
    event_1589_35_end: ;
}
void Frames::event_func_8352()
{
    // event 1590_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1590_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1590_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1590_35_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1590_35_end: ;
}
void Frames::event_func_8353()
{
    // event 1591_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1591_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1591_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (31))) goto event_1591_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1591_35_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1591_35_end: ;
}
void Frames::event_func_8354()
{
    // event 1592_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1592_35_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1592_35_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (32))) goto event_1592_35_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1592_35_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1592_35_end: ;
}
void Frames::event_func_8355()
{
    // event 1593_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1593_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1593_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1593_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (100))) goto event_1593_35_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(30);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
            ((Active*)*it)->restore_frame();
        }
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1593_35_end: ;
}
void Frames::event_func_8356()
{
    // event 1594_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1594_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1594_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1594_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (100))) goto event_1594_35_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+3);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1594_35_end: ;
}
void Frames::event_func_8357()
{
    // event 1595_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1595_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1595_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (100))) goto event_1595_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (150))) goto event_1595_35_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(1);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-3);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_layer(3-1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
            ((Active*)*it)->force_speed(30);
        }
    }
    event_1595_35_end: ;
}
void Frames::event_func_8358()
{
    // event 1596_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1596_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1596_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (150))) goto event_1596_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (230))) goto event_1596_35_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(0, 2);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 1);
    }
    event_1596_35_end: ;
}
void Frames::event_func_8359()
{
    // event 1597_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1597_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1597_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (270))) goto event_1597_35_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(63);
        }
    }
    event_1597_35_end: ;
}
void Frames::event_func_8360()
{
    // event 1598_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1598_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1598_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_1598_35_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1598_35_end: ;
}
void Frames::event_func_8361()
{
    // event 1599_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1599_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1599_35_end;
        if (not_always_1599_35 > loop_count) {
            not_always_1599_35 = loop_count + 2;
            goto event_1599_35_end;
        }
        not_always_1599_35 = loop_count + 2;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
            group_pause_1 = false;
    
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1599_35_end: ;
}
void Frames::event_func_8362()
{
    // event 1600_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1600_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1600_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1600_35_end;
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
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1600_35_end: ;
}
void Frames::event_func_8363()
{
    // event 1601_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1601_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1601_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1601_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1601_35_end: ;
}
void Frames::event_func_8364()
{
    // event 1602_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_airship_1)) goto event_1602_35_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (16))) goto event_1602_35_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1602_35_end;
        global_values->set(4, 7);
        next_frame = 83 + 0;    
    
    }
    event_1602_35_end: ;
}
void Frames::event_func_8365()
{
    // event 1611_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto event_1611_35_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (60))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_1611_35_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)-100+randrange(201));
            ((Active*)*it)->alterables->values.set(0, 0-randrange(90));
        }
        FrameObject * single_instance_1611_35_0; single_instance_1611_35_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(effectwarning_1065_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickcannonbullet_2050(parent->x + 0, parent->y + -800), parent->layer);
                if (single_instance_1611_35_0 == NULL)
                    single_instance_1611_35_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1611_35_0))->alterables->values.set(0, ((Active*)single_instance_1611_35_0)->get_x());
        ((Active*)((Active*)single_instance_1611_35_0))->alterables->values.set(1, ((Active*)single_instance_1611_35_0)->get_y());
        ((Active*)((Active*)single_instance_1611_35_0))->alterables->values.set(3, 270);
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 60);
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1611_35_end: ;
}
void Frames::event_func_8366()
{
    // event 1612_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto event_1612_35_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_1612_35_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
    }
    event_1612_35_end: ;
}
void Frames::event_func_8367()
{
    // event 1613_35
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1 && group_main_engine_level_specific_methods_bosses_cannon_fire_1)) goto event_1613_35_end;
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!effectwarning_1065_instances.has_selection()) goto event_1613_35_end;
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1613_35_end: ;
}
