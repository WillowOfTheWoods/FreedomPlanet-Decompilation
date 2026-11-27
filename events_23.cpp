#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_1918()
{
    // event 692_13
    bool or_result_692_13 = false;
    bool or_temp_result_692_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_692_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (44))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_692_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_692_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_692_13_0_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto or_event_692_13_0_end;
        or_result_692_13 = true;
        or_temp_result_692_13_0 = true;
    }
    or_event_692_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playerskincarolbike_382_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_692_13_0) {
        playerinput_19_instances.save_selection();
        playerskincarolbike_382_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
    }
    // event 692_13
    bool or_temp_result_692_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_692_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(12)) != (44))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_692_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_692_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_692_13_1_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto or_event_692_13_1_end;
        or_result_692_13 = true;
        or_temp_result_692_13_1 = true;
        or_event_692_13_1_end: ;
        if (or_temp_result_692_13_1) {
            playerinput_19_instances.save_selection();
            playerskincarolbike_382_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerothers_123_instances.save_selection();
        }
        if (!or_result_692_13) goto or_final_or_event_692_13_1_end;
        playerothers_123_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playerskincarolbike_382_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_692_13_0 || or_temp_result_692_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_692_13_0 || or_temp_result_692_13_1) {
            playerskincarolbike_382_instances.restore_selection();
        }
        if (or_temp_result_692_13_0 || or_temp_result_692_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_692_13_0 || or_temp_result_692_13_1) {
            playerothers_123_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 30);
            ((Active*)*it)->alterables->values.set(5, 2);
        }
        FrameObject * single_instance_692_13_0; single_instance_692_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskincarolbike_382_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_692_13_0 == NULL)
                    single_instance_692_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_692_13_0))->set_x_scale(0.5);
        ((Active*)((Active*)single_instance_692_13_0))->set_angle(((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->get_angle(), 0);
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1), -10));
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(12);
        }
        media.play_id(SOUND_CAROL_BIKEBOOST_2_389, -1, 1);
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_692_13_1_end: ;
}
void Frames::event_func_1919()
{
    // event 693_13
    bool or_result_693_13 = false;
    bool or_temp_result_693_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_693_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_693_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_693_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_693_13_0_end;
        or_result_693_13 = true;
        or_temp_result_693_13_0 = true;
    }
    or_event_693_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_693_13_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerothers_123_instances.save_selection();
    }
    // event 693_13
    bool or_temp_result_693_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_693_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (47))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_693_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_693_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_693_13_1_end;
        or_result_693_13 = true;
        or_temp_result_693_13_1 = true;
        or_event_693_13_1_end: ;
        if (or_temp_result_693_13_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerothers_123_instances.save_selection();
        }
        if (!or_result_693_13) goto or_final_or_event_693_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_693_13_0 || or_temp_result_693_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_693_13_0 || or_temp_result_693_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_693_13_0 || or_temp_result_693_13_1) {
            playerothers_123_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 30);
            ((Active*)*it)->alterables->values.set(5, 2);
        }
        FrameObject * single_instance_693_13_0; single_instance_693_13_0 = NULL;
        // select single: true false false
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator p_it(playerskincarolbike_382_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_693_13_0 == NULL)
                    single_instance_693_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_693_13_0))->set_x_scale(0.5);
        ((Active*)((Active*)single_instance_693_13_0))->set_angle(((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->get_angle()+90, 0);
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -8);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(12);
        }
        media.play_id(SOUND_CAROL_BIKEBOOST_2_389, -1, 1);
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    or_final_or_event_693_13_1_end: ;
}
void Frames::event_func_1920()
{
    // event 694_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_694_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (2))) goto event_694_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_max(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)-1, 0));
    }
    event_694_13_end: ;
}
void Frames::event_func_1921()
{
    // event 695_13
    bool or_result_695_13 = false;
    bool or_temp_result_695_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_695_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_695_13_0_end;
        or_result_695_13 = true;
        or_temp_result_695_13_0 = true;
    }
    or_event_695_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_695_13_0) {
        playerothers_123_instances.save_selection();
    }
    // event 695_13
    bool or_temp_result_695_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_695_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_695_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) != (47))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_695_13_1_end;
        or_result_695_13 = true;
        or_temp_result_695_13_1 = true;
        or_event_695_13_1_end: ;
        playermovementvalues_245_instances.clear_saved_selection();
        if (or_temp_result_695_13_1) {
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_695_13) goto or_final_or_event_695_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerothers_123_instances.empty_selection();
        if (or_temp_result_695_13_0 || or_temp_result_695_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_695_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, get_min(8, get_max(((Active*)*it)->alterables->values.get(1), -8)));
        }
    }
    or_final_or_event_695_13_1_end: ;
}
void Frames::event_func_1922()
{
    // event 696_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_696_13_end;
        media.set_channel_frequency(11-1, 22000+((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->alterables->values.get(0)*7000) ;
        media.set_channel_volume(10-1, 100-get_min(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->alterables->values.get(0)*20, 100));
        media.set_channel_volume(11-1, get_min(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->alterables->values.get(0)*60, 100));
    }
    event_696_13_end: ;
}
void Frames::event_func_1923()
{
    // event 697_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_697_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_697_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(13)) == (0))) goto event_697_13_end;
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
        }
    }
    event_697_13_end: ;
}
void Frames::event_func_1924()
{
    // event 700_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_700_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (4))) goto event_700_13_end;
        if (!(!media.is_sample_playing(SOUND_BIKE_SKID_162))) goto event_700_13_end;
        media.play_id(SOUND_BIKE_SKID_162, -1, 0);
    }
    event_700_13_end: ;
}
void Frames::event_func_1925()
{
    // event 701_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_701_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (4))) goto event_701_13_end;
        if (!media.is_sample_playing(SOUND_BIKE_SKID_162)) goto event_701_13_end;
        media.stop_sample(SOUND_BIKE_SKID_162);
    }
    event_701_13_end: ;
}
void Frames::event_func_1926()
{
    // event 702_13
    bool or_result_702_13 = false;
    bool or_temp_result_702_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_702_13_0_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto or_event_702_13_0_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) == (0))) goto or_event_702_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) != (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_702_13_0_end;
        or_result_702_13 = true;
        or_temp_result_702_13_0 = true;
    }
    or_event_702_13_0_end: ;
    playerothers_123_instances.clear_saved_selection();
    if (or_temp_result_702_13_0) {
        playerothers_123_instances.save_selection();
    }
    // event 702_13
    bool or_temp_result_702_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto or_event_702_13_1_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto or_event_702_13_1_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances, default_active_instance))->alterables->values.get(1))) != (0))) goto or_event_702_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) != (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) != (2))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_702_13_1_end;
        or_result_702_13 = true;
        or_temp_result_702_13_1 = true;
        or_event_702_13_1_end: ;
        if (or_temp_result_702_13_1) {
            playerothers_123_instances.save_selection();
        }
        if (!or_result_702_13) goto or_final_or_event_702_13_1_end;
        playerothers_123_instances.empty_selection();
        if (or_temp_result_702_13_0 || or_temp_result_702_13_1) {
            playerothers_123_instances.restore_selection();
        }
        FrameObject * single_instance_702_13_0; single_instance_702_13_0 = NULL;
        // select single: true false false
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator p_it(playerskincarolbike_382_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_702_13_0 == NULL)
                    single_instance_702_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_702_13_0))->get_movement()->set_speed(8);
        ((Active*)((Active*)single_instance_702_13_0))->set_direction(get_direction_int(((Active*)single_instance_702_13_0)->x, ((Active*)single_instance_702_13_0)->y, ((Active*)get_single(playerskincarolbike_382_instances))->x + 0, ((Active*)get_single(playerskincarolbike_382_instances))->y + 9));
        ((Active*)((Active*)single_instance_702_13_0))->set_direction(((Active*)single_instance_702_13_0)->get_direction()+16);
        ((Active*)((Active*)single_instance_702_13_0))->set_scale(0.7);
    }
    or_final_or_event_702_13_1_end: ;
}
void Frames::event_func_1927()
{
    // event 703_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1)) goto event_703_13_end;
        if (!((global_values->get(3)%math_helper%4) == (0))) goto event_703_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(5)) == (2))) goto event_703_13_end;
        FrameObject * single_instance_703_13_0; single_instance_703_13_0 = NULL;
        // select single: true false false
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator p_it(playerskincarolbike_382_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_703_13_0 == NULL)
                    single_instance_703_13_0 = new_obj;
            }
        }
    }
    event_703_13_end: ;
}
void Frames::event_func_1928()
{
    // event 704_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_704_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 20+((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->alterables->values.get(0));
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_704_13_end: ;
}
void Frames::event_func_1929()
{
    // event 705_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_705_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(12))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_705_13_end;
        FrameObject * single_instance_705_13_0; single_instance_705_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_705_13_0 == NULL)
                    single_instance_705_13_0 = new_obj;
            }
        }
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        ((Active*)((Active*)single_instance_705_13_0))->set_direction(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_direction()+2+((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)((Active*)single_instance_705_13_0))->force_speed(100);
        ((Active*)single_instance_705_13_0)->move_back(((Active*)get_single(playerskincarol_445_instances)));
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(8)));
            if (dyn_it == (*loops).end()) goto dynamic_705_13_1_end;
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
        dynamic_705_13_1_end: ;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 1+randrange(3));
        }
    }
    event_705_13_end: ;
}
void Frames::event_func_1930()
{
    // event 706_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_706_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_706_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
        media.play_id(SOUND_CAROL_STRIKEA_412, -1, 1);
        media.set_sample_frequency(SOUND_CAROL_STRIKEA_412, 40100+randrange(8001));
    }
    event_706_13_end: ;
}
void Frames::event_func_1931()
{
    // event 707_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_707_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_707_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
        media.play_id(SOUND_CAROL_STRIKEB_413, -1, 1);
        media.set_sample_frequency(SOUND_CAROL_STRIKEB_413, 40100+randrange(8001));
    }
    event_707_13_end: ;
}
void Frames::event_func_1932()
{
    // event 708_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_708_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(18)) == (3))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_708_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(18, 0);
        }
        media.play_id(SOUND_CAROL_STRIKEC_414, -1, 1);
        media.set_sample_frequency(SOUND_CAROL_STRIKEC_414, 40100+randrange(8001));
    }
    event_708_13_end: ;
}
void Frames::event_func_1933()
{
    // event 709_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_709_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(12))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_709_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 2);
        }
    }
    event_709_13_end: ;
}
void Frames::event_func_1934()
{
    // event 710_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_710_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(12))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_710_13_end;
        FrameObject * single_instance_710_13_0; single_instance_710_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_710_13_0 == NULL)
                    single_instance_710_13_0 = new_obj;
            }
        }
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        ((Active*)((Active*)single_instance_710_13_0))->set_direction(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_direction()-2);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_attack_68+number_to_string(randrange(8)));
            if (dyn_it == (*loops).end()) goto dynamic_710_13_1_end;
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
        dynamic_710_13_1_end: ;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->flags.disable(12);
        }
        media.play_id(SOUND_CAROL_WILDCLAW_2_416, -1, 1);
    }
    event_710_13_end: ;
}
void Frames::event_func_1935()
{
    // event 711_13
    bool or_result_711_13 = false;
    bool or_temp_result_711_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto or_event_711_13_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(25))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_711_13_0_end;
        or_result_711_13 = true;
        or_temp_result_711_13_0 = true;
    }
    or_event_711_13_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_711_13_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 711_13
    bool or_temp_result_711_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto or_event_711_13_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(26))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_711_13_1_end;
        or_result_711_13 = true;
        or_temp_result_711_13_1 = true;
    }
    or_event_711_13_1_end: ;
    if (or_temp_result_711_13_1) {
        playerskincarol_445_instances.save_selection();
    }
    // event 711_13
    bool or_temp_result_711_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto or_event_711_13_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(29))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_711_13_2_end;
        or_result_711_13 = true;
        or_temp_result_711_13_2 = true;
        or_event_711_13_2_end: ;
        if (or_temp_result_711_13_2) {
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_711_13) goto or_final_or_event_711_13_2_end;
        playerskincarol_445_instances.empty_selection();
        if (or_temp_result_711_13_0 || or_temp_result_711_13_1 || or_temp_result_711_13_2) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_711_13_2_end: ;
}
void Frames::event_func_1936()
{
    // event 712_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_712_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_712_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_712_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_712_13_end: ;
}
void Frames::event_func_1937()
{
    // event 713_13
    bool or_result_713_13 = false;
    bool or_temp_result_713_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto or_event_713_13_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_713_13_0_end;
        or_result_713_13 = true;
        or_temp_result_713_13_0 = true;
    }
    or_event_713_13_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_713_13_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 713_13
    bool or_temp_result_713_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto or_event_713_13_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(3))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_713_13_1_end;
        or_result_713_13 = true;
        or_temp_result_713_13_1 = true;
        or_event_713_13_1_end: ;
        if (or_temp_result_713_13_1) {
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_713_13) goto or_final_or_event_713_13_1_end;
        playerskincarol_445_instances.empty_selection();
        if (or_temp_result_713_13_0 || or_temp_result_713_13_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%3);
            ((Active*)*it)->alterables->flags.disable(2);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 0);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(3);
        }
    }
    or_final_or_event_713_13_1_end: ;
}
void Frames::event_func_1938()
{
    // event 714_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_714_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) >= (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_714_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11));
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 40-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)*40);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(1);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%3);
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_714_13_end: ;
}
void Frames::event_func_1939()
{
    // event 715_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1)) goto event_715_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_715_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_715_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_715_13_end: ;
}
void Frames::event_func_1940()
{
    // event 716_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_716_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 44);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(12, 0);
    }
    event_716_13_end: ;
}
void Frames::event_func_1941()
{
    // event 717_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_717_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_717_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_717_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 3));
    }
    event_717_13_end: ;
}
void Frames::event_func_1942()
{
    // event 718_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_718_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_718_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_718_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*5), 0.0));
    }
    event_718_13_end: ;
}
void Frames::event_func_1943()
{
    // event 719_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_719_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_719_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_719_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*5), 0.0));
    }
    event_719_13_end: ;
}
void Frames::event_func_1944()
{
    // event 720_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_720_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) < (20))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_720_13_end;
        if (!(!media.is_sample_playing(SOUND_CAROL_WILDKICK_415))) goto event_720_13_end;
        media.play_id(SOUND_CAROL_WILDKICK_415, -1, 1);
    }
    event_720_13_end: ;
}
void Frames::event_func_1945()
{
    // event 721_13
    bool or_result_721_13 = false;
    bool or_temp_result_721_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto or_event_721_13_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_721_13_0_end;
        or_result_721_13 = true;
        or_temp_result_721_13_0 = true;
    }
    or_event_721_13_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_721_13_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 721_13
    bool or_temp_result_721_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto or_event_721_13_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_721_13_1_end;
        or_result_721_13 = true;
        or_temp_result_721_13_1 = true;
    }
    or_event_721_13_1_end: ;
    if (or_temp_result_721_13_1) {
        playerskincarol_445_instances.save_selection();
    }
    // event 721_13
    bool or_temp_result_721_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto or_event_721_13_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_721_13_2_end;
        or_result_721_13 = true;
        or_temp_result_721_13_2 = true;
        or_event_721_13_2_end: ;
        if (or_temp_result_721_13_2) {
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_721_13) goto or_final_or_event_721_13_2_end;
        playerskincarol_445_instances.empty_selection();
        if (or_temp_result_721_13_0 || or_temp_result_721_13_1 || or_temp_result_721_13_2) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        FrameObject * single_instance_721_13_0; single_instance_721_13_0 = NULL;
        // select single: true false false
        player_389_instances.clear_selection();
        for (ObjectIterator p_it(player_389_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_721_13_0 == NULL)
                    single_instance_721_13_0 = new_obj;
            }
        }
        playeractionvaluesb_388_instances.clear_selection();
        for (ObjectIterator it(playeractionvaluesb_388_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(14, 1);
        }
        ((Active*)((Active*)single_instance_721_13_0))->set_direction(((Active*)get_single(playerskincarol_445_instances, default_active_instance))->get_direction()+2+((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(0));
        ((Active*)((Active*)single_instance_721_13_0))->force_speed(100);
        ((Active*)single_instance_721_13_0)->move_back(((Active*)get_single(playerskincarol_445_instances)));
        ((Active*)((Active*)single_instance_721_13_0))->alterables->values.set(0, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%3);
        }
    }
    or_final_or_event_721_13_2_end: ;
}
void Frames::event_func_1946()
{
    // event 722_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_722_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) != (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (5))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) != (7))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_722_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
        }
    }
    event_722_13_end: ;
}
void Frames::event_func_1947()
{
    // event 723_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_723_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) <= (20))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_723_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(10)) <= (2))) goto event_723_13_end;
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_max(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)-1.5, 0));
    }
    event_723_13_end: ;
}
void Frames::event_func_1948()
{
    // event 724_13
    bool or_result_724_13 = false;
    bool or_temp_result_724_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto or_event_724_13_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) < (20))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_724_13_0_end;
        or_result_724_13 = true;
        or_temp_result_724_13_0 = true;
    }
    or_event_724_13_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_724_13_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 724_13
    bool or_temp_result_724_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto or_event_724_13_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (20))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_724_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_724_13_1_end;
        or_result_724_13 = true;
        or_temp_result_724_13_1 = true;
    }
    or_event_724_13_1_end: ;
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_724_13_1) {
        playerinput_19_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 724_13
    bool or_temp_result_724_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto or_event_724_13_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (20))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_724_13_2_end;
        guienergy_124_instances.clear_selection();
        for (ObjectIterator it(guienergy_124_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) <= (0))) { it.deselect(); continue; }
        }
        if (!guienergy_124_instances.has_selection()) goto or_event_724_13_2_end;
        or_result_724_13 = true;
        or_temp_result_724_13_2 = true;
        or_event_724_13_2_end: ;
        guienergy_124_instances.clear_saved_selection();
        if (or_temp_result_724_13_2) {
            guienergy_124_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_724_13) goto or_final_or_event_724_13_2_end;
        playerskincarol_445_instances.empty_selection();
        guienergy_124_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_724_13_2) {
            guienergy_124_instances.restore_selection();
        }
        if (or_temp_result_724_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_724_13_0 || or_temp_result_724_13_1 || or_temp_result_724_13_2) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    or_final_or_event_724_13_2_end: ;
}
void Frames::event_func_1949()
{
    // event 725_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_725_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (20))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_725_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->alterables->values.add(11, 1);
            ((Active*)*it)->restore_frame();
        }
        media.stop_sample(SOUND_CAROL_WILDKICK_415);
    }
    event_725_13_end: ;
}
void Frames::event_func_1950()
{
    // event 726_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_726_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) > (30))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_726_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_frame();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_726_13_end: ;
}
void Frames::event_func_1951()
{
    // event 727_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1)) goto event_727_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_727_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_727_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
        {
            loop_sound_jump_running = true;
            int times = int(1);
            loop_sound_jump_index = 0;
            while (loop_sound_jump_index < times) {
                loop_sound_jump_13();
                if (!loop_sound_jump_running) break;
                loop_sound_jump_index++;
            }
        }
    }
    event_727_13_end: ;
}
void Frames::event_func_1952()
{
    // event 728_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1)) goto event_728_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 16);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(22);
        }
    }
    event_728_13_end: ;
}
void Frames::event_func_1953()
{
    // event 729_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1)) goto event_729_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_729_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) >= (0))) goto event_729_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_max(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)-(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*3), 0.0));
    }
    event_729_13_end: ;
}
void Frames::event_func_1954()
{
    // event 730_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1)) goto event_730_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_730_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) <= (0))) goto event_730_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(4)*3), 0.0));
    }
    event_730_13_end: ;
}
void Frames::event_func_1955()
{
    // event 731_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1)) goto event_731_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) < (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_731_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(18);
        }
    }
    event_731_13_end: ;
}
void Frames::event_func_1956()
{
    // event 732_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1)) goto event_732_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(18))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_732_13_end;
        media.play_id(SOUND_SPADE_DRAW_71, -1, 1);
        FrameObject * single_instance_732_13_0; single_instance_732_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerskincarol_445_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerprojectile_320(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_732_13_0 == NULL)
                    single_instance_732_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_732_13_0))->alterables->values.set(0, ((Active*)single_instance_732_13_0)->get_x());
        ((Active*)((Active*)single_instance_732_13_0))->alterables->values.set(1, ((Active*)single_instance_732_13_0)->get_y());
        ((Active*)((Active*)single_instance_732_13_0))->alterables->values.set(2, cos_deg(0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(6+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*0.5)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        ((Active*)((Active*)single_instance_732_13_0))->alterables->values.set(3, sin_deg(0-((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(6+get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))*0.5)*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16));
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(18);
        }
        ((Active*)((Active*)single_instance_732_13_0))->force_animation(8);
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.sub(0, 20);
        ((Active*)((Active*)single_instance_732_13_0))->alterables->values.set(8, 15);
    }
    event_732_13_end: ;
}
void Frames::event_func_1957()
{
    // event 733_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1)) goto event_733_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_animation_finished(22))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_733_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
    }
    event_733_13_end: ;
}
void Frames::event_func_1958()
{
    // event 734_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_734_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        ((Active*)get_instance(guienergy_124_instances))->alterables->values.set(0, get_max(((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)-0.5, 0));
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 0.2);
        }
    }
    event_734_13_end: ;
}
void Frames::event_func_1959()
{
    // event 735_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_735_13_end;
        if (!((shieldinstashield_359_instances.size()) == (0))) goto event_735_13_end;
        FrameObject * single_instance_735_13_0; single_instance_735_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldinstashield_359(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_735_13_0 == NULL)
                    single_instance_735_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_735_13_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_735_13_0))->set_direction(24);
        ((Active*)((Active*)single_instance_735_13_0))->set_angle(((Active*)get_instance(playerskincarolbike_382_instances, default_active_instance))->get_frame()*45, 0);
        ((Active*)single_instance_735_13_0)->move_back(((Active*)get_instance(playerskincarolbike_382_instances)));
    }
    event_735_13_end: ;
}
void Frames::event_func_1960()
{
    // event 736_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_736_13_end;
        if (!((((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.get(14)) < (1))) goto event_736_13_end;
        media.play_id(SOUND_JUMP_LO_232, -1, 1);
        FrameObject * single_instance_736_13_0; single_instance_736_13_0 = NULL;
        // select single: true false false
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator p_it(playerskincarolbike_382_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_736_13_0 == NULL)
                    single_instance_736_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_736_13_0))->set_x_scale(0.5);
        ((Active*)((Active*)single_instance_736_13_0))->set_angle(((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->get_angle()+45*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16), 0);
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 6);
        }
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 1);
        media.play_id(SOUND_CAROL_BIKESPIN_2_411, -1, 1);
    }
    event_736_13_end: ;
}
void Frames::event_func_1961()
{
    // event 737_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_737_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (2))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_737_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), 1-((Active*)get_single(playerskincarolbike_382_instances, default_active_instance))->alterables->values.get(1)));
    }
    event_737_13_end: ;
}
void Frames::event_func_1962()
{
    // event 738_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_738_13_end;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (-1))) { it.deselect(); continue; }
        }
        if (!playerskincarolbike_382_instances.has_selection()) goto event_738_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 3);
    }
    event_738_13_end: ;
}
void Frames::event_func_1963()
{
    // event 739_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_739_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(10)) == (1))) goto event_739_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_739_13_end: ;
}
void Frames::event_func_1964()
{
    // event 740_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_740_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_740_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 20);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
            ((Active*)*it)->alterables->flags.disable(1);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.stop_sample(SOUND_CAROL_BIKESPIN_2_411);
    }
    event_740_13_end: ;
}
void Frames::event_func_1965()
{
    // event 741_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto event_741_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_741_13_end;
        if (!((((Active*)get_instance(guienergy_124_instances))->alterables->values.get(0)) >= (20))) goto event_741_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 44);
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_kick_67+number_to_string(randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_741_13_0_end;
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
        dynamic_741_13_0_end: ;
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.stop_sample(SOUND_CAROL_BIKESPIN_2_411);
    }
    event_741_13_end: ;
}
void Frames::event_func_1966()
{
    // event 742_13
    bool or_result_742_13 = false;
    bool or_temp_result_742_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto or_event_742_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_742_13_0_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_742_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_742_13_0_end;
        playersensorrightbig_393_instances.clear_selection();
        for (ObjectIterator it(playersensorrightbig_393_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorrightbig_393_instances.has_selection()) goto or_event_742_13_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_742_13_0_end;
        or_result_742_13 = true;
        or_temp_result_742_13_0 = true;
    }
    or_event_742_13_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    playerothers_123_instances.clear_saved_selection();
    playerskincarol_445_instances.clear_saved_selection();
    playerinput_19_instances.clear_saved_selection();
    if (or_temp_result_742_13_0) {
        playersensorrightbig_393_instances.save_selection();
        playerskincarol_445_instances.save_selection();
        playerothers_123_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        playerinput_19_instances.save_selection();
    }
    // event 742_13
    bool or_temp_result_742_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1)) goto or_event_742_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_742_13_1_end;
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerothers_123_instances.has_selection()) goto or_event_742_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_742_13_1_end;
        playersensorleftbig_391_instances.clear_selection();
        for (ObjectIterator it(playersensorleftbig_391_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (1))) { it.deselect(); continue; }
        }
        if (!playersensorleftbig_391_instances.has_selection()) goto or_event_742_13_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_742_13_1_end;
        or_result_742_13 = true;
        or_temp_result_742_13_1 = true;
        or_event_742_13_1_end: ;
        playersensorleftbig_391_instances.clear_saved_selection();
        if (or_temp_result_742_13_1) {
            playerskincarol_445_instances.save_selection();
            playerothers_123_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            playerinput_19_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_742_13) goto or_final_or_event_742_13_1_end;
        playerothers_123_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorleftbig_391_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        playerskincarol_445_instances.empty_selection();
        if (or_temp_result_742_13_0) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_742_13_0 || or_temp_result_742_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_742_13_0 || or_temp_result_742_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_742_13_0 || or_temp_result_742_13_1) {
            playerskincarol_445_instances.restore_selection();
        }
        if (or_temp_result_742_13_0 || or_temp_result_742_13_1) {
            playerothers_123_instances.restore_selection();
        }
        if (or_temp_result_742_13_1) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 47);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 10);
        }
    }
    or_final_or_event_742_13_1_end: ;
}
void Frames::event_func_1967()
{
    // event 743_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_743_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, get_min(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6), 4));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(14, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 7);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(25, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(18, 1);
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
    }
    event_743_13_end: ;
}
void Frames::event_func_1968()
{
    // event 744_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_744_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_744_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_744_13_end;
        if (not_always_744_13 > loop_count) {
            not_always_744_13 = loop_count + 2;
            goto event_744_13_end;
        }
        not_always_744_13 = loop_count + 2;
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
    }
    event_744_13_end: ;
}
void Frames::event_func_1969()
{
    // event 745_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_745_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_745_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_745_13_end;
        if (not_always_745_13 > loop_count) {
            not_always_745_13 = loop_count + 2;
            goto event_745_13_end;
        }
        not_always_745_13 = loop_count + 2;
        media.play_id(SOUND_CAROL_BIKELAND_161, -1, 1);
    }
    event_745_13_end: ;
}
void Frames::event_func_1970()
{
    // event 746_13
    bool or_result_746_13 = false;
    bool or_temp_result_746_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto or_event_746_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_746_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_746_13_0_end;
        or_result_746_13 = true;
        or_temp_result_746_13_0 = true;
    }
    or_event_746_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_746_13_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 746_13
    bool or_temp_result_746_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto or_event_746_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_746_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_746_13_1_end;
        or_result_746_13 = true;
        or_temp_result_746_13_1 = true;
        or_event_746_13_1_end: ;
        if (or_temp_result_746_13_1) {
            playerinput_19_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_746_13) goto or_final_or_event_746_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_746_13_0 || or_temp_result_746_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_746_13_0 || or_temp_result_746_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, get_max(((Active*)*it)->alterables->values.get(6)-0.6, -8));
        }
    }
    or_final_or_event_746_13_1_end: ;
}
void Frames::event_func_1971()
{
    // event 747_13
    bool or_result_747_13 = false;
    bool or_temp_result_747_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto or_event_747_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(20)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_747_13_0_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_747_13_0_end;
        or_result_747_13 = true;
        or_temp_result_747_13_0 = true;
    }
    or_event_747_13_0_end: ;
    playerinput_19_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_747_13_0) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 747_13
    bool or_temp_result_747_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto or_event_747_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(20)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_747_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_747_13_1_end;
        or_result_747_13 = true;
        or_temp_result_747_13_1 = true;
    }
    or_event_747_13_1_end: ;
    if (or_temp_result_747_13_1) {
        playerinput_19_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 747_13
    bool or_temp_result_747_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto or_event_747_13_2_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_747_13_2_end;
        or_result_747_13 = true;
        or_temp_result_747_13_2 = true;
        or_event_747_13_2_end: ;
        if (or_temp_result_747_13_2) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_747_13) goto or_final_or_event_747_13_2_end;
        playermovementvalues_245_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_747_13_0 || or_temp_result_747_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_747_13_0 || or_temp_result_747_13_1 || or_temp_result_747_13_2) {
            playermovementvalues_245_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->values.set(20, 1);
        }
    }
    or_final_or_event_747_13_2_end: ;
}
void Frames::event_func_1972()
{
    // event 748_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_748_13_end;
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_y(((Active*)get_instance(playersensorleftbig_391_instances))->get_y()-12);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_y(((Active*)get_instance(playersensorrightbig_393_instances))->get_y()-12);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_x(((Active*)get_instance(playersensorleftbig_391_instances))->get_x()-2);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_x(((Active*)get_instance(playersensorrightbig_393_instances))->get_x()+2);
    }
    event_748_13_end: ;
}
void Frames::event_func_1973()
{
    // event 749_13
    bool or_result_749_13 = false;
    bool or_temp_result_749_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto or_event_749_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_749_13_0_end;
        playersensorrightbig_393_instances.clear_selection();
        for (ObjectIterator it(playersensorrightbig_393_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (0))) { it.deselect(); continue; }
        }
        if (!playersensorrightbig_393_instances.has_selection()) goto or_event_749_13_0_end;
        or_result_749_13 = true;
        or_temp_result_749_13_0 = true;
    }
    or_event_749_13_0_end: ;
    playersensorrightbig_393_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_749_13_0) {
        playersensorrightbig_393_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
    }
    // event 749_13
    bool or_temp_result_749_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto or_event_749_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(16)) == (-1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_749_13_1_end;
        playersensorleftbig_391_instances.clear_selection();
        for (ObjectIterator it(playersensorleftbig_391_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (0))) { it.deselect(); continue; }
        }
        if (!playersensorleftbig_391_instances.has_selection()) goto or_event_749_13_1_end;
        or_result_749_13 = true;
        or_temp_result_749_13_1 = true;
        or_event_749_13_1_end: ;
        playersensorleftbig_391_instances.clear_saved_selection();
        if (or_temp_result_749_13_1) {
            playermovementvalues_245_instances.save_selection();
            playersensorleftbig_391_instances.save_selection();
        }
        if (!or_result_749_13) goto or_final_or_event_749_13_1_end;
        playersensorleftbig_391_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        playersensorrightbig_393_instances.empty_selection();
        if (or_temp_result_749_13_0) {
            playersensorrightbig_393_instances.restore_selection();
        }
        if (or_temp_result_749_13_0 || or_temp_result_749_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_749_13_1) {
            playersensorleftbig_391_instances.restore_selection();
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(19, 1);
            ((Active*)*it)->alterables->values.set(20, 1);
        }
    }
    or_final_or_event_749_13_1_end: ;
}
void Frames::event_func_1974()
{
    // event 750_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_750_13_end;
        ((Active*)get_instance(playersensorleftbig_391_instances))->set_y(((Active*)get_instance(playersensorleftbig_391_instances))->get_y()+24);
        ((Active*)get_instance(playersensorrightbig_393_instances))->set_y(((Active*)get_instance(playersensorrightbig_393_instances))->get_y()+24);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_750_13_end: ;
}
void Frames::event_func_1975()
{
    // event 752_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_752_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_752_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_752_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(20)) == (1))) goto event_752_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-3);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
    }
    event_752_13_end: ;
}
void Frames::event_func_1976()
{
    // event 753_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_753_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto event_753_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_753_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(20)) == (1))) goto event_753_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*-6);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
    }
    event_753_13_end: ;
}
void Frames::event_func_1977()
{
    // event 754_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1)) goto event_754_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_754_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(20)) == (1))) goto event_754_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, (cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))-(sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, (sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.get(0))+(cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(13))*((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(13, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 1);
            group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(15, 10);
        media.play_id(SOUND_CAROL_WALLJUMP_2_117, -1, 1);
    }
    event_754_13_end: ;
}
void Frames::event_func_1978()
{
    // event 755_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_755_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) < (3))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_755_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(35);
        }
    }
    event_755_13_end: ;
}
void Frames::event_func_1979()
{
    // event 756_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_756_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (3))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_756_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 23);
    }
    event_756_13_end: ;
}
void Frames::event_func_1980()
{
    // event 757_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_757_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_757_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, (((Active*)*it)->alterables->values.get(5)-((Active*)*it)->alterables->values.get(3))*0.05);
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(6)-((Active*)*it)->alterables->values.get(4))*0.05);
            ((Active*)*it)->alterables->values.set(11, 0);
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_757_13_end: ;
}
void Frames::event_func_1981()
{
    // event 758_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_758_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_758_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (0))) goto event_758_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
    }
    event_758_13_end: ;
}
void Frames::event_func_1982()
{
    // event 759_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_759_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_759_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(7));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(8));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 3));
    }
    event_759_13_end: ;
}
void Frames::event_func_1983()
{
    // event 760_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_760_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_760_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(10);
            ((Active*)*it)->alterables->flags.disable(11);
            ((Active*)*it)->alterables->values.add(11, 1);
        }
    }
    event_760_13_end: ;
}
void Frames::event_func_1984()
{
    // event 761_13
    bool or_result_761_13 = false;
    bool or_temp_result_761_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_761_13_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_761_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) >= (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(5)-1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_761_13_0_end;
        or_result_761_13 = true;
        or_temp_result_761_13_0 = true;
    }
    or_event_761_13_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_761_13_0) {
        playermovementvalues_245_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 761_13
    bool or_temp_result_761_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_761_13_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_761_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(23)) <= (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(5)+1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_761_13_1_end;
        or_result_761_13 = true;
        or_temp_result_761_13_1 = true;
    }
    or_event_761_13_1_end: ;
    if (or_temp_result_761_13_1) {
        playermovementvalues_245_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 761_13
    bool or_temp_result_761_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_761_13_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_761_13_2_end;
        or_result_761_13 = true;
        or_temp_result_761_13_2 = true;
        or_event_761_13_2_end: ;
        if (or_temp_result_761_13_2) {
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_761_13) goto or_final_or_event_761_13_2_end;
        playerskincarol_445_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_761_13_0 || or_temp_result_761_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_761_13_0 || or_temp_result_761_13_1 || or_temp_result_761_13_2) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(10);
        }
    }
    or_final_or_event_761_13_2_end: ;
}
void Frames::event_func_1985()
{
    // event 762_13
    bool or_result_762_13 = false;
    bool or_temp_result_762_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_762_13_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_762_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) >= (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(6)-1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_762_13_0_end;
        or_result_762_13 = true;
        or_temp_result_762_13_0 = true;
    }
    or_event_762_13_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_762_13_0) {
        playermovementvalues_245_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 762_13
    bool or_temp_result_762_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_762_13_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) < (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_762_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(24)) <= (((Active*)get_single(playerskincarol_445_instances, default_active_instance))->alterables->values.get(6)+1))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_762_13_1_end;
        or_result_762_13 = true;
        or_temp_result_762_13_1 = true;
    }
    or_event_762_13_1_end: ;
    if (or_temp_result_762_13_1) {
        playermovementvalues_245_instances.save_selection();
        playerskincarol_445_instances.save_selection();
    }
    // event 762_13
    bool or_temp_result_762_13_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_762_13_2_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_762_13_2_end;
        or_result_762_13 = true;
        or_temp_result_762_13_2 = true;
        or_event_762_13_2_end: ;
        if (or_temp_result_762_13_2) {
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_762_13) goto or_final_or_event_762_13_2_end;
        playerskincarol_445_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_762_13_0 || or_temp_result_762_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_762_13_0 || or_temp_result_762_13_1 || or_temp_result_762_13_2) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    or_final_or_event_762_13_2_end: ;
}
void Frames::event_func_1986()
{
    // event 763_13
    bool or_result_763_13 = false;
    bool or_temp_result_763_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_763_13_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(10))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(11))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_763_13_0_end;
        or_result_763_13 = true;
        or_temp_result_763_13_0 = true;
    }
    or_event_763_13_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_763_13_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 763_13
    bool or_temp_result_763_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_763_13_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) > (20))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_763_13_1_end;
        or_result_763_13 = true;
        or_temp_result_763_13_1 = true;
        or_event_763_13_1_end: ;
        if (or_temp_result_763_13_1) {
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_763_13) goto or_final_or_event_763_13_1_end;
        playerskincarol_445_instances.empty_selection();
        if (or_temp_result_763_13_0 || or_temp_result_763_13_1) {
            playerskincarol_445_instances.restore_selection();
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(playerskincarol_445_instances, it.current_index, default_active_instance))->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(24, ((Active*)get_single(playerskincarol_445_instances, it.current_index, default_active_instance))->alterables->values.get(6));
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        media.play_id(SOUND_CAROL_WALL_2_33, -1, 1);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.toggle(8);
            ((Active*)*it)->alterables->flags.disable(10);
            ((Active*)*it)->alterables->flags.disable(11);
        }
    }
    or_final_or_event_763_13_1_end: ;
}
void Frames::event_func_1987()
{
    // event 764_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_764_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_764_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (25))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(10)) != (1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_764_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_764_13_end: ;
}
void Frames::event_func_1988()
{
    // event 765_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_765_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (3))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_765_13_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, 1);
        }
    }
    event_765_13_end: ;
}
void Frames::event_func_1989()
{
    // event 766_13
    bool or_result_766_13 = false;
    bool or_temp_result_766_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_766_13_0_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) > (25))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_766_13_0_end;
        or_result_766_13 = true;
        or_temp_result_766_13_0 = true;
    }
    or_event_766_13_0_end: ;
    playerskincarol_445_instances.clear_saved_selection();
    if (or_temp_result_766_13_0) {
        playerskincarol_445_instances.save_selection();
    }
    // event 766_13
    bool or_temp_result_766_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto or_event_766_13_1_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (3))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto or_event_766_13_1_end;
        playerinput_19_instances.clear_selection();
        for (ObjectIterator it(playerinput_19_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(11)) == (1))) { it.deselect(); continue; }
        }
        if (!playerinput_19_instances.has_selection()) goto or_event_766_13_1_end;
        or_result_766_13 = true;
        or_temp_result_766_13_1 = true;
        or_event_766_13_1_end: ;
        playerinput_19_instances.clear_saved_selection();
        if (or_temp_result_766_13_1) {
            playerinput_19_instances.save_selection();
            playerskincarol_445_instances.save_selection();
        }
        if (!or_result_766_13) goto or_final_or_event_766_13_1_end;
        playerskincarol_445_instances.empty_selection();
        playerinput_19_instances.empty_selection();
        if (or_temp_result_766_13_1) {
            playerinput_19_instances.restore_selection();
        }
        if (or_temp_result_766_13_0 || or_temp_result_766_13_1) {
            playerskincarol_445_instances.restore_selection();
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(9, -1);
        }
        playerothers_123_instances.clear_selection();
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, 40);
        }
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(13, 0);
            ((Active*)*it)->alterables->values.set(14, 0);
        }
        for (ObjectIterator it(playerothers_123_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(25, 0);
        }
    }
    or_final_or_event_766_13_1_end: ;
}
void Frames::event_func_1990()
{
    // event 767_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1)) goto event_767_13_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(9)) == (-1))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_767_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 1);
    }
    event_767_13_end: ;
}
void Frames::event_func_1991()
{
    // event 768_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_768_13_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_direction(4);
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_frame(0+(global_values->get(3)/math_helper/4)%math_helper%2);
    }
    event_768_13_end: ;
}
void Frames::event_func_1992()
{
    // event 769_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_769_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_769_13_end;
        playersensorbottombig_397_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, qualifier_19)) goto event_769_13_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_direction(4);
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_frame(2+(global_values->get(3)/math_helper/4)%math_helper%2);
    }
    event_769_13_end: ;
}
void Frames::event_func_1993()
{
    // event 770_13
    bool or_result_770_13 = false;
    bool or_temp_result_770_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_770_13_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_770_13_0_end;
        or_result_770_13 = true;
        or_temp_result_770_13_0 = true;
    }
    or_event_770_13_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_770_13_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 770_13
    bool or_temp_result_770_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_770_13_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_770_13_1_end;
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto or_event_770_13_1_end;
        or_result_770_13 = true;
        or_temp_result_770_13_1 = true;
        or_event_770_13_1_end: ;
        playerreflect_447_instances.clear_saved_selection();
        if (or_temp_result_770_13_1) {
            playerskinmilla_446_instances.save_selection();
            playerreflect_447_instances.save_selection();
        }
        if (!or_result_770_13) goto or_final_or_event_770_13_1_end;
        playerskinmilla_446_instances.empty_selection();
        playerreflect_447_instances.empty_selection();
        if (or_temp_result_770_13_0 || or_temp_result_770_13_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_770_13_1) {
            playerreflect_447_instances.restore_selection();
        }
        guiscoretimerings_451_instances.clear_selection();
        for (ObjectIterator it(guiscoretimerings_451_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->force_frame(4+(global_values->get(3)/math_helper/4)%math_helper%2);
        }
    }
    or_final_or_event_770_13_1_end: ;
}
void Frames::event_func_1994()
{
    // event 771_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_771_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_771_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_771_13_end;
        ((Active*)get_instance(guiscoretimerings_451_instances))->set_direction(4);
        ((Active*)get_instance(guiscoretimerings_451_instances))->force_frame(8+(global_values->get(3)/math_helper/4)%math_helper%2);
    }
    event_771_13_end: ;
}
void Frames::event_func_1995()
{
    // event 772_13
    bool or_result_772_13 = false;
    bool or_temp_result_772_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_772_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (3))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_772_13_0_end;
        or_result_772_13 = true;
        or_temp_result_772_13_0 = true;
    }
    or_event_772_13_0_end: ;
    playermovementvalues_245_instances.clear_saved_selection();
    if (or_temp_result_772_13_0) {
        playermovementvalues_245_instances.save_selection();
    }
    // event 772_13
    bool or_temp_result_772_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_772_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (27))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_772_13_1_end;
        or_result_772_13 = true;
        or_temp_result_772_13_1 = true;
        or_event_772_13_1_end: ;
        if (or_temp_result_772_13_1) {
            playermovementvalues_245_instances.save_selection();
        }
        if (!or_result_772_13) goto or_final_or_event_772_13_1_end;
        playermovementvalues_245_instances.empty_selection();
        if (or_temp_result_772_13_0 || or_temp_result_772_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        guiscoretimerings_451_instances.clear_selection();
        for (ObjectIterator it(guiscoretimerings_451_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(4);
            ((Active*)*it)->force_frame(6+(global_values->get(3)/math_helper/4)%math_helper%2);
        }
    }
    or_final_or_event_772_13_1_end: ;
}
void Frames::event_func_1996()
{
    // event 773_13
    bool or_result_773_13 = false;
    bool or_temp_result_773_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_773_13_0_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) <= (5))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_773_13_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_773_13_0_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_19)) goto or_event_773_13_0_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_773_13_0_end;
        FrameObject * single_instance_773_13_0; single_instance_773_13_0 = pick_random(qualifier_19);
        if (single_instance_773_13_0 == NULL) goto or_event_773_13_0_end;
        or_result_773_13 = true;
        or_temp_result_773_13_0 = true;
    }
    or_event_773_13_0_end: ;
    playersensortopbig_395_instances.clear_saved_selection();
    playerskinmilla_446_instances.clear_saved_selection();
    playermovementvalues_245_instances.clear_saved_selection();
    qualifier_19.clear_saved_selection();
    if (or_temp_result_773_13_0) {
        playersensortopbig_395_instances.save_selection();
        playerskinmilla_446_instances.save_selection();
        playermovementvalues_245_instances.save_selection();
        qualifier_19.save_selection();
    }
    // event 773_13
    bool or_temp_result_773_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_773_13_1_end;
        playermovementvalues_245_instances.clear_selection();
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (30))) { it.deselect(); continue; }
        }
        if (!playermovementvalues_245_instances.has_selection()) goto or_event_773_13_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) != (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_773_13_1_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_19)) goto or_event_773_13_1_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_773_13_1_end;
        FrameObject * single_instance_773_13_0; single_instance_773_13_0 = pick_random(qualifier_19);
        if (single_instance_773_13_0 == NULL) goto or_event_773_13_1_end;
        or_result_773_13 = true;
        or_temp_result_773_13_1 = true;
        or_event_773_13_1_end: ;
        if (or_temp_result_773_13_1) {
            playersensortopbig_395_instances.save_selection();
            playerskinmilla_446_instances.save_selection();
            playermovementvalues_245_instances.save_selection();
            qualifier_19.save_selection();
        }
        if (!or_result_773_13) goto or_final_or_event_773_13_1_end;
        playerskinmilla_446_instances.empty_selection();
        playersensortopbig_395_instances.empty_selection();
        playermovementvalues_245_instances.empty_selection();
        qualifier_19.empty_selection();
        if (or_temp_result_773_13_0 || or_temp_result_773_13_1) {
            playersensortopbig_395_instances.restore_selection();
        }
        if (or_temp_result_773_13_0 || or_temp_result_773_13_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        if (or_temp_result_773_13_0 || or_temp_result_773_13_1) {
            playermovementvalues_245_instances.restore_selection();
        }
        if (or_temp_result_773_13_0 || or_temp_result_773_13_1) {
            qualifier_19.restore_selection();
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 1);
        }
        for (ObjectIterator it(playermovementvalues_245_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 30);
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        playerreflect_447_instances.clear_selection();
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->set_visible(false);
        }
    }
    or_final_or_event_773_13_1_end: ;
}
void Frames::event_func_1997()
{
    // event 774_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_774_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_774_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_774_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 30);
    }
    event_774_13_end: ;
}
void Frames::event_func_1998()
{
    // event 775_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_775_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (1))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_775_13_end;
        {
            for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
            qualifier_19.clear_selection();
            for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_x(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_x()+sin_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-31+cos_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-16);
            ((Active*)*it)->set_y(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_action_y()+cos_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*-31+sin_deg(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle())*16);
            ((Active*)*it)->set_angle(((Active*)get_single(playerskinmilla_446_instances, it.current_index, default_active_instance))->get_angle(), 0);
        }
        {
            ObjectIterator other_it(playerskinmilla_446_instances);
            for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
                if (other_it.end()) goto action_775_13_0_end;
                ((Active*)*it)->move_front(*other_it);
                ++other_it;
            }
        }
        action_775_13_0_end: ;
    }
    event_775_13_end: ;
}
void Frames::event_func_1999()
{
    // event 776_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_776_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_776_13_end;
        {
            qualifier_19.clear_selection();
            for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
                if (!((*it)->alterables->flags.is_on(2))) it.deselect();
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(2);
            ((Active*)*it)->alterables->values.set(0, 2);
        }
    }
    event_776_13_end: ;
}
void Frames::event_func_2000()
{
    // event 777_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_777_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_777_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        {
            FrameObject * parent = ((Active*)get_instance(playerstartingpoint_358_instances));
            if (parent == NULL) goto pos_end_777_13_0;
            ((Active*)get_instance(playerreflect_447_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_777_13_0: ;
        }
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(23, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(24, 0);
    }
    event_777_13_end: ;
}
void Frames::event_func_2001()
{
    // event 778_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_778_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_778_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_778_13_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_778_13_end: ;
}
void Frames::event_func_2002()
{
    // event 779_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_779_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_779_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_779_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(7);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
        ((Active*)get_instance(playerreflect_447_instances))->set_x(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_action_x()+sin_deg(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_angle())*-15);
        ((Active*)get_instance(playerreflect_447_instances))->set_y(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_action_y()+cos_deg(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_angle())*-15);
        ((Active*)get_instance(playerreflect_447_instances))->set_angle(((Active*)get_single(playerskinmilla_446_instances, default_active_instance))->get_angle(), 0);
    }
    event_779_13_end: ;
}
void Frames::event_func_2003()
{
    // event 780_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_780_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) == (40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_780_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (0))) goto event_780_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(0);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(10);
        media.play_id(SOUND_MILLA_BLOCKSUMMON_417, -1, 1);
        media.stop_sample(SOUND_MILLA_BLOCKCHARGE_424);
    }
    event_780_13_end: ;
}
void Frames::event_func_2004()
{
    // event 781_13
    bool or_result_781_13 = false;
    bool or_temp_result_781_13_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_781_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (30))) goto or_event_781_13_0_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_781_13_0_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(5)) == (0))) goto or_event_781_13_0_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_781_13_0_end;
        or_result_781_13 = true;
        or_temp_result_781_13_0 = true;
    }
    or_event_781_13_0_end: ;
    playerskinmilla_446_instances.clear_saved_selection();
    if (or_temp_result_781_13_0) {
        playerskinmilla_446_instances.save_selection();
    }
    // event 781_13
    bool or_temp_result_781_13_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto or_event_781_13_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (30))) goto or_event_781_13_1_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (2))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_781_13_1_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto or_event_781_13_1_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) < (40))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto or_event_781_13_1_end;
        or_result_781_13 = true;
        or_temp_result_781_13_1 = true;
        or_event_781_13_1_end: ;
        if (or_temp_result_781_13_1) {
            playerskinmilla_446_instances.save_selection();
        }
        if (!or_result_781_13) goto or_final_or_event_781_13_1_end;
        playerskinmilla_446_instances.clear_selection();
        if (or_temp_result_781_13_0 || or_temp_result_781_13_1) {
            playerskinmilla_446_instances.restore_selection();
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, 0);
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(2, 5);
    }
    or_final_or_event_781_13_1_end: ;
}
void Frames::event_func_2005()
{
    // event 782_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_782_13_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) == (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_782_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (1))) goto event_782_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 2);
    }
    event_782_13_end: ;
}
void Frames::event_func_2006()
{
    // event 783_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_783_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (1))) goto event_783_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
        ((Active*)get_instance(playerreflect_447_instances))->set_x(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_action_x()+sin_deg(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_angle())*-15);
        ((Active*)get_instance(playerreflect_447_instances))->set_y(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_action_y()+cos_deg(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_angle())*-15);
        ((Active*)get_instance(playerreflect_447_instances))->set_angle(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_angle(), 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(23, cos_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*3));
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(24, 0-sin_deg(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14))*(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(16)*3));
    }
    event_783_13_end: ;
}
void Frames::event_func_2007()
{
    // event 784_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_784_13_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(14)) == (1))) goto event_784_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_784_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (1))) goto event_784_13_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 31);
        ((Active*)get_instance(playerreflect_447_instances))->force_frame(0);
        ((Active*)get_instance(playerreflect_447_instances))->restore_frame();
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(3, ((Active*)get_instance(playerreflect_447_instances))->get_x());
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(4, ((Active*)get_instance(playerreflect_447_instances))->get_y());
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(2);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        media.play_id(SOUND_MILLA_BARRIERSUPER_2_423, -1, 1);
    }
    event_784_13_end: ;
}
void Frames::event_func_2008()
{
    // event 785_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_785_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (2))) goto event_785_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->set_x(((Active*)get_instance(playerreflect_447_instances))->get_x()+((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(23));
        ((Active*)get_instance(playerreflect_447_instances))->set_y(((Active*)get_instance(playerreflect_447_instances))->get_y()+((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(24));
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(24, get_min(((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(24)+0.25, 15));
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(true);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(0);
    }
    event_785_13_end: ;
}
void Frames::event_func_2009()
{
    // event 786_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_786_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (2))) goto event_786_13_end;
        if (!(((Active*)get_instance(playerreflect_447_instances))->outside_playfield())) goto event_786_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
    }
    event_786_13_end: ;
}
void Frames::event_func_2010()
{
    // event 788_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_788_13_end;
        playerreflect_447_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(playerreflect_447_instances, qualifier_20)) goto event_788_13_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!playerreflect_447_instances.has_selection()) goto event_788_13_end;
        for (ObjectIterator it(playerreflect_447_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 3);
        }
        FrameObject * single_instance_788_13_0; single_instance_788_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(playerreflect_447_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_788_13_0 == NULL)
                    single_instance_788_13_0 = new_obj;
            }
        }
    }
    event_788_13_end: ;
}
void Frames::event_func_2011()
{
    // event 789_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_789_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_789_13_end;
        if (not_always_789_13 > loop_count) {
            not_always_789_13 = loop_count + 2;
            goto event_789_13_end;
        }
        not_always_789_13 = loop_count + 2;
        media.play_id(SOUND_MILLA_BLOCKBREAK_418, -1, 1);
    }
    event_789_13_end: ;
}
void Frames::event_func_2012()
{
    // event 790_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_790_13_end;
        if (!((global_values->get(3)%math_helper%5) == (0))) goto event_790_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_790_13_end;
        FrameObject * single_instance_790_13_0; single_instance_790_13_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerreflect_447_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_790_13_0 == NULL)
                    single_instance_790_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_790_13_0))->set_scale(0.5);
        ((Active*)((Active*)single_instance_790_13_0))->set_x(((Active*)single_instance_790_13_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_790_13_0))->set_y(((Active*)single_instance_790_13_0)->get_y()-10+randrange(21));
    }
    event_790_13_end: ;
}
void Frames::event_func_2013()
{
    // event 791_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_791_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_791_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.add(5, 1);
        ((Active*)get_instance(playerreflect_447_instances))->set_visible(false);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(9);
    }
    event_791_13_end: ;
}
void Frames::event_func_2014()
{
    // event 792_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_792_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (3))) goto event_792_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(5)) > (20))) goto event_792_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(0);
    }
    event_792_13_end: ;
}
void Frames::event_func_2015()
{
    // event 793_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_793_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_793_13_end;
        if (((Active*)get_instance(playerreflect_447_instances))->test_animation(2)) goto event_793_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(11);
    }
    event_793_13_end: ;
}
void Frames::event_func_2016()
{
    // event 794_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_794_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (4))) goto event_794_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (31))) goto event_794_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 0);
    }
    event_794_13_end: ;
}
void Frames::event_func_2017()
{
    // event 795_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1)) goto event_795_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_795_13_end;
        if (((Active*)get_instance(playerreflect_447_instances))->test_animation(5)) goto event_795_13_end;
        ((Active*)get_instance(playerreflect_447_instances))->force_animation(8);
    }
    event_795_13_end: ;
}
