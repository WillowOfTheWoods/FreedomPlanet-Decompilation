#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_18602()
{
    // event 810_82
    bool or_result_810_82 = false;
    bool or_temp_result_810_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_810_82_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_810_82_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (12))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_810_82_0_end;
        or_result_810_82 = true;
        or_temp_result_810_82_0 = true;
    }
    or_event_810_82_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_810_82_0) {
        playermovementvalues_245_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 810_82
    bool or_temp_result_810_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_810_82_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_810_82_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) >= (41))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (46))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_810_82_1_end;
        or_result_810_82 = true;
        or_temp_result_810_82_1 = true;
    }
    or_event_810_82_1_end: ;
    if (or_temp_result_810_82_1) {
        playermovementvalues_245_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 810_82
    bool or_temp_result_810_82_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_810_82_2_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_810_82_2_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (12))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_810_82_2_end;
        or_result_810_82 = true;
        or_temp_result_810_82_2 = true;
    }
    or_event_810_82_2_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_810_82_2) {
        playerothers_123_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 810_82
    bool or_temp_result_810_82_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_810_82_3_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_810_82_3_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (48))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_810_82_3_end;
        or_result_810_82 = true;
        or_temp_result_810_82_3 = true;
    }
    or_event_810_82_3_end: ;
    if (or_temp_result_810_82_3) {
        playerothers_123_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 810_82
    bool or_temp_result_810_82_4 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_810_82_4_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_810_82_4_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_810_82_4_end;
        or_result_810_82 = true;
        or_temp_result_810_82_4 = true;
    }
    or_event_810_82_4_end: ;
    if (or_temp_result_810_82_4) {
        playerothers_123_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 810_82
    bool or_temp_result_810_82_5 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_810_82_5_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_810_82_5_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (25))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_810_82_5_end;
        or_result_810_82 = true;
        or_temp_result_810_82_5 = true;
    }
    or_event_810_82_5_end: ;
    if (or_temp_result_810_82_5) {
        playermovementvalues_245_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 810_82
    bool or_temp_result_810_82_6 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_810_82_6_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_810_82_6_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) == (8))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_810_82_6_end;
        or_result_810_82 = true;
        or_temp_result_810_82_6 = true;
        or_event_810_82_6_end: ;
        if (or_temp_result_810_82_6) {
            playerothers_123_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_810_82) goto or_final_or_event_810_82_6_end;
        playerskinmilla_446_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_810_82_2 || or_temp_result_810_82_3 || or_temp_result_810_82_4 || or_temp_result_810_82_6) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_810_82_0 || or_temp_result_810_82_1 || or_temp_result_810_82_5) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_810_82_0 || or_temp_result_810_82_1 || or_temp_result_810_82_2 || or_temp_result_810_82_3 || or_temp_result_810_82_4 || or_temp_result_810_82_5 || or_temp_result_810_82_6) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    or_final_or_event_810_82_6_end: ;
}
void Frames::event_func_18603()
{
    // event 836_82
    bool or_result_836_82 = false;
    bool or_temp_result_836_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_836_82_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) > (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) < (355))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_836_82_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_836_82_0_end;
        or_result_836_82 = true;
        or_temp_result_836_82_0 = true;
    }
    or_event_836_82_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_836_82_0) {
        playermovementvalues_245_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 836_82
    bool or_temp_result_836_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_836_82_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) < (-5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_836_82_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_836_82_1_end;
        or_result_836_82 = true;
        or_temp_result_836_82_1 = true;
    }
    or_event_836_82_1_end: ;
    if (or_temp_result_836_82_1) {
        playermovementvalues_245_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
    }
    // event 836_82
    bool or_temp_result_836_82_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_836_82_2_end;
        if (test_obstacle(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()+16*((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(16), ((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_box_index(3)+2)) goto or_event_836_82_2_end;
        or_result_836_82 = true;
        or_temp_result_836_82_2 = true;
    }
    or_event_836_82_2_end: ;
    // event 836_82
    bool or_temp_result_836_82_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1)) goto or_event_836_82_3_end;
        playersensorbottombig_397_instances.clear_selection();
        playerdig_448_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, playerdig_448_instances)) goto or_event_836_82_3_end;
        or_result_836_82 = true;
        or_temp_result_836_82_3 = true;
        or_event_836_82_3_end: ;
        playersensorbottombig_397_instances.clear_saved_selection();
        playerdig_448_instances.clear_saved_selection();
        if (or_temp_result_836_82_3) {
            playersensorbottombig_397_instances.save_selection();
            playerdig_448_instances.save_selection();
        }
        if (!or_result_836_82) goto or_final_or_event_836_82_3_end;
        playerskinmilla_446_instances.empty_selection();
        playersensorbottombig_397_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerdig_448_instances.empty_selection();
        if (or_temp_result_836_82_3) {
            playersensorbottombig_397_instances.restore_selection();
        }
        if (or_temp_result_836_82_0 || or_temp_result_836_82_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_836_82_3) {
            playerdig_448_instances.restore_selection();
        }
        if (or_temp_result_836_82_0 || or_temp_result_836_82_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(2, 1);
        }
    }
    or_final_or_event_836_82_3_end: ;
}
void Frames::event_func_18604()
{
    // event 1421_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1)) goto event_1421_82_end;
        if (!((playerskinmilla_446_instances.size()) == (0))) goto event_1421_82_end;
        FrameObject * single_instance_1421_82_0; single_instance_1421_82_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerskinmilla_3986(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1421_82_0 == NULL)
                    single_instance_1421_82_0 = new_obj;
            }
        }
    }
    event_1421_82_end: ;
}
void Frames::event_func_18605()
{
    // event 1446_82
    bool or_result_1446_82 = false;
    bool or_temp_result_1446_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1446_82_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1446_82_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1446_82_0_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1446_82_0_end;
        or_result_1446_82 = true;
        or_temp_result_1446_82_0 = true;
    }
    or_event_1446_82_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_1446_82_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 1446_82
    bool or_temp_result_1446_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1446_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1446_82_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_1446_82_1_end;
        if (!((((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1446_82_1_end;
        or_result_1446_82 = true;
        or_temp_result_1446_82_1 = true;
        or_event_1446_82_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1446_82_1) {
            dialogbox_566_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_1446_82) goto or_final_or_event_1446_82_1_end;
        playerskinmilla_446_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1446_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1446_82_0 || or_temp_result_1446_82_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1446_82_1_end: ;
}
void Frames::event_func_18606()
{
    // event 1452_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1452_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1452_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1452_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (0))) goto event_1452_82_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1452_82_end;
        if (!media.is_channel_playing(20-1)) goto event_1452_82_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1452_82_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcshellduck_533_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1452_82_end: ;
}
void Frames::event_func_18607()
{
    // event 1453_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1453_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1453_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1453_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(9)) == (1))) goto event_1453_82_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1453_82_end;
        if (!media.is_channel_playing(20-1)) goto event_1453_82_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1453_82_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+1-get_min(get_floor(media.get_channel_position(-1 +20)*1.8/math_helper/media.get_channel_duration(-1 + 20)), 1));
    }
    event_1453_82_end: ;
}
void Frames::event_func_18608()
{
    // event 1454_82
    bool or_result_1454_82 = false;
    bool or_temp_result_1454_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1454_82_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1454_82_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1454_82_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1454_82_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1454_82_0_end;
        or_result_1454_82 = true;
        or_temp_result_1454_82_0 = true;
    }
    or_event_1454_82_0_end: ;
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1454_82_0) {
        npcshellduck_533_instances.save_selection();
    }
    // event 1454_82
    bool or_temp_result_1454_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1454_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1454_82_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1454_82_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1454_82_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1454_82_1_end;
        or_result_1454_82 = true;
        or_temp_result_1454_82_1 = true;
        or_event_1454_82_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1454_82_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1454_82) goto or_final_or_event_1454_82_1_end;
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1454_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1454_82_0 || or_temp_result_1454_82_1) {
            npcshellduck_533_instances.restore_selection();
        }
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1454_82_1_end: ;
}
void Frames::event_func_18609()
{
    // event 1456_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1456_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1456_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1456_82_end;
        if (!((((Active*)get_instance(npcserpentine_947_instances))->get_direction()%math_helper%16) == (0))) goto event_1456_82_end;
        if (!media.is_channel_playing(20-1)) goto event_1456_82_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1456_82_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcserpentine_947_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1456_82_end: ;
}
void Frames::event_func_18610()
{
    // event 1457_82
    bool or_result_1457_82 = false;
    bool or_temp_result_1457_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1457_82_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1457_82_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1457_82_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1457_82_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1457_82_0_end;
        or_result_1457_82 = true;
        or_temp_result_1457_82_0 = true;
    }
    or_event_1457_82_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    if (or_temp_result_1457_82_0) {
        npcserpentine_947_instances.save_selection();
    }
    // event 1457_82
    bool or_temp_result_1457_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1457_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1457_82_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1457_82_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_direction()%math_helper%16) == (0))) goto or_event_1457_82_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1457_82_1_end;
        or_result_1457_82 = true;
        or_temp_result_1457_82_1 = true;
        or_event_1457_82_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1457_82_1) {
            npcserpentine_947_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1457_82) goto or_final_or_event_1457_82_1_end;
        npcserpentine_947_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1457_82_0 || or_temp_result_1457_82_1) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1457_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1457_82_1_end: ;
}
void Frames::event_func_18611()
{
    // event 1458_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1458_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1458_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (7))) goto event_1458_82_end;
        if (!(((Active*)get_instance(npcgong_634_instances))->test_animation(5))) goto event_1458_82_end;
        if (!media.is_channel_playing(20-1)) goto event_1458_82_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1458_82_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcgong_634_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1458_82_end: ;
}
void Frames::event_func_18612()
{
    // event 1459_82
    bool or_result_1459_82 = false;
    bool or_temp_result_1459_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1459_82_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1459_82_0_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1459_82_0_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1459_82_0_end;
        or_result_1459_82 = true;
        or_temp_result_1459_82_0 = true;
    }
    or_event_1459_82_0_end: ;
    npcgong_634_instances.clear_saved_selection();
    if (or_temp_result_1459_82_0) {
        npcgong_634_instances.save_selection();
    }
    // event 1459_82
    bool or_temp_result_1459_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1459_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (7))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1459_82_1_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1459_82_1_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1459_82_1_end;
        or_result_1459_82 = true;
        or_temp_result_1459_82_1 = true;
        or_event_1459_82_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1459_82_1) {
            dialogbox_566_instances.save_selection();
            npcgong_634_instances.save_selection();
        }
        if (!or_result_1459_82) goto or_final_or_event_1459_82_1_end;
        npcgong_634_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1459_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1459_82_0 || or_temp_result_1459_82_1) {
            npcgong_634_instances.restore_selection();
        }
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1459_82_1_end: ;
}
void Frames::event_func_18613()
{
    // event 1460_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1460_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1460_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (8))) goto event_1460_82_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->test_animation(5))) goto event_1460_82_end;
        if (!media.is_channel_playing(20-1)) goto event_1460_82_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1460_82_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcneera_2464_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1460_82_end: ;
}
void Frames::event_func_18614()
{
    // event 1461_82
    bool or_result_1461_82 = false;
    bool or_temp_result_1461_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1461_82_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1461_82_0_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1461_82_0_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1461_82_0_end;
        or_result_1461_82 = true;
        or_temp_result_1461_82_0 = true;
    }
    or_event_1461_82_0_end: ;
    npcneera_2464_instances.clear_saved_selection();
    if (or_temp_result_1461_82_0) {
        npcneera_2464_instances.save_selection();
    }
    // event 1461_82
    bool or_temp_result_1461_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1461_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (8))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1461_82_1_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1461_82_1_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1461_82_1_end;
        or_result_1461_82 = true;
        or_temp_result_1461_82_1 = true;
        or_event_1461_82_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1461_82_1) {
            dialogbox_566_instances.save_selection();
            npcneera_2464_instances.save_selection();
        }
        if (!or_result_1461_82) goto or_final_or_event_1461_82_1_end;
        dialogbox_566_instances.empty_selection();
        npcneera_2464_instances.empty_selection();
        if (or_temp_result_1461_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1461_82_0 || or_temp_result_1461_82_1) {
            npcneera_2464_instances.restore_selection();
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1461_82_1_end: ;
}
void Frames::event_func_18615()
{
    // event 1462_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1462_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1462_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (9))) goto event_1462_82_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->test_animation(5))) goto event_1462_82_end;
        ((Active*)get_instance(themagister_2115_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6));
    }
    event_1462_82_end: ;
}
void Frames::event_func_18616()
{
    // event 1463_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1463_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1463_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (10))) goto event_1463_82_end;
        if (!(((Active*)get_instance(npcmayor_3950_instances))->test_animation(5))) goto event_1463_82_end;
        if (!media.is_channel_playing(20-1)) goto event_1463_82_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1463_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcmayor_3950_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1463_82_end: ;
}
void Frames::event_func_18617()
{
    // event 1464_82
    bool or_result_1464_82 = false;
    bool or_temp_result_1464_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1464_82_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1464_82_0_end;
        npcmayor_3950_instances.clear_selection();
        for (ObjectIterator it(npcmayor_3950_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcmayor_3950_instances.has_selection()) goto or_event_1464_82_0_end;
        if (!((((Active*)get_single(npcmayor_3950_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1464_82_0_end;
        or_result_1464_82 = true;
        or_temp_result_1464_82_0 = true;
    }
    or_event_1464_82_0_end: ;
    npcmayor_3950_instances.clear_saved_selection();
    if (or_temp_result_1464_82_0) {
        npcmayor_3950_instances.save_selection();
    }
    // event 1464_82
    bool or_temp_result_1464_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1464_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (10))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1464_82_1_end;
        npcmayor_3950_instances.clear_selection();
        for (ObjectIterator it(npcmayor_3950_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcmayor_3950_instances.has_selection()) goto or_event_1464_82_1_end;
        if (!((((Active*)get_single(npcmayor_3950_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1464_82_1_end;
        or_result_1464_82 = true;
        or_temp_result_1464_82_1 = true;
        or_event_1464_82_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1464_82_1) {
            dialogbox_566_instances.save_selection();
            npcmayor_3950_instances.save_selection();
        }
        if (!or_result_1464_82) goto or_final_or_event_1464_82_1_end;
        npcmayor_3950_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1464_82_0 || or_temp_result_1464_82_1) {
            npcmayor_3950_instances.restore_selection();
        }
        if (or_temp_result_1464_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcmayor_3950_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1464_82_1_end: ;
}
void Frames::event_func_18618()
{
    // event 1465_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1465_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1465_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (11))) goto event_1465_82_end;
        if (!(((Active*)get_instance(npcdail_4017_instances))->test_animation(5))) goto event_1465_82_end;
        if (!media.is_channel_playing(20-1)) goto event_1465_82_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1465_82_end;
        ((Active*)get_instance(npcdail_4017_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcdail_4017_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1465_82_end: ;
}
void Frames::event_func_18619()
{
    // event 1466_82
    bool or_result_1466_82 = false;
    bool or_temp_result_1466_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1466_82_0_end;
        if (!(!media.is_channel_playing(20-1))) goto or_event_1466_82_0_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcdail_4017_instances.has_selection()) goto or_event_1466_82_0_end;
        if (!((((Active*)get_single(npcdail_4017_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1466_82_0_end;
        or_result_1466_82 = true;
        or_temp_result_1466_82_0 = true;
    }
    or_event_1466_82_0_end: ;
    npcdail_4017_instances.clear_saved_selection();
    if (or_temp_result_1466_82_0) {
        npcdail_4017_instances.save_selection();
    }
    // event 1466_82
    bool or_temp_result_1466_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto or_event_1466_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (11))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1466_82_1_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcdail_4017_instances.has_selection()) goto or_event_1466_82_1_end;
        if (!((((Active*)get_single(npcdail_4017_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1466_82_1_end;
        or_result_1466_82 = true;
        or_temp_result_1466_82_1 = true;
        or_event_1466_82_1_end: ;
        dialogbox_566_instances.clear_saved_selection();
        if (or_temp_result_1466_82_1) {
            npcdail_4017_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1466_82) goto or_final_or_event_1466_82_1_end;
        npcdail_4017_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1466_82_0 || or_temp_result_1466_82_1) {
            npcdail_4017_instances.restore_selection();
        }
        if (or_temp_result_1466_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1466_82_1_end: ;
}
void Frames::event_func_18620()
{
    // event 1467_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_voice_acting_1)) goto event_1467_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1467_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (12))) goto event_1467_82_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1467_82_end;
        if (!media.is_channel_playing(20-1)) goto event_1467_82_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_1467_82_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%4);
        }
    }
    event_1467_82_end: ;
}
void Frames::event_func_18621()
{
    // event 1485_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1485_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1485_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (5))) goto event_1485_82_end;
        if (!(((Active*)get_instance(npcshellduck_533_instances))->test_animation(5))) goto event_1485_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1485_82_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1485_82_end;
        ((Active*)get_instance(npcshellduck_533_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcshellduck_533_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1485_82_end: ;
}
void Frames::event_func_18622()
{
    // event 1486_82
    bool or_result_1486_82 = false;
    bool or_temp_result_1486_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1486_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1486_82_0_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1486_82_0_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1486_82_0_end;
        or_result_1486_82 = true;
        or_temp_result_1486_82_0 = true;
    }
    or_event_1486_82_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcshellduck_533_instances.clear_saved_selection();
    if (or_temp_result_1486_82_0) {
        dialogbox_566_instances.save_selection();
        npcshellduck_533_instances.save_selection();
    }
    // event 1486_82
    bool or_temp_result_1486_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1486_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (5))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1486_82_1_end;
        npcshellduck_533_instances.clear_selection();
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcshellduck_533_instances.has_selection()) goto or_event_1486_82_1_end;
        if (!((((Active*)get_single(npcshellduck_533_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1486_82_1_end;
        or_result_1486_82 = true;
        or_temp_result_1486_82_1 = true;
        or_event_1486_82_1_end: ;
        if (or_temp_result_1486_82_1) {
            dialogbox_566_instances.save_selection();
            npcshellduck_533_instances.save_selection();
        }
        if (!or_result_1486_82) goto or_final_or_event_1486_82_1_end;
        npcshellduck_533_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1486_82_0 || or_temp_result_1486_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1486_82_0 || or_temp_result_1486_82_1) {
            npcshellduck_533_instances.restore_selection();
        }
        for (ObjectIterator it(npcshellduck_533_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1486_82_1_end: ;
}
void Frames::event_func_18623()
{
    // event 1487_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1487_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1487_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (6))) goto event_1487_82_end;
        if (!(((Active*)get_instance(npcserpentine_947_instances))->test_animation(5))) goto event_1487_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1487_82_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1487_82_end;
        ((Active*)get_instance(npcserpentine_947_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcserpentine_947_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1487_82_end: ;
}
void Frames::event_func_18624()
{
    // event 1488_82
    bool or_result_1488_82 = false;
    bool or_temp_result_1488_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1488_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1488_82_0_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1488_82_0_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1488_82_0_end;
        or_result_1488_82 = true;
        or_temp_result_1488_82_0 = true;
    }
    or_event_1488_82_0_end: ;
    npcserpentine_947_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1488_82_0) {
        npcserpentine_947_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1488_82
    bool or_temp_result_1488_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1488_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1488_82_1_end;
        npcserpentine_947_instances.clear_selection();
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcserpentine_947_instances.has_selection()) goto or_event_1488_82_1_end;
        if (!((((Active*)get_single(npcserpentine_947_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1488_82_1_end;
        or_result_1488_82 = true;
        or_temp_result_1488_82_1 = true;
        or_event_1488_82_1_end: ;
        if (or_temp_result_1488_82_1) {
            npcserpentine_947_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1488_82) goto or_final_or_event_1488_82_1_end;
        npcserpentine_947_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1488_82_0 || or_temp_result_1488_82_1) {
            npcserpentine_947_instances.restore_selection();
        }
        if (or_temp_result_1488_82_0 || or_temp_result_1488_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcserpentine_947_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1488_82_1_end: ;
}
void Frames::event_func_18625()
{
    // event 1489_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1489_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1489_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (7))) goto event_1489_82_end;
        if (!(((Active*)get_instance(npcgong_634_instances))->test_animation(5))) goto event_1489_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1489_82_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1489_82_end;
        ((Active*)get_instance(npcgong_634_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcgong_634_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1489_82_end: ;
}
void Frames::event_func_18626()
{
    // event 1490_82
    bool or_result_1490_82 = false;
    bool or_temp_result_1490_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1490_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1490_82_0_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1490_82_0_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1490_82_0_end;
        or_result_1490_82 = true;
        or_temp_result_1490_82_0 = true;
    }
    or_event_1490_82_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcgong_634_instances.clear_saved_selection();
    if (or_temp_result_1490_82_0) {
        dialogbox_566_instances.save_selection();
        npcgong_634_instances.save_selection();
    }
    // event 1490_82
    bool or_temp_result_1490_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1490_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (7))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1490_82_1_end;
        npcgong_634_instances.clear_selection();
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcgong_634_instances.has_selection()) goto or_event_1490_82_1_end;
        if (!((((Active*)get_single(npcgong_634_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1490_82_1_end;
        or_result_1490_82 = true;
        or_temp_result_1490_82_1 = true;
        or_event_1490_82_1_end: ;
        if (or_temp_result_1490_82_1) {
            dialogbox_566_instances.save_selection();
            npcgong_634_instances.save_selection();
        }
        if (!or_result_1490_82) goto or_final_or_event_1490_82_1_end;
        npcgong_634_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1490_82_0 || or_temp_result_1490_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1490_82_0 || or_temp_result_1490_82_1) {
            npcgong_634_instances.restore_selection();
        }
        for (ObjectIterator it(npcgong_634_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1490_82_1_end: ;
}
void Frames::event_func_18627()
{
    // event 1491_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1491_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1491_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (8))) goto event_1491_82_end;
        if (!(((Active*)get_instance(npcneera_2464_instances))->test_animation(5))) goto event_1491_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1491_82_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1491_82_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcneera_2464_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1491_82_end: ;
}
void Frames::event_func_18628()
{
    // event 1492_82
    bool or_result_1492_82 = false;
    bool or_temp_result_1492_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1492_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1492_82_0_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1492_82_0_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1492_82_0_end;
        or_result_1492_82 = true;
        or_temp_result_1492_82_0 = true;
    }
    or_event_1492_82_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcneera_2464_instances.clear_saved_selection();
    if (or_temp_result_1492_82_0) {
        dialogbox_566_instances.save_selection();
        npcneera_2464_instances.save_selection();
    }
    // event 1492_82
    bool or_temp_result_1492_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1492_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (8))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1492_82_1_end;
        npcneera_2464_instances.clear_selection();
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcneera_2464_instances.has_selection()) goto or_event_1492_82_1_end;
        if (!((((Active*)get_single(npcneera_2464_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1492_82_1_end;
        or_result_1492_82 = true;
        or_temp_result_1492_82_1 = true;
        or_event_1492_82_1_end: ;
        if (or_temp_result_1492_82_1) {
            dialogbox_566_instances.save_selection();
            npcneera_2464_instances.save_selection();
        }
        if (!or_result_1492_82) goto or_final_or_event_1492_82_1_end;
        dialogbox_566_instances.empty_selection();
        npcneera_2464_instances.empty_selection();
        if (or_temp_result_1492_82_0 || or_temp_result_1492_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1492_82_0 || or_temp_result_1492_82_1) {
            npcneera_2464_instances.restore_selection();
        }
        for (ObjectIterator it(npcneera_2464_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1492_82_1_end: ;
}
void Frames::event_func_18629()
{
    // event 1493_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1493_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1493_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (9))) goto event_1493_82_end;
        if (!(((Active*)get_instance(themagister_2115_instances))->test_animation(5))) goto event_1493_82_end;
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6));
    }
    event_1493_82_end: ;
}
void Frames::event_func_18630()
{
    // event 1494_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1494_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1494_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (10))) goto event_1494_82_end;
        if (!(((Active*)get_instance(npcmayor_3950_instances))->test_animation(5))) goto event_1494_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1494_82_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1494_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcmayor_3950_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1494_82_end: ;
}
void Frames::event_func_18631()
{
    // event 1495_82
    bool or_result_1495_82 = false;
    bool or_temp_result_1495_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1495_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1495_82_0_end;
        npcmayor_3950_instances.clear_selection();
        for (ObjectIterator it(npcmayor_3950_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcmayor_3950_instances.has_selection()) goto or_event_1495_82_0_end;
        if (!((((Active*)get_single(npcmayor_3950_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1495_82_0_end;
        or_result_1495_82 = true;
        or_temp_result_1495_82_0 = true;
    }
    or_event_1495_82_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    npcmayor_3950_instances.clear_saved_selection();
    if (or_temp_result_1495_82_0) {
        dialogbox_566_instances.save_selection();
        npcmayor_3950_instances.save_selection();
    }
    // event 1495_82
    bool or_temp_result_1495_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1495_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (10))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1495_82_1_end;
        npcmayor_3950_instances.clear_selection();
        for (ObjectIterator it(npcmayor_3950_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcmayor_3950_instances.has_selection()) goto or_event_1495_82_1_end;
        if (!((((Active*)get_single(npcmayor_3950_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1495_82_1_end;
        or_result_1495_82 = true;
        or_temp_result_1495_82_1 = true;
        or_event_1495_82_1_end: ;
        if (or_temp_result_1495_82_1) {
            dialogbox_566_instances.save_selection();
            npcmayor_3950_instances.save_selection();
        }
        if (!or_result_1495_82) goto or_final_or_event_1495_82_1_end;
        npcmayor_3950_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1495_82_0 || or_temp_result_1495_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        if (or_temp_result_1495_82_0 || or_temp_result_1495_82_1) {
            npcmayor_3950_instances.restore_selection();
        }
        for (ObjectIterator it(npcmayor_3950_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1495_82_1_end: ;
}
void Frames::event_func_18632()
{
    // event 1496_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1496_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1496_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (11))) goto event_1496_82_end;
        if (!(((Active*)get_instance(npcdail_4017_instances))->test_animation(5))) goto event_1496_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1496_82_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1496_82_end;
        ((Active*)get_instance(npcdail_4017_instances))->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)get_instance(npcdail_4017_instances))->get_frame()+1+randrange(2))%math_helper%3);
    }
    event_1496_82_end: ;
}
void Frames::event_func_18633()
{
    // event 1497_82
    bool or_result_1497_82 = false;
    bool or_temp_result_1497_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1497_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (((Active*)*it)->alterables->values.get(1)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1497_82_0_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcdail_4017_instances.has_selection()) goto or_event_1497_82_0_end;
        if (!((((Active*)get_single(npcdail_4017_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1497_82_0_end;
        or_result_1497_82 = true;
        or_temp_result_1497_82_0 = true;
    }
    or_event_1497_82_0_end: ;
    npcdail_4017_instances.clear_saved_selection();
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1497_82_0) {
        npcdail_4017_instances.save_selection();
        dialogbox_566_instances.save_selection();
    }
    // event 1497_82
    bool or_temp_result_1497_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto or_event_1497_82_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (11))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1497_82_1_end;
        npcdail_4017_instances.clear_selection();
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!npcdail_4017_instances.has_selection()) goto or_event_1497_82_1_end;
        if (!((((Active*)get_single(npcdail_4017_instances, default_active_instance))->get_frame()%math_helper%3) > (0))) goto or_event_1497_82_1_end;
        or_result_1497_82 = true;
        or_temp_result_1497_82_1 = true;
        or_event_1497_82_1_end: ;
        if (or_temp_result_1497_82_1) {
            npcdail_4017_instances.save_selection();
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1497_82) goto or_final_or_event_1497_82_1_end;
        npcdail_4017_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1497_82_0 || or_temp_result_1497_82_1) {
            npcdail_4017_instances.restore_selection();
        }
        if (or_temp_result_1497_82_0 || or_temp_result_1497_82_1) {
            dialogbox_566_instances.restore_selection();
        }
        for (ObjectIterator it(npcdail_4017_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)*it)->get_frame()-1);
        }
    }
    or_final_or_event_1497_82_1_end: ;
}
void Frames::event_func_18634()
{
    // event 1498_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_1 && group_main_engine_level_specific_methods_cutscenes_dialog_system_dialog_voices_blips_1)) goto event_1498_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(5)) > (0))) goto event_1498_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(3)) == (12))) goto event_1498_82_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(5))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1498_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) < (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1498_82_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_1498_82_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(6)+(((Active*)*it)->get_frame()+1+randrange(2))%math_helper%4);
        }
    }
    event_1498_82_end: ;
}
void Frames::event_func_18635()
{
    // event 1507_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1507_82_end;
        if (!((global_values->get(3)) > (5))) goto event_1507_82_end;
        if (once_condition_1507_82) goto event_1507_82_end;
        once_condition_1507_82 = true;
        ((TextBlitter*)get_instance(locationname_25_instances))->load(str_data_font_bmp_7);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->strings.set(0, str_shuigang_snowfields_299+newline_character+str_north_avalice_300);
        ((TextBlitter*)get_instance(locationname_25_instances))->alterables->flags.enable(0);
    }
    event_1507_82_end: ;
}
void Frames::event_func_18636()
{
    // event 1508_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1508_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1508_82_end;
        if (once_condition_1508_82) goto event_1508_82_end;
        once_condition_1508_82 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, width-global_values->get(16)*0.5-8);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height-global_values->get(17)*0.5-8);
        {
            loop_jeeps_running = true;
            int times = int(10);
            loop_jeeps_index = 0;
            while (loop_jeeps_index < times) {
                loop_jeeps_82();
                if (!loop_jeeps_running) break;
                loop_jeeps_index++;
            }
        }
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        ((Active*)get_instance(npcgong_634_instances))->set_layer(3-1);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(3-1);
        }
        ((Active*)get_instance(playerassistcopilot_2219_instances))->set_direction(20);
        ((Active*)get_instance(npcgong_634_instances))->set_direction(16);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        ((Active*)get_instance(gongshield_633_instances))->set_layer(3-1);
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(2-1, 500);
    }
    event_1508_82_end: ;
}
void Frames::event_func_18637()
{
    // event 1509_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1509_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1509_82_end;
        if (!((global_values->get(1)) == (0))) goto event_1509_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 6);
        ((Active*)get_instance(playerassistcopilot_2219_instances))->set_visible(false);
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(16);
        }
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3480);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 128);
        }
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(2-1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
        }
        ((Active*)get_instance(npcgong_634_instances))->move_front();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_layer(4-1);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_layer(4-1);
        }
    }
    event_1509_82_end: ;
}
void Frames::event_func_18638()
{
    // event 1511_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1511_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1511_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-48);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1161);
            ((Active*)*it)->set_x(-128);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1511_82_end: ;
}
void Frames::event_func_18639()
{
    // event 1512_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1512_82_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1512_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1512_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1512_82_end: ;
}
void Frames::event_func_18640()
{
    // event 1513_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1513_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1513_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
    }
    event_1513_82_end: ;
}
void Frames::event_func_18641()
{
    // event 1514_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1514_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1514_82_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(5, 4950-((Active*)*it)->alterables->values.get(4)*100);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->alterables->values.get(4)*10);
            ((Active*)*it)->alterables->flags.enable(3);
        }
    }
    event_1514_82_end: ;
}
void Frames::event_func_18642()
{
    // event 1515_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1515_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1)+randrange(get_max(0, get_min(get_abs(((Active*)*it)->alterables->values.get(3)), 3))));
        }
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances, it.current_index));
            if (parent == NULL) goto pos_end_1515_82_0;
            ((Active*)*it)->set_global_position(parent->get_x() + -64, parent->get_y() + 37);
            pos_end_1515_82_0: ;
        }
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(jeepbase_3991_instances, it.current_index, default_active_instance))->alterables->values.get(2), 0);
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances, it.current_index));
            if (parent == NULL) goto pos_end_1515_82_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 64, parent->get_y() + 37);
            pos_end_1515_82_1: ;
        }
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(jeepbase_3991_instances, it.current_index, default_active_instance))->alterables->values.get(2), 0);
        }
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, ((Active*)*it)->alterables->values.get(3)*-3);
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(3));
        }
        {
            ObjectIterator other_it(jeepbase_3991_instances);
            for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1515_82_2_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1515_82_2_end: ;
        {
            ObjectIterator other_it(jeepbase_3991_instances);
            for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
                if (other_it.end()) goto action_1515_82_3_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_1515_82_3_end: ;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1515_82_end: ;
}
void Frames::event_func_18643()
{
    // event 1516_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1516_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (8))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1516_82_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(17);
        }
    }
    event_1516_82_end: ;
}
void Frames::event_func_18644()
{
    // event 1517_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1517_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (100))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1517_82_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 50-randrange(100));
            ((Active*)*it)->force_frame(randrange(4));
        }
    }
    event_1517_82_end: ;
}
void Frames::event_func_18645()
{
    // event 1518_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1518_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1518_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (frame_left()+550))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1518_82_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        media.play_id(SOUND_SCENE_JEEPSTOP_435, -1, 1);
    }
    event_1518_82_end: ;
}
void Frames::event_func_18646()
{
    // event 1519_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1519_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (((Active*)*it)->alterables->values.get(5)))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1519_82_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1519_82_end: ;
}
void Frames::event_func_18647()
{
    // event 1520_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1520_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1520_82_end;
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, get_min(((Active*)*it)->alterables->values.get(3)+0.1, 0));
        }
    }
    event_1520_82_end: ;
}
void Frames::event_func_18648()
{
    // event 1521_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1521_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1521_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1521_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -15);
        }
    }
    event_1521_82_end: ;
}
void Frames::event_func_18649()
{
    // event 1522_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1522_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1522_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1522_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0), ((Active*)get_single(jeepbase_3991_instances, default_active_instance))->get_x()));
        {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances));
            if (parent == NULL) goto pos_end_1522_82_0;
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(parent->get_x() + 8, parent->get_y() + 0);
            pos_end_1522_82_0: ;
        }
        ((Active*)get_instance(npcgong_634_instances))->move_back(((Active*)get_single(jeepbase_3991_instances)));
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances, it.current_index));
            if (parent == NULL) goto pos_end_1522_82_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 68, parent->get_y() + -30);
            pos_end_1522_82_1: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(33);
        }
        {
            FrameObject * parent = ((Active*)get_single(jeepbase_3991_instances));
            if (parent == NULL) goto pos_end_1522_82_2;
            ((Active*)get_instance(playerassistcopilot_2219_instances))->set_global_position(parent->get_x() + 64, parent->get_y() + -4);
            pos_end_1522_82_2: ;
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        ((Active*)get_instance(playerassistcopilot_2219_instances))->set_visible(true);
        ((Active*)get_instance(playerassistcopilot_2219_instances))->move_front(((Active*)get_single(jeepbase_3991_instances)));
    }
    event_1522_82_end: ;
}
void Frames::event_func_18650()
{
    // event 1523_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1523_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1523_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (width))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (-5))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1523_82_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->force_animation(10);
        ((Active*)get_instance(playerassistcopilot_2219_instances))->set_direction(4);
        ((Active*)get_instance(playerassistcopilot_2219_instances))->force_frame(0);
    }
    event_1523_82_end: ;
}
void Frames::event_func_18651()
{
    // event 1524_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1524_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1524_82_end;
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (width))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (0))) { it.deselect(); continue; }
        }
        if (!jeepbase_3991_instances.has_selection()) goto event_1524_82_end;
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
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1524_82_end: ;
}
void Frames::event_func_18652()
{
    // event 1525_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1525_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1525_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
    }
    event_1525_82_end: ;
}
void Frames::event_func_18653()
{
    // event 1526_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1526_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1526_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1526_82_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_y(2-1, 0);
    }
    event_1526_82_end: ;
}
void Frames::event_func_18654()
{
    // event 1527_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1527_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1527_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1527_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3860);
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(gongshield_633_instances))->set_layer(2-1);
        ((Active*)get_instance(npcgong_634_instances))->set_layer(2-1);
        {
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(3895, 1489);
            pos_end_1527_82_0: ;
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_layer(4-1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_layer(4-1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_layer(4-1);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1527_82_end: ;
}
void Frames::event_func_18655()
{
    // event 1528_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1528_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1528_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
        ((Active*)get_instance(gongshield_633_instances))->move_back();
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()-40);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()-70);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()-100);
        }
        {
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(3895, 1489);
            pos_end_1528_82_0: ;
        }
    }
    event_1528_82_end: ;
}
void Frames::event_func_18656()
{
    // event 1529_82
    bool or_result_1529_82 = false;
    bool or_temp_result_1529_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto or_event_1529_82_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1529_82_0_end;
        or_result_1529_82 = true;
        or_temp_result_1529_82_0 = true;
    }
    or_event_1529_82_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1529_82_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1529_82
    bool or_temp_result_1529_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto or_event_1529_82_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1529_82_1_end;
        or_result_1529_82 = true;
        or_temp_result_1529_82_1 = true;
    }
    or_event_1529_82_1_end: ;
    if (or_temp_result_1529_82_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1529_82
    bool or_temp_result_1529_82_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto or_event_1529_82_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1529_82_2_end;
        or_result_1529_82 = true;
        or_temp_result_1529_82_2 = true;
        or_event_1529_82_2_end: ;
        if (or_temp_result_1529_82_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1529_82) goto or_final_or_event_1529_82_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1529_82_0 || or_temp_result_1529_82_1 || or_temp_result_1529_82_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1529_82_2_end: ;
}
void Frames::event_func_18657()
{
    // event 1530_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1530_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1530_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1530_82_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1530_82_end: ;
}
void Frames::event_func_18658()
{
    // event 1531_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1531_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1531_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (0))) goto event_1531_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1531_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1531_82_end: ;
}
void Frames::event_func_18659()
{
    // event 1532_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1532_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1532_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (1))) goto event_1532_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1532_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1532_82_end: ;
}
void Frames::event_func_18660()
{
    // event 1533_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1533_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1533_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (20))) goto event_1533_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1533_82_end: ;
}
void Frames::event_func_18661()
{
    // event 1534_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1534_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1534_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1534_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1534_82_end: ;
}
void Frames::event_func_18662()
{
    // event 1535_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1535_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1535_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (40))) goto event_1535_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1535_82_end: ;
}
void Frames::event_func_18663()
{
    // event 1536_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1536_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1536_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (35))) goto event_1536_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
    }
    event_1536_82_end: ;
}
void Frames::event_func_18664()
{
    // event 1537_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1537_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1537_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (50))) goto event_1537_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1537_82_end: ;
}
void Frames::event_func_18665()
{
    // event 1538_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1538_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1538_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_1538_82_end;
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
    event_1538_82_end: ;
}
void Frames::event_func_18666()
{
    // event 1539_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1539_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1539_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_1539_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
    }
    event_1539_82_end: ;
}
void Frames::event_func_18667()
{
    // event 1540_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1540_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1540_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1540_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (100))) goto event_1540_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3480);
        jeepbase_3991_instances.clear_selection();
        for (ObjectIterator it(jeepbase_3991_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        jeepwheel1_3992_instances.clear_selection();
        for (ObjectIterator it(jeepwheel1_3992_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        jeepwheel2_3993_instances.clear_selection();
        for (ObjectIterator it(jeepwheel2_3993_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(gongshield_633_instances))->set_layer(2-1);
        ((Active*)get_instance(npcgong_634_instances))->set_layer(2-1);
        {
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(3895, 1489);
            pos_end_1540_82_0: ;
        }
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        ((Active*)get_instance(playerassistcopilot_2219_instances))->set_visible(false);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(false);
    }
    event_1540_82_end: ;
}
void Frames::event_func_18668()
{
    // event 1541_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1541_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1541_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -4);
        }
        ((Active*)get_instance(gongshield_633_instances))->move_back();
        {
            ((Active*)get_instance(npcgong_634_instances))->set_global_position(3895, 1489);
            pos_end_1541_82_0: ;
        }
    }
    event_1541_82_end: ;
}
void Frames::event_func_18669()
{
    // event 1542_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1542_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1542_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1542_82_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(3700);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(3750);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(3830);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
        }
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(true);
    }
    event_1542_82_end: ;
}
void Frames::event_func_18670()
{
    // event 1543_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1543_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1543_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (90))) goto event_1543_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1543_82_end: ;
}
void Frames::event_func_18671()
{
    // event 1544_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1544_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1544_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (85))) goto event_1544_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1544_82_end: ;
}
void Frames::event_func_18672()
{
    // event 1545_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1545_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1545_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (84))) goto event_1545_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
        }
    }
    event_1545_82_end: ;
}
void Frames::event_func_18673()
{
    // event 1546_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1546_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1546_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1546_82_end;
        media.play_id(SOUND_SCENE_TRUCKSTOP_2_425, -1, 1);
    }
    event_1546_82_end: ;
}
void Frames::event_func_18674()
{
    // event 1547_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1547_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1547_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1547_82_end;
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, ((LayerObject*)get_instance(layerobject_10_instances))->get_x(-1 + 2)+16);
        caravanwheel_1386_instances.clear_selection();
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-10, 0);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 3);
    }
    event_1547_82_end: ;
}
void Frames::event_func_18675()
{
    // event 1548_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1548_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1548_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (84))) goto event_1548_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(21);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1548_82_end: ;
}
void Frames::event_func_18676()
{
    // event 1549_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1549_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1549_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (85))) goto event_1549_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(3);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1549_82_end: ;
}
void Frames::event_func_18677()
{
    // event 1550_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1550_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1550_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (90))) goto event_1550_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(58);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1550_82_end: ;
}
void Frames::event_func_18678()
{
    // event 1551_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1551_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1551_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (120))) goto event_1551_82_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_22_01_ogg_192, 29-1);
    }
    event_1551_82_end: ;
}
void Frames::event_func_18679()
{
    // event 1552_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1552_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1552_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (120))) goto event_1552_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(40);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
    }
    event_1552_82_end: ;
}
void Frames::event_func_18680()
{
    // event 1553_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1553_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1553_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (140))) goto event_1553_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(40);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
    }
    event_1553_82_end: ;
}
void Frames::event_func_18681()
{
    // event 1554_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1554_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1554_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (150))) goto event_1554_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(40);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+6);
        }
    }
    event_1554_82_end: ;
}
void Frames::event_func_18682()
{
    // event 1555_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1555_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1555_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (250))) goto event_1555_82_end;
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
    event_1555_82_end: ;
}
void Frames::event_func_18683()
{
    // event 1556_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1556_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1556_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (250))) goto event_1556_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 4);
        }
    }
    event_1556_82_end: ;
}
void Frames::event_func_18684()
{
    // event 1557_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1557_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1557_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (250))) goto event_1557_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1557_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3160);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(npcgong_634_instances))->set_y(1514);
        ((Active*)get_instance(npcgong_634_instances))->set_layer(4-1);
        ((Active*)get_instance(gongshield_633_instances))->set_layer(4-1);
        ((Active*)get_instance(npcmayor_3950_instances))->set_y(1514);
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(2900);
        ((LayerObject*)get_instance(layerobject_10_instances))->set_x(2-1, 0);
        media.stop_sample(SOUND_SCENE_TRUCKSTOP_2_425);
        {
            loop_sttroops_running = true;
            int times = int(30);
            loop_sttroops_index = 0;
            while (loop_sttroops_index < times) {
                loop_sttroops_82();
                if (!loop_sttroops_running) break;
                loop_sttroops_index++;
            }
        }
        ((Active*)get_instance(npcgong_634_instances))->set_x(3780);
        ((Active*)get_instance(npcshellduck_533_instances))->set_visible(false);
    }
    event_1557_82_end: ;
}
void Frames::event_func_18685()
{
    // event 1559_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1559_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1559_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -4);
        }
        ((Active*)get_instance(gongshield_633_instances))->move_back();
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1513);
        }
        npcshieldguard_3994_instances.clear_selection();
        for (ObjectIterator it(npcshieldguard_3994_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
    }
    event_1559_82_end: ;
}
void Frames::event_func_18686()
{
    // event 1560_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1560_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1560_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1560_82_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->force_frame(randrange(6));
        }
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(1);
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(4-1);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->move_back();
        }
    }
    event_1560_82_end: ;
}
void Frames::event_func_18687()
{
    // event 1561_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1561_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1561_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()+5);
    }
    event_1561_82_end: ;
}
void Frames::event_func_18688()
{
    // event 1562_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1562_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1562_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (11))) goto event_1562_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (10))) goto event_1562_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
    }
    event_1562_82_end: ;
}
void Frames::event_func_18689()
{
    // event 1563_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1563_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (10))) goto event_1563_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (11))) goto event_1563_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (10))) goto event_1563_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1563_82_end: ;
}
void Frames::event_func_18690()
{
    // event 1564_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1564_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (9))) goto event_1564_82_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_x()) >= (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)))) goto event_1564_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(21);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1564_82_end: ;
}
void Frames::event_func_18691()
{
    // event 1565_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1565_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1565_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (2))) goto event_1565_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1565_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        media.stop_channel(20-1);
    }
    event_1565_82_end: ;
}
void Frames::event_func_18692()
{
    // event 1566_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1566_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1566_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 10);
    }
    event_1566_82_end: ;
}
void Frames::event_func_18693()
{
    // event 1567_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1567_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (11))) goto event_1567_82_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) >= (3680))) goto event_1567_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->force_frame(randrange(6));
        }
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(1);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_frame();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
    }
    event_1567_82_end: ;
}
void Frames::event_func_18694()
{
    // event 1568_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1568_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1568_82_end;
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
        }
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()+5);
    }
    event_1568_82_end: ;
}
void Frames::event_func_18695()
{
    // event 1569_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1569_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1569_82_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_x()) >= (3580))) goto event_1569_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(0);
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcgong_634_instances))->force_animation(1);
        ((Active*)get_instance(npcgong_634_instances))->restore_frame();
        ((Active*)get_instance(npcgong_634_instances))->force_speed(18);
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1569_82_end: ;
}
void Frames::event_func_18696()
{
    // event 1570_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1570_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1570_82_end;
        ((Active*)get_instance(npcgong_634_instances))->set_x(((Active*)get_instance(npcgong_634_instances))->get_x()-2);
    }
    event_1570_82_end: ;
}
void Frames::event_func_18697()
{
    // event 1571_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1571_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1571_82_end;
        if (!((((Active*)get_instance(npcgong_634_instances))->get_x()) <= (3680+25))) goto event_1571_82_end;
        ((Active*)get_instance(npcgong_634_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(1);
        ((Active*)get_instance(npcmayor_3950_instances))->restore_frame();
        ((Active*)get_instance(npcmayor_3950_instances))->restore_speed();
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcmayor_3950_instances))->force_speed(35);
    }
    event_1571_82_end: ;
}
void Frames::event_func_18698()
{
    // event 1572_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1572_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1572_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x()+2);
    }
    event_1572_82_end: ;
}
void Frames::event_func_18699()
{
    // event 1573_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1573_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1573_82_end;
        if (!((((Active*)get_instance(npcmayor_3950_instances))->get_x()) >= (3680-25))) goto event_1573_82_end;
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(zaosnowmound_4007_instances))->set_x(((Active*)get_instance(npcmayor_3950_instances))->get_x());
        ((Active*)get_instance(npcmayor_3950_instances))->restore_speed();
    }
    event_1573_82_end: ;
}
void Frames::event_func_18700()
{
    // event 1574_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1574_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1574_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (2))) goto event_1574_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (5))) goto event_1574_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1574_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1574_82_end: ;
}
void Frames::event_func_18701()
{
    // event 1575_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_army_of_shang_tu_1)) goto event_1575_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1575_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (5))) goto event_1575_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1575_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-50);
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->restore_frame();
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1575_82_end: ;
}
